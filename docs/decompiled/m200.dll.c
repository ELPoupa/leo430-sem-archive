// Decompiled with Ghidra from m200.dll
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
  
  DAT_1008_0350 = 0x1008;
  uVar3 = unaff_CS;
  DAT_1008_034e = unaff_DI;
  DAT_1008_0352 = in_CX;
  DAT_1008_0354 = in_BX;
  DAT_1008_0356 = unaff_SI;
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
  DAT_1008_0374 = CONCAT11((char)uVar3,(char)((uint)uVar3 >> 8));
  if ((DAT_1000_0010 & 1) == 0) {
    pcVar1 = (code *)swi(0x21);
    DAT_1008_0378 = (*pcVar1)();
  }
  else {
    uVar4 = 0x1000;
    DAT_1008_0378 = DOS3CALL(0x1000);
  }
  DAT_1008_0376 = CONCAT11((char)DAT_1008_0378,(char)((uint)DAT_1008_0378 >> 8));
  if ((DAT_1000_0010 & 1) == 0) {
    DAT_1008_037b = 0;
  }
  FUN_1000_010e(uVar4);
  FUN_1000_03aa();
  DAT_1008_0358 = DAT_1008_0358 + '\x01';
  FUN_1000_035a(DAT_1008_0394,DAT_1008_0396,DAT_1008_0398,DAT_1008_039a,DAT_1008_039c);
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
  int unaff_BP;
  int iVar1;
  bool bVar2;
  undefined2 uVar3;
  
  iVar1 = unaff_BP + 1;
  uVar3 = 0x1008;
  if (DAT_1008_06b0 != 0) {
    bVar2 = false;
    (*DAT_1008_06ae)();
    if (bVar2) {
      FUN_1000_0442();
      return;
    }
  }
  FUN_1000_01de(uVar3,iVar1);
  FUN_1000_01de();
  FUN_1000_01de();
  return;
}


// ---- FUN_1000_0156 @ 1000:0156

undefined2 __cdecl16far FUN_1000_0156(void)

{
  DAT_1008_03a5 = 1;
  FUN_1000_01de();
  FUN_1000_01de();
  FUN_1000_01de();
  FUN_1000_01de();
  FUN_1000_19de();
  FUN_1000_0458();
  return 0x100;
}


// ---- FUN_1000_01de @ 1000:01de

void __cdecl16near FUN_1000_01de(void)

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


// ---- FUN_1000_020a @ 1000:020a

uint __cdecl16far FUN_1000_020a(void)

{
  long lVar1;
  
  lVar1 = FUN_1000_045a(DAT_1008_03a6,DAT_1008_03a8,0x43fd,3);
  DAT_1008_03a8 = (uint)((ulong)(lVar1 + 0x269ec3) >> 0x10);
  DAT_1008_03a6 = (int)(lVar1 + 0x269ec3);
  return DAT_1008_03a8 & 0x7fff;
}


// ---- FUN_1000_024a @ 1000:024a

void FUN_1000_024a(void)

{
  FUN_1000_0d00();
  return;
}


// ---- FUN_1000_0256 @ 1000:0256

void FUN_1000_0256(void)

{
  FUN_1000_0ce6();
  return;
}


// ---- FUN_1000_025c @ 1000:025c

void FUN_1000_025c(void)

{
  FUN_1000_0d00();
  return;
}


// ---- FUN_1000_0282 @ 1000:0282

undefined2 __cdecl16far FUN_1000_0282(void)

{
  longdouble in_ST0;
  undefined2 local_10;
  
  local_10 = (undefined2)(sqword)ROUND(in_ST0);
  return local_10;
}


// ---- FUN_1000_02c0 @ 1000:02c0

void __cdecl16far FUN_1000_02c0(void)

{
  longdouble in_ST0;
  longdouble in_ST1;
  
  DAT_1008_03aa =
       (uint)(in_ST0 < in_ST1) << 8 | (uint)(NAN(in_ST0) || NAN(in_ST1)) << 10 |
       (uint)(in_ST0 == in_ST1) << 0xe;
  return;
}


// ---- FUN_1000_02ea @ 1000:02ea

void __cdecl16far FUN_1000_02ea(void)

{
  longdouble in_ST0;
  longdouble in_ST1;
  
  DAT_1008_03aa =
       (uint)(in_ST0 < in_ST1) << 8 | (uint)(NAN(in_ST0) || NAN(in_ST1)) << 10 |
       (uint)(in_ST0 == in_ST1) << 0xe;
  return;
}


// ---- FUN_1000_0314 @ 1000:0314

undefined2 __cdecl16far
FUN_1000_0314(undefined2 param_1,undefined2 param_2,undefined2 param_3,uint param_4)

{
  DAT_1008_0366 = param_1;
  DAT_1008_0368 = param_2;
  DAT_1008_036a = param_3;
  DAT_1008_036c = param_4 & 0x7fff;
  return 0x366;
}


// ---- FUN_1000_035a @ 1000:035a

void __cdecl16far FUN_1000_035a(void)

{
  FUN_1000_2a24(DAT_1008_0354,DAT_1008_0356,DAT_1008_0352,DAT_1008_0350,DAT_1008_034e);
  return;
}


// ---- FUN_1000_0386 @ 1000:0386

void __cdecl16far FUN_1000_0386(void)

{
  FUN_1000_0e9d(0xfc);
  FUN_1000_0e9d(0xff);
  return;
}


// ---- FUN_1000_03aa @ 1000:03aa

void __cdecl16far FUN_1000_03aa(void)

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
  pcVar11 = (char *)FUN_1000_0f00();
  uVar5 = (undefined2)((ulong)pcVar11 >> 0x10);
  pcVar9 = (char *)pcVar11;
  puVar12 = (undefined2 *)FUN_1000_0f00();
  uVar6 = (undefined2)((ulong)puVar12 >> 0x10);
  DAT_1008_039a = (undefined2 *)puVar12;
  pcVar8 = (char *)0x0;
  for (; DAT_1008_039c = (undefined2)((ulong)puVar12 >> 0x10), puVar2 = (undefined2 *)puVar12,
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
      puVar12 = (undefined2 *)CONCAT22(DAT_1008_039c,puVar2 + 2);
    } while (cVar1 != '\0');
  }
  *puVar2 = 0;
  puVar2[1] = 0;
  return;
}


// ---- FUN_1000_0442 @ 1000:0442

void FUN_1000_0442(void)

{
  FUN_1000_0ebe();
  return;
}


// ---- FUN_1000_0448 @ 1000:0448

undefined2 __cdecl16far FUN_1000_0448(void)

{
  undefined2 unaff_SS;
  
  if (___EXPORTEDSTUB != (code)0xb8) {
    return unaff_SS;
  }
  return uRam10000f2f;
}


// ---- FUN_1000_0458 @ 1000:0458

void __cdecl16near FUN_1000_0458(void)

{
  return;
}


// ---- FUN_1000_045a @ 1000:045a

long __stdcall16far FUN_1000_045a(uint param_1,int param_2,uint param_3,int param_4)

{
  if (param_4 == 0 && param_2 == 0) {
    return (ulong)param_1 * (ulong)param_3;
  }
  return CONCAT22((int)((ulong)param_1 * (ulong)param_3 >> 0x10) +
                  param_2 * param_3 + param_1 * param_4,(int)((ulong)param_1 * (ulong)param_3));
}


// ---- FUN_1000_061a @ 1000:061a

void __cdecl16far FUN_1000_061a(char *param_1)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  undefined2 uVar4;
  char local_6;
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  if ((*(byte *)(*param_1 + 0x4ed) & 1) == 0) {
    iVar3 = (int)*param_1;
  }
  else {
    iVar3 = *param_1 + 0x20;
  }
  if (iVar3 != 0x65) {
    do {
      pcVar1 = (char *)param_1 + 1;
      param_1 = (char *)ZEXT24(pcVar1);
    } while ((*(byte *)(*pcVar1 + 0x4ed) & 4) != 0);
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


// ---- FUN_1000_0690 @ 1000:0690

undefined2 __cdecl16far FUN_1000_0690(char *param_1)

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


// ---- FUN_1000_0714 @ 1000:0714

bool __cdecl16far FUN_1000_0714(double *param_1)

{
  return DAT_1008_0ac2 <= *param_1;
}


// ---- FUN_1000_074c @ 1000:074c

void __cdecl16far FUN_1000_074c(int param_1,float *param_2,undefined2 param_3,undefined2 param_4)

{
  undefined2 *puVar1;
  double *pdVar2;
  undefined2 in_DX;
  float *pfVar3;
  undefined2 uVar4;
  
  if (param_1 == 0) {
    pdVar2 = (double *)FUN_1000_0f42(param_3,param_4);
    *param_2 = (float)*pdVar2;
  }
  else {
    puVar1 = (undefined2 *)FUN_1000_0f42(param_3,param_4);
    uVar4 = (undefined2)((ulong)param_2 >> 0x10);
    pfVar3 = (float *)param_2;
    *(undefined2 *)param_2 = *puVar1;
    *(undefined2 *)((int)pfVar3 + 2) = puVar1[1];
    *(undefined2 *)(pfVar3 + 1) = puVar1[2];
    *(undefined2 *)((int)pfVar3 + 6) = puVar1[3];
  }
  return;
}


// ---- FUN_1000_07a4 @ 1000:07a4

undefined1 * __cdecl16far
FUN_1000_07a4(undefined2 *param_1,undefined1 *param_2,undefined2 param_3,int param_4,int param_5)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined2 in_DX;
  undefined2 *puVar3;
  int iVar4;
  undefined2 uVar5;
  undefined4 local_c;
  undefined4 local_8;
  
  if (DAT_1008_04a8 == '\0') {
    uVar5 = (undefined2)((ulong)param_1 >> 0x10);
    puVar3 = (undefined2 *)param_1;
    piVar1 = (int *)FUN_1000_12b6(*param_1,puVar3[1],puVar3[2],puVar3[3]);
    local_8 = (int *)CONCAT22(in_DX,piVar1);
    FUN_1000_0fa0(param_2 + (uint)(0 < param_4) + (uint)(*local_8 == 0x2d),param_3,param_4 + 1,
                  piVar1,in_DX);
  }
  else {
    local_8 = (int *)CONCAT22(DAT_1008_1820,DAT_1008_181e);
    FUN_1000_0c56(0 < param_4,param_2 + (*DAT_1008_181e == 0x2d),param_3);
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
           FUN_1000_1068((undefined1 *)local_c + param_4 + (uint)(DAT_1008_04a8 == '\0'),
                         local_c._2_2_,0x4ad,0x1008);
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


// ---- FUN_1000_093c @ 1000:093c

void __cdecl16far
FUN_1000_093c(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5,undefined2 param_6)

{
  DAT_1008_04a8 = 1;
  FUN_1000_07a4(param_1,param_2,param_3,param_4,param_5,param_6);
  DAT_1008_04a8 = 0;
  return;
}


// ---- FUN_1000_0970 @ 1000:0970

undefined1 * __cdecl16far
FUN_1000_0970(undefined2 *param_1,undefined1 *param_2,undefined2 param_3,int param_4)

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
  
  iVar3 = DAT_1008_04aa;
  if (DAT_1008_04a8 == '\0') {
    uVar6 = (undefined2)((ulong)param_1 >> 0x10);
    puVar4 = (undefined2 *)param_1;
    piVar5 = (int *)FUN_1000_12b6(*param_1,puVar4[1],puVar4[2],puVar4[3]);
    local_8 = (int *)CONCAT22(in_DX,piVar5);
    FUN_1000_0fa0(param_2 + (*local_8 == 0x2d),param_3,piVar5[1] + param_4,piVar5,in_DX);
  }
  else {
    local_8 = (int *)CONCAT22(DAT_1008_1820,DAT_1008_181e);
    iVar1 = *DAT_1008_181e;
    if (param_4 == DAT_1008_04aa) {
      param_2[DAT_1008_04aa + (uint)(iVar1 == 0x2d)] = 0x30;
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
    FUN_1000_0c56(1,puVar2,param_3);
    puVar2 = puVar2 + 1;
    *local_c = 0x30;
  }
  else {
    puVar2 = puVar2 + piVar5[1];
  }
  local_c = (undefined1 *)CONCAT22(param_3,puVar2);
  if (0 < param_4) {
    FUN_1000_0c56(1,puVar2,param_3);
    *local_c = 0x2e;
    if (piVar5[1] < 0) {
      if (DAT_1008_04a8 == '\0') {
        iVar3 = -piVar5[1];
        if (-param_4 != piVar5[1] && param_4 <= iVar3) {
          iVar3 = param_4;
        }
      }
      else {
        iVar3 = -piVar5[1];
      }
      FUN_1000_0c56(iVar3,puVar2 + 1,param_3);
      FUN_1000_10a4(puVar2 + 1,param_3,0x30,iVar3);
    }
  }
  return param_2;
}


// ---- FUN_1000_0ad6 @ 1000:0ad6

void __cdecl16far
FUN_1000_0ad6(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5)

{
  DAT_1008_04a8 = 1;
  FUN_1000_0970(param_1,param_2,param_3,param_4,param_5);
  DAT_1008_04a8 = 0;
  return;
}


// ---- FUN_1000_0b08 @ 1000:0b08

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far
FUN_1000_0b08(undefined2 *param_1,int param_2,undefined2 param_3,int param_4,undefined2 param_5)

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
  piVar2 = (int *)FUN_1000_12b6(*param_1,puVar5[1],puVar5[2],puVar5[3]);
  _DAT_1008_181e = (int *)CONCAT22(in_DX,piVar2);
  DAT_1008_04aa = piVar2[1] + -1;
  pcVar3 = (char *)((uint)(*_DAT_1008_181e == 0x2d) + param_2);
  local_8 = (char *)CONCAT22(param_3,pcVar3);
  FUN_1000_0fa0(pcVar3,param_3,param_4,piVar2,in_DX);
  iVar4 = ((int *)_DAT_1008_181e)[1] + -1;
  DAT_1008_04ac = DAT_1008_04aa < iVar4;
  DAT_1008_04aa = iVar4;
  if ((iVar4 < -4) || (param_4 <= iVar4)) {
    FUN_1000_093c(puVar5,uVar6,param_2,param_3,param_4,param_5);
  }
  else {
    if ((bool)DAT_1008_04ac) {
      do {
        pcVar1 = local_8;
        uVar7 = (undefined2)((ulong)local_8 >> 0x10);
        pcVar3 = (char *)local_8;
        local_8 = (char *)CONCAT22(uVar7,(char *)local_8 + 1);
      } while (*pcVar1 != '\0');
      pcVar3[-1] = '\0';
    }
    FUN_1000_0ad6(puVar5,uVar6,param_2,param_3,param_4);
  }
  return;
}


// ---- FUN_1000_0be8 @ 1000:0be8

void __cdecl16far
FUN_1000_0be8(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             int param_5,undefined2 param_6,undefined2 param_7)

{
  int unaff_BP;
  
  if ((param_5 == 0x65) || (param_5 == 0x45)) {
    FUN_1000_07a4(param_1,param_2,param_3,param_4,param_6,param_7);
  }
  else if (param_5 == 0x66) {
    FUN_1000_0970(param_1,param_2,param_3,param_4,param_6);
  }
  else {
    FUN_1000_0b08(param_1,param_2,param_3,param_4,param_6,param_7,0x1008,unaff_BP + 1);
  }
  return;
}


// ---- FUN_1000_0c56 @ 1000:0c56

void FUN_1000_0c56(int param_1,int param_2,undefined2 param_3)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = FUN_1000_104e(param_2,param_3);
    FUN_1000_10ec(param_2 + param_1,param_3,param_2,param_3,iVar1 + 1);
  }
  return;
}


// ---- FUN_1000_0c8a @ 1000:0c8a
// decompilation failed: Exception while decompiling 1000:0c8a: process: timeout


// ---- FUN_1000_0ce6 @ 1000:0ce6
// decompilation failed: Exception while decompiling 1000:0ce6: process: timeout


// ---- FUN_1000_0d00 @ 1000:0d00
// decompilation failed: Exception while decompiling 1000:0d00: process: timeout


// ---- FUN_1000_0e66 @ 1000:0e66

int * __stdcall16far FUN_1000_0e66(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  piVar3 = (int *)&DAT_1008_0ad2;
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


// ---- FUN_1000_0e9d @ 1000:0e9d

undefined2 __stdcall16far FUN_1000_0e9d(void)

{
  return 0x1008;
}


// ---- FUN_1000_0ebe @ 1000:0ebe

void FUN_1000_0ebe(void)

{
  char *pcVar1;
  undefined2 in_AX;
  char *pcVar2;
  int iVar3;
  int in_CX;
  int iVar4;
  undefined2 uVar5;
  char *pcVar6;
  undefined2 unaff_ES;
  undefined2 unaff_CS;
  undefined4 uVar7;
  undefined2 uVar8;
  
  uVar5 = in_AX;
  FUN_1000_0386();
  FUN_1000_0e9d(in_AX);
  pcVar2 = (char *)FUN_1000_0e66(uVar5);
  uVar5 = 0;
  if (pcVar2 != (char *)0x0) {
    iVar3 = 9;
    if (*pcVar2 == 'M') {
      iVar3 = 0xf;
    }
    pcVar2 = pcVar2 + iVar3;
    unaff_ES = 0x1008;
    in_CX = 0x22;
    pcVar6 = pcVar2;
    do {
      if (in_CX == 0) break;
      in_CX = in_CX + -1;
      pcVar1 = pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (*pcVar1 != '\r');
    pcVar6[-1] = '\0';
  }
  uVar8 = 0;
  FATALAPPEXIT(unaff_CS,pcVar2,0x1008);
  uVar7 = FATALEXIT(0x1010,0xff,uVar8);
  uVar8 = DAT_1008_0644;
  iVar4 = (int)((ulong)uVar7 >> 0x10);
  LOCK();
  DAT_1008_0644 = 0x1000;
  UNLOCK();
  iVar3 = FUN_1000_1693((int)uVar7,uVar8,in_CX,unaff_ES,uVar5);
  DAT_1008_0644 = uVar8;
  if (iVar4 != 0 || iVar3 != 0) {
    return;
  }
  FUN_1000_0ebe();
  return;
}


// ---- FUN_1000_0f00 @ 1000:0f00

void __cdecl16near FUN_1000_0f00(void)

{
  undefined2 uVar1;
  int iVar2;
  int in_DX;
  
  uVar1 = DAT_1008_0644;
  LOCK();
  DAT_1008_0644 = 0x1000;
  UNLOCK();
  iVar2 = FUN_1000_1693();
  DAT_1008_0644 = uVar1;
  if (in_DX != 0 || iVar2 != 0) {
    return;
  }
  FUN_1000_0ebe();
  return;
}


// ---- ___EXPORTEDSTUB @ 1000:0f2e

undefined2 __cdecl16far ___EXPORTEDSTUB(void)

{
  return 0;
}


// ---- FUN_1000_0f42 @ 1000:0f42

undefined2 * __cdecl16far FUN_1000_0f42(char *param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 in_DX;
  undefined2 uVar3;
  
  while (uVar3 = (undefined2)((ulong)param_1 >> 0x10), (*(byte *)(*param_1 + 0x4ed) & 8) != 0) {
    param_1 = (char *)CONCAT22(uVar3,(char *)param_1 + 1);
  }
  uVar1 = FUN_1000_1440((char *)param_1,uVar3,0,0);
  iVar2 = FUN_1000_160e((char *)param_1,uVar3,uVar1);
  DAT_1008_19ea = *(undefined2 *)(iVar2 + 8);
  DAT_1008_19ec = *(undefined2 *)(iVar2 + 10);
  DAT_1008_19ee = *(undefined2 *)(iVar2 + 0xc);
  DAT_1008_19f0 = *(undefined2 *)(iVar2 + 0xe);
  return (undefined2 *)&DAT_1008_19ea;
}


// ---- FUN_1000_0fa0 @ 1000:0fa0

void __cdecl16far FUN_1000_0fa0(char *param_1,int param_2,undefined4 param_3)

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
    FUN_1000_1068(pcVar4,uVar6,pcVar4 + 1,uVar6);
  }
  return;
}


// ---- FUN_1000_104e @ 1000:104e

uint __cdecl16far FUN_1000_104e(char *param_1)

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


// ---- FUN_1000_1068 @ 1000:1068

void __cdecl16far FUN_1000_1068(char *param_1,char *param_2)

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


// ---- FUN_1000_10a4 @ 1000:10a4

undefined2 * __cdecl16far FUN_1000_10a4(undefined2 *param_1,undefined1 param_2,uint param_3)

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


// ---- FUN_1000_10ec @ 1000:10ec

undefined2 * __cdecl16far FUN_1000_10ec(undefined2 *param_1,undefined2 *param_2,uint param_3)

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
    lVar15 = FUN_1000_145a(puVar10,iVar13,puVar8,iVar14);
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
          iVar14 = iVar14 + 0x6c;
        }
        if (puVar12 == (undefined2 *)0x0) {
          iVar13 = iVar13 + 0x6c;
        }
      }
    }
    else {
      uVar6 = param_3 - 1;
      puVar9 = (undefined1 *)((int)puVar8 + uVar6);
      if (CARRY2((uint)puVar8,uVar6)) {
        iVar14 = iVar14 + 0x6c;
      }
      puVar11 = (undefined1 *)((int)puVar10 + uVar6);
      if (CARRY2((uint)puVar10,uVar6)) {
        iVar13 = iVar13 + 0x6c;
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
          iVar14 = iVar14 + -0x6c;
        }
        if (puVar11 == (undefined1 *)0xffff) {
          iVar13 = iVar13 + -0x6c;
        }
      }
    }
  }
  return puVar10;
}


// ---- FUN_1000_11b6 @ 1000:11b6

void FUN_1000_11b6(void)

{
  longdouble lVar1;
  byte bVar2;
  int in_DX;
  int unaff_BP;
  undefined2 unaff_SS;
  undefined2 in_FPUControlWord;
  longdouble in_ST0;
  
  *(undefined2 *)(unaff_BP + -6) = in_FPUControlWord;
  *(undefined2 *)(unaff_BP + -8) = CONCAT11(0x13,*(byte *)(unaff_BP + -6) | 0x38);
  lVar1 = (longdouble)0;
  *(int *)(unaff_BP + -0x10) = in_DX;
  *(uint *)(unaff_BP + -10) =
       (uint)NAN(in_ST0) << 8 | (uint)(in_ST0 < lVar1) << 9 | (uint)(in_ST0 != lVar1) << 10 |
       (uint)(in_ST0 == lVar1) << 0xe;
  *(undefined1 *)(unaff_BP + -0x11) = 0;
  bVar2 = (char)(*(char *)(unaff_BP + -9) << 1) >> 1;
                    /* WARNING: Could not recover jumptable at 0x100011f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*(undefined2 *)
             (in_DX + *(char *)(ulong)((byte)((bVar2 & 7) << 1 | (char)bVar2 < '\0') + 0x603) + 0x10
             ))();
  return;
}


// ---- FUN_1000_11f8 @ 1000:11f8

void FUN_1000_11f8(void)

{
  longdouble lVar1;
  char cVar2;
  byte bVar3;
  int in_DX;
  int unaff_BP;
  undefined2 unaff_SS;
  undefined2 in_FPUControlWord;
  longdouble in_ST0;
  longdouble in_ST1;
  
  *(undefined2 *)(unaff_BP + -6) = in_FPUControlWord;
  *(undefined2 *)(unaff_BP + -8) = CONCAT11(0x13,*(byte *)(unaff_BP + -6) | 0x38);
  lVar1 = (longdouble)0;
  *(int *)(unaff_BP + -0x10) = in_DX;
  *(uint *)(unaff_BP + -10) =
       (uint)NAN(in_ST0) << 8 | (uint)(in_ST0 < lVar1) << 9 | (uint)(in_ST0 != lVar1) << 10 |
       (uint)(in_ST0 == lVar1) << 0xe;
  *(undefined1 *)(unaff_BP + -0x11) = 0;
  cVar2 = *(char *)(unaff_BP + -9);
  lVar1 = (longdouble)0;
  *(uint *)(unaff_BP + -10) =
       (uint)NAN(in_ST1) << 8 | (uint)(in_ST1 < lVar1) << 9 | (uint)(in_ST1 != lVar1) << 10 |
       (uint)(in_ST1 == lVar1) << 0xe;
  bVar3 = (char)(*(char *)(unaff_BP + -9) << 1) >> 1;
  cVar2 = (char)(cVar2 << 1) >> 1;
                    /* WARNING: Could not recover jumptable at 0x10001259. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*(undefined2 *)
             (in_DX + (char)(*(byte *)(ulong)(((byte)(cVar2 << 1 | cVar2 < '\0') & 0xf) + 0x603) |
                            *(char *)(ulong)((byte)((bVar3 & 7) << 1 | (char)bVar3 < '\0') + 0x603)
                            << 2) + 0x10))();
  return;
}


// ---- FUN_1000_12b6 @ 1000:12b6

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 __cdecl16far
FUN_1000_12b6(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

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
  _DAT_1008_061e = param_1;
  _DAT_1008_0620 = param_2;
  DAT_1008_0622 = param_3;
  DAT_1008_0624 = param_4;
  uVar6 = FUN_1000_14c8(&iStack_2);
  puVar5 = (undefined1 *)&DAT_1008_0626;
  puVar4 = (undefined1 *)&DAT_1008_061f;
  for (iVar3 = (int)DAT_1008_061e; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar2 = *puVar1;
  }
  *puVar5 = 0;
  DAT_1008_0614 = in_BX & 0xff;
  DAT_1008_0616 = (int)((ulong)uVar6 >> 0x10);
  DAT_1008_0618 = (int)uVar6;
  DAT_1008_061a = 0x626;
  DAT_1008_061c = 0x1008;
  return 0x614;
}


// ---- FUN_1000_1326 @ 1000:1326

void __cdecl16near FUN_1000_1326(void)

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
    FUN_1000_141d();
    if ((*unaff_SI & 1) != 0) {
      in_CX = (in_CX - *unaff_SI) + -1;
    }
    uVar4 = *(uint *)(in_BX + 4);
    if (uVar4 != 0) {
      if (!CARRY2(in_CX + 2U,uVar4)) {
        uVar2 = FUN_1000_0448();
        uVar4 = *(uint *)&DAT_1008_0644;
        if (uVar4 == 0x1000) goto LAB_1000_1378;
        uVar5 = 0x8000;
        while (uVar4 <= uVar5) {
          uVar5 = uVar5 >> 1;
          if (uVar5 == 0) goto LAB_1000_1391;
        }
        if (uVar5 < 8) goto LAB_1000_1391;
        uVar4 = uVar5 << 1;
        goto LAB_1000_1378;
      }
      uVar5 = 0xfff0;
      if (in_CX + 2U + uVar4 == 0) {
        while( true ) {
          bVar8 = false;
          iVar3 = FUN_1000_13b7();
          if (!bVar8) break;
          if (uVar5 == 0xfff0) {
            return;
          }
LAB_1000_1391:
          uVar4 = 0x10;
LAB_1000_1378:
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


// ---- FUN_1000_13b7 @ 1000:13b7

void __cdecl16near FUN_1000_13b7(void)

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
LAB_1000_1412:
    FUN_1000_0ebe();
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
    goto LAB_1000_1412;
    if ((*(byte *)(iVar5 + 2) & 4) != 0) {
      *(int *)(iVar5 + -2) = in_BX + -1;
    }
  }
  return;
}


// ---- FUN_1000_141d @ 1000:141d

void __cdecl16near FUN_1000_141d(void)

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


// ---- FUN_1000_1440 @ 1000:1440

uint __cdecl16far FUN_1000_1440(char *param_1)

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


// ---- FUN_1000_145a @ 1000:145a

undefined4 __stdcall16far FUN_1000_145a(uint param_1,uint param_2,uint param_3,uint param_4)

{
  return CONCAT22(((param_2 >> 8) - (param_4 >> 8)) - (uint)(param_1 < param_3),param_1 - param_3);
}


// ---- FUN_1000_14c8 @ 1000:14c8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined4 __cdecl16near FUN_1000_14c8(void)

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
  
  pdVar30 = (double *)&DAT_1008_0646;
  for (iVar18 = 4; Var14 = _DAT_1008_0646, iVar18 != 0; iVar18 = iVar18 + -1) {
    pdVar3 = pdVar30;
    pdVar30 = (double *)((int)pdVar30 + 2);
    puVar1 = unaff_SI;
    unaff_SI = unaff_SI + 1;
    *(undefined2 *)pdVar3 = *puVar1;
  }
  uVar19 = DAT_1008_0646._6_2_;
                    /* WARNING: Ignoring partial resolution of indirect */
  DAT_1008_0646._7_1_ = DAT_1008_0646._7_1_ & 0x7f;
  Var15 = _DAT_1008_0646;
  DAT_1008_0646 = ABS((double)Var14);
  uVar24 = 0x20;
  if (((DAT_1008_0646._0_2_ == 0 && DAT_1008_0646._2_2_ == 0) && DAT_1008_0646._4_2_ == 0) &&
      DAT_1008_0646._6_2_ == 0) {
    DAT_1008_0652 = 0x3001;
    _DAT_1008_0646 = (longdouble)Var15;
    return 1;
  }
  if ((int)uVar19 < 0) {
    uVar24 = 0x2d;
  }
  if ((~uVar19 & 0x7ff0) == 0) {
    _DAT_1008_0646 = (longdouble)Var15;
    return 0x10000;
  }
  DAT_1008_067f = (undefined1)in_FPUControlWord;
  DAT_1008_0681._0_1_ = DAT_1008_067f;
  lVar35 = (longdouble)DAT_1008_0646;
  DAT_1008_0646._7_1_ = (byte)((unkuint10)lVar35 >> 0x38);
  DAT_1008_064e = (uint)((unkuint10)lVar35 >> 0x40);
  lVar12 = (ulong)DAT_1008_064e * 0x4d10 + (ulong)((DAT_1008_064e >> 8) * 0x4d);
  uVar19 = (uint)lVar12;
  iVar18 = ((int)((ulong)lVar12 >> 0x10) + (uint)CARRY2(uVar19,(uint)DAT_1008_0646._7_1_ * 0x9a) +
           -0x1343) - (uint)(uVar19 + (uint)DAT_1008_0646._7_1_ * 0x9a < 0x12f4);
  _DAT_1008_0646 = lVar35;
  _DAT_1008_067f = in_FPUControlWord;
  FUN_1000_18b6(iVar18,uVar24);
  DAT_1008_067d =
       (uint)(_DAT_1000_147a < lVar35) << 8 | (uint)(NAN(_DAT_1000_147a) || NAN(lVar35)) << 10 |
       (uint)(_DAT_1000_147a == lVar35) << 0xe;
  if (_DAT_1000_147a < lVar35 || (_DAT_1000_147a == lVar35) != 0) {
    iVar18 = iVar18 + 1;
    lVar35 = _DAT_1000_1484 * lVar35;
  }
  DAT_1008_0646._0_2_ = SUB102(lVar35,0);
  DAT_1008_0646._2_2_ = (uint)((unkuint10)lVar35 >> 0x10);
  DAT_1008_0646._4_2_ = (uint)((unkuint10)lVar35 >> 0x20);
  DAT_1008_0646._6_2_ = (uint)((unkuint10)lVar35 >> 0x30);
  DAT_1008_064e = (uint)((unkuint10)lVar35 >> 0x40);
  bVar32 = false;
  bVar17 = 0;
  for (iVar20 = -(DAT_1008_064e + 0xc002); iVar20 != 0; iVar20 = iVar20 + -1) {
    uVar19 = DAT_1008_0646._6_2_ & 1;
    DAT_1008_0646._6_2_ = DAT_1008_0646._6_2_ >> 1;
    bVar32 = (bVar17 & 1) != 0;
    bVar17 = (byte)(CONCAT11((DAT_1008_0646._0_2_ & 1) != 0,bVar17) >> 1);
    DAT_1008_0646._0_2_ = (uint)(CONCAT12((DAT_1008_0646._2_2_ & 1) != 0,DAT_1008_0646._0_2_) >> 1);
    DAT_1008_0646._2_2_ = (uint)(CONCAT12((DAT_1008_0646._4_2_ & 1) != 0,DAT_1008_0646._2_2_) >> 1);
    DAT_1008_0646._4_2_ = (uint)(CONCAT12(uVar19 != 0,DAT_1008_0646._4_2_) >> 1);
  }
  uVar28 = DAT_1008_0646._0_2_ + 0x39a + (uint)bVar32;
  uVar19 = (uint)(0xfc65 < DAT_1008_0646._0_2_ || CARRY2(DAT_1008_0646._0_2_ + 0x39a,(uint)bVar32));
  uVar26 = DAT_1008_0646._2_2_ + uVar19;
  uVar19 = (uint)CARRY2(DAT_1008_0646._2_2_,uVar19);
  uVar22 = DAT_1008_0646._4_2_ + uVar19;
  uVar19 = DAT_1008_0646._6_2_ + CARRY2(DAT_1008_0646._4_2_,uVar19);
  iVar20 = 0x10;
  pcVar16 = (char *)((int)(undefined2 *)&DAT_1008_0652 + 1);
  _DAT_1008_0646 = lVar35;
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
  DAT_1008_0652 = CONCAT11(DAT_1008_0652._1_1_,(char)iVar21 + '\x12');
  return CONCAT22(iVar18,1);
}


// ---- FUN_1000_160e @ 1000:160e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * __cdecl16far FUN_1000_160e(int param_1,undefined2 param_2)

{
  uint uVar1;
  int unaff_BP;
  undefined2 unaff_SS;
  int local_8 [2];
  undefined2 local_4;
  int iStack_2;
  
  iStack_2 = unaff_BP + 1;
  local_4 = 0x1008;
  uVar1 = FUN_1000_18f4(0,param_1,param_2,local_8,unaff_SS,0x182a,0x1008);
  DAT_1008_1824 = local_8[0] - param_1;
  DAT_1008_1823 = 0;
  if ((uVar1 & 4) != 0) {
    DAT_1008_1823 = 2;
  }
  if ((uVar1 & 1) != 0) {
    DAT_1008_1823 = DAT_1008_1823 | 1;
  }
  DAT_1008_1822 = (uVar1 & 2) != 0;
  return (undefined1 *)&DAT_1008_1822;
}


// ---- FUN_1000_1672 @ 1000:1672

undefined2 __cdecl16far FUN_1000_1672(undefined4 param_1)

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


// ---- FUN_1000_1693 @ 1000:1693

undefined2 __cdecl16far FUN_1000_1693(uint param_1)

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
      if (*(int *)((int)(undefined4 *)&DAT_1008_069e + 2) != 0) {
        pcVar4 = (code *)&DAT_1008_19ec;
        while( true ) {
          uVar3 = *(uint *)&DAT_1008_06a8;
          uVar6 = (uint)((ulong)*(undefined4 *)&DAT_1008_06a2 >> 0x10);
          in_BX = (int)*(undefined4 *)&DAT_1008_06a2;
          uVar10 = uVar6;
          do {
            do {
              unaff_CS = 0x1000;
              uVar9 = (*pcVar4)();
              if (!bVar7) {
                if (pcVar4 == (code *)&DAT_1008_19ec) goto LAB_1000_1704;
                goto LAB_1000_1701;
              }
              puVar1 = (undefined4 *)(in_BX + 0xe);
              in_BX = (int)*puVar1;
              bVar7 = uVar6 < uVar3;
              bVar8 = uVar6 != uVar3;
              uVar6 = (uint)((ulong)*puVar1 >> 0x10);
            } while (bVar8);
            uVar3 = *(uint *)((int)*(undefined4 *)&DAT_1008_06a2 + 0x14);
            uVar6 = (uint)((ulong)*(undefined4 *)&DAT_1008_069e >> 0x10);
            in_BX = (int)*(undefined4 *)&DAT_1008_069e;
            bVar7 = uVar6 < uVar10;
            bVar8 = uVar6 != uVar10;
            uVar10 = uVar6;
          } while (bVar8);
          bVar7 = pcVar4 < (code *)0x1326;
          if (pcVar4 == (code *)0x1326) break;
          pcVar4 = (code *)0x1326;
        }
      }
      FUN_1000_195c();
      if (!bVar7) {
LAB_1000_1701:
        uVar9 = FUN_1000_19ec();
LAB_1000_1704:
        *(undefined2 *)((int)(undefined4 *)&DAT_1008_06a2 + 2) = (int)((ulong)uVar9 >> 0x10);
        *(int *)&DAT_1008_06a2 = in_BX;
        return (int)uVar9;
      }
    }
    if (*(int *)&DAT_1008_0692 == 0 && *(int *)&DAT_1008_0690 == 0) {
      return 0;
    }
    iVar2 = (*(code *)*(undefined2 *)&DAT_1008_0690)(unaff_CS,param_1);
    if (iVar2 == 0) {
      return 0;
    }
  } while( true );
}


// ---- FUN_1000_18b6 @ 1000:18b6

void __cdecl16near FUN_1000_18b6(void)

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


// ---- FUN_1000_18f4 @ 1000:18f4

/* WARNING: Removing unreachable block (ram,0x1000194a) */
/* WARNING: Removing unreachable block (ram,0x10001953) */

int FUN_1000_18f4(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
                 undefined2 param_5,double *param_6)

{
  int iVar1;
  undefined2 unaff_SS;
  longdouble local_c;
  
  iVar1 = FUN_1000_1a68(param_1,param_2,param_3,param_4,param_5,&local_c,unaff_SS);
  *param_6 = (double)local_c;
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  return iVar1;
}


// ---- FUN_1000_195c @ 1000:195c

void __cdecl16near FUN_1000_195c(void)

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
      if (((int)uVar4 != 0) || (iVar1 == 0)) goto LAB_1000_19d3;
    }
    lVar5 = GLOBALSIZE(0x1010,iVar1);
    if (lVar5 == 0) {
LAB_1000_19d3:
      FUN_1000_0ebe();
      return;
    }
    *(int *)0x6 = iVar2;
    *(undefined2 *)0x2 = *(undefined2 *)(unaff_DI + 0xc);
    FUN_1000_1cfa();
    FUN_1000_1d2e();
  }
  return;
}


// ---- FUN_1000_19de @ 1000:19de

void __cdecl16near FUN_1000_19de(void)

{
  FUN_1000_1cd0();
  return;
}


// ---- FUN_1000_19ec @ 1000:19ec

uint * __cdecl16near FUN_1000_19ec(void)

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
          if (CARRY2((uint)puVar1,uVar2)) goto LAB_1000_1a45;
          puVar6 = (uint *)((int)puVar1 + uVar2) + 1;
          uVar3 = *(uint *)((int)puVar1 + uVar2);
          if ((uVar3 & 1) == 0) break;
          uVar3 = uVar3 + uVar2 + 2;
          *puVar7 = uVar3;
        }
      }
      if (puVar6 + -1 < puVar5) break;
      if (((uint)puVar5 & 1) != 0) goto LAB_1000_1a45;
      puVar7 = (uint *)*(undefined2 *)(in_BX + 8);
      if ((uint *)*(undefined2 *)(in_BX + 10) == puVar7) goto LAB_1000_1a45;
      puVar5 = (uint *)((int)*(undefined2 *)(in_BX + 10) + -1);
    }
    puVar7 = (uint *)((int)puVar6 + uVar3);
  } while (!CARRY2((uint)puVar6,uVar3));
LAB_1000_1a45:
  puVar7 = (uint *)*(undefined2 *)(in_BX + 8);
  *(undefined2 *)(in_BX + 10) = puVar7;
  return puVar7;
}


// ---- FUN_1000_1a68 @ 1000:1a68

uint FUN_1000_1a68(undefined2 param_1,byte *param_2,int *param_3,uint *param_4)

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
LAB_1000_1ab7:
      pbVar1 = pbVar11;
      pbVar11 = pbVar9 + 2;
      bVar6 = *pbVar1;
    }
    else if (bVar6 == 0x2d) {
      local_16 = 0x8000;
      goto LAB_1000_1ab7;
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
            if (local_1c == 0) goto LAB_1000_1b05;
            pbVar1 = pbVar11;
            pbVar11 = pbVar11 + 1;
            bVar6 = *pbVar1;
          }
          if (bVar6 == 0x2e) {
            do {
              pbVar1 = pbVar11;
              pbVar11 = pbVar11 + 1;
              bVar6 = *pbVar1;
LAB_1000_1b1f:
              if ((bVar6 < 0x30) || (0x39 < bVar6)) goto LAB_1000_1b3b;
              pcVar2 = pcVar10;
              pcVar10 = pcVar10 + 1;
              *pcVar2 = bVar6 - 0x30;
              local_18 = local_18 + -1;
              local_1c = local_1c + -1;
            } while (local_1c != 0);
            goto LAB_1000_1b32;
          }
          goto LAB_1000_1b3b;
        }
        do {
          local_18 = iVar5;
          bVar6 = *pbVar11;
LAB_1000_1ae4:
          pbVar11 = pbVar11 + 1;
          iVar5 = local_18 + -1;
        } while (bVar6 == 0x30);
        if (bVar6 != 0) goto LAB_1000_1b1f;
      }
      local_14 = pbVar11 + -1;
      goto LAB_1000_1c9d;
    }
    if ((bVar6 == 0x2e) && ((bVar6 = *pbVar11, 0x2f < bVar6 && (bVar6 < 0x3a)))) goto LAB_1000_1ae4;
  }
  local_10 = 4;
  goto LAB_1000_1c9d;
  while (iVar5 = local_18 + 1, bVar6 < 0x3a) {
LAB_1000_1b05:
    local_18 = iVar5;
    pbVar1 = pbVar11;
    pbVar11 = pbVar11 + 1;
    bVar6 = *pbVar1;
    if (bVar6 < 0x30) break;
  }
  if (bVar6 == 0x2e) {
LAB_1000_1b32:
    do {
      pbVar1 = pbVar11;
      pbVar11 = pbVar11 + 1;
      bVar6 = *pbVar1;
      if (bVar6 < 0x30) break;
    } while (bVar6 < 0x3a);
  }
LAB_1000_1b3b:
  local_1c = 0x19 - local_1c;
  local_14 = pbVar11 + -1;
  if ((((bVar6 == 0x45) || (bVar6 == 0x65)) || (bVar6 == 0x44)) || (bVar6 == 100)) {
    pbVar9 = pbVar11 + 1;
    bVar6 = *pbVar11;
    if (bVar6 == 0x2b) {
LAB_1000_1b6a:
      pbVar1 = pbVar9;
      pbVar9 = pbVar11 + 2;
      bVar6 = *pbVar1;
    }
    else if (bVar6 == 0x2d) {
      local_1a = 0xffff;
      goto LAB_1000_1b6a;
    }
    if ((0x2f < bVar6) && (bVar6 < 0x3a)) {
      uVar7 = bVar6 - 0x30;
      uVar8 = uVar7;
      do {
        pbVar1 = pbVar9;
        pbVar9 = pbVar9 + 1;
        bVar6 = *pbVar1;
        if ((bVar6 < 0x30) || (0x39 < bVar6)) goto LAB_1000_1ba1;
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
LAB_1000_1ba1:
      local_18 = local_18 + ((uVar8 ^ local_1a) - local_1a);
      local_14 = pbVar9 + -1;
    }
  }
  if (local_1c != 0) {
    *pcVar10 = '\0';
    pbVar11 = (byte *)(pcVar10 + -1);
    if (local_1c < 0x19) {
      if (local_18 != 0) goto LAB_1000_1be8;
    }
    else {
      bVar6 = *pbVar11;
      *pbVar11 = 0;
      local_1c = local_1c - 1;
      local_18 = local_18 + 1;
      pbVar11 = (byte *)(pcVar10 + -2);
      if (bVar6 < 5) {
LAB_1000_1be8:
        for (; *pbVar11 == 0; pbVar11 = pbVar11 + -1) {
          local_1c = local_1c - 1;
          local_18 = local_18 + 1;
        }
      }
      else {
        *pbVar11 = *pbVar11 + 1;
      }
    }
    FUN_1000_2276(&local_e,local_1c,local_36,unaff_SS);
    if (local_18 == 0) {
LAB_1000_1c22:
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
          goto LAB_1000_1c7f;
        }
LAB_1000_1ca9:
        local_10 = local_10 | 1;
        goto LAB_1000_1c9d;
      }
    }
    else if (local_18 < 0x1450) {
      if (-0x1450 < local_18) {
        FUN_1000_201c(param_1,local_18,&local_e,unaff_SS);
        goto LAB_1000_1c22;
      }
      goto LAB_1000_1ca9;
    }
    local_10 = local_10 | 2;
    puVar12[4] = local_16 | 0x7fff;
    puVar12[3] = 0x8000;
    puVar12[2] = 0;
    puVar12[1] = 0;
    *param_4 = 0;
    goto LAB_1000_1c7f;
  }
LAB_1000_1c9d:
  for (iVar14 = 5; iVar14 != 0; iVar14 = iVar14 + -1) {
    puVar3 = puVar12;
    puVar12 = puVar12 + 1;
    *puVar3 = 0;
  }
LAB_1000_1c7f:
  *param_3 = (int)local_14;
  ((int *)param_3)[1] = local_12;
  return local_10;
}


// ---- FUN_1000_1cd0 @ 1000:1cd0

void __cdecl16near FUN_1000_1cd0(void)

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


// ---- FUN_1000_1cfa @ 1000:1cfa

void __cdecl16near FUN_1000_1cfa(void)

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


// ---- FUN_1000_1d2e @ 1000:1d2e

void __cdecl16near FUN_1000_1d2e(void)

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


// ---- FUN_1000_201c @ 1000:201c

void FUN_1000_201c(int param_1,uint param_2,undefined2 *param_3)

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
    local_8 = (code *)0x20ba;
    uVar2 = (undefined2)((ulong)param_3 >> 0x10);
    uStack_e = param_2;
    if (param_1 == 0) {
      local_8 = (code *)0x20b0;
      in_ST0 = *(unkbyte10 *)((undefined2 *)param_3 + 1);
    }
    while (uStack_e != 0) {
      uVar1 = uStack_e & 7;
      uStack_e = uStack_e >> 3;
      if (uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x10002086. Too many branches */
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


// ---- FUN_1000_2276 @ 1000:2276

uint * FUN_1000_2276(uint *param_1,int param_2,byte *param_3)

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
    FUN_1000_2324();
    uVar18 = FUN_1000_2324();
    uVar8 = (uint)CARRY2((uint)((ulong)uVar18 >> 0x10),uVar8);
    uVar4 = uVar13 + uVar5 + uVar8;
    uVar13 = (uint)(CARRY2(uVar13,uVar5) || CARRY2(uVar13 + uVar5,uVar8));
    bVar17 = CARRY2(uVar6,uVar10);
    uVar6 = uVar6 + uVar10;
    uVar11 = uVar6 + uVar13;
    bVar15 = CARRY2((uint)uVar18,uVar3);
    uVar1 = (uint)uVar18 + uVar3;
    uVar18 = FUN_1000_2324();
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


// ---- FUN_1000_2324 @ 1000:2324

undefined4 __cdecl16near FUN_1000_2324(void)

{
  int in_AX;
  int in_DX;
  uint in_BX;
  
  return CONCAT22(in_DX << 1,in_AX << 1 | (uint)((in_BX & 0x8000) != 0));
}


// ---- FUN_1000_2330 @ 1000:2330

void __cdecl16far FUN_1000_2330(void)

{
  float *pfVar1;
  undefined2 unaff_SS;
  undefined8 *puVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined8 uVar6;
  
  uVar5 = 0x1008;
  uVar4 = 0x16;
  M007_GETVALUE();
  uVar3 = 0x1a;
  pfVar1 = (float *)M007_GETVALUE();
  if (DAT_1008_06c6 <= *pfVar1) {
    FUN_1000_0256(0x1010,(double)(*pfVar1 * DAT_1008_06d2),DAT_1008_06ca);
  }
  puVar2 = (undefined8 *)FUN_1000_025c();
  uVar6 = *puVar2;
  FUN_1000_025c();
  FUN_1000_0282(uVar3,uVar4,uVar5,uVar6);
  FUN_1000_ae9e();
  return;
}


// ---- FUN_1000_249e @ 1000:249e

void __cdecl16far FUN_1000_249e(void)

{
  FUN_1000_7f54(0x1008);
  FUN_1000_2330();
  return;
}


// ---- FUN_1000_24b4 @ 1000:24b4

void __cdecl16far FUN_1000_24b4(void)

{
  FUN_1000_8048(0x1008);
  return;
}


// ---- FUN_1000_24c6 @ 1000:24c6

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 __cdecl16far
FUN_1000_24c6(float param_1,undefined2 param_2,float param_3,undefined2 param_4,undefined2 param_5)

{
  double dVar1;
  int iVar2;
  float *pfVar3;
  double *pdVar4;
  undefined2 unaff_SS;
  longdouble lVar5;
  undefined4 uVar6;
  double *pdVar7;
  float *pfVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  qword local_724;
  float local_71c;
  float local_718 [50];
  undefined8 local_64e;
  double local_646;
  undefined4 local_44e;
  undefined2 local_44a;
  undefined2 local_448;
  undefined2 local_446;
  undefined2 local_444;
  int local_442;
  undefined2 local_440;
  undefined2 local_43e;
  int local_43c;
  uint auStack_43a [512];
  undefined8 local_3a;
  undefined8 local_32;
  undefined2 local_2a;
  undefined2 uStack_28;
  undefined2 uStack_26;
  undefined2 uStack_24;
  undefined8 local_22;
  undefined2 local_1a;
  int local_18;
  undefined2 local_16;
  undefined2 local_14;
  undefined2 local_12;
  undefined2 local_10;
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_a;
  undefined2 local_8;
  undefined4 local_6;
  
  uVar10 = 0x1008;
  local_6 = DAT_1008_06f6;
  local_8 = 0x423f;
  local_a = 0;
  local_c = 0;
  local_e = 0;
  local_10 = 0;
  local_12 = 0;
  local_14 = 0;
  local_16 = 0;
  uVar9 = 0x110;
  iVar2 = M007_GETSTATE();
  if (iVar2 != 1) {
    uVar6 = M007_GETSTATE(0x1010,0x83,uVar9,uVar10);
    uVar9 = (undefined2)((ulong)uVar6 >> 0x10);
    if ((int)uVar6 == 1) {
      local_18 = 0;
      local_1a = 0;
      local_22 = (double)CONCAT26(DAT_1008_06da._6_2_,
                                  CONCAT24(DAT_1008_06da._4_2_,
                                           CONCAT22(DAT_1008_06da._2_2_,(undefined2)DAT_1008_06da)))
      ;
      local_2a = (undefined2)DAT_1008_06da;
      uStack_28 = DAT_1008_06da._2_2_;
      uStack_26 = DAT_1008_06da._4_2_;
      uStack_24 = DAT_1008_06da._6_2_;
      local_32 = (double)CONCAT26(DAT_1008_06da._6_2_,
                                  CONCAT24(DAT_1008_06da._4_2_,
                                           CONCAT22(DAT_1008_06da._2_2_,(undefined2)DAT_1008_06da)))
      ;
      local_3a = (double)CONCAT26(DAT_1008_06da._6_2_,
                                  CONCAT24(DAT_1008_06da._4_2_,
                                           CONCAT22(DAT_1008_06da._2_2_,(undefined2)DAT_1008_06da)))
      ;
      local_71c = param_1;
      if (DAT_1008_06f6 < param_1) {
        FUN_1000_ddfa(SUB42(param_1,0),(int)((ulong)param_1 >> 0x10),1);
      }
      local_71c = param_3;
      if (DAT_1008_06fa < param_3) {
        FUN_1000_e4d8(SUB42(param_3,0),(int)((ulong)param_3 >> 0x10));
        FUN_1000_e504(param_4,param_5);
      }
      FUN_1000_e696(local_718);
      uVar10 = FUN_1000_0282();
      local_44e = (float)CONCAT22(uVar9,uVar10);
      local_448 = 0;
      local_44a = 0;
      local_446 = 2;
      local_444 = 1;
      local_442 = (int)(DAT_1008_0098 + (DAT_1008_0098 >> 0xf & 3U)) >> 2;
      local_440 = 1;
      local_43e = 1;
      local_43c = 0;
      uVar9 = 0x1010;
      Ordinal_6016(0x1000,&local_44e);
      while (Ordinal_6017(uVar9,&local_44e), local_43c == 0) {
        uVar9 = 0x1000;
        EO_SPINMESSAGELOOP();
      }
      local_32 = (double)DAT_1008_009a * (double)DAT_1008_0098;
      local_3a = local_32 * local_32;
      for (local_18 = 0; local_18 < 2; local_18 = local_18 + 1) {
        local_724 = (qword)CONCAT22(auStack_43a[local_18 * 8 + 1],auStack_43a[local_18 * 8]);
        if (((float)local_724 == DAT_1008_06f6) ||
           (local_724 = (qword)CONCAT22(auStack_43a[local_18 * 8 + 3],auStack_43a[local_18 * 8 + 2])
           , (float)local_724 == DAT_1008_06f6)) {
          iVar2 = local_18 * 8;
          *(undefined2 *)(undefined4 *)((int)&local_64e + local_18 * 2 * 4) = DAT_1008_070a;
          *(undefined2 *)((int)&local_64e + iVar2 + 2) = DAT_1008_070c;
          *(undefined2 *)((int)&local_64e + iVar2 + 4U) = DAT_1008_070e;
          *(undefined2 *)((int)&local_64e + iVar2 + 6U) = DAT_1008_0710;
        }
        else {
          local_724 = (qword)auStack_43a[local_18 * 8 + 6];
          local_22 = (double)CONCAT22(auStack_43a[local_18 * 8 + 5],auStack_43a[local_18 * 8 + 4]) +
                     (double)local_724 * DAT_1008_0712;
          iVar2 = M007_GETSTATE(0x1010,0x77);
          if ((iVar2 == 4) || (iVar2 = M007_GETSTATE(0x1010,0x77), iVar2 == 2)) {
            local_22 = local_22 * DAT_1008_071a;
          }
          else {
            local_22 = local_22 /
                       (double)CONCAT22(auStack_43a[local_18 * 8 + 1],auStack_43a[local_18 * 8]);
            local_22 = local_3a *
                       (local_22 /
                       (double)CONCAT22(auStack_43a[local_18 * 8 + 3],auStack_43a[local_18 * 8 + 2])
                       );
          }
          *(double *)((int)&local_64e + local_18 * 2 * 4) = local_22;
        }
      }
      local_6 = (float)(((longdouble)local_646 +
                        (longdouble)(double)CONCAT44(local_64e._4_4_,(float)local_64e)) *
                       (longdouble)DAT_1008_0722);
    }
    else {
      iVar2 = M007_GETSTATE(0x1010,0x77);
      if ((iVar2 == 4) || (iVar2 = M007_GETSTATE(0x1010,0x77), iVar2 == 2)) {
        uVar9 = 0x1b;
        pfVar3 = (float *)M007_GETVALUE(0x1010,&local_71c);
        local_718[0] = *pfVar3 * DAT_1008_06c6;
        local_64e._0_4_ = local_718[0] - DAT_1008_072e;
        local_724 = CONCAT44(local_724._4_4_,(float)local_64e * (float)local_64e);
        local_44e = DAT_1008_06c6 / ((float)local_64e * (float)local_64e + _DAT_1008_06d6);
        dVar1 = (double)local_718[0];
        pdVar7 = (double *)
                 FUN_1000_024a(0x1010,SUB82(dVar1,0),(int)((qword)dVar1 >> 0x10),
                               (int)((qword)dVar1 >> 0x20),(int)((qword)dVar1 >> 0x30),uVar9);
        lVar5 = (longdouble)*pdVar7 * (longdouble)DAT_1008_0726 + (longdouble)local_44e;
      }
      else {
        local_718[0] = param_1 * DAT_1008_06c6;
        local_6 = local_718[0];
        if (DAT_1008_073a <= local_718[0]) {
          local_6 = DAT_1008_073e - local_718[0];
        }
        dVar1 = (double)local_6;
        pdVar7 = (double *)
                 FUN_1000_0256(0x1010,SUB82(dVar1,0),(int)((qword)dVar1 >> 0x10),
                               (int)((qword)dVar1 >> 0x20),(int)((qword)dVar1 >> 0x30),DAT_1008_0732
                               ,DAT_1008_0734,DAT_1008_0736,DAT_1008_0738);
        local_6 = DAT_1008_0742 * (float)*pdVar7;
        uVar10 = 0x3f;
        pfVar8 = (float *)M007_GETVALUE(0x1000,&local_724);
        uVar9 = (undefined2)((ulong)pfVar8 >> 0x10);
        dVar1 = (double)*(float *)pfVar8;
        pdVar4 = (double *)
                 FUN_1000_0314(SUB82(dVar1,0),(int)((qword)dVar1 >> 0x10),
                               (int)((qword)dVar1 >> 0x20),(int)((qword)dVar1 >> 0x30),uVar10);
        local_6 = (float)*pdVar4 * DAT_1008_0746 + local_6;
        uVar10 = 0x40;
        pfVar8 = (float *)M007_GETVALUE(0x1000,&local_71c);
        uVar9 = (undefined2)((ulong)pfVar8 >> 0x10);
        dVar1 = (double)*(float *)pfVar8;
        pdVar4 = (double *)
                 FUN_1000_0314(SUB82(dVar1,0),(int)((qword)dVar1 >> 0x10),
                               (int)((qword)dVar1 >> 0x20),(int)((qword)dVar1 >> 0x30),uVar10);
        lVar5 = (longdouble)*pdVar4 * (longdouble)DAT_1008_0746 + (longdouble)local_6;
      }
      local_6 = (float)lVar5;
      iVar2 = FUN_1000_020a();
      local_6 = (float)(iVar2 / 100) + local_6;
      FUN_1000_29b2(10,0);
    }
  }
  DAT_1008_0366 = (undefined2)local_6;
  DAT_1008_0368 = local_6._2_2_;
  return 0x366;
}


// ---- FUN_1000_29b2 @ 1000:29b2

/* WARNING: Removing unreachable block (ram,0x100029e0) */

void __cdecl16far FUN_1000_29b2(undefined2 param_1,undefined2 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = GETTICKCOUNT();
  uVar1 = uVar2 + CONCAT22(param_2,param_1);
  while (uVar2 < uVar1) {
    EO_SPINMESSAGELOOP(uVar3);
    uVar2 = GETTICKCOUNT(0x1000);
  }
  return;
}


// ---- EHTOPTIBEAMUPDATEVEXT @ 1000:29fa

undefined2 __stdcall16far EHTOPTIBEAMUPDATEVEXT(void)

{
  return 0x1008;
}


// ---- EHTOPTIBEAMUPDATEVA @ 1000:2a08

undefined2 __stdcall16far EHTOPTIBEAMUPDATEVA(void)

{
  return 0x1008;
}


// ---- FEOPTIBEAMTESTPOINT @ 1000:2a16

undefined2 __stdcall16far FEOPTIBEAMTESTPOINT(void)

{
  return 0x1008;
}


// ---- FUN_1000_2a24 @ 1000:2a24

undefined2 __stdcall16far FUN_1000_2a24(void)

{
  undefined2 in_stack_0000000c;
  
  DAT_1008_19e8 = in_stack_0000000c;
  return 1;
}


// ---- WEP @ 1000:2a3c

undefined2 __stdcall16far WEP(void)

{
  return 1;
}


// ---- EO_REPORTID @ 1000:2a4e

void __cdecl16far EO_REPORTID(void)

{
  undefined2 unaff_CS;
  
  UIF_MESSAGE(unaff_CS,0x3c90,0x1000);
  return;
}


// ---- INITIALISE_EO_CONTROLLER_DATA @ 1000:2a68

void __cdecl16far INITIALISE_EO_CONTROLLER_DATA(void)

{
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  M007_PUTHIGH(unaff_CS,DAT_1008_074a,DAT_1008_074c);
  M007_PUTVALUE(0x1010,DAT_1008_074e,DAT_1008_0750);
  M007_PUTHIGH(0x1010,DAT_1008_0752,DAT_1008_0754);
  M007_PUTLOW(0x1010,DAT_1008_0756,DAT_1008_0758);
  M007_PUTHIGH(0x1010,DAT_1008_0752,DAT_1008_0754);
  M007_PUTLOW(0x1010,DAT_1008_075a,DAT_1008_075c);
  M007_PUTHIGH(0x1010,DAT_1008_075e,DAT_1008_0760);
  M007_PUTHIGH(0x1010,DAT_1008_0752,DAT_1008_0754);
  M007_PUTLOW(0x1010,DAT_1008_0756,DAT_1008_0758);
  M007_PUTHIGH(0x1010,DAT_1008_0752,DAT_1008_0754);
  M007_PUTLOW(0x1010,DAT_1008_0756,DAT_1008_0758);
  M007_PUTHIGH(0x1010,DAT_1008_0752,DAT_1008_0754);
  M007_PUTLOW(0x1010,DAT_1008_0756,DAT_1008_0758);
  M007_PUTHIGH(0x1010,DAT_1008_0752,DAT_1008_0754);
  M007_PUTLOW(0x1010,DAT_1008_0756,DAT_1008_0758);
  M007_PUTHIGH(0x1010,DAT_1008_0752,DAT_1008_0754);
  M007_PUTLOW(0x1010,DAT_1008_0756,DAT_1008_0758);
  M007_PUTHIGH(0x1010,DAT_1008_0752,DAT_1008_0754);
  M007_PUTLOW(0x1010,DAT_1008_0756,DAT_1008_0758);
  M007_PUTHIGH(0x1010,DAT_1008_0752,DAT_1008_0754);
  M007_PUTHIGH(0x1010,DAT_1008_0752,DAT_1008_0754);
  M007_PUTHIGH(0x1010,DAT_1008_0752,DAT_1008_0754);
  M007_PUTHIGH(0x1010,DAT_1008_0752,DAT_1008_0754);
  M007_PUTLOW(0x1010,DAT_1008_0756,DAT_1008_0758);
  M007_PUTLOW(0x1010,DAT_1008_0756,DAT_1008_0758);
  M007_PUTLOW(0x1010,DAT_1008_0756,DAT_1008_0758);
  M007_PUTLOW(0x1010,DAT_1008_0756,DAT_1008_0758);
  M007_PUTSTATE(0x1010,1);
  M007_PUTHIGH(0x1010,DAT_1008_0762,DAT_1008_0764);
  M007_PUTLOW(0x1010,DAT_1008_0766,DAT_1008_0768);
  M007_PUTHIGH(0x1010,DAT_1008_076a,DAT_1008_076c);
  M007_PUTLOW(0x1010,DAT_1008_0752,DAT_1008_0754);
  M007_PUTHIGH(0x1010,DAT_1008_076e,DAT_1008_0770);
  M007_PUTVALUE(0x1010,DAT_1008_0772,DAT_1008_0774);
  M007_PUTHIGH(0x1010,DAT_1008_0762,DAT_1008_0764);
  M007_PUTLOW(0x1010,DAT_1008_0776,DAT_1008_0778);
  M007_PUTVALUE(0x1010,DAT_1008_0776,DAT_1008_0778);
  M007_PUTHIGH(0x1010,DAT_1008_077a,DAT_1008_077c);
  M007_PUTHIGH(0x1010,DAT_1008_077a,DAT_1008_077c);
  M007_PUTHIGH(0x1010,DAT_1008_077a,DAT_1008_077c);
  M007_PUTHIGH(0x1010,DAT_1008_077a,DAT_1008_077c);
  M007_PUTHIGH(0x1010,DAT_1008_077a,DAT_1008_077c);
  M007_PUTHIGH(0x1010,DAT_1008_077e,DAT_1008_0780);
  M007_PUTHIGH(0x1010,DAT_1008_077e,DAT_1008_0780);
  M007_PUTHIGH(0x1010,DAT_1008_077e,DAT_1008_0780);
  M007_PUTLOW(0x1010,DAT_1008_0782,DAT_1008_0784);
  M007_PUTLOW(0x1010,DAT_1008_0782,DAT_1008_0784);
  M007_PUTLOW(0x1010,DAT_1008_0782,DAT_1008_0784);
  M007_PUTVALUE(0x1010,DAT_1008_077a,DAT_1008_077c);
  M007_PUTVALUE(0x1010,DAT_1008_0786,DAT_1008_0788);
  M007_PUTVALUE(0x1010,DAT_1008_0786,DAT_1008_0788);
  M007_PUTVALUE(0x1010,DAT_1008_0782,DAT_1008_0784);
  M007_PUTVALUE(0x1010,DAT_1008_078a,DAT_1008_078c);
  M007_PUTVALUE(0x1010,DAT_1008_078e,DAT_1008_0790);
  M007_PUTVALUE(0x1010,DAT_1008_0792,DAT_1008_0794);
  M007_PUTVALUE(0x1010,DAT_1008_0796,DAT_1008_0798);
  M007_PUTVALUE(0x1010,DAT_1008_079a,DAT_1008_079c);
  M007_PUTVALUE(0x1010,DAT_1008_079e,DAT_1008_07a0);
  M007_PUTSTATE(0x1010,1);
  M007_PUTSTATE(0x1010,1);
  M007_PUTSTATE(0x1010,1);
  M007_PUTVALUE(0x1010,DAT_1008_07a2,DAT_1008_07a4);
  M007_PUTVALUE(0x1010,DAT_1008_07a6,DAT_1008_07a8);
  M007_PUTVALUE(0x1010,DAT_1008_0782,DAT_1008_0784);
  M007_PUTSTATE(0x1010,0);
  M007_PUTVALUE(0x1010,DAT_1008_077a,DAT_1008_077c);
  M007_PUTVALUE(0x1010,DAT_1008_0776,DAT_1008_0778);
  M007_PUTVALUE(0x1010,DAT_1008_07aa,DAT_1008_07ac);
  M007_PUTVALUE(0x1010,DAT_1008_07aa,DAT_1008_07ac);
  M007_PUTVALUE(0x1010,DAT_1008_0752,DAT_1008_0754);
  M007_PUTVALUE(0x1010,DAT_1008_0752,DAT_1008_0754);
  M007_PUTVALUE(0x1010,DAT_1008_0776,DAT_1008_0778);
  M007_PUTVALUE(0x1010,DAT_1008_07ae,DAT_1008_07b0);
  M007_PUTVALUE(0x1010,DAT_1008_07b2,DAT_1008_07b4);
  M007_PUTVALUE(0x1010,DAT_1008_07b6,DAT_1008_07b8);
  M007_PUTVALUE(0x1010,DAT_1008_07ba,DAT_1008_07bc);
  M007_PUTVALUE(0x1010,DAT_1008_07be,DAT_1008_07c0);
  M007_PUTVALUE(0x1010,DAT_1008_07c2,DAT_1008_07c4);
  M007_PUTVALUE(0x1010,DAT_1008_07c6,DAT_1008_07c8);
  M007_PUTVALUE(0x1010,DAT_1008_075e,DAT_1008_0760);
  M007_PUTVALUE(0x1010,DAT_1008_075e,DAT_1008_0760);
  M007_PUTVALUE(0x1010,DAT_1008_075e,DAT_1008_0760);
  M007_PUTVALUE(0x1010,DAT_1008_075e,DAT_1008_0760);
  M007_PUTVALUE(0x1010,DAT_1008_0782,DAT_1008_0784);
  M007_PUTVALUE(0x1010,DAT_1008_07ca,DAT_1008_07cc);
  M007_PUTVALUE(0x1010,DAT_1008_07ce,DAT_1008_07d0);
  M007_PUTVALUE(0x1010,DAT_1008_07ce,DAT_1008_07d0);
  M007_PUTVALUE(0x1010,DAT_1008_07ce,DAT_1008_07d0);
  M007_PUTVALUE(0x1010,DAT_1008_07ce,DAT_1008_07d0);
  M007_PUTVALUE(0x1010,DAT_1008_07ce,DAT_1008_07d0);
  M007_PUTVALUE(0x1010,DAT_1008_075e,DAT_1008_0760);
  M007_PUTVALUE(0x1010,DAT_1008_07d2,DAT_1008_07d4);
  M007_PUTVALUE(0x1010,DAT_1008_07ce,DAT_1008_07d0);
  M007_PUTVALUE(0x1010,DAT_1008_07ce,DAT_1008_07d0);
  M007_PUTVALUE(0x1010,DAT_1008_07d6,DAT_1008_07d8);
  M007_PUTVALUE(0x1010,DAT_1008_07ce,DAT_1008_07d0);
  M007_PUTVALUE(0x1010,DAT_1008_07ce,DAT_1008_07d0);
  M007_PUTVALUE(0x1010,DAT_1008_07da,DAT_1008_07dc);
  M007_PUTVALUE(0x1010,DAT_1008_07da,DAT_1008_07dc);
  M007_PUTVALUE(0x1010,DAT_1008_075e,DAT_1008_0760);
  M007_PUTSTATE(0x1010,1);
  M007_PUTSTATE(0x1010,1);
  M007_PUTSTATE(0x1010,1);
  M007_PUTSTATE(0x1010,0);
  M007_PUTSTATE(0x1010,0);
  M007_PUTSTATE(0x1010,2);
  M007_PUTSTATE(0x1010,0);
  M007_PUTLOW(0x1010,DAT_1008_077a,DAT_1008_077c);
  M007_PUTLOW(0x1010,DAT_1008_077a,DAT_1008_077c);
  M007_PUTLOW(0x1010,DAT_1008_0782,DAT_1008_0784);
  M007_PUTLOW(0x1010,DAT_1008_07de,DAT_1008_07e0);
  M007_PUTLOW(0x1010,DAT_1008_07e2,DAT_1008_07e4);
  M007_PUTLOW(0x1010,DAT_1008_07e6,DAT_1008_07e8);
  M007_PUTLOW(0x1010,DAT_1008_0756,DAT_1008_0758);
  M007_PUTLOW(0x1010,DAT_1008_0756,DAT_1008_0758);
  M007_PUTLOW(0x1010,DAT_1008_0756,DAT_1008_0758);
  M007_PUTLOW(0x1010,DAT_1008_0756,DAT_1008_0758);
  M007_PUTLOW(0x1010,DAT_1008_0756,DAT_1008_0758);
  M007_PUTLOW(0x1010,DAT_1008_0756,DAT_1008_0758);
  M007_PUTLOW(0x1010,DAT_1008_0756,DAT_1008_0758);
  M007_PUTLOW(0x1010,DAT_1008_0756,DAT_1008_0758);
  M007_PUTLOW(0x1010,DAT_1008_07b6,DAT_1008_07b8);
  M007_PUTLOW(0x1010,DAT_1008_07aa,DAT_1008_07ac);
  M007_PUTLOW(0x1010,DAT_1008_07aa,DAT_1008_07ac);
  M007_PUTLOW(0x1010,DAT_1008_0756,DAT_1008_0758);
  M007_PUTLOW(0x1010,DAT_1008_0756,DAT_1008_0758);
  M007_PUTLOW(0x1010,DAT_1008_0756,DAT_1008_0758);
  M007_PUTLOW(0x1010,DAT_1008_0756,DAT_1008_0758);
  M007_PUTLOW(0x1010,DAT_1008_0756,DAT_1008_0758);
  M007_PUTLOW(0x1010,DAT_1008_0756,DAT_1008_0758);
  M007_PUTLOW(0x1010,DAT_1008_07ea,DAT_1008_07ec);
  M007_PUTLOW(0x1010,DAT_1008_07ea,DAT_1008_07ec);
  M007_PUTLOW(0x1010,DAT_1008_0776,DAT_1008_0778);
  M007_PUTLOW(0x1010,DAT_1008_07ee,DAT_1008_07f0);
  M007_PUTLOW(0x1010,DAT_1008_07ce,DAT_1008_07d0);
  M007_PUTLOW(0x1010,DAT_1008_07f2,DAT_1008_07f4);
  M007_PUTLOW(0x1010,DAT_1008_07f2,DAT_1008_07f4);
  M007_PUTLOW(0x1010,DAT_1008_07f2,DAT_1008_07f4);
  M007_PUTLOW(0x1010,DAT_1008_07f6,DAT_1008_07f8);
  M007_PUTLOW(0x1010,DAT_1008_07f6,DAT_1008_07f8);
  M007_PUTLOW(0x1010,DAT_1008_07f6,DAT_1008_07f8);
  M007_PUTLOW(0x1010,DAT_1008_07fa,DAT_1008_07fc);
  M007_PUTLOW(0x1010,DAT_1008_0756,DAT_1008_0758);
  M007_PUTLOW(0x1010,DAT_1008_0756,DAT_1008_0758);
  M007_PUTLOW(0x1010,DAT_1008_0756,DAT_1008_0758);
  M007_PUTLOW(0x1010,DAT_1008_0756,DAT_1008_0758);
  M007_PUTLOW(0x1010,DAT_1008_075a,DAT_1008_075c);
  M007_PUTLOW(0x1010,DAT_1008_07fe,DAT_1008_0800);
  M007_PUTLOW(0x1010,DAT_1008_0802,DAT_1008_0804);
  M007_PUTLOW(0x1010,DAT_1008_0806,DAT_1008_0808);
  M007_PUTLOW(0x1010,DAT_1008_080a,DAT_1008_080c);
  M007_PUTLOW(0x1010,DAT_1008_080e,DAT_1008_0810);
  M007_PUTLOW(0x1010,DAT_1008_080e,DAT_1008_0810);
  M007_PUTLOW(0x1010,DAT_1008_080e,DAT_1008_0810);
  M007_PUTLOW(0x1010,DAT_1008_07ce,DAT_1008_07d0);
  M007_PUTLOW(0x1010,DAT_1008_0812,DAT_1008_0814);
  M007_PUTLOW(0x1010,DAT_1008_07ce,DAT_1008_07d0);
  M007_PUTLOW(0x1010,DAT_1008_07fa,DAT_1008_07fc);
  M007_PUTLOW(0x1010,DAT_1008_07a2,DAT_1008_07a4);
  M007_PUTLOW(0x1010,DAT_1008_0816,DAT_1008_0818);
  M007_PUTLOW(0x1010,DAT_1008_080e,DAT_1008_0810);
  M007_PUTLOW(0x1010,DAT_1008_080e,DAT_1008_0810);
  M007_PUTLOW(0x1010,DAT_1008_0756,DAT_1008_0758);
  M007_PUTLOW(0x1010,DAT_1008_081a,DAT_1008_081c);
  M007_PUTLOW(0x1010,DAT_1008_081a,DAT_1008_081c);
  M007_PUTLOW(0x1010,DAT_1008_081e,DAT_1008_0820);
  M007_PUTLOW(0x1010,DAT_1008_081e,DAT_1008_0820);
  M007_PUTLOW(0x1010,DAT_1008_0822,DAT_1008_0824);
  M007_PUTLOW(0x1010,DAT_1008_0822,DAT_1008_0824);
  M007_PUTHIGH(0x1010,DAT_1008_0826,DAT_1008_0828);
  M007_PUTHIGH(0x1010,DAT_1008_0826,DAT_1008_0828);
  M007_PUTHIGH(0x1010,DAT_1008_077e,DAT_1008_0780);
  M007_PUTHIGH(0x1010,DAT_1008_082a,DAT_1008_082c);
  M007_PUTHIGH(0x1010,DAT_1008_074a,DAT_1008_074c);
  M007_PUTHIGH(0x1010,DAT_1008_082e,DAT_1008_0830);
  M007_PUTHIGH(0x1010,DAT_1008_0832,DAT_1008_0834);
  M007_PUTHIGH(0x1010,DAT_1008_0752,DAT_1008_0754);
  M007_PUTHIGH(0x1010,DAT_1008_0836,DAT_1008_0838);
  M007_PUTHIGH(0x1010,DAT_1008_0752,DAT_1008_0754);
  M007_PUTHIGH(0x1010,DAT_1008_0752,DAT_1008_0754);
  M007_PUTHIGH(0x1010,DAT_1008_0752,DAT_1008_0754);
  M007_PUTHIGH(0x1010,DAT_1008_0752,DAT_1008_0754);
  M007_PUTHIGH(0x1010,DAT_1008_0752,DAT_1008_0754);
  M007_PUTHIGH(0x1010,DAT_1008_0752,DAT_1008_0754);
  M007_PUTHIGH(0x1010,DAT_1008_0752,DAT_1008_0754);
  M007_PUTHIGH(0x1010,DAT_1008_0752,DAT_1008_0754);
  M007_PUTHIGH(0x1010,DAT_1008_0752,DAT_1008_0754);
  M007_PUTHIGH(0x1010,DAT_1008_083a,DAT_1008_083c);
  M007_PUTHIGH(0x1010,DAT_1008_0752,DAT_1008_0754);
  M007_PUTHIGH(0x1010,DAT_1008_083e,DAT_1008_0840);
  M007_PUTHIGH(0x1010,DAT_1008_0752,DAT_1008_0754);
  M007_PUTHIGH(0x1010,DAT_1008_083e,DAT_1008_0840);
  M007_PUTHIGH(0x1010,DAT_1008_0752,DAT_1008_0754);
  M007_PUTHIGH(0x1010,DAT_1008_0752,DAT_1008_0754);
  M007_PUTHIGH(0x1010,DAT_1008_0752,DAT_1008_0754);
  M007_PUTHIGH(0x1010,DAT_1008_0752,DAT_1008_0754);
  M007_PUTHIGH(0x1010,DAT_1008_0752,DAT_1008_0754);
  M007_PUTHIGH(0x1010,DAT_1008_0752,DAT_1008_0754);
  M007_PUTHIGH(0x1010,DAT_1008_0842,DAT_1008_0844);
  M007_PUTHIGH(0x1010,DAT_1008_0842,DAT_1008_0844);
  M007_PUTHIGH(0x1010,DAT_1008_0846,DAT_1008_0848);
  M007_PUTHIGH(0x1010,DAT_1008_07a2,DAT_1008_07a4);
  M007_PUTHIGH(0x1010,DAT_1008_0752,DAT_1008_0754);
  M007_PUTHIGH(0x1010,DAT_1008_0772,DAT_1008_0774);
  M007_PUTHIGH(0x1010,DAT_1008_084a,DAT_1008_084c);
  M007_PUTHIGH(0x1010,DAT_1008_084a,DAT_1008_084c);
  M007_PUTHIGH(0x1010,DAT_1008_084a,DAT_1008_084c);
  M007_PUTHIGH(0x1010,DAT_1008_084e,DAT_1008_0850);
  M007_PUTHIGH(0x1010,DAT_1008_084e,DAT_1008_0850);
  M007_PUTHIGH(0x1010,DAT_1008_084e,DAT_1008_0850);
  M007_PUTHIGH(0x1010,DAT_1008_0852,DAT_1008_0854);
  M007_PUTHIGH(0x1010,DAT_1008_0852,DAT_1008_0854);
  M007_PUTHIGH(0x1010,DAT_1008_0856,DAT_1008_0858);
  M007_PUTHIGH(0x1010,DAT_1008_085a,DAT_1008_085c);
  M007_PUTHIGH(0x1010,DAT_1008_075e,DAT_1008_0760);
  M007_PUTHIGH(0x1010,DAT_1008_0752,DAT_1008_0754);
  M007_PUTHIGH(0x1010,DAT_1008_0752,DAT_1008_0754);
  M007_PUTHIGH(0x1010,DAT_1008_0752,DAT_1008_0754);
  M007_PUTHIGH(0x1010,DAT_1008_0752,DAT_1008_0754);
  M007_PUTHIGH(0x1010,DAT_1008_085e,DAT_1008_0860);
  M007_PUTHIGH(0x1010,DAT_1008_0752,DAT_1008_0754);
  M007_PUTHIGH(0x1010,DAT_1008_0752,DAT_1008_0754);
  M007_PUTHIGH(0x1010,DAT_1008_0856,DAT_1008_0858);
  M007_PUTHIGH(0x1010,DAT_1008_076a,DAT_1008_076c);
  M007_PUTHIGH(0x1010,DAT_1008_085a,DAT_1008_085c);
  M007_PUTHIGH(0x1010,DAT_1008_0862,DAT_1008_0864);
  M007_PUTHIGH(0x1010,DAT_1008_0866,DAT_1008_0868);
  M007_PUTHIGH(0x1010,DAT_1008_086a,DAT_1008_086c);
  M007_PUTHIGH(0x1010,DAT_1008_0752,DAT_1008_0754);
  M007_PUTHIGH(0x1010,DAT_1008_0752,DAT_1008_0754);
  M007_PUTHIGH(0x1010,DAT_1008_0842,DAT_1008_0844);
  M007_PUTHIGH(0x1010,DAT_1008_086e,DAT_1008_0870);
  M007_PUTHIGH(0x1010,DAT_1008_0842,DAT_1008_0844);
  M007_PUTHIGH(0x1010,DAT_1008_086e,DAT_1008_0870);
  M007_PUTHIGH(0x1010,DAT_1008_0842,DAT_1008_0844);
  M007_PUTHIGH(0x1010,DAT_1008_086e,DAT_1008_0870);
  M007_PUTHIGH(0x1010,DAT_1008_0762,DAT_1008_0764);
  M007_PUTHIGH(0x1010,DAT_1008_0762,DAT_1008_0764);
  M007_PUTHIGH(0x1010,DAT_1008_0762,DAT_1008_0764);
  M007_PUTHIGH(0x1010,DAT_1008_0842,DAT_1008_0844);
  M007_PUTHIGH(0x1010,DAT_1008_086e,DAT_1008_0870);
  M007_PUTHIGH(0x1010,DAT_1008_0752,DAT_1008_0754);
  M007_PUTHIGH(0x1010,DAT_1008_07b6,DAT_1008_07b8);
  M007_PUTHIGH(0x1010,DAT_1008_0776,DAT_1008_0778);
  M007_PUTHIGH(0x1010,DAT_1008_07d6,DAT_1008_07d8);
  M007_PUTHIGH(0x1010,DAT_1008_0776,DAT_1008_0778);
  M007_PUTHIGH(0x1010,DAT_1008_0776,DAT_1008_0778);
  M007_PUTHIGH(0x1010,DAT_1008_0762,DAT_1008_0764);
  M007_PUTHIGH(0x1010,DAT_1008_0762,DAT_1008_0764);
  M007_PUTHIGH(0x1010,DAT_1008_0776,DAT_1008_0778);
  M007_PUTHIGH(0x1010,DAT_1008_0776,DAT_1008_0778);
  uVar4 = 0x100;
  M007_PUTHIGH(0x1010,DAT_1008_080a,DAT_1008_080c);
  uVar3 = 0x101;
  M007_PUTHIGH(0x1010,DAT_1008_080a,DAT_1008_080c);
  uVar2 = 0x102;
  M007_PUTHIGH(0x1010,DAT_1008_0872,DAT_1008_0874);
  uVar1 = 0x103;
  M007_PUTHIGH(0x1010,DAT_1008_0872,DAT_1008_0874);
  EO_REPORTID(uVar1,uVar2,uVar3,uVar4);
  return;
}


// ---- INITIALISE_EO_CONTROLLER @ 1000:399c

undefined2 __cdecl16far INITIALISE_EO_CONTROLLER(void)

{
  int iVar1;
  long lVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  uVar4 = 0x1008;
  uVar3 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_6000(0x1010,0x3cb4,0x1000,uVar3,uVar4);
    lVar2 = Ordinal_6001(0x1010);
    if (lVar2 != 0) {
      UIF_LOG(0x1010,0x2000,0,0);
      return 0x1ac;
    }
    iVar1 = FUN_1000_d998(0x3cbe,0x1000);
    if (iVar1 < 0) {
      UIF_LOG(0x1000,0x2000,0,0);
      return 0x1a4;
    }
    iVar1 = FUN_1000_d9e2();
    if (iVar1 != 0) {
      UIF_LOG(0x1000,0x2000,0,0);
      return 0x1a9;
    }
    FUN_1000_9432();
  }
  return 0;
}


// ---- EO_CONTROLLER_SHUTDOWN @ 1000:3a28

undefined2 __cdecl16far EO_CONTROLLER_SHUTDOWN(void)

{
  float *pfVar1;
  undefined2 unaff_SS;
  undefined1 local_1e [4];
  undefined1 local_1a [4];
  undefined1 local_16 [4];
  undefined1 local_12 [4];
  undefined1 local_e [4];
  undefined1 local_a [4];
  undefined1 local_6 [4];
  
  FUN_1000_7098(0x1008);
  pfVar1 = (float *)M007_GETVALUE(0x1000,local_6);
  if ((((*pfVar1 < (float)DAT_1008_0876) &&
       (pfVar1 = (float *)M007_GETVALUE(0x1010,local_a), *pfVar1 < (float)DAT_1008_0876)) &&
      (pfVar1 = (float *)M007_GETVALUE(0x1010,local_e), *pfVar1 < (float)DAT_1008_0876)) &&
     (((pfVar1 = (float *)M007_GETVALUE(0x1010,local_12), *pfVar1 < (float)DAT_1008_087e &&
       (pfVar1 = (float *)M007_GETVALUE(0x1010,local_16), *pfVar1 < (float)DAT_1008_087e)) &&
      ((pfVar1 = (float *)M007_GETVALUE(0x1010,local_1a), *pfVar1 < (float)DAT_1008_087e &&
       (pfVar1 = (float *)M007_GETVALUE(0x1010,local_1e), *pfVar1 < (float)DAT_1008_087e)))))) {
    return 0;
  }
  return 0x199;
}


// ---- EO_CONTROLLER_SUSPEND @ 1000:3b24

undefined2 __cdecl16far EO_CONTROLLER_SUSPEND(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    FUN_1000_da0a(uVar2,uVar3);
    Ordinal_6018(0x1000);
  }
  return 0;
}


// ---- EO_CONTROLLER_REMOVE @ 1000:3b48

undefined2 __cdecl16far EO_CONTROLLER_REMOVE(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    FUN_1000_d9c0(uVar2,uVar3);
    Ordinal_6019(0x1000);
  }
  return 0;
}


// ---- EO_TIMER_TICK @ 1000:3b6c

void __stdcall16far EO_TIMER_TICK(void)

{
  int iVar1;
  long lVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 local_a;
  undefined2 local_8;
  undefined4 local_6;
  
  uVar4 = 0x1008;
  uVar3 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    FUN_1000_a3e0(uVar3,uVar4);
    lVar2 = Ordinal_6005(0x1000);
    local_6._2_2_ = (undefined2)((ulong)lVar2 >> 0x10);
    local_6._0_2_ = (undefined2)lVar2;
    if (lVar2 != CONCAT22(DAT_1008_0016,DAT_1008_0014)) {
      local_a = 199;
      DAT_1008_0014 = (undefined2)local_6;
      DAT_1008_0016 = local_6._2_2_;
      iVar1 = M007_GETSTATE(0x1010);
      if ((iVar1 == 1) && (iVar1 = M007_GETSTATE(0x1010,0xc1), iVar1 == 1)) {
        local_8 = 0xff;
      }
      else {
        local_8 = 0x2f;
      }
      local_a = (undefined2)((ulong)(float)CONCAT22(local_6._2_2_,(undefined2)local_6) >> 0x10);
      M007_PUTVALUE(0x1010,SUB42((float)CONCAT22(local_6._2_2_,(undefined2)local_6),0));
      lVar2 = CONCAT22(local_6._2_2_,(undefined2)local_6);
    }
    local_a = 0xcd;
    local_6 = lVar2;
    iVar1 = M007_GETSTATE(0x1010);
    if (iVar1 == 1) {
      GETCURSORPOS(0x1010,&local_a);
      SETCURSORPOS(0x1010,local_8,local_a);
    }
  }
  FUN_1000_857c();
  FUN_1000_9e24();
  return;
}


// ---- EO_COLUMN_TYPE @ 1000:3c28

undefined2 __cdecl16far EO_COLUMN_TYPE(void)

{
  return 1;
}


// ---- EO_ISSUE_NUMBER @ 1000:3c38

undefined2 __cdecl16far EO_ISSUE_NUMBER(void)

{
  return 7;
}


// ---- EO_SPINMESSAGELOOP @ 1000:3c48

undefined2 __cdecl16far EO_SPINMESSAGELOOP(void)

{
  int iVar1;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined1 local_14 [18];
  
  while( true ) {
    iVar1 = PEEKMESSAGE(unaff_CS,1,0,0,0,local_14,unaff_SS);
    if (iVar1 == 0) break;
    TRANSLATEMESSAGE(0x1010,local_14);
    unaff_CS = 0x1010;
    DISPATCHMESSAGE(0x1010,local_14);
  }
  return 1;
}


// ---- Z130_CALCULATE_FRAME_TIME @ 1000:3c84

undefined2 __cdecl16far Z130_CALCULATE_FRAME_TIME(void)

{
  return 0x1008;
}


// ---- SETSPOTSIZE @ 1000:3cc8

void __stdcall16far SETSPOTSIZE(undefined2 param_1,undefined2 param_2)

{
  undefined2 unaff_CS;
  
  M007_PUTVALUE(unaff_CS,param_1,param_2);
  return;
}


// ---- SWITCHMAGCAL @ 1000:3ce4

void __stdcall16far SWITCHMAGCAL(undefined2 param_1)

{
  undefined2 unaff_CS;
  
  M007_PUTSTATE(unaff_CS,param_1);
  return;
}


// ---- SETPROFILE_TOP @ 1000:3cfe

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __stdcall16far SETPROFILE_TOP(float param_1)

{
  float *pfVar1;
  int iVar2;
  undefined2 unaff_SS;
  undefined1 *puVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined1 local_6 [4];
  
  uVar5 = 0x1008;
  if (param_1 < _DAT_1008_0886) {
    param_1 = _DAT_1008_0886;
  }
  if (_DAT_1008_088a < param_1) {
    param_1 = _DAT_1008_088a;
  }
  uVar4 = 0x153;
  puVar3 = local_6;
  pfVar1 = (float *)M007_GETVALUE();
  if (param_1 != *pfVar1) {
    puVar3 = (undefined1 *)0x153;
    M007_PUTVALUE(0x1010,param_1);
  }
  iVar2 = M007_GETSTATE(0x1010,0x22,puVar3,uVar4,uVar5);
  if ((iVar2 != 1) && (iVar2 = M007_GETSTATE(0x1010,199), iVar2 != 1)) {
    return;
  }
  uVar5 = M007_GETSTATE(0x1010,0x25);
  SWITCHPROFILE(0x1010,uVar5);
  return;
}


// ---- DOCOMMANDCAL_USER_MAG @ 1000:3db2

void __cdecl16far DOCOMMANDCAL_USER_MAG(void)

{
  FUN_1000_b646(0x1008);
  return;
}


// ---- SWITCHCONDENSER @ 1000:3dc4

void __stdcall16far SWITCHCONDENSER(undefined2 param_1)

{
  undefined2 *puVar1;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined1 local_a [4];
  undefined2 local_6;
  undefined2 local_4;
  
  puVar1 = (undefined2 *)M007_GETVALUE(unaff_CS,local_a);
  local_6 = *puVar1;
  local_4 = puVar1[1];
  M007_PUTSTATE(0x1010,param_1);
  return;
}


// ---- SWITCHUSER_MAG_CAL @ 1000:3df8

void __stdcall16far SWITCHUSER_MAG_CAL(undefined2 param_1)

{
  FUN_1000_b89a(param_1,0x1008);
  return;
}


// ---- DOCOMMANDCAL_APER_ALIGN @ 1000:3e10

void __cdecl16far DOCOMMANDCAL_APER_ALIGN(void)

{
  FUN_1000_a33c(0x1008);
  return;
}


// ---- SETXYGUNALIGN @ 1000:3e22

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __stdcall16far SETXYGUNALIGN(float param_1,float param_2)

{
  undefined2 uVar1;
  float fVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  float fVar5;
  undefined2 uVar6;
  undefined2 *puVar7;
  undefined2 unaff_SS;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  undefined4 local_a;
  undefined4 local_6;
  
  local_c = M007_GETSTATE();
  local_c = local_c + 1;
  puVar7 = (undefined2 *)M007_GETVALUE(0x1010,&local_10);
  local_6 = (float)CONCAT22(puVar7[1],*puVar7);
  puVar7 = (undefined2 *)M007_GETVALUE(0x1010,&local_14);
  local_a = (float)CONCAT22(puVar7[1],*puVar7);
  local_a = param_1 * DAT_1008_088e * DAT_1008_0018 + local_a;
  local_6 = param_2 * DAT_1008_088e * DAT_1008_0018 + local_6;
  if (_DAT_1008_0892 < local_6) {
    local_6 = _DAT_1008_0892;
  }
  if (_DAT_1008_0892 < local_a) {
    local_6 = _DAT_1008_0892;
  }
  if (local_6 < _DAT_1008_0896) {
    local_6 = _DAT_1008_0896;
  }
  if (local_a < _DAT_1008_0896) {
    local_6 = _DAT_1008_0896;
  }
  local_14 = param_2;
  fVar2 = local_14;
  local_14._2_2_ = (undefined2)((ulong)param_2 >> 0x10);
  uVar3 = local_14._2_2_;
  local_14._0_2_ = SUB42(param_2,0);
  uVar1 = (undefined2)local_14;
  local_10 = param_1;
  fVar5 = local_10;
  local_10._2_2_ = (undefined2)((ulong)param_1 >> 0x10);
  uVar6 = local_10._2_2_;
  local_10._0_2_ = SUB42(param_1,0);
  uVar4 = (undefined2)local_10;
  local_14 = fVar2;
  local_10 = fVar5;
  M007_PUTXY(0x1010,uVar4,uVar6,uVar1,uVar3);
  *(float *)(local_c * 0x26 + 0x1960) = local_14;
  *(float *)(local_c * 0x26 + 0x1964) = local_10;
  return;
}


// ---- SETXYGUN @ 1000:3f5c

void __stdcall16far SETXYGUN(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 local_4;
  
  uVar4 = 0x1008;
  uVar3 = 0x1a;
  local_4 = M007_GETSTATE();
  local_4 = local_4 + 1;
  iVar1 = M007_GETSTATE(0x1010,0x14,uVar3,uVar4);
  if (iVar1 == 1) {
    local_4 = 0;
  }
  iVar1 = M007_GETSTATE(0x1010,0x10);
  if (iVar1 == 0x15) {
    local_4 = local_4 * 0x26;
    *(undefined4 *)(local_4 + 0x1950) = param_2;
    *(undefined4 *)(local_4 + 0x1954) = param_1;
    uVar3 = DAT_1008_0888;
    *(undefined2 *)(local_4 + 0x1960) = DAT_1008_0886;
    *(undefined2 *)(local_4 + 0x1962) = uVar3;
    uVar3 = DAT_1008_0888;
    *(undefined2 *)(local_4 + 0x1964) = DAT_1008_0886;
    *(undefined2 *)(local_4 + 0x1966) = uVar3;
    M007_PUTXY(0x1010,DAT_1008_0886,DAT_1008_0888,DAT_1008_0886,DAT_1008_0888);
    uVar3 = 0x14b;
    M007_PUTXY(0x1010,param_1,param_2);
    uVar2 = CONCAT22(0x145,DAT_1008_0888);
    uVar4 = DAT_1008_0886;
  }
  else {
    uVar2 = CONCAT22((int)param_2,param_1._2_2_);
    uVar3 = param_2._2_2_;
    uVar4 = (int)param_1;
  }
  M007_PUTXY(0x1010,uVar4,uVar2,uVar3);
  return;
}


// ---- SETAPER_ALIGN_X_ONLY @ 1000:403a

void __stdcall16far SETAPER_ALIGN_X_ONLY(undefined2 param_1)

{
  undefined2 *puVar1;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined2 uVar2;
  undefined1 local_6 [4];
  
  uVar2 = 0x148;
  puVar1 = (undefined2 *)M007_GETVALUE(unaff_CS,local_6);
  SETXYAPERTURE_ALIGN(*puVar1,puVar1[1],uVar2,param_1);
  return;
}


// ---- SETAPER_ALIGN_Y_ONLY @ 1000:406a

void __stdcall16far SETAPER_ALIGN_Y_ONLY(undefined2 param_1,undefined2 param_2)

{
  undefined2 *puVar1;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined1 local_6 [4];
  
  puVar1 = (undefined2 *)M007_GETVALUE(unaff_CS,local_6);
  SETXYAPERTURE_ALIGN(param_1,param_2,*puVar1,puVar1[1]);
  return;
}


// ---- SETXYAPERTURE_ALIGN @ 1000:409a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __stdcall16far SETXYAPERTURE_ALIGN(float param_1,float param_2)

{
  float fVar1;
  undefined2 uVar2;
  undefined2 *puVar3;
  undefined2 unaff_SS;
  float local_14;
  undefined4 local_10;
  int local_c;
  undefined4 local_a;
  undefined4 local_6;
  
  local_c = M007_GETSTATE();
  local_c = local_c + 1;
  puVar3 = (undefined2 *)M007_GETVALUE(0x1010,&local_10);
  local_6 = (float)CONCAT22(puVar3[1],*puVar3);
  puVar3 = (undefined2 *)M007_GETVALUE(0x1010,&local_14);
  local_a = (float)CONCAT22(puVar3[1],*puVar3);
  local_a = param_1 * DAT_1008_088e * DAT_1008_0018 + local_a;
  local_6 = param_2 * DAT_1008_088e * DAT_1008_0018 + local_6;
  if (_DAT_1008_0892 < local_6) {
    local_6 = _DAT_1008_0892;
  }
  if (_DAT_1008_0892 < local_a) {
    local_6 = _DAT_1008_0892;
  }
  if (local_6 < _DAT_1008_0896) {
    local_6 = _DAT_1008_0896;
  }
  if (local_a < _DAT_1008_0896) {
    local_6 = _DAT_1008_0896;
  }
  local_14 = param_2;
  M007_PUTVALUE();
  local_10 = param_1;
  fVar1 = local_10;
  local_10._2_2_ = (undefined2)((ulong)param_1 >> 0x10);
  uVar2 = local_10._2_2_;
  local_10 = fVar1;
  M007_PUTVALUE(0x1010,SUB42(param_1,0),uVar2);
  M007_PUTXY(0x1010,local_10,local_14);
  *(float *)(local_c * 0x26 + 0x1968) = local_14;
  *(float *)(local_c * 0x26 + 0x196c) = local_10;
  return;
}


// ---- SWITCHGAWOBBLE @ 1000:4200

undefined2 __stdcall16far SWITCHGAWOBBLE(void)

{
  return 0x1008;
}


// ---- SWITCHAPER_WOBBLE @ 1000:420e

undefined2 __stdcall16far SWITCHAPER_WOBBLE(void)

{
  return 0x1008;
}


// ---- DOCOMMANDAUTO_APER_ALIGN @ 1000:421c

undefined2 __cdecl16far DOCOMMANDAUTO_APER_ALIGN(void)

{
  return 0x1008;
}


// ---- SETACTUALLENS @ 1000:4228

undefined2 __stdcall16far SETACTUALLENS(void)

{
  return 0x1008;
}


// ---- SETTEST_N @ 1000:4236

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __stdcall16far SETTEST_N(float param_1)

{
  int iVar1;
  undefined2 unaff_CS;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 local_6;
  undefined2 uStack_4;
  
  uVar3 = 0x1008;
  if (param_1 < _DAT_1008_0886) {
    param_1 = _DAT_1008_0886;
  }
  if (DAT_1008_089a <= param_1) {
    param_1 = (float)CONCAT22(DAT_1008_08a0,DAT_1008_089e);
  }
  uVar2 = 0x14d;
  uStack_4 = (undefined2)((ulong)param_1 >> 0x10);
  local_6 = SUB42(param_1,0);
  M007_PUTVALUE(unaff_CS,local_6,uStack_4);
  iVar1 = FUN_1000_0282(0x14e,uVar2,uVar3);
  M007_PUTVALUE(0x1000,*(undefined2 *)(iVar1 * 4 + 0xe72),*(undefined2 *)(iVar1 * 4 + 0xe74));
  return;
}


// ---- SETTEST_VAL @ 1000:42be

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __stdcall16far SETTEST_VAL(float param_1)

{
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  int local_8 [2];
  int local_4;
  
  uVar3 = 0x1008;
  uVar2 = 0x14d;
  M007_GETVALUE(unaff_CS,local_8);
  local_4 = FUN_1000_0282(uVar2,uVar3);
  uVar1 = 0x1000;
  switch(local_4) {
  case 2:
    FUN_1000_0282(uVar2,uVar3);
    uVar1 = 0x1010;
    SEM_DEBUG(0x1000,1);
    break;
  case 4:
    if (param_1 < _DAT_1008_0886) {
      param_1 = (float)CONCAT22(DAT_1008_08a4,DAT_1008_08a2);
    }
    if (_DAT_1008_08a6 < param_1) {
      param_1 = _DAT_1008_08a6;
    }
    uVar1 = 0x14e;
    M007_PUTVALUE(0x1000,param_1._0_2_,param_1._2_2_);
    uVar2 = M007_GETSTATE(0x1010,0xb,uVar1);
    uVar1 = 0x1010;
    SWITCHFILAMENT_TYPE(0x1010,uVar2);
    break;
  case 5:
    for (local_8[0] = 0; uVar1 = 0x1000, local_8[0] < 5; local_8[0] = local_8[0] + 1) {
      FUN_1000_b63a();
    }
  }
  *(float *)(local_4 * 4 + 0xe72) = param_1;
  M007_PUTVALUE(uVar1,param_1);
  return;
}


// ---- SWITCHPOINT_USING @ 1000:43d6

void __stdcall16far SWITCHPOINT_USING(undefined2 param_1)

{
  undefined2 unaff_CS;
  
  M007_PUTSTATE(unaff_CS,param_1);
  return;
}


// ---- DOCOMMANDFOCUS_STIG @ 1000:43f0

void __cdecl16far DOCOMMANDFOCUS_STIG(void)

{
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  
  uVar2 = 0x1008;
  uVar1 = 0x77;
  M007_PUTSTATE(unaff_CS,9);
  FUN_1000_249e(uVar1,uVar2);
  return;
}


// ---- DOCOMMANDFINDIMAGE @ 1000:440a

void __cdecl16far DOCOMMANDFINDIMAGE(void)

{
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  
  uVar2 = 0x1008;
  uVar1 = 0x77;
  M007_PUTSTATE(unaff_CS,7);
  FUN_1000_249e(uVar1,uVar2);
  return;
}


// ---- SWITCHFOCUS_SCAN @ 1000:4424

undefined2 __stdcall16far SWITCHFOCUS_SCAN(void)

{
  return 0x1008;
}


// ---- SWITCHFOCUS_DIRECTION @ 1000:4432

undefined2 __stdcall16far SWITCHFOCUS_DIRECTION(void)

{
  return 0x1008;
}


// ---- SETMAX_WD @ 1000:4440

void __stdcall16far SETMAX_WD(float param_1)

{
  float *pfVar1;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined1 local_a [4];
  float local_6;
  
  pfVar1 = (float *)M007_GETVALUE(unaff_CS,local_a);
  local_6 = *pfVar1;
  if (param_1 <= local_6) {
    param_1 = local_6 + DAT_1008_08ae;
  }
  M007_PUTVALUE(0x1010,param_1._0_2_,param_1._2_2_);
  return;
}


// ---- SETMIN_WD @ 1000:4496

void __stdcall16far SETMIN_WD(float param_1)

{
  float *pfVar1;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined1 local_a [4];
  float local_6;
  
  pfVar1 = (float *)M007_GETVALUE(unaff_CS,local_a);
  local_6 = *pfVar1;
  if (local_6 <= param_1) {
    param_1 = local_6 - DAT_1008_08ae;
  }
  M007_PUTVALUE(0x1010,param_1._0_2_,param_1._2_2_);
  return;
}


// ---- DOCOMMANDAUTO_FOCUS_COARSE @ 1000:44ec

void __cdecl16far DOCOMMANDAUTO_FOCUS_COARSE(void)

{
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  
  uVar2 = 0x1008;
  uVar1 = 0x77;
  M007_PUTSTATE(unaff_CS,1);
  FUN_1000_249e(uVar1,uVar2);
  return;
}


// ---- DOCOMMANDAUTO_FOCUS_FINE @ 1000:4506

void __cdecl16far DOCOMMANDAUTO_FOCUS_FINE(void)

{
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  
  uVar2 = 0x1008;
  uVar1 = 0x77;
  M007_PUTSTATE(unaff_CS,1);
  FUN_1000_249e(uVar1,uVar2);
  return;
}


// ---- DOCOMMANDAUTO_ALIGN_COARSE @ 1000:4520

void __cdecl16far DOCOMMANDAUTO_ALIGN_COARSE(void)

{
  FUN_1000_7dec(0x1008);
  return;
}


// ---- DOCOMMANDAUTO_ALIGN_STANDARD @ 1000:4532

void __cdecl16far DOCOMMANDAUTO_ALIGN_STANDARD(void)

{
  FUN_1000_7e08(0x1008);
  return;
}


// ---- DOCOMMANDAUTO_ALIGN_FINE @ 1000:4544

void __cdecl16far DOCOMMANDAUTO_ALIGN_FINE(void)

{
  FUN_1000_7e24(0x1008);
  return;
}


// ---- DOCOMMANDAUTO_STIG @ 1000:4556

void __cdecl16far DOCOMMANDAUTO_STIG(void)

{
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  
  uVar2 = 0x1008;
  uVar1 = 0x77;
  M007_PUTSTATE(unaff_CS,3);
  FUN_1000_249e(uVar1,uVar2);
  return;
}


// ---- DOCOMMANDABORT_AUTO @ 1000:4570

void __cdecl16far DOCOMMANDABORT_AUTO(void)

{
  FUN_1000_24b4(0x1008);
  M007_PUTSTATE(0x1000,0);
  return;
}


// ---- DOCOMMANDAUTO_SATURATION @ 1000:458a

void __cdecl16far DOCOMMANDAUTO_SATURATION(void)

{
  FUN_1000_249e(0x1008);
  M007_PUTSTATE(0x1000,4);
  return;
}


// ---- SWITCHSATURATE_AT @ 1000:45a4

void __stdcall16far SWITCHSATURATE_AT(undefined2 param_1)

{
  undefined2 unaff_CS;
  
  M007_PUTSTATE(unaff_CS,param_1);
  return;
}


// ---- DOCOMMANDAUTO_PHOTO @ 1000:45be

undefined2 __cdecl16far DOCOMMANDAUTO_PHOTO(void)

{
  return 0x1008;
}


// ---- SETEOEMISSION @ 1000:45ca

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __stdcall16far SETEOEMISSION(float param_1)

{
  undefined2 uVar1;
  
  if (param_1 <= _DAT_1008_0886) {
    uVar1 = 0;
  }
  else {
    FUN_1000_8b06(param_1 + _DAT_1008_08aa,0x1008);
    uVar1 = 0x15;
    M007_PUTVALUE(0x1000,SUB42(param_1,0),(int)((ulong)param_1 >> 0x10));
  }
  FUN_1000_b09a(uVar1);
  return;
}


// ---- DOCOMMANDSCANRATE0 @ 1000:462e

void __cdecl16far DOCOMMANDSCANRATE0(void)

{
  FUN_1000_ae9e(0,0x1008);
  return;
}


// ---- DOCOMMANDSCANRATE1 @ 1000:4642

void __cdecl16far DOCOMMANDSCANRATE1(void)

{
  FUN_1000_ae9e(1,0x1008);
  return;
}


// ---- DOCOMMANDSCANRATE2 @ 1000:4656

void __cdecl16far DOCOMMANDSCANRATE2(void)

{
  FUN_1000_ae9e(2,0x1008);
  return;
}


// ---- DOCOMMANDSCANRATE3 @ 1000:466a

void __cdecl16far DOCOMMANDSCANRATE3(void)

{
  FUN_1000_ae9e(3,0x1008);
  return;
}


// ---- DOCOMMANDSCANRATE4 @ 1000:467e

void __cdecl16far DOCOMMANDSCANRATE4(void)

{
  FUN_1000_ae9e(4,0x1008);
  return;
}


// ---- DOCOMMANDSCANRATE5 @ 1000:4692

void __cdecl16far DOCOMMANDSCANRATE5(void)

{
  FUN_1000_ae9e(5,0x1008);
  return;
}


// ---- DOCOMMANDSCANRATE6 @ 1000:46a6

void __cdecl16far DOCOMMANDSCANRATE6(void)

{
  FUN_1000_ae9e(6,0x1008);
  return;
}


// ---- DOCOMMANDSCANRATE7 @ 1000:46ba

void __cdecl16far DOCOMMANDSCANRATE7(void)

{
  FUN_1000_ae9e(7,0x1008);
  return;
}


// ---- DOCOMMANDSCANRATE8 @ 1000:46ce

void __cdecl16far DOCOMMANDSCANRATE8(void)

{
  FUN_1000_ae9e(8,0x1008);
  return;
}


// ---- DOCOMMANDSCANRATE9 @ 1000:46e2

void __cdecl16far DOCOMMANDSCANRATE9(void)

{
  FUN_1000_ae9e(9,0x1008);
  return;
}


// ---- DOCOMMANDSCANRATE10 @ 1000:46f6

void __cdecl16far DOCOMMANDSCANRATE10(void)

{
  FUN_1000_ae9e(10,0x1008);
  return;
}


// ---- DOCOMMANDSCANRATE11 @ 1000:470a

void __cdecl16far DOCOMMANDSCANRATE11(void)

{
  FUN_1000_ae9e(0xb,0x1008);
  return;
}


// ---- DOCOMMANDSCANRATE12 @ 1000:471e

void __cdecl16far DOCOMMANDSCANRATE12(void)

{
  FUN_1000_ae9e(0xc,0x1008);
  return;
}


// ---- DOCOMMANDSCANRATE13 @ 1000:4732

void __cdecl16far DOCOMMANDSCANRATE13(void)

{
  FUN_1000_ae9e(0xd,0x1008);
  return;
}


// ---- DOCOMMANDSCANRATE14 @ 1000:4746

void __cdecl16far DOCOMMANDSCANRATE14(void)

{
  FUN_1000_ae9e(0xe,0x1008);
  return;
}


// ---- DOCOMMANDSCANRATE15 @ 1000:475a

void __cdecl16far DOCOMMANDSCANRATE15(void)

{
  FUN_1000_ae9e(0xf,0x1008);
  return;
}


// ---- DOCOMMANDSCANRATEUP @ 1000:476e

void __cdecl16far DOCOMMANDSCANRATEUP(void)

{
  FUN_1000_aed6(0,0x1008);
  return;
}


// ---- DOCOMMANDSCANRATEDOWN @ 1000:4782

void __cdecl16far DOCOMMANDSCANRATEDOWN(void)

{
  FUN_1000_aed6(1,0x1008);
  return;
}


// ---- SETEOCOLUMNSCAN @ 1000:4796

void __stdcall16far SETEOCOLUMNSCAN(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  undefined2 unaff_SS;
  int aiStack_16 [9];
  int local_4;
  
  if (param_5 == 1) {
    aiStack_16[0] = 0;
    aiStack_16[1] = 1;
    aiStack_16[2] = 4;
    local_4 = 3;
    aiStack_16[3] = 5;
  }
  else if (param_5 == 2) {
    aiStack_16[0] = 0;
    aiStack_16[1] = 1;
    aiStack_16[2] = 2;
    aiStack_16[3] = 3;
    aiStack_16[4] = 4;
    aiStack_16[5] = 5;
    aiStack_16[6] = 6;
    local_4 = 7;
    aiStack_16[7] = 7;
  }
  else {
    aiStack_16[0] = 0;
    local_4 = 1;
    aiStack_16[1] = 4;
  }
  aiStack_16[0] = 0;
  aiStack_16[8] = local_4 + 1;
  for (local_4 = 0; local_4 < aiStack_16[8]; local_4 = local_4 + 1) {
    iVar1 = aiStack_16[local_4] * 8;
    *(int *)(iVar1 + 0x22) = param_4;
    *(int *)(iVar1 + 0x24) = param_3;
    *(int *)(iVar1 + 0x26) = param_4 + param_2;
    *(int *)(iVar1 + 0x28) = param_3 + param_1;
  }
  FUN_1000_af36(param_5,param_4,param_3,param_2,param_1,0x1008);
  return;
}


// ---- EO_RASTER_SIZE @ 1000:48cc

void __stdcall16far EO_RASTER_SIZE(undefined2 *param_1,uint param_2)

{
  int iVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  
  iVar1 = M007_GETSTATE();
  if ((iVar1 == 1) && ((param_2 & 1) != 0)) {
    param_2 = param_2 - 1;
  }
  iVar1 = param_2 * 8;
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  puVar2 = (undefined2 *)param_1;
  *param_1 = *(undefined2 *)(iVar1 + 0x22);
  puVar2[1] = *(undefined2 *)(iVar1 + 0x24);
  puVar2[2] = *(undefined2 *)(iVar1 + 0x26);
  puVar2[3] = *(undefined2 *)(iVar1 + 0x28);
  return;
}


// ---- SWITCHEXT_SCAN_CONTROL @ 1000:4918

void __stdcall16far SWITCHEXT_SCAN_CONTROL(int param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0xa4;
  iVar1 = M007_GETSTATE();
  if (iVar1 != param_1) {
    FUN_1000_b4c8(param_1,uVar2,uVar3);
  }
  return;
}


// ---- SETSCANROTATION @ 1000:493c

void __stdcall16far SETSCANROTATION(float param_1)

{
  if ((float)DAT_1008_08b2 < param_1) {
    param_1 = param_1 - DAT_1008_08ba;
  }
  if (param_1 < (float)DAT_1008_08be) {
    param_1 = DAT_1008_08ba + param_1;
  }
  FUN_1000_b988(param_1._0_2_,param_1._2_2_,0x1008);
  return;
}


// ---- SWITCHSCAN_ROT @ 1000:499c

void __stdcall16far SWITCHSCAN_ROT(undefined2 param_1)

{
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  
  uVar2 = 0x1008;
  uVar1 = 0x9e;
  M007_PUTSTATE(unaff_CS,param_1);
  FUN_1000_bb5a(uVar1,uVar2);
  return;
}


// ---- SETTILT_ANGLE @ 1000:49ba

void __stdcall16far SETTILT_ANGLE(undefined4 param_1)

{
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uStack_4;
  
  uVar1 = 0x1008;
  uStack_4 = (undefined2)((ulong)param_1 >> 0x10);
  SETSTAGETILTANGLE(unaff_CS,(int)param_1);
  FUN_1000_baf0(param_1,uStack_4,uVar1);
  return;
}


// ---- SWITCHTILT_CORRECTION @ 1000:49f6

void __stdcall16far SWITCHTILT_CORRECTION(int param_1)

{
  undefined2 *puVar1;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined1 local_6 [4];
  
  uVar3 = 0x1008;
  uVar2 = 0x9d;
  M007_PUTSTATE(unaff_CS,param_1);
  FUN_1000_bb5a(uVar2,uVar3);
  if (param_1 == 1) {
    uVar2 = 0x28;
    puVar1 = (undefined2 *)M007_GETVALUE(0x1000,local_6);
    FUN_1000_baf0(*puVar1,puVar1[1],uVar2);
  }
  return;
}


// ---- DLL_SET_TILT_AXIS @ 1000:4a38

void __stdcall16far DLL_SET_TILT_AXIS(undefined2 param_1)

{
  FUN_1000_bb22(param_1,0x1008);
  return;
}


// ---- SETXYBEAMSHIFT @ 1000:4a50

void __stdcall16far
SETXYBEAMSHIFT(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  FUN_1000_c6a6(param_3,param_4,param_1,param_2,0x1008);
  return;
}


// ---- STEP_BEAMSHIFT @ 1000:4a72

void __stdcall16far STEP_BEAMSHIFT(undefined2 param_1,undefined2 param_2)

{
  FUN_1000_c6fe(param_2,param_1,0x1008);
  return;
}


// ---- SETBEAMSHIFTDIST @ 1000:4a8e

void __stdcall16far
SETBEAMSHIFTDIST(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  FUN_1000_c80c(param_3,param_4,param_1,param_2,0x1008);
  return;
}


// ---- SETBEAMSHIFTVECTOR @ 1000:4ab0

void __stdcall16far SETBEAMSHIFTVECTOR(undefined2 param_1,undefined2 param_2)

{
  FUN_1000_cbc6(param_2,param_1,0x1008);
  return;
}


// ---- SETXYGUNSHIFT @ 1000:4acc

void __stdcall16far SETXYGUNSHIFT(undefined4 param_1,undefined4 param_2)

{
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 local_a;
  undefined2 uStack_8;
  undefined2 local_6;
  
  uVar2 = 0x1008;
  uVar1 = 0x34;
  local_6 = (undefined2)param_2;
  uStack_8 = (undefined2)((ulong)param_1 >> 0x10);
  local_a = (undefined2)param_1;
  M007_PUTXY(unaff_CS,local_a,uStack_8,local_6,(int)((ulong)param_2 >> 0x10));
  FUN_1000_8a6a(param_2,uVar1,uVar2);
  FUN_1000_8a84(param_1);
  return;
}


// ---- SETXYGUNTILT @ 1000:4b30

void __stdcall16far SETXYGUNTILT(undefined4 param_1,undefined4 param_2)

{
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 local_a;
  undefined2 uStack_8;
  undefined2 local_6;
  
  uVar2 = 0x1008;
  uVar1 = 0x36;
  local_6 = (undefined2)param_2;
  uStack_8 = (undefined2)((ulong)param_1 >> 0x10);
  local_a = (undefined2)param_1;
  M007_PUTXY(unaff_CS,local_a,uStack_8,local_6,(int)((ulong)param_2 >> 0x10));
  FUN_1000_8a9e(param_2,uVar1,uVar2);
  FUN_1000_8ab8(param_1);
  return;
}


// ---- SETXYGUNUPPER @ 1000:4b94

undefined2 __stdcall16far SETXYGUNUPPER(void)

{
  return 0x1008;
}


// ---- SETXYGUNLOWER @ 1000:4ba2

undefined2 __stdcall16far SETXYGUNLOWER(void)

{
  return 0x1008;
}


// ---- DOCOMMANDGUNALIGN_UPPER @ 1000:4bb0

undefined2 __cdecl16far DOCOMMANDGUNALIGN_UPPER(void)

{
  return 0x1008;
}


// ---- DOCOMMANDGUNALIGN_LOWER @ 1000:4bbc

undefined2 __cdecl16far DOCOMMANDGUNALIGN_LOWER(void)

{
  return 0x1008;
}


// ---- DOCOMMANDGUNALIGN_NORMAL @ 1000:4bc8

undefined2 __cdecl16far DOCOMMANDGUNALIGN_NORMAL(void)

{
  return 0x1008;
}


// ---- DOCOMMANDGUNALIGN_ZERO @ 1000:4bd4

undefined2 __cdecl16far DOCOMMANDGUNALIGN_ZERO(void)

{
  return 0x1008;
}


// ---- SWITCHFEC1_ALIGN @ 1000:4be0

undefined2 __stdcall16far SWITCHFEC1_ALIGN(void)

{
  return 0x1008;
}


// ---- SWITCHFEC2_ALIGN @ 1000:4bee

undefined2 __stdcall16far SWITCHFEC2_ALIGN(void)

{
  return 0x1008;
}


// ---- SWITCHBEAM_BLANKED @ 1000:4bfc

void __stdcall16far SWITCHBEAM_BLANKED(int param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  if (param_1 == 1) {
    uVar2 = 0xa4;
    iVar1 = M007_GETSTATE();
    if (iVar1 != 1) {
      FUN_1000_8ad2(uVar2);
      DAT_1008_001c = 1;
    }
  }
  else {
    FUN_1000_8aec(0x1008);
    DAT_1008_001c = 0;
  }
  return;
}


// ---- CHECKFORBEAMBLANKING @ 1000:4c34

void __cdecl16far CHECKFORBEAMBLANKING(void)

{
  int iVar1;
  undefined2 uVar2;
  
  if (DAT_1008_001e == 0) {
    uVar2 = 0x115;
    iVar1 = M007_GETSTATE();
    if (iVar1 == 0) {
      iVar1 = M007_GETSTATE(0x1010,0xda,uVar2);
      if (iVar1 == 1) {
        iVar1 = M007_GETSTATE(0x1010,0x73);
        if (iVar1 == 1) {
          iVar1 = M007_GETSTATE(0x1010,0xa4);
          if (iVar1 == 0) {
            iVar1 = M007_GETSTATE(0x1010,0x5d);
            if (iVar1 != 1) {
              iVar1 = M007_GETSTATE(0x1010,0x5d);
              if (iVar1 != 0) goto LAB_1000_4c94;
            }
          }
        }
      }
      if ((DAT_1008_0020 == 0) && (DAT_1008_001c != 1)) goto LAB_1000_4c9c;
    }
LAB_1000_4c94:
    FUN_1000_8ad2();
    return;
  }
LAB_1000_4c9c:
  FUN_1000_8aec();
  return;
}


// ---- SWITCHBEAM_BLANKING @ 1000:4ca4

undefined2 __stdcall16far SWITCHBEAM_BLANKING(void)

{
  return 0x1008;
}


// ---- SETBLANKING_PERIOD @ 1000:4cb2

void __stdcall16far SETBLANKING_PERIOD(undefined4 param_1)

{
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 local_6;
  
  uVar2 = 0x1008;
  uVar1 = 0x2c;
  local_6 = (undefined2)param_1;
  M007_PUTVALUE(unaff_CS,local_6,(int)((ulong)param_1 >> 0x10));
  FUN_1000_db7e(param_1,uVar1,uVar2);
  return;
}


// ---- SETDC1BBP @ 1000:4cf0

undefined2 __stdcall16far SETDC1BBP(void)

{
  return 0x1008;
}


// ---- SETXYSTIG @ 1000:4cfe

void __stdcall16far
SETXYSTIG(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  FUN_1000_d69c(param_3,param_4,0x1008);
  FUN_1000_d734(param_1,param_2);
  return;
}


// ---- SETSTIG_X @ 1000:4d28

void __stdcall16far SETSTIG_X(undefined2 param_1,undefined2 param_2)

{
  FUN_1000_d69c(param_1,param_2,0x1008);
  return;
}


// ---- SETSTIG_Y @ 1000:4d44

void __stdcall16far SETSTIG_Y(undefined2 param_1,undefined2 param_2)

{
  FUN_1000_d734(param_1,param_2,0x1008);
  return;
}


// ---- SETSTIG_X_ONLY @ 1000:4d60

void __stdcall16far SETSTIG_X_ONLY(undefined2 param_1,undefined2 param_2)

{
  FUN_1000_d69c(param_1,param_2,0x1008);
  return;
}


// ---- SETSTIG_Y_ONLY @ 1000:4d7c

void __stdcall16far SETSTIG_Y_ONLY(undefined2 param_1,undefined2 param_2)

{
  FUN_1000_d734(param_1,param_2,0x1008);
  return;
}


// ---- SWITCHDYNSTIG @ 1000:4d98

void __stdcall16far SWITCHDYNSTIG(int param_1)

{
  if (param_1 == 1) {
    FUN_1000_d784();
  }
  else {
    FUN_1000_d7fe(0x1008);
  }
  return;
}


// ---- DOCOMMANDDYNAMIC_STIG @ 1000:4db8

void __cdecl16far DOCOMMANDDYNAMIC_STIG(void)

{
  FUN_1000_d784(0x1008);
  return;
}


// ---- SETXYMINSTIG @ 1000:4dca

void __stdcall16far
SETXYMINSTIG(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  undefined2 unaff_CS;
  
  M007_PUTXY(unaff_CS,param_1,param_2,param_3,param_4);
  return;
}


// ---- SETMAG @ 1000:4dec

void __stdcall16far SETMAG(float param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined2 uVar3;
  undefined2 unaff_SS;
  longdouble lVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined1 local_a [4];
  undefined4 local_6;
  
  uVar7 = 0x1008;
  uVar6 = 0x1f;
  uVar3 = 0x1010;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    uVar5 = 0xe6;
    puVar2 = (undefined4 *)M007_GETVALUE(0x1010,local_a);
    local_6 = *puVar2;
    lVar4 = (longdouble)param_1;
    uVar3 = 0x1000;
    FUN_1000_02c0(uVar5,uVar6,uVar7);
    param_1 = (float)lVar4;
  }
  iVar1 = M007_GETSTATE(uVar3,0xb7);
  if (iVar1 == 1) {
    uVar3 = 0xb7;
    M007_PUTSTATE(0x1010,0);
  }
  FUN_1000_be76(param_1._0_2_,param_1._2_2_,uVar3);
  return;
}


// ---- STEP_MAGNIFCATION @ 1000:4e52

void __stdcall16far STEP_MAGNIFCATION(int param_1)

{
  if ((100 < param_1) || (param_1 < -100)) {
    param_1 = (param_1 / 100) * 100;
  }
  if ((0x32 < param_1) && (param_1 < 100)) {
    param_1 = 0x32;
  }
  if ((param_1 < -0x32) && (-100 < param_1)) {
    param_1 = -0x32;
  }
  FUN_1000_bf3e(param_1,0x1008);
  return;
}


// ---- SWITCHMAGTRACK @ 1000:4ea6

void __stdcall16far SWITCHMAGTRACK(undefined2 param_1)

{
  FUN_1000_bf86(param_1,0x1008);
  return;
}


// ---- SETEOZOOM @ 1000:4ebe

void __stdcall16far
SETEOZOOM(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  FUN_1000_b0b0(param_3,param_4,param_2,param_1,0x1008);
  return;
}


// ---- SWITCHOUT_DEV @ 1000:4ee0

void __stdcall16far SWITCHOUT_DEV(undefined2 param_1)

{
  FUN_1000_bfa6(param_1,0x1008);
  return;
}


// ---- SETC1 @ 1000:4ef8

void __stdcall16far SETC1(undefined2 param_1,undefined2 param_2)

{
  FUN_1000_92ea(param_1,param_2,0x1008);
  return;
}


// ---- SETC2 @ 1000:4f14

void __stdcall16far SETC2(undefined2 param_1,undefined2 param_2)

{
  FUN_1000_9328(param_1,param_2,0x1008);
  return;
}


// ---- SWITCHC1WOBBLE @ 1000:4f30

void __stdcall16far SWITCHC1WOBBLE(int param_1)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined1 local_6 [4];
  
  if (param_1 == 1) {
    uVar4 = 0x11;
    DAT_1008_0ec2 = M007_GETSTATE();
    FUN_1000_ae9e(0,uVar4);
    uVar3 = 3;
    M007_PUTSTATE(0x1000,1);
    uVar2 = 0xc;
    M007_GETVALUE(0x1010,local_6);
    uVar1 = 0x1000;
    FUN_1000_0282(uVar2,uVar3);
  }
  else {
    FUN_1000_ae9e(DAT_1008_0ec2,0x1008);
    uVar4 = 3;
    uVar1 = 0x1010;
    M007_PUTSTATE(0x1000,0);
    uVar3 = 0xffff;
  }
  SEND_GSP_LENS_WOBBLE(uVar1,uVar3,uVar4);
  return;
}


// ---- SETC1WOBBLEAMP @ 1000:4f94

void __stdcall16far SETC1WOBBLEAMP(undefined2 param_1,undefined2 param_2)

{
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined1 local_6 [4];
  
  uVar3 = 0x1008;
  uVar2 = 0xc;
  M007_PUTVALUE(unaff_CS,param_1,param_2);
  uVar1 = 0xc;
  M007_GETVALUE(0x1010,local_6);
  uVar1 = FUN_1000_0282(uVar1,uVar2,uVar3);
  SEND_GSP_LENS_WOBBLE(0x1000,uVar1);
  return;
}


// ---- SETC1WOBBLEPERIOD @ 1000:4fcc

undefined2 __stdcall16far SETC1WOBBLEPERIOD(void)

{
  return 0x1008;
}


// ---- SWITCHC2WOBBLE @ 1000:4fda

void __stdcall16far SWITCHC2WOBBLE(int param_1)

{
  int iVar1;
  undefined2 unaff_CS;
  undefined2 uVar2;
  undefined1 local_c [4];
  int local_8;
  int local_6;
  undefined2 local_4;
  
  if (param_1 == 1) {
    local_4 = 0x40;
    uVar2 = 6;
    M007_GETVALUE(unaff_CS,local_c);
    local_6 = FUN_1000_0282(uVar2);
    local_8 = (int)(local_6 + (local_6 >> 0xf & 0xfU)) >> 4;
    iVar1 = M007_GETSTATE(0x1000,0xb1);
    if (iVar1 == 0) {
      local_4 = 0xa0;
    }
    unaff_CS = 0x1010;
    iVar1 = M007_GETSTATE(0x1010,0xa5);
    if (iVar1 == 1) {
      uVar2 = 7;
      M007_GETVALUE(0x1010,local_c);
      unaff_CS = 0x1000;
      local_4 = FUN_1000_0282(uVar2);
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  M007_PUTSTATE(unaff_CS,uVar2);
  return;
}


// ---- SETC2WOBBLEAMP @ 1000:5068

undefined2 __stdcall16far SETC2WOBBLEAMP(void)

{
  return 0x1008;
}


// ---- SETC2WOBBLEPERIOD @ 1000:5076

undefined2 __stdcall16far SETC2WOBBLEPERIOD(void)

{
  return 0x1008;
}


// ---- DOCOMMANDC1C2_HYSTERESIS @ 1000:5084

void __cdecl16far DOCOMMANDC1C2_HYSTERESIS(void)

{
  FUN_1000_9234(0x1008);
  return;
}


// ---- SETC3 @ 1000:5096

void __stdcall16far SETC3(undefined2 param_1,undefined2 param_2)

{
  FUN_1000_9b44(param_1,param_2,0x1008);
  return;
}


// ---- STEP_FOCUS @ 1000:50b2

void __stdcall16far STEP_FOCUS(int param_1)

{
  if ((100 < param_1) || (param_1 < -100)) {
    param_1 = (param_1 / 100) * 100;
  }
  if ((0x32 < param_1) && (param_1 < 100)) {
    param_1 = 0x32;
  }
  if ((param_1 < -0x32) && (-100 < param_1)) {
    param_1 = -0x32;
  }
  FUN_1000_9b12(-param_1,0x1008);
  return;
}


// ---- SWITCHWOBBLE @ 1000:510a

void __stdcall16far SWITCHWOBBLE(int param_1)

{
  if (param_1 == 1) {
    FUN_1000_a0fa();
  }
  else {
    FUN_1000_a140(0x1008);
  }
  return;
}


// ---- SETC3WOBBLEAMP @ 1000:512a

void __stdcall16far SETC3WOBBLEAMP(undefined2 param_1,undefined2 param_2)

{
  FUN_1000_a16e(param_1,param_2,0x1008);
  return;
}


// ---- SETC3WOBBLEPERIOD @ 1000:5146

undefined2 __stdcall16far SETC3WOBBLEPERIOD(void)

{
  return 0x1008;
}


// ---- SWITCHWOBBLE_SPEED @ 1000:5154

void __stdcall16far SWITCHWOBBLE_SPEED(int param_1)

{
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  uVar4 = 0x1008;
  uVar3 = 0xb1;
  M007_PUTSTATE(unaff_CS,param_1);
  uVar1 = DAT_1008_08ce;
  uVar2 = DAT_1008_08d0;
  if (param_1 == 0) {
    uVar1 = DAT_1008_0892;
    uVar2 = DAT_1008_0894;
  }
  FUN_1000_a1c8(uVar1,uVar2,uVar3,uVar4);
  return;
}


// ---- SWITCHDYNFOCUS @ 1000:518e

void __stdcall16far SWITCHDYNFOCUS(int param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x18;
  iVar1 = M007_GETSTATE();
  if (iVar1 != param_1) {
    if (param_1 == 1) {
      FUN_1000_a222();
    }
    else {
      FUN_1000_a2a6(uVar2,uVar3);
    }
    FUN_1000_a3e0();
    FUN_1000_e696(0x184a,0x1008);
  }
  return;
}


// ---- SETFCF_TILT @ 1000:51cc

void __stdcall16far SETFCF_TILT(undefined2 param_1,undefined2 param_2)

{
  FUN_1000_a2f2(param_1,param_2,0x1008);
  return;
}


// ---- SETFCF_SETTING @ 1000:51e8

undefined2 __stdcall16far SETFCF_SETTING(void)

{
  return 0x1008;
}


// ---- DOCOMMANDC3_REVERSE @ 1000:51f6

void __cdecl16far DOCOMMANDC3_REVERSE(void)

{
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  
  uVar2 = 0x1008;
  uVar1 = 0x16;
  M007_PUTSTATE(unaff_CS,2);
  FUN_1000_9c10(uVar1,uVar2);
  M007_PUTSTATE(0x1000,1);
  return;
}


// ---- DOCOMMANDC3_NORMAL @ 1000:521a

void __cdecl16far DOCOMMANDC3_NORMAL(void)

{
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  
  uVar2 = 0x1008;
  uVar1 = 0x16;
  M007_PUTSTATE(unaff_CS,3);
  FUN_1000_9cb8(uVar1,uVar2);
  M007_PUTSTATE(0x1000,0);
  return;
}


// ---- DOCOMMANDC3_HYSTERESIS @ 1000:523e

void __cdecl16far DOCOMMANDC3_HYSTERESIS(void)

{
  undefined2 *puVar1;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined1 local_6 [4];
  
  uVar5 = 0x1008;
  uVar4 = 0x17;
  M007_PUTSTATE(unaff_CS,1);
  uVar3 = 5;
  uVar2 = 0xd;
  puVar1 = (undefined2 *)M007_GETVALUE(0x1010,local_6);
  FUN_1000_9b80(*puVar1,puVar1[1],uVar2,uVar3,uVar4,uVar5);
  return;
}


// ---- SWITCHOPTIBEAM @ 1000:5272

void __stdcall16far SWITCHOPTIBEAM(undefined2 param_1)

{
  FUN_1000_a792(param_1,0x1008);
  return;
}


// ---- SWITCHOPTIMODE @ 1000:528a

void __stdcall16far SWITCHOPTIMODE(undefined2 param_1)

{
  FUN_1000_a82a(param_1,0x1008);
  return;
}


// ---- SWITCHOPTIRESMODE @ 1000:52a2

void __stdcall16far SWITCHOPTIRESMODE(undefined2 param_1)

{
  FUN_1000_a868(param_1,0x1008);
  return;
}


// ---- SWITCHOPTI_STEREO @ 1000:52ba

void __stdcall16far SWITCHOPTI_STEREO(undefined2 param_1)

{
  FUN_1000_a8ac(param_1,0x1008);
  return;
}


// ---- SETIPROBE @ 1000:52d2

void __stdcall16far SETIPROBE(undefined2 param_1,undefined2 param_2)

{
  FUN_1000_ad1a(param_1,param_2,0x1008);
  return;
}


// ---- SETWD @ 1000:52ee

void __stdcall16far SETWD(undefined2 param_1,undefined2 param_2)

{
  FUN_1000_9b28(param_1,param_2,0x1008);
  return;
}


// ---- SETALIAS_WD @ 1000:530a

void __stdcall16far SETALIAS_WD(undefined2 param_1,undefined2 param_2)

{
  FUN_1000_9b28(param_1,param_2,0x1008);
  return;
}


// ---- OPTIBEAMSTATUS @ 1000:5326

void __stdcall16far OPTIBEAMSTATUS(undefined2 param_1,undefined2 param_2)

{
  FUN_1000_e696(param_1,param_2,0x1008);
  return;
}


// ---- IMPORTPROBETABLE @ 1000:5342

void __stdcall16far IMPORTPROBETABLE(undefined2 param_1,undefined2 param_2)

{
  FUN_1000_ad54(param_1,param_2,0x1008);
  return;
}


// ---- EXPORTPROBETABLE @ 1000:535e

void __stdcall16far EXPORTPROBETABLE(undefined2 param_1,undefined2 param_2)

{
  FUN_1000_ad3a(param_1,param_2,0x1008);
  return;
}


// ---- IMPORTCONDITIONTABLE @ 1000:537a

void __stdcall16far IMPORTCONDITIONTABLE(undefined2 param_1,undefined2 param_2)

{
  FUN_1000_ad88(param_1,param_2,0x1008);
  return;
}


// ---- EXPORTCONDITIONTABLE @ 1000:5396

void __stdcall16far EXPORTCONDITIONTABLE(undefined2 param_1,undefined2 param_2)

{
  FUN_1000_ad6e(param_1,param_2,0x1008);
  return;
}


// ---- IMPORTOUTMAGTABLE @ 1000:53b2

void __stdcall16far IMPORTOUTMAGTABLE(undefined2 param_1,undefined2 param_2)

{
  FUN_1000_c33c(param_1,param_2,0x1008);
  return;
}


// ---- EXPORTOUTMAGTABLE @ 1000:53ce

void __stdcall16far EXPORTOUTMAGTABLE(undefined2 param_1,undefined2 param_2)

{
  FUN_1000_c384(param_1,param_2,0x1008);
  return;
}


// ---- SETIB1 @ 1000:53ea

undefined2 __stdcall16far SETIB1(void)

{
  return 0x1008;
}


// ---- SETANG_INTENS @ 1000:53f8

undefined2 __stdcall16far SETANG_INTENS(void)

{
  return 0x1008;
}


// ---- SETTIP_RADIUS @ 1000:5406

undefined2 __stdcall16far SETTIP_RADIUS(void)

{
  return 0x1008;
}


// ---- SETTIP_POSITION @ 1000:5414

undefined2 __stdcall16far SETTIP_POSITION(void)

{
  return 0x1008;
}


// ---- SWITCHAPERTURE @ 1000:5422

void __stdcall16far SWITCHAPERTURE(undefined2 param_1)

{
  FUN_1000_a9b6(param_1,0x1008);
  return;
}


// ---- SETAPERTURESIZE @ 1000:543a

void __stdcall16far SETAPERTURESIZE(undefined2 param_1,undefined2 param_2)

{
  FUN_1000_aa88(param_1,param_2,0x1008);
  return;
}


// ---- SWITCHAPERTURE_STATE @ 1000:5456

void __stdcall16far SWITCHAPERTURE_STATE(undefined2 param_1)

{
  FUN_1000_aaf8(param_1,0x1008);
  return;
}


// ---- SETXYAPERTUREPOSN @ 1000:546e

void __stdcall16far
SETXYAPERTUREPOSN(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  FUN_1000_ab70(param_3,param_4,param_1,param_2,0x1008);
  return;
}


// ---- SETXYAPERTURE @ 1000:5490

void __stdcall16far
SETXYAPERTURE(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  undefined2 unaff_CS;
  
  M007_PUTXY(unaff_CS,param_1,param_2,param_3,param_4);
  return;
}


// ---- IMPORTAPERTURETABLE @ 1000:54b2

void __stdcall16far IMPORTAPERTURETABLE(undefined2 param_1,undefined2 param_2)

{
  undefined2 uVar1;
  
  FUN_1000_ac72(param_1,param_2,0x1008);
  uVar1 = M007_GETSTATE(0x1000,0x1a);
  FUN_1000_a9b6(uVar1);
  return;
}


// ---- EXPORTAPERTURETABLE @ 1000:54dc

void __stdcall16far EXPORTAPERTURETABLE(undefined2 param_1,undefined2 param_2)

{
  FUN_1000_ac02(param_1,param_2,0x1008);
  return;
}


// ---- EXPORTZ130APERTURETABLE @ 1000:54f8

void __stdcall16far EXPORTZ130APERTURETABLE(int param_1,undefined2 param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  int local_4;
  
  local_4 = 0;
  do {
    puVar4 = (undefined2 *)(local_4 * 0x26 + 0x194c);
    puVar5 = (undefined2 *)(local_4 * 0x26 + param_1);
    for (iVar3 = 0x13; iVar3 != 0; iVar3 = iVar3 + -1) {
      puVar2 = puVar5;
      puVar5 = puVar5 + 1;
      puVar1 = puVar4;
      puVar4 = puVar4 + 1;
      *puVar2 = *puVar1;
    }
    local_4 = local_4 + 1;
  } while (local_4 < 4);
  return;
}


// ---- SETEOSTEREO @ 1000:5536

void __stdcall16far SETEOSTEREO(undefined2 param_1)

{
  FUN_1000_d22a(param_1,0x1008);
  return;
}


// ---- SETSTEREO_TILT @ 1000:554e

void __stdcall16far SETSTEREO_TILT(undefined2 param_1,undefined2 param_2)

{
  FUN_1000_d284(param_1,param_2,0x1008);
  return;
}


// ---- SETSTEREO_MERGE @ 1000:556a

void __stdcall16far SETSTEREO_MERGE(undefined2 param_1,undefined2 param_2)

{
  FUN_1000_d2c0(param_1,param_2,0x1008);
  return;
}


// ---- SETSTEREO_ROTATE @ 1000:5586

void __stdcall16far SETSTEREO_ROTATE(undefined2 param_1,undefined2 param_2)

{
  FUN_1000_d2fc(param_1,param_2,0x1008);
  return;
}


// ---- SWITCHEOBOARD @ 1000:55a2

void __stdcall16far SWITCHEOBOARD(undefined2 param_1)

{
  FUN_1000_96d4(param_1,0x1008);
  return;
}


// ---- SWITCHCALIBRATION @ 1000:55ba

void __stdcall16far SWITCHCALIBRATION(undefined2 param_1)

{
  undefined2 unaff_CS;
  
  M007_PUTSTATE(unaff_CS,param_1);
  return;
}


// ---- DOCOMMANDCAL_C1C2 @ 1000:55d4

void __cdecl16far DOCOMMANDCAL_C1C2(void)

{
  undefined2 uVar1;
  
  uVar1 = 0x1008;
  SETEOEMISSION(DAT_1008_08aa,DAT_1008_08ac);
  FUN_1000_8ede(uVar1);
  return;
}


// ---- DOCOMMANDC1CAL @ 1000:55f2

void __cdecl16far DOCOMMANDC1CAL(void)

{
  undefined2 uVar1;
  
  uVar1 = 0x1008;
  SETEOEMISSION(DAT_1008_08aa,DAT_1008_08ac);
  FUN_1000_8fac(uVar1);
  return;
}


// ---- DOCOMMANDC1REM @ 1000:5610

void __cdecl16far DOCOMMANDC1REM(void)

{
  undefined2 uVar1;
  
  uVar1 = 0x1008;
  SETEOEMISSION(DAT_1008_08aa,DAT_1008_08ac);
  FUN_1000_8f86(uVar1);
  return;
}


// ---- SETC1CAL @ 1000:562e

void __stdcall16far SETC1CAL(undefined2 param_1,undefined2 param_2)

{
  FUN_1000_90fe(param_1,param_2,0x1008);
  return;
}


// ---- SETC1REM @ 1000:564a

void __stdcall16far SETC1REM(undefined2 param_1,undefined2 param_2)

{
  FUN_1000_913a(param_1,param_2,0x1008);
  return;
}


// ---- DOCOMMANDC2CAL @ 1000:5666

void __cdecl16far DOCOMMANDC2CAL(void)

{
  undefined2 uVar1;
  
  uVar1 = 0x1008;
  SETEOEMISSION(DAT_1008_08aa,DAT_1008_08ac);
  FUN_1000_9020(uVar1);
  return;
}


// ---- DOCOMMANDC2REM @ 1000:5684

void __cdecl16far DOCOMMANDC2REM(void)

{
  undefined2 uVar1;
  
  uVar1 = 0x1008;
  SETEOEMISSION(DAT_1008_08aa,DAT_1008_08ac);
  FUN_1000_8ffa(uVar1);
  return;
}


// ---- SETC2CAL @ 1000:56a2

void __stdcall16far SETC2CAL(undefined2 param_1,undefined2 param_2)

{
  FUN_1000_9176(param_1,param_2,0x1008);
  return;
}


// ---- SETC2REM @ 1000:56be

void __stdcall16far SETC2REM(undefined2 param_1,undefined2 param_2)

{
  FUN_1000_91b2(param_1,param_2,0x1008);
  return;
}


// ---- DOCOMMANDCAL_C3 @ 1000:56da

void __cdecl16far DOCOMMANDCAL_C3(void)

{
  FUN_1000_9d62(0x1008);
  return;
}


// ---- DOCOMMANDC3CAL @ 1000:56ec

void __cdecl16far DOCOMMANDC3CAL(void)

{
  FUN_1000_9f66(0x1008);
  return;
}


// ---- DOCOMMANDC3REM @ 1000:56fe

void __cdecl16far DOCOMMANDC3REM(void)

{
  FUN_1000_9f36(0x1008);
  return;
}


// ---- SETC3CAL @ 1000:5710

void __stdcall16far SETC3CAL(undefined2 param_1,undefined2 param_2)

{
  FUN_1000_a082(param_1,param_2,0x1008);
  return;
}


// ---- SETC3REM @ 1000:572c

void __stdcall16far SETC3REM(undefined2 param_1,undefined2 param_2)

{
  FUN_1000_a0be(param_1,param_2,0x1008);
  return;
}


// ---- DOCOMMANDCAL_FOCUSROTATION @ 1000:5748

undefined2 __cdecl16far DOCOMMANDCAL_FOCUSROTATION(void)

{
  return 0x1008;
}


// ---- SETFOCUS_ROTATION_COMP @ 1000:5754

undefined2 __stdcall16far SETFOCUS_ROTATION_COMP(void)

{
  return 0x1008;
}


// ---- SWITCHC3_ROT_SIGN @ 1000:5762

undefined2 __stdcall16far SWITCHC3_ROT_SIGN(void)

{
  return 0x1008;
}


// ---- SWITCHC3_ROT_CORRECTION @ 1000:5770

void __stdcall16far SWITCHC3_ROT_CORRECTION(undefined2 param_1)

{
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  
  uVar2 = 0x1008;
  uVar1 = 0xa0;
  M007_PUTSTATE(unaff_CS,param_1);
  FUN_1000_bb5a(uVar1,uVar2);
  return;
}


// ---- DOCOMMANDCAL_SCANORTHOG @ 1000:578e

void __cdecl16far DOCOMMANDCAL_SCANORTHOG(void)

{
  undefined2 uVar1;
  
  uVar1 = 0x1008;
  SWITCHSTAGE_ANGLE(0);
  SWITCHSCAN_ROT(0);
  SWITCHC3_ROT_CORRECTION(0);
  SWITCHTILT_CORRECTION(0);
  FUN_1000_ba66(uVar1);
  return;
}


// ---- SETSCANORTHOG @ 1000:57bc

void __stdcall16far SETSCANORTHOG(undefined2 param_1,undefined2 param_2)

{
  FUN_1000_bab4(param_1,param_2,0x1008);
  return;
}


// ---- SWITCHSCAN_ORTHOG @ 1000:57d8

void __stdcall16far SWITCHSCAN_ORTHOG(undefined2 param_1)

{
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  
  uVar2 = 0x1008;
  uVar1 = 0x9f;
  M007_PUTSTATE(unaff_CS,param_1);
  FUN_1000_bb5a(uVar1,uVar2);
  return;
}


// ---- DOCOMMANDCAL_STAGEANGLE @ 1000:57f6

void __cdecl16far DOCOMMANDCAL_STAGEANGLE(void)

{
  undefined2 uVar1;
  
  uVar1 = 0x1008;
  SWITCHSCAN_ROT(0);
  SWITCHSTAGE_ANGLE(1);
  SWITCHC3_ROT_CORRECTION(1);
  SWITCHTILT_CORRECTION(0);
  FUN_1000_b9c4(uVar1);
  return;
}


// ---- SETSTAGEANGLE @ 1000:5824

void __stdcall16far SETSTAGEANGLE(undefined2 param_1,undefined2 param_2)

{
  FUN_1000_ba12(param_1,param_2,0x1008);
  return;
}


// ---- SWITCHSTAGE_ANGLE @ 1000:5840

void __stdcall16far SWITCHSTAGE_ANGLE(undefined2 param_1)

{
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  
  uVar2 = 0x1008;
  uVar1 = 0xa1;
  M007_PUTSTATE(unaff_CS,param_1);
  FUN_1000_bb5a(uVar1,uVar2);
  return;
}


// ---- DOCOMMANDCAL_STIGBALANCE @ 1000:585e

void __cdecl16far DOCOMMANDCAL_STIGBALANCE(void)

{
  FUN_1000_d43e(0x1008);
  return;
}


// ---- DOCOMMANDSTIG_BALANCE_X @ 1000:5870

void __cdecl16far DOCOMMANDSTIG_BALANCE_X(void)

{
  FUN_1000_d5c6(0x1008);
  return;
}


// ---- SETSTIGXUPPER @ 1000:5882

void __stdcall16far SETSTIGXUPPER(undefined4 param_1)

{
  undefined2 uStack_4;
  
  uStack_4 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_1000_d606(0,(int)param_1,uStack_4,0x1008);
  M007_PUTVALUE(0x1000,param_1);
  return;
}


// ---- SETSTIGXLOWER @ 1000:58c2

void __stdcall16far SETSTIGXLOWER(undefined4 param_1)

{
  undefined2 uStack_4;
  
  uStack_4 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_1000_d606(1,(int)param_1,uStack_4,0x1008);
  M007_PUTVALUE(0x1000,param_1);
  return;
}


// ---- DOCOMMANDSTIG_BALANCE_Y @ 1000:5902

void __cdecl16far DOCOMMANDSTIG_BALANCE_Y(void)

{
  FUN_1000_d5e6(0x1008);
  return;
}


// ---- SETSTIGYUPPER @ 1000:5914

void __stdcall16far SETSTIGYUPPER(undefined4 param_1)

{
  undefined2 uStack_4;
  
  uStack_4 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_1000_d606(2,(int)param_1,uStack_4,0x1008);
  M007_PUTVALUE(0x1000,param_1);
  return;
}


// ---- SETSTIGYLOWER @ 1000:5954

void __stdcall16far SETSTIGYLOWER(undefined4 param_1)

{
  undefined2 uStack_4;
  
  uStack_4 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_1000_d606(3,(int)param_1,uStack_4,0x1008);
  M007_PUTVALUE(0x1000,param_1);
  return;
}


// ---- SETSTIGBALPERIOD @ 1000:5994

void __stdcall16far SETSTIGBALPERIOD(undefined2 param_1,undefined2 param_2)

{
  FUN_1000_d660(param_1,param_2,0x1008);
  return;
}


// ---- SETSTIGBALAMP @ 1000:59b0

void __stdcall16far SETSTIGBALAMP(undefined2 param_1,undefined2 param_2)

{
  FUN_1000_d624(param_1,param_2,0x1008);
  return;
}


// ---- DOCOMMANDCAL_MAGCAL @ 1000:59cc

void __cdecl16far DOCOMMANDCAL_MAGCAL(void)

{
  SWITCHSTAGE_ANGLE(0);
  SWITCHC3_ROT_CORRECTION(0);
  SWITCHSCAN_ROT(0);
  SWITCHTILT_CORRECTION(0);
  SETMAG(DAT_1008_08d2,DAT_1008_08d4);
  FUN_1000_bb9c();
  return;
}


// ---- SETMAGCALWIDTH @ 1000:5a06

void __stdcall16far SETMAGCALWIDTH(undefined2 param_1,undefined2 param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x10;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 0x16) {
    M007_PUTVALUE(0x1010,param_1,param_2);
  }
  else {
    FUN_1000_bc5a(0,param_1,param_2,uVar2,uVar3);
  }
  return;
}


// ---- SETMAGCALX @ 1000:5a40

undefined2 __stdcall16far SETMAGCALX(void)

{
  return 0x1008;
}


// ---- SETMAGCALHEIGHT @ 1000:5a4e

void __stdcall16far SETMAGCALHEIGHT(undefined2 param_1,undefined2 param_2)

{
  FUN_1000_bc5a(1,param_1,param_2,0x1008);
  return;
}


// ---- SETMAGCALY @ 1000:5a6c

undefined2 __stdcall16far SETMAGCALY(void)

{
  return 0x1008;
}


// ---- SETCAL_PIX_WIDTH @ 1000:5a7a

void __stdcall16far SETCAL_PIX_WIDTH(undefined2 param_1,undefined2 param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  iVar1 = M007_GETSTATE();
  if (iVar1 == 4) {
    M007_PUTVALUE(0x1010,param_1,param_2);
  }
  uVar3 = 0x1010;
  iVar1 = M007_GETSTATE(0x1010,0x10);
  if (iVar1 == 9) {
    uVar3 = 0xc2;
    M007_PUTVALUE(0x1010,param_1,param_2);
  }
  uVar2 = 0x1010;
  iVar1 = M007_GETSTATE(0x1010,0x10,uVar3);
  if (iVar1 == 0xf) {
    uVar2 = 0xc2;
    M007_PUTVALUE(0x1010,param_1,param_2);
  }
  iVar1 = M007_GETSTATE(0x1010,0x10,uVar2);
  if (iVar1 == 0x16) {
    M007_PUTVALUE(0x1010,param_1,param_2);
  }
  return;
}


// ---- SETCAL_PIX_HEIGHT @ 1000:5af0

void __stdcall16far SETCAL_PIX_HEIGHT(undefined2 param_1,undefined2 param_2)

{
  undefined2 unaff_CS;
  
  M007_PUTVALUE(unaff_CS,param_1,param_2);
  return;
}


// ---- DOCOMMANDCAL_MAG_SHIFT @ 1000:5b0c

void __cdecl16far DOCOMMANDCAL_MAG_SHIFT(void)

{
  FUN_1000_ce14(0x1008);
  return;
}


// ---- SETRANGE_CAL_X @ 1000:5b1e

void __stdcall16far SETRANGE_CAL_X(undefined4 param_1)

{
  undefined2 *puVar1;
  undefined2 unaff_SS;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 local_c;
  undefined2 uStack_a;
  undefined1 local_8 [4];
  int local_4;
  
  uVar5 = 0x1008;
  uVar4 = 0xa2;
  local_4 = M007_GETSTATE();
  if (local_4 != 1) {
    uVar3 = 0x100;
    uStack_a = (undefined2)((ulong)param_1 >> 0x10);
    local_c = (undefined2)param_1;
    M007_PUTVALUE(0x1010,local_c,uStack_a);
    uVar2 = 0x101;
    puVar1 = (undefined2 *)M007_GETVALUE(0x1010,local_8);
    FUN_1000_cdaa(local_4,param_1,*puVar1,puVar1[1],uVar2,uVar3,uVar4,uVar5);
  }
  return;
}


// ---- SETRANGE_CAL_Y @ 1000:5b82

void __stdcall16far SETRANGE_CAL_Y(undefined4 param_1)

{
  undefined2 *puVar1;
  undefined2 unaff_SS;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 local_c;
  undefined1 local_8 [4];
  int local_4;
  
  uVar5 = 0x1008;
  uVar4 = 0xa2;
  local_4 = M007_GETSTATE();
  if (local_4 != 1) {
    uVar3 = 0x101;
    local_c = (undefined2)param_1;
    M007_PUTVALUE(0x1010,local_c,(int)((ulong)param_1 >> 0x10));
    uVar2 = 0x100;
    puVar1 = (undefined2 *)M007_GETVALUE(0x1010,local_8);
    uVar4 = M007_GETSTATE(0x1010,0xa2,*puVar1,puVar1[1],uVar2,param_1,uVar3,uVar4,uVar5);
    FUN_1000_cdaa(uVar4);
  }
  return;
}


// ---- DOCOMMANDCAL_SCANRATEMAG @ 1000:5bec

void __cdecl16far DOCOMMANDCAL_SCANRATEMAG(void)

{
  FUN_1000_c460(0x1008);
  M007_PUTSTATE(0x1000,4);
  return;
}


// ---- SWITCHCAL_SCANRATE @ 1000:5c06

void __stdcall16far SWITCHCAL_SCANRATE(undefined2 param_1)

{
  FUN_1000_c518(param_1,0x1008);
  return;
}


// ---- SETMAG_COMP_AMPL @ 1000:5c1e

void __stdcall16far SETMAG_COMP_AMPL(undefined2 param_1,undefined2 param_2)

{
  FUN_1000_c54a(param_1,param_2,0x1008);
  return;
}


// ---- SETCAL_PIX_X1 @ 1000:5c3a

void __stdcall16far SETCAL_PIX_X1(undefined2 param_1,undefined2 param_2)

{
  undefined2 unaff_CS;
  
  M007_PUTVALUE(unaff_CS,param_1,param_2);
  return;
}


// ---- SETCAL_PIX_X2 @ 1000:5c56

void __stdcall16far SETCAL_PIX_X2(undefined2 param_1,undefined2 param_2)

{
  undefined2 unaff_CS;
  
  M007_PUTVALUE(unaff_CS,param_1,param_2);
  return;
}


// ---- SETCAL_PIX_Y1 @ 1000:5c72

void __stdcall16far SETCAL_PIX_Y1(undefined2 param_1,undefined2 param_2)

{
  undefined2 unaff_CS;
  
  M007_PUTVALUE(unaff_CS,param_1,param_2);
  return;
}


// ---- SETCAL_PIX_Y2 @ 1000:5c8e

void __stdcall16far SETCAL_PIX_Y2(undefined2 param_1,undefined2 param_2)

{
  undefined2 unaff_CS;
  
  M007_PUTVALUE(unaff_CS,param_1,param_2);
  return;
}


// ---- SETMAG_COMP_OFFSET @ 1000:5caa

void __stdcall16far SETMAG_COMP_OFFSET(undefined2 param_1,undefined2 param_2)

{
  FUN_1000_c598(param_1,param_2,0x1008);
  return;
}


// ---- DOCOMMANDCAL_DUALMAG @ 1000:5cc6

void __cdecl16far DOCOMMANDCAL_DUALMAG(void)

{
  FUN_1000_b10c(0x1008);
  return;
}


// ---- SETXYDUAL_MAG_OFFSET @ 1000:5cd8

void __stdcall16far SETXYDUAL_MAG_OFFSET(void)

{
  undefined2 uVar1;
  
  uVar1 = FUN_1000_0282(0x1008);
  uVar1 = FUN_1000_0282(uVar1);
  FUN_1000_b170(uVar1);
  return;
}


// ---- DOCOMMANDCAL_DUAL_MAG_SLOPE @ 1000:5d02

void __cdecl16far DOCOMMANDCAL_DUAL_MAG_SLOPE(void)

{
  FUN_1000_b53e(0x1008);
  return;
}


// ---- SETDUAL_MAG_SLOPE @ 1000:5d14

void __stdcall16far SETDUAL_MAG_SLOPE(undefined2 param_1,undefined2 param_2)

{
  FUN_1000_b58c(param_1,param_2,0x1008);
  return;
}


// ---- SETDUAL_MAG_Y_SLOPE @ 1000:5d30

void __stdcall16far SETDUAL_MAG_Y_SLOPE(undefined2 param_1,undefined2 param_2)

{
  FUN_1000_b5c8(param_1,param_2,0x1008);
  return;
}


// ---- DOCOMMANDCAL_LINEAMPL @ 1000:5d4c

void __cdecl16far DOCOMMANDCAL_LINEAMPL(void)

{
  SWITCHSTAGE_ANGLE(0);
  SWITCHSCAN_ROT(1);
  SWITCHTILT_CORRECTION(0);
  SWITCHC3_ROT_CORRECTION(0);
  SETSCANROTATION(DAT_1008_08d6,DAT_1008_08d8);
  FUN_1000_b1ea();
  return;
}


// ---- DOCOMMANDCAL_FRAMEAMPL @ 1000:5d86

void __cdecl16far DOCOMMANDCAL_FRAMEAMPL(void)

{
  SWITCHSTAGE_ANGLE(0);
  SWITCHSCAN_ROT(1);
  SWITCHTILT_CORRECTION(0);
  SWITCHC3_ROT_CORRECTION(0);
  SETSCANROTATION(DAT_1008_0886,DAT_1008_0888);
  FUN_1000_b268();
  return;
}


// ---- DOCOMMANDCAL_LINETOFRAME @ 1000:5dc0

void __cdecl16far DOCOMMANDCAL_LINETOFRAME(void)

{
  SWITCHSTAGE_ANGLE(0);
  SWITCHSCAN_ROT(1);
  SWITCHTILT_CORRECTION(0);
  SWITCHC3_ROT_CORRECTION(0);
  SETSCANROTATION(DAT_1008_08da,DAT_1008_08dc);
  FUN_1000_b2e6();
  return;
}


// ---- DOCOMMANDCAL_SCAN_CENTRE @ 1000:5dfa

void __cdecl16far DOCOMMANDCAL_SCAN_CENTRE(void)

{
  undefined2 uVar1;
  
  uVar1 = 0x1008;
  SWITCHC3_ROT_CORRECTION(0);
  SETSCANROTATION(DAT_1008_0886,DAT_1008_0888);
  FUN_1000_b364(uVar1);
  return;
}


// ---- SETLINE_AMPL @ 1000:5e20

void __stdcall16far SETLINE_AMPL(void)

{
  undefined2 uVar1;
  
  uVar1 = FUN_1000_0282(0x1008);
  FUN_1000_b23c(uVar1);
  return;
}


// ---- SETFRAME_AMPL @ 1000:5e3e

void __stdcall16far SETFRAME_AMPL(void)

{
  undefined2 uVar1;
  
  uVar1 = FUN_1000_0282(0x1008);
  FUN_1000_b2ba(uVar1);
  return;
}


// ---- SETLINE_FRAME_RATIO @ 1000:5e5c

void __stdcall16far SETLINE_FRAME_RATIO(void)

{
  undefined2 uVar1;
  
  uVar1 = FUN_1000_0282(0x1008);
  FUN_1000_b338(uVar1);
  return;
}


// ---- SETSCAN_OFFSET_X @ 1000:5e7a

void __stdcall16far SETSCAN_OFFSET_X(void)

{
  undefined2 uVar1;
  
  uVar1 = FUN_1000_0282(0x1008);
  FUN_1000_b3f6(uVar1);
  return;
}


// ---- SETSCAN_OFFSET_Y @ 1000:5e98

void __stdcall16far SETSCAN_OFFSET_Y(void)

{
  undefined2 uVar1;
  
  uVar1 = FUN_1000_0282(0x1008);
  FUN_1000_b48c(uVar1);
  return;
}


// ---- DOCOMMANDCAL_OUTDEV @ 1000:5eb6

void __cdecl16far DOCOMMANDCAL_OUTDEV(void)

{
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  
  uVar2 = 0x1008;
  uVar1 = 0x10;
  M007_PUTSTATE(unaff_CS,0xf);
  FUN_1000_c22e(uVar1,uVar2);
  return;
}


// ---- SETOUTPUT_DEV_CAL @ 1000:5ed0

void __stdcall16far SETOUTPUT_DEV_CAL(undefined2 param_1,undefined2 param_2)

{
  FUN_1000_c258(param_1,param_2,0x1008);
  return;
}


// ---- SETFORMAT_MODIFIER @ 1000:5eec

void __stdcall16far SETFORMAT_MODIFIER(undefined2 param_1,undefined2 param_2)

{
  FUN_1000_c0f8(param_1,param_2,0x1008);
  return;
}


// ---- DOCOMMANDCAL_STEREO @ 1000:5f08

void __cdecl16far DOCOMMANDCAL_STEREO(void)

{
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  
  uVar2 = 0x1008;
  uVar1 = 0x10;
  M007_PUTSTATE(unaff_CS,0x11);
  FUN_1000_d338(uVar1,uVar2);
  return;
}


// ---- SETSTEREO_CAL @ 1000:5f22

void __stdcall16far SETSTEREO_CAL(undefined2 param_1,undefined2 param_2)

{
  FUN_1000_d360(param_1,param_2,0x1008);
  return;
}


// ---- DOCOMMANDCAL_BEAM_SHIFT @ 1000:5f3e

void __cdecl16far DOCOMMANDCAL_BEAM_SHIFT(void)

{
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  
  uVar2 = 0x1008;
  uVar1 = 0x10;
  M007_PUTSTATE(unaff_CS,0x10);
  FUN_1000_c87e(uVar1,uVar2);
  return;
}


// ---- SETSHIFT_START @ 1000:5f58

void __cdecl16far SETSHIFT_START(void)

{
  FUN_1000_c8f0(0x1008);
  return;
}


// ---- SETSHIFT_END @ 1000:5f6a

void __cdecl16far SETSHIFT_END(void)

{
  FUN_1000_c934(0x1008);
  return;
}


// ---- SETMAG_SHIFT_X @ 1000:5f7c

void __stdcall16far SETMAG_SHIFT_X(void)

{
  undefined2 uVar1;
  
  uVar1 = FUN_1000_0282(0x1008);
  FUN_1000_cf2c(uVar1);
  return;
}


// ---- SETMAG_SHIFT_Y @ 1000:5f9a

void __stdcall16far SETMAG_SHIFT_Y(void)

{
  undefined2 uVar1;
  
  uVar1 = FUN_1000_0282(0x1008);
  FUN_1000_cf88(uVar1);
  return;
}


// ---- SETMAG_GAIN_X @ 1000:5fb8

undefined2 __stdcall16far SETMAG_GAIN_X(void)

{
  return 0x1008;
}


// ---- SETMAG_GAIN_Y @ 1000:5fc6

undefined2 __stdcall16far SETMAG_GAIN_Y(void)

{
  return 0x1008;
}


// ---- DOCOMMANDCAL_EMISSION_CENTRE @ 1000:5fd4

void __cdecl16far DOCOMMANDCAL_EMISSION_CENTRE(void)

{
  FUN_1000_adee(0x1008);
  return;
}


// ---- DOCOMMANDCAL_GUN_ALIGN @ 1000:5fe6

void __cdecl16far DOCOMMANDCAL_GUN_ALIGN(void)

{
  FUN_1000_7b4e(0x1008);
  return;
}


// ---- SWITCHGUN_CAL_N @ 1000:5ff8

void __stdcall16far SWITCHGUN_CAL_N(undefined2 param_1)

{
  FUN_1000_7b72(param_1,0x1008);
  return;
}


// ---- DOCOMMANDNEXT_GUN_CAL @ 1000:6010

void __cdecl16far DOCOMMANDNEXT_GUN_CAL(void)

{
  int iVar1;
  
  iVar1 = M007_GETSTATE();
  SWITCHGUN_CAL_N(iVar1 + 1);
  return;
}


// ---- DOCOMMANDOK @ 1000:602c

void __cdecl16far DOCOMMANDOK(void)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  
  uVar5 = 0x1008;
  uVar4 = 0x10;
  uVar1 = M007_GETSTATE();
  switch(uVar1) {
  case 1:
    SETEOEMISSION(DAT_1008_0886,DAT_1008_0888);
    FUN_1000_90d4();
    break;
  case 2:
    FUN_1000_a060();
    break;
  case 3:
  case 7:
  case 9:
    SWITCHSTAGE_ANGLE(1);
    SWITCHC3_ROT_CORRECTION(1);
    SWITCHSCAN_ROT(1);
    SWITCHTILT_CORRECTION(1);
    break;
  case 4:
    uVar1 = M007_GETSTATE(0x1000,0x11);
    FUN_1000_ae9e(uVar1);
    FUN_1000_c4ee();
    break;
  case 6:
    FUN_1000_d5b0();
    break;
  case 10:
  case 0xb:
  case 0xc:
    SWITCHSTAGE_ANGLE(1);
    SWITCHC3_ROT_CORRECTION(1);
    SWITCHSCAN_ROT(1);
    SWITCHTILT_CORRECTION(1);
    SETSCANROTATION(DAT_1008_0886,DAT_1008_0888);
    FUN_1000_d046();
    break;
  case 0xd:
    FUN_1000_d046();
    SWITCHC3_ROT_CORRECTION(1);
    break;
  case 0x13:
    FUN_1000_ae12();
    break;
  case 0x14:
    FUN_1000_7b5a();
    break;
  case 0x15:
    FUN_1000_a37c();
    break;
  case 0x16:
    FUN_1000_b75a(uVar4,uVar5);
  }
  FUN_1000_8b38();
  uVar3 = 0x10;
  M007_PUTSTATE(0x1000,0);
  uVar5 = 0x12;
  M007_PUTSTATE(0x1010,0);
  uVar4 = 0x13;
  M007_PUTSTATE(0x1010,0);
  uVar1 = 5;
  M007_PUTSTATE(0x1010,0);
  iVar2 = M007_GETSTATE(0x1010,1,uVar1,uVar4,uVar5,uVar3);
  if (iVar2 == 1) {
    FUN_1000_d7fe();
  }
  return;
}


// ---- DOCOMMANDCANCEL @ 1000:616a

void __cdecl16far DOCOMMANDCANCEL(void)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  uVar4 = 0x1008;
  uVar3 = 0x10;
  uVar1 = M007_GETSTATE();
  switch(uVar1) {
  case 1:
    SETEOEMISSION(DAT_1008_0886,DAT_1008_0888);
    FUN_1000_906e();
    break;
  case 2:
    FUN_1000_a000();
    break;
  case 3:
    FUN_1000_ba98();
    goto LAB_1000_61af;
  case 4:
    uVar1 = M007_GETSTATE(0x1000,0x11);
    FUN_1000_ae9e(uVar1);
    FUN_1000_c4b4();
    break;
  case 5:
    FUN_1000_b154();
    break;
  case 6:
    FUN_1000_d516();
    break;
  case 7:
    FUN_1000_b9f6();
    goto LAB_1000_61bd;
  case 9:
    FUN_1000_bbf0();
    goto LAB_1000_61af;
  case 10:
    FUN_1000_b220();
LAB_1000_61af:
    SWITCHSTAGE_ANGLE(1);
    SWITCHC3_ROT_CORRECTION(1);
LAB_1000_61bd:
    SWITCHSCAN_ROT(1);
    SWITCHTILT_CORRECTION(1);
    break;
  case 0xb:
    FUN_1000_b29e();
    goto LAB_1000_620e;
  case 0xc:
    FUN_1000_b31c();
LAB_1000_620e:
    SWITCHSTAGE_ANGLE(1);
    SWITCHC3_ROT_CORRECTION(1);
    SWITCHSCAN_ROT(1);
    SWITCHTILT_CORRECTION(1);
    SETSCANROTATION(DAT_1008_0886,DAT_1008_0888);
    break;
  case 0xd:
    FUN_1000_b3d0();
    SWITCHC3_ROT_CORRECTION(1);
    break;
  case 0xe:
    FUN_1000_b604();
    break;
  case 0xf:
    FUN_1000_c2f6();
    break;
  case 0x10:
    FUN_1000_ca4a();
    break;
  case 0x11:
    FUN_1000_d39c();
    break;
  case 0x12:
    FUN_1000_ce4e();
    break;
  case 0x13:
    FUN_1000_ae60();
    break;
  case 0x14:
    FUN_1000_7b66();
    break;
  case 0x15:
    FUN_1000_a392();
    break;
  case 0x16:
    FUN_1000_b6ce(uVar3,uVar4);
  }
  uVar1 = 0x1010;
  iVar2 = M007_GETSTATE(0x1000,1);
  if (iVar2 == 1) {
    uVar1 = 0x1000;
    FUN_1000_d7da();
  }
  M007_PUTSTATE(uVar1,0);
  M007_PUTSTATE(0x1010,0);
  M007_PUTSTATE(0x1010,0);
  M007_PUTSTATE(0x1010,0);
  return;
}


// ---- RESTORE_EO_CONFIG @ 1000:62f0

void __stdcall16far RESTORE_EO_CONFIG(undefined4 param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  undefined2 uVar10;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined2 uStack_72;
  undefined2 uStack_70;
  undefined4 uStack_6e;
  undefined2 uStack_6a;
  undefined2 uStack_68;
  int iStack_66;
  int iStack_64;
  undefined1 *local_62;
  undefined2 local_54;
  undefined2 local_52;
  undefined2 local_50;
  undefined2 local_4e;
  undefined2 local_4c;
  undefined2 local_4a;
  undefined2 local_48;
  int local_44;
  undefined1 local_42 [16];
  int aiStack_32 [24];
  
  _local_62 = (undefined1 *)CONCAT22(unaff_CS,0x630b);
  M007_PUTSTATE();
  uVar10 = (undefined2)((ulong)param_1 >> 0x10);
  iVar6 = (int)param_1;
  _local_62 = (undefined1 *)CONCAT22((int)*(char *)(iVar6 + 1),0x1010);
  iStack_64 = 0x631b;
  M007_PUTSTATE();
  _local_62 = (undefined1 *)CONCAT22(*(undefined2 *)(iVar6 + 4),*(undefined2 *)(iVar6 + 2));
  iStack_64 = 0x1010;
  iStack_66 = 0x632b;
  SETSTAGEANGLE();
  _local_62 = (undefined1 *)CONCAT22(*(undefined2 *)(iVar6 + 8),*(undefined2 *)(iVar6 + 6));
  iStack_64 = 0x1000;
  iStack_66 = 0x633b;
  SETSTIGXUPPER();
  _local_62 = (undefined1 *)CONCAT22(*(undefined2 *)(iVar6 + 0xc),*(undefined2 *)(iVar6 + 10));
  iStack_64 = 0x1000;
  iStack_66 = 0x634b;
  SETSTIGXLOWER();
  _local_62 = (undefined1 *)CONCAT22(*(undefined2 *)(iVar6 + 0x10),*(undefined2 *)(iVar6 + 0xe));
  iStack_64 = 0x1000;
  iStack_66 = 0x635b;
  SETSTIGYUPPER();
  _local_62 = (undefined1 *)CONCAT22(*(undefined2 *)(iVar6 + 0x14),*(undefined2 *)(iVar6 + 0x12));
  iStack_64 = 0x1000;
  iStack_66 = 0x636b;
  SETSTIGYLOWER();
  local_44 = 0;
  do {
    _local_62 = (undefined1 *)
                CONCAT22(*(undefined2 *)(iVar6 + 0x56 + local_44 * 2),
                         *(undefined2 *)(iVar6 + 0x16 + local_44 * 4 + 2));
    iStack_64 = *(undefined2 *)(iVar6 + 0x16 + local_44 * 4);
    iStack_66 = local_44;
    uStack_68 = 0x1000;
    uStack_6a = 0x6399;
    FUN_1000_c620();
    local_44 = local_44 + 1;
  } while (local_44 < 0x10);
  _local_62 = (undefined1 *)0x1000;
  iStack_64 = 0x63ac;
  FUN_1000_a938();
  local_44 = 0;
  do {
    aiStack_32[local_44 * 8 + 7] = local_44 + 1;
    iVar7 = local_44 * 0xe + iVar6;
    iVar5 = *(int *)(iVar7 + 0xd1);
    aiStack_32[local_44 * 8] = *(int *)(iVar7 + 0xcf);
    aiStack_32[local_44 * 8 + 1] = iVar5;
    aiStack_32[local_44 * 8 + 6] = *(int *)(iVar7 + 0xdb);
    iVar5 = *(int *)(iVar7 + 0xd5);
    aiStack_32[local_44 * 8 + 2] = *(int *)(iVar7 + 0xd3);
    aiStack_32[local_44 * 8 + 3] = iVar5;
    iVar5 = *(int *)(iVar7 + 0xd9);
    aiStack_32[local_44 * 8 + 4] = *(int *)(iVar7 + 0xd7);
    aiStack_32[local_44 * 8 + 5] = iVar5;
    local_44 = local_44 + 1;
  } while (local_44 < 3);
  _local_62 = (undefined1 *)CONCAT22(unaff_SS,local_42);
  iStack_64 = 0x1000;
  iStack_66 = 0x6414;
  FUN_1000_ac72();
  _local_62 = (undefined1 *)CONCAT22(*(undefined2 *)(iVar6 + 0x78),*(undefined2 *)(iVar6 + 0x76));
  iStack_64 = 0x1000;
  iStack_66 = 0x6427;
  SETC1CAL();
  _local_62 = (undefined1 *)CONCAT22(*(undefined2 *)(iVar6 + 0x7c),*(undefined2 *)(iVar6 + 0x7a));
  iStack_64 = 0x1000;
  iStack_66 = 0x6437;
  SETC1REM();
  _local_62 = (undefined1 *)CONCAT22(*(undefined2 *)(iVar6 + 0x80),*(undefined2 *)(iVar6 + 0x7e));
  iStack_64 = 0x1000;
  iStack_66 = 0x6448;
  SETC2CAL();
  _local_62 = (undefined1 *)CONCAT22(*(undefined2 *)(iVar6 + 0x84),*(undefined2 *)(iVar6 + 0x82));
  iStack_64 = 0x1000;
  iStack_66 = 0x645a;
  SETC2REM();
  _local_62 = (undefined1 *)CONCAT22(*(undefined2 *)(iVar6 + 0x88),*(undefined2 *)(iVar6 + 0x86));
  iStack_64 = 0x1000;
  iStack_66 = 0x646c;
  SETC3CAL();
  _local_62 = (undefined1 *)CONCAT22(*(undefined2 *)(iVar6 + 0x8c),*(undefined2 *)(iVar6 + 0x8a));
  iStack_64 = 0x1000;
  iStack_66 = 0x647e;
  SETC3REM();
  _local_62 = (undefined1 *)CONCAT22(*(undefined2 *)(iVar6 + 0xa4),*(undefined2 *)(iVar6 + 0xa2));
  iStack_64 = *(undefined2 *)(iVar6 + 0x90);
  iStack_66 = *(undefined2 *)(iVar6 + 0x8e);
  uStack_68 = 0x1000;
  uStack_6a = 0x649a;
  FUN_1000_bdf0();
  _local_62 = (undefined1 *)CONCAT22(*(undefined2 *)(iVar6 + 0xb8),*(undefined2 *)(iVar6 + 0xb6));
  iStack_64 = *(undefined2 *)(iVar6 + 0xbc);
  iStack_66 = *(undefined2 *)(iVar6 + 0xba);
  uStack_68 = 0x1000;
  uStack_6a = 0x64b9;
  SETXYDUAL_MAG_OFFSET();
  _local_62 = (undefined1 *)CONCAT22(*(undefined2 *)(iVar6 + 0xc4),*(undefined2 *)(iVar6 + 0xc2));
  iStack_64 = 0x1000;
  iStack_66 = 0x64cb;
  SETSCANORTHOG();
  _local_62 = (undefined1 *)CONCAT22(*(undefined2 *)(iVar6 + 0xc9),*(undefined2 *)(iVar6 + 199));
  iStack_64 = 0x1000;
  iStack_66 = 0x64dd;
  SETXTALK12();
  _local_62 = (undefined1 *)CONCAT22(*(undefined2 *)(iVar6 + 0xcd),*(undefined2 *)(iVar6 + 0xcb));
  iStack_64 = 0x1000;
  iStack_66 = 0x64ef;
  SETXTALK21();
  DAT_1008_0e60 = *(char *)(iVar6 + 0xc6);
  _local_62 = (undefined1 *)(float)*(int *)(iVar6 + 0x107);
  iStack_64 = 0x1000;
  iStack_66 = 0x6510;
  SETLINE_AMPL();
  _local_62 = (undefined1 *)(float)*(int *)(iVar6 + 0x109);
  iStack_64 = 0x1000;
  iStack_66 = 0x6529;
  SETFRAME_AMPL();
  _local_62 = (undefined1 *)(float)*(int *)(iVar6 + 0x10b);
  iStack_64 = 0x1000;
  iStack_66 = 0x6542;
  SETLINE_FRAME_RATIO();
  _local_62 = (undefined1 *)CONCAT22(*(undefined2 *)(iVar6 + 0x10f),*(undefined2 *)(iVar6 + 0x10d));
  iStack_64 = 0x1000;
  iStack_66 = 0x6554;
  FUN_1000_b432();
  _local_62 = (undefined1 *)CONCAT22(*(undefined2 *)(iVar6 + 0x11c),*(undefined2 *)(iVar6 + 0x11a));
  iStack_64 = 0x1000;
  iStack_66 = 0x6569;
  SETDUAL_MAG_SLOPE();
  _local_62 = (undefined1 *)CONCAT22(*(undefined2 *)(iVar6 + 0x120),*(undefined2 *)(iVar6 + 0x11e));
  iStack_64 = 0x1000;
  iStack_66 = 0x657b;
  SETDUAL_MAG_Y_SLOPE();
  _local_62 = (undefined1 *)CONCAT22(*(undefined2 *)(iVar6 + 0x118),*(undefined2 *)(iVar6 + 0x116));
  iStack_64 = *(undefined2 *)(iVar6 + 0x114);
  iStack_66 = *(undefined2 *)(iVar6 + 0x112);
  uStack_68 = 0x1000;
  uStack_6a = 0x6597;
  FUN_1000_ca92();
  _local_62 = (undefined1 *)CONCAT22(*(undefined2 *)(iVar6 + 300),*(undefined2 *)(iVar6 + 0x12a));
  iStack_64 = *(undefined2 *)(iVar6 + 0x128);
  iStack_66 = *(undefined2 *)(iVar6 + 0x126);
  uStack_68 = 0x1000;
  uStack_6a = 0x65b6;
  FUN_1000_caec();
  _local_62 = (undefined1 *)CONCAT22(*(undefined2 *)(iVar6 + 0x124),*(undefined2 *)(iVar6 + 0x122));
  iStack_64 = 0x1000;
  iStack_66 = 0x65cb;
  SETSTEREO_CAL();
  local_44 = 0;
  do {
    _local_62 = (undefined1 *)0x100065e6;
    uVar3 = FUN_1000_0282();
    local_62 = (undefined1 *)0x1000;
    iStack_64 = 0x65f7;
    uVar4 = FUN_1000_0282();
    _local_62 = (undefined1 *)CONCAT22(uVar3,uVar4);
    iStack_64 = local_44;
    iStack_66 = 0x1000;
    uStack_68 = 0x6600;
    FUN_1000_ceca();
    local_44 = local_44 + 1;
  } while (local_44 < 5);
  _local_62 = (undefined1 *)0x11000;
  iStack_64 = 0x6613;
  SWITCHEXT_SCAN_CONTROL();
  local_44 = 0;
  do {
    _local_62 = (undefined1 *)0x1000662e;
    uVar3 = FUN_1000_0282();
    local_62 = (undefined1 *)0x1000;
    iStack_64 = 0x663f;
    uVar4 = FUN_1000_0282();
    _local_62 = (undefined1 *)CONCAT22(uVar3,uVar4);
    iStack_64 = local_44;
    iStack_66 = 0x1000;
    uStack_68 = 0x6648;
    FUN_1000_ceca();
    local_44 = local_44 + 1;
  } while (local_44 < 5);
  _local_62 = (undefined1 *)0x1000;
  iStack_64 = 0x665b;
  SWITCHEXT_SCAN_CONTROL();
  _local_62 = (undefined1 *)0x11000;
  iStack_64 = 0x6662;
  FUN_1000_a938();
  local_44 = 0;
  do {
    aiStack_32[local_44 * 8 + 7] = local_44 + 1;
    iVar7 = local_44 * 0xe + iVar6;
    iVar5 = *(int *)(iVar7 + 0x16d);
    aiStack_32[local_44 * 8] = *(int *)(iVar7 + 0x16b);
    aiStack_32[local_44 * 8 + 1] = iVar5;
    aiStack_32[local_44 * 8 + 6] = *(int *)(iVar7 + 0x177);
    iVar5 = *(int *)(iVar7 + 0x171);
    aiStack_32[local_44 * 8 + 2] = *(int *)(iVar7 + 0x16f);
    aiStack_32[local_44 * 8 + 3] = iVar5;
    iVar5 = *(int *)(iVar7 + 0x175);
    aiStack_32[local_44 * 8 + 4] = *(int *)(iVar7 + 0x173);
    aiStack_32[local_44 * 8 + 5] = iVar5;
    local_44 = local_44 + 1;
  } while (local_44 < 3);
  _local_62 = (undefined1 *)CONCAT22(unaff_SS,local_42);
  iStack_64 = 0x1000;
  iStack_66 = 0x66ca;
  FUN_1000_ac72();
  _local_62 = (undefined1 *)0x1000;
  iStack_64 = 0x66d4;
  FUN_1000_a938();
  _local_62 = (undefined1 *)CONCAT22((int)*(char *)(iVar6 + 0x12e),0x1000);
  iStack_64 = 0x66e4;
  SWITCHEBBU();
  _local_62 = &UNK_1000_7b26;
  iStack_64 = 0x1000;
  iStack_66 = 0x7b1e;
  uStack_68 = 0;
  uStack_6a = 0x1000;
  uStack_6e._2_2_ = 0x66f7;
  uStack_6e = GETLEOINIFILEPATH();
  uStack_70 = 0x1010;
  uStack_72 = 0x66fe;
  iStack_64 = GETPRIVATEPROFILEINT();
  iStack_66 = 0x1010;
  uStack_68 = 0x6704;
  SWITCHEBBU_IN_USE();
  if (DAT_1008_0e60 == '\x03') {
    iStack_64 = (int)*(char *)(iVar6 + 0x1cb);
    iStack_66 = 0x1000;
    uStack_68 = 0x671a;
    SWITCHFIXED_APERTURE();
  }
  iStack_64 = (int)*(char *)(iVar6 + 0x111);
  iStack_66 = 0x1000;
  uStack_68 = 0x6729;
  FUN_1000_a9b6();
  local_54 = *(undefined2 *)(iVar6 + 0x195);
  local_52 = *(undefined2 *)(iVar6 + 0x197);
  local_50 = *(undefined2 *)(iVar6 + 0x199);
  local_4e = *(undefined2 *)(iVar6 + 0x19b);
  local_4c = *(undefined2 *)(iVar6 + 0x19d);
  local_4a = *(undefined2 *)(iVar6 + 0x19f);
  local_48 = *(undefined2 *)(iVar6 + 0x1a1);
  puVar8 = &local_54;
  puVar9 = &uStack_72;
  for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
    puVar2 = puVar9;
    puVar9 = puVar9 + 1;
    puVar1 = puVar8;
    puVar8 = puVar8 + 1;
    *puVar2 = *puVar1;
  }
  FUN_1000_a8f4();
  iStack_64 = *(undefined2 *)(iVar6 + 0x131);
  iStack_66 = *(undefined2 *)(iVar6 + 0x12f);
  uStack_68 = 0x1000;
  uStack_6a = 0x6797;
  SETCONJUGATE();
  iStack_64 = *(undefined2 *)(iVar6 + 0x15d);
  iStack_66 = *(undefined2 *)(iVar6 + 0x15b);
  uStack_68 = *(undefined2 *)(iVar6 + 0x161);
  uStack_6a = *(undefined2 *)(iVar6 + 0x15f);
  uStack_6e._2_2_ = 0x1000;
  uStack_6e._0_2_ = 0x67b3;
  SETXYGUNSHIFT();
  iStack_64 = *(undefined2 *)(iVar6 + 0x165);
  iStack_66 = *(undefined2 *)(iVar6 + 0x163);
  uStack_68 = *(undefined2 *)(iVar6 + 0x169);
  uStack_6a = *(undefined2 *)(iVar6 + 0x167);
  uStack_6e._2_2_ = 0x1000;
  uStack_6e._0_2_ = 0x67cf;
  SETXYGUNTILT();
  iStack_64 = *(undefined2 *)(iVar6 + 0x1ce);
  iStack_66 = *(undefined2 *)(iVar6 + 0x1cc);
  uStack_68 = 0x1000;
  uStack_6a = 0x67e1;
  FUN_1000_ada2();
  iStack_64 = 1;
  iStack_66 = 0x1000;
  uStack_68 = 0x67eb;
  SWITCHC3_ROT_CORRECTION();
  iStack_64 = 0x300;
  iStack_66 = 0x400;
  uStack_68 = 0;
  uStack_6a = 0;
  uStack_6e._2_2_ = 5;
  uStack_6e._0_2_ = 0x1000;
  uStack_70 = 0x67fc;
  FUN_1000_af36();
  iStack_64 = 0;
  iStack_66 = 0x1000;
  uStack_68 = 0x6806;
  FUN_1000_d22a();
  iStack_64 = DAT_1008_0888;
  iStack_66 = DAT_1008_0886;
  uStack_68 = DAT_1008_0888;
  uStack_6a = DAT_1008_0886;
  uStack_6e._2_2_ = 0x1000;
  uStack_6e._0_2_ = 0x681c;
  FUN_1000_c6a6();
  iStack_64 = 0x1000;
  iStack_66 = 0x682d;
  DAT_1008_0286 = FUN_1000_0282();
  iStack_64 = 0x1000;
  iStack_66 = 0x6835;
  Ordinal_8();
  iStack_64 = 0x1010;
  iStack_66 = 0x683a;
  Ordinal_7();
  return;
}


// ---- GET_EO_CONFIG @ 1000:6842

void __stdcall16far GET_EO_CONFIG(undefined1 *param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 uVar3;
  undefined2 *puVar4;
  undefined2 uVar5;
  int iVar6;
  undefined2 *puVar7;
  undefined2 extraout_DX;
  undefined1 *puVar8;
  undefined2 uVar9;
  undefined2 unaff_SS;
  undefined4 uVar10;
  undefined1 *puVar11;
  undefined2 uVar12;
  undefined2 uVar13;
  undefined2 uVar14;
  undefined2 uVar15;
  undefined2 uVar16;
  undefined2 uVar17;
  int local_9a [2];
  undefined1 local_96 [4];
  undefined1 local_92 [4];
  undefined1 local_8e [4];
  undefined1 local_8a [4];
  undefined1 local_86 [4];
  undefined1 local_82 [4];
  undefined1 local_7e [4];
  undefined1 local_7a [10];
  undefined1 local_70 [4];
  undefined1 local_6c [4];
  undefined1 local_68 [4];
  undefined1 local_64 [4];
  undefined1 local_60 [4];
  undefined2 local_5c;
  undefined2 local_5a;
  undefined2 local_58;
  undefined2 local_56;
  undefined2 local_54;
  undefined2 local_52;
  undefined2 local_50;
  undefined2 local_4c;
  undefined2 local_4a;
  undefined2 local_48;
  undefined2 local_46;
  undefined1 local_44 [16];
  undefined2 auStack_34 [24];
  int local_4;
  
  uVar17 = 0x1008;
  uVar9 = (undefined2)((ulong)param_1 >> 0x10);
  puVar8 = (undefined1 *)param_1;
  *(float *)(puVar8 + 0x3a0) = (float)DAT_1008_0286;
  *(float *)(puVar8 + 0x3a4) = (float)DAT_1008_0286;
  uVar16 = 0x2a;
  uVar3 = M007_GETSTATE();
  *param_1 = uVar3;
  uVar3 = M007_GETSTATE(0x1010,0x2b,uVar16,uVar17);
  puVar8[1] = uVar3;
  puVar4 = (undefined2 *)M007_GETVALUE(0x1010,local_60);
  uVar16 = puVar4[1];
  *(undefined2 *)(puVar8 + 2) = *puVar4;
  *(undefined2 *)(puVar8 + 4) = uVar16;
  puVar4 = (undefined2 *)M007_GETVALUE(0x1010,local_64);
  uVar16 = puVar4[1];
  *(undefined2 *)(puVar8 + 6) = *puVar4;
  *(undefined2 *)(puVar8 + 8) = uVar16;
  uVar15 = 0x12;
  puVar4 = (undefined2 *)M007_GETVALUE(0x1010,local_68);
  uVar16 = puVar4[1];
  *(undefined2 *)(puVar8 + 10) = *puVar4;
  *(undefined2 *)(puVar8 + 0xc) = uVar16;
  uVar14 = 0x13;
  puVar4 = (undefined2 *)M007_GETVALUE(0x1010,local_6c);
  uVar16 = puVar4[1];
  *(undefined2 *)(puVar8 + 0xe) = *puVar4;
  *(undefined2 *)(puVar8 + 0x10) = uVar16;
  uVar17 = 0x14;
  puVar4 = (undefined2 *)M007_GETVALUE(0x1010,local_70);
  uVar16 = puVar4[1];
  *(undefined2 *)(puVar8 + 0x12) = *puVar4;
  *(undefined2 *)(puVar8 + 0x14) = uVar16;
  local_4 = 0;
  do {
    puVar4 = (undefined2 *)FUN_1000_c5e8(local_4,uVar17,uVar14,uVar15);
    puVar1 = puVar4;
    uVar16 = puVar4[1];
    *(undefined2 *)(puVar8 + local_4 * 4 + 0x16) = *puVar1;
    *(undefined2 *)(puVar8 + local_4 * 4 + 0x18) = uVar16;
    uVar5 = FUN_1000_c60c(local_4);
    *(undefined2 *)(puVar8 + local_4 * 2 + 0x56) = uVar5;
    local_4 = local_4 + 1;
  } while (local_4 < 0x10);
  uVar3 = M007_GETSTATE(0x1000,0x1a);
  puVar8[0x111] = uVar3;
  uVar16 = DAT_1008_08e0;
  *(undefined2 *)(puVar8 + 0xf9) = DAT_1008_08de;
  *(undefined2 *)(puVar8 + 0xfb) = uVar16;
  *(undefined2 *)(puVar8 + 0x105) = 1;
  uVar16 = DAT_1008_0888;
  *(undefined2 *)(puVar8 + 0xfd) = DAT_1008_0886;
  *(undefined2 *)(puVar8 + 0xff) = uVar16;
  uVar16 = DAT_1008_0888;
  *(undefined2 *)(puVar8 + 0x101) = DAT_1008_0886;
  *(undefined2 *)(puVar8 + 0x103) = uVar16;
  uVar3 = M007_GETSTATE(0x1010,0xcc);
  puVar8[0x12e] = uVar3;
  uVar17 = M007_GETSTATE(0x1010,0x15c);
  _WSPRINTF(0x1010,local_7a);
  uVar13 = 0x1000;
  uVar12 = 0x7b26;
  uVar5 = 0x1000;
  uVar15 = 0x7b1e;
  puVar11 = local_7a;
  uVar14 = 0x1010;
  uVar16 = unaff_SS;
  uVar10 = GETLEOINIFILEPATH(0x1010,puVar11);
  WRITEPRIVATEPROFILESTRING(0x1010,uVar10,uVar14,puVar11,uVar16,uVar15,uVar5);
  uVar3 = M007_GETSTATE(0x1010,0x10a,uVar12,uVar13,uVar17);
  puVar8[0x1cb] = uVar3;
  FUN_1000_a938(1);
  FUN_1000_ac02(local_44);
  local_4 = 0;
  do {
    uVar16 = auStack_34[local_4 * 8 + 1];
    *(undefined2 *)(puVar8 + local_4 * 0xe + 0x16b) = auStack_34[local_4 * 8];
    *(undefined2 *)(puVar8 + local_4 * 0xe + 0x16d) = uVar16;
    *(undefined2 *)(puVar8 + local_4 * 0xe + 0x177) = auStack_34[local_4 * 8 + 6];
    uVar16 = auStack_34[local_4 * 8 + 3];
    *(undefined2 *)(puVar8 + local_4 * 0xe + 0x16f) = auStack_34[local_4 * 8 + 2];
    *(undefined2 *)(puVar8 + local_4 * 0xe + 0x171) = uVar16;
    uVar16 = auStack_34[local_4 * 8 + 5];
    *(undefined2 *)(puVar8 + local_4 * 0xe + 0x173) = auStack_34[local_4 * 8 + 4];
    *(undefined2 *)(puVar8 + local_4 * 0xe + 0x175) = uVar16;
    local_4 = local_4 + 1;
  } while (local_4 < 3);
  FUN_1000_a938(0);
  FUN_1000_ac02(local_44);
  local_4 = 0;
  do {
    uVar16 = auStack_34[local_4 * 8 + 1];
    *(undefined2 *)(puVar8 + local_4 * 0xe + 0xcf) = auStack_34[local_4 * 8];
    *(undefined2 *)(puVar8 + local_4 * 0xe + 0xd1) = uVar16;
    *(undefined2 *)(puVar8 + local_4 * 0xe + 0xdb) = auStack_34[local_4 * 8 + 6];
    uVar16 = auStack_34[local_4 * 8 + 3];
    *(undefined2 *)(puVar8 + local_4 * 0xe + 0xd3) = auStack_34[local_4 * 8 + 2];
    *(undefined2 *)(puVar8 + local_4 * 0xe + 0xd5) = uVar16;
    uVar16 = auStack_34[local_4 * 8 + 5];
    *(undefined2 *)(puVar8 + local_4 * 0xe + 0xd7) = auStack_34[local_4 * 8 + 4];
    *(undefined2 *)(puVar8 + local_4 * 0xe + 0xd9) = uVar16;
    local_4 = local_4 + 1;
  } while (local_4 < 3);
  iVar6 = M007_GETSTATE(0x1000,0x10a);
  if (iVar6 == 1) {
    FUN_1000_a938(1);
  }
  FUN_1000_a9b6((int)(char)puVar8[0x111]);
  puVar4 = (undefined2 *)M007_GETVALUE(0x1000,local_7a);
  uVar16 = puVar4[1];
  *(undefined2 *)(puVar8 + 0x76) = *puVar4;
  *(undefined2 *)(puVar8 + 0x78) = uVar16;
  puVar4 = (undefined2 *)M007_GETVALUE(0x1010,local_70);
  uVar16 = puVar4[1];
  *(undefined2 *)(puVar8 + 0x7a) = *puVar4;
  *(undefined2 *)(puVar8 + 0x7c) = uVar16;
  puVar4 = (undefined2 *)M007_GETVALUE(0x1010,local_6c);
  uVar16 = puVar4[1];
  *(undefined2 *)(puVar8 + 0x7e) = *puVar4;
  *(undefined2 *)(puVar8 + 0x80) = uVar16;
  puVar4 = (undefined2 *)M007_GETVALUE(0x1010,local_68);
  uVar16 = puVar4[1];
  *(undefined2 *)(puVar8 + 0x82) = *puVar4;
  *(undefined2 *)(puVar8 + 0x84) = uVar16;
  puVar4 = (undefined2 *)M007_GETVALUE(0x1010,local_64);
  uVar16 = puVar4[1];
  *(undefined2 *)(puVar8 + 0x86) = *puVar4;
  *(undefined2 *)(puVar8 + 0x88) = uVar16;
  puVar4 = (undefined2 *)M007_GETVALUE(0x1010,local_60);
  uVar16 = puVar4[1];
  *(undefined2 *)(puVar8 + 0x8a) = *puVar4;
  *(undefined2 *)(puVar8 + 0x8c) = uVar16;
  local_4 = 0;
  do {
    uVar14 = 0x32;
    puVar4 = (undefined2 *)M007_GETVALUE(0x1010,local_7a);
    iVar6 = local_4;
    uVar16 = puVar4[1];
    *(undefined2 *)(puVar8 + local_4 * 4 + 0x8e) = *puVar4;
    *(undefined2 *)(puVar8 + local_4 * 4 + 0x90) = uVar16;
    uVar17 = 0x33;
    puVar4 = (undefined2 *)M007_GETVALUE(0x1010,local_70);
    uVar16 = puVar4[1];
    *(undefined2 *)(puVar8 + iVar6 * 4 + 0xa2) = *puVar4;
    *(undefined2 *)(puVar8 + iVar6 * 4 + 0xa4) = uVar16;
    local_4 = local_4 + 1;
  } while (local_4 < 5);
  uVar16 = 0xdd;
  M007_GETVALUE(0x1010,local_7a);
  uVar16 = FUN_1000_0282(uVar16,uVar17,uVar14);
  *(undefined2 *)(puVar8 + 0x107) = uVar16;
  uVar16 = 0xde;
  M007_GETVALUE(0x1000,local_70);
  uVar16 = FUN_1000_0282(uVar16);
  *(undefined2 *)(puVar8 + 0x109) = uVar16;
  uVar16 = 0xdf;
  M007_GETVALUE(0x1000,local_6c);
  uVar16 = FUN_1000_0282(uVar16);
  *(undefined2 *)(puVar8 + 0x10b) = uVar16;
  uVar16 = 0xe0;
  M007_GETVALUE(0x1000,local_68);
  uVar16 = FUN_1000_0282(uVar16);
  *(undefined2 *)(puVar8 + 0x10d) = uVar16;
  uVar16 = 0xe1;
  M007_GETVALUE(0x1000,local_64);
  uVar16 = FUN_1000_0282(uVar16);
  *(undefined2 *)(puVar8 + 0x10f) = uVar16;
  puVar4 = (undefined2 *)M007_GETVALUE(0x1000,local_60);
  uVar16 = puVar4[1];
  *(undefined2 *)(puVar8 + 0xb6) = *puVar4;
  *(undefined2 *)(puVar8 + 0xb8) = uVar16;
  puVar4 = (undefined2 *)M007_GETVALUE(0x1010,local_7e);
  uVar16 = puVar4[1];
  *(undefined2 *)(puVar8 + 0xba) = *puVar4;
  *(undefined2 *)(puVar8 + 0xbc) = uVar16;
  uVar5 = 0x4b;
  puVar4 = (undefined2 *)M007_GETVALUE(0x1010,local_82);
  uVar16 = puVar4[1];
  *(undefined2 *)(puVar8 + 0xbe) = *puVar4;
  *(undefined2 *)(puVar8 + 0xc0) = uVar16;
  uVar16 = DAT_1008_08e4;
  *(undefined2 *)(puVar8 + 0xbe) = DAT_1008_08e2;
  *(undefined2 *)(puVar8 + 0xc0) = uVar16;
  uVar15 = 3;
  puVar4 = (undefined2 *)M007_GETVALUE(0x1010,local_86);
  uVar16 = puVar4[1];
  *(undefined2 *)(puVar8 + 0xc2) = *puVar4;
  *(undefined2 *)(puVar8 + 0xc4) = uVar16;
  uVar14 = 0xf6;
  puVar4 = (undefined2 *)M007_GETVALUE(0x1010,local_8a);
  uVar16 = puVar4[1];
  *(undefined2 *)(puVar8 + 0xcb) = *puVar4;
  *(undefined2 *)(puVar8 + 0xcd) = uVar16;
  uVar17 = 0xf5;
  puVar4 = (undefined2 *)M007_GETVALUE(0x1010,local_8e);
  uVar16 = puVar4[1];
  *(undefined2 *)(puVar8 + 199) = *puVar4;
  *(undefined2 *)(puVar8 + 0xc9) = uVar16;
  uVar3 = M007_GETSTATE(0x1010,0x8c,uVar17,uVar14,uVar15,uVar5);
  puVar8[0xc6] = uVar3;
  uVar16 = extraout_DX;
  puVar4 = (undefined2 *)FUN_1000_cb46();
  local_4c = *puVar4;
  local_4a = puVar4[1];
  local_48 = puVar4[2];
  uVar16 = puVar4[3];
  *(undefined2 *)(puVar8 + 0x112) = local_4c;
  *(undefined2 *)(puVar8 + 0x114) = local_4a;
  *(undefined2 *)(puVar8 + 0x116) = local_48;
  *(undefined2 *)(puVar8 + 0x118) = uVar16;
  local_46 = uVar16;
  puVar4 = (undefined2 *)FUN_1000_cb86();
  local_4c = *puVar4;
  local_4a = puVar4[1];
  local_48 = puVar4[2];
  local_46 = puVar4[3];
  *(undefined2 *)(puVar8 + 0x126) = local_4c;
  *(undefined2 *)(puVar8 + 0x128) = local_4a;
  *(undefined2 *)(puVar8 + 0x12a) = local_48;
  *(undefined2 *)(puVar8 + 300) = local_46;
  puVar4 = (undefined2 *)M007_GETVALUE(0x1000,local_92);
  uVar16 = puVar4[1];
  *(undefined2 *)(puVar8 + 0x11a) = *puVar4;
  *(undefined2 *)(puVar8 + 0x11c) = uVar16;
  uVar14 = 0xe9;
  puVar4 = (undefined2 *)M007_GETVALUE(0x1010,local_96);
  uVar16 = puVar4[1];
  *(undefined2 *)(puVar8 + 0x11e) = *puVar4;
  *(undefined2 *)(puVar8 + 0x120) = uVar16;
  uVar17 = 0x2b;
  puVar4 = (undefined2 *)M007_GETVALUE(0x1010,local_9a);
  uVar16 = puVar4[1];
  *(undefined2 *)(puVar8 + 0x122) = *puVar4;
  *(undefined2 *)(puVar8 + 0x124) = uVar16;
  SWITCHEXT_SCAN_CONTROL(1);
  local_4 = 0;
  do {
    local_9a[0] = FUN_1000_cf00(local_4,uVar17,uVar14);
    iVar6 = local_4;
    *(float *)(puVar8 + local_4 * 4 + 0x1a3) = (float)local_9a[0];
    local_9a[0] = FUN_1000_cf16(local_4);
    *(float *)(puVar8 + iVar6 * 4 + 0x1b7) = (float)local_9a[0];
    local_4 = local_4 + 1;
  } while (local_4 < 5);
  SWITCHEXT_SCAN_CONTROL(0);
  local_4 = 0;
  do {
    local_9a[0] = FUN_1000_cf00(local_4);
    iVar6 = local_4;
    *(float *)(puVar8 + local_4 * 4 + 0x133) = (float)local_9a[0];
    local_9a[0] = FUN_1000_cf16(local_4);
    *(float *)(puVar8 + iVar6 * 4 + 0x147) = (float)local_9a[0];
    local_4 = local_4 + 1;
  } while (local_4 < 5);
  puVar4 = (undefined2 *)M007_GETVALUE(0x1000,local_9a);
  uVar16 = puVar4[1];
  *(undefined2 *)(puVar8 + 0x12f) = *puVar4;
  *(undefined2 *)(puVar8 + 0x131) = uVar16;
  uVar16 = DAT_1008_0e64;
  if (DAT_1008_0062 == 1) {
    *(undefined2 *)(puVar8 + 0x15b) = DAT_1008_0e62;
    *(undefined2 *)(puVar8 + 0x15d) = uVar16;
    uVar16 = DAT_1008_0e68;
    *(undefined2 *)(puVar8 + 0x15f) = DAT_1008_0e66;
    *(undefined2 *)(puVar8 + 0x161) = uVar16;
    uVar16 = DAT_1008_0e6c;
    *(undefined2 *)(puVar8 + 0x163) = DAT_1008_0e6a;
    *(undefined2 *)(puVar8 + 0x165) = uVar16;
    uVar16 = DAT_1008_0e6e;
    uVar17 = DAT_1008_0e70;
  }
  else {
    puVar4 = (undefined2 *)M007_GETVALUE(0x1010,local_9a);
    uVar16 = puVar4[1];
    *(undefined2 *)(puVar8 + 0x15b) = *puVar4;
    *(undefined2 *)(puVar8 + 0x15d) = uVar16;
    puVar4 = (undefined2 *)M007_GETVALUE(0x1010,local_96);
    uVar16 = puVar4[1];
    *(undefined2 *)(puVar8 + 0x15f) = *puVar4;
    *(undefined2 *)(puVar8 + 0x161) = uVar16;
    puVar4 = (undefined2 *)M007_GETVALUE(0x1010,local_92);
    uVar16 = puVar4[1];
    *(undefined2 *)(puVar8 + 0x163) = *puVar4;
    *(undefined2 *)(puVar8 + 0x165) = uVar16;
    puVar4 = (undefined2 *)M007_GETVALUE(0x1010,local_8e);
    uVar16 = *puVar4;
    uVar17 = puVar4[1];
  }
  *(undefined2 *)(puVar8 + 0x167) = uVar16;
  *(undefined2 *)(puVar8 + 0x169) = uVar17;
  puVar7 = (undefined2 *)FUN_1000_a916();
  puVar4 = &local_5c;
  for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
    puVar2 = puVar4;
    puVar4 = puVar4 + 1;
    puVar1 = puVar7;
    puVar7 = puVar7 + 1;
    *puVar2 = *puVar1;
  }
  *(undefined2 *)(puVar8 + 0x195) = local_5c;
  *(undefined2 *)(puVar8 + 0x197) = local_5a;
  *(undefined2 *)(puVar8 + 0x199) = local_58;
  *(undefined2 *)(puVar8 + 0x19b) = local_56;
  *(undefined2 *)(puVar8 + 0x19d) = local_54;
  *(undefined2 *)(puVar8 + 0x19f) = local_52;
  *(undefined2 *)(puVar8 + 0x1a1) = local_50;
  puVar4 = (undefined2 *)GET_EMISSION_CENTRE(local_9a);
  uVar16 = puVar4[1];
  *(undefined2 *)(puVar8 + 0x1cc) = *puVar4;
  *(undefined2 *)(puVar8 + 0x1ce) = uVar16;
  return;
}


// ---- FUN_1000_7098 @ 1000:7098

void __cdecl16far FUN_1000_7098(void)

{
  FUN_1000_da32(0x1008);
  SETC1(DAT_1008_08e6,DAT_1008_08e8);
  SETC2(DAT_1008_08e6,DAT_1008_08e8);
  SETC3(DAT_1008_08e6,DAT_1008_08e8);
  SETXYGUNSHIFT(DAT_1008_0886,DAT_1008_0888,DAT_1008_0886,DAT_1008_0888);
  SETXYGUNTILT(DAT_1008_0886,DAT_1008_0888,DAT_1008_0886,DAT_1008_0888);
  return;
}


// ---- EOSTANDBY @ 1000:70fa

void __stdcall16far EOSTANDBY(int param_1)

{
  undefined2 *puVar1;
  int iVar2;
  undefined2 unaff_SS;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined1 local_1e [4];
  undefined1 local_1a [4];
  undefined1 local_16 [4];
  undefined1 local_12 [4];
  undefined1 local_e [4];
  undefined1 local_a [4];
  undefined1 local_6 [4];
  
  if ((param_1 == 1) && (DAT_1008_0062 == 0)) {
    FUN_1000_da32(0x1008);
    uVar5 = 8;
    puVar1 = (undefined2 *)M007_GETVALUE(0x1000,local_6);
    DAT_1008_0ec4 = *puVar1;
    DAT_1008_0ec6 = puVar1[1];
    uVar4 = 9;
    puVar1 = (undefined2 *)M007_GETVALUE(0x1010,local_a);
    DAT_1008_0ec8 = *puVar1;
    DAT_1008_0eca = puVar1[1];
    uVar3 = 0xd;
    puVar1 = (undefined2 *)M007_GETVALUE(0x1010,local_e);
    DAT_1008_0ecc = *puVar1;
    DAT_1008_0ece = puVar1[1];
    iVar2 = M007_GETSTATE(0x1010,0x8c,uVar3,uVar4,uVar5);
    if ((iVar2 != 6) && (iVar2 = M007_GETSTATE(0x1010,0x8c), iVar2 != 8)) {
      puVar1 = (undefined2 *)M007_GETVALUE(0x1010,local_12);
      DAT_1008_0e62 = *puVar1;
      DAT_1008_0e64 = puVar1[1];
      puVar1 = (undefined2 *)M007_GETVALUE(0x1010,local_16);
      DAT_1008_0e66 = *puVar1;
      DAT_1008_0e68 = puVar1[1];
      puVar1 = (undefined2 *)M007_GETVALUE(0x1010,local_1a);
      DAT_1008_0e6a = *puVar1;
      DAT_1008_0e6c = puVar1[1];
      puVar1 = (undefined2 *)M007_GETVALUE(0x1010,local_1e);
      DAT_1008_0e6e = *puVar1;
      DAT_1008_0e70 = puVar1[1];
    }
    uVar3 = 0;
    puVar1 = (undefined2 *)M007_GETVALUE(0x1010,local_1e);
    DAT_1008_0ed0 = *puVar1;
    DAT_1008_0ed2 = puVar1[1];
    iVar2 = M007_GETSTATE(0x1010,0x8c,uVar3);
    if ((iVar2 != 6) && (iVar2 = M007_GETSTATE(0x1010,0x8c), iVar2 != 8)) {
      DAT_1008_0066 = M007_GETSTATE(0x1010,6);
      FUN_1000_a792(0);
    }
    SETC1(DAT_1008_08e6,DAT_1008_08e8);
    SETC2(DAT_1008_08e6,DAT_1008_08e8);
    SETC3(DAT_1008_08e6,DAT_1008_08e8);
    iVar2 = M007_GETSTATE(0x1000,0x8c);
    if ((iVar2 == 6) || (iVar2 = M007_GETSTATE(0x1010,0x8c), iVar2 == 8)) {
      DAT_1008_0020 = 1;
    }
    else {
      SETXYGUNSHIFT(DAT_1008_0886,DAT_1008_0888,DAT_1008_0886,DAT_1008_0888);
      SETXYGUNTILT(DAT_1008_0886,DAT_1008_0888,DAT_1008_0886,DAT_1008_0888);
      DAT_1008_001e = 1;
    }
    CHECKFORBEAMBLANKING();
    DAT_1008_0062 = 1;
    puVar1 = (undefined2 *)M007_GETHIGH(0x1000,local_1e);
    SETMAG(*puVar1,puVar1[1]);
  }
  else {
    if ((param_1 == 0) && (DAT_1008_0062 == 0)) {
      FUN_1000_d068(DAT_1008_0886,DAT_1008_0888);
    }
    if ((param_1 == 0) && (DAT_1008_0062 == 1)) {
      SETC1(DAT_1008_0ec4,DAT_1008_0ec6);
      SETC2(DAT_1008_0ec8,DAT_1008_0eca);
      SETC3(DAT_1008_0ecc,DAT_1008_0ece);
      iVar2 = M007_GETSTATE(0x1000,0x8c);
      if ((iVar2 != 6) && (iVar2 = M007_GETSTATE(0x1010,0x8c), iVar2 != 8)) {
        SETXYGUNSHIFT(DAT_1008_0e66,DAT_1008_0e68,DAT_1008_0e62,DAT_1008_0e64);
        SETXYGUNTILT(DAT_1008_0e6e,DAT_1008_0e70,DAT_1008_0e6a,DAT_1008_0e6c);
      }
      DAT_1008_001e = 0;
      DAT_1008_0020 = 0;
      CHECKFORBEAMBLANKING();
      DAT_1008_0062 = 0;
      FUN_1000_d068(DAT_1008_0886,DAT_1008_0888);
      SETMAG(DAT_1008_0ed0,DAT_1008_0ed2);
      FUN_1000_a792(DAT_1008_0066);
      FUN_1000_da4e();
    }
  }
  return;
}


// ---- SETFOCUSAREA @ 1000:73b6

void __stdcall16far
SETFOCUSAREA(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  FUN_1000_80c2(param_4,param_3,param_2,param_1,0x1008);
  return;
}


// ---- SWITCHSCINT @ 1000:73d8

undefined2 __stdcall16far SWITCHSCINT(void)

{
  return 0x1008;
}


// ---- SWITCHCONJUGATE @ 1000:73e6

void __stdcall16far SWITCHCONJUGATE(undefined2 param_1)

{
  FUN_1000_a88c(param_1,0x1008);
  return;
}


// ---- SWITCHEBBU @ 1000:73fe

void __stdcall16far SWITCHEBBU(int param_1)

{
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  
  uVar2 = 0x1008;
  uVar1 = 0xcc;
  M007_PUTSTATE(unaff_CS,param_1);
  if (param_1 == 0) {
    SWITCHEBBU_IN_USE(0);
  }
  FUN_1000_a938(param_1 == 1,uVar1,uVar2);
  return;
}


// ---- SETCONJUGATE @ 1000:743a

void __stdcall16far SETCONJUGATE(undefined2 param_1,undefined2 param_2)

{
  FUN_1000_a8b8(param_1,param_2,0x1008);
  return;
}


// ---- SETWIDTH @ 1000:7456

undefined2 __stdcall16far SETWIDTH(void)

{
  return 0x1008;
}


// ---- SETHEIGHT @ 1000:7464

undefined2 __stdcall16far SETHEIGHT(void)

{
  return 0x1008;
}


// ---- SETSCANYSCALING @ 1000:7472

undefined2 __stdcall16far SETSCANYSCALING(void)

{
  return 0x1008;
}


// ---- SETTILT_AXIS @ 1000:7480

undefined2 __stdcall16far SETTILT_AXIS(void)

{
  return 0x1008;
}


// ---- SET_OPTIBEAM_EHT @ 1000:748e

undefined2 __stdcall16far SET_OPTIBEAM_EHT(void)

{
  return 0x1008;
}


// ---- SWITCHLOW_MAG @ 1000:749c

void __stdcall16far SWITCHLOW_MAG(int param_1)

{
  float fVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  float *pfVar4;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 local_e;
  undefined2 uStack_c;
  undefined2 local_a [2];
  undefined1 local_6 [4];
  
  uVar7 = 0x1008;
  uVar6 = 0xb7;
  M007_PUTSTATE(unaff_CS,param_1);
  if (param_1 == 1) {
    uVar5 = 0;
    puVar2 = (undefined2 *)M007_GETVALUE(0x1010,local_6);
    DAT_1008_0068 = (float)CONCAT22(puVar2[1],*puVar2);
    puVar2 = (undefined2 *)&DAT_1008_00e6;
    puVar3 = (undefined2 *)M007_GETVALUE(0x1010,local_a);
    uStack_c = puVar3[1];
    local_e = *puVar3;
  }
  else {
    uVar5 = 0xe6;
    puVar2 = local_a;
    pfVar4 = (float *)M007_GETVALUE(0x1010,puVar2);
    fVar1 = DAT_1008_0068;
    if (DAT_1008_0068 <= *pfVar4) {
      puVar2 = (undefined2 *)&DAT_1008_00e6;
      pfVar4 = (float *)M007_GETVALUE(0x1010,local_6);
      fVar1 = *pfVar4;
    }
    uStack_c = (undefined2)((ulong)fVar1 >> 0x10);
    local_e = SUB42(fVar1,0);
  }
  FUN_1000_be76(local_e,uStack_c,puVar2,uVar5,uVar6,uVar7);
  return;
}


// ---- SETXTALK12 @ 1000:753c

void __stdcall16far SETXTALK12(undefined2 param_1,undefined2 param_2)

{
  FUN_1000_9366(param_1,param_2,0x1008);
  return;
}


// ---- SETXTALK21 @ 1000:7558

void __stdcall16far SETXTALK21(undefined2 param_1,undefined2 param_2)

{
  FUN_1000_93a4(param_1,param_2,0x1008);
  return;
}


// ---- DOCOMMANDSET_PLANEA @ 1000:7574

void __cdecl16far DOCOMMANDSET_PLANEA(void)

{
  FUN_1000_e354(0,0x1008);
  FUN_1000_ed7c(0,4);
  FUN_1000_e354(1);
  return;
}


// ---- DOCOMMANDCLR_PLANEA @ 1000:759c

void __cdecl16far DOCOMMANDCLR_PLANEA(void)

{
  FUN_1000_e354(0,0x1008);
  FUN_1000_ed7c(0,5);
  FUN_1000_e354(1);
  return;
}


// ---- DOCOMMANDSET_PLANEB @ 1000:75c4

void __cdecl16far DOCOMMANDSET_PLANEB(void)

{
  FUN_1000_e354(0,0x1008);
  FUN_1000_ed7c(0,2);
  FUN_1000_e354(1);
  return;
}


// ---- DOCOMMANDCLR_PLANEB @ 1000:75ec

void __cdecl16far DOCOMMANDCLR_PLANEB(void)

{
  undefined2 uVar1;
  int iVar2;
  undefined1 extraout_AH;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined1 local_4;
  
  uVar5 = 0x1008;
  local_4 = 3;
  uVar4 = 0x1e;
  uVar3 = 0x7601;
  uVar1 = M007_GETSTATE();
  switch(uVar1) {
  case 0:
  case 3:
    break;
  case 1:
    uVar3 = 0x1000;
    iVar2 = M007_GETSTATE(0x1000,0xa3,uVar4,uVar5);
    if (iVar2 != 1) {
      uVar3 = 100;
      iVar2 = M007_GETSTATE(0x1010,100);
      if ((iVar2 == 0) || (iVar2 == 4)) {
        local_4 = 0x23;
      }
      else {
        local_4 = 0x33;
      }
      goto switchD_1000_767c_default;
    }
    break;
  case 2:
    uVar3 = 0x1000;
    iVar2 = M007_GETSTATE(0x1000,0xa3,uVar4,uVar5);
    if (iVar2 != 1) {
      uVar3 = 100;
      iVar2 = M007_GETSTATE(0x1010,100);
      if (iVar2 == 0) {
LAB_1000_765c:
        local_4 = 0x43;
      }
      else {
        if (iVar2 == 1) {
LAB_1000_7662:
          local_4 = 0x53;
          goto switchD_1000_767c_default;
        }
        if (iVar2 != 2) {
          if (iVar2 == 4) goto LAB_1000_765c;
          if (iVar2 == 5) goto LAB_1000_7662;
          if (iVar2 != 6) {
            local_4 = 0x73;
            goto switchD_1000_767c_default;
          }
        }
        local_4 = 99;
      }
      goto switchD_1000_767c_default;
    }
    break;
  case 4:
  case 5:
    local_4 = 0x83;
  default:
    goto switchD_1000_767c_default;
  }
  local_4 = 0x13;
switchD_1000_767c_default:
  FUN_1000_e354(0,uVar3);
  FUN_1000_ed7c(0,CONCAT11(extraout_AH,local_4));
  FUN_1000_e354(1);
  return;
}


// ---- DOCOMMANDSET_STEREO @ 1000:76ae

void __cdecl16far DOCOMMANDSET_STEREO(void)

{
  FUN_1000_e354(0,0x1008);
  FUN_1000_ed7c(0,0);
  FUN_1000_e354(1);
  return;
}


// ---- DOCOMMANDCLR_STEREO @ 1000:76d6

void __cdecl16far DOCOMMANDCLR_STEREO(void)

{
  FUN_1000_e354(0,0x1008);
  FUN_1000_ed7c(0,1);
  FUN_1000_e354(1);
  return;
}


// ---- DOCOMMANDC1_REVERSE @ 1000:76fe

void __cdecl16far DOCOMMANDC1_REVERSE(void)

{
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  
  uVar2 = 0x1008;
  uVar1 = 0xbe;
  M007_PUTSTATE(unaff_CS,2);
  FUN_1000_93e2(uVar1,uVar2);
  M007_PUTSTATE(0x1000,1);
  return;
}


// ---- DOCOMMANDC2_REVERSE @ 1000:7724

void __cdecl16far DOCOMMANDC2_REVERSE(void)

{
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  
  uVar2 = 0x1008;
  uVar1 = 0xbf;
  M007_PUTSTATE(unaff_CS,2);
  FUN_1000_940a(uVar1,uVar2);
  M007_PUTSTATE(0x1000,1);
  return;
}


// ---- DOCOMMANDC1_NORMAL @ 1000:774a

void __cdecl16far DOCOMMANDC1_NORMAL(void)

{
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  
  uVar2 = 0x1008;
  uVar1 = 0xbe;
  M007_PUTSTATE(unaff_CS,3);
  FUN_1000_93f6(uVar1,uVar2);
  M007_PUTSTATE(0x1000,0);
  return;
}


// ---- DOCOMMANDC2_NORMAL @ 1000:7770

void __cdecl16far DOCOMMANDC2_NORMAL(void)

{
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  
  uVar2 = 0x1008;
  uVar1 = 0xbf;
  M007_PUTSTATE(unaff_CS,3);
  FUN_1000_941e(uVar1,uVar2);
  M007_PUTSTATE(0x1000,0);
  return;
}


// ---- SEVENBITMODE @ 1000:7796

void __stdcall16far SEVENBITMODE(undefined1 param_1,undefined1 param_2)

{
  FUN_1000_ed58(CONCAT11(0x10,param_2),CONCAT11(0x10,param_1),0x1008);
  return;
}


// ---- SWITCHFIXED_APERTURE @ 1000:77b4

void __stdcall16far SWITCHFIXED_APERTURE(int param_1)

{
  int iVar1;
  undefined2 unaff_CS;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x10a;
  M007_PUTSTATE(unaff_CS,param_1);
  FUN_1000_a938(param_1 == 1,uVar2,uVar3);
  uVar2 = M007_GETSTATE(0x1000,0x1a);
  FUN_1000_a9b6(uVar2);
  iVar1 = M007_GETSTATE(0x1000,0x8c);
  if (iVar1 == 3) {
    if (param_1 == 0) {
      FUN_1000_ef54(1);
      SWITCHVAC_MODE(0x1000,0);
    }
    else {
      FUN_1000_ef54(2);
    }
    SETXYBEAMSHIFT(DAT_1008_0886,DAT_1008_0888,DAT_1008_0886,DAT_1008_0888);
  }
  else {
    FUN_1000_ef54(0);
  }
  return;
}


// ---- READ_COLUMN_CAL_DATA @ 1000:783a

undefined2 __stdcall16far READ_COLUMN_CAL_DATA(undefined2 param_1,undefined2 param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x8c;
  iVar1 = M007_GETSTATE();
  if ((iVar1 != 3) && (iVar1 = M007_GETSTATE(0x1010,0x8c,uVar2,uVar3), iVar1 != 1)) {
    return 0xffff;
  }
  Ordinal_2139(0x1010,param_1,param_2);
  return 0;
}


// ---- DOCOMMANDEO_RESET_CAL @ 1000:7872

undefined2 __cdecl16far DOCOMMANDEO_RESET_CAL(void)

{
  return 0x1008;
}


// ---- Z130_GET_COVARIANCE @ 1000:787e

undefined2 * __stdcall16far
Z130_GET_COVARIANCE(undefined2 *param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
                   undefined2 param_5,undefined2 param_6,undefined2 param_7,undefined2 param_8)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  undefined2 in_DX;
  undefined2 unaff_SS;
  
  puVar2 = (undefined2 *)
           FUN_1000_24c6(param_7,param_8,param_6,param_4,param_5,param_2,param_3,0x1008);
  uVar1 = puVar2[1];
  *param_1 = *puVar2;
  param_1[1] = uVar1;
  return param_1;
}


// ---- DOCOMMANDCAL_JOYSTICK @ 1000:78c4

undefined2 __cdecl16far DOCOMMANDCAL_JOYSTICK(void)

{
  return 0x1008;
}


// ---- SETWATER_TEMP_LIMIT @ 1000:78d0

void __stdcall16far SETWATER_TEMP_LIMIT(undefined4 param_1)

{
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined4 uVar1;
  undefined1 *puVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 local_10;
  undefined2 uStack_e;
  undefined1 local_c [10];
  
  uVar5 = 0x1008;
  uVar4 = 400;
  uStack_e = (undefined2)((ulong)param_1 >> 0x10);
  local_10 = (undefined2)param_1;
  M007_PUTVALUE(unaff_CS,local_10,uStack_e);
  FUN_1000_0282(uVar4,uVar5);
  _WSPRINTF(0x1000,local_c);
  uVar3 = 0x1000;
  uVar5 = 0x7b30;
  puVar2 = local_c;
  uVar4 = 0x1010;
  uVar1 = GETLEOINIFILEPATH(0x1010,puVar2);
  WRITEPRIVATEPROFILESTRING(0x1010,uVar1,uVar4,puVar2,unaff_SS,uVar5,uVar3);
  return;
}


// ---- EORESUMEOPERATION @ 1000:7936

undefined2 __cdecl16far EORESUMEOPERATION(void)

{
  return 0x1008;
}


// ---- EOSUSPENDOPERATION @ 1000:7942

undefined2 __cdecl16far EOSUSPENDOPERATION(void)

{
  return 0x1008;
}


// ---- SETHARDPANELKNOB @ 1000:794e

undefined2 __stdcall16far SETHARDPANELKNOB(void)

{
  return 0x1008;
}


// ---- CONFIGURE_HARD_PANEL @ 1000:795c

undefined2 __cdecl16far CONFIGURE_HARD_PANEL(void)

{
  return 0x1008;
}


// ---- CALC_IMAGE_PIXEL_SIZE @ 1000:7968

void __cdecl16far CALC_IMAGE_PIXEL_SIZE(void)

{
  float fVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined1 local_a [4];
  undefined4 local_6;
  
  uVar5 = 0x1008;
  uVar4 = 0x80;
  puVar2 = (undefined2 *)M007_GETVALUE(unaff_CS,local_a);
  local_6 = (float)CONCAT22(puVar2[1],*puVar2);
  iVar3 = M007_GETSTATE(0x1010,99,uVar4,uVar5);
  if ((iVar3 != 0) &&
     (((fVar1 = DAT_1008_08ee, iVar3 == 1 || (fVar1 = DAT_1008_08f2, iVar3 == 2)) ||
      (fVar1 = DAT_1008_08f6, iVar3 == 3)))) {
    local_6 = fVar1 * local_6;
  }
  M007_PUTVALUE(0x1010,(undefined2)local_6,local_6._2_2_);
  return;
}


// ---- SWITCHMIX_DELAY @ 1000:79d4

undefined2 __stdcall16far SWITCHMIX_DELAY(void)

{
  return 0x1008;
}


// ---- DOCOMMANDEO_SELF_TEST @ 1000:79e2

undefined2 __cdecl16far DOCOMMANDEO_SELF_TEST(void)

{
  return 0x1008;
}


// ---- SWITCHUSE_REF_MAG @ 1000:79ee

void __stdcall16far SWITCHUSE_REF_MAG(undefined2 param_1)

{
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  
  uVar2 = 0x1008;
  uVar1 = 0x14b;
  M007_PUTSTATE(unaff_CS,param_1);
  uVar1 = M007_GETSTATE(0x1010,0x2c,uVar1,uVar2);
  FUN_1000_bfa6(uVar1);
  return;
}


// ---- STAGEMAGCOMPENSATETRIGGER @ 1000:7a16

void __cdecl16far STAGEMAGCOMPENSATETRIGGER(void)

{
  FUN_1000_d068(DAT_1008_0886,DAT_1008_0888,0x1008);
  return;
}


// ---- SETSPOT_X_CAL @ 1000:7a32

void __stdcall16far SETSPOT_X_CAL(float param_1)

{
  int iVar1;
  undefined2 *puVar2;
  undefined2 unaff_SS;
  undefined4 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  undefined6 uVar9;
  undefined8 uVar8;
  undefined2 uVar10;
  undefined1 local_1e [4];
  undefined1 local_1a [4];
  undefined1 local_16 [20];
  
  uVar10 = 0x1008;
  uVar5 = (undefined2)((qword)(double)param_1 >> 0x30);
  _WSPRINTF();
  uVar9 = (undefined6)(CONCAT44((long)(CONCAT26(uVar5,0x100000000000) >> 0x20),0x7b480000) >> 0x10);
  puVar6 = local_16;
  uVar7 = CONCAT22(0x7b3e,unaff_SS);
  uVar5 = 0x1010;
  uVar3 = GETLEOINIFILEPATH(0x1010,puVar6);
  WRITEPRIVATEPROFILESTRING(0x1010,uVar3,uVar5,puVar6,uVar7);
  uVar8 = CONCAT62(uVar9,0x1be);
  M007_PUTVALUE(0x1010,param_1);
  uVar5 = 0x21;
  iVar1 = M007_GETSTATE(0x1010,0x21,uVar8,uVar10);
  if (iVar1 == 1) {
    uVar3 = CONCAT22(uVar5,0x44);
    puVar2 = (undefined2 *)M007_GETVALUE(0x1010,local_1e);
    uVar5 = puVar2[1];
    uVar10 = *puVar2;
    uVar4 = 0x45;
    puVar2 = (undefined2 *)M007_GETVALUE(0x1010,local_1a);
    Ordinal_23(0x1010,*puVar2,puVar2[1],uVar4,uVar10,uVar5,uVar3);
  }
  return;
}


// ---- SWITCHEBBU_IN_USE @ 1000:7ad2

void __stdcall16far SWITCHEBBU_IN_USE(int param_1)

{
  undefined2 unaff_CS;
  
  M007_PUTSTATE(unaff_CS,param_1);
  if (param_1 == 0) {
    SWITCHCONJUGATE(0);
  }
  return;
}


// ---- SWITCHSTIG_CAL_N @ 1000:7af8

void __stdcall16far SWITCHSTIG_CAL_N(undefined2 param_1)

{
  undefined2 unaff_CS;
  
  M007_PUTSTATE(unaff_CS,param_1);
  return;
}


// ---- UPDATESCANCAL @ 1000:7b12

undefined2 __cdecl16far UPDATESCANCAL(void)

{
  return 0x1008;
}


// ---- FUN_1000_7b4e @ 1000:7b4e

undefined2 __cdecl16far FUN_1000_7b4e(void)

{
  return 0x1008;
}


// ---- FUN_1000_7b5a @ 1000:7b5a

undefined2 __cdecl16far FUN_1000_7b5a(void)

{
  return 0x1008;
}


// ---- FUN_1000_7b66 @ 1000:7b66

undefined2 __cdecl16far FUN_1000_7b66(void)

{
  return 0x1008;
}


// ---- FUN_1000_7b72 @ 1000:7b72

undefined2 __cdecl16far FUN_1000_7b72(void)

{
  return 0x1008;
}


// ---- FUN_1000_7b7e @ 1000:7b7e

void __cdecl16far FUN_1000_7b7e(void)

{
  undefined2 *puVar1;
  undefined2 unaff_SS;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined1 local_16 [4];
  undefined1 local_12 [4];
  undefined1 local_e [4];
  undefined1 local_a [4];
  undefined1 local_6 [4];
  
  FUN_1000_8552(1,2,0x1008);
  M007_PUTSTATE(0x1000,2);
  uVar5 = 0x34;
  puVar1 = (undefined2 *)M007_GETVALUE(0x1010,local_6);
  DAT_1008_0ee0 = *puVar1;
  DAT_1008_0ee2 = puVar1[1];
  uVar4 = 0x35;
  puVar1 = (undefined2 *)M007_GETVALUE(0x1010,local_a);
  DAT_1008_0ee4 = *puVar1;
  DAT_1008_0ee6 = puVar1[1];
  uVar3 = 0x36;
  puVar1 = (undefined2 *)M007_GETVALUE(0x1010,local_e);
  DAT_1008_0ee8 = *puVar1;
  DAT_1008_0eea = puVar1[1];
  uVar2 = 0x37;
  puVar1 = (undefined2 *)M007_GETVALUE(0x1010,local_12);
  DAT_1008_0eec = *puVar1;
  DAT_1008_0eee = puVar1[1];
  DAT_1008_0ed4 = M007_GETSTATE(0x1010,0x1e,uVar2,uVar3,uVar4,uVar5);
  DAT_1008_0eda = M007_GETSTATE(0x1010,0xb0);
  if (DAT_1008_0ef4 == 1) {
    FUN_1000_a88c(0);
    FUN_1000_e44c();
    FUN_1000_a7da();
    DAT_1008_0ed8 = M007_GETSTATE(0x1000,0x11);
    FUN_1000_ae9e(2);
    Ordinal_12(0x1000);
    puVar1 = (undefined2 *)M007_GETVALUE(0x1010,local_16);
    DAT_1008_0ef0 = *puVar1;
    DAT_1008_0ef2 = puVar1[1];
    SETEOEMISSION(DAT_1008_08fa,DAT_1008_08fc);
    return;
  }
  SUSPEND_AUTO_VIDEO_LEVEL(0x1010);
  FUN_1000_e44c();
  uVar2 = 0xd;
  puVar1 = (undefined2 *)M007_GETVALUE(0x1000,local_16);
  DAT_1008_0edc = *puVar1;
  DAT_1008_0ede = puVar1[1];
  FUN_1000_a7da(uVar2);
  DAT_1008_0ed8 = M007_GETSTATE(0x1000,0x11);
  FUN_1000_ae9e(2);
  Ordinal_34(0x1000,0x10,0x400,0x180,0);
  return;
}


// ---- FUN_1000_7cc8 @ 1000:7cc8

void __cdecl16far FUN_1000_7cc8(void)

{
  undefined2 uVar1;
  
  if (DAT_1008_0ef4 == 1) {
    FUN_1000_e468(0x1008);
    FUN_1000_a806();
    FUN_1000_a88c(DAT_1008_0eda);
    FUN_1000_ae9e(DAT_1008_0ed8);
    SETEOEMISSION(DAT_1008_0ef0,DAT_1008_0ef2);
  }
  else {
    FUN_1000_e468(0x1008);
    FUN_1000_9b44(DAT_1008_0edc,DAT_1008_0ede);
    FUN_1000_a806();
    FUN_1000_ae9e(DAT_1008_0ed8);
  }
  uVar1 = 0x1000;
  switch(DAT_1008_0ed4) {
  case 0:
    uVar1 = 0x1010;
    Ordinal_7(0x1000);
    break;
  case 1:
    uVar1 = 0x1010;
    Ordinal_8(0x1000);
    break;
  case 2:
    uVar1 = 0x1010;
    Ordinal_9(0x1000);
    break;
  case 3:
    Ordinal_7(0x1000);
    uVar1 = 0x1010;
    Ordinal_12(0x1010);
    break;
  case 4:
    uVar1 = 0x1010;
    Ordinal_10(0x1000);
    break;
  case 5:
    uVar1 = 0x1010;
    Ordinal_11(0x1000);
  }
  if (DAT_1008_0ef4 != 1) {
    RESUME_AUTO_VIDEO_LEVEL(uVar1);
  }
  FUN_1000_8552(0,3);
  uVar1 = 0x77;
  M007_PUTSTATE(0x1000,0);
  FUN_1000_856a(uVar1);
  return;
}


// ---- FUN_1000_7da0 @ 1000:7da0

void __cdecl16far FUN_1000_7da0(void)

{
  FUN_1000_8a9e(DAT_1008_0ee8,DAT_1008_0eea,0x1008);
  FUN_1000_8ab8(DAT_1008_0eec,DAT_1008_0eee);
  FUN_1000_8a6a(DAT_1008_0ee0,DAT_1008_0ee2);
  FUN_1000_8a84(DAT_1008_0ee4,DAT_1008_0ee6);
  return;
}


// ---- FUN_1000_7dec @ 1000:7dec

void __cdecl16far FUN_1000_7dec(void)

{
  DAT_1008_0ef4 = 2;
  FUN_1000_7b7e(0x1008);
  FUN_1000_e484();
  return;
}


// ---- FUN_1000_7e08 @ 1000:7e08

void __cdecl16far FUN_1000_7e08(void)

{
  DAT_1008_0ef4 = 1;
  FUN_1000_7b7e(0x1008);
  FUN_1000_e4a0();
  return;
}


// ---- FUN_1000_7e24 @ 1000:7e24

void __cdecl16far FUN_1000_7e24(void)

{
  DAT_1008_0ef4 = 0;
  FUN_1000_7b7e(0x1008);
  FUN_1000_e4bc();
  return;
}


// ---- FUN_1000_7e40 @ 1000:7e40

void __cdecl16far FUN_1000_7e40(undefined2 param_1)

{
  switch(param_1) {
  case 0:
  case 4:
    DOCOMMANDFRAME_INT(0x1000);
    return;
  case 1:
  case 3:
    DOCOMMANDLINE_INT(0x1000);
    return;
  case 2:
    DOCOMMANDFRAME_AVERAGE(0x1000);
    return;
  case 5:
    DOCOMMANDLINE_AVG(0x1000,0x1008);
    return;
  default:
    return;
  }
}


// ---- FUN_1000_7e8a @ 1000:7e8a

void __cdecl16far FUN_1000_7e8a(int param_1)

{
  undefined2 unaff_CS;
  undefined2 in_stack_0000ffd2;
  undefined2 in_stack_0000ffd4;
  undefined2 in_stack_0000ffd6;
  undefined2 in_stack_0000ffd8;
  undefined2 uVar1;
  undefined2 uVar2;
  undefined1 local_1a [4];
  undefined1 local_16 [4];
  undefined1 local_12 [4];
  undefined1 local_e [4];
  undefined2 local_a;
  undefined2 local_8;
  undefined2 local_6;
  undefined2 local_4;
  
  if ((param_1 == 0) || (param_1 == 1)) {
    uVar2 = 0x300;
  }
  else if ((param_1 == 2) || (param_1 == 4)) {
    uVar2 = 0x180;
  }
  else {
    if (param_1 != 5) {
      return;
    }
    uVar2 = 0x4c;
    M007_GETVALUE(unaff_CS,local_e);
    local_4 = FUN_1000_0282(uVar2);
    uVar2 = 0x4d;
    M007_GETVALUE(0x1000,local_12);
    local_6 = FUN_1000_0282(uVar2);
    uVar2 = 0x4e;
    M007_GETVALUE(0x1000,local_16);
    in_stack_0000ffd6 = FUN_1000_0282(uVar2);
    uVar1 = 0;
    in_stack_0000ffd4 = 0x4f;
    in_stack_0000ffd8 = local_6;
    uVar2 = local_4;
    local_a = in_stack_0000ffd6;
    M007_GETVALUE(0x1000,local_1a);
    in_stack_0000ffd2 =
         FUN_1000_0282(in_stack_0000ffd4,in_stack_0000ffd6,in_stack_0000ffd8,uVar2,uVar1);
    local_8 = in_stack_0000ffd2;
  }
  SETEOCOLUMNSCAN(in_stack_0000ffd2,in_stack_0000ffd4,in_stack_0000ffd6,in_stack_0000ffd8,uVar2);
  return;
}


// ---- FUN_1000_7f54 @ 1000:7f54

void __cdecl16far FUN_1000_7f54(void)

{
  undefined2 *puVar1;
  undefined2 unaff_SS;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined1 local_a [4];
  int local_6;
  undefined2 local_4;
  
  FUN_1000_8552(1,0,0x1008);
  uVar3 = 0x77;
  M007_PUTSTATE(0x1000,1);
  DAT_1008_140a = M007_GETSTATE(0x1010,0x1e,uVar3);
  DAT_1008_140c = M007_GETSTATE(0x1010,0x1f);
  DAT_1008_140e = M007_GETSTATE(0x1010,0x20);
  DAT_1008_1418 = M007_GETSTATE(0x1010,0x11);
  DAT_1008_1416 = M007_GETSTATE(0x1010,0x5d);
  uVar2 = 0xe3;
  uVar3 = 0x1010;
  puVar1 = (undefined2 *)M007_GETVALUE(0x1010,local_a);
  DAT_1008_141a = *puVar1;
  DAT_1008_141c = puVar1[1];
  if (DAT_1008_1418 < 2) {
    uVar3 = 0x1000;
    FUN_1000_ae9e(2,uVar2);
  }
  local_4 = DAT_1008_0094;
  local_6 = DAT_1008_0096;
  if (DAT_1008_140a == 1) {
    if (0x200 < DAT_1008_0094) {
      local_4 = DAT_1008_0094 + -0x200;
    }
    local_4 = CONCAT11(local_4._1_1_ + '\x01',(undefined1)local_4);
  }
  if (DAT_1008_140a == 2) {
    if (0x200 < local_4) {
      local_4 = local_4 + -0x200;
    }
    local_4 = CONCAT11(local_4._1_1_ + '\x01',(undefined1)local_4);
    if (0x180 < DAT_1008_0096) {
      local_6 = DAT_1008_0096 + -0x180;
    }
    local_6 = local_6 + 0xc0;
  }
  Ordinal_34(uVar3,DAT_1008_009a,DAT_1008_0098,local_6,local_4);
  uVar3 = DAT_1008_0900;
  SETLINE_AVERAGE_COUNT(0x1010,DAT_1008_08fe);
  DOCOMMANDLINE_AVG(0x1010,uVar3);
  SUSPEND_AUTO_VIDEO_LEVEL(0x1010);
  return;
}


// ---- FUN_1000_8048 @ 1000:8048

void __cdecl16far FUN_1000_8048(void)

{
  undefined2 uVar1;
  undefined2 uVar2;
  
  FUN_1000_ae9e(10,0x1008);
  FUN_1000_7e8a(DAT_1008_140a);
  uVar1 = 0x1000;
  FUN_1000_ae9e(DAT_1008_1418);
  if (DAT_1008_140c == 1) {
    uVar1 = 0x1010;
    Ordinal_13(0x1000,1);
  }
  uVar2 = uVar1;
  if (DAT_1008_140e == 1) {
    uVar2 = 0x1010;
    SWITCHWINDOWING(uVar1,1);
  }
  uVar1 = DAT_1008_141c;
  SETLINE_AVERAGE_COUNT(uVar2,DAT_1008_141a);
  FUN_1000_7e40(DAT_1008_1416,uVar1);
  RESUME_AUTO_VIDEO_LEVEL(0x1000);
  FUN_1000_8552(0,3);
  uVar1 = 0x77;
  M007_PUTSTATE(0x1000,0);
  FUN_1000_856a(uVar1);
  return;
}


// ---- FUN_1000_80c2 @ 1000:80c2

void __cdecl16far
FUN_1000_80c2(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  DAT_1008_0094 = param_1;
  DAT_1008_0096 = param_2;
  DAT_1008_0098 = param_3;
  DAT_1008_009a = param_4;
  return;
}


// ---- FE_AUTOFOCUS_START_TICK @ 1000:8116

undefined2 __stdcall16far FE_AUTOFOCUS_START_TICK(void)

{
  return 0x1008;
}


// ---- FUN_1000_8218 @ 1000:8218

void __cdecl16far FUN_1000_8218(void)

{
  undefined2 uVar1;
  undefined2 uVar2;
  
  FUN_1000_7e8a(DAT_1008_140a,0x1008);
  uVar1 = 0x1000;
  FUN_1000_ae9e(DAT_1008_1418);
  if (DAT_1008_140c == 1) {
    uVar1 = 0x1010;
    Ordinal_13(0x1000,1);
  }
  uVar2 = uVar1;
  if (DAT_1008_140e == 1) {
    uVar2 = 0x1010;
    SWITCHWINDOWING(uVar1,1);
  }
  uVar1 = DAT_1008_141c;
  SETLINE_AVERAGE_COUNT(uVar2,DAT_1008_141a);
  FUN_1000_7e40(DAT_1008_1416,uVar1);
  RESUME_AUTO_VIDEO_LEVEL(0x1000);
  FUN_1000_8552(0,3);
  uVar2 = 0x77;
  M007_PUTSTATE(0x1000,0);
  uVar1 = 0xd7;
  M007_PUTSTATE(0x1010,0);
  FUN_1000_856a(uVar1,uVar2);
  return;
}


// ---- FUN_1000_8388 @ 1000:8388

void __cdecl16far FUN_1000_8388(void)

{
  undefined2 uVar1;
  undefined2 uVar2;
  
  FUN_1000_7e8a(DAT_1008_140a,0x1008);
  uVar1 = 0x1000;
  FUN_1000_ae9e(DAT_1008_1418);
  if (DAT_1008_140c == 1) {
    uVar1 = 0x1010;
    Ordinal_13(0x1000,1);
  }
  uVar2 = uVar1;
  if (DAT_1008_140e == 1) {
    uVar2 = 0x1010;
    SWITCHWINDOWING(uVar1,1);
  }
  uVar1 = DAT_1008_141c;
  SETLINE_AVERAGE_COUNT(uVar2,DAT_1008_141a);
  FUN_1000_7e40(DAT_1008_1416,uVar1);
  RESUME_AUTO_VIDEO_LEVEL(0x1000);
  FUN_1000_8552(0,3);
  uVar1 = 0x77;
  M007_PUTSTATE(0x1000,0);
  FUN_1000_856a(uVar1);
  return;
}


// ---- FUN_1000_8552 @ 1000:8552

void __cdecl16far FUN_1000_8552(undefined2 param_1,undefined2 param_2)

{
  DAT_1008_009e = param_1;
  DAT_1008_00a0 = param_2;
  return;
}


// ---- FUN_1000_856a @ 1000:856a

void __cdecl16far FUN_1000_856a(void)

{
  DAT_1008_009c = 0;
  return;
}


// ---- FUN_1000_857c @ 1000:857c

void __cdecl16far FUN_1000_857c(void)

{
  if (DAT_1008_009e != 1) {
    return;
  }
  DAT_1008_009e = FUN_1000_e84c(0x1008);
  if (DAT_1008_009e != 2) goto LAB_1000_85b8;
  if (DAT_1008_00a0 != 0) {
    if (DAT_1008_00a0 == 1) {
      FUN_1000_89ce();
      goto LAB_1000_85b8;
    }
    if (DAT_1008_00a0 == 2) {
      FUN_1000_7cc8();
      goto LAB_1000_85b8;
    }
    if (DAT_1008_00a0 == 4) {
      FUN_1000_8388();
      goto LAB_1000_85b8;
    }
    if (DAT_1008_00a0 == 5) {
      FUN_1000_8218();
      goto LAB_1000_85b8;
    }
    if (DAT_1008_00a0 == 6) {
      FUN_1000_87da();
      goto LAB_1000_85b8;
    }
  }
  FUN_1000_8048();
LAB_1000_85b8:
  if (DAT_1008_009e != 3) {
    return;
  }
  if (DAT_1008_00a0 != 0) {
    if (DAT_1008_00a0 == 1) {
      FUN_1000_8a48();
      FUN_1000_89ce();
      return;
    }
    if (DAT_1008_00a0 == 2) {
      FUN_1000_7da0();
      FUN_1000_7cc8();
      return;
    }
    if (DAT_1008_00a0 == 4) {
      FUN_1000_8388();
      return;
    }
    if (DAT_1008_00a0 == 5) {
      FUN_1000_8218();
      return;
    }
    if (DAT_1008_00a0 == 6) {
      FUN_1000_87da();
      return;
    }
  }
  FUN_1000_8048();
  return;
}


// ---- FUN_1000_87da @ 1000:87da

void __cdecl16far FUN_1000_87da(void)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  undefined2 unaff_SS;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined1 local_a [4];
  undefined1 local_6 [4];
  
  uVar5 = 0x1008;
  FUN_1000_ae9e(10,0x1008);
  if (DAT_1008_1422 == 3) {
    Ordinal_12(0x1000);
  }
  else {
    FUN_1000_7e8a(DAT_1008_1422);
  }
  uVar2 = 0x1000;
  FUN_1000_ae9e(DAT_1008_142a,uVar5);
  if (DAT_1008_1424 == 1) {
    uVar2 = 0x1010;
    Ordinal_13(0x1000,1);
  }
  uVar5 = uVar2;
  if (DAT_1008_1426 == 1) {
    uVar5 = 0x1010;
    SWITCHWINDOWING(uVar2,1);
  }
  uVar2 = DAT_1008_142e;
  SETLINE_AVERAGE_COUNT(uVar5,DAT_1008_142c);
  FUN_1000_7e40(DAT_1008_1428,uVar2);
  RESUME_AUTO_VIDEO_LEVEL(0x1000);
  FUN_1000_8552(0,3);
  M007_PUTSTATE(0x1000,0);
  uVar4 = 0x1d;
  puVar1 = (undefined2 *)M007_GETVALUE(0x1010,local_6);
  uVar5 = puVar1[1];
  SETMANUALCURRENT(0x1010,*puVar1);
  uVar3 = 0x1e;
  puVar1 = (undefined2 *)M007_GETVALUE(0x1010,local_a);
  uVar2 = puVar1[1];
  SETBRIGHTNESS(0x1010,*puVar1);
  FUN_1000_856a(uVar2,uVar3,uVar5,uVar4);
  return;
}


// ---- FUN_1000_89ce @ 1000:89ce

void __cdecl16far FUN_1000_89ce(void)

{
  undefined2 uVar1;
  undefined2 uVar2;
  
  FUN_1000_ae9e(10,0x1008);
  FUN_1000_7e8a(DAT_1008_143c);
  uVar1 = 0x1000;
  FUN_1000_ae9e(DAT_1008_1444);
  if (DAT_1008_143e == 1) {
    uVar1 = 0x1010;
    Ordinal_13(0x1000,1);
  }
  uVar2 = uVar1;
  if (DAT_1008_1440 == 1) {
    uVar2 = 0x1010;
    SWITCHWINDOWING(uVar1,1);
  }
  uVar1 = DAT_1008_1448;
  SETLINE_AVERAGE_COUNT(uVar2,DAT_1008_1446);
  FUN_1000_7e40(DAT_1008_1442,uVar1);
  RESUME_AUTO_VIDEO_LEVEL(0x1000);
  FUN_1000_8552(0,3);
  uVar1 = 0x77;
  M007_PUTSTATE(0x1000,0);
  FUN_1000_856a(uVar1);
  return;
}


// ---- FUN_1000_8a48 @ 1000:8a48

void __cdecl16far FUN_1000_8a48(void)

{
  SETXYSTIG(DAT_1008_1438,DAT_1008_143a,DAT_1008_1434,DAT_1008_1436);
  return;
}


// ---- FUN_1000_8a6a @ 1000:8a6a

void __cdecl16far FUN_1000_8a6a(undefined2 param_1,undefined2 param_2)

{
  FUN_1000_da96(param_1,param_2,0x1008);
  return;
}


// ---- FUN_1000_8a84 @ 1000:8a84

void __cdecl16far FUN_1000_8a84(undefined2 param_1,undefined2 param_2)

{
  FUN_1000_dac2(param_1,param_2,0x1008);
  return;
}


// ---- FUN_1000_8a9e @ 1000:8a9e

void __cdecl16far FUN_1000_8a9e(undefined2 param_1,undefined2 param_2)

{
  FUN_1000_daee(param_1,param_2,0x1008);
  return;
}


// ---- FUN_1000_8ab8 @ 1000:8ab8

void __cdecl16far FUN_1000_8ab8(undefined2 param_1,undefined2 param_2)

{
  FUN_1000_db1a(param_1,param_2,0x1008);
  return;
}


// ---- FUN_1000_8ad2 @ 1000:8ad2

void __cdecl16far FUN_1000_8ad2(void)

{
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  
  uVar2 = 0x1008;
  uVar1 = 0x14;
  M007_PUTSTATE(unaff_CS,1);
  FUN_1000_db46(uVar1,uVar2);
  return;
}


// ---- FUN_1000_8aec @ 1000:8aec

void __cdecl16far FUN_1000_8aec(void)

{
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  
  uVar2 = 0x1008;
  uVar1 = 0x14;
  M007_PUTSTATE(unaff_CS,0);
  FUN_1000_db62(uVar1,uVar2);
  return;
}


// ---- FUN_1000_8b06 @ 1000:8b06

void __cdecl16far FUN_1000_8b06(undefined2 param_1,undefined2 param_2)

{
  FUN_1000_da6a(param_1,param_2,0x1008);
  return;
}


// ---- FUN_1000_8b20 @ 1000:8b20

void __cdecl16far FUN_1000_8b20(undefined2 param_1)

{
  undefined2 unaff_CS;
  
  SETMANUALKV(unaff_CS,param_1);
  return;
}


// ---- FUN_1000_8b38 @ 1000:8b38

undefined2 __cdecl16far FUN_1000_8b38(void)

{
  double dVar1;
  int *piVar2;
  float *pfVar3;
  undefined2 uVar4;
  undefined2 *puVar5;
  undefined2 extraout_DX;
  undefined2 in_BX;
  undefined2 uVar6;
  undefined2 unaff_SS;
  undefined4 uVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  int local_1c [2];
  int local_18 [2];
  undefined1 local_14 [4];
  int local_10 [2];
  undefined4 local_c;
  undefined4 local_8;
  int local_4;
  
  uVar10 = 0x1008;
  uVar9 = 0x10;
  uVar7 = M007_GETSTATE();
  uVar8 = (undefined2)((ulong)uVar7 >> 0x10);
  uVar4 = 0x1000;
  uVar6 = 0x1000;
  switch((int)uVar7 + -1) {
  case 0:
    pfVar3 = (float *)M007_GETVALUE(0x1000,local_10);
    dVar1 = (double)*pfVar3;
    LOG_CAL_CHANGE(0x1010,SUB82(dVar1,0),(int)((qword)dVar1 >> 0x10),(int)((qword)dVar1 >> 0x20),
                   (int)((qword)dVar1 >> 0x30));
    pfVar3 = (float *)M007_GETVALUE(0x1010,local_14);
    dVar1 = (double)*pfVar3;
    LOG_CAL_CHANGE(0x1010,SUB82(dVar1,0),(int)((qword)dVar1 >> 0x10),(int)((qword)dVar1 >> 0x20),
                   (int)((qword)dVar1 >> 0x30));
    pfVar3 = (float *)M007_GETVALUE(0x1010,local_18);
    dVar1 = (double)*pfVar3;
    uVar6 = 0x1010;
    LOG_CAL_CHANGE(0x1010,SUB82(dVar1,0),(int)((qword)dVar1 >> 0x10),(int)((qword)dVar1 >> 0x20),
                   (int)((qword)dVar1 >> 0x30));
    break;
  case 1:
    pfVar3 = (float *)M007_GETVALUE(0x1000,local_1c);
    dVar1 = (double)*pfVar3;
    LOG_CAL_CHANGE(0x1010,SUB82(dVar1,0),(int)((qword)dVar1 >> 0x10),(int)((qword)dVar1 >> 0x20),
                   (int)((qword)dVar1 >> 0x30));
    goto LAB_1000_8db8;
  case 2:
    break;
  case 3:
    local_4 = 0;
    do {
      pfVar3 = (float *)FUN_1000_c5e8(local_4,local_4 + 8);
      dVar1 = (double)*pfVar3;
      uVar7 = LOG_CAL_CHANGE(0x1000,SUB82(dVar1,0),(int)((qword)dVar1 >> 0x10),
                             (int)((qword)dVar1 >> 0x20),(int)((qword)dVar1 >> 0x30));
      uVar8 = (undefined2)((ulong)uVar7 >> 0x10);
      uVar4 = (undefined2)uVar7;
      local_4 = local_4 + 1;
    } while (local_4 < 0x10);
    for (local_4 = 0; local_4 < 0x10; local_4 = local_4 + 1) {
      local_1c[0] = FUN_1000_c60c(local_4,local_4 + 0x18);
      dVar1 = (double)local_1c[0];
      uVar4 = LOG_CAL_CHANGE(0x1000,SUB82(dVar1,0),(int)((qword)dVar1 >> 0x10),
                             (int)((qword)dVar1 >> 0x20),(int)((qword)dVar1 >> 0x30));
    }
    return uVar4;
  case 4:
    pfVar3 = (float *)M007_GETVALUE(0x1000,local_1c);
    dVar1 = (double)*pfVar3;
    LOG_CAL_CHANGE(0x1010,SUB82(dVar1,0),(int)((qword)dVar1 >> 0x10),(int)((qword)dVar1 >> 0x20),
                   (int)((qword)dVar1 >> 0x30));
    goto LAB_1000_8db8;
  case 5:
    pfVar3 = (float *)M007_GETVALUE(0x1000,local_1c);
    dVar1 = (double)*pfVar3;
    LOG_CAL_CHANGE(0x1010,SUB82(dVar1,0),(int)((qword)dVar1 >> 0x10),(int)((qword)dVar1 >> 0x20),
                   (int)((qword)dVar1 >> 0x30));
    pfVar3 = (float *)M007_GETVALUE(0x1010,local_18);
    dVar1 = (double)*pfVar3;
    LOG_CAL_CHANGE(0x1010,SUB82(dVar1,0),(int)((qword)dVar1 >> 0x10),(int)((qword)dVar1 >> 0x20),
                   (int)((qword)dVar1 >> 0x30));
    pfVar3 = (float *)M007_GETVALUE(0x1010,local_14);
    dVar1 = (double)*pfVar3;
    uVar6 = 0x1010;
    LOG_CAL_CHANGE(0x1010,SUB82(dVar1,0),(int)((qword)dVar1 >> 0x10),(int)((qword)dVar1 >> 0x20),
                   (int)((qword)dVar1 >> 0x30));
    piVar2 = local_10;
    goto LAB_1000_8bbe;
  case 6:
    break;
  default:
    goto switchD_1000_8eb0_caseD_7;
  case 8:
    pfVar3 = (float *)M007_GETVALUE(0x1000,local_1c);
    dVar1 = (double)*pfVar3;
    LOG_CAL_CHANGE(0x1010,SUB82(dVar1,0),(int)((qword)dVar1 >> 0x10),(int)((qword)dVar1 >> 0x20),
                   (int)((qword)dVar1 >> 0x30));
    goto LAB_1000_8db8;
  case 9:
    break;
  case 10:
    uVar6 = uVar4;
    break;
  case 0xb:
    uVar6 = uVar4;
    break;
  case 0xc:
    pfVar3 = (float *)M007_GETVALUE(0x1000,local_1c);
    dVar1 = (double)*pfVar3;
    LOG_CAL_CHANGE(0x1010,SUB82(dVar1,0),(int)((qword)dVar1 >> 0x10),(int)((qword)dVar1 >> 0x20),
                   (int)((qword)dVar1 >> 0x30));
    goto LAB_1000_8db8;
  case 0xd:
    pfVar3 = (float *)M007_GETVALUE(0x1000,local_1c);
    dVar1 = (double)*pfVar3;
    LOG_CAL_CHANGE(0x1010,SUB82(dVar1,0),(int)((qword)dVar1 >> 0x10),(int)((qword)dVar1 >> 0x20),
                   (int)((qword)dVar1 >> 0x30));
LAB_1000_8db8:
    uVar6 = 0x1010;
    piVar2 = local_18;
    goto LAB_1000_8bbe;
  case 0xf:
    puVar5 = (undefined2 *)FUN_1000_cb46();
    local_c = (float)CONCAT22(puVar5[1],*puVar5);
    local_8 = (float)CONCAT22(puVar5[3],puVar5[2]);
    uVar8 = 0x37;
    dVar1 = (double)local_c;
    LOG_CAL_CHANGE(0x1000,SUB82(dVar1,0),(int)((qword)dVar1 >> 0x10),(int)((qword)dVar1 >> 0x20),
                   (int)((qword)dVar1 >> 0x30));
    uVar6 = 0x38;
    dVar1 = (double)local_8;
    LOG_CAL_CHANGE(0x1010,SUB82(dVar1,0),(int)((qword)dVar1 >> 0x10),(int)((qword)dVar1 >> 0x20),
                   (int)((qword)dVar1 >> 0x30));
    uVar4 = extraout_DX;
    puVar5 = (undefined2 *)FUN_1000_cb86(uVar6,uVar8);
    local_c = (float)CONCAT22(puVar5[1],*puVar5);
    local_8 = (float)CONCAT22(puVar5[3],puVar5[2]);
    dVar1 = (double)local_c;
    LOG_CAL_CHANGE(0x1000,SUB82(dVar1,0),(int)((qword)dVar1 >> 0x10),(int)((qword)dVar1 >> 0x20),
                   (int)((qword)dVar1 >> 0x30));
    pfVar3 = (float *)&local_8;
    goto code_r0x10008bc7;
  case 0x10:
    uVar6 = uVar4;
    break;
  case 0x11:
    for (local_4 = 0; local_4 < 5; local_4 = local_4 + 1) {
      local_1c[0] = FUN_1000_cf00(local_4,(local_4 + 0x1e) * 2,uVar9,uVar10);
      dVar1 = (double)local_1c[0];
      LOG_CAL_CHANGE(0x1000,SUB82(dVar1,0),(int)((qword)dVar1 >> 0x10),(int)((qword)dVar1 >> 0x20),
                     (int)((qword)dVar1 >> 0x30));
      local_1c[0] = FUN_1000_cf16(local_4,local_4 * 2 + 0x3d);
      dVar1 = (double)local_1c[0];
      in_BX = LOG_CAL_CHANGE(0x1000,SUB82(dVar1,0),(int)((qword)dVar1 >> 0x10),
                             (int)((qword)dVar1 >> 0x20),(int)((qword)dVar1 >> 0x30));
    }
    goto switchD_1000_8eb0_caseD_7;
  }
  piVar2 = local_1c;
LAB_1000_8bbe:
  pfVar3 = (float *)M007_GETVALUE(uVar6,piVar2);
code_r0x10008bc7:
  dVar1 = (double)*pfVar3;
  in_BX = LOG_CAL_CHANGE(0x1010,SUB82(dVar1,0),(int)((qword)dVar1 >> 0x10),
                         (int)((qword)dVar1 >> 0x20),(int)((qword)dVar1 >> 0x30));
switchD_1000_8eb0_caseD_7:
  return in_BX;
}


// ---- FUN_1000_8ede @ 1000:8ede

void __cdecl16far FUN_1000_8ede(void)

{
  undefined2 *puVar1;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined1 local_16 [4];
  undefined1 local_12 [4];
  undefined1 local_e [4];
  undefined1 local_a [4];
  undefined1 local_6 [4];
  
  uVar5 = 0x1008;
  uVar4 = 0x10;
  M007_PUTSTATE(unaff_CS,1);
  Ordinal_7(0x1010,uVar4,uVar5);
  puVar1 = (undefined2 *)M007_GETVALUE(0x1010,local_6);
  DAT_1008_1462 = *puVar1;
  DAT_1008_1464 = puVar1[1];
  uVar3 = 0x21;
  puVar1 = (undefined2 *)M007_GETVALUE(0x1010,local_a);
  DAT_1008_144a = *puVar1;
  DAT_1008_144c = puVar1[1];
  uVar2 = 0x22;
  puVar1 = (undefined2 *)M007_GETVALUE(0x1010,local_e);
  DAT_1008_144e = *puVar1;
  DAT_1008_1450 = puVar1[1];
  uVar5 = 0x23;
  puVar1 = (undefined2 *)M007_GETVALUE(0x1010,local_12);
  DAT_1008_1456 = *puVar1;
  DAT_1008_1458 = puVar1[1];
  uVar4 = 0x24;
  puVar1 = (undefined2 *)M007_GETVALUE(0x1010,local_16);
  DAT_1008_145a = *puVar1;
  DAT_1008_145c = puVar1[1];
  FUN_1000_a7da(uVar4,uVar5,uVar2,uVar3);
  return;
}


// ---- FUN_1000_8f86 @ 1000:8f86

void __cdecl16far FUN_1000_8f86(void)

{
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  
  uVar2 = 0x1008;
  uVar1 = 0x13;
  M007_PUTSTATE(unaff_CS,3);
  FUN_1000_8b20(DAT_1008_0956,DAT_1008_0958,uVar1,uVar2);
  return;
}


// ---- FUN_1000_8fac @ 1000:8fac

void __cdecl16far FUN_1000_8fac(void)

{
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  
  uVar2 = 0x1008;
  uVar1 = 0x13;
  M007_PUTSTATE(unaff_CS,1);
  FUN_1000_8b20(DAT_1008_095a,DAT_1008_095c,uVar1,uVar2);
  FUN_1000_df38(0,DAT_1008_095e,DAT_1008_0960);
  FUN_1000_df38(1,DAT_1008_095e,DAT_1008_0960);
  FUN_1000_dfb4();
  return;
}


// ---- FUN_1000_8ffa @ 1000:8ffa

void __cdecl16far FUN_1000_8ffa(void)

{
  FUN_1000_8b20(DAT_1008_0956,DAT_1008_0958,0x1008);
  M007_PUTSTATE(0x1000,4);
  return;
}


// ---- FUN_1000_9020 @ 1000:9020

void __cdecl16far FUN_1000_9020(void)

{
  FUN_1000_8b20(DAT_1008_095a,DAT_1008_095c,0x1008);
  FUN_1000_df38(0,DAT_1008_095e,DAT_1008_0960);
  FUN_1000_df38(1,DAT_1008_095e,DAT_1008_0960);
  FUN_1000_dfd0();
  M007_PUTSTATE(0x1000,2);
  return;
}


// ---- FUN_1000_906e @ 1000:906e

void __cdecl16far FUN_1000_906e(void)

{
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  
  uVar5 = 0x1008;
  uVar4 = 0x21;
  M007_PUTVALUE(unaff_CS,DAT_1008_144a,DAT_1008_144c);
  uVar3 = 0x22;
  M007_PUTVALUE(0x1010,DAT_1008_144e,DAT_1008_1450);
  uVar2 = 0x23;
  M007_PUTVALUE(0x1010,DAT_1008_1456,DAT_1008_1458);
  uVar1 = 0x24;
  M007_PUTVALUE(0x1010,DAT_1008_145a,DAT_1008_145c);
  FUN_1000_8b20(DAT_1008_1462,DAT_1008_1464,uVar1,uVar2,uVar3,uVar4,uVar5);
  FUN_1000_df66(0);
  FUN_1000_a806();
  return;
}


// ---- FUN_1000_90d4 @ 1000:90d4

void __cdecl16far FUN_1000_90d4(void)

{
  FUN_1000_8b20(DAT_1008_1462,DAT_1008_1464,0x1008);
  FUN_1000_df66(0);
  FUN_1000_a806();
  return;
}


// ---- FUN_1000_90fe @ 1000:90fe

void __cdecl16far FUN_1000_90fe(undefined4 param_1)

{
  FUN_1000_e00c();
  M007_PUTVALUE(0x1000,param_1);
  return;
}


// ---- FUN_1000_913a @ 1000:913a

void __cdecl16far FUN_1000_913a(undefined4 param_1)

{
  FUN_1000_e038();
  M007_PUTVALUE(0x1000,param_1);
  return;
}


// ---- FUN_1000_9176 @ 1000:9176

void __cdecl16far FUN_1000_9176(undefined4 param_1)

{
  FUN_1000_e064();
  M007_PUTVALUE(0x1000,param_1);
  return;
}


// ---- FUN_1000_91b2 @ 1000:91b2

void __cdecl16far FUN_1000_91b2(undefined4 param_1)

{
  FUN_1000_e090();
  M007_PUTVALUE(0x1000,param_1);
  return;
}


// ---- DOCOMPOSITEHYSTERESIS @ 1000:91ee

void __stdcall16far
DOCOMPOSITEHYSTERESIS
          (undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
          undefined2 param_5,undefined2 param_6)

{
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  
  uVar2 = 0x1008;
  uVar1 = 0x19;
  M007_PUTSTATE(unaff_CS,1);
  DAT_1008_00aa = M007_GETSTATE(0x1010,0x14,uVar1,uVar2);
  FUN_1000_8ad2();
  DAT_1008_00ac = 1;
  FUN_1000_ef16(param_6,param_5,param_3,param_4,param_1,param_2);
  return;
}


// ---- FUN_1000_9234 @ 1000:9234

void __cdecl16far FUN_1000_9234(void)

{
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  
  uVar2 = 0x1008;
  if (DAT_1008_00ac != 1) {
    uVar1 = 0x19;
    DAT_1008_00ac = 1;
    M007_PUTSTATE(unaff_CS,1);
    DAT_1008_00aa = M007_GETSTATE(0x1010,0x14,uVar1,uVar2);
    FUN_1000_8ad2();
    FUN_1000_ef16(3,0xe,DAT_1008_0966,DAT_1008_0968,DAT_1008_0962,DAT_1008_0964);
  }
  return;
}


// ---- SPECIAL_C1C2_HYSTERESIS_REMOVAL @ 1000:9280

void __stdcall16far SPECIAL_C1C2_HYSTERESIS_REMOVAL(undefined2 param_1)

{
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  
  uVar2 = 0x1008;
  uVar1 = 0x19;
  M007_PUTSTATE(unaff_CS,1);
  DAT_1008_00aa = M007_GETSTATE(0x1010,0x14,uVar1,uVar2);
  FUN_1000_8ad2();
  DAT_1008_00ac = 1;
  FUN_1000_dfec(param_1);
  return;
}


// ---- FUN_1000_92b6 @ 1000:92b6

void __cdecl16far FUN_1000_92b6(int param_1)

{
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  
  uVar2 = 0x1008;
  if ((DAT_1008_00ac == 1) && (param_1 == 1)) {
    uVar1 = 0x19;
    M007_PUTSTATE(unaff_CS,0);
    if (DAT_1008_00aa == 0) {
      FUN_1000_8aec(uVar1,uVar2);
    }
    DAT_1008_00ac = 0;
  }
  return;
}


// ---- FUN_1000_92ea @ 1000:92ea

void __cdecl16far FUN_1000_92ea(undefined4 param_1)

{
  undefined2 uStack_4;
  
  uStack_4 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_1000_df38(0,(int)param_1,uStack_4,0x1008);
  M007_PUTVALUE(0x1000,param_1);
  return;
}


// ---- FUN_1000_9328 @ 1000:9328

void __cdecl16far FUN_1000_9328(undefined4 param_1)

{
  undefined2 uStack_4;
  
  uStack_4 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_1000_df38(1,(int)param_1,uStack_4,0x1008);
  M007_PUTVALUE(0x1000,param_1);
  return;
}


// ---- FUN_1000_9366 @ 1000:9366

void __cdecl16far FUN_1000_9366(undefined4 param_1)

{
  undefined2 uStack_4;
  
  uStack_4 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_1000_ed2a(0,(int)param_1,uStack_4,0x1008);
  M007_PUTVALUE(0x1000,param_1);
  return;
}


// ---- FUN_1000_93a4 @ 1000:93a4

void __cdecl16far FUN_1000_93a4(undefined4 param_1)

{
  undefined2 uStack_4;
  
  uStack_4 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_1000_ed2a(1,(int)param_1,uStack_4,0x1008);
  M007_PUTVALUE(0x1000,param_1);
  return;
}


// ---- FUN_1000_93e2 @ 1000:93e2

void __cdecl16far FUN_1000_93e2(void)

{
  FUN_1000_eda0(1,0x1008);
  return;
}


// ---- FUN_1000_93f6 @ 1000:93f6

void __cdecl16far FUN_1000_93f6(void)

{
  FUN_1000_eda0(0,0x1008);
  return;
}


// ---- FUN_1000_940a @ 1000:940a

void __cdecl16far FUN_1000_940a(void)

{
  FUN_1000_edc0(1,0x1008);
  return;
}


// ---- FUN_1000_941e @ 1000:941e

void __cdecl16far FUN_1000_941e(void)

{
  FUN_1000_edc0(0,0x1008);
  return;
}


// ---- FUN_1000_9432 @ 1000:9432

void __cdecl16far FUN_1000_9432(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 uVar6;
  undefined2 unaff_SS;
  undefined2 uStack_3e;
  undefined2 uStack_3c;
  undefined2 uStack_3a;
  undefined2 uStack_38;
  undefined2 uStack_36;
  undefined2 uStack_34;
  undefined2 uStack_32;
  undefined2 uStack_30;
  undefined2 uStack_2e;
  undefined2 local_22;
  undefined2 local_20;
  undefined2 local_1e;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined2 local_18;
  undefined2 local_16;
  undefined2 local_12;
  undefined2 local_10;
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_a;
  undefined2 local_8;
  undefined2 local_6;
  
  uStack_2e = 0x9445;
  FUN_1000_ef54();
  uVar6 = 0x1010;
  uStack_2e = 0x944d;
  iVar3 = M007_GETSTATE();
  if (iVar3 != 0) {
    uStack_2e = 0x1010;
    uStack_30 = 0x9458;
    uStack_2e = M007_GETSTATE();
    uStack_30 = 0x1010;
    uVar6 = 0x1000;
    uStack_32 = 0x945e;
    FUN_1000_e82c();
  }
  uStack_2e = 0xa4;
  uStack_30 = 0;
  uStack_34 = 0x9469;
  uStack_32 = uVar6;
  M007_PUTSTATE();
  uStack_30 = 0;
  uStack_32 = 0x1010;
  uStack_34 = 38000;
  FUN_1000_e91c();
  uStack_30 = 0;
  uStack_32 = 0x1000;
  uStack_34 = 0x9478;
  FUN_1000_a792();
  local_12 = DAT_1008_096a;
  local_10 = DAT_1008_096c;
  local_e = DAT_1008_096e;
  local_c = DAT_1008_0970;
  local_a = DAT_1008_0972;
  local_8 = DAT_1008_0974;
  local_6 = 0;
  uStack_30 = 0;
  uStack_32 = 0x1000;
  uStack_34 = 0x94ab;
  FUN_1000_a9b6();
  uStack_30 = local_10;
  uStack_32 = local_12;
  uStack_34 = 0x1000;
  uStack_36 = 0x94b7;
  FUN_1000_aa88();
  uStack_30 = local_6;
  uStack_32 = 0x1000;
  uStack_34 = 0x94c2;
  FUN_1000_aaf8();
  uStack_30 = local_8;
  uStack_32 = local_a;
  uStack_34 = local_c;
  uStack_36 = local_e;
  uStack_38 = 0x1000;
  uStack_3a = 0x94d4;
  FUN_1000_ab70();
  local_12 = DAT_1008_0976;
  local_10 = DAT_1008_0978;
  local_a = DAT_1008_097a;
  local_8 = DAT_1008_097c;
  uStack_30 = 1;
  uStack_32 = 0x1000;
  uStack_34 = 0x94f8;
  FUN_1000_a9b6();
  uStack_30 = local_10;
  uStack_32 = local_12;
  uStack_34 = 0x1000;
  uStack_36 = 0x9504;
  FUN_1000_aa88();
  uStack_30 = local_6;
  uStack_32 = 0x1000;
  uStack_34 = 0x950f;
  FUN_1000_aaf8();
  uStack_30 = local_8;
  uStack_32 = local_a;
  uStack_34 = local_c;
  uStack_36 = local_e;
  uStack_38 = 0x1000;
  uStack_3a = 0x9521;
  FUN_1000_ab70();
  local_a = DAT_1008_097e;
  local_8 = DAT_1008_0980;
  uStack_30 = 2;
  uStack_32 = 0x1000;
  uStack_34 = 0x9538;
  FUN_1000_a9b6();
  uStack_30 = local_10;
  uStack_32 = local_12;
  uStack_34 = 0x1000;
  uStack_36 = 0x9544;
  FUN_1000_aa88();
  uStack_30 = local_6;
  uStack_32 = 0x1000;
  uStack_34 = 0x954f;
  FUN_1000_aaf8();
  uStack_30 = local_8;
  uStack_32 = local_a;
  uStack_34 = local_c;
  uStack_36 = local_e;
  uStack_38 = 0x1000;
  uStack_3a = 0x9561;
  FUN_1000_ab70();
  local_12 = DAT_1008_0982;
  local_10 = DAT_1008_0984;
  local_a = DAT_1008_0986;
  local_8 = DAT_1008_0988;
  uStack_30 = 3;
  uStack_32 = 0x1000;
  uStack_34 = 0x9585;
  FUN_1000_a9b6();
  uStack_30 = local_10;
  uStack_32 = local_12;
  uStack_34 = 0x1000;
  uStack_36 = 0x9591;
  FUN_1000_aa88();
  uStack_30 = local_6;
  uStack_32 = 0x1000;
  uStack_34 = 0x959c;
  FUN_1000_aaf8();
  uStack_30 = local_8;
  uStack_32 = local_a;
  uStack_34 = local_c;
  uStack_36 = local_e;
  uStack_38 = 0x1000;
  uStack_3a = 0x95ae;
  FUN_1000_ab70();
  uStack_30 = 0;
  uStack_32 = 0x1000;
  uStack_34 = 0x95b8;
  FUN_1000_a9b6();
  local_22 = DAT_1008_098a;
  local_20 = DAT_1008_098c;
  local_1e = DAT_1008_098e;
  local_1c = DAT_1008_0990;
  local_1a = DAT_1008_0992;
  local_18 = DAT_1008_0994;
  local_16 = 0;
  puVar4 = &uStack_3e;
  puVar5 = &local_22;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = puVar4;
    puVar4 = puVar4 + 1;
    puVar1 = puVar5;
    puVar5 = puVar5 + 1;
    *puVar2 = *puVar1;
  }
  FUN_1000_a8f4();
  uStack_30 = 0x1000;
  uStack_32 = 0x9607;
  FUN_1000_e0bc();
  uStack_30 = 0x1000;
  uStack_32 = 0x960c;
  FUN_1000_e0d8();
  uStack_30 = 0x1000;
  uStack_32 = 0x9611;
  FUN_1000_deac();
  uStack_30 = 0x1000;
  uStack_32 = 0x9616;
  FUN_1000_a3e0();
  uStack_30 = 5;
  uStack_32 = 0x1000;
  uStack_34 = 0x961d;
  FUN_1000_ae9e();
  uStack_30 = DAT_1008_0998;
  uStack_32 = DAT_1008_0996;
  uStack_34 = 0x1000;
  uStack_36 = 0x962b;
  FUN_1000_b988();
  uStack_30 = 1;
  uStack_32 = 0x1000;
  uStack_34 = 0x9635;
  FUN_1000_bf86();
  uStack_30 = DAT_1008_099c;
  uStack_32 = DAT_1008_099a;
  uStack_34 = 0x1000;
  uStack_36 = 0x9643;
  FUN_1000_be76();
  uStack_30 = DAT_1008_0998;
  uStack_32 = DAT_1008_0996;
  uStack_34 = 0x1000;
  uStack_36 = 0x9653;
  FUN_1000_b988();
  uStack_30 = 0x300;
  uStack_32 = 0x400;
  uStack_34 = 0;
  uStack_36 = 0;
  uStack_38 = 5;
  uStack_3a = 0x1000;
  uStack_3c = 0x9667;
  FUN_1000_af36();
  uStack_30 = 0;
  uStack_32 = 0x1000;
  uStack_34 = 0x9671;
  FUN_1000_b09a();
  uStack_30 = 0x1000;
  uStack_32 = 0x9677;
  FUN_1000_8aec();
  uStack_30 = DAT_1008_0998;
  uStack_32 = DAT_1008_0996;
  uStack_34 = 0x1000;
  uStack_36 = 0x9684;
  FUN_1000_8a6a();
  uStack_30 = DAT_1008_0998;
  uStack_32 = DAT_1008_0996;
  uStack_34 = 0x1000;
  uStack_36 = 0x9694;
  FUN_1000_8a84();
  uStack_30 = DAT_1008_0998;
  uStack_32 = DAT_1008_0996;
  uStack_34 = 0x1000;
  uStack_36 = 0x96a4;
  FUN_1000_8a9e();
  uStack_30 = DAT_1008_0998;
  uStack_32 = DAT_1008_0996;
  uStack_34 = 0x1000;
  uStack_36 = 0x96b4;
  FUN_1000_8ab8();
  uStack_30 = DAT_1008_0998;
  uStack_32 = DAT_1008_0996;
  uStack_34 = DAT_1008_0998;
  uStack_36 = DAT_1008_0996;
  uStack_38 = 0x1000;
  uStack_3a = 0x96cc;
  FUN_1000_c6a6();
  return;
}


// ---- FUN_1000_96d4 @ 1000:96d4

void __cdecl16far FUN_1000_96d4(undefined2 param_1)

{
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  
  uVar2 = 0x1008;
  uVar1 = 0;
  M007_PUTSTATE(unaff_CS,param_1);
  FUN_1000_e82c(param_1,uVar1,uVar2);
  return;
}


// ---- DO_FEATURESCAN @ 1000:96f4

/* WARNING: Removing unreachable block (ram,0x10009811) */

void __stdcall16far
DO_FEATURESCAN(int param_1,undefined2 param_2,undefined2 param_3,uint param_4,uint *param_5,
              undefined2 param_6)

{
  double dVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  long lVar5;
  ulong uVar6;
  double *pdVar7;
  undefined4 uVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  qword local_4a;
  undefined8 local_2e;
  undefined8 local_1e;
  uint local_16;
  uint local_14;
  uint local_12;
  uint local_10;
  uint local_e;
  uint local_c;
  uint local_8;
  undefined4 local_6;
  
  uVar10 = 0x1008;
  local_6 = (uint *)CONCAT22(param_6,param_5);
  local_e = 0x3ff;
  local_12 = 0x2ff;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  local_16 = 0;
  local_1e = (double)CONCAT26(DAT_1008_09a4,
                              CONCAT24(DAT_1008_09a2,CONCAT22(DAT_1008_09a0,DAT_1008_099e)));
  local_2e._0_4_ = CONCAT22(DAT_1008_09a0,DAT_1008_099e);
  local_2e._0_6_ = CONCAT24(DAT_1008_09a2,(undefined4)local_2e);
  local_2e = (double)CONCAT26(DAT_1008_09a4,(undefined6)local_2e);
  local_4a = (qword)CONCAT22(param_3,param_2);
  dVar1 = (double)local_4a * DAT_1008_09a6;
  if (param_4 != 0) {
    if (10000 < param_4) {
      param_4 = 10000;
    }
    if (DAT_1008_00ae == 0) {
      DAT_1008_1842 = DAT_1008_09ae;
      DAT_1008_1844 = DAT_1008_09b0;
      DAT_1008_1846 = DAT_1008_09b2;
      DAT_1008_1848 = DAT_1008_09b4;
      DAT_1008_19e6 = 0;
      DAT_1008_19e4 = 0;
      DAT_1008_1918 = 10;
      DAT_1008_191a = 1;
      DAT_1008_191c = 2;
      DAT_1008_191e = 0;
      DAT_1008_1920 = 0;
      DAT_1008_1922 = 0;
      DAT_1008_1928 = 1;
      DAT_1008_00ae = 1;
    }
    uVar9 = 0xcd;
    iVar2 = M007_GETSTATE();
    if (iVar2 == 1) {
      iVar2 = M007_GETSTATE(0x1010,0x83,uVar9,uVar10);
      if (iVar2 == 1) {
        iVar2 = Ordinal_6015(0x1010);
        if (iVar2 == 1) {
          do {
            Ordinal_6002();
            lVar5 = GETTICKCOUNT();
            do {
              uVar6 = GETTICKCOUNT();
            } while (uVar6 <= lVar5 + 0x14U);
            iVar2 = Ordinal_6015();
          } while ((iVar2 != 2) && (local_16 = local_16 + 1, local_16 < 0xbea));
        }
        if (DAT_1008_19e6 != 0 || DAT_1008_19e4 != 0) {
          OM_KILL_OVERLAY_OBJ();
          DAT_1008_19e6 = 0;
          DAT_1008_19e4 = 0;
        }
        if (DAT_1008_1840 < 10) {
          local_2e._0_4_ = CONCAT22(DAT_1008_1844,DAT_1008_1842);
          local_2e._0_6_ = CONCAT24(DAT_1008_1846,(undefined4)local_2e);
          local_2e = (double)CONCAT26(DAT_1008_1848,(undefined6)local_2e);
        }
        else {
          pdVar7 = (double *)
                   FUN_1000_0256(0x1010,DAT_1008_09b6,DAT_1008_09b8,DAT_1008_09ba,DAT_1008_09bc,
                                 (double)(DAT_1008_1840 + -10));
          local_2e = *pdVar7 * (double)CONCAT26(DAT_1008_1848,
                                                CONCAT24(DAT_1008_1846,
                                                         CONCAT22(DAT_1008_1844,DAT_1008_1842)));
        }
      }
    }
    else {
      uVar9 = 0xcd;
      M007_PUTSTATE();
      uVar10 = 0x11;
      DAT_1008_1840 = M007_GETSTATE();
      if (DAT_1008_1840 < 10) {
        FUN_1000_ae9e();
        local_2e._0_4_ = CONCAT22(DAT_1008_1844,DAT_1008_1842);
        local_2e._0_6_ = CONCAT24(DAT_1008_1846,(undefined4)local_2e);
        local_2e = (double)CONCAT26(DAT_1008_1848,(undefined6)local_2e);
      }
      else {
        pdVar7 = (double *)
                 FUN_1000_0256(0x1010,DAT_1008_09b6,DAT_1008_09b8,DAT_1008_09ba,DAT_1008_09bc,
                               (double)(DAT_1008_1840 + -10),uVar10,uVar9);
        local_2e = *pdVar7 * (double)CONCAT26(DAT_1008_1848,
                                              CONCAT24(DAT_1008_1846,
                                                       CONCAT22(DAT_1008_1844,DAT_1008_1842)));
      }
      SETEOCOLUMNSCAN(0x300,0x400,0);
    }
    uVar10 = 0x1010;
    iVar2 = M007_GETSTATE();
    if (iVar2 == 1) {
      for (local_8 = 0; local_8 < param_4; local_8 = local_8 + 1) {
        uVar9 = (undefined2)((ulong)local_6 >> 0x10);
        puVar4 = (uint *)local_6;
        uVar3 = *local_6;
        if (uVar3 == 0) {
          uVar3 = 1;
        }
        *local_6 = uVar3;
        local_1e = (double)uVar3 + local_1e;
        if (param_1 != 0) {
          if (local_10 < uVar3 + puVar4[1]) {
            local_10 = uVar3 + puVar4[1];
          }
          if (puVar4[1] < local_e) {
            local_e = puVar4[1];
          }
          if (local_14 < puVar4[2]) {
            local_14 = puVar4[2];
          }
          if (puVar4[2] < local_12) {
            local_12 = puVar4[2];
          }
        }
        local_6 = (uint *)CONCAT22(uVar9,puVar4 + 3);
      }
      if (dVar1 / local_2e < local_1e) {
        local_6 = (uint *)CONCAT22(param_6,param_5);
        for (local_8 = 0; local_8 < param_4; local_8 = local_8 + 1) {
          if (local_c == local_8) {
            uVar10 = 0x1000;
            local_c = FUN_1000_0282();
          }
          else {
            *local_6 = 1;
          }
        }
      }
      uVar8 = CONCAT22(DAT_1008_19e6,DAT_1008_19e4);
      uVar9 = uVar10;
      if (param_1 != 0) {
        DAT_1008_1914 = local_e;
        DAT_1008_1916 = local_12;
        DAT_1008_1924 = -(local_e - local_10);
        DAT_1008_1926 = -(local_12 - local_14);
        uVar9 = 0x1010;
        uVar8 = OM_CREATE_OVERLAY_OBJ(uVar10,(undefined2 *)&DAT_1008_1914,0x1008,1,1,0);
      }
      DAT_1008_19e6 = (int)((ulong)uVar8 >> 0x10);
      DAT_1008_19e4 = (int)uVar8;
      Ordinal_2127(uVar9,param_4,param_5);
    }
  }
  return;
}


// ---- STOP_FEATURESCAN @ 1000:9aa0

void __cdecl16far STOP_FEATURESCAN(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    iVar1 = Ordinal_6015(0x1010,uVar2,uVar3);
    if (iVar1 == 1) {
      Ordinal_6002(0x1010);
    }
    do {
      iVar1 = Ordinal_6015(0x1010,uVar2,uVar3);
    } while (iVar1 != 2);
    if (DAT_1008_19e6 != 0 || DAT_1008_19e4 != 0) {
      OM_KILL_OVERLAY_OBJ(0x1010,DAT_1008_19e4);
      DAT_1008_19e6 = 0;
      DAT_1008_19e4 = 0;
    }
  }
  FUN_1000_ae9e(DAT_1008_1840);
  M007_PUTSTATE(0x1000,0);
  return;
}


// ---- GET_FEATURESCAN_STATUS @ 1000:9b00

void __cdecl16far GET_FEATURESCAN_STATUS(void)

{
  Ordinal_6015();
  return;
}


// ---- FUN_1000_9b12 @ 1000:9b12

void __cdecl16far FUN_1000_9b12(undefined2 param_1)

{
  FUN_1000_de28(param_1,0x1008);
  return;
}


// ---- FUN_1000_9b28 @ 1000:9b28

void __cdecl16far FUN_1000_9b28(undefined2 param_1,undefined2 param_2)

{
  FUN_1000_ddfa(param_1,param_2,1,0x1008);
  return;
}


// ---- FUN_1000_9b44 @ 1000:9b44

void __cdecl16far FUN_1000_9b44(undefined4 param_1)

{
  FUN_1000_dd92();
  M007_PUTVALUE(0x1000,param_1);
  return;
}


// ---- FUN_1000_9b80 @ 1000:9b80

void __cdecl16far FUN_1000_9b80(void)

{
  undefined2 uVar1;
  undefined2 uVar2;
  
  uVar2 = 0x1008;
  if (DAT_1008_00b4 != 1) {
    DAT_1008_00b4 = 1;
    uVar1 = 0x14;
    DAT_1008_00b2 = M007_GETSTATE();
    FUN_1000_8ad2(uVar1,uVar2);
    uVar2 = 0x17;
    M007_PUTSTATE(0x1000,1);
    FUN_1000_ef16(3,0xe,DAT_1008_09ca,DAT_1008_09cc,DAT_1008_09c6,DAT_1008_09c8,uVar2);
  }
  return;
}


// ---- FUN_1000_9bce @ 1000:9bce

void __cdecl16far FUN_1000_9bce(int param_1)

{
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  
  uVar2 = 0x1008;
  if ((DAT_1008_00b4 == 1) && (param_1 == 1)) {
    uVar1 = 0x17;
    M007_PUTSTATE(unaff_CS,0);
    if (DAT_1008_00b2 == 0) {
      FUN_1000_8aec(uVar1,uVar2);
    }
    if (DAT_1008_00b6 == 1) {
      DAT_1008_00b6 = 0;
    }
    DAT_1008_00b4 = 0;
  }
  return;
}


// ---- FUN_1000_9c10 @ 1000:9c10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_1000_9c10(void)

{
  float *pfVar1;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined1 *puVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  float fVar5;
  undefined1 local_c [4];
  float local_8;
  undefined2 local_4;
  
  uVar4 = 0x1008;
  local_4 = 5;
  uVar3 = 1;
  puVar2 = local_c;
  pfVar1 = (float *)M007_GETVALUE(unaff_CS,puVar2);
  if (*pfVar1 - DAT_1008_09ce <= _DAT_1008_09d2) {
    fVar5 = 0.0;
  }
  else {
    puVar2 = (undefined1 *)0x1;
    pfVar1 = (float *)M007_GETVALUE();
    fVar5 = *pfVar1 - DAT_1008_09ce;
  }
  DAT_1008_00b6 = 1;
  local_8 = fVar5;
  FUN_1000_ddda(1,puVar2,uVar3,uVar4,fVar5);
  DAT_1008_00b0 = 1;
  FUN_1000_ddfa(fVar5,0);
  FUN_1000_ef16(3,0xe,DAT_1008_09ca,DAT_1008_09cc,DAT_1008_09c6,DAT_1008_09c8);
  FUN_1000_a3e0();
  return;
}


// ---- FUN_1000_9cb8 @ 1000:9cb8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_1000_9cb8(void)

{
  float *pfVar1;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined1 *puVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  float fVar5;
  undefined1 local_c [4];
  float local_8;
  undefined2 local_4;
  
  uVar4 = 0x1008;
  local_4 = 5;
  uVar3 = 1;
  puVar2 = local_c;
  pfVar1 = (float *)M007_GETVALUE(unaff_CS,puVar2);
  if (*pfVar1 - DAT_1008_09ce <= _DAT_1008_09d2) {
    fVar5 = 0.0;
  }
  else {
    puVar2 = (undefined1 *)0x1;
    pfVar1 = (float *)M007_GETVALUE();
    fVar5 = *pfVar1 - DAT_1008_09ce;
  }
  DAT_1008_00b6 = 1;
  local_8 = fVar5;
  FUN_1000_ddda(0,puVar2,uVar3,uVar4,fVar5);
  DAT_1008_00b0 = 0;
  FUN_1000_ddfa(fVar5,0);
  FUN_1000_ef16(3,0xe,DAT_1008_09ca,DAT_1008_09cc,DAT_1008_09c6,DAT_1008_09c8);
  FUN_1000_a3e0();
  return;
}


// ---- FUN_1000_9d62 @ 1000:9d62

void __cdecl16far FUN_1000_9d62(void)

{
  undefined2 *puVar1;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined1 local_1a [4];
  undefined1 local_16 [4];
  undefined1 local_12 [4];
  undefined1 local_e [4];
  undefined1 local_a [4];
  undefined1 local_6 [4];
  
  M007_PUTSTATE(unaff_CS,2);
  puVar1 = (undefined2 *)M007_GETVALUE(0x1010,local_6);
  DAT_1008_1466 = *puVar1;
  DAT_1008_1468 = puVar1[1];
  puVar1 = (undefined2 *)M007_GETVALUE(0x1010,local_a);
  DAT_1008_146a = *puVar1;
  DAT_1008_146c = puVar1[1];
  uVar5 = 8;
  puVar1 = (undefined2 *)M007_GETVALUE(0x1010,local_e);
  DAT_1008_1482 = *puVar1;
  DAT_1008_1484 = puVar1[1];
  uVar4 = 9;
  puVar1 = (undefined2 *)M007_GETVALUE(0x1010,local_12);
  DAT_1008_1486 = *puVar1;
  DAT_1008_1488 = puVar1[1];
  uVar3 = 0x16;
  puVar1 = (undefined2 *)M007_GETVALUE(0x1010,local_16);
  DAT_1008_148a = *puVar1;
  DAT_1008_148c = puVar1[1];
  uVar2 = 1;
  puVar1 = (undefined2 *)M007_GETVALUE(0x1010,local_1a);
  DAT_1008_148e = *puVar1;
  DAT_1008_1490 = puVar1[1];
  DAT_1008_1492 = M007_GETSTATE(0x1010,9,uVar2,uVar3,uVar4,uVar5);
  return;
}


// ---- FUN_1000_9e24 @ 1000:9e24

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_1000_9e24(void)

{
  undefined2 *puVar1;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined1 local_c [4];
  int local_8;
  int local_6;
  undefined2 local_4;
  
  uVar3 = 0x1008;
  local_4 = 5;
  if (DAT_1008_00c2 == 1) {
    uVar2 = 0x1c;
    M007_GETVALUE(unaff_CS,local_c);
    local_6 = FUN_1000_0282(uVar2,uVar3);
    local_8 = FUN_1000_0282();
    if (local_6 == 0) {
      FUN_1000_a000();
    }
    if (local_8 == local_6) {
      if (_DAT_1008_09de == _DAT_1008_00b8) {
        uVar3 = 1;
      }
      else {
        uVar3 = 2;
      }
      uVar2 = 0x12;
      M007_PUTSTATE(0x1000,uVar3);
      FUN_1000_df38(0,DAT_1008_09e2,DAT_1008_09e4,uVar2);
      FUN_1000_df38(1,DAT_1008_09e2,DAT_1008_09e4);
      uVar2 = 8;
      M007_PUTVALUE(0x1000,DAT_1008_09e2,DAT_1008_09e4);
      uVar3 = 9;
      M007_PUTVALUE(0x1010,DAT_1008_09e2,DAT_1008_09e4);
      FUN_1000_a82a(0,uVar3,uVar2);
      FUN_1000_a3e0();
      FUN_1000_a792(1);
      FUN_1000_dd1e();
      FUN_1000_a3e0();
      FUN_1000_a792(0);
      uVar2 = 0xd;
      uVar3 = local_4;
      puVar1 = (undefined2 *)M007_GETVALUE(0x1000,local_c);
      FUN_1000_9b80(*puVar1,puVar1[1],uVar2,uVar3);
      DAT_1008_00c2 = 0;
    }
  }
  return;
}


// ---- FUN_1000_9f36 @ 1000:9f36

void __cdecl16far FUN_1000_9f36(void)

{
  FUN_1000_8b20(DAT_1008_09de,DAT_1008_09e0,0x1008);
  DAT_1008_00b8 = DAT_1008_09de;
  DAT_1008_00ba = DAT_1008_09e0;
  DAT_1008_00c2 = 1;
  return;
}


// ---- FUN_1000_9f66 @ 1000:9f66

void __cdecl16far FUN_1000_9f66(void)

{
  FUN_1000_8b20(DAT_1008_09e6,DAT_1008_09e8,0x1008);
  DAT_1008_00b8 = DAT_1008_09e6;
  DAT_1008_00ba = DAT_1008_09e8;
  DAT_1008_00c2 = 1;
  return;
}


// ---- FUN_1000_9f96 @ 1000:9f96

void __cdecl16far FUN_1000_9f96(void)

{
  DAT_1008_00c2 = 0;
  FUN_1000_a82a(DAT_1008_1492,0x1008);
  FUN_1000_df38(0,DAT_1008_1482,DAT_1008_1484);
  FUN_1000_df38(1,DAT_1008_1486,DAT_1008_1488);
  FUN_1000_dca0(DAT_1008_148a,DAT_1008_148c);
  FUN_1000_ddfa(DAT_1008_148e,DAT_1008_1490,0);
  FUN_1000_a792(1);
  return;
}


// ---- FUN_1000_a000 @ 1000:a000

void __cdecl16far FUN_1000_a000(void)

{
  undefined2 uVar1;
  undefined2 uVar2;
  
  FUN_1000_dd3a(DAT_1008_1466,DAT_1008_1468,0x1008);
  FUN_1000_dd66(DAT_1008_146a,DAT_1008_146c);
  uVar2 = 0x25;
  M007_PUTVALUE(0x1000,DAT_1008_1466,DAT_1008_1468);
  uVar1 = 0x26;
  M007_PUTVALUE(0x1010,DAT_1008_146a,DAT_1008_146c);
  DAT_1008_00c2 = 0;
  FUN_1000_9f96(uVar1,uVar2);
  FUN_1000_ddbe();
  FUN_1000_a3e0();
  return;
}


// ---- FUN_1000_a060 @ 1000:a060

void __cdecl16far FUN_1000_a060(void)

{
  DAT_1008_00c2 = 0;
  FUN_1000_9f96(0x1008);
  FUN_1000_ddbe();
  FUN_1000_a3e0();
  return;
}


// ---- FUN_1000_a082 @ 1000:a082

void __cdecl16far FUN_1000_a082(undefined4 param_1)

{
  FUN_1000_dd3a();
  M007_PUTVALUE(0x1000,param_1);
  return;
}


// ---- FUN_1000_a0be @ 1000:a0be

void __cdecl16far FUN_1000_a0be(undefined4 param_1)

{
  FUN_1000_dd66();
  M007_PUTVALUE(0x1000,param_1);
  return;
}


// ---- FUN_1000_a0fa @ 1000:a0fa

void __cdecl16far FUN_1000_a0fa(void)

{
  undefined2 *puVar1;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined1 local_a [4];
  undefined1 local_6 [4];
  
  uVar7 = 0x1008;
  uVar6 = 2;
  M007_PUTSTATE(unaff_CS,1);
  uVar5 = 7;
  puVar1 = (undefined2 *)M007_GETVALUE(0x1010,local_6);
  uVar4 = puVar1[1];
  uVar3 = *puVar1;
  uVar2 = 6;
  puVar1 = (undefined2 *)M007_GETVALUE(0x1010,local_a);
  FUN_1000_de48(*puVar1,puVar1[1],uVar2,uVar3,uVar4,uVar5,uVar6,uVar7);
  return;
}


// ---- FUN_1000_a140 @ 1000:a140

void __cdecl16far FUN_1000_a140(void)

{
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  
  uVar2 = 0x1008;
  uVar1 = 2;
  M007_PUTSTATE(unaff_CS,0);
  FUN_1000_de48(DAT_1008_09d2,DAT_1008_09d4,DAT_1008_09d2,DAT_1008_09d4,uVar1,uVar2);
  return;
}


// ---- FUN_1000_a16e @ 1000:a16e

void __cdecl16far FUN_1000_a16e(undefined4 param_1)

{
  int iVar1;
  undefined2 *puVar2;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 local_a;
  undefined2 uStack_8;
  undefined1 local_6 [4];
  
  uVar4 = 0x1008;
  uVar3 = 6;
  uStack_8 = (undefined2)((ulong)param_1 >> 0x10);
  local_a = (undefined2)param_1;
  M007_PUTVALUE(unaff_CS,local_a,uStack_8);
  iVar1 = M007_GETSTATE(0x1010,2,uVar3,uVar4);
  if (iVar1 == 1) {
    uVar3 = 7;
    puVar2 = (undefined2 *)M007_GETVALUE(0x1010,local_6);
    FUN_1000_de48(param_1,*puVar2,puVar2[1],uVar3);
  }
  return;
}


// ---- FUN_1000_a1c8 @ 1000:a1c8

void __cdecl16far FUN_1000_a1c8(undefined4 param_1)

{
  int iVar1;
  undefined2 *puVar2;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uStack_8;
  undefined1 local_6 [4];
  
  uVar6 = 0x1008;
  uVar5 = 7;
  uStack_8 = (undefined2)((ulong)param_1 >> 0x10);
  M007_PUTVALUE(unaff_CS,(int)param_1,uStack_8);
  uVar4 = 2;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    uVar3 = 6;
    puVar2 = (undefined2 *)M007_GETVALUE(0x1010,local_6);
    FUN_1000_de48(*puVar2,puVar2[1],uVar3,param_1,uVar4,uVar5,uVar6);
  }
  return;
}


// ---- FUN_1000_a222 @ 1000:a222

void __cdecl16far FUN_1000_a222(void)

{
  undefined2 *puVar1;
  int iVar2;
  undefined2 unaff_CS;
  undefined2 uVar3;
  undefined2 unaff_SS;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined1 local_6 [4];
  
  uVar5 = 0x1008;
  uVar4 = 2;
  puVar1 = (undefined2 *)M007_GETVALUE(unaff_CS,local_6);
  DAT_1008_00bc = *puVar1;
  DAT_1008_00be = puVar1[1];
  uVar3 = 0x1010;
  DAT_1008_00c0 = M007_GETSTATE(0x1010,0x9e,uVar4,uVar5);
  if (DAT_1008_00c0 == 0) {
    uVar4 = 0x9e;
    M007_PUTSTATE(0x1010,1);
    uVar3 = 0x1000;
    FUN_1000_bb5a(uVar4);
  }
  iVar2 = M007_GETSTATE(uVar3,0x53);
  uVar3 = DAT_1008_09d2;
  uVar4 = DAT_1008_09d4;
  if (iVar2 == 1) {
    uVar3 = DAT_1008_09ea;
    uVar4 = DAT_1008_09ec;
  }
  FUN_1000_b988(uVar3,uVar4);
  uVar3 = 0x18;
  M007_PUTSTATE(0x1000,1);
  FUN_1000_de80((undefined2)DAT_1008_1472,DAT_1008_1472._2_2_,uVar3);
  return;
}


// ---- FUN_1000_a2a6 @ 1000:a2a6

void __cdecl16far FUN_1000_a2a6(void)

{
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  
  uVar2 = 0x1008;
  uVar1 = 0x18;
  M007_PUTSTATE(unaff_CS,0);
  FUN_1000_b988(DAT_1008_00bc,DAT_1008_00be,uVar1,uVar2);
  if (DAT_1008_00c0 == 0) {
    uVar1 = 0x9e;
    M007_PUTSTATE(0x1000,0);
    FUN_1000_bb5a(uVar1);
  }
  FUN_1000_de80(DAT_1008_09d2,DAT_1008_09d4);
  return;
}


// ---- FUN_1000_a2f2 @ 1000:a2f2

void __cdecl16far FUN_1000_a2f2(undefined4 param_1)

{
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  
  uVar2 = 0x1008;
  DAT_1008_1472 = param_1;
  uVar1 = 0x2d;
  M007_PUTVALUE(unaff_CS,param_1);
  FUN_1000_de80(param_1,uVar1,uVar2);
  return;
}


// ---- FUN_1000_a33c @ 1000:a33c

void __cdecl16far FUN_1000_a33c(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined2 unaff_CS;
  int local_4;
  
  M007_PUTSTATE(unaff_CS,0x15);
  local_4 = 0;
  do {
    puVar3 = (undefined2 *)(local_4 * 0x26 + 0x194c);
    puVar5 = (undefined2 *)(local_4 * 0x26 + 0x15c8);
    for (iVar4 = 0x13; iVar4 != 0; iVar4 = iVar4 + -1) {
      puVar2 = puVar5;
      puVar5 = puVar5 + 1;
      puVar1 = puVar3;
      puVar3 = puVar3 + 1;
      *puVar2 = *puVar1;
    }
    local_4 = local_4 + 1;
  } while (local_4 < 4);
  return;
}


// ---- FUN_1000_a37c @ 1000:a37c

void __cdecl16far FUN_1000_a37c(void)

{
  undefined2 unaff_CS;
  
  M007_PUTSTATE(unaff_CS,0);
  return;
}


// ---- FUN_1000_a392 @ 1000:a392

void __cdecl16far FUN_1000_a392(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined2 unaff_CS;
  undefined2 uVar6;
  undefined2 uVar7;
  int local_4;
  
  uVar7 = 0x1008;
  uVar6 = 0x10;
  M007_PUTSTATE(unaff_CS,0);
  local_4 = 0;
  do {
    puVar3 = (undefined2 *)(local_4 * 0x26 + 0x15c8);
    puVar5 = (undefined2 *)(local_4 * 0x26 + 0x194c);
    for (iVar4 = 0x13; iVar4 != 0; iVar4 = iVar4 + -1) {
      puVar2 = puVar5;
      puVar5 = puVar5 + 1;
      puVar1 = puVar3;
      puVar3 = puVar3 + 1;
      *puVar2 = *puVar1;
    }
    local_4 = local_4 + 1;
  } while (local_4 < 4);
  uVar6 = M007_GETSTATE(0x1010,0x1a,uVar6,uVar7);
  FUN_1000_a9b6(uVar6);
  return;
}


// ---- FUN_1000_a3e0 @ 1000:a3e0

void __cdecl16far FUN_1000_a3e0(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  float fVar3;
  float fVar4;
  undefined2 *puVar5;
  float *pfVar6;
  int iVar7;
  undefined2 in_DX;
  undefined2 extraout_DX;
  undefined2 *puVar8;
  undefined2 unaff_SS;
  undefined4 uVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  undefined2 uVar12;
  undefined2 uVar13;
  undefined2 uVar14;
  float local_16;
  undefined4 local_12;
  undefined4 local_e;
  undefined2 local_a;
  undefined2 uStack_8;
  undefined4 local_6;
  
  puVar5 = (undefined2 *)FUN_1000_c20c(0x1008);
  local_e = (float)CONCAT22(puVar5[1],*puVar5);
  local_12 = (float)CONCAT22(DAT_1008_09f0,DAT_1008_09ee);
  uVar9 = M007_GETSTATE(0x1000,0x83);
  uVar11 = (undefined2)((ulong)uVar9 >> 0x10);
  if ((int)uVar9 == 1) {
    puVar5 = (undefined2 *)FUN_1000_dccc();
    puVar8 = (undefined2 *)&DAT_1008_1494;
    for (iVar7 = 0x52; iVar7 != 0; iVar7 = iVar7 + -1) {
      puVar2 = puVar8;
      puVar8 = puVar8 + 1;
      puVar1 = puVar5;
      puVar5 = puVar5 + 1;
      *puVar2 = *puVar1;
    }
    uVar14 = 0;
    M007_PUTVALUE(0x1000,local_e * DAT_1008_1498);
    uVar11 = 8;
    M007_PUTVALUE(0x1010,DAT_1008_151c,DAT_1008_151e);
    uVar9 = CONCAT22(uVar11,9);
    M007_PUTVALUE(0x1010,DAT_1008_14f8,DAT_1008_14fa);
    uVar13 = 0xd;
    uVar11 = 0xa4a8;
    M007_PUTVALUE(0x1010,DAT_1008_14d4,DAT_1008_14d6);
    uVar12 = 0xa4af;
    iVar7 = M007_GETSTATE(0x1010,6,uVar13,uVar9,uVar14);
    if (iVar7 == 1) {
      M007_PUTVALUE(0x1010,DAT_1008_14d8,DAT_1008_14da);
      uVar12 = 0xe8;
      M007_PUTVALUE(0x1010,DAT_1008_14d8,DAT_1008_14da);
      uVar11 = 0x16;
      M007_PUTVALUE(0x1010,DAT_1008_1494,DAT_1008_1496);
    }
    if (DAT_1008_1498 != (float)DAT_1008_09fa) {
      local_12 = DAT_1008_0a02 / DAT_1008_1498;
      M007_PUTVALUE(0x1010,local_12);
      local_16 = local_12;
      M007_PUTVALUE(0x1010,local_12 * DAT_1008_0a06);
      M007_PUTVALUE(0x1010,local_16 * DAT_1008_0a0a);
    }
    uVar13 = 0xa2;
    M007_PUTSTATE(0x1010,DAT_1008_1536);
    FUN_1000_ce82(DAT_1008_1536,uVar13,uVar11,uVar12);
    uVar11 = 0x1b;
    M007_PUTSTATE(0x1000,DAT_1008_1534 + -1);
    iVar7 = M007_GETSTATE(0x1010,6,uVar11);
    if (iVar7 == 1) {
      uVar11 = 0x1010;
      iVar7 = M007_GETSTATE(0x1010,0xe);
      if (iVar7 == 1) {
        if (DAT_1008_00ca != DAT_1008_1534) {
          uVar11 = 0xaa;
          M007_PUTSTATE(0x1010,1);
          DAT_1008_00ca = DAT_1008_1534;
        }
        iVar7 = M007_GETSTATE(0x1010,0x1a,uVar11);
        M007_PUTSTATE(0x1010,iVar7 - DAT_1008_1534 == -1);
      }
    }
    M007_PUTXY(0x1010,DAT_1008_14bc,DAT_1008_14be,DAT_1008_14b8,DAT_1008_14ba);
    uVar10 = 0x34;
    M007_PUTXY(0x1010,DAT_1008_14b4,DAT_1008_14b6,DAT_1008_14b0,DAT_1008_14b2);
    uVar14 = 0x38;
    M007_PUTXY(0x1010,DAT_1008_14a8._0_2_,DAT_1008_14a8._2_2_,DAT_1008_14a4._0_2_,
               DAT_1008_14a4._2_2_);
    uVar13 = 0x3f;
    M007_PUTVALUE(0x1010,DAT_1008_149c,DAT_1008_149e);
    uVar12 = 0x40;
    M007_PUTVALUE(0x1010,DAT_1008_14a0,DAT_1008_14a2);
    uVar11 = extraout_DX;
    puVar5 = (undefined2 *)FUN_1000_cb46(uVar12,uVar13,uVar14,uVar10);
    local_a = *puVar5;
    uStack_8 = puVar5[1];
    local_6 = (float)CONCAT22(puVar5[3],puVar5[2]);
    M007_PUTXY(0x1000,(DAT_1008_14a8 * DAT_1008_14c0) / local_6,DAT_1008_14a4 * DAT_1008_14c0);
    uVar10 = 0xee;
    M007_PUTLOW(0x1010,DAT_1008_0a0e * DAT_1008_14c0);
    uVar14 = 0xef;
    M007_PUTLOW(0x1010,(DAT_1008_0a0e * DAT_1008_14c0) / local_6);
    uVar13 = 0xee;
    M007_PUTHIGH(0x1010,DAT_1008_09f2 * DAT_1008_14c0);
    uVar12 = 0xef;
    M007_PUTHIGH(0x1010,(DAT_1008_09f2 * DAT_1008_14c0) / local_6);
    uVar11 = 0x1010;
    iVar7 = M007_GETSTATE(0x1010,0xb7,uVar12,uVar13,uVar14,uVar10);
    fVar4 = local_e;
    if (iVar7 == 1) {
      fVar3 = local_e * DAT_1008_14ac;
      uVar12 = 0xe6;
      uVar11 = 0x1010;
      pfVar6 = (float *)M007_GETVALUE(0x1010,&local_16);
      if (fVar3 != *pfVar6) {
        uVar11 = 0x1000;
        FUN_1000_be76(fVar4 * DAT_1008_14ac,uVar12);
      }
    }
    uVar12 = 0xe6;
    M007_PUTVALUE(uVar11,local_e * DAT_1008_14ac);
    uVar11 = 0x1010;
    iVar7 = M007_GETSTATE(0x1010,0x17,uVar12);
    if (iVar7 != 0) {
      uVar11 = 0x1000;
      FUN_1000_9bce(DAT_1008_1530);
    }
    iVar7 = M007_GETSTATE(uVar11,0x19);
    if (iVar7 != 0) {
      FUN_1000_92b6(DAT_1008_1530);
    }
  }
  else {
    M007_PUTVALUE(0x1010,DAT_1008_09f2._0_2_,DAT_1008_09f2._2_2_);
    M007_PUTVALUE(0x1010,DAT_1008_09f6,DAT_1008_09f8);
    M007_PUTVALUE(0x1010,DAT_1008_09f6,DAT_1008_09f8);
  }
  return;
}


// ---- FUN_1000_a792 @ 1000:a792

void __cdecl16far FUN_1000_a792(int param_1)

{
  undefined2 *puVar1;
  undefined2 unaff_SS;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined1 local_6 [4];
  
  FUN_1000_dbe2(param_1,0x1008);
  uVar3 = 6;
  M007_PUTSTATE(0x1000,param_1);
  if (param_1 == 1) {
    uVar2 = 1;
    puVar1 = (undefined2 *)M007_GETVALUE(0x1010,local_6);
    FUN_1000_9b28(*puVar1,puVar1[1],uVar2,uVar3);
  }
  FUN_1000_a3e0();
  return;
}


// ---- FUN_1000_a7da @ 1000:a7da

void __cdecl16far FUN_1000_a7da(void)

{
  undefined2 uVar1;
  undefined2 uVar2;
  
  uVar2 = 0x1008;
  if (DAT_1008_00c4 == 0) {
    uVar1 = 6;
    DAT_1008_00c6 = M007_GETSTATE();
    DAT_1008_00c4 = 1;
    FUN_1000_a792(0,uVar1,uVar2);
  }
  return;
}


// ---- FUN_1000_a806 @ 1000:a806

void __cdecl16far FUN_1000_a806(void)

{
  if (DAT_1008_00c4 == 1) {
    DAT_1008_00c4 = 0;
    FUN_1000_a792(DAT_1008_00c6,0x1008);
  }
  return;
}


// ---- FUN_1000_a82a @ 1000:a82a

void __cdecl16far FUN_1000_a82a(int param_1)

{
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 local_4;
  
  uVar2 = 0x1008;
  if (param_1 == 0) {
    local_4 = 0;
  }
  else if (param_1 == 1) {
    local_4 = 1;
  }
  uVar1 = 9;
  M007_PUTSTATE(unaff_CS,param_1);
  FUN_1000_dc1e(local_4,uVar1,uVar2);
  FUN_1000_a3e0();
  return;
}


// ---- FUN_1000_a868 @ 1000:a868

void __cdecl16far FUN_1000_a868(undefined2 param_1)

{
  undefined2 uVar1;
  
  FUN_1000_dc3e(param_1,0x1008);
  uVar1 = 8;
  M007_PUTSTATE(0x1000,param_1);
  FUN_1000_a3e0(uVar1);
  return;
}


// ---- FUN_1000_a88c @ 1000:a88c

void __cdecl16far FUN_1000_a88c(undefined2 param_1)

{
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  
  uVar2 = 0x1008;
  uVar1 = 0xb0;
  M007_PUTSTATE(unaff_CS,param_1);
  FUN_1000_eba0(param_1,uVar1,uVar2);
  return;
}


// ---- FUN_1000_a8ac @ 1000:a8ac

undefined2 __cdecl16far FUN_1000_a8ac(void)

{
  return 0x1008;
}


// ---- FUN_1000_a8b8 @ 1000:a8b8

void __cdecl16far FUN_1000_a8b8(undefined4 param_1)

{
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 local_6;
  
  uVar2 = 0x1008;
  uVar1 = 0xeb;
  local_6 = (undefined2)param_1;
  M007_PUTVALUE(unaff_CS,local_6,(int)((ulong)param_1 >> 0x10));
  FUN_1000_ebc0(param_1,uVar1,uVar2);
  return;
}


// ---- FUN_1000_a8f4 @ 1000:a8f4

void __cdecl16far FUN_1000_a8f4(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 unaff_SS;
  
  puVar5 = (undefined2 *)&DAT_1008_1538;
  puVar4 = (undefined2 *)&stack0x0004;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar2 = *puVar1;
  }
  return;
}


// ---- FUN_1000_a916 @ 1000:a916

void __cdecl16far FUN_1000_a916(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  
  puVar5 = (undefined2 *)&DAT_1008_19ea;
  puVar4 = (undefined2 *)&DAT_1008_1538;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar2 = *puVar1;
  }
  return;
}


// ---- FUN_1000_a938 @ 1000:a938

void __cdecl16far FUN_1000_a938(int param_1)

{
  int iVar1;
  undefined2 unaff_CS;
  undefined2 uVar2;
  undefined2 local_4;
  
  uVar2 = 0x1008;
  if (param_1 == 0) {
    for (local_4 = 1; local_4 < 4; local_4 = local_4 + 1) {
      FUN_1000_dc7e(local_4 * 0x10 + 0x1588,0x1008);
    }
  }
  else {
    for (local_4 = 1; local_4 < 4; local_4 = local_4 + 1) {
      if (local_4 < 4) {
        iVar1 = local_4 * 0x10 + 0x1548;
      }
      else {
        iVar1 = 0x1548;
      }
      unaff_CS = 0x1000;
      FUN_1000_dc7e(iVar1,0x1008);
    }
    iVar1 = M007_GETSTATE(unaff_CS,0x1a,uVar2);
    if (2 < iVar1) {
      FUN_1000_a9b6(2);
    }
  }
  DAT_1008_00c8 = param_1;
  return;
}


// ---- FUN_1000_a9b6 @ 1000:a9b6

void __cdecl16far FUN_1000_a9b6(int param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  
  uVar5 = 0x1008;
  uVar4 = 0x8c;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 3) {
    iVar1 = M007_GETSTATE(0x1010,0x10a,uVar4,uVar5);
    if (iVar1 == 1) {
      param_1 = 0;
    }
  }
  M007_PUTSTATE(0x1010,param_1);
  M007_PUTSTATE(0x1010,1);
  param_1 = param_1 + 1;
  if (DAT_1008_00c8 == 0) {
    iVar1 = param_1 * 0x10;
    *(int *)(iVar1 + 0x1596) = param_1;
    uVar3 = 0x3c;
    M007_PUTVALUE(0x1010,*(undefined2 *)(iVar1 + 0x1588),*(undefined2 *)(iVar1 + 0x158a));
    uVar5 = 0x3d;
    M007_PUTXY(0x1010,*(undefined2 *)(iVar1 + 0x1590),*(undefined2 *)(iVar1 + 0x1592),
               *(undefined2 *)(iVar1 + 0x158c),*(undefined2 *)(iVar1 + 0x158e));
    uVar4 = *(undefined2 *)(iVar1 + 0x1594);
  }
  else {
    iVar1 = param_1 * 0x10;
    *(int *)(iVar1 + 0x1556) = param_1;
    uVar3 = 0x3c;
    M007_PUTVALUE(0x1010,*(undefined2 *)(iVar1 + 0x1548),*(undefined2 *)(iVar1 + 0x154a));
    uVar5 = 0x3d;
    M007_PUTXY(0x1010,*(undefined2 *)(iVar1 + 0x1550),*(undefined2 *)(iVar1 + 0x1552),
               *(undefined2 *)(iVar1 + 0x154c),*(undefined2 *)(iVar1 + 0x154e));
    uVar4 = *(undefined2 *)(iVar1 + 0x1554);
  }
  uVar2 = 0x1c;
  M007_PUTSTATE(0x1010,uVar4);
  FUN_1000_dc5e(param_1,uVar2,uVar5,uVar3);
  FUN_1000_a3e0();
  return;
}


// ---- FUN_1000_aa88 @ 1000:aa88

void __cdecl16far FUN_1000_aa88(undefined2 param_1,undefined2 param_2)

{
  int iVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  uVar4 = 0x1008;
  uVar3 = 0x1a;
  iVar1 = M007_GETSTATE();
  if (DAT_1008_00c8 == 0) {
    iVar1 = (iVar1 + 1) * 0x10;
    *(undefined2 *)(iVar1 + 0x1588) = param_1;
    *(undefined2 *)(iVar1 + 0x158a) = param_2;
    puVar2 = (undefined2 *)(iVar1 + 0x1588);
  }
  else {
    iVar1 = (iVar1 + 1) * 0x10;
    *(undefined2 *)(iVar1 + 0x1548) = param_1;
    *(undefined2 *)(iVar1 + 0x154a) = param_2;
    puVar2 = (undefined2 *)(iVar1 + 0x1548);
  }
  FUN_1000_dc7e(puVar2,0x1008,uVar3,uVar4);
  uVar3 = 0x3c;
  M007_PUTVALUE(0x1000,*puVar2,puVar2[1]);
  FUN_1000_a3e0(uVar3);
  return;
}


// ---- FUN_1000_aaf8 @ 1000:aaf8

void __cdecl16far FUN_1000_aaf8(undefined2 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x1a;
  iVar1 = M007_GETSTATE();
  if (DAT_1008_00c8 == 0) {
    iVar1 = (iVar1 + 1) * 0x10;
    *(undefined2 *)(iVar1 + 0x1594) = param_1;
    FUN_1000_dc7e(iVar1 + 0x1588,0x1008,uVar2,uVar3);
    uVar2 = *(undefined2 *)(iVar1 + 0x1594);
  }
  else {
    iVar1 = (iVar1 + 1) * 0x10;
    *(undefined2 *)(iVar1 + 0x1554) = param_1;
    FUN_1000_dc7e(iVar1 + 0x1548,0x1008,uVar2,uVar3);
    uVar2 = *(undefined2 *)(iVar1 + 0x1554);
  }
  uVar3 = 0x1c;
  M007_PUTSTATE(0x1000,uVar2);
  FUN_1000_a3e0(uVar3);
  return;
}


// ---- FUN_1000_ab70 @ 1000:ab70

void __cdecl16far FUN_1000_ab70(undefined2 param_1,undefined2 param_2,undefined4 param_3)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  iVar1 = M007_GETSTATE();
  if (DAT_1008_00c8 == 0) {
    iVar1 = (iVar1 + 1) * 0x10;
    *(undefined2 *)(iVar1 + 0x158c) = param_1;
    *(undefined2 *)(iVar1 + 0x158e) = param_2;
    *(undefined4 *)(iVar1 + 0x1590) = param_3;
    uVar3 = *(undefined2 *)(iVar1 + 0x158e);
    uVar2 = *(undefined2 *)(iVar1 + 0x158c);
  }
  else {
    iVar1 = (iVar1 + 1) * 0x10;
    *(undefined2 *)(iVar1 + 0x154c) = param_1;
    *(undefined2 *)(iVar1 + 0x154e) = param_2;
    *(undefined4 *)(iVar1 + 0x1550) = param_3;
    uVar3 = *(undefined2 *)(iVar1 + 0x154e);
    uVar2 = *(undefined2 *)(iVar1 + 0x154c);
  }
  M007_PUTXY(0x1010,param_3,uVar2,uVar3);
  return;
}


// ---- FUN_1000_ac02 @ 1000:ac02

void __cdecl16far FUN_1000_ac02(undefined4 param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  int local_4;
  
  local_4 = 0;
  do {
    if (3 < local_4) {
      return;
    }
    if (DAT_1008_00c8 == 0) {
      puVar5 = (undefined2 *)(local_4 * 0x10 + 0x1588);
      puVar3 = (undefined2 *)(local_4 * 0x10 + (int)param_1);
LAB_1000_ac3e:
      for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
        puVar2 = puVar3;
        puVar3 = puVar3 + 1;
        puVar1 = puVar5;
        puVar5 = puVar5 + 1;
        *puVar2 = *puVar1;
      }
    }
    else {
      puVar5 = (undefined2 *)(local_4 * 0x10 + 0x1548);
      puVar3 = (undefined2 *)(local_4 * 0x10 + (int)param_1);
      puVar6 = puVar3;
      for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
        puVar2 = puVar6;
        puVar6 = puVar6 + 1;
        puVar1 = puVar5;
        puVar5 = puVar5 + 1;
        *puVar2 = *puVar1;
      }
      if (local_4 == 4) {
        puVar5 = (undefined2 *)&DAT_1008_1538;
        goto LAB_1000_ac3e;
      }
    }
    local_4 = local_4 + 1;
  } while( true );
}


// ---- FUN_1000_ac72 @ 1000:ac72

void __cdecl16far FUN_1000_ac72(int param_1,undefined2 param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  int iVar5;
  undefined2 *puVar6;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined1 local_c [4];
  undefined2 local_8;
  undefined2 local_6;
  int local_4;
  
  uVar8 = 0x1008;
  uVar7 = 0x16;
  puVar3 = (undefined2 *)M007_GETVALUE(unaff_CS,local_c);
  local_8 = *puVar3;
  local_6 = puVar3[1];
  local_4 = 0;
  do {
    if (3 < local_4) {
      return;
    }
    if (DAT_1008_00c8 == 0) {
      puVar3 = (undefined2 *)(local_4 * 0x10 + 0x1588);
LAB_1000_acd5:
      puVar4 = (undefined2 *)(local_4 * 0x10 + param_1);
      puVar6 = puVar3;
      for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
        puVar2 = puVar6;
        puVar6 = puVar6 + 1;
        puVar1 = puVar4;
        puVar4 = puVar4 + 1;
        *puVar2 = *puVar1;
      }
      FUN_1000_dc7e(puVar3,0x1008,uVar7,uVar8);
    }
    else {
      if (local_4 != 4) {
        puVar3 = (undefined2 *)(local_4 * 0x10 + 0x1548);
        goto LAB_1000_acd5;
      }
      puVar3 = (undefined2 *)(param_1 + 0x40);
      puVar4 = (undefined2 *)&DAT_1008_1538;
      for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
        puVar2 = puVar4;
        puVar4 = puVar4 + 1;
        puVar1 = puVar3;
        puVar3 = puVar3 + 1;
        *puVar2 = *puVar1;
      }
    }
    local_4 = local_4 + 1;
  } while( true );
}


// ---- FUN_1000_ad1a @ 1000:ad1a

void __cdecl16far FUN_1000_ad1a(undefined2 param_1,undefined2 param_2)

{
  FUN_1000_dca0(param_1,param_2,0x1008);
  FUN_1000_a3e0();
  return;
}


// ---- FUN_1000_ad3a @ 1000:ad3a

void __cdecl16far FUN_1000_ad3a(undefined2 param_1,undefined2 param_2)

{
  FUN_1000_e9ba(param_1,param_2,0x1008);
  return;
}


// ---- FUN_1000_ad54 @ 1000:ad54

void __cdecl16far FUN_1000_ad54(undefined2 param_1,undefined2 param_2)

{
  FUN_1000_e9ee(param_1,param_2,0x1008);
  return;
}


// ---- FUN_1000_ad6e @ 1000:ad6e

void __cdecl16far FUN_1000_ad6e(undefined2 param_1,undefined2 param_2)

{
  FUN_1000_ea2c(param_1,param_2,0x1008);
  return;
}


// ---- FUN_1000_ad88 @ 1000:ad88

void __cdecl16far FUN_1000_ad88(undefined2 param_1,undefined2 param_2)

{
  FUN_1000_eb0a(param_1,param_2,0x1008);
  return;
}


// ---- FUN_1000_ada2 @ 1000:ada2

void __cdecl16far FUN_1000_ada2(undefined2 param_1,undefined2 param_2)

{
  FUN_1000_ef74(param_1,param_2,0x1008);
  DAT_1008_00e8 = param_1;
  DAT_1008_00ea = param_2;
  return;
}


// ---- GET_EMISSION_CENTRE @ 1000:adca

undefined2 * __stdcall16far GET_EMISSION_CENTRE(undefined2 *param_1)

{
  undefined2 uVar1;
  undefined2 unaff_SS;
  
  uVar1 = DAT_1008_00ea;
  *param_1 = DAT_1008_00e8;
  param_1[1] = uVar1;
  return param_1;
}


// ---- FUN_1000_adee @ 1000:adee

void __cdecl16far FUN_1000_adee(void)

{
  undefined2 unaff_CS;
  
  M007_PUTSTATE(unaff_CS,0x13);
  DAT_1008_1660 = DAT_1008_00e8;
  DAT_1008_1662 = DAT_1008_00ea;
  return;
}


// ---- FUN_1000_ae12 @ 1000:ae12

void __cdecl16far FUN_1000_ae12(void)

{
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  undefined1 local_a [4];
  undefined1 local_6 [4];
  
  uVar2 = 0x1008;
  uVar1 = 0xd0;
  M007_GETVALUE(unaff_CS,local_6);
  DAT_1008_00e8 = FUN_1000_0282(uVar1,uVar2);
  uVar1 = 0xd1;
  M007_GETVALUE(0x1000,local_a);
  DAT_1008_00ea = FUN_1000_0282(uVar1);
  FUN_1000_ef74(DAT_1008_00e8,DAT_1008_00ea);
  return;
}


// ---- FUN_1000_ae60 @ 1000:ae60

void __cdecl16far FUN_1000_ae60(void)

{
  DAT_1008_00e8 = DAT_1008_1660;
  DAT_1008_00ea = DAT_1008_1662;
  Ordinal_45();
  return;
}


// ---- FUN_1000_ae9e @ 1000:ae9e

void __cdecl16far FUN_1000_ae9e(undefined2 param_1)

{
  undefined2 uVar1;
  
  FUN_1000_e354(3,0x1008);
  uVar1 = 0x11;
  M007_PUTSTATE(0x1000,param_1);
  FUN_1000_e2c4(param_1,1,uVar1);
  FUN_1000_c4ee();
  FUN_1000_e354(4);
  return;
}


// ---- FUN_1000_aed6 @ 1000:aed6

void __cdecl16far FUN_1000_aed6(int param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  int local_4;
  
  uVar3 = 0x1008;
  uVar2 = 0x11;
  local_4 = M007_GETSTATE();
  while( true ) {
    if ((local_4 < 0) && (0xf < local_4)) {
      return;
    }
    if (param_1 == 0) {
      local_4 = local_4 + -1;
    }
    else if (param_1 == 1) {
      local_4 = local_4 + 1;
    }
    if (local_4 < 0) break;
    if (0xf < local_4) {
      return;
    }
    iVar1 = COMMANDENABLE(0x1010,local_4 + 0x1d,uVar2,uVar3);
    if (iVar1 == 0) {
      FUN_1000_ae9e(local_4);
      return;
    }
  }
  return;
}


// ---- FUN_1000_af36 @ 1000:af36

void __cdecl16far FUN_1000_af36(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  undefined2 unaff_CS;
  undefined2 uVar2;
  
  uVar2 = 0x1008;
  DAT_1008_00e6 = param_4;
  if (param_1 != DAT_1008_00ec) {
    unaff_CS = 0x1000;
    FUN_1000_e2e6(param_1,0,0x1008);
  }
  if (param_1 == 5) {
    unaff_CS = 0x1000;
    FUN_1000_e2e6(0,0,uVar2);
  }
  if (param_1 == 3) {
    iVar1 = M007_GETSTATE(unaff_CS,199);
    if (iVar1 == 1) {
      CHANGE_XRAY_SCAN_LINE(0x1010,param_3);
    }
    else {
      uVar2 = 0x46;
      M007_PUTXY(0x1010,(float)param_3,(float)param_2);
      FUN_1000_e308(param_2,param_3,param_4 + param_2,param_3 + 1,1,uVar2);
    }
  }
  else if (param_1 == 4) {
    uVar2 = 0x44;
    M007_PUTXY(unaff_CS,(float)param_3,(float)param_2);
    FUN_1000_e93c(param_3,param_2,7,uVar2);
  }
  else if ((param_5 != 0) || (param_4 != 0)) {
    FUN_1000_e354(3);
    FUN_1000_e308(param_2,param_3,param_4 + param_2,param_5 + param_3,1);
    uVar2 = 0x1000;
    iVar1 = M007_GETSTATE(0x1000,0x1f);
    if (iVar1 == 1) {
      uVar2 = 0x3a;
      M007_PUTXY(0x1010,(float)param_3,(float)param_2);
    }
    FUN_1000_e354(1,uVar2);
    FUN_1000_e354(4);
  }
  DAT_1008_00ec = param_1;
  if (param_1 != 4) {
    FUN_1000_c4ee();
  }
  return;
}


// ---- FUN_1000_b08a @ 1000:b08a

undefined2 __cdecl16far FUN_1000_b08a(void)

{
  return DAT_1008_00e6;
}


// ---- FUN_1000_b09a @ 1000:b09a

void __cdecl16far FUN_1000_b09a(undefined2 param_1)

{
  FUN_1000_e334(param_1,0x1008);
  return;
}


// ---- FUN_1000_b0b0 @ 1000:b0b0

void __cdecl16far FUN_1000_b0b0(undefined2 param_1,undefined2 param_2,int param_3,int param_4)

{
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  undefined1 local_e [4];
  undefined1 local_a [4];
  int local_6;
  int local_4;
  
  uVar2 = 0x1008;
  uVar1 = 0x49;
  M007_GETVALUE(unaff_CS,local_a);
  local_4 = FUN_1000_0282(uVar1,uVar2);
  uVar2 = 1;
  uVar1 = 0x4a;
  M007_GETVALUE(0x1000,local_e);
  local_6 = FUN_1000_0282(uVar1,uVar2);
  FUN_1000_e374(param_1,param_2,param_3 - local_4,-(local_6 - param_4));
  return;
}


// ---- FUN_1000_b10c @ 1000:b10c

void __cdecl16far FUN_1000_b10c(void)

{
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  undefined1 local_a [4];
  undefined1 local_6 [4];
  
  uVar2 = 0x1008;
  uVar1 = 0x49;
  M007_GETVALUE(unaff_CS,local_6);
  DAT_1008_00cc = FUN_1000_0282(uVar1,uVar2);
  uVar1 = 0x4a;
  M007_GETVALUE(0x1000,local_a);
  DAT_1008_00ce = FUN_1000_0282(uVar1);
  M007_PUTSTATE(0x1000,5);
  return;
}


// ---- FUN_1000_b154 @ 1000:b154

void __cdecl16far FUN_1000_b154(void)

{
  FUN_1000_b170(DAT_1008_00cc,DAT_1008_00ce,0x1008);
  return;
}


// ---- FUN_1000_b170 @ 1000:b170

void __cdecl16far FUN_1000_b170(int param_1,int param_2)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined2 uVar4;
  undefined4 uVar3;
  undefined4 uVar5;
  undefined1 local_e [4];
  undefined1 local_a [8];
  
  M007_PUTXY(unaff_CS,(float)param_2,(float)param_1);
  uVar4 = 0x3b;
  M007_GETVALUE();
  uVar1 = FUN_1000_0282();
  uVar5 = CONCAT22(uVar4,uVar1);
  uVar4 = 0x3a;
  M007_GETVALUE(0x1000,local_a);
  uVar1 = FUN_1000_0282();
  uVar3 = CONCAT22(uVar4,uVar1);
  uVar1 = 0x43;
  puVar2 = (undefined2 *)M007_GETVALUE(0x1000,local_e);
  FUN_1000_b0b0(*puVar2,puVar2[1],uVar1,uVar3,uVar5);
  return;
}


// ---- FUN_1000_b1ea @ 1000:b1ea

void __cdecl16far FUN_1000_b1ea(void)

{
  undefined2 uVar1;
  undefined1 local_6 [4];
  
  FUN_1000_cfe6(0x1008);
  uVar1 = 0xdd;
  M007_GETVALUE(0x1000,local_6);
  DAT_1008_00d0 = FUN_1000_0282(uVar1);
  M007_PUTSTATE(0x1000,10);
  return;
}


// ---- FUN_1000_b220 @ 1000:b220

void __cdecl16far FUN_1000_b220(void)

{
  FUN_1000_b23c(DAT_1008_00d0,0x1008);
  FUN_1000_d046();
  return;
}


// ---- FUN_1000_b23c @ 1000:b23c

void __cdecl16far FUN_1000_b23c(int param_1)

{
  undefined2 unaff_CS;
  
  M007_PUTVALUE(unaff_CS,(float)param_1);
  FUN_1000_e89a();
  return;
}


// ---- FUN_1000_b268 @ 1000:b268

void __cdecl16far FUN_1000_b268(void)

{
  undefined2 uVar1;
  undefined1 local_6 [4];
  
  FUN_1000_cfe6(0x1008);
  uVar1 = 0xde;
  M007_GETVALUE(0x1000,local_6);
  DAT_1008_00d2 = FUN_1000_0282(uVar1);
  M007_PUTSTATE(0x1000,0xb);
  return;
}


// ---- FUN_1000_b29e @ 1000:b29e

void __cdecl16far FUN_1000_b29e(void)

{
  FUN_1000_b2ba(DAT_1008_00d2,0x1008);
  FUN_1000_d046();
  return;
}


// ---- FUN_1000_b2ba @ 1000:b2ba

void __cdecl16far FUN_1000_b2ba(int param_1)

{
  undefined2 unaff_CS;
  
  M007_PUTVALUE(unaff_CS,(float)param_1);
  FUN_1000_e8ba();
  return;
}


// ---- FUN_1000_b2e6 @ 1000:b2e6

void __cdecl16far FUN_1000_b2e6(void)

{
  undefined2 uVar1;
  undefined1 local_6 [4];
  
  FUN_1000_cfe6(0x1008);
  uVar1 = 0xdf;
  M007_GETVALUE(0x1000,local_6);
  DAT_1008_00d4 = FUN_1000_0282(uVar1);
  M007_PUTSTATE(0x1000,0xc);
  return;
}


// ---- FUN_1000_b31c @ 1000:b31c

void __cdecl16far FUN_1000_b31c(void)

{
  FUN_1000_b338(DAT_1008_00d4,0x1008);
  FUN_1000_d046();
  return;
}


// ---- FUN_1000_b338 @ 1000:b338

void __cdecl16far FUN_1000_b338(int param_1)

{
  undefined2 unaff_CS;
  
  M007_PUTVALUE(unaff_CS,(float)param_1);
  FUN_1000_e8da();
  return;
}


// ---- FUN_1000_b364 @ 1000:b364

void __cdecl16far FUN_1000_b364(void)

{
  undefined2 uVar1;
  undefined1 local_a [4];
  undefined1 local_6 [4];
  
  FUN_1000_cfe6(0x1008);
  uVar1 = 0xe0;
  M007_GETVALUE(0x1000,local_6);
  DAT_1008_00d6 = FUN_1000_0282(uVar1);
  uVar1 = 0xe1;
  M007_GETVALUE(0x1000,local_a);
  DAT_1008_00d8 = FUN_1000_0282(uVar1);
  DAT_1008_00da = DAT_1008_00d6;
  uVar1 = 0x10;
  DAT_1008_00dc = DAT_1008_00d8;
  M007_PUTSTATE(0x1000,0xd);
  FUN_1000_b3f6(0,uVar1);
  FUN_1000_b48c(0);
  return;
}


// ---- FUN_1000_b3d0 @ 1000:b3d0

void __cdecl16far FUN_1000_b3d0(void)

{
  FUN_1000_b3f6(DAT_1008_00d6,0x1008);
  FUN_1000_b48c(DAT_1008_00d8);
  FUN_1000_d046();
  return;
}


// ---- FUN_1000_b3f6 @ 1000:b3f6

void __cdecl16far FUN_1000_b3f6(int param_1)

{
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  
  uVar2 = 0x1008;
  DAT_1008_00da = param_1;
  uVar1 = 0xe0;
  M007_PUTVALUE(unaff_CS,(float)param_1);
  FUN_1000_e8fa(param_1,DAT_1008_00dc,uVar1,uVar2);
  return;
}


// ---- FUN_1000_b432 @ 1000:b432

void __cdecl16far FUN_1000_b432(int param_1,int param_2)

{
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  DAT_1008_00da = param_1;
  DAT_1008_00dc = param_2;
  uVar2 = 0xe0;
  M007_PUTVALUE(unaff_CS,(float)param_1);
  uVar1 = 0xe1;
  M007_PUTVALUE(0x1010,(float)param_2);
  FUN_1000_e8fa(param_1,param_2,uVar1,uVar2,uVar3);
  return;
}


// ---- FUN_1000_b48c @ 1000:b48c

void __cdecl16far FUN_1000_b48c(int param_1)

{
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  
  uVar2 = 0x1008;
  DAT_1008_00dc = param_1;
  uVar1 = 0xe1;
  M007_PUTVALUE(unaff_CS,(float)param_1);
  FUN_1000_e8fa(DAT_1008_00da,param_1,uVar1,uVar2);
  return;
}


// ---- FUN_1000_b4c8 @ 1000:b4c8

void __cdecl16far FUN_1000_b4c8(int param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  FUN_1000_ccf2(param_1,0x1008);
  if (param_1 == 1) {
    uVar2 = 0x1010;
    iVar1 = M007_GETSTATE(0x1000,0x14);
    if (iVar1 == 1) {
      uVar2 = 0x1000;
      SWITCHBEAM_BLANKED(0);
    }
    uVar3 = 0xa4;
    M007_PUTSTATE(uVar2,1);
    SWITCHFREEZE_ON(0x1010,2,uVar3);
    DOCOMMANDFREEZE_ALL(0x1010);
    FUN_1000_e91c(1);
    FUN_1000_e354(0);
    FUN_1000_e354(1);
  }
  else {
    uVar2 = 0xa4;
    M007_PUTSTATE(0x1000,param_1);
    DOCOMMANDUNFREEZE_ALL(0x1010,uVar2);
    FUN_1000_e91c(param_1);
  }
  return;
}


// ---- FUN_1000_b53e @ 1000:b53e

void __cdecl16far FUN_1000_b53e(void)

{
  undefined2 *puVar1;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined1 local_a [4];
  undefined1 local_6 [4];
  
  M007_PUTSTATE(unaff_CS,0xe);
  puVar1 = (undefined2 *)M007_GETVALUE(0x1010,local_6);
  DAT_1008_00de = *puVar1;
  DAT_1008_00e0 = puVar1[1];
  puVar1 = (undefined2 *)M007_GETVALUE(0x1010,local_a);
  DAT_1008_00e2 = *puVar1;
  DAT_1008_00e4 = puVar1[1];
  return;
}


// ---- FUN_1000_b58c @ 1000:b58c

void __cdecl16far FUN_1000_b58c(undefined4 param_1)

{
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 local_6;
  
  uVar2 = 0x1008;
  uVar1 = 0xe7;
  local_6 = (undefined2)param_1;
  M007_PUTVALUE(unaff_CS,local_6,(int)((ulong)param_1 >> 0x10));
  FUN_1000_e962(param_1,uVar1,uVar2);
  return;
}


// ---- FUN_1000_b5c8 @ 1000:b5c8

void __cdecl16far FUN_1000_b5c8(undefined4 param_1)

{
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 local_6;
  
  uVar2 = 0x1008;
  uVar1 = 0xe9;
  local_6 = (undefined2)param_1;
  M007_PUTVALUE(unaff_CS,local_6,(int)((ulong)param_1 >> 0x10));
  FUN_1000_e98e(param_1,uVar1,uVar2);
  return;
}


// ---- FUN_1000_b604 @ 1000:b604

void __cdecl16far FUN_1000_b604(void)

{
  FUN_1000_b58c(DAT_1008_00de,DAT_1008_00e0,0x1008);
  FUN_1000_b5c8(DAT_1008_00e2,DAT_1008_00e4);
  M007_PUTSTATE(0x1000,0);
  return;
}


// ---- FUN_1000_b63a @ 1000:b63a

undefined2 __cdecl16far FUN_1000_b63a(void)

{
  return 0x1008;
}


// ---- FUN_1000_b646 @ 1000:b646

void __cdecl16far FUN_1000_b646(void)

{
  float *pfVar1;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined1 local_a [4];
  undefined1 local_6 [4];
  
  uVar4 = 0x1008;
  uVar3 = 0x10;
  M007_PUTSTATE(unaff_CS,0x16);
  DAT_1008_0288 = DAT_1008_0286;
  DAT_1008_028a = 1000;
  uVar2 = 0x32;
  pfVar1 = (float *)M007_GETVALUE(0x1010,local_6);
  FUN_1000_e178(0,*pfVar1 / ((float)DAT_1008_028a * DAT_1008_0a12),uVar2,uVar3,uVar4);
  uVar2 = 0x33;
  pfVar1 = (float *)M007_GETVALUE(0x1000,local_a);
  FUN_1000_e178(1,*pfVar1 / ((float)DAT_1008_028a * DAT_1008_0a12),uVar2);
  return;
}


// ---- FUN_1000_b6ce @ 1000:b6ce

void __cdecl16far FUN_1000_b6ce(void)

{
  int iVar1;
  float *pfVar2;
  undefined2 unaff_SS;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined1 local_a [4];
  undefined1 local_6 [4];
  
  uVar5 = 0x1008;
  uVar4 = 0x116;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    DAT_1008_028a = DAT_1008_0288;
  }
  else {
    DAT_1008_028a = 1000;
  }
  uVar3 = 0x32;
  pfVar2 = (float *)M007_GETVALUE(0x1010,local_6);
  FUN_1000_e178(0,*pfVar2 / ((float)DAT_1008_028a * DAT_1008_0a12),uVar3,uVar4,uVar5);
  uVar4 = 0x33;
  pfVar2 = (float *)M007_GETVALUE(0x1000,local_a);
  FUN_1000_e178(1,*pfVar2 / ((float)DAT_1008_028a * DAT_1008_0a12),uVar4);
  return;
}


// ---- FUN_1000_b75a @ 1000:b75a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_1000_b75a(void)

{
  float *pfVar1;
  int iVar2;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined1 local_5e [64];
  float local_1e;
  float local_1a;
  undefined1 local_16 [4];
  undefined1 local_12 [4];
  undefined1 local_e [4];
  undefined1 local_a [4];
  undefined4 local_6;
  
  local_6 = (float)CONCAT22(DAT_1008_0a16._2_2_,(undefined2)DAT_1008_0a16);
  uVar4 = 0xb77c;
  pfVar1 = (float *)M007_GETVALUE(unaff_CS,local_a);
  if (_DAT_1008_0a1a < *pfVar1) {
    pfVar1 = (float *)M007_GETVALUE(0x1010,local_12);
    local_1a = *pfVar1;
    pfVar1 = (float *)M007_GETVALUE(0x1010,local_e);
    local_1e = *pfVar1 * local_1a;
    uVar4 = 0x30;
    pfVar1 = (float *)M007_GETVALUE(0x1010,local_16);
    local_6 = local_1e / *pfVar1;
  }
  DAT_1008_0286 = FUN_1000_0282(uVar4);
  if (DAT_1008_0286 < 800) {
    DAT_1008_0286 = 800;
  }
  if (0x4b0 < DAT_1008_0286) {
    DAT_1008_0286 = 0x4b0;
  }
  uVar4 = 0x1010;
  iVar2 = M007_GETSTATE(0x1000,0x116);
  if (iVar2 == 1) {
    DAT_1008_028a = DAT_1008_0286;
    uVar4 = 0x32;
    pfVar1 = (float *)M007_GETVALUE(0x1010,&local_1e);
    FUN_1000_e178(0,*pfVar1 / ((float)DAT_1008_028a * DAT_1008_0a12),uVar4);
    uVar3 = 0x33;
    pfVar1 = (float *)M007_GETVALUE(0x1000,&local_1a);
    uVar4 = 0x1000;
    FUN_1000_e178(1,*pfVar1 / ((float)DAT_1008_028a * DAT_1008_0a12),uVar3);
  }
  _WSPRINTF(uVar4,local_5e);
  UIF_MESSAGE(0x1010,local_5e,unaff_SS);
  return;
}


// ---- FUN_1000_b89a @ 1000:b89a

void __cdecl16far FUN_1000_b89a(int param_1)

{
  float *pfVar1;
  undefined1 *puVar2;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined1 local_a [4];
  undefined1 local_6 [4];
  
  uVar5 = 0x1008;
  uVar4 = 0x116;
  M007_PUTSTATE(unaff_CS,param_1);
  if (param_1 == 1) {
    DAT_1008_028a = DAT_1008_0286;
    uVar3 = 0x32;
    pfVar1 = (float *)M007_GETVALUE(0x1010,local_6);
    FUN_1000_e178(0,*pfVar1 / ((float)DAT_1008_028a * DAT_1008_0a12),uVar3,uVar4,uVar5);
    puVar2 = local_a;
  }
  else {
    DAT_1008_028a = 1000;
    uVar3 = 0x32;
    pfVar1 = (float *)M007_GETVALUE(0x1010,local_a);
    FUN_1000_e178(0,*pfVar1 / ((float)DAT_1008_028a * DAT_1008_0a12),uVar3,uVar4,uVar5);
    puVar2 = local_6;
  }
  uVar4 = 0x33;
  pfVar1 = (float *)M007_GETVALUE(0x1000,puVar2);
  FUN_1000_e178(1,*pfVar1 / ((float)DAT_1008_028a * DAT_1008_0a12),uVar4);
  return;
}


// ---- SETDEFPRINTFACTOR @ 1000:b964

void __stdcall16far SETDEFPRINTFACTOR(undefined2 param_1,undefined2 param_2)

{
  DAT_1008_0134 = param_1;
  DAT_1008_0136 = param_2;
  FUN_1000_bfa6(0xf,0x1008);
  return;
}


// ---- FUN_1000_b988 @ 1000:b988

void __cdecl16far FUN_1000_b988(undefined4 param_1)

{
  FUN_1000_e0f4();
  M007_PUTVALUE(0x1000,param_1);
  return;
}


// ---- FUN_1000_b9c4 @ 1000:b9c4

void __cdecl16far FUN_1000_b9c4(void)

{
  undefined2 *puVar1;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined1 local_6 [4];
  
  puVar1 = (undefined2 *)M007_GETVALUE(unaff_CS,local_6);
  DAT_1008_00f2 = *puVar1;
  DAT_1008_00f4 = puVar1[1];
  M007_PUTSTATE(0x1010,7);
  return;
}


// ---- FUN_1000_b9f6 @ 1000:b9f6

void __cdecl16far FUN_1000_b9f6(void)

{
  FUN_1000_ba12(DAT_1008_00f2,DAT_1008_00f4,0x1008);
  return;
}


// ---- FUN_1000_ba12 @ 1000:ba12

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_1000_ba12(float param_1)

{
  float fVar1;
  undefined2 local_6;
  undefined2 uStack_4;
  
  fVar1 = param_1;
  if (param_1 < _DAT_1008_0a1a) {
    fVar1 = param_1 + DAT_1008_0a1e;
  }
  uStack_4 = (undefined2)((ulong)fVar1 >> 0x10);
  local_6 = SUB42(fVar1,0);
  FUN_1000_e120(local_6,uStack_4,0x1008);
  M007_PUTVALUE(0x1000,param_1._0_2_,param_1._2_2_);
  return;
}


// ---- FUN_1000_ba66 @ 1000:ba66

void __cdecl16far FUN_1000_ba66(void)

{
  undefined2 *puVar1;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined1 local_6 [4];
  
  puVar1 = (undefined2 *)M007_GETVALUE(unaff_CS,local_6);
  DAT_1008_00ee = *puVar1;
  DAT_1008_00f0 = puVar1[1];
  M007_PUTSTATE(0x1010,3);
  return;
}


// ---- FUN_1000_ba98 @ 1000:ba98

void __cdecl16far FUN_1000_ba98(void)

{
  FUN_1000_bab4(DAT_1008_00ee,DAT_1008_00f0,0x1008);
  return;
}


// ---- FUN_1000_bab4 @ 1000:bab4

void __cdecl16far FUN_1000_bab4(undefined4 param_1)

{
  FUN_1000_e14c();
  M007_PUTVALUE(0x1000,param_1);
  return;
}


// ---- FUN_1000_baf0 @ 1000:baf0

void __cdecl16far FUN_1000_baf0(undefined2 param_1,undefined2 param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  uVar4 = 0x1008;
  uVar3 = 0x9d;
  uVar2 = 0x1010;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    uVar2 = 0x1000;
    FUN_1000_e1a6(param_1,param_2,uVar3,uVar4);
  }
  M007_PUTVALUE(uVar2,param_1,param_2);
  return;
}


// ---- FUN_1000_bb22 @ 1000:bb22

void __cdecl16far FUN_1000_bb22(int param_1)

{
  undefined4 uVar1;
  
  FUN_1000_e1d2(param_1,0x1008);
  uVar1 = DAT_1008_0a22;
  if (param_1 == 1) {
    uVar1 = 0;
  }
  M007_PUTVALUE(0x1000,uVar1);
  return;
}


// ---- FUN_1000_bb5a @ 1000:bb5a

void __cdecl16far FUN_1000_bb5a(void)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x9e;
  uVar1 = M007_GETSTATE();
  uVar1 = M007_GETSTATE(0x1010,0x9d,uVar1,uVar2,uVar3);
  uVar1 = M007_GETSTATE(0x1010,0xa1,uVar1);
  uVar1 = M007_GETSTATE(0x1010,0xa0,uVar1);
  uVar1 = M007_GETSTATE(0x1010,0x9f,uVar1);
  FUN_1000_e86e(uVar1);
  return;
}


// ---- FUN_1000_bb9c @ 1000:bb9c

void __cdecl16far FUN_1000_bb9c(void)

{
  DAT_1008_1668 = DAT_1008_0140;
  DAT_1008_166a = DAT_1008_0142;
  DAT_1008_166c = DAT_1008_0144;
  DAT_1008_166e = DAT_1008_0146;
  FUN_1000_b89a(0,0x1008);
  DAT_1008_0286 = 1000;
  DAT_1008_1670 = M007_GETSTATE(0x1000,0x2a);
  DAT_1008_1672 = M007_GETSTATE(0x1010,0x2b);
  M007_PUTSTATE(0x1010,9);
  return;
}


// ---- FUN_1000_bbf0 @ 1000:bbf0

void __cdecl16far FUN_1000_bbf0(void)

{
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  
  uVar5 = 0x1008;
  uVar4 = 0x2a;
  M007_PUTSTATE(unaff_CS,DAT_1008_1670);
  uVar3 = 0x2b;
  M007_PUTSTATE(0x1010,DAT_1008_1672);
  uVar2 = 0x32;
  M007_PUTVALUE(0x1010,DAT_1008_1668,DAT_1008_166a);
  uVar1 = 0x33;
  M007_PUTVALUE(0x1010,DAT_1008_166c,DAT_1008_166e);
  FUN_1000_e178(0,DAT_1008_1668,DAT_1008_166a,uVar1,uVar2,uVar3,uVar4,uVar5);
  FUN_1000_e178(1,DAT_1008_166c,DAT_1008_166e);
  FUN_1000_a3e0();
  return;
}


// ---- FUN_1000_bc5a @ 1000:bc5a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_1000_bc5a(int param_1,float param_2)

{
  float *pfVar1;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  float local_1a;
  float local_16;
  undefined1 local_12 [4];
  float local_e;
  float local_a;
  float local_6;
  
  if (param_2 != (float)DAT_1008_0a26) {
    if (param_1 == 0) {
      pfVar1 = (float *)M007_GETVALUE(unaff_CS,&local_a);
      if (_DAT_1008_0a1a < *pfVar1) {
        uVar5 = 0x80;
        pfVar1 = (float *)M007_GETVALUE(0x1010,local_12);
        local_16 = *pfVar1;
        uVar4 = 0xc2;
        pfVar1 = (float *)M007_GETVALUE();
        local_6 = *pfVar1 * local_16;
        local_1a = param_2;
        _DAT_1008_0140 = (param_2 * _DAT_1008_0140) / local_6;
        uVar3 = 0x30;
        M007_PUTVALUE(0x1010,param_2);
        uVar2 = 0x32;
        M007_PUTVALUE(0x1010,DAT_1008_0140,DAT_1008_0142);
        FUN_1000_e178(0,DAT_1008_0140,DAT_1008_0142,uVar2,uVar3,uVar4,uVar5);
        FUN_1000_a3e0();
LAB_1000_bd2b:
        M007_PUTSTATE(0x1000,1);
        return;
      }
    }
    else if ((param_1 == 1) &&
            (pfVar1 = (float *)M007_GETVALUE(unaff_CS,&local_1a), _DAT_1008_0a1a < *pfVar1)) {
      uVar5 = 0x80;
      pfVar1 = (float *)M007_GETVALUE(0x1010,local_12);
      local_e = *pfVar1;
      uVar4 = 0xc3;
      pfVar1 = (float *)M007_GETVALUE();
      local_6 = *pfVar1 * local_e;
      local_a = param_2;
      _DAT_1008_0144 = (param_2 * _DAT_1008_0144) / local_6;
      uVar3 = 0x31;
      M007_PUTVALUE(0x1010,param_2);
      uVar2 = 0x33;
      M007_PUTVALUE(0x1010,DAT_1008_0144,DAT_1008_0146);
      FUN_1000_e178(1,DAT_1008_0144,DAT_1008_0146,uVar2,uVar3,uVar4,uVar5);
      goto LAB_1000_bd2b;
    }
  }
  return;
}


// ---- FUN_1000_bdf0 @ 1000:bdf0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_1000_bdf0(undefined4 param_1,undefined4 param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  
  _DAT_1008_0140 = param_1;
  _DAT_1008_0144 = param_2;
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_1000_e178(0,(int)param_1,uVar1,0x1008,param_2);
  uVar2 = 0x32;
  M007_PUTVALUE(0x1000,(int)param_1,uVar1);
  FUN_1000_e178(1,(int)param_2,(int)((ulong)param_2 >> 0x10),uVar2);
  M007_PUTVALUE(0x1000,(int)param_2,(int)((ulong)param_2 >> 0x10));
  return;
}


// ---- FUN_1000_be76 @ 1000:be76

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_1000_be76(float param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  undefined2 uVar4;
  
  fVar1 = param_1 / (DAT_1008_013c * _DAT_1008_0138);
  fVar2 = DAT_1008_0a2e / fVar1;
  FUN_1000_e1f2(fVar1,0x1008);
  uVar4 = 0x1010;
  iVar3 = M007_GETSTATE(0x1000,6);
  if (iVar3 == 1) {
    iVar3 = M007_GETSTATE(0x1010,9);
    if (iVar3 != 1) {
      uVar4 = 0x1010;
      iVar3 = M007_GETSTATE(0x1010,8);
      if (iVar3 != 1) goto LAB_1000_bedd;
    }
    uVar4 = 0x1000;
    FUN_1000_dc02();
  }
LAB_1000_bedd:
  M007_PUTVALUE(uVar4,param_1._0_2_,param_1._2_2_);
  M007_PUTVALUE(0x1010,fVar2);
  M007_PUTVALUE(0x1010,fVar2 * DAT_1008_0a32);
  M007_PUTVALUE(0x1010,fVar2 * DAT_1008_0a36);
  return;
}


// ---- FUN_1000_bf3e @ 1000:bf3e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_1000_bf3e(int param_1)

{
  float fVar1;
  float *pfVar2;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined1 local_a [4];
  float local_6;
  
  uVar4 = 0x1008;
  fVar1 = (float)param_1 * DAT_1008_0a3a + _DAT_1008_0a3e;
  uVar3 = 0;
  pfVar2 = (float *)M007_GETVALUE(unaff_CS,local_a);
  local_6 = *pfVar2 * fVar1;
  FUN_1000_be76(local_6,uVar3,uVar4);
  return;
}


// ---- FUN_1000_bf86 @ 1000:bf86

void __cdecl16far FUN_1000_bf86(undefined2 param_1)

{
  FUN_1000_e21e(param_1,0x1008);
  M007_PUTSTATE(0x1000,param_1);
  return;
}


// ---- FUN_1000_bfa6 @ 1000:bfa6

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_1000_bfa6(int param_1)

{
  float fVar1;
  float *pfVar2;
  int iVar3;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  float local_12;
  undefined2 local_e;
  undefined2 uStack_c;
  undefined4 local_a;
  float local_6;
  
  uVar6 = 0x1008;
  uVar5 = 0x2c;
  M007_PUTSTATE(unaff_CS,param_1);
  uVar4 = 0;
  pfVar2 = (float *)M007_GETVALUE(0x1010,&local_12);
  local_6 = *pfVar2 / (DAT_1008_013c * _DAT_1008_0138);
  DAT_1008_013c = (float)CONCAT22(DAT_1008_0a40,DAT_1008_0a3e);
  iVar3 = M007_GETSTATE(0x1010,0x14b,uVar4,uVar5,uVar6);
  uVar4 = DAT_1008_0100;
  uVar5 = DAT_1008_0102;
  if (iVar3 == 0) {
    uVar4 = *(undefined2 *)(param_1 * 4 + 0xf8);
    uVar5 = *(undefined2 *)(param_1 * 4 + 0xfa);
  }
  _DAT_1008_0138 = (float)CONCAT22(uVar5,uVar4);
  if (_DAT_1008_0138 == 0.0) {
    _DAT_1008_0138 = (float)CONCAT22(DAT_1008_0a40,DAT_1008_0a3e);
  }
  uVar4 = M007_GETSTATE(0x1010,0x11b);
  switch(uVar4) {
  case 7:
  case 8:
  case 9:
  case 0x17:
  case 0x18:
    uVar4 = DAT_1008_0a42;
    uVar5 = DAT_1008_0a44;
    break;
  default:
    uVar4 = DAT_1008_0a4a;
    uVar5 = DAT_1008_0a4c;
    break;
  case 0x13:
  case 0x16:
    uVar4 = DAT_1008_0a46;
    uVar5 = DAT_1008_0a48;
  }
  _local_e = CONCAT22(uVar5,uVar4);
  M007_PUTHIGH();
  local_12 = local_6;
  fVar1 = local_6 * DAT_1008_013c * _DAT_1008_0138;
  local_a._2_2_ = (undefined2)((ulong)fVar1 >> 0x10);
  uVar4 = local_a._2_2_;
  local_a = fVar1;
  M007_PUTVALUE(0x1010,SUB42(fVar1,0),uVar4);
  M007_PUTVALUE(0x1010,DAT_1008_0a2e / local_12);
  return;
}


// ---- FUN_1000_c0f8 @ 1000:c0f8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_1000_c0f8(float param_1)

{
  float fVar1;
  float *pfVar2;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined2 uVar3;
  undefined2 uVar4;
  float local_12;
  undefined2 local_e;
  undefined2 uStack_c;
  undefined4 local_a;
  float local_6;
  
  uVar4 = 0x1008;
  uVar3 = 0;
  pfVar2 = (float *)M007_GETVALUE(unaff_CS,&local_12);
  local_6 = *pfVar2 / (DAT_1008_013c * _DAT_1008_0138);
  DAT_1008_013c = param_1;
  if (param_1 == _DAT_1008_0a1a) {
    DAT_1008_013c = (float)CONCAT22(DAT_1008_0a40,DAT_1008_0a3e);
  }
  uVar3 = M007_GETSTATE(0x1010,0x11b,uVar3,uVar4);
  switch(uVar3) {
  case 7:
  case 8:
  case 9:
  case 0x17:
  case 0x18:
    uVar3 = DAT_1008_0a42;
    uVar4 = DAT_1008_0a44;
    break;
  default:
    uVar3 = DAT_1008_0a4a;
    uVar4 = DAT_1008_0a4c;
    break;
  case 0x13:
  case 0x16:
    uVar3 = DAT_1008_0a46;
    uVar4 = DAT_1008_0a48;
  }
  _local_e = CONCAT22(uVar4,uVar3);
  M007_PUTHIGH();
  local_12 = local_6;
  fVar1 = local_6 * DAT_1008_013c * _DAT_1008_0138;
  local_a._2_2_ = (undefined2)((ulong)fVar1 >> 0x10);
  uVar3 = local_a._2_2_;
  local_a = fVar1;
  M007_PUTVALUE(0x1010,SUB42(fVar1,0),uVar3);
  M007_PUTVALUE(0x1010,DAT_1008_0a2e / local_12);
  return;
}


// ---- FUN_1000_c20c @ 1000:c20c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 __cdecl16far FUN_1000_c20c(void)

{
  _DAT_1008_0366 = DAT_1008_013c * _DAT_1008_0138;
  return 0x366;
}


// ---- FUN_1000_c22e @ 1000:c22e

void __cdecl16far FUN_1000_c22e(void)

{
  undefined2 unaff_CS;
  
  DAT_1008_1664 = DAT_1008_0138;
  DAT_1008_1666 = DAT_1008_013a;
  M007_PUTVALUE(unaff_CS,DAT_1008_0a1a,DAT_1008_0a1c);
  return;
}


// ---- FUN_1000_c258 @ 1000:c258

void __cdecl16far FUN_1000_c258(float param_1)

{
  float fVar1;
  float *pfVar2;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 local_1c;
  undefined2 uStack_1a;
  undefined1 local_18 [4];
  undefined1 local_14 [4];
  undefined1 local_10 [4];
  float local_c;
  float local_8;
  int local_4;
  
  uVar6 = 0x1008;
  uVar5 = 0xea;
  uStack_1a = (undefined2)((ulong)param_1 >> 0x10);
  local_1c = SUB42(param_1,0);
  M007_PUTVALUE(unaff_CS,local_1c,uStack_1a);
  uVar4 = 0x80;
  pfVar2 = (float *)M007_GETVALUE(0x1010,local_10);
  fVar1 = *pfVar2;
  uVar3 = 0xc2;
  pfVar2 = (float *)M007_GETVALUE(0x1010,local_14);
  local_8 = *pfVar2 * fVar1;
  param_1 = param_1 / local_8;
  local_c = param_1;
  local_4 = M007_GETSTATE(0x1010,0x2c,uVar3,uVar4,uVar5,uVar6);
  uVar3 = 0;
  pfVar2 = (float *)M007_GETVALUE(0x1010,local_18);
  *(float *)(local_4 * 4 + 0xf8) = (param_1 / *pfVar2) * *(float *)(local_4 * 4 + 0xf8);
  FUN_1000_bfa6(local_4,uVar3);
  return;
}


// ---- FUN_1000_c2f6 @ 1000:c2f6

void __cdecl16far FUN_1000_c2f6(void)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  uVar4 = 0x1008;
  uVar3 = 0x2c;
  iVar2 = M007_GETSTATE();
  uVar1 = DAT_1008_1666;
  *(undefined2 *)(iVar2 * 4 + 0xf8) = DAT_1008_1664;
  *(undefined2 *)(iVar2 * 4 + 0xfa) = uVar1;
  FUN_1000_bfa6(iVar2,uVar3,uVar4);
  M007_PUTVALUE(0x1000,DAT_1008_0a1a,DAT_1008_0a1c);
  return;
}


// ---- FUN_1000_c33c @ 1000:c33c

void __cdecl16far FUN_1000_c33c(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_CS;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 local_4;
  
  uVar4 = 0x1008;
  local_4 = 0;
  do {
    iVar1 = local_4 * 4;
    uVar2 = (undefined2)((ulong)param_1 >> 0x10);
    uVar3 = *(undefined2 *)(iVar1 + (int)param_1 + 2);
    *(undefined2 *)(iVar1 + 0xf8) = *(undefined2 *)(iVar1 + (int)param_1);
    *(undefined2 *)(iVar1 + 0xfa) = uVar3;
    uVar3 = 0x1010;
    iVar1 = M007_GETSTATE(unaff_CS,0x2c,uVar4);
    if (iVar1 == local_4) {
      uVar3 = 0x1000;
      FUN_1000_bfa6(iVar1);
    }
    local_4 = local_4 + 1;
    unaff_CS = uVar3;
  } while (local_4 < 0x10);
  return;
}


// ---- FUN_1000_c384 @ 1000:c384

void __cdecl16far FUN_1000_c384(int param_1,undefined2 param_2)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 local_4;
  
  local_4 = 0;
  do {
    iVar2 = local_4 * 4;
    uVar1 = *(undefined2 *)(iVar2 + 0xfa);
    *(undefined2 *)(iVar2 + param_1) = *(undefined2 *)(iVar2 + 0xf8);
    *(undefined2 *)(iVar2 + param_1 + 2) = uVar1;
    local_4 = local_4 + 1;
  } while (local_4 < 0x10);
  return;
}


// ---- FUN_1000_c3bc @ 1000:c3bc

void __cdecl16far FUN_1000_c3bc(int param_1)

{
  int iVar1;
  undefined2 local_4;
  
  local_4 = 0;
  iVar1 = FUN_1000_b08a(0x1008);
  if (((iVar1 < 0x400) && (1 < param_1)) && (param_1 < 9)) {
    local_4 = FUN_1000_0282();
  }
  iVar1 = param_1 * 6;
  FUN_1000_e23e(*(undefined2 *)(iVar1 + 0x148),*(undefined2 *)(iVar1 + 0x14a));
  FUN_1000_e26a(param_1,*(int *)(iVar1 + 0x14c) + local_4);
  M007_PUTVALUE(0x1000,*(undefined2 *)(iVar1 + 0x148),*(undefined2 *)(iVar1 + 0x14a));
  M007_PUTVALUE(0x1010,(float)(*(int *)(iVar1 + 0x14c) + -1));
  return;
}


// ---- FUN_1000_c460 @ 1000:c460

void __cdecl16far FUN_1000_c460(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 local_4;
  
  uVar3 = 0x1008;
  local_4 = 0;
  do {
    iVar1 = local_4 * 6;
    *(undefined2 *)(iVar1 + 0x1674) = *(undefined2 *)(iVar1 + 0x148);
    *(undefined2 *)(iVar1 + 0x1676) = *(undefined2 *)(iVar1 + 0x14a);
    *(undefined2 *)(iVar1 + 0x1678) = *(undefined2 *)(iVar1 + 0x14c);
    local_4 = local_4 + 1;
  } while (local_4 < 0x10);
  uVar2 = 0x1d;
  DAT_1008_00f6 = M007_GETSTATE();
  FUN_1000_e2c4(DAT_1008_00f6,1,uVar2,uVar3);
  FUN_1000_c3bc(DAT_1008_00f6);
  return;
}


// ---- FUN_1000_c4b4 @ 1000:c4b4

void __cdecl16far FUN_1000_c4b4(void)

{
  int iVar1;
  undefined2 local_4;
  
  local_4 = 0;
  do {
    iVar1 = local_4 * 6;
    *(undefined2 *)(iVar1 + 0x148) = *(undefined2 *)(iVar1 + 0x1674);
    *(undefined2 *)(iVar1 + 0x14a) = *(undefined2 *)(iVar1 + 0x1676);
    *(undefined2 *)(iVar1 + 0x14c) = *(undefined2 *)(iVar1 + 0x1678);
    local_4 = local_4 + 1;
  } while (local_4 < 0x10);
  FUN_1000_c4ee(0x1008);
  return;
}


// ---- FUN_1000_c4ee @ 1000:c4ee

void __cdecl16far FUN_1000_c4ee(void)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  uVar4 = 0x1008;
  uVar3 = 0x1d;
  uVar2 = 0x11;
  uVar1 = M007_GETSTATE();
  M007_PUTSTATE(0x1010,uVar1);
  uVar1 = M007_GETSTATE(0x1010,0x11,uVar2,uVar3,uVar4);
  FUN_1000_c3bc(uVar1);
  return;
}


// ---- FUN_1000_c518 @ 1000:c518

void __cdecl16far FUN_1000_c518(undefined2 param_1)

{
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  
  uVar2 = 0x1008;
  uVar1 = 0x1d;
  DAT_1008_00f6 = param_1;
  M007_PUTSTATE(unaff_CS,param_1);
  FUN_1000_e2c4(DAT_1008_00f6,1,uVar1,uVar2);
  FUN_1000_c3bc(DAT_1008_00f6);
  return;
}


// ---- FUN_1000_c54a @ 1000:c54a

void __cdecl16far FUN_1000_c54a(undefined4 param_1)

{
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  
  uVar2 = 0x1008;
  *(undefined4 *)(DAT_1008_00f6 * 6 + 0x148) = param_1;
  uVar1 = 0x1f;
  M007_PUTVALUE(unaff_CS,param_1);
  FUN_1000_e23e(param_1,uVar1,uVar2);
  return;
}


// ---- FUN_1000_c598 @ 1000:c598

void __cdecl16far FUN_1000_c598(undefined4 param_1)

{
  undefined2 uVar1;
  undefined2 uVar2;
  
  uVar1 = FUN_1000_0282(0x1008);
  *(undefined2 *)(DAT_1008_00f6 * 6 + 0x14c) = uVar1;
  uVar2 = 0x20;
  M007_PUTVALUE(0x1000,param_1);
  FUN_1000_e26a(DAT_1008_00f6,uVar1,uVar2);
  return;
}


// ---- FUN_1000_c5e8 @ 1000:c5e8

undefined2 __cdecl16far FUN_1000_c5e8(int param_1)

{
  DAT_1008_0366 = *(undefined2 *)(param_1 * 6 + 0x148);
  DAT_1008_0368 = *(undefined2 *)(param_1 * 6 + 0x14a);
  return 0x366;
}


// ---- FUN_1000_c60c @ 1000:c60c

undefined2 __cdecl16far FUN_1000_c60c(int param_1)

{
  return *(undefined2 *)(param_1 * 6 + 0x14c);
}


// ---- FUN_1000_c620 @ 1000:c620

void __cdecl16far FUN_1000_c620(int param_1,undefined4 param_2,int param_3)

{
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  uVar4 = 0x1008;
  if (9 < param_1) {
    param_3 = 0;
  }
  *(undefined4 *)(param_1 * 6 + 0x148) = param_2;
  *(int *)(param_1 * 6 + 0x14c) = param_3;
  uVar3 = 0x1f;
  uVar1 = (undefined2)((ulong)param_2 >> 0x10);
  M007_PUTVALUE(unaff_CS,(int)param_2,uVar1);
  uVar2 = 0x20;
  M007_PUTVALUE(0x1010,(float)param_3);
  FUN_1000_e23e((int)param_2,uVar1,uVar2,uVar3,uVar4);
  FUN_1000_e26a(param_1,param_3 + 1);
  return;
}


// ---- FUN_1000_c6a6 @ 1000:c6a6

void __cdecl16far FUN_1000_c6a6(undefined4 param_1,undefined4 param_2)

{
  FUN_1000_e28c();
  M007_PUTXY(0x1000,param_2,param_1);
  return;
}


// ---- FUN_1000_c6fe @ 1000:c6fe

void __cdecl16far FUN_1000_c6fe(int param_1,int param_2)

{
  undefined2 *puVar1;
  float *pfVar2;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  longdouble lVar3;
  longdouble lVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined1 local_26 [4];
  undefined1 local_22 [4];
  undefined1 local_1e [4];
  undefined1 local_1a [4];
  undefined4 local_16;
  undefined4 local_12;
  float local_e;
  undefined2 local_a;
  undefined2 uStack_8;
  float local_6;
  
  uVar9 = 0x1008;
  uVar8 = 0;
  puVar1 = (undefined2 *)M007_GETVALUE(unaff_CS,local_1a);
  local_a = *puVar1;
  uStack_8 = puVar1[1];
  uVar7 = 1;
  pfVar2 = (float *)M007_GETVALUE(0x1010,local_1e);
  local_e = *pfVar2 * DAT_1008_0a16;
  uVar6 = 0x38;
  puVar1 = (undefined2 *)M007_GETVALUE(0x1010,local_22);
  local_12 = (float)CONCAT22(puVar1[1],*puVar1);
  uVar5 = 0x39;
  puVar1 = (undefined2 *)M007_GETVALUE(0x1010,local_26);
  local_16 = (float)CONCAT22(puVar1[1],*puVar1);
  FUN_1000_02c0(uVar5,uVar6,uVar7,uVar8,uVar9);
  lVar3 = (longdouble)DAT_1008_0a3a;
  FUN_1000_02ea();
  local_6 = (float)lVar3;
  local_12 = (float)(lVar3 * (longdouble)param_1 + (longdouble)local_12);
  FUN_1000_02c0();
  lVar4 = (longdouble)DAT_1008_0a66;
  FUN_1000_02ea();
  local_12 = (float)lVar4;
  local_16 = (float)param_2 * (float)lVar3 + local_16;
  FUN_1000_02c0();
  lVar3 = (longdouble)DAT_1008_0a66;
  FUN_1000_02ea();
  local_16 = (float)lVar3;
  FUN_1000_c6a6((undefined2)local_12,local_12._2_2_,local_16);
  return;
}


// ---- FUN_1000_c80c @ 1000:c80c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_1000_c80c(float param_1,float param_2)

{
  float *pfVar1;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined1 local_12 [4];
  undefined1 local_e [4];
  float local_a;
  undefined4 local_6;
  
  uVar4 = 0x1008;
  uVar3 = 0xee;
  pfVar1 = (float *)M007_GETVALUE(unaff_CS,local_e);
  local_6 = param_1 - *pfVar1 * _DAT_1008_0a42;
  uVar2 = 0xef;
  pfVar1 = (float *)M007_GETVALUE(0x1010,local_12);
  local_a = param_2 - *pfVar1 * _DAT_1008_0a42;
  FUN_1000_ebec((undefined2)local_6,local_6._2_2_,local_a,uVar2,uVar3,uVar4);
  return;
}


// ---- FUN_1000_c87e @ 1000:c87e

void __cdecl16far FUN_1000_c87e(void)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  DAT_1008_16d8._0_2_ = DAT_1008_16d4;
  DAT_1008_16d8._2_2_ = DAT_1008_16d6;
  DAT_1008_16dc._0_2_ = DAT_1008_01ba;
  DAT_1008_16dc._2_2_ = DAT_1008_01bc;
  DAT_1008_16f2._0_2_ = DAT_1008_16ea;
  DAT_1008_16f2._2_2_ = DAT_1008_16ec;
  DAT_1008_16f6._0_2_ = DAT_1008_16ee;
  DAT_1008_16f6._2_2_ = DAT_1008_16f0;
  uVar2 = 0xe2;
  DAT_1008_16e8 = M007_GETSTATE();
  uVar1 = 0xe2;
  M007_PUTSTATE(0x1010,1);
  FUN_1000_c6a6(DAT_1008_0a1a,DAT_1008_0a1c,DAT_1008_0a1a,DAT_1008_0a1c,uVar1,uVar2,uVar3);
  return;
}


// ---- FUN_1000_c8f0 @ 1000:c8f0

void __cdecl16far FUN_1000_c8f0(void)

{
  undefined2 *puVar1;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined1 local_a [4];
  undefined1 local_6 [4];
  
  puVar1 = (undefined2 *)M007_GETVALUE(unaff_CS,local_6);
  DAT_1008_16e0._0_2_ = *puVar1;
  DAT_1008_16e0._2_2_ = puVar1[1];
  puVar1 = (undefined2 *)M007_GETVALUE(0x1010,local_a);
  DAT_1008_16e4._0_2_ = *puVar1;
  DAT_1008_16e4._2_2_ = puVar1[1];
  return;
}


// ---- FUN_1000_c934 @ 1000:c934

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_1000_c934(void)

{
  undefined2 *puVar1;
  float *pfVar2;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  float local_2a;
  float local_26;
  undefined1 local_1e [4];
  float local_1a;
  float local_16;
  undefined4 local_12;
  undefined4 local_e;
  undefined2 local_a;
  undefined2 local_8;
  undefined2 local_6;
  undefined2 local_4;
  
  uVar7 = 0x1008;
  uVar6 = 0xe2;
  M007_PUTSTATE(unaff_CS,DAT_1008_16e8);
  uVar5 = 0x38;
  puVar1 = (undefined2 *)M007_GETVALUE(0x1010,local_1e);
  local_e = (float)CONCAT22(puVar1[1],*puVar1);
  uVar4 = 0x39;
  puVar1 = (undefined2 *)M007_GETVALUE();
  local_12 = (float)CONCAT22(puVar1[1],*puVar1);
  local_26 = local_e - DAT_1008_16e0;
  local_2a = local_12 - DAT_1008_16e4;
  if ((_DAT_1008_0a3e <= local_26) && (_DAT_1008_0a3e <= local_2a)) {
    uVar3 = 0x80;
    local_1a = local_2a;
    local_16 = local_26;
    pfVar2 = (float *)M007_GETVALUE(0x1010,&local_2a);
    local_26 = local_16;
    _DAT_1008_16d4 = (*pfVar2 * DAT_1008_0a6a) / local_16;
    _DAT_1008_01ba = local_1a / local_16;
    FUN_1000_ec5c(_DAT_1008_16d4,_DAT_1008_01ba,uVar3,uVar4,uVar5,uVar6,uVar7);
    FUN_1000_ecec(&local_a);
    DAT_1008_16ea = local_a;
    DAT_1008_16ec = local_8;
    DAT_1008_16ee = local_6;
    DAT_1008_16f0 = local_4;
  }
  return;
}


// ---- FUN_1000_ca4a @ 1000:ca4a

void __cdecl16far FUN_1000_ca4a(void)

{
  FUN_1000_ec5c((undefined2)DAT_1008_16d8,DAT_1008_16d8._2_2_,(undefined2)DAT_1008_16dc,
                DAT_1008_16dc._2_2_,0x1008);
  FUN_1000_ecb4((undefined2)DAT_1008_16f2,DAT_1008_16f2._2_2_,(undefined2)DAT_1008_16f6,
                DAT_1008_16f6._2_2_);
  M007_PUTSTATE(0x1000,DAT_1008_16e8);
  return;
}


// ---- FUN_1000_ca92 @ 1000:ca92

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_1000_ca92(undefined4 param_1,undefined4 param_2)

{
  _DAT_1008_16d4 = param_1;
  _DAT_1008_01ba = param_2;
  DAT_1008_16d8 = param_1;
  DAT_1008_16dc = param_2;
  FUN_1000_ec5c(param_1,param_2,0x1008);
  return;
}


// ---- FUN_1000_caec @ 1000:caec

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_1000_caec(undefined4 param_1,undefined4 param_2)

{
  _DAT_1008_16ea = param_1;
  _DAT_1008_16ee = param_2;
  DAT_1008_16f2 = param_1;
  DAT_1008_16f6 = param_2;
  FUN_1000_ecb4(param_1,param_2,0x1008);
  return;
}


// ---- FUN_1000_cb46 @ 1000:cb46

void __cdecl16far FUN_1000_cb46(void)

{
  DAT_1008_19ea = DAT_1008_16d4;
  DAT_1008_19ec = DAT_1008_16d6;
  DAT_1008_19ee = DAT_1008_01ba;
  DAT_1008_19f0 = DAT_1008_01bc;
  return;
}


// ---- FUN_1000_cb86 @ 1000:cb86

void __cdecl16far FUN_1000_cb86(void)

{
  DAT_1008_19ea = DAT_1008_16ea;
  DAT_1008_19ec = DAT_1008_16ec;
  DAT_1008_19ee = DAT_1008_16ee;
  DAT_1008_19f0 = DAT_1008_16f0;
  return;
}


// ---- FUN_1000_cbc6 @ 1000:cbc6

void __cdecl16far FUN_1000_cbc6(int param_1,int param_2)

{
  int iVar1;
  int local_6;
  int local_4;
  
  iVar1 = FUN_1000_d988(0x1008);
  if (iVar1 != 1) {
    if (((param_1 < 0) && (-0xb < param_1)) || ((0 < param_1 && (param_1 < 0xb)))) {
      param_1 = 0;
    }
    if (((param_2 < 0) && (-0xb < param_2)) || ((0 < param_2 && (param_2 < 0xb)))) {
      param_2 = 0;
    }
    if ((param_1 == 0) && (param_2 == 0)) {
      DAT_1008_028c = 0;
    }
    else {
      if (param_1 == 0) {
        local_4 = 0;
      }
      else if (param_1 < 1) {
        local_4 = param_1 + 10;
      }
      else {
        local_4 = param_1 + -10;
      }
      if (param_2 == 0) {
        local_6 = 0;
      }
      else if (param_2 < 1) {
        local_6 = param_2 + 10;
      }
      else {
        local_6 = param_2 + -10;
      }
      FUN_1000_ec24((float)local_4,(float)local_6);
      if (DAT_1008_028c != 0) {
        return;
      }
      DAT_1008_028c = 1;
    }
    FUN_1000_ec94();
  }
  return;
}


// ---- FUN_1000_ccf2 @ 1000:ccf2

void __cdecl16far FUN_1000_ccf2(int param_1)

{
  int iVar1;
  undefined2 unaff_CS;
  undefined2 uVar2;
  undefined2 local_4;
  
  uVar2 = 0x1008;
  if (param_1 == 0) {
    local_4 = 0;
    do {
      iVar1 = local_4 * 2;
      *(undefined2 *)(iVar1 + 0x20e) = *(undefined2 *)(iVar1 + 0x1be);
      *(undefined2 *)(iVar1 + 0x218) = *(undefined2 *)(iVar1 + 0x1c8);
      local_4 = local_4 + 1;
    } while (local_4 < 5);
    for (local_4 = 0; local_4 < 5; local_4 = local_4 + 1) {
      unaff_CS = 0x1000;
      FUN_1000_ceca(local_4,*(undefined2 *)(local_4 * 2 + 0x222),
                    *(undefined2 *)(local_4 * 2 + 0x22c),uVar2);
    }
  }
  else {
    local_4 = 0;
    do {
      iVar1 = local_4 * 2;
      *(undefined2 *)(iVar1 + 0x222) = *(undefined2 *)(iVar1 + 0x1be);
      *(undefined2 *)(iVar1 + 0x22c) = *(undefined2 *)(iVar1 + 0x1c8);
      local_4 = local_4 + 1;
    } while (local_4 < 5);
    local_4 = 0;
    do {
      unaff_CS = 0x1000;
      FUN_1000_ceca(local_4,*(undefined2 *)(local_4 * 2 + 0x20e),
                    *(undefined2 *)(local_4 * 2 + 0x218),uVar2);
      local_4 = local_4 + 1;
    } while (local_4 < 5);
  }
  uVar2 = M007_GETSTATE(unaff_CS,0xa2);
  FUN_1000_ce82(uVar2);
  return;
}


// ---- FUN_1000_cdaa @ 1000:cdaa

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_1000_cdaa(undefined2 param_1,float param_2,float param_3)

{
  FUN_1000_ede0(param_1,param_2 + _DAT_1008_0a3e,param_3 + _DAT_1008_0a3e,0x1008);
  return;
}


// ---- SET_MAG_SCAN_CENTRE @ 1000:cdf4

void __stdcall16far SET_MAG_SCAN_CENTRE(undefined2 param_1,undefined2 param_2,undefined2 param_3)

{
  FUN_1000_ee1c(param_3,param_2,param_1,0x1008);
  return;
}


// ---- FUN_1000_ce14 @ 1000:ce14

void __cdecl16far FUN_1000_ce14(void)

{
  int iVar1;
  undefined2 unaff_CS;
  undefined2 local_4;
  
  local_4 = 0;
  do {
    iVar1 = local_4 * 2;
    *(undefined2 *)(iVar1 + 0x1d2) = *(undefined2 *)(iVar1 + 0x1be);
    *(undefined2 *)(iVar1 + 0x1dc) = *(undefined2 *)(iVar1 + 0x1c8);
    local_4 = local_4 + 1;
  } while (local_4 < 5);
  M007_PUTSTATE(unaff_CS,0x12);
  return;
}


// ---- FUN_1000_ce4e @ 1000:ce4e

void __cdecl16far FUN_1000_ce4e(void)

{
  undefined2 uVar1;
  undefined2 local_4;
  
  uVar1 = 0x1008;
  local_4 = 0;
  do {
    FUN_1000_ceca(local_4,*(undefined2 *)(local_4 * 2 + 0x1d2),*(undefined2 *)(local_4 * 2 + 0x1dc),
                  uVar1);
    local_4 = local_4 + 1;
  } while (local_4 < 5);
  return;
}


// ---- FUN_1000_ce82 @ 1000:ce82

void __cdecl16far FUN_1000_ce82(int param_1)

{
  undefined2 unaff_CS;
  
  M007_PUTVALUE(unaff_CS,(float)*(int *)(param_1 * 2 + 0x1be));
  M007_PUTVALUE(0x1010,(float)*(int *)(param_1 * 2 + 0x1c8));
  return;
}


// ---- FUN_1000_ceca @ 1000:ceca

void __cdecl16far FUN_1000_ceca(int param_1,undefined2 param_2,undefined2 param_3)

{
  *(undefined2 *)(param_1 * 2 + 0x1be) = param_2;
  *(undefined2 *)(param_1 * 2 + 0x1c8) = param_3;
  SET_MAG_SCAN_CENTRE(param_3,param_2,param_1);
  return;
}


// ---- FUN_1000_cf00 @ 1000:cf00

undefined2 __cdecl16far FUN_1000_cf00(int param_1)

{
  return *(undefined2 *)(param_1 * 2 + 0x1be);
}


// ---- FUN_1000_cf16 @ 1000:cf16

undefined2 __cdecl16far FUN_1000_cf16(int param_1)

{
  return *(undefined2 *)(param_1 * 2 + 0x1c8);
}


// ---- FUN_1000_cf2c @ 1000:cf2c

void __cdecl16far FUN_1000_cf2c(int param_1)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined1 local_8 [4];
  int local_4;
  
  uVar5 = 0x1008;
  uVar4 = 0xa2;
  local_4 = M007_GETSTATE();
  uVar3 = 0x102;
  M007_PUTVALUE(0x1010,(float)param_1);
  *(int *)(local_4 * 2 + 0x1be) = param_1;
  uVar2 = CONCAT22(local_4,param_1);
  uVar1 = 0x103;
  M007_GETVALUE(0x1010,local_8);
  uVar3 = FUN_1000_0282(uVar1,uVar2,uVar3,uVar4,uVar5);
  SET_MAG_SCAN_CENTRE(uVar3,uVar1);
  return;
}


// ---- FUN_1000_cf88 @ 1000:cf88

void __cdecl16far FUN_1000_cf88(int param_1)

{
  undefined4 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined1 local_8 [4];
  int local_4;
  
  uVar4 = 0x1008;
  uVar3 = 0xa2;
  local_4 = M007_GETSTATE();
  uVar2 = 0x103;
  M007_PUTVALUE(0x1010,(float)param_1);
  *(int *)(local_4 * 2 + 0x1c8) = param_1;
  uVar1 = CONCAT22(local_4,0x102);
  M007_GETVALUE(0x1010,local_8);
  uVar2 = FUN_1000_0282(uVar1,uVar2,uVar3,uVar4);
  SET_MAG_SCAN_CENTRE(param_1,uVar2);
  return;
}


// ---- FUN_1000_cfe6 @ 1000:cfe6

void __cdecl16far FUN_1000_cfe6(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 local_4;
  
  uVar2 = 0x1008;
  local_4 = 0;
  do {
    iVar1 = local_4 * 2;
    *(undefined2 *)(iVar1 + 0x1d2) = *(undefined2 *)(iVar1 + 0x1be);
    *(undefined2 *)(iVar1 + 0x1dc) = *(undefined2 *)(iVar1 + 0x1c8);
    FUN_1000_ceca(local_4,0,0,uVar2);
    local_4 = local_4 + 1;
  } while (local_4 < 5);
  M007_PUTVALUE(0x1000,DAT_1008_0a1a,DAT_1008_0a1c);
  M007_PUTVALUE(0x1010,DAT_1008_0a1a,DAT_1008_0a1c);
  return;
}


// ---- FUN_1000_d046 @ 1000:d046

void __cdecl16far FUN_1000_d046(void)

{
  undefined2 uVar1;
  
  FUN_1000_ce4e(0x1008);
  uVar1 = M007_GETSTATE(0x1000,0xa2);
  FUN_1000_ce82(uVar1);
  return;
}


// ---- FUN_1000_d068 @ 1000:d068

undefined2 __cdecl16far FUN_1000_d068(void)

{
  return 0x1008;
}


// ---- FUN_1000_d22a @ 1000:d22a

void __cdecl16far FUN_1000_d22a(int param_1)

{
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  
  uVar2 = 0x1008;
  uVar1 = 0x24;
  M007_PUTSTATE(unaff_CS,param_1);
  if (param_1 == 1) {
    FUN_1000_e354(0);
    FUN_1000_ed58(0,1,uVar1,uVar2);
    FUN_1000_ed7c(0,0);
  }
  else {
    FUN_1000_ed58(0,0,uVar1,uVar2);
    SWITCHLUT_MODE(0x1000,0);
  }
  FUN_1000_e3a8(param_1);
  return;
}


// ---- FUN_1000_d284 @ 1000:d284

void __cdecl16far FUN_1000_d284(undefined4 param_1)

{
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 local_6;
  
  uVar2 = 0x1008;
  uVar1 = 0x29;
  local_6 = (undefined2)param_1;
  M007_PUTVALUE(unaff_CS,local_6,(int)((ulong)param_1 >> 0x10));
  FUN_1000_e3c8(param_1,uVar1,uVar2);
  return;
}


// ---- FUN_1000_d2c0 @ 1000:d2c0

void __cdecl16far FUN_1000_d2c0(undefined4 param_1)

{
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 local_6;
  
  uVar2 = 0x1008;
  uVar1 = 0x2a;
  local_6 = (undefined2)param_1;
  M007_PUTVALUE(unaff_CS,local_6,(int)((ulong)param_1 >> 0x10));
  FUN_1000_e3f4(param_1,uVar1,uVar2);
  return;
}


// ---- FUN_1000_d2fc @ 1000:d2fc

void __cdecl16far FUN_1000_d2fc(undefined4 param_1)

{
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 local_6;
  
  uVar2 = 0x1008;
  uVar1 = 0x2b;
  local_6 = (undefined2)param_1;
  M007_PUTVALUE(unaff_CS,local_6,(int)((ulong)param_1 >> 0x10));
  FUN_1000_e420(param_1,uVar1,uVar2);
  return;
}


// ---- FUN_1000_d338 @ 1000:d338

void __cdecl16far FUN_1000_d338(void)

{
  undefined2 *puVar1;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined1 local_6 [4];
  
  puVar1 = (undefined2 *)M007_GETVALUE(unaff_CS,local_6);
  DAT_1008_16fa = *puVar1;
  DAT_1008_16fc = puVar1[1];
  return;
}


// ---- FUN_1000_d360 @ 1000:d360

void __cdecl16far FUN_1000_d360(undefined4 param_1)

{
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 local_6;
  
  uVar2 = 0x1008;
  uVar1 = 0x2b;
  local_6 = (undefined2)param_1;
  M007_PUTVALUE(unaff_CS,local_6,(int)((ulong)param_1 >> 0x10));
  FUN_1000_e420(param_1,uVar1,uVar2);
  return;
}


// ---- FUN_1000_d39c @ 1000:d39c

void __cdecl16far FUN_1000_d39c(void)

{
  undefined2 unaff_CS;
  
  M007_PUTVALUE(unaff_CS,DAT_1008_16fa,DAT_1008_16fc);
  return;
}


// ---- FUN_1000_d3b8 @ 1000:d3b8

void __cdecl16far FUN_1000_d3b8(void)

{
  FUN_1000_e4d8(DAT_1008_170e,DAT_1008_1710,0x1008);
  FUN_1000_e504(DAT_1008_1712,DAT_1008_1714);
  M007_PUTXY(0x1000,DAT_1008_1712,DAT_1008_1714,DAT_1008_170e,DAT_1008_1710);
  return;
}


// ---- FUN_1000_d3fc @ 1000:d3fc

void __cdecl16far FUN_1000_d3fc(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 5;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    FUN_1000_e55e(uVar2,uVar3);
    return;
  }
  if (iVar1 != 2) {
    return;
  }
  FUN_1000_e57a();
  return;
}


// ---- FUN_1000_d428 @ 1000:d428

void __cdecl16far FUN_1000_d428(void)

{
  FUN_1000_e596(0x1008);
  FUN_1000_e5b2();
  return;
}


// ---- FUN_1000_d43e @ 1000:d43e

void __cdecl16far FUN_1000_d43e(void)

{
  undefined2 *puVar1;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined1 local_1a [4];
  undefined1 local_16 [4];
  undefined1 local_12 [4];
  undefined1 local_e [4];
  undefined1 local_a [4];
  undefined1 local_6 [4];
  
  M007_PUTSTATE(unaff_CS,6);
  puVar1 = (undefined2 *)M007_GETVALUE(0x1010,local_6);
  DAT_1008_170e = *puVar1;
  DAT_1008_1710 = puVar1[1];
  puVar1 = (undefined2 *)M007_GETVALUE(0x1010,local_a);
  DAT_1008_1712 = *puVar1;
  DAT_1008_1714 = puVar1[1];
  uVar5 = 0x11;
  puVar1 = (undefined2 *)M007_GETVALUE(0x1010,local_e);
  DAT_1008_16fe = *puVar1;
  DAT_1008_1700 = puVar1[1];
  uVar4 = 0x12;
  puVar1 = (undefined2 *)M007_GETVALUE(0x1010,local_12);
  DAT_1008_1702 = *puVar1;
  DAT_1008_1704 = puVar1[1];
  uVar3 = 0x13;
  puVar1 = (undefined2 *)M007_GETVALUE(0x1010,local_16);
  DAT_1008_1706 = *puVar1;
  DAT_1008_1708 = puVar1[1];
  uVar2 = 0x14;
  puVar1 = (undefined2 *)M007_GETVALUE(0x1010,local_1a);
  DAT_1008_170a = *puVar1;
  DAT_1008_170c = puVar1[1];
  FUN_1000_d69c(DAT_1008_0aa2,DAT_1008_0aa4,uVar2,uVar3,uVar4,uVar5);
  FUN_1000_d734(DAT_1008_0aa2,DAT_1008_0aa4);
  return;
}


// ---- FUN_1000_d516 @ 1000:d516

void __cdecl16far FUN_1000_d516(void)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  FUN_1000_d428(0x1008);
  FUN_1000_e530(0,DAT_1008_16fe,DAT_1008_1700);
  FUN_1000_e530(1,DAT_1008_1702,DAT_1008_1704);
  FUN_1000_e530(2,DAT_1008_1706,DAT_1008_1708);
  FUN_1000_e530(3,DAT_1008_170a,DAT_1008_170c);
  uVar4 = 0x11;
  M007_PUTVALUE(0x1000,DAT_1008_16fe,DAT_1008_1700);
  uVar3 = 0x12;
  M007_PUTVALUE(0x1010,DAT_1008_1702,DAT_1008_1704);
  uVar2 = 0x13;
  M007_PUTVALUE(0x1010,DAT_1008_1706,DAT_1008_1708);
  uVar1 = 0x14;
  M007_PUTVALUE(0x1010,DAT_1008_170a,DAT_1008_170c);
  FUN_1000_d3b8(uVar1,uVar2,uVar3,uVar4);
  return;
}


// ---- FUN_1000_d5b0 @ 1000:d5b0

void __cdecl16far FUN_1000_d5b0(void)

{
  FUN_1000_d428(0x1008);
  FUN_1000_d3b8();
  return;
}


// ---- FUN_1000_d5c6 @ 1000:d5c6

void __cdecl16far FUN_1000_d5c6(void)

{
  undefined2 uVar1;
  
  FUN_1000_d428(0x1008);
  uVar1 = 5;
  M007_PUTSTATE(0x1000,1);
  FUN_1000_d3fc(uVar1);
  return;
}


// ---- FUN_1000_d5e6 @ 1000:d5e6

void __cdecl16far FUN_1000_d5e6(void)

{
  undefined2 uVar1;
  
  FUN_1000_d428(0x1008);
  uVar1 = 5;
  M007_PUTSTATE(0x1000,2);
  FUN_1000_d3fc(uVar1);
  return;
}


// ---- FUN_1000_d606 @ 1000:d606

void __cdecl16far FUN_1000_d606(undefined2 param_1,undefined2 param_2,undefined2 param_3)

{
  FUN_1000_e530(param_1,param_2,param_3,0x1008);
  return;
}


// ---- FUN_1000_d624 @ 1000:d624

void __cdecl16far FUN_1000_d624(undefined4 param_1)

{
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 local_6;
  
  uVar2 = 0x1008;
  uVar1 = 10;
  local_6 = (undefined2)param_1;
  M007_PUTVALUE(unaff_CS,local_6,(int)((ulong)param_1 >> 0x10));
  FUN_1000_e5ce(param_1,uVar1,uVar2);
  return;
}


// ---- FUN_1000_d660 @ 1000:d660

void __cdecl16far FUN_1000_d660(undefined4 param_1)

{
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 local_6;
  
  uVar2 = 0x1008;
  uVar1 = 0xb;
  local_6 = (undefined2)param_1;
  M007_PUTVALUE(unaff_CS,local_6,(int)((ulong)param_1 >> 0x10));
  FUN_1000_e5fa(param_1,uVar1,uVar2);
  return;
}


// ---- FUN_1000_d69c @ 1000:d69c

void __cdecl16far FUN_1000_d69c(undefined2 param_1,undefined2 param_2)

{
  FUN_1000_d8e0(0x1008);
  DAT_1008_028e = param_1;
  DAT_1008_0290 = param_2;
  if (DAT_1008_029e != 0) {
    SETSENSITIVITY(0x1000,DAT_1008_0aa6,DAT_1008_0aa8);
    SETSENSITIVITY(0x1010,DAT_1008_0aa6,DAT_1008_0aa8);
    SETSENSITIVITY(0x1010,DAT_1008_0aa6,DAT_1008_0aa8);
    SETSENSITIVITY(0x1010,DAT_1008_0aa6,DAT_1008_0aa8);
    DAT_1008_029e = 0;
  }
  FUN_1000_e4d8(param_1,param_2);
  M007_PUTVALUE(0x1000,DAT_1008_028e,DAT_1008_0290);
  M007_PUTVALUE(0x1010,DAT_1008_028e,DAT_1008_0290);
  return;
}


// ---- FUN_1000_d734 @ 1000:d734

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_1000_d734(undefined4 param_1)

{
  FUN_1000_d8e0(0x1008);
  _DAT_1008_0292 = param_1;
  FUN_1000_e504(param_1);
  M007_PUTVALUE(0x1000,DAT_1008_0292,DAT_1008_0294);
  M007_PUTVALUE(0x1010,DAT_1008_0292,DAT_1008_0294);
  return;
}


// ---- FUN_1000_d784 @ 1000:d784

void __cdecl16far FUN_1000_d784(void)

{
  undefined2 *puVar1;
  undefined2 unaff_SS;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined1 local_a [4];
  undefined1 local_6 [4];
  
  uVar5 = 0x1008;
  Ordinal_37();
  uVar4 = 1;
  M007_PUTSTATE(0x1010,1);
  uVar3 = 0x3f;
  puVar1 = (undefined2 *)M007_GETVALUE(0x1010,local_6);
  DAT_1008_170e = *puVar1;
  DAT_1008_1710 = puVar1[1];
  uVar2 = 0x40;
  puVar1 = (undefined2 *)M007_GETVALUE(0x1010,local_a);
  DAT_1008_1712 = *puVar1;
  DAT_1008_1714 = puVar1[1];
  FUN_1000_e626(uVar2,uVar3,uVar4,uVar5);
  return;
}


// ---- FUN_1000_d7da @ 1000:d7da

void __cdecl16far FUN_1000_d7da(void)

{
  FUN_1000_e642(0x1008);
  FUN_1000_d3b8();
  Ordinal_38(0x1000);
  M007_PUTSTATE(0x1010,0);
  return;
}


// ---- FUN_1000_d7fe @ 1000:d7fe

void __cdecl16far FUN_1000_d7fe(void)

{
  float fVar1;
  float fVar2;
  undefined2 uVar3;
  undefined1 local_16 [4];
  float local_12;
  float local_e;
  int local_a;
  int local_8;
  int local_6;
  int local_4;
  
  FUN_1000_e642(0x1008);
  local_4 = GETSYSTEMMETRICS(0x1000,0);
  local_4 = local_4 / 2;
  local_6 = GETSYSTEMMETRICS(0x1010,1);
  local_6 = local_6 / 2;
  uVar3 = 0x41;
  M007_GETVALUE(0x1010,local_16);
  fVar1 = (float)local_4;
  local_8 = FUN_1000_0282(uVar3);
  fVar1 = ((float)local_8 * DAT_1008_0aaa) / fVar1;
  uVar3 = 0x42;
  local_e = fVar1;
  M007_GETVALUE();
  fVar2 = (float)local_6;
  local_a = FUN_1000_0282(uVar3);
  fVar2 = ((float)local_a * DAT_1008_0aae) / fVar2;
  uVar3 = 1;
  local_12 = fVar2;
  M007_PUTSTATE(0x1000,0);
  Ordinal_38();
  FUN_1000_d69c(fVar1,uVar3);
  FUN_1000_d734(fVar2);
  return;
}


// ---- FUN_1000_d8e0 @ 1000:d8e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 __cdecl16far FUN_1000_d8e0(void)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  undefined2 unaff_SS;
  double *pdVar4;
  undefined1 *puVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined1 local_6 [4];
  
  uVar7 = 0x1008;
  uVar6 = 0xe;
  iVar2 = M007_GETSTATE();
  if (iVar2 == 1) {
    iVar2 = M007_GETSTATE(0x1010,0x8c,uVar6,uVar7);
    if ((iVar2 == 6) || (iVar2 == 8)) {
      uVar6 = 0x1a;
      pfVar3 = (float *)M007_GETVALUE();
      fVar1 = *pfVar3;
      puVar5 = (undefined1 *)0x151;
      pfVar3 = (float *)M007_GETVALUE();
      fVar1 = (*pfVar3 + fVar1) * DAT_1008_0ab6;
    }
    else {
      uVar6 = 0x1a;
      puVar5 = local_6;
      pfVar3 = (float *)M007_GETVALUE();
      fVar1 = *pfVar3 * DAT_1008_0ab2;
    }
    pdVar4 = (double *)FUN_1000_024a(0x1010,(double)fVar1,puVar5,uVar6);
    _DAT_1008_0366 = (float)*pdVar4;
  }
  else {
    _DAT_1008_0366 = (float)CONCAT22(DAT_1008_0aa4,DAT_1008_0aa2);
  }
  return 0x366;
}


// ---- FUN_1000_d988 @ 1000:d988

undefined2 __cdecl16far FUN_1000_d988(void)

{
  return DAT_1008_02a0;
}


// ---- FUN_1000_d998 @ 1000:d998

undefined2 __cdecl16far FUN_1000_d998(undefined2 param_1,undefined2 param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    uVar2 = Ordinal_2000(0x1010,param_1,param_2,uVar2,uVar3);
    return uVar2;
  }
  return 0;
}


// ---- FUN_1000_d9c0 @ 1000:d9c0

undefined2 __cdecl16far FUN_1000_d9c0(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    uVar2 = Ordinal_2141(0x1010,uVar2,uVar3);
    return uVar2;
  }
  return 0;
}


// ---- FUN_1000_d9e2 @ 1000:d9e2

undefined2 __cdecl16far FUN_1000_d9e2(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  DAT_1008_02a0 = 0;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    uVar2 = Ordinal_2001(0x1010,uVar2,uVar3);
    return uVar2;
  }
  return 0;
}


// ---- FUN_1000_da0a @ 1000:da0a

undefined2 __cdecl16far FUN_1000_da0a(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  DAT_1008_02a0 = 1;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    uVar2 = Ordinal_2140(0x1010,uVar2,uVar3);
    return uVar2;
  }
  return 0;
}


// ---- FUN_1000_da32 @ 1000:da32

void __cdecl16far FUN_1000_da32(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_2002(0x1010,uVar2,uVar3);
  }
  return;
}


// ---- FUN_1000_da4e @ 1000:da4e

void __cdecl16far FUN_1000_da4e(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_2003(0x1010,uVar2,uVar3);
  }
  return;
}


// ---- FUN_1000_da6a @ 1000:da6a

void __cdecl16far FUN_1000_da6a(float param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_2004(0x1010,(double)param_1,uVar2,uVar3);
  }
  return;
}


// ---- FUN_1000_da96 @ 1000:da96

void __cdecl16far FUN_1000_da96(float param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_2005(0x1010,(double)param_1,uVar2,uVar3);
  }
  return;
}


// ---- FUN_1000_dac2 @ 1000:dac2

void __cdecl16far FUN_1000_dac2(float param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_2006(0x1010,(double)param_1,uVar2,uVar3);
  }
  return;
}


// ---- FUN_1000_daee @ 1000:daee

void __cdecl16far FUN_1000_daee(float param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_2007(0x1010,(double)param_1,uVar2,uVar3);
  }
  return;
}


// ---- FUN_1000_db1a @ 1000:db1a

void __cdecl16far FUN_1000_db1a(float param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_2008(0x1010,(double)param_1,uVar2,uVar3);
  }
  return;
}


// ---- FUN_1000_db46 @ 1000:db46

void __cdecl16far FUN_1000_db46(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_2009(0x1010,uVar2,uVar3);
  }
  return;
}


// ---- FUN_1000_db62 @ 1000:db62

void __cdecl16far FUN_1000_db62(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_2010(0x1010,uVar2,uVar3);
  }
  return;
}


// ---- FUN_1000_db7e @ 1000:db7e

void __cdecl16far FUN_1000_db7e(float param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_2011(0x1010,(double)param_1,uVar2,uVar3);
  }
  return;
}


// ---- FUN_1000_dbe2 @ 1000:dbe2

void __cdecl16far FUN_1000_dbe2(undefined2 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_2014(0x1010,param_1,uVar2,uVar3);
  }
  return;
}


// ---- FUN_1000_dc02 @ 1000:dc02

void __cdecl16far FUN_1000_dc02(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_2015(0x1010,uVar2,uVar3);
  }
  return;
}


// ---- FUN_1000_dc1e @ 1000:dc1e

void __cdecl16far FUN_1000_dc1e(undefined2 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_2016(0x1010,param_1,uVar2,uVar3);
  }
  return;
}


// ---- FUN_1000_dc3e @ 1000:dc3e

void __cdecl16far FUN_1000_dc3e(undefined2 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_2017(0x1010,param_1,uVar2,uVar3);
  }
  return;
}


// ---- FUN_1000_dc5e @ 1000:dc5e

void __cdecl16far FUN_1000_dc5e(undefined2 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_2018(0x1010,param_1,uVar2,uVar3);
  }
  return;
}


// ---- FUN_1000_dc7e @ 1000:dc7e

void __cdecl16far FUN_1000_dc7e(undefined2 param_1,undefined2 param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_2019(0x1010,param_1,param_2,uVar2,uVar3);
  }
  return;
}


// ---- FUN_1000_dca0 @ 1000:dca0

void __cdecl16far FUN_1000_dca0(float param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_2020(0x1010,(double)param_1,uVar2,uVar3);
  }
  return;
}


// ---- FUN_1000_dccc @ 1000:dccc

void __cdecl16far FUN_1000_dccc(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  
  uVar7 = 0x1008;
  uVar6 = 0x83;
  iVar3 = M007_GETSTATE();
  if (iVar3 == 1) {
    Ordinal_2021(0x1010,(undefined2 *)&DAT_1008_177a,0x1008,uVar6,uVar7);
  }
  puVar5 = (undefined2 *)&DAT_1008_19ea;
  puVar4 = (undefined2 *)&DAT_1008_177a;
  for (iVar3 = 0x52; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar2 = *puVar1;
  }
  return;
}


// ---- FUN_1000_dd1e @ 1000:dd1e

void __cdecl16far FUN_1000_dd1e(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_2025(0x1010,uVar2,uVar3);
  }
  return;
}


// ---- FUN_1000_dd3a @ 1000:dd3a

void __cdecl16far FUN_1000_dd3a(float param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_2026(0x1010,(double)param_1,uVar2,uVar3);
  }
  return;
}


// ---- FUN_1000_dd66 @ 1000:dd66

void __cdecl16far FUN_1000_dd66(float param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_2027(0x1010,(double)param_1,uVar2,uVar3);
  }
  return;
}


// ---- FUN_1000_dd92 @ 1000:dd92

void __cdecl16far FUN_1000_dd92(float param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_2029(0x1010,(double)param_1,uVar2,uVar3);
  }
  return;
}


// ---- FUN_1000_ddbe @ 1000:ddbe

void __cdecl16far FUN_1000_ddbe(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_2031(0x1010,uVar2,uVar3);
  }
  return;
}


// ---- FUN_1000_ddda @ 1000:ddda

void __cdecl16far FUN_1000_ddda(undefined2 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_2032(0x1010,param_1,uVar2,uVar3);
  }
  return;
}


// ---- FUN_1000_ddfa @ 1000:ddfa

void __cdecl16far FUN_1000_ddfa(float param_1,undefined2 param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_2033(0x1010,param_2,(double)param_1,uVar2,uVar3);
  }
  return;
}


// ---- FUN_1000_de28 @ 1000:de28

void __cdecl16far FUN_1000_de28(undefined2 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_2036(0x1010,param_1,uVar2,uVar3);
  }
  return;
}


// ---- FUN_1000_de48 @ 1000:de48

void __cdecl16far FUN_1000_de48(float param_1,float param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_2038(0x1010,(double)param_2,(double)param_1,uVar2,uVar3);
  }
  return;
}


// ---- FUN_1000_de80 @ 1000:de80

void __cdecl16far FUN_1000_de80(float param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_2039(0x1010,(double)param_1,uVar2,uVar3);
  }
  return;
}


// ---- FUN_1000_deac @ 1000:deac

void __cdecl16far FUN_1000_deac(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_2040(0x1010,uVar2,uVar3);
  }
  return;
}


// ---- FUN_1000_df38 @ 1000:df38

void __cdecl16far FUN_1000_df38(undefined2 param_1,float param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_2044(0x1010,(double)param_2,param_1,uVar2,uVar3);
  }
  return;
}


// ---- FUN_1000_df66 @ 1000:df66

void __cdecl16far FUN_1000_df66(undefined2 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_2045(0x1010,param_1,uVar2,uVar3);
  }
  return;
}


// ---- FUN_1000_dfb4 @ 1000:dfb4

void __cdecl16far FUN_1000_dfb4(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_2047(0x1010,uVar2,uVar3);
  }
  return;
}


// ---- FUN_1000_dfd0 @ 1000:dfd0

void __cdecl16far FUN_1000_dfd0(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_2048(0x1010,uVar2,uVar3);
  }
  return;
}


// ---- FUN_1000_dfec @ 1000:dfec

void __cdecl16far FUN_1000_dfec(undefined2 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_2049(0x1010,param_1,uVar2,uVar3);
  }
  return;
}


// ---- FUN_1000_e00c @ 1000:e00c

void __cdecl16far FUN_1000_e00c(float param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_2050(0x1010,(double)param_1,uVar2,uVar3);
  }
  return;
}


// ---- FUN_1000_e038 @ 1000:e038

void __cdecl16far FUN_1000_e038(float param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_2051(0x1010,(double)param_1,uVar2,uVar3);
  }
  return;
}


// ---- FUN_1000_e064 @ 1000:e064

void __cdecl16far FUN_1000_e064(float param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_2052(0x1010,(double)param_1,uVar2,uVar3);
  }
  return;
}


// ---- FUN_1000_e090 @ 1000:e090

void __cdecl16far FUN_1000_e090(float param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_2053(0x1010,(double)param_1,uVar2,uVar3);
  }
  return;
}


// ---- FUN_1000_e0bc @ 1000:e0bc

void __cdecl16far FUN_1000_e0bc(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_2054(0x1010,uVar2,uVar3);
  }
  return;
}


// ---- FUN_1000_e0d8 @ 1000:e0d8

void __cdecl16far FUN_1000_e0d8(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_2055(0x1010,uVar2,uVar3);
  }
  return;
}


// ---- FUN_1000_e0f4 @ 1000:e0f4

void __cdecl16far FUN_1000_e0f4(float param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_2057(0x1010,(double)param_1,uVar2,uVar3);
  }
  return;
}


// ---- FUN_1000_e120 @ 1000:e120

void __cdecl16far FUN_1000_e120(float param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_2058(0x1010,(double)param_1,uVar2,uVar3);
  }
  return;
}


// ---- FUN_1000_e14c @ 1000:e14c

void __cdecl16far FUN_1000_e14c(float param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_2059(0x1010,(double)param_1,uVar2,uVar3);
  }
  return;
}


// ---- FUN_1000_e178 @ 1000:e178

void __cdecl16far FUN_1000_e178(undefined2 param_1,float param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_2060(0x1010,(double)param_2,param_1,uVar2,uVar3);
  }
  return;
}


// ---- FUN_1000_e1a6 @ 1000:e1a6

void __cdecl16far FUN_1000_e1a6(float param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_2061(0x1010,(double)param_1,uVar2,uVar3);
  }
  return;
}


// ---- FUN_1000_e1d2 @ 1000:e1d2

void __cdecl16far FUN_1000_e1d2(undefined2 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_2062(0x1010,param_1,uVar2,uVar3);
  }
  return;
}


// ---- FUN_1000_e1f2 @ 1000:e1f2

void __cdecl16far FUN_1000_e1f2(float param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_2063(0x1010,(double)param_1,uVar2,uVar3);
  }
  return;
}


// ---- FUN_1000_e21e @ 1000:e21e

void __cdecl16far FUN_1000_e21e(undefined2 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_2064(0x1010,param_1,uVar2,uVar3);
  }
  return;
}


// ---- FUN_1000_e23e @ 1000:e23e

void __cdecl16far FUN_1000_e23e(float param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_2065(0x1010,(double)param_1,uVar2,uVar3);
  }
  return;
}


// ---- FUN_1000_e26a @ 1000:e26a

void __cdecl16far FUN_1000_e26a(undefined2 param_1,undefined2 param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_2066(0x1010,param_2,param_1,uVar2,uVar3);
  }
  return;
}


// ---- FUN_1000_e28c @ 1000:e28c

void __cdecl16far FUN_1000_e28c(float param_1,float param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_2067(0x1010,(double)param_2,(double)param_1,uVar2,uVar3);
  }
  return;
}


// ---- FUN_1000_e2c4 @ 1000:e2c4

void __cdecl16far FUN_1000_e2c4(undefined2 param_1,undefined2 param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_2068(0x1010,param_2,param_1,uVar2,uVar3);
  }
  return;
}


// ---- FUN_1000_e2e6 @ 1000:e2e6

void __cdecl16far FUN_1000_e2e6(undefined2 param_1,undefined2 param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_2069(0x1010,param_2,param_1,uVar2,uVar3);
  }
  return;
}


// ---- FUN_1000_e308 @ 1000:e308

void __cdecl16far
FUN_1000_e308(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_2070(0x1010,param_5,param_4,param_3,param_2,param_1,uVar2,uVar3);
  }
  return;
}


// ---- FUN_1000_e334 @ 1000:e334

void __cdecl16far FUN_1000_e334(undefined2 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_2071(0x1010,param_1,uVar2,uVar3);
  }
  return;
}


// ---- FUN_1000_e354 @ 1000:e354

void __cdecl16far FUN_1000_e354(undefined2 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_2072(0x1010,param_1,uVar2,uVar3);
  }
  return;
}


// ---- FUN_1000_e374 @ 1000:e374

void __cdecl16far
FUN_1000_e374(float param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_2073(0x1010,param_4,param_3,param_2,(double)param_1,uVar2,uVar3);
  }
  return;
}


// ---- FUN_1000_e3a8 @ 1000:e3a8

void __cdecl16far FUN_1000_e3a8(undefined2 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_2074(0x1010,param_1,uVar2,uVar3);
  }
  return;
}


// ---- FUN_1000_e3c8 @ 1000:e3c8

void __cdecl16far FUN_1000_e3c8(float param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_2075(0x1010,(double)param_1,uVar2,uVar3);
  }
  return;
}


// ---- FUN_1000_e3f4 @ 1000:e3f4

void __cdecl16far FUN_1000_e3f4(float param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_2076(0x1010,(double)param_1,uVar2,uVar3);
  }
  return;
}


// ---- FUN_1000_e420 @ 1000:e420

void __cdecl16far FUN_1000_e420(float param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_2077(0x1010,(double)param_1,uVar2,uVar3);
  }
  return;
}


// ---- FUN_1000_e44c @ 1000:e44c

void __cdecl16far FUN_1000_e44c(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_2078(0x1010,uVar2,uVar3);
  }
  return;
}


// ---- FUN_1000_e468 @ 1000:e468

void __cdecl16far FUN_1000_e468(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_2079(0x1010,uVar2,uVar3);
  }
  return;
}


// ---- FUN_1000_e484 @ 1000:e484

void __cdecl16far FUN_1000_e484(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_2080(0x1010,uVar2,uVar3);
  }
  return;
}


// ---- FUN_1000_e4a0 @ 1000:e4a0

void __cdecl16far FUN_1000_e4a0(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_2081(0x1010,uVar2,uVar3);
  }
  return;
}


// ---- FUN_1000_e4bc @ 1000:e4bc

void __cdecl16far FUN_1000_e4bc(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_2082(0x1010,uVar2,uVar3);
  }
  return;
}


// ---- FUN_1000_e4d8 @ 1000:e4d8

void __cdecl16far FUN_1000_e4d8(float param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_2083(0x1010,(double)param_1,uVar2,uVar3);
  }
  return;
}


// ---- FUN_1000_e504 @ 1000:e504

void __cdecl16far FUN_1000_e504(float param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_2084(0x1010,(double)param_1,uVar2,uVar3);
  }
  return;
}


// ---- FUN_1000_e530 @ 1000:e530

void __cdecl16far FUN_1000_e530(undefined2 param_1,float param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_2085(0x1010,(double)param_2,param_1,uVar2,uVar3);
  }
  return;
}


// ---- FUN_1000_e55e @ 1000:e55e

void __cdecl16far FUN_1000_e55e(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_2086(0x1010,uVar2,uVar3);
  }
  return;
}


// ---- FUN_1000_e57a @ 1000:e57a

void __cdecl16far FUN_1000_e57a(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_2087(0x1010,uVar2,uVar3);
  }
  return;
}


// ---- FUN_1000_e596 @ 1000:e596

void __cdecl16far FUN_1000_e596(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_2088(0x1010,uVar2,uVar3);
  }
  return;
}


// ---- FUN_1000_e5b2 @ 1000:e5b2

void __cdecl16far FUN_1000_e5b2(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_2089(0x1010,uVar2,uVar3);
  }
  return;
}


// ---- FUN_1000_e5ce @ 1000:e5ce

void __cdecl16far FUN_1000_e5ce(float param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_2090(0x1010,(double)param_1,uVar2,uVar3);
  }
  return;
}


// ---- FUN_1000_e5fa @ 1000:e5fa

void __cdecl16far FUN_1000_e5fa(float param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_2091(0x1010,(double)param_1,uVar2,uVar3);
  }
  return;
}


// ---- FUN_1000_e626 @ 1000:e626

void __cdecl16far FUN_1000_e626(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_2092(0x1010,uVar2,uVar3);
  }
  return;
}


// ---- FUN_1000_e642 @ 1000:e642

void __cdecl16far FUN_1000_e642(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_2093(0x1010,uVar2,uVar3);
  }
  return;
}


// ---- FUN_1000_e696 @ 1000:e696

void __cdecl16far FUN_1000_e696(undefined2 *param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 unaff_SS;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 local_cc;
  undefined2 local_ca;
  undefined2 local_c8;
  undefined2 local_c6;
  undefined2 local_c4;
  undefined2 local_c2;
  undefined2 local_c0;
  undefined2 local_be;
  undefined2 local_bc;
  undefined2 local_ba;
  undefined2 local_b8;
  undefined2 local_b6;
  undefined2 local_b4;
  undefined2 local_b2;
  undefined2 local_b0;
  undefined2 local_ae;
  undefined2 local_ac;
  undefined2 local_aa;
  undefined2 local_a8;
  undefined2 local_a6;
  undefined2 local_a4;
  undefined2 local_a2;
  undefined2 local_a0;
  undefined2 local_9e;
  undefined2 local_9c;
  undefined2 local_9a;
  undefined2 local_98;
  undefined2 local_96;
  undefined2 local_94;
  undefined2 local_92;
  undefined2 local_90;
  undefined2 local_8e;
  undefined2 local_8c;
  undefined2 local_8a;
  undefined2 local_88;
  undefined2 local_86;
  undefined2 local_84;
  undefined2 local_82;
  undefined2 local_80;
  undefined2 local_7e;
  undefined2 local_7c;
  undefined2 local_7a;
  undefined2 local_78;
  undefined2 local_76;
  undefined2 local_74;
  undefined2 local_72;
  undefined2 local_70;
  undefined2 local_6e;
  undefined2 local_6c;
  undefined2 local_6a;
  undefined2 local_68;
  undefined2 local_66;
  undefined2 local_64;
  undefined2 local_62;
  undefined2 local_60;
  undefined2 local_5e;
  undefined2 local_5c;
  undefined2 local_5a;
  undefined2 local_58;
  undefined2 local_56;
  undefined2 local_54;
  undefined2 local_52;
  undefined2 local_50;
  undefined2 local_4e;
  undefined2 local_4c;
  undefined2 local_4a;
  undefined2 local_48;
  undefined2 local_46;
  undefined2 local_44;
  undefined2 local_42;
  undefined2 local_40;
  undefined2 local_3e;
  undefined2 local_3c;
  undefined2 local_3a;
  undefined2 local_38;
  undefined2 local_36;
  undefined2 local_34;
  undefined2 local_32;
  undefined2 local_30;
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
  local_cc = DAT_1008_0aba;
  local_ca = DAT_1008_0abc;
  local_c8 = DAT_1008_0aba;
  local_c6 = DAT_1008_0abc;
  local_c4 = DAT_1008_0aba;
  local_c2 = DAT_1008_0abc;
  local_c0 = DAT_1008_0aba;
  local_be = DAT_1008_0abc;
  local_bc = DAT_1008_0aba;
  local_ba = DAT_1008_0abc;
  local_b8 = DAT_1008_0aba;
  local_b6 = DAT_1008_0abc;
  local_b4 = DAT_1008_0aba;
  local_b2 = DAT_1008_0abc;
  local_b0 = DAT_1008_0aba;
  local_ae = DAT_1008_0abc;
  local_ac = DAT_1008_0aba;
  local_aa = DAT_1008_0abc;
  local_a8 = DAT_1008_0aba;
  local_a6 = DAT_1008_0abc;
  local_a4 = DAT_1008_0aba;
  local_a2 = DAT_1008_0abc;
  local_a0 = DAT_1008_0aba;
  local_9e = DAT_1008_0abc;
  local_9c = DAT_1008_0aba;
  local_9a = DAT_1008_0abc;
  local_98 = DAT_1008_0aba;
  local_96 = DAT_1008_0abc;
  local_94 = DAT_1008_0aba;
  local_92 = DAT_1008_0abc;
  local_90 = DAT_1008_0aba;
  local_8e = DAT_1008_0abc;
  local_8c = DAT_1008_0aba;
  local_8a = DAT_1008_0abc;
  local_88 = DAT_1008_0aba;
  local_86 = DAT_1008_0abc;
  local_84 = DAT_1008_0aba;
  local_82 = DAT_1008_0abc;
  local_80 = DAT_1008_0aba;
  local_7e = DAT_1008_0abc;
  local_7c = DAT_1008_0aba;
  local_7a = DAT_1008_0abc;
  local_78 = DAT_1008_0aba;
  local_76 = DAT_1008_0abc;
  local_74 = DAT_1008_0aba;
  local_72 = DAT_1008_0abc;
  local_70 = DAT_1008_0aba;
  local_6e = DAT_1008_0abc;
  local_6c = DAT_1008_0aba;
  local_6a = DAT_1008_0abc;
  local_68 = DAT_1008_0aba;
  local_66 = DAT_1008_0abc;
  local_64 = DAT_1008_0aba;
  local_62 = DAT_1008_0abc;
  local_60 = DAT_1008_0aba;
  local_5e = DAT_1008_0abc;
  local_5c = DAT_1008_0aba;
  local_5a = DAT_1008_0abc;
  local_58 = DAT_1008_0aba;
  local_56 = DAT_1008_0abc;
  local_54 = DAT_1008_0aba;
  local_52 = DAT_1008_0abc;
  local_50 = DAT_1008_0aba;
  local_4e = DAT_1008_0abc;
  local_4c = DAT_1008_0aba;
  local_4a = DAT_1008_0abc;
  local_48 = DAT_1008_0aba;
  local_46 = DAT_1008_0abc;
  local_44 = DAT_1008_0aba;
  local_42 = DAT_1008_0abc;
  local_40 = DAT_1008_0aba;
  local_3e = DAT_1008_0abc;
  local_3c = DAT_1008_0aba;
  local_3a = DAT_1008_0abc;
  local_38 = DAT_1008_0aba;
  local_36 = DAT_1008_0abc;
  local_34 = DAT_1008_0aba;
  local_32 = DAT_1008_0abc;
  local_30 = DAT_1008_0aba;
  local_2e = DAT_1008_0abc;
  local_2c = DAT_1008_0aba;
  local_2a = DAT_1008_0abc;
  local_28 = DAT_1008_0aba;
  local_26 = DAT_1008_0abc;
  local_24 = DAT_1008_0aba;
  local_22 = DAT_1008_0abc;
  local_20 = DAT_1008_0aba;
  local_1e = DAT_1008_0abc;
  local_1c = DAT_1008_0aba;
  local_1a = DAT_1008_0abc;
  local_18 = DAT_1008_0aba;
  local_16 = DAT_1008_0abc;
  local_14 = 0;
  local_12 = 0;
  local_10 = 0;
  local_e = 0;
  local_c = 0;
  local_a = 0;
  local_8 = 0;
  local_6 = 0;
  local_4 = 0;
  uVar5 = 0x83;
  iVar3 = M007_GETSTATE();
  if (iVar3 == 1) {
    Ordinal_2095(0x1010,(undefined2 *)param_1,param_1._2_2_,uVar5,uVar6);
  }
  else {
    puVar4 = &local_cc;
    for (iVar3 = 0x65; iVar3 != 0; iVar3 = iVar3 + -1) {
      puVar2 = (undefined2 *)param_1;
      param_1._0_2_ = (undefined2 *)param_1 + 1;
      puVar1 = puVar4;
      puVar4 = puVar4 + 1;
      *puVar2 = *puVar1;
    }
  }
  return;
}


// ---- FUN_1000_e82c @ 1000:e82c

void __cdecl16far FUN_1000_e82c(undefined2 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_2096(0x1010,param_1,uVar2,uVar3);
  }
  return;
}


// ---- FUN_1000_e84c @ 1000:e84c

undefined2 __cdecl16far FUN_1000_e84c(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    uVar2 = Ordinal_2097(0x1010,uVar2,uVar3);
    return uVar2;
  }
  return 0;
}


// ---- FUN_1000_e86e @ 1000:e86e

void __cdecl16far
FUN_1000_e86e(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_2098(0x1010,param_5,param_4,param_3,param_2,param_1,uVar2,uVar3);
  }
  return;
}


// ---- FUN_1000_e89a @ 1000:e89a

void __cdecl16far FUN_1000_e89a(undefined2 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_2099(0x1010,param_1,uVar2,uVar3);
  }
  return;
}


// ---- FUN_1000_e8ba @ 1000:e8ba

void __cdecl16far FUN_1000_e8ba(undefined2 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_2100(0x1010,param_1,uVar2,uVar3);
  }
  return;
}


// ---- FUN_1000_e8da @ 1000:e8da

void __cdecl16far FUN_1000_e8da(undefined2 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_2101(0x1010,param_1,uVar2,uVar3);
  }
  return;
}


// ---- FUN_1000_e8fa @ 1000:e8fa

void __cdecl16far FUN_1000_e8fa(undefined2 param_1,undefined2 param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_2102(0x1010,param_2,param_1,uVar2,uVar3);
  }
  return;
}


// ---- FUN_1000_e91c @ 1000:e91c

void __cdecl16far FUN_1000_e91c(undefined2 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_2103(0x1010,param_1,uVar2,uVar3);
  }
  return;
}


// ---- FUN_1000_e93c @ 1000:e93c

void __cdecl16far FUN_1000_e93c(undefined2 param_1,undefined2 param_2,undefined2 param_3)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_2104(0x1010,param_3,param_2,param_1,uVar2,uVar3);
  }
  return;
}


// ---- FUN_1000_e962 @ 1000:e962

void __cdecl16far FUN_1000_e962(float param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_2105(0x1010,(double)param_1,uVar2,uVar3);
  }
  return;
}


// ---- FUN_1000_e98e @ 1000:e98e

void __cdecl16far FUN_1000_e98e(float param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_2110(0x1010,(double)param_1,uVar2,uVar3);
  }
  return;
}


// ---- FUN_1000_e9ba @ 1000:e9ba

void __cdecl16far FUN_1000_e9ba(undefined2 *param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  
  uVar6 = 0x1008;
  uVar5 = 0x83;
  iVar3 = M007_GETSTATE();
  if (iVar3 == 1) {
    Ordinal_2106(0x1010,(undefined2 *)param_1,param_1._2_2_,uVar5,uVar6);
  }
  else {
    puVar4 = (undefined2 *)&DAT_1008_1716;
    for (iVar3 = 0x32; iVar3 != 0; iVar3 = iVar3 + -1) {
      puVar2 = (undefined2 *)param_1;
      param_1._0_2_ = (undefined2 *)param_1 + 1;
      puVar1 = puVar4;
      puVar4 = puVar4 + 1;
      *puVar2 = *puVar1;
    }
  }
  return;
}


// ---- FUN_1000_e9ee @ 1000:e9ee

void __cdecl16far FUN_1000_e9ee(undefined2 *param_1,undefined2 param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  
  uVar6 = 0x1008;
  uVar5 = 0x83;
  iVar3 = M007_GETSTATE();
  if (iVar3 == 1) {
    Ordinal_2107(0x1010,param_1,param_2,uVar5,uVar6);
  }
  else {
    puVar4 = (undefined2 *)&DAT_1008_1716;
    for (iVar3 = 0x32; iVar3 != 0; iVar3 = iVar3 + -1) {
      puVar2 = puVar4;
      puVar4 = puVar4 + 1;
      puVar1 = param_1;
      param_1 = param_1 + 1;
      *puVar2 = *puVar1;
    }
  }
  return;
}


// ---- FUN_1000_ea2c @ 1000:ea2c

void __cdecl16far FUN_1000_ea2c(undefined2 *param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined2 uVar7;
  undefined2 unaff_SS;
  undefined2 uVar8;
  undefined2 uVar9;
  int local_b2;
  undefined2 local_ac [84];
  undefined1 uStack_4;
  undefined1 uStack_3;
  
  uVar9 = 0x1008;
  uVar8 = 0x83;
  iVar4 = M007_GETSTATE();
  puVar6 = (undefined2 *)param_1;
  uVar7 = (undefined2)((ulong)param_1 >> 0x10);
  if (iVar4 == 1) {
    local_b2 = 0;
    do {
      uVar3 = puVar6[local_b2 * 2 + 2];
      local_ac[local_b2 * 2] = puVar6[local_b2 * 2 + 1];
      local_ac[local_b2 * 2 + 1] = uVar3;
      local_b2 = local_b2 + 1;
    } while (local_b2 < 0x2a);
    uStack_4 = *(undefined1 *)param_1;
    uStack_3 = *(undefined1 *)((int)puVar6 + 1);
    Ordinal_2108(0x1010,local_ac,unaff_SS,uVar8,uVar9);
    local_b2 = 0;
    do {
      uVar8 = local_ac[local_b2 * 2 + 1];
      puVar6[local_b2 * 2 + 1] = local_ac[local_b2 * 2];
      puVar6[local_b2 * 2 + 2] = uVar8;
      local_b2 = local_b2 + 1;
    } while (local_b2 < 0x2a);
    *(undefined1 *)param_1 = uStack_4;
    *(undefined1 *)((int)puVar6 + 1) = uStack_3;
  }
  else {
    puVar5 = (undefined2 *)&DAT_1008_02a2;
    for (iVar4 = 0x55; iVar4 != 0; iVar4 = iVar4 + -1) {
      puVar2 = puVar6;
      puVar6 = puVar6 + 1;
      puVar1 = puVar5;
      puVar5 = puVar5 + 1;
      *puVar2 = *puVar1;
    }
  }
  return;
}


// ---- FUN_1000_eb0a @ 1000:eb0a

void __cdecl16far FUN_1000_eb0a(undefined2 *param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined2 unaff_SS;
  undefined2 uVar6;
  undefined2 uVar7;
  int local_b2;
  undefined2 local_ac [84];
  undefined1 uStack_4;
  undefined1 uStack_3;
  
  uVar7 = 0x1008;
  uVar6 = 0x83;
  iVar4 = M007_GETSTATE();
  if (iVar4 == 1) {
    local_b2 = 0;
    do {
      uVar3 = ((undefined2 *)param_1)[local_b2 * 2 + 2];
      local_ac[local_b2 * 2] = ((undefined2 *)param_1)[local_b2 * 2 + 1];
      local_ac[local_b2 * 2 + 1] = uVar3;
      local_b2 = local_b2 + 1;
    } while (local_b2 < 0x2a);
    uStack_4 = *(undefined1 *)param_1;
    uStack_3 = *(undefined1 *)((int)(undefined2 *)param_1 + 1);
    Ordinal_2109(0x1010,local_ac,unaff_SS,uVar6,uVar7);
  }
  else {
    puVar5 = (undefined2 *)&DAT_1008_02a2;
    for (iVar4 = 0x55; iVar4 != 0; iVar4 = iVar4 + -1) {
      puVar2 = puVar5;
      puVar5 = puVar5 + 1;
      puVar1 = (undefined2 *)param_1;
      param_1._0_2_ = (undefined2 *)param_1 + 1;
      *puVar2 = *puVar1;
    }
  }
  return;
}


// ---- FUN_1000_eba0 @ 1000:eba0

void __cdecl16far FUN_1000_eba0(undefined2 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_2111(0x1010,param_1,uVar2,uVar3);
  }
  return;
}


// ---- FUN_1000_ebc0 @ 1000:ebc0

void __cdecl16far FUN_1000_ebc0(float param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_2112(0x1010,(double)param_1,uVar2,uVar3);
  }
  return;
}


// ---- FUN_1000_ebec @ 1000:ebec

void __cdecl16far FUN_1000_ebec(float param_1,float param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_2113(0x1010,(double)param_2,(double)param_1,uVar2,uVar3);
  }
  return;
}


// ---- FUN_1000_ec24 @ 1000:ec24

void __cdecl16far FUN_1000_ec24(float param_1,float param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_2117(0x1010,(double)param_2,(double)param_1,uVar2,uVar3);
  }
  return;
}


// ---- FUN_1000_ec5c @ 1000:ec5c

void __cdecl16far FUN_1000_ec5c(float param_1,float param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_2114(0x1010,(double)param_2,(double)param_1,uVar2,uVar3);
  }
  return;
}


// ---- FUN_1000_ec94 @ 1000:ec94

void __cdecl16far FUN_1000_ec94(undefined2 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_2116(0x1010,param_1,uVar2,uVar3);
  }
  return;
}


// ---- FUN_1000_ecb4 @ 1000:ecb4

void __cdecl16far FUN_1000_ecb4(float param_1,float param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_2118(0x1010,(double)param_2,(double)param_1,uVar2,uVar3);
  }
  return;
}


// ---- FUN_1000_ecec @ 1000:ecec

void __cdecl16far FUN_1000_ecec(undefined2 *param_1)

{
  undefined2 uVar1;
  undefined2 uVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  
  uVar5 = 0x1008;
  uVar4 = 0x83;
  iVar3 = M007_GETSTATE();
  uVar2 = DAT_1008_0ac0;
  uVar1 = DAT_1008_0abe;
  if (iVar3 == 1) {
    Ordinal_2119(0x1010,(undefined2 *)param_1,param_1._2_2_,uVar4,uVar5);
    return;
  }
  *param_1 = DAT_1008_0abe;
  ((undefined2 *)param_1)[1] = uVar2;
  ((undefined2 *)param_1)[2] = uVar1;
  ((undefined2 *)param_1)[3] = uVar2;
  return;
}


// ---- FUN_1000_ed2a @ 1000:ed2a

void __cdecl16far FUN_1000_ed2a(undefined2 param_1,float param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_2120(0x1010,(double)param_2,param_1,uVar2,uVar3);
  }
  return;
}


// ---- FUN_1000_ed58 @ 1000:ed58

void __cdecl16far FUN_1000_ed58(undefined1 param_1,undefined1 param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_2121(0x1010,param_2,param_1,uVar2,uVar3);
  }
  return;
}


// ---- FUN_1000_ed7c @ 1000:ed7c

void __cdecl16far FUN_1000_ed7c(undefined1 param_1,undefined1 param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_2122(0x1010,param_2,param_1,uVar2,uVar3);
  }
  return;
}


// ---- FUN_1000_eda0 @ 1000:eda0

void __cdecl16far FUN_1000_eda0(undefined2 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_2123(0x1010,param_1,uVar2,uVar3);
  }
  return;
}


// ---- FUN_1000_edc0 @ 1000:edc0

void __cdecl16far FUN_1000_edc0(undefined2 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_2124(0x1010,param_1,uVar2,uVar3);
  }
  return;
}


// ---- FUN_1000_ede0 @ 1000:ede0

void __cdecl16far FUN_1000_ede0(undefined2 param_1,float param_2,float param_3)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_2125(0x1010,(double)param_3,(double)param_2,param_1,uVar2,uVar3);
  }
  return;
}


// ---- FUN_1000_ee1c @ 1000:ee1c

void __cdecl16far FUN_1000_ee1c(undefined2 param_1,undefined2 param_2,undefined2 param_3)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_2126(0x1010,param_3,param_2,param_1,uVar2,uVar3);
  }
  return;
}


// ---- FUN_1000_ef16 @ 1000:ef16

void __cdecl16far FUN_1000_ef16(undefined2 param_1,undefined2 param_2,float param_3,float param_4)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_2136(0x1010,(double)param_4,(double)param_3,param_2,param_1,uVar2,uVar3);
  }
  return;
}


// ---- FUN_1000_ef54 @ 1000:ef54

void __cdecl16far FUN_1000_ef54(undefined2 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_2137(0x1010,param_1,uVar2,uVar3);
  }
  return;
}


// ---- FUN_1000_ef74 @ 1000:ef74

void __cdecl16far FUN_1000_ef74(undefined2 param_1,undefined2 param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_2138(0x1010,param_2,param_1,uVar2,uVar3);
  }
  return;
}


// ---- SETSTAGETILTANGLE @ 1010:0000

/* WARNING: Control flow encountered bad instruction data */

void SETSTAGETILTANGLE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_7 @ 1010:0004

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_7(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_8 @ 1010:0008

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_9 @ 1010:000c

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_9(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_10 @ 1010:0010

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_10(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_11 @ 1010:0014

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_11(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_12 @ 1010:0018

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_12(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_13 @ 1010:001c

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_13(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_23 @ 1010:0020

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_23(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_34 @ 1010:0024

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_34(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_37 @ 1010:0028

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_37(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_38 @ 1010:002c

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_38(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_45 @ 1010:0030

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_45(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- FATALEXIT @ 1010:0034

/* WARNING: Control flow encountered bad instruction data */

void FATALEXIT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GETVERSION @ 1010:0038

/* WARNING: Control flow encountered bad instruction data */

void GETVERSION(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- LOCALINIT @ 1010:003c

/* WARNING: Control flow encountered bad instruction data */

void LOCALINIT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GLOBALALLOC @ 1010:0040

/* WARNING: Control flow encountered bad instruction data */

void GLOBALALLOC(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GLOBALREALLOC @ 1010:0044

/* WARNING: Control flow encountered bad instruction data */

void GLOBALREALLOC(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GLOBALFREE @ 1010:0048

/* WARNING: Control flow encountered bad instruction data */

void GLOBALFREE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GLOBALLOCK @ 1010:004c

/* WARNING: Control flow encountered bad instruction data */

void GLOBALLOCK(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GLOBALUNLOCK @ 1010:0050

/* WARNING: Control flow encountered bad instruction data */

void GLOBALUNLOCK(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GLOBALSIZE @ 1010:0054

/* WARNING: Control flow encountered bad instruction data */

void GLOBALSIZE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- LOCKSEGMENT @ 1010:0058

/* WARNING: Control flow encountered bad instruction data */

void LOCKSEGMENT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GETMODULEUSAGE @ 1010:005c

/* WARNING: Control flow encountered bad instruction data */

void GETMODULEUSAGE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- INITTASK @ 1010:0060

/* WARNING: Control flow encountered bad instruction data */

void INITTASK(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- DOS3CALL @ 1010:0064

/* WARNING: Control flow encountered bad instruction data */

void DOS3CALL(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- __AHSHIFT @ 1010:0068

/* WARNING: Control flow encountered bad instruction data */

void __AHSHIFT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- __AHINCR @ 1010:006c

/* WARNING: Control flow encountered bad instruction data */

void __AHINCR(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GETPRIVATEPROFILEINT @ 1010:0070

/* WARNING: Control flow encountered bad instruction data */

void GETPRIVATEPROFILEINT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- WRITEPRIVATEPROFILESTRING @ 1010:0074

/* WARNING: Control flow encountered bad instruction data */

void WRITEPRIVATEPROFILESTRING(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GETDOSENVIRONMENT @ 1010:0078

/* WARNING: Control flow encountered bad instruction data */

void GETDOSENVIRONMENT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- FATALAPPEXIT @ 1010:007c

/* WARNING: Control flow encountered bad instruction data */

void FATALAPPEXIT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- __WINFLAGS @ 1010:0080

/* WARNING: Control flow encountered bad instruction data */

void __WINFLAGS(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GETTICKCOUNT @ 1010:0084

/* WARNING: Control flow encountered bad instruction data */

void GETTICKCOUNT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GETCURSORPOS @ 1010:0088

/* WARNING: Control flow encountered bad instruction data */

void GETCURSORPOS(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- SETCURSORPOS @ 1010:008c

/* WARNING: Control flow encountered bad instruction data */

void SETCURSORPOS(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- PEEKMESSAGE @ 1010:0090

/* WARNING: Control flow encountered bad instruction data */

void PEEKMESSAGE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- TRANSLATEMESSAGE @ 1010:0094

/* WARNING: Control flow encountered bad instruction data */

void TRANSLATEMESSAGE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- DISPATCHMESSAGE @ 1010:0098

/* WARNING: Control flow encountered bad instruction data */

void DISPATCHMESSAGE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GETSYSTEMMETRICS @ 1010:009c

/* WARNING: Control flow encountered bad instruction data */

void GETSYSTEMMETRICS(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- _WSPRINTF @ 1010:00a0

/* WARNING: Control flow encountered bad instruction data */

void _WSPRINTF(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- __FPMATH @ 1010:00a4

/* WARNING: Control flow encountered bad instruction data */

void __FPMATH(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_2000 @ 1010:00a8

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_2000(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_2001 @ 1010:00ac

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_2001(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_2002 @ 1010:00b0

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_2002(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_2003 @ 1010:00b4

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_2003(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_2004 @ 1010:00b8

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_2004(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_2005 @ 1010:00bc

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_2005(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_2006 @ 1010:00c0

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_2006(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_2007 @ 1010:00c4

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_2007(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_2008 @ 1010:00c8

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_2008(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_2009 @ 1010:00cc

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_2009(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_2010 @ 1010:00d0

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_2010(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_2011 @ 1010:00d4

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_2011(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_2012 @ 1010:00d8

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_2012(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_2013 @ 1010:00dc

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_2013(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_2014 @ 1010:00e0

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_2014(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_2015 @ 1010:00e4

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_2015(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_2016 @ 1010:00e8

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_2016(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_2017 @ 1010:00ec

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_2017(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_2018 @ 1010:00f0

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_2018(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_2019 @ 1010:00f4

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_2019(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_2020 @ 1010:00f8

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_2020(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_2021 @ 1010:00fc

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_2021(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_2023 @ 1010:0100

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_2023(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_2025 @ 1010:0104

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_2025(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_2026 @ 1010:0108

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_2026(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_2027 @ 1010:010c

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_2027(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_2029 @ 1010:0110

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_2029(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_2031 @ 1010:0114

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_2031(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_2032 @ 1010:0118

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_2032(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_2033 @ 1010:011c

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_2033(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_2036 @ 1010:0120

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_2036(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_2038 @ 1010:0124

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_2038(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_2039 @ 1010:0128

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_2039(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_2040 @ 1010:012c

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_2040(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_2041 @ 1010:0130

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_2041(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_2042 @ 1010:0134

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_2042(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_2043 @ 1010:0138

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_2043(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_2044 @ 1010:013c

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_2044(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_2045 @ 1010:0140

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_2045(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_2046 @ 1010:0144

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_2046(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_2047 @ 1010:0148

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_2047(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_2048 @ 1010:014c

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_2048(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_2049 @ 1010:0150

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_2049(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_2050 @ 1010:0154

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_2050(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_2051 @ 1010:0158

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_2051(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_2052 @ 1010:015c

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_2052(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_2053 @ 1010:0160

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_2053(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_2054 @ 1010:0164

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_2054(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_2055 @ 1010:0168

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_2055(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_2057 @ 1010:016c

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_2057(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_2058 @ 1010:0170

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_2058(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_2059 @ 1010:0174

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_2059(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_2060 @ 1010:0178

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_2060(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_2061 @ 1010:017c

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_2061(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_2062 @ 1010:0180

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_2062(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_2063 @ 1010:0184

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_2063(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_2064 @ 1010:0188

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_2064(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_2065 @ 1010:018c

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_2065(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_2066 @ 1010:0190

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_2066(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_2067 @ 1010:0194

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_2067(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_2068 @ 1010:0198

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_2068(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_2069 @ 1010:019c

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_2069(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_2070 @ 1010:01a0

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_2070(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_2071 @ 1010:01a4

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_2071(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_2072 @ 1010:01a8

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_2072(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_2073 @ 1010:01ac

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_2073(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_2074 @ 1010:01b0

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_2074(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_2075 @ 1010:01b4

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_2075(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_2076 @ 1010:01b8

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_2076(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_2077 @ 1010:01bc

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_2077(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_2078 @ 1010:01c0

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_2078(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_2079 @ 1010:01c4

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_2079(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_2080 @ 1010:01c8

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_2080(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_2081 @ 1010:01cc

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_2081(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_2082 @ 1010:01d0

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_2082(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_2083 @ 1010:01d4

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_2083(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_2084 @ 1010:01d8

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_2084(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_2085 @ 1010:01dc

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_2085(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_2086 @ 1010:01e0

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_2086(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_2087 @ 1010:01e4

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_2087(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_2088 @ 1010:01e8

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_2088(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_2089 @ 1010:01ec

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_2089(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_2090 @ 1010:01f0

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_2090(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_2091 @ 1010:01f4

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_2091(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_2092 @ 1010:01f8

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_2092(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_2093 @ 1010:01fc

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_2093(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_2094 @ 1010:0200

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_2094(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_2095 @ 1010:0204

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_2095(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_2096 @ 1010:0208

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_2096(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_2097 @ 1010:020c

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_2097(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_2098 @ 1010:0210

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_2098(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_2099 @ 1010:0214

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_2099(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_2100 @ 1010:0218

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_2100(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_2101 @ 1010:021c

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_2101(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_2102 @ 1010:0220

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_2102(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_2103 @ 1010:0224

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_2103(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_2104 @ 1010:0228

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_2104(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_2105 @ 1010:022c

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_2105(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_2106 @ 1010:0230

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_2106(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_2107 @ 1010:0234

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_2107(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_2108 @ 1010:0238

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_2108(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_2109 @ 1010:023c

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_2109(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_2110 @ 1010:0240

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_2110(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_2111 @ 1010:0244

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_2111(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_2112 @ 1010:0248

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_2112(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_2113 @ 1010:024c

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_2113(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_2114 @ 1010:0250

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_2114(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_2116 @ 1010:0254

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_2116(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_2117 @ 1010:0258

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_2117(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_2118 @ 1010:025c

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_2118(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_2119 @ 1010:0260

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_2119(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_2120 @ 1010:0264

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_2120(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_2121 @ 1010:0268

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_2121(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_2122 @ 1010:026c

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_2122(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_2123 @ 1010:0270

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_2123(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_2124 @ 1010:0274

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_2124(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_2125 @ 1010:0278

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_2125(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_2126 @ 1010:027c

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_2126(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_2127 @ 1010:0280

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_2127(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_2129 @ 1010:0284

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_2129(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_2130 @ 1010:0288

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_2130(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_2131 @ 1010:028c

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_2131(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_2132 @ 1010:0290

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_2132(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_2133 @ 1010:0294

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_2133(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_2134 @ 1010:0298

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_2134(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_2136 @ 1010:029c

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_2136(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_2137 @ 1010:02a0

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_2137(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_2138 @ 1010:02a4

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_2138(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_2139 @ 1010:02a8

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_2139(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_2140 @ 1010:02ac

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_2140(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_2141 @ 1010:02b0

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_2141(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_6000 @ 1010:02b4

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_6000(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_6001 @ 1010:02b8

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_6001(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_6002 @ 1010:02bc

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_6002(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_6005 @ 1010:02c0

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_6005(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_6007 @ 1010:02c4

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_6007(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_6009 @ 1010:02c8

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_6009(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_6010 @ 1010:02cc

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_6010(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_6011 @ 1010:02d0

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_6011(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_6015 @ 1010:02d4

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_6015(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_6016 @ 1010:02d8

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_6016(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_6017 @ 1010:02dc

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_6017(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_6018 @ 1010:02e0

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_6018(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_6019 @ 1010:02e4

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_6019(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- COMMANDENABLE @ 1010:02e8

/* WARNING: Control flow encountered bad instruction data */

void COMMANDENABLE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- M007_PUTVALUE @ 1010:02ec

/* WARNING: Control flow encountered bad instruction data */

void M007_PUTVALUE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- M007_GETVALUE @ 1010:02f0

/* WARNING: Control flow encountered bad instruction data */

void M007_GETVALUE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- M007_PUTLOW @ 1010:02f4

/* WARNING: Control flow encountered bad instruction data */

void M007_PUTLOW(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- M007_GETLOW @ 1010:02f8

/* WARNING: Control flow encountered bad instruction data */

void M007_GETLOW(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- M007_PUTHIGH @ 1010:02fc

/* WARNING: Control flow encountered bad instruction data */

void M007_PUTHIGH(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- M007_GETHIGH @ 1010:0300

/* WARNING: Control flow encountered bad instruction data */

void M007_GETHIGH(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- M007_PUTSTATE @ 1010:0304

/* WARNING: Control flow encountered bad instruction data */

void M007_PUTSTATE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- M007_GETSTATE @ 1010:0308

/* WARNING: Control flow encountered bad instruction data */

void M007_GETSTATE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- UIF_MESSAGE @ 1010:030c

/* WARNING: Control flow encountered bad instruction data */

void UIF_MESSAGE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- M007_PUTXY @ 1010:0310

/* WARNING: Control flow encountered bad instruction data */

void M007_PUTXY(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- UIF_LOG @ 1010:0314

/* WARNING: Control flow encountered bad instruction data */

void UIF_LOG(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- LOG_CAL_CHANGE @ 1010:0318

/* WARNING: Control flow encountered bad instruction data */

void LOG_CAL_CHANGE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GETLEOINIFILEPATH @ 1010:031c

/* WARNING: Control flow encountered bad instruction data */

void GETLEOINIFILEPATH(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- SETSENSITIVITY @ 1010:0320

/* WARNING: Control flow encountered bad instruction data */

void SETSENSITIVITY(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- SETMANUALKV @ 1010:0324

/* WARNING: Control flow encountered bad instruction data */

void SETMANUALKV(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- SETMANUALCURRENT @ 1010:0328

/* WARNING: Control flow encountered bad instruction data */

void SETMANUALCURRENT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- SWITCHFILAMENT_TYPE @ 1010:032c

/* WARNING: Control flow encountered bad instruction data */

void SWITCHFILAMENT_TYPE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- SEND_GSP_LENS_WOBBLE @ 1010:0330

/* WARNING: Control flow encountered bad instruction data */

void SEND_GSP_LENS_WOBBLE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- SWITCHPROFILE @ 1010:0334

/* WARNING: Control flow encountered bad instruction data */

void SWITCHPROFILE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- OM_KILL_OVERLAY_OBJ @ 1010:0338

/* WARNING: Control flow encountered bad instruction data */

void OM_KILL_OVERLAY_OBJ(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- OM_CREATE_OVERLAY_OBJ @ 1010:033c

/* WARNING: Control flow encountered bad instruction data */

void OM_CREATE_OVERLAY_OBJ(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- SEM_DEBUG @ 1010:0340

/* WARNING: Control flow encountered bad instruction data */

void SEM_DEBUG(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- CHANGE_XRAY_SCAN_LINE @ 1010:0344

/* WARNING: Control flow encountered bad instruction data */

void CHANGE_XRAY_SCAN_LINE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- SWITCHLUT_MODE @ 1010:0348

/* WARNING: Control flow encountered bad instruction data */

void SWITCHLUT_MODE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- DOCOMMANDFRAME_AVERAGE @ 1010:034c

/* WARNING: Control flow encountered bad instruction data */

void DOCOMMANDFRAME_AVERAGE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- DOCOMMANDFRAME_INT @ 1010:0350

/* WARNING: Control flow encountered bad instruction data */

void DOCOMMANDFRAME_INT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- DOCOMMANDLINE_INT @ 1010:0354

/* WARNING: Control flow encountered bad instruction data */

void DOCOMMANDLINE_INT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- DOCOMMANDFREEZE_ALL @ 1010:0358

/* WARNING: Control flow encountered bad instruction data */

void DOCOMMANDFREEZE_ALL(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- DOCOMMANDUNFREEZE_ALL @ 1010:035c

/* WARNING: Control flow encountered bad instruction data */

void DOCOMMANDUNFREEZE_ALL(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- SWITCHFREEZE_ON @ 1010:0360

/* WARNING: Control flow encountered bad instruction data */

void SWITCHFREEZE_ON(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- SETBRIGHTNESS @ 1010:0364

/* WARNING: Control flow encountered bad instruction data */

void SETBRIGHTNESS(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- RESUME_AUTO_VIDEO_LEVEL @ 1010:0368

/* WARNING: Control flow encountered bad instruction data */

void RESUME_AUTO_VIDEO_LEVEL(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- SUSPEND_AUTO_VIDEO_LEVEL @ 1010:036c

/* WARNING: Control flow encountered bad instruction data */

void SUSPEND_AUTO_VIDEO_LEVEL(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- SWITCHWINDOWING @ 1010:0370

/* WARNING: Control flow encountered bad instruction data */

void SWITCHWINDOWING(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- DOCOMMANDLINE_AVG @ 1010:0374

/* WARNING: Control flow encountered bad instruction data */

void DOCOMMANDLINE_AVG(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- SETLINE_AVERAGE_COUNT @ 1010:0378

/* WARNING: Control flow encountered bad instruction data */

void SETLINE_AVERAGE_COUNT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- SWITCHVAC_MODE @ 1010:037c

/* WARNING: Control flow encountered bad instruction data */

void SWITCHVAC_MODE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


