// Decompiled with Ghidra from m300.dll
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
  
  DAT_1008_00ca = 0x1008;
  uVar3 = unaff_CS;
  DAT_1008_00c8 = unaff_DI;
  DAT_1008_00cc = in_CX;
  DAT_1008_00ce = in_BX;
  DAT_1008_00d0 = unaff_SI;
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
  DAT_1008_0102 = CONCAT11((char)uVar3,(char)((uint)uVar3 >> 8));
  if ((DAT_1000_0010 & 1) == 0) {
    pcVar1 = (code *)swi(0x21);
    DAT_1008_0106 = (*pcVar1)();
  }
  else {
    uVar4 = 0x1000;
    DAT_1008_0106 = DOS3CALL(0x1000);
  }
  DAT_1008_0104 = CONCAT11((char)DAT_1008_0106,(char)((uint)DAT_1008_0106 >> 8));
  if ((DAT_1000_0010 & 1) == 0) {
    DAT_1008_0109 = 0;
  }
  FUN_1000_0270(uVar4);
  FUN_1000_0378();
  DAT_1008_00d2 = DAT_1008_00d2 + '\x01';
  FUN_1000_0244(DAT_1008_0122,DAT_1008_0124,DAT_1008_0126,DAT_1008_0128,DAT_1008_012a);
  return;
}


// ---- FUN_1000_00f6 @ 1000:00f6

undefined2 __stdcall16far FUN_1000_00f6(void)

{
  return 1;
}


// ---- FUN_1000_010e @ 1000:010e

undefined4 __stdcall16far FUN_1000_010e(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar10;
  char cVar11;
  uint uVar9;
  
  cVar11 = (int)param_2 < 0;
  if ((bool)cVar11) {
    bVar10 = param_1 != 0;
    param_1 = -param_1;
    param_2 = -(uint)bVar10 - param_2;
  }
  if ((int)param_4 < 0) {
    cVar11 = cVar11 + '\x01';
    bVar10 = param_3 != 0;
    param_3 = -param_3;
    param_4 = -(uint)bVar10 - param_4;
  }
  uVar7 = param_1;
  uVar3 = param_3;
  uVar5 = param_2;
  uVar9 = param_4;
  if (param_4 == 0) {
    uVar3 = param_2 / param_3;
    iVar4 = (int)(((ulong)param_2 % (ulong)param_3 << 0x10 | (ulong)param_1) / (ulong)param_3);
  }
  else {
    do {
      uVar8 = uVar9 >> 1;
      uVar3 = (uint)(CONCAT12((uVar9 & 1) != 0,uVar3) >> 1);
      uVar6 = uVar5 >> 1;
      uVar7 = (uint)(CONCAT12((uVar5 & 1) != 0,uVar7) >> 1);
      uVar5 = uVar6;
      uVar9 = uVar8;
    } while (uVar8 != 0);
    uVar1 = CONCAT22(uVar6,uVar7) / (ulong)uVar3;
    iVar4 = (int)uVar1;
    lVar2 = (ulong)param_3 * (uVar1 & 0xffff);
    uVar3 = (uint)((ulong)lVar2 >> 0x10);
    uVar7 = uVar3 + iVar4 * param_4;
    if (((CARRY2(uVar3,iVar4 * param_4)) || (param_2 < uVar7)) ||
       ((param_2 <= uVar7 && (param_1 < (uint)lVar2)))) {
      iVar4 = iVar4 + -1;
    }
    uVar3 = 0;
  }
  if (cVar11 == '\x01') {
    bVar10 = iVar4 != 0;
    iVar4 = -iVar4;
    uVar3 = -(uint)bVar10 - uVar3;
  }
  return CONCAT22(uVar3,iVar4);
}


// ---- FUN_1000_01a8 @ 1000:01a8

long __stdcall16far FUN_1000_01a8(uint param_1,int param_2,uint param_3,int param_4)

{
  if (param_4 == 0 && param_2 == 0) {
    return (ulong)param_1 * (ulong)param_3;
  }
  return CONCAT22((int)((ulong)param_1 * (ulong)param_3 >> 0x10) +
                  param_2 * param_3 + param_1 * param_4,(int)((ulong)param_1 * (ulong)param_3));
}


// ---- FUN_1000_01da @ 1000:01da

void __cdecl16far FUN_1000_01da(void)

{
  uint in_CX;
  uint uVar1;
  
  for (uVar1 = in_CX & 0xff; uVar1 != 0; uVar1 = uVar1 - 1) {
  }
  return;
}


// ---- FUN_1000_01e6 @ 1000:01e6

void __cdecl16far FUN_1000_01e6(void)

{
  uint in_CX;
  uint uVar1;
  
  for (uVar1 = in_CX & 0xff; uVar1 != 0; uVar1 = uVar1 - 1) {
  }
  return;
}


// ---- FUN_1000_01f2 @ 1000:01f2

undefined2 __cdecl16far FUN_1000_01f2(void)

{
  longdouble in_ST0;
  undefined2 local_10;
  
  local_10 = (undefined2)(sqword)ROUND(in_ST0);
  return local_10;
}


// ---- FUN_1000_0244 @ 1000:0244

void __cdecl16far FUN_1000_0244(void)

{
  FUN_1000_1e70(DAT_1008_00ce,DAT_1008_00d0,DAT_1008_00cc,DAT_1008_00ca,DAT_1008_00c8);
  return;
}


// ---- FUN_1000_0270 @ 1000:0270

void __cdecl16far FUN_1000_0270(void)

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
  if (DAT_1008_02fa != 0) {
    bVar5 = false;
    (*DAT_1008_02f8)();
    if (bVar5) {
      do {
        uVar6 = 2;
        uVar7 = 2;
        FUN_1000_0354(2,2);
        FUN_1000_0adb(uVar7);
        pcVar2 = (char *)FUN_1000_0aa4(uVar6);
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
  FUN_1000_0340(uVar7,iVar3);
  FUN_1000_0340();
  FUN_1000_0340();
  return;
}


// ---- FUN_1000_02b8 @ 1000:02b8

undefined2 __cdecl16far FUN_1000_02b8(void)

{
  DAT_1008_0133 = 1;
  FUN_1000_0340();
  FUN_1000_0340();
  FUN_1000_0340();
  FUN_1000_0340();
  FUN_1000_1518();
  FUN_1000_0b82();
  return 0x100;
}


// ---- FUN_1000_0340 @ 1000:0340

void __cdecl16near FUN_1000_0340(void)

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


// ---- FUN_1000_0354 @ 1000:0354

void __cdecl16far FUN_1000_0354(void)

{
  FUN_1000_0adb(0xfc);
  FUN_1000_0adb(0xff);
  return;
}


// ---- FUN_1000_0378 @ 1000:0378

void __cdecl16far FUN_1000_0378(void)

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
  pcVar11 = (char *)FUN_1000_0b44();
  uVar5 = (undefined2)((ulong)pcVar11 >> 0x10);
  pcVar9 = (char *)pcVar11;
  puVar12 = (undefined2 *)FUN_1000_0b44();
  uVar6 = (undefined2)((ulong)puVar12 >> 0x10);
  DAT_1008_0128 = (undefined2 *)puVar12;
  pcVar8 = (char *)0x0;
  for (; DAT_1008_012a = (undefined2)((ulong)puVar12 >> 0x10), puVar2 = (undefined2 *)puVar12,
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
      puVar12 = (undefined2 *)CONCAT22(DAT_1008_012a,puVar2 + 2);
    } while (cVar1 != '\0');
  }
  *puVar2 = 0;
  puVar2[1] = 0;
  return;
}


// ---- FUN_1000_0486 @ 1000:0486

undefined2 __cdecl16far FUN_1000_0486(char *param_1)

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


// ---- FUN_1000_050a @ 1000:050a

bool __cdecl16far FUN_1000_050a(double *param_1)

{
  return DAT_1008_0330 <= *param_1;
}


// ---- FUN_1000_0542 @ 1000:0542

void __cdecl16far FUN_1000_0542(int param_1,float *param_2,undefined2 param_3,undefined2 param_4)

{
  undefined2 *puVar1;
  double *pdVar2;
  undefined2 in_DX;
  float *pfVar3;
  undefined2 uVar4;
  
  if (param_1 == 0) {
    pdVar2 = (double *)FUN_1000_0b84(param_3,param_4);
    *param_2 = (float)*pdVar2;
  }
  else {
    puVar1 = (undefined2 *)FUN_1000_0b84(param_3,param_4);
    uVar4 = (undefined2)((ulong)param_2 >> 0x10);
    pfVar3 = (float *)param_2;
    *(undefined2 *)param_2 = *puVar1;
    *(undefined2 *)((int)pfVar3 + 2) = puVar1[1];
    *(undefined2 *)(pfVar3 + 1) = puVar1[2];
    *(undefined2 *)((int)pfVar3 + 6) = puVar1[3];
  }
  return;
}


// ---- FUN_1000_059a @ 1000:059a

undefined1 * __cdecl16far
FUN_1000_059a(undefined2 *param_1,undefined1 *param_2,undefined2 param_3,int param_4,int param_5)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined2 in_DX;
  undefined2 *puVar3;
  int iVar4;
  undefined2 uVar5;
  undefined4 local_c;
  undefined4 local_8;
  
  if (DAT_1008_015a == '\0') {
    uVar5 = (undefined2)((ulong)param_1 >> 0x10);
    puVar3 = (undefined2 *)param_1;
    piVar1 = (int *)FUN_1000_0df8(*param_1,puVar3[1],puVar3[2],puVar3[3]);
    local_8 = (int *)CONCAT22(in_DX,piVar1);
    FUN_1000_0be2(param_2 + (uint)(0 < param_4) + (uint)(*local_8 == 0x2d),param_3,param_4 + 1,
                  piVar1,in_DX);
  }
  else {
    local_8 = (int *)CONCAT22(DAT_1008_07d2._2_2_,(int *)DAT_1008_07d2);
    FUN_1000_0a4c(0 < param_4,param_2 + (*(int *)DAT_1008_07d2 == 0x2d),param_3);
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
           FUN_1000_0caa((undefined1 *)local_c + param_4 + (uint)(DAT_1008_015a == '\0'),
                         local_c._2_2_,0x15f,0x1008);
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


// ---- FUN_1000_0732 @ 1000:0732

void __cdecl16far
FUN_1000_0732(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5,undefined2 param_6)

{
  DAT_1008_015a = 1;
  FUN_1000_059a(param_1,param_2,param_3,param_4,param_5,param_6);
  DAT_1008_015a = 0;
  return;
}


// ---- FUN_1000_0766 @ 1000:0766

undefined1 * __cdecl16far
FUN_1000_0766(undefined2 *param_1,undefined1 *param_2,undefined2 param_3,int param_4)

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
  
  iVar3 = DAT_1008_015c;
  if (DAT_1008_015a == '\0') {
    uVar6 = (undefined2)((ulong)param_1 >> 0x10);
    puVar4 = (undefined2 *)param_1;
    piVar5 = (int *)FUN_1000_0df8(*param_1,puVar4[1],puVar4[2],puVar4[3]);
    local_8 = (int *)CONCAT22(in_DX,piVar5);
    FUN_1000_0be2(param_2 + (*local_8 == 0x2d),param_3,piVar5[1] + param_4,piVar5,in_DX);
  }
  else {
    local_8 = (int *)CONCAT22(DAT_1008_07d2._2_2_,(int *)DAT_1008_07d2);
    iVar1 = *(int *)DAT_1008_07d2;
    if (param_4 == DAT_1008_015c) {
      param_2[DAT_1008_015c + (uint)(iVar1 == 0x2d)] = 0x30;
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
    FUN_1000_0a4c(1,puVar2,param_3);
    puVar2 = puVar2 + 1;
    *local_c = 0x30;
  }
  else {
    puVar2 = puVar2 + piVar5[1];
  }
  local_c = (undefined1 *)CONCAT22(param_3,puVar2);
  if (0 < param_4) {
    FUN_1000_0a4c(1,puVar2,param_3);
    *local_c = 0x2e;
    if (piVar5[1] < 0) {
      if (DAT_1008_015a == '\0') {
        iVar3 = -piVar5[1];
        if (-param_4 != piVar5[1] && param_4 <= iVar3) {
          iVar3 = param_4;
        }
      }
      else {
        iVar3 = -piVar5[1];
      }
      FUN_1000_0a4c(iVar3,puVar2 + 1,param_3);
      FUN_1000_0ce6(puVar2 + 1,param_3,0x30,iVar3);
    }
  }
  return param_2;
}


// ---- FUN_1000_08cc @ 1000:08cc

void __cdecl16far
FUN_1000_08cc(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5)

{
  DAT_1008_015a = 1;
  FUN_1000_0766(param_1,param_2,param_3,param_4,param_5);
  DAT_1008_015a = 0;
  return;
}


// ---- FUN_1000_08fe @ 1000:08fe

void __cdecl16far
FUN_1000_08fe(undefined2 *param_1,int param_2,undefined2 param_3,int param_4,undefined2 param_5)

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
  piVar2 = (int *)FUN_1000_0df8(*param_1,puVar5[1],puVar5[2],puVar5[3]);
  DAT_1008_07d2 = (int *)CONCAT22(in_DX,piVar2);
  DAT_1008_015c = piVar2[1] + -1;
  pcVar3 = (char *)((uint)(*DAT_1008_07d2 == 0x2d) + param_2);
  local_8 = (char *)CONCAT22(param_3,pcVar3);
  FUN_1000_0be2(pcVar3,param_3,param_4,piVar2,in_DX);
  iVar4 = ((int *)DAT_1008_07d2)[1] + -1;
  DAT_1008_015e = DAT_1008_015c < iVar4;
  DAT_1008_015c = iVar4;
  if ((iVar4 < -4) || (param_4 <= iVar4)) {
    FUN_1000_0732(puVar5,uVar6,param_2,param_3,param_4,param_5);
  }
  else {
    if ((bool)DAT_1008_015e) {
      do {
        pcVar1 = local_8;
        uVar7 = (undefined2)((ulong)local_8 >> 0x10);
        pcVar3 = (char *)local_8;
        local_8 = (char *)CONCAT22(uVar7,(char *)local_8 + 1);
      } while (*pcVar1 != '\0');
      pcVar3[-1] = '\0';
    }
    FUN_1000_08cc(puVar5,uVar6,param_2,param_3,param_4);
  }
  return;
}


// ---- FUN_1000_09de @ 1000:09de

void __cdecl16far
FUN_1000_09de(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             int param_5,undefined2 param_6,undefined2 param_7)

{
  int unaff_BP;
  
  if ((param_5 == 0x65) || (param_5 == 0x45)) {
    FUN_1000_059a(param_1,param_2,param_3,param_4,param_6,param_7);
  }
  else if (param_5 == 0x66) {
    FUN_1000_0766(param_1,param_2,param_3,param_4,param_6);
  }
  else {
    FUN_1000_08fe(param_1,param_2,param_3,param_4,param_6,param_7,0x1008,unaff_BP + 1);
  }
  return;
}


// ---- FUN_1000_0a4c @ 1000:0a4c

void FUN_1000_0a4c(int param_1,int param_2,undefined2 param_3)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = FUN_1000_0c90(param_2,param_3);
    FUN_1000_0d2e(param_2 + param_1,param_3,param_2,param_3,iVar1 + 1);
  }
  return;
}


// ---- FUN_1000_0aa4 @ 1000:0aa4

int * __stdcall16far FUN_1000_0aa4(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  piVar3 = (int *)&DAT_1008_0340;
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


// ---- FUN_1000_0adb @ 1000:0adb

undefined2 __stdcall16far FUN_1000_0adb(void)

{
  return 0x1008;
}


// ---- FUN_1000_0afc @ 1000:0afc

void FUN_1000_0afc(void)

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
    FUN_1000_0354(in_AX,in_AX);
    FUN_1000_0adb(in_AX);
    pcVar2 = (char *)FUN_1000_0aa4(uVar5);
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


// ---- FUN_1000_0b44 @ 1000:0b44

void __cdecl16near FUN_1000_0b44(void)

{
  undefined2 uVar1;
  int iVar2;
  int in_DX;
  
  uVar1 = DAT_1008_028e;
  LOCK();
  DAT_1008_028e = 0x1000;
  UNLOCK();
  iVar2 = FUN_1000_11cd();
  DAT_1008_028e = uVar1;
  if (in_DX != 0 || iVar2 != 0) {
    return;
  }
  FUN_1000_0afc();
  return;
}


// ---- FUN_1000_0b72 @ 1000:0b72

undefined2 __cdecl16far FUN_1000_0b72(void)

{
  undefined2 unaff_SS;
  
  if (___EXPORTEDSTUB != (code)0xb8) {
    return unaff_SS;
  }
  return uRam10000f67;
}


// ---- FUN_1000_0b82 @ 1000:0b82

void __cdecl16near FUN_1000_0b82(void)

{
  return;
}


// ---- FUN_1000_0b84 @ 1000:0b84

undefined2 * __cdecl16far FUN_1000_0b84(char *param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 in_DX;
  undefined2 uVar3;
  
  while (uVar3 = (undefined2)((ulong)param_1 >> 0x10), (*(byte *)(*param_1 + 0x167) & 8) != 0) {
    param_1 = (char *)CONCAT22(uVar3,(char *)param_1 + 1);
  }
  uVar1 = FUN_1000_0f7a((char *)param_1,uVar3,0,0);
  iVar2 = FUN_1000_1148((char *)param_1,uVar3,uVar1);
  DAT_1008_1730 = *(undefined2 *)(iVar2 + 8);
  DAT_1008_1732 = *(undefined2 *)(iVar2 + 10);
  DAT_1008_1734 = *(undefined2 *)(iVar2 + 0xc);
  DAT_1008_1736 = *(undefined2 *)(iVar2 + 0xe);
  return (undefined2 *)&DAT_1008_1730;
}


// ---- FUN_1000_0be2 @ 1000:0be2

void __cdecl16far FUN_1000_0be2(char *param_1,int param_2,undefined4 param_3)

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
    FUN_1000_0caa(pcVar4,uVar6,pcVar4 + 1,uVar6);
  }
  return;
}


// ---- FUN_1000_0c90 @ 1000:0c90

uint __cdecl16far FUN_1000_0c90(char *param_1)

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


// ---- FUN_1000_0caa @ 1000:0caa

void __cdecl16far FUN_1000_0caa(char *param_1,char *param_2)

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


// ---- FUN_1000_0ce6 @ 1000:0ce6

undefined2 * __cdecl16far FUN_1000_0ce6(undefined2 *param_1,undefined1 param_2,uint param_3)

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


// ---- FUN_1000_0d2e @ 1000:0d2e

undefined2 * __cdecl16far FUN_1000_0d2e(undefined2 *param_1,undefined2 *param_2,uint param_3)

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
    lVar15 = FUN_1000_0f94(puVar10,iVar13,puVar8,iVar14);
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
          iVar14 = iVar14 + 0x50;
        }
        if (puVar12 == (undefined2 *)0x0) {
          iVar13 = iVar13 + 0x50;
        }
      }
    }
    else {
      uVar6 = param_3 - 1;
      puVar9 = (undefined1 *)((int)puVar8 + uVar6);
      if (CARRY2((uint)puVar8,uVar6)) {
        iVar14 = iVar14 + 0x50;
      }
      puVar11 = (undefined1 *)((int)puVar10 + uVar6);
      if (CARRY2((uint)puVar10,uVar6)) {
        iVar13 = iVar13 + 0x50;
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
          iVar14 = iVar14 + -0x50;
        }
        if (puVar11 == (undefined1 *)0xffff) {
          iVar13 = iVar13 + -0x50;
        }
      }
    }
  }
  return puVar10;
}


// ---- FUN_1000_0df8 @ 1000:0df8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 __cdecl16far
FUN_1000_0df8(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

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
  _DAT_1008_0272 = param_1;
  _DAT_1008_0274 = param_2;
  DAT_1008_0276 = param_3;
  DAT_1008_0278 = param_4;
  uVar6 = FUN_1000_1002(&iStack_2);
  puVar5 = (undefined1 *)&DAT_1008_027a;
  puVar4 = (undefined1 *)&DAT_1008_0273;
  for (iVar3 = (int)DAT_1008_0272; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar2 = *puVar1;
  }
  *puVar5 = 0;
  DAT_1008_0268 = in_BX & 0xff;
  DAT_1008_026a = (int)((ulong)uVar6 >> 0x10);
  DAT_1008_026c = (int)uVar6;
  DAT_1008_026e = 0x27a;
  DAT_1008_0270 = 0x1008;
  return 0x268;
}


// ---- FUN_1000_0e4e @ 1000:0e4e

void __cdecl16near FUN_1000_0e4e(void)

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
    FUN_1000_0f45();
    if ((*unaff_SI & 1) != 0) {
      in_CX = (in_CX - *unaff_SI) + -1;
    }
    uVar4 = *(uint *)(in_BX + 4);
    if (uVar4 != 0) {
      if (!CARRY2(in_CX + 2U,uVar4)) {
        uVar2 = FUN_1000_0b72();
        uVar4 = *(uint *)&DAT_1008_028e;
        if (uVar4 == 0x1000) goto LAB_1000_0ea0;
        uVar5 = 0x8000;
        while (uVar4 <= uVar5) {
          uVar5 = uVar5 >> 1;
          if (uVar5 == 0) goto LAB_1000_0eb9;
        }
        if (uVar5 < 8) goto LAB_1000_0eb9;
        uVar4 = uVar5 << 1;
        goto LAB_1000_0ea0;
      }
      uVar5 = 0xfff0;
      if (in_CX + 2U + uVar4 == 0) {
        while( true ) {
          bVar8 = false;
          iVar3 = FUN_1000_0edf();
          if (!bVar8) break;
          if (uVar5 == 0xfff0) {
            return;
          }
LAB_1000_0eb9:
          uVar4 = 0x10;
LAB_1000_0ea0:
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


// ---- FUN_1000_0edf @ 1000:0edf

void __cdecl16near FUN_1000_0edf(void)

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
LAB_1000_0f3a:
    FUN_1000_0afc();
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
    goto LAB_1000_0f3a;
    if ((*(byte *)(iVar5 + 2) & 4) != 0) {
      *(int *)(iVar5 + -2) = in_BX + -1;
    }
  }
  return;
}


// ---- FUN_1000_0f45 @ 1000:0f45

void __cdecl16near FUN_1000_0f45(void)

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


// ---- ___EXPORTEDSTUB @ 1000:0f66

undefined2 __cdecl16far ___EXPORTEDSTUB(void)

{
  return 0;
}


// ---- FUN_1000_0f7a @ 1000:0f7a

uint __cdecl16far FUN_1000_0f7a(char *param_1)

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


// ---- FUN_1000_0f94 @ 1000:0f94

undefined4 __stdcall16far FUN_1000_0f94(uint param_1,uint param_2,uint param_3,uint param_4)

{
  return CONCAT22(((param_2 >> 0xc) - (param_4 >> 0xc)) - (uint)(param_1 < param_3),
                  param_1 - param_3);
}


// ---- FUN_1000_1002 @ 1000:1002

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined4 __cdecl16near FUN_1000_1002(void)

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
  
  pdVar30 = (double *)&DAT_1008_0290;
  for (iVar18 = 4; Var14 = _DAT_1008_0290, iVar18 != 0; iVar18 = iVar18 + -1) {
    pdVar3 = pdVar30;
    pdVar30 = (double *)((int)pdVar30 + 2);
    puVar1 = unaff_SI;
    unaff_SI = unaff_SI + 1;
    *(undefined2 *)pdVar3 = *puVar1;
  }
  uVar19 = DAT_1008_0290._6_2_;
                    /* WARNING: Ignoring partial resolution of indirect */
  DAT_1008_0290._7_1_ = DAT_1008_0290._7_1_ & 0x7f;
  Var15 = _DAT_1008_0290;
  DAT_1008_0290 = ABS((double)Var14);
  uVar24 = 0x20;
  if (((DAT_1008_0290._0_2_ == 0 && DAT_1008_0290._2_2_ == 0) && DAT_1008_0290._4_2_ == 0) &&
      DAT_1008_0290._6_2_ == 0) {
    DAT_1008_029c = 0x3001;
    _DAT_1008_0290 = (longdouble)Var15;
    return 1;
  }
  if ((int)uVar19 < 0) {
    uVar24 = 0x2d;
  }
  if ((~uVar19 & 0x7ff0) == 0) {
    _DAT_1008_0290 = (longdouble)Var15;
    return 0x10000;
  }
  DAT_1008_02c9 = (undefined1)in_FPUControlWord;
  DAT_1008_02cb._0_1_ = DAT_1008_02c9;
  lVar35 = (longdouble)DAT_1008_0290;
  DAT_1008_0290._7_1_ = (byte)((unkuint10)lVar35 >> 0x38);
  DAT_1008_0298 = (uint)((unkuint10)lVar35 >> 0x40);
  lVar12 = (ulong)DAT_1008_0298 * 0x4d10 + (ulong)((DAT_1008_0298 >> 8) * 0x4d);
  uVar19 = (uint)lVar12;
  iVar18 = ((int)((ulong)lVar12 >> 0x10) + (uint)CARRY2(uVar19,(uint)DAT_1008_0290._7_1_ * 0x9a) +
           -0x1343) - (uint)(uVar19 + (uint)DAT_1008_0290._7_1_ * 0x9a < 0x12f4);
  _DAT_1008_0290 = lVar35;
  _DAT_1008_02c9 = in_FPUControlWord;
  FUN_1000_13f0(iVar18,uVar24);
  DAT_1008_02c7 =
       (uint)(_DAT_1000_0fb4 < lVar35) << 8 | (uint)(NAN(_DAT_1000_0fb4) || NAN(lVar35)) << 10 |
       (uint)(_DAT_1000_0fb4 == lVar35) << 0xe;
  if (_DAT_1000_0fb4 < lVar35 || (_DAT_1000_0fb4 == lVar35) != 0) {
    iVar18 = iVar18 + 1;
    lVar35 = _DAT_1000_0fbe * lVar35;
  }
  DAT_1008_0290._0_2_ = SUB102(lVar35,0);
  DAT_1008_0290._2_2_ = (uint)((unkuint10)lVar35 >> 0x10);
  DAT_1008_0290._4_2_ = (uint)((unkuint10)lVar35 >> 0x20);
  DAT_1008_0290._6_2_ = (uint)((unkuint10)lVar35 >> 0x30);
  DAT_1008_0298 = (uint)((unkuint10)lVar35 >> 0x40);
  bVar32 = false;
  bVar17 = 0;
  for (iVar20 = -(DAT_1008_0298 + 0xc002); iVar20 != 0; iVar20 = iVar20 + -1) {
    uVar19 = DAT_1008_0290._6_2_ & 1;
    DAT_1008_0290._6_2_ = DAT_1008_0290._6_2_ >> 1;
    bVar32 = (bVar17 & 1) != 0;
    bVar17 = (byte)(CONCAT11((DAT_1008_0290._0_2_ & 1) != 0,bVar17) >> 1);
    DAT_1008_0290._0_2_ = (uint)(CONCAT12((DAT_1008_0290._2_2_ & 1) != 0,DAT_1008_0290._0_2_) >> 1);
    DAT_1008_0290._2_2_ = (uint)(CONCAT12((DAT_1008_0290._4_2_ & 1) != 0,DAT_1008_0290._2_2_) >> 1);
    DAT_1008_0290._4_2_ = (uint)(CONCAT12(uVar19 != 0,DAT_1008_0290._4_2_) >> 1);
  }
  uVar28 = DAT_1008_0290._0_2_ + 0x39a + (uint)bVar32;
  uVar19 = (uint)(0xfc65 < DAT_1008_0290._0_2_ || CARRY2(DAT_1008_0290._0_2_ + 0x39a,(uint)bVar32));
  uVar26 = DAT_1008_0290._2_2_ + uVar19;
  uVar19 = (uint)CARRY2(DAT_1008_0290._2_2_,uVar19);
  uVar22 = DAT_1008_0290._4_2_ + uVar19;
  uVar19 = DAT_1008_0290._6_2_ + CARRY2(DAT_1008_0290._4_2_,uVar19);
  iVar20 = 0x10;
  pcVar16 = (char *)((int)(undefined2 *)&DAT_1008_029c + 1);
  _DAT_1008_0290 = lVar35;
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
  DAT_1008_029c = CONCAT11(DAT_1008_029c._1_1_,(char)iVar21 + '\x12');
  return CONCAT22(iVar18,1);
}


// ---- FUN_1000_1148 @ 1000:1148

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 __cdecl16far FUN_1000_1148(int param_1,undefined2 param_2)

{
  uint uVar1;
  int unaff_BP;
  undefined2 unaff_SS;
  int local_8 [2];
  undefined2 local_4;
  int iStack_2;
  
  iStack_2 = unaff_BP + 1;
  local_4 = 0x1008;
  uVar1 = FUN_1000_142e(0,param_1,param_2,local_8,unaff_SS,0x7de,0x1008);
  DAT_1008_07d8 = local_8[0] - param_1;
  DAT_1008_07d7 = 0;
  if ((uVar1 & 4) != 0) {
    DAT_1008_07d7 = 2;
  }
  if ((uVar1 & 1) != 0) {
    DAT_1008_07d7 = DAT_1008_07d7 | 1;
  }
  DAT_1008_07d6 = (uVar1 & 2) != 0;
  return 0x7d6;
}


// ---- FUN_1000_11ac @ 1000:11ac

undefined2 __cdecl16far FUN_1000_11ac(undefined4 param_1)

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


// ---- FUN_1000_11cd @ 1000:11cd

undefined2 __cdecl16far FUN_1000_11cd(uint param_1)

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
      if (*(int *)((int)(undefined4 *)&DAT_1008_02e8 + 2) != 0) {
        pcVar4 = (code *)0x1526;
        while( true ) {
          uVar3 = *(uint *)&DAT_1008_02f2;
          uVar6 = (uint)((ulong)*(undefined4 *)&DAT_1008_02ec >> 0x10);
          in_BX = (int)*(undefined4 *)&DAT_1008_02ec;
          uVar10 = uVar6;
          do {
            do {
              unaff_CS = 0x1000;
              uVar9 = (*pcVar4)();
              if (!bVar7) {
                if (pcVar4 == (code *)0x1526) goto LAB_1000_123e;
                goto LAB_1000_123b;
              }
              puVar1 = (undefined4 *)(in_BX + 0xe);
              in_BX = (int)*puVar1;
              bVar7 = uVar6 < uVar3;
              bVar8 = uVar6 != uVar3;
              uVar6 = (uint)((ulong)*puVar1 >> 0x10);
            } while (bVar8);
            uVar3 = *(uint *)((int)*(undefined4 *)&DAT_1008_02ec + 0x14);
            uVar6 = (uint)((ulong)*(undefined4 *)&DAT_1008_02e8 >> 0x10);
            in_BX = (int)*(undefined4 *)&DAT_1008_02e8;
            bVar7 = uVar6 < uVar10;
            bVar8 = uVar6 != uVar10;
            uVar10 = uVar6;
          } while (bVar8);
          bVar7 = pcVar4 < (code *)0xe4e;
          if (pcVar4 == (code *)0xe4e) break;
          pcVar4 = (code *)0xe4e;
        }
      }
      FUN_1000_1496();
      if (!bVar7) {
LAB_1000_123b:
        uVar9 = FUN_1000_1526();
LAB_1000_123e:
        *(undefined2 *)((int)(undefined4 *)&DAT_1008_02ec + 2) = (int)((ulong)uVar9 >> 0x10);
        *(int *)&DAT_1008_02ec = in_BX;
        return (int)uVar9;
      }
    }
    if (*(int *)&DAT_1008_02dc == 0 && *(int *)&DAT_1008_02da == 0) {
      return 0;
    }
    iVar2 = (*(code *)*(undefined2 *)&DAT_1008_02da)(unaff_CS,param_1);
    if (iVar2 == 0) {
      return 0;
    }
  } while( true );
}


// ---- FUN_1000_13f0 @ 1000:13f0

void __cdecl16near FUN_1000_13f0(void)

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


// ---- FUN_1000_142e @ 1000:142e

/* WARNING: Removing unreachable block (ram,0x10001484) */
/* WARNING: Removing unreachable block (ram,0x1000148d) */

int FUN_1000_142e(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
                 undefined2 param_5,double *param_6)

{
  int iVar1;
  undefined2 unaff_SS;
  longdouble local_c;
  
  iVar1 = FUN_1000_15a2(param_1,param_2,param_3,param_4,param_5,&local_c,unaff_SS);
  *param_6 = (double)local_c;
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  return iVar1;
}


// ---- FUN_1000_1496 @ 1000:1496

void __cdecl16near FUN_1000_1496(void)

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
      if (((int)uVar4 != 0) || (iVar1 == 0)) goto LAB_1000_150d;
    }
    lVar5 = GLOBALSIZE(0x1010,iVar1);
    if (lVar5 == 0) {
LAB_1000_150d:
      FUN_1000_0afc();
      return;
    }
    *(int *)0x6 = iVar2;
    *(undefined2 *)0x2 = *(undefined2 *)(unaff_DI + 0xc);
    FUN_1000_1834();
    FUN_1000_1868();
  }
  return;
}


// ---- FUN_1000_1518 @ 1000:1518

void __cdecl16near FUN_1000_1518(void)

{
  FUN_1000_180a();
  return;
}


// ---- FUN_1000_1526 @ 1000:1526

uint * __cdecl16near FUN_1000_1526(void)

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
          if (CARRY2((uint)puVar1,uVar2)) goto LAB_1000_157f;
          puVar6 = (uint *)((int)puVar1 + uVar2) + 1;
          uVar3 = *(uint *)((int)puVar1 + uVar2);
          if ((uVar3 & 1) == 0) break;
          uVar3 = uVar3 + uVar2 + 2;
          *puVar7 = uVar3;
        }
      }
      if (puVar6 + -1 < puVar5) break;
      if (((uint)puVar5 & 1) != 0) goto LAB_1000_157f;
      puVar7 = (uint *)*(undefined2 *)(in_BX + 8);
      if ((uint *)*(undefined2 *)(in_BX + 10) == puVar7) goto LAB_1000_157f;
      puVar5 = (uint *)((int)*(undefined2 *)(in_BX + 10) + -1);
    }
    puVar7 = (uint *)((int)puVar6 + uVar3);
  } while (!CARRY2((uint)puVar6,uVar3));
LAB_1000_157f:
  puVar7 = (uint *)*(undefined2 *)(in_BX + 8);
  *(undefined2 *)(in_BX + 10) = puVar7;
  return puVar7;
}


// ---- FUN_1000_15a2 @ 1000:15a2

uint FUN_1000_15a2(undefined2 param_1,byte *param_2,int *param_3,uint *param_4)

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
LAB_1000_15f1:
      pbVar1 = pbVar11;
      pbVar11 = pbVar9 + 2;
      bVar6 = *pbVar1;
    }
    else if (bVar6 == 0x2d) {
      local_16 = 0x8000;
      goto LAB_1000_15f1;
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
            if (local_1c == 0) goto LAB_1000_163f;
            pbVar1 = pbVar11;
            pbVar11 = pbVar11 + 1;
            bVar6 = *pbVar1;
          }
          if (bVar6 == 0x2e) {
            do {
              pbVar1 = pbVar11;
              pbVar11 = pbVar11 + 1;
              bVar6 = *pbVar1;
LAB_1000_1659:
              if ((bVar6 < 0x30) || (0x39 < bVar6)) goto LAB_1000_1675;
              pcVar2 = pcVar10;
              pcVar10 = pcVar10 + 1;
              *pcVar2 = bVar6 - 0x30;
              local_18 = local_18 + -1;
              local_1c = local_1c + -1;
            } while (local_1c != 0);
            goto LAB_1000_166c;
          }
          goto LAB_1000_1675;
        }
        do {
          local_18 = iVar5;
          bVar6 = *pbVar11;
LAB_1000_161e:
          pbVar11 = pbVar11 + 1;
          iVar5 = local_18 + -1;
        } while (bVar6 == 0x30);
        if (bVar6 != 0) goto LAB_1000_1659;
      }
      local_14 = pbVar11 + -1;
      goto LAB_1000_17d7;
    }
    if ((bVar6 == 0x2e) && ((bVar6 = *pbVar11, 0x2f < bVar6 && (bVar6 < 0x3a)))) goto LAB_1000_161e;
  }
  local_10 = 4;
  goto LAB_1000_17d7;
  while (iVar5 = local_18 + 1, bVar6 < 0x3a) {
LAB_1000_163f:
    local_18 = iVar5;
    pbVar1 = pbVar11;
    pbVar11 = pbVar11 + 1;
    bVar6 = *pbVar1;
    if (bVar6 < 0x30) break;
  }
  if (bVar6 == 0x2e) {
LAB_1000_166c:
    do {
      pbVar1 = pbVar11;
      pbVar11 = pbVar11 + 1;
      bVar6 = *pbVar1;
      if (bVar6 < 0x30) break;
    } while (bVar6 < 0x3a);
  }
LAB_1000_1675:
  local_1c = 0x19 - local_1c;
  local_14 = pbVar11 + -1;
  if ((((bVar6 == 0x45) || (bVar6 == 0x65)) || (bVar6 == 0x44)) || (bVar6 == 100)) {
    pbVar9 = pbVar11 + 1;
    bVar6 = *pbVar11;
    if (bVar6 == 0x2b) {
LAB_1000_16a4:
      pbVar1 = pbVar9;
      pbVar9 = pbVar11 + 2;
      bVar6 = *pbVar1;
    }
    else if (bVar6 == 0x2d) {
      local_1a = 0xffff;
      goto LAB_1000_16a4;
    }
    if ((0x2f < bVar6) && (bVar6 < 0x3a)) {
      uVar7 = bVar6 - 0x30;
      uVar8 = uVar7;
      do {
        pbVar1 = pbVar9;
        pbVar9 = pbVar9 + 1;
        bVar6 = *pbVar1;
        if ((bVar6 < 0x30) || (0x39 < bVar6)) goto LAB_1000_16db;
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
LAB_1000_16db:
      local_18 = local_18 + ((uVar8 ^ local_1a) - local_1a);
      local_14 = pbVar9 + -1;
    }
  }
  if (local_1c != 0) {
    *pcVar10 = '\0';
    pbVar11 = (byte *)(pcVar10 + -1);
    if (local_1c < 0x19) {
      if (local_18 != 0) goto LAB_1000_1722;
    }
    else {
      bVar6 = *pbVar11;
      *pbVar11 = 0;
      local_1c = local_1c - 1;
      local_18 = local_18 + 1;
      pbVar11 = (byte *)(pcVar10 + -2);
      if (bVar6 < 5) {
LAB_1000_1722:
        for (; *pbVar11 == 0; pbVar11 = pbVar11 + -1) {
          local_1c = local_1c - 1;
          local_18 = local_18 + 1;
        }
      }
      else {
        *pbVar11 = *pbVar11 + 1;
      }
    }
    FUN_1000_1db0(&local_e,local_1c,local_36,unaff_SS);
    if (local_18 == 0) {
LAB_1000_175c:
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
          goto LAB_1000_17b9;
        }
LAB_1000_17e3:
        local_10 = local_10 | 1;
        goto LAB_1000_17d7;
      }
    }
    else if (local_18 < 0x1450) {
      if (-0x1450 < local_18) {
        FUN_1000_1b56(param_1,local_18,&local_e,unaff_SS);
        goto LAB_1000_175c;
      }
      goto LAB_1000_17e3;
    }
    local_10 = local_10 | 2;
    puVar12[4] = local_16 | 0x7fff;
    puVar12[3] = 0x8000;
    puVar12[2] = 0;
    puVar12[1] = 0;
    *param_4 = 0;
    goto LAB_1000_17b9;
  }
LAB_1000_17d7:
  for (iVar14 = 5; iVar14 != 0; iVar14 = iVar14 + -1) {
    puVar3 = puVar12;
    puVar12 = puVar12 + 1;
    *puVar3 = 0;
  }
LAB_1000_17b9:
  *param_3 = (int)local_14;
  ((int *)param_3)[1] = local_12;
  return local_10;
}


// ---- FUN_1000_180a @ 1000:180a

void __cdecl16near FUN_1000_180a(void)

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


// ---- FUN_1000_1834 @ 1000:1834

void __cdecl16near FUN_1000_1834(void)

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


// ---- FUN_1000_1868 @ 1000:1868

void __cdecl16near FUN_1000_1868(void)

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


// ---- FUN_1000_1b56 @ 1000:1b56

void FUN_1000_1b56(int param_1,uint param_2,undefined2 *param_3)

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
    local_8 = (code *)0x1bf4;
    uVar2 = (undefined2)((ulong)param_3 >> 0x10);
    uStack_e = param_2;
    if (param_1 == 0) {
      local_8 = (code *)0x1bea;
      in_ST0 = *(unkbyte10 *)((undefined2 *)param_3 + 1);
    }
    while (uStack_e != 0) {
      uVar1 = uStack_e & 7;
      uStack_e = uStack_e >> 3;
      if (uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x10001bc0. Too many branches */
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


// ---- FUN_1000_1db0 @ 1000:1db0

uint * FUN_1000_1db0(uint *param_1,int param_2,byte *param_3)

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
    FUN_1000_1e5e();
    uVar18 = FUN_1000_1e5e();
    uVar8 = (uint)CARRY2((uint)((ulong)uVar18 >> 0x10),uVar8);
    uVar4 = uVar13 + uVar5 + uVar8;
    uVar13 = (uint)(CARRY2(uVar13,uVar5) || CARRY2(uVar13 + uVar5,uVar8));
    bVar17 = CARRY2(uVar6,uVar10);
    uVar6 = uVar6 + uVar10;
    uVar11 = uVar6 + uVar13;
    bVar15 = CARRY2((uint)uVar18,uVar3);
    uVar1 = (uint)uVar18 + uVar3;
    uVar18 = FUN_1000_1e5e();
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


// ---- FUN_1000_1e5e @ 1000:1e5e

undefined4 __cdecl16near FUN_1000_1e5e(void)

{
  int in_AX;
  int in_DX;
  uint in_BX;
  
  return CONCAT22(in_DX << 1,in_AX << 1 | (uint)((in_BX & 0x8000) != 0));
}


// ---- FUN_1000_1e70 @ 1000:1e70

undefined2 __stdcall16far FUN_1000_1e70(void)

{
  return 1;
}


// ---- WEP @ 1000:1e82

undefined2 __stdcall16far WEP(void)

{
  return 1;
}


// ---- DISP_REPORTID @ 1000:1e94

void __cdecl16far DISP_REPORTID(void)

{
  undefined2 unaff_CS;
  
  UIF_MESSAGE(unaff_CS,0x233c,0x1000);
  return;
}


// ---- INITIALISE_DISP_CONTROLLER_DATA @ 1000:1eae

void __cdecl16far INITIALISE_DISP_CONTROLLER_DATA(void)

{
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  M007_PUTHIGH(unaff_CS,DAT_1008_0308,DAT_1008_030a);
  M007_PUTHIGH(0x1010,DAT_1008_030c,DAT_1008_030e);
  M007_PUTLOW(0x1010,DAT_1008_0310,DAT_1008_0312);
  M007_PUTLOW(0x1010,DAT_1008_0310,DAT_1008_0312);
  M007_PUTLOW(0x1010,DAT_1008_0314,DAT_1008_0316);
  M007_PUTHIGH(0x1010,DAT_1008_0318,DAT_1008_031a);
  M007_PUTVALUE(0x1010,DAT_1008_0314,DAT_1008_0316);
  M007_PUTLOW(0x1010,DAT_1008_0314,DAT_1008_0316);
  M007_PUTHIGH(0x1010,DAT_1008_031c,DAT_1008_031e);
  M007_PUTVALUE(0x1010,DAT_1008_0314,DAT_1008_0316);
  M007_PUTHIGH(0x1010,DAT_1008_0320,DAT_1008_0322);
  M007_PUTHIGH(0x1010,DAT_1008_0320,DAT_1008_0322);
  M007_PUTHIGH(0x1010,DAT_1008_0320,DAT_1008_0322);
  M007_PUTHIGH(0x1010,DAT_1008_0320,DAT_1008_0322);
  M007_PUTHIGH(0x1010,DAT_1008_0320,DAT_1008_0322);
  M007_PUTHIGH(0x1010,DAT_1008_0320,DAT_1008_0322);
  M007_PUTHIGH(0x1010,DAT_1008_0320,DAT_1008_0322);
  M007_PUTHIGH(0x1010,DAT_1008_0320,DAT_1008_0322);
  M007_PUTHIGH(0x1010,DAT_1008_0324,DAT_1008_0326);
  M007_PUTHIGH(0x1010,DAT_1008_0324,DAT_1008_0326);
  M007_PUTHIGH(0x1010,DAT_1008_0324,DAT_1008_0326);
  M007_PUTHIGH(0x1010,DAT_1008_0324,DAT_1008_0326);
  M007_PUTHIGH(0x1010,DAT_1008_0320,DAT_1008_0322);
  M007_PUTHIGH(0x1010,DAT_1008_0320,DAT_1008_0322);
  M007_PUTHIGH(0x1010,DAT_1008_0320,DAT_1008_0322);
  M007_PUTHIGH(0x1010,DAT_1008_0320,DAT_1008_0322);
  M007_PUTHIGH(0x1010,DAT_1008_0324,DAT_1008_0326);
  M007_PUTHIGH(0x1010,DAT_1008_0324,DAT_1008_0326);
  M007_PUTHIGH(0x1010,DAT_1008_0324,DAT_1008_0326);
  M007_PUTHIGH(0x1010,DAT_1008_0324,DAT_1008_0326);
  M007_PUTHIGH(0x1010,DAT_1008_0324,DAT_1008_0326);
  M007_PUTHIGH(0x1010,DAT_1008_0324,DAT_1008_0326);
  M007_PUTHIGH(0x1010,DAT_1008_0324,DAT_1008_0326);
  M007_PUTHIGH(0x1010,DAT_1008_0324,DAT_1008_0326);
  M007_PUTHIGH(0x1010,DAT_1008_0320,DAT_1008_0322);
  M007_PUTHIGH(0x1010,DAT_1008_0320,DAT_1008_0322);
  M007_PUTHIGH(0x1010,DAT_1008_0320,DAT_1008_0322);
  M007_PUTHIGH(0x1010,DAT_1008_0320,DAT_1008_0322);
  M007_PUTHIGH(0x1010,DAT_1008_0320,DAT_1008_0322);
  M007_PUTHIGH(0x1010,DAT_1008_0320,DAT_1008_0322);
  M007_PUTHIGH(0x1010,DAT_1008_0320,DAT_1008_0322);
  M007_PUTHIGH(0x1010,DAT_1008_0320,DAT_1008_0322);
  M007_PUTHIGH(0x1010,DAT_1008_0320,DAT_1008_0322);
  M007_PUTHIGH(0x1010,DAT_1008_0320,DAT_1008_0322);
  M007_PUTHIGH(0x1010,DAT_1008_0320,DAT_1008_0322);
  M007_PUTHIGH(0x1010,DAT_1008_0320,DAT_1008_0322);
  M007_PUTHIGH(0x1010,DAT_1008_0324,DAT_1008_0326);
  M007_PUTHIGH(0x1010,DAT_1008_0324,DAT_1008_0326);
  M007_PUTHIGH(0x1010,DAT_1008_0324,DAT_1008_0326);
  M007_PUTHIGH(0x1010,DAT_1008_0324,DAT_1008_0326);
  M007_PUTHIGH(0x1010,DAT_1008_0320,DAT_1008_0322);
  M007_PUTHIGH(0x1010,DAT_1008_0320,DAT_1008_0322);
  M007_PUTHIGH(0x1010,DAT_1008_0320,DAT_1008_0322);
  M007_PUTHIGH(0x1010,DAT_1008_0320,DAT_1008_0322);
  M007_PUTHIGH(0x1010,DAT_1008_0320,DAT_1008_0322);
  uVar4 = 0x6d;
  M007_PUTHIGH(0x1010,DAT_1008_0320,DAT_1008_0322);
  uVar3 = 0x6e;
  M007_PUTHIGH(0x1010,DAT_1008_0320,DAT_1008_0322);
  uVar2 = 0x6f;
  M007_PUTHIGH(0x1010,DAT_1008_0320,DAT_1008_0322);
  uVar1 = 0x83;
  M007_PUTHIGH(0x1010,DAT_1008_0320,DAT_1008_0322);
  DISP_REPORTID(uVar1,uVar2,uVar3,uVar4);
  return;
}


// ---- INITIALISE_DISP_CONTROLLER @ 1000:2240

undefined2 __cdecl16far INITIALISE_DISP_CONTROLLER(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    iVar1 = FUN_1000_3d14(uVar2,uVar3);
    if (iVar1 < 0) {
      UIF_LOG(0x1000,0xa000,0,0);
      return 0x1a0;
    }
    Ordinal_514(0x1000,0,1,0);
    Ordinal_514(0x1010,0,2,0);
  }
  return 0;
}


// ---- DISP_CONTROLLER_SHUTDOWN @ 1000:228e

undefined2 __cdecl16far DISP_CONTROLLER_SHUTDOWN(void)

{
  return 0;
}


// ---- DISP_CONTROLLER_SUSPEND @ 1000:229c

void __cdecl16far DISP_CONTROLLER_SUSPEND(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    FUN_1000_3d68(uVar2,uVar3);
  }
  return;
}


// ---- DISP_CONTROLLER_REMOVE @ 1000:22b8

void __cdecl16far DISP_CONTROLLER_REMOVE(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    FUN_1000_3d54(uVar2,uVar3);
  }
  return;
}


// ---- DISP_TIMER_TICK @ 1000:22d6

undefined2 __stdcall16far DISP_TIMER_TICK(void)

{
  return 0x1008;
}


// ---- TEST_300 @ 1000:22e4

float * __stdcall16far
TEST_300(float *param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 unaff_SS;
  
  uVar1 = FUN_1000_01f2(param_4,0x1008);
  iVar2 = FUN_1000_3d80(uVar1,param_4);
  *param_1 = (float)iVar2;
  return param_1;
}


// ---- RESTORE_DISPLAY_CONFIG @ 1000:231a

void __stdcall16far RESTORE_DISPLAY_CONFIG(void)

{
  FUN_1000_235c(0x1008);
  return;
}


// ---- GET_DISPLAY_CONFIG @ 1000:232e

undefined2 __stdcall16far GET_DISPLAY_CONFIG(void)

{
  return 0x1008;
}


// ---- FUN_1000_235c @ 1000:235c

undefined2 __cdecl16far FUN_1000_235c(void)

{
  return 0x1008;
}


// ---- SWITCHEDX_DOTS @ 1000:2368

void __stdcall16far SWITCHEDX_DOTS(undefined2 param_1)

{
  undefined2 unaff_CS;
  
  M007_PUTSTATE(unaff_CS,param_1);
  return;
}


// ---- SWITCHPROFILE @ 1000:2382

void __stdcall16far SWITCHPROFILE(int param_1)

{
  int iVar1;
  undefined2 unaff_CS;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined1 local_14 [4];
  undefined1 local_10 [4];
  undefined4 local_c;
  undefined2 local_8;
  undefined2 local_6;
  int local_4;
  
  uVar5 = 0x1008;
  uVar4 = 0x153;
  M007_GETVALUE(unaff_CS,local_10);
  local_4 = FUN_1000_01f2(uVar4,uVar5);
  local_4 = local_4 + 3;
  uVar4 = 0x47;
  M007_GETVALUE(0x1000,local_14);
  local_6 = FUN_1000_01f2(uVar4);
  local_8 = DAT_1008_069c;
  if (param_1 == 1) {
    iVar1 = M007_GETSTATE(0x1000,199);
    DAT_1008_001a = (uint)(iVar1 == 1);
    uVar4 = M007_GETSTATE(0x1010,0x13b);
    switch(uVar4) {
    case 0:
      local_8 = 4;
      break;
    case 1:
      local_8 = 2;
      break;
    case 2:
      local_8 = 6;
      break;
    case 3:
      local_8 = 1;
      break;
    case 4:
      local_8 = 5;
      break;
    case 5:
      local_8 = 0xb;
      break;
    case 6:
      local_8 = 8;
      break;
    case 7:
      local_8 = 0xf;
      break;
    case 8:
      local_8 = 0xc;
      break;
    case 9:
      local_8 = 10;
      break;
    case 10:
      local_8 = 0xe;
      break;
    default:
      local_8 = 9;
      break;
    case 0xc:
      local_8 = 0xd;
      break;
    case 0xd:
      local_8 = 0;
      break;
    case 0xe:
      local_8 = 3;
    }
    if (DAT_1008_0018 == '\0') {
      DAT_1008_069a = local_4;
      DAT_1008_069c = local_8;
      DAT_1008_069e = 7;
      DAT_1008_06aa = 6;
      DAT_1008_06b0 = 0x400;
      DAT_1008_06a6 = 0xb;
      DAT_1008_06b2 = 0xb;
      DAT_1008_06b6 = 500;
      DAT_1008_06b8 = 600;
      DAT_1008_06c0 = 10;
      DAT_1008_06c2 = 0xd;
      DAT_1008_06a8 = 0xe;
      DAT_1008_06b4 = 0xe;
      DAT_1008_06c4 = 0xe;
      DAT_1008_06a0 = 1;
      DAT_1008_06a4 = 1;
      DAT_1008_06ac = 1;
      DAT_1008_06ae = 1;
      DAT_1008_06c6 = 1;
      DAT_1008_0698 = 0;
      DAT_1008_06a2 = 0;
      DAT_1008_06ba = 0;
      DAT_1008_06c8 = 0;
      DAT_1008_06ca = 0;
      DAT_1008_06cc = 0;
      DAT_1008_06ce = 0;
      uVar4 = 0;
      DAT_1008_06bc = GLOBALALLOC(0x1000,1,0);
      local_c = (undefined1 *)GLOBALLOCK(0x1010,DAT_1008_06bc,uVar4);
      *local_c = 0;
      GLOBALUNLOCK(0x1010,DAT_1008_06bc);
      uVar4 = 0;
      DAT_1008_06be = GLOBALALLOC(0x1010,1,0);
      puVar2 = (undefined1 *)GLOBALLOCK(0x1010,DAT_1008_06be,uVar4);
      *puVar2 = 0;
      local_c = puVar2;
      GLOBALUNLOCK(0x1010,DAT_1008_06be);
      uVar3 = OM_CREATE_OVERLAY_OBJ(0x698,0x1008,1,1,0,1,7);
      DAT_1008_0018 = '\x01';
    }
    else {
      if (DAT_1008_001a != 0) {
        STOP_XRAY_PROFILE();
      }
      STOP_PROFILE_ACQUIRE();
      OM_KILL_OVERLAY_OBJ(DAT_1008_06d0,DAT_1008_06d2);
      DAT_1008_069a = local_4;
      DAT_1008_069c = local_8;
      uVar4 = 0;
      DAT_1008_06bc = GLOBALALLOC(0x1000,1,0);
      local_c = (undefined1 *)GLOBALLOCK(0x1010,DAT_1008_06bc,uVar4);
      *local_c = 0;
      GLOBALUNLOCK(0x1010,DAT_1008_06bc);
      uVar4 = 0;
      DAT_1008_06be = GLOBALALLOC(0x1010,1,0);
      puVar2 = (undefined1 *)GLOBALLOCK(0x1010,DAT_1008_06be,uVar4);
      *puVar2 = 0;
      local_c = puVar2;
      GLOBALUNLOCK(0x1010,DAT_1008_06be);
      uVar3 = OM_CREATE_OVERLAY_OBJ(0x698,0x1008,1,1,0,1,7);
    }
    DAT_1008_06d2 = (undefined2)((ulong)uVar3 >> 0x10);
    DAT_1008_06d0 = (undefined2)uVar3;
    if (DAT_1008_001a == 0) {
      DEFINE_LIVE_LINE_PROF(local_6,1,1);
    }
    else {
      DEFINE_XRAY_PROF(1);
      SET_XRAY_MODE(2);
      uVar4 = 4;
      CONTROL_XRAY(0x1000,local_6,0);
      START_XRAY_PROFILE(uVar4);
    }
    START_PROFILE_ACQUIRE();
  }
  else {
    if (DAT_1008_001a != 0) {
      STOP_XRAY_PROFILE();
    }
    STOP_PROFILE_ACQUIRE();
    if (DAT_1008_0018 != '\0') {
      OM_KILL_OVERLAY_OBJ(DAT_1008_06d0,DAT_1008_06d2);
      DAT_1008_0018 = '\0';
    }
  }
  M007_PUTSTATE(0x1000,param_1);
  return;
}


// ---- SETPROFILE_W @ 1000:2692

void __stdcall16far SETPROFILE_W(undefined2 param_1,undefined2 param_2)

{
  undefined2 unaff_CS;
  
  M007_PUTVALUE(unaff_CS,param_1,param_2);
  return;
}


// ---- SWITCHIMAGE_STORE @ 1000:26ae

void __stdcall16far SWITCHIMAGE_STORE(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 unaff_CS;
  undefined2 uVar3;
  undefined2 uVar4;
  
  uVar4 = 0x1008;
  uVar3 = 0;
  uVar1 = LOADCURSOR(unaff_CS,0x7f02,0);
  uVar1 = SETCURSOR(0x1010,uVar1,uVar3,uVar4);
  uVar3 = 99;
  M007_PUTSTATE(0x1010,param_1);
  iVar2 = M007_GETSTATE(0x1010,0x83,uVar3);
  if ((iVar2 == 1) && (param_1 == 0)) {
    Ordinal_515(0x1010,0);
  }
  SETCURSOR(0x1010,uVar1);
  return;
}


// ---- PC_PLANE_CTRL @ 1000:2702

void __stdcall16far PC_PLANE_CTRL(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_514(0x1010,0,1,0,uVar2,uVar3);
    Ordinal_514(0x1010,0,2,0);
  }
  return;
}


// ---- SEM_PLANE_CTRL @ 1000:2732

void __stdcall16far SEM_PLANE_CTRL(int param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  uVar4 = 0x1008;
  uVar3 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 != 1) {
    return;
  }
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    if (param_1 != 1) {
      if (param_1 == 2) {
        uVar2 = 0;
      }
      else {
        if (param_1 != 3) {
          return;
        }
        uVar2 = 1;
      }
      Ordinal_514(0x1010,uVar2,1,1,uVar3,uVar4);
      uVar3 = 1;
      goto LAB_1000_275c;
    }
    uVar2 = 1;
  }
  Ordinal_514(0x1010,uVar2,1,1,uVar3,uVar4);
  uVar3 = 0;
LAB_1000_275c:
  Ordinal_514(0x1010,uVar3,2,1);
  return;
}


// ---- IMAGE_PLANE_CTRL @ 1000:2798

void __stdcall16far IMAGE_PLANE_CTRL(int param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  uVar4 = 0x1008;
  uVar3 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 != 1) {
    return;
  }
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    if (param_1 != 1) {
      if (param_1 == 2) {
        uVar2 = 0;
      }
      else {
        if (param_1 != 3) {
          return;
        }
        uVar2 = 1;
      }
      Ordinal_514(0x1010,uVar2,1,2,uVar3,uVar4);
      uVar3 = 1;
      goto LAB_1000_27c2;
    }
    uVar2 = 1;
  }
  Ordinal_514(0x1010,uVar2,1,2,uVar3,uVar4);
  uVar3 = 0;
LAB_1000_27c2:
  Ordinal_514(0x1010,uVar3,2,2);
  return;
}


// ---- OM_GET_DISPLAY_CONFIG @ 1000:27fe

void __stdcall16far OM_GET_DISPLAY_CONFIG(undefined2 *param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  
  puVar4 = (undefined2 *)&DAT_1008_0ff8;
  puVar5 = (undefined2 *)param_1;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar2 = *puVar1;
  }
  return;
}


// ---- SWITCHSTEREO_RES @ 1000:281c

void __stdcall16far SWITCHSTEREO_RES(int param_1)

{
  int iVar1;
  undefined2 unaff_CS;
  undefined2 uVar2;
  
  if (param_1 == 0) {
    uVar2 = 0x83;
    unaff_CS = 0x1010;
    iVar1 = M007_GETSTATE();
    if (iVar1 == 1) {
      iVar1 = M007_GETSTATE(0x1010,0x9a,uVar2);
      if (iVar1 == 1) {
        SWITCHLUT_MODE(1);
        Ordinal_547(0x1000,1);
      }
      unaff_CS = 0x1010;
      iVar1 = M007_GETSTATE(0x1010,0x9b);
      if (iVar1 == 1) {
        SWITCHLUT_MODE(1);
        unaff_CS = 0x1010;
        Ordinal_547(0x1000,2);
      }
    }
  }
  M007_PUTSTATE(unaff_CS,param_1);
  return;
}


// ---- SWITCHSTEREO_LEFT @ 1000:2878

void __stdcall16far SWITCHSTEREO_LEFT(int param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x99;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 0) {
    if (param_1 == 1) {
      iVar1 = M007_GETSTATE(0x1010,0x9a,uVar2,uVar3);
      if (iVar1 == 0) {
        iVar1 = M007_GETSTATE(0x1010,0x83);
        if (iVar1 == 1) {
          SWITCHLUT_MODE(1);
          Ordinal_547(0x1000,1);
        }
      }
    }
    M007_PUTSTATE(0x1010,param_1);
  }
  return;
}


// ---- SWITCHSTEREO_RIGHT @ 1000:28c8

void __stdcall16far SWITCHSTEREO_RIGHT(int param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x99;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 0) {
    if (param_1 == 1) {
      iVar1 = M007_GETSTATE(0x1010,0x9b,uVar2,uVar3);
      if (iVar1 == 0) {
        iVar1 = M007_GETSTATE(0x1010,0x83);
        if (iVar1 == 1) {
          SWITCHLUT_MODE(1);
          Ordinal_547(0x1000,2);
        }
      }
    }
    M007_PUTSTATE(0x1010,param_1);
  }
  return;
}


// ---- START_HIST_ACQUIRE @ 1000:2918

void __stdcall16far START_HIST_ACQUIRE(undefined2 param_1)

{
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  
  uVar2 = 0x1008;
  uVar1 = 0xac;
  M007_PUTSTATE(unaff_CS,1);
  Ordinal_555(0x1010,param_1,uVar1,uVar2);
  return;
}


// ---- STOP_HIST_ACQUIRE @ 1000:2938

void __cdecl16far STOP_HIST_ACQUIRE(void)

{
  Ordinal_556();
  M007_PUTSTATE(0x1010,0);
  return;
}


// ---- UPDATE_STORED_HIST @ 1000:2954

void __stdcall16far UPDATE_STORED_HIST(undefined2 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_549(0x1010,param_1,uVar2,uVar3);
  }
  return;
}


// ---- START_PROFILE_ACQUIRE @ 1000:2976

void __cdecl16far START_PROFILE_ACQUIRE(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_565(0x1010,uVar2,uVar3);
  }
  return;
}


// ---- STOP_PROFILE_ACQUIRE @ 1000:2992

void __cdecl16far STOP_PROFILE_ACQUIRE(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_566(0x1010,uVar2,uVar3);
  }
  return;
}


// ---- DEFINE_PROF_LINE @ 1000:29ae

void __stdcall16far
DEFINE_PROF_LINE(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
                undefined2 param_5)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_550(0x1010,param_1,param_2,param_3,param_4,param_5,uVar2,uVar3);
  }
  return;
}


// ---- DEFINE_VERT_PROF_LINE @ 1000:29dc

void __stdcall16far DEFINE_VERT_PROF_LINE(undefined2 param_1,undefined2 param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_551(0x1010,param_1,param_2,uVar2,uVar3);
  }
  return;
}


// ---- DEFINE_HORIZ_PROF_LINE @ 1000:2a00

void __stdcall16far DEFINE_HORIZ_PROF_LINE(undefined2 param_1,undefined2 param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_552(0x1010,param_1,param_2,uVar2,uVar3);
  }
  return;
}


// ---- DEFINE_LIVE_LINE_PROF @ 1000:2a24

void __stdcall16far DEFINE_LIVE_LINE_PROF(undefined2 param_1,undefined2 param_2,undefined2 param_3)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_569(0x1010,param_1,param_2,param_3,uVar2,uVar3);
  }
  return;
}


// ---- DEFINE_YMOD_CHAN @ 1000:2a4c

void __stdcall16far DEFINE_YMOD_CHAN(undefined2 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_553(0x1010,param_1,uVar2,uVar3);
  }
  return;
}


// ---- READ_HIST_DATA @ 1000:2a6e

void __stdcall16far READ_HIST_DATA(undefined2 param_1,undefined2 param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_568(0x1010,param_1,param_2,uVar2,uVar3);
  }
  return;
}


// ---- READ_PROF_DATA @ 1000:2a92

void __stdcall16far READ_PROF_DATA(undefined2 param_1,undefined2 param_2,undefined2 param_3)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_567(0x1010,param_1,param_2,param_3,uVar2,uVar3);
  }
  return;
}


// ---- SET_XRAY_MODE @ 1000:2aba

void __stdcall16far SET_XRAY_MODE(int param_1)

{
  if (param_1 == 0) {
    if (DAT_1008_0014 != '\x02') {
      DAT_1008_0017 = 1;
    }
    DAT_1008_0014 = '\x02';
  }
  else if (param_1 == 1) {
    if (DAT_1008_0014 != '\x01') {
      DAT_1008_0017 = 1;
    }
    DAT_1008_0014 = '\x01';
  }
  else if (param_1 == 2) {
    if (DAT_1008_0014 != '\x04') {
      DAT_1008_0017 = 1;
    }
    DAT_1008_0014 = '\x04';
  }
  return;
}


// ---- DOCOMMANDXRAY_START @ 1000:2b10

void __cdecl16far DOCOMMANDXRAY_START(void)

{
  int iVar1;
  undefined1 extraout_AH;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined1 local_8 [4];
  undefined2 local_4;
  
  uVar4 = 0x1008;
  DAT_1008_0014 = '\x01';
  DAT_1008_0017 = '\x01';
  SETXRAYGREY(0);
  DAT_1008_0016 = '\0';
  if (DAT_1008_0014 == '\x04') {
    uVar3 = 4;
    uVar2 = 0;
    uVar4 = 0x47;
    M007_GETVALUE(0x1000,local_8);
    local_4 = FUN_1000_01f2(uVar4,uVar2,uVar3);
    CONTROL_XRAY(0x1000,local_4,uVar4);
    START_XRAY_PROFILE();
  }
  else {
    uVar2 = 0x2b66;
    iVar1 = M007_GETSTATE(0x1000,0x11,uVar4);
    if (iVar1 < 7) {
      iVar1 = COMMANDENABLE(0x1010,0x25);
      if (iVar1 == 0) {
        uVar2 = 0x1010;
        DOCOMMANDSCANRATE8(0x1010);
      }
      else {
        uVar2 = 0x1010;
        DOCOMMANDSCANRATE7(0x1010);
      }
    }
    SWITCHPLANEA_FROZEN(0x1010,0,uVar2);
    SWITCHPLANEB_FROZEN(0x1010,0);
    uVar4 = CONCAT11(extraout_AH,DAT_1008_0014);
    CONTROL_XRAY(0x1010,0,CONCAT11(extraout_AH,DAT_1008_0015));
    if ((DAT_1008_0017 != '\0') || (iVar1 = M007_GETSTATE(0x1010,0xc0,uVar4), iVar1 != 2)) {
      if (DAT_1008_0016 == '\x01') {
        DOCOMMANDSET_PLANEB(0x1010);
      }
      else {
        DOCOMMANDCLR_PLANEB(0x1010);
      }
    }
  }
  DAT_1008_0017 = 0;
  return;
}


// ---- DOCOMMANDXRAY_STOP @ 1000:2bd6

void __cdecl16far DOCOMMANDXRAY_STOP(void)

{
  undefined2 uVar1;
  undefined2 uVar2;
  
  if (DAT_1008_0014 == '\x04') {
    uVar1 = 0x1000;
    STOP_XRAY_PROFILE(0x1008);
  }
  else {
    uVar2 = 1;
    SWITCHPLANEA_FROZEN();
    uVar1 = 0x1010;
    SWITCHPLANEB_FROZEN(0x1010,1,uVar2);
  }
  CONTROL_XRAY(uVar1,0,0);
  return;
}


// ---- DEFINE_XRAY_PROF @ 1000:2c0a

void __stdcall16far DEFINE_XRAY_PROF(undefined2 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_557(0x1010,param_1,uVar2,uVar3);
  }
  return;
}


// ---- SETUP_DM_LUT @ 1000:2c2c

void __stdcall16far SETUP_DM_LUT(byte *param_1,int param_2,undefined2 param_3,int param_4)

{
  byte *pbVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  int local_4;
  
  uVar4 = 0x1008;
  uVar3 = 0x83;
  iVar2 = M007_GETSTATE();
  if (iVar2 != 1) goto LAB_1000_2cb8;
  if (param_4 == 0) {
LAB_1000_2c53:
    Ordinal_559(0x1010,(byte *)param_1,param_1._2_2_,param_2,param_3,uVar3,uVar4);
    DAT_1008_0015 = 0;
    for (local_4 = 0; pbVar1 = param_1, local_4 < param_2; local_4 = local_4 + 1) {
      param_1 = (byte *)CONCAT22(param_1._2_2_,(byte *)param_1 + 4);
      DAT_1008_0015 = DAT_1008_0015 | '\x01' << (*pbVar1 + 1 & 0x1f);
    }
  }
  else {
    if (param_4 != 1) {
      if (param_4 == 2) goto LAB_1000_2c53;
      if (param_4 != 3) goto LAB_1000_2cb8;
    }
    Ordinal_562(0x1010,(byte *)param_1,param_1._2_2_,param_2,param_3);
    if (*param_1 != DAT_1008_0015) {
      DAT_1008_0015 = *param_1;
      DAT_1008_0017 = 1;
    }
  }
LAB_1000_2cb8:
  if (-1 < param_4) {
    if (param_4 < 2) {
      if (DAT_1008_0016 != '\0') {
        DAT_1008_0017 = 1;
      }
      DAT_1008_0016 = '\0';
    }
    else if ((0 < param_4 + -1) && (param_4 + -2 < 2)) {
      if (DAT_1008_0016 != '\x01') {
        DAT_1008_0017 = 1;
      }
      DAT_1008_0016 = '\x01';
    }
  }
  return;
}


// ---- SWITCHLUT_MODE @ 1000:2cf8

void __stdcall16far SWITCHLUT_MODE(int param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  uVar4 = 0x1008;
  uVar3 = 0xc0;
  uVar2 = 0x1010;
  iVar1 = M007_GETSTATE();
  if ((param_1 == 2) || (param_1 == 1)) {
    if (iVar1 == 0) {
      uVar2 = 0x1000;
      OPLUT_SAVE(0,1);
    }
  }
  else if ((iVar1 == 1) || (iVar1 == 2)) {
    SWITCHPLANEA_FROZEN(0x1010,0,uVar3,uVar4);
    SWITCHPLANEB_FROZEN(0x1010,0);
    uVar2 = 0x1000;
    OPLUT_RESTORE(0,1);
  }
  M007_PUTSTATE(uVar2,param_1);
  return;
}


// ---- SETXRAYGREY @ 1000:2d56

void __stdcall16far SETXRAYGREY(undefined2 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_561(0x1010,param_1,1,uVar2,uVar3);
  }
  return;
}


// ---- DOCOMMANDXRAY_RESET @ 1000:2d7a

void __cdecl16far DOCOMMANDXRAY_RESET(void)

{
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  
  uVar2 = 0x1008;
  uVar1 = 0;
  CONTROL_XRAY(unaff_CS,0,0);
  if (DAT_1008_0014 == '\x04') {
    STOP_XRAY_PROFILE(uVar1,uVar2);
  }
  SWITCHLUT_MODE(0);
  return;
}


// ---- STOP_XRAY_PROFILE @ 1000:2da4

void __cdecl16far STOP_XRAY_PROFILE(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_560(0x1010,uVar2,uVar3);
  }
  return;
}


// ---- START_XRAY_PROFILE @ 1000:2dc0

void __cdecl16far START_XRAY_PROFILE(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_558(0x1010,uVar2,uVar3);
  }
  return;
}


// ---- SET_XRAY_FILTER @ 1000:2ddc

void __stdcall16far SET_XRAY_FILTER(undefined2 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_548(0x1010,param_1,uVar2,uVar3);
  }
  return;
}


// ---- SET_XRAY_WINDOWS @ 1000:2dfe

void __stdcall16far
SET_XRAY_WINDOWS(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_564(0x1010,param_1,param_2,param_3,param_4,uVar2,uVar3);
  }
  return;
}


// ---- SET_XRAY_SCALE @ 1000:2e28

void __stdcall16far SET_XRAY_SCALE(undefined2 param_1,undefined2 param_2,undefined2 param_3)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_563(0x1010,param_1,param_2,param_3,uVar2,uVar3);
  }
  return;
}


// ---- CHANGE_XRAY_SCAN_LINE @ 1000:2e50

void __stdcall16far CHANGE_XRAY_SCAN_LINE(int param_1)

{
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined1 local_8 [4];
  int local_4;
  
  uVar3 = 0x1008;
  uVar2 = 0x46;
  uVar1 = 0x46;
  M007_GETVALUE(unaff_CS,local_8);
  local_4 = FUN_1000_01f2(uVar1,uVar2,uVar3);
  M007_PUTXY(0x1000,(float)param_1,(float)local_4);
  uVar1 = M007_GETSTATE(0x1010,0x25);
  SWITCHPROFILE(uVar1);
  return;
}


// ---- CLEAR_IMAGE_STORE @ 1000:2ea8

undefined2 __cdecl16far CLEAR_IMAGE_STORE(void)

{
  return 0x1008;
}


// ---- SWITCHXRAY_LINE @ 1000:2eb4

void __stdcall16far SWITCHXRAY_LINE(int param_1)

{
  int iVar1;
  undefined2 unaff_CS;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x13a;
  M007_PUTSTATE(unaff_CS,param_1);
  switch(param_1) {
  default:
    param_1 = 0;
    break;
  case 1:
    param_1 = 1;
    break;
  case 2:
    param_1 = 2;
    break;
  case 3:
    param_1 = 3;
    break;
  case 4:
    param_1 = 4;
    break;
  case 5:
    param_1 = 5;
    break;
  case 6:
    param_1 = 6;
  }
  param_1 = 6 - param_1;
  SET_XRAY_WINDOWS(param_1,param_1,param_1,param_1);
  iVar1 = M007_GETSTATE(0x1000,199,uVar2,uVar3);
  if (iVar1 == 1) {
    uVar2 = M007_GETSTATE(0x1010,0x25);
    SWITCHPROFILE(uVar2);
  }
  return;
}


// ---- SWITCHXRAY_LINECOLOUR @ 1000:2f48

void __stdcall16far SWITCHXRAY_LINECOLOUR(undefined2 param_1)

{
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  
  uVar2 = 0x1008;
  uVar1 = 0x13b;
  M007_PUTSTATE(unaff_CS,param_1);
  uVar1 = M007_GETSTATE(0x1010,0x25,uVar1,uVar2);
  SWITCHPROFILE(uVar1);
  return;
}


// ---- SETXRAY_THRESHOLD @ 1000:2f6e

void __stdcall16far SETXRAY_THRESHOLD(undefined2 param_1,undefined2 param_2)

{
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  
  uVar2 = 0x1008;
  uVar1 = 0x1b0;
  M007_PUTVALUE(unaff_CS,param_1,param_2);
  M007_GETSTATE(0x1010,0x110,uVar1,uVar2);
  return;
}


// ---- SETXRAY_LINE_SCALE @ 1000:2f92

void __stdcall16far SETXRAY_LINE_SCALE(undefined2 param_1,undefined2 param_2)

{
  undefined2 unaff_CS;
  
  M007_PUTVALUE(unaff_CS,param_1,param_2);
  return;
}


// ---- SETXYIMAGE_ORIGIN @ 1000:2fae

void __stdcall16far
SETXYIMAGE_ORIGIN(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  undefined2 unaff_CS;
  
  M007_PUTXY(unaff_CS,param_1,param_2,param_3,param_4);
  return;
}


// ---- FUN_1000_2fd0 @ 1000:2fd0

undefined2 __cdecl16far
FUN_1000_2fd0(undefined2 param_1,undefined2 param_2,undefined2 *param_3,uint *param_4,int *param_5,
             undefined2 *param_6)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  int extraout_DX;
  int iVar6;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  bool bVar7;
  undefined4 uVar8;
  ulong uVar9;
  long lVar10;
  int iVar11;
  undefined2 uVar12;
  uint local_66;
  int local_64;
  uint local_5e;
  int local_5c;
  uint local_5a;
  int local_52;
  uint local_50;
  int local_4e;
  undefined2 local_42;
  undefined1 local_40 [4];
  uint local_3c;
  uint local_3a;
  undefined2 local_38;
  undefined2 local_36;
  int local_32;
  int local_30;
  int local_2e;
  int local_14 [5];
  undefined2 local_a;
  undefined2 local_8;
  undefined4 local_6;
  
  local_42 = 0;
  iVar1 = _LOPEN(unaff_CS,0,param_1);
  if (iVar1 < 0) {
    uVar5 = 0xffff;
  }
  else {
    iVar3 = iVar1;
    _LREAD(0x1010,0xe,local_14,unaff_SS);
    if (local_14[0] == 0x4d42) {
      iVar4 = iVar1;
      _LREAD(0x1010,0x2c,local_40,unaff_SS);
      iVar11 = iVar1;
      _LLSEEK(0x1010,0,local_a,local_8);
      if (local_2e == 0 && local_30 == 0) {
        if (local_32 == 4) {
          FUN_1000_010e(local_3c + 7,local_3a + (0xfff8 < local_3c),8,0);
          iVar6 = extraout_DX;
          uVar2 = FUN_1000_01da(iVar11,iVar4,iVar3);
          uVar5 = local_38;
          uVar12 = local_36;
          uVar8 = FUN_1000_01a8(uVar2,iVar6,local_32,0);
          uVar9 = FUN_1000_01a8(uVar8,uVar5,uVar12);
          local_64 = (int)(uVar9 >> 0x10);
          local_66 = FUN_1000_01e6();
          if ((uVar9 & 7) != 0) {
            bVar7 = 0xfffe < local_66;
            local_66 = local_66 + 1;
            local_64 = local_64 + (uint)bVar7;
          }
          *param_4 = local_3c;
          ((uint *)param_4)[1] = local_3a;
          *param_3 = local_38;
          ((undefined2 *)param_3)[1] = local_36;
          *param_5 = uVar2 - local_3c;
          ((int *)param_5)[1] = (iVar6 - local_3a) - (uint)(uVar2 < local_3c);
          if ((local_64 == 0) && (local_66 < 0x8001)) {
            local_50 = local_66;
            local_4e = local_64;
            local_5a = local_66;
            local_52 = 1;
          }
          else {
            local_50 = 0x8000;
            local_4e = 0;
            local_52 = FUN_1000_01e6();
            local_5a = local_66 & 0x7fff;
            if (local_5a == 0) {
              local_5a = 0x8000;
            }
            else {
              local_52 = local_52 + 1;
            }
          }
          uVar5 = 2;
          iVar3 = GLOBALALLOC(0x1000,local_50,local_4e);
          if (iVar3 == 0) {
            local_42 = 0xfffc;
          }
          else {
            local_6 = GLOBALLOCK(0x1010,iVar3,uVar5);
            if (local_6 == 0) {
              local_42 = 0xfffd;
            }
            else {
              uVar5 = 0x1010;
              lVar10 = Ordinal_107(0x1010,local_66,local_64);
              if (lVar10 != 0) {
                *param_6 = (int)lVar10;
                ((undefined2 *)param_6)[1] = (int)((ulong)lVar10 >> 0x10);
                while (0 < local_52) {
                  if (local_52 == 1) {
                    local_5e = local_5a;
                    local_5c = local_4e;
                  }
                  else {
                    local_5e = 0x8000;
                    local_5c = 0;
                  }
                  iVar11 = iVar1;
                  iVar4 = _LREAD(uVar5,local_5e,local_6);
                  if (iVar4 == -1) {
                    local_52 = 0;
                    local_42 = 0xfffb;
                    uVar5 = 0x1010;
                  }
                  else {
                    Ordinal_109(0x1010,0,local_5e,lVar10,local_6,iVar11);
                    uVar5 = FUN_1000_01da();
                    lVar10 = lVar10 + CONCAT22(local_5c,uVar5);
                    local_52 = local_52 + -1;
                    uVar5 = 0x1000;
                  }
                }
              }
              GLOBALUNLOCK(uVar5,iVar3);
            }
            GLOBALFREE(0x1010,iVar3);
          }
        }
        else {
          local_42 = 0xfffe;
        }
        _LCLOSE(0x1010,iVar1);
        return local_42;
      }
    }
    _LCLOSE(0x1010,iVar1);
    uVar5 = 0xfffe;
  }
  return uVar5;
}


// ---- OM_MOVE_REDUCED_ORG @ 1000:3254

void __stdcall16far OM_MOVE_REDUCED_ORG(undefined2 param_1,undefined2 param_2,undefined2 param_3)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_518(0x1010,param_1,param_2,param_3,uVar2,uVar3);
  }
  return;
}


// ---- OM_REDUCE_OVERLAY @ 1000:327c

void __stdcall16far OM_REDUCE_OVERLAY(undefined2 param_1)

{
  int iVar1;
  undefined2 unaff_CS;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0xae;
  M007_PUTSTATE(unaff_CS,1);
  iVar1 = M007_GETSTATE(0x1010,0x83,uVar2,uVar3);
  if (iVar1 == 1) {
    Ordinal_517(0x1010,param_1);
  }
  return;
}


// ---- OM_ENLARGE_OVERLAY @ 1000:32a8

void __stdcall16far OM_ENLARGE_OVERLAY(undefined2 param_1)

{
  int iVar1;
  undefined2 unaff_CS;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0xae;
  M007_PUTSTATE(unaff_CS,0);
  iVar1 = M007_GETSTATE(0x1010,0x83,uVar2,uVar3);
  if (iVar1 == 1) {
    Ordinal_516(0x1010,param_1);
  }
  return;
}


// ---- OM_CHANGE_OBJ_ATTRIB @ 1000:32d4

undefined2 __stdcall16far
OM_CHANGE_OBJ_ATTRIB
          (undefined2 param_1,undefined2 param_2,int param_3,undefined2 param_4,undefined2 param_5,
          undefined2 param_6)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  if (param_3 < 0) goto LAB_1000_330e;
  if (0x16 < param_3) {
    if (param_3 == 0x17) {
      DAT_1008_0774 = param_2;
      DAT_1008_0776 = param_1;
      goto LAB_1000_330e;
    }
    if ((param_3 + -0x17 < 1) || (0xc < param_3 + -0x18)) goto LAB_1000_330e;
  }
  DAT_1008_0774 = param_1;
LAB_1000_330e:
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_504(0x1010,0x774,0x1008,param_3,param_5,param_6,uVar2,uVar3);
  }
  return 1;
}


// ---- OM_CHANGE_OBJ_PARAM @ 1000:3334

undefined2 __stdcall16far
OM_CHANGE_OBJ_PARAM(int *param_1,int param_2,undefined2 param_3,undefined2 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  long lVar5;
  long lVar6;
  undefined2 uVar7;
  int iVar8;
  
  piVar4 = (int *)param_1;
  uVar7 = (undefined2)((ulong)param_1 >> 0x10);
  if (param_2 == 0) {
LAB_1000_3345:
    DAT_1008_0778 = piVar4[2] - *param_1;
    DAT_1008_077a = piVar4[3] - piVar4[1];
    DAT_1008_077c = *param_1;
    DAT_1008_077e = piVar4[1];
LAB_1000_3367:
    Ordinal_505();
  }
  else {
    if (param_2 == 1) {
      iVar8 = *param_1;
      lVar5 = GLOBALLOCK();
      uVar7 = (undefined2)((ulong)lVar5 >> 0x10);
      if (lVar5 != 0) {
        iVar2 = LSTRLEN(0x1010,(int)lVar5);
        iVar3 = iVar2 + 1;
        lVar6 = Ordinal_107(0x1010,iVar3,iVar3 >> 0xf,uVar7,iVar8);
        DAT_1008_077c = (int)((ulong)lVar6 >> 0x10);
        DAT_1008_077a = (int)lVar6;
        uVar1 = 0;
        if (lVar6 != 0) {
          Ordinal_109(0x1010,0,iVar3,lVar6,lVar5);
          DAT_1008_0778 = iVar2;
          Ordinal_505(0x1010,0x778,0x1008,param_3,param_4);
          uVar1 = CONCAT22(DAT_1008_077c,DAT_1008_077a);
        }
        DAT_1008_077c = (int)((ulong)uVar1 >> 0x10);
        DAT_1008_077a = (int)uVar1;
        GLOBALUNLOCK(0x1010,*param_1);
      }
      iVar8 = *param_1;
    }
    else {
      if (param_2 == 2) {
        DAT_1008_0778 = *param_1;
        DAT_1008_077a = piVar4[1];
        DAT_1008_077c = piVar4[2];
        DAT_1008_077e = piVar4[3];
        goto LAB_1000_3367;
      }
      if (param_2 == 3) goto LAB_1000_3345;
      if (param_2 != 4) {
        return 1;
      }
      iVar8 = piVar4[1];
      lVar5 = GLOBALLOCK();
      if (lVar5 != 0) {
        iVar2 = *param_1 << 2;
        lVar6 = Ordinal_107(0x1010,iVar2,iVar2 >> 0xf,iVar8);
        DAT_1008_077c = (int)((ulong)lVar6 >> 0x10);
        DAT_1008_077a = (int)lVar6;
        uVar1 = 0;
        if (lVar6 != 0) {
          Ordinal_109(0x1010,0,iVar2,lVar6,lVar5);
          DAT_1008_0778 = *param_1;
          Ordinal_505(0x1010,0x778,0x1008,param_3,param_4);
          uVar1 = CONCAT22(DAT_1008_077c,DAT_1008_077a);
        }
        DAT_1008_077c = (int)((ulong)uVar1 >> 0x10);
        DAT_1008_077a = (int)uVar1;
        GLOBALUNLOCK(0x1010,piVar4[1]);
      }
      iVar8 = piVar4[1];
    }
    GLOBALFREE(0x1010,iVar8);
  }
  return 1;
}


// ---- OM_KILL_OVERLAY_OBJ @ 1000:34ba

undefined2 __stdcall16far OM_KILL_OVERLAY_OBJ(undefined2 param_1,undefined2 param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_506(0x1010,param_1,param_2,uVar2,uVar3);
  }
  return 1;
}


// ---- OM_HIDE_OVERLAY_OBJ @ 1000:34e2

undefined2 __stdcall16far OM_HIDE_OVERLAY_OBJ(undefined2 param_1,undefined2 param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_507(0x1010,param_1,param_2,uVar2,uVar3);
  }
  return 1;
}


// ---- OM_SHOW_OVERLAY_OBJ @ 1000:350a

undefined2 __stdcall16far OM_SHOW_OVERLAY_OBJ(undefined2 param_1,undefined2 param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_508(0x1010,param_1,param_2,uVar2,uVar3);
  }
  return 1;
}


// ---- OM_MOVE_OVERLAY_OBJ @ 1000:3532

undefined2 __stdcall16far
OM_MOVE_OVERLAY_OBJ(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_509(0x1010,param_1,param_2,param_3,param_4,uVar2,uVar3);
  }
  return 1;
}


// ---- OM_CREATE_OVERLAY_OBJ @ 1000:3560

undefined4 __stdcall16far
OM_CREATE_OVERLAY_OBJ
          (undefined2 *param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
          undefined2 param_5,undefined2 param_6)

{
  int iVar1;
  undefined2 *puVar2;
  undefined4 uVar3;
  long lVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 local_26;
  int local_22 [2];
  undefined2 local_1e;
  int local_1a;
  int local_18;
  undefined4 local_16;
  undefined4 local_12;
  undefined4 local_e;
  undefined4 local_a;
  undefined4 local_6;
  
  local_16._2_2_ = 0;
  local_16._0_2_ = 0;
  uVar3 = 0;
  uVar6 = 0x1000;
  puVar2 = (undefined2 *)param_1;
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  switch(param_6) {
  case 0:
  case 3:
    DAT_1008_0788 = *param_1;
    DAT_1008_078a = puVar2[1];
    DAT_1008_078c = puVar2[2];
    DAT_1008_078e = puVar2[3];
    DAT_1008_0794 = puVar2[10];
    DAT_1008_0790 = puVar2[4];
    DAT_1008_0792 = puVar2[5];
    DAT_1008_0796 = puVar2[8] - puVar2[6];
    DAT_1008_0798 = puVar2[9] - puVar2[7];
    DAT_1008_079a = puVar2[6];
    DAT_1008_079c = puVar2[7];
    local_e = CONCAT22(local_e._2_2_,(undefined2)local_e);
    local_a = CONCAT22(local_a._2_2_,(undefined2)local_a);
    break;
  case 1:
    local_6 = GLOBALLOCK(0x1000,puVar2[8],0x1008);
    uVar6 = (undefined2)((ulong)local_6 >> 0x10);
    if (local_6 != 0) {
      local_18 = LSTRLEN(0x1010,(int)local_6);
      iVar1 = local_18 + 1;
      lVar4 = Ordinal_107(0x1010,iVar1,iVar1 >> 0xf,uVar6);
      DAT_1008_079c = (undefined2)((ulong)lVar4 >> 0x10);
      DAT_1008_079a = (int)lVar4;
      uVar3 = 0;
      if (lVar4 != 0) {
        Ordinal_109(0x1010,0,iVar1,lVar4,local_6);
        DAT_1008_0798 = local_18;
        DAT_1008_0796 = puVar2[7];
        DAT_1008_079e = puVar2[9];
        DAT_1008_0788 = *param_1;
        DAT_1008_078a = puVar2[1];
        DAT_1008_078c = puVar2[2];
        DAT_1008_078e = puVar2[3];
        DAT_1008_0790 = puVar2[4];
        DAT_1008_0792 = puVar2[5];
        DAT_1008_0794 = puVar2[6];
        local_16 = Ordinal_510(0x1010,0x788,0x1008,param_2,param_3,param_4,param_5,param_6);
        uVar3 = CONCAT22(DAT_1008_079c,DAT_1008_079a);
      }
      DAT_1008_079c = (undefined2)((ulong)uVar3 >> 0x10);
      DAT_1008_079a = (int)uVar3;
      GLOBALUNLOCK(0x1010,puVar2[8]);
    }
    uVar6 = puVar2[8];
    goto LAB_1000_3643;
  case 2:
    DAT_1008_0788 = *param_1;
    DAT_1008_078a = puVar2[1];
    DAT_1008_078c = puVar2[2];
    DAT_1008_0790 = puVar2[4];
    DAT_1008_078e = puVar2[3];
    DAT_1008_0792 = puVar2[5];
    DAT_1008_0794 = puVar2[6];
    DAT_1008_0796 = puVar2[7];
    DAT_1008_0798 = puVar2[8];
    break;
  case 4:
    local_12 = GLOBALLOCK(0x1000,puVar2[7],0x1008);
    if (local_12 != 0) {
      local_1a = puVar2[6] << 2;
      lVar4 = Ordinal_107(0x1010,local_1a,local_1a >> 0xf);
      DAT_1008_079a = (int)((ulong)lVar4 >> 0x10);
      DAT_1008_0798 = (int)lVar4;
      uVar3 = 0;
      if (lVar4 != 0) {
        Ordinal_109(0x1010,0,local_1a,lVar4,local_12);
        DAT_1008_0788 = *param_1;
        DAT_1008_078a = puVar2[1];
        DAT_1008_078c = puVar2[2];
        DAT_1008_078e = puVar2[3];
        DAT_1008_0796 = puVar2[8];
        DAT_1008_0792 = puVar2[5];
        DAT_1008_0790 = puVar2[4];
        DAT_1008_0794 = puVar2[6];
        local_16 = Ordinal_510(0x1010,0x788,0x1008,param_2,param_3,param_4,param_5,param_6);
        uVar3 = CONCAT22(DAT_1008_079a,DAT_1008_0798);
      }
      DAT_1008_079a = (int)((ulong)uVar3 >> 0x10);
      DAT_1008_0798 = (int)uVar3;
      GLOBALUNLOCK(0x1010,puVar2[7]);
    }
    uVar6 = puVar2[7];
LAB_1000_3643:
    GLOBALFREE(0x1010,uVar6);
    return local_16;
  case 5:
    iVar1 = FUN_1000_2fd0(puVar2[8],puVar2[9],local_22);
    if (iVar1 < 0) {
      return CONCAT22(local_16._2_2_,(undefined2)local_16);
    }
    DAT_1008_0788 = *param_1;
    DAT_1008_078a = puVar2[1];
    DAT_1008_078c = puVar2[2];
    DAT_1008_078e = puVar2[3];
    DAT_1008_0796 = puVar2[4];
    DAT_1008_0790 = puVar2[5];
    DAT_1008_0798 = local_1e;
    DAT_1008_079a = local_22[0];
    DAT_1008_079c = 0;
    DAT_1008_079e = 0;
    DAT_1008_0792 = local_26;
    DAT_1008_0794 = 0;
    uVar3 = Ordinal_510(0x1000,0x788,0x1008,param_2,param_3,param_4,param_5,param_6);
    puVar2[6] = local_1e;
    puVar2[7] = local_22[0];
    return uVar3;
  case 6:
    DAT_1008_0788 = *param_1;
    DAT_1008_078a = puVar2[1];
    DAT_1008_078e = puVar2[3];
    DAT_1008_0790 = puVar2[4];
    DAT_1008_0792 = puVar2[5];
    DAT_1008_0794 = puVar2[6];
    DAT_1008_0796 = puVar2[7];
    DAT_1008_0798 = puVar2[8];
    DAT_1008_079a = puVar2[9];
    DAT_1008_079c = puVar2[10];
    DAT_1008_079e = puVar2[0xb];
    DAT_1008_07a0 = puVar2[0xc];
    DAT_1008_07a2 = puVar2[0xd];
    DAT_1008_078c = puVar2[2];
    local_a = GLOBALLOCK(0x1000,puVar2[0xe],0x1008);
    if (local_a == 0) {
      return CONCAT22(local_16._2_2_,(undefined2)local_16);
    }
    local_e = GLOBALLOCK(0x1010,puVar2[0xf]);
    if (local_e == 0) {
      return CONCAT22(local_16._2_2_,(undefined2)local_16);
    }
    uVar7 = 0x1008;
    LSTRCPY(0x1010,local_a,0x7a4);
    uVar6 = 0x1008;
    LSTRCPY(0x1010,local_e,0x7ae);
    GLOBALUNLOCK(0x1010,puVar2[0xe],uVar6,uVar7);
    GLOBALFREE(0x1010,puVar2[0xe]);
    GLOBALUNLOCK(0x1010,puVar2[0xf]);
    uVar5 = puVar2[0xf];
    goto LAB_1000_394b;
  case 7:
    DAT_1008_0788 = *param_1;
    DAT_1008_078a = puVar2[1];
    DAT_1008_078e = puVar2[2];
    DAT_1008_0790 = puVar2[3];
    DAT_1008_0792 = puVar2[4];
    DAT_1008_0794 = puVar2[5];
    DAT_1008_0796 = puVar2[6];
    DAT_1008_0798 = puVar2[7];
    DAT_1008_079a = puVar2[8];
    DAT_1008_079c = puVar2[9];
    DAT_1008_07a4 = puVar2[0xd];
    DAT_1008_07a6 = puVar2[0xe];
    DAT_1008_07a8 = puVar2[0xf];
    DAT_1008_07aa = puVar2[0x10];
    DAT_1008_07a2 = puVar2[0xc];
    DAT_1008_079e = puVar2[10];
    DAT_1008_07a0 = puVar2[0xb];
    DAT_1008_07ac = puVar2[0x11];
    DAT_1008_07c2 = puVar2[0x14];
    DAT_1008_07c4 = puVar2[0x15];
    DAT_1008_07c6 = puVar2[0x16];
    DAT_1008_07c8 = puVar2[0x17];
    DAT_1008_07ca = puVar2[0x18];
    DAT_1008_07cc = puVar2[0x19];
    DAT_1008_07ce = puVar2[0x1a];
    DAT_1008_07d0 = puVar2[0x1b];
    local_a = GLOBALLOCK(0x1000,puVar2[0x12],0x1008);
    if (local_a == 0) {
      return CONCAT22(local_16._2_2_,(undefined2)local_16);
    }
    local_e = GLOBALLOCK(0x1010,puVar2[0x13]);
    if (local_e == 0) {
      return CONCAT22(local_16._2_2_,(undefined2)local_16);
    }
    uVar7 = 0x1008;
    LSTRCPY(0x1010,local_a,0x7ae);
    uVar6 = 0x1008;
    LSTRCPY(0x1010,local_e,0x7b8);
    GLOBALUNLOCK(0x1010,puVar2[0x12],uVar6,uVar7);
    GLOBALFREE(0x1010,puVar2[0x12]);
    GLOBALUNLOCK(0x1010,puVar2[0x13]);
    uVar5 = puVar2[0x13];
LAB_1000_394b:
    uVar6 = 0x1010;
    GLOBALFREE(0x1010,uVar5);
    break;
  case 8:
    DAT_1008_0788 = *param_1;
    DAT_1008_078a = puVar2[1];
    DAT_1008_078c = 0x300;
    DAT_1008_078e = puVar2[2];
    DAT_1008_0790 = puVar2[3];
    DAT_1008_0792 = puVar2[4];
    DAT_1008_0794 = puVar2[5];
    DAT_1008_0796 = puVar2[6];
    DAT_1008_0798 = puVar2[7];
    DAT_1008_07a2 = puVar2[0xc];
    DAT_1008_079a = puVar2[8];
    DAT_1008_079c = puVar2[9];
    DAT_1008_079e = puVar2[10];
    DAT_1008_07a0 = puVar2[0xb];
    DAT_1008_07a4 = puVar2[0xd];
    DAT_1008_07a6 = puVar2[0xe];
    DAT_1008_07a8 = puVar2[0xf];
    DAT_1008_07aa = puVar2[0x10];
    DAT_1008_07ac = puVar2[0x11];
    local_e = CONCAT22(local_e._2_2_,(undefined2)local_e);
    local_a = CONCAT22(local_a._2_2_,(undefined2)local_a);
    break;
  default:
    goto switchD_1000_3b17_default;
  }
  uVar3 = Ordinal_510(uVar6,0x788,0x1008,param_2,param_3,param_4,param_5,param_6);
switchD_1000_3b17_default:
  return uVar3;
}


// ---- OM_CREATE_GHOST_OF_OBJECT @ 1000:3b3a

undefined2 __stdcall16far OM_CREATE_GHOST_OF_OBJECT(void)

{
  Ordinal_511();
  return 1;
}


// ---- OM_KILL_GHOST_OF_OBJ @ 1000:3b5a

undefined2 __stdcall16far OM_KILL_GHOST_OF_OBJ(void)

{
  Ordinal_512();
  return 1;
}


// ---- OM_INIT_SEM_OVERLAYS @ 1000:3b76

undefined2 __stdcall16far OM_INIT_SEM_OVERLAYS(void)

{
  return 0x1008;
}


// ---- OM_LOAD_INST_FONT @ 1000:3b84

undefined2 __stdcall16far OM_LOAD_INST_FONT(undefined2 param_1,undefined2 param_2)

{
  int iVar1;
  int iVar2;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  long lVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  int iVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined2 local_e;
  int local_c;
  undefined2 local_a;
  undefined2 local_8;
  undefined4 local_6;
  
  uVar6 = 0x1008;
  uVar9 = 0;
  uVar8 = 0;
  local_e = 0;
  iVar1 = _LOPEN(unaff_CS,0,param_1);
  if (-1 < iVar1) {
    iVar4 = iVar1;
    _LREAD(0x1010,6,&local_c,unaff_SS);
    if (local_c == -0x7fc0) {
      uVar5 = 2;
      iVar2 = GLOBALALLOC(0x1010,local_a,local_8);
      if (iVar2 != 0) {
        local_6 = GLOBALLOCK(0x1010,iVar2,uVar5,iVar1,param_2,uVar6,iVar2,iVar4,uVar8,uVar9);
        if (local_6 != 0) {
          lVar3 = Ordinal_107(0x1010,local_a,local_8);
          if (lVar3 != 0) {
            iVar1 = iVar4;
            _LLSEEK(0x1010,0,0,0);
            iVar7 = iVar1;
            _LREAD(0x1010,local_a,local_6);
            Ordinal_109(0x1010,0,local_a,lVar3,local_6,iVar1,iVar4);
            local_e = Ordinal_119(0x1010,lVar3);
            iVar4 = iVar7;
          }
          GLOBALUNLOCK(0x1010,iVar2);
        }
        GLOBALFREE(0x1010,iVar2);
      }
      _LCLOSE(0x1010,iVar4);
    }
    else {
      _LCLOSE(0x1010,iVar4);
      local_e = 0;
    }
  }
  return local_e;
}


// ---- OM_REMOVE_FONT @ 1000:3c6c

void __stdcall16far OM_REMOVE_FONT(void)

{
  Ordinal_118();
  return;
}


// ---- OM_GET_TEXT_EXTENT @ 1000:3c82

undefined4 __stdcall16far
OM_GET_TEXT_EXTENT(undefined2 param_1,undefined2 param_2,undefined2 param_3)

{
  int iVar1;
  undefined2 uVar2;
  undefined1 local_3c [44];
  undefined2 local_10;
  undefined2 local_4;
  
  Ordinal_102();
  iVar1 = Ordinal_102(0x1010,local_3c);
  if (iVar1 == 0) {
    uVar2 = 0;
    local_10 = 0;
  }
  else {
    Ordinal_120(0x1010,param_3);
    uVar2 = Ordinal_121(0x1010,param_1,param_2);
    Ordinal_120(0x1010,local_4);
  }
  return CONCAT22(local_10,uVar2);
}


// ---- OM_GET_OBJECT_SIZE @ 1000:3ce4

undefined2 __stdcall16far
OM_GET_OBJECT_SIZE(undefined2 param_1,undefined2 param_2,undefined2 param_3)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    uVar2 = Ordinal_554(0x1010,param_1,param_2,param_3,uVar2,uVar3);
  }
  else {
    uVar2 = 10;
  }
  return uVar2;
}


// ---- FUN_1000_3d14 @ 1000:3d14

int __cdecl16far FUN_1000_3d14(void)

{
  int iVar1;
  long lVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  iVar1 = Ordinal_111();
  if (-1 < iVar1) {
    iVar1 = Ordinal_500(0x1010,0x3d7a,0x1000,uVar3);
    if (-1 < iVar1) {
      lVar2 = Ordinal_501(0x1010);
      if (lVar2 == 0) {
        Ordinal_519(0x1010,0xff8,0x1008);
        return 1;
      }
      iVar1 = 0;
    }
  }
  return iVar1;
}


// ---- FUN_1000_3d54 @ 1000:3d54

undefined2 __cdecl16far FUN_1000_3d54(void)

{
  Ordinal_572();
  return 1;
}


// ---- FUN_1000_3d68 @ 1000:3d68

void __cdecl16far FUN_1000_3d68(void)

{
  Ordinal_571();
  return;
}


// ---- FUN_1000_3d80 @ 1000:3d80

undefined2 __stdcall16far FUN_1000_3d80(void)

{
  return 0;
}


// ---- SEM_DEBUG @ 1000:3d90

void __stdcall16far SEM_DEBUG(undefined2 param_1,undefined2 param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_545(0x1010,param_1,param_2,uVar2,uVar3);
  }
  return;
}


// ---- OPLUT_RGB_SET @ 1000:3db4

undefined2 __stdcall16far
OPLUT_RGB_SET(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_520(0x1010,param_1,param_2,param_3,param_4,1,uVar2,uVar3);
  }
  return 1;
}


// ---- OPLUT_RGB_READ @ 1000:3de4

undefined2 __stdcall16far OPLUT_RGB_READ(int param_1,undefined2 param_2,undefined2 param_3)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_521(0x1010,param_1 + 2,param_2,param_1 + 1,param_2,param_1,param_2,param_3,1,uVar2,uVar3
               );
  }
  return 1;
}


// ---- OPLUT_READ_RED_LUT @ 1000:3e1e

undefined2 __stdcall16far
OPLUT_READ_RED_LUT(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_542(0x1010,param_1,param_2,param_3,param_4,1,uVar2,uVar3);
  }
  return 1;
}


// ---- OPLUT_READ_GREEN_LUT @ 1000:3e4e

undefined2 __stdcall16far
OPLUT_READ_GREEN_LUT(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_543(0x1010,param_1,param_2,param_3,param_4,1,uVar2,uVar3);
  }
  return 1;
}


// ---- OPLUT_READ_BLUE_LUT @ 1000:3e7e

undefined2 __stdcall16far
OPLUT_READ_BLUE_LUT(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_544(0x1010,param_1,param_2,param_3,param_4,1,uVar2,uVar3);
  }
  return 1;
}


// ---- OPLUT_LOAD @ 1000:3eae

undefined2 __stdcall16far
OPLUT_LOAD(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_522(0x1010,param_1,param_2,param_3,param_4,1,uVar2,uVar3);
  }
  return 1;
}


// ---- OPLUT_READ @ 1000:3ede

undefined2 __stdcall16far
OPLUT_READ(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_523(0x1010,param_1,param_2,param_3,param_4,1,uVar2,uVar3);
  }
  return 1;
}


// ---- OPLUT_SET_RED @ 1000:3f0e

undefined2 __stdcall16far OPLUT_SET_RED(undefined2 param_1,undefined2 param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_524(0x1010,param_1,param_2,0,1,uVar2,uVar3);
  }
  return 1;
}


// ---- OPLUT_SET_GREEN @ 1000:3f3a

undefined2 __stdcall16far OPLUT_SET_GREEN(undefined2 param_1,undefined2 param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_524(0x1010,param_1,param_2,1,1,uVar2,uVar3);
  }
  return 1;
}


// ---- OPLUT_SET_BLUE @ 1000:3f66

undefined2 __stdcall16far OPLUT_SET_BLUE(undefined2 param_1,undefined2 param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_524(0x1010,param_1,param_2,1,1,uVar2,uVar3);
  }
  return 1;
}


// ---- OPLUT_READ_RED @ 1000:3f92

undefined2 __stdcall16far OPLUT_READ_RED(undefined2 param_1,undefined2 param_2,undefined2 param_3)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_525(0x1010,param_1,param_2,param_3,0,1,uVar2,uVar3);
  }
  return 1;
}


// ---- OPLUT_READ_GREEN @ 1000:3fc0

undefined2 __stdcall16far OPLUT_READ_GREEN(undefined2 param_1,undefined2 param_2,undefined2 param_3)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_525(0x1010,param_1,param_2,param_3,1,1,uVar2,uVar3);
  }
  return 1;
}


// ---- OPLUT_READ_BLUE @ 1000:3fee

undefined2 __stdcall16far OPLUT_READ_BLUE(undefined2 param_1,undefined2 param_2,undefined2 param_3)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_525(0x1010,param_1,param_2,param_3,2,1,uVar2,uVar3);
  }
  return 1;
}


// ---- FUN_1000_401c @ 1000:401c

void __cdecl16far FUN_1000_401c(undefined2 param_1,int param_2,byte *param_3)

{
  byte bVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  uint local_c;
  uint local_8;
  int local_6;
  
  uVar3 = 0x1008;
  bVar1 = *param_3;
  if (0 < param_2 + -1) {
    param_3 = (byte *)CONCAT22((int)((ulong)param_3 >> 0x10),(byte *)param_3 + 2);
    local_c = (uint)bVar1;
    for (local_6 = 0; local_6 < param_2 + -1; local_6 = local_6 + 1) {
      bVar1 = *param_3;
      for (local_8 = local_c; (int)local_8 <= (int)(uint)bVar1; local_8 = local_8 + 1) {
        uVar2 = FUN_1000_01f2(uVar3,local_8);
        *(undefined2 *)(local_8 * 2 + 0x7f8) = uVar2;
        if (0xff < *(uint *)(local_8 * 2 + 0x7f8)) {
          *(undefined2 *)(local_8 * 2 + 0x7f8) = 0xff;
        }
      }
      param_3 = (byte *)CONCAT22((int)((ulong)param_3 >> 0x10),(byte *)param_3 + 2);
      local_c = (uint)bVar1;
    }
  }
  return;
}


// ---- OPLUT_SET_RED_PTS @ 1000:410e

undefined2 __stdcall16far OPLUT_SET_RED_PTS(undefined2 param_1,undefined2 param_2,int param_3)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 local_4;
  
  uVar3 = 0x1008;
  if (param_3 < 2) {
    uVar3 = 0;
  }
  else {
    uVar2 = 0x83;
    iVar1 = M007_GETSTATE();
    if (iVar1 == 1) {
      if (param_3 < 0x101) {
        Ordinal_526(0x1010,param_1,param_2,param_3,0,1,uVar2,uVar3);
      }
      else {
        FUN_1000_401c(0,param_3,param_1,param_2);
        local_4 = 0;
        do {
          iVar1 = local_4 * 3;
          *(undefined1 *)(iVar1 + 0xcf8) = *(undefined1 *)(local_4 * 2 + 0x7f8);
          *(undefined1 *)(iVar1 + 0xcf9) = 0;
          *(undefined1 *)(iVar1 + 0xcfa) = 0;
          local_4 = local_4 + 1;
        } while (local_4 < 0x100);
        Ordinal_522(0x1000,0xcf8,0x1008,0x100,0,1);
      }
    }
    uVar3 = 1;
  }
  return uVar3;
}


// ---- OPLUT_SET_GREEN_PTS @ 1000:419e

undefined2 __stdcall16far OPLUT_SET_GREEN_PTS(undefined2 param_1,undefined2 param_2,int param_3)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 local_4;
  
  uVar3 = 0x1008;
  if (param_3 < 2) {
    uVar3 = 0;
  }
  else {
    uVar2 = 0x83;
    iVar1 = M007_GETSTATE();
    if (iVar1 == 1) {
      if (param_3 < 0x101) {
        Ordinal_526(0x1010,param_1,param_2,param_3,1,1,uVar2,uVar3);
      }
      else {
        FUN_1000_401c(0,param_3,param_1,param_2);
        local_4 = 0;
        do {
          iVar1 = local_4 * 3;
          *(undefined1 *)(iVar1 + 0xcf8) = 0;
          *(undefined1 *)(iVar1 + 0xcf9) = *(undefined1 *)(local_4 * 2 + 0x7f8);
          *(undefined1 *)(iVar1 + 0xcfa) = 0;
          local_4 = local_4 + 1;
        } while (local_4 < 0x100);
        Ordinal_522(0x1000,0xcf8,0x1008,0x100,0,1);
      }
    }
    uVar3 = 1;
  }
  return uVar3;
}


// ---- OPLUT_SET_BLUE_PTS @ 1000:4230

undefined2 __stdcall16far OPLUT_SET_BLUE_PTS(undefined2 param_1,undefined2 param_2,int param_3)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 local_4;
  
  uVar3 = 0x1008;
  if (param_3 < 2) {
    uVar3 = 0;
  }
  else {
    uVar2 = 0x83;
    iVar1 = M007_GETSTATE();
    if (iVar1 == 1) {
      if (param_3 < 0x101) {
        Ordinal_526(0x1010,param_1,param_2,param_3,2,1,uVar2,uVar3);
      }
      else {
        FUN_1000_401c(0,param_3,param_1,param_2);
        local_4 = 0;
        do {
          iVar1 = local_4 * 3;
          *(undefined1 *)(iVar1 + 0xcf8) = 0;
          *(undefined1 *)(iVar1 + 0xcf9) = 0;
          *(undefined1 *)(iVar1 + 0xcfa) = *(undefined1 *)(local_4 * 2 + 0x7f8);
          local_4 = local_4 + 1;
        } while (local_4 < 0x100);
        Ordinal_522(0x1000,0xcf8,0x1008,0x100,0,1);
      }
    }
    uVar3 = 1;
  }
  return uVar3;
}


// ---- OPLUT_SET_GREY_PTS @ 1000:42c2

undefined2 __stdcall16far OPLUT_SET_GREY_PTS(undefined4 param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 local_4;
  
  uVar4 = 0x1008;
  if (1 < param_2) {
    if (param_3 == 5) {
      uVar3 = 0x83;
      uVar4 = 0x1010;
      iVar2 = M007_GETSTATE();
      if (iVar2 == 1) {
        if (param_2 < 0x101) {
          for (local_4 = 0; local_4 < param_2; local_4 = local_4 + 1) {
            *(uint *)(local_4 * 3 + 0x9f8) = (uint)*(byte *)(local_4 * 2 + (int)param_1);
            *(undefined1 *)(local_4 * 3 + 0x9fa) = *(undefined1 *)(local_4 * 2 + (int)param_1 + 1);
          }
        }
        else {
          uVar4 = 0x1000;
          FUN_1000_401c(0,param_2,(int)param_1,param_1._2_2_,uVar3);
          local_4 = 0;
          do {
            *(int *)(local_4 * 3 + 0x9f8) = local_4;
            *(undefined1 *)(local_4 * 3 + 0x9fa) = *(undefined1 *)(local_4 * 2 + 0x7f8);
            local_4 = local_4 + 1;
          } while (local_4 < 0x100);
        }
        DEFINE_LUT(uVar4,0x9f8,0x1008);
      }
    }
    else {
      uVar3 = 0x83;
      iVar2 = M007_GETSTATE();
      if (iVar2 == 1) {
        if (param_2 < 0x101) {
          Ordinal_526(0x1010,(int)param_1,param_1._2_2_,param_2,3,1,uVar3,uVar4);
        }
        else {
          FUN_1000_401c(0,param_2,(int)param_1,param_1._2_2_);
          local_4 = 0;
          do {
            uVar1 = *(undefined1 *)(local_4 * 2 + 0x7f8);
            iVar2 = local_4 * 3;
            *(undefined1 *)(iVar2 + 0xcf8) = uVar1;
            *(undefined1 *)(iVar2 + 0xcf9) = uVar1;
            *(undefined1 *)(iVar2 + 0xcfa) = uVar1;
            local_4 = local_4 + 1;
          } while (local_4 < 0x100);
          Ordinal_522(0x1000,0xcf8,0x1008,0x100,0,1);
        }
      }
    }
  }
  return 1;
}


// ---- OPLUT_QLIN @ 1000:43ea

undefined2 __stdcall16far OPLUT_QLIN(int param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  uVar4 = 0x1008;
  uVar3 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    if (param_1 == 4) {
      Ordinal_528(0x1010,1);
    }
    else {
      DAT_1008_1328 = 0;
      DAT_1008_1329 = 0;
      DAT_1008_132a = 0xff;
      DAT_1008_132b = 0xff;
      if (param_1 == 1) {
        uVar2 = 0;
      }
      else if (param_1 == 2) {
        uVar2 = 1;
      }
      else {
        if (param_1 != 3) {
          DAT_1008_09f8 = 0;
          DAT_1008_09fa = 0;
          DAT_1008_09fb = 0xff;
          DAT_1008_09fd = 0xff;
          DEFINE_LUT(0x1010,0x9f8,0x1008);
          return 1;
        }
        uVar2 = 2;
      }
      Ordinal_526(0x1010,(undefined1 *)&DAT_1008_1328,0x1008,2,uVar2,1,uVar3,uVar4);
    }
  }
  return 1;
}


// ---- OPLUT_QINV @ 1000:4478

undefined2 __stdcall16far OPLUT_QINV(int param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  uVar4 = 0x1008;
  uVar3 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    if (param_1 == 4) {
      Ordinal_530(0x1010,1);
    }
    else {
      DAT_1008_1329 = 0xff;
      DAT_1008_132a = 0xff;
      DAT_1008_1328 = 0;
      DAT_1008_132b = 0;
      if (param_1 == 1) {
        uVar2 = 0;
      }
      else if (param_1 == 2) {
        uVar2 = 1;
      }
      else {
        if (param_1 != 3) {
          DAT_1008_09f8 = 0;
          DAT_1008_09fa = 0xff;
          DAT_1008_09fb = 0xff;
          DAT_1008_09fd = 0;
          DEFINE_LUT(0x1010,0x9f8,0x1008);
          return 1;
        }
        uVar2 = 2;
      }
      Ordinal_526(0x1010,(undefined1 *)&DAT_1008_1328,0x1008,2,uVar2,1,uVar3,uVar4);
    }
  }
  return 1;
}


// ---- OPLUT_FILL @ 1000:4506

undefined2 __stdcall16far
OPLUT_FILL(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
          undefined2 param_5,int param_6)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 != 1) {
    return 1;
  }
  if (param_6 != 4) {
    if (param_6 == 1) {
      param_2 = 0;
    }
    else if (param_6 != 2) {
      if (param_6 != 3) {
        return 1;
      }
      param_3 = 0;
      param_2 = 0;
      goto LAB_1000_4572;
    }
    param_1 = 0;
  }
LAB_1000_4572:
  Ordinal_529(0x1010,param_1,param_2,param_3,param_4,param_5,1,uVar2,uVar3);
  return 1;
}


// ---- OPLUT_GAMMA @ 1000:4580

undefined2 __stdcall16far OPLUT_GAMMA(float param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_531(0x1010,(double)param_1,1,uVar2,uVar3);
  }
  return 1;
}


// ---- OPLUT_INV @ 1000:45b2

undefined2 __stdcall16far OPLUT_INV(float param_1,float param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  uVar4 = 0x1008;
  uVar3 = 0x83;
  iVar2 = M007_GETSTATE();
  if (iVar2 == 1) {
    if (param_3 == 4) {
      Ordinal_532(0x1010,(double)param_1,(double)param_2,1);
    }
    else {
      DAT_1008_1328 = 0;
      cVar1 = FUN_1000_01f2(uVar3,uVar4);
      DAT_1008_132b = FUN_1000_01f2();
      DAT_1008_1329 = DAT_1008_132b + cVar1;
      DAT_1008_132a = 0xff;
      if (((param_3 == 1) || (param_3 == 2)) || (param_3 == 3)) {
        Ordinal_526();
      }
      else {
        DAT_1008_09f8 = (uint)DAT_1008_1328;
        DAT_1008_09fb = 0xff;
        DAT_1008_09fa = DAT_1008_1329;
        DAT_1008_09fd = DAT_1008_132b;
        DEFINE_LUT();
      }
    }
  }
  return 1;
}


// ---- OPLUT_LIN @ 1000:4688

undefined2 __stdcall16far OPLUT_LIN(float param_1,float param_2,int param_3)

{
  char cVar1;
  char cVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  
  uVar5 = 0x1008;
  uVar4 = 0x83;
  iVar3 = M007_GETSTATE();
  if (iVar3 == 1) {
    if (param_3 == 4) {
      Ordinal_533(0x1010,(double)param_1,(double)param_2,1);
    }
    else {
      DAT_1008_1328 = 0;
      cVar1 = FUN_1000_01f2(uVar4,uVar5);
      DAT_1008_132a = 0xff;
      DAT_1008_1329 = cVar1;
      cVar2 = FUN_1000_01f2();
      DAT_1008_132b = cVar2 + cVar1;
      if (((param_3 == 1) || (param_3 == 2)) || (param_3 == 3)) {
        Ordinal_526();
      }
      else {
        DAT_1008_09f8 = (uint)DAT_1008_1328;
        DAT_1008_09fa = DAT_1008_1329;
        DAT_1008_09fb = (uint)DAT_1008_132a;
        DAT_1008_09fd = DAT_1008_132b;
        DEFINE_LUT();
      }
    }
  }
  return 1;
}


// ---- OPLUT_BRI_AND_CONT @ 1000:475a

undefined2 __stdcall16far OPLUT_BRI_AND_CONT(float param_1,float param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_538(0x1010,(double)param_1,(double)param_2,1,uVar2,uVar3);
  }
  return 1;
}


// ---- OPLUT_SAVE @ 1000:479a

undefined2 __stdcall16far OPLUT_SAVE(undefined2 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_539(0x1010,param_1,1,uVar2,uVar3);
  }
  return 1;
}


// ---- OPLUT_RESTORE @ 1000:47c0

undefined2 __stdcall16far OPLUT_RESTORE(undefined2 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_540(0x1010,param_1,1,uVar2,uVar3);
  }
  return 1;
}


// ---- DRAW_GREY_WEDGE @ 1000:47e6

undefined2 __stdcall16far DRAW_GREY_WEDGE(void)

{
  int iVar1;
  undefined2 unaff_CS;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x76;
  M007_PUTSTATE(unaff_CS,2);
  DOCOMMANDFREEZE_ALL(0x1010,uVar2,uVar3);
  iVar1 = M007_GETSTATE(0x1010,0x83);
  if (iVar1 == 1) {
    Ordinal_541(0x1010,1);
  }
  return 1;
}


// ---- READ_AN_IMAGE_PIXEL @ 1000:4818

undefined2 __stdcall16far READ_AN_IMAGE_PIXEL(undefined2 param_1,undefined2 param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    uVar2 = Ordinal_546(0x1010,param_1,param_2,1,uVar2,uVar3);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
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


// ---- _LLSEEK @ 1010:0034

/* WARNING: Control flow encountered bad instruction data */

void _LLSEEK(void)

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


// ---- LSTRCPY @ 1010:003c

/* WARNING: Control flow encountered bad instruction data */

void LSTRCPY(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- LSTRLEN @ 1010:0040

/* WARNING: Control flow encountered bad instruction data */

void LSTRLEN(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- INITTASK @ 1010:0044

/* WARNING: Control flow encountered bad instruction data */

void INITTASK(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- DOS3CALL @ 1010:0048

/* WARNING: Control flow encountered bad instruction data */

void DOS3CALL(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- __AHSHIFT @ 1010:004c

/* WARNING: Control flow encountered bad instruction data */

void __AHSHIFT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- __AHINCR @ 1010:0050

/* WARNING: Control flow encountered bad instruction data */

void __AHINCR(void)

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


// ---- SETCURSOR @ 1010:0060

/* WARNING: Control flow encountered bad instruction data */

void SETCURSOR(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- LOADCURSOR @ 1010:0064

/* WARNING: Control flow encountered bad instruction data */

void LOADCURSOR(void)

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


// ---- COMMANDENABLE @ 1010:006c

/* WARNING: Control flow encountered bad instruction data */

void COMMANDENABLE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- M007_PUTVALUE @ 1010:0070

/* WARNING: Control flow encountered bad instruction data */

void M007_PUTVALUE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- M007_GETVALUE @ 1010:0074

/* WARNING: Control flow encountered bad instruction data */

void M007_GETVALUE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- M007_PUTLOW @ 1010:0078

/* WARNING: Control flow encountered bad instruction data */

void M007_PUTLOW(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- M007_PUTHIGH @ 1010:007c

/* WARNING: Control flow encountered bad instruction data */

void M007_PUTHIGH(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- M007_PUTSTATE @ 1010:0080

/* WARNING: Control flow encountered bad instruction data */

void M007_PUTSTATE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- M007_GETSTATE @ 1010:0084

/* WARNING: Control flow encountered bad instruction data */

void M007_GETSTATE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- UIF_MESSAGE @ 1010:0088

/* WARNING: Control flow encountered bad instruction data */

void UIF_MESSAGE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- M007_PUTXY @ 1010:008c

/* WARNING: Control flow encountered bad instruction data */

void M007_PUTXY(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- UIF_LOG @ 1010:0090

/* WARNING: Control flow encountered bad instruction data */

void UIF_LOG(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- DOCOMMANDSCANRATE7 @ 1010:0094

/* WARNING: Control flow encountered bad instruction data */

void DOCOMMANDSCANRATE7(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- DOCOMMANDSCANRATE8 @ 1010:0098

/* WARNING: Control flow encountered bad instruction data */

void DOCOMMANDSCANRATE8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- DOCOMMANDSET_PLANEB @ 1010:009c

/* WARNING: Control flow encountered bad instruction data */

void DOCOMMANDSET_PLANEB(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- DOCOMMANDCLR_PLANEB @ 1010:00a0

/* WARNING: Control flow encountered bad instruction data */

void DOCOMMANDCLR_PLANEB(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- DEFINE_LUT @ 1010:00a4

/* WARNING: Control flow encountered bad instruction data */

void DEFINE_LUT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- DOCOMMANDFREEZE_ALL @ 1010:00a8

/* WARNING: Control flow encountered bad instruction data */

void DOCOMMANDFREEZE_ALL(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- CONTROL_XRAY @ 1010:00ac

/* WARNING: Control flow encountered bad instruction data */

void CONTROL_XRAY(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- SWITCHPLANEA_FROZEN @ 1010:00b0

/* WARNING: Control flow encountered bad instruction data */

void SWITCHPLANEA_FROZEN(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- SWITCHPLANEB_FROZEN @ 1010:00b4

/* WARNING: Control flow encountered bad instruction data */

void SWITCHPLANEB_FROZEN(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_102 @ 1010:00b8

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_102(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_107 @ 1010:00bc

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_107(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_109 @ 1010:00c0

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_109(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_111 @ 1010:00c4

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_111(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_118 @ 1010:00c8

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_118(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_119 @ 1010:00cc

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_119(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_120 @ 1010:00d0

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_120(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_121 @ 1010:00d4

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_121(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_500 @ 1010:00d8

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_500(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_501 @ 1010:00dc

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_501(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_504 @ 1010:00e0

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_504(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_505 @ 1010:00e4

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_505(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_506 @ 1010:00e8

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_506(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_507 @ 1010:00ec

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_507(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_508 @ 1010:00f0

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_508(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_509 @ 1010:00f4

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_509(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_510 @ 1010:00f8

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_510(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_511 @ 1010:00fc

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_511(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_512 @ 1010:0100

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_512(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_514 @ 1010:0104

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_514(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_515 @ 1010:0108

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_515(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_516 @ 1010:010c

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_516(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_517 @ 1010:0110

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_517(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_518 @ 1010:0114

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_518(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_519 @ 1010:0118

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_519(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_520 @ 1010:011c

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_520(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_521 @ 1010:0120

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_521(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_522 @ 1010:0124

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_522(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_523 @ 1010:0128

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_523(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_524 @ 1010:012c

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_524(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_525 @ 1010:0130

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_525(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_526 @ 1010:0134

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_526(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_528 @ 1010:0138

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_528(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_529 @ 1010:013c

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_529(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_530 @ 1010:0140

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_530(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_531 @ 1010:0144

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_531(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_532 @ 1010:0148

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_532(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_533 @ 1010:014c

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_533(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_538 @ 1010:0150

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_538(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_539 @ 1010:0154

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_539(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_540 @ 1010:0158

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_540(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_541 @ 1010:015c

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_541(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_542 @ 1010:0160

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_542(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_543 @ 1010:0164

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_543(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_544 @ 1010:0168

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_544(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_545 @ 1010:016c

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_545(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_546 @ 1010:0170

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_546(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_547 @ 1010:0174

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_547(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_548 @ 1010:0178

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_548(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_549 @ 1010:017c

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_549(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_550 @ 1010:0180

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_550(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_551 @ 1010:0184

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_551(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_552 @ 1010:0188

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_552(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_553 @ 1010:018c

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_553(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_554 @ 1010:0190

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_554(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_555 @ 1010:0194

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_555(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_556 @ 1010:0198

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_556(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_557 @ 1010:019c

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_557(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_558 @ 1010:01a0

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_558(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_559 @ 1010:01a4

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_559(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_560 @ 1010:01a8

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_560(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_561 @ 1010:01ac

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_561(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_562 @ 1010:01b0

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_562(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_563 @ 1010:01b4

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_563(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_564 @ 1010:01b8

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_564(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_565 @ 1010:01bc

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_565(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_566 @ 1010:01c0

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_566(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_567 @ 1010:01c4

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_567(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_568 @ 1010:01c8

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_568(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_569 @ 1010:01cc

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_569(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_571 @ 1010:01d0

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_571(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_572 @ 1010:01d4

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_572(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


