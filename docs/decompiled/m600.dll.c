// Decompiled with Ghidra from m600.dll
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
  
  DAT_1008_016a = 0x1008;
  uVar3 = unaff_CS;
  DAT_1008_0168 = unaff_DI;
  DAT_1008_016c = in_CX;
  DAT_1008_016e = in_BX;
  DAT_1008_0170 = unaff_SI;
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
  DAT_1008_02a4 = CONCAT11((char)uVar3,(char)((uint)uVar3 >> 8));
  if ((DAT_1000_0010 & 1) == 0) {
    pcVar1 = (code *)swi(0x21);
    DAT_1008_02a8 = (*pcVar1)();
  }
  else {
    uVar4 = 0x1000;
    DAT_1008_02a8 = DOS3CALL(0x1000);
  }
  DAT_1008_02a6 = CONCAT11((char)DAT_1008_02a8,(char)((uint)DAT_1008_02a8 >> 8));
  if ((DAT_1000_0010 & 1) == 0) {
    DAT_1008_02ab = 0;
  }
  FUN_1000_0318(uVar4);
  FUN_1000_0420();
  DAT_1008_0172 = DAT_1008_0172 + '\x01';
  FUN_1000_02ec(DAT_1008_02c4,DAT_1008_02c6,DAT_1008_02c8,DAT_1008_02ca,DAT_1008_02cc);
  return;
}


// ---- FUN_1000_00f6 @ 1000:00f6

undefined2 __stdcall16far FUN_1000_00f6(void)

{
  return 1;
}


// ---- FUN_1000_010e @ 1000:010e

long __stdcall16far FUN_1000_010e(uint param_1,int param_2,uint param_3,int param_4)

{
  if (param_4 == 0 && param_2 == 0) {
    return (ulong)param_1 * (ulong)param_3;
  }
  return CONCAT22((int)((ulong)param_1 * (ulong)param_3 >> 0x10) +
                  param_2 * param_3 + param_1 * param_4,(int)((ulong)param_1 * (ulong)param_3));
}


// ---- FUN_1000_0140 @ 1000:0140

undefined4 __stdcall16far FUN_1000_0140(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar6;
  
  uVar9 = param_1;
  uVar6 = param_4;
  uVar7 = param_2;
  uVar3 = param_3;
  if (param_4 == 0) {
    uVar3 = param_2 / param_3;
    iVar4 = (int)(((ulong)param_2 % (ulong)param_3 << 0x10 | (ulong)param_1) / (ulong)param_3);
  }
  else {
    do {
      uVar5 = uVar6 >> 1;
      uVar3 = (uint)(CONCAT12((uVar6 & 1) != 0,uVar3) >> 1);
      uVar8 = uVar7 >> 1;
      uVar9 = (uint)(CONCAT12((uVar7 & 1) != 0,uVar9) >> 1);
      uVar6 = uVar5;
      uVar7 = uVar8;
    } while (uVar5 != 0);
    uVar1 = CONCAT22(uVar8,uVar9) / (ulong)uVar3;
    iVar4 = (int)uVar1;
    lVar2 = (ulong)param_3 * (uVar1 & 0xffff);
    uVar3 = (uint)((ulong)lVar2 >> 0x10);
    uVar9 = uVar3 + iVar4 * param_4;
    if (((CARRY2(uVar3,iVar4 * param_4)) || (param_2 < uVar9)) ||
       ((param_2 <= uVar9 && (param_1 < (uint)lVar2)))) {
      iVar4 = iVar4 + -1;
    }
    uVar3 = 0;
  }
  return CONCAT22(uVar3,iVar4);
}


// ---- FUN_1000_01a0 @ 1000:01a0

undefined2 * __cdecl16far FUN_1000_01a0(undefined2 *param_1,undefined2 *param_2,int param_3)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  int iVar7;
  int iVar8;
  
  if (param_3 != 0) {
    iVar8 = (int)((ulong)param_2 >> 0x10);
    puVar5 = (undefined2 *)param_2;
    iVar7 = (int)((ulong)param_1 >> 0x10);
    puVar6 = (undefined2 *)param_1;
    while( true ) {
      uVar3 = ~(uint)puVar6;
      uVar3 = ((param_3 - 1U) - uVar3 & -(uint)(param_3 - 1U < uVar3)) + uVar3;
      uVar4 = ~(uint)puVar5;
      uVar3 = (uVar3 - uVar4 & -(uint)(uVar3 < uVar4)) + uVar4 + 1;
      param_3 = param_3 - uVar3;
      for (uVar4 = uVar3 >> 1; uVar4 != 0; uVar4 = uVar4 - 1) {
        puVar2 = puVar6;
        puVar6 = puVar6 + 1;
        puVar1 = puVar5;
        puVar5 = puVar5 + 1;
        *puVar2 = *puVar1;
      }
      for (uVar3 = (uint)((uVar3 & 1) != 0); uVar3 != 0; uVar3 = uVar3 - 1) {
        puVar2 = puVar6;
        puVar6 = (undefined2 *)((int)puVar6 + 1);
        puVar1 = puVar5;
        puVar5 = (undefined2 *)((int)puVar5 + 1);
        *(undefined1 *)puVar2 = *(undefined1 *)puVar1;
      }
      if (param_3 == 0) break;
      if (puVar5 == (undefined2 *)0x0) {
        iVar8 = iVar8 + 0x5c;
      }
      if (puVar6 == (undefined2 *)0x0) {
        iVar7 = iVar7 + 0x5c;
      }
    }
  }
  return (undefined2 *)param_1;
}


// ---- FUN_1000_01fe @ 1000:01fe

undefined2 * __cdecl16far FUN_1000_01fe(undefined2 *param_1,undefined1 param_2,uint param_3)

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


// ---- FUN_1000_0246 @ 1000:0246

undefined2 __cdecl16far FUN_1000_0246(void)

{
  byte bVar1;
  int iVar2;
  longdouble in_ST0;
  longdouble in_ST1;
  
  iVar2 = (((uint)(in_ST1 < in_ST0) << 8 | (uint)(in_ST1 == in_ST0) << 0xe) >> 8) << 7;
  bVar1 = (byte)iVar2;
  return CONCAT11((char)((uint)iVar2 >> 8) << 1 | bVar1,bVar1);
}


// ---- FUN_1000_0275 @ 1000:0275

undefined2 __cdecl16far FUN_1000_0275(void)

{
  return 0x1008;
}


// ---- FUN_1000_029a @ 1000:029a

undefined2 __cdecl16far FUN_1000_029a(void)

{
  longdouble in_ST0;
  undefined2 local_10;
  
  local_10 = (undefined2)(sqword)ROUND(in_ST0);
  return local_10;
}


// ---- FUN_1000_02ec @ 1000:02ec

void __cdecl16far FUN_1000_02ec(void)

{
  FUN_1000_1ed0(DAT_1008_016e,DAT_1008_0170,DAT_1008_016c,DAT_1008_016a,DAT_1008_0168);
  return;
}


// ---- FUN_1000_0318 @ 1000:0318

void __cdecl16far FUN_1000_0318(void)

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
  if (DAT_1008_039a != 0) {
    bVar5 = false;
    (*DAT_1008_0398)();
    if (bVar5) {
      do {
        uVar6 = 2;
        uVar7 = 2;
        FUN_1000_03fc(2,2);
        FUN_1000_0b83(uVar7);
        pcVar2 = (char *)FUN_1000_0b4c(uVar6);
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
  FUN_1000_03e8(uVar7,iVar3);
  FUN_1000_03e8();
  FUN_1000_03e8();
  return;
}


// ---- FUN_1000_0360 @ 1000:0360

undefined2 __cdecl16far FUN_1000_0360(void)

{
  DAT_1008_02d5 = 1;
  FUN_1000_03e8();
  FUN_1000_03e8();
  FUN_1000_03e8();
  FUN_1000_03e8();
  FUN_1000_1578();
  FUN_1000_0c2a();
  return 0x100;
}


// ---- FUN_1000_03e8 @ 1000:03e8

void __cdecl16near FUN_1000_03e8(void)

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


// ---- FUN_1000_03fc @ 1000:03fc

void __cdecl16far FUN_1000_03fc(void)

{
  FUN_1000_0b83(0xfc);
  FUN_1000_0b83(0xff);
  return;
}


// ---- FUN_1000_0420 @ 1000:0420

void __cdecl16far FUN_1000_0420(void)

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
  pcVar11 = (char *)FUN_1000_0bec();
  uVar5 = (undefined2)((ulong)pcVar11 >> 0x10);
  pcVar9 = (char *)pcVar11;
  puVar12 = (undefined2 *)FUN_1000_0bec();
  uVar6 = (undefined2)((ulong)puVar12 >> 0x10);
  DAT_1008_02ca = (undefined2 *)puVar12;
  pcVar8 = (char *)0x0;
  for (; DAT_1008_02cc = (undefined2)((ulong)puVar12 >> 0x10), puVar2 = (undefined2 *)puVar12,
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
      puVar12 = (undefined2 *)CONCAT22(DAT_1008_02cc,puVar2 + 2);
    } while (cVar1 != '\0');
  }
  *puVar2 = 0;
  puVar2[1] = 0;
  return;
}


// ---- FUN_1000_052e @ 1000:052e

undefined2 __cdecl16far FUN_1000_052e(char *param_1)

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


// ---- FUN_1000_05b2 @ 1000:05b2

bool __cdecl16far FUN_1000_05b2(double *param_1)

{
  return DAT_1008_0404 <= *param_1;
}


// ---- FUN_1000_05ea @ 1000:05ea

void __cdecl16far FUN_1000_05ea(int param_1,float *param_2,undefined2 param_3,undefined2 param_4)

{
  undefined2 *puVar1;
  double *pdVar2;
  undefined2 in_DX;
  float *pfVar3;
  undefined2 uVar4;
  
  if (param_1 == 0) {
    pdVar2 = (double *)FUN_1000_0c2c(param_3,param_4);
    *param_2 = (float)*pdVar2;
  }
  else {
    puVar1 = (undefined2 *)FUN_1000_0c2c(param_3,param_4);
    uVar4 = (undefined2)((ulong)param_2 >> 0x10);
    pfVar3 = (float *)param_2;
    *(undefined2 *)param_2 = *puVar1;
    *(undefined2 *)((int)pfVar3 + 2) = puVar1[1];
    *(undefined2 *)(pfVar3 + 1) = puVar1[2];
    *(undefined2 *)((int)pfVar3 + 6) = puVar1[3];
  }
  return;
}


// ---- FUN_1000_0642 @ 1000:0642

undefined1 * __cdecl16far
FUN_1000_0642(undefined2 *param_1,undefined1 *param_2,undefined2 param_3,int param_4,int param_5)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined2 in_DX;
  undefined2 *puVar3;
  int iVar4;
  undefined2 uVar5;
  undefined4 local_c;
  undefined4 local_8;
  
  if (DAT_1008_02fc == '\0') {
    uVar5 = (undefined2)((ulong)param_1 >> 0x10);
    puVar3 = (undefined2 *)param_1;
    piVar1 = (int *)FUN_1000_0e58(*param_1,puVar3[1],puVar3[2],puVar3[3]);
    local_8 = (int *)CONCAT22(in_DX,piVar1);
    FUN_1000_0c8a(param_2 + (uint)(0 < param_4) + (uint)(*local_8 == 0x2d),param_3,param_4 + 1,
                  piVar1,in_DX);
  }
  else {
    local_8 = (int *)CONCAT22(DAT_1008_0f2c._2_2_,(int *)DAT_1008_0f2c);
    FUN_1000_0af4(0 < param_4,param_2 + (*(int *)DAT_1008_0f2c == 0x2d),param_3);
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
           FUN_1000_0d52((undefined1 *)local_c + param_4 + (uint)(DAT_1008_02fc == '\0'),
                         local_c._2_2_,0x301,0x1008);
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


// ---- FUN_1000_07da @ 1000:07da

void __cdecl16far
FUN_1000_07da(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5,undefined2 param_6)

{
  DAT_1008_02fc = 1;
  FUN_1000_0642(param_1,param_2,param_3,param_4,param_5,param_6);
  DAT_1008_02fc = 0;
  return;
}


// ---- FUN_1000_080e @ 1000:080e

undefined1 * __cdecl16far
FUN_1000_080e(undefined2 *param_1,undefined1 *param_2,undefined2 param_3,int param_4)

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
  
  iVar3 = DAT_1008_02fe;
  if (DAT_1008_02fc == '\0') {
    uVar6 = (undefined2)((ulong)param_1 >> 0x10);
    puVar4 = (undefined2 *)param_1;
    piVar5 = (int *)FUN_1000_0e58(*param_1,puVar4[1],puVar4[2],puVar4[3]);
    local_8 = (int *)CONCAT22(in_DX,piVar5);
    FUN_1000_0c8a(param_2 + (*local_8 == 0x2d),param_3,piVar5[1] + param_4,piVar5,in_DX);
  }
  else {
    local_8 = (int *)CONCAT22(DAT_1008_0f2c._2_2_,(int *)DAT_1008_0f2c);
    iVar1 = *(int *)DAT_1008_0f2c;
    if (param_4 == DAT_1008_02fe) {
      param_2[DAT_1008_02fe + (uint)(iVar1 == 0x2d)] = 0x30;
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
    FUN_1000_0af4(1,puVar2,param_3);
    puVar2 = puVar2 + 1;
    *local_c = 0x30;
  }
  else {
    puVar2 = puVar2 + piVar5[1];
  }
  local_c = (undefined1 *)CONCAT22(param_3,puVar2);
  if (0 < param_4) {
    FUN_1000_0af4(1,puVar2,param_3);
    *local_c = 0x2e;
    if (piVar5[1] < 0) {
      if (DAT_1008_02fc == '\0') {
        iVar3 = -piVar5[1];
        if (-param_4 != piVar5[1] && param_4 <= iVar3) {
          iVar3 = param_4;
        }
      }
      else {
        iVar3 = -piVar5[1];
      }
      FUN_1000_0af4(iVar3,puVar2 + 1,param_3);
      FUN_1000_01fe(puVar2 + 1,param_3,0x30,iVar3);
    }
  }
  return param_2;
}


// ---- FUN_1000_0974 @ 1000:0974

void __cdecl16far
FUN_1000_0974(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5)

{
  DAT_1008_02fc = 1;
  FUN_1000_080e(param_1,param_2,param_3,param_4,param_5);
  DAT_1008_02fc = 0;
  return;
}


// ---- FUN_1000_09a6 @ 1000:09a6

void __cdecl16far
FUN_1000_09a6(undefined2 *param_1,int param_2,undefined2 param_3,int param_4,undefined2 param_5)

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
  piVar2 = (int *)FUN_1000_0e58(*param_1,puVar5[1],puVar5[2],puVar5[3]);
  DAT_1008_0f2c = (int *)CONCAT22(in_DX,piVar2);
  DAT_1008_02fe = piVar2[1] + -1;
  pcVar3 = (char *)((uint)(*DAT_1008_0f2c == 0x2d) + param_2);
  local_8 = (char *)CONCAT22(param_3,pcVar3);
  FUN_1000_0c8a(pcVar3,param_3,param_4,piVar2,in_DX);
  iVar4 = ((int *)DAT_1008_0f2c)[1] + -1;
  DAT_1008_0300 = DAT_1008_02fe < iVar4;
  DAT_1008_02fe = iVar4;
  if ((iVar4 < -4) || (param_4 <= iVar4)) {
    FUN_1000_07da(puVar5,uVar6,param_2,param_3,param_4,param_5);
  }
  else {
    if ((bool)DAT_1008_0300) {
      do {
        pcVar1 = local_8;
        uVar7 = (undefined2)((ulong)local_8 >> 0x10);
        pcVar3 = (char *)local_8;
        local_8 = (char *)CONCAT22(uVar7,(char *)local_8 + 1);
      } while (*pcVar1 != '\0');
      pcVar3[-1] = '\0';
    }
    FUN_1000_0974(puVar5,uVar6,param_2,param_3,param_4);
  }
  return;
}


// ---- FUN_1000_0a86 @ 1000:0a86

void __cdecl16far
FUN_1000_0a86(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             int param_5,undefined2 param_6,undefined2 param_7)

{
  int unaff_BP;
  
  if ((param_5 == 0x65) || (param_5 == 0x45)) {
    FUN_1000_0642(param_1,param_2,param_3,param_4,param_6,param_7);
  }
  else if (param_5 == 0x66) {
    FUN_1000_080e(param_1,param_2,param_3,param_4,param_6);
  }
  else {
    FUN_1000_09a6(param_1,param_2,param_3,param_4,param_6,param_7,0x1008,unaff_BP + 1);
  }
  return;
}


// ---- FUN_1000_0af4 @ 1000:0af4

void FUN_1000_0af4(int param_1,int param_2,undefined2 param_3)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = FUN_1000_0d38(param_2,param_3);
    FUN_1000_0d8e(param_2 + param_1,param_3,param_2,param_3,iVar1 + 1);
  }
  return;
}


// ---- FUN_1000_0b4c @ 1000:0b4c

int * __stdcall16far FUN_1000_0b4c(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  piVar3 = (int *)&DAT_1008_0414;
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


// ---- FUN_1000_0b83 @ 1000:0b83

undefined2 __stdcall16far FUN_1000_0b83(void)

{
  return 0x1008;
}


// ---- FUN_1000_0ba4 @ 1000:0ba4

void FUN_1000_0ba4(void)

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
    FUN_1000_03fc(in_AX,in_AX);
    FUN_1000_0b83(in_AX);
    pcVar2 = (char *)FUN_1000_0b4c(uVar5);
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


// ---- FUN_1000_0bec @ 1000:0bec

void __cdecl16near FUN_1000_0bec(void)

{
  undefined2 uVar1;
  int iVar2;
  int in_DX;
  
  uVar1 = DAT_1008_032e;
  LOCK();
  DAT_1008_032e = 0x1000;
  UNLOCK();
  iVar2 = FUN_1000_122d();
  DAT_1008_032e = uVar1;
  if (in_DX != 0 || iVar2 != 0) {
    return;
  }
  FUN_1000_0ba4();
  return;
}


// ---- FUN_1000_0c1a @ 1000:0c1a

undefined2 __cdecl16far FUN_1000_0c1a(void)

{
  undefined2 unaff_SS;
  
  if (___EXPORTEDSTUB != (code)0xb8) {
    return unaff_SS;
  }
  return uRam10000fc7;
}


// ---- FUN_1000_0c2a @ 1000:0c2a

void __cdecl16near FUN_1000_0c2a(void)

{
  return;
}


// ---- FUN_1000_0c2c @ 1000:0c2c

undefined2 __cdecl16far FUN_1000_0c2c(char *param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 in_DX;
  undefined2 uVar3;
  
  while (uVar3 = (undefined2)((ulong)param_1 >> 0x10), (*(byte *)(*param_1 + 0x17d) & 8) != 0) {
    param_1 = (char *)CONCAT22(uVar3,(char *)param_1 + 1);
  }
  uVar1 = FUN_1000_0fda((char *)param_1,uVar3,0,0);
  iVar2 = FUN_1000_11a8((char *)param_1,uVar3,uVar1);
  DAT_1008_0f4a = *(undefined2 *)(iVar2 + 8);
  DAT_1008_0f4c = *(undefined2 *)(iVar2 + 10);
  DAT_1008_0f4e = *(undefined2 *)(iVar2 + 0xc);
  DAT_1008_0f50 = *(undefined2 *)(iVar2 + 0xe);
  return 0xf4a;
}


// ---- FUN_1000_0c8a @ 1000:0c8a

void __cdecl16far FUN_1000_0c8a(char *param_1,int param_2,undefined4 param_3)

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
    FUN_1000_0d52(pcVar4,uVar6,pcVar4 + 1,uVar6);
  }
  return;
}


// ---- FUN_1000_0d38 @ 1000:0d38

uint __cdecl16far FUN_1000_0d38(char *param_1)

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


// ---- FUN_1000_0d52 @ 1000:0d52

void __cdecl16far FUN_1000_0d52(char *param_1,char *param_2)

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


// ---- FUN_1000_0d8e @ 1000:0d8e

undefined2 * __cdecl16far FUN_1000_0d8e(undefined2 *param_1,undefined2 *param_2,uint param_3)

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
    lVar15 = FUN_1000_0ff4(puVar10,iVar13,puVar8,iVar14);
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
          iVar14 = iVar14 + 0x5c;
        }
        if (puVar12 == (undefined2 *)0x0) {
          iVar13 = iVar13 + 0x5c;
        }
      }
    }
    else {
      uVar6 = param_3 - 1;
      puVar9 = (undefined1 *)((int)puVar8 + uVar6);
      if (CARRY2((uint)puVar8,uVar6)) {
        iVar14 = iVar14 + 0x5c;
      }
      puVar11 = (undefined1 *)((int)puVar10 + uVar6);
      if (CARRY2((uint)puVar10,uVar6)) {
        iVar13 = iVar13 + 0x5c;
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
          iVar14 = iVar14 + -0x5c;
        }
        if (puVar11 == (undefined1 *)0xffff) {
          iVar13 = iVar13 + -0x5c;
        }
      }
    }
  }
  return puVar10;
}


// ---- FUN_1000_0e58 @ 1000:0e58

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 __cdecl16far
FUN_1000_0e58(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

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
  _DAT_1008_0312 = param_1;
  _DAT_1008_0314 = param_2;
  DAT_1008_0316 = param_3;
  DAT_1008_0318 = param_4;
  uVar6 = FUN_1000_1062(&iStack_2);
  puVar5 = (undefined1 *)&DAT_1008_031a;
  puVar4 = (undefined1 *)&DAT_1008_0313;
  for (iVar3 = (int)DAT_1008_0312; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar2 = *puVar1;
  }
  *puVar5 = 0;
  DAT_1008_0308 = in_BX & 0xff;
  DAT_1008_030a = (int)((ulong)uVar6 >> 0x10);
  DAT_1008_030c = (int)uVar6;
  DAT_1008_030e = 0x31a;
  DAT_1008_0310 = 0x1008;
  return 0x308;
}


// ---- FUN_1000_0eae @ 1000:0eae

void __cdecl16near FUN_1000_0eae(void)

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
    FUN_1000_0fa5();
    if ((*unaff_SI & 1) != 0) {
      in_CX = (in_CX - *unaff_SI) + -1;
    }
    uVar4 = *(uint *)(in_BX + 4);
    if (uVar4 != 0) {
      if (!CARRY2(in_CX + 2U,uVar4)) {
        uVar2 = FUN_1000_0c1a();
        uVar4 = *(uint *)&DAT_1008_032e;
        if (uVar4 == 0x1000) goto LAB_1000_0f00;
        uVar5 = 0x8000;
        while (uVar4 <= uVar5) {
          uVar5 = uVar5 >> 1;
          if (uVar5 == 0) goto LAB_1000_0f19;
        }
        if (uVar5 < 8) goto LAB_1000_0f19;
        uVar4 = uVar5 << 1;
        goto LAB_1000_0f00;
      }
      uVar5 = 0xfff0;
      if (in_CX + 2U + uVar4 == 0) {
        while( true ) {
          bVar8 = false;
          iVar3 = FUN_1000_0f3f();
          if (!bVar8) break;
          if (uVar5 == 0xfff0) {
            return;
          }
LAB_1000_0f19:
          uVar4 = 0x10;
LAB_1000_0f00:
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


// ---- FUN_1000_0f3f @ 1000:0f3f

void __cdecl16near FUN_1000_0f3f(void)

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
LAB_1000_0f9a:
    FUN_1000_0ba4();
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
    goto LAB_1000_0f9a;
    if ((*(byte *)(iVar5 + 2) & 4) != 0) {
      *(int *)(iVar5 + -2) = in_BX + -1;
    }
  }
  return;
}


// ---- FUN_1000_0fa5 @ 1000:0fa5

void __cdecl16near FUN_1000_0fa5(void)

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


// ---- ___EXPORTEDSTUB @ 1000:0fc6

undefined2 __cdecl16far ___EXPORTEDSTUB(void)

{
  return 0;
}


// ---- FUN_1000_0fda @ 1000:0fda

uint __cdecl16far FUN_1000_0fda(char *param_1)

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


// ---- FUN_1000_0ff4 @ 1000:0ff4

undefined4 __stdcall16far FUN_1000_0ff4(uint param_1,undefined2 param_2,uint param_3)

{
  return CONCAT22(-(uint)(param_1 < param_3),param_1 - param_3);
}


// ---- FUN_1000_1062 @ 1000:1062

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined4 __cdecl16near FUN_1000_1062(void)

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
  
  pdVar30 = (double *)&DAT_1008_0330;
  for (iVar18 = 4; Var14 = _DAT_1008_0330, iVar18 != 0; iVar18 = iVar18 + -1) {
    pdVar3 = pdVar30;
    pdVar30 = (double *)((int)pdVar30 + 2);
    puVar1 = unaff_SI;
    unaff_SI = unaff_SI + 1;
    *(undefined2 *)pdVar3 = *puVar1;
  }
  uVar19 = DAT_1008_0330._6_2_;
                    /* WARNING: Ignoring partial resolution of indirect */
  DAT_1008_0330._7_1_ = DAT_1008_0330._7_1_ & 0x7f;
  Var15 = _DAT_1008_0330;
  DAT_1008_0330 = ABS((double)Var14);
  uVar24 = 0x20;
  if (((DAT_1008_0330._0_2_ == 0 && DAT_1008_0330._2_2_ == 0) && DAT_1008_0330._4_2_ == 0) &&
      DAT_1008_0330._6_2_ == 0) {
    DAT_1008_033c = 0x3001;
    _DAT_1008_0330 = (longdouble)Var15;
    return 1;
  }
  if ((int)uVar19 < 0) {
    uVar24 = 0x2d;
  }
  if ((~uVar19 & 0x7ff0) == 0) {
    _DAT_1008_0330 = (longdouble)Var15;
    return 0x10000;
  }
  DAT_1008_0369 = (undefined1)in_FPUControlWord;
  DAT_1008_036b._0_1_ = DAT_1008_0369;
  lVar35 = (longdouble)DAT_1008_0330;
  DAT_1008_0330._7_1_ = (byte)((unkuint10)lVar35 >> 0x38);
  DAT_1008_0338 = (uint)((unkuint10)lVar35 >> 0x40);
  lVar12 = (ulong)DAT_1008_0338 * 0x4d10 + (ulong)((DAT_1008_0338 >> 8) * 0x4d);
  uVar19 = (uint)lVar12;
  iVar18 = ((int)((ulong)lVar12 >> 0x10) + (uint)CARRY2(uVar19,(uint)DAT_1008_0330._7_1_ * 0x9a) +
           -0x1343) - (uint)(uVar19 + (uint)DAT_1008_0330._7_1_ * 0x9a < 0x12f4);
  _DAT_1008_0330 = lVar35;
  _DAT_1008_0369 = in_FPUControlWord;
  FUN_1000_1450(iVar18,uVar24);
  DAT_1008_0367 =
       (uint)(_DAT_1000_1014 < lVar35) << 8 | (uint)(NAN(_DAT_1000_1014) || NAN(lVar35)) << 10 |
       (uint)(_DAT_1000_1014 == lVar35) << 0xe;
  if (_DAT_1000_1014 < lVar35 || (_DAT_1000_1014 == lVar35) != 0) {
    iVar18 = iVar18 + 1;
    lVar35 = _DAT_1000_101e * lVar35;
  }
  DAT_1008_0330._0_2_ = SUB102(lVar35,0);
  DAT_1008_0330._2_2_ = (uint)((unkuint10)lVar35 >> 0x10);
  DAT_1008_0330._4_2_ = (uint)((unkuint10)lVar35 >> 0x20);
  DAT_1008_0330._6_2_ = (uint)((unkuint10)lVar35 >> 0x30);
  DAT_1008_0338 = (uint)((unkuint10)lVar35 >> 0x40);
  bVar32 = false;
  bVar17 = 0;
  for (iVar20 = -(DAT_1008_0338 + 0xc002); iVar20 != 0; iVar20 = iVar20 + -1) {
    uVar19 = DAT_1008_0330._6_2_ & 1;
    DAT_1008_0330._6_2_ = DAT_1008_0330._6_2_ >> 1;
    bVar32 = (bVar17 & 1) != 0;
    bVar17 = (byte)(CONCAT11((DAT_1008_0330._0_2_ & 1) != 0,bVar17) >> 1);
    DAT_1008_0330._0_2_ = (uint)(CONCAT12((DAT_1008_0330._2_2_ & 1) != 0,DAT_1008_0330._0_2_) >> 1);
    DAT_1008_0330._2_2_ = (uint)(CONCAT12((DAT_1008_0330._4_2_ & 1) != 0,DAT_1008_0330._2_2_) >> 1);
    DAT_1008_0330._4_2_ = (uint)(CONCAT12(uVar19 != 0,DAT_1008_0330._4_2_) >> 1);
  }
  uVar28 = DAT_1008_0330._0_2_ + 0x39a + (uint)bVar32;
  uVar19 = (uint)(0xfc65 < DAT_1008_0330._0_2_ || CARRY2(DAT_1008_0330._0_2_ + 0x39a,(uint)bVar32));
  uVar26 = DAT_1008_0330._2_2_ + uVar19;
  uVar19 = (uint)CARRY2(DAT_1008_0330._2_2_,uVar19);
  uVar22 = DAT_1008_0330._4_2_ + uVar19;
  uVar19 = DAT_1008_0330._6_2_ + CARRY2(DAT_1008_0330._4_2_,uVar19);
  iVar20 = 0x10;
  pcVar16 = (char *)((int)(undefined2 *)&DAT_1008_033c + 1);
  _DAT_1008_0330 = lVar35;
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
  DAT_1008_033c = CONCAT11(DAT_1008_033c._1_1_,(char)iVar21 + '\x12');
  return CONCAT22(iVar18,1);
}


// ---- FUN_1000_11a8 @ 1000:11a8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 __cdecl16far FUN_1000_11a8(int param_1,undefined2 param_2)

{
  uint uVar1;
  int unaff_BP;
  undefined2 unaff_SS;
  int local_8 [2];
  undefined2 local_4;
  int iStack_2;
  
  iStack_2 = unaff_BP + 1;
  local_4 = 0x1008;
  uVar1 = FUN_1000_148e(0,param_1,param_2,local_8,unaff_SS,0xf38,0x1008);
  DAT_1008_0f32 = local_8[0] - param_1;
  DAT_1008_0f31 = 0;
  if ((uVar1 & 4) != 0) {
    DAT_1008_0f31 = 2;
  }
  if ((uVar1 & 1) != 0) {
    DAT_1008_0f31 = DAT_1008_0f31 | 1;
  }
  DAT_1008_0f30 = (uVar1 & 2) != 0;
  return 0xf30;
}


// ---- FUN_1000_120c @ 1000:120c

undefined2 __cdecl16far FUN_1000_120c(undefined4 param_1)

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


// ---- FUN_1000_122d @ 1000:122d

undefined2 __cdecl16far FUN_1000_122d(uint param_1)

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
      if (*(int *)((int)(undefined4 *)&DAT_1008_0388 + 2) != 0) {
        pcVar4 = (code *)0x1586;
        while( true ) {
          uVar3 = *(uint *)&DAT_1008_0392;
          uVar6 = (uint)((ulong)*(undefined4 *)&DAT_1008_038c >> 0x10);
          in_BX = (int)*(undefined4 *)&DAT_1008_038c;
          uVar10 = uVar6;
          do {
            do {
              unaff_CS = 0x1000;
              uVar9 = (*pcVar4)();
              if (!bVar7) {
                if (pcVar4 == (code *)0x1586) goto LAB_1000_129e;
                goto LAB_1000_129b;
              }
              puVar1 = (undefined4 *)(in_BX + 0xe);
              in_BX = (int)*puVar1;
              bVar7 = uVar6 < uVar3;
              bVar8 = uVar6 != uVar3;
              uVar6 = (uint)((ulong)*puVar1 >> 0x10);
            } while (bVar8);
            uVar3 = *(uint *)((int)*(undefined4 *)&DAT_1008_038c + 0x14);
            uVar6 = (uint)((ulong)*(undefined4 *)&DAT_1008_0388 >> 0x10);
            in_BX = (int)*(undefined4 *)&DAT_1008_0388;
            bVar7 = uVar6 < uVar10;
            bVar8 = uVar6 != uVar10;
            uVar10 = uVar6;
          } while (bVar8);
          bVar7 = pcVar4 < (code *)0xeae;
          if (pcVar4 == (code *)0xeae) break;
          pcVar4 = (code *)0xeae;
        }
      }
      FUN_1000_14f6();
      if (!bVar7) {
LAB_1000_129b:
        uVar9 = FUN_1000_1586();
LAB_1000_129e:
        *(undefined2 *)((int)(undefined4 *)&DAT_1008_038c + 2) = (int)((ulong)uVar9 >> 0x10);
        *(int *)&DAT_1008_038c = in_BX;
        return (int)uVar9;
      }
    }
    if (*(int *)&DAT_1008_037c == 0 && *(int *)&DAT_1008_037a == 0) {
      return 0;
    }
    iVar2 = (*(code *)*(undefined2 *)&DAT_1008_037a)(unaff_CS,param_1);
    if (iVar2 == 0) {
      return 0;
    }
  } while( true );
}


// ---- FUN_1000_1450 @ 1000:1450

void __cdecl16near FUN_1000_1450(void)

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


// ---- FUN_1000_148e @ 1000:148e

/* WARNING: Removing unreachable block (ram,0x100014e4) */
/* WARNING: Removing unreachable block (ram,0x100014ed) */

int FUN_1000_148e(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
                 undefined2 param_5,double *param_6)

{
  int iVar1;
  undefined2 unaff_SS;
  longdouble local_c;
  
  iVar1 = FUN_1000_1602(param_1,param_2,param_3,param_4,param_5,&local_c,unaff_SS);
  *param_6 = (double)local_c;
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  return iVar1;
}


// ---- FUN_1000_14f6 @ 1000:14f6

void __cdecl16near FUN_1000_14f6(void)

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
      if (((int)uVar4 != 0) || (iVar1 == 0)) goto LAB_1000_156d;
    }
    lVar5 = GLOBALSIZE(0x1010,iVar1);
    if (lVar5 == 0) {
LAB_1000_156d:
      FUN_1000_0ba4();
      return;
    }
    *(int *)0x6 = iVar2;
    *(undefined2 *)0x2 = *(undefined2 *)(unaff_DI + 0xc);
    FUN_1000_1894();
    FUN_1000_18c8();
  }
  return;
}


// ---- FUN_1000_1578 @ 1000:1578

void __cdecl16near FUN_1000_1578(void)

{
  FUN_1000_186a();
  return;
}


// ---- FUN_1000_1586 @ 1000:1586

uint * __cdecl16near FUN_1000_1586(void)

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
          if (CARRY2((uint)puVar1,uVar2)) goto LAB_1000_15df;
          puVar6 = (uint *)((int)puVar1 + uVar2) + 1;
          uVar3 = *(uint *)((int)puVar1 + uVar2);
          if ((uVar3 & 1) == 0) break;
          uVar3 = uVar3 + uVar2 + 2;
          *puVar7 = uVar3;
        }
      }
      if (puVar6 + -1 < puVar5) break;
      if (((uint)puVar5 & 1) != 0) goto LAB_1000_15df;
      puVar7 = (uint *)*(undefined2 *)(in_BX + 8);
      if ((uint *)*(undefined2 *)(in_BX + 10) == puVar7) goto LAB_1000_15df;
      puVar5 = (uint *)((int)*(undefined2 *)(in_BX + 10) + -1);
    }
    puVar7 = (uint *)((int)puVar6 + uVar3);
  } while (!CARRY2((uint)puVar6,uVar3));
LAB_1000_15df:
  puVar7 = (uint *)*(undefined2 *)(in_BX + 8);
  *(undefined2 *)(in_BX + 10) = puVar7;
  return puVar7;
}


// ---- FUN_1000_1602 @ 1000:1602

uint FUN_1000_1602(undefined2 param_1,byte *param_2,int *param_3,uint *param_4)

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
LAB_1000_1651:
      pbVar1 = pbVar11;
      pbVar11 = pbVar9 + 2;
      bVar6 = *pbVar1;
    }
    else if (bVar6 == 0x2d) {
      local_16 = 0x8000;
      goto LAB_1000_1651;
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
            if (local_1c == 0) goto LAB_1000_169f;
            pbVar1 = pbVar11;
            pbVar11 = pbVar11 + 1;
            bVar6 = *pbVar1;
          }
          if (bVar6 == 0x2e) {
            do {
              pbVar1 = pbVar11;
              pbVar11 = pbVar11 + 1;
              bVar6 = *pbVar1;
LAB_1000_16b9:
              if ((bVar6 < 0x30) || (0x39 < bVar6)) goto LAB_1000_16d5;
              pcVar2 = pcVar10;
              pcVar10 = pcVar10 + 1;
              *pcVar2 = bVar6 - 0x30;
              local_18 = local_18 + -1;
              local_1c = local_1c + -1;
            } while (local_1c != 0);
            goto LAB_1000_16cc;
          }
          goto LAB_1000_16d5;
        }
        do {
          local_18 = iVar5;
          bVar6 = *pbVar11;
LAB_1000_167e:
          pbVar11 = pbVar11 + 1;
          iVar5 = local_18 + -1;
        } while (bVar6 == 0x30);
        if (bVar6 != 0) goto LAB_1000_16b9;
      }
      local_14 = pbVar11 + -1;
      goto LAB_1000_1837;
    }
    if ((bVar6 == 0x2e) && ((bVar6 = *pbVar11, 0x2f < bVar6 && (bVar6 < 0x3a)))) goto LAB_1000_167e;
  }
  local_10 = 4;
  goto LAB_1000_1837;
  while (iVar5 = local_18 + 1, bVar6 < 0x3a) {
LAB_1000_169f:
    local_18 = iVar5;
    pbVar1 = pbVar11;
    pbVar11 = pbVar11 + 1;
    bVar6 = *pbVar1;
    if (bVar6 < 0x30) break;
  }
  if (bVar6 == 0x2e) {
LAB_1000_16cc:
    do {
      pbVar1 = pbVar11;
      pbVar11 = pbVar11 + 1;
      bVar6 = *pbVar1;
      if (bVar6 < 0x30) break;
    } while (bVar6 < 0x3a);
  }
LAB_1000_16d5:
  local_1c = 0x19 - local_1c;
  local_14 = pbVar11 + -1;
  if ((((bVar6 == 0x45) || (bVar6 == 0x65)) || (bVar6 == 0x44)) || (bVar6 == 100)) {
    pbVar9 = pbVar11 + 1;
    bVar6 = *pbVar11;
    if (bVar6 == 0x2b) {
LAB_1000_1704:
      pbVar1 = pbVar9;
      pbVar9 = pbVar11 + 2;
      bVar6 = *pbVar1;
    }
    else if (bVar6 == 0x2d) {
      local_1a = 0xffff;
      goto LAB_1000_1704;
    }
    if ((0x2f < bVar6) && (bVar6 < 0x3a)) {
      uVar7 = bVar6 - 0x30;
      uVar8 = uVar7;
      do {
        pbVar1 = pbVar9;
        pbVar9 = pbVar9 + 1;
        bVar6 = *pbVar1;
        if ((bVar6 < 0x30) || (0x39 < bVar6)) goto LAB_1000_173b;
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
LAB_1000_173b:
      local_18 = local_18 + ((uVar8 ^ local_1a) - local_1a);
      local_14 = pbVar9 + -1;
    }
  }
  if (local_1c != 0) {
    *pcVar10 = '\0';
    pbVar11 = (byte *)(pcVar10 + -1);
    if (local_1c < 0x19) {
      if (local_18 != 0) goto LAB_1000_1782;
    }
    else {
      bVar6 = *pbVar11;
      *pbVar11 = 0;
      local_1c = local_1c - 1;
      local_18 = local_18 + 1;
      pbVar11 = (byte *)(pcVar10 + -2);
      if (bVar6 < 5) {
LAB_1000_1782:
        for (; *pbVar11 == 0; pbVar11 = pbVar11 + -1) {
          local_1c = local_1c - 1;
          local_18 = local_18 + 1;
        }
      }
      else {
        *pbVar11 = *pbVar11 + 1;
      }
    }
    FUN_1000_1e10(&local_e,local_1c,local_36,unaff_SS);
    if (local_18 == 0) {
LAB_1000_17bc:
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
          goto LAB_1000_1819;
        }
LAB_1000_1843:
        local_10 = local_10 | 1;
        goto LAB_1000_1837;
      }
    }
    else if (local_18 < 0x1450) {
      if (-0x1450 < local_18) {
        FUN_1000_1bb6(param_1,local_18,&local_e,unaff_SS);
        goto LAB_1000_17bc;
      }
      goto LAB_1000_1843;
    }
    local_10 = local_10 | 2;
    puVar12[4] = local_16 | 0x7fff;
    puVar12[3] = 0x8000;
    puVar12[2] = 0;
    puVar12[1] = 0;
    *param_4 = 0;
    goto LAB_1000_1819;
  }
LAB_1000_1837:
  for (iVar14 = 5; iVar14 != 0; iVar14 = iVar14 + -1) {
    puVar3 = puVar12;
    puVar12 = puVar12 + 1;
    *puVar3 = 0;
  }
LAB_1000_1819:
  *param_3 = (int)local_14;
  ((int *)param_3)[1] = local_12;
  return local_10;
}


// ---- FUN_1000_186a @ 1000:186a

void __cdecl16near FUN_1000_186a(void)

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


// ---- FUN_1000_1894 @ 1000:1894

void __cdecl16near FUN_1000_1894(void)

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


// ---- FUN_1000_18c8 @ 1000:18c8

void __cdecl16near FUN_1000_18c8(void)

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


// ---- FUN_1000_1bb6 @ 1000:1bb6

void FUN_1000_1bb6(int param_1,uint param_2,undefined2 *param_3)

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
    local_8 = (code *)0x1c54;
    uVar2 = (undefined2)((ulong)param_3 >> 0x10);
    uStack_e = param_2;
    if (param_1 == 0) {
      local_8 = (code *)0x1c4a;
      in_ST0 = *(unkbyte10 *)((undefined2 *)param_3 + 1);
    }
    while (uStack_e != 0) {
      uVar1 = uStack_e & 7;
      uStack_e = uStack_e >> 3;
      if (uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x10001c20. Too many branches */
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


// ---- FUN_1000_1e10 @ 1000:1e10

uint * FUN_1000_1e10(uint *param_1,int param_2,byte *param_3)

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
    FUN_1000_1ebe();
    uVar18 = FUN_1000_1ebe();
    uVar8 = (uint)CARRY2((uint)((ulong)uVar18 >> 0x10),uVar8);
    uVar4 = uVar13 + uVar5 + uVar8;
    uVar13 = (uint)(CARRY2(uVar13,uVar5) || CARRY2(uVar13 + uVar5,uVar8));
    bVar17 = CARRY2(uVar6,uVar10);
    uVar6 = uVar6 + uVar10;
    uVar11 = uVar6 + uVar13;
    bVar15 = CARRY2((uint)uVar18,uVar3);
    uVar1 = (uint)uVar18 + uVar3;
    uVar18 = FUN_1000_1ebe();
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


// ---- FUN_1000_1ebe @ 1000:1ebe

undefined4 __cdecl16near FUN_1000_1ebe(void)

{
  int in_AX;
  int in_DX;
  uint in_BX;
  
  return CONCAT22(in_DX << 1,in_AX << 1 | (uint)((in_BX & 0x8000) != 0));
}


// ---- FUN_1000_1ed0 @ 1000:1ed0

undefined2 __stdcall16far FUN_1000_1ed0(void)

{
  return 1;
}


// ---- WEP @ 1000:1eea

undefined2 __stdcall16far WEP(void)

{
  return 1;
}


// ---- VAC_REPORTID @ 1000:1f04

void __cdecl16far VAC_REPORTID(void)

{
  undefined2 unaff_CS;
  
  UIF_MESSAGE(unaff_CS,0x23da,0x1000);
  return;
}


// ---- INITIALISE_VAC_CNTRLER_DATA @ 1000:1f22

void __cdecl16far INITIALISE_VAC_CNTRLER_DATA(void)

{
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  M007_PUTSTATE(unaff_CS,1);
  M007_PUTVALUE(0x1010,(int)DAT_1008_03a8,(int)((ulong)DAT_1008_03a8 >> 0x10));
  M007_PUTVALUE(0x1010,(int)DAT_1008_03a8,(int)((ulong)DAT_1008_03a8 >> 0x10));
  M007_PUTVALUE(0x1010,(int)DAT_1008_03a8,(int)((ulong)DAT_1008_03a8 >> 0x10));
  M007_PUTVALUE(0x1010,(int)DAT_1008_03ac,(int)((ulong)DAT_1008_03ac >> 0x10));
  M007_PUTVALUE(0x1010,(int)DAT_1008_03b0,(int)((ulong)DAT_1008_03b0 >> 0x10));
  M007_PUTLOW(0x1010,(int)DAT_1008_03b4,(int)((ulong)DAT_1008_03b4 >> 0x10));
  M007_PUTLOW(0x1010,(int)DAT_1008_03b8,(int)((ulong)DAT_1008_03b8 >> 0x10));
  M007_PUTLOW(0x1010,(int)DAT_1008_03b8,(int)((ulong)DAT_1008_03b8 >> 0x10));
  M007_PUTLOW(0x1010,(int)DAT_1008_03bc,(int)((ulong)DAT_1008_03bc >> 0x10));
  M007_PUTLOW(0x1010,(int)DAT_1008_03c0,(int)((ulong)DAT_1008_03c0 >> 0x10));
  M007_PUTHIGH(0x1010,(int)DAT_1008_03c4,(int)((ulong)DAT_1008_03c4 >> 0x10));
  uVar4 = 0x9e;
  M007_PUTHIGH(0x1010,(int)DAT_1008_03c4,(int)((ulong)DAT_1008_03c4 >> 0x10));
  uVar3 = 0x9d;
  M007_PUTHIGH(0x1010,(int)DAT_1008_03c8,(int)((ulong)DAT_1008_03c8 >> 0x10));
  uVar2 = 0x142;
  M007_PUTHIGH(0x1010,(int)DAT_1008_03cc,(int)((ulong)DAT_1008_03cc >> 0x10));
  uVar1 = 0x1b8;
  M007_PUTHIGH(0x1010,(int)DAT_1008_03cc,(int)((ulong)DAT_1008_03cc >> 0x10));
  VAC_REPORTID(uVar1,uVar2,uVar3,uVar4);
  return;
}


// ---- INITIALISE_VAC_CONTROLLER @ 1000:20c8

undefined2 __stdcall16far INITIALISE_VAC_CONTROLLER(undefined2 param_1)

{
  int iVar1;
  undefined2 uVar2;
  int in_DX;
  
  DAT_1008_0010 = param_1;
  iVar1 = FUN_1000_3976(0x23d0,0x1000,0x1008);
  if (iVar1 < 0) {
    UIF_LOG(0x1000,0x2000,0,0);
    uVar2 = 0x1a1;
  }
  else {
    iVar1 = FUN_1000_39e0();
    if ((iVar1 == 0) && (in_DX == 0)) {
      DAT_1008_0014 = 2;
      FUN_1000_2cc2();
      FUN_1000_4048();
      uVar2 = 0;
    }
    else {
      UIF_LOG(0x1000,0x2000,0,0);
      uVar2 = 0x1a6;
    }
  }
  return uVar2;
}


// ---- VBSETVACMODULE @ 1000:2154

void __cdecl16far VBSETVACMODULE(void)

{
  Ordinal_300();
  return;
}


// ---- VAC_CONTROLLER_SHUTDOWN @ 1000:2174

void __cdecl16far VAC_CONTROLLER_SHUTDOWN(void)

{
  FUN_1000_2d60(0x1008);
  return;
}


// ---- FORCE_SAVE_NVRAM @ 1000:218e

void __cdecl16far FORCE_SAVE_NVRAM(void)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = 0x1008;
  while( true ) {
    iVar1 = FUN_1000_2d60(uVar2);
    if (iVar1 != 0x199) break;
    FUN_1000_2834();
    FUN_1000_3036();
  }
  return;
}


// ---- VAC_TIMER_TICK @ 1000:21ba

void __stdcall16far VAC_TIMER_TICK(void)

{
  FUN_1000_2834(0x1008);
  FUN_1000_3036();
  return;
}


// ---- VAC_CONTROLLER_SUSPEND @ 1000:21d8

void __cdecl16far VAC_CONTROLLER_SUSPEND(void)

{
  FUN_1000_3a16(0x1008);
  return;
}


// ---- VAC_CONTROLLER_REMOVE @ 1000:21f4

void __cdecl16far VAC_CONTROLLER_REMOVE(void)

{
  FUN_1000_39ae(0x1008);
  return;
}


// ---- WRITE_NVRAM @ 1000:220e

undefined2 __stdcall16far WRITE_NVRAM(undefined2 param_1,undefined2 param_2)

{
  char cVar1;
  int iVar2;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined2 uVar3;
  int local_626;
  char local_624 [1287];
  undefined1 local_11d [283];
  
  uVar3 = 0x1008;
  iVar2 = _LOPEN(unaff_CS,0,param_1);
  if (iVar2 < 0) {
    uVar3 = 4;
  }
  else {
    cVar1 = FUN_1000_46a8(iVar2,local_624);
    if (cVar1 == '\x01') {
      _LCLOSE(0x1000,iVar2,param_2,uVar3);
      uVar3 = 5;
    }
    else {
      _LCLOSE(0x1000,iVar2,param_2,uVar3);
      if (local_624[0] == '\x16') {
        cVar1 = FUN_1000_4d0e(local_624);
        if (cVar1 == '\x01') {
          uVar3 = 3;
        }
        else {
          for (local_626 = 1; local_626 < 0x40; local_626 = local_626 + 1) {
            local_11d[local_626] = 0;
          }
          FUN_1000_4afe(local_624);
          Ordinal_314(0x1000,local_624);
          do {
            do {
              iVar2 = Ordinal_316(0x1010);
            } while (iVar2 == 0);
            if (iVar2 == 1) {
              return 0;
            }
          } while (iVar2 != 4);
          uVar3 = 1;
        }
      }
      else {
        uVar3 = 2;
      }
    }
  }
  return uVar3;
}


// ---- READ_NVRAM @ 1000:2334

undefined2 __cdecl16far READ_NVRAM(void)

{
  char cVar1;
  int iVar2;
  undefined2 uVar3;
  char local_624 [1570];
  
  uVar3 = 0x1008;
  Ordinal_313();
  while( true ) {
    do {
      iVar2 = Ordinal_316(0x1010,uVar3);
    } while (iVar2 == 2);
    if (iVar2 == 3) break;
    if (iVar2 == 4) {
      return 1;
    }
  }
  Ordinal_315(0x1010,local_624);
  if (local_624[0] != '\x16') {
    return 2;
  }
  cVar1 = FUN_1000_4d0e(local_624);
  if (cVar1 != '\0') {
    return 3;
  }
  return 0;
}


// ---- UPDATE_HPSEM_PANEL @ 1000:23f2

void __stdcall16far UPDATE_HPSEM_PANEL(undefined2 param_1,undefined2 param_2)

{
  FUN_1000_7380(param_1,param_2,0x1008);
  return;
}


// ---- SWITCHVAC_MODE @ 1000:2416

void __stdcall16far SWITCHVAC_MODE(undefined2 param_1)

{
  FUN_1000_5908(param_1,0x1008);
  return;
}


// ---- DOCOMMANDGOTO_HV @ 1000:2434

void __cdecl16far DOCOMMANDGOTO_HV(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  uVar4 = 0x1008;
  uVar3 = 0x108;
  uVar2 = 0x2448;
  iVar1 = M007_GETSTATE();
  if (iVar1 != 0) {
    uVar2 = 0x1010;
    iVar1 = M007_GETSTATE(0x1010,0x108,uVar3,uVar4);
    if (iVar1 != 0xc) {
      uVar2 = 0x108;
      iVar1 = M007_GETSTATE(0x1010,0x108);
      if (iVar1 != 0xd) {
        FUN_1000_5908(0);
        return;
      }
    }
  }
  RESTART_HPAPP(uVar2);
  return;
}


// ---- DOCOMMANDGOTO_VP @ 1000:2488

void __cdecl16far DOCOMMANDGOTO_VP(void)

{
  FUN_1000_5908(1,0x1008);
  return;
}


// ---- SETHP_TARGET @ 1000:24a4

void __stdcall16far SETHP_TARGET(undefined2 param_1,undefined2 param_2)

{
  undefined2 unaff_CS;
  
  DAT_1008_001e = 1;
  M007_PUTVALUE(unaff_CS,param_1,param_2);
  return;
}


// ---- SWITCHIXI_BACKPLATE @ 1000:24cc

void __stdcall16far SWITCHIXI_BACKPLATE(undefined2 param_1)

{
  int iVar1;
  undefined2 unaff_CS;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x10f;
  M007_PUTSTATE(unaff_CS,param_1);
  iVar1 = M007_GETSTATE(0x1010,0x53,uVar2,uVar3);
  if (iVar1 == 2) {
    SWITCHSTAGE_MOTOR(0x1010,1);
  }
  return;
}


// ---- SWITCHBAKEOUT @ 1000:2500

undefined2 __stdcall16far SWITCHBAKEOUT(void)

{
  return 0x1008;
}


// ---- DOCOMMANDSTART_BAKEOUT @ 1000:2514

undefined2 __cdecl16far DOCOMMANDSTART_BAKEOUT(void)

{
  return 0x1008;
}


// ---- DOCOMMANDABORT_BAKEOUT @ 1000:2526

undefined2 __cdecl16far DOCOMMANDABORT_BAKEOUT(void)

{
  return 0x1008;
}


// ---- SETBAKEOUT_HEAT @ 1000:2538

undefined2 __stdcall16far SETBAKEOUT_HEAT(void)

{
  return 0x1008;
}


// ---- SETBAKEOUT_COOL @ 1000:254c

undefined2 __stdcall16far SETBAKEOUT_COOL(void)

{
  return 0x1008;
}


// ---- SWITCHPARTIAL_VENT @ 1000:2560

void __stdcall16far SWITCHPARTIAL_VENT(undefined2 param_1)

{
  undefined2 unaff_CS;
  
  M007_PUTSTATE(unaff_CS,param_1);
  return;
}


// ---- DOCOMMANDPUMP @ 1000:2594

void __cdecl16far DOCOMMANDPUMP(void)

{
  int iVar1;
  
  iVar1 = FUN_1000_56c4(0x1008);
  if (iVar1 != 0) {
    FUN_1000_3a4c(0);
  }
  return;
}


// ---- DOCOMMANDVENT @ 1000:25bc

void __cdecl16far DOCOMMANDVENT(void)

{
  int iVar1;
  
  iVar1 = STAGEINSAFEPOSITION();
  if ((iVar1 != 0) && (iVar1 = FUN_1000_5756(), iVar1 != 0)) {
    FUN_1000_3a4c(1);
  }
  return;
}


// ---- DOCOMMANDVAC_ABORT @ 1000:25f2

void __cdecl16far DOCOMMANDVAC_ABORT(void)

{
  int iVar1;
  
  iVar1 = FUN_1000_583c(0x1008);
  if (iVar1 != 0) {
    FUN_1000_3a4c(2);
  }
  return;
}


// ---- DOCOMMANDSTART_COLUMN_PUMP @ 1000:261a

void __cdecl16far DOCOMMANDSTART_COLUMN_PUMP(void)

{
  FUN_1000_3a94(0,0x1008);
  SWITCHCOLUMN_ISOLATION(1);
  return;
}


// ---- DOCOMMANDSTOP_COLUMN_PUMP @ 1000:263c

void __cdecl16far DOCOMMANDSTOP_COLUMN_PUMP(void)

{
  FUN_1000_3a94(1,0x1008);
  SWITCHCOLUMN_ISOLATION(0);
  return;
}


// ---- SWITCHEDX @ 1000:265e

void __stdcall16far SWITCHEDX(undefined2 param_1)

{
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  
  uVar2 = 0x1008;
  uVar1 = 0x3f;
  M007_PUTSTATE(unaff_CS,param_1);
  FUN_1000_3adc((int)(char)param_1,uVar1,uVar2);
  return;
}


// ---- SWITCHWDX @ 1000:2688

void __stdcall16far SWITCHWDX(int param_1)

{
  int iVar1;
  undefined2 unaff_CS;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x40;
  M007_PUTSTATE(unaff_CS,param_1);
  if (param_1 == 1) {
    iVar1 = FUN_1000_41a0(uVar2,uVar3);
    if (iVar1 == 0) {
      FUN_1000_3b06(1);
    }
    else {
      FUN_1000_3b06(2);
    }
  }
  else {
    FUN_1000_3b06(0);
  }
  return;
}


// ---- SWITCHAIRLOCK @ 1000:26e0

void __stdcall16far SWITCHAIRLOCK(int param_1)

{
  undefined2 unaff_CS;
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x41;
  iVar1 = param_1;
  M007_PUTSTATE(unaff_CS,param_1);
  if (param_1 == 1) {
    iVar1 = 0x135;
    M007_PUTSTATE(0x1010,1);
  }
  FUN_1000_3b30((int)(char)param_1,iVar1,uVar2,uVar3);
  return;
}


// ---- SWITCHVIEWING_WINDOW @ 1000:271e

void __stdcall16far SWITCHVIEWING_WINDOW(undefined2 param_1)

{
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  
  uVar2 = 0x1008;
  uVar1 = 0x42;
  M007_PUTSTATE(unaff_CS,param_1);
  FUN_1000_3b5a((int)(char)param_1,uVar1,uVar2);
  return;
}


// ---- SWITCHCOLUMN_PUMP @ 1000:2748

void __stdcall16far SWITCHCOLUMN_PUMP(undefined2 param_1)

{
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  
  uVar2 = 0x1008;
  uVar1 = 0x46;
  M007_PUTSTATE(unaff_CS,param_1);
  FUN_1000_3b84((int)(char)param_1,uVar1,uVar2);
  return;
}


// ---- SWITCHGATE_VALVE @ 1000:2772

void __stdcall16far SWITCHGATE_VALVE(undefined2 param_1)

{
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  
  uVar2 = 0x1008;
  uVar1 = 0x4f;
  M007_PUTSTATE(unaff_CS,param_1);
  FUN_1000_3bae((int)(char)param_1,uVar1,uVar2);
  return;
}


// ---- SWITCHCOLUMN_ISOLATION @ 1000:279c

void __stdcall16far SWITCHCOLUMN_ISOLATION(undefined2 param_1)

{
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  
  uVar2 = 0x1008;
  uVar1 = 0x50;
  M007_PUTSTATE(unaff_CS,param_1);
  FUN_1000_3bd8((int)(char)param_1,uVar1,uVar2);
  return;
}


// ---- SWITCHWDX_GATE_VALVE_MOTOR @ 1000:27c6

void __stdcall16far SWITCHWDX_GATE_VALVE_MOTOR(int param_1)

{
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  
  uVar2 = 0x1008;
  uVar1 = 0x54;
  M007_PUTSTATE(unaff_CS,param_1);
  if (param_1 == 0) {
    FUN_1000_3b06(1,uVar1,uVar2);
  }
  else {
    FUN_1000_3b06(2,uVar1,uVar2);
  }
  return;
}


// ---- SETEDX_VAC_LIMIT @ 1000:2804

void __stdcall16far SETEDX_VAC_LIMIT(undefined2 param_1,undefined2 param_2)

{
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  
  uVar2 = 0x1008;
  uVar1 = 0x9d;
  M007_PUTVALUE(unaff_CS,param_1,param_2);
  FUN_1000_3c02(param_1,param_2,uVar1,uVar2);
  return;
}


// ---- FUN_1000_2834 @ 1000:2834

void __cdecl16far FUN_1000_2834(void)

{
  int iVar1;
  undefined2 unaff_CS;
  undefined2 uVar2;
  undefined2 unaff_SS;
  undefined1 uVar3;
  undefined2 *puVar4;
  undefined2 uVar5;
  undefined1 local_26 [4];
  undefined1 local_22 [32];
  
  if (DAT_1008_001e != 0) {
    uVar2 = 0x142;
    puVar4 = (undefined2 *)M007_GETVALUE(unaff_CS,local_26);
    FUN_1000_597a(*puVar4,((undefined2 *)puVar4)[1],uVar2);
    DAT_1008_001e = 0;
  }
  FUN_1000_3cc8(0x770,0x1008);
  FUN_1000_59bc(0x770,0x1008);
  if ((DAT_1008_0790 & 1) != 0) {
    FUN_1000_41bc(0x770,0x1008);
  }
  if ((DAT_1008_0790 & 2) != 0) {
    FUN_1000_42e8(0x780,0x1008);
  }
  if ((DAT_1008_0790 & 4) != 0) {
    FUN_1000_4536(0x78c,0x1008);
  }
  if ((DAT_1008_0790 & 8) != 0) {
    FUN_1000_458e(DAT_1008_0795,DAT_1008_0796);
  }
  uVar2 = 0x1000;
  if ((DAT_1008_0790 & 0x20) != 0) {
    uVar2 = 0x1010;
    M007_PUTSTATE(0x1000,DAT_1008_0797);
  }
  if ((DAT_1008_0790 & 0x10) != 0) {
    M007_PUTSTATE(uVar2,DAT_1008_0798);
    uVar2 = 0x1010;
  }
  if (((DAT_1008_0794 & 0x80) != 0) && (iVar1 = M007_GETSTATE(uVar2,0), iVar1 != 0)) {
    if (DAT_1008_0794 == 0xff) {
      UIF_LOG(0x1010,0x1800,0,0);
    }
    else {
      UIF_LOG(0x1010,0x6000,DAT_1008_0794 & 0x7f,0);
    }
  }
  uVar2 = 0x1000;
  FUN_1000_74e4();
  if (DAT_1008_0012 == 1) {
    FUN_1000_3c48(0xf40,0x1008);
    FUN_1000_3c88(0xf52,0x1008);
    uVar2 = 0x1010;
    iVar1 = LSTRCMP(0x1000,0x37e4,0x1000,0xf40);
    if (iVar1 != 0) {
      uVar2 = 0x1010;
      iVar1 = LSTRCMP(0x1010,0x37e4,0x1000,0xf52);
      if (iVar1 != 0) {
        LSTRCPY(0x1010,0x37ec,0x1000,local_22);
        LSTRCAT(0x1010,0xf40,0x1008,local_22);
        UIF_MESSAGE(0x1010,local_22,unaff_SS);
        LSTRCPY(0x1010,0x3800,0x1000,local_22);
        LSTRCAT(0x1010,0xf52,0x1008,local_22);
        uVar2 = 0x1010;
        UIF_MESSAGE(0x1010,local_22,unaff_SS);
        DAT_1008_0012 = 0;
      }
    }
  }
  iVar1 = M007_GETSTATE(uVar2,0x3b);
  if (iVar1 != 1) {
    iVar1 = M007_GETSTATE(0x1010,0x3a);
    if (iVar1 == 3) {
      M007_PUTSTATE(0x1010,10);
      return;
    }
    uVar2 = 0x2c32;
    iVar1 = M007_GETSTATE(0x1010,0xe);
    if (iVar1 != 0) {
      uVar2 = 0x1010;
      iVar1 = M007_GETSTATE(0x1010,0xe);
      if (iVar1 != 9) {
        uVar2 = 0xa9;
        iVar1 = M007_GETSTATE(0x1010,0xa9);
        if (iVar1 != 1) {
          M007_PUTSTATE(0x1010,9);
          return;
        }
      }
    }
    uVar3 = 0;
    uVar5 = 0x12e;
    M007_GETVALUE(0x1010,local_26);
    FUN_1000_0275(uVar5,uVar2);
    if (!(bool)uVar3) {
      uVar2 = 0x12e;
      M007_GETVALUE(0x1000,local_26);
      FUN_1000_0275(uVar2);
    }
    M007_PUTSTATE(0x1000,0);
    return;
  }
  iVar1 = M007_GETSTATE(0x1010,0x46);
  if (iVar1 == 1) {
    iVar1 = M007_GETSTATE(0x1010,0x50);
    if (iVar1 == 1) {
      iVar1 = M007_GETSTATE(0x1010,0x48);
      if (iVar1 != 0) {
        M007_PUTSTATE(0x1010,5);
        return;
      }
      iVar1 = M007_GETSTATE(0x1010,0x49);
      if (iVar1 != 0) {
        M007_PUTSTATE(0x1010,7);
        return;
      }
    }
    else {
      iVar1 = M007_GETSTATE(0x1010,0x48);
      if (iVar1 != 1) {
        M007_PUTSTATE(0x1010,4);
        return;
      }
      iVar1 = M007_GETSTATE(0x1010,0x49);
      if (iVar1 != 1) {
        M007_PUTSTATE(0x1010,6);
        return;
      }
    }
  }
  iVar1 = M007_GETSTATE(0x1010,0x3f);
  if ((iVar1 == 1) && (iVar1 = M007_GETSTATE(0x1010,0x44), iVar1 != 0)) {
    M007_PUTSTATE(0x1010,1);
  }
  else {
    iVar1 = M007_GETSTATE(0x1010,0x40);
    if ((iVar1 == 1) && (iVar1 = M007_GETSTATE(0x1010,0x4f), iVar1 != 0)) {
      M007_PUTSTATE(0x1010,2);
    }
    else {
      iVar1 = M007_GETSTATE(0x1010,0x41);
      if ((iVar1 == 1) && (iVar1 = M007_GETSTATE(0x1010,0x45), iVar1 != 0)) {
        M007_PUTSTATE(0x1010,3);
      }
      else {
        iVar1 = M007_GETSTATE(0x1010,0x53);
        if ((iVar1 == 1) && (iVar1 = M007_GETSTATE(0x1010,0x86), iVar1 == 1)) {
          M007_PUTSTATE(0x1010,8);
        }
      }
    }
  }
  return;
}


// ---- FUN_1000_2cc2 @ 1000:2cc2

void __cdecl16far FUN_1000_2cc2(void)

{
  int iVar1;
  undefined2 uVar2;
  
  if ((DAT_1008_0010 == 3) || (DAT_1008_0010 == 1)) {
    FUN_1000_3f8a(0x1008);
  }
  if (DAT_1008_0010 == 4) {
    do {
      iVar1 = FUN_1000_409a();
      if (iVar1 != 0) goto LAB_1000_2d46;
      uVar2 = 0;
      iVar1 = MESSAGEBOX(0x1000,0x25,0x3812,0x1000,0x3838,0x1000);
    } while (iVar1 != 2);
    MESSAGEBEEP(0x1010,0x30,uVar2);
    MESSAGEBOX(0x1010,0x30,0x3868,0x1000,0x3880,0x1000);
  }
LAB_1000_2d46:
  if (DAT_1008_0010 == 5) {
    FUN_1000_4088();
  }
  DAT_1008_001a = 1;
  return;
}


// ---- FUN_1000_2d60 @ 1000:2d60

undefined2 __cdecl16far FUN_1000_2d60(void)

{
  char cVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 unaff_SS;
  undefined1 local_626 [5];
  undefined1 local_621 [12];
  undefined1 local_615 [22];
  undefined1 local_5ff [936];
  undefined1 local_257 [312];
  undefined1 local_11f [163];
  undefined1 local_7c;
  undefined1 local_7b;
  undefined1 local_7a [5];
  undefined1 local_75 [111];
  char local_6;
  
  iVar2 = FUN_1000_60f8(0x1008);
  if (iVar2 == 0) {
    uVar3 = 0x199;
  }
  else if (DAT_1008_0014 == 0) {
    uVar3 = 0x199;
  }
  else if (DAT_1008_0014 == 1) {
    DAT_1008_0014 = 4;
    if (DAT_1008_001c == 0) {
      UIF_LOG(0x1000,0x2000,0,0);
      uVar3 = 0x1ae;
    }
    else {
      uVar3 = 0;
    }
  }
  else if (DAT_1008_0014 == 2) {
    FUN_1000_3666(local_626,unaff_SS);
    GET_STAGE_CONFIG(0x1000,local_621);
    GET_VACUUM_CONFIG(local_615,unaff_SS);
    GET_EO_CONFIG(0x1000,local_5ff);
    GET_MASTER_CONFIG(0x1010,local_257);
    Ordinal_29(0x1010,&local_7c);
    GET_DISPLAY_CONFIG(0x1010,&local_7b);
    GET_ACQUIRE_CONFIG(0x1010,local_7a);
    GET_EHT_CONFIG(0x1010,local_75);
    FUN_1000_4afe(local_626);
    if ((DAT_1008_0010 == 3) || (DAT_1008_0010 == 2)) {
      FUN_1000_3fb0(local_626);
      DAT_1008_001a = 2;
    }
    if (DAT_1008_0010 == 4) {
      do {
        iVar2 = FUN_1000_4118(local_626);
        if (iVar2 != 0) goto LAB_1000_2e9a;
        uVar3 = 0;
        iVar2 = MESSAGEBOX(0x1000,0x25,0x3812,0x1000,0x38ec,0x1000);
      } while (iVar2 != 2);
      MESSAGEBEEP(0x1010,0x30,uVar3);
      MESSAGEBOX(0x1010,0x30,0x3908,0x1000,0x3922,0x1000);
LAB_1000_2e9a:
      DAT_1008_001a = 2;
    }
    if (DAT_1008_0010 == 5) {
      FUN_1000_40b2(local_626);
      DAT_1008_001a = 2;
    }
    for (local_6 = '\x01'; local_6 < '@'; local_6 = local_6 + '\x01') {
      local_11f[local_6] = 0;
    }
    FUN_1000_4afe(local_626);
    cVar1 = FUN_1000_48b2(local_626);
    DAT_1008_001c = (uint)(cVar1 == '\x01');
    if ((DAT_1008_0010 == 3) || (DAT_1008_0010 == 2)) {
      DAT_1008_0014 = 0;
      uVar3 = 0x199;
    }
    else {
      DAT_1008_0014 = 4;
      if (DAT_1008_001c == 0) {
        UIF_LOG(0x1000,0x2000,0,0);
        uVar3 = 0x1ae;
      }
      else {
        uVar3 = 0;
      }
    }
  }
  else if (DAT_1008_0014 == 3) {
    DAT_1008_0014 = 4;
    if (DAT_1008_001c == 0) {
      UIF_LOG(0x1000,0x2000,0,0);
      uVar3 = 0x1af;
    }
    else {
      UIF_LOG(0x1000,0x2000,0,0);
      uVar3 = 0x1ad;
    }
  }
  else if (DAT_1008_0014 == 4) {
    DAT_1008_0014 = 2;
    uVar3 = 0x199;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}


// ---- FUN_1000_3036 @ 1000:3036

void __cdecl16far FUN_1000_3036(void)

{
  char cVar1;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  int local_62c;
  char local_62a [5];
  undefined1 local_625 [12];
  undefined1 local_619 [22];
  undefined1 local_603 [936];
  undefined1 local_25b [312];
  undefined1 local_123 [163];
  undefined1 local_80;
  undefined1 local_7f;
  undefined1 local_7e [5];
  undefined1 local_79 [111];
  int local_a;
  int local_8;
  int local_6;
  
  if (DAT_1008_001a == 1) {
    if ((DAT_1008_0010 == 1) || (DAT_1008_0010 == 3)) {
      unaff_CS = 0x1000;
      local_8 = FUN_1000_4016(0x1008);
    }
    else if ((DAT_1008_0010 == 4) || ((DAT_1008_0010 == 5 || (DAT_1008_0010 == 6)))) {
      local_8 = 3;
    }
    else {
      local_8 = 4;
    }
    if ((local_8 != 2) && ((local_8 == 3 || (local_8 == 4)))) {
      if (local_8 == 3) {
        local_62c = 0;
        if (((DAT_1008_0010 == 4) || (DAT_1008_0010 == 5)) || (DAT_1008_0010 == 6)) {
          cVar1 = FUN_1000_4130(local_62a);
        }
        else {
          cVar1 = FUN_1000_3fdc(local_62a);
        }
        local_a = (int)cVar1;
        unaff_CS = 0x1000;
        if (local_a == 0) {
          if (local_62a[0] == '\x16') {
            unaff_CS = 0x1000;
            cVar1 = FUN_1000_4d0e(local_62a);
            local_a = (int)cVar1;
          }
          else {
            local_a = 1;
          }
        }
      }
      if ((local_8 == 4) || (local_a == 1)) {
        if ((DAT_1008_0010 == 3) || (DAT_1008_0010 == 1)) {
          local_62c = 1;
          cVar1 = FUN_1000_462c(local_62a);
          local_a = (int)cVar1;
          if (local_a == 0) {
            if (local_62a[0] == '\x16') {
              cVar1 = FUN_1000_4d0e(local_62a);
              local_a = (int)cVar1;
            }
            else {
              local_a = 1;
            }
          }
          unaff_CS = 0x1000;
        }
        else {
          local_a = 1;
        }
      }
      if (local_a == 1) {
        local_62c = 2;
        unaff_CS = 0x1000;
        cVar1 = FUN_1000_4836(local_62a);
        local_a = (int)cVar1;
        if (local_a == 0) {
          if (local_62a[0] == '\x16') {
            unaff_CS = 0x1000;
            cVar1 = FUN_1000_4d0e(local_62a);
            local_a = (int)cVar1;
          }
          else {
            local_a = 1;
          }
        }
      }
      if (local_62c != 0) {
        for (local_6 = 1; local_6 < 0x40; local_6 = local_6 + 1) {
          local_123[local_6] = 0;
        }
      }
      if (local_a == 1) {
        UIF_LOG(unaff_CS,0x1000,0,0);
        RESTORE_MASTER_CONFIG(0x1010,3,local_25b);
      }
      else {
        FUN_1000_3648(local_62a,unaff_SS);
        RESTORE_STAGE_CONFIG(0x1000,local_625);
        RESTORE_VACUUM_CONFIG(local_619,unaff_SS);
        RESTORE_EO_CONFIG(0x1000,local_603);
        Ordinal_28(0x1010,&local_80);
        RESTORE_DISPLAY_CONFIG(0x1010,&local_7f);
        RESTORE_ACQUIRE_CONFIG(0x1010,local_7e);
        RESTORE_EHT_CONFIG(0x1010,local_79);
        RESTORE_MASTER_CONFIG(0x1010,local_62c,local_25b);
        if (local_62c == 1) {
          UIF_LOG(0x1010,0x1000,0,0);
        }
        else if (local_62c == 2) {
          UIF_LOG(0x1010,0x1000,0,0);
        }
      }
      DAT_1008_001a = 0;
    }
  }
  if (DAT_1008_001a == 2) {
    if ((DAT_1008_0010 == 2) || (DAT_1008_0010 == 3)) {
      local_8 = FUN_1000_4016();
    }
    else if ((DAT_1008_0010 == 4) || ((DAT_1008_0010 == 5 || (DAT_1008_0010 == 6)))) {
      local_8 = 1;
    }
    else {
      local_8 = 4;
    }
    if (local_8 != 0) {
      if (local_8 == 1) {
        DAT_1008_0014 = 1;
        DAT_1008_001a = 0;
      }
      else if (local_8 == 4) {
        DAT_1008_0014 = 3;
        DAT_1008_001a = 0;
      }
    }
  }
  return;
}


// ---- RESTORE_VACUUM_CONFIG @ 1000:33d4

void __stdcall16far RESTORE_VACUUM_CONFIG(undefined2 *param_1)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  puVar1 = (undefined2 *)param_1;
  SWITCHEDX((int)*(char *)(puVar1 + 2));
  M007_PUTSTATE(0x1000,(int)*(char *)(puVar1 + 5));
  SWITCHWDX((int)*(char *)((int)puVar1 + 5));
  SWITCHAIRLOCK((int)*(char *)(puVar1 + 3));
  SWITCHVIEWING_WINDOW((int)*(char *)((int)puVar1 + 7));
  SWITCHCOLUMN_PUMP((int)*(char *)(puVar1 + 4));
  SWITCHCOLUMN_ISOLATION((int)*(char *)((int)puVar1 + 9));
  SETEDX_VAC_LIMIT(*param_1,puVar1[1]);
  SWITCHIXI_BACKPLATE((int)*(char *)((int)puVar1 + 0xb));
  SWITCHPARTIAL_VENT((int)*(char *)(puVar1 + 6));
  SWITCHBAKEOUT((int)*(char *)((int)puVar1 + 0xd));
  DAT_1008_07b6 = *(undefined4 *)(puVar1 + 7);
  DAT_1008_07ba = *(undefined4 *)(puVar1 + 9);
  M007_PUTSTATE(0x1000,0);
  return;
}


// ---- GET_VACUUM_CONFIG @ 1000:34ac

void __stdcall16far GET_VACUUM_CONFIG(undefined4 *param_1)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  undefined2 uVar12;
  undefined1 local_4c [4];
  undefined1 local_48 [64];
  undefined4 local_8;
  
  uVar12 = 0x1008;
  uVar11 = 0x142;
  puVar3 = (undefined4 *)M007_GETVALUE(unaff_CS,local_4c);
  local_8 = *puVar3;
  uVar12 = FUN_1000_029a(uVar11,uVar12);
  _WSPRINTF(0x1000,local_48);
  uVar10 = 0x1000;
  uVar9 = 0x3972;
  uVar8 = 0x1000;
  uVar7 = 0x395e;
  puVar5 = local_48;
  uVar6 = 0x1010;
  uVar11 = unaff_SS;
  uVar4 = GETLEOINIFILEPATH(0x1010,puVar5);
  WRITEPRIVATEPROFILESTRING(0x1010,uVar4,uVar6,puVar5,uVar11,uVar7,uVar8);
  uVar11 = 0x1b8;
  puVar3 = (undefined4 *)M007_GETVALUE(0x1010,local_4c);
  local_8 = *puVar3;
  uVar11 = FUN_1000_029a(uVar11,uVar9,uVar10,uVar12);
  _WSPRINTF(0x1000,local_48);
  uVar9 = 0x1000;
  uVar8 = 0x3972;
  uVar7 = 0x1000;
  uVar6 = 0x3968;
  puVar5 = local_48;
  uVar12 = 0x1010;
  uVar4 = GETLEOINIFILEPATH(0x1010,puVar5);
  WRITEPRIVATEPROFILESTRING(0x1010,uVar4,uVar12,puVar5,unaff_SS,uVar6,uVar7);
  uVar1 = M007_GETSTATE(0x1010,0x3f,uVar8,uVar9,uVar11);
  uVar11 = (undefined2)((ulong)param_1 >> 0x10);
  puVar2 = (undefined4 *)param_1;
  *(undefined1 *)(puVar2 + 1) = uVar1;
  uVar1 = M007_GETSTATE(0x1010,0x40);
  *(undefined1 *)((int)puVar2 + 5) = uVar1;
  uVar1 = M007_GETSTATE(0x1010,0x41);
  *(undefined1 *)((int)puVar2 + 6) = uVar1;
  uVar1 = M007_GETSTATE(0x1010,0x42);
  *(undefined1 *)((int)puVar2 + 7) = uVar1;
  uVar1 = M007_GETSTATE(0x1010,0x46);
  *(undefined1 *)(puVar2 + 2) = uVar1;
  uVar1 = M007_GETSTATE(0x1010,0x50);
  *(undefined1 *)((int)puVar2 + 9) = uVar1;
  uVar1 = M007_GETSTATE(0x1010,0x54);
  *(undefined1 *)((int)puVar2 + 10) = uVar1;
  uVar12 = 0x9d;
  puVar3 = (undefined4 *)M007_GETVALUE(0x1010,local_4c);
  *param_1 = *puVar3;
  uVar1 = M007_GETSTATE(0x1010,0x10f,uVar12);
  *(undefined1 *)((int)puVar2 + 0xb) = uVar1;
  uVar1 = M007_GETSTATE(0x1010,0x121);
  *(undefined1 *)(puVar2 + 3) = uVar1;
  uVar1 = M007_GETSTATE(0x1010,0x11e);
  *(undefined1 *)((int)puVar2 + 0xd) = uVar1;
  *(undefined4 *)((int)puVar2 + 0xe) = DAT_1008_07b6;
  *(undefined4 *)((int)puVar2 + 0x12) = DAT_1008_07ba;
  return;
}


// ---- FUN_1000_3648 @ 1000:3648

void __stdcall16far FUN_1000_3648(undefined4 param_1)

{
  DAT_1008_0018 = *(undefined2 *)((int)param_1 + 1);
  return;
}


// ---- FUN_1000_3666 @ 1000:3666

void __stdcall16far FUN_1000_3666(undefined1 *param_1)

{
  undefined2 uVar1;
  
  *param_1 = 0x16;
  DAT_1008_0018 = DAT_1008_0018 + 1;
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  *(int *)((undefined1 *)param_1 + 1) = DAT_1008_0018;
  *(undefined2 *)((undefined1 *)param_1 + 3) = 0;
  return;
}


// ---- DOCOMMANDGETCOMMSPSU @ 1000:3698

void __cdecl16far DOCOMMANDGETCOMMSPSU(void)

{
  FUN_1000_4048(0x1008);
  return;
}


// ---- DOCOMMANDOPEN_COL_CHAMBER_VALVE @ 1000:36ae

undefined2 __cdecl16far DOCOMMANDOPEN_COL_CHAMBER_VALVE(void)

{
  return 0x1008;
}


// ---- DOCOMMANDCLOSE_COL_CHAMBER_VALVE @ 1000:36c0

undefined2 __cdecl16far DOCOMMANDCLOSE_COL_CHAMBER_VALVE(void)

{
  return 0x1008;
}


// ---- SWITCHSCM1500 @ 1000:36d2

void __stdcall16far SWITCHSCM1500(undefined2 param_1)

{
  undefined2 unaff_CS;
  
  M007_PUTSTATE(unaff_CS,param_1);
  return;
}


// ---- DOCOMMANDPUMP_AIRLOCK @ 1000:36f0

undefined2 __cdecl16far DOCOMMANDPUMP_AIRLOCK(void)

{
  return 0x1008;
}


// ---- DOCOMMANDVENT_AIRLOCK @ 1000:3702

undefined2 __cdecl16far DOCOMMANDVENT_AIRLOCK(void)

{
  return 0x1008;
}


// ---- DOCOMMANDHOLD_AIRLOCK_VACUUM @ 1000:3714

undefined2 __cdecl16far DOCOMMANDHOLD_AIRLOCK_VACUUM(void)

{
  return 0x1008;
}


// ---- SWITCHAIRLOCK_CONTROL @ 1000:3726

undefined2 __stdcall16far SWITCHAIRLOCK_CONTROL(void)

{
  return 0x1008;
}


// ---- SETVP_LIMIT @ 1000:373a

void __stdcall16far SETVP_LIMIT(undefined2 param_1,undefined2 param_2)

{
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  
  uVar2 = 0x1008;
  uVar1 = 0x1b8;
  M007_PUTVALUE(unaff_CS,param_1,param_2);
  uVar1 = M007_GETSTATE(0x1010,0xb,uVar1,uVar2);
  CHANGEFILAMENTTYPE(uVar1);
  return;
}


// ---- CHANGEFILAMENTTYPE @ 1000:3768

undefined2 __stdcall16far CHANGEFILAMENTTYPE(void)

{
  return 0x1008;
}


// ---- Z130_VACCANSEND @ 1000:377c

undefined2 __stdcall16far Z130_VACCANSEND(void)

{
  return 0;
}


// ---- Z130_VACCANGETBUFFER @ 1000:3796

undefined2 __stdcall16far Z130_VACCANGETBUFFER(void)

{
  return 0;
}


// ---- Z130_VACCANGETBUFFERSTATUS @ 1000:37b0

undefined2 __stdcall16far Z130_VACCANGETBUFFERSTATUS(void)

{
  return 0;
}


// ---- Z130_VACCANCONFIGBUFFER @ 1000:37ca

undefined2 __stdcall16far Z130_VACCANCONFIGBUFFER(void)

{
  return 0;
}


// ---- FUN_1000_3976 @ 1000:3976

undefined2 __cdecl16far FUN_1000_3976(undefined2 param_1,undefined2 param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    uVar2 = Ordinal_300(0x1010,param_1,param_2,uVar2,uVar3);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


// ---- FUN_1000_39ae @ 1000:39ae

undefined2 __cdecl16far FUN_1000_39ae(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    uVar2 = Ordinal_331(0x1010,uVar2,uVar3);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


// ---- FUN_1000_39e0 @ 1000:39e0

undefined2 __cdecl16far FUN_1000_39e0(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    uVar2 = Ordinal_301(0x1010,uVar2,uVar3);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


// ---- FUN_1000_3a16 @ 1000:3a16

undefined2 __cdecl16far FUN_1000_3a16(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    uVar2 = Ordinal_330(0x1010,uVar2,uVar3);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


// ---- FUN_1000_3a4c @ 1000:3a4c

void __cdecl16far FUN_1000_3a4c(int param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_303(0x1010,param_1,uVar2,uVar3);
  }
  else {
    if (param_1 == 0) {
      DAT_1008_0020 = 0;
    }
    if (param_1 == 1) {
      DAT_1008_0020 = 1;
    }
  }
  return;
}


// ---- FUN_1000_3a94 @ 1000:3a94

void __cdecl16far FUN_1000_3a94(int param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_304(0x1010,param_1,uVar2,uVar3);
  }
  else {
    if (param_1 == 0) {
      DAT_1008_0026 = 0;
    }
    if (param_1 == 1) {
      DAT_1008_0026 = 1;
    }
  }
  return;
}


// ---- FUN_1000_3adc @ 1000:3adc

void __cdecl16far FUN_1000_3adc(undefined2 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_305(0x1010,param_1,uVar2,uVar3);
  }
  return;
}


// ---- FUN_1000_3b06 @ 1000:3b06

void __cdecl16far FUN_1000_3b06(undefined2 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_306(0x1010,param_1,uVar2,uVar3);
  }
  return;
}


// ---- FUN_1000_3b30 @ 1000:3b30

void __cdecl16far FUN_1000_3b30(undefined2 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_307(0x1010,param_1,uVar2,uVar3);
  }
  return;
}


// ---- FUN_1000_3b5a @ 1000:3b5a

void __cdecl16far FUN_1000_3b5a(undefined2 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_308(0x1010,param_1,uVar2,uVar3);
  }
  return;
}


// ---- FUN_1000_3b84 @ 1000:3b84

void __cdecl16far FUN_1000_3b84(undefined2 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_309(0x1010,param_1,uVar2,uVar3);
  }
  return;
}


// ---- FUN_1000_3bae @ 1000:3bae

void __cdecl16far FUN_1000_3bae(undefined2 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_310(0x1010,param_1,uVar2,uVar3);
  }
  return;
}


// ---- FUN_1000_3bd8 @ 1000:3bd8

void __cdecl16far FUN_1000_3bd8(undefined2 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_311(0x1010,param_1,uVar2,uVar3);
  }
  return;
}


// ---- FUN_1000_3c02 @ 1000:3c02

void __cdecl16far FUN_1000_3c02(float param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_312(0x1010,(double)param_1,uVar2,uVar3);
  }
  else {
    DAT_1008_002e = param_1;
  }
  return;
}


// ---- FUN_1000_3c48 @ 1000:3c48

void __cdecl16far FUN_1000_3c48(undefined2 param_1,undefined2 param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_323(0x1010,param_1,param_2,uVar2,uVar3);
  }
  else {
    LSTRCPY(0x1010,0x418e,0x1000,param_1);
  }
  return;
}


// ---- FUN_1000_3c88 @ 1000:3c88

void __cdecl16far FUN_1000_3c88(undefined2 param_1,undefined2 param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_324(0x1010,param_1,param_2,uVar2,uVar3);
  }
  else {
    LSTRCPY(0x1010,0x418e,0x1000,param_1);
  }
  return;
}


// ---- FUN_1000_3cc8 @ 1000:3cc8

void __cdecl16far FUN_1000_3cc8(float *param_1)

{
  int iVar1;
  undefined1 uVar2;
  bool bVar3;
  undefined1 uVar4;
  bool bVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  
  uVar7 = 0x1008;
  uVar6 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_302(0x1010,(float *)param_1,param_1._2_2_,uVar6,uVar7);
  }
  else {
    uVar2 = false;
    uVar4 = DAT_1008_0020 == '\0';
    if ((bool)uVar4) {
      FUN_1000_0275();
      if ((bool)uVar2) {
        *(undefined1 *)((float *)param_1 + 2) = 1;
        FUN_1000_0275();
        if (!(bool)uVar2 && !(bool)uVar4) {
          DAT_1008_0022 = DAT_1008_0022 / DAT_1008_03f0;
        }
      }
      else {
        *(undefined1 *)((float *)param_1 + 2) = 2;
        DAT_1008_0022 = DAT_1008_0022 / DAT_1008_03f0;
      }
    }
    else {
      FUN_1000_0275();
      if ((bool)uVar2) {
        DAT_1008_0022 = DAT_1008_03f0 * DAT_1008_0022;
      }
      else {
        DAT_1008_0022 = DAT_1008_03f4;
      }
      *(undefined1 *)((float *)param_1 + 2) = 0;
    }
    *param_1 = DAT_1008_0022;
    FUN_1000_0275();
    if ((bool)uVar2) {
      *(undefined1 *)((int)(float *)param_1 + 0x11) = 1;
    }
    else {
      *(undefined1 *)((int)(float *)param_1 + 0x11) = 0;
    }
    bVar3 = false;
    bVar5 = DAT_1008_0026 == '\0';
    if (bVar5) {
      FUN_1000_0275();
      if (bVar3 || bVar5) {
        bVar3 = false;
        if (DAT_1008_002c == '\0') {
          DAT_1008_0028 = DAT_1008_03f8;
          DAT_1008_002c = '\x01';
        }
        else {
          FUN_1000_0275();
          if (bVar3) {
            *(undefined1 *)((int)(float *)param_1 + 9) = 1;
          }
          else {
            DAT_1008_0028 = DAT_1008_0028 / DAT_1008_03f0;
            *(undefined1 *)((int)(float *)param_1 + 9) = 2;
          }
        }
      }
      else {
        *(undefined1 *)((int)(float *)param_1 + 9) = 4;
      }
    }
    else {
      *(undefined1 *)((int)(float *)param_1 + 9) = 0;
      DAT_1008_0028 = DAT_1008_03f4;
      DAT_1008_002c = '\0';
    }
    ((float *)param_1)[1] = DAT_1008_0028;
    *(undefined1 *)((int)(float *)param_1 + 10) = 1;
    *(undefined1 *)((int)(float *)param_1 + 0xb) = 1;
    *(undefined1 *)((float *)param_1 + 3) = 0;
    *(undefined1 *)((int)(float *)param_1 + 0xd) = 0;
    *(undefined1 *)((int)(float *)param_1 + 0xe) = 0;
    *(undefined1 *)((float *)param_1 + 4) = 0;
    *(undefined1 *)((int)(float *)param_1 + 0x12) = 0;
    *(undefined1 *)((int)(float *)param_1 + 0x13) = 0;
    *(undefined1 *)((float *)param_1 + 5) = 0;
    *(undefined1 *)((int)(float *)param_1 + 0x15) = 0;
    *(undefined1 *)((int)(float *)param_1 + 0x16) = 0;
    *(undefined1 *)((int)(float *)param_1 + 0x17) = 0;
    *(undefined1 *)((float *)param_1 + 6) = 0;
    *(undefined1 *)((int)(float *)param_1 + 0x19) = 0;
    *(undefined1 *)((int)(float *)param_1 + 0x1a) = 0;
    *(undefined1 *)((float *)param_1 + 7) = 0;
    *(undefined1 *)((int)(float *)param_1 + 0x1d) = 0;
    *(undefined1 *)((int)(float *)param_1 + 0x1e) = 0;
    *(undefined1 *)((int)(float *)param_1 + 0x1f) = 0;
    *(undefined2 *)((float *)param_1 + 8) = 7;
    *(undefined2 *)((int)(float *)param_1 + 0x22) = 0;
    *(uint *)((float *)param_1 + 8) = *(uint *)((float *)param_1 + 8) | DAT_1008_0036;
    *(uint *)((int)(float *)param_1 + 0x22) =
         *(uint *)((int)(float *)param_1 + 0x22) | DAT_1008_0038;
    *(undefined1 *)((int)(float *)param_1 + 0x25) = DAT_1008_003a;
    *(undefined1 *)((int)(float *)param_1 + 0x26) = DAT_1008_003b;
    DAT_1008_0036 = 0;
    DAT_1008_0038 = 0;
  }
  return;
}


// ---- FE_READ_STATUS_TIGA @ 1000:3f76

undefined2 __stdcall16far FE_READ_STATUS_TIGA(void)

{
  return 0x1008;
}


// ---- FUN_1000_3f8a @ 1000:3f8a

void __cdecl16far FUN_1000_3f8a(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_313(0x1010,uVar2,uVar3);
  }
  return;
}


// ---- FUN_1000_3fb0 @ 1000:3fb0

void __cdecl16far FUN_1000_3fb0(undefined2 param_1,undefined2 param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_314(0x1010,param_1,param_2,uVar2,uVar3);
  }
  return;
}


// ---- FUN_1000_3fdc @ 1000:3fdc

bool __cdecl16far FUN_1000_3fdc(undefined2 param_1,undefined2 param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_315(0x1010,param_1,param_2,uVar2,uVar3);
  }
  return iVar1 != 1;
}


// ---- FUN_1000_4016 @ 1000:4016

undefined2 __cdecl16far FUN_1000_4016(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    uVar2 = Ordinal_316(0x1010,uVar2,uVar3);
  }
  else {
    uVar2 = 4;
  }
  return uVar2;
}


// ---- FUN_1000_4048 @ 1000:4048

void __cdecl16far FUN_1000_4048(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_328(0x1010,uVar2,uVar3);
  }
  else {
    DAT_1008_0036 = 8;
    DAT_1008_0038 = 0;
    DAT_1008_003a = 0;
    DAT_1008_003b = 0;
  }
  return;
}


// ---- FUN_1000_4088 @ 1000:4088

undefined2 __cdecl16far FUN_1000_4088(void)

{
  return 0x1008;
}


// ---- FUN_1000_409a @ 1000:409a

undefined2 __cdecl16far FUN_1000_409a(void)

{
  return 0;
}


// ---- FUN_1000_40b2 @ 1000:40b2

void __cdecl16far FUN_1000_40b2(int param_1,undefined2 param_2)

{
  int iVar1;
  undefined2 unaff_CS;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  
  uVar5 = 0x1008;
  uVar4 = 0x1000;
  iVar1 = _LCREAT(unaff_CS,0,0x4190);
  if (-1 < iVar1) {
    iVar3 = iVar1;
    _LWRITE(0x1010,2,param_1 + 0x547,param_2);
    iVar2 = iVar1;
    _LWRITE(0x1010,0x3f,param_1 + 0x508,param_2);
    _LCLOSE(0x1010,iVar1,iVar2,iVar3,uVar4,uVar5);
  }
  return;
}


// ---- FUN_1000_4118 @ 1000:4118

undefined2 __cdecl16far FUN_1000_4118(void)

{
  return 0;
}


// ---- FUN_1000_4130 @ 1000:4130

undefined2 __cdecl16far FUN_1000_4130(int param_1,undefined2 param_2)

{
  undefined2 local_6;
  
  FUN_1000_462c(param_1,param_2,0x1008);
  for (local_6 = 1; local_6 < 0x40; local_6 = local_6 + 1) {
    *(undefined1 *)(param_1 + 0x507 + local_6) = 0;
  }
  FUN_1000_4afe(param_1,param_2);
  return 0;
}


// ---- FUN_1000_41a0 @ 1000:41a0

void __cdecl16far FUN_1000_41a0(void)

{
  M007_GETSTATE();
  return;
}


// ---- FUN_1000_41bc @ 1000:41bc

void __cdecl16far FUN_1000_41bc(undefined2 *param_1)

{
  uint uVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  
  uVar8 = 0x1008;
  uVar7 = 0x3a;
  uVar1 = M007_GETSTATE();
  uVar6 = 0x3a;
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  puVar3 = (undefined2 *)param_1;
  M007_PUTSTATE(0x1010,*(undefined1 *)(puVar3 + 4));
  if (uVar1 != *(byte *)(puVar3 + 4)) {
    CHANGEINVACSTATUS(0x1010,uVar6,uVar7,uVar8);
  }
  M007_PUTVALUE(0x1010,*param_1,puVar3[1]);
  M007_PUTSTATE(0x1010,*(undefined1 *)((int)puVar3 + 9));
  M007_PUTVALUE(0x1010,puVar3[2],puVar3[3]);
  M007_PUTSTATE(0x1010,*(undefined1 *)(puVar3 + 5));
  uVar5 = 0x49;
  M007_PUTSTATE(0x1010,*(undefined1 *)((int)puVar3 + 0xb));
  uVar8 = 0x44;
  M007_PUTSTATE(0x1010,*(undefined1 *)(puVar3 + 6));
  uVar7 = 0x4f;
  M007_PUTSTATE(0x1010,*(undefined1 *)((int)puVar3 + 0xd));
  uVar6 = 0x45;
  M007_PUTSTATE(0x1010,*(undefined1 *)(puVar3 + 7));
  iVar2 = M007_GETSTATE(0x1010,0x46,uVar6,uVar7,uVar8,uVar5);
  if (iVar2 == 1) {
    if ((*(char *)(puVar3 + 5) == '\0') && (*(char *)((int)puVar3 + 0xb) == '\0')) {
      M007_PUTSTATE(0x1010,1);
    }
    else {
      M007_PUTSTATE(0x1010,0);
    }
  }
  else {
    M007_PUTSTATE(0x1010,0);
  }
  return;
}


// ---- FUN_1000_42e8 @ 1000:42e8

void __cdecl16far FUN_1000_42e8(undefined1 *param_1)

{
  int iVar1;
  undefined1 *puVar2;
  undefined2 uVar3;
  undefined2 unaff_CS;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  
  M007_PUTSTATE(unaff_CS,*param_1);
  uVar8 = 0x3c;
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  puVar2 = (undefined1 *)param_1;
  M007_PUTSTATE(0x1010,puVar2[1]);
  uVar7 = 0x43;
  M007_PUTSTATE(0x1010,puVar2[4]);
  uVar6 = 0x4a;
  M007_PUTSTATE(0x1010,puVar2[5]);
  uVar5 = 0x86;
  M007_PUTSTATE(0x1010,puVar2[0xb]);
  if (puVar2[2] == '\x01') {
    uVar4 = 0x3d;
    iVar1 = M007_GETSTATE(0x1010,0x3d,uVar5,uVar6,uVar7,uVar8);
    if (iVar1 == 0) {
      M007_PUTSTATE(0x1010,1);
      UIF_LOG(0x1010,0x1000,0,0);
    }
  }
  else {
    uVar4 = 0x3d;
    M007_PUTSTATE(0x1010,0);
  }
  if (puVar2[3] == '\x01') {
    uVar5 = 0x3e;
    iVar1 = M007_GETSTATE(0x1010,0x3e,uVar4);
    if (iVar1 == 0) {
      M007_PUTSTATE(0x1010,1);
      UIF_LOG(0x1010,0x1000,0,0);
    }
  }
  else {
    uVar5 = 0x3e;
    M007_PUTSTATE(0x1010,0);
  }
  if (puVar2[6] == '\x01') {
    uVar6 = 0x4b;
    iVar1 = M007_GETSTATE(0x1010,0x4b,uVar5);
    if (iVar1 == 0) {
      M007_PUTSTATE(0x1010,1);
      UIF_LOG(0x1010,0x1800,0,0);
    }
  }
  else {
    uVar6 = 0x4b;
    M007_PUTSTATE(0x1010,0);
  }
  if (puVar2[7] == '\x01') {
    uVar5 = 0x4c;
    iVar1 = M007_GETSTATE(0x1010,0x4c,uVar6);
    if (iVar1 == 0) {
      M007_PUTSTATE(0x1010,1);
      UIF_LOG(0x1010,0x1800,0,0);
    }
  }
  else {
    uVar5 = 0x4c;
    M007_PUTSTATE(0x1010,0);
  }
  if (puVar2[8] == '\x01') {
    uVar6 = 0x4d;
    iVar1 = M007_GETSTATE(0x1010,0x4d,uVar5);
    if (iVar1 == 0) {
      M007_PUTSTATE(0x1010,1);
      UIF_LOG(0x1010,0x1800,0,0);
    }
  }
  else {
    uVar6 = 0x4d;
    M007_PUTSTATE(0x1010,0);
  }
  if (puVar2[9] == '\x01') {
    uVar5 = 0x51;
    iVar1 = M007_GETSTATE(0x1010,0x51,uVar6);
    if (iVar1 == 0) {
      M007_PUTSTATE(0x1010,1);
      UIF_LOG(0x1010,0x1800,0,0);
    }
  }
  else {
    uVar5 = 0x51;
    M007_PUTSTATE(0x1010,0);
  }
  if (puVar2[10] == '\x01') {
    iVar1 = M007_GETSTATE(0x1010,0x4e,uVar5);
    if (iVar1 == 0) {
      M007_PUTSTATE(0x1010,1);
      UIF_LOG(0x1010,0x1800,0,0);
    }
  }
  else {
    M007_PUTSTATE(0x1010,0);
  }
  return;
}


// ---- FUN_1000_4536 @ 1000:4536

void __cdecl16far FUN_1000_4536(undefined1 *param_1)

{
  undefined1 *puVar1;
  undefined2 uVar2;
  undefined2 unaff_CS;
  
  M007_PUTSTATE(unaff_CS,*param_1);
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  puVar1 = (undefined1 *)param_1;
  M007_PUTSTATE(0x1010,puVar1[1]);
  M007_PUTSTATE(0x1010,puVar1[2]);
  M007_PUTSTATE(0x1010,puVar1[3]);
  return;
}


// ---- FUN_1000_458e @ 1000:458e

void __cdecl16far FUN_1000_458e(char param_1,char param_2)

{
  undefined2 unaff_CS;
  
  if (param_1 == '\x01') {
    UIF_LOG(unaff_CS,0x1000,0,0);
    unaff_CS = 0x1010;
  }
  else if (param_1 == '\x02') {
    UIF_LOG(unaff_CS,0x1000,0,0);
    unaff_CS = 0x1010;
  }
  if (param_2 == '\x01') {
    UIF_LOG(unaff_CS,0x1000,0,0);
  }
  else if (param_2 == '\x02') {
    UIF_LOG(unaff_CS,0x1000,0,0);
  }
  return;
}


// ---- FUN_1000_462c @ 1000:462c

undefined1 __cdecl16far FUN_1000_462c(undefined2 param_1,undefined2 param_2)

{
  undefined2 unaff_CS;
  undefined4 uVar1;
  undefined1 local_108;
  undefined1 local_106 [256];
  int local_6;
  
  local_108 = 1;
  uVar1 = GETLEOPATH();
  LSTRCPY(0x1010,uVar1,unaff_CS);
  LSTRCAT(0x1010,0x4f38,0x1000,local_106);
  local_6 = _LOPEN(0x1010,0,local_106);
  if (-1 < local_6) {
    local_108 = FUN_1000_46a8(local_6,param_1,param_2);
    _LCLOSE(0x1000,local_6);
  }
  return local_108;
}


// ---- FUN_1000_46a8 @ 1000:46a8

undefined2 __cdecl16far FUN_1000_46a8(undefined2 param_1,int param_2,undefined2 param_3)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_CS;
  
  iVar1 = _LREAD(unaff_CS,5,param_2,param_3);
  if (iVar1 == 5) {
    iVar1 = _LREAD(0x1010,0xc,param_2 + 5,param_3);
    if (iVar1 == 0xc) {
      iVar1 = _LREAD(0x1010,0x16,param_2 + 0x11,param_3);
      if (iVar1 == 0x16) {
        iVar1 = _LREAD(0x1010,0x3a8,param_2 + 0x27,param_3);
        if (iVar1 == 0x3a8) {
          iVar1 = _LREAD(0x1010,0x1db,param_2 + 0x3cf,param_3);
          if (iVar1 == 0x1db) {
            iVar1 = _LREAD(0x1010,1,param_2 + 0x5aa,param_3);
            if (iVar1 == 1) {
              iVar1 = _LREAD(0x1010,1,param_2 + 0x5ab,param_3);
              if (iVar1 == 1) {
                iVar1 = _LREAD(0x1010,5,param_2 + 0x5ac,param_3);
                if (iVar1 == 5) {
                  iVar1 = _LREAD(0x1010,0x6e,param_2 + 0x5b1,param_3);
                  if (iVar1 == 0x6e) {
                    uVar2 = 0;
                  }
                  else {
                    uVar2 = 1;
                  }
                }
                else {
                  uVar2 = 1;
                }
              }
              else {
                uVar2 = 1;
              }
            }
            else {
              uVar2 = 1;
            }
          }
          else {
            uVar2 = 1;
          }
        }
        else {
          uVar2 = 1;
        }
      }
      else {
        uVar2 = 1;
      }
    }
    else {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}


// ---- FUN_1000_4836 @ 1000:4836

undefined1 __cdecl16far FUN_1000_4836(undefined2 param_1,undefined2 param_2)

{
  undefined2 unaff_CS;
  undefined4 uVar1;
  undefined1 local_108;
  undefined1 local_106 [256];
  int local_6;
  
  local_108 = 1;
  uVar1 = GETLEOPATH();
  LSTRCPY(0x1010,uVar1,unaff_CS);
  LSTRCAT(0x1010,0x4f42,0x1000,local_106);
  local_6 = _LOPEN(0x1010,0,local_106);
  if (-1 < local_6) {
    local_108 = FUN_1000_46a8(local_6,param_1,param_2);
    _LCLOSE(0x1000,local_6);
  }
  return local_108;
}


// ---- FUN_1000_48b2 @ 1000:48b2

undefined2 __cdecl16far FUN_1000_48b2(int param_1,undefined2 param_2)

{
  int iVar1;
  undefined2 uVar2;
  int iVar3;
  undefined2 unaff_CS;
  undefined4 uVar4;
  undefined1 local_106 [256];
  int local_6;
  
  uVar4 = GETLEOPATH();
  LSTRCPY(0x1010,uVar4,unaff_CS);
  LSTRCAT(0x1010,0x4f38,0x1000,local_106);
  iVar1 = _LCREAT(0x1010,0,local_106);
  local_6 = iVar1;
  if (iVar1 < 0) {
    MESSAGEBOX(0x1010,0x30,0x4f68,0x1000,0x4f4e,0x1000);
    uVar2 = 0;
  }
  else {
    iVar3 = _LWRITE(0x1010,5,param_1,param_2);
    if (iVar3 == 5) {
      iVar1 = local_6;
      iVar3 = _LWRITE(0x1010,0xc,param_1 + 5,param_2);
      if (iVar3 == 0xc) {
        iVar1 = local_6;
        iVar3 = _LWRITE(0x1010,0x16,param_1 + 0x11,param_2);
        if (iVar3 == 0x16) {
          iVar1 = local_6;
          iVar3 = _LWRITE(0x1010,0x3a8,param_1 + 0x27,param_2);
          if (iVar3 == 0x3a8) {
            iVar1 = local_6;
            iVar3 = _LWRITE(0x1010,0x1db,param_1 + 0x3cf,param_2);
            if (iVar3 == 0x1db) {
              iVar1 = local_6;
              iVar3 = _LWRITE(0x1010,1,param_1 + 0x5aa,param_2);
              if (iVar3 == 1) {
                iVar1 = local_6;
                iVar3 = _LWRITE(0x1010,1,param_1 + 0x5ab,param_2);
                if (iVar3 == 1) {
                  iVar1 = local_6;
                  iVar3 = _LWRITE(0x1010,5,param_1 + 0x5ac,param_2);
                  if (iVar3 == 5) {
                    iVar1 = local_6;
                    iVar3 = _LWRITE(0x1010,0x6e,param_1 + 0x5b1,param_2);
                    if (iVar3 == 0x6e) {
                      _LCLOSE(0x1010,local_6,iVar1);
                      uVar2 = 1;
                    }
                    else {
                      _LCLOSE(0x1010,local_6,iVar1);
                      uVar2 = 0;
                    }
                  }
                  else {
                    _LCLOSE(0x1010,local_6,iVar1);
                    uVar2 = 0;
                  }
                }
                else {
                  _LCLOSE(0x1010,local_6,iVar1);
                  uVar2 = 0;
                }
              }
              else {
                _LCLOSE(0x1010,local_6,iVar1);
                uVar2 = 0;
              }
            }
            else {
              _LCLOSE(0x1010,local_6,iVar1);
              uVar2 = 0;
            }
          }
          else {
            _LCLOSE(0x1010,local_6,iVar1);
            uVar2 = 0;
          }
        }
        else {
          _LCLOSE(0x1010,local_6,iVar1);
          uVar2 = 0;
        }
      }
      else {
        _LCLOSE(0x1010,local_6,iVar1);
        uVar2 = 0;
      }
    }
    else {
      _LCLOSE(0x1010,local_6,iVar1);
      uVar2 = 0;
    }
  }
  return uVar2;
}


// ---- FUN_1000_4afe @ 1000:4afe

void __cdecl16far FUN_1000_4afe(undefined4 param_1)

{
  bool bVar1;
  undefined2 local_a;
  undefined2 local_8;
  
  local_8 = 0;
  for (local_a = 0; local_a < 3; local_a = local_a + 1) {
    local_8 = local_8 + (uint)*(byte *)((int)param_1 + local_a);
  }
  for (local_a = 0; local_a < 0xc; local_a = local_a + 1) {
    local_8 = local_8 + (uint)*(byte *)((int)param_1 + 5 + local_a);
  }
  for (local_a = 0; local_a < 0x16; local_a = local_a + 1) {
    local_8 = local_8 + (uint)*(byte *)((int)param_1 + 0x11 + local_a);
  }
  for (local_a = 0; local_a < 0x3a8; local_a = local_a + 1) {
    local_8 = local_8 + (uint)*(byte *)((int)param_1 + 0x27 + local_a);
  }
  for (local_a = 0; local_a < 0x1db; local_a = local_a + 1) {
    local_8 = local_8 + (uint)*(byte *)((int)param_1 + 0x3cf + local_a);
  }
  bVar1 = false;
  while (!bVar1) {
    local_8 = local_8 + (uint)*(byte *)((int)param_1 + 0x5aa);
    bVar1 = true;
  }
  bVar1 = false;
  while (!bVar1) {
    local_8 = local_8 + (uint)*(byte *)((int)param_1 + 0x5ab);
    bVar1 = true;
  }
  for (local_a = 0; local_a < 5; local_a = local_a + 1) {
    local_8 = local_8 + (uint)*(byte *)((int)param_1 + 0x5ac + local_a);
  }
  for (local_a = 0; local_a < 0x6e; local_a = local_a + 1) {
    local_8 = local_8 + (uint)*(byte *)((int)param_1 + 0x5b1 + local_a);
  }
  *(int *)((int)param_1 + 3) = local_8;
  return;
}


// ---- FUN_1000_4d0e @ 1000:4d0e

/* WARNING: Removing unreachable block (ram,0x10004f26) */

int __cdecl16far FUN_1000_4d0e(undefined4 param_1)

{
  bool bVar1;
  byte bVar3;
  int iVar2;
  undefined2 local_a;
  undefined2 local_8;
  
  local_8 = 0;
  local_a = 0;
  while( true ) {
    if (2 < local_a) break;
    local_8 = local_8 + (uint)*(byte *)((int)param_1 + local_a);
    local_a = local_a + 1;
  }
  for (local_a = 0; local_a < 0xc; local_a = local_a + 1) {
    local_8 = local_8 + (uint)*(byte *)((int)param_1 + 5 + local_a);
  }
  for (local_a = 0; local_a < 0x16; local_a = local_a + 1) {
    local_8 = local_8 + (uint)*(byte *)((int)param_1 + 0x11 + local_a);
  }
  for (local_a = 0; local_a < 0x3a8; local_a = local_a + 1) {
    local_8 = local_8 + (uint)*(byte *)((int)param_1 + 0x27 + local_a);
  }
  for (local_a = 0; local_a < 0x1db; local_a = local_a + 1) {
    local_8 = local_8 + (uint)*(byte *)((int)param_1 + 0x3cf + local_a);
  }
  bVar1 = false;
  while (!bVar1) {
    local_8 = local_8 + (uint)*(byte *)((int)param_1 + 0x5aa);
    bVar1 = true;
  }
  bVar1 = false;
  while (!bVar1) {
    local_8 = local_8 + (uint)*(byte *)((int)param_1 + 0x5ab);
    bVar1 = true;
  }
  for (local_a = 0; local_a < 5; local_a = local_a + 1) {
    local_8 = local_8 + (uint)*(byte *)((int)param_1 + 0x5ac + local_a);
  }
  for (local_a = 0; local_a < 0x6e; local_a = local_a + 1) {
    local_8 = local_8 + (uint)*(byte *)((int)param_1 + 0x5b1 + local_a);
  }
  bVar3 = (byte)((uint)local_8 >> 8);
  if (local_8 == *(int *)((int)param_1 + 3)) {
    iVar2 = (uint)bVar3 << 8;
  }
  else {
    iVar2 = CONCAT11(bVar3,1);
  }
  return iVar2;
}


// ---- HP_VAC_STATUS_ERROR @ 1000:4f78

void __cdecl16far HP_VAC_STATUS_ERROR(void)

{
  DAT_1008_0088 = 1;
  return;
}


// ---- HP_VAC_STATUS_OK @ 1000:4f90

void __cdecl16far HP_VAC_STATUS_OK(void)

{
  DAT_1008_0088 = 0;
  return;
}


// ---- HP_SHOW_PANEL @ 1000:4fa8

void __cdecl16far HP_SHOW_PANEL(void)

{
  FUN_1000_6052(0x1a,1,0,0x1008);
  return;
}


// ---- HP_SHOW_SERVICE_PANEL @ 1000:4fc8

void __cdecl16far HP_SHOW_SERVICE_PANEL(void)

{
  FUN_1000_6052(0x1a,0,0,0x1008);
  return;
}


// ---- HP_STILL_ACTIVE @ 1000:4fe8

void __cdecl16far HP_STILL_ACTIVE(void)

{
  DAT_1008_006e = 0;
  return;
}


// ---- HP_MESSAGE_REJECTED @ 1000:5000

void __stdcall16far HP_MESSAGE_REJECTED(int param_1)

{
  undefined2 unaff_CS;
  undefined2 uVar1;
  
  if (DAT_1008_005c != 0) {
    UIF_MESSAGE(unaff_CS,0x7d0a,0x1000);
    unaff_CS = 0x1010;
  }
  if (param_1 == 10) {
    uVar1 = 0x105;
    M007_PUTSTATE(unaff_CS,0);
    FUN_1000_6052(3,0,0,uVar1);
    DAT_1008_07c1 = 3;
  }
  else if (param_1 == 0xb) {
    M007_PUTSTATE(unaff_CS,0);
    DAT_1008_07c1 = 0x14;
  }
  else if (param_1 == 0xe) {
    M007_PUTSTATE(unaff_CS,1);
    DAT_1008_07c1 = 0xc;
  }
  else if (param_1 == 0xf) {
    M007_PUTSTATE(unaff_CS,1);
    DAT_1008_07c1 = 0xd;
  }
  else if (param_1 == 0x10) {
    M007_PUTSTATE(unaff_CS,1);
    DAT_1008_07c1 = 0xc;
  }
  else if (DAT_1008_005c != 0) {
    UIF_MESSAGE(unaff_CS,0x7d2e,0x1000);
  }
  return;
}


// ---- HP_STATE_EVENT @ 1000:50e2

void __stdcall16far HP_STATE_EVENT(undefined2 param_1)

{
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  
  uVar2 = 0x1008;
  uVar1 = 0x108;
  M007_PUTSTATE(unaff_CS,param_1);
  DAT_1008_0070 = (undefined1)param_1;
  switch(param_1) {
  case 0:
    SWITCHSCINT(0x1000,3);
    break;
  case 1:
    FUN_1000_6938(5,uVar1,uVar2);
    break;
  case 2:
    FUN_1000_6938(6,uVar1,uVar2);
    break;
  case 3:
    FUN_1000_6938(7,uVar1,uVar2);
    break;
  case 4:
    FUN_1000_6938(0xc,uVar1,uVar2);
    break;
  case 5:
    FUN_1000_6938(0xf,uVar1,uVar2);
    break;
  case 6:
    FUN_1000_6938(0xe,uVar1,uVar2);
    break;
  case 7:
    FUN_1000_6938(9,uVar1,uVar2);
    break;
  case 8:
    FUN_1000_6938(8,uVar1,uVar2);
    SWITCHSCINT(0x1000,3);
    break;
  case 9:
    FUN_1000_6938(0xb,uVar1,uVar2);
    break;
  case 10:
    FUN_1000_6938(10,uVar1,uVar2);
    break;
  case 0xb:
    FUN_1000_6938(0xd,uVar1,uVar2);
  }
  return;
}


// ---- HP_ERROR_EVENT @ 1000:51dc

void __stdcall16far HP_ERROR_EVENT(int param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  if ((param_1 != 9999) && (param_1 != 0xf)) {
    if (param_1 == 0) {
      uVar2 = 0x108;
      DAT_1008_0070 = M007_GETSTATE();
      iVar1 = M007_GETSTATE(0x1010,0x109,uVar2);
      if (iVar1 == 6) {
        M007_PUTSTATE(0x1010,0);
        DAT_1008_0071 = 0;
        DAT_1008_006a = 0;
        DAT_1008_0058 = 1;
      }
    }
    else if (param_1 == 0x15) {
      DAT_1008_0070 = M007_GETSTATE();
      M007_PUTSTATE(0x1010,0);
      DAT_1008_0071 = 0;
      DAT_1008_006a = 0;
    }
    else {
      DAT_1008_0070 = 0xc;
      uVar2 = 0x1000;
      switch(param_1) {
      case 1:
        uVar2 = 0x1010;
        UIF_LOG(0x1000,0x6000,param_1,0);
        break;
      case 2:
        uVar2 = 0x1010;
        UIF_LOG(0x1000,0x6000,param_1,0);
        break;
      case 3:
        uVar2 = 0x1010;
        UIF_LOG(0x1000,0x6000,param_1,0);
        break;
      case 4:
        uVar2 = 0x1010;
        UIF_LOG(0x1000,0x6000,param_1,0);
        break;
      case 5:
        uVar2 = 0x1010;
        UIF_LOG(0x1000,0x6000,param_1,0);
        break;
      case 6:
        uVar2 = 0x1010;
        UIF_LOG(0x1000,0x6000,param_1,0);
        break;
      case 7:
        uVar2 = 0x1010;
        UIF_LOG(0x1000,0x6000,param_1,0);
        break;
      case 8:
        uVar2 = 0x1010;
        UIF_LOG(0x1000,0x6000,param_1,0);
        break;
      case 9:
        uVar2 = 0x1010;
        UIF_LOG(0x1000,0x6000,param_1,0);
        break;
      case 10:
        uVar2 = 0x1010;
        UIF_LOG(0x1000,0x6000,param_1,0);
        break;
      case 0xb:
        uVar2 = 0x1010;
        UIF_LOG(0x1000,0x6000,param_1,0);
        break;
      case 0xc:
        uVar2 = 0x1010;
        UIF_LOG(0x1000,0x6000,param_1,0);
        break;
      case 0xd:
        uVar2 = 0x1010;
        UIF_LOG(0x1000,0x6000,param_1,0);
        break;
      case 0xe:
        uVar2 = 0x1010;
        UIF_LOG(0x1000,0x6000,param_1,0);
        break;
      case 0xf:
        uVar2 = 0x1010;
        UIF_LOG(0x1000,0x6000,param_1,0);
        break;
      case 0x10:
        uVar2 = 0x1010;
        UIF_LOG(0x1000,0x6000,param_1,0);
        break;
      case 0x11:
        uVar2 = 0x1010;
        UIF_LOG(0x1000,0x6000,param_1,0);
        break;
      case 0x12:
        uVar2 = 0x1010;
        UIF_LOG(0x1000,0x6000,param_1,0);
        break;
      case 0x13:
        uVar2 = 0x1010;
        UIF_LOG(0x1000,0x6000,param_1,0);
        break;
      case 0x14:
        uVar2 = 0x1010;
        UIF_LOG(0x1000,0x6000,param_1,0);
        break;
      case 0x15:
        break;
      default:
        uVar2 = 0x1010;
        UIF_LOG(0x1000,0x6000,param_1,0);
      }
      uVar3 = 0x1000;
      switch(param_1) {
      case 5:
        uVar2 = 0x105;
        M007_PUTSTATE(0x1000,0);
        RESTART_HPAPP(uVar2);
        break;
      case 6:
        if (DAT_1008_005c != 0) {
          uVar3 = 0x1010;
          UIF_MESSAGE(0x1000,DAT_1008_0084,DAT_1008_0086);
        }
        M007_PUTSTATE(uVar3,0xd);
        M007_PUTSTATE(0x1010,param_1);
        DAT_1008_006a = 1;
        DAT_1008_0058 = 0;
        DAT_1008_005e = 0;
        break;
      case 7:
      case 8:
      case 9:
      case 10:
      case 0xb:
      case 0xc:
      case 0xd:
      case 0xe:
      case 0xf:
      case 0x10:
      case 0x11:
      case 0x12:
      case 0x13:
      case 0x16:
        DAT_1008_006c = 1;
        uVar2 = 0x1000;
        switch(DAT_1008_07c1) {
        case 3:
        case 7:
        case 8:
        case 9:
        case 0x11:
        case 0x12:
        case 0x15:
          DAT_1008_07c1 = DAT_1008_07c2;
          if (DAT_1008_005c != 0) {
            uVar2 = 0x1010;
            UIF_MESSAGE(0x1000,*(undefined2 *)((uint)DAT_1008_07c2 * 4 + 0x8a),
                        *(undefined2 *)((uint)DAT_1008_07c2 * 4 + 0x8c));
          }
        }
        M007_PUTSTATE(uVar2,0xd);
        M007_PUTSTATE(0x1010,param_1);
        break;
      case 0x14:
        FUN_1000_3a4c(1);
        FUN_1000_6052(0x19,0,0);
        M007_PUTSTATE(0x1000,0);
        M007_PUTSTATE(0x1010,param_1);
        M007_PUTSTATE(0x1010,0xd);
        DAT_1008_0071 = 1;
        break;
      case 0x15:
        M007_PUTSTATE(0x1000,0);
        DAT_1008_0071 = 0;
        DAT_1008_006a = 0;
        DAT_1008_006c = 0;
        DAT_1008_0058 = 1;
        break;
      default:
        M007_PUTSTATE(uVar2,param_1);
      }
    }
  }
  return;
}


// ---- HP_SET_V8 @ 1000:5646

void __stdcall16far HP_SET_V8(uint param_1)

{
  undefined2 unaff_CS;
  
  if (2 < param_1) {
    param_1 = 2;
  }
  M007_PUTSTATE(unaff_CS,param_1);
  return;
}


// ---- HP_SET_V14 @ 1000:5674

void __stdcall16far HP_SET_V14(uint param_1)

{
  undefined2 unaff_CS;
  
  if (2 < param_1) {
    param_1 = 2;
  }
  M007_PUTSTATE(unaff_CS,param_1);
  return;
}


// ---- HP_SET_CHAMBER_PRESSURE @ 1000:56a2

void __stdcall16far HP_SET_CHAMBER_PRESSURE(undefined2 param_1,undefined2 param_2)

{
  undefined2 unaff_CS;
  
  M007_PUTVALUE(unaff_CS,param_1,param_2);
  return;
}


// ---- FUN_1000_56c4 @ 1000:56c4

undefined2 __cdecl16far FUN_1000_56c4(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x8c;
  iVar1 = M007_GETSTATE();
  if ((iVar1 == 3) && (iVar1 = M007_GETSTATE(0x1010,0x83,uVar2,uVar3), iVar1 == 1)) {
    iVar1 = M007_GETSTATE(0x1010,0x108);
    if (iVar1 == 0xd) {
      if (DAT_1008_005c != 0) {
        UIF_MESSAGE(0x1010,0x7d40,0x1000);
      }
      uVar2 = 1;
    }
    else if (DAT_1008_0058 == 1) {
      FUN_1000_6938(0);
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}


// ---- FUN_1000_5756 @ 1000:5756

undefined2 __cdecl16far FUN_1000_5756(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x8c;
  iVar1 = M007_GETSTATE();
  if ((iVar1 == 3) && (iVar1 = M007_GETSTATE(0x1010,0x83,uVar2,uVar3), iVar1 == 1)) {
    uVar2 = 0x1010;
    iVar1 = M007_GETSTATE(0x1010,0x108);
    if (iVar1 == 0xd) {
      if (DAT_1008_005c != 0) {
        UIF_MESSAGE(0x1010,0x7d62,0x1000);
      }
      uVar2 = 1;
    }
    else {
      if (DAT_1008_0058 == 1) {
        if (DAT_1008_005e == 0) {
          FUN_1000_6938(1);
        }
      }
      else {
        if (DAT_1008_006a != 1) {
          return 1;
        }
        if (DAT_1008_005c != 0) {
          uVar2 = 600;
          UIF_MESSAGE(0x1010,0x7d84,0x1000);
        }
        FUN_1000_3a4c(1,uVar2);
        M007_PUTSTATE(0x1000,0);
        M007_PUTSTATE(0x1010,0xd);
        DAT_1008_0071 = 1;
      }
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}


// ---- FUN_1000_583c @ 1000:583c

undefined2 __cdecl16far FUN_1000_583c(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  uVar4 = 0x1008;
  uVar3 = 0x8c;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 3) {
    uVar2 = 0x1010;
    iVar1 = M007_GETSTATE(0x1010,0x108,uVar3,uVar4);
    if (iVar1 == 0xd) {
      if (DAT_1008_005c != 0) {
        UIF_MESSAGE(0x1010,0x7dae,0x1000);
      }
      uVar3 = 1;
    }
    else if (DAT_1008_0058 == 1) {
      if (DAT_1008_005e == 0) {
        FUN_1000_6052(0x18,0,0);
      }
      RESTART_HPAPP();
      uVar3 = 1;
    }
    else {
      if (DAT_1008_006a == 1) {
        if (DAT_1008_005c != 0) {
          uVar2 = 600;
          UIF_MESSAGE(0x1010,0x7dd4,0x1000);
        }
        FUN_1000_3a4c(2,uVar2);
        uVar3 = 0x105;
        M007_PUTSTATE(0x1000,0);
        RESTART_HPAPP(uVar3);
      }
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}


// ---- FUN_1000_5908 @ 1000:5908

void __cdecl16far FUN_1000_5908(int param_1)

{
  undefined2 unaff_CS;
  undefined2 uVar1;
  
  if (DAT_1008_0058 == 1) {
    if (param_1 == 1) {
      uVar1 = 2;
      SWITCHSCINT();
      FUN_1000_6052(0x16,0,0,uVar1);
      FUN_1000_6938(3);
    }
    else if (DAT_1008_005e == 0) {
      FUN_1000_6938(4,0x1008);
    }
    else {
      MESSAGEBOX(unaff_CS,0,0x7e04,0x1000,0x7e0a,0x1000);
    }
  }
  return;
}


// ---- FUN_1000_597a @ 1000:597a

void __cdecl16far FUN_1000_597a(void)

{
  if ((DAT_1008_0058 == 1) && (FUN_1000_6052(0x16,0,0,0x1008), DAT_1008_005c != 0)) {
    UIF_MESSAGE(0x1000,0x7e26,0x1000);
  }
  return;
}


// ---- FUN_1000_59bc @ 1000:59bc

/* WARNING: Removing unreachable block (ram,0x10005e4d) */
/* WARNING: Removing unreachable block (ram,0x10005d94) */
/* WARNING: Removing unreachable block (ram,0x10005dbf) */
/* WARNING: Removing unreachable block (ram,0x10005e3f) */
/* WARNING: Removing unreachable block (ram,0x10005f9d) */
/* WARNING: Removing unreachable block (ram,0x10005ea3) */
/* WARNING: Removing unreachable block (ram,0x10005f1b) */

void __cdecl16far FUN_1000_59bc(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 unaff_SS;
  bool bVar6;
  undefined4 uVar7;
  long lVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  char acStack_10b [257];
  undefined2 local_a;
  ulong local_8;
  
  uVar10 = 0x1008;
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar3 = (int)param_1;
  DAT_1008_0072 = *(undefined1 *)(iVar3 + 8);
  uVar9 = 0x8c;
  uVar5 = 0x1010;
  iVar2 = M007_GETSTATE();
  if (iVar2 == 3) {
    if ((DAT_1008_0054 == 1) && (DAT_1008_0056 == 0)) {
      FUN_1000_67d2(*(undefined1 *)(iVar3 + 8),uVar9,uVar10);
    }
    else {
      if (DAT_1008_0058 == 1) {
        if (*(char *)(iVar3 + 8) != '\x16') {
          DAT_1008_07c0 = *(undefined1 *)(iVar3 + 8);
        }
        uVar9 = 0x1000;
        uVar5 = 0x1010;
        iVar2 = GETMODULEHANDLE(0x1010,0x7e44);
        if (iVar2 == 0) {
          if (DAT_1008_005c != 0) {
            UIF_MESSAGE(0x1010,DAT_1008_007c,DAT_1008_007e);
          }
          HP_ERROR_EVENT(3);
          DAT_1008_0058 = 0;
          DAT_1008_005e = 0;
          DAT_1008_006a = 1;
          return;
        }
        DAT_1008_015a = DAT_1008_015a + 1;
        if (0x3b < DAT_1008_015a) {
          DAT_1008_015a = 0;
          if (DAT_1008_006e == 0) {
            DAT_1008_015c = 0;
            DAT_1008_006e = 1;
          }
          else if ((DAT_1008_006e == 1) && (DAT_1008_015c = DAT_1008_015c + 1, 2 < DAT_1008_015c)) {
            if (DAT_1008_005c != 0) {
              UIF_MESSAGE(0x1010,DAT_1008_0080,DAT_1008_0082);
            }
            HP_ERROR_EVENT(4);
            DAT_1008_0058 = 0;
            DAT_1008_005e = 0;
            DAT_1008_006a = 1;
            return;
          }
        }
        if (DAT_1008_0068 == 1) {
          bVar6 = DAT_1008_0064 == 0;
          DAT_1008_0064 = DAT_1008_0064 + -1;
          DAT_1008_0066 = DAT_1008_0066 - (uint)bVar6;
          if ((DAT_1008_0066 < 1) && ((DAT_1008_0066 < 0 || (DAT_1008_0064 == 0)))) {
            if (DAT_1008_005c != 0) {
              UIF_MESSAGE(0x1010,DAT_1008_0078,DAT_1008_007a);
            }
            HP_ERROR_EVENT(2);
            DAT_1008_0058 = 0;
            DAT_1008_005e = 0;
            DAT_1008_006a = 1;
            return;
          }
        }
        if (DAT_1008_0088 == 1) {
          uVar5 = 0x1000;
          FUN_1000_6938(0x16,uVar9);
        }
        else {
          cVar1 = *(char *)(iVar3 + 8);
          if (cVar1 == '\0') {
            uVar5 = 0x1000;
            FUN_1000_6938(0x10,uVar9);
          }
          else if (cVar1 == '\x01') {
            uVar5 = 0x1000;
            FUN_1000_6938(0x11,uVar9);
          }
          else if (cVar1 != '\x03') {
            if (cVar1 == '\x04') {
              FUN_1000_6938(0x13,uVar9);
              FUN_1000_6938(0x14);
              uVar5 = 0x1000;
              FUN_1000_6938(0x12);
            }
            else if (cVar1 == '\x06') {
              uVar5 = 0x1000;
              FUN_1000_6938(0x15,uVar9);
            }
          }
        }
      }
      if (DAT_1008_005e == 1) {
        uVar5 = 0x1000;
        FUN_1000_6938(4);
      }
      if (DAT_1008_0062 == 1) {
        iVar2 = M007_GETSTATE(uVar5,0xe);
        uVar5 = 0x1010;
        if (iVar2 == 1) {
          DAT_1008_0062 = 0;
          DOCOMMANDUNFREEZE_ALL(0x1010);
          uVar5 = 0x1010;
        }
      }
      if (DAT_1008_006a == 1) {
        if (DAT_1008_015e == 1) {
          FUN_1000_01a0(&stack0xfdf6);
          FUN_1000_01fe(&stack0xfdf7);
          FUN_1000_01a0(acStack_10b + 1);
          FUN_1000_01fe(acStack_10b + 2);
          DAT_1008_015e = 0;
          uVar7 = GETTICKCOUNT(0x1000);
          DAT_1008_0d06 = (undefined2)((ulong)uVar7 >> 0x10);
          DAT_1008_0d04 = (undefined2)uVar7;
          GETWINDOWSDIRECTORY();
          iVar2 = LSTRLEN();
          if (acStack_10b[iVar2] != '\\') {
            LSTRCAT(0x1010,0x7e4e,0x1000);
          }
          LSTRCPY(0x1010,acStack_10b + 1,unaff_SS,&stack0xfdf6);
          LSTRCAT(0x1010,0x7e50,0x1000,&stack0xfdf6);
          uVar9 = 0x1000;
          local_a = GETPRIVATEPROFILESTRING
                              (0x1010,&stack0xfdf6,unaff_SS,0xff,0xd26,0x1008,0x418e,0x1000,0x7e58,
                               0x1000,0x7e6a);
          uVar5 = 0x1008;
          uVar4 = 0x1010;
          iVar2 = LSTRLEN(0x1010,0xd26);
          if (iVar2 == 0) {
            DAT_1008_0e28 = 0x5a;
            DAT_1008_0e2a = 0;
          }
          else {
            iVar2 = 0x1008;
            uVar4 = 0x1000;
            DAT_1008_0e28 = FUN_1000_729a(0xd26,0x1008,uVar5,uVar9);
            DAT_1008_0e2a = iVar2;
          }
          if ((DAT_1008_0e2a != 0) || (300 < DAT_1008_0e28)) {
            DAT_1008_0e28 = 300;
            DAT_1008_0e2a = 0;
          }
          if ((DAT_1008_0e2a == 0) && (DAT_1008_0e28 < 10)) {
            DAT_1008_0e28 = 10;
            DAT_1008_0e2a = 0;
          }
          uVar5 = 0x1010;
          _WSPRINTF(uVar4,0xe2c,0x1008,0x7e70,0x1000,DAT_1008_0e28,DAT_1008_0e2a);
          if (DAT_1008_005c != 0) {
            uVar5 = 0x1010;
            UIF_MESSAGE(0x1010,0xe2c,0x1008);
          }
        }
        uVar10 = 0;
        uVar9 = 1000;
        lVar8 = GETTICKCOUNT(uVar5,1000,0);
        uVar4 = 0x1000;
        local_8 = FUN_1000_0140(lVar8 - CONCAT22(DAT_1008_0d06,DAT_1008_0d04),uVar9,uVar10);
        uVar5 = 0x1000;
        switch(DAT_1008_07c1) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 0x11:
        case 0x14:
        case 0x17:
        case 0x18:
          M007_PUTSTATE(0x1000,0);
          M007_PUTSTATE(0x1010,0xd);
          break;
        case 9:
        case 0x10:
        case 0x1b:
          if (DAT_1008_0160 == 1) {
            if (DAT_1008_005c != 0) {
              uVar5 = 0x1010;
              UIF_MESSAGE(0x1000,0x7e84,0x1000);
            }
            DAT_1008_0160 = 0;
          }
          if (CONCAT22(DAT_1008_0e2a,DAT_1008_0e28) < local_8) {
            if (DAT_1008_005c != 0) {
              UIF_MESSAGE(uVar5,0x7e96,0x1000);
              uVar5 = 0x1010;
            }
            M007_PUTSTATE(uVar5,0);
            M007_PUTSTATE(0x1010,0xd);
            DAT_1008_0071 = 1;
          }
          break;
        case 10:
        case 0xf:
        case 0x1a:
          if (DAT_1008_0160 == 1) {
            if (DAT_1008_005c != 0) {
              uVar10 = 600;
              UIF_MESSAGE(0x1000,0x7ec8,0x1000);
            }
            FUN_1000_3a4c(1,uVar10);
            DAT_1008_0160 = 0;
          }
          uVar5 = 0x1000;
          if (CONCAT22(DAT_1008_0e2a,DAT_1008_0e28) < local_8) {
            if (DAT_1008_005c != 0) {
              uVar5 = 0x1010;
              UIF_MESSAGE(0x1000,0x7e96,0x1000);
            }
            M007_PUTSTATE(uVar5,0);
            M007_PUTSTATE(0x1010,0xd);
            DAT_1008_0071 = 1;
          }
          break;
        case 0xb:
        case 0xc:
        case 0xd:
        case 0xe:
        case 0x12:
        case 0x13:
        case 0x15:
        case 0x16:
        case 0x19:
          if (DAT_1008_0160 == 1) {
            if (DAT_1008_005c != 0) {
              uVar5 = 0x1010;
              UIF_MESSAGE(0x1000,0x7eb6,0x1000);
            }
            DAT_1008_0160 = 0;
          }
          if (CONCAT22(DAT_1008_0e2a,DAT_1008_0e28) < local_8) {
            if (DAT_1008_005c != 0) {
              UIF_MESSAGE(uVar5,0x7e96,0x1000);
              uVar5 = 0x1010;
            }
            M007_PUTSTATE(uVar5,0);
            M007_PUTSTATE(0x1010,0xd);
            DAT_1008_0071 = 1;
          }
          break;
        default:
          if (DAT_1008_005c != 0) {
            uVar4 = 0x1010;
            UIF_MESSAGE(0x1000,0x7eda,0x1000);
          }
          M007_PUTSTATE(uVar4,0xd);
        }
      }
    }
  }
  return;
}


// ---- FUN_1000_6052 @ 1000:6052

void __cdecl16far FUN_1000_6052(undefined2 param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 unaff_CS;
  
  if (DAT_1008_003c != 0) {
    POSTMESSAGE(unaff_CS,param_2,param_3,param_1,DAT_1008_07be);
  }
  return;
}


// ---- FUN_1000_6084 @ 1000:6084

void __cdecl16far FUN_1000_6084(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 local_e;
  undefined2 local_c;
  undefined2 *local_a;
  
  uVar5 = 0x1008;
  uVar4 = 0x8c;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 3) {
    uVar3 = 0;
    DAT_1008_003c = FINDWINDOW(0x1010,0x7ef2,0x1000,0);
    uVar2 = 0x1000;
    DAT_1008_07be = REGISTERWINDOWMESSAGE(0x1010,0x7f06);
    DAT_1008_0054 = 1;
    FUN_1000_61d8(uVar2,uVar3,uVar4,uVar5);
    local_a = &local_e;
    GETCURSORPOS(0x1000,local_a);
    SETCURSORPOS(0x1010,local_c,local_e);
    SWITCHSCINT(0x1010,3);
  }
  return;
}


// ---- FUN_1000_60f8 @ 1000:60f8

undefined2 __cdecl16far FUN_1000_60f8(void)

{
  return 1;
}


// ---- FUN_1000_61d8 @ 1000:61d8

void __cdecl16far FUN_1000_61d8(void)

{
  undefined2 unaff_SS;
  byte local_118 [272];
  int local_8;
  int local_6;
  
  local_118[0] = 1;
  local_118[1] = 0;
  local_118[2] = 2;
  local_118[3] = 2;
  local_118[4] = 1;
  local_118[5] = 3;
  local_118[6] = 3;
  local_118[7] = 0x11;
  local_118[8] = 2;
  local_118[9] = 1;
  local_118[10] = 4;
  local_118[0xb] = 1;
  local_118[0xc] = 2;
  local_118[0xd] = 0x12;
  local_118[0xe] = 5;
  local_118[0xf] = 3;
  local_118[0x10] = 2;
  local_118[0x11] = 0x16;
  local_118[0x12] = 0x1a;
  local_118[0x13] = 0x17;
  local_118[0x14] = 2;
  local_118[0x15] = 0x11;
  local_118[0x16] = 5;
  local_118[0x17] = 3;
  local_118[0x18] = 3;
  local_118[0x19] = 7;
  local_118[0x1a] = 0;
  local_118[0x1b] = 4;
  local_118[0x1c] = 4;
  local_118[0x1d] = 1;
  local_118[0x1e] = 4;
  local_118[0x1f] = 6;
  local_118[0x20] = 4;
  local_118[0x21] = 3;
  local_118[0x22] = 6;
  local_118[0x23] = 0x15;
  local_118[0x24] = 4;
  local_118[0x25] = 0x11;
  local_118[0x26] = 0x19;
  local_118[0x27] = 5;
  local_118[0x28] = 4;
  local_118[0x29] = 0x16;
  local_118[0x2a] = 0x1a;
  local_118[0x2b] = 0x18;
  local_118[0x2c] = 5;
  local_118[0x2d] = 1;
  local_118[0x2e] = 4;
  local_118[0x2f] = 6;
  local_118[0x30] = 5;
  local_118[0x31] = 3;
  local_118[0x32] = 6;
  local_118[0x33] = 0x15;
  local_118[0x34] = 5;
  local_118[0x35] = 0x16;
  local_118[0x36] = 0x1a;
  local_118[0x37] = 0x18;
  local_118[0x38] = 6;
  local_118[0x39] = 0x10;
  local_118[0x3a] = 7;
  local_118[0x3b] = 7;
  local_118[0x3c] = 7;
  local_118[0x3d] = 6;
  local_118[0x3e] = 0;
  local_118[0x3f] = 1;
  local_118[0x40] = 8;
  local_118[0x41] = 0;
  local_118[0x42] = 8;
  local_118[0x43] = 9;
  local_118[0x44] = 8;
  local_118[0x45] = 4;
  local_118[0x46] = 9;
  local_118[0x47] = 7;
  local_118[0x48] = 9;
  local_118[0x49] = 9;
  local_118[0x4a] = 2;
  local_118[0x4b] = 10;
  local_118[0x4c] = 10;
  local_118[0x4d] = 1;
  local_118[0x4e] = 10;
  local_118[0x4f] = 0xf;
  local_118[0x50] = 10;
  local_118[0x51] = 4;
  local_118[0x52] = 0xb;
  local_118[0x53] = 0x12;
  local_118[0x54] = 10;
  local_118[0x55] = 0x12;
  local_118[0x56] = 0xc;
  local_118[0x57] = 0xb;
  local_118[0x58] = 10;
  local_118[0x59] = 0x16;
  local_118[0x5a] = 0x1a;
  local_118[0x5b] = 0x19;
  local_118[0x5c] = 10;
  local_118[0x5d] = 0x11;
  local_118[0x5e] = 0xc;
  local_118[0x5f] = 0xb;
  local_118[0x60] = 0xb;
  local_118[0x61] = 0xc;
  local_118[0x62] = 0;
  local_118[99] = 0xc;
  local_118[100] = 0xc;
  local_118[0x65] = 1;
  local_118[0x66] = 0xd;
  local_118[0x67] = 0xf;
  local_118[0x68] = 0xc;
  local_118[0x69] = 4;
  local_118[0x6a] = 0xe;
  local_118[0x6b] = 0x12;
  local_118[0x6c] = 0xc;
  local_118[0x6d] = 0xf;
  local_118[0x6e] = 0;
  local_118[0x6f] = 0xd;
  local_118[0x70] = 0xc;
  local_118[0x71] = 0x16;
  local_118[0x72] = 0x1a;
  local_118[0x73] = 0x19;
  local_118[0x74] = 0xc;
  local_118[0x75] = 3;
  local_118[0x76] = 0x19;
  local_118[0x77] = 0xc;
  local_118[0x78] = 0xd;
  local_118[0x79] = 1;
  local_118[0x7a] = 0xf;
  local_118[0x7b] = 0xf;
  local_118[0x7c] = 0xd;
  local_118[0x7d] = 4;
  local_118[0x7e] = 0x10;
  local_118[0x7f] = 0x12;
  local_118[0x80] = 0xd;
  local_118[0x81] = 0xc;
  local_118[0x82] = 0;
  local_118[0x83] = 0xc;
  local_118[0x84] = 0xd;
  local_118[0x85] = 0x11;
  local_118[0x86] = 0x19;
  local_118[0x87] = 0xe;
  local_118[0x88] = 0xd;
  local_118[0x89] = 0x16;
  local_118[0x8a] = 0x1a;
  local_118[0x8b] = 0x19;
  local_118[0x8c] = 0xd;
  local_118[0x8d] = 3;
  local_118[0x8e] = 0x19;
  local_118[0x8f] = 0xd;
  local_118[0x90] = 0xe;
  local_118[0x91] = 1;
  local_118[0x92] = 0xf;
  local_118[0x93] = 0xf;
  local_118[0x94] = 0xe;
  local_118[0x95] = 4;
  local_118[0x96] = 0x10;
  local_118[0x97] = 0x12;
  local_118[0x98] = 0xe;
  local_118[0x99] = 0xc;
  local_118[0x9a] = 0;
  local_118[0x9b] = 0xc;
  local_118[0x9c] = 0xe;
  local_118[0x9d] = 0x12;
  local_118[0x9e] = 0;
  local_118[0x9f] = 0xd;
  local_118[0xa0] = 0xe;
  local_118[0xa1] = 0x13;
  local_118[0xa2] = 0;
  local_118[0xa3] = 0xd;
  local_118[0xa4] = 0xe;
  local_118[0xa5] = 0x14;
  local_118[0xa6] = 0;
  local_118[0xa7] = 0xd;
  local_118[0xa8] = 0xe;
  local_118[0xa9] = 0x15;
  local_118[0xaa] = 0;
  local_118[0xab] = 0xd;
  local_118[0xac] = 0xe;
  local_118[0xad] = 0x16;
  local_118[0xae] = 0x1a;
  local_118[0xaf] = 0x19;
  local_118[0xb0] = 0xe;
  local_118[0xb1] = 3;
  local_118[0xb2] = 0x19;
  local_118[0xb3] = 0xe;
  local_118[0xb4] = 0xf;
  local_118[0xb5] = 0xe;
  local_118[0xb6] = 4;
  local_118[0xb7] = 0x10;
  local_118[0xb8] = 0x10;
  local_118[0xb9] = 0x10;
  local_118[0xba] = 0x11;
  local_118[0xbb] = 0x11;
  local_118[0xbc] = 0x11;
  local_118[0xbd] = 5;
  local_118[0xbe] = 0;
  local_118[0xbf] = 8;
  local_118[0xc0] = 0x12;
  local_118[0xc1] = 0xd;
  local_118[0xc2] = 0;
  local_118[0xc3] = 0x13;
  local_118[0xc4] = 0x13;
  local_118[0xc5] = 3;
  local_118[0xc6] = 0x13;
  local_118[199] = 0xb;
  local_118[200] = 0x13;
  local_118[0xc9] = 0xb;
  local_118[0xca] = 0;
  local_118[0xcb] = 0x14;
  local_118[0xcc] = 0x13;
  local_118[0xcd] = 0x16;
  local_118[0xce] = 0x13;
  local_118[0xcf] = 0x1b;
  local_118[0xd0] = 0x14;
  local_118[0xd1] = 3;
  local_118[0xd2] = 0x14;
  local_118[0xd3] = 0x15;
  local_118[0xd4] = 0x14;
  local_118[0xd5] = 8;
  local_118[0xd6] = 0x15;
  local_118[0xd7] = 3;
  local_118[0xd8] = 0x14;
  local_118[0xd9] = 0x16;
  local_118[0xda] = 0x1b;
  local_118[0xdb] = 3;
  local_118[0xdc] = 0x15;
  local_118[0xdd] = 10;
  local_118[0xde] = 0;
  local_118[0xdf] = 0x16;
  local_118[0xe0] = 0x16;
  local_118[0xe1] = 1;
  local_118[0xe2] = 0x16;
  local_118[0xe3] = 0xf;
  local_118[0xe4] = 0x16;
  local_118[0xe5] = 4;
  local_118[0xe6] = 0x17;
  local_118[0xe7] = 0x13;
  local_118[0xe8] = 0x16;
  local_118[0xe9] = 0xc;
  local_118[0xea] = 0;
  local_118[0xeb] = 0xc;
  local_118[0xec] = 0x16;
  local_118[0xed] = 0x16;
  local_118[0xee] = 0x1a;
  local_118[0xef] = 0x19;
  local_118[0xf0] = 0x17;
  local_118[0xf1] = 2;
  local_118[0xf2] = 0x12;
  local_118[0xf3] = 1;
  local_118[0xf4] = 0x17;
  local_118[0xf5] = 1;
  local_118[0xf6] = 4;
  local_118[0xf7] = 1;
  local_118[0xf8] = 0x18;
  local_118[0xf9] = 2;
  local_118[0xfa] = 0x12;
  local_118[0xfb] = 6;
  local_118[0xfc] = 0x18;
  local_118[0xfd] = 1;
  local_118[0xfe] = 4;
  local_118[0xff] = 6;
  local_118[0x100] = 0x19;
  local_118[0x101] = 2;
  local_118[0x102] = 0x18;
  local_118[0x103] = 0x1a;
  local_118[0x104] = 0x19;
  local_118[0x105] = 1;
  local_118[0x106] = 0x18;
  local_118[0x107] = 0xf;
  local_118[0x108] = 0x1a;
  local_118[0x109] = 0xe;
  local_118[0x10a] = 0x12;
  local_118[0x10b] = 0x10;
  local_118[0x10c] = 0x1b;
  local_118[0x10d] = 0xc;
  local_118[0x10e] = 0;
  local_118[0x10f] = 0x19;
  for (local_6 = 0; local_6 < 0x1c; local_6 = local_6 + 1) {
    for (local_8 = 0; local_8 < 0x18; local_8 = local_8 + 1) {
      *(undefined1 *)(local_6 * 0x30 + 0x7c4 + local_8 * 2) = 0;
      *(undefined1 *)(local_6 * 0x30 + local_8 * 2 + 0x7c5) = 0;
    }
  }
  for (local_6 = 0; local_6 < 0x44; local_6 = local_6 + 1) {
    *(byte *)((uint)local_118[local_6 * 4] * 0x30 + 0x7c4 + (uint)local_118[local_6 * 4 + 1] * 2) =
         local_118[local_6 * 4 + 2];
    *(byte *)((uint)local_118[local_6 * 4] * 0x30 + (uint)local_118[local_6 * 4 + 1] * 2 + 0x7c5) =
         local_118[local_6 * 4 + 3];
  }
  DAT_1008_07c1 = 0;
  DAT_1008_07c2 = 0;
  return;
}


// ---- FUN_1000_67d2 @ 1000:67d2

void __cdecl16far FUN_1000_67d2(char param_1)

{
  undefined2 unaff_CS;
  undefined2 uVar1;
  long lVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  
  uVar5 = 0x1008;
  if ((DAT_1008_003c != 0) &&
     ((((param_1 == '\0' || (param_1 == '\x01')) || (param_1 == '\x02')) ||
      ((param_1 == '\x04' || (param_1 == '\x05')))))) {
    uVar4 = 0x109;
    M007_PUTSTATE(unaff_CS,0);
    DAT_1008_0071 = 0;
    DAT_1008_006e = 0;
    DAT_1008_0054 = 1;
    DAT_1008_006a = 0;
    if ((param_1 == '\x04') || (param_1 == '\x05')) {
      param_1 = '\x02';
    }
    iVar3 = DAT_1008_003c;
    lVar2 = SENDMESSAGE(0x1010,param_1,0,2,DAT_1008_07be);
    if (lVar2 == 0) {
      if (DAT_1008_005c != 0) {
        UIF_MESSAGE(0x1010,DAT_1008_0074,DAT_1008_0076);
      }
      SENDMESSAGE(0x1010,0,0,0x17,DAT_1008_07be);
      uVar5 = 0x226;
      UIF_LOG(0x1010,0x6000,1,0);
      uVar4 = 0x108;
      M007_PUTSTATE(0x1010,0xd);
      iVar3 = 0x109;
      uVar1 = 0x1010;
      M007_PUTSTATE(0x1010,1);
      DAT_1008_0071 = 1;
    }
    else {
      if (param_1 == '\0') {
        DAT_1008_07c1 = 1;
      }
      else {
        DAT_1008_07c1 = 4;
      }
      DAT_1008_07c2 = DAT_1008_07c1;
      DAT_1008_0058 = 1;
      uVar1 = 0x1000;
      FUN_1000_6052(0x16,0,0,iVar3,uVar4,uVar5);
    }
    DAT_1008_0056 = 1;
    SWITCHSCINT(uVar1,3,iVar3,uVar4,uVar5);
  }
  return;
}


// ---- FUN_1000_6938 @ 1000:6938

/* WARNING: Removing unreachable block (ram,0x10007122) */
/* WARNING: Removing unreachable block (ram,0x1000712f) */
/* WARNING: Removing unreachable block (ram,0x1000711d) */

void __cdecl16far FUN_1000_6938(byte param_1)

{
  int iVar1;
  undefined2 unaff_CS;
  undefined2 uVar2;
  
  DAT_1008_0e26 = 1;
  if (DAT_1008_005c != 0) {
    UIF_MESSAGE(unaff_CS,*(undefined2 *)((uint)param_1 * 4 + 0xfa),
                *(undefined2 *)((uint)param_1 * 4 + 0xfc));
    unaff_CS = 0x1010;
  }
  uVar2 = 0x1000;
  switch(*(undefined1 *)((uint)DAT_1008_07c1 * 0x30 + 0x7c4 + (uint)param_1 * 2)) {
  case 0:
    if (DAT_1008_005c != 0) {
      uVar2 = 0x1010;
      UIF_MESSAGE(0x1000,0x7f18,0x1000);
    }
    unaff_CS = uVar2;
    if ((DAT_1008_006c == 1) && (param_1 == 1)) {
      FUN_1000_3a4c(1);
      FUN_1000_6052(0x19,0,0);
      M007_PUTSTATE(0x1000,0);
      unaff_CS = 0x1010;
      if (DAT_1008_005c != 0) {
        UIF_MESSAGE(0x1010,0x7f2e,0x1000);
        unaff_CS = 0x1010;
      }
    }
    break;
  case 1:
    unaff_CS = uVar2;
    if (DAT_1008_005c != 0) {
      UIF_MESSAGE(0x1000,0x7f48,0x1000);
      unaff_CS = 0x1010;
    }
    break;
  case 2:
    if (DAT_1008_005c != 0) {
      UIF_MESSAGE(0x1000,0x7f70,0x1000);
    }
    FUN_1000_3a4c(0);
    unaff_CS = 0x1000;
    break;
  case 3:
    if (DAT_1008_005c != 0) {
      UIF_MESSAGE(0x1000,0x7f84,0x1000);
    }
    FUN_1000_6052(8,0,0);
    M007_PUTSTATE(0x1000,1);
    unaff_CS = 0x1010;
    break;
  case 4:
    if (DAT_1008_005c != 0) {
      UIF_MESSAGE(0x1000,0x7fa2,0x1000);
    }
    DAT_1008_0060 = 0;
    FUN_1000_3a4c(1);
    unaff_CS = 0x1000;
    break;
  case 5:
    if (DAT_1008_005c != 0) {
      UIF_MESSAGE(0x1000,0x7fb6,0x1000);
    }
    FUN_1000_6052(5,0,0);
    unaff_CS = 0x1000;
    break;
  case 6:
    if (DAT_1008_005c != 0) {
      UIF_MESSAGE(0x1000,0x7fd4,0x1000);
    }
    FUN_1000_6052(9,0,0);
    M007_PUTSTATE(0x1000,1);
    unaff_CS = 0x1010;
    break;
  case 7:
    if (DAT_1008_005c != 0) {
      UIF_MESSAGE(0x1000,0x7ff2,0x1000);
    }
    FUN_1000_6052(7,0,0);
    unaff_CS = 0x1000;
    break;
  case 8:
    if (DAT_1008_005c != 0) {
      UIF_MESSAGE(0x1000,0x8014,0x1000);
    }
    FUN_1000_6052(0x11,0,0);
    unaff_CS = 0x1000;
    break;
  case 9:
    if (DAT_1008_005c != 0) {
      UIF_MESSAGE(0x1000,0x802c,0x1000);
    }
    FUN_1000_6052(0xc,0,0);
    M007_PUTSTATE(0x1000,0);
    unaff_CS = 0x1010;
    break;
  case 10:
    if (DAT_1008_005c != 0) {
      UIF_MESSAGE(0x1000,0x804a,0x1000);
    }
    FUN_1000_6052(0x12,0,0);
    unaff_CS = 0x1000;
    break;
  case 0xb:
    if (DAT_1008_005c != 0) {
      UIF_MESSAGE(0x1000,0x8064,0x1000);
    }
    FUN_1000_6052(0xd,0,0);
    M007_PUTSTATE(0x1000,0);
    unaff_CS = 0x1010;
    break;
  case 0xc:
    if (DAT_1008_005c != 0) {
      UIF_MESSAGE(0x1000,0x8082,0x1000);
    }
    FUN_1000_6052(4,0,0);
    unaff_CS = 0x1000;
    break;
  case 0xd:
    if (DAT_1008_005c != 0) {
      UIF_MESSAGE(0x1000,0x80a4,0x1000);
    }
    FUN_1000_6052(0x14,0,0);
    unaff_CS = 0x1000;
    break;
  case 0xe:
    if (DAT_1008_005c != 0) {
      UIF_MESSAGE(0x1000,0x80be,0x1000);
    }
    iVar1 = FUN_1000_716a();
    if (iVar1 == 0) {
      DAT_1008_0e26 = 0;
      unaff_CS = 0x1000;
    }
    else {
      FUN_1000_6052(0xf,0,0);
      M007_PUTSTATE(0x1000,0);
      unaff_CS = 0x1010;
    }
    break;
  case 0xf:
    if (DAT_1008_005c != 0) {
      UIF_MESSAGE(0x1000,0x80dc,0x1000);
    }
    FUN_1000_6052(0x15,0,0);
    unaff_CS = 0x1000;
    break;
  case 0x10:
    if (DAT_1008_005c != 0) {
      UIF_MESSAGE(0x1000,0x80f6,0x1000);
    }
    iVar1 = FUN_1000_716a();
    if (iVar1 == 0) {
      DAT_1008_0e26 = 0;
      unaff_CS = 0x1000;
    }
    else {
      FUN_1000_6052(0x10,0,0);
      M007_PUTSTATE(0x1000,0);
      unaff_CS = 0x1010;
    }
    break;
  case 0x11:
    if (DAT_1008_005c != 0) {
      UIF_MESSAGE(0x1000,0x8114,0x1000);
    }
    FUN_1000_6052(6,0,0);
    unaff_CS = 0x1000;
    break;
  case 0x12:
    if (DAT_1008_005c != 0) {
      UIF_MESSAGE(0x1000,0x8136,0x1000);
    }
    DAT_1008_0060 = 0;
    FUN_1000_6052(0x18,0,0);
    unaff_CS = 0x1000;
    break;
  case 0x13:
    if (DAT_1008_005c != 0) {
      UIF_MESSAGE(0x1000,0x8150,0x1000);
    }
    FUN_1000_6052(0xb,0,0);
    M007_PUTSTATE(0x1000,1);
    unaff_CS = 0x1010;
    break;
  case 0x14:
    if (DAT_1008_005c != 0) {
      UIF_MESSAGE(0x1000,0x816e,0x1000);
    }
    FUN_1000_6052(10,0,0);
    M007_PUTSTATE(0x1000,1);
    unaff_CS = 0x1010;
    break;
  case 0x15:
    if (DAT_1008_005c != 0) {
      UIF_MESSAGE(0x1000,0x818c,0x1000);
    }
    FUN_1000_6052(3,0,0);
    unaff_CS = 0x1000;
    break;
  case 0x16:
    if (DAT_1008_005c != 0) {
      UIF_MESSAGE(0x1000,0x81aa,0x1000);
    }
    FUN_1000_6052(0x13,0,0);
    unaff_CS = 0x1000;
    break;
  case 0x17:
    if (DAT_1008_005c != 0) {
      UIF_MESSAGE(0x1000,0x81c4,0x1000);
    }
    FUN_1000_6052(0xe,0,0);
    M007_PUTSTATE(0x1000,0);
    unaff_CS = 0x1010;
    break;
  case 0x18:
    if (DAT_1008_07c2 == 10) {
      if (DAT_1008_005c != 0) {
        UIF_MESSAGE(0x1000,0x81e2,0x1000);
      }
      FUN_1000_6052(0x12,0,0);
    }
    else if (DAT_1008_07c2 == 0xc) {
      if (DAT_1008_005c != 0) {
        UIF_MESSAGE(0x1000,0x81fc,0x1000);
      }
      FUN_1000_6052(0x14,0,0);
    }
    else if ((DAT_1008_07c2 == 0xd) || (DAT_1008_07c2 == 0xe)) {
      if (DAT_1008_005c != 0) {
        UIF_MESSAGE(0x1000,0x8216,0x1000);
      }
      FUN_1000_6052(0x15,0,0);
    }
    else if (DAT_1008_07c2 == 0x16) {
      if (DAT_1008_005c != 0) {
        UIF_MESSAGE(0x1000,0x8230,0x1000);
      }
      FUN_1000_6052(0x13,0,0);
    }
    else if (DAT_1008_07c2 == 0x1b) {
      if (DAT_1008_005c != 0) {
        UIF_MESSAGE(0x1000,0x81fc,0x1000);
      }
      FUN_1000_6052(0x14,0,0);
    }
    unaff_CS = 0x1000;
    break;
  case 0x19:
    if (DAT_1008_0060 == 1) {
      if (DAT_1008_005c != 0) {
        UIF_MESSAGE(0x1000,0x824a,0x1000);
      }
      uVar2 = 0x1010;
      DOCOMMANDBEAM_ON();
      DAT_1008_0062 = 1;
      DAT_1008_0060 = 0;
    }
    else if (DAT_1008_005c != 0) {
      uVar2 = 0x1010;
      UIF_MESSAGE(0x1000,0x8264,0x1000);
    }
    DAT_1008_005e = 0;
    unaff_CS = uVar2;
    break;
  case 0x1a:
    if (DAT_1008_005c != 0) {
      uVar2 = 0x1010;
      UIF_MESSAGE(0x1000,0x8284,0x1000);
    }
    DAT_1008_005e = 0;
    DAT_1008_0060 = 0;
    unaff_CS = uVar2;
    break;
  case 0x1b:
    if (DAT_1008_005c != 0) {
      UIF_MESSAGE(0x1000,0x82ac,0x1000);
    }
    FUN_1000_6052(0x18,0,0);
    unaff_CS = 0x1000;
    break;
  default:
    if (DAT_1008_005c != 0) {
      UIF_MESSAGE(unaff_CS,0x82ca,0x1000);
      unaff_CS = 0x1010;
    }
  }
  if ((*(char *)((uint)DAT_1008_07c1 * 0x30 + (uint)param_1 * 2 + 0x7c5) != '\0') &&
     (DAT_1008_0e26 == 1)) {
    DAT_1008_07c2 = DAT_1008_07c1;
    DAT_1008_07c1 = *(byte *)((uint)DAT_1008_07c1 * 0x30 + (uint)param_1 * 2 + 0x7c5);
    switch(DAT_1008_07c1) {
    case 3:
    case 7:
    case 9:
    case 0xb:
    case 0xf:
    case 0x11:
    case 0x12:
    case 0x1a:
      break;
    default:
      break;
    case 0xc:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x16:
    }
    unaff_CS = 0x1000;
    DAT_1008_0066 = 0;
    DAT_1008_0064 = 0;
    DAT_1008_0068 = 0;
  }
  if (DAT_1008_005c != 0) {
    UIF_MESSAGE(unaff_CS,*(undefined2 *)((uint)DAT_1008_07c1 * 4 + 0x8a),
                *(undefined2 *)((uint)DAT_1008_07c1 * 4 + 0x8c));
  }
  return;
}


// ---- FUN_1000_716a @ 1000:716a

undefined2 __cdecl16far FUN_1000_716a(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0xe;
  iVar1 = M007_GETSTATE();
  if ((iVar1 == 9) || (iVar1 = M007_GETSTATE(0x1010,0xe,uVar2,uVar3), iVar1 == 0)) {
    if (DAT_1008_005c != 0) {
      UIF_MESSAGE(0x1010,0x8308,0x1000);
    }
    DAT_1008_005e = 0;
    return 1;
  }
  iVar1 = M007_GETSTATE(0x1010,0xe);
  if ((((iVar1 != 1) && (iVar1 = M007_GETSTATE(0x1010,0xe), iVar1 != 7)) &&
      (iVar1 = M007_GETSTATE(0x1010,0xe), iVar1 != 10)) &&
     ((iVar1 = M007_GETSTATE(0x1010,0xe), iVar1 != 6 &&
      (iVar1 = M007_GETSTATE(0x1010,0xe), iVar1 != 2)))) {
    DAT_1008_005e = 1;
    return 0;
  }
  uVar2 = 0x720d;
  iVar1 = M007_GETSTATE(0x1010,0xe);
  if (iVar1 != 1) {
    uVar2 = 0x1010;
    iVar1 = M007_GETSTATE(0x1010,0xe);
    if (iVar1 != 6) {
      uVar2 = 0xe;
      iVar1 = M007_GETSTATE(0x1010,0xe);
      if (iVar1 != 2) {
        DAT_1008_0060 = 0;
        goto LAB_1000_7242;
      }
    }
  }
  DAT_1008_0060 = 1;
LAB_1000_7242:
  if (DAT_1008_005c != 0) {
    UIF_MESSAGE(0x1010,0x82e8,0x1000);
  }
  FUN_1000_6052(0x16,1,0,uVar2);
  SWITCHFREEZE_ON(0x1000,2);
  DOCOMMANDFREEZE_ALL(0x1010);
  DOCOMMANDBEAM_OFF(0x1010);
  DAT_1008_005e = 1;
  return 0;
}


// ---- FUN_1000_729a @ 1000:729a

undefined2 __cdecl16far FUN_1000_729a(char *param_1)

{
  int iVar1;
  long lVar2;
  undefined2 local_a;
  char local_6;
  
  lVar2 = 0;
  while( true ) {
    if ((*(byte *)(*param_1 + 0x17d) & 8) == 0) break;
    param_1 = (char *)CONCAT22(param_1._2_2_,(char *)param_1 + 1);
  }
  local_6 = *param_1;
  if (local_6 == '-') {
    param_1 = (char *)CONCAT22(param_1._2_2_,(char *)param_1 + 1);
    local_6 = *param_1;
    lVar2 = 0;
  }
  else if (local_6 == '+') {
    param_1 = (char *)CONCAT22(param_1._2_2_,(char *)param_1 + 1);
    local_6 = *param_1;
    lVar2 = 0;
  }
  while( true ) {
    local_a = (undefined2)lVar2;
    if ((*(byte *)(local_6 + 0x17d) & 4) == 0) break;
    lVar2 = FUN_1000_010e(lVar2,10,0);
    iVar1 = (int)local_6;
    param_1 = (char *)CONCAT22(param_1._2_2_,(char *)param_1 + 1);
    local_6 = *param_1;
    lVar2 = lVar2 + (iVar1 + -0x30);
  }
  return local_a;
}


// ---- FUN_1000_7380 @ 1000:7380

undefined2 __cdecl16far FUN_1000_7380(undefined2 *param_1)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  
  uVar5 = 0x1008;
  *param_1 = DAT_1008_0058;
  puVar2 = (undefined2 *)param_1;
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  if (DAT_1008_07c1 != 0x16) {
    puVar2[1] = (uint)DAT_1008_07c1;
  }
  puVar2[2] = (uint)DAT_1008_0070;
  puVar2[3] = DAT_1008_006a;
  puVar2[4] = DAT_1008_006c;
  puVar2[5] = DAT_1008_005e;
  puVar2[6] = (uint)DAT_1008_0071;
  puVar2[7] = (uint)DAT_1008_0072;
  uVar4 = 0x10a;
  uVar1 = M007_GETSTATE();
  puVar2[8] = uVar1;
  uVar5 = M007_GETSTATE(0x1010,0x109,uVar4,uVar5);
  puVar2[9] = uVar5;
  uVar5 = M007_GETSTATE(0x1010,0xe);
  puVar2[10] = uVar5;
  uVar5 = M007_GETSTATE(0x1010,0x106);
  puVar2[0xb] = uVar5;
  uVar5 = M007_GETSTATE(0x1010,0x107);
  puVar2[0xc] = uVar5;
  return 1;
}


// ---- RESTART_HPAPP @ 1000:744a

void __cdecl16far RESTART_HPAPP(void)

{
  DAT_1008_0056 = 0;
  FUN_1000_6084(0x1008);
  M007_PUTSTATE(0x1000,DAT_1008_07c1);
  M007_PUTSTATE(0x1010,0);
  DAT_1008_0071 = 0;
  DAT_1008_006e = 0;
  DAT_1008_0054 = 1;
  DAT_1008_0058 = 1;
  DAT_1008_006a = 0;
  return;
}


// ---- CLOSE_HPAPP @ 1000:749c

bool __cdecl16far CLOSE_HPAPP(void)

{
  int iVar1;
  undefined2 unaff_CS;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x1000;
  iVar1 = GETMODULEHANDLE(unaff_CS,0x7e44);
  if (iVar1 != 0) {
    FUN_1000_6052(0x17,0,0,uVar2,uVar3);
    DAT_1008_0058 = 0;
  }
  return iVar1 == 0;
}


// ---- FUN_1000_74e4 @ 1000:74e4

/* WARNING: Removing unreachable block (ram,0x10007599) */

void __cdecl16far FUN_1000_74e4(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined1 local_1e [2];
  undefined2 local_1c;
  int local_18;
  int local_14;
  int local_12;
  int local_e;
  
  uVar2 = 0x1008;
  FUN_1000_7380(local_1e);
  if ((((local_e == 0) || (local_12 == 1)) || (local_14 == 1)) || (local_18 == 1)) {
    M007_PUTSTATE(0x1000,0);
  }
  else {
    switch(local_1c) {
    case 0:
      M007_PUTSTATE(0x1000,0);
      break;
    case 1:
      M007_PUTSTATE(0x1000,1);
      break;
    case 2:
      M007_PUTSTATE(0x1000,0);
      break;
    case 3:
      M007_PUTSTATE(0x1000,0);
      break;
    case 4:
      iVar1 = M007_GETSTATE(0x1000,0x3a,uVar2);
      if ((iVar1 == 4) || (iVar1 == 5)) {
        M007_PUTSTATE(0x1010,0);
      }
      else {
        M007_PUTSTATE(0x1010,1);
      }
      break;
    case 5:
      M007_PUTSTATE(0x1000,1);
      break;
    case 6:
      M007_PUTSTATE(0x1000,0);
      break;
    case 7:
      M007_PUTSTATE(0x1000,0);
      break;
    case 8:
      M007_PUTSTATE(0x1000,2);
      break;
    case 9:
      M007_PUTSTATE(0x1000,0);
      break;
    case 10:
      M007_PUTSTATE(0x1000,2);
      break;
    case 0xb:
      M007_PUTSTATE(0x1000,0);
      break;
    case 0xc:
      M007_PUTSTATE(0x1000,2);
      break;
    case 0xd:
      M007_PUTSTATE(0x1000,2);
      break;
    case 0xe:
      M007_PUTSTATE(0x1000,2);
      break;
    case 0xf:
      M007_PUTSTATE(0x1000,0);
      break;
    case 0x10:
      M007_PUTSTATE(0x1000,0);
      break;
    case 0x11:
      M007_PUTSTATE(0x1000,0);
      break;
    case 0x12:
      M007_PUTSTATE(0x1000,0);
      break;
    case 0x13:
      M007_PUTSTATE(0x1000,0);
      break;
    case 0x14:
      M007_PUTSTATE(0x1000,0);
      break;
    case 0x15:
      M007_PUTSTATE(0x1000,0);
      break;
    case 0x16:
      M007_PUTSTATE(0x1000,0);
      break;
    case 0x17:
      M007_PUTSTATE(0x1000,0);
      break;
    case 0x18:
      M007_PUTSTATE(0x1000,0);
      break;
    case 0x19:
      M007_PUTSTATE(0x1000,0);
      break;
    case 0x1a:
      M007_PUTSTATE(0x1000,0);
      break;
    case 0x1b:
      M007_PUTSTATE(0x1000,0);
      break;
    default:
      M007_PUTSTATE(0x1000,0);
    }
  }
  return;
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


// ---- GETMODULEHANDLE @ 1010:0028

/* WARNING: Control flow encountered bad instruction data */

void GETMODULEHANDLE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GETMODULEUSAGE @ 1010:002c

/* WARNING: Control flow encountered bad instruction data */

void GETMODULEUSAGE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- _LCLOSE @ 1010:0030

/* WARNING: Control flow encountered bad instruction data */

void _LCLOSE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- _LREAD @ 1010:0034

/* WARNING: Control flow encountered bad instruction data */

void _LREAD(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- _LCREAT @ 1010:0038

/* WARNING: Control flow encountered bad instruction data */

void _LCREAT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- _LOPEN @ 1010:003c

/* WARNING: Control flow encountered bad instruction data */

void _LOPEN(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- _LWRITE @ 1010:0040

/* WARNING: Control flow encountered bad instruction data */

void _LWRITE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- LSTRCPY @ 1010:0044

/* WARNING: Control flow encountered bad instruction data */

void LSTRCPY(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- LSTRCAT @ 1010:0048

/* WARNING: Control flow encountered bad instruction data */

void LSTRCAT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- LSTRLEN @ 1010:004c

/* WARNING: Control flow encountered bad instruction data */

void LSTRLEN(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- INITTASK @ 1010:0050

/* WARNING: Control flow encountered bad instruction data */

void INITTASK(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- DOS3CALL @ 1010:0054

/* WARNING: Control flow encountered bad instruction data */

void DOS3CALL(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- __AHSHIFT @ 1010:0058

/* WARNING: Control flow encountered bad instruction data */

void __AHSHIFT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- __AHINCR @ 1010:005c

/* WARNING: Control flow encountered bad instruction data */

void __AHINCR(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GETPRIVATEPROFILESTRING @ 1010:0060

/* WARNING: Control flow encountered bad instruction data */

void GETPRIVATEPROFILESTRING(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- WRITEPRIVATEPROFILESTRING @ 1010:0064

/* WARNING: Control flow encountered bad instruction data */

void WRITEPRIVATEPROFILESTRING(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GETDOSENVIRONMENT @ 1010:0068

/* WARNING: Control flow encountered bad instruction data */

void GETDOSENVIRONMENT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GETWINDOWSDIRECTORY @ 1010:006c

/* WARNING: Control flow encountered bad instruction data */

void GETWINDOWSDIRECTORY(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- FATALAPPEXIT @ 1010:0070

/* WARNING: Control flow encountered bad instruction data */

void FATALAPPEXIT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- __WINFLAGS @ 1010:0074

/* WARNING: Control flow encountered bad instruction data */

void __WINFLAGS(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- MESSAGEBOX @ 1010:0078

/* WARNING: Control flow encountered bad instruction data */

void MESSAGEBOX(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GETTICKCOUNT @ 1010:007c

/* WARNING: Control flow encountered bad instruction data */

void GETTICKCOUNT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GETCURSORPOS @ 1010:0080

/* WARNING: Control flow encountered bad instruction data */

void GETCURSORPOS(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- FINDWINDOW @ 1010:0084

/* WARNING: Control flow encountered bad instruction data */

void FINDWINDOW(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- SETCURSORPOS @ 1010:0088

/* WARNING: Control flow encountered bad instruction data */

void SETCURSORPOS(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- MESSAGEBEEP @ 1010:008c

/* WARNING: Control flow encountered bad instruction data */

void MESSAGEBEEP(void)

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


// ---- POSTMESSAGE @ 1010:0094

/* WARNING: Control flow encountered bad instruction data */

void POSTMESSAGE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- SENDMESSAGE @ 1010:0098

/* WARNING: Control flow encountered bad instruction data */

void SENDMESSAGE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- TRANSLATEMESSAGE @ 1010:009c

/* WARNING: Control flow encountered bad instruction data */

void TRANSLATEMESSAGE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- DISPATCHMESSAGE @ 1010:00a0

/* WARNING: Control flow encountered bad instruction data */

void DISPATCHMESSAGE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- REGISTERWINDOWMESSAGE @ 1010:00a4

/* WARNING: Control flow encountered bad instruction data */

void REGISTERWINDOWMESSAGE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- _WSPRINTF @ 1010:00a8

/* WARNING: Control flow encountered bad instruction data */

void _WSPRINTF(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- LSTRCMP @ 1010:00ac

/* WARNING: Control flow encountered bad instruction data */

void LSTRCMP(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- __FPMATH @ 1010:00b0

/* WARNING: Control flow encountered bad instruction data */

void __FPMATH(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- M007_PUTVALUE @ 1010:00b4

/* WARNING: Control flow encountered bad instruction data */

void M007_PUTVALUE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- M007_GETVALUE @ 1010:00b8

/* WARNING: Control flow encountered bad instruction data */

void M007_GETVALUE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- M007_PUTLOW @ 1010:00bc

/* WARNING: Control flow encountered bad instruction data */

void M007_PUTLOW(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- M007_PUTHIGH @ 1010:00c0

/* WARNING: Control flow encountered bad instruction data */

void M007_PUTHIGH(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- M007_PUTSTATE @ 1010:00c4

/* WARNING: Control flow encountered bad instruction data */

void M007_PUTSTATE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- M007_GETSTATE @ 1010:00c8

/* WARNING: Control flow encountered bad instruction data */

void M007_GETSTATE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- UIF_MESSAGE @ 1010:00cc

/* WARNING: Control flow encountered bad instruction data */

void UIF_MESSAGE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- RESTORE_MASTER_CONFIG @ 1010:00d0

/* WARNING: Control flow encountered bad instruction data */

void RESTORE_MASTER_CONFIG(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GET_MASTER_CONFIG @ 1010:00d4

/* WARNING: Control flow encountered bad instruction data */

void GET_MASTER_CONFIG(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- UIF_LOG @ 1010:00d8

/* WARNING: Control flow encountered bad instruction data */

void UIF_LOG(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GETLEOPATH @ 1010:00dc

/* WARNING: Control flow encountered bad instruction data */

void GETLEOPATH(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GETLEOINIFILEPATH @ 1010:00e0

/* WARNING: Control flow encountered bad instruction data */

void GETLEOINIFILEPATH(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- SWITCHSCINT @ 1010:00e4

/* WARNING: Control flow encountered bad instruction data */

void SWITCHSCINT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- DOCOMMANDBEAM_OFF @ 1010:00e8

/* WARNING: Control flow encountered bad instruction data */

void DOCOMMANDBEAM_OFF(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- DOCOMMANDBEAM_ON @ 1010:00ec

/* WARNING: Control flow encountered bad instruction data */

void DOCOMMANDBEAM_ON(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- RESTORE_EHT_CONFIG @ 1010:00f0

/* WARNING: Control flow encountered bad instruction data */

void RESTORE_EHT_CONFIG(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GET_EHT_CONFIG @ 1010:00f4

/* WARNING: Control flow encountered bad instruction data */

void GET_EHT_CONFIG(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GET_EO_CONFIG @ 1010:00f8

/* WARNING: Control flow encountered bad instruction data */

void GET_EO_CONFIG(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- RESTORE_EO_CONFIG @ 1010:00fc

/* WARNING: Control flow encountered bad instruction data */

void RESTORE_EO_CONFIG(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- RESTORE_DISPLAY_CONFIG @ 1010:0100

/* WARNING: Control flow encountered bad instruction data */

void RESTORE_DISPLAY_CONFIG(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GET_DISPLAY_CONFIG @ 1010:0104

/* WARNING: Control flow encountered bad instruction data */

void GET_DISPLAY_CONFIG(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_28 @ 1010:0108

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_28(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_29 @ 1010:010c

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_29(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- RESTORE_STAGE_CONFIG @ 1010:0110

/* WARNING: Control flow encountered bad instruction data */

void RESTORE_STAGE_CONFIG(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GET_STAGE_CONFIG @ 1010:0114

/* WARNING: Control flow encountered bad instruction data */

void GET_STAGE_CONFIG(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- SWITCHSTAGE_MOTOR @ 1010:0118

/* WARNING: Control flow encountered bad instruction data */

void SWITCHSTAGE_MOTOR(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- STAGEINSAFEPOSITION @ 1010:011c

/* WARNING: Control flow encountered bad instruction data */

void STAGEINSAFEPOSITION(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- CHANGEINVACSTATUS @ 1010:0120

/* WARNING: Control flow encountered bad instruction data */

void CHANGEINVACSTATUS(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- RESTORE_ACQUIRE_CONFIG @ 1010:0124

/* WARNING: Control flow encountered bad instruction data */

void RESTORE_ACQUIRE_CONFIG(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GET_ACQUIRE_CONFIG @ 1010:0128

/* WARNING: Control flow encountered bad instruction data */

void GET_ACQUIRE_CONFIG(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- DOCOMMANDFREEZE_ALL @ 1010:012c

/* WARNING: Control flow encountered bad instruction data */

void DOCOMMANDFREEZE_ALL(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- DOCOMMANDUNFREEZE_ALL @ 1010:0130

/* WARNING: Control flow encountered bad instruction data */

void DOCOMMANDUNFREEZE_ALL(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- SWITCHFREEZE_ON @ 1010:0134

/* WARNING: Control flow encountered bad instruction data */

void SWITCHFREEZE_ON(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_300 @ 1010:0138

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_300(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_301 @ 1010:013c

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_301(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_302 @ 1010:0140

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_302(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_303 @ 1010:0144

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_303(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_304 @ 1010:0148

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_304(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_305 @ 1010:014c

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_305(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_306 @ 1010:0150

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_306(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_307 @ 1010:0154

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_307(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_308 @ 1010:0158

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_308(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_309 @ 1010:015c

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_309(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_310 @ 1010:0160

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_310(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_311 @ 1010:0164

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_311(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_312 @ 1010:0168

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_312(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_313 @ 1010:016c

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_313(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_314 @ 1010:0170

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_314(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_315 @ 1010:0174

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_315(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_316 @ 1010:0178

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_316(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_323 @ 1010:017c

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_323(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_324 @ 1010:0180

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_324(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_328 @ 1010:0184

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_328(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_330 @ 1010:0188

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_330(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_331 @ 1010:018c

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_331(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


