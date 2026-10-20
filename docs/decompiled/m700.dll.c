// Decompiled with Ghidra from m700.dll
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
  
  DAT_1008_07b4 = 0x1008;
  uVar3 = unaff_CS;
  DAT_1008_07b2 = unaff_DI;
  DAT_1008_07b6 = in_CX;
  DAT_1008_07b8 = in_BX;
  DAT_1008_07ba = unaff_SI;
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
  DAT_1008_07f0 = CONCAT11((char)uVar3,(char)((uint)uVar3 >> 8));
  if ((DAT_1000_0010 & 1) == 0) {
    pcVar1 = (code *)swi(0x21);
    DAT_1008_07f4 = (*pcVar1)();
  }
  else {
    uVar4 = 0x1000;
    DAT_1008_07f4 = DOS3CALL(0x1000);
  }
  DAT_1008_07f2 = CONCAT11((char)DAT_1008_07f4,(char)((uint)DAT_1008_07f4 >> 8));
  if ((DAT_1000_0010 & 1) == 0) {
    DAT_1008_07f7 = 0;
  }
  FUN_1000_01d8(uVar4);
  FUN_1000_02e0();
  DAT_1008_07bc = DAT_1008_07bc + '\x01';
  FUN_1000_01ac(DAT_1008_0810,DAT_1008_0812,DAT_1008_0814,DAT_1008_0816,DAT_1008_0818);
  return;
}


// ---- FUN_1000_00f6 @ 1000:00f6

undefined2 __stdcall16far FUN_1000_00f6(void)

{
  return 1;
}


// ---- FUN_1000_0126 @ 1000:0126

uint __cdecl16far FUN_1000_0126(void)

{
  long lVar1;
  
  lVar1 = FUN_1000_0378(DAT_1008_07c6,DAT_1008_07c8,0x43fd,3);
  DAT_1008_07c8 = (uint)((ulong)(lVar1 + 0x269ec3) >> 0x10);
  DAT_1008_07c6 = (int)(lVar1 + 0x269ec3);
  return DAT_1008_07c8 & 0x7fff;
}


// ---- FUN_1000_015a @ 1000:015a

undefined2 __cdecl16far FUN_1000_015a(void)

{
  longdouble in_ST0;
  undefined2 local_10;
  
  local_10 = (undefined2)(sqword)ROUND(in_ST0);
  return local_10;
}


// ---- FUN_1000_01ac @ 1000:01ac

void __cdecl16far FUN_1000_01ac(void)

{
  FUN_1000_1e10(DAT_1008_07b8,DAT_1008_07ba,DAT_1008_07b6,DAT_1008_07b4,DAT_1008_07b2);
  return;
}


// ---- FUN_1000_01d8 @ 1000:01d8

void __cdecl16far FUN_1000_01d8(void)

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
  if (DAT_1008_09e8 != 0) {
    bVar5 = false;
    (*DAT_1008_09e6)();
    if (bVar5) {
      do {
        uVar6 = 2;
        uVar7 = 2;
        FUN_1000_02bc(2,2);
        FUN_1000_0a75(uVar7);
        pcVar2 = (char *)FUN_1000_0a3e(uVar6);
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
  FUN_1000_02a8(uVar7,iVar3);
  FUN_1000_02a8();
  FUN_1000_02a8();
  return;
}


// ---- FUN_1000_0220 @ 1000:0220

undefined2 __cdecl16far FUN_1000_0220(void)

{
  DAT_1008_0821 = 1;
  FUN_1000_02a8();
  FUN_1000_02a8();
  FUN_1000_02a8();
  FUN_1000_02a8();
  FUN_1000_14b2();
  FUN_1000_0b1c();
  return 0x100;
}


// ---- FUN_1000_02a8 @ 1000:02a8

void __cdecl16near FUN_1000_02a8(void)

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


// ---- FUN_1000_02bc @ 1000:02bc

void __cdecl16far FUN_1000_02bc(void)

{
  FUN_1000_0a75(0xfc);
  FUN_1000_0a75(0xff);
  return;
}


// ---- FUN_1000_02e0 @ 1000:02e0

void __cdecl16far FUN_1000_02e0(void)

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
  pcVar11 = (char *)FUN_1000_0ade();
  uVar5 = (undefined2)((ulong)pcVar11 >> 0x10);
  pcVar9 = (char *)pcVar11;
  puVar12 = (undefined2 *)FUN_1000_0ade();
  uVar6 = (undefined2)((ulong)puVar12 >> 0x10);
  DAT_1008_0816 = (undefined2 *)puVar12;
  pcVar8 = (char *)0x0;
  for (; DAT_1008_0818 = (undefined2)((ulong)puVar12 >> 0x10), puVar2 = (undefined2 *)puVar12,
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
      puVar12 = (undefined2 *)CONCAT22(DAT_1008_0818,puVar2 + 2);
    } while (cVar1 != '\0');
  }
  *puVar2 = 0;
  puVar2[1] = 0;
  return;
}


// ---- FUN_1000_0378 @ 1000:0378

long __stdcall16far FUN_1000_0378(uint param_1,int param_2,uint param_3,int param_4)

{
  if (param_4 == 0 && param_2 == 0) {
    return (ulong)param_1 * (ulong)param_3;
  }
  return CONCAT22((int)((ulong)param_1 * (ulong)param_3 >> 0x10) +
                  param_2 * param_3 + param_1 * param_4,(int)((ulong)param_1 * (ulong)param_3));
}


// ---- FUN_1000_03aa @ 1000:03aa

void __cdecl16far FUN_1000_03aa(char *param_1)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  undefined2 uVar4;
  char local_6;
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  if ((*(byte *)(*param_1 + 0x855) & 1) == 0) {
    iVar3 = (int)*param_1;
  }
  else {
    iVar3 = *param_1 + 0x20;
  }
  if (iVar3 != 0x65) {
    do {
      pcVar1 = (char *)param_1 + 1;
      param_1 = (char *)ZEXT24(pcVar1);
    } while ((*(byte *)(*pcVar1 + 0x855) & 4) != 0);
  }
  local_6 = *(char *)param_1;
  *(char *)param_1 = '.';
  do {
    param_1._0_2_ = (char *)param_1 + 1;
    cVar2 = *(char *)param_1;
    *(char *)param_1 = local_6;
    local_6 = cVar2;
  } while (*(char *)param_1 != '\0');
  return;
}


// ---- FUN_1000_0420 @ 1000:0420

undefined2 __cdecl16far FUN_1000_0420(char *param_1)

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


// ---- FUN_1000_04a4 @ 1000:04a4

bool __cdecl16far FUN_1000_04a4(double *param_1)

{
  return DAT_1008_0a72 <= *param_1;
}


// ---- FUN_1000_04dc @ 1000:04dc

void __cdecl16far FUN_1000_04dc(int param_1,float *param_2,undefined2 param_3,undefined2 param_4)

{
  undefined2 *puVar1;
  double *pdVar2;
  undefined2 in_DX;
  float *pfVar3;
  undefined2 uVar4;
  
  if (param_1 == 0) {
    pdVar2 = (double *)FUN_1000_0b1e(param_3,param_4);
    *param_2 = (float)*pdVar2;
  }
  else {
    puVar1 = (undefined2 *)FUN_1000_0b1e(param_3,param_4);
    uVar4 = (undefined2)((ulong)param_2 >> 0x10);
    pfVar3 = (float *)param_2;
    *(undefined2 *)param_2 = *puVar1;
    *(undefined2 *)((int)pfVar3 + 2) = puVar1[1];
    *(undefined2 *)(pfVar3 + 1) = puVar1[2];
    *(undefined2 *)((int)pfVar3 + 6) = puVar1[3];
  }
  return;
}


// ---- FUN_1000_0534 @ 1000:0534

undefined1 * __cdecl16far
FUN_1000_0534(undefined2 *param_1,undefined1 *param_2,undefined2 param_3,int param_4,int param_5)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined2 in_DX;
  undefined2 *puVar3;
  int iVar4;
  undefined2 uVar5;
  undefined4 local_c;
  undefined4 local_8;
  
  if (DAT_1008_0848 == '\0') {
    uVar5 = (undefined2)((ulong)param_1 >> 0x10);
    puVar3 = (undefined2 *)param_1;
    piVar1 = (int *)FUN_1000_0d92(*param_1,puVar3[1],puVar3[2],puVar3[3]);
    local_8 = (int *)CONCAT22(in_DX,piVar1);
    FUN_1000_0b7c(param_2 + (uint)(0 < param_4) + (uint)(*local_8 == 0x2d),param_3,param_4 + 1,
                  piVar1,in_DX);
  }
  else {
    local_8 = (int *)CONCAT22(DAT_1008_0df4,DAT_1008_0df2);
    FUN_1000_09e6(0 < param_4,param_2 + (*DAT_1008_0df2 == 0x2d),param_3);
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
           FUN_1000_0c44((undefined1 *)local_c + param_4 + (uint)(DAT_1008_0848 == '\0'),
                         local_c._2_2_,0x84d,0x1008);
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


// ---- FUN_1000_06cc @ 1000:06cc

void __cdecl16far
FUN_1000_06cc(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5,undefined2 param_6)

{
  DAT_1008_0848 = 1;
  FUN_1000_0534(param_1,param_2,param_3,param_4,param_5,param_6);
  DAT_1008_0848 = 0;
  return;
}


// ---- FUN_1000_0700 @ 1000:0700

undefined1 * __cdecl16far
FUN_1000_0700(undefined2 *param_1,undefined1 *param_2,undefined2 param_3,int param_4)

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
  
  iVar3 = DAT_1008_084a;
  if (DAT_1008_0848 == '\0') {
    uVar6 = (undefined2)((ulong)param_1 >> 0x10);
    puVar4 = (undefined2 *)param_1;
    piVar5 = (int *)FUN_1000_0d92(*param_1,puVar4[1],puVar4[2],puVar4[3]);
    local_8 = (int *)CONCAT22(in_DX,piVar5);
    FUN_1000_0b7c(param_2 + (*local_8 == 0x2d),param_3,piVar5[1] + param_4,piVar5,in_DX);
  }
  else {
    local_8 = (int *)CONCAT22(DAT_1008_0df4,DAT_1008_0df2);
    iVar1 = *DAT_1008_0df2;
    if (param_4 == DAT_1008_084a) {
      param_2[DAT_1008_084a + (uint)(iVar1 == 0x2d)] = 0x30;
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
    FUN_1000_09e6(1,puVar2,param_3);
    puVar2 = puVar2 + 1;
    *local_c = 0x30;
  }
  else {
    puVar2 = puVar2 + piVar5[1];
  }
  local_c = (undefined1 *)CONCAT22(param_3,puVar2);
  if (0 < param_4) {
    FUN_1000_09e6(1,puVar2,param_3);
    *local_c = 0x2e;
    if (piVar5[1] < 0) {
      if (DAT_1008_0848 == '\0') {
        iVar3 = -piVar5[1];
        if (-param_4 != piVar5[1] && param_4 <= iVar3) {
          iVar3 = param_4;
        }
      }
      else {
        iVar3 = -piVar5[1];
      }
      FUN_1000_09e6(iVar3,puVar2 + 1,param_3);
      FUN_1000_0c80(puVar2 + 1,param_3,0x30,iVar3);
    }
  }
  return param_2;
}


// ---- FUN_1000_0866 @ 1000:0866

void __cdecl16far
FUN_1000_0866(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5)

{
  DAT_1008_0848 = 1;
  FUN_1000_0700(param_1,param_2,param_3,param_4,param_5);
  DAT_1008_0848 = 0;
  return;
}


// ---- FUN_1000_0898 @ 1000:0898

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far
FUN_1000_0898(undefined2 *param_1,int param_2,undefined2 param_3,int param_4,undefined2 param_5)

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
  piVar2 = (int *)FUN_1000_0d92(*param_1,puVar5[1],puVar5[2],puVar5[3]);
  _DAT_1008_0df2 = (int *)CONCAT22(in_DX,piVar2);
  DAT_1008_084a = piVar2[1] + -1;
  pcVar3 = (char *)((uint)(*_DAT_1008_0df2 == 0x2d) + param_2);
  local_8 = (char *)CONCAT22(param_3,pcVar3);
  FUN_1000_0b7c(pcVar3,param_3,param_4,piVar2,in_DX);
  iVar4 = ((int *)_DAT_1008_0df2)[1] + -1;
  DAT_1008_084c = DAT_1008_084a < iVar4;
  DAT_1008_084a = iVar4;
  if ((iVar4 < -4) || (param_4 <= iVar4)) {
    FUN_1000_06cc(puVar5,uVar6,param_2,param_3,param_4,param_5);
  }
  else {
    if ((bool)DAT_1008_084c) {
      do {
        pcVar1 = local_8;
        uVar7 = (undefined2)((ulong)local_8 >> 0x10);
        pcVar3 = (char *)local_8;
        local_8 = (char *)CONCAT22(uVar7,(char *)local_8 + 1);
      } while (*pcVar1 != '\0');
      pcVar3[-1] = '\0';
    }
    FUN_1000_0866(puVar5,uVar6,param_2,param_3,param_4);
  }
  return;
}


// ---- FUN_1000_0978 @ 1000:0978

void __cdecl16far
FUN_1000_0978(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             int param_5,undefined2 param_6,undefined2 param_7)

{
  int unaff_BP;
  
  if ((param_5 == 0x65) || (param_5 == 0x45)) {
    FUN_1000_0534(param_1,param_2,param_3,param_4,param_6,param_7);
  }
  else if (param_5 == 0x66) {
    FUN_1000_0700(param_1,param_2,param_3,param_4,param_6);
  }
  else {
    FUN_1000_0898(param_1,param_2,param_3,param_4,param_6,param_7,0x1008,unaff_BP + 1);
  }
  return;
}


// ---- FUN_1000_09e6 @ 1000:09e6

void FUN_1000_09e6(int param_1,int param_2,undefined2 param_3)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = FUN_1000_0c2a(param_2,param_3);
    FUN_1000_0cc8(param_2 + param_1,param_3,param_2,param_3,iVar1 + 1);
  }
  return;
}


// ---- FUN_1000_0a3e @ 1000:0a3e

int * __stdcall16far FUN_1000_0a3e(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  piVar3 = (int *)&DAT_1008_0a82;
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


// ---- FUN_1000_0a75 @ 1000:0a75

undefined2 __stdcall16far FUN_1000_0a75(void)

{
  return 0x1008;
}


// ---- FUN_1000_0a96 @ 1000:0a96

void FUN_1000_0a96(void)

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
    FUN_1000_02bc(in_AX,in_AX);
    FUN_1000_0a75(in_AX);
    pcVar2 = (char *)FUN_1000_0a3e(uVar5);
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


// ---- FUN_1000_0ade @ 1000:0ade

void __cdecl16near FUN_1000_0ade(void)

{
  undefined2 uVar1;
  int iVar2;
  int in_DX;
  
  uVar1 = DAT_1008_097c;
  LOCK();
  DAT_1008_097c = 0x1000;
  UNLOCK();
  iVar2 = FUN_1000_1167();
  DAT_1008_097c = uVar1;
  if (in_DX != 0 || iVar2 != 0) {
    return;
  }
  FUN_1000_0a96();
  return;
}


// ---- FUN_1000_0b0c @ 1000:0b0c

undefined2 __cdecl16far FUN_1000_0b0c(void)

{
  undefined2 unaff_SS;
  
  if (___EXPORTEDSTUB != (code)0xb8) {
    return unaff_SS;
  }
  return uRam10000f01;
}


// ---- FUN_1000_0b1c @ 1000:0b1c

void __cdecl16near FUN_1000_0b1c(void)

{
  return;
}


// ---- FUN_1000_0b1e @ 1000:0b1e

undefined2 __cdecl16far FUN_1000_0b1e(char *param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 in_DX;
  undefined2 uVar3;
  
  while (uVar3 = (undefined2)((ulong)param_1 >> 0x10), (*(byte *)(*param_1 + 0x855) & 8) != 0) {
    param_1 = (char *)CONCAT22(uVar3,(char *)param_1 + 1);
  }
  uVar1 = FUN_1000_0f14((char *)param_1,uVar3,0,0);
  iVar2 = FUN_1000_10e2((char *)param_1,uVar3,uVar1);
  DAT_1008_0e2a = *(undefined2 *)(iVar2 + 8);
  DAT_1008_0e2c = *(undefined2 *)(iVar2 + 10);
  DAT_1008_0e2e = *(undefined2 *)(iVar2 + 0xc);
  DAT_1008_0e30 = *(undefined2 *)(iVar2 + 0xe);
  return 0xe2a;
}


// ---- FUN_1000_0b7c @ 1000:0b7c

void __cdecl16far FUN_1000_0b7c(char *param_1,int param_2,undefined4 param_3)

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
    FUN_1000_0c44(pcVar4,uVar6,pcVar4 + 1,uVar6);
  }
  return;
}


// ---- FUN_1000_0c2a @ 1000:0c2a

uint __cdecl16far FUN_1000_0c2a(char *param_1)

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


// ---- FUN_1000_0c44 @ 1000:0c44

void __cdecl16far FUN_1000_0c44(char *param_1,char *param_2)

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


// ---- FUN_1000_0c80 @ 1000:0c80

undefined2 * __cdecl16far FUN_1000_0c80(undefined2 *param_1,undefined1 param_2,uint param_3)

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


// ---- FUN_1000_0cc8 @ 1000:0cc8

undefined2 * __cdecl16far FUN_1000_0cc8(undefined2 *param_1,undefined2 *param_2,uint param_3)

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
    lVar15 = FUN_1000_0f2e(puVar10,iVar13,puVar8,iVar14);
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


// ---- FUN_1000_0d92 @ 1000:0d92

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 __cdecl16far
FUN_1000_0d92(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

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
  _DAT_1008_0960 = param_1;
  _DAT_1008_0962 = param_2;
  DAT_1008_0964 = param_3;
  DAT_1008_0966 = param_4;
  uVar6 = FUN_1000_0f9c(&iStack_2);
  puVar5 = (undefined1 *)&DAT_1008_0968;
  puVar4 = (undefined1 *)&DAT_1008_0961;
  for (iVar3 = (int)DAT_1008_0960; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar2 = *puVar1;
  }
  *puVar5 = 0;
  DAT_1008_0956 = in_BX & 0xff;
  DAT_1008_0958 = (int)((ulong)uVar6 >> 0x10);
  DAT_1008_095a = (int)uVar6;
  DAT_1008_095c = 0x968;
  DAT_1008_095e = 0x1008;
  return 0x956;
}


// ---- FUN_1000_0de8 @ 1000:0de8

void __cdecl16near FUN_1000_0de8(void)

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
    FUN_1000_0edf();
    if ((*unaff_SI & 1) != 0) {
      in_CX = (in_CX - *unaff_SI) + -1;
    }
    uVar4 = *(uint *)(in_BX + 4);
    if (uVar4 != 0) {
      if (!CARRY2(in_CX + 2U,uVar4)) {
        uVar2 = FUN_1000_0b0c();
        uVar4 = *(uint *)&DAT_1008_097c;
        if (uVar4 == 0x1000) goto LAB_1000_0e3a;
        uVar5 = 0x8000;
        while (uVar4 <= uVar5) {
          uVar5 = uVar5 >> 1;
          if (uVar5 == 0) goto LAB_1000_0e53;
        }
        if (uVar5 < 8) goto LAB_1000_0e53;
        uVar4 = uVar5 << 1;
        goto LAB_1000_0e3a;
      }
      uVar5 = 0xfff0;
      if (in_CX + 2U + uVar4 == 0) {
        while( true ) {
          bVar8 = false;
          iVar3 = FUN_1000_0e79();
          if (!bVar8) break;
          if (uVar5 == 0xfff0) {
            return;
          }
LAB_1000_0e53:
          uVar4 = 0x10;
LAB_1000_0e3a:
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


// ---- FUN_1000_0e79 @ 1000:0e79

void __cdecl16near FUN_1000_0e79(void)

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
LAB_1000_0ed4:
    FUN_1000_0a96();
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
    goto LAB_1000_0ed4;
    if ((*(byte *)(iVar5 + 2) & 4) != 0) {
      *(int *)(iVar5 + -2) = in_BX + -1;
    }
  }
  return;
}


// ---- FUN_1000_0edf @ 1000:0edf

void __cdecl16near FUN_1000_0edf(void)

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


// ---- ___EXPORTEDSTUB @ 1000:0f00

undefined2 __cdecl16far ___EXPORTEDSTUB(void)

{
  return 0;
}


// ---- FUN_1000_0f14 @ 1000:0f14

uint __cdecl16far FUN_1000_0f14(char *param_1)

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


// ---- FUN_1000_0f2e @ 1000:0f2e

undefined4 __stdcall16far FUN_1000_0f2e(uint param_1,uint param_2,uint param_3,uint param_4)

{
  return CONCAT22(((param_2 >> 8) - (param_4 >> 8)) - (uint)(param_1 < param_3),param_1 - param_3);
}


// ---- FUN_1000_0f9c @ 1000:0f9c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined4 __cdecl16near FUN_1000_0f9c(void)

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
  
  pdVar30 = (double *)&DAT_1008_097e;
  for (iVar18 = 4; Var14 = _DAT_1008_097e, iVar18 != 0; iVar18 = iVar18 + -1) {
    pdVar3 = pdVar30;
    pdVar30 = (double *)((int)pdVar30 + 2);
    puVar1 = unaff_SI;
    unaff_SI = unaff_SI + 1;
    *(undefined2 *)pdVar3 = *puVar1;
  }
  uVar19 = DAT_1008_097e._6_2_;
                    /* WARNING: Ignoring partial resolution of indirect */
  DAT_1008_097e._7_1_ = DAT_1008_097e._7_1_ & 0x7f;
  Var15 = _DAT_1008_097e;
  DAT_1008_097e = ABS((double)Var14);
  uVar24 = 0x20;
  if (((DAT_1008_097e._0_2_ == 0 && DAT_1008_097e._2_2_ == 0) && DAT_1008_097e._4_2_ == 0) &&
      DAT_1008_097e._6_2_ == 0) {
    DAT_1008_098a = 0x3001;
    _DAT_1008_097e = (longdouble)Var15;
    return 1;
  }
  if ((int)uVar19 < 0) {
    uVar24 = 0x2d;
  }
  if ((~uVar19 & 0x7ff0) == 0) {
    _DAT_1008_097e = (longdouble)Var15;
    return 0x10000;
  }
  DAT_1008_09b7 = (undefined1)in_FPUControlWord;
  DAT_1008_09b9._0_1_ = DAT_1008_09b7;
  lVar35 = (longdouble)DAT_1008_097e;
  DAT_1008_097e._7_1_ = (byte)((unkuint10)lVar35 >> 0x38);
  DAT_1008_0986 = (uint)((unkuint10)lVar35 >> 0x40);
  lVar12 = (ulong)DAT_1008_0986 * 0x4d10 + (ulong)((DAT_1008_0986 >> 8) * 0x4d);
  uVar19 = (uint)lVar12;
  iVar18 = ((int)((ulong)lVar12 >> 0x10) + (uint)CARRY2(uVar19,(uint)DAT_1008_097e._7_1_ * 0x9a) +
           -0x1343) - (uint)(uVar19 + (uint)DAT_1008_097e._7_1_ * 0x9a < 0x12f4);
  _DAT_1008_097e = lVar35;
  _DAT_1008_09b7 = in_FPUControlWord;
  FUN_1000_138a(iVar18,uVar24);
  DAT_1008_09b5 =
       (uint)(_DAT_1000_0f4e < lVar35) << 8 | (uint)(NAN(_DAT_1000_0f4e) || NAN(lVar35)) << 10 |
       (uint)(_DAT_1000_0f4e == lVar35) << 0xe;
  if (_DAT_1000_0f4e < lVar35 || (_DAT_1000_0f4e == lVar35) != 0) {
    iVar18 = iVar18 + 1;
    lVar35 = _DAT_1000_0f58 * lVar35;
  }
  DAT_1008_097e._0_2_ = SUB102(lVar35,0);
  DAT_1008_097e._2_2_ = (uint)((unkuint10)lVar35 >> 0x10);
  DAT_1008_097e._4_2_ = (uint)((unkuint10)lVar35 >> 0x20);
  DAT_1008_097e._6_2_ = (uint)((unkuint10)lVar35 >> 0x30);
  DAT_1008_0986 = (uint)((unkuint10)lVar35 >> 0x40);
  bVar32 = false;
  bVar17 = 0;
  for (iVar20 = -(DAT_1008_0986 + 0xc002); iVar20 != 0; iVar20 = iVar20 + -1) {
    uVar19 = DAT_1008_097e._6_2_ & 1;
    DAT_1008_097e._6_2_ = DAT_1008_097e._6_2_ >> 1;
    bVar32 = (bVar17 & 1) != 0;
    bVar17 = (byte)(CONCAT11((DAT_1008_097e._0_2_ & 1) != 0,bVar17) >> 1);
    DAT_1008_097e._0_2_ = (uint)(CONCAT12((DAT_1008_097e._2_2_ & 1) != 0,DAT_1008_097e._0_2_) >> 1);
    DAT_1008_097e._2_2_ = (uint)(CONCAT12((DAT_1008_097e._4_2_ & 1) != 0,DAT_1008_097e._2_2_) >> 1);
    DAT_1008_097e._4_2_ = (uint)(CONCAT12(uVar19 != 0,DAT_1008_097e._4_2_) >> 1);
  }
  uVar28 = DAT_1008_097e._0_2_ + 0x39a + (uint)bVar32;
  uVar19 = (uint)(0xfc65 < DAT_1008_097e._0_2_ || CARRY2(DAT_1008_097e._0_2_ + 0x39a,(uint)bVar32));
  uVar26 = DAT_1008_097e._2_2_ + uVar19;
  uVar19 = (uint)CARRY2(DAT_1008_097e._2_2_,uVar19);
  uVar22 = DAT_1008_097e._4_2_ + uVar19;
  uVar19 = DAT_1008_097e._6_2_ + CARRY2(DAT_1008_097e._4_2_,uVar19);
  iVar20 = 0x10;
  pcVar16 = (char *)((int)(undefined2 *)&DAT_1008_098a + 1);
  _DAT_1008_097e = lVar35;
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
  DAT_1008_098a = CONCAT11(DAT_1008_098a._1_1_,(char)iVar21 + '\x12');
  return CONCAT22(iVar18,1);
}


// ---- FUN_1000_10e2 @ 1000:10e2

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 __cdecl16far FUN_1000_10e2(int param_1,undefined2 param_2)

{
  uint uVar1;
  int unaff_BP;
  undefined2 unaff_SS;
  int local_8 [2];
  undefined2 local_4;
  int iStack_2;
  
  iStack_2 = unaff_BP + 1;
  local_4 = 0x1008;
  uVar1 = FUN_1000_13c8(0,param_1,param_2,local_8,unaff_SS,0xdfe,0x1008);
  DAT_1008_0df8 = local_8[0] - param_1;
  DAT_1008_0df7 = 0;
  if ((uVar1 & 4) != 0) {
    DAT_1008_0df7 = 2;
  }
  if ((uVar1 & 1) != 0) {
    DAT_1008_0df7 = DAT_1008_0df7 | 1;
  }
  DAT_1008_0df6 = (uVar1 & 2) != 0;
  return 0xdf6;
}


// ---- FUN_1000_1146 @ 1000:1146

undefined2 __cdecl16far FUN_1000_1146(undefined4 param_1)

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


// ---- FUN_1000_1167 @ 1000:1167

undefined2 __cdecl16far FUN_1000_1167(uint param_1)

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
      if (*(int *)((int)(undefined4 *)&DAT_1008_09d6 + 2) != 0) {
        pcVar4 = (code *)0x14c0;
        while( true ) {
          uVar3 = *(uint *)&DAT_1008_09e0;
          uVar6 = (uint)((ulong)*(undefined4 *)&DAT_1008_09da >> 0x10);
          in_BX = (int)*(undefined4 *)&DAT_1008_09da;
          uVar10 = uVar6;
          do {
            do {
              unaff_CS = 0x1000;
              uVar9 = (*pcVar4)();
              if (!bVar7) {
                if (pcVar4 == (code *)0x14c0) goto LAB_1000_11d8;
                goto LAB_1000_11d5;
              }
              puVar1 = (undefined4 *)(in_BX + 0xe);
              in_BX = (int)*puVar1;
              bVar7 = uVar6 < uVar3;
              bVar8 = uVar6 != uVar3;
              uVar6 = (uint)((ulong)*puVar1 >> 0x10);
            } while (bVar8);
            uVar3 = *(uint *)((int)*(undefined4 *)&DAT_1008_09da + 0x14);
            uVar6 = (uint)((ulong)*(undefined4 *)&DAT_1008_09d6 >> 0x10);
            in_BX = (int)*(undefined4 *)&DAT_1008_09d6;
            bVar7 = uVar6 < uVar10;
            bVar8 = uVar6 != uVar10;
            uVar10 = uVar6;
          } while (bVar8);
          bVar7 = pcVar4 < (code *)&DAT_1008_0de8;
          if (pcVar4 == (code *)&DAT_1008_0de8) break;
          pcVar4 = (code *)&DAT_1008_0de8;
        }
      }
      FUN_1000_1430();
      if (!bVar7) {
LAB_1000_11d5:
        uVar9 = FUN_1000_14c0();
LAB_1000_11d8:
        *(undefined2 *)((int)(undefined4 *)&DAT_1008_09da + 2) = (int)((ulong)uVar9 >> 0x10);
        *(int *)&DAT_1008_09da = in_BX;
        return (int)uVar9;
      }
    }
    if (*(int *)&DAT_1008_09ca == 0 && *(int *)&DAT_1008_09c8 == 0) {
      return 0;
    }
    iVar2 = (*(code *)*(undefined2 *)&DAT_1008_09c8)(unaff_CS,param_1);
    if (iVar2 == 0) {
      return 0;
    }
  } while( true );
}


// ---- FUN_1000_138a @ 1000:138a

void __cdecl16near FUN_1000_138a(void)

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


// ---- FUN_1000_13c8 @ 1000:13c8

/* WARNING: Removing unreachable block (ram,0x1000141e) */
/* WARNING: Removing unreachable block (ram,0x10001427) */

int FUN_1000_13c8(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
                 undefined2 param_5,double *param_6)

{
  int iVar1;
  undefined2 unaff_SS;
  longdouble local_c;
  
  iVar1 = FUN_1000_153c(param_1,param_2,param_3,param_4,param_5,&local_c,unaff_SS);
  *param_6 = (double)local_c;
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  return iVar1;
}


// ---- FUN_1000_1430 @ 1000:1430

void __cdecl16near FUN_1000_1430(void)

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
      if (((int)uVar4 != 0) || (iVar1 == 0)) goto LAB_1000_14a7;
    }
    lVar5 = GLOBALSIZE(0x1010,iVar1);
    if (lVar5 == 0) {
LAB_1000_14a7:
      FUN_1000_0a96();
      return;
    }
    *(int *)0x6 = iVar2;
    *(undefined2 *)0x2 = *(undefined2 *)(unaff_DI + 0xc);
    FUN_1000_17ce();
    FUN_1000_1802();
  }
  return;
}


// ---- FUN_1000_14b2 @ 1000:14b2

void __cdecl16near FUN_1000_14b2(void)

{
  FUN_1000_17a4();
  return;
}


// ---- FUN_1000_14c0 @ 1000:14c0

uint * __cdecl16near FUN_1000_14c0(void)

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
          if (CARRY2((uint)puVar1,uVar2)) goto LAB_1000_1519;
          puVar6 = (uint *)((int)puVar1 + uVar2) + 1;
          uVar3 = *(uint *)((int)puVar1 + uVar2);
          if ((uVar3 & 1) == 0) break;
          uVar3 = uVar3 + uVar2 + 2;
          *puVar7 = uVar3;
        }
      }
      if (puVar6 + -1 < puVar5) break;
      if (((uint)puVar5 & 1) != 0) goto LAB_1000_1519;
      puVar7 = (uint *)*(undefined2 *)(in_BX + 8);
      if ((uint *)*(undefined2 *)(in_BX + 10) == puVar7) goto LAB_1000_1519;
      puVar5 = (uint *)((int)*(undefined2 *)(in_BX + 10) + -1);
    }
    puVar7 = (uint *)((int)puVar6 + uVar3);
  } while (!CARRY2((uint)puVar6,uVar3));
LAB_1000_1519:
  puVar7 = (uint *)*(undefined2 *)(in_BX + 8);
  *(undefined2 *)(in_BX + 10) = puVar7;
  return puVar7;
}


// ---- FUN_1000_153c @ 1000:153c

uint FUN_1000_153c(undefined2 param_1,byte *param_2,int *param_3,uint *param_4)

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
LAB_1000_158b:
      pbVar1 = pbVar11;
      pbVar11 = pbVar9 + 2;
      bVar6 = *pbVar1;
    }
    else if (bVar6 == 0x2d) {
      local_16 = 0x8000;
      goto LAB_1000_158b;
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
            if (local_1c == 0) goto LAB_1000_15d9;
            pbVar1 = pbVar11;
            pbVar11 = pbVar11 + 1;
            bVar6 = *pbVar1;
          }
          if (bVar6 == 0x2e) {
            do {
              pbVar1 = pbVar11;
              pbVar11 = pbVar11 + 1;
              bVar6 = *pbVar1;
LAB_1000_15f3:
              if ((bVar6 < 0x30) || (0x39 < bVar6)) goto LAB_1000_160f;
              pcVar2 = pcVar10;
              pcVar10 = pcVar10 + 1;
              *pcVar2 = bVar6 - 0x30;
              local_18 = local_18 + -1;
              local_1c = local_1c + -1;
            } while (local_1c != 0);
            goto LAB_1000_1606;
          }
          goto LAB_1000_160f;
        }
        do {
          local_18 = iVar5;
          bVar6 = *pbVar11;
LAB_1000_15b8:
          pbVar11 = pbVar11 + 1;
          iVar5 = local_18 + -1;
        } while (bVar6 == 0x30);
        if (bVar6 != 0) goto LAB_1000_15f3;
      }
      local_14 = pbVar11 + -1;
      goto LAB_1000_1771;
    }
    if ((bVar6 == 0x2e) && ((bVar6 = *pbVar11, 0x2f < bVar6 && (bVar6 < 0x3a)))) goto LAB_1000_15b8;
  }
  local_10 = 4;
  goto LAB_1000_1771;
  while (iVar5 = local_18 + 1, bVar6 < 0x3a) {
LAB_1000_15d9:
    local_18 = iVar5;
    pbVar1 = pbVar11;
    pbVar11 = pbVar11 + 1;
    bVar6 = *pbVar1;
    if (bVar6 < 0x30) break;
  }
  if (bVar6 == 0x2e) {
LAB_1000_1606:
    do {
      pbVar1 = pbVar11;
      pbVar11 = pbVar11 + 1;
      bVar6 = *pbVar1;
      if (bVar6 < 0x30) break;
    } while (bVar6 < 0x3a);
  }
LAB_1000_160f:
  local_1c = 0x19 - local_1c;
  local_14 = pbVar11 + -1;
  if ((((bVar6 == 0x45) || (bVar6 == 0x65)) || (bVar6 == 0x44)) || (bVar6 == 100)) {
    pbVar9 = pbVar11 + 1;
    bVar6 = *pbVar11;
    if (bVar6 == 0x2b) {
LAB_1000_163e:
      pbVar1 = pbVar9;
      pbVar9 = pbVar11 + 2;
      bVar6 = *pbVar1;
    }
    else if (bVar6 == 0x2d) {
      local_1a = 0xffff;
      goto LAB_1000_163e;
    }
    if ((0x2f < bVar6) && (bVar6 < 0x3a)) {
      uVar7 = bVar6 - 0x30;
      uVar8 = uVar7;
      do {
        pbVar1 = pbVar9;
        pbVar9 = pbVar9 + 1;
        bVar6 = *pbVar1;
        if ((bVar6 < 0x30) || (0x39 < bVar6)) goto LAB_1000_1675;
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
LAB_1000_1675:
      local_18 = local_18 + ((uVar8 ^ local_1a) - local_1a);
      local_14 = pbVar9 + -1;
    }
  }
  if (local_1c != 0) {
    *pcVar10 = '\0';
    pbVar11 = (byte *)(pcVar10 + -1);
    if (local_1c < 0x19) {
      if (local_18 != 0) goto LAB_1000_16bc;
    }
    else {
      bVar6 = *pbVar11;
      *pbVar11 = 0;
      local_1c = local_1c - 1;
      local_18 = local_18 + 1;
      pbVar11 = (byte *)(pcVar10 + -2);
      if (bVar6 < 5) {
LAB_1000_16bc:
        for (; *pbVar11 == 0; pbVar11 = pbVar11 + -1) {
          local_1c = local_1c - 1;
          local_18 = local_18 + 1;
        }
      }
      else {
        *pbVar11 = *pbVar11 + 1;
      }
    }
    FUN_1000_1d4a(&local_e,local_1c,local_36,unaff_SS);
    if (local_18 == 0) {
LAB_1000_16f6:
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
          goto LAB_1000_1753;
        }
LAB_1000_177d:
        local_10 = local_10 | 1;
        goto LAB_1000_1771;
      }
    }
    else if (local_18 < 0x1450) {
      if (-0x1450 < local_18) {
        FUN_1000_1af0(param_1,local_18,&local_e,unaff_SS);
        goto LAB_1000_16f6;
      }
      goto LAB_1000_177d;
    }
    local_10 = local_10 | 2;
    puVar12[4] = local_16 | 0x7fff;
    puVar12[3] = 0x8000;
    puVar12[2] = 0;
    puVar12[1] = 0;
    *param_4 = 0;
    goto LAB_1000_1753;
  }
LAB_1000_1771:
  for (iVar14 = 5; iVar14 != 0; iVar14 = iVar14 + -1) {
    puVar3 = puVar12;
    puVar12 = puVar12 + 1;
    *puVar3 = 0;
  }
LAB_1000_1753:
  *param_3 = (int)local_14;
  ((int *)param_3)[1] = local_12;
  return local_10;
}


// ---- FUN_1000_17a4 @ 1000:17a4

void __cdecl16near FUN_1000_17a4(void)

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


// ---- FUN_1000_17ce @ 1000:17ce

void __cdecl16near FUN_1000_17ce(void)

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


// ---- FUN_1000_1802 @ 1000:1802

void __cdecl16near FUN_1000_1802(void)

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


// ---- FUN_1000_1af0 @ 1000:1af0

void FUN_1000_1af0(int param_1,uint param_2,undefined2 *param_3)

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
    local_8 = (code *)0x1b8e;
    uVar2 = (undefined2)((ulong)param_3 >> 0x10);
    uStack_e = param_2;
    if (param_1 == 0) {
      local_8 = (code *)0x1b84;
      in_ST0 = *(unkbyte10 *)((undefined2 *)param_3 + 1);
    }
    while (uStack_e != 0) {
      uVar1 = uStack_e & 7;
      uStack_e = uStack_e >> 3;
      if (uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x10001b5a. Too many branches */
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


// ---- FUN_1000_1d4a @ 1000:1d4a

uint * FUN_1000_1d4a(uint *param_1,int param_2,byte *param_3)

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
    FUN_1000_1df8();
    uVar18 = FUN_1000_1df8();
    uVar8 = (uint)CARRY2((uint)((ulong)uVar18 >> 0x10),uVar8);
    uVar4 = uVar13 + uVar5 + uVar8;
    uVar13 = (uint)(CARRY2(uVar13,uVar5) || CARRY2(uVar13 + uVar5,uVar8));
    bVar17 = CARRY2(uVar6,uVar10);
    uVar6 = uVar6 + uVar10;
    uVar11 = uVar6 + uVar13;
    bVar15 = CARRY2((uint)uVar18,uVar3);
    uVar1 = (uint)uVar18 + uVar3;
    uVar18 = FUN_1000_1df8();
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


// ---- FUN_1000_1df8 @ 1000:1df8

undefined4 __cdecl16near FUN_1000_1df8(void)

{
  int in_AX;
  int in_DX;
  uint in_BX;
  
  return CONCAT22(in_DX << 1,in_AX << 1 | (uint)((in_BX & 0x8000) != 0));
}


// ---- FUN_1000_1e10 @ 1000:1e10

undefined2 __stdcall16far FUN_1000_1e10(void)

{
  return 1;
}


// ---- WEP @ 1000:1e22

undefined2 __stdcall16far WEP(void)

{
  return 1;
}


// ---- ACQUIRE_REPORTID @ 1000:1e34

void __cdecl16far ACQUIRE_REPORTID(void)

{
  undefined2 unaff_CS;
  
  UIF_MESSAGE(unaff_CS,0x22a0,0x1000);
  return;
}


// ---- INIT_ACQUIRE_CONTROLLER_DATA @ 1000:1e4e

void __cdecl16far INIT_ACQUIRE_CONTROLLER_DATA(void)

{
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  M007_PUTHIGH(unaff_CS,DAT_1008_09f6,DAT_1008_09f8);
  M007_PUTVALUE(0x1010,DAT_1008_09fa,DAT_1008_09fc);
  M007_PUTVALUE(0x1010,DAT_1008_09fe,DAT_1008_0a00);
  M007_PUTVALUE(0x1010,DAT_1008_09fe,DAT_1008_0a00);
  M007_PUTVALUE(0x1010,DAT_1008_0a02,DAT_1008_0a04);
  M007_PUTVALUE(0x1010,DAT_1008_0a02,DAT_1008_0a04);
  M007_PUTVALUE(0x1010,DAT_1008_09fe,DAT_1008_0a00);
  M007_PUTVALUE(0x1010,DAT_1008_09fe,DAT_1008_0a00);
  M007_PUTVALUE(0x1010,DAT_1008_09fe,DAT_1008_0a00);
  M007_PUTSTATE(0x1010,2);
  M007_PUTSTATE(0x1010,2);
  M007_PUTLOW(0x1010,DAT_1008_09fe,DAT_1008_0a00);
  M007_PUTLOW(0x1010,DAT_1008_0a02,DAT_1008_0a04);
  M007_PUTLOW(0x1010,DAT_1008_0a02,DAT_1008_0a04);
  M007_PUTLOW(0x1010,DAT_1008_09fe,DAT_1008_0a00);
  M007_PUTLOW(0x1010,DAT_1008_09fe,DAT_1008_0a00);
  M007_PUTLOW(0x1010,DAT_1008_0a06,DAT_1008_0a08);
  M007_PUTLOW(0x1010,DAT_1008_0a0a,DAT_1008_0a0c);
  M007_PUTLOW(0x1010,DAT_1008_0a0e,DAT_1008_0a10);
  M007_PUTLOW(0x1010,DAT_1008_0a0e,DAT_1008_0a10);
  M007_PUTHIGH(0x1010,DAT_1008_09fe,DAT_1008_0a00);
  M007_PUTHIGH(0x1010,DAT_1008_09fe,DAT_1008_0a00);
  M007_PUTHIGH(0x1010,DAT_1008_09fe,DAT_1008_0a00);
  M007_PUTHIGH(0x1010,DAT_1008_09fe,DAT_1008_0a00);
  M007_PUTHIGH(0x1010,DAT_1008_0a12,DAT_1008_0a14);
  M007_PUTHIGH(0x1010,DAT_1008_0a12,DAT_1008_0a14);
  M007_PUTHIGH(0x1010,DAT_1008_0a12,DAT_1008_0a14);
  M007_PUTHIGH(0x1010,DAT_1008_0a12,DAT_1008_0a14);
  M007_PUTHIGH(0x1010,DAT_1008_0a12,DAT_1008_0a14);
  M007_PUTHIGH(0x1010,DAT_1008_0a16,DAT_1008_0a18);
  M007_PUTHIGH(0x1010,DAT_1008_09f6,DAT_1008_09f8);
  M007_PUTHIGH(0x1010,DAT_1008_09f6,DAT_1008_09f8);
  M007_PUTHIGH(0x1010,DAT_1008_09f6,DAT_1008_09f8);
  M007_PUTHIGH(0x1010,DAT_1008_09f6,DAT_1008_09f8);
  M007_PUTHIGH(0x1010,DAT_1008_09f6,DAT_1008_09f8);
  M007_PUTHIGH(0x1010,DAT_1008_09f6,DAT_1008_09f8);
  M007_PUTHIGH(0x1010,DAT_1008_0a1a,DAT_1008_0a1c);
  M007_PUTHIGH(0x1010,DAT_1008_09f6,DAT_1008_09f8);
  M007_PUTHIGH(0x1010,DAT_1008_09f6,DAT_1008_09f8);
  M007_PUTHIGH(0x1010,DAT_1008_09f6,DAT_1008_09f8);
  M007_PUTHIGH(0x1010,DAT_1008_09f6,DAT_1008_09f8);
  M007_PUTHIGH(0x1010,DAT_1008_09f6,DAT_1008_09f8);
  M007_PUTLOW(0x1010,DAT_1008_0a1e,DAT_1008_0a20);
  M007_PUTHIGH(0x1010,DAT_1008_0a22,DAT_1008_0a24);
  M007_PUTVALUE(0x1010,DAT_1008_09fe,DAT_1008_0a00);
  uVar4 = 0x129;
  M007_PUTLOW(0x1010,DAT_1008_0a26,DAT_1008_0a28);
  uVar3 = 0x129;
  M007_PUTHIGH(0x1010,DAT_1008_0a2a,DAT_1008_0a2c);
  uVar2 = 0x129;
  M007_PUTVALUE(0x1010,DAT_1008_0a22,DAT_1008_0a24);
  uVar1 = 0x12a;
  M007_PUTHIGH(0x1010,DAT_1008_09f6,DAT_1008_09f8);
  DAT_1008_03ba = 1;
  ACQUIRE_REPORTID(uVar1,uVar2,uVar3,uVar4);
  return;
}


// ---- INITIALISE_ACQUIRE_CONTROLLER @ 1000:2166

undefined2 __cdecl16far INITIALISE_ACQUIRE_CONTROLLER(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  
  uVar6 = 0x1008;
  uVar5 = 0x83;
  uVar4 = M007_GETSTATE();
  uVar3 = (uint)((ulong)uVar4 >> 0x10);
  if ((int)uVar4 == 1) {
    iVar1 = FUN_1000_6076(0x22bc,0x1000,uVar5,uVar6);
    if (iVar1 < 0) {
      UIF_LOG(0x1000,0x2000,0,0);
      return 0x1c2;
    }
    uVar2 = FUN_1000_60e4();
    uVar3 = uVar3 | uVar2;
    if (uVar3 != 0) {
      UIF_LOG(0x1000,0x2000,0,0);
      return 0x1c3;
    }
    iVar1 = FUN_1000_5b3a(0x22c6,0x1000);
    if (iVar1 < 0) {
      UIF_LOG(0x1000,0x2000,0,0);
      return 0x1a3;
    }
    iVar1 = FUN_1000_5ba6();
    if (uVar3 != 0 || iVar1 != 0) {
      UIF_LOG(0x1000,0x2000,0,0);
      return 0x1a8;
    }
  }
  FUN_1000_4d64();
  SWITCHBSD_AUTO(1);
  return 0;
}


// ---- ACQUIRE_CONTROLLER_SHUTDOWN @ 1000:2218

undefined2 __cdecl16far ACQUIRE_CONTROLLER_SHUTDOWN(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0xe1;
  iVar1 = M007_GETSTATE();
  if (iVar1 != 0) {
    DOCOMMANDFREE_SPOT_BUFFER(uVar2,uVar3);
  }
  return 0;
}


// ---- ACQUIRE_TIMER_TICK @ 1000:2238

void __stdcall16far ACQUIRE_TIMER_TICK(void)

{
  FUN_1000_4abe(0x1008);
  return;
}


// ---- TEST_700 @ 1000:224c

undefined2 * __stdcall16far TEST_700(undefined2 *param_1)

{
  undefined2 uVar1;
  undefined2 unaff_SS;
  
  uVar1 = DAT_1008_0a30;
  *param_1 = DAT_1008_0a2e;
  param_1[1] = uVar1;
  return param_1;
}


// ---- ACQUIRE_CONTROLLER_SUSPEND @ 1000:2270

void __cdecl16far ACQUIRE_CONTROLLER_SUSPEND(void)

{
  FUN_1000_60c0(0x1008);
  FUN_1000_5b84();
  return;
}


// ---- ACQUIRE_CONTROLLER_REMOVE @ 1000:2288

void __cdecl16far ACQUIRE_CONTROLLER_REMOVE(void)

{
  FUN_1000_609e(0x1008);
  FUN_1000_5b62();
  return;
}


// ---- SWITCHINPUT_LUT_MODE @ 1000:22d0

void __stdcall16far SWITCHINPUT_LUT_MODE(int param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  uVar4 = 0x1008;
  uVar3 = 0x113;
  uVar2 = 0x1010;
  iVar1 = M007_GETSTATE();
  if (iVar1 != param_1) {
    if (param_1 == 0) {
      uVar2 = 0x1010;
      iVar1 = M007_GETSTATE(0x1010,0x144,uVar3,uVar4);
      if (iVar1 != 2) {
        uVar2 = 0x1000;
        DOCOMMANDLUT_TRANSPARENT();
      }
    }
    else if (param_1 == 1) {
      uVar2 = 0x1010;
      iVar1 = M007_GETSTATE(0x1010,0x144,uVar3,uVar4);
      if (iVar1 != 2) {
        uVar2 = 0x1000;
        DOCOMMANDLUT_GAMMA();
      }
    }
    else if (param_1 == 2) {
      uVar2 = 0x1010;
      iVar1 = M007_GETSTATE(0x1010,0x144,uVar3,uVar4);
      if (iVar1 != 2) {
        uVar2 = 0x1000;
        DOCOMMANDLUT_INVERT();
      }
    }
    M007_PUTSTATE(uVar2,param_1);
  }
  return;
}


// ---- DEFINE_LUT @ 1000:2342

void __stdcall16far DEFINE_LUT(undefined2 param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  char local_6;
  char local_4;
  
  uVar4 = 0x1008;
  uVar3 = 0x68;
  uVar1 = M007_GETSTATE();
  if (((char)uVar1 < '\b') || ('\r' < (char)uVar1)) {
    iVar2 = M007_GETSTATE(0x1010,0xa3,uVar3,uVar4);
    if (iVar2 == 1) {
      iVar2 = M007_GETSTATE(0x1010,0x23);
      if (iVar2 == 1) {
        local_6 = '\a';
      }
      else {
        local_6 = '\x03';
      }
      for (local_4 = '\0'; local_4 <= local_6; local_4 = local_4 + '\x01') {
        FUN_1000_5f8a(local_4,param_3,param_1,param_2);
      }
      return;
    }
    uVar1 = M007_GETSTATE(0x1010,100,param_3,param_1,param_2);
  }
  FUN_1000_5f8a(uVar1);
  return;
}


// ---- DEFINE_WIN_ELEMENT @ 1000:23cc

void __stdcall16far DEFINE_WIN_ELEMENT(undefined1 param_1,undefined1 param_2,undefined2 *param_3)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_3 >> 0x10);
  puVar1 = (undefined2 *)param_3;
  FUN_1000_5dba(*param_3,puVar1[1],puVar1[2],puVar1[3],CONCAT11(0x10,param_1),CONCAT11(0x10,param_2)
                ,0x1008);
  return;
}


// ---- SWITCH4QBSD_Q1 @ 1000:23fc

void __stdcall16far SWITCH4QBSD_Q1(int param_1)

{
  int iVar1;
  undefined1 extraout_AH;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  uVar4 = 0x1008;
  uVar3 = 0xce;
  iVar1 = M007_GETSTATE();
  if ((iVar1 != 2) || (param_1 != 0)) {
    uVar2 = 0x55;
    M007_PUTSTATE(0x1010,param_1);
    FUN_1000_5d3e(4,CONCAT11(extraout_AH,(undefined1)param_1),uVar2,uVar3,uVar4);
  }
  return;
}


// ---- SWITCH4QBSD_Q2 @ 1000:2436

void __stdcall16far SWITCH4QBSD_Q2(undefined2 param_1)

{
  int iVar1;
  undefined1 extraout_AH;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  uVar4 = 0x1008;
  uVar3 = 0xce;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 2) {
    param_1 = 1;
  }
  uVar2 = 0x56;
  M007_PUTSTATE(0x1010,param_1);
  FUN_1000_5d3e(5,CONCAT11(extraout_AH,(undefined1)param_1),uVar2,uVar3,uVar4);
  return;
}


// ---- SWITCH4QBSD_Q3 @ 1000:246e

void __stdcall16far SWITCH4QBSD_Q3(undefined2 param_1)

{
  undefined1 extraout_AH;
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  
  uVar2 = 0x1008;
  uVar1 = 0x57;
  M007_PUTSTATE(unaff_CS,param_1);
  FUN_1000_5d3e(6,CONCAT11(extraout_AH,(undefined1)param_1),uVar1,uVar2);
  return;
}


// ---- SWITCH4QBSD_Q4 @ 1000:2494

void __stdcall16far SWITCH4QBSD_Q4(undefined2 param_1)

{
  undefined1 extraout_AH;
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  
  uVar2 = 0x1008;
  uVar1 = 0x58;
  M007_PUTSTATE(unaff_CS,param_1);
  FUN_1000_5d3e(7,CONCAT11(extraout_AH,(undefined1)param_1),uVar1,uVar2);
  return;
}


// ---- SWITCH4QBSD_VISIBLE @ 1000:24ba

void __stdcall16far SWITCH4QBSD_VISIBLE(undefined2 param_1)

{
  undefined1 extraout_AH;
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  
  uVar2 = 0x1008;
  uVar1 = 0x59;
  M007_PUTSTATE(unaff_CS,param_1);
  FUN_1000_5d64(CONCAT11(extraout_AH,(undefined1)param_1),uVar1,uVar2);
  return;
}


// ---- SWITCH4QBSD_GAIN @ 1000:24dc

void __stdcall16far SWITCH4QBSD_GAIN(undefined2 param_1)

{
  undefined1 extraout_AH;
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  
  uVar2 = 0x1008;
  uVar1 = 0x5a;
  M007_PUTSTATE(unaff_CS,param_1);
  FUN_1000_5d86(CONCAT11(extraout_AH,(undefined1)param_1),uVar1,uVar2);
  return;
}


// ---- SWITCH4QBSD @ 1000:24fe

void __stdcall16far SWITCH4QBSD(undefined2 param_1)

{
  undefined2 unaff_CS;
  
  M007_PUTSTATE(unaff_CS,param_1);
  return;
}


// ---- DOCOMMANDCOMPO @ 1000:2516

void __cdecl16far DOCOMMANDCOMPO(void)

{
  int iVar1;
  undefined2 uVar2;
  
  iVar1 = M007_GETSTATE();
  if (iVar1 == 0) {
LAB_1000_253c:
    SWITCH4QBSD_Q1(1);
    SWITCH4QBSD_Q2(1);
    SWITCH4QBSD_Q3(0);
    uVar2 = 0;
  }
  else {
    if (iVar1 != 1) {
      if (iVar1 == 2) goto LAB_1000_253c;
      if ((iVar1 + -2 < 1) || (SBORROW2(iVar1 + -2,1))) {
        return;
      }
      if (1 < iVar1 + -3) {
        return;
      }
    }
    SWITCH4QBSD_Q1(1);
    SWITCH4QBSD_Q2(1);
    SWITCH4QBSD_Q3(1);
    uVar2 = 1;
  }
  SWITCH4QBSD_Q4(uVar2);
  return;
}


// ---- DOCOMMANDTOPO @ 1000:2578

void __cdecl16far DOCOMMANDTOPO(void)

{
  int iVar1;
  
  iVar1 = M007_GETSTATE();
  if (((iVar1 != 0) && (iVar1 != 1)) && (iVar1 != 2)) {
    if (iVar1 + -2 < 1) {
      return;
    }
    if (SBORROW2(iVar1 + -2,1)) {
      return;
    }
    if (1 < iVar1 + -3) {
      return;
    }
  }
  SWITCH4QBSD_Q1((int)DAT_1008_03a6);
  SWITCH4QBSD_Q2((int)DAT_1008_03a7);
  SWITCH4QBSD_Q3((int)DAT_1008_03a8);
  SWITCH4QBSD_Q4((int)DAT_1008_03a9);
  return;
}


// ---- DOCOMMANDBSD_IN @ 1000:25c6

undefined2 __cdecl16far DOCOMMANDBSD_IN(void)

{
  return 0x1008;
}


// ---- DOCOMMANDBSD_OUT @ 1000:25d2

undefined2 __cdecl16far DOCOMMANDBSD_OUT(void)

{
  return 0x1008;
}


// ---- SWITCHBSD_TYPE @ 1000:25de

void __stdcall16far SWITCHBSD_TYPE(int param_1)

{
  int iVar1;
  undefined2 unaff_CS;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 local_4;
  
  uVar3 = 0x1008;
  if (-1 < param_1) {
    if (param_1 < 2) {
      local_4 = 0;
    }
    else {
      if (param_1 + -1 < 1) {
        return;
      }
      if (1 < param_1 + -3) {
        return;
      }
      local_4 = 1;
    }
    uVar2 = 0xce;
    M007_PUTSTATE(unaff_CS,param_1);
    iVar1 = M007_GETSTATE(0x1010,0x83,uVar2,uVar3);
    if (iVar1 == 1) {
      Ordinal_2128(0x1010,local_4);
    }
  }
  return;
}


// ---- SWITCHSCM @ 1000:262c

void __stdcall16far SWITCHSCM(undefined2 param_1)

{
  undefined2 unaff_CS;
  
  M007_PUTSTATE(unaff_CS,param_1);
  return;
}


// ---- FUN_1000_2644 @ 1000:2644

void __cdecl16far FUN_1000_2644(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  int local_4;
  
  uVar3 = 0x1008;
  uVar2 = 0x77;
  iVar1 = M007_GETSTATE();
  if (((iVar1 == 6) || (iVar1 == 5)) || (iVar1 == 10)) {
    uVar2 = FUN_1000_612a(0x77);
    M007_PUTSTATE(0x1000,uVar2);
  }
  else if ((iVar1 == 0) && (DAT_1008_06a0 == 1)) {
    FUN_1000_612a(uVar2,uVar3);
    for (local_4 = 0; local_4 < 8; local_4 = local_4 + 1) {
      if (*(char *)(local_4 + 0xe10) == '\x01') {
        if (*(int *)(*(char *)(local_4 + 0x150) * 0x20 + 0x168) == 1) {
          uVar3 = 0x77;
          M007_PUTSTATE(0x1000,6);
          uVar2 = 6;
        }
        else {
          if (*(int *)(*(char *)(local_4 + 0x150) * 0x20 + 0x168) != 2) {
            if (*(int *)(*(char *)(local_4 + 0x150) * 0x20 + 0x168) == 3) {
              uVar2 = 0x77;
              M007_PUTSTATE(0x1000,10);
              FUN_1000_6230((int)*(char *)(local_4 + 0x150),local_4,uVar2);
            }
            goto LAB_1000_26eb;
          }
          uVar3 = 0x77;
          M007_PUTSTATE(0x1000,5);
          uVar2 = 5;
        }
        FUN_1000_616a((int)*(char *)(local_4 + 0x150),local_4,uVar2,uVar3);
      }
LAB_1000_26eb:
    }
  }
  return;
}


// ---- DOCOMMANDFIND_MEAN @ 1000:2724

void __cdecl16far DOCOMMANDFIND_MEAN(void)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  uVar4 = 0x1008;
  uVar3 = 0x66;
  iVar1 = M007_GETSTATE();
  if (*(char *)(iVar1 + 0x9e) == '\x01') {
    iVar2 = M007_GETSTATE(0x1010,0x83,uVar3,uVar4,iVar1);
    if (iVar2 == 1) {
      iVar2 = M007_GETSTATE(0x1010,0x77);
      if (iVar2 == 0) {
        uVar3 = 0x77;
        M007_PUTSTATE(0x1010,6);
        uVar3 = M007_GETSTATE(0x1010,100,6,uVar3);
        FUN_1000_616a(iVar1,uVar3);
      }
    }
  }
  return;
}


// ---- DOCOMMANDFIND_PEAK @ 1000:2778

void __cdecl16far DOCOMMANDFIND_PEAK(void)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  uVar4 = 0x1008;
  uVar3 = 0x66;
  iVar1 = M007_GETSTATE();
  if (*(char *)(iVar1 + 0x9e) == '\x01') {
    iVar2 = M007_GETSTATE(0x1010,0x83,uVar3,uVar4,iVar1);
    if (iVar2 == 1) {
      iVar2 = M007_GETSTATE(0x1010,0x77);
      if (iVar2 == 0) {
        uVar3 = 0x77;
        M007_PUTSTATE(0x1010,5);
        uVar3 = M007_GETSTATE(0x1010,100,5,uVar3);
        FUN_1000_616a(iVar1,uVar3);
      }
    }
  }
  return;
}


// ---- DOCOMMANDABC @ 1000:27cc

void __cdecl16far DOCOMMANDABC(void)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  uVar4 = 0x1008;
  uVar3 = 0x66;
  iVar1 = M007_GETSTATE();
  if (*(char *)(iVar1 + 0x9e) == '\x01') {
    iVar2 = M007_GETSTATE(0x1010,0x83,uVar3,uVar4,iVar1);
    if (iVar2 == 1) {
      iVar2 = M007_GETSTATE(0x1010,0x77);
      if (iVar2 == 0) {
        uVar3 = 0x77;
        M007_PUTSTATE(0x1010,10);
        uVar3 = M007_GETSTATE(0x1010,100,uVar3);
        FUN_1000_6230(iVar1,uVar3);
      }
    }
  }
  return;
}


// ---- DOCOMMANDDETECTOR_CHAN_ASGN @ 1000:281e

undefined2 __cdecl16far DOCOMMANDDETECTOR_CHAN_ASGN(void)

{
  return 0x1008;
}


// ---- DOSTRUCTDETECTOR_PORT_ASGN @ 1000:282a

void __stdcall16far DOSTRUCTDETECTOR_PORT_ASGN(undefined4 param_1)

{
  char *pcVar1;
  undefined2 *puVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  undefined2 *puVar10;
  int iVar11;
  undefined2 uVar12;
  undefined2 uVar13;
  undefined2 uVar14;
  undefined2 unaff_SS;
  undefined2 auStack_c6 [36];
  undefined2 uStack_7e;
  undefined2 uStack_7c;
  int iStack_7a;
  int iStack_78;
  int iStack_76;
  int iStack_74;
  int iStack_72;
  int iStack_70;
  int iStack_6e;
  undefined2 uStack_6c;
  char local_62;
  char local_60;
  char local_5e;
  char local_5c [90];
  
  uStack_6c = 0x1008;
  bVar4 = true;
  bVar5 = true;
  local_60 = '\0';
  do {
    iVar11 = local_60 * 5;
    local_5c[iVar11] = local_60;
    local_5c[iVar11 + 1] = '\0';
    local_5c[iVar11 + 2] = '\0';
    local_5c[iVar11 + 3] = '\0';
    local_5c[iVar11 + 4] = '\0';
    *(undefined1 *)(local_60 + 0x9e) = 0;
    local_60 = local_60 + '\x01';
  } while (local_60 < '\x12');
  local_5e = '\0';
  do {
    uVar12 = (undefined2)((ulong)param_1 >> 0x10);
    iVar11 = (int)param_1;
    cVar3 = *(char *)(local_5e * 5 + iVar11);
    *(undefined1 *)(cVar3 + 0x9e) = 1;
    if ((*(byte *)(local_5e * 5 + iVar11 + 1) & 2) != 0) {
      local_5c[cVar3 * 5 + 1] = '\x01';
      local_5c[cVar3 * 5 + 4] = '\x01';
    }
    if ((*(byte *)(iVar11 + local_5e * 5 + 1) & 4) != 0) {
      local_5c[cVar3 * 5 + 1] = '\x01';
      local_5c[cVar3 * 5 + 4] = '\x02';
    }
    if ((*(byte *)(iVar11 + local_5e * 5 + 1) & 8) != 0) {
      local_5c[cVar3 * 5 + 1] = '\x01';
      local_5c[cVar3 * 5 + 4] = '\x03';
    }
    if ((*(byte *)(iVar11 + local_5e * 5 + 1) & 0x10) != 0) {
      local_5c[cVar3 * 5 + 3] = '\x01';
    }
    if ((*(byte *)(iVar11 + local_5e * 5 + 1) & 0x20) != 0) {
      local_5c[cVar3 * 5 + 2] = '\x01';
    }
    local_5e = local_5e + '\x01';
  } while (local_5e < '\x10');
  puVar10 = auStack_c6;
  pcVar9 = local_5c;
  for (iVar7 = 0x2d; iVar7 != 0; iVar7 = iVar7 + -1) {
    puVar2 = puVar10;
    puVar10 = puVar10 + 1;
    pcVar1 = pcVar9;
    pcVar9 = pcVar9 + 2;
    *puVar2 = *(undefined2 *)pcVar1;
  }
  FUN_1000_6108();
  for (local_5e = '\0'; local_5e < '\x10'; local_5e = local_5e + '\x01') {
    iVar7 = local_5e * 5;
    if ((*(char *)(iVar7 + iVar11) != *(char *)(iVar7 + 0x3c6)) ||
       (*(char *)(iVar7 + iVar11 + 1) != *(char *)(iVar7 + 0x3c7))) {
      iVar7 = (int)local_5e;
      iVar8 = iVar7 * 5;
      *(undefined1 *)(iVar8 + 0x3c6) = *(undefined1 *)(iVar8 + iVar11);
      pcVar9 = (char *)(iVar8 + iVar11);
      *(char *)(iVar8 + 0x3c7) = pcVar9[1];
      *(char *)(iVar8 + 0x3c8) = pcVar9[2];
      cVar3 = *pcVar9;
      *(char *)(iVar7 + 0x8e) = cVar3;
      if (cVar3 == '\0') {
        if ((local_5e < '\b') && (bVar4)) {
          iStack_6e = (int)local_5e;
          iStack_70 = (uint)(byte)(local_5e >> 7) << 8;
          iStack_72 = 0x1000;
          iStack_74 = 0x295c;
          iVar7 = FUN_1000_69f6();
          bVar4 = false;
        }
        if (('\a' < local_5e) && (bVar5)) {
          bVar6 = (byte)((uint)iVar7 >> 8);
          iStack_6e = CONCAT11(bVar6,local_5e);
          iStack_70 = (uint)bVar6 << 8;
          iStack_72 = 0x1000;
          iStack_74 = 0x297c;
          FUN_1000_69f6();
          bVar5 = false;
        }
      }
      else {
        iStack_6e = (int)local_5e;
        iStack_70 = CONCAT11(local_5e >> 7,cVar3);
        iStack_72 = 0x1000;
        iStack_74 = 0x29f1;
        FUN_1000_69f6();
      }
    }
  }
  iStack_6e = 100;
  iStack_70 = 0x1000;
  iStack_72 = 0x29fd;
  local_62 = M007_GETSTATE();
  if ('\x03' < local_62) {
    local_5e = '\b';
LAB_1000_2a3b:
    if (local_5e < '\x0f') {
      if (*(char *)(local_5e + 0x8e) != *(char *)(local_62 + 0x150)) goto LAB_1000_2a38;
      iStack_72 = local_5e + -8;
LAB_1000_2a56:
      iStack_70 = 0x65;
      iStack_74 = 0x1010;
      iStack_76 = 0x2a5b;
      M007_PUTSTATE();
    }
    goto LAB_1000_2a5b;
  }
  for (local_5e = '\0'; local_5e < '\a'; local_5e = local_5e + '\x01') {
    iStack_72 = (int)local_5e;
    if (*(char *)(iStack_72 + 0x8e) == *(char *)(local_62 + 0x150)) goto LAB_1000_2a56;
  }
LAB_1000_2a5b:
  iStack_72 = 0xab;
  iStack_74 = 0x1010;
  uVar13 = 0x1010;
  iStack_76 = 0x2a63;
  iVar7 = M007_GETSTATE();
  if (iVar7 == 0) {
    iStack_74 = (int)*(char *)(local_62 + 0x150);
    iStack_76 = 0x1010;
    uVar13 = 0x1000;
    iStack_78 = 0x2a78;
    SWITCHDETECTOR_TYPE();
  }
  if (local_62 < '\x04') {
    local_62 = local_62 + '\x04';
  }
  else {
    local_62 = local_62 + -4;
  }
  if ('\x03' < local_62) {
    local_5e = '\b';
LAB_1000_2ac7:
    if (local_5e < '\x0f') {
      if (*(char *)(local_5e + 0x8e) != *(char *)(local_62 + 0x150)) goto LAB_1000_2ac4;
      iStack_76 = local_5e + -8;
LAB_1000_2ae3:
      iStack_74 = 0x97;
      iStack_7a = 0x2ae8;
      iStack_78 = uVar13;
      M007_PUTSTATE();
      uVar13 = 0x1010;
    }
    goto LAB_1000_2ae8;
  }
  for (local_5e = '\0'; local_5e < '\a'; local_5e = local_5e + '\x01') {
    iStack_76 = (int)local_5e;
    if (*(char *)(iStack_76 + 0x8e) == *(char *)(local_62 + 0x150)) goto LAB_1000_2ae3;
  }
LAB_1000_2ae8:
  iStack_76 = 0xab;
  uVar14 = 0x1010;
  iStack_7a = 0x2af0;
  iStack_78 = uVar13;
  iVar7 = M007_GETSTATE();
  if (iVar7 == 1) {
    iStack_78 = (int)*(char *)(local_62 + 0x150);
    iStack_7a = 0x1010;
    uVar14 = 0x1000;
    uStack_7c = 0x2b04;
    SWITCHDETECTOR_TYPE();
  }
  iStack_7a = 0x2b09;
  iStack_78 = uVar14;
  UPDATE_DETECTORS();
  local_60 = '\0';
  local_5e = '\0';
  do {
    if ('\x0f' < local_5e) {
LAB_1000_2b54:
      iStack_78 = 0xe7;
      iStack_7a = (int)local_60;
      uStack_7c = 0x1000;
      uStack_7e = 0x2b61;
      M007_PUTSTATE();
      return;
    }
    if (*(char *)(local_5e * 5 + iVar11) == '\a') {
      local_60 = '\x02';
      goto LAB_1000_2b54;
    }
    if (*(char *)(local_5e * 5 + iVar11) == '\x03') {
      local_60 = '\x01';
      if (DAT_1008_03ba == '\x01') {
        iStack_78 = 0x1000;
        iStack_7a = 0x2b30;
        DOCOMMANDCOMPO();
        DAT_1008_03ba = '\0';
      }
      goto LAB_1000_2b54;
    }
    local_5e = local_5e + '\x01';
  } while( true );
LAB_1000_2a38:
  local_5e = local_5e + '\x01';
  goto LAB_1000_2a3b;
LAB_1000_2ac4:
  local_5e = local_5e + '\x01';
  goto LAB_1000_2ac7;
}


// ---- DOCOMMANDDETECTOR_ZONE_ASGN @ 1000:2b68

undefined2 __cdecl16far DOCOMMANDDETECTOR_ZONE_ASGN(void)

{
  return 0x1008;
}


// ---- DOCOMMANDCONTINUOUS_AVG @ 1000:2b74

void __cdecl16far DOCOMMANDCONTINUOUS_AVG(void)

{
  int iVar1;
  
  iVar1 = M007_GETSTATE();
  if (iVar1 == 6) {
    M007_PUTVALUE(0x1010,DAT_1008_0a32,DAT_1008_0a34);
    M007_PUTSTATE(0x1010,0);
  }
  return;
}


// ---- DOCOMMANDFRAME_AVERAGE @ 1000:2ba8

void __cdecl16far DOCOMMANDFRAME_AVERAGE(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  
  uVar5 = 0x1008;
  uVar4 = 100;
  cVar1 = M007_GETSTATE();
  iVar2 = *(byte *)(cVar1 + 0x18) + 1;
  iVar3 = M007_GETSTATE(0x1010,0xc1,uVar4,uVar5,iVar2);
  if (iVar3 != 1) {
    uVar5 = 0xe4;
    M007_PUTLOW(0x1010,DAT_1008_0a36,DAT_1008_0a38);
    uVar4 = 0xe4;
    M007_PUTVALUE(0x1010,(float)iVar2);
    DAT_1008_0020 = 1;
    iVar2 = M007_GETSTATE(0x1010,0xa3,uVar4,uVar5);
    if (iVar2 == 1) {
      DOCOMMANDUNFREEZE_ALL();
    }
    else {
      DOCOMMANDUNFREEZE_ZONE();
    }
    FUN_1000_5c36(0x18,0x1008);
    iVar2 = M007_GETSTATE(0x1000,0x118);
    if (iVar2 == 6) {
      M007_PUTVALUE(0x1010,DAT_1008_0a32,DAT_1008_0a34);
      M007_PUTSTATE(0x1010,0);
    }
  }
  return;
}


// ---- DOCOMMANDFRAME_INT @ 1000:2c4a

void __cdecl16far DOCOMMANDFRAME_INT(void)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  
  uVar7 = 0x1008;
  uVar6 = 100;
  cVar2 = M007_GETSTATE();
  bVar1 = *(byte *)(cVar2 + 0x18);
  iVar3 = M007_GETSTATE(0x1010,0xc1,uVar6,uVar7);
  if (iVar3 != 1) {
    uVar7 = 0x1010;
    uVar6 = 0x2c7e;
    iVar3 = M007_GETSTATE(0x1010,0x144);
    if (iVar3 != 0) {
      uVar7 = 0xe4;
      M007_PUTLOW(0x1010,DAT_1008_0a36,DAT_1008_0a38);
      uVar6 = 0xe4;
      M007_PUTVALUE(0x1010,(float)(bVar1 + 1));
      DAT_1008_0020 = 1;
    }
    iVar3 = M007_GETSTATE(0x1010,0xa3,uVar6,uVar7);
    if (iVar3 == 1) {
      DOCOMMANDUNFREEZE_ALL();
    }
    else {
      DOCOMMANDUNFREEZE_ZONE();
    }
    FUN_1000_5c36(0x18,0x1008);
    uVar6 = M007_GETSTATE(0x1000,0x76);
    uVar7 = 0x76;
    M007_PUTSTATE(0x1010,0);
    DOCOMMANDFREEZE_ALL(uVar7);
    uVar7 = 0x76;
    M007_PUTSTATE(0x1000,uVar6);
    uVar4 = GETTICKCOUNT(0x1010,uVar7);
    DAT_1008_03be = (undefined2)((ulong)uVar4 >> 0x10);
    DAT_1008_03bc = (undefined2)uVar4;
    lVar5 = Ordinal_6005(0x1010);
    DAT_1008_03c0 = (undefined2)(lVar5 + 500);
    DAT_1008_03c2 = (undefined2)((ulong)(lVar5 + 500) >> 0x10);
    iVar3 = M007_GETSTATE(0x1010,0x118);
    if ((iVar3 == 0) || (iVar3 = M007_GETSTATE(0x1010,0x118), iVar3 == 6)) {
      M007_PUTSTATE(0x1010,6);
      M007_PUTVALUE(0x1010,DAT_1008_0a32,DAT_1008_0a34);
    }
  }
  return;
}


// ---- DOCOMMANDLINE_INT @ 1000:2d48

void __cdecl16far DOCOMMANDLINE_INT(void)

{
  int iVar1;
  undefined1 extraout_AH;
  undefined1 extraout_AH_00;
  undefined1 uVar2;
  undefined2 unaff_CS;
  undefined4 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined1 local_a [4];
  undefined2 local_6;
  int local_4;
  
  uVar5 = 0x1008;
  uVar4 = 0xe3;
  M007_GETVALUE(unaff_CS,local_a);
  local_4 = FUN_1000_015a(uVar4,uVar5);
  iVar1 = M007_GETSTATE(0x1000,0xc1);
  if (iVar1 != 1) {
    uVar5 = 0xe4;
    M007_PUTLOW(0x1010,DAT_1008_0a3a,DAT_1008_0a3c);
    uVar4 = 0xe4;
    M007_PUTVALUE(0x1010,(float)local_4);
    iVar1 = M007_GETSTATE(0x1010,0xa3,uVar4,uVar5);
    if (iVar1 == 1) {
      DOCOMMANDUNFREEZE_ALL();
      uVar2 = extraout_AH;
    }
    else {
      DOCOMMANDUNFREEZE_ZONE();
      uVar2 = extraout_AH_00;
    }
    FUN_1000_5bfc(CONCAT11(uVar2,(char)local_4 + -1),1);
    local_6 = M007_GETSTATE(0x1000,0x76);
    uVar4 = 0x76;
    M007_PUTSTATE(0x1010,0);
    DOCOMMANDFREEZE_ALL(uVar4);
    uVar4 = 0x76;
    M007_PUTSTATE(0x1000,local_6);
    uVar3 = GETTICKCOUNT(0x1010,uVar4);
    DAT_1008_03be = (undefined2)((ulong)uVar3 >> 0x10);
    DAT_1008_03bc = (undefined2)uVar3;
    uVar3 = Ordinal_6005(0x1010);
    DAT_1008_03c2 = (undefined2)((ulong)uVar3 >> 0x10);
    DAT_1008_03c0 = (undefined2)uVar3;
    iVar1 = M007_GETSTATE(0x1010,0x118);
    if ((iVar1 == 0) || (iVar1 = M007_GETSTATE(0x1010,0x118), iVar1 == 6)) {
      M007_PUTSTATE(0x1010,6);
      M007_PUTVALUE(0x1010,DAT_1008_0a32,DAT_1008_0a34);
    }
  }
  return;
}


// ---- DOCOMMANDLINE_AVG @ 1000:2e38

void __cdecl16far DOCOMMANDLINE_AVG(void)

{
  int iVar1;
  undefined1 extraout_AH;
  undefined1 extraout_AH_00;
  undefined1 uVar2;
  undefined2 unaff_CS;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined1 local_8 [4];
  int local_4;
  
  uVar4 = 0x1008;
  uVar3 = 0xe3;
  M007_GETVALUE(unaff_CS,local_8);
  local_4 = FUN_1000_015a(uVar3,uVar4);
  iVar1 = M007_GETSTATE(0x1000,0xc1);
  if (iVar1 != 1) {
    uVar4 = 0xe4;
    M007_PUTLOW(0x1010,DAT_1008_0a3a,DAT_1008_0a3c);
    uVar3 = 0xe4;
    M007_PUTVALUE(0x1010,(float)local_4);
    iVar1 = M007_GETSTATE(0x1010,0xa3,uVar3,uVar4);
    if (iVar1 == 1) {
      DOCOMMANDUNFREEZE_ALL();
      uVar2 = extraout_AH;
    }
    else {
      DOCOMMANDUNFREEZE_ZONE();
      uVar2 = extraout_AH_00;
    }
    FUN_1000_5bfc(CONCAT11(uVar2,(char)local_4 + -1),1);
    iVar1 = M007_GETSTATE(0x1000,0x118);
    if (iVar1 == 6) {
      M007_PUTVALUE(0x1010,DAT_1008_0a32,DAT_1008_0a34);
      M007_PUTSTATE(0x1010,0);
    }
  }
  return;
}


// ---- DOCOMMANDPIXNR @ 1000:2ee0

undefined2 __cdecl16far DOCOMMANDPIXNR(void)

{
  return 0x1008;
}


// ---- DOCOMMANDLUT_TRANSPARENT @ 1000:2eec

void __cdecl16far DOCOMMANDLUT_TRANSPARENT(void)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  char local_6;
  char local_4;
  
  uVar5 = 0x1008;
  uVar4 = 0x68;
  uVar3 = 0x2efd;
  uVar1 = M007_GETSTATE();
  if (((char)uVar1 < '\b') || ('\r' < (char)uVar1)) {
    iVar2 = M007_GETSTATE(0x1010,0xa3,uVar4,uVar5);
    if (iVar2 == 1) {
      uVar4 = 0x1010;
      iVar2 = M007_GETSTATE(0x1010,0x23);
      if (iVar2 == 1) {
        local_6 = '\a';
      }
      else {
        local_6 = '\x03';
      }
      for (local_4 = '\0'; local_4 <= local_6; local_4 = local_4 + '\x01') {
        uVar4 = 0x1000;
        FUN_1000_5c60(local_4);
      }
      goto LAB_1000_2f4f;
    }
    uVar3 = 100;
    uVar1 = M007_GETSTATE(0x1010,100);
  }
  uVar4 = 0x1000;
  FUN_1000_5c60(uVar1,uVar3);
LAB_1000_2f4f:
  M007_PUTSTATE(uVar4,0);
  return;
}


// ---- DOCOMMANDLUT_GAMMA @ 1000:2f5c

void __cdecl16far DOCOMMANDLUT_GAMMA(void)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  char local_6;
  char local_4;
  
  uVar5 = 0x1008;
  bVar1 = true;
  uVar4 = 0x68;
  iVar3 = M007_GETSTATE();
  if (((char)iVar3 < '\b') || ('\r' < (char)iVar3)) {
    iVar3 = M007_GETSTATE(0x1010,0xa3,uVar4,uVar5);
    if (iVar3 == 1) {
      uVar4 = 0x1010;
      iVar3 = M007_GETSTATE(0x1010,0x23);
      if (iVar3 == 1) {
        local_6 = '\a';
      }
      else {
        local_6 = '\x03';
      }
      for (local_4 = '\0'; local_4 < local_6; local_4 = local_4 + '\x01') {
        if (*(float *)(local_4 * 4 + 0x66) != *(float *)(local_4 * 4 + 0x62)) {
          bVar1 = false;
        }
      }
      if (!bVar1) {
        for (local_4 = '\0'; local_4 <= local_6; local_4 = local_4 + '\x01') {
          iVar3 = local_4 * 4;
          uVar4 = 0x1000;
          FUN_1000_5c80((int)local_4,*(undefined2 *)(iVar3 + 0x62),*(undefined2 *)(iVar3 + 100));
        }
        goto LAB_1000_304a;
      }
      M007_GETSTATE(0x1010,0x23);
      iVar3 = DAT_1008_0062;
    }
    else {
      cVar2 = M007_GETSTATE(0x1010,100);
      iVar3 = (int)cVar2;
    }
  }
  uVar4 = 0x1000;
  FUN_1000_5c80(iVar3);
LAB_1000_304a:
  M007_PUTSTATE(uVar4,1);
  return;
}


// ---- DOCOMMANDLUT_INVERT @ 1000:3058

void __cdecl16far DOCOMMANDLUT_INVERT(void)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  char local_6;
  char local_4;
  
  uVar5 = 0x1008;
  uVar4 = 0x68;
  uVar3 = 0x3069;
  uVar1 = M007_GETSTATE();
  if (((char)uVar1 < '\b') || ('\r' < (char)uVar1)) {
    iVar2 = M007_GETSTATE(0x1010,0xa3,uVar4,uVar5);
    if (iVar2 == 1) {
      uVar4 = 0x1010;
      iVar2 = M007_GETSTATE(0x1010,0x23);
      if (iVar2 == 1) {
        local_6 = '\a';
      }
      else {
        local_6 = '\x03';
      }
      for (local_4 = '\0'; local_4 <= local_6; local_4 = local_4 + '\x01') {
        uVar4 = 0x1000;
        FUN_1000_5cb0(local_4);
      }
      goto LAB_1000_30bb;
    }
    uVar3 = 100;
    uVar1 = M007_GETSTATE(0x1010,100);
  }
  uVar4 = 0x1000;
  FUN_1000_5cb0(uVar1,uVar3);
LAB_1000_30bb:
  M007_PUTSTATE(uVar4,2);
  return;
}


// ---- DOCOMMANDLUT_MERGE @ 1000:30c8

void __cdecl16far DOCOMMANDLUT_MERGE(void)

{
  char cVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  uVar4 = 0x1008;
  uVar3 = 0x68;
  uVar2 = M007_GETSTATE();
  cVar1 = (char)uVar2;
  if ((cVar1 < '\b') || ('\r' < cVar1)) {
    uVar2 = M007_GETSTATE(0x1010,100,uVar3,uVar4,cVar1);
  }
  uVar2 = M007_GETSTATE(0x1010,0x6a,uVar2);
  uVar2 = M007_GETSTATE(0x1010,0x69,uVar2);
  FUN_1000_5cd0(uVar2);
  return;
}


// ---- DOCOMMANDLUT_COPY @ 1000:3108

void __cdecl16far DOCOMMANDLUT_COPY(void)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x68;
  uVar1 = M007_GETSTATE();
  if (((char)uVar1 < '\b') || ('\r' < (char)uVar1)) {
    uVar1 = M007_GETSTATE(0x1010,100,uVar2,uVar3);
  }
  uVar1 = M007_GETSTATE(0x1010,0x69,uVar1);
  FUN_1000_5cf8(uVar1);
  return;
}


// ---- SWITCHZONE @ 1000:313c

void __stdcall16far SWITCHZONE(int param_1)

{
  undefined2 *puVar1;
  int iVar2;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined1 local_8 [4];
  int local_4;
  
  iVar2 = param_1 * 4;
  M007_PUTVALUE(unaff_CS,*(undefined2 *)(iVar2 + 0xb0),*(undefined2 *)(iVar2 + 0xb2));
  M007_PUTVALUE(0x1010,*(undefined2 *)(iVar2 + 0xd0),*(undefined2 *)(iVar2 + 0xd2));
  uVar6 = 0xb7;
  M007_PUTVALUE(0x1010,*(undefined2 *)(iVar2 + 0xf0),*(undefined2 *)(iVar2 + 0xf2));
  uVar5 = 0xb8;
  M007_PUTVALUE();
  uVar4 = 0xf7;
  M007_PUTVALUE(0x1010,*(undefined2 *)(iVar2 + 0x130),*(undefined2 *)(iVar2 + 0x132));
  uVar3 = 0xb9;
  local_4 = *(byte *)(param_1 + 0x18) + 1;
  M007_PUTVALUE();
  iVar2 = M007_GETSTATE(0x1010,0x5d,uVar3,uVar4,uVar5,uVar6);
  if (iVar2 == 2) {
    local_4 = *(byte *)(param_1 + 0x18) + 1;
    M007_PUTVALUE(0x1010,(float)local_4);
  }
  M007_PUTSTATE(0x1010,(int)*(char *)(param_1 + 0x10));
  iVar2 = param_1 * 4;
  M007_PUTVALUE(0x1010,*(undefined2 *)(iVar2 + 0x22),*(undefined2 *)(iVar2 + 0x24));
  uVar6 = 0xbe;
  M007_PUTVALUE(0x1010,*(undefined2 *)(iVar2 + 0x42),*(undefined2 *)(iVar2 + 0x44));
  uVar5 = 0x65;
  M007_PUTSTATE(0x1010,(int)*(char *)(param_1 + 0x86));
  uVar4 = 100;
  M007_PUTSTATE(0x1010,param_1);
  uVar3 = 0x1010;
  iVar2 = M007_GETSTATE(0x1010,0xab,uVar4,uVar5,uVar6);
  if (iVar2 == 0) {
    uVar3 = 0x1000;
    SWITCHDETECTOR_TYPE((int)*(char *)(param_1 + 0x150));
  }
  iVar2 = M007_GETSTATE(uVar3,0x68);
  if (iVar2 == 0) {
    uVar3 = 0xbc;
    M007_PUTVALUE(0x1010,*(undefined2 *)(param_1 * 4 + 0x62),*(undefined2 *)(param_1 * 4 + 100));
  }
  if (param_1 < 4) {
    param_1 = param_1 + 4;
  }
  else {
    param_1 = param_1 + -4;
  }
  uVar4 = 0x1010;
  iVar2 = M007_GETSTATE(0x1010,0xab,uVar3);
  if (iVar2 == 1) {
    uVar4 = 0x1000;
    SWITCHDETECTOR_TYPE((int)*(char *)(param_1 + 0x150));
  }
  M007_PUTSTATE(uVar4,(int)*(char *)(param_1 + 0x10));
  iVar2 = param_1 * 4;
  M007_PUTVALUE(0x1010,*(undefined2 *)(iVar2 + 0x22),*(undefined2 *)(iVar2 + 0x24));
  uVar5 = 0xd8;
  M007_PUTVALUE(0x1010,*(undefined2 *)(iVar2 + 0x42),*(undefined2 *)(iVar2 + 0x44));
  uVar4 = 0x97;
  M007_PUTSTATE(0x1010,(int)*(char *)(param_1 + 0x86));
  uVar3 = 0xc4;
  puVar1 = (undefined2 *)M007_GETVALUE(0x1010,local_8);
  SETCOLLECTOR_BIAS(*puVar1,puVar1[1]);
  FUN_1000_6bf6(uVar3,uVar4,uVar5);
  return;
}


// ---- SWITCHDETECTOR_CHANNEL @ 1000:3318

void __stdcall16far SWITCHDETECTOR_CHANNEL(int param_1)

{
  int iVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 unaff_SS;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined1 local_e [4];
  char local_a;
  char local_8;
  char local_6;
  char local_4;
  
  uVar8 = 0x1008;
  local_6 = *(char *)(param_1 + 0x8e);
  uVar7 = 100;
  local_4 = M007_GETSTATE();
  if ((local_6 != '\b') || (iVar1 = M007_GETSTATE(0x1010,0x77,uVar7,uVar8), iVar1 == 0)) {
    M007_GETSTATE(0x1010,0x8c);
    iVar1 = M007_GETSTATE(0x1010,0xa3);
    if (iVar1 == 1) {
      iVar1 = M007_GETSTATE(0x1010,0x23);
      if ((iVar1 == 1) || (iVar1 = M007_GETSTATE(0x1010,0x70), iVar1 == 1)) {
        local_8 = '\a';
      }
      else {
        local_8 = '\x03';
      }
      uVar7 = 0x1010;
      for (local_a = '\0'; local_a <= local_8; local_a = local_a + '\x01') {
        *(undefined1 *)(local_a + 0x86) = (undefined1)param_1;
        *(char *)(local_a + 0x150) = local_6;
        uVar7 = 0x1000;
        FUN_1000_6b38((int)local_a,CONCAT11(local_a >> 7,local_6));
      }
      if (local_8 == '\a') {
        if (local_4 < '\x04') {
          local_a = local_4 + '\x04';
        }
        else {
          local_a = local_4 + -4;
        }
        iVar1 = (int)local_a;
        M007_PUTSTATE(uVar7,(int)*(char *)(iVar1 + 0x10));
        iVar1 = iVar1 * 4;
        M007_PUTVALUE(0x1010,*(undefined2 *)(iVar1 + 0x22),*(undefined2 *)(iVar1 + 0x24));
        M007_PUTVALUE(0x1010,*(undefined2 *)(iVar1 + 0x42),*(undefined2 *)(iVar1 + 0x44));
        uVar7 = 0x1010;
        M007_PUTSTATE(0x1010,param_1);
      }
    }
    else {
      *(undefined1 *)(local_4 + 0x86) = (undefined1)param_1;
      *(char *)(local_4 + 0x150) = local_6;
      uVar7 = 0x1000;
      FUN_1000_6b38((int)local_4,CONCAT11(local_4 >> 7,local_6));
    }
    uVar6 = 0x6d;
    iVar1 = (int)local_4;
    M007_PUTSTATE(uVar7,(int)*(char *)(iVar1 + 0x10));
    uVar5 = 0xbd;
    iVar3 = iVar1 * 4;
    M007_PUTVALUE(0x1010,*(undefined2 *)(iVar3 + 0x22),*(undefined2 *)(iVar3 + 0x24));
    uVar4 = 0xbe;
    M007_PUTVALUE(0x1010,*(undefined2 *)(iVar3 + 0x42),*(undefined2 *)(iVar3 + 0x44));
    uVar8 = 0x65;
    M007_PUTSTATE(0x1010,param_1);
    uVar7 = 0x1010;
    iVar3 = M007_GETSTATE(0x1010,0xab,uVar8,uVar4,uVar5,uVar6);
    if (iVar3 == 0) {
      uVar7 = 0x1000;
      SWITCHDETECTOR_TYPE((int)*(char *)(iVar1 + 0x150));
    }
    uVar8 = 0xc4;
    puVar2 = (undefined2 *)M007_GETVALUE(uVar7,local_e);
    SETCOLLECTOR_BIAS(*puVar2,puVar2[1]);
    UPDATE_DETECTORS(uVar8);
    iVar1 = (int)local_6;
    iVar3 = iVar1 * 0x20;
    FUN_1000_639c(iVar1,*(undefined2 *)(iVar3 + 0x15c),*(undefined2 *)(iVar3 + 0x15e));
    FUN_1000_6356(iVar1,*(undefined2 *)(iVar3 + 0x158),*(undefined2 *)(iVar3 + 0x15a));
  }
  return;
}


// ---- SWITCHDETECTOR_TYPE @ 1000:34e2

void __stdcall16far SWITCHDETECTOR_TYPE(int param_1)

{
  int iVar1;
  undefined2 unaff_CS;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x66;
  M007_PUTSTATE(unaff_CS,param_1);
  iVar1 = M007_GETSTATE(0x1010,0x8c,uVar2,uVar3);
  if (iVar1 != 6) {
    if (param_1 == 1) {
      M007_PUTVALUE(0x1010,(float)DAT_1008_0398);
    }
    if (param_1 == 2) {
      M007_PUTVALUE(0x1010,(float)DAT_1008_039a);
    }
  }
  param_1 = param_1 * 0x20;
  M007_PUTSTATE(0x1010,*(undefined2 *)(param_1 + 0x168));
  M007_PUTVALUE(0x1010,*(undefined2 *)(param_1 + 0x160),*(undefined2 *)(param_1 + 0x162));
  M007_PUTVALUE(0x1010,*(undefined2 *)(param_1 + 0x164),*(undefined2 *)(param_1 + 0x166));
  M007_PUTVALUE(0x1010,*(undefined2 *)(param_1 + 0x15c),*(undefined2 *)(param_1 + 0x15e));
  M007_PUTVALUE(0x1010,*(undefined2 *)(param_1 + 0x158),*(undefined2 *)(param_1 + 0x15a));
  return;
}


// ---- DOCOMMANDSCM_IMAGE @ 1000:3598

void __cdecl16far DOCOMMANDSCM_IMAGE(void)

{
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  
  uVar2 = 0x1008;
  uVar1 = 0x67;
  M007_PUTSTATE(unaff_CS,0);
  FUN_1000_5d1c(0,uVar1,uVar2);
  return;
}


// ---- DOCOMMANDSCM_MEASURE @ 1000:35b6

void __cdecl16far DOCOMMANDSCM_MEASURE(void)

{
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  
  uVar2 = 0x1008;
  uVar1 = 0x67;
  M007_PUTSTATE(unaff_CS,1);
  FUN_1000_5d1c(1,uVar1,uVar2);
  return;
}


// ---- SWITCHLUT_DESTINATION @ 1000:35d4

void __stdcall16far SWITCHLUT_DESTINATION(int param_1)

{
  char cVar1;
  undefined2 unaff_CS;
  undefined2 in_stack_0000fff0;
  undefined2 uVar2;
  
  if ((param_1 < 8) || (0xd < param_1)) {
    cVar1 = M007_GETSTATE();
    M007_PUTSTATE(0x1010,0);
    uVar2 = *(undefined2 *)(cVar1 * 4 + 100);
    in_stack_0000fff0 = *(undefined2 *)(cVar1 * 4 + 0x62);
  }
  else {
    M007_PUTSTATE(unaff_CS,param_1);
    uVar2 = DAT_1008_0082;
  }
  M007_PUTVALUE(0x1010,in_stack_0000fff0,uVar2);
  return;
}


// ---- SWITCHLUT_SOURCE_A @ 1000:3632

void __stdcall16far SWITCHLUT_SOURCE_A(undefined2 param_1)

{
  undefined2 unaff_CS;
  
  M007_PUTSTATE(unaff_CS,param_1);
  return;
}


// ---- SWITCHLUT_SOURCE_B @ 1000:364a

void __stdcall16far SWITCHLUT_SOURCE_B(undefined2 param_1)

{
  undefined2 unaff_CS;
  
  M007_PUTSTATE(unaff_CS,param_1);
  return;
}


// ---- SWITCHMIXING @ 1000:3662

void __stdcall16far SWITCHMIXING(undefined2 param_1)

{
  undefined1 extraout_AH;
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  
  uVar2 = 0x1008;
  uVar1 = 0x6b;
  M007_PUTSTATE(unaff_CS,param_1);
  FUN_1000_5e8e(CONCAT11(extraout_AH,(undefined1)param_1),uVar1,uVar2);
  UPDATE_DETECTORS();
  return;
}


// ---- SWITCHWINDOW @ 1000:368a

void __stdcall16far SWITCHWINDOW(uint param_1)

{
  int iVar1;
  undefined2 unaff_CS;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x6c;
  M007_PUTSTATE(unaff_CS,param_1);
  if (param_1 == 1) {
    iVar1 = M007_GETSTATE(0x1010,0x11,uVar2,uVar3);
    if (iVar1 < 3) {
      iVar1 = COMMANDENABLE(0x1010,0x20);
      if (iVar1 == 0) {
        DOCOMMANDSCANRATE3(0x1010);
      }
      else {
        iVar1 = COMMANDENABLE(0x1010,0x21);
        if (iVar1 == 0) {
          DOCOMMANDSCANRATE4(0x1010);
        }
        else {
          DOCOMMANDSCANRATE5(0x1010);
        }
      }
    }
  }
  FUN_1000_5fb4(param_1 & 0xff);
  return;
}


// ---- SWITCHINVERT @ 1000:36e8

void __stdcall16far SWITCHINVERT(undefined2 param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  char local_8;
  char local_6;
  
  uVar5 = 0x1008;
  uVar4 = 100;
  cVar1 = M007_GETSTATE();
  iVar2 = M007_GETSTATE(0x1010,0xa3,uVar4,uVar5);
  if (iVar2 + -1 != 0) {
    uVar4 = 0x1000;
    FUN_1000_5ed2(cVar1,CONCAT11((char)((uint)(iVar2 + -1) >> 8),(undefined1)param_1));
    *(undefined1 *)(cVar1 + 0x10) = (undefined1)param_1;
    goto LAB_1000_3781;
  }
  iVar3 = M007_GETSTATE(0x1010,0x23);
  iVar2 = 0;
  if (iVar3 == 1) {
LAB_1000_3711:
    local_6 = '\a';
  }
  else {
    iVar2 = M007_GETSTATE(0x1010,0x70);
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) goto LAB_1000_3711;
    local_6 = '\x03';
  }
  uVar5 = 0x1010;
  local_8 = '\0';
  while( true ) {
    if (local_6 < local_8) break;
    uVar5 = 0x1000;
    FUN_1000_5ed2(local_8,CONCAT11((char)((uint)iVar2 >> 8),(undefined1)param_1));
    iVar2 = CONCAT11(local_8 >> 7,(undefined1)param_1);
    *(undefined1 *)(local_8 + 0x10) = (undefined1)param_1;
    local_8 = local_8 + '\x01';
  }
  uVar4 = uVar5;
  if (local_6 == '\a') {
    uVar4 = 0x1010;
    M007_PUTSTATE(uVar5,param_1);
  }
LAB_1000_3781:
  M007_PUTSTATE(uVar4,param_1);
  return;
}


// ---- SWITCHAUTO_VIDEO @ 1000:3790

void __stdcall16far SWITCHAUTO_VIDEO(undefined2 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  int local_4;
  
  uVar3 = 0x1008;
  uVar2 = 0x110;
  iVar1 = M007_GETSTATE();
  if ((iVar1 != 1) && (iVar1 = M007_GETSTATE(0x1010,0x83,uVar2,uVar3), iVar1 != 1)) {
    return;
  }
  uVar2 = 0x1010;
  iVar1 = M007_GETSTATE(0x1010,0x66);
  if (*(char *)(iVar1 + 0x9e) == '\x01') {
    *(undefined2 *)(iVar1 * 0x20 + 0x168) = param_1;
    FUN_1000_663a(iVar1,param_1);
    uVar2 = 0x6e;
    M007_PUTSTATE(0x1000,param_1);
  }
  DAT_1008_06a0 = 0;
  for (local_4 = 0; local_4 < 0x12; local_4 = local_4 + 1) {
    if (*(int *)(local_4 * 0x20 + 0x168) != 0) {
      DAT_1008_06a0 = 1;
    }
  }
  if (DAT_1008_06a0 != DAT_1008_069e) {
    FUN_1000_62f4(DAT_1008_06a0,uVar2);
    DAT_1008_069e = DAT_1008_06a0;
  }
  return;
}


// ---- SETK1 @ 1000:3828

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __stdcall16far SETK1(float param_1)

{
  char cVar1;
  int iVar2;
  undefined1 extraout_AH;
  undefined1 extraout_AH_00;
  undefined2 uVar3;
  undefined2 uVar4;
  char local_8;
  char local_6;
  
  uVar4 = 0x1008;
  uVar3 = 100;
  cVar1 = M007_GETSTATE();
  iVar2 = M007_GETSTATE(0x1010,0xa3,uVar3,uVar4);
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  if (iVar2 == 1) {
    uVar4 = 0x1010;
    iVar2 = M007_GETSTATE(0x1010,0x23);
    if (iVar2 == 1) {
      local_6 = '\a';
    }
    else {
      local_6 = '\x03';
    }
    for (local_8 = '\0'; local_8 <= local_6; local_8 = local_8 + '\x01') {
      iVar2 = local_8 * 4;
      *(float *)(iVar2 + 0xb0) = param_1;
      *(float *)(iVar2 + 0xd0) = _DAT_1008_0a36 - param_1;
      FUN_1000_5bc8(0,local_8,SUB42(param_1,0),uVar3);
      uVar4 = 0x1000;
      FUN_1000_5bc8(1,CONCAT11(extraout_AH,local_8),*(undefined2 *)(iVar2 + 0xd0),
                    *(undefined2 *)(iVar2 + 0xd2));
    }
  }
  else {
    iVar2 = cVar1 * 4;
    *(float *)(iVar2 + 0xb0) = param_1;
    *(float *)(iVar2 + 0xd0) = _DAT_1008_0a36 - param_1;
    FUN_1000_5bc8(0,cVar1,SUB42(param_1,0),uVar3);
    uVar4 = 0x1000;
    FUN_1000_5bc8(1,CONCAT11(extraout_AH_00,cVar1),*(undefined2 *)(iVar2 + 0xd0),
                  *(undefined2 *)(iVar2 + 0xd2));
  }
  iVar2 = cVar1 * 4;
  M007_PUTVALUE(uVar4,*(undefined2 *)(iVar2 + 0xb0),*(undefined2 *)(iVar2 + 0xb2));
  M007_PUTVALUE(0x1010,*(undefined2 *)(iVar2 + 0xd0),*(undefined2 *)(iVar2 + 0xd2));
  return;
}


// ---- SETK2 @ 1000:3954

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __stdcall16far SETK2(float param_1)

{
  float fVar1;
  char cVar2;
  int iVar3;
  undefined1 extraout_AH;
  undefined1 extraout_AH_00;
  undefined2 uVar4;
  undefined2 uVar5;
  char local_8;
  char local_6;
  
  uVar5 = 0x1008;
  uVar4 = 100;
  cVar2 = M007_GETSTATE();
  iVar3 = M007_GETSTATE(0x1010,0xa3,uVar4,uVar5);
  if (iVar3 == 1) {
    uVar4 = 0x1010;
    iVar3 = M007_GETSTATE(0x1010,0x23);
    if (iVar3 == 1) {
      local_6 = '\a';
    }
    else {
      local_6 = '\x03';
    }
    for (local_8 = '\0'; local_8 <= local_6; local_8 = local_8 + '\x01') {
      fVar1 = _DAT_1008_0a36 - param_1;
      iVar3 = local_8 * 4;
      *(float *)(iVar3 + 0xb0) = fVar1;
      *(float *)(iVar3 + 0xd0) = param_1;
      FUN_1000_5bc8(0,local_8,fVar1);
      uVar4 = 0x1000;
      FUN_1000_5bc8(1,CONCAT11(extraout_AH,local_8),*(undefined2 *)(iVar3 + 0xd0),
                    *(undefined2 *)(iVar3 + 0xd2));
    }
  }
  else {
    fVar1 = _DAT_1008_0a36 - param_1;
    iVar3 = cVar2 * 4;
    *(float *)(iVar3 + 0xb0) = fVar1;
    *(float *)(iVar3 + 0xd0) = param_1;
    FUN_1000_5bc8(0,cVar2,fVar1);
    uVar4 = 0x1000;
    FUN_1000_5bc8(1,CONCAT11(extraout_AH_00,cVar2),*(undefined2 *)(iVar3 + 0xd0),
                  *(undefined2 *)(iVar3 + 0xd2));
  }
  iVar3 = cVar2 * 4;
  M007_PUTVALUE(uVar4,*(undefined2 *)(iVar3 + 0xb0),*(undefined2 *)(iVar3 + 0xb2));
  M007_PUTVALUE(0x1010,*(undefined2 *)(iVar3 + 0xd0),*(undefined2 *)(iVar3 + 0xd2));
  return;
}


// ---- SETALPHA @ 1000:3a90

void __stdcall16far SETALPHA(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 local_c;
  undefined2 uStack_a;
  undefined1 local_8;
  undefined1 local_6;
  
  uVar4 = 0x1008;
  uVar3 = 100;
  cVar1 = M007_GETSTATE();
  iVar2 = M007_GETSTATE(0x1010,0xc1,uVar3,uVar4);
  if (iVar2 != 1) {
    iVar2 = M007_GETSTATE(0x1010,0xa3);
    local_c = (undefined2)param_1;
    uStack_a = (undefined2)((ulong)param_1 >> 0x10);
    if (iVar2 + -1 == 0) {
      uVar3 = 0x1010;
      iVar2 = M007_GETSTATE(0x1010,0x23);
      iVar2 = iVar2 + -1;
      if (iVar2 == 0) {
        local_6 = '\a';
      }
      else {
        local_6 = '\x03';
      }
      for (local_8 = '\0'; local_8 <= local_6; local_8 = local_8 + '\x01') {
        uVar3 = 0x1000;
        FUN_1000_5bc8(2,CONCAT11((char)((uint)iVar2 >> 8),local_8),local_c,uStack_a);
        iVar2 = (int)local_8;
        *(undefined4 *)(iVar2 * 4 + 0xf0) = param_1;
      }
    }
    else {
      uVar3 = 0x1000;
      FUN_1000_5bc8(2,CONCAT11((char)((uint)(iVar2 + -1) >> 8),cVar1),local_c,uStack_a);
      *(undefined4 *)(cVar1 * 4 + 0xf0) = param_1;
    }
    M007_PUTVALUE(uVar3,*(undefined2 *)(cVar1 * 4 + 0xf0),*(undefined2 *)(cVar1 * 4 + 0xf2));
  }
  return;
}


// ---- SETBETA @ 1000:3b66

void __stdcall16far SETBETA(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 local_c;
  undefined2 uStack_a;
  undefined1 local_8;
  undefined1 local_6;
  
  uVar4 = 0x1008;
  uVar3 = 100;
  cVar1 = M007_GETSTATE();
  iVar2 = M007_GETSTATE(0x1010,0xc1,uVar3,uVar4);
  if (iVar2 != 1) {
    iVar2 = M007_GETSTATE(0x1010,0xa3);
    local_c = (undefined2)param_1;
    uStack_a = (undefined2)((ulong)param_1 >> 0x10);
    if (iVar2 + -1 == 0) {
      uVar3 = 0x1010;
      iVar2 = M007_GETSTATE(0x1010,0x23);
      iVar2 = iVar2 + -1;
      if (iVar2 == 0) {
        local_6 = '\a';
      }
      else {
        local_6 = '\x03';
      }
      for (local_8 = '\0'; local_8 <= local_6; local_8 = local_8 + '\x01') {
        uVar3 = 0x1000;
        FUN_1000_5bc8(3,CONCAT11((char)((uint)iVar2 >> 8),local_8),local_c,uStack_a);
        iVar2 = (int)local_8;
        *(undefined4 *)(iVar2 * 4 + 0x110) = param_1;
      }
    }
    else {
      uVar3 = 0x1000;
      FUN_1000_5bc8(3,CONCAT11((char)((uint)(iVar2 + -1) >> 8),cVar1),local_c,uStack_a);
      *(undefined4 *)(cVar1 * 4 + 0x110) = param_1;
    }
    M007_PUTVALUE(uVar3,*(undefined2 *)(cVar1 * 4 + 0x110),*(undefined2 *)(cVar1 * 4 + 0x112));
  }
  return;
}


// ---- SETNR_COEFF @ 1000:3c3c

void __stdcall16far SETNR_COEFF(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  char local_a;
  char local_8;
  char local_6;
  
  iVar2 = FUN_1000_015a(0x1008);
  iVar3 = M007_GETSTATE(0x1000,0xc1);
  if (iVar3 != 1) {
    uVar4 = 0xe4;
    M007_PUTVALUE(0x1010,(float)iVar2);
    iVar3 = M007_GETSTATE(0x1010,0x5d,uVar4);
    local_a = (char)iVar2;
    if (iVar3 == 2) {
      iVar3 = M007_GETSTATE(0x1010,0xa3);
      if (iVar3 == 1) {
        DOCOMMANDUNFREEZE_ALL();
        iVar3 = M007_GETSTATE(0x1000,0x23);
        if (iVar3 == 1) {
          local_6 = '\a';
        }
        else {
          local_6 = '\x03';
        }
        for (local_8 = '\0'; local_8 <= local_6; local_8 = local_8 + '\x01') {
          *(char *)(local_8 + 0x18) = local_a + -1;
        }
      }
      else {
        DOCOMMANDUNFREEZE_ZONE();
        cVar1 = M007_GETSTATE(0x1000,100);
        *(char *)(cVar1 + 0x18) = local_a + -1;
      }
      uVar4 = 0xb9;
      M007_PUTVALUE(0x1010,(float)iVar2);
      DAT_1008_0020 = 0;
      FUN_1000_5c36(0x18,0x1008,uVar4);
    }
    else if (iVar3 == 5) {
      iVar3 = M007_GETSTATE(0x1010,0xa3);
      if (iVar3 == 1) {
        DOCOMMANDUNFREEZE_ALL();
      }
      else {
        DOCOMMANDUNFREEZE_ZONE();
      }
      uVar4 = 0xe3;
      M007_PUTVALUE(0x1000,(float)iVar2);
      FUN_1000_5bfc(local_a + -1,0,uVar4);
    }
  }
  return;
}


// ---- SETFRAME_AVERAGE_COUNT @ 1000:3d58

void __stdcall16far SETFRAME_AVERAGE_COUNT(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined1 local_a;
  undefined1 local_8;
  undefined1 local_4;
  
  iVar2 = FUN_1000_015a(0x1008);
  cVar1 = M007_GETSTATE(0x1000,100);
  iVar3 = M007_GETSTATE(0x1010,0xc1);
  if (iVar3 != 1) {
    iVar3 = M007_GETSTATE(0x1010,0xa3);
    local_4 = (char)iVar2;
    if (iVar3 == 1) {
      iVar3 = M007_GETSTATE(0x1010,0x23);
      if (iVar3 == 1) {
        local_8 = '\a';
      }
      else {
        local_8 = '\x03';
      }
      for (local_a = '\0'; local_a <= local_8; local_a = local_a + '\x01') {
        *(char *)(local_a + 0x18) = local_4 + -1;
      }
    }
    else {
      *(char *)(cVar1 + 0x18) = local_4 + -1;
    }
    uVar5 = 0xb9;
    M007_PUTVALUE(0x1010,(float)iVar2);
    uVar4 = 0x3df4;
    iVar3 = M007_GETSTATE(0x1010,0x5d,uVar5);
    if (iVar3 == 2) {
      iVar3 = M007_GETSTATE(0x1010,0xa3);
      if (iVar3 == 1) {
        DOCOMMANDUNFREEZE_ALL();
      }
      else {
        DOCOMMANDUNFREEZE_ZONE();
      }
      DAT_1008_0020 = 0;
      FUN_1000_5c36();
      uVar4 = 0xe4;
      M007_PUTVALUE();
    }
    iVar3 = M007_GETSTATE(0x1010,0x5d,uVar4);
    if ((iVar3 == 0) || (iVar3 == 4)) {
      DOCOMMANDFRAME_INT();
      M007_PUTVALUE(0x1000,(float)iVar2);
    }
  }
  return;
}


// ---- SETFRAME_INT_COUNT @ 1000:3e6e

undefined2 __stdcall16far SETFRAME_INT_COUNT(void)

{
  return 0x1008;
}


// ---- SETLINE_INT_COUNT @ 1000:3e7c

undefined2 __stdcall16far SETLINE_INT_COUNT(void)

{
  return 0x1008;
}


// ---- SETLINE_AVERAGE_COUNT @ 1000:3e8a

void __stdcall16far SETLINE_AVERAGE_COUNT(void)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  iVar1 = FUN_1000_015a(0x1008);
  iVar2 = M007_GETSTATE(0x1000,0xc1,uVar3,iVar1);
  if (iVar2 != 1) {
    uVar3 = 0xe3;
    M007_PUTVALUE(0x1010,(float)iVar1);
    iVar2 = M007_GETSTATE(0x1010,0x5d,uVar3);
    if (iVar2 == 5) {
      iVar2 = M007_GETSTATE(0x1010,0xa3);
      if (iVar2 == 1) {
        DOCOMMANDUNFREEZE_ALL();
      }
      else {
        DOCOMMANDUNFREEZE_ZONE();
      }
      FUN_1000_5bfc();
      M007_PUTVALUE(0x1000,(float)iVar1);
    }
  }
  return;
}


// ---- SETGAMMA @ 1000:3f12

void __stdcall16far SETGAMMA(undefined2 param_1,undefined2 param_2)

{
  char cVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined1 local_6;
  undefined1 local_4;
  
  uVar5 = 0x1008;
  uVar4 = 0x68;
  cVar1 = M007_GETSTATE();
  if ((cVar1 < '\b') || ('\r' < cVar1)) {
    iVar2 = M007_GETSTATE(0x1010,0xa3,uVar4,uVar5);
    if (iVar2 == 1) {
      iVar2 = M007_GETSTATE(0x1010,0x23);
      if (iVar2 == 1) {
        local_6 = '\a';
      }
      else {
        local_6 = '\x03';
      }
      for (local_4 = '\0'; local_4 <= local_6; local_4 = local_4 + '\x01') {
        *(undefined2 *)(local_4 * 4 + 0x62) = param_1;
        *(undefined2 *)(local_4 * 4 + 100) = param_2;
      }
      iVar2 = M007_GETSTATE(0x1010,0x23);
      if (iVar2 == 1) {
        uVar3 = 0x1010;
        iVar2 = M007_GETSTATE(0x1010,0x113);
        if (iVar2 != 1) goto LAB_1000_4019;
        uVar4 = 0xf;
      }
      else {
        uVar3 = 0x1010;
        iVar2 = M007_GETSTATE(0x1010,0x113);
        if (iVar2 != 1) goto LAB_1000_4019;
        uVar4 = 0xe;
      }
      uVar3 = 0x1000;
      FUN_1000_5c80(uVar4,param_1,param_2);
    }
    else {
      cVar1 = M007_GETSTATE(0x1010,100);
      uVar3 = 0x1010;
      iVar2 = M007_GETSTATE(0x1010,0x113);
      if (iVar2 == 1) {
        uVar3 = 0x1000;
        FUN_1000_5c80(cVar1,param_1,param_2);
      }
      *(undefined2 *)(cVar1 * 4 + 0x62) = param_1;
      *(undefined2 *)(cVar1 * 4 + 100) = param_2;
    }
  }
  else {
    uVar3 = 0x1010;
    iVar2 = M007_GETSTATE(0x1010,0x113,uVar4,uVar5);
    if (iVar2 == 1) {
      uVar3 = 0x1000;
      FUN_1000_5c80(cVar1,param_1,param_2);
    }
    DAT_1008_0082 = param_1;
    DAT_1008_0084 = param_2;
  }
LAB_1000_4019:
  M007_PUTVALUE(uVar3,param_1,param_2);
  return;
}


// ---- SETGAIN @ 1000:402c

void __stdcall16far SETGAIN(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined1 local_8;
  undefined1 local_6;
  
  uVar5 = 0x1008;
  uVar4 = 100;
  cVar1 = M007_GETSTATE();
  iVar2 = M007_GETSTATE(0x1010,0xa3,uVar4,uVar5);
  if (iVar2 + -1 != 0) {
    uVar4 = 0x1000;
    FUN_1000_5ef6(CONCAT11((char)((uint)(iVar2 + -1) >> 8),cVar1),(undefined2)param_1,param_1._2_2_)
    ;
    *(undefined4 *)(cVar1 * 4 + 0x22) = param_1;
    goto LAB_1000_40ee;
  }
  iVar3 = M007_GETSTATE(0x1010,0x23);
  iVar2 = 0;
  if (iVar3 == 1) {
LAB_1000_4055:
    local_6 = '\a';
  }
  else {
    iVar2 = M007_GETSTATE(0x1010,0x70);
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) goto LAB_1000_4055;
    local_6 = '\x03';
  }
  uVar5 = 0x1010;
  local_8 = '\0';
  while( true ) {
    if (local_6 < local_8) break;
    uVar5 = 0x1000;
    FUN_1000_5ef6(CONCAT11((char)((uint)iVar2 >> 8),local_8),(undefined2)param_1,param_1._2_2_);
    iVar2 = (int)local_8;
    *(undefined4 *)(iVar2 * 4 + 0x22) = param_1;
    local_8 = local_8 + '\x01';
  }
  uVar4 = uVar5;
  if (local_6 == '\a') {
    uVar4 = 0x1010;
    M007_PUTVALUE(uVar5,(undefined2)param_1,param_1._2_2_);
  }
LAB_1000_40ee:
  M007_PUTVALUE(uVar4,(undefined2)param_1,param_1._2_2_);
  return;
}


// ---- SETOFFSET @ 1000:4102

void __stdcall16far SETOFFSET(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined1 local_8;
  undefined1 local_6;
  
  uVar5 = 0x1008;
  uVar4 = 100;
  cVar1 = M007_GETSTATE();
  iVar2 = M007_GETSTATE(0x1010,0xa3,uVar4,uVar5);
  if (iVar2 + -1 != 0) {
    uVar4 = 0x1000;
    FUN_1000_5f40(CONCAT11((char)((uint)(iVar2 + -1) >> 8),cVar1),(undefined2)param_1,param_1._2_2_)
    ;
    *(undefined4 *)(cVar1 * 4 + 0x42) = param_1;
    goto LAB_1000_41c4;
  }
  iVar3 = M007_GETSTATE(0x1010,0x23);
  iVar2 = 0;
  if (iVar3 == 1) {
LAB_1000_412b:
    local_6 = '\a';
  }
  else {
    iVar2 = M007_GETSTATE(0x1010,0x70);
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) goto LAB_1000_412b;
    local_6 = '\x03';
  }
  uVar5 = 0x1010;
  local_8 = '\0';
  while( true ) {
    if (local_6 < local_8) break;
    uVar5 = 0x1000;
    FUN_1000_5f40(CONCAT11((char)((uint)iVar2 >> 8),local_8),(undefined2)param_1,param_1._2_2_);
    iVar2 = (int)local_8;
    *(undefined4 *)(iVar2 * 4 + 0x42) = param_1;
    local_8 = local_8 + '\x01';
  }
  uVar4 = uVar5;
  if (local_6 == '\a') {
    uVar4 = 0x1010;
    M007_PUTVALUE(uVar5,(undefined2)param_1,param_1._2_2_);
  }
LAB_1000_41c4:
  M007_PUTVALUE(uVar4,(undefined2)param_1,param_1._2_2_);
  return;
}


// ---- SETCONTRAST @ 1000:41d8

void __stdcall16far SETCONTRAST(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  uVar4 = 0x1008;
  uVar3 = 0x66;
  iVar1 = M007_GETSTATE();
  if (*(char *)(iVar1 + 0x9e) == '\x01') {
    *(undefined4 *)(iVar1 * 0x20 + 0x15c) = param_1;
    uVar2 = (undefined2)((ulong)param_1 >> 0x10);
    FUN_1000_639c(iVar1,(int)param_1,uVar2,uVar3,uVar4);
    M007_PUTVALUE(0x1000,(int)param_1,uVar2);
  }
  return;
}


// ---- SETAUTO_BRIGHT @ 1000:423c

void __stdcall16far SETAUTO_BRIGHT(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  uVar4 = 0x1008;
  uVar3 = 0x66;
  iVar1 = M007_GETSTATE();
  if (*(char *)(iVar1 + 0x9e) == '\x01') {
    *(undefined4 *)(iVar1 * 0x20 + 0x164) = param_1;
    uVar2 = (undefined2)((ulong)param_1 >> 0x10);
    FUN_1000_6430(iVar1,(int)param_1,uVar2,uVar3,uVar4);
    M007_PUTVALUE(0x1000,(int)param_1,uVar2);
  }
  return;
}


// ---- SETAUTO_CONTRAST @ 1000:42a0

void __stdcall16far SETAUTO_CONTRAST(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  uVar4 = 0x1008;
  uVar3 = 0x66;
  iVar1 = M007_GETSTATE();
  if (*(char *)(iVar1 + 0x9e) == '\x01') {
    *(undefined4 *)(iVar1 * 0x20 + 0x160) = param_1;
    uVar2 = (undefined2)((ulong)param_1 >> 0x10);
    FUN_1000_6402(iVar1,(int)param_1,uVar2,uVar3,uVar4);
    M007_PUTVALUE(0x1000,(int)param_1,uVar2);
  }
  return;
}


// ---- SETABC_BRIGHT @ 1000:4304

void __stdcall16far SETABC_BRIGHT(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  uVar4 = 0x1008;
  uVar3 = 0x66;
  iVar1 = M007_GETSTATE();
  if (*(char *)(iVar1 + 0x9e) == '\x01') {
    *(undefined4 *)(iVar1 * 0x20 + 0x170) = param_1;
    uVar2 = (undefined2)((ulong)param_1 >> 0x10);
    FUN_1000_648c(iVar1,(int)param_1,uVar2,uVar3,uVar4);
    M007_PUTVALUE(0x1000,(int)param_1,uVar2);
  }
  return;
}


// ---- SETABC_CONTR @ 1000:4368

void __stdcall16far SETABC_CONTR(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  uVar4 = 0x1008;
  uVar3 = 0x66;
  iVar1 = M007_GETSTATE();
  if (*(char *)(iVar1 + 0x9e) == '\x01') {
    *(undefined4 *)(iVar1 * 0x20 + 0x174) = param_1;
    uVar2 = (undefined2)((ulong)param_1 >> 0x10);
    FUN_1000_645e(iVar1,(int)param_1,uVar2,uVar3,uVar4);
    M007_PUTVALUE(0x1000,(int)param_1,uVar2);
  }
  return;
}


// ---- DOCOMMANDFREEZE_ZONE @ 1000:43cc

void __cdecl16far DOCOMMANDFREEZE_ZONE(void)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined1 local_c;
  undefined1 local_b;
  undefined1 local_a;
  undefined1 local_9;
  undefined1 local_8;
  undefined1 local_7;
  undefined1 local_6;
  undefined1 local_5;
  undefined1 local_4;
  
  uVar2 = 0x1008;
  uVar1 = 0x76;
  local_c = M007_GETSTATE();
  local_b = 2;
  local_a = 2;
  local_9 = 2;
  local_8 = 2;
  local_7 = 2;
  local_6 = 2;
  local_5 = 2;
  local_4 = 2;
  uVar1 = M007_GETSTATE(0x1010,100,uVar1,uVar2);
  switch(uVar1) {
  case 0:
    local_b = 1;
    break;
  case 1:
    local_a = 1;
    break;
  case 2:
    local_9 = 1;
    break;
  case 3:
    local_8 = 1;
    break;
  case 4:
    local_7 = 1;
    break;
  case 5:
    local_6 = 1;
    break;
  case 6:
    local_5 = 1;
    break;
  case 7:
    local_4 = 1;
  }
  FUN_1000_5fd4(&local_c);
  M007_PUTSTATE(0x1000,1);
  return;
}


// ---- DOCOMMANDUNFREEZE_ZONE @ 1000:446a

void __cdecl16far DOCOMMANDUNFREEZE_ZONE(void)

{
  undefined2 uVar1;
  undefined1 local_c;
  undefined1 local_b;
  undefined1 local_a;
  undefined1 local_9;
  undefined1 local_8;
  undefined1 local_7;
  undefined1 local_6;
  undefined1 local_5;
  undefined1 local_4;
  
  local_c = 2;
  local_b = 2;
  local_a = 2;
  local_9 = 2;
  local_8 = 2;
  local_7 = 2;
  local_6 = 2;
  local_5 = 2;
  local_4 = 2;
  uVar1 = M007_GETSTATE();
  switch(uVar1) {
  case 0:
    local_b = 0;
    break;
  case 1:
    local_a = 0;
    break;
  case 2:
    local_9 = 0;
    break;
  case 3:
    local_8 = 0;
    break;
  case 4:
    local_7 = 0;
    break;
  case 5:
    local_6 = 0;
    break;
  case 6:
    local_5 = 0;
    break;
  case 7:
    local_4 = 0;
  }
  FUN_1000_5fd4(&local_c);
  M007_PUTSTATE(0x1000,1);
  return;
}


// ---- DOCOMMANDFREEZE_CHANNEL @ 1000:4500

void __cdecl16far DOCOMMANDFREEZE_CHANNEL(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined1 local_c;
  undefined1 local_b;
  undefined1 local_a;
  undefined1 local_9;
  undefined1 local_8;
  undefined1 local_7;
  undefined1 local_6;
  undefined1 local_5;
  undefined1 local_4;
  
  uVar3 = 0x1008;
  uVar2 = 0x76;
  local_c = M007_GETSTATE();
  local_b = 2;
  local_a = 2;
  local_9 = 2;
  local_8 = 2;
  local_7 = 2;
  local_6 = 2;
  local_5 = 2;
  local_4 = 2;
  iVar1 = M007_GETSTATE(0x1010,0x75,uVar2,uVar3);
  if (iVar1 == 0) {
    local_b = 1;
    local_a = 1;
    local_9 = 1;
    local_8 = 1;
  }
  else {
    local_7 = 1;
    local_6 = 1;
    local_5 = 1;
    local_4 = 1;
  }
  FUN_1000_5fd4(&local_c);
  M007_PUTSTATE(0x1000,1);
  return;
}


// ---- DOCOMMANDUNFREEZE_CHANNEL @ 1000:4570

void __cdecl16far DOCOMMANDUNFREEZE_CHANNEL(void)

{
  int iVar1;
  undefined1 local_c;
  undefined1 local_b;
  undefined1 local_a;
  undefined1 local_9;
  undefined1 local_8;
  undefined1 local_7;
  undefined1 local_6;
  undefined1 local_5;
  undefined1 local_4;
  
  local_c = 2;
  local_b = 2;
  local_a = 2;
  local_9 = 2;
  local_8 = 2;
  local_7 = 2;
  local_6 = 2;
  local_5 = 2;
  local_4 = 2;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 0) {
    local_b = 0;
    local_a = 0;
    local_9 = 0;
    local_8 = 0;
  }
  else {
    local_7 = 0;
    local_6 = 0;
    local_5 = 0;
    local_4 = 0;
  }
  FUN_1000_5fd4(&local_c);
  M007_PUTSTATE(0x1000,1);
  return;
}


// ---- DOCOMMANDFREEZE_ALL @ 1000:45da

void __cdecl16far DOCOMMANDFREEZE_ALL(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined1 local_c;
  undefined1 local_b;
  undefined1 local_a;
  undefined1 local_9;
  undefined1 local_8;
  undefined1 local_7;
  undefined1 local_6;
  undefined1 local_5;
  undefined1 local_4;
  
  uVar3 = 0x1008;
  uVar2 = 0x76;
  local_c = M007_GETSTATE();
  local_b = 1;
  local_a = 1;
  local_9 = 1;
  local_8 = 1;
  local_7 = 2;
  local_6 = 2;
  local_5 = 2;
  local_4 = 2;
  iVar1 = M007_GETSTATE(0x1010,0x23,uVar2,uVar3);
  if (iVar1 != 1) {
    iVar1 = M007_GETSTATE(0x1010,0x23);
    if (iVar1 != 0) goto LAB_1000_4637;
    iVar1 = M007_GETSTATE(0x1010,0x70);
    if (iVar1 != 1) goto LAB_1000_4637;
  }
  local_7 = 1;
  local_6 = 1;
  local_5 = 1;
  local_4 = 1;
LAB_1000_4637:
  FUN_1000_5fd4(&local_c);
  M007_PUTSTATE(0x1000,1);
  return;
}


// ---- DOCOMMANDUNFREEZE_ALL @ 1000:4650

void __cdecl16far DOCOMMANDUNFREEZE_ALL(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined1 local_c;
  undefined1 local_b;
  undefined1 local_a;
  undefined1 local_9;
  undefined1 local_8;
  undefined1 local_7;
  undefined1 local_6;
  undefined1 local_5;
  undefined1 local_4;
  
  uVar3 = 0x1008;
  local_b = 0;
  local_a = 0;
  local_9 = 0;
  local_8 = 0;
  local_c = 2;
  local_7 = 2;
  local_6 = 2;
  local_5 = 2;
  local_4 = 2;
  uVar2 = 0x23;
  iVar1 = M007_GETSTATE();
  if (iVar1 != 1) {
    iVar1 = M007_GETSTATE(0x1010,0x23,uVar2,uVar3);
    if (iVar1 != 0) goto LAB_1000_46a6;
    iVar1 = M007_GETSTATE(0x1010,0x70);
    if (iVar1 != 1) goto LAB_1000_46a6;
  }
  local_7 = 0;
  local_6 = 0;
  local_5 = 0;
  local_4 = 0;
LAB_1000_46a6:
  FUN_1000_5fd4(&local_c);
  M007_PUTSTATE(0x1000,1);
  return;
}


// ---- DOCOMMANDABORT_FREEZE @ 1000:46c0

undefined2 __cdecl16far DOCOMMANDABORT_FREEZE(void)

{
  return 0x1008;
}


// ---- SWITCHMIXER @ 1000:46cc

void __stdcall16far SWITCHMIXER(int param_1)

{
  undefined2 unaff_CS;
  
  M007_PUTSTATE(unaff_CS,param_1);
  if (param_1 == 0) {
    SWITCHMAIN_DETECTOR(0);
  }
  return;
}


// ---- SWITCHCHANNEL_9 @ 1000:46f2

void __stdcall16far SWITCHCHANNEL_9(undefined2 param_1)

{
  undefined2 unaff_CS;
  
  M007_PUTSTATE(unaff_CS,param_1);
  return;
}


// ---- SWITCHINPUT_CONNECTOR @ 1000:470a

void __stdcall16far SWITCHINPUT_CONNECTOR(undefined2 param_1)

{
  undefined2 unaff_CS;
  
  M007_PUTSTATE(unaff_CS,param_1);
  return;
}


// ---- SWITCHCHANNEL @ 1000:4722

void __stdcall16far SWITCHCHANNEL(undefined2 param_1)

{
  undefined2 unaff_CS;
  
  M007_PUTSTATE(unaff_CS,param_1);
  return;
}


// ---- SWITCHFREEZE_ON @ 1000:473a

void __stdcall16far SWITCHFREEZE_ON(undefined2 param_1)

{
  undefined2 unaff_CS;
  
  M007_PUTSTATE(unaff_CS,param_1);
  return;
}


// ---- SETCOLLECTOR_BIAS @ 1000:4752

void __stdcall16far SETCOLLECTOR_BIAS(undefined2 param_1,undefined2 param_2)

{
  int iVar1;
  int iVar2;
  undefined2 local_4;
  
  local_4 = FUN_1000_015a(0x1008);
  iVar1 = M007_GETSTATE(0x1000,0x66);
  iVar2 = M007_GETSTATE(0x1010,0x14c);
  if (iVar2 == 0) {
    param_1 = DAT_1008_0a32;
    param_2 = DAT_1008_0a34;
    local_4 = 0;
  }
  if (*(char *)(iVar1 + 0x9e) != '\x01') {
    return;
  }
  iVar2 = M007_GETSTATE(0x1010,0x8c);
  if (iVar2 != 6) {
    if (iVar1 == 1) {
      DAT_1008_0398 = local_4;
      goto LAB_1000_47d1;
    }
    if (iVar1 != 2) {
      iVar1 = M007_GETSTATE(0x1010,0x105);
      if (iVar1 != 1) {
        return;
      }
      goto LAB_1000_47d1;
    }
  }
  DAT_1008_039a = local_4;
LAB_1000_47d1:
  FUN_1000_63e2(local_4);
  M007_PUTVALUE(0x1000,param_1,param_2);
  return;
}


// ---- RESTORE_ACQUIRE_CONFIG @ 1000:47ee

void __stdcall16far RESTORE_ACQUIRE_CONFIG(char *param_1)

{
  char *pcVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  SWITCHBSD_TYPE((int)*param_1);
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  pcVar1 = (char *)param_1;
  DAT_1008_03a6 = pcVar1[1];
  DAT_1008_03a7 = pcVar1[2];
  DAT_1008_03a8 = pcVar1[3];
  DAT_1008_03a9 = pcVar1[4];
  DOCOMMANDCOMPO(uVar3);
  return;
}


// ---- GET_ACQUIRE_CONFIG @ 1000:482e

void __stdcall16far GET_ACQUIRE_CONFIG(undefined1 *param_1)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined2 uVar3;
  
  uVar1 = M007_GETSTATE();
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  puVar2 = (undefined1 *)param_1;
  *param_1 = uVar1;
  puVar2[1] = DAT_1008_03a6;
  puVar2[2] = DAT_1008_03a7;
  puVar2[3] = DAT_1008_03a8;
  puVar2[4] = DAT_1008_03a9;
  return;
}


// ---- DOSTRUCTREAD_ZONE_DATA @ 1000:4866

void __stdcall16far DOSTRUCTREAD_ZONE_DATA(undefined1 *param_1,int param_2)

{
  undefined2 uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined2 uVar4;
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  puVar3 = (undefined1 *)param_1;
  puVar3[1] = *(undefined1 *)(param_2 + 0x86);
  iVar2 = param_2 * 4;
  *param_1 = *(undefined1 *)(param_2 + 0x150);
  uVar1 = *(undefined2 *)(iVar2 + 0xb2);
  *(undefined2 *)(puVar3 + 2) = *(undefined2 *)(iVar2 + 0xb0);
  *(undefined2 *)(puVar3 + 4) = uVar1;
  uVar1 = *(undefined2 *)(iVar2 + 0xd2);
  *(undefined2 *)(puVar3 + 6) = *(undefined2 *)(iVar2 + 0xd0);
  *(undefined2 *)(puVar3 + 8) = uVar1;
  uVar1 = *(undefined2 *)(iVar2 + 0xf2);
  *(undefined2 *)(puVar3 + 10) = *(undefined2 *)(iVar2 + 0xf0);
  *(undefined2 *)(puVar3 + 0xc) = uVar1;
  uVar1 = *(undefined2 *)(iVar2 + 0x112);
  *(undefined2 *)(puVar3 + 0xe) = *(undefined2 *)(iVar2 + 0x110);
  *(undefined2 *)(puVar3 + 0x10) = uVar1;
  uVar1 = *(undefined2 *)(iVar2 + 0x24);
  *(undefined2 *)(puVar3 + 0x12) = *(undefined2 *)(iVar2 + 0x22);
  *(undefined2 *)(puVar3 + 0x14) = uVar1;
  uVar1 = *(undefined2 *)(iVar2 + 0x44);
  *(undefined2 *)(puVar3 + 0x16) = *(undefined2 *)(iVar2 + 0x42);
  *(undefined2 *)(puVar3 + 0x18) = uVar1;
  puVar3[0x1a] = *(undefined1 *)(param_2 + 0x10);
  return;
}


// ---- DOSTRUCTREAD_DETECTOR_ZONE @ 1000:48fa

void __stdcall16far DOSTRUCTREAD_DETECTOR_ZONE(int param_1,undefined2 param_2)

{
  undefined1 local_4;
  
  local_4 = '\0';
  do {
    *(undefined1 *)(local_4 + param_1) = *(undefined1 *)(local_4 + 0x150);
    local_4 = local_4 + '\x01';
  } while (local_4 < '\b');
  return;
}


// ---- UPDATE_DETECTORS @ 1000:492c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far UPDATE_DETECTORS(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined2 in_DX;
  undefined2 *puVar5;
  undefined2 unaff_SS;
  undefined2 auStack_28 [6];
  undefined2 uStack_1c;
  undefined2 uStack_1a;
  undefined2 uStack_18;
  undefined2 uStack_16;
  
  FUN_1000_6bf6();
  uStack_16 = DAT_1008_0152;
  uStack_18 = DAT_1008_0150;
  uStack_1a = 0x1000;
  uStack_1c = 0x4952;
  FUN_1000_6618();
  puVar3 = (undefined2 *)FUN_1000_6e72();
  uStack_18 = *puVar3;
  uStack_16 = puVar3[1];
  uStack_1a = 0x1000;
  uStack_1c = 0x497a;
  puVar3 = (undefined2 *)FUN_1000_6f8c();
  puVar5 = (undefined2 *)&DAT_1008_0e18;
  for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    puVar1 = puVar3;
    puVar3 = puVar3 + 1;
    *puVar2 = *puVar1;
  }
  uStack_16 = 0x4994;
  iVar4 = M007_GETSTATE();
  if (iVar4 != 1) {
    uStack_16 = 0x1010;
    uStack_18 = 0x499e;
    iVar4 = M007_GETSTATE();
    if (iVar4 != 1) {
      uStack_16 = 0xa4;
      uStack_18 = 0x1010;
      uStack_1a = 0x49a9;
      iVar4 = M007_GETSTATE();
      if (iVar4 != 1) {
        uStack_18 = 0x1010;
        uStack_1a = 0x49b8;
        RESUME_AUTO_VIDEO_LEVEL();
        goto LAB_1000_49b8;
      }
    }
  }
  uStack_18 = 0x1010;
  uStack_1a = 0x49b1;
  SUSPEND_AUTO_VIDEO_LEVEL();
LAB_1000_49b8:
  puVar5 = auStack_28;
  puVar3 = (undefined2 *)&DAT_1008_0e18;
  for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    puVar1 = puVar3;
    puVar3 = puVar3 + 1;
    *puVar2 = *puVar1;
  }
  FUN_1000_6334();
  return;
}


// ---- SETBRIGHTNESS @ 1000:49d4

void __stdcall16far SETBRIGHTNESS(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  uVar4 = 0x1008;
  uVar3 = 0x66;
  iVar1 = M007_GETSTATE();
  if ((*(char *)(iVar1 + 0x9e) == '\x01') &&
     ((*(int *)(iVar1 * 0x20 + 0x168) == 0 || (*(int *)(iVar1 * 0x20 + 0x168) == 2)))) {
    *(undefined4 *)(iVar1 * 0x20 + 0x158) = param_1;
    uVar2 = 0x1e;
    M007_PUTVALUE(0x1010,param_1);
    FUN_1000_6356(iVar1,param_1,uVar2,uVar3,uVar4);
  }
  return;
}


// ---- SUSPEND_AUTO_VIDEO_LEVEL @ 1000:4a4c

void __cdecl16far SUSPEND_AUTO_VIDEO_LEVEL(void)

{
  FUN_1000_6314(1,0x1008);
  return;
}


// ---- RESUME_AUTO_VIDEO_LEVEL @ 1000:4a60

void __cdecl16far RESUME_AUTO_VIDEO_LEVEL(void)

{
  FUN_1000_6314(0,0x1008);
  return;
}


// ---- POINTINWINDOW @ 1000:4a74

undefined2 __stdcall16far POINTINWINDOW(undefined2 param_1,undefined2 param_2)

{
  char cVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  uVar4 = 0x1008;
  uVar3 = 0x75;
  iVar2 = M007_GETSTATE();
  cVar1 = FUN_1000_666c(param_2,param_1,iVar2,uVar3,uVar4);
  if (iVar2 == 0) {
    if (cVar1 == '\0') {
      uVar3 = 0;
    }
    else {
      uVar3 = 2;
    }
  }
  else if (cVar1 == '\0') {
    uVar3 = 4;
  }
  else {
    uVar3 = 6;
  }
  return uVar3;
}


// ---- FUN_1000_4abe @ 1000:4abe

void __cdecl16far FUN_1000_4abe(void)

{
  int iVar1;
  undefined1 extraout_AH;
  longdouble lVar2;
  long lVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 local_60;
  undefined2 local_5e;
  undefined1 local_5c [64];
  char local_1c;
  char local_1b;
  char local_1a;
  char local_19;
  undefined1 local_18;
  char local_17;
  char local_16;
  char local_15;
  char local_14;
  uint local_13;
  undefined1 local_f;
  byte local_e;
  byte local_d;
  char local_c;
  byte local_b;
  undefined2 local_a;
  undefined2 local_8;
  undefined2 local_6;
  undefined2 local_4;
  
  uVar5 = 0x1008;
  uVar4 = 0x118;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 6) {
    lVar3 = GETTICKCOUNT(0x1010,uVar4,uVar5);
    lVar2 = ((longdouble)(ulong)(lVar3 - CONCAT22(DAT_1008_03be,DAT_1008_03bc)) /
            (longdouble)CONCAT22(DAT_1008_03c2,DAT_1008_03c0)) * (longdouble)DAT_1008_0a3e;
    if ((longdouble)DAT_1008_0a3e <= lVar2) {
      M007_PUTVALUE(0x1010,DAT_1008_0a32,DAT_1008_0a34);
      M007_PUTSTATE(0x1010,0);
    }
    uVar4 = 0x154;
    M007_PUTVALUE(0x1010,(float)lVar2);
  }
  FUN_1000_66fe(local_5c);
  if ((local_13 & 1) != 0) {
    FUN_1000_69aa(CONCAT11(extraout_AH,local_f),uVar4);
  }
  if ((local_13 & 2) != 0) {
    FUN_1000_6a70(local_5c);
  }
  if ((local_13 & 4) != 0) {
    M007_PUTSTATE(0x1000,(int)local_1c);
    M007_PUTSTATE(0x1010,(int)local_1b);
    M007_PUTSTATE(0x1010,(int)local_1a);
    M007_PUTSTATE(0x1010,(int)local_19);
    M007_PUTSTATE();
    M007_PUTSTATE(0x1010,(int)local_17);
    M007_PUTSTATE(0x1010,(int)local_16);
    M007_PUTSTATE(0x1010,(int)local_15);
    M007_PUTSTATE(0x1010,(int)local_14);
    DAT_1008_039e = local_1b;
    DAT_1008_039f = local_1a;
    DAT_1008_03a0 = local_19;
    DAT_1008_03a1 = local_18;
    DAT_1008_03a2 = local_17;
    DAT_1008_03a3 = local_16;
    DAT_1008_03a4 = local_15;
    DAT_1008_03a5 = local_14;
  }
  if (((local_13 & 4) != 0) || ((local_13 & 1) != 0)) {
    UPDATE_DETECTORS();
  }
  FUN_1000_702e();
  uVar4 = 0x1000;
  iVar1 = M007_GETSTATE(0x1000,0x67);
  if (iVar1 == 1) {
    FUN_1000_6040(&local_60);
    uVar4 = 0xb4;
    M007_PUTVALUE(0x1000,local_60,local_5e);
  }
  if (((local_e & 0x80) != 0) && (iVar1 = M007_GETSTATE(0x1010,0,uVar4), iVar1 != 0)) {
    UIF_LOG(0x1010,0x6000,local_e & 0x7f,0);
  }
  FUN_1000_2644();
  uVar4 = 0x1000;
  FUN_1000_70c8();
  if ((local_13 & 8) != 0) {
    uVar4 = 0x1010;
    M007_PUTVALUE(0x1000,(float)local_d);
  }
  iVar1 = M007_GETSTATE(uVar4,0xe1);
  if (iVar1 == 1) {
    M007_PUTVALUE();
  }
  if ((local_13 & 0x10) != 0) {
    M007_PUTSTATE();
    M007_PUTVALUE(0x1010,(float)local_b);
    DAT_1008_03b2 = local_a;
    DAT_1008_03b4 = local_8;
    DAT_1008_03b6 = local_6;
    DAT_1008_03b8 = local_4;
    if (local_c == '\x03') {
      FUN_1000_68f6();
    }
  }
  return;
}


// ---- FUN_1000_4d64 @ 1000:4d64

void __cdecl16far FUN_1000_4d64(void)

{
  int iVar1;
  undefined2 unaff_SS;
  undefined2 local_10;
  undefined1 local_e;
  undefined2 local_d;
  undefined1 local_b;
  undefined2 local_a;
  undefined1 local_8;
  undefined2 local_7;
  undefined1 local_5;
  char local_4;
  
  local_10 = 0xf801;
  local_d = 0;
  local_e = 0;
  local_b = 0;
  local_a = 0xff;
  local_7 = 0x7ff;
  local_8 = 0xff;
  local_5 = 0xff;
  local_4 = '\0';
  do {
    iVar1 = (int)local_4;
    SWITCHZONE(iVar1);
    SETK1(DAT_1008_0a36,DAT_1008_0a38);
    SETDIFF(DAT_1008_0a32,DAT_1008_0a34);
    SWITCHLUT_DESTINATION(iVar1);
    DEFINE_LUT(&local_10,unaff_SS,4);
    local_4 = local_4 + '\x01';
  } while (local_4 < '\b');
  SWITCHZONE(0);
  SWITCHLUT_DESTINATION(0);
  DOCOMMANDFRAME_AVERAGE();
  return;
}


// ---- SWITCHIMPLIED_DETECTOR @ 1000:4df0

void __stdcall16far SWITCHIMPLIED_DETECTOR(int param_1)

{
  int iVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined1 local_a [4];
  char local_6;
  char local_4;
  
  uVar7 = 0x1008;
  uVar6 = 0x97;
  M007_PUTSTATE(unaff_CS,param_1);
  local_4 = M007_GETSTATE(0x1010,100,uVar6,uVar7);
  if (local_4 < '\x04') {
    local_4 = local_4 + '\x04';
  }
  else {
    local_4 = local_4 + -4;
  }
  *(undefined1 *)(local_4 + 0x86) = (undefined1)param_1;
  if ('\x03' < local_4) {
    param_1 = param_1 + 8;
  }
  local_6 = *(char *)(param_1 + 0x8e);
  FUN_1000_6b38((int)local_4,CONCAT11(local_4 >> 7,local_6));
  iVar1 = (int)local_4;
  *(char *)(iVar1 + 0x150) = local_6;
  uVar5 = 0x98;
  M007_PUTSTATE(0x1000,(int)*(char *)(iVar1 + 0x10));
  uVar4 = 0xd7;
  iVar3 = iVar1 * 4;
  M007_PUTVALUE(0x1010,*(undefined2 *)(iVar3 + 0x22),*(undefined2 *)(iVar3 + 0x24));
  uVar7 = 0xd8;
  M007_PUTVALUE(0x1010,*(undefined2 *)(iVar3 + 0x42),*(undefined2 *)(iVar3 + 0x44));
  uVar6 = 0x1010;
  iVar3 = M007_GETSTATE(0x1010,0xab,uVar7,uVar4,uVar5);
  if (iVar3 == 1) {
    uVar6 = 0x1000;
    SWITCHDETECTOR_TYPE((int)*(char *)(iVar1 + 0x150));
  }
  uVar7 = 0xc4;
  puVar2 = (undefined2 *)M007_GETVALUE(uVar6,local_a);
  SETCOLLECTOR_BIAS(*puVar2,puVar2[1]);
  UPDATE_DETECTORS(uVar7);
  iVar1 = (int)local_6;
  iVar3 = iVar1 * 0x20;
  FUN_1000_639c(iVar1,*(undefined2 *)(iVar3 + 0x15c),*(undefined2 *)(iVar3 + 0x15e));
  FUN_1000_6356(iVar1,*(undefined2 *)(iVar3 + 0x158),*(undefined2 *)(iVar3 + 0x15a));
  return;
}


// ---- SWITCHIMPLIED_INVERT @ 1000:4efe

void __stdcall16far SWITCHIMPLIED_INVERT(undefined2 param_1)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined1 local_4;
  
  uVar2 = 0x1008;
  uVar1 = 100;
  local_4 = M007_GETSTATE();
  if (local_4 < '\x04') {
    local_4 = local_4 + '\x04';
  }
  else {
    local_4 = local_4 + -4;
  }
  *(undefined1 *)(local_4 + 0x10) = (undefined1)param_1;
  FUN_1000_5ed2((int)local_4,CONCAT11(local_4 >> 7,(undefined1)param_1),uVar1,uVar2);
  M007_PUTSTATE(0x1000,param_1);
  return;
}


// ---- SETIMPLIED_GAIN @ 1000:4f4c

void __stdcall16far SETIMPLIED_GAIN(undefined4 param_1)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined1 local_4;
  
  uVar3 = 0x1008;
  uVar2 = 100;
  local_4 = M007_GETSTATE();
  if (local_4 < '\x04') {
    local_4 = local_4 + '\x04';
  }
  else {
    local_4 = local_4 + -4;
  }
  *(undefined4 *)(local_4 * 4 + 0x22) = param_1;
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_1000_5ef6((int)local_4,(int)param_1,uVar1,uVar2,uVar3);
  M007_PUTVALUE(0x1000,(int)param_1,uVar1);
  return;
}


// ---- SETIMPLIED_OFFSET @ 1000:4fbc

void __stdcall16far SETIMPLIED_OFFSET(undefined4 param_1)

{
  char extraout_AL;
  undefined1 extraout_AH;
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uStack_6;
  undefined1 local_4;
  
  uVar2 = 0x1008;
  uVar1 = 100;
  M007_GETSTATE();
  if (extraout_AL < '\x04') {
    local_4 = extraout_AL + '\x04';
  }
  else {
    local_4 = extraout_AL + -4;
  }
  uStack_6 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_1000_5f40(CONCAT11(extraout_AH,local_4),(int)param_1,uStack_6,uVar1,uVar2);
  *(undefined4 *)(local_4 * 4 + 0x42) = param_1;
  M007_PUTVALUE(0x1000,param_1);
  return;
}


// ---- SWITCHWINDOWING @ 1000:502c

void __stdcall16far SWITCHWINDOWING(int param_1)

{
  undefined1 extraout_AH;
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  
  uVar2 = 0x1008;
  if (param_1 == 1) {
    uVar1 = 0;
    Ordinal_13();
    Ordinal_16(0x1010,0,uVar1);
    unaff_CS = 0x1010;
    Ordinal_15(0x1010,0);
  }
  uVar1 = 0x20;
  M007_PUTSTATE(unaff_CS,param_1);
  FUN_1000_5e32(CONCAT11(extraout_AH,(undefined1)param_1),uVar1,uVar2);
  UPDATE_DETECTORS();
  return;
}


// ---- SWITCHALL_ZONES @ 1000:506e

void __stdcall16far SWITCHALL_ZONES(undefined2 param_1)

{
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  
  uVar2 = 0x1008;
  uVar1 = 0xa3;
  M007_PUTSTATE(unaff_CS,param_1);
  FUN_1000_6bf6(uVar1,uVar2);
  return;
}


// ---- SWITCHAUTO_VIDEO_ENABLE @ 1000:508c

undefined2 __stdcall16far SWITCHAUTO_VIDEO_ENABLE(void)

{
  return 0x1008;
}


// ---- SWITCHMAIN_DETECTOR @ 1000:509a

void __stdcall16far SWITCHMAIN_DETECTOR(int param_1)

{
  undefined1 local_4;
  
  local_4 = M007_GETSTATE();
  M007_PUTSTATE(0x1010,param_1);
  if (param_1 == 1) {
    if (local_4 < '\x04') {
      local_4 = local_4 + '\x04';
    }
    else {
      local_4 = local_4 + -4;
    }
  }
  SWITCHDETECTOR_TYPE((int)*(char *)(local_4 + 0x150));
  return;
}


// ---- CONTROL_XRAY @ 1000:50e6

void __stdcall16far CONTROL_XRAY(undefined2 param_1,undefined2 param_2,char param_3)

{
  undefined1 extraout_AH;
  int iVar1;
  undefined1 extraout_AH_00;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined1 local_14 [4];
  char local_10;
  undefined2 local_e;
  uint local_c;
  uint local_a;
  undefined2 uStack_8;
  undefined2 uStack_6;
  undefined1 uStack_4;
  
  uVar3 = 0x1008;
  local_c = DAT_1008_0018;
  local_a = DAT_1008_001a;
  uStack_8 = DAT_1008_001c;
  uStack_6 = DAT_1008_001e;
  uStack_4 = DAT_1008_0020;
  if (param_3 == '\0') {
    uVar2 = 0xc0;
    uVar3 = 0x1010;
    iVar1 = M007_GETSTATE();
    if (iVar1 != 2) {
      SWITCHPLANEA_FROZEN(0);
      uVar3 = 0x1000;
      SWITCHPLANEB_FROZEN(0);
    }
    iVar1 = M007_GETSTATE(uVar3,0xc1,uVar2);
    if (iVar1 != 0) {
      uVar3 = 0xc1;
      M007_PUTSTATE(0x1010,0);
      FUN_1000_68a8(0,0,0,0,uVar3);
      if (DAT_1008_039d == '\x02') {
        FUN_1000_5c36(0x18,0x1008);
      }
      else {
        uVar2 = 1;
        uVar3 = 0xe3;
        M007_GETVALUE(0x1000,local_14);
        local_e = FUN_1000_015a(uVar3,uVar2);
        FUN_1000_5bfc((char)local_e + -1);
      }
      for (local_10 = '\0'; local_10 < '\b'; local_10 = local_10 + '\x01') {
        iVar1 = local_10 * 4;
        FUN_1000_5bc8(2,(int)local_10,*(undefined2 *)(iVar1 + 0xf0),*(undefined2 *)(iVar1 + 0xf2));
        FUN_1000_5bc8(3,CONCAT11(extraout_AH,local_10),*(undefined2 *)(iVar1 + 0x110),
                      *(undefined2 *)(iVar1 + 0x112));
      }
    }
  }
  else {
    uVar2 = 0xc1;
    iVar1 = M007_GETSTATE();
    if (iVar1 == 1) {
      if (param_3 != '\x04') {
        return;
      }
    }
    else {
      DAT_1008_039d = M007_GETSTATE(0x1010,0x5d,uVar2,uVar3);
      iVar1 = M007_GETSTATE(0x1010,0xa3);
      if (iVar1 == 1) {
        DAT_1008_039c = 0xf;
        local_c = 0;
        local_a = 0;
      }
      else {
        iVar1 = M007_GETSTATE(0x1010,100);
        if (iVar1 == 0) {
          DAT_1008_039c = 1;
          local_c = local_c & 0xff00;
        }
        else if (iVar1 == 1) {
          DAT_1008_039c = 2;
          local_c = local_c & 0xff;
        }
        else if (iVar1 == 2) {
          DAT_1008_039c = 4;
          local_a = local_a & 0xff00;
        }
        else if (iVar1 == 3) {
          DAT_1008_039c = 8;
          local_a = local_a & 0xff;
        }
      }
      FUN_1000_5c36(&local_c);
      for (local_10 = '\0'; local_10 < '\b'; local_10 = local_10 + '\x01') {
        FUN_1000_5bc8(2,local_10,DAT_1008_0a32,DAT_1008_0a34);
        FUN_1000_5bc8(3,CONCAT11(extraout_AH_00,local_10),DAT_1008_0a36,DAT_1008_0a38);
      }
      if (param_3 == '\x04') {
        DAT_1008_039c = 0;
        SWITCHPLANEA_FROZEN(1);
        SWITCHPLANEB_FROZEN(1);
      }
      M007_PUTSTATE(0x1000,1);
    }
    FUN_1000_68a8();
  }
  return;
}


// ---- SWITCHPLANEA_FROZEN @ 1000:52e2

void __stdcall16far SWITCHPLANEA_FROZEN(uint param_1)

{
  uint uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 local_4;
  
  uVar3 = 0x1008;
  uVar2 = 0xbc;
  uVar1 = M007_GETSTATE();
  if (uVar1 != param_1) {
    local_4 = param_1 & 0xff;
    FUN_1000_68d4(0x200,local_4,uVar2,uVar3);
    M007_PUTSTATE(0x1000,param_1);
  }
  return;
}


// ---- SWITCHPLANEB_FROZEN @ 1000:5326

void __stdcall16far SWITCHPLANEB_FROZEN(int param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 local_6;
  
  uVar3 = 0x1008;
  uVar2 = 0xbd;
  iVar1 = M007_GETSTATE();
  if (iVar1 != param_1) {
    local_6 = param_1 << 8;
    FUN_1000_68d4(local_6,2,uVar2,uVar3);
    M007_PUTSTATE(0x1000,param_1);
  }
  return;
}


// ---- SETDIFF @ 1000:536a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __stdcall16far SETDIFF(float param_1)

{
  char cVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined1 local_8;
  undefined1 local_6;
  
  uVar4 = 0x1008;
  uVar3 = 100;
  cVar1 = M007_GETSTATE();
  iVar2 = M007_GETSTATE(0x1010,0xc1,uVar3,uVar4);
  if (iVar2 != 1) {
    iVar2 = M007_GETSTATE(0x1010,0xa3);
    if (iVar2 == 1) {
      iVar2 = M007_GETSTATE();
      if (iVar2 == 1) {
        local_6 = '\a';
      }
      else {
        local_6 = '\x03';
      }
      for (local_8 = '\0'; local_8 <= local_6; local_8 = local_8 + '\x01') {
        *(undefined2 *)(local_8 * 4 + 0x130) = param_1._0_2_;
        *(undefined2 *)(local_8 * 4 + 0x132) = param_1._2_2_;
      }
    }
    else {
      *(undefined2 *)(cVar1 * 4 + 0x130) = param_1._0_2_;
      *(undefined2 *)(cVar1 * 4 + 0x132) = param_1._2_2_;
    }
    SETBETA(param_1 * DAT_1008_0a42 + _DAT_1008_0a36);
    SETALPHA(param_1 * DAT_1008_0a46);
    M007_PUTVALUE(0x1000,*(undefined2 *)(cVar1 * 4 + 0x130),*(undefined2 *)(cVar1 * 4 + 0x132));
  }
  return;
}


// ---- SWITCHFROZEN @ 1000:5446

void __stdcall16far SWITCHFROZEN(void)

{
  DOCOMMANDTOGGLE_FREEZE(0x1008);
  return;
}


// ---- DOCOMMANDTOGGLE_FREEZE @ 1000:545a

void __cdecl16far DOCOMMANDTOGGLE_FREEZE(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0xa3;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    iVar1 = M007_GETSTATE(0x1010,0x73,uVar2,uVar3);
    if (iVar1 != 1) {
      DOCOMMANDFREEZE_ALL();
LAB_1000_548f:
      uVar2 = 1;
      goto LAB_1000_5482;
    }
    DOCOMMANDUNFREEZE_ALL();
  }
  else {
    uVar2 = M007_GETSTATE(0x1010,100,uVar2,uVar3);
    switch(uVar2) {
    case 0:
      iVar1 = M007_GETSTATE(0x1000,0x7b);
      goto joined_r0x100054d5;
    case 1:
      uVar2 = 0x7c;
      break;
    case 2:
      uVar2 = 0x7d;
      break;
    case 3:
      uVar2 = 0x7e;
      break;
    case 4:
      uVar2 = 0x7f;
      break;
    case 5:
      uVar2 = 0x80;
      break;
    case 6:
      uVar2 = 0x81;
      break;
    case 7:
      uVar2 = 0x82;
      break;
    default:
      return;
    }
    iVar1 = M007_GETSTATE(0x1000,uVar2);
joined_r0x100054d5:
    if (iVar1 == 0) {
      DOCOMMANDFREEZE_ZONE();
      goto LAB_1000_548f;
    }
    DOCOMMANDUNFREEZE_ZONE();
  }
  uVar2 = 0;
LAB_1000_5482:
  M007_PUTSTATE(0x1000,uVar2);
  return;
}


// ---- DOCOMMANDBSD_SET_TOPO @ 1000:54fe

void __cdecl16far DOCOMMANDBSD_SET_TOPO(void)

{
  undefined2 uVar1;
  undefined2 uVar2;
  
  uVar2 = 0x1008;
  uVar1 = 0x55;
  DAT_1008_03a6 = M007_GETSTATE();
  DAT_1008_03a7 = M007_GETSTATE(0x1010,0x56,uVar1,uVar2);
  DAT_1008_03a8 = M007_GETSTATE(0x1010,0x57);
  DAT_1008_03a9 = M007_GETSTATE(0x1010,0x58);
  return;
}


// ---- INSTANT_FREEZE_ALL @ 1000:5532

void __cdecl16far INSTANT_FREEZE_ALL(void)

{
  undefined1 local_c;
  undefined1 local_b;
  undefined1 local_a;
  undefined1 local_9;
  undefined1 local_8;
  undefined1 local_7;
  undefined1 local_6;
  undefined1 local_5;
  undefined1 local_4;
  
  local_c = 2;
  local_b = 1;
  local_a = 1;
  local_9 = 1;
  local_8 = 1;
  local_7 = 1;
  local_6 = 1;
  local_5 = 1;
  local_4 = 1;
  FUN_1000_5fd4(&local_c);
  M007_PUTSTATE(0x1000,1);
  return;
}


// ---- INSTANT_FREEZE_ZONE @ 1000:5574

void __stdcall16far INSTANT_FREEZE_ZONE(undefined2 param_1)

{
  undefined1 local_c;
  undefined1 local_b;
  undefined1 local_a;
  undefined1 local_9;
  undefined1 local_8;
  undefined1 local_7;
  undefined1 local_6;
  undefined1 local_5;
  undefined1 local_4;
  
  local_c = 2;
  local_b = 2;
  local_a = 2;
  local_9 = 2;
  local_8 = 2;
  local_7 = 2;
  local_6 = 2;
  local_5 = 2;
  local_4 = 2;
  switch(param_1) {
  case 0:
    local_b = 1;
    break;
  case 1:
    local_a = 1;
    break;
  case 2:
    local_9 = 1;
    break;
  case 3:
    local_8 = 1;
    break;
  case 4:
    local_7 = 1;
    break;
  case 5:
    local_6 = 1;
    break;
  case 6:
    local_5 = 1;
    break;
  case 7:
    local_4 = 1;
  }
  FUN_1000_5fd4(&local_c);
  M007_PUTSTATE(0x1000,1);
  return;
}


// ---- DETECTOR_FROM_PORT @ 1000:5608

int __stdcall16far DETECTOR_FROM_PORT(int param_1)

{
  return (int)*(char *)(param_1 + 0x8e);
}


// ---- START_SPOT_DATA @ 1000:561e

void __cdecl16far START_SPOT_DATA(void)

{
  FUN_1000_68f6(1,0x1008);
  return;
}


// ---- STOP_SPOT_DATA @ 1000:5632

void __cdecl16far STOP_SPOT_DATA(void)

{
  FUN_1000_68f6(0,0x1008);
  return;
}


// ---- SWITCHEXT_SPOT_CONTROL @ 1000:5646

void __stdcall16far SWITCHEXT_SPOT_CONTROL(int param_1)

{
  undefined1 extraout_AH;
  undefined1 extraout_AH_00;
  undefined1 uVar1;
  undefined2 unaff_CS;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0xdb;
  M007_PUTSTATE(unaff_CS,param_1);
  uVar1 = extraout_AH;
  if (param_1 == 1) {
    Ordinal_23(0x1010,DAT_1008_0a32,DAT_1008_0a34,DAT_1008_0a32,DAT_1008_0a34,uVar2,uVar3);
    uVar1 = extraout_AH_00;
  }
  FUN_1000_6916(CONCAT11(uVar1,(undefined1)param_1));
  return;
}


// ---- DOCOMMANDSTART_SPOT_ACQUIRE @ 1000:5684

void __cdecl16far DOCOMMANDSTART_SPOT_ACQUIRE(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x21;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 0) {
    Ordinal_15(0x1010,1,uVar2,uVar3);
  }
  FUN_1000_68f6(0);
  FUN_1000_6936(1,DAT_1008_03aa,DAT_1008_03ac,(undefined2)DAT_1008_03ae,DAT_1008_03ae._2_2_);
  return;
}


// ---- DOCOMMANDSTOP_SPOT_ACQUIRE @ 1000:56c4

void __cdecl16far DOCOMMANDSTOP_SPOT_ACQUIRE(void)

{
  FUN_1000_6936(0,DAT_1008_03aa,DAT_1008_03ac,(undefined2)DAT_1008_03ae,DAT_1008_03ae._2_2_,0x1008);
  return;
}


// ---- SETSPOT_DATA_RATE @ 1000:56ea

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __stdcall16far SETSPOT_DATA_RATE(float param_1)

{
  float fVar1;
  float *pfVar2;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined1 local_12 [4];
  undefined1 local_e [4];
  undefined1 local_a [4];
  float local_6;
  
  DAT_1008_03ae = param_1 * DAT_1008_0a4a;
  M007_PUTVALUE(unaff_CS,DAT_1008_03ae * DAT_1008_0a4e);
  pfVar2 = (float *)M007_GETVALUE(0x1010,local_a);
  fVar1 = *pfVar2;
  pfVar2 = (float *)M007_GETVALUE(0x1010,local_e);
  _DAT_1008_03aa = fVar1 / *pfVar2;
  if (DAT_1008_0a52 < _DAT_1008_03aa) {
    _DAT_1008_03aa = DAT_1008_0a52;
    pfVar2 = (float *)M007_GETVALUE(0x1010,local_12);
    local_6 = *pfVar2 * DAT_1008_0a52;
    M007_PUTVALUE(0x1010,local_6);
  }
  return;
}


// ---- SETSPOT_DATA_DURATION @ 1000:579c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __stdcall16far SETSPOT_DATA_DURATION(float param_1)

{
  float *pfVar1;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined1 local_e [4];
  undefined1 local_a [4];
  undefined4 local_6;
  
  pfVar1 = (float *)M007_GETVALUE(unaff_CS,local_a);
  _DAT_1008_03aa = param_1 / *pfVar1;
  if (_DAT_1008_03aa <= DAT_1008_0a52) {
  }
  else {
    _DAT_1008_03aa = DAT_1008_0a52;
    pfVar1 = (float *)M007_GETVALUE(0x1010,local_e);
    param_1._2_2_ = 0x129;
    local_6._2_2_ = (undefined2)((ulong)(*pfVar1 * DAT_1008_0a52) >> 0x10);
    param_1._0_2_ = local_6._2_2_;
    local_6 = *pfVar1 * DAT_1008_0a52;
  }
  M007_PUTVALUE(0x1010,param_1._0_2_,param_1._2_2_);
  return;
}


// ---- DOCOMMANDFREE_SPOT_BUFFER @ 1000:5826

void __cdecl16far DOCOMMANDFREE_SPOT_BUFFER(void)

{
  FUN_1000_6972(0x1008);
  return;
}


// ---- GET_SPOT_NUM_SAMPLES @ 1000:5838

undefined2 __cdecl16far GET_SPOT_NUM_SAMPLES(void)

{
  return DAT_1008_03b2;
}


// ---- GET_SPOT_DATA_LOCATION @ 1000:584c

undefined2 __cdecl16far GET_SPOT_DATA_LOCATION(void)

{
  return DAT_1008_03b6;
}


// ---- GET_SPOT_LOOP_COUNT @ 1000:5860

void __cdecl16far GET_SPOT_LOOP_COUNT(void)

{
  FUN_1000_015a(0x1008);
  return;
}


// ---- Z130_RESTORE_DETECTOR @ 1000:5876

undefined2 __stdcall16far Z130_RESTORE_DETECTOR(void)

{
  return 0x1008;
}


// ---- Z130_UPDATE_DETECTORS @ 1000:5884

undefined2 __cdecl16far Z130_UPDATE_DETECTORS(void)

{
  return 0x1008;
}


// ---- SWITCHABCC_B_CAL @ 1000:5890

void __stdcall16far SWITCHABCC_B_CAL(int param_1)

{
  int iVar1;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined1 local_2c [20];
  undefined1 local_18 [22];
  
  uVar6 = 0x1008;
  uVar5 = 0x129;
  M007_PUTSTATE(unaff_CS,param_1);
  iVar1 = M007_GETSTATE(0x1010,100,uVar5,uVar6);
  *(char *)(*(char *)(iVar1 + 0x86) * 5 + 0x3c9) = (char)param_1 + '\x01';
  uVar5 = M007_GETSTATE(0x1010,0x6e);
  SWITCHAUTO_VIDEO(uVar5);
  param_1 = param_1 + 1;
  _WSPRINTF(0x1000,local_18);
  M007_GETSTATE(0x1010,100,param_1);
  _WSPRINTF(0x1010,local_2c);
  puVar4 = local_2c;
  puVar3 = local_18;
  uVar6 = 0x1010;
  uVar5 = unaff_SS;
  uVar2 = GETLEOINIFILEPATH(0x1010,puVar3);
  WRITEPRIVATEPROFILESTRING(0x1010,uVar2,uVar6,puVar3,unaff_SS,puVar4,uVar5);
  return;
}


// ---- SWITCHABCC_C_CAL @ 1000:5930

void __stdcall16far SWITCHABCC_C_CAL(int param_1)

{
  int iVar1;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined1 local_2c [20];
  undefined1 local_18 [22];
  
  uVar6 = 0x1008;
  uVar5 = 0x12a;
  M007_PUTSTATE(unaff_CS,param_1);
  iVar1 = M007_GETSTATE(0x1010,100,uVar5,uVar6);
  *(char *)(*(char *)(iVar1 + 0x86) * 5 + 0x3ca) = (char)param_1 + '\x01';
  uVar5 = M007_GETSTATE(0x1010,0x6e);
  SWITCHAUTO_VIDEO(uVar5);
  param_1 = param_1 + 1;
  _WSPRINTF(0x1000,local_18);
  M007_GETSTATE(0x1010,100,param_1);
  _WSPRINTF(0x1010,local_2c);
  puVar4 = local_2c;
  puVar3 = local_18;
  uVar6 = 0x1010;
  uVar5 = unaff_SS;
  uVar2 = GETLEOINIFILEPATH(0x1010,puVar3);
  WRITEPRIVATEPROFILESTRING(0x1010,uVar2,uVar6,puVar3,unaff_SS,puVar4,uVar5);
  return;
}


// ---- SWITCHDWELL_TIME @ 1000:59d0

void __stdcall16far SWITCHDWELL_TIME(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  
  uVar5 = 0x1008;
  uVar4 = 0x144;
  uVar3 = 0x59e1;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 0) {
    uVar3 = 0x1010;
    iVar1 = M007_GETSTATE(0x1010,99,uVar4,uVar5);
    if (iVar1 != 2) {
      uVar3 = 99;
      iVar1 = M007_GETSTATE(0x1010,99);
      if (iVar1 != 3) goto LAB_1000_5a08;
    }
    if (param_1 == 0) {
      param_1 = 1;
    }
  }
LAB_1000_5a08:
  uVar4 = 0x12e;
  M007_PUTSTATE(0x1010,param_1);
  uVar2 = M007_GETSTATE(0x1010,0x5d,uVar4,uVar3);
  if (uVar2 == 7) {
    DOCOMMANDCONTINUOUS_AVG();
  }
  else if ((uVar2 < 8) && (((char)uVar2 == '\0' || ((char)uVar2 == '\x04')))) {
    iVar1 = M007_GETSTATE(0x1010,0x144);
    if (iVar1 == 0) {
      DOCOMMANDFRAME_INT();
    }
  }
  return;
}


// ---- SWITCHBSD_AUTO @ 1000:5a4a

void __stdcall16far SWITCHBSD_AUTO(undefined2 param_1)

{
  int iVar1;
  undefined2 unaff_CS;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x142;
  M007_PUTSTATE(unaff_CS,param_1);
  iVar1 = M007_GETSTATE(0x1010,0x83,uVar2,uVar3);
  if (iVar1 == 1) {
    uVar2 = M007_GETSTATE(0x1010,0x5a);
    Ordinal_10022(0x1010,param_1,uVar2);
  }
  return;
}


// ---- SWITCHVPSE @ 1000:5a7e

void __stdcall16far SWITCHVPSE(int param_1)

{
  undefined2 unaff_CS;
  
  M007_PUTSTATE(unaff_CS,param_1);
  if (param_1 == 1) {
    DAT_1008_039a = 0x186;
  }
  return;
}


// ---- SWITCHELECTRON_COUNTING @ 1000:5aa4

void __stdcall16far SWITCHELECTRON_COUNTING(undefined2 param_1)

{
  undefined2 unaff_CS;
  
  M007_PUTSTATE(unaff_CS,param_1);
  return;
}


// ---- SETCCD_ILLUMINATION @ 1000:5abe

void __stdcall16far SETCCD_ILLUMINATION(undefined2 param_1,undefined2 param_2)

{
  undefined2 unaff_CS;
  
  M007_PUTVALUE(unaff_CS,param_1,param_2);
  return;
}


// ---- SWITCHCHAMBERSCOPE @ 1000:5ada

void __stdcall16far SWITCHCHAMBERSCOPE(undefined2 param_1)

{
  undefined2 *puVar1;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined1 local_6 [4];
  
  M007_PUTSTATE(unaff_CS,param_1);
  puVar1 = (undefined2 *)M007_GETVALUE(0x1010,local_6);
  SETCCD_ILLUMINATION(*puVar1,puVar1[1]);
  return;
}


// ---- FUN_1000_5b3a @ 1000:5b3a

undefined2 __cdecl16far FUN_1000_5b3a(undefined2 param_1,undefined2 param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    uVar2 = Ordinal_4000(0x1010,param_1,param_2,uVar2,uVar3);
    return uVar2;
  }
  return 0;
}


// ---- FUN_1000_5b62 @ 1000:5b62

undefined2 __cdecl16far FUN_1000_5b62(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    uVar2 = Ordinal_4033(0x1010,uVar2,uVar3);
    return uVar2;
  }
  return 0;
}


// ---- FUN_1000_5b84 @ 1000:5b84

undefined2 __cdecl16far FUN_1000_5b84(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    uVar2 = Ordinal_4032(0x1010,uVar2,uVar3);
    return uVar2;
  }
  return 0;
}


// ---- FUN_1000_5ba6 @ 1000:5ba6

undefined2 __cdecl16far FUN_1000_5ba6(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    uVar2 = Ordinal_4001(0x1010,uVar2,uVar3);
    return uVar2;
  }
  return 0;
}


// ---- FUN_1000_5bc8 @ 1000:5bc8

void __cdecl16far FUN_1000_5bc8(undefined1 param_1,undefined1 param_2,float param_3)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_4003(0x1010,(double)param_3,param_2,param_1,uVar2,uVar3);
  }
  return;
}


// ---- FUN_1000_5bfc @ 1000:5bfc

void __cdecl16far FUN_1000_5bfc(byte param_1,undefined1 param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_4023(0x1010,param_2,param_1,uVar2,uVar3);
    return;
  }
  DAT_1008_06f8 = 5;
  DAT_1008_0dda = (uint)param_1;
  DAT_1008_0ddc = 0;
  return;
}


// ---- FUN_1000_5c36 @ 1000:5c36

void __cdecl16far FUN_1000_5c36(undefined2 param_1,undefined2 param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_4004(0x1010,param_1,param_2,uVar2,uVar3);
    return;
  }
  DAT_1008_06f8 = 2;
  return;
}


// ---- FUN_1000_5c60 @ 1000:5c60

void __cdecl16far FUN_1000_5c60(undefined1 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_4007(0x1010,param_1,uVar2,uVar3);
  }
  return;
}


// ---- FUN_1000_5c80 @ 1000:5c80

void __cdecl16far FUN_1000_5c80(undefined1 param_1,float param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_4008(0x1010,(double)param_2,param_1,uVar2,uVar3);
  }
  return;
}


// ---- FUN_1000_5cb0 @ 1000:5cb0

void __cdecl16far FUN_1000_5cb0(undefined1 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_4009(0x1010,param_1,uVar2,uVar3);
  }
  return;
}


// ---- FUN_1000_5cd0 @ 1000:5cd0

void __cdecl16far FUN_1000_5cd0(undefined1 param_1,undefined1 param_2,undefined1 param_3)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_4010(0x1010,param_3,param_2,param_1,uVar2,uVar3);
  }
  return;
}


// ---- FUN_1000_5cf8 @ 1000:5cf8

void __cdecl16far FUN_1000_5cf8(undefined1 param_1,undefined1 param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_4024(0x1010,param_2,param_1,uVar2,uVar3);
  }
  return;
}


// ---- FUN_1000_5d1c @ 1000:5d1c

void __cdecl16far FUN_1000_5d1c(char param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_317(0x1010,(int)param_1,uVar2,uVar3);
  }
  return;
}


// ---- FUN_1000_5d3e @ 1000:5d3e

void __cdecl16far FUN_1000_5d3e(char param_1,char param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_318(0x1010,(int)param_2,(int)param_1,uVar2,uVar3);
  }
  return;
}


// ---- FUN_1000_5d64 @ 1000:5d64

void __cdecl16far FUN_1000_5d64(char param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_319(0x1010,(int)param_1,uVar2,uVar3);
  }
  return;
}


// ---- FUN_1000_5d86 @ 1000:5d86

void __cdecl16far FUN_1000_5d86(char param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_320(0x1010,(int)param_1,uVar2,uVar3);
    uVar2 = M007_GETSTATE(0x1010,0x142,(int)param_1);
    Ordinal_10022(0x1010,uVar2);
  }
  return;
}


// ---- FUN_1000_5dba @ 1000:5dba

void __cdecl16far
FUN_1000_5dba(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             char param_5,undefined1 param_6)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_4011(0x1010,param_6,param_5,param_4,param_3,param_2,param_1,uVar2,uVar3);
    return;
  }
  if (param_5 == '\0') {
    DAT_1008_0dde = param_1;
    DAT_1008_0de2 = param_3;
    DAT_1008_0de0 = param_2;
    DAT_1008_0de4 = param_4;
    DAT_1008_0de6 = param_6;
    return;
  }
  DAT_1008_0de8 = param_1;
  DAT_1008_0dec = param_3;
  DAT_1008_0dea = param_2;
  DAT_1008_0dee = param_4;
  DAT_1008_0df0 = param_6;
  return;
}


// ---- FUN_1000_5e32 @ 1000:5e32

void __cdecl16far FUN_1000_5e32(char param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    if (param_1 == '\x01') {
      iVar1 = M007_GETSTATE(0x1010,0x11,uVar2,uVar3);
      if (iVar1 < 3) {
        iVar1 = COMMANDENABLE(0x1010,0x20);
        if (iVar1 == 0) {
          DOCOMMANDSCANRATE3(0x1010);
        }
        else {
          iVar1 = COMMANDENABLE(0x1010,0x21);
          if (iVar1 == 0) {
            DOCOMMANDSCANRATE4(0x1010);
          }
          else {
            DOCOMMANDSCANRATE5(0x1010);
          }
        }
      }
    }
    Ordinal_4012(0x1010,param_1);
  }
  return;
}


// ---- FUN_1000_5e8e @ 1000:5e8e

void __cdecl16far FUN_1000_5e8e(undefined1 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_4013(0x1010,param_1,uVar2,uVar3);
  }
  return;
}


// ---- FUN_1000_5eae @ 1000:5eae

void __cdecl16far FUN_1000_5eae(undefined1 param_1,undefined1 param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_4014(0x1010,param_2,param_1,uVar2,uVar3);
  }
  return;
}


// ---- FUN_1000_5ed2 @ 1000:5ed2

void __cdecl16far FUN_1000_5ed2(undefined1 param_1,undefined1 param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_4015(0x1010,param_2,param_1,uVar2,uVar3);
  }
  return;
}


// ---- FUN_1000_5ef6 @ 1000:5ef6

void __cdecl16far FUN_1000_5ef6(char param_1,float param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_4016(0x1010,(double)param_2,param_1,uVar2,uVar3);
    return;
  }
  *(undefined2 *)(param_1 * 4 + 0x6b8) = param_2._0_2_;
  *(undefined2 *)(param_1 * 4 + 0x6ba) = param_2._2_2_;
  return;
}


// ---- FUN_1000_5f40 @ 1000:5f40

void __cdecl16far FUN_1000_5f40(char param_1,float param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_4017(0x1010,(double)param_2,param_1,uVar2,uVar3);
    return;
  }
  *(undefined2 *)(param_1 * 4 + 0x6d8) = param_2._0_2_;
  *(undefined2 *)(param_1 * 4 + 0x6da) = param_2._2_2_;
  return;
}


// ---- FUN_1000_5f8a @ 1000:5f8a

void __cdecl16far
FUN_1000_5f8a(undefined1 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_4018(0x1010,param_3,param_4,param_2,param_1,uVar2,uVar3);
  }
  return;
}


// ---- FUN_1000_5fb4 @ 1000:5fb4

void __cdecl16far FUN_1000_5fb4(undefined1 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_4019(0x1010,param_1,uVar2,uVar3);
  }
  return;
}


// ---- FUN_1000_5fd4 @ 1000:5fd4

void __cdecl16far FUN_1000_5fd4(undefined1 *param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_4020(0x1010,(undefined1 *)param_1,param_1._2_2_,uVar2,uVar3);
    return;
  }
  DAT_1008_06ac = *param_1;
  DAT_1008_06ad = ((undefined1 *)param_1)[1];
  DAT_1008_06ae = ((undefined1 *)param_1)[2];
  DAT_1008_06af = ((undefined1 *)param_1)[3];
  DAT_1008_06b0 = ((undefined1 *)param_1)[4];
  DAT_1008_06b1 = ((undefined1 *)param_1)[5];
  DAT_1008_06b2 = ((undefined1 *)param_1)[6];
  DAT_1008_06b3 = ((undefined1 *)param_1)[7];
  DAT_1008_06b4 = ((undefined1 *)param_1)[8];
  DAT_1008_06b6 = 1;
  return;
}


// ---- FUN_1000_6040 @ 1000:6040

void __cdecl16far FUN_1000_6040(undefined2 *param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  uVar4 = 0x1008;
  uVar3 = 0x83;
  iVar2 = M007_GETSTATE();
  uVar1 = DAT_1008_0a58;
  if (iVar2 == 1) {
    Ordinal_327(0x1010,(undefined2 *)param_1,param_1._2_2_,uVar3,uVar4);
    return;
  }
  *param_1 = DAT_1008_0a56;
  ((undefined2 *)param_1)[1] = uVar1;
  return;
}


// ---- FUN_1000_6076 @ 1000:6076

undefined2 __cdecl16far FUN_1000_6076(undefined2 param_1,undefined2 param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    uVar2 = Ordinal_10000(0x1010,param_1,param_2,uVar2,uVar3);
    return uVar2;
  }
  return 0;
}


// ---- FUN_1000_609e @ 1000:609e

undefined2 __cdecl16far FUN_1000_609e(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    uVar2 = Ordinal_10021(0x1010,uVar2,uVar3);
    return uVar2;
  }
  return 0;
}


// ---- FUN_1000_60c0 @ 1000:60c0

undefined2 __cdecl16far FUN_1000_60c0(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    uVar2 = Ordinal_10020(0x1010,uVar2,uVar3);
    return uVar2;
  }
  return 0;
}


// ---- FUN_1000_60e4 @ 1000:60e4

undefined2 __cdecl16far FUN_1000_60e4(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    uVar2 = Ordinal_10001(0x1010,uVar2,uVar3);
    return uVar2;
  }
  return 0;
}


// ---- FUN_1000_6108 @ 1000:6108

void __cdecl16far FUN_1000_6108(void)

{
  int iVar1;
  
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_10002(0x1010,&stack0x0004);
  }
  return;
}


// ---- FUN_1000_612a @ 1000:612a

undefined2 __cdecl16far FUN_1000_612a(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    iVar1 = Ordinal_10014(0x1010,0xe10,0x1008,uVar2,uVar3);
    if (iVar1 == 1) {
      return 5;
    }
    if (iVar1 == 2) {
      return 6;
    }
    if (iVar1 == 4) {
      return 10;
    }
  }
  return 0;
}


// ---- FUN_1000_616a @ 1000:616a

void __cdecl16far FUN_1000_616a(undefined2 param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 *puVar1;
  int iVar2;
  undefined2 unaff_CS;
  undefined2 uVar3;
  undefined2 unaff_SS;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined1 local_24 [4];
  undefined2 local_20;
  undefined2 local_1e;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined2 local_18;
  undefined2 local_16;
  undefined2 local_14;
  undefined2 local_12;
  undefined2 local_10;
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_a;
  undefined2 local_8;
  undefined2 local_6;
  undefined2 local_4;
  
  uVar6 = 0x1008;
  uVar4 = 0x1000;
  uVar3 = 0x1000;
  switch(param_2) {
  case 0:
    uVar5 = 0xc5;
    break;
  case 1:
    uVar5 = 0xc6;
    break;
  case 2:
    uVar5 = 199;
    break;
  case 3:
    uVar5 = 200;
    break;
  case 4:
    uVar5 = 0xc9;
    uVar3 = uVar4;
    break;
  case 5:
    uVar5 = 0xca;
    uVar3 = uVar4;
    break;
  case 6:
    uVar5 = 0xcb;
    uVar3 = uVar4;
    break;
  default:
    uVar5 = 0xcc;
    uVar3 = unaff_CS;
  }
  puVar1 = (undefined2 *)M007_GETVALUE(uVar3,local_24);
  local_18 = *puVar1;
  local_16 = puVar1[1];
  uVar4 = param_2;
  EO_RASTER_SIZE(0x1010,&local_20,unaff_SS);
  local_14 = param_1;
  local_12 = param_2;
  local_10 = local_18;
  local_e = local_16;
  local_c = param_3;
  local_a = local_20;
  local_8 = local_1e;
  local_6 = local_1c;
  local_4 = local_1a;
  iVar2 = M007_GETSTATE(0x1010,0x83,uVar4,uVar5,uVar6);
  if (iVar2 == 1) {
    Ordinal_10015(0x1010,&local_14);
  }
  return;
}


// ---- FUN_1000_6230 @ 1000:6230

void __cdecl16far FUN_1000_6230(undefined2 param_1,undefined2 param_2)

{
  undefined2 *puVar1;
  int iVar2;
  undefined2 unaff_CS;
  undefined2 uVar3;
  undefined2 unaff_SS;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined1 local_24 [4];
  undefined2 local_20;
  undefined2 local_1e;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined2 local_18;
  undefined2 local_16;
  undefined2 local_14;
  undefined2 local_12;
  undefined2 local_10;
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_a;
  undefined2 local_8;
  undefined2 local_6;
  undefined2 local_4;
  
  uVar6 = 0x1008;
  uVar4 = 0x1000;
  uVar3 = 0x1000;
  switch(param_2) {
  case 0:
    uVar5 = 0xc5;
    break;
  case 1:
    uVar5 = 0xc6;
    break;
  case 2:
    uVar5 = 199;
    break;
  case 3:
    uVar5 = 200;
    break;
  case 4:
    uVar5 = 0xc9;
    uVar3 = uVar4;
    break;
  case 5:
    uVar5 = 0xca;
    uVar3 = uVar4;
    break;
  case 6:
    uVar5 = 0xcb;
    uVar3 = uVar4;
    break;
  default:
    uVar5 = 0xcc;
    uVar3 = unaff_CS;
  }
  puVar1 = (undefined2 *)M007_GETVALUE(uVar3,local_24);
  local_18 = *puVar1;
  local_16 = puVar1[1];
  uVar4 = param_2;
  EO_RASTER_SIZE(0x1010,&local_20,unaff_SS);
  local_14 = param_1;
  local_12 = param_2;
  local_10 = local_18;
  local_e = local_16;
  local_c = 3;
  local_a = local_20;
  local_8 = local_1e;
  local_6 = local_1c;
  local_4 = local_1a;
  iVar2 = M007_GETSTATE(0x1010,0x83,uVar4,uVar5,uVar6);
  if (iVar2 == 1) {
    Ordinal_10017(0x1010,&local_14);
  }
  return;
}


// ---- FUN_1000_62f4 @ 1000:62f4

void __cdecl16far FUN_1000_62f4(undefined2 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_10003(0x1010,param_1,uVar2,uVar3);
  }
  return;
}


// ---- FUN_1000_6314 @ 1000:6314

void __cdecl16far FUN_1000_6314(undefined2 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_10013(0x1010,param_1,uVar2,uVar3);
  }
  return;
}


// ---- FUN_1000_6334 @ 1000:6334

void __cdecl16far FUN_1000_6334(void)

{
  int iVar1;
  
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_10004(0x1010,&stack0x0004);
  }
  return;
}


// ---- FUN_1000_6356 @ 1000:6356

void __cdecl16far FUN_1000_6356(int param_1,float param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_10005(0x1010,(double)param_2,param_1,uVar2,uVar3);
    return;
  }
  *(undefined2 *)(param_1 * 4 + 0x742) = param_2._0_2_;
  *(undefined2 *)(param_1 * 4 + 0x744) = param_2._2_2_;
  return;
}


// ---- FUN_1000_639c @ 1000:639c

void __cdecl16far FUN_1000_639c(int param_1,float param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_10006(0x1010,(double)param_2,param_1,uVar2,uVar3);
    return;
  }
  *(undefined2 *)(param_1 * 4 + 0x6fa) = param_2._0_2_;
  *(undefined2 *)(param_1 * 4 + 0x6fc) = param_2._2_2_;
  return;
}


// ---- FUN_1000_63e2 @ 1000:63e2

void __cdecl16far FUN_1000_63e2(undefined2 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_912(0x1010,param_1,uVar2,uVar3);
  }
  return;
}


// ---- FUN_1000_6402 @ 1000:6402

void __cdecl16far FUN_1000_6402(undefined2 param_1,float param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_10007(0x1010,(double)param_2,param_1,uVar2,uVar3);
  }
  return;
}


// ---- FUN_1000_6430 @ 1000:6430

void __cdecl16far FUN_1000_6430(undefined2 param_1,float param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_10008(0x1010,(double)param_2,param_1,uVar2,uVar3);
  }
  return;
}


// ---- FUN_1000_645e @ 1000:645e

void __cdecl16far FUN_1000_645e(undefined2 param_1,float param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_10018(0x1010,(double)param_2,param_1,uVar2,uVar3);
  }
  return;
}


// ---- FUN_1000_648c @ 1000:648c

void __cdecl16far FUN_1000_648c(undefined2 param_1,float param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_10019(0x1010,(double)param_2,param_1,uVar2,uVar3);
  }
  return;
}


// ---- FUN_1000_64ba @ 1000:64ba

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_1000_64ba(int param_1)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined2 *puVar4;
  float *pfVar5;
  undefined4 *puVar6;
  undefined2 unaff_SS;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined1 local_42 [32];
  undefined4 local_22;
  undefined4 local_1e;
  undefined4 local_1a;
  undefined4 local_16;
  undefined4 local_a;
  undefined4 local_6;
  
  uVar8 = 0x1008;
  uVar7 = 0x83;
  iVar3 = M007_GETSTATE();
  if (iVar3 == 1) {
    puVar4 = (undefined2 *)Ordinal_10009(0x1010,local_42,param_1);
    puVar6 = &local_22;
    for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
      puVar2 = puVar6;
      puVar6 = (undefined4 *)((int)puVar6 + 2);
      puVar1 = puVar4;
      puVar4 = puVar4 + 1;
      *(undefined2 *)puVar2 = *puVar1;
    }
  }
  else {
    if (*(int *)(param_1 * 2 + 0x78a) != 0) {
      iVar3 = FUN_1000_0126(uVar7,uVar8);
      *(float *)(param_1 * 4 + 0x742) =
           ((float)iVar3 * DAT_1008_0a5a - DAT_1008_0a5e) + *(float *)(param_1 * 4 + 0x742);
    }
    pfVar5 = (float *)(param_1 * 4 + 0x742);
    if (*pfVar5 < _DAT_1008_0a62) {
      uVar7 = DAT_1008_0a64;
      *(undefined2 *)pfVar5 = DAT_1008_0a62;
      *(undefined2 *)(param_1 * 4 + 0x744) = uVar7;
    }
    pfVar5 = (float *)(param_1 * 4 + 0x742);
    if (_DAT_1008_0a66 < *pfVar5) {
      uVar7 = DAT_1008_0a68;
      *(undefined2 *)pfVar5 = DAT_1008_0a66;
      *(undefined2 *)(param_1 * 4 + 0x744) = uVar7;
    }
    pfVar5 = (float *)(param_1 * 4 + 0x6fa);
    if (*pfVar5 < _DAT_1008_0a62) {
      uVar7 = DAT_1008_0a64;
      *(undefined2 *)pfVar5 = DAT_1008_0a62;
      *(undefined2 *)(param_1 * 4 + 0x6fc) = uVar7;
    }
    pfVar5 = (float *)(param_1 * 4 + 0x6fa);
    if (_DAT_1008_0a66 < *pfVar5) {
      uVar7 = DAT_1008_0a68;
      *(undefined2 *)pfVar5 = DAT_1008_0a66;
      *(undefined2 *)(param_1 * 4 + 0x6fc) = uVar7;
    }
    local_1e = *(undefined4 *)(param_1 * 4 + 0x6fa);
    local_22 = *(undefined4 *)(param_1 * 4 + 0x742);
    local_16 = local_22;
    local_1a = local_1e;
    local_6 = local_1e;
    local_a = local_22;
  }
  puVar4 = (undefined2 *)&DAT_1008_0e2a;
  puVar6 = &local_22;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    puVar2 = puVar6;
    puVar6 = (undefined4 *)((int)puVar6 + 2);
    *puVar1 = *(undefined2 *)puVar2;
  }
  return;
}


// ---- FUN_1000_6618 @ 1000:6618

void __cdecl16far FUN_1000_6618(void)

{
  int iVar1;
  
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_10010(0x1010,&stack0x0004);
  }
  return;
}


// ---- FUN_1000_663a @ 1000:663a

void __cdecl16far FUN_1000_663a(int param_1,undefined2 param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_10011(0x1010,param_2,param_1,uVar2,uVar3);
    return;
  }
  *(undefined2 *)(param_1 * 2 + 0x78a) = param_2;
  return;
}


// ---- FUN_1000_666c @ 1000:666c

uint __cdecl16far FUN_1000_666c(int param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  undefined1 uVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  
  uVar9 = 0x1008;
  uVar8 = 0x83;
  iVar5 = M007_GETSTATE();
  if (iVar5 == 1) {
    uVar6 = Ordinal_4022(0x1010,param_3,param_2,param_1,uVar8,uVar9);
    return uVar6;
  }
  uVar6 = DAT_1008_0de8;
  uVar1 = DAT_1008_0dea;
  uVar2 = DAT_1008_0dec;
  uVar3 = DAT_1008_0dee;
  cVar4 = DAT_1008_0df0;
  if (param_3 == 0) {
    uVar6 = DAT_1008_0dde;
    uVar1 = DAT_1008_0de0;
    uVar2 = DAT_1008_0de2;
    uVar3 = DAT_1008_0de4;
    cVar4 = DAT_1008_0de6;
  }
  if ((((param_1 < (int)uVar6) || (uVar6 = uVar2, (int)uVar2 < param_1)) ||
      (uVar6 = uVar1, param_2 < (int)uVar1)) || (uVar6 = uVar3, (int)uVar3 < param_2)) {
    uVar7 = (undefined1)(uVar6 >> 8);
    if (cVar4 == '\0') goto LAB_1000_66f8;
  }
  else {
    uVar7 = (undefined1)(uVar3 >> 8);
    if (cVar4 != '\0') {
LAB_1000_66f8:
      return CONCAT11(uVar7,1);
    }
  }
  return uVar6 & 0xff00;
}


// ---- FUN_1000_66fe @ 1000:66fe

void __cdecl16far FUN_1000_66fe(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 local_4;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_4002(0x1010,(int)param_1,param_1._2_2_,uVar2,uVar3);
  }
  else {
    *(undefined1 *)((int)param_1 + 0x4e) = 0;
    if (DAT_1008_06f8 == '\0') {
      DAT_1008_0ddc = DAT_1008_0ddc + 1;
      if (DAT_1008_0dda < DAT_1008_0ddc) {
        DAT_1008_06f8 = '\x04';
      }
    }
    else if ((DAT_1008_06f8 == '\x01') &&
            (DAT_1008_0ddc = DAT_1008_0ddc + 1, DAT_1008_0dda < DAT_1008_0ddc)) {
      DAT_1008_06f8 = '\x03';
    }
    *(char *)((int)param_1 + 0x4d) = DAT_1008_06f8;
    for (local_4 = 0; local_4 < 8; local_4 = local_4 + 1) {
      iVar1 = local_4 * 4;
      uVar2 = *(undefined2 *)(iVar1 + 0x6ba);
      *(undefined2 *)(iVar1 + (int)param_1) = *(undefined2 *)(iVar1 + 0x6b8);
      *(undefined2 *)(iVar1 + (int)param_1 + 2) = uVar2;
      uVar2 = *(undefined2 *)(iVar1 + 0x6da);
      *(undefined2 *)(iVar1 + (int)param_1 + 0x20) = *(undefined2 *)(iVar1 + 0x6d8);
      *(undefined2 *)(iVar1 + (int)param_1 + 0x22) = uVar2;
    }
    if (DAT_1008_06b6 == 0) {
      *(undefined1 *)((int)param_1 + 0x40) = 0;
    }
    else {
      DAT_1008_06b6 = DAT_1008_06b6 + 1;
      if (((DAT_1008_06ac == '\x02') || ((DAT_1008_06ac == '\x01' && (DAT_1008_06b6 == 10)))) ||
         ((DAT_1008_06ac == '\0' && (DAT_1008_06b6 == 0x28)))) {
        *(undefined1 *)((int)param_1 + 0x40) = 0;
        DAT_1008_06b6 = 0;
        if (DAT_1008_06ad != '\x02') {
          DAT_1008_06a3 = DAT_1008_06ad;
        }
        if (DAT_1008_06ae != '\x02') {
          DAT_1008_06a4 = DAT_1008_06ae;
        }
        if (DAT_1008_06af != '\x02') {
          DAT_1008_06a5 = DAT_1008_06af;
        }
        if (DAT_1008_06b0 != '\x02') {
          DAT_1008_06a6 = DAT_1008_06b0;
        }
        if (DAT_1008_06b1 != '\x02') {
          DAT_1008_06a7 = DAT_1008_06b1;
        }
        if (DAT_1008_06b2 != '\x02') {
          DAT_1008_06a8 = DAT_1008_06b2;
        }
        if (DAT_1008_06b3 != '\x02') {
          DAT_1008_06a9 = DAT_1008_06b3;
        }
        if (DAT_1008_06b4 != '\x02') {
          DAT_1008_06aa = DAT_1008_06b4;
        }
      }
      else {
        *(undefined1 *)((int)param_1 + 0x40) = 1;
      }
    }
    *(char *)((int)param_1 + 0x41) = DAT_1008_06a3;
    *(char *)((int)param_1 + 0x42) = DAT_1008_06a4;
    *(char *)((int)param_1 + 0x43) = DAT_1008_06a5;
    *(char *)((int)param_1 + 0x44) = DAT_1008_06a6;
    *(char *)((int)param_1 + 0x45) = DAT_1008_06a7;
    *(char *)((int)param_1 + 0x46) = DAT_1008_06a8;
    *(char *)((int)param_1 + 0x47) = DAT_1008_06a9;
    *(char *)((int)param_1 + 0x48) = DAT_1008_06aa;
    *(undefined2 *)((int)param_1 + 0x49) = 7;
    *(undefined2 *)((int)param_1 + 0x4b) = 0;
  }
  return;
}


// ---- FUN_1000_68a8 @ 1000:68a8

void __cdecl16far
FUN_1000_68a8(undefined1 param_1,undefined1 param_2,undefined1 param_3,undefined2 param_4)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_4025(0x1010,param_4,param_3,param_2,param_1,uVar2,uVar3);
  }
  return;
}


// ---- FUN_1000_68d4 @ 1000:68d4

void __cdecl16far FUN_1000_68d4(void)

{
  int iVar1;
  
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_4026(0x1010,&stack0x0004);
  }
  return;
}


// ---- FUN_1000_68f6 @ 1000:68f6

void __cdecl16far FUN_1000_68f6(undefined1 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_4027(0x1010,param_1,uVar2,uVar3);
  }
  return;
}


// ---- FUN_1000_6916 @ 1000:6916

void __cdecl16far FUN_1000_6916(undefined1 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_4028(0x1010,param_1,uVar2,uVar3);
  }
  return;
}


// ---- FUN_1000_6936 @ 1000:6936

void __cdecl16far FUN_1000_6936(undefined1 param_1,float param_2,float param_3)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_4030(0x1010,(double)param_3,(double)param_2,param_1,uVar2,uVar3);
  }
  return;
}


// ---- FUN_1000_6972 @ 1000:6972

void __cdecl16far FUN_1000_6972(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_4031(0x1010,uVar2,uVar3);
  }
  return;
}


// ---- FUN_1000_69aa @ 1000:69aa

void __cdecl16far FUN_1000_69aa(char param_1)

{
  int iVar1;
  undefined2 unaff_CS;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x5d;
  M007_PUTSTATE(unaff_CS,(int)param_1);
  iVar1 = M007_GETSTATE(0x1010,0x118,uVar2,uVar3);
  if (((iVar1 == 6) && (param_1 != '\x02')) && (param_1 != '\x05')) {
    M007_PUTVALUE(0x1010,DAT_1008_0a6a,DAT_1008_0a6c);
    M007_PUTSTATE(0x1010,0);
  }
  return;
}


// ---- FUN_1000_69f6 @ 1000:69f6

void __cdecl16far FUN_1000_69f6(char param_1,char param_2)

{
  undefined2 uVar1;
  undefined1 local_4;
  
  uVar1 = 0x1008;
  if (param_2 < '\b') {
    for (local_4 = '\0'; local_4 < '\x04'; local_4 = local_4 + '\x01') {
      if (*(char *)(local_4 + 0x150) == param_1) {
        *(char *)(local_4 + 0x86) = param_2;
        FUN_1000_6b38((int)local_4,CONCAT11(local_4 >> 7,param_1),uVar1);
      }
    }
  }
  else {
    local_4 = '\x04';
    do {
      if (*(char *)(local_4 + 0x150) == param_1) {
        *(char *)(local_4 + 0x86) = param_2 + -8;
        FUN_1000_6b38((int)local_4,CONCAT11(local_4 >> 7,param_1),uVar1);
      }
      local_4 = local_4 + '\x01';
    } while (local_4 < '\b');
  }
  return;
}


// ---- FUN_1000_6a70 @ 1000:6a70

void __cdecl16far FUN_1000_6a70(undefined4 param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined1 local_4;
  
  local_4 = '\0';
  do {
    iVar2 = local_4 * 4;
    uVar1 = *(undefined2 *)(iVar2 + (int)param_1 + 2);
    *(undefined2 *)(iVar2 + 0x22) = *(undefined2 *)(iVar2 + (int)param_1);
    *(undefined2 *)(iVar2 + 0x24) = uVar1;
    uVar1 = *(undefined2 *)(iVar2 + (int)param_1 + 0x22);
    *(undefined2 *)(iVar2 + 0x42) = *(undefined2 *)(iVar2 + (int)param_1 + 0x20);
    *(undefined2 *)(iVar2 + 0x44) = uVar1;
    local_4 = local_4 + '\x01';
  } while (local_4 < '\b');
  local_4 = M007_GETSTATE();
  iVar2 = local_4 * 4;
  M007_PUTVALUE(0x1010,*(undefined2 *)(iVar2 + (int)param_1),
                *(undefined2 *)(iVar2 + (int)param_1 + 2));
  M007_PUTVALUE(0x1010,*(undefined2 *)((int)param_1 + iVar2 + 0x20),
                *(undefined2 *)((int)param_1 + iVar2 + 0x22));
  if (local_4 < '\x04') {
    local_4 = local_4 + '\x04';
  }
  else {
    local_4 = local_4 + -4;
  }
  iVar2 = local_4 * 4;
  M007_PUTVALUE(0x1010,*(undefined2 *)(iVar2 + (int)param_1),
                *(undefined2 *)(iVar2 + (int)param_1 + 2));
  M007_PUTVALUE(0x1010,*(undefined2 *)((int)param_1 + iVar2 + 0x20),
                *(undefined2 *)((int)param_1 + iVar2 + 0x22));
  return;
}


// ---- FUN_1000_6b38 @ 1000:6b38

/* WARNING: Switch with 1 destination removed at 0x10006b83 : 9 cases all go to same destination */

void __cdecl16far FUN_1000_6b38(char param_1)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined1 extraout_AH;
  undefined1 extraout_AH_00;
  undefined1 extraout_AH_01;
  int iVar3;
  int iVar4;
  
  uVar1 = DAT_1008_0a70;
  iVar3 = param_1 * 4;
  *(undefined2 *)(iVar3 + 0x22) = DAT_1008_0a6e;
  *(undefined2 *)(iVar3 + 0x24) = uVar1;
  uVar2 = DAT_1008_0a6c;
  uVar1 = DAT_1008_0a6a;
  *(undefined2 *)(iVar3 + 0x42) = DAT_1008_0a6a;
  *(undefined2 *)(iVar3 + 0x44) = uVar2;
  *(undefined1 *)(param_1 + 0x10) = 0;
  iVar3 = (int)param_1;
  iVar4 = iVar3 * 4;
  FUN_1000_5ef6(CONCAT11((char)((uint)uVar1 >> 8),param_1),*(undefined2 *)(iVar4 + 0x22),
                *(undefined2 *)(iVar4 + 0x24),0x1008);
  FUN_1000_5f40(CONCAT11(extraout_AH,param_1),*(undefined2 *)(iVar4 + 0x42),
                *(undefined2 *)(iVar4 + 0x44));
  FUN_1000_5ed2(CONCAT11(extraout_AH_00,param_1),
                CONCAT11(extraout_AH_00,*(undefined1 *)(iVar3 + 0x10)));
  FUN_1000_5eae(CONCAT11(extraout_AH_01,param_1),
                CONCAT11(extraout_AH_01,*(undefined1 *)(iVar3 + 0x86)));
  return;
}


// ---- FUN_1000_6bf6 @ 1000:6bf6

void __cdecl16far FUN_1000_6bf6(void)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  uVar4 = 0x1008;
  uVar3 = 0x1e;
  uVar1 = M007_GETSTATE();
  switch(uVar1) {
  case 0:
    iVar2 = M007_GETSTATE(0x1000,0x20,uVar3,uVar4);
    if (iVar2 != 0) {
      uVar3 = 0x7b;
      iVar2 = M007_GETSTATE(0x1010,0x7b);
      if (iVar2 == 1) {
        uVar1 = 0x7d;
        iVar2 = M007_GETSTATE(0x1010,0x7d);
        if (iVar2 != 1) goto LAB_1000_6c60;
      }
      else {
LAB_1000_6c60:
        uVar3 = 0x73;
        uVar1 = 0;
      }
      M007_PUTSTATE(0x1010,uVar1);
      iVar2 = M007_GETSTATE(0x1010,0x7f,uVar3);
      if (iVar2 != 1) break;
      uVar1 = 0x81;
      goto LAB_1000_6d0a;
    }
    iVar2 = M007_GETSTATE(0x1010,0x7b);
    uVar1 = 0x73;
    M007_PUTSTATE(0x1010,iVar2 == 1);
    iVar2 = M007_GETSTATE(0x1010,0x7f,uVar1);
    goto joined_r0x10006d10;
  case 1:
    iVar2 = M007_GETSTATE(0x1000,0x20,uVar3,uVar4);
    if (iVar2 != 0) {
      iVar2 = M007_GETSTATE(0x1010,0x7b);
      if (((iVar2 == 1) && (iVar2 = M007_GETSTATE(0x1010,0x7c), iVar2 == 1)) &&
         ((iVar2 = M007_GETSTATE(0x1010,0x7d), iVar2 == 1 &&
          (iVar2 = M007_GETSTATE(0x1010,0x7e), iVar2 == 1)))) goto LAB_1000_6d44;
LAB_1000_6cde:
      uVar1 = 0;
      goto LAB_1000_6ce2;
    }
    uVar3 = 0x7b;
    iVar2 = M007_GETSTATE(0x1010,0x7b);
    if (iVar2 == 1) {
      uVar1 = 0x7c;
      iVar2 = M007_GETSTATE(0x1010,0x7c);
      if (iVar2 != 1) goto LAB_1000_6c9e;
    }
    else {
LAB_1000_6c9e:
      uVar3 = 0x73;
      uVar1 = 0;
    }
    M007_PUTSTATE(0x1010,uVar1);
    iVar2 = M007_GETSTATE(0x1010,0x7f,uVar3);
    if (iVar2 == 1) {
      uVar1 = 0x80;
      goto LAB_1000_6d0a;
    }
    break;
  case 2:
    iVar2 = M007_GETSTATE(0x1000,0x7b,uVar3,uVar4);
    if ((((iVar2 != 1) || (iVar2 = M007_GETSTATE(0x1010,0x7c), iVar2 != 1)) ||
        (iVar2 = M007_GETSTATE(0x1010,0x7d), iVar2 != 1)) ||
       (iVar2 = M007_GETSTATE(0x1010,0x7e), iVar2 != 1)) goto LAB_1000_6cde;
LAB_1000_6d44:
    uVar1 = 1;
LAB_1000_6ce2:
    uVar3 = 0x73;
    M007_PUTSTATE(0x1010,uVar1);
    iVar2 = M007_GETSTATE(0x1010,0x7f,uVar3);
    if (((iVar2 == 1) && (iVar2 = M007_GETSTATE(0x1010,0x80), iVar2 == 1)) &&
       (iVar2 = M007_GETSTATE(0x1010,0x81), iVar2 == 1)) {
      uVar1 = 0x82;
      goto LAB_1000_6d0a;
    }
    break;
  case 3:
  case 4:
  case 5:
    iVar2 = M007_GETSTATE(0x1000,0x7b,uVar3,uVar4);
    uVar3 = 0x73;
    M007_PUTSTATE(0x1010,iVar2 == 1);
    uVar1 = 0x7f;
LAB_1000_6d0a:
    iVar2 = M007_GETSTATE(0x1010,uVar1,uVar3);
joined_r0x10006d10:
    if (iVar2 != 1) break;
    uVar1 = 1;
    goto LAB_1000_6c3e;
  default:
    goto switchD_1000_6d6f_default;
  }
  uVar1 = 0;
LAB_1000_6c3e:
  M007_PUTSTATE(0x1010,uVar1);
switchD_1000_6d6f_default:
  uVar1 = 0x1010;
  iVar2 = M007_GETSTATE(0x1010,0xa3);
  if (iVar2 != 1) {
    uVar4 = M007_GETSTATE(0x1010,100);
    uVar3 = 0x1000;
    uVar1 = 0x1000;
    switch(uVar4) {
    case 0:
      break;
    case 1:
      break;
    case 2:
      break;
    case 3:
      break;
    case 4:
      break;
    case 5:
      uVar1 = uVar3;
      break;
    case 6:
      uVar1 = uVar3;
      break;
    case 7:
      uVar1 = uVar3;
      break;
    default:
      goto switchD_1000_6de9_default;
    }
  }
  uVar1 = M007_GETSTATE(uVar1);
  M007_PUTSTATE(0x1010,uVar1);
switchD_1000_6de9_default:
  CHECKFORBEAMBLANKING(0x1010);
  iVar2 = M007_GETSTATE(0x1010,0x144);
  if (iVar2 == 2) {
    iVar2 = M007_GETSTATE(0x1010,0x118);
    if (((iVar2 == 6) && (iVar2 = M007_GETSTATE(0x1010,0xc5), iVar2 == 1)) &&
       (iVar2 = M007_GETSTATE(0x1010,0x5d), iVar2 != 1)) {
      M007_GETSTATE(0x1010,0x5d);
      return;
    }
  }
  else {
    iVar2 = M007_GETSTATE(0x1010,0x118);
    if ((iVar2 == 6) && (iVar2 = M007_GETSTATE(0x1010,0xc5), iVar2 == 1)) {
      M007_PUTVALUE(0x1010,DAT_1008_0a6a,DAT_1008_0a6c);
      M007_PUTSTATE(0x1010,0);
    }
  }
  return;
}


// ---- FUN_1000_6e72 @ 1000:6e72

void __cdecl16far FUN_1000_6e72(void)

{
  int iVar1;
  undefined2 unaff_SS;
  undefined2 uVar2;
  undefined2 uVar3;
  int local_c;
  uint local_a;
  undefined2 local_8;
  uint local_6;
  undefined2 local_4;
  
  uVar3 = 0x1008;
  local_a = 0x101;
  local_8 = 0x101;
  local_6 = 0x101;
  local_4 = 0x101;
  uVar2 = 0x21;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    local_c = 0;
    do {
      *(undefined1 *)((int)&local_a + local_c) = 0;
      local_c = local_c + 1;
    } while (local_c < 8);
    local_a = CONCAT11(local_a._1_1_,1);
    DAT_1008_0e2a = local_a;
    DAT_1008_0e2c = local_8;
    DAT_1008_0e2e = local_6;
    DAT_1008_0e30 = local_4;
    return;
  }
  iVar1 = M007_GETSTATE(0x1010,0x23,uVar2,uVar3);
  if ((iVar1 == 0) && (iVar1 = M007_GETSTATE(0x1010,0x70), iVar1 == 0)) {
    local_c = 4;
    do {
      *(undefined1 *)((int)&local_a + local_c) = 0;
      local_c = local_c + 1;
    } while (local_c < 8);
  }
  iVar1 = M007_GETSTATE(0x1010,0x1e);
  if (iVar1 == 0) {
LAB_1000_6f15:
    local_a = local_a & 0xff;
    local_6 = local_6 & 0xff;
  }
  else if (iVar1 != 1) {
    if (((iVar1 + -2 < 1) || (SBORROW2(iVar1 + -2,1))) || (1 < iVar1 + -4)) goto LAB_1000_6f29;
    goto LAB_1000_6f15;
  }
  local_8 = 0;
  local_4 = 0;
LAB_1000_6f29:
  iVar1 = M007_GETSTATE(0x1010,0x20);
  if (iVar1 == 1) {
    iVar1 = M007_GETSTATE(0x1010,0x1e);
    if (iVar1 == 0) {
      local_8 = CONCAT11(local_8._1_1_,1);
      iVar1 = M007_GETSTATE(0x1010,0x70);
      if (iVar1 == 1) {
        local_4 = CONCAT11(local_4._1_1_,1);
      }
    }
    iVar1 = M007_GETSTATE(0x1010,0x1e);
    if (iVar1 == 1) {
      local_8 = 0x101;
      iVar1 = M007_GETSTATE(0x1010,0x70);
      if (iVar1 == 1) {
        local_4 = 0x101;
      }
    }
  }
  DAT_1008_0e2a = local_a;
  DAT_1008_0e2c = local_8;
  DAT_1008_0e2e = local_6;
  DAT_1008_0e30 = local_4;
  return;
}


// ---- FUN_1000_6f8c @ 1000:6f8c

void __cdecl16far FUN_1000_6f8c(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  char cVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined2 unaff_SS;
  int local_16;
  undefined2 local_14;
  char local_12;
  char local_e;
  
  local_16 = 0;
  do {
    *(undefined1 *)((int)&local_14 + local_16) = 0;
    local_16 = local_16 + 1;
  } while (local_16 < 0x12);
  local_16 = 0;
  do {
    if ((&stack0x0004)[local_16] == '\x01') {
      *(undefined1 *)((int)&local_14 + (int)*(char *)(local_16 + 0x150)) = 1;
    }
    local_16 = local_16 + 1;
  } while (local_16 < 8);
  if (local_e == '\x01') {
    cVar3 = FUN_1000_710e(6,&stack0x0004);
    if (cVar3 == '\x01') {
      cVar3 = FUN_1000_710e(1,&stack0x0004);
      if (cVar3 == '\0') {
        local_14._1_1_ = 0;
      }
      local_12 = FUN_1000_710e(2,&stack0x0004);
      if (local_12 == '\0') {
      }
    }
  }
  puVar6 = (undefined2 *)&DAT_1008_0e2a;
  puVar5 = &local_14;
  for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar2 = puVar6;
    puVar6 = puVar6 + 1;
    puVar1 = puVar5;
    puVar5 = puVar5 + 1;
    *puVar2 = *puVar1;
  }
  return;
}


// ---- FUN_1000_702e @ 1000:702e

void __cdecl16far FUN_1000_702e(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 *puVar6;
  undefined2 unaff_SS;
  undefined4 uVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined2 local_24;
  undefined2 local_22;
  undefined2 local_20;
  undefined2 local_1e;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined2 local_18;
  undefined2 local_16;
  undefined2 local_c;
  undefined2 local_a;
  undefined2 local_8;
  undefined2 local_6;
  int local_4;
  
  uVar9 = 0x1008;
  uVar8 = 0x66;
  uVar7 = M007_GETSTATE();
  uVar5 = (undefined2)((ulong)uVar7 >> 0x10);
  local_4 = (int)uVar7;
  puVar3 = (undefined2 *)FUN_1000_64ba(local_4,uVar8,uVar9);
  puVar6 = &local_24;
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar2 = puVar6;
    puVar6 = puVar6 + 1;
    puVar1 = puVar3;
    puVar3 = puVar3 + 1;
    *puVar2 = *puVar1;
  }
  M007_PUTVALUE(0x1000,local_20,local_1e);
  M007_PUTVALUE(0x1010,local_24,local_22);
  M007_PUTVALUE(0x1010,local_1c,local_1a);
  M007_PUTVALUE(0x1010,local_18,local_16);
  M007_PUTVALUE(0x1010,local_8,local_6);
  M007_PUTVALUE(0x1010,local_c,local_a);
  *(undefined2 *)(local_4 * 0x20 + 0x158) = local_24;
  *(undefined2 *)(local_4 * 0x20 + 0x15a) = local_22;
  return;
}


// ---- FUN_1000_70c8 @ 1000:70c8

void __cdecl16far FUN_1000_70c8(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0xa4;
  iVar1 = M007_GETSTATE();
  if ((iVar1 == 1) && (DAT_1008_07ae == 0)) {
    DAT_1008_07ae = 1;
    UPDATE_DETECTORS(uVar2,uVar3);
  }
  if ((iVar1 == 0) && (DAT_1008_07ae == 1)) {
    DAT_1008_07ae = 0;
    UPDATE_DETECTORS(uVar2,uVar3);
  }
  return;
}


// ---- FUN_1000_710e @ 1000:710e

undefined2 __cdecl16far FUN_1000_710e(char param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined1 local_6;
  undefined1 local_4;
  
  iVar1 = 0x1000;
  local_6 = 0;
  for (local_4 = '\0'; local_4 < '\b'; local_4 = local_4 + '\x01') {
    iVar2 = (int)local_4;
    iVar1 = iVar2;
    if (((*(char *)(iVar2 + (int)param_2) == '\x01') &&
        (iVar1 = CONCAT11(local_4 >> 7,param_1), *(char *)(iVar2 + 0x150) == param_1)) &&
       (*(char *)(iVar2 + 0x39e) == '\0')) {
      local_6 = 1;
    }
  }
  return CONCAT11((char)((uint)iVar1 >> 8),local_6);
}


// ---- DOCOMMANDSCANRATE3 @ 1010:0000

/* WARNING: Control flow encountered bad instruction data */

void DOCOMMANDSCANRATE3(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- DOCOMMANDSCANRATE4 @ 1010:0004

/* WARNING: Control flow encountered bad instruction data */

void DOCOMMANDSCANRATE4(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- DOCOMMANDSCANRATE5 @ 1010:0008

/* WARNING: Control flow encountered bad instruction data */

void DOCOMMANDSCANRATE5(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- EO_RASTER_SIZE @ 1010:000c

/* WARNING: Control flow encountered bad instruction data */

void EO_RASTER_SIZE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- CHECKFORBEAMBLANKING @ 1010:0010

/* WARNING: Control flow encountered bad instruction data */

void CHECKFORBEAMBLANKING(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- FATALEXIT @ 1010:0014

/* WARNING: Control flow encountered bad instruction data */

void FATALEXIT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GETVERSION @ 1010:0018

/* WARNING: Control flow encountered bad instruction data */

void GETVERSION(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- LOCALINIT @ 1010:001c

/* WARNING: Control flow encountered bad instruction data */

void LOCALINIT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GLOBALALLOC @ 1010:0020

/* WARNING: Control flow encountered bad instruction data */

void GLOBALALLOC(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GLOBALREALLOC @ 1010:0024

/* WARNING: Control flow encountered bad instruction data */

void GLOBALREALLOC(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GLOBALFREE @ 1010:0028

/* WARNING: Control flow encountered bad instruction data */

void GLOBALFREE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GLOBALLOCK @ 1010:002c

/* WARNING: Control flow encountered bad instruction data */

void GLOBALLOCK(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GLOBALUNLOCK @ 1010:0030

/* WARNING: Control flow encountered bad instruction data */

void GLOBALUNLOCK(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GLOBALSIZE @ 1010:0034

/* WARNING: Control flow encountered bad instruction data */

void GLOBALSIZE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- LOCKSEGMENT @ 1010:0038

/* WARNING: Control flow encountered bad instruction data */

void LOCKSEGMENT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GETMODULEUSAGE @ 1010:003c

/* WARNING: Control flow encountered bad instruction data */

void GETMODULEUSAGE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- INITTASK @ 1010:0040

/* WARNING: Control flow encountered bad instruction data */

void INITTASK(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- DOS3CALL @ 1010:0044

/* WARNING: Control flow encountered bad instruction data */

void DOS3CALL(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- __AHSHIFT @ 1010:0048

/* WARNING: Control flow encountered bad instruction data */

void __AHSHIFT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- __AHINCR @ 1010:004c

/* WARNING: Control flow encountered bad instruction data */

void __AHINCR(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- WRITEPRIVATEPROFILESTRING @ 1010:0050

/* WARNING: Control flow encountered bad instruction data */

void WRITEPRIVATEPROFILESTRING(void)

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


// ---- GETTICKCOUNT @ 1010:0060

/* WARNING: Control flow encountered bad instruction data */

void GETTICKCOUNT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- _WSPRINTF @ 1010:0064

/* WARNING: Control flow encountered bad instruction data */

void _WSPRINTF(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- __FPMATH @ 1010:0068

/* WARNING: Control flow encountered bad instruction data */

void __FPMATH(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_317 @ 1010:006c

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_317(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_318 @ 1010:0070

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_318(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_319 @ 1010:0074

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_319(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_320 @ 1010:0078

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_320(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_327 @ 1010:007c

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_327(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_912 @ 1010:0080

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_912(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_2128 @ 1010:0084

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_2128(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_4000 @ 1010:0088

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_4000(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_4001 @ 1010:008c

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_4001(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_4002 @ 1010:0090

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_4002(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_4003 @ 1010:0094

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_4003(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_4004 @ 1010:0098

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_4004(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_4007 @ 1010:009c

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_4007(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_4008 @ 1010:00a0

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_4008(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_4009 @ 1010:00a4

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_4009(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_4010 @ 1010:00a8

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_4010(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_4011 @ 1010:00ac

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_4011(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_4012 @ 1010:00b0

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_4012(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_4013 @ 1010:00b4

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_4013(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_4014 @ 1010:00b8

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_4014(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_4015 @ 1010:00bc

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_4015(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_4016 @ 1010:00c0

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_4016(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_4017 @ 1010:00c4

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_4017(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_4018 @ 1010:00c8

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_4018(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_4019 @ 1010:00cc

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_4019(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_4020 @ 1010:00d0

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_4020(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_4022 @ 1010:00d4

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_4022(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_4023 @ 1010:00d8

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_4023(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_4024 @ 1010:00dc

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_4024(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_4025 @ 1010:00e0

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_4025(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_4026 @ 1010:00e4

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_4026(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_4027 @ 1010:00e8

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_4027(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_4028 @ 1010:00ec

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_4028(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_4029 @ 1010:00f0

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_4029(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_4030 @ 1010:00f4

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_4030(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_4031 @ 1010:00f8

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_4031(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_4032 @ 1010:00fc

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_4032(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_4033 @ 1010:0100

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_4033(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_6005 @ 1010:0104

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_6005(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_10000 @ 1010:0108

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_10000(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_10001 @ 1010:010c

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_10001(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_10002 @ 1010:0110

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_10002(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_10003 @ 1010:0114

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_10003(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_10004 @ 1010:0118

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_10004(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_10005 @ 1010:011c

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_10005(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_10006 @ 1010:0120

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_10006(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_10007 @ 1010:0124

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_10007(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_10008 @ 1010:0128

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_10008(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_10009 @ 1010:012c

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_10009(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_10010 @ 1010:0130

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_10010(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_10011 @ 1010:0134

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_10011(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_10013 @ 1010:0138

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_10013(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_10014 @ 1010:013c

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_10014(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_10015 @ 1010:0140

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_10015(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_10017 @ 1010:0144

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_10017(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_10018 @ 1010:0148

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_10018(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_10019 @ 1010:014c

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_10019(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_10020 @ 1010:0150

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_10020(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_10021 @ 1010:0154

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_10021(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_10022 @ 1010:0158

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_10022(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- COMMANDENABLE @ 1010:015c

/* WARNING: Control flow encountered bad instruction data */

void COMMANDENABLE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- M007_PUTVALUE @ 1010:0160

/* WARNING: Control flow encountered bad instruction data */

void M007_PUTVALUE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- M007_GETVALUE @ 1010:0164

/* WARNING: Control flow encountered bad instruction data */

void M007_GETVALUE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- M007_PUTLOW @ 1010:0168

/* WARNING: Control flow encountered bad instruction data */

void M007_PUTLOW(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- M007_PUTHIGH @ 1010:016c

/* WARNING: Control flow encountered bad instruction data */

void M007_PUTHIGH(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- M007_PUTSTATE @ 1010:0170

/* WARNING: Control flow encountered bad instruction data */

void M007_PUTSTATE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- M007_GETSTATE @ 1010:0174

/* WARNING: Control flow encountered bad instruction data */

void M007_GETSTATE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- UIF_MESSAGE @ 1010:0178

/* WARNING: Control flow encountered bad instruction data */

void UIF_MESSAGE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- UIF_LOG @ 1010:017c

/* WARNING: Control flow encountered bad instruction data */

void UIF_LOG(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GETLEOINIFILEPATH @ 1010:0180

/* WARNING: Control flow encountered bad instruction data */

void GETLEOINIFILEPATH(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_13 @ 1010:0184

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_13(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_15 @ 1010:0188

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_15(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_16 @ 1010:018c

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_16(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_23 @ 1010:0190

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_23(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


