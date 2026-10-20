// Decompiled with Ghidra from m500.dll
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
  
  DAT_1010_034c = 0x1010;
  uVar3 = unaff_CS;
  DAT_1010_034a = unaff_DI;
  DAT_1010_034e = in_CX;
  DAT_1010_0350 = in_BX;
  DAT_1010_0352 = unaff_SI;
  if (in_CX != 0) {
    uVar3 = 0x1018;
    iVar2 = LOCALINIT(unaff_CS,in_CX,0);
    if (iVar2 == 0) {
      return;
    }
  }
  uVar4 = 0x89;
  uVar3 = GETVERSION(uVar3);
  DAT_1010_0370 = CONCAT11((char)uVar3,(char)((uint)uVar3 >> 8));
  if ((DAT_1000_0010 & 1) == 0) {
    pcVar1 = (code *)swi(0x21);
    DAT_1010_0374 = (*pcVar1)();
  }
  else {
    uVar4 = 0x1000;
    DAT_1010_0374 = DOS3CALL(0x1000);
  }
  DAT_1010_0372 = CONCAT11((char)DAT_1010_0374,(char)((uint)DAT_1010_0374 >> 8));
  if ((DAT_1000_0010 & 1) == 0) {
    DAT_1010_0377 = 0;
  }
  FUN_1000_00f8(uVar4);
  FUN_1000_030e();
  DAT_1010_0354 = DAT_1010_0354 + '\x01';
  FUN_1000_02da(DAT_1010_0390,DAT_1010_0392,DAT_1010_0394);
  return;
}


// ---- FUN_1000_00df @ 1000:00df

undefined2 __stdcall16far FUN_1000_00df(void)

{
  return 1;
}


// ---- FUN_1000_00f8 @ 1000:00f8

void __cdecl16near FUN_1000_00f8(void)

{
  bool bVar1;
  
  if (DAT_1010_09f4 != 0) {
    bVar1 = false;
    (*DAT_1010_09f2)();
    if (bVar1) {
      FUN_1000_0378();
      return;
    }
  }
  FUN_1000_01b9();
  FUN_1000_01aa();
  FUN_1000_01b9();
  return;
}


// ---- FUN_1000_012e @ 1000:012e

undefined2 __cdecl16near FUN_1000_012e(void)

{
  DAT_1010_039d = 1;
  FUN_1000_01aa();
  FUN_1000_01b9();
  FUN_1000_01aa();
  FUN_1000_01aa();
  FUN_1000_01b9();
  FUN_1000_037e();
  FUN_1000_037e();
  return 0x100;
}


// ---- FUN_1000_01aa @ 1000:01aa

void __cdecl16near FUN_1000_01aa(void)

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


// ---- FUN_1000_01b9 @ 1000:01b9

void __cdecl16near FUN_1000_01b9(void)

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


// ---- thunk_FUN_1000_0380 @ 1000:01cc

undefined4 __cdecl16near thunk_FUN_1000_0380(byte *param_1)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  
  iVar5 = 0;
  iVar7 = 0;
  do {
    do {
      pbVar1 = param_1;
      param_1 = param_1 + 1;
      bVar2 = *pbVar1;
    } while (bVar2 == 0x20);
  } while (bVar2 == 9);
  if ((bVar2 != 0x2d) && (bVar4 = bVar2, bVar2 != 0x2b)) goto LAB_1000_03a0;
  while( true ) {
    pbVar1 = param_1;
    param_1 = param_1 + 1;
    bVar4 = *pbVar1;
LAB_1000_03a0:
    if ((0x39 < bVar4) || (bVar4 < 0x30)) break;
    uVar8 = iVar7 * 2;
    uVar6 = iVar5 << 1 | (uint)(iVar7 < 0);
    iVar5 = iVar7 << 2;
    uVar9 = iVar7 * 8;
    uVar3 = iVar7 * 10;
    iVar7 = uVar3 + (byte)(bVar4 - 0x30);
    iVar5 = ((uVar6 << 1 | (uint)((int)uVar8 < 0)) << 1 | (uint)(iVar5 < 0)) + uVar6 +
            (uint)CARRY2(uVar9,uVar8) + (uint)CARRY2(uVar3,(uint)(byte)(bVar4 - 0x30));
  }
  if (bVar2 == 0x2d) {
    bVar10 = iVar7 != 0;
    iVar7 = -iVar7;
    iVar5 = -(iVar5 + (uint)bVar10);
  }
  return CONCAT22(iVar5,iVar7);
}


// ---- FUN_1000_01d0 @ 1000:01d0

int __cdecl16near FUN_1000_01d0(uint param_1)

{
  return (param_1 ^ (int)param_1 >> 0xf) - ((int)param_1 >> 0xf);
}


// ---- FUN_1000_01e0 @ 1000:01e0

void FUN_1000_01e0(void)

{
  FUN_1000_0d3e();
  return;
}


// ---- FUN_1000_01ec @ 1000:01ec

void FUN_1000_01ec(void)

{
  FUN_1000_0d2b();
  return;
}


// ---- FUN_1000_0218 @ 1000:0218

void FUN_1000_0218(void)

{
  FUN_1000_0d3e();
  return;
}


// ---- FUN_1000_021e @ 1000:021e

void FUN_1000_021e(void)

{
  FUN_1000_0d3e();
  return;
}


// ---- FUN_1000_0223 @ 1000:0223

void FUN_1000_0223(void)

{
  FUN_1000_0d3e();
  return;
}


// ---- thunk_FUN_1000_0d3e @ 1000:023b

void __cdecl16near thunk_FUN_1000_0d3e(void)

{
  FUN_1000_0d3e();
  return;
}


// ---- FUN_1000_0243 @ 1000:0243

void FUN_1000_0243(void)

{
  thunk_FUN_1000_0d3e();
  return;
}


// ---- FUN_1000_0264 @ 1000:0264

undefined4 __cdecl16near FUN_1000_0264(void)

{
  longdouble in_ST0;
  
  return (long)(sqword)ROUND(in_ST0);
}


// ---- FUN_1000_0298 @ 1000:0298

undefined2 __cdecl16near
FUN_1000_0298(undefined2 param_1,undefined2 param_2,undefined2 param_3,uint param_4)

{
  DAT_1010_0362 = param_1;
  DAT_1010_0364 = param_2;
  DAT_1010_0366 = param_3;
  DAT_1010_0368 = param_4 & 0x7fff;
  return 0x362;
}


// ---- FUN_1000_02da @ 1000:02da

void __cdecl16near FUN_1000_02da(void)

{
  FUN_1008_0000(DAT_1010_0350,DAT_1010_0352,DAT_1010_034e,DAT_1010_034c,DAT_1010_034a);
  return;
}


// ---- FUN_1000_02f8 @ 1000:02f8

void __cdecl16near FUN_1000_02f8(void)

{
  FUN_1000_0eb3(0xfc);
  FUN_1000_0eb3(0xff);
  return;
}


// ---- FUN_1000_030e @ 1000:030e

void __cdecl16near FUN_1000_030e(void)

{
  char *pcVar1;
  char cVar2;
  undefined2 uVar3;
  undefined2 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  undefined4 uVar10;
  
  uVar10 = GETDOSENVIRONMENT();
  iVar6 = (int)((ulong)uVar10 >> 0x10);
  if ((int)uVar10 != 0) {
    iVar6 = 0;
  }
  iVar7 = 0;
  pcVar8 = (char *)0x0;
  iVar5 = -1;
  if (iVar6 != 0) {
    cVar2 = *(char *)0x0;
    while (cVar2 != '\0') {
      do {
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pcVar1 = pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (*pcVar1 != '\0');
      iVar7 = iVar7 + 1;
      pcVar1 = pcVar8;
      pcVar8 = pcVar8 + 1;
      cVar2 = *pcVar1;
    }
  }
  uVar3 = func_0x10000f06();
  puVar4 = (undefined2 *)func_0x10000f06(uVar3);
  pcVar8 = (char *)0x0;
  pcVar9 = (char *)0x1010;
  DAT_1010_0394 = puVar4;
  for (; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar4 = pcVar9;
    puVar4 = puVar4 + 1;
    do {
      pcVar1 = pcVar8;
      pcVar8 = pcVar8 + 1;
      cVar2 = *pcVar1;
      pcVar1 = pcVar9;
      pcVar9 = pcVar9 + 1;
      *pcVar1 = cVar2;
    } while (cVar2 != '\0');
  }
  *puVar4 = 0;
  return;
}


// ---- FUN_1000_0378 @ 1000:0378

void FUN_1000_0378(void)

{
  FUN_1000_0ec6();
  return;
}


// ---- FUN_1000_037e @ 1000:037e

void __cdecl16near FUN_1000_037e(void)

{
  return;
}


// ---- FUN_1000_0380 @ 1000:0380

undefined4 __cdecl16near FUN_1000_0380(byte *param_1)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  
  iVar5 = 0;
  iVar7 = 0;
  do {
    do {
      pbVar1 = param_1;
      param_1 = param_1 + 1;
      bVar2 = *pbVar1;
    } while (bVar2 == 0x20);
  } while (bVar2 == 9);
  if ((bVar2 != 0x2d) && (bVar4 = bVar2, bVar2 != 0x2b)) goto LAB_1000_03a0;
  while( true ) {
    pbVar1 = param_1;
    param_1 = param_1 + 1;
    bVar4 = *pbVar1;
LAB_1000_03a0:
    if ((0x39 < bVar4) || (bVar4 < 0x30)) break;
    uVar8 = iVar7 * 2;
    uVar6 = iVar5 << 1 | (uint)(iVar7 < 0);
    iVar5 = iVar7 << 2;
    uVar9 = iVar7 * 8;
    uVar3 = iVar7 * 10;
    iVar7 = uVar3 + (byte)(bVar4 - 0x30);
    iVar5 = ((uVar6 << 1 | (uint)((int)uVar8 < 0)) << 1 | (uint)(iVar5 < 0)) + uVar6 +
            (uint)CARRY2(uVar9,uVar8) + (uint)CARRY2(uVar3,(uint)(byte)(bVar4 - 0x30));
  }
  if (bVar2 == 0x2d) {
    bVar10 = iVar7 != 0;
    iVar7 = -iVar7;
    iVar5 = -(iVar5 + (uint)bVar10);
  }
  return CONCAT22(iVar5,iVar7);
}


// ---- FUN_1000_079a @ 1000:079a

void __cdecl16near FUN_1000_079a(char *param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  undefined2 uVar5;
  undefined4 local_6;
  
  while( true ) {
    uVar5 = (undefined2)((ulong)param_1 >> 0x10);
    if ((*param_1 == '\0') || (*param_1 == '.')) break;
    param_1 = (char *)CONCAT22(uVar5,(char *)param_1 + 1);
  }
  if (*param_1 != '\0') {
    do {
      pcVar2 = (char *)param_1;
      param_1._0_2_ = pcVar2 + 1;
      pcVar3 = (char *)param_1;
      if ((*(char *)param_1 == '\0') || (*(char *)param_1 == 'e')) break;
    } while (*(char *)param_1 != 'E');
    param_1 = (char *)CONCAT22(uVar5,pcVar2);
    local_6 = (char *)CONCAT22(uVar5,pcVar3);
    while( true ) {
      if (*(char *)param_1 != '0') break;
      param_1 = (char *)CONCAT22(param_1._2_2_,(char *)param_1 + -1);
    }
    if (*(char *)param_1 == '.') {
      param_1 = (char *)CONCAT22(param_1._2_2_,(char *)param_1 + -1);
    }
    do {
      pcVar4 = local_6;
      local_6 = (char *)CONCAT22(local_6._2_2_,(char *)local_6 + 1);
      cVar1 = *pcVar4;
      param_1 = (char *)CONCAT22(param_1._2_2_,(char *)param_1 + 1);
      *param_1 = cVar1;
    } while (cVar1 != '\0');
  }
  return;
}


// ---- FUN_1000_0814 @ 1000:0814

undefined2 __cdecl16near FUN_1000_0814(double *param_1)

{
  if (DAT_1010_0c24 <= *param_1) {
    return 1;
  }
  return 0;
}


// ---- FUN_1000_0842 @ 1000:0842

void __cdecl16near FUN_1000_0842(int param_1,float *param_2,undefined2 param_3)

{
  undefined2 *puVar1;
  double *pdVar2;
  float *pfVar3;
  undefined2 uVar4;
  
  if (param_1 != 0) {
    puVar1 = (undefined2 *)FUN_1000_0f42(param_3);
    uVar4 = (undefined2)((ulong)param_2 >> 0x10);
    pfVar3 = (float *)param_2;
    *(undefined2 *)param_2 = *puVar1;
    *(undefined2 *)((int)pfVar3 + 2) = puVar1[1];
    *(undefined2 *)(pfVar3 + 1) = puVar1[2];
    *(undefined2 *)((int)pfVar3 + 6) = puVar1[3];
    return;
  }
  pdVar2 = (double *)FUN_1000_0f42(param_3);
  *param_2 = (float)*pdVar2;
  return;
}


// ---- FUN_1000_0884 @ 1000:0884

undefined1 * __cdecl16near
FUN_1000_0884(undefined2 *param_1,undefined1 *param_2,undefined2 param_3,int param_4,int param_5)

{
  undefined1 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 uVar4;
  undefined4 local_8;
  int *local_4;
  
  if (DAT_1010_066c == '\0') {
    uVar4 = (undefined2)((ulong)param_1 >> 0x10);
    puVar2 = (undefined2 *)param_1;
    local_4 = (int *)FUN_1000_17ca(*param_1,puVar2[1],puVar2[2],puVar2[3]);
    FUN_1000_0f84(param_2 + (uint)(0 < param_4) + (uint)(*local_4 == 0x2d),param_3,param_4 + 1,
                  local_4);
  }
  else {
    local_4 = DAT_1010_10f6;
    FUN_1000_0cac(0 < param_4,param_2 + (*DAT_1010_10f6 == 0x2d),param_3);
  }
  puVar1 = param_2;
  if (*local_4 == 0x2d) {
    *param_2 = 0x2d;
    puVar1 = param_2 + 1;
  }
  local_8 = (char *)CONCAT22(param_3,puVar1);
  if (0 < param_4) {
    *local_8 = puVar1[1];
    local_8 = (char *)CONCAT22(param_3,puVar1 + 1);
    puVar1[1] = 0x2e;
  }
  puVar1 = (undefined1 *)
           FUN_1000_1032((undefined1 *)local_8 + param_4 + (uint)(DAT_1010_066c == '\0'),
                         local_8._2_2_,0x671,0x1010);
  local_8 = (char *)CONCAT22(local_8._2_2_,puVar1);
  if (param_5 != 0) {
    *local_8 = 0x45;
  }
  local_8 = (char *)CONCAT22(local_8._2_2_,puVar1 + 1);
  if (*(char *)local_4[3] != '0') {
    iVar3 = local_4[1] + -1;
    if (iVar3 < 0) {
      iVar3 = -iVar3;
      *local_8 = 0x2d;
    }
    local_8 = (char *)CONCAT22(local_8._2_2_,puVar1 + 2);
    if (99 < iVar3) {
      *local_8 = *local_8 + (char)(iVar3 / 100);
      iVar3 = iVar3 % 100;
    }
    local_8 = (char *)CONCAT22(local_8._2_2_,puVar1 + 3);
    if (9 < iVar3) {
      *local_8 = *local_8 + (char)(iVar3 / 10);
      iVar3 = iVar3 % 10;
    }
    local_8 = (char *)CONCAT22(local_8._2_2_,puVar1 + 4);
    *local_8 = *local_8 + (char)iVar3;
  }
  return (undefined1 *)CONCAT22(param_3,param_2);
}


// ---- FUN_1000_09fa @ 1000:09fa

void __cdecl16near
FUN_1000_09fa(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5,undefined2 param_6)

{
  DAT_1010_066c = 1;
  FUN_1000_0884(param_1,param_2,param_3,param_4,param_5,param_6);
  DAT_1010_066c = 0;
  return;
}


// ---- FUN_1000_0a24 @ 1000:0a24

undefined1 * __cdecl16near
FUN_1000_0a24(undefined2 *param_1,undefined1 *param_2,undefined2 param_3,int param_4)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 uVar5;
  undefined4 local_8;
  int *local_4;
  
  iVar3 = DAT_1010_066e;
  if (DAT_1010_066c == '\0') {
    uVar5 = (undefined2)((ulong)param_1 >> 0x10);
    puVar4 = (undefined2 *)param_1;
    local_4 = (int *)FUN_1000_17ca(*param_1,puVar4[1],puVar4[2],puVar4[3]);
    FUN_1000_0f84(param_2 + (*local_4 == 0x2d),param_3,local_4[1] + param_4,local_4);
  }
  else {
    local_4 = DAT_1010_10f6;
    iVar1 = *DAT_1010_10f6;
    if (param_4 == DAT_1010_066e) {
      param_2[DAT_1010_066e + (uint)(iVar1 == 0x2d)] = 0x30;
      param_2[iVar3 + (uint)(iVar1 == 0x2d) + 1] = 0;
    }
  }
  puVar2 = param_2;
  if (*local_4 == 0x2d) {
    *param_2 = 0x2d;
    puVar2 = param_2 + 1;
  }
  local_8 = (undefined1 *)CONCAT22(param_3,puVar2);
  if (local_4[1] < 1) {
    FUN_1000_0cac(1,puVar2,param_3);
    puVar2 = puVar2 + 1;
    *local_8 = 0x30;
  }
  else {
    puVar2 = puVar2 + local_4[1];
  }
  local_8 = (undefined1 *)CONCAT22(param_3,puVar2);
  if (0 < param_4) {
    FUN_1000_0cac(1,puVar2,param_3);
    *local_8 = 0x2e;
    if (local_4[1] < 0) {
      if (DAT_1010_066c == '\0') {
        iVar3 = -local_4[1];
        if (-param_4 != local_4[1] && param_4 <= iVar3) {
          iVar3 = param_4;
        }
      }
      else {
        iVar3 = -local_4[1];
      }
      FUN_1000_0cac(iVar3,puVar2 + 1,param_3);
      FUN_1000_106e(puVar2 + 1,param_3,0x30,iVar3);
    }
  }
  return (undefined1 *)CONCAT22(param_3,param_2);
}


// ---- FUN_1000_0b64 @ 1000:0b64

void __cdecl16near
FUN_1000_0b64(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5)

{
  DAT_1010_066c = 1;
  FUN_1000_0a24(param_1,param_2,param_3,param_4,param_5);
  DAT_1010_066c = 0;
  return;
}


// ---- FUN_1000_0b8a @ 1000:0b8a

void __cdecl16near
FUN_1000_0b8a(undefined2 *param_1,int param_2,undefined2 param_3,int param_4,undefined2 param_5)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined4 local_6;
  
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  puVar4 = (undefined2 *)param_1;
  DAT_1010_10f6 = (int *)FUN_1000_17ca(*param_1,puVar4[1],puVar4[2],puVar4[3]);
  DAT_1010_066e = DAT_1010_10f6[1] + -1;
  pcVar2 = (char *)((uint)(*DAT_1010_10f6 == 0x2d) + param_2);
  local_6 = (char *)CONCAT22(param_3,pcVar2);
  FUN_1000_0f84(pcVar2,param_3,param_4,DAT_1010_10f6);
  iVar3 = DAT_1010_10f6[1] + -1;
  DAT_1010_0670 = DAT_1010_066e < iVar3;
  DAT_1010_066e = iVar3;
  if ((-5 < iVar3) && (iVar3 < param_4)) {
    if ((bool)DAT_1010_0670) {
      do {
        pcVar1 = local_6;
        uVar6 = (undefined2)((ulong)local_6 >> 0x10);
        pcVar2 = (char *)local_6;
        local_6 = (char *)CONCAT22(uVar6,(char *)local_6 + 1);
      } while (*pcVar1 != '\0');
      pcVar2[-1] = '\0';
    }
    FUN_1000_0b64(puVar4,uVar5,param_2,param_3,param_4);
    return;
  }
  FUN_1000_09fa(puVar4,uVar5,param_2,param_3,param_4,param_5);
  return;
}


// ---- FUN_1000_0c4e @ 1000:0c4e

void __cdecl16near
FUN_1000_0c4e(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             int param_5,undefined2 param_6,undefined2 param_7)

{
  if ((param_5 != 0x65) && (param_5 != 0x45)) {
    if (param_5 == 0x66) {
      FUN_1000_0a24(param_1,param_2,param_3,param_4,param_6);
      return;
    }
    FUN_1000_0b8a(param_1,param_2,param_3,param_4,param_6,param_7);
    return;
  }
  FUN_1000_0884(param_1,param_2,param_3,param_4,param_6,param_7);
  return;
}


// ---- FUN_1000_0cac @ 1000:0cac

void FUN_1000_0cac(int param_1,int param_2,undefined2 param_3)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = FUN_1000_1018(param_2,param_3);
    FUN_1000_10b6(param_2 + param_1,param_3,param_2,param_3,iVar1 + 1);
  }
  return;
}


// ---- FUN_1000_0ce0 @ 1000:0ce0
// decompilation failed: Exception while decompiling 1000:0ce0: process: timeout


// ---- FUN_1000_0d2b @ 1000:0d2b
// decompilation failed: Exception while decompiling 1000:0d2b: process: timeout


// ---- FUN_1000_0d3e @ 1000:0d3e
// decompilation failed: Exception while decompiling 1000:0d3e: process: timeout


// ---- FUN_1000_0e88 @ 1000:0e88

int * FUN_1000_0e88(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  piVar3 = (int *)&DAT_1010_0c34;
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


// ---- FUN_1000_0eb3 @ 1000:0eb3

void FUN_1000_0eb3(void)

{
  return;
}


// ---- FUN_1000_0ec6 @ 1000:0ec6

void __cdecl16near FUN_1000_0ec6(void)

{
  char *pcVar1;
  undefined1 uVar2;
  int in_AX;
  char *pcVar3;
  int iVar4;
  undefined1 extraout_AH;
  int in_CX;
  undefined2 extraout_DX;
  undefined2 uVar5;
  char *unaff_DI;
  undefined2 unaff_ES;
  undefined2 unaff_CS;
  undefined2 uVar6;
  
  do {
    FUN_1000_02f8(in_AX,in_AX);
    FUN_1000_0eb3();
    pcVar3 = (char *)FUN_1000_0e88();
    uVar5 = 0;
    if (pcVar3 != (char *)0x0) {
      iVar4 = 9;
      if (*pcVar3 == 'M') {
        iVar4 = 0xf;
      }
      pcVar3 = pcVar3 + iVar4;
      unaff_ES = 0x1010;
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
    uVar6 = 0;
    FATALAPPEXIT(unaff_CS,pcVar3,0x1010);
    unaff_CS = 0x1018;
    FATALEXIT(0x1018,0xff,uVar6);
    unaff_DI[-0x75] = unaff_DI[-0x75] + (char)extraout_DX;
    uVar6 = DAT_1010_0826;
    uVar2 = in(extraout_DX);
    LOCK();
    DAT_1010_0826 = 0x1000;
    UNLOCK();
    in_AX = in_CX;
    iVar4 = FUN_1000_1e00(CONCAT11(extraout_AH,uVar2),uVar6,in_CX,unaff_ES,uVar5);
    DAT_1010_0826 = uVar6;
    in_CX = in_AX;
    if (iVar4 != 0) {
      return;
    }
  } while( true );
}


// ---- FUN_1000_0f42 @ 1000:0f42

void __cdecl16near FUN_1000_0f42(char *param_1)

{
  undefined2 uVar1;
  int iVar2;
  
  while ((*(byte *)(*param_1 + 0x39f) & 8) != 0) {
    param_1 = param_1 + 1;
  }
  uVar1 = FUN_1000_194a(param_1,0,0);
  iVar2 = FUN_1000_1daa(param_1,uVar1);
  DAT_1010_129a = *(undefined2 *)(iVar2 + 8);
  DAT_1010_129c = *(undefined2 *)(iVar2 + 10);
  DAT_1010_129e = *(undefined2 *)(iVar2 + 0xc);
  DAT_1010_12a0 = *(undefined2 *)(iVar2 + 0xe);
  return;
}


// ---- FUN_1000_0f84 @ 1000:0f84

void __cdecl16near FUN_1000_0f84(char *param_1,int param_2,int param_3)

{
  char cVar1;
  char *pcVar2;
  undefined2 uVar3;
  char *pcVar4;
  char *pcVar5;
  undefined2 uVar6;
  undefined4 local_6;
  
  pcVar5 = (char *)*(undefined2 *)(param_3 + 6);
  uVar6 = (undefined2)((ulong)param_1 >> 0x10);
  pcVar4 = (char *)param_1;
  *param_1 = '0';
  local_6 = (char *)CONCAT22(uVar6,pcVar4 + 1);
  for (; pcVar2 = local_6, uVar3 = local_6._2_2_, 0 < param_2; param_2 = param_2 + -1) {
    if (*pcVar5 == '\0') {
      cVar1 = '0';
    }
    else {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    }
    local_6 = (char *)CONCAT22(local_6._2_2_,(char *)local_6 + 1);
    *pcVar2 = cVar1;
  }
  *local_6 = '\0';
  if ((-1 < param_2) && ('4' < *pcVar5)) {
    while( true ) {
      pcVar5 = (char *)local_6 + -1;
      local_6 = (char *)ZEXT24(pcVar5);
      if (*pcVar5 != '9') break;
      *pcVar5 = '0';
    }
    *pcVar5 = *pcVar5 + '\x01';
  }
  if (*param_1 == '1') {
    *(int *)(param_3 + 2) = *(int *)(param_3 + 2) + 1;
  }
  else {
    FUN_1000_1032(pcVar4,uVar6,pcVar4 + 1,uVar6);
  }
  return;
}


// ---- FUN_1000_1018 @ 1000:1018

uint __cdecl16far FUN_1000_1018(char *param_1)

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


// ---- FUN_1000_1032 @ 1000:1032

void __cdecl16far FUN_1000_1032(char *param_1,char *param_2)

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


// ---- FUN_1000_106e @ 1000:106e

undefined2 * __cdecl16far FUN_1000_106e(undefined2 *param_1,undefined1 param_2,uint param_3)

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


// ---- FUN_1000_10b6 @ 1000:10b6

undefined2 * __cdecl16far FUN_1000_10b6(undefined2 *param_1,undefined2 *param_2,uint param_3)

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
    lVar15 = FUN_1000_1966(puVar10,iVar13,puVar8,iVar14);
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
          iVar14 = iVar14 + 0x58;
        }
        if (puVar12 == (undefined2 *)0x0) {
          iVar13 = iVar13 + 0x58;
        }
      }
    }
    else {
      uVar6 = param_3 - 1;
      puVar9 = (undefined1 *)((int)puVar8 + uVar6);
      if (CARRY2((uint)puVar8,uVar6)) {
        iVar14 = iVar14 + 0x58;
      }
      puVar11 = (undefined1 *)((int)puVar10 + uVar6);
      if (CARRY2((uint)puVar10,uVar6)) {
        iVar13 = iVar13 + 0x58;
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
          iVar14 = iVar14 + -0x58;
        }
        if (puVar11 == (undefined1 *)0xffff) {
          iVar13 = iVar13 + -0x58;
        }
      }
    }
  }
  return puVar10;
}


// ---- FUN_1000_1180 @ 1000:1180

void FUN_1000_1180(void)

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
                    /* WARNING: Could not recover jumptable at 0x100011c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*(undefined2 *)
             (in_DX + *(char *)(ulong)((byte)((bVar2 & 7) << 1 | (char)bVar2 < '\0') + 0x6c3) + 0x10
             ))();
  return;
}


// ---- FUN_1000_11c2 @ 1000:11c2

void FUN_1000_11c2(void)

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
                    /* WARNING: Could not recover jumptable at 0x10001223. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*(undefined2 *)
             (in_DX + (char)(*(byte *)(ulong)(((byte)(cVar2 << 1 | cVar2 < '\0') & 0xf) + 0x6c3) |
                            *(char *)(ulong)((byte)((bVar3 & 7) << 1 | (char)bVar3 < '\0') + 0x6c3)
                            << 2) + 0x10))();
  return;
}


// ---- FUN_1000_17ca @ 1000:17ca

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 __cdecl16near
FUN_1000_17ca(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  uint in_BX;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  
  _DAT_1010_080a = param_1;
  _DAT_1010_080c = param_2;
  DAT_1010_080e = param_3;
  DAT_1010_0810 = param_4;
  uVar6 = FUN_1000_19d4(&stack0xfffe);
  puVar5 = (undefined1 *)&DAT_1010_0812;
  puVar4 = (undefined1 *)&DAT_1010_080b;
  for (iVar3 = (int)DAT_1010_080a; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar2 = *puVar1;
  }
  *puVar5 = 0;
  DAT_1010_0802 = in_BX & 0xff;
  DAT_1010_0804 = (int)((ulong)uVar6 >> 0x10);
  DAT_1010_0806 = (int)uVar6;
  DAT_1010_0808 = 0x812;
  return 0x802;
}


// ---- FUN_1000_1810 @ 1000:1810

undefined2 __cdecl16near FUN_1000_1810(void)

{
  return 0;
}


// ---- ___EXPORTEDSTUB @ 1000:1936

undefined2 __cdecl16far ___EXPORTEDSTUB(void)

{
  return 0;
}


// ---- FUN_1000_194a @ 1000:194a

int __cdecl16near FUN_1000_194a(char *param_1)

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


// ---- FUN_1000_1966 @ 1000:1966

undefined4 __stdcall16far FUN_1000_1966(uint param_1,undefined2 param_2,uint param_3)

{
  return CONCAT22(-(uint)(param_1 < param_3),param_1 - param_3);
}


// ---- FUN_1000_19d4 @ 1000:19d4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined4 __cdecl16near FUN_1000_19d4(void)

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
  
  pdVar30 = (double *)&DAT_1010_0828;
  for (iVar18 = 4; Var14 = _DAT_1010_0828, iVar18 != 0; iVar18 = iVar18 + -1) {
    pdVar3 = pdVar30;
    pdVar30 = (double *)((int)pdVar30 + 2);
    puVar1 = unaff_SI;
    unaff_SI = unaff_SI + 1;
    *(undefined2 *)pdVar3 = *puVar1;
  }
  uVar19 = DAT_1010_0828._6_2_;
                    /* WARNING: Ignoring partial resolution of indirect */
  DAT_1010_0828._7_1_ = DAT_1010_0828._7_1_ & 0x7f;
  Var15 = _DAT_1010_0828;
  DAT_1010_0828 = ABS((double)Var14);
  uVar24 = 0x20;
  if (((DAT_1010_0828._0_2_ == 0 && DAT_1010_0828._2_2_ == 0) && DAT_1010_0828._4_2_ == 0) &&
      DAT_1010_0828._6_2_ == 0) {
    DAT_1010_0834 = 0x3001;
    _DAT_1010_0828 = (longdouble)Var15;
    return 1;
  }
  if ((int)uVar19 < 0) {
    uVar24 = 0x2d;
  }
  if ((~uVar19 & 0x7ff0) == 0) {
    _DAT_1010_0828 = (longdouble)Var15;
    return 0x10000;
  }
  DAT_1010_0861 = (undefined1)in_FPUControlWord;
  DAT_1010_0863._0_1_ = DAT_1010_0861;
  lVar35 = (longdouble)DAT_1010_0828;
  DAT_1010_0828._7_1_ = (byte)((unkuint10)lVar35 >> 0x38);
  DAT_1010_0830 = (uint)((unkuint10)lVar35 >> 0x40);
  lVar12 = (ulong)DAT_1010_0830 * 0x4d10 + (ulong)((DAT_1010_0830 >> 8) * 0x4d);
  uVar19 = (uint)lVar12;
  iVar18 = ((int)((ulong)lVar12 >> 0x10) + (uint)CARRY2(uVar19,(uint)DAT_1010_0828._7_1_ * 0x9a) +
           -0x1343) - (uint)(uVar19 + (uint)DAT_1010_0828._7_1_ * 0x9a < 0x12f4);
  _DAT_1010_0828 = lVar35;
  _DAT_1010_0861 = in_FPUControlWord;
  FUN_1000_205a(iVar18,uVar24);
  DAT_1010_085f =
       (uint)(_DAT_1000_1986 < lVar35) << 8 | (uint)(NAN(_DAT_1000_1986) || NAN(lVar35)) << 10 |
       (uint)(_DAT_1000_1986 == lVar35) << 0xe;
  if (_DAT_1000_1986 < lVar35 || (_DAT_1000_1986 == lVar35) != 0) {
    iVar18 = iVar18 + 1;
    lVar35 = _DAT_1000_1990 * lVar35;
  }
  DAT_1010_0828._0_2_ = SUB102(lVar35,0);
  DAT_1010_0828._2_2_ = (uint)((unkuint10)lVar35 >> 0x10);
  DAT_1010_0828._4_2_ = (uint)((unkuint10)lVar35 >> 0x20);
  DAT_1010_0828._6_2_ = (uint)((unkuint10)lVar35 >> 0x30);
  DAT_1010_0830 = (uint)((unkuint10)lVar35 >> 0x40);
  bVar32 = false;
  bVar17 = 0;
  for (iVar20 = -(DAT_1010_0830 + 0xc002); iVar20 != 0; iVar20 = iVar20 + -1) {
    uVar19 = DAT_1010_0828._6_2_ & 1;
    DAT_1010_0828._6_2_ = DAT_1010_0828._6_2_ >> 1;
    bVar32 = (bVar17 & 1) != 0;
    bVar17 = (byte)(CONCAT11((DAT_1010_0828._0_2_ & 1) != 0,bVar17) >> 1);
    DAT_1010_0828._0_2_ = (uint)(CONCAT12((DAT_1010_0828._2_2_ & 1) != 0,DAT_1010_0828._0_2_) >> 1);
    DAT_1010_0828._2_2_ = (uint)(CONCAT12((DAT_1010_0828._4_2_ & 1) != 0,DAT_1010_0828._2_2_) >> 1);
    DAT_1010_0828._4_2_ = (uint)(CONCAT12(uVar19 != 0,DAT_1010_0828._4_2_) >> 1);
  }
  uVar28 = DAT_1010_0828._0_2_ + 0x39a + (uint)bVar32;
  uVar19 = (uint)(0xfc65 < DAT_1010_0828._0_2_ || CARRY2(DAT_1010_0828._0_2_ + 0x39a,(uint)bVar32));
  uVar26 = DAT_1010_0828._2_2_ + uVar19;
  uVar19 = (uint)CARRY2(DAT_1010_0828._2_2_,uVar19);
  uVar22 = DAT_1010_0828._4_2_ + uVar19;
  uVar19 = DAT_1010_0828._6_2_ + CARRY2(DAT_1010_0828._4_2_,uVar19);
  iVar20 = 0x10;
  pcVar16 = (char *)((int)(undefined2 *)&DAT_1010_0834 + 1);
  _DAT_1010_0828 = lVar35;
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
  DAT_1010_0834 = CONCAT11(DAT_1010_0834._1_1_,(char)iVar21 + '\x12');
  return CONCAT22(iVar18,1);
}


// ---- FUN_1000_1daa @ 1000:1daa

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * __cdecl16near FUN_1000_1daa(int param_1)

{
  uint uVar1;
  undefined2 unaff_SS;
  int local_6 [2];
  
  uVar1 = FUN_1000_2098(0,param_1,0x1010,local_6,unaff_SS,0x1100,0x1010);
  DAT_1010_10fa = local_6[0] - param_1;
  DAT_1010_10f9 = 0;
  if ((uVar1 & 4) != 0) {
    DAT_1010_10f9 = 2;
  }
  if ((uVar1 & 1) != 0) {
    DAT_1010_10f9 = DAT_1010_10f9 | 1;
  }
  DAT_1010_10f8 = (uVar1 & 2) != 0;
  return (undefined1 *)&DAT_1010_10f8;
}


// ---- FUN_1000_1e00 @ 1000:1e00

int __cdecl16near FUN_1000_1e00(int param_1)

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
    iVar1 = LOCALALLOC(0x1018,param_1);
    UNLOCKSEGMENT(0x1018,0xffff,uVar2);
    if (iVar1 != 0) {
      return iVar1;
    }
    if (DAT_1010_0872 == (code *)0x0) break;
    unaff_CS = 0x1000;
    iVar1 = (*DAT_1010_0872)(param_1);
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 0;
}


// ---- FUN_1000_1e54 @ 1000:1e54

void __cdecl16near FUN_1000_1e54(int param_1)

{
  if (param_1 != 0) {
    LOCALFREE();
  }
  return;
}


// ---- FUN_1000_1e6a @ 1000:1e6a

undefined2 __cdecl16near FUN_1000_1e6a(int param_1,int param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  
  if (param_1 == 0) {
    uVar1 = FUN_1000_1e00(param_2);
  }
  else if (param_2 == 0) {
    FUN_1000_1e54(param_1);
    uVar1 = 0;
  }
  else {
    uVar2 = 0xffff;
    LOCKSEGMENT();
    if (param_2 == 0) {
      param_2 = 1;
    }
    uVar1 = LOCALREALLOC(0x1018,0x62,param_2);
    UNLOCKSEGMENT(0x1018,0xffff,param_1,uVar2);
  }
  return uVar1;
}


// ---- FUN_1000_1ece @ 1000:1ece

void __cdecl16near FUN_1000_1ece(void)

{
  LOCALSIZE();
  return;
}


// ---- FUN_1000_205a @ 1000:205a

void __cdecl16near FUN_1000_205a(void)

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


// ---- FUN_1000_2098 @ 1000:2098

/* WARNING: Removing unreachable block (ram,0x100020ee) */
/* WARNING: Removing unreachable block (ram,0x100020f7) */

int FUN_1000_2098(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
                 undefined2 param_5,double *param_6)

{
  int iVar1;
  undefined2 unaff_SS;
  longdouble local_c;
  
  iVar1 = FUN_1000_2100(param_1,param_2,param_3,param_4,param_5,&local_c,unaff_SS);
  *param_6 = (double)local_c;
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  return iVar1;
}


// ---- FUN_1000_2100 @ 1000:2100

uint FUN_1000_2100(undefined2 param_1,byte *param_2,int *param_3,uint *param_4)

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
LAB_1000_214f:
      pbVar1 = pbVar11;
      pbVar11 = pbVar9 + 2;
      bVar6 = *pbVar1;
    }
    else if (bVar6 == 0x2d) {
      local_16 = 0x8000;
      goto LAB_1000_214f;
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
            if (local_1c == 0) goto LAB_1000_219d;
            pbVar1 = pbVar11;
            pbVar11 = pbVar11 + 1;
            bVar6 = *pbVar1;
          }
          if (bVar6 == 0x2e) {
            do {
              pbVar1 = pbVar11;
              pbVar11 = pbVar11 + 1;
              bVar6 = *pbVar1;
LAB_1000_21b7:
              if ((bVar6 < 0x30) || (0x39 < bVar6)) goto LAB_1000_21d3;
              pcVar2 = pcVar10;
              pcVar10 = pcVar10 + 1;
              *pcVar2 = bVar6 - 0x30;
              local_18 = local_18 + -1;
              local_1c = local_1c + -1;
            } while (local_1c != 0);
            goto LAB_1000_21ca;
          }
          goto LAB_1000_21d3;
        }
        do {
          local_18 = iVar5;
          bVar6 = *pbVar11;
LAB_1000_217c:
          pbVar11 = pbVar11 + 1;
          iVar5 = local_18 + -1;
        } while (bVar6 == 0x30);
        if (bVar6 != 0) goto LAB_1000_21b7;
      }
      local_14 = pbVar11 + -1;
      goto LAB_1000_2335;
    }
    if ((bVar6 == 0x2e) && ((bVar6 = *pbVar11, 0x2f < bVar6 && (bVar6 < 0x3a)))) goto LAB_1000_217c;
  }
  local_10 = 4;
  goto LAB_1000_2335;
  while (iVar5 = local_18 + 1, bVar6 < 0x3a) {
LAB_1000_219d:
    local_18 = iVar5;
    pbVar1 = pbVar11;
    pbVar11 = pbVar11 + 1;
    bVar6 = *pbVar1;
    if (bVar6 < 0x30) break;
  }
  if (bVar6 == 0x2e) {
LAB_1000_21ca:
    do {
      pbVar1 = pbVar11;
      pbVar11 = pbVar11 + 1;
      bVar6 = *pbVar1;
      if (bVar6 < 0x30) break;
    } while (bVar6 < 0x3a);
  }
LAB_1000_21d3:
  local_1c = 0x19 - local_1c;
  local_14 = pbVar11 + -1;
  if ((((bVar6 == 0x45) || (bVar6 == 0x65)) || (bVar6 == 0x44)) || (bVar6 == 100)) {
    pbVar9 = pbVar11 + 1;
    bVar6 = *pbVar11;
    if (bVar6 == 0x2b) {
LAB_1000_2202:
      pbVar1 = pbVar9;
      pbVar9 = pbVar11 + 2;
      bVar6 = *pbVar1;
    }
    else if (bVar6 == 0x2d) {
      local_1a = 0xffff;
      goto LAB_1000_2202;
    }
    if ((0x2f < bVar6) && (bVar6 < 0x3a)) {
      uVar7 = bVar6 - 0x30;
      uVar8 = uVar7;
      do {
        pbVar1 = pbVar9;
        pbVar9 = pbVar9 + 1;
        bVar6 = *pbVar1;
        if ((bVar6 < 0x30) || (0x39 < bVar6)) goto LAB_1000_2239;
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
LAB_1000_2239:
      local_18 = local_18 + ((uVar8 ^ local_1a) - local_1a);
      local_14 = pbVar9 + -1;
    }
  }
  if (local_1c != 0) {
    *pcVar10 = '\0';
    pbVar11 = (byte *)(pcVar10 + -1);
    if (local_1c < 0x19) {
      if (local_18 != 0) goto LAB_1000_2280;
    }
    else {
      bVar6 = *pbVar11;
      *pbVar11 = 0;
      local_1c = local_1c - 1;
      local_18 = local_18 + 1;
      pbVar11 = (byte *)(pcVar10 + -2);
      if (bVar6 < 5) {
LAB_1000_2280:
        for (; *pbVar11 == 0; pbVar11 = pbVar11 + -1) {
          local_1c = local_1c - 1;
          local_18 = local_18 + 1;
        }
      }
      else {
        *pbVar11 = *pbVar11 + 1;
      }
    }
    FUN_1000_287a(&local_e,local_1c,local_36,unaff_SS);
    if (local_18 == 0) {
LAB_1000_22ba:
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
          goto LAB_1000_2317;
        }
LAB_1000_2341:
        local_10 = local_10 | 1;
        goto LAB_1000_2335;
      }
    }
    else if (local_18 < 0x1450) {
      if (-0x1450 < local_18) {
        FUN_1000_2620(param_1,local_18,&local_e,unaff_SS);
        goto LAB_1000_22ba;
      }
      goto LAB_1000_2341;
    }
    local_10 = local_10 | 2;
    puVar12[4] = local_16 | 0x7fff;
    puVar12[3] = 0x8000;
    puVar12[2] = 0;
    puVar12[1] = 0;
    *param_4 = 0;
    goto LAB_1000_2317;
  }
LAB_1000_2335:
  for (iVar14 = 5; iVar14 != 0; iVar14 = iVar14 + -1) {
    puVar3 = puVar12;
    puVar12 = puVar12 + 1;
    *puVar3 = 0;
  }
LAB_1000_2317:
  *param_3 = (int)local_14;
  ((int *)param_3)[1] = local_12;
  return local_10;
}


// ---- FUN_1000_2620 @ 1000:2620

void FUN_1000_2620(int param_1,uint param_2,undefined2 *param_3)

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
    local_8 = (code *)0x26be;
    uVar2 = (undefined2)((ulong)param_3 >> 0x10);
    uStack_e = param_2;
    if (param_1 == 0) {
      local_8 = (code *)0x26b4;
      in_ST0 = *(unkbyte10 *)((undefined2 *)param_3 + 1);
    }
    while (uStack_e != 0) {
      uVar1 = uStack_e & 7;
      uStack_e = uStack_e >> 3;
      if (uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x1000268a. Too many branches */
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


// ---- FUN_1000_287a @ 1000:287a

uint * FUN_1000_287a(uint *param_1,int param_2,byte *param_3)

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
    FUN_1000_2928();
    uVar18 = FUN_1000_2928();
    uVar8 = (uint)CARRY2((uint)((ulong)uVar18 >> 0x10),uVar8);
    uVar4 = uVar13 + uVar5 + uVar8;
    uVar13 = (uint)(CARRY2(uVar13,uVar5) || CARRY2(uVar13 + uVar5,uVar8));
    bVar17 = CARRY2(uVar6,uVar10);
    uVar6 = uVar6 + uVar10;
    uVar11 = uVar6 + uVar13;
    bVar15 = CARRY2((uint)uVar18,uVar3);
    uVar1 = (uint)uVar18 + uVar3;
    uVar18 = FUN_1000_2928();
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


// ---- FUN_1000_2928 @ 1000:2928

undefined4 __cdecl16near FUN_1000_2928(void)

{
  int in_AX;
  int in_DX;
  uint in_BX;
  
  return CONCAT22(in_DX << 1,in_AX << 1 | (uint)((in_BX & 0x8000) != 0));
}


// ---- INITIALISE_STAGE_CNTRLER_DATA @ 1000:2934

void __cdecl16far INITIALISE_STAGE_CNTRLER_DATA(void)

{
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  M007_PUTHIGH(unaff_CS,DAT_1010_0a04,DAT_1010_0a06);
  M007_PUTHIGH(0x1018,DAT_1010_0a08,DAT_1010_0a0a);
  M007_PUTLOW(0x1018,DAT_1010_0a0c,DAT_1010_0a0e);
  M007_PUTLOW(0x1018,DAT_1010_0a0c,DAT_1010_0a0e);
  M007_PUTLOW(0x1018,DAT_1010_0a10,DAT_1010_0a12);
  M007_PUTLOW(0x1018,DAT_1010_0a14,DAT_1010_0a16);
  M007_PUTLOW(0x1018,DAT_1010_0a18,DAT_1010_0a1a);
  M007_PUTLOW(0x1018,DAT_1010_0a10,DAT_1010_0a12);
  M007_PUTHIGH(0x1018,DAT_1010_0a08,DAT_1010_0a0a);
  M007_PUTHIGH(0x1018,DAT_1010_0a08,DAT_1010_0a0a);
  M007_PUTHIGH(0x1018,DAT_1010_0a1c,DAT_1010_0a1e);
  M007_PUTHIGH(0x1018,DAT_1010_0a20,DAT_1010_0a22);
  M007_PUTHIGH(0x1018,DAT_1010_0a24,DAT_1010_0a26);
  M007_PUTHIGH(0x1018,DAT_1010_0a1c,DAT_1010_0a1e);
  M007_PUTLOW(0x1018,DAT_1010_0a28,DAT_1010_0a2a);
  M007_PUTLOW(0x1018,DAT_1010_0a28,DAT_1010_0a2a);
  M007_PUTLOW(0x1018,DAT_1010_0a28,DAT_1010_0a2a);
  M007_PUTLOW(0x1018,DAT_1010_0a28,DAT_1010_0a2a);
  M007_PUTHIGH(0x1018,DAT_1010_0a2c,DAT_1010_0a2e);
  M007_PUTHIGH(0x1018,DAT_1010_0a2c,DAT_1010_0a2e);
  M007_PUTHIGH(0x1018,DAT_1010_0a2c,DAT_1010_0a2e);
  M007_PUTHIGH(0x1018,DAT_1010_0a2c,DAT_1010_0a2e);
  M007_PUTHIGH(0x1018,DAT_1010_0a08,DAT_1010_0a0a);
  M007_PUTHIGH(0x1018,DAT_1010_0a08,DAT_1010_0a0a);
  M007_PUTHIGH(0x1018,DAT_1010_0a30,DAT_1010_0a32);
  M007_PUTHIGH(0x1018,DAT_1010_0a30,DAT_1010_0a32);
  M007_PUTLOW(0x1018,DAT_1010_0a34,DAT_1010_0a36);
  M007_PUTHIGH(0x1018,DAT_1010_0a38,DAT_1010_0a3a);
  M007_PUTLOW(0x1018,DAT_1010_0a3c,DAT_1010_0a3e);
  M007_PUTHIGH(0x1018,DAT_1010_0a40,DAT_1010_0a42);
  M007_PUTSTATE(0x1018,0);
  M007_PUTSTATE(0x1018,0);
  M007_PUTSTATE(0x1018,0);
  M007_PUTSTATE(0x1018,0);
  M007_PUTSTATE(0x1018,0);
  M007_PUTVALUE(0x1018,DAT_1010_0a30,DAT_1010_0a32);
  M007_PUTVALUE(0x1018,DAT_1010_0a30,DAT_1010_0a32);
  M007_PUTVALUE(0x1018,DAT_1010_0a30,DAT_1010_0a32);
  M007_PUTVALUE(0x1018,DAT_1010_0a30,DAT_1010_0a32);
  M007_PUTVALUE(0x1018,DAT_1010_0a30,DAT_1010_0a32);
  M007_PUTVALUE(0x1018,DAT_1010_0a30,DAT_1010_0a32);
  M007_PUTLOW(0x1018,DAT_1010_0a30,DAT_1010_0a32);
  M007_PUTLOW(0x1018,DAT_1010_0a30,DAT_1010_0a32);
  M007_PUTLOW(0x1018,DAT_1010_0a3c,DAT_1010_0a3e);
  M007_PUTLOW(0x1018,DAT_1010_0a3c,DAT_1010_0a3e);
  M007_PUTLOW(0x1018,DAT_1010_0a3c,DAT_1010_0a3e);
  M007_PUTLOW(0x1018,DAT_1010_0a3c,DAT_1010_0a3e);
  M007_PUTLOW(0x1018,DAT_1010_0a3c,DAT_1010_0a3e);
  M007_PUTLOW(0x1018,DAT_1010_0a3c,DAT_1010_0a3e);
  M007_PUTHIGH(0x1018,DAT_1010_0a44,DAT_1010_0a46);
  M007_PUTHIGH(0x1018,DAT_1010_0a44,DAT_1010_0a46);
  M007_PUTHIGH(0x1018,DAT_1010_0a44,DAT_1010_0a46);
  M007_PUTHIGH(0x1018,DAT_1010_0a44,DAT_1010_0a46);
  M007_PUTHIGH(0x1018,DAT_1010_0a40,DAT_1010_0a42);
  M007_PUTHIGH(0x1018,DAT_1010_0a40,DAT_1010_0a42);
  M007_PUTHIGH(0x1018,DAT_1010_0a40,DAT_1010_0a42);
  M007_PUTHIGH(0x1018,DAT_1010_0a40,DAT_1010_0a42);
  M007_PUTHIGH(0x1018,DAT_1010_0a40,DAT_1010_0a42);
  M007_PUTHIGH(0x1018,DAT_1010_0a40,DAT_1010_0a42);
  M007_PUTLOW(0x1018,DAT_1010_0a48,DAT_1010_0a4a);
  M007_PUTHIGH(0x1018,DAT_1010_0a4c,DAT_1010_0a4e);
  M007_PUTVALUE(0x1018,DAT_1010_0a50,DAT_1010_0a52);
  M007_PUTLOW(0x1018,DAT_1010_0a54,DAT_1010_0a56);
  M007_PUTHIGH(0x1018,DAT_1010_0a58,DAT_1010_0a5a);
  M007_PUTLOW(0x1018,DAT_1010_0a54,DAT_1010_0a56);
  M007_PUTHIGH(0x1018,DAT_1010_0a58,DAT_1010_0a5a);
  M007_PUTLOW(0x1018,DAT_1010_0a54,DAT_1010_0a56);
  M007_PUTHIGH(0x1018,DAT_1010_0a58,DAT_1010_0a5a);
  M007_PUTLOW(0x1018,DAT_1010_0a54,DAT_1010_0a56);
  M007_PUTHIGH(0x1018,DAT_1010_0a58,DAT_1010_0a5a);
  M007_PUTLOW(0x1018,DAT_1010_0a54,DAT_1010_0a56);
  M007_PUTHIGH(0x1018,DAT_1010_0a58,DAT_1010_0a5a);
  M007_PUTLOW(0x1018,DAT_1010_0a54,DAT_1010_0a56);
  M007_PUTHIGH(0x1018,DAT_1010_0a58,DAT_1010_0a5a);
  M007_PUTLOW(0x1018,DAT_1010_0a40,DAT_1010_0a42);
  M007_PUTHIGH(0x1018,DAT_1010_0a5c,DAT_1010_0a5e);
  M007_PUTLOW(0x1018,DAT_1010_0a40,DAT_1010_0a42);
  M007_PUTHIGH(0x1018,DAT_1010_0a5c,DAT_1010_0a5e);
  M007_PUTLOW(0x1018,DAT_1010_0a40,DAT_1010_0a42);
  M007_PUTHIGH(0x1018,DAT_1010_0a5c,DAT_1010_0a5e);
  M007_PUTLOW(0x1018,DAT_1010_0a40,DAT_1010_0a42);
  M007_PUTHIGH(0x1018,DAT_1010_0a5c,DAT_1010_0a5e);
  M007_PUTLOW(0x1018,DAT_1010_0a40,DAT_1010_0a42);
  M007_PUTHIGH(0x1018,DAT_1010_0a5c,DAT_1010_0a5e);
  M007_PUTLOW(0x1018,DAT_1010_0a40,DAT_1010_0a42);
  M007_PUTHIGH(0x1018,DAT_1010_0a5c,DAT_1010_0a5e);
  M007_PUTLOW(0x1018,DAT_1010_0a40,DAT_1010_0a42);
  M007_PUTHIGH(0x1018,DAT_1010_0a5c,DAT_1010_0a5e);
  M007_PUTLOW(0x1018,DAT_1010_0a40,DAT_1010_0a42);
  M007_PUTHIGH(0x1018,DAT_1010_0a5c,DAT_1010_0a5e);
  M007_PUTLOW(0x1018,DAT_1010_0a40,DAT_1010_0a42);
  M007_PUTHIGH(0x1018,DAT_1010_0a5c,DAT_1010_0a5e);
  M007_PUTLOW(0x1018,DAT_1010_0a40,DAT_1010_0a42);
  M007_PUTHIGH(0x1018,DAT_1010_0a5c,DAT_1010_0a5e);
  M007_PUTLOW(0x1018,DAT_1010_0a40,DAT_1010_0a42);
  M007_PUTHIGH(0x1018,DAT_1010_0a5c,DAT_1010_0a5e);
  M007_PUTLOW(0x1018,DAT_1010_0a40,DAT_1010_0a42);
  M007_PUTHIGH(0x1018,DAT_1010_0a5c,DAT_1010_0a5e);
  M007_PUTHIGH(0x1018,DAT_1010_0a08,DAT_1010_0a0a);
  M007_PUTLOW(0x1018,DAT_1010_0a0c,DAT_1010_0a0e);
  M007_PUTHIGH(0x1018,DAT_1010_0a08,DAT_1010_0a0a);
  M007_PUTLOW(0x1018,DAT_1010_0a0c,DAT_1010_0a0e);
  M007_PUTHIGH(0x1018,DAT_1010_0a08,DAT_1010_0a0a);
  M007_PUTLOW(0x1018,DAT_1010_0a0c,DAT_1010_0a0e);
  M007_PUTHIGH(0x1018,DAT_1010_0a60,DAT_1010_0a62);
  M007_PUTLOW(0x1018,DAT_1010_0a64,DAT_1010_0a66);
  M007_PUTHIGH(0x1018,DAT_1010_0a60,DAT_1010_0a62);
  M007_PUTLOW(0x1018,DAT_1010_0a64,DAT_1010_0a66);
  M007_PUTHIGH(0x1018,DAT_1010_0a08,DAT_1010_0a0a);
  M007_PUTLOW(0x1018,DAT_1010_0a0c,DAT_1010_0a0e);
  M007_PUTLOW(0x1018,DAT_1010_0a68,DAT_1010_0a6a);
  M007_PUTLOW(0x1018,DAT_1010_0a68,DAT_1010_0a6a);
  M007_PUTLOW(0x1018,DAT_1010_0a68,DAT_1010_0a6a);
  M007_PUTLOW(0x1018,DAT_1010_0a68,DAT_1010_0a6a);
  M007_PUTLOW(0x1018,DAT_1010_0a68,DAT_1010_0a6a);
  M007_PUTLOW(0x1018,DAT_1010_0a68,DAT_1010_0a6a);
  M007_PUTHIGH(0x1018,DAT_1010_0a6c,DAT_1010_0a6e);
  M007_PUTHIGH(0x1018,DAT_1010_0a6c,DAT_1010_0a6e);
  M007_PUTHIGH(0x1018,DAT_1010_0a6c,DAT_1010_0a6e);
  M007_PUTHIGH(0x1018,DAT_1010_0a6c,DAT_1010_0a6e);
  M007_PUTHIGH(0x1018,DAT_1010_0a6c,DAT_1010_0a6e);
  M007_PUTHIGH(0x1018,DAT_1010_0a6c,DAT_1010_0a6e);
  M007_PUTLOW(0x1018,DAT_1010_0a68,DAT_1010_0a6a);
  M007_PUTLOW(0x1018,DAT_1010_0a68,DAT_1010_0a6a);
  M007_PUTLOW(0x1018,DAT_1010_0a68,DAT_1010_0a6a);
  M007_PUTLOW(0x1018,DAT_1010_0a68,DAT_1010_0a6a);
  M007_PUTLOW(0x1018,DAT_1010_0a68,DAT_1010_0a6a);
  M007_PUTLOW(0x1018,DAT_1010_0a68,DAT_1010_0a6a);
  M007_PUTHIGH(0x1018,DAT_1010_0a6c,DAT_1010_0a6e);
  M007_PUTHIGH(0x1018,DAT_1010_0a6c,DAT_1010_0a6e);
  M007_PUTHIGH(0x1018,DAT_1010_0a6c,DAT_1010_0a6e);
  M007_PUTHIGH(0x1018,DAT_1010_0a6c,DAT_1010_0a6e);
  M007_PUTHIGH(0x1018,DAT_1010_0a6c,DAT_1010_0a6e);
  M007_PUTHIGH(0x1018,DAT_1010_0a6c,DAT_1010_0a6e);
  M007_PUTHIGH(0x1018,DAT_1010_0a70,DAT_1010_0a72);
  M007_PUTHIGH(0x1018,DAT_1010_0a70,DAT_1010_0a72);
  M007_PUTHIGH(0x1018,DAT_1010_0a70,DAT_1010_0a72);
  M007_PUTHIGH(0x1018,DAT_1010_0a20,DAT_1010_0a22);
  M007_PUTHIGH(0x1018,DAT_1010_0a74,DAT_1010_0a76);
  M007_PUTHIGH(0x1018,DAT_1010_0a70,DAT_1010_0a72);
  M007_PUTLOW(0x1018,DAT_1010_0a78,DAT_1010_0a7a);
  M007_PUTLOW(0x1018,DAT_1010_0a78,DAT_1010_0a7a);
  M007_PUTLOW(0x1018,DAT_1010_0a78,DAT_1010_0a7a);
  M007_PUTLOW(0x1018,DAT_1010_0a14,DAT_1010_0a16);
  M007_PUTLOW(0x1018,DAT_1010_0a7c,DAT_1010_0a7e);
  M007_PUTLOW(0x1018,DAT_1010_0a78,DAT_1010_0a7a);
  M007_PUTHIGH(0x1018,DAT_1010_0a08,DAT_1010_0a0a);
  M007_PUTHIGH(0x1018,DAT_1010_0a08,DAT_1010_0a0a);
  M007_PUTHIGH(0x1018,DAT_1010_0a08,DAT_1010_0a0a);
  M007_PUTHIGH(0x1018,DAT_1010_0a08,DAT_1010_0a0a);
  M007_PUTHIGH(0x1018,DAT_1010_0a08,DAT_1010_0a0a);
  M007_PUTHIGH(0x1018,DAT_1010_0a08,DAT_1010_0a0a);
  M007_PUTLOW(0x1018,DAT_1010_0a0c,DAT_1010_0a0e);
  M007_PUTLOW(0x1018,DAT_1010_0a0c,DAT_1010_0a0e);
  M007_PUTHIGH(0x1018,DAT_1010_0a08,DAT_1010_0a0a);
  M007_PUTHIGH(0x1018,DAT_1010_0a08,DAT_1010_0a0a);
  M007_PUTHIGH(0x1018,DAT_1010_0a80,DAT_1010_0a82);
  M007_PUTHIGH(0x1018,DAT_1010_0a80,DAT_1010_0a82);
  M007_PUTHIGH(0x1018,DAT_1010_0a80,DAT_1010_0a82);
  M007_PUTHIGH(0x1018,DAT_1010_0a80,DAT_1010_0a82);
  M007_PUTHIGH(0x1018,DAT_1010_0a20,DAT_1010_0a22);
  M007_PUTLOW(0x1018,DAT_1010_0a14,DAT_1010_0a16);
  M007_PUTHIGH(0x1018,DAT_1010_0a20,DAT_1010_0a22);
  M007_PUTLOW(0x1018,DAT_1010_0a14,DAT_1010_0a16);
  M007_PUTHIGH(0x1018,DAT_1010_0a20,DAT_1010_0a22);
  M007_PUTLOW(0x1018,DAT_1010_0a14,DAT_1010_0a16);
  M007_PUTHIGH(0x1018,DAT_1010_0a74,DAT_1010_0a76);
  M007_PUTLOW(0x1018,DAT_1010_0a7c,DAT_1010_0a7e);
  M007_PUTHIGH(0x1018,DAT_1010_0a80,DAT_1010_0a82);
  M007_PUTHIGH(0x1018,DAT_1010_0a80,DAT_1010_0a82);
  M007_PUTLOW(0x1018,DAT_1010_0a84,DAT_1010_0a86);
  M007_PUTHIGH(0x1018,DAT_1010_0a88,DAT_1010_0a8a);
  M007_PUTVALUE(0x1018,DAT_1010_0a50,DAT_1010_0a52);
  M007_PUTHIGH(0x1018,DAT_1010_0a08,DAT_1010_0a0a);
  M007_PUTHIGH(0x1018,DAT_1010_0a08,DAT_1010_0a0a);
  M007_PUTHIGH(0x1018,DAT_1010_0a8c,DAT_1010_0a8e);
  M007_PUTHIGH(0x1018,DAT_1010_0a20,DAT_1010_0a22);
  M007_PUTHIGH(0x1018,DAT_1010_0a74,DAT_1010_0a76);
  M007_PUTHIGH(0x1018,DAT_1010_0a8c,DAT_1010_0a8e);
  M007_PUTLOW(0x1018,DAT_1010_0a14,DAT_1010_0a16);
  M007_PUTLOW(0x1018,DAT_1010_0a7c,DAT_1010_0a7e);
  M007_PUTHIGH(0x1018,DAT_1010_0a08,DAT_1010_0a0a);
  uVar4 = 0xfe;
  M007_PUTHIGH(0x1018,DAT_1010_0a08,DAT_1010_0a0a);
  uVar3 = 0x12e;
  M007_PUTVALUE(0x1018,DAT_1010_0a90,DAT_1010_0a92);
  uVar2 = 0x12e;
  M007_PUTLOW(0x1018,DAT_1010_0a18,DAT_1010_0a1a);
  uVar1 = 0x12e;
  M007_PUTHIGH(0x1018,DAT_1010_0a94,DAT_1010_0a96);
  FUN_1000_da7e(uVar1,uVar2,uVar3,uVar4);
  STAGE_REPORTID();
  return;
}


// ---- INITIALISE_STAGE_CONTROLLER @ 1000:34c8

undefined2 __cdecl16far INITIALISE_STAGE_CONTROLLER(void)

{
  int iVar1;
  undefined2 unaff_CS;
  long lVar2;
  
  iVar1 = FUN_1000_8f9a(0x898,0x1010,0x1010);
  if (iVar1 < 0) {
    UIF_LOG(unaff_CS,0x2000,0,0);
    return 0x1a2;
  }
  lVar2 = FUN_1000_8fce();
  if (lVar2 != 0) {
    UIF_LOG(unaff_CS,0x2000,0,0);
    return 0x1a7;
  }
  return 0;
}


// ---- STAGE_TIMER_TICK @ 1000:3516

void __stdcall16far STAGE_TIMER_TICK(void)

{
  FUN_1000_741a(0x1010);
  return;
}


// ---- STAGE_CONTROLLER_SUSPEND @ 1000:3528

void __cdecl16far STAGE_CONTROLLER_SUSPEND(void)

{
  FUN_1000_8fe4(0x1010);
  return;
}


// ---- STAGE_CONTROLLER_REMOVE @ 1000:3538

void __cdecl16far STAGE_CONTROLLER_REMOVE(void)

{
  FUN_1000_8fba(0x1010);
  return;
}


// ---- REFRESHSTAGESTATUS @ 1000:3548

void __cdecl16far REFRESHSTAGESTATUS(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1010;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_732(0x1018,uVar2,uVar3);
    uVar2 = 0x2f;
    M007_PUTSTATE(0x1018,1);
    while( true ) {
      iVar1 = M007_GETSTATE(0x1018,0x2f,uVar2);
      if (iVar1 != 1) break;
      FUN_1000_741a();
    }
  }
  return;
}


// ---- FUN_1000_357c @ 1000:357c

void __cdecl16near FUN_1000_357c(void)

{
  int iVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  undefined2 unaff_SS;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined1 local_c [4];
  undefined1 local_8 [4];
  int local_4;
  
  local_4 = 0;
  uVar6 = 0x8c;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 0) {
LAB_1000_3590:
    uVar4 = 0x98;
    uVar3 = 0x1018;
    M007_GETVALUE(0x1018,local_8);
    iVar1 = FUN_1000_0264(uVar4,uVar6);
    if (iVar1 != 0x23) {
      M007_PUTHIGH(0x1018,DAT_1010_0a9c,DAT_1010_0a9e);
      uVar3 = 0x1000;
      SETSTAGE_HIGH_Z(DAT_1010_0a9c,DAT_1010_0a9e);
      local_4 = 1;
    }
    iVar1 = M007_GETSTATE(uVar3,0x10f);
    if (iVar1 == 1) {
      uVar6 = 0x97;
      M007_GETVALUE(0x1018,local_8);
      iVar1 = FUN_1000_0264(uVar6);
      if (iVar1 == 0x6d) goto LAB_1000_3735;
      M007_PUTHIGH(0x1018,DAT_1010_0aa0,DAT_1010_0aa2);
      puVar2 = (undefined2 *)M007_GETVALUE(0x1018,local_c);
      uVar6 = puVar2[1];
      uVar3 = *puVar2;
      uVar4 = DAT_1010_0aa0;
      uVar5 = DAT_1010_0aa2;
    }
    else {
      uVar6 = 0x97;
      M007_GETVALUE(0x1018,local_c);
      iVar1 = FUN_1000_0264(uVar6);
      if (iVar1 == 0x77) goto LAB_1000_3735;
      M007_PUTHIGH(0x1018,DAT_1010_0aa4,DAT_1010_0aa6);
      puVar2 = (undefined2 *)M007_GETVALUE(0x1018,local_8);
      uVar6 = puVar2[1];
      uVar3 = *puVar2;
      uVar4 = DAT_1010_0aa4;
      uVar5 = DAT_1010_0aa6;
    }
  }
  else {
    if (iVar1 != 1) {
      if (iVar1 != 2) {
        if (iVar1 == 3) goto LAB_1000_3686;
        if (iVar1 != 4) goto LAB_1000_3735;
      }
      goto LAB_1000_3590;
    }
LAB_1000_3686:
    uVar5 = 0x98;
    uVar3 = 0x1018;
    M007_GETVALUE(0x1018,local_c);
    uVar4 = 0x36a0;
    iVar1 = FUN_1000_0264(uVar5,uVar6);
    if (iVar1 != 0x23) {
      uVar4 = 0x98;
      M007_PUTHIGH(0x1018,DAT_1010_0a9c,DAT_1010_0a9e);
      uVar3 = 0x1000;
      SETSTAGE_HIGH_Z(DAT_1010_0a9c,DAT_1010_0a9e);
      local_4 = 1;
    }
    uVar6 = 0x97;
    M007_GETVALUE(uVar3,local_c);
    iVar1 = FUN_1000_0264(uVar6,uVar4);
    if (iVar1 == 0x7d) goto LAB_1000_3735;
    M007_PUTHIGH(0x1018,DAT_1010_0aa8,DAT_1010_0aaa);
    puVar2 = (undefined2 *)M007_GETVALUE(0x1018,local_8);
    uVar6 = puVar2[1];
    uVar3 = *puVar2;
    uVar4 = DAT_1010_0aa8;
    uVar5 = DAT_1010_0aaa;
  }
  SETXYSTAGE_HIGH(uVar4,uVar5,uVar3,uVar6);
  local_4 = 1;
LAB_1000_3735:
  if (local_4 == 0) {
    DAT_1010_017c = 0;
  }
  return;
}


// ---- CHANGEINVACSTATUS @ 1000:3744

void __cdecl16far CHANGEINVACSTATUS(void)

{
  int iVar1;
  undefined2 *puVar2;
  undefined1 *puVar3;
  undefined2 unaff_SS;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined1 local_52 [4];
  undefined1 local_4e [4];
  undefined1 local_4a [4];
  undefined1 local_46 [4];
  undefined1 local_42 [4];
  undefined1 local_3e [4];
  undefined1 local_3a [4];
  undefined1 local_36 [4];
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
  
  uVar5 = 0x1010;
  uVar4 = 0x53;
  iVar1 = M007_GETSTATE();
  if ((iVar1 == 2) && (iVar1 = M007_GETSTATE(0x1018,0x6f,uVar4,uVar5), iVar1 == 1)) {
    iVar1 = M007_GETSTATE(0x1018,0x3a);
    if (iVar1 == 0) {
      local_1a = DAT_1010_0aac;
      local_18 = DAT_1010_0aae;
      local_16 = DAT_1010_0aac;
      local_14 = DAT_1010_0aae;
      puVar2 = (undefined2 *)M007_GETVALUE(0x1018,local_36);
      local_12 = *puVar2;
      local_10 = puVar2[1];
      puVar2 = (undefined2 *)M007_GETVALUE(0x1018,local_3a);
      local_e = *puVar2;
      local_c = puVar2[1];
      local_a = DAT_1010_0ab0;
      local_8 = DAT_1010_0ab2;
      local_6 = DAT_1010_0ab4;
      local_4 = DAT_1010_0ab6;
      FUN_1000_986e(&local_1a);
      local_32 = DAT_1010_0a9c;
      local_30 = DAT_1010_0a9e;
      local_2e = DAT_1010_0a9c;
      local_2c = DAT_1010_0a9e;
      puVar2 = (undefined2 *)M007_GETVALUE(0x1018,local_3e);
      local_2a = *puVar2;
      local_28 = puVar2[1];
      puVar3 = local_42;
    }
    else {
      puVar2 = (undefined2 *)M007_GETVALUE(0x1018,local_42);
      local_1a = *puVar2;
      local_18 = puVar2[1];
      puVar2 = (undefined2 *)M007_GETVALUE(0x1018,local_3e);
      local_16 = *puVar2;
      local_14 = puVar2[1];
      puVar2 = (undefined2 *)M007_GETVALUE(0x1018,local_3a);
      local_12 = *puVar2;
      local_10 = puVar2[1];
      puVar2 = (undefined2 *)M007_GETVALUE(0x1018,local_36);
      local_e = *puVar2;
      local_c = puVar2[1];
      local_a = DAT_1010_0ab0;
      local_8 = DAT_1010_0ab2;
      local_6 = DAT_1010_0ab4;
      local_4 = DAT_1010_0ab6;
      FUN_1000_986e(&local_1a);
      puVar2 = (undefined2 *)M007_GETVALUE(0x1018,local_46);
      local_32 = *puVar2;
      local_30 = puVar2[1];
      puVar2 = (undefined2 *)M007_GETVALUE(0x1018,local_4a);
      local_2e = *puVar2;
      local_2c = puVar2[1];
      puVar2 = (undefined2 *)M007_GETVALUE(0x1018,local_4e);
      local_2a = *puVar2;
      local_28 = puVar2[1];
      puVar3 = local_52;
    }
    puVar2 = (undefined2 *)M007_GETVALUE(0x1018,puVar3);
    local_26 = *puVar2;
    local_24 = puVar2[1];
    local_22 = DAT_1010_0ab8;
    local_20 = DAT_1010_0aba;
    local_1e = DAT_1010_0ab4;
    local_1c = DAT_1010_0ab6;
    FUN_1000_978e(&local_32);
  }
  return;
}


// ---- STAGEINSAFEPOSITION @ 1000:3940

undefined2 __cdecl16far STAGEINSAFEPOSITION(void)

{
  int iVar1;
  double *pdVar2;
  float *pfVar3;
  float *pfVar4;
  undefined2 *puVar5;
  undefined2 unaff_SS;
  undefined4 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  undefined2 uVar12;
  undefined2 uVar13;
  undefined2 uVar14;
  undefined2 uVar15;
  float local_51c;
  float local_518;
  float local_514;
  float local_510;
  undefined1 local_50c [256];
  undefined4 local_40c;
  undefined4 local_408;
  undefined4 local_404;
  undefined4 local_400;
  undefined1 local_2fc [256];
  undefined2 local_1fc;
  char local_1fa;
  undefined1 local_1f8 [100];
  undefined1 local_194 [400];
  undefined2 local_4;
  
  uVar15 = 0x1010;
  local_1fa = '\x01';
  uVar14 = 0x6f;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 0) {
    return 1;
  }
  local_4 = HLEOUIFLANGUAGE(0x1018,uVar14,uVar15);
  uVar14 = 0x1018;
  uVar6 = GETLEOINIFILEPATH(0x1018,local_50c);
  LSTRCPY(0x1018,uVar6,uVar14);
  uVar14 = 0x1010;
  GETPRIVATEPROFILESTRING
            (0x1018,local_50c,unaff_SS,0x100,0xfd6,0x1010,0x8a2,0x1010,0x8a6,0x1010,0x8b2);
  pdVar2 = (double *)FUN_1000_e582(0xfd6,0x1010,uVar14);
  local_400 = (float)*pdVar2 * DAT_1010_0abc;
  if (local_400 == DAT_1010_0ac0) {
    local_400 = (float)CONCAT22(DAT_1010_0a9e,DAT_1010_0a9c);
  }
  uVar14 = 0x1010;
  GETPRIVATEPROFILESTRING
            (0x1018,local_50c,unaff_SS,0x100,0xfd6,0x1010,0x8a2,0x1010,0x8b8,0x1010,0x8b2);
  pdVar2 = (double *)FUN_1000_e582(0xfd6,0x1010,uVar14);
  local_404 = (float)*pdVar2 * DAT_1010_0abc;
  if (local_404 == DAT_1010_0ac0) {
    local_404 = (float)CONCAT22(DAT_1010_0a9e,DAT_1010_0a9c);
  }
  uVar14 = 0x1010;
  GETPRIVATEPROFILESTRING
            (0x1018,local_50c,unaff_SS,0x100,0xfd6,0x1010,0x8a2,0x1010,0x8c4,0x1010,0x8b2);
  pdVar2 = (double *)FUN_1000_e582(0xfd6,0x1010,uVar14);
  local_408 = (float)*pdVar2 * DAT_1010_0abc;
  if (local_408 == DAT_1010_0ac0) {
    local_408 = (float)CONCAT22(DAT_1010_0aae,DAT_1010_0aac);
  }
  uVar14 = 0x1010;
  GETPRIVATEPROFILESTRING
            (0x1018,local_50c,unaff_SS,0x100,0xfd6,0x1010,0x8a2,0x1010,0x8d2,0x1010,0x8b2);
  pdVar2 = (double *)FUN_1000_e582(0xfd6,0x1010,uVar14);
  local_40c = (float)*pdVar2 * DAT_1010_0abc;
  if (local_40c == DAT_1010_0ac0) {
    local_40c = (float)CONCAT22(DAT_1010_0aae,DAT_1010_0aac);
  }
  pfVar3 = (float *)M007_GETVALUE(0x1018,&local_510);
  local_518 = local_400;
  if ((local_400 < *pfVar3) ||
     (pfVar3 = (float *)M007_GETVALUE(0x1018,&local_514), *pfVar3 < local_518)) {
    local_400 = (float)CONCAT22(DAT_1010_0a9e,DAT_1010_0a9c);
  }
  pfVar3 = (float *)M007_GETVALUE(0x1018,&local_518);
  local_510 = local_408;
  if ((local_408 < *pfVar3) ||
     (pfVar3 = (float *)M007_GETVALUE(0x1018,&local_514), *pfVar3 < local_510)) {
    local_408 = (float)CONCAT22(DAT_1010_0aae,DAT_1010_0aac);
  }
  pfVar3 = (float *)M007_GETVALUE(0x1018,&local_518);
  local_510 = local_404;
  if ((local_404 < *pfVar3) ||
     (pfVar3 = (float *)M007_GETVALUE(0x1018,&local_514), *pfVar3 < local_510)) {
    local_404 = (float)CONCAT22(DAT_1010_0a9e,DAT_1010_0a9c);
  }
  uVar14 = 0x9a;
  pfVar3 = &local_518;
  pfVar4 = (float *)M007_GETVALUE(0x1018,pfVar3);
  local_510 = local_40c;
  if (*pfVar4 <= local_40c) {
    pfVar3 = (float *)((int)(undefined2 *)&DAT_1010_0096 + 1);
    pfVar4 = (float *)M007_GETVALUE(0x1018,&local_514);
    if (local_510 <= *pfVar4) goto LAB_1000_3c3b;
  }
  local_40c = (float)CONCAT22(DAT_1010_0aae,DAT_1010_0aac);
LAB_1000_3c3b:
  if (local_408 < local_400) {
    local_400 = (float)CONCAT22(DAT_1010_0a9e,DAT_1010_0a9c);
    local_408 = (float)CONCAT22(DAT_1010_0aae,DAT_1010_0aac);
  }
  if (local_40c < local_404) {
    local_404 = (float)CONCAT22(DAT_1010_0a9e,DAT_1010_0a9c);
    local_40c = (float)CONCAT22(DAT_1010_0aae,DAT_1010_0aac);
  }
  iVar1 = M007_GETSTATE(0x1018,0x53,pfVar3,uVar14);
  if ((iVar1 == 2) &&
     ((((pfVar3 = (float *)M007_GETVALUE(0x1018,&local_518), *pfVar3 < local_400 ||
        (pfVar3 = (float *)M007_GETVALUE(0x1018,&local_514), local_408 < *pfVar3)) ||
       (pfVar3 = (float *)M007_GETVALUE(0x1018,&local_518), *pfVar3 < local_404)) ||
      (pfVar3 = (float *)M007_GETVALUE(0x1018,&local_514), local_40c < *pfVar3)))) {
    local_1fa = '\0';
  }
  uVar15 = 0x1018;
  uVar14 = 0x3d45;
  iVar1 = M007_GETSTATE(0x1018,0x11a);
  if (iVar1 == 1) {
    iVar1 = M007_GETSTATE(0x1018,0x2e);
    if (iVar1 == 0) {
      uVar14 = local_4;
      LOADSTRING(0x1018,100,local_1f8,unaff_SS,0x3b6);
      uVar15 = local_4;
      LOADSTRING(0x1018,400,local_194,unaff_SS,0x245);
      GETFOCUS(0x1018,uVar15,uVar14);
      uVar15 = 0x1018;
      MESSAGEBOX();
    }
    else {
      uVar14 = 0x9b;
      pfVar3 = (float *)M007_GETVALUE(0x1018,&local_518);
      uVar15 = 0x1000;
      SETSTAGE_GOTO_Z(*pfVar3 + DAT_1010_0ac4);
    }
  }
  iVar1 = M007_GETSTATE(uVar15,0x2e,uVar14);
  if (iVar1 == 0) {
    LOADSTRING(0x1018,100,local_1f8,unaff_SS,0x3b6);
    LOADSTRING(0x1018,400,local_194,unaff_SS,0x77c);
    LOADSTRING();
    LSTRCAT();
    GETFOCUS(0x1018);
    iVar1 = MESSAGEBOX(0x1018,0x1024,local_1f8,unaff_SS,local_194,unaff_SS);
    if (iVar1 == 6) {
      return 0;
    }
  }
  else if (local_1fa == '\0') {
    LOADSTRING(0x1018,100,local_1f8,unaff_SS,0x3b6);
    LOADSTRING(0x1018,400,local_194,unaff_SS,0x75e);
    LSTRCAT(0x1018,0x8e0,0x1010,local_194);
    local_518 = local_40c * DAT_1010_0a98;
    uVar14 = FUN_1000_0264();
    local_514 = local_404 * DAT_1010_0a98;
    uVar14 = FUN_1000_0264(uVar14);
    local_510 = local_408 * DAT_1010_0a98;
    uVar14 = FUN_1000_0264(uVar14);
    local_51c = local_400 * DAT_1010_0a98;
    uVar14 = FUN_1000_0264(uVar14);
    FUN_1000_0264(uVar14);
    FUN_1000_0264();
    _WSPRINTF(0x1018,local_2fc);
    GETFOCUS(0x1018);
    iVar1 = MESSAGEBOX(0x1018,0x1024,local_1f8,unaff_SS,local_2fc,unaff_SS);
    if (iVar1 == 6) {
      local_1fc = M007_GETSTATE();
      SWITCHPROTECTED_Z();
      uVar13 = 0x86;
      puVar5 = (undefined2 *)M007_GETVALUE(0x1000,&local_514);
      uVar14 = puVar5[1];
      uVar15 = *puVar5;
      uVar10 = 0x112;
      uVar11 = DAT_1010_0ab4;
      uVar12 = DAT_1010_0ab6;
      puVar5 = (undefined2 *)M007_GETVALUE(0x1018,&local_518);
      uVar9 = puVar5[1];
      uVar8 = *puVar5;
      uVar7 = 0x15e;
      puVar5 = (undefined2 *)M007_GETVALUE(0x1018,&local_51c);
      SETXYZTRMSTAGE_GOTO(*puVar5,puVar5[1],uVar7,uVar8,uVar9,uVar10,uVar11,uVar12,uVar15,uVar14,
                          uVar13);
      SWITCHPROTECTED_Z(local_1fc);
    }
    else {
      LOADSTRING(0x1018,400,local_194,unaff_SS,0x771);
      GETFOCUS();
      iVar1 = MESSAGEBOX(0x1018,0x1024,local_1f8,unaff_SS,local_194,unaff_SS);
      if (iVar1 != 6) {
        return 0;
      }
    }
  }
  return 1;
}


// ---- DOCOMMANDSTAGE_INIT @ 1000:3ffe

void __cdecl16far DOCOMMANDSTAGE_INIT(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  uVar4 = 0x1010;
  uVar3 = 0x134;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 0) {
    uVar2 = 0x2e;
    M007_PUTSTATE(0x1018,0);
    FUN_1000_8ffa(uVar2,uVar3,uVar4);
  }
  return;
}


// ---- DOCOMMANDSTAGE_START_SCAN @ 1000:4022

void __cdecl16far DOCOMMANDSTAGE_START_SCAN(void)

{
  char cVar1;
  undefined2 unaff_CS;
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
  
  local_1a = DAT_1010_0ab4;
  local_18 = DAT_1010_0ab6;
  local_16 = DAT_1010_0ab4;
  local_14 = DAT_1010_0ab6;
  local_12 = DAT_1010_0ab4;
  local_10 = DAT_1010_0ab6;
  local_e = DAT_1010_0ab4;
  local_c = DAT_1010_0ab6;
  local_a = DAT_1010_0ab4;
  local_8 = DAT_1010_0ab6;
  local_6 = DAT_1010_0ab4;
  local_4 = DAT_1010_0ab6;
  FUN_1000_abca(1,0,1,0,&local_1a);
  cVar1 = FUN_1000_ade8(&local_1a);
  if (cVar1 == '\x01') {
    FUN_1000_9652(&local_1a);
    DAT_1010_1298 = 1;
    DAT_1010_00dc = 1;
    DAT_1010_00de = 0;
    DAT_1010_00e0 = 1;
    DAT_1010_00e2 = 0;
    return;
  }
  M007_PUTSTATE(unaff_CS,1);
  return;
}


// ---- DOCOMMANDSTAGE_NEXT_FIELD @ 1000:40aa

void __cdecl16far DOCOMMANDSTAGE_NEXT_FIELD(void)

{
  char cVar1;
  undefined2 unaff_CS;
  undefined2 uVar2;
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
  
  local_22 = DAT_1010_0ab4;
  local_20 = DAT_1010_0ab6;
  local_1e = DAT_1010_0ab4;
  local_1c = DAT_1010_0ab6;
  local_1a = DAT_1010_0ab4;
  local_18 = DAT_1010_0ab6;
  local_16 = DAT_1010_0ab4;
  local_14 = DAT_1010_0ab6;
  local_12 = DAT_1010_0ab4;
  local_10 = DAT_1010_0ab6;
  local_e = DAT_1010_0ab4;
  local_c = DAT_1010_0ab6;
  cVar1 = FUN_1000_afde(&local_a);
  if (cVar1 == '\x01') {
    uVar2 = 3;
  }
  else {
    FUN_1000_abca(local_a,local_8,local_6,local_4,&local_22);
    cVar1 = FUN_1000_ade8(&local_22);
    if (cVar1 == '\x01') {
      FUN_1000_9652(&local_22);
      DAT_1010_1298 = 1;
      DAT_1010_00dc = local_a;
      DAT_1010_00de = local_8;
      DAT_1010_00e0 = local_6;
      DAT_1010_00e2 = local_4;
      return;
    }
    uVar2 = 1;
  }
  M007_PUTSTATE(unaff_CS,uVar2);
  return;
}


// ---- DOCOMMANDSTAGE_ABORT @ 1000:4154

void __cdecl16far DOCOMMANDSTAGE_ABORT(void)

{
  FUN_1000_96ca(0x1010);
  return;
}


// ---- DOCOMMANDSTGVAC_PSU_TEST @ 1000:4164

void __cdecl16far DOCOMMANDSTGVAC_PSU_TEST(void)

{
  FUN_1000_9bda(0x1010);
  DOCOMMANDGETCOMMSPSU();
  return;
}


// ---- SWITCHTOUCH_INH @ 1000:4178

void __stdcall16far SWITCHTOUCH_INH(undefined2 param_1)

{
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  
  uVar2 = 0x1010;
  uVar1 = 0x9c;
  M007_PUTSTATE(unaff_CS,param_1);
  FUN_1000_9bc8(uVar1,uVar2);
  return;
}


// ---- DOCOMMANDSTAGE_BACKLASH @ 1000:4194

void __cdecl16far DOCOMMANDSTAGE_BACKLASH(void)

{
  undefined2 *puVar1;
  undefined1 extraout_AH;
  undefined1 extraout_AH_00;
  undefined2 unaff_SS;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined1 local_2a [4];
  undefined1 local_26 [4];
  undefined1 local_22 [4];
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
  
  REFRESHSTAGESTATUS(0x1010);
  uVar3 = 0x84;
  puVar1 = (undefined2 *)M007_GETVALUE(0x1000,local_22);
  local_1a = *puVar1;
  local_18 = puVar1[1];
  uVar2 = 0x85;
  puVar1 = (undefined2 *)M007_GETVALUE(0x1018,local_26);
  local_16 = *puVar1;
  local_14 = puVar1[1];
  local_1c = M007_GETSTATE(0x1018,0xed,uVar2,uVar3);
  local_1e = M007_GETSTATE(0x1018,0xee);
  FUN_1000_aaa0(3);
  FUN_1000_aaba(3);
  local_12 = DAT_1010_0ab4;
  local_10 = DAT_1010_0ab6;
  if (DAT_1010_0175 == '\x01') {
    puVar1 = (undefined2 *)M007_GETVALUE(0x1018,local_2a);
    local_12 = *puVar1;
    local_10 = puVar1[1];
  }
  local_e = DAT_1010_0ab4;
  local_c = DAT_1010_0ab6;
  if (DAT_1010_0174 == '\x01') {
    puVar1 = (undefined2 *)M007_GETVALUE(0x1018,local_2a);
    local_e = *puVar1;
    local_c = puVar1[1];
  }
  local_a = DAT_1010_0ab4;
  local_8 = DAT_1010_0ab6;
  if (DAT_1010_0173 == '\x01') {
    puVar1 = (undefined2 *)M007_GETVALUE(0x1018,local_2a);
    local_a = *puVar1;
    local_8 = puVar1[1];
  }
  local_6 = DAT_1010_0ab4;
  local_4 = DAT_1010_0ab6;
  if (DAT_1010_0176 == '\x01') {
    puVar1 = (undefined2 *)M007_GETVALUE(0x1018,local_2a);
    local_6 = *puVar1;
    local_4 = puVar1[1];
  }
  FUN_1000_9652(&local_1a);
  FUN_1000_aaa0(CONCAT11(extraout_AH,(undefined1)local_1c));
  FUN_1000_aaba(CONCAT11(extraout_AH_00,(undefined1)local_1e));
  return;
}


// ---- DOCOMMANDSTAGE_SET_POSITION @ 1000:42c6

void __cdecl16far DOCOMMANDSTAGE_SET_POSITION(void)

{
  undefined2 *puVar1;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined1 local_26 [4];
  undefined1 local_22 [4];
  undefined1 local_1e [4];
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
  
  puVar1 = (undefined2 *)M007_GETVALUE(unaff_CS,local_1e);
  local_1a = *puVar1;
  local_18 = puVar1[1];
  puVar1 = (undefined2 *)M007_GETVALUE(0x1018,local_22);
  local_16 = *puVar1;
  local_14 = puVar1[1];
  local_12 = DAT_1010_0ab4;
  local_10 = DAT_1010_0ab6;
  if (DAT_1010_0175 == '\x01') {
    puVar1 = (undefined2 *)M007_GETVALUE(0x1018,local_26);
    local_12 = *puVar1;
    local_10 = puVar1[1];
  }
  local_e = DAT_1010_0ab4;
  local_c = DAT_1010_0ab6;
  if (DAT_1010_0174 == '\x01') {
    puVar1 = (undefined2 *)M007_GETVALUE(0x1018,local_26);
    local_e = *puVar1;
    local_c = puVar1[1];
  }
  local_a = DAT_1010_0ab4;
  local_8 = DAT_1010_0ab6;
  local_6 = DAT_1010_0ab4;
  local_4 = DAT_1010_0ab6;
  FUN_1000_95e2(&local_1a);
  return;
}


// ---- SWITCHSTAGE_BACKLASH @ 1000:437e

void __stdcall16far SWITCHSTAGE_BACKLASH(undefined2 param_1)

{
  undefined1 extraout_AH;
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  
  uVar2 = 0x1010;
  uVar1 = 0x33;
  M007_PUTSTATE(unaff_CS,param_1);
  FUN_1000_975e(CONCAT11(extraout_AH,(undefined1)param_1),uVar1,uVar2);
  return;
}


// ---- SWITCHVECTORED_MOVE @ 1000:439e

void __stdcall16far SWITCHVECTORED_MOVE(undefined2 param_1)

{
  undefined1 extraout_AH;
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  
  uVar2 = 0x1010;
  uVar1 = 0x52;
  M007_PUTSTATE(unaff_CS,param_1);
  FUN_1000_994e(CONCAT11(extraout_AH,(undefined1)param_1),uVar1,uVar2);
  return;
}


// ---- SWITCHSTAGE_TYPE @ 1000:43be

void __stdcall16far SWITCHSTAGE_TYPE(int param_1)

{
  int iVar1;
  undefined2 unaff_CS;
  undefined2 uVar2;
  
  if (param_1 == 2) {
    unaff_CS = 0x1018;
    iVar1 = M007_GETSTATE();
    if (iVar1 != 0) {
      unaff_CS = 0x1000;
      SWITCHSTAGE_MOTOR(1);
    }
  }
  uVar2 = 0x53;
  M007_PUTSTATE(unaff_CS,param_1);
  if (DAT_1010_017e != 0) {
    iVar1 = M007_GETSTATE(0x1018,0x6f,uVar2);
    if (iVar1 != 1) {
      FUN_1000_9036(0);
      DAT_1010_0175 = 0;
    }
    else {
      FUN_1000_bbb2();
    }
    DAT_1010_0170 = iVar1 == 1;
    iVar1 = M007_GETSTATE(0x1018,0x6f);
    if (iVar1 == 1) {
      FUN_1000_9bda();
    }
  }
  return;
}


// ---- SETXYSTAGE_GOTO @ 1000:4424

void __stdcall16far SETXYSTAGE_GOTO(float param_1,float param_2)

{
  float fVar1;
  char cVar2;
  float *pfVar3;
  float *pfVar4;
  undefined2 *puVar5;
  int iVar6;
  double *pdVar7;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  float local_32;
  float local_2e;
  float local_2a;
  float local_26;
  float local_22;
  undefined4 local_1e;
  undefined4 local_1a;
  undefined4 local_16;
  undefined2 local_12;
  undefined2 local_10;
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_a;
  undefined2 local_8;
  float local_6;
  
  uVar10 = 0x1010;
  local_2a = param_2;
  local_1e = param_2;
  local_2e = param_1;
  local_1a = param_1;
  uVar9 = 0x87;
  pfVar3 = (float *)M007_GETVALUE(unaff_CS,&local_22);
  if (*pfVar3 == local_2a) {
    pfVar3 = (float *)&DAT_1010_0088;
    pfVar4 = (float *)M007_GETVALUE(0x1018,&local_26);
    if (*pfVar4 == local_2e) goto LAB_1000_44fa;
  }
  pfVar3 = (float *)M007_GETVALUE(0x1018,&local_2e);
  if (*pfVar3 == param_2) {
    puVar5 = (undefined2 *)M007_GETVALUE(0x1018,&local_2a);
    local_1e = (float)CONCAT22(puVar5[1],*puVar5);
  }
  uVar9 = 0x88;
  pfVar3 = &local_2e;
  pfVar4 = (float *)M007_GETVALUE(0x1018,pfVar3);
  if (*pfVar4 == param_1) {
    pfVar3 = (float *)((int)(undefined2 *)&DAT_1010_0084 + 1);
    puVar5 = (undefined2 *)M007_GETVALUE(0x1018,&local_2a);
    local_1a = (float)CONCAT22(puVar5[1],*puVar5);
  }
LAB_1000_44fa:
  if (DAT_1010_0175 == '\x01') {
    uVar8 = 0x86;
    puVar5 = (undefined2 *)M007_GETVALUE(0x1018,&local_2e);
    local_16 = (float)CONCAT22(puVar5[1],*puVar5);
    iVar6 = M007_GETSTATE(0x1018,0x30,uVar8,pfVar3,uVar9,uVar10);
    if (iVar6 == 1) {
      iVar6 = M007_GETSTATE(0x1018,0x62);
      if (iVar6 == 0) {
        uVar10 = 0x84;
        local_22 = param_2;
        pfVar3 = (float *)M007_GETVALUE();
        local_32 = local_22 - *pfVar3;
        uVar9 = 0x28;
        pfVar3 = (float *)M007_GETVALUE();
        pdVar7 = (double *)FUN_1000_0223((double)(*pfVar3 * DAT_1010_0ad4),uVar9,uVar10);
        local_6 = (float)*pdVar7 * local_32;
        fVar1 = local_6 + local_16;
      }
      else {
        uVar10 = 0x85;
        local_2a = param_1;
        pfVar3 = (float *)M007_GETVALUE();
        local_26 = local_2a - *pfVar3;
        uVar9 = 0x28;
        pfVar3 = (float *)M007_GETVALUE();
        pdVar7 = (double *)FUN_1000_0223((double)(*pfVar3 * DAT_1010_0ad4),uVar9,uVar10);
        local_6 = (float)*pdVar7 * local_26;
        fVar1 = local_16 - local_6;
      }
      local_16._2_2_ = (undefined2)((ulong)fVar1 >> 0x10);
      uVar9 = local_16._2_2_;
      local_16._0_2_ = SUB42(fVar1,0);
      uVar10 = (undefined2)local_16;
      local_16 = fVar1;
      cVar2 = FUN_1000_af00(uVar10,uVar9);
      if (cVar2 != '\x01') {
        UIF_LOG(0x1018,0x2800,0,0);
        return;
      }
    }
  }
  else {
    local_16 = (float)CONCAT22(DAT_1010_0ab6,DAT_1010_0ab4);
  }
  local_12 = DAT_1010_0ab4;
  local_10 = DAT_1010_0ab6;
  if (DAT_1010_0174 == '\x01') {
    puVar5 = (undefined2 *)M007_GETVALUE(0x1018,&local_32);
    local_12 = *puVar5;
    local_10 = puVar5[1];
  }
  local_e = DAT_1010_0ab4;
  local_c = DAT_1010_0ab6;
  if (DAT_1010_0173 == '\x01') {
    puVar5 = (undefined2 *)M007_GETVALUE(0x1018,&local_32);
    local_e = *puVar5;
    local_c = puVar5[1];
  }
  local_a = DAT_1010_0ab4;
  local_8 = DAT_1010_0ab6;
  if (DAT_1010_0176 == '\x01') {
    puVar5 = (undefined2 *)M007_GETVALUE(0x1018,&local_32);
    local_a = *puVar5;
    local_8 = puVar5[1];
  }
  FUN_1000_8ad0();
  M007_PUTXY();
  FUN_1000_9652(&local_1e);
  return;
}


// ---- SETXYZSTAGE_GOTO @ 1000:46ca

void __stdcall16far
SETXYZSTAGE_GOTO(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
                undefined2 param_5,undefined2 param_6)

{
  undefined2 *puVar1;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined1 local_1e [4];
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
  
  local_1a = param_5;
  local_18 = param_6;
  local_16 = param_3;
  local_14 = param_4;
  local_12 = param_1;
  local_10 = param_2;
  local_e = DAT_1010_0ab4;
  local_c = DAT_1010_0ab6;
  if (DAT_1010_0174 == '\x01') {
    puVar1 = (undefined2 *)M007_GETVALUE(unaff_CS,local_1e);
    local_e = *puVar1;
    local_c = puVar1[1];
    unaff_CS = 0x1018;
  }
  local_a = DAT_1010_0ab4;
  local_8 = DAT_1010_0ab6;
  if (DAT_1010_0173 == '\x01') {
    puVar1 = (undefined2 *)M007_GETVALUE(unaff_CS,local_1e);
    local_a = *puVar1;
    local_8 = puVar1[1];
    unaff_CS = 0x1018;
  }
  local_6 = DAT_1010_0ab4;
  local_4 = DAT_1010_0ab6;
  if (DAT_1010_0176 == '\x01') {
    puVar1 = (undefined2 *)M007_GETVALUE(unaff_CS,local_1e);
    local_6 = *puVar1;
    local_4 = puVar1[1];
    unaff_CS = 0x1018;
  }
  FUN_1000_8ad0();
  M007_PUTXY(unaff_CS,param_3,param_4,param_5,param_6);
  M007_PUTVALUE(0x1018,param_1,param_2);
  FUN_1000_9652(&local_1a);
  return;
}


// ---- SETXYZRSTAGE_GOTO @ 1000:47ae

void __stdcall16far
SETXYZRSTAGE_GOTO(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
                 undefined2 param_5,undefined2 param_6,undefined2 param_7,undefined2 param_8)

{
  undefined2 *puVar1;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined1 local_1e [4];
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
  
  local_1a = param_7;
  local_18 = param_8;
  local_16 = param_5;
  local_14 = param_6;
  local_12 = param_3;
  local_10 = param_4;
  local_e = DAT_1010_0ab4;
  local_c = DAT_1010_0ab6;
  if (DAT_1010_0174 == '\x01') {
    puVar1 = (undefined2 *)M007_GETVALUE(unaff_CS,local_1e);
    local_e = *puVar1;
    local_c = puVar1[1];
    unaff_CS = 0x1018;
  }
  local_a = param_1;
  local_8 = param_2;
  local_6 = DAT_1010_0ab4;
  local_4 = DAT_1010_0ab6;
  if (DAT_1010_0176 == '\x01') {
    puVar1 = (undefined2 *)M007_GETVALUE(unaff_CS,local_1e);
    local_6 = *puVar1;
    local_4 = puVar1[1];
    unaff_CS = 0x1018;
  }
  FUN_1000_8ad0();
  M007_PUTXY(unaff_CS,local_16,local_14,local_1a,local_18);
  M007_PUTVALUE(0x1018,param_3,param_4);
  M007_PUTVALUE(0x1018,param_1,param_2);
  FUN_1000_9652(&local_1a);
  return;
}


// ---- SETXYZTRSTAGE_GOTO @ 1000:4882

void __stdcall16far
SETXYZTRSTAGE_GOTO(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
                  undefined2 param_5,undefined2 param_6,undefined2 param_7,undefined2 param_8,
                  undefined2 param_9,undefined2 param_10)

{
  undefined2 *puVar1;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined1 local_1e [4];
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
  
  local_1a = param_9;
  local_18 = param_10;
  local_16 = param_7;
  local_14 = param_8;
  local_12 = param_5;
  local_10 = param_6;
  local_e = param_3;
  local_c = param_4;
  local_a = param_1;
  local_8 = param_2;
  local_6 = DAT_1010_0ab4;
  local_4 = DAT_1010_0ab6;
  if (DAT_1010_0176 == '\x01') {
    puVar1 = (undefined2 *)M007_GETVALUE(unaff_CS,local_1e);
    local_6 = *puVar1;
    local_4 = puVar1[1];
    unaff_CS = 0x1018;
  }
  FUN_1000_8ad0();
  M007_PUTXY(unaff_CS,local_16,local_14,local_1a,local_18);
  M007_PUTVALUE(0x1018,param_5,param_6);
  M007_PUTVALUE(0x1018,param_3,param_4);
  M007_PUTVALUE(0x1018,param_1,param_2);
  FUN_1000_9652(&local_1a);
  return;
}


// ---- SETSTAGE_GOTO_R @ 1000:4944

void __stdcall16far SETSTAGE_GOTO_R(undefined2 param_1,undefined2 param_2)

{
  int iVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined2 uVar4;
  undefined1 local_26 [4];
  undefined2 local_22 [2];
  undefined1 local_1e [4];
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
  
  iVar1 = FUN_1000_df7e(param_1,param_2,0x1010);
  if (iVar1 == 0) {
    puVar2 = (undefined2 *)M007_GETVALUE(unaff_CS,local_1e);
    local_1a = *puVar2;
    local_18 = puVar2[1];
    uVar4 = 0x85;
    puVar2 = local_22;
    puVar3 = (undefined2 *)M007_GETVALUE(0x1018,puVar2);
    local_16 = *puVar3;
    local_14 = puVar3[1];
    local_12 = DAT_1010_0ab4;
    local_10 = DAT_1010_0ab6;
    if (DAT_1010_0175 == '\x01') {
      puVar2 = (undefined2 *)&DAT_1010_0086;
      puVar3 = (undefined2 *)M007_GETVALUE(0x1018,local_26);
      local_12 = *puVar3;
      local_10 = puVar3[1];
    }
    local_e = DAT_1010_0ab4;
    local_c = DAT_1010_0ab6;
    if (DAT_1010_0174 == '\x01') {
      puVar3 = (undefined2 *)M007_GETVALUE(0x1018,local_26);
      local_e = *puVar3;
      local_c = puVar3[1];
    }
    local_a = param_1;
    local_8 = param_2;
    local_6 = DAT_1010_0ab4;
    local_4 = DAT_1010_0ab6;
    if (DAT_1010_0176 == '\x01') {
      puVar3 = (undefined2 *)M007_GETVALUE(0x1018,local_26);
      local_6 = *puVar3;
      local_4 = puVar3[1];
    }
    FUN_1000_8ad0(puVar2,uVar4);
    M007_PUTVALUE(0x1018,param_1,param_2);
    FUN_1000_9652(&local_1a);
  }
  return;
}


// ---- SETSTAGE_GOTO_T @ 1000:4a46

void __stdcall16far SETSTAGE_GOTO_T(undefined2 param_1,undefined2 param_2)

{
  int iVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined2 uVar4;
  undefined1 local_26 [4];
  undefined2 local_22 [2];
  undefined1 local_1e [4];
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
  
  iVar1 = FUN_1000_e20c(param_1,param_2,0x1010);
  if (iVar1 == 0) {
    puVar2 = (undefined2 *)M007_GETVALUE(unaff_CS,local_1e);
    local_1a = *puVar2;
    local_18 = puVar2[1];
    uVar4 = 0x85;
    puVar2 = local_22;
    puVar3 = (undefined2 *)M007_GETVALUE(0x1018,puVar2);
    local_16 = *puVar3;
    local_14 = puVar3[1];
    local_12 = DAT_1010_0ab4;
    local_10 = DAT_1010_0ab6;
    if (DAT_1010_0175 == '\x01') {
      puVar2 = (undefined2 *)&DAT_1010_0086;
      puVar3 = (undefined2 *)M007_GETVALUE(0x1018,local_26);
      local_12 = *puVar3;
      local_10 = puVar3[1];
    }
    local_e = param_1;
    local_c = param_2;
    local_a = DAT_1010_0ab4;
    local_8 = DAT_1010_0ab6;
    if (DAT_1010_0173 == '\x01') {
      puVar3 = (undefined2 *)M007_GETVALUE(0x1018,local_26);
      local_a = *puVar3;
      local_8 = puVar3[1];
    }
    local_6 = DAT_1010_0ab4;
    local_4 = DAT_1010_0ab6;
    if (DAT_1010_0176 == '\x01') {
      puVar3 = (undefined2 *)M007_GETVALUE(0x1018,local_26);
      local_6 = *puVar3;
      local_4 = puVar3[1];
    }
    FUN_1000_8ad0(puVar2,uVar4);
    M007_PUTVALUE(0x1018,param_1,param_2);
    FUN_1000_9652(&local_1a);
  }
  return;
}


// ---- SETSTAGE_GOTO_Z @ 1000:4b48

void __stdcall16far SETSTAGE_GOTO_Z(undefined2 param_1,undefined2 param_2)

{
  undefined2 *puVar1;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined1 *puVar2;
  undefined2 uVar3;
  undefined1 local_26 [4];
  undefined1 local_22 [4];
  undefined1 local_1e [4];
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
  
  puVar1 = (undefined2 *)M007_GETVALUE(unaff_CS,local_1e);
  local_1a = *puVar1;
  local_18 = puVar1[1];
  uVar3 = 0x85;
  puVar2 = local_22;
  puVar1 = (undefined2 *)M007_GETVALUE(0x1018,puVar2);
  local_16 = *puVar1;
  local_14 = puVar1[1];
  local_12 = param_1;
  local_10 = param_2;
  local_e = DAT_1010_0ab4;
  local_c = DAT_1010_0ab6;
  if (DAT_1010_0174 == '\x01') {
    puVar2 = (undefined1 *)0x113;
    puVar1 = (undefined2 *)M007_GETVALUE(0x1018,local_26);
    local_e = *puVar1;
    local_c = puVar1[1];
  }
  local_a = DAT_1010_0ab4;
  local_8 = DAT_1010_0ab6;
  if (DAT_1010_0173 == '\x01') {
    puVar1 = (undefined2 *)M007_GETVALUE(0x1018,local_26);
    local_a = *puVar1;
    local_8 = puVar1[1];
  }
  local_6 = DAT_1010_0ab4;
  local_4 = DAT_1010_0ab6;
  if (DAT_1010_0176 == '\x01') {
    puVar1 = (undefined2 *)M007_GETVALUE(0x1018,local_26);
    local_6 = *puVar1;
    local_4 = puVar1[1];
  }
  FUN_1000_8ad0(puVar2,uVar3);
  M007_PUTVALUE(0x1018,param_1,param_2);
  FUN_1000_9652(&local_1a);
  return;
}


// ---- SETXYSTAGE_VECTOR @ 1000:4c36

void __stdcall16far SETXYSTAGE_VECTOR(undefined4 param_1,undefined4 param_2)

{
  double dVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined2 uVar4;
  undefined2 *puVar5;
  int iVar6;
  float *pfVar7;
  undefined2 uVar8;
  int iVar9;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined2 uVar10;
  undefined2 uVar11;
  undefined2 uVar12;
  undefined2 uVar13;
  undefined2 uVar14;
  undefined4 local_4e;
  undefined4 local_4a;
  undefined4 local_46;
  undefined1 local_42 [4];
  undefined1 local_3e [4];
  undefined1 local_3a [4];
  undefined2 local_36;
  undefined2 local_34;
  undefined2 local_32;
  undefined2 local_30;
  undefined4 local_2e;
  undefined4 local_2a;
  char local_26;
  char local_24;
  undefined4 local_22;
  undefined4 local_1e;
  undefined4 local_1a;
  uint local_16;
  uint local_14;
  undefined2 local_12;
  undefined2 local_10;
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_a;
  undefined2 local_8;
  uint local_6;
  uint local_4;
  
  uVar14 = 0x1010;
  uVar13 = 0x80;
  puVar5 = (undefined2 *)M007_GETVALUE(unaff_CS,local_3a);
  local_22 = CONCAT22(puVar5[1],*puVar5);
  local_24 = M007_GETSTATE(0x1018,0x2a,uVar13,uVar14);
  local_26 = M007_GETSTATE(0x1018,0xe);
  if ((local_26 != '\x01') || (local_24 != '\x01')) {
    local_22 = CONCAT22(DAT_1010_0ada,DAT_1010_0ad8);
  }
  uVar13 = 0x1018;
  iVar6 = M007_GETSTATE(0x1018,0x110);
  if (iVar6 == 1) {
    local_2a = DAT_1010_1142 * (float)DAT_1010_0adc;
    local_2e = DAT_1010_1172 * (float)DAT_1010_0adc;
  }
  else {
    uVar14 = M007_GETSTATE(0x1018,0x53);
    uVar13 = 0x1000;
    switch(uVar14) {
    case 0:
      uVar14 = DAT_1010_0ae4;
      uVar8 = DAT_1010_0ae6;
      break;
    case 1:
      uVar14 = DAT_1010_0ae8;
      uVar8 = DAT_1010_0aea;
      break;
    case 2:
      uVar14 = DAT_1010_0aec;
      uVar8 = DAT_1010_0aee;
      break;
    default:
      uVar14 = DAT_1010_0af0;
      uVar8 = DAT_1010_0af2;
    }
    local_2a = (float)CONCAT22(uVar8,uVar14);
    local_2e = (float)CONCAT22(uVar8,uVar14);
  }
  uVar12 = 0xab;
  puVar5 = (undefined2 *)M007_GETVALUE(uVar13,local_3a);
  local_32 = *puVar5;
  local_30 = puVar5[1];
  uVar11 = 0xac;
  puVar5 = (undefined2 *)M007_GETVALUE(0x1018,local_3e);
  local_36 = *puVar5;
  local_34 = puVar5[1];
  uVar10 = 0x8a;
  local_46 = param_2;
  uVar3 = local_46;
  local_46._2_2_ = (undefined2)((ulong)param_2 >> 0x10);
  uVar4 = local_46._2_2_;
  local_46._0_2_ = (undefined2)param_2;
  uVar8 = (undefined2)local_46;
  local_4a = param_1;
  uVar2 = local_4a;
  local_4a._2_2_ = (undefined2)((ulong)param_1 >> 0x10);
  uVar14 = local_4a._2_2_;
  local_4a._0_2_ = (undefined2)param_1;
  uVar13 = (undefined2)local_4a;
  local_4a = uVar2;
  local_46 = uVar3;
  M007_PUTXY(0x1018,uVar13,uVar14,uVar8,uVar4);
  local_4e = local_22;
  uVar2 = local_4e;
  local_4e._2_2_ = (undefined2)((ulong)local_22 >> 0x10);
  uVar14 = local_4e._2_2_;
  local_4e._0_2_ = (undefined2)local_22;
  uVar13 = (undefined2)local_4e;
  local_4e = uVar2;
  local_1e = FUN_1000_d838(uVar13,uVar14,(int)local_46,(int)((ulong)local_46 >> 0x10),local_32,
                           local_30,(undefined2)local_2a,local_2a._2_2_,uVar10,uVar11,uVar12);
  local_1a = FUN_1000_d838((int)local_4e,(int)((ulong)local_4e >> 0x10),(int)local_4a,
                           (int)((ulong)local_4a >> 0x10),local_36,local_34,(undefined2)local_2e,
                           local_2e._2_2_);
  if (DAT_1010_0175 == '\x01') {
    iVar6 = M007_GETSTATE(0x1018,0x30);
    if (iVar6 == 1) {
      iVar6 = M007_GETSTATE(0x1018,0x62);
      if (iVar6 == 0) {
        uVar13 = 0x28;
        pfVar7 = (float *)M007_GETVALUE(0x1018,local_42);
        dVar1 = (double)(*pfVar7 * DAT_1010_0ad4);
        FUN_1000_0223(SUB82(dVar1,0),(int)((qword)dVar1 >> 0x10),(int)((qword)dVar1 >> 0x20),
                      (int)((qword)dVar1 >> 0x30),uVar13);
        local_16 = FUN_1000_0264();
        local_14 = (int)local_16 >> 0xf;
      }
      else {
        uVar13 = 0x28;
        pfVar7 = (float *)M007_GETVALUE(0x1018,&local_4e);
        dVar1 = (double)(*pfVar7 * DAT_1010_0ad4);
        FUN_1000_0223(SUB82(dVar1,0),(int)((qword)dVar1 >> 0x10),(int)((qword)dVar1 >> 0x20),
                      (int)((qword)dVar1 >> 0x30),uVar13);
        iVar6 = FUN_1000_0264();
        local_16 = -iVar6;
        local_14 = -((iVar6 >> 0xf) + (uint)(iVar6 != 0));
      }
      uVar13 = 0xad;
      M007_GETVALUE(0x1018,&local_4e);
      local_6 = FUN_1000_0264(uVar13);
      local_4 = (int)local_6 >> 0xf;
      if (((int)local_4 <= (int)local_14) &&
         (((int)local_4 < (int)local_14 || (local_6 < local_16)))) {
        local_16 = local_6;
        local_14 = local_4;
      }
      iVar6 = local_4 + (local_6 != 0);
      iVar9 = -iVar6;
      if (((int)local_14 <= iVar9) &&
         ((-local_14 != iVar6 && (int)local_14 <= iVar9 ||
          (local_16 <= -local_6 && -local_16 != local_6)))) {
        local_16 = -local_6;
        local_14 = (int)local_16 >> 0xf;
      }
      if (((int)local_14 < 1) &&
         (((((int)local_14 < 0 || (local_16 < 2)) && (-1 < (int)local_14)) &&
          ((0 < (int)local_14 || (local_16 != 0)))))) {
        local_16 = 2;
        local_14 = 0;
      }
      if (((-2 < (int)local_14) && ((local_14 < 0x8000 || (local_16 == 0xffff)))) &&
         ((int)local_14 < 0)) {
        local_16 = 0xfffe;
        local_14 = 0xffff;
      }
      goto LAB_1000_4f14;
    }
  }
  local_14 = 0;
  local_16 = 0;
LAB_1000_4f14:
  local_10 = 0;
  local_12 = 0;
  local_c = 0;
  local_e = 0;
  local_8 = 0;
  local_a = 0;
  FUN_1000_96e2(&local_1e);
  return;
}


// ---- SETSTAGE_VECTOR_R @ 1000:4f38

void __stdcall16far SETSTAGE_VECTOR_R(undefined4 param_1)

{
  undefined2 *puVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 local_32;
  undefined2 uStack_30;
  undefined1 local_2e [4];
  undefined2 local_2a;
  undefined2 local_28;
  undefined4 local_26;
  char local_22;
  char local_20;
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
  undefined4 local_a;
  undefined2 local_6;
  undefined2 local_4;
  
  uVar5 = 0x1010;
  uVar4 = 0x80;
  puVar1 = (undefined2 *)M007_GETVALUE(unaff_CS,local_2e);
  local_1e = *puVar1;
  local_1c = puVar1[1];
  local_20 = M007_GETSTATE(0x1018,0x2a,uVar4,uVar5);
  local_22 = M007_GETSTATE(0x1018,0xe);
  if ((local_22 != '\x01') || (local_20 != '\x01')) {
    local_1e = DAT_1010_0ad8;
    local_1c = DAT_1010_0ada;
  }
  uVar4 = 0x1018;
  iVar2 = M007_GETSTATE(0x1018,0x110);
  if (iVar2 == 1) {
    local_26 = DAT_1010_1202 * (float)DAT_1010_0af4;
  }
  else {
    uVar4 = M007_GETSTATE(0x1018,0x53);
    switch(uVar4) {
    default:
      uVar5 = DAT_1010_0afc;
      uVar3 = DAT_1010_0afe;
      break;
    case 2:
      uVar5 = DAT_1010_0b00;
      uVar3 = DAT_1010_0b02;
    }
    uVar4 = 0x1000;
    local_26 = (float)CONCAT22(uVar3,uVar5);
  }
  uVar5 = 0x11a;
  puVar1 = (undefined2 *)M007_GETVALUE(uVar4,local_2e);
  local_2a = *puVar1;
  local_28 = puVar1[1];
  uVar4 = 0x116;
  uStack_30 = (undefined2)((ulong)param_1 >> 0x10);
  local_32 = (undefined2)param_1;
  M007_PUTVALUE(0x1018,local_32,uStack_30);
  local_18 = 0;
  local_1a = 0;
  local_14 = 0;
  local_16 = 0;
  local_10 = 0;
  local_12 = 0;
  local_c = 0;
  local_e = 0;
  local_a = FUN_1000_d838(local_1e,local_1c,param_1,local_2a,local_28,(undefined2)local_26,
                          local_26._2_2_,uVar4,uVar5);
  local_4 = 0;
  local_6 = 0;
  FUN_1000_96e2(&local_1a);
  return;
}


// ---- SETSTAGE_VECTOR_T @ 1000:5074

void __stdcall16far SETSTAGE_VECTOR_T(undefined4 param_1)

{
  undefined2 *puVar1;
  int iVar2;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 local_32;
  undefined2 uStack_30;
  undefined1 local_2e [4];
  undefined2 local_2a;
  undefined2 local_28;
  undefined4 local_26;
  char local_22;
  char local_20;
  undefined2 local_1e;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined2 local_18;
  undefined2 local_16;
  undefined2 local_14;
  undefined2 local_12;
  undefined2 local_10;
  undefined4 local_e;
  undefined2 local_a;
  undefined2 local_8;
  undefined2 local_6;
  undefined2 local_4;
  
  uVar4 = 0x1010;
  uVar3 = 0x80;
  puVar1 = (undefined2 *)M007_GETVALUE(unaff_CS,local_2e);
  local_1e = *puVar1;
  local_1c = puVar1[1];
  local_20 = M007_GETSTATE(0x1018,0x2a,uVar3,uVar4);
  local_22 = M007_GETSTATE(0x1018,0xe);
  if ((local_22 != '\x01') || (local_20 != '\x01')) {
    local_1e = DAT_1010_0ad8;
    local_1c = DAT_1010_0ada;
  }
  iVar2 = M007_GETSTATE(0x1018,0x110);
  if (iVar2 == 1) {
    local_26 = DAT_1010_11d2 * (float)DAT_1010_0af4;
  }
  else {
    iVar2 = M007_GETSTATE(0x1018,0x53);
    uVar3 = DAT_1010_0afc;
    uVar4 = DAT_1010_0afe;
    if ((iVar2 != 0) && (iVar2 != 1)) {
      uVar3 = DAT_1010_0b04;
      uVar4 = DAT_1010_0b06;
    }
    local_26 = (float)CONCAT22(uVar4,uVar3);
  }
  uVar4 = 0x11b;
  puVar1 = (undefined2 *)M007_GETVALUE(0x1018,local_2e);
  local_2a = *puVar1;
  local_28 = puVar1[1];
  uVar3 = 0x117;
  uStack_30 = (undefined2)((ulong)param_1 >> 0x10);
  local_32 = (undefined2)param_1;
  M007_PUTVALUE(0x1018,local_32,uStack_30);
  local_18 = 0;
  local_1a = 0;
  local_14 = 0;
  local_16 = 0;
  local_10 = 0;
  local_12 = 0;
  local_e = FUN_1000_d838(local_1e,local_1c,param_1,local_2a,local_28,(undefined2)local_26,
                          local_26._2_2_,uVar3,uVar4);
  local_8 = 0;
  local_a = 0;
  local_4 = 0;
  local_6 = 0;
  FUN_1000_96e2(&local_1a);
  return;
}


// ---- SETSTAGE_VECTOR_Z @ 1000:5198

void __stdcall16far SETSTAGE_VECTOR_Z(undefined4 param_1)

{
  undefined2 *puVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 local_32;
  undefined2 uStack_30;
  undefined1 local_2e [4];
  undefined2 local_2a;
  undefined2 local_28;
  undefined4 local_26;
  char local_22;
  char local_20;
  undefined2 local_1e;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined2 local_18;
  undefined2 local_16;
  undefined2 local_14;
  undefined4 local_12;
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_a;
  undefined2 local_8;
  undefined2 local_6;
  undefined2 local_4;
  
  uVar5 = 0x1010;
  uVar4 = 0x80;
  puVar1 = (undefined2 *)M007_GETVALUE(unaff_CS,local_2e);
  local_1e = *puVar1;
  local_1c = puVar1[1];
  local_20 = M007_GETSTATE(0x1018,0x2a,uVar4,uVar5);
  local_22 = M007_GETSTATE(0x1018,0xe);
  if ((local_22 != '\x01') || (local_20 != '\x01')) {
    local_1e = DAT_1010_0ad8;
    local_1c = DAT_1010_0ada;
  }
  uVar4 = 0x1018;
  iVar2 = M007_GETSTATE(0x1018,0x110);
  if (iVar2 == 1) {
    local_26 = DAT_1010_11a2 * (float)DAT_1010_0adc;
  }
  else {
    uVar5 = M007_GETSTATE(0x1018,0x53);
    uVar4 = 0x1000;
    switch(uVar5) {
    case 0:
      uVar5 = DAT_1010_0ae4;
      uVar3 = DAT_1010_0ae6;
      break;
    case 1:
      uVar5 = DAT_1010_0b08;
      uVar3 = DAT_1010_0b0a;
      break;
    default:
      uVar5 = DAT_1010_0b0c;
      uVar3 = DAT_1010_0b0e;
    }
    local_26 = (float)CONCAT22(uVar3,uVar5);
  }
  uVar5 = 0xad;
  puVar1 = (undefined2 *)M007_GETVALUE(uVar4,local_2e);
  local_2a = *puVar1;
  local_28 = puVar1[1];
  uVar4 = 0x8c;
  uStack_30 = (undefined2)((ulong)param_1 >> 0x10);
  local_32 = (undefined2)param_1;
  M007_PUTVALUE(0x1018,local_32,uStack_30);
  local_18 = 0;
  local_1a = 0;
  local_14 = 0;
  local_16 = 0;
  local_12 = FUN_1000_d838(local_1e,local_1c,param_1,local_2a,local_28,(undefined2)local_26,
                           local_26._2_2_,uVar4,uVar5);
  local_c = 0;
  local_e = 0;
  local_8 = 0;
  local_a = 0;
  local_4 = 0;
  local_6 = 0;
  FUN_1000_96e2(&local_1a);
  return;
}


// ---- SETSTAGE_SCAN_ANGLE @ 1000:52dc

void __stdcall16far SETSTAGE_SCAN_ANGLE(undefined2 param_1,undefined2 param_2)

{
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  
  uVar2 = 0x1010;
  uVar1 = 0x8d;
  M007_PUTVALUE(unaff_CS,param_1,param_2);
  FUN_1000_d008(uVar1,uVar2);
  return;
}


// ---- SETXYSTAGE_FIELDS @ 1000:52fc

void __stdcall16far
SETXYSTAGE_FIELDS(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  
  uVar2 = 0x1010;
  uVar1 = 0x8e;
  M007_PUTXY(unaff_CS,param_1,param_2,param_3,param_4);
  FUN_1000_d296(uVar1,uVar2);
  return;
}


// ---- SETXYSTAGE_FIELD_SIZE @ 1000:5322

void __stdcall16far
SETXYSTAGE_FIELD_SIZE(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  
  uVar2 = 0x1010;
  uVar1 = 0x90;
  M007_PUTXY(unaff_CS,param_1,param_2,param_3,param_4);
  FUN_1000_d296(uVar1,uVar2);
  return;
}


// ---- SETXYSTAGE_GOTO_FIELD @ 1000:5348

void __stdcall16far SETXYSTAGE_GOTO_FIELD(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  undefined2 unaff_CS;
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
  int local_a;
  int local_8;
  int local_6;
  int local_4;
  
  iVar2 = FUN_1000_0264(0x1010);
  local_a = iVar2;
  local_8 = iVar2 >> 0xf;
  local_6 = FUN_1000_0264();
  local_4 = local_6 >> 0xf;
  local_22 = DAT_1010_0ab4;
  local_20 = DAT_1010_0ab6;
  local_1e = DAT_1010_0ab4;
  local_1c = DAT_1010_0ab6;
  local_1a = DAT_1010_0ab4;
  local_18 = DAT_1010_0ab6;
  local_16 = DAT_1010_0ab4;
  local_14 = DAT_1010_0ab6;
  local_12 = DAT_1010_0ab4;
  local_10 = DAT_1010_0ab6;
  local_e = DAT_1010_0ab4;
  local_c = DAT_1010_0ab6;
  FUN_1000_abca(iVar2,iVar2 >> 0xf,local_6,local_4,&local_22);
  cVar1 = FUN_1000_ade8();
  if (cVar1 == '\x01') {
    M007_PUTXY(unaff_CS,param_1,param_2);
    FUN_1000_9652(&local_22);
    DAT_1010_1298 = 1;
    DAT_1010_00dc = local_a;
    DAT_1010_00de = local_8;
    DAT_1010_00e0 = local_6;
    DAT_1010_00e2 = local_4;
  }
  else {
    M007_PUTSTATE(unaff_CS,1);
  }
  return;
}


// ---- SETXYSTAGE_HIGH @ 1000:5428

void __stdcall16far
SETXYSTAGE_HIGH(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  undefined2 *puVar1;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined1 local_1e [4];
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
  
  local_1a = param_3;
  local_18 = param_4;
  local_16 = param_1;
  local_14 = param_2;
  local_12 = DAT_1010_0ab4;
  local_10 = DAT_1010_0ab6;
  if (DAT_1010_0175 == '\x01') {
    puVar1 = (undefined2 *)M007_GETVALUE(unaff_CS,local_1e);
    local_12 = *puVar1;
    local_10 = puVar1[1];
    unaff_CS = 0x1018;
  }
  local_e = DAT_1010_0ab4;
  local_c = DAT_1010_0ab6;
  if (DAT_1010_0174 == '\x01') {
    puVar1 = (undefined2 *)M007_GETVALUE(unaff_CS,local_1e);
    local_e = *puVar1;
    local_c = puVar1[1];
    unaff_CS = 0x1018;
  }
  local_a = DAT_1010_0ab4;
  local_8 = DAT_1010_0ab6;
  if (DAT_1010_0173 == '\x01') {
    local_a = DAT_1010_0ab0;
    local_8 = DAT_1010_0ab2;
  }
  local_6 = DAT_1010_0ab4;
  local_4 = DAT_1010_0ab6;
  if (DAT_1010_0176 == '\x01') {
    puVar1 = (undefined2 *)M007_GETVALUE(unaff_CS,local_1e);
    local_6 = *puVar1;
    local_4 = puVar1[1];
  }
  FUN_1000_986e(&local_1a);
  FUN_1000_c136(&local_1a);
  FUN_1000_c7d2();
  FUN_1000_d296();
  return;
}


// ---- SETSTAGE_HIGH_T @ 1000:550a

void __stdcall16far SETSTAGE_HIGH_T(undefined2 param_1,undefined2 param_2)

{
  undefined2 *puVar1;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined1 local_26 [4];
  undefined1 local_22 [4];
  undefined1 local_1e [4];
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
  
  puVar1 = (undefined2 *)M007_GETVALUE(unaff_CS,local_1e);
  local_1a = *puVar1;
  local_18 = puVar1[1];
  puVar1 = (undefined2 *)M007_GETVALUE(0x1018,local_22);
  local_16 = *puVar1;
  local_14 = puVar1[1];
  local_12 = DAT_1010_0ab4;
  local_10 = DAT_1010_0ab6;
  if (DAT_1010_0175 == '\x01') {
    puVar1 = (undefined2 *)M007_GETVALUE(0x1018,local_26);
    local_12 = *puVar1;
    local_10 = puVar1[1];
  }
  local_e = param_1;
  local_c = param_2;
  local_a = DAT_1010_0ab4;
  local_8 = DAT_1010_0ab6;
  if (DAT_1010_0173 == '\x01') {
    local_a = DAT_1010_0ab0;
    local_8 = DAT_1010_0ab2;
  }
  local_6 = DAT_1010_0ab4;
  local_4 = DAT_1010_0ab6;
  if (DAT_1010_0176 == '\x01') {
    puVar1 = (undefined2 *)M007_GETVALUE(0x1018,local_26);
    local_6 = *puVar1;
    local_4 = puVar1[1];
  }
  FUN_1000_986e(&local_1a);
  FUN_1000_c136(&local_1a);
  FUN_1000_c7d2();
  FUN_1000_d296();
  return;
}


// ---- SETSTAGE_HIGH_Z @ 1000:55ea

void __stdcall16far SETSTAGE_HIGH_Z(undefined2 param_1,undefined2 param_2)

{
  undefined2 *puVar1;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined1 local_26 [4];
  undefined1 local_22 [4];
  undefined1 local_1e [4];
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
  
  puVar1 = (undefined2 *)M007_GETVALUE(unaff_CS,local_1e);
  local_1a = *puVar1;
  local_18 = puVar1[1];
  puVar1 = (undefined2 *)M007_GETVALUE(0x1018,local_22);
  local_16 = *puVar1;
  local_14 = puVar1[1];
  local_12 = param_1;
  local_10 = param_2;
  local_e = DAT_1010_0ab4;
  local_c = DAT_1010_0ab6;
  if (DAT_1010_0174 == '\x01') {
    puVar1 = (undefined2 *)M007_GETVALUE(0x1018,local_26);
    local_e = *puVar1;
    local_c = puVar1[1];
  }
  local_a = DAT_1010_0ab4;
  local_8 = DAT_1010_0ab6;
  if (DAT_1010_0173 == '\x01') {
    local_a = DAT_1010_0ab0;
    local_8 = DAT_1010_0ab2;
  }
  local_6 = DAT_1010_0ab4;
  local_4 = DAT_1010_0ab6;
  if (DAT_1010_0176 == '\x01') {
    puVar1 = (undefined2 *)M007_GETVALUE(0x1018,local_26);
    local_6 = *puVar1;
    local_4 = puVar1[1];
  }
  FUN_1000_986e(&local_1a);
  FUN_1000_c136(&local_1a);
  FUN_1000_c7d2();
  FUN_1000_d296();
  return;
}


// ---- SETXYSTAGE_LOW @ 1000:56ca

void __stdcall16far
SETXYSTAGE_LOW(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  undefined2 *puVar1;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined1 local_1e [4];
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
  
  local_1a = param_3;
  local_18 = param_4;
  local_16 = param_1;
  local_14 = param_2;
  local_12 = DAT_1010_0ab4;
  local_10 = DAT_1010_0ab6;
  if (DAT_1010_0175 == '\x01') {
    puVar1 = (undefined2 *)M007_GETVALUE(unaff_CS,local_1e);
    local_12 = *puVar1;
    local_10 = puVar1[1];
    unaff_CS = 0x1018;
  }
  local_e = DAT_1010_0ab4;
  local_c = DAT_1010_0ab6;
  if (DAT_1010_0174 == '\x01') {
    puVar1 = (undefined2 *)M007_GETVALUE(unaff_CS,local_1e);
    local_e = *puVar1;
    local_c = puVar1[1];
    unaff_CS = 0x1018;
  }
  local_a = DAT_1010_0ab4;
  local_8 = DAT_1010_0ab6;
  if (DAT_1010_0173 == '\x01') {
    local_a = DAT_1010_0ab8;
    local_8 = DAT_1010_0aba;
  }
  local_6 = DAT_1010_0ab4;
  local_4 = DAT_1010_0ab6;
  if (DAT_1010_0176 == '\x01') {
    puVar1 = (undefined2 *)M007_GETVALUE(unaff_CS,local_1e);
    local_6 = *puVar1;
    local_4 = puVar1[1];
  }
  FUN_1000_978e(&local_1a);
  FUN_1000_c484(&local_1a);
  FUN_1000_c7d2();
  FUN_1000_d296();
  return;
}


// ---- SETSTAGE_LOW_Z @ 1000:57ac

void __stdcall16far SETSTAGE_LOW_Z(undefined2 param_1,undefined2 param_2)

{
  undefined2 *puVar1;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined1 local_26 [4];
  undefined1 local_22 [4];
  undefined1 local_1e [4];
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
  
  puVar1 = (undefined2 *)M007_GETVALUE(unaff_CS,local_1e);
  local_1a = *puVar1;
  local_18 = puVar1[1];
  puVar1 = (undefined2 *)M007_GETVALUE(0x1018,local_22);
  local_16 = *puVar1;
  local_14 = puVar1[1];
  local_12 = param_1;
  local_10 = param_2;
  local_e = DAT_1010_0ab4;
  local_c = DAT_1010_0ab6;
  if (DAT_1010_0174 == '\x01') {
    puVar1 = (undefined2 *)M007_GETVALUE(0x1018,local_26);
    local_e = *puVar1;
    local_c = puVar1[1];
  }
  local_a = DAT_1010_0ab4;
  local_8 = DAT_1010_0ab6;
  if (DAT_1010_0173 == '\x01') {
    local_a = DAT_1010_0ab8;
    local_8 = DAT_1010_0aba;
  }
  local_6 = DAT_1010_0ab4;
  local_4 = DAT_1010_0ab6;
  if (DAT_1010_0176 == '\x01') {
    puVar1 = (undefined2 *)M007_GETVALUE(0x1018,local_26);
    local_6 = *puVar1;
    local_4 = puVar1[1];
  }
  FUN_1000_978e(&local_1a);
  FUN_1000_c484(&local_1a);
  FUN_1000_c7d2();
  FUN_1000_d296();
  return;
}


// ---- SETSTAGE_LOW_T @ 1000:588c

void __stdcall16far SETSTAGE_LOW_T(undefined2 param_1,undefined2 param_2)

{
  undefined2 *puVar1;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined1 local_26 [4];
  undefined1 local_22 [4];
  undefined1 local_1e [4];
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
  
  puVar1 = (undefined2 *)M007_GETVALUE(unaff_CS,local_1e);
  local_1a = *puVar1;
  local_18 = puVar1[1];
  puVar1 = (undefined2 *)M007_GETVALUE(0x1018,local_22);
  local_16 = *puVar1;
  local_14 = puVar1[1];
  local_12 = DAT_1010_0ab4;
  local_10 = DAT_1010_0ab6;
  if (DAT_1010_0175 == '\x01') {
    puVar1 = (undefined2 *)M007_GETVALUE(0x1018,local_26);
    local_12 = *puVar1;
    local_10 = puVar1[1];
  }
  local_e = param_1;
  local_c = param_2;
  local_a = DAT_1010_0ab4;
  local_8 = DAT_1010_0ab6;
  if (DAT_1010_0173 == '\x01') {
    local_a = DAT_1010_0ab8;
    local_8 = DAT_1010_0aba;
  }
  local_6 = DAT_1010_0ab4;
  local_4 = DAT_1010_0ab6;
  if (DAT_1010_0176 == '\x01') {
    puVar1 = (undefined2 *)M007_GETVALUE(0x1018,local_26);
    local_6 = *puVar1;
    local_4 = puVar1[1];
  }
  FUN_1000_978e(&local_1a);
  FUN_1000_c484(&local_1a);
  FUN_1000_c7d2();
  FUN_1000_d296();
  return;
}


// ---- SETBACKLASH_DISTANCE_X @ 1000:596c

void __stdcall16far SETBACKLASH_DISTANCE_X(undefined2 param_1,undefined2 param_2)

{
  undefined2 *puVar1;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined1 local_22 [4];
  undefined1 local_1e [4];
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
  
  local_1a = param_1;
  local_18 = param_2;
  puVar1 = (undefined2 *)M007_GETVALUE(unaff_CS,local_1e);
  local_16 = *puVar1;
  local_14 = puVar1[1];
  local_12 = DAT_1010_0ab4;
  local_10 = DAT_1010_0ab6;
  if (DAT_1010_0175 == '\x01') {
    puVar1 = (undefined2 *)M007_GETVALUE(0x1018,local_22);
    local_12 = *puVar1;
    local_10 = puVar1[1];
  }
  local_e = DAT_1010_0ab4;
  local_c = DAT_1010_0ab6;
  if (DAT_1010_0174 == '\x01') {
    puVar1 = (undefined2 *)M007_GETVALUE(0x1018,local_22);
    local_e = *puVar1;
    local_c = puVar1[1];
  }
  local_a = DAT_1010_0ab4;
  local_8 = DAT_1010_0ab6;
  if (DAT_1010_0173 == '\x01') {
    puVar1 = (undefined2 *)M007_GETVALUE(0x1018,local_22);
    local_a = *puVar1;
    local_8 = puVar1[1];
  }
  local_6 = DAT_1010_0ab4;
  local_4 = DAT_1010_0ab6;
  if (DAT_1010_0176 == '\x01') {
    puVar1 = (undefined2 *)M007_GETVALUE(0x1018,local_22);
    local_6 = *puVar1;
    local_4 = puVar1[1];
  }
  M007_PUTVALUE(0x1018,param_1,param_2);
  FUN_1000_997e(&local_1a);
  return;
}


// ---- SETBACKLASH_DISTANCE_Y @ 1000:5a68

void __stdcall16far SETBACKLASH_DISTANCE_Y(undefined2 param_1,undefined2 param_2)

{
  undefined2 *puVar1;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined1 local_22 [4];
  undefined1 local_1e [4];
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
  
  puVar1 = (undefined2 *)M007_GETVALUE(unaff_CS,local_1e);
  local_1a = *puVar1;
  local_18 = puVar1[1];
  local_16 = param_1;
  local_14 = param_2;
  local_12 = DAT_1010_0ab4;
  local_10 = DAT_1010_0ab6;
  if (DAT_1010_0175 == '\x01') {
    puVar1 = (undefined2 *)M007_GETVALUE(0x1018,local_22);
    local_12 = *puVar1;
    local_10 = puVar1[1];
  }
  local_e = DAT_1010_0ab4;
  local_c = DAT_1010_0ab6;
  if (DAT_1010_0174 == '\x01') {
    puVar1 = (undefined2 *)M007_GETVALUE(0x1018,local_22);
    local_e = *puVar1;
    local_c = puVar1[1];
  }
  local_a = DAT_1010_0ab4;
  local_8 = DAT_1010_0ab6;
  if (DAT_1010_0173 == '\x01') {
    puVar1 = (undefined2 *)M007_GETVALUE(0x1018,local_22);
    local_a = *puVar1;
    local_8 = puVar1[1];
  }
  local_6 = DAT_1010_0ab4;
  local_4 = DAT_1010_0ab6;
  if (DAT_1010_0176 == '\x01') {
    puVar1 = (undefined2 *)M007_GETVALUE(0x1018,local_22);
    local_6 = *puVar1;
    local_4 = puVar1[1];
  }
  M007_PUTVALUE(0x1018,param_1,param_2);
  FUN_1000_997e(&local_1a);
  return;
}


// ---- SETBACKLASH_DISTANCE_Z @ 1000:5b64

void __stdcall16far SETBACKLASH_DISTANCE_Z(undefined2 param_1,undefined2 param_2)

{
  undefined2 *puVar1;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined1 local_26 [4];
  undefined1 local_22 [4];
  undefined1 local_1e [4];
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
  
  puVar1 = (undefined2 *)M007_GETVALUE(unaff_CS,local_1e);
  local_1a = *puVar1;
  local_18 = puVar1[1];
  puVar1 = (undefined2 *)M007_GETVALUE(0x1018,local_22);
  local_16 = *puVar1;
  local_14 = puVar1[1];
  local_12 = param_1;
  local_10 = param_2;
  local_e = DAT_1010_0ab4;
  local_c = DAT_1010_0ab6;
  if (DAT_1010_0174 == '\x01') {
    puVar1 = (undefined2 *)M007_GETVALUE(0x1018,local_26);
    local_e = *puVar1;
    local_c = puVar1[1];
  }
  local_a = DAT_1010_0ab4;
  local_8 = DAT_1010_0ab6;
  if (DAT_1010_0173 == '\x01') {
    puVar1 = (undefined2 *)M007_GETVALUE(0x1018,local_26);
    local_a = *puVar1;
    local_8 = puVar1[1];
  }
  local_6 = DAT_1010_0ab4;
  local_4 = DAT_1010_0ab6;
  if (DAT_1010_0176 == '\x01') {
    puVar1 = (undefined2 *)M007_GETVALUE(0x1018,local_26);
    local_6 = *puVar1;
    local_4 = puVar1[1];
  }
  M007_PUTVALUE(0x1018,param_1,param_2);
  FUN_1000_997e(&local_1a);
  return;
}


// ---- SETBACKLASH_DISTANCE_T @ 1000:5c50

void __stdcall16far SETBACKLASH_DISTANCE_T(undefined2 param_1,undefined2 param_2)

{
  undefined2 *puVar1;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined1 local_26 [4];
  undefined1 local_22 [4];
  undefined1 local_1e [4];
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
  
  puVar1 = (undefined2 *)M007_GETVALUE(unaff_CS,local_1e);
  local_1a = *puVar1;
  local_18 = puVar1[1];
  puVar1 = (undefined2 *)M007_GETVALUE(0x1018,local_22);
  local_16 = *puVar1;
  local_14 = puVar1[1];
  local_12 = DAT_1010_0ab4;
  local_10 = DAT_1010_0ab6;
  if (DAT_1010_0175 == '\x01') {
    puVar1 = (undefined2 *)M007_GETVALUE(0x1018,local_26);
    local_12 = *puVar1;
    local_10 = puVar1[1];
  }
  local_e = param_1;
  local_c = param_2;
  local_a = DAT_1010_0ab4;
  local_8 = DAT_1010_0ab6;
  if (DAT_1010_0173 == '\x01') {
    puVar1 = (undefined2 *)M007_GETVALUE(0x1018,local_26);
    local_a = *puVar1;
    local_8 = puVar1[1];
  }
  local_6 = DAT_1010_0ab4;
  local_4 = DAT_1010_0ab6;
  if (DAT_1010_0176 == '\x01') {
    puVar1 = (undefined2 *)M007_GETVALUE(0x1018,local_26);
    local_6 = *puVar1;
    local_4 = puVar1[1];
  }
  M007_PUTVALUE(0x1018,param_1,param_2);
  FUN_1000_997e(&local_1a);
  return;
}


// ---- SETBACKLASH_SPEED_X @ 1000:5d3c

void __stdcall16far SETBACKLASH_SPEED_X(undefined2 param_1,undefined2 param_2)

{
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  undefined1 local_16 [4];
  undefined1 local_12 [4];
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_a;
  undefined2 local_8;
  undefined2 local_6;
  undefined2 local_4;
  
  local_e = FUN_1000_0264(0x1010);
  uVar2 = 0xa6;
  M007_GETVALUE(unaff_CS,local_12);
  uVar1 = 0x5d65;
  local_c = FUN_1000_0264(uVar2);
  if (DAT_1010_0175 == '\x01') {
    uVar1 = 0xa7;
    M007_GETVALUE(0x1018,local_16);
    local_a = FUN_1000_0264(uVar1);
  }
  else {
    local_a = 0;
  }
  if (DAT_1010_0174 == '\x01') {
    uVar2 = 0x124;
    M007_GETVALUE(0x1018,local_16);
    local_8 = FUN_1000_0264(uVar2,uVar1);
  }
  else {
    local_8 = 0;
  }
  if (DAT_1010_0173 == '\x01') {
    uVar2 = 0x1a5;
    M007_GETVALUE(0x1018,local_16);
    local_6 = FUN_1000_0264(uVar2,uVar1);
  }
  else {
    local_6 = 0;
  }
  if (DAT_1010_0176 == '\x01') {
    uVar1 = 0x165;
    M007_GETVALUE(0x1018,local_16);
    local_4 = FUN_1000_0264(uVar1);
  }
  else {
    local_4 = 0;
  }
  M007_PUTVALUE(0x1018,param_1,param_2);
  FUN_1000_99f6(&local_e);
  return;
}


// ---- SETBACKLASH_SPEED_Y @ 1000:5e1e

void __stdcall16far SETBACKLASH_SPEED_Y(undefined2 param_1,undefined2 param_2)

{
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  undefined1 local_16 [4];
  undefined1 local_12 [4];
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_a;
  undefined2 local_8;
  undefined2 local_6;
  undefined2 local_4;
  
  uVar2 = 0x1010;
  uVar1 = 0xa5;
  M007_GETVALUE(unaff_CS,local_12);
  local_e = FUN_1000_0264(uVar1,uVar2);
  uVar1 = 0x5e47;
  local_c = FUN_1000_0264();
  if (DAT_1010_0175 == '\x01') {
    uVar1 = 0xa7;
    M007_GETVALUE(0x1018,local_16);
    local_a = FUN_1000_0264(uVar1);
  }
  else {
    local_a = 0;
  }
  if (DAT_1010_0174 == '\x01') {
    uVar2 = 0x124;
    M007_GETVALUE(0x1018,local_16);
    local_8 = FUN_1000_0264(uVar2,uVar1);
  }
  else {
    local_8 = 0;
  }
  if (DAT_1010_0173 == '\x01') {
    uVar2 = 0x1a5;
    M007_GETVALUE(0x1018,local_16);
    local_6 = FUN_1000_0264(uVar2,uVar1);
  }
  else {
    local_6 = 0;
  }
  if (DAT_1010_0176 == '\x01') {
    uVar1 = 0x165;
    M007_GETVALUE(0x1018,local_16);
    local_4 = FUN_1000_0264(uVar1);
  }
  else {
    local_4 = 0;
  }
  M007_PUTVALUE(0x1018,param_1,param_2);
  FUN_1000_99f6(&local_e);
  return;
}


// ---- SETBACKLASH_SPEED_Z @ 1000:5f00

void __stdcall16far SETBACKLASH_SPEED_Z(undefined2 param_1,undefined2 param_2)

{
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  undefined1 local_1a [4];
  undefined1 local_16 [4];
  undefined1 local_12 [4];
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_a;
  undefined2 local_8;
  undefined2 local_6;
  undefined2 local_4;
  
  uVar2 = 0x1010;
  uVar1 = 0xa5;
  M007_GETVALUE(unaff_CS,local_12);
  local_e = FUN_1000_0264(uVar1,uVar2);
  uVar1 = 0xa6;
  M007_GETVALUE(0x1018,local_16);
  local_c = FUN_1000_0264(uVar1);
  uVar1 = 0x5f41;
  local_a = FUN_1000_0264();
  if (DAT_1010_0174 == '\x01') {
    uVar1 = 0x124;
    M007_GETVALUE(0x1018,local_1a);
    local_8 = FUN_1000_0264(uVar1);
  }
  else {
    local_8 = 0;
  }
  if (DAT_1010_0173 == '\x01') {
    uVar2 = 0x1a5;
    M007_GETVALUE(0x1018,local_1a);
    local_6 = FUN_1000_0264(uVar2,uVar1);
  }
  else {
    local_6 = 0;
  }
  if (DAT_1010_0176 == '\x01') {
    uVar2 = 0x165;
    M007_GETVALUE(0x1018,local_1a);
    local_4 = FUN_1000_0264(uVar2,uVar1);
  }
  else {
    local_4 = 0;
  }
  M007_PUTVALUE(0x1018,param_1,param_2);
  FUN_1000_99f6(&local_e);
  return;
}


// ---- SETBACKLASH_SPEED_T @ 1000:5fd4

void __stdcall16far SETBACKLASH_SPEED_T(undefined2 param_1,undefined2 param_2)

{
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  undefined1 local_1a [4];
  undefined1 local_16 [4];
  undefined1 local_12 [4];
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_a;
  undefined2 local_8;
  undefined2 local_6;
  undefined2 local_4;
  
  uVar2 = 0x1010;
  uVar1 = 0xa5;
  M007_GETVALUE(unaff_CS,local_12);
  local_e = FUN_1000_0264(uVar1,uVar2);
  uVar2 = 0xa6;
  M007_GETVALUE(0x1018,local_16);
  uVar1 = 0x600b;
  local_c = FUN_1000_0264(uVar2);
  if (DAT_1010_0175 == '\x01') {
    uVar1 = 0xa7;
    M007_GETVALUE(0x1018,local_1a);
    local_a = FUN_1000_0264(uVar1);
  }
  else {
    local_a = 0;
  }
  local_8 = FUN_1000_0264(uVar1);
  if (DAT_1010_0173 == '\x01') {
    uVar1 = 0x1a5;
    M007_GETVALUE(0x1018,local_1a);
    local_6 = FUN_1000_0264(uVar1);
  }
  else {
    local_6 = 0;
  }
  if (DAT_1010_0176 == '\x01') {
    uVar1 = 0x165;
    M007_GETVALUE(0x1018,local_1a);
    local_4 = FUN_1000_0264(uVar1);
  }
  else {
    local_4 = 0;
  }
  M007_PUTVALUE(0x1018,param_1,param_2);
  FUN_1000_99f6(&local_e);
  return;
}


// ---- SETSTAGE_V_START_X @ 1000:60a8

void __stdcall16far SETSTAGE_V_START_X(undefined2 param_1,undefined2 param_2)

{
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  undefined1 local_16 [4];
  undefined1 local_12 [4];
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_a;
  undefined2 local_8;
  undefined2 local_6;
  undefined2 local_4;
  
  local_e = FUN_1000_0264(0x1010);
  uVar2 = 0xa9;
  M007_GETVALUE(unaff_CS,local_12);
  uVar1 = 0x60d1;
  local_c = FUN_1000_0264(uVar2);
  if (DAT_1010_0175 == '\x01') {
    uVar1 = 0xaa;
    M007_GETVALUE(0x1018,local_16);
    local_a = FUN_1000_0264(uVar1);
  }
  else {
    local_a = 0;
  }
  if (DAT_1010_0174 == '\x01') {
    uVar2 = 0x119;
    M007_GETVALUE(0x1018,local_16);
    local_8 = FUN_1000_0264(uVar2,uVar1);
  }
  else {
    local_8 = 0;
  }
  if (DAT_1010_0173 == '\x01') {
    uVar2 = 0x118;
    M007_GETVALUE(0x1018,local_16);
    local_6 = FUN_1000_0264(uVar2,uVar1);
  }
  else {
    local_6 = 0;
  }
  if (DAT_1010_0176 == '\x01') {
    uVar1 = 0x166;
    M007_GETVALUE(0x1018,local_16);
    local_4 = FUN_1000_0264(uVar1);
  }
  else {
    local_4 = 0;
  }
  M007_PUTVALUE(0x1018,param_1,param_2);
  FUN_1000_9a46(&local_e);
  return;
}


// ---- SETSTAGE_V_START_Y @ 1000:618a

void __stdcall16far SETSTAGE_V_START_Y(undefined2 param_1,undefined2 param_2)

{
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  undefined1 local_16 [4];
  undefined1 local_12 [4];
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_a;
  undefined2 local_8;
  undefined2 local_6;
  undefined2 local_4;
  
  uVar2 = 0x1010;
  uVar1 = 0xa8;
  M007_GETVALUE(unaff_CS,local_12);
  local_e = FUN_1000_0264(uVar1,uVar2);
  uVar1 = 0x61b3;
  local_c = FUN_1000_0264();
  if (DAT_1010_0175 == '\x01') {
    uVar1 = 0xaa;
    M007_GETVALUE(0x1018,local_16);
    local_a = FUN_1000_0264(uVar1);
  }
  else {
    local_a = 0;
  }
  if (DAT_1010_0174 == '\x01') {
    uVar2 = 0x119;
    M007_GETVALUE(0x1018,local_16);
    local_8 = FUN_1000_0264(uVar2,uVar1);
  }
  else {
    local_8 = 0;
  }
  if (DAT_1010_0173 == '\x01') {
    uVar2 = 0x118;
    M007_GETVALUE(0x1018,local_16);
    local_6 = FUN_1000_0264(uVar2,uVar1);
  }
  else {
    local_6 = 0;
  }
  if (DAT_1010_0176 == '\x01') {
    uVar1 = 0x166;
    M007_GETVALUE(0x1018,local_16);
    local_4 = FUN_1000_0264(uVar1);
  }
  else {
    local_4 = 0;
  }
  M007_PUTVALUE(0x1018,param_1,param_2);
  FUN_1000_9a46(&local_e);
  return;
}


// ---- SETSTAGE_V_START_Z @ 1000:626c

void __stdcall16far SETSTAGE_V_START_Z(undefined2 param_1,undefined2 param_2)

{
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  undefined1 local_1a [4];
  undefined1 local_16 [4];
  undefined1 local_12 [4];
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_a;
  undefined2 local_8;
  undefined2 local_6;
  undefined2 local_4;
  
  uVar2 = 0x1010;
  uVar1 = 0xa8;
  M007_GETVALUE(unaff_CS,local_12);
  local_e = FUN_1000_0264(uVar1,uVar2);
  uVar1 = 0xa9;
  M007_GETVALUE(0x1018,local_16);
  local_c = FUN_1000_0264(uVar1);
  uVar1 = 0x62ad;
  local_a = FUN_1000_0264();
  if (DAT_1010_0174 == '\x01') {
    uVar1 = 0x119;
    M007_GETVALUE(0x1018,local_1a);
    local_8 = FUN_1000_0264(uVar1);
  }
  else {
    local_8 = 0;
  }
  if (DAT_1010_0173 == '\x01') {
    uVar2 = 0x118;
    M007_GETVALUE(0x1018,local_1a);
    local_6 = FUN_1000_0264(uVar2,uVar1);
  }
  else {
    local_6 = 0;
  }
  if (DAT_1010_0176 == '\x01') {
    uVar2 = 0x166;
    M007_GETVALUE(0x1018,local_1a);
    local_4 = FUN_1000_0264(uVar2,uVar1);
  }
  else {
    local_4 = 0;
  }
  M007_PUTVALUE(0x1018,param_1,param_2);
  FUN_1000_9a46(&local_e);
  return;
}


// ---- SETSTAGE_V_START_T @ 1000:6340

void __stdcall16far SETSTAGE_V_START_T(undefined2 param_1,undefined2 param_2)

{
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  undefined1 local_1a [4];
  undefined1 local_16 [4];
  undefined1 local_12 [4];
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_a;
  undefined2 local_8;
  undefined2 local_6;
  undefined2 local_4;
  
  uVar2 = 0x1010;
  uVar1 = 0xa8;
  M007_GETVALUE(unaff_CS,local_12);
  local_e = FUN_1000_0264(uVar1,uVar2);
  uVar2 = 0xa9;
  M007_GETVALUE(0x1018,local_16);
  uVar1 = 0x6377;
  local_c = FUN_1000_0264(uVar2);
  if (DAT_1010_0175 == '\x01') {
    uVar1 = 0xaa;
    M007_GETVALUE(0x1018,local_1a);
    local_a = FUN_1000_0264(uVar1);
  }
  else {
    local_a = 0;
  }
  local_8 = FUN_1000_0264(uVar1);
  if (DAT_1010_0173 == '\x01') {
    uVar1 = 0x118;
    M007_GETVALUE(0x1018,local_1a);
    local_6 = FUN_1000_0264(uVar1);
  }
  else {
    local_6 = 0;
  }
  if (DAT_1010_0176 == '\x01') {
    uVar1 = 0x166;
    M007_GETVALUE(0x1018,local_1a);
    local_4 = FUN_1000_0264(uVar1);
  }
  else {
    local_4 = 0;
  }
  M007_PUTVALUE(0x1018,param_1,param_2);
  FUN_1000_9a46(&local_e);
  return;
}


// ---- SETSTAGE_V_START_R @ 1000:6414

void __stdcall16far SETSTAGE_V_START_R(undefined2 param_1,undefined2 param_2)

{
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  undefined1 local_1a [4];
  undefined1 local_16 [4];
  undefined1 local_12 [4];
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_a;
  undefined2 local_8;
  undefined2 local_6;
  undefined2 local_4;
  
  uVar2 = 0x1010;
  uVar1 = 0xa8;
  M007_GETVALUE(unaff_CS,local_12);
  local_e = FUN_1000_0264(uVar1,uVar2);
  uVar2 = 0xa9;
  M007_GETVALUE(0x1018,local_16);
  uVar1 = 0x644b;
  local_c = FUN_1000_0264(uVar2);
  if (DAT_1010_0175 == '\x01') {
    uVar1 = 0xaa;
    M007_GETVALUE(0x1018,local_1a);
    local_a = FUN_1000_0264(uVar1);
  }
  else {
    local_a = 0;
  }
  if (DAT_1010_0174 == '\x01') {
    uVar2 = 0x119;
    M007_GETVALUE(0x1018,local_1a);
    local_8 = FUN_1000_0264(uVar2,uVar1);
  }
  else {
    local_8 = 0;
  }
  local_6 = FUN_1000_0264();
  if (DAT_1010_0176 == '\x01') {
    uVar1 = 0x166;
    M007_GETVALUE(0x1018,local_1a);
    local_4 = FUN_1000_0264(uVar1);
  }
  else {
    local_4 = 0;
  }
  M007_PUTVALUE(0x1018,param_1,param_2);
  FUN_1000_9a46(&local_e);
  return;
}


// ---- SETSTAGE_CRUISE_X @ 1000:64e8

void __stdcall16far SETSTAGE_CRUISE_X(undefined2 param_1,undefined2 param_2)

{
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  undefined1 local_16 [4];
  undefined1 local_12 [4];
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_a;
  undefined2 local_8;
  undefined2 local_6;
  undefined2 local_4;
  
  local_e = FUN_1000_0264(0x1010);
  uVar2 = 0xac;
  M007_GETVALUE(unaff_CS,local_12);
  uVar1 = 0x6511;
  local_c = FUN_1000_0264(uVar2);
  if (DAT_1010_0175 == '\x01') {
    uVar1 = 0xad;
    M007_GETVALUE(0x1018,local_16);
    local_a = FUN_1000_0264(uVar1);
  }
  else {
    local_a = 0;
  }
  if (DAT_1010_0174 == '\x01') {
    uVar2 = 0x11b;
    M007_GETVALUE(0x1018,local_16);
    local_8 = FUN_1000_0264(uVar2,uVar1);
  }
  else {
    local_8 = 0;
  }
  if (DAT_1010_0173 == '\x01') {
    uVar2 = 0x11a;
    M007_GETVALUE(0x1018,local_16);
    local_6 = FUN_1000_0264(uVar2,uVar1);
  }
  else {
    local_6 = 0;
  }
  if (DAT_1010_0176 == '\x01') {
    uVar1 = 0x167;
    M007_GETVALUE(0x1018,local_16);
    local_4 = FUN_1000_0264(uVar1);
  }
  else {
    local_4 = 0;
  }
  M007_PUTVALUE(0x1018,param_1,param_2);
  FUN_1000_9a96(&local_e);
  return;
}


// ---- SETSTAGE_CRUISE_Y @ 1000:65ca

void __stdcall16far SETSTAGE_CRUISE_Y(undefined2 param_1,undefined2 param_2)

{
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  undefined1 local_16 [4];
  undefined1 local_12 [4];
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_a;
  undefined2 local_8;
  undefined2 local_6;
  undefined2 local_4;
  
  uVar2 = 0x1010;
  uVar1 = 0xab;
  M007_GETVALUE(unaff_CS,local_12);
  local_e = FUN_1000_0264(uVar1,uVar2);
  uVar1 = 0x65f3;
  local_c = FUN_1000_0264();
  if (DAT_1010_0175 == '\x01') {
    uVar1 = 0xad;
    M007_GETVALUE(0x1018,local_16);
    local_a = FUN_1000_0264(uVar1);
  }
  else {
    local_a = 0;
  }
  if (DAT_1010_0174 == '\x01') {
    uVar2 = 0x11b;
    M007_GETVALUE(0x1018,local_16);
    local_8 = FUN_1000_0264(uVar2,uVar1);
  }
  else {
    local_8 = 0;
  }
  if (DAT_1010_0173 == '\x01') {
    uVar2 = 0x11a;
    M007_GETVALUE(0x1018,local_16);
    local_6 = FUN_1000_0264(uVar2,uVar1);
  }
  else {
    local_6 = 0;
  }
  if (DAT_1010_0176 == '\x01') {
    uVar1 = 0x167;
    M007_GETVALUE(0x1018,local_16);
    local_4 = FUN_1000_0264(uVar1);
  }
  else {
    local_4 = 0;
  }
  M007_PUTVALUE(0x1018,param_1,param_2);
  FUN_1000_9a96(&local_e);
  return;
}


// ---- SETSTAGE_CRUISE_Z @ 1000:66ac

void __stdcall16far SETSTAGE_CRUISE_Z(undefined2 param_1,undefined2 param_2)

{
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  undefined1 local_1a [4];
  undefined1 local_16 [4];
  undefined1 local_12 [4];
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_a;
  undefined2 local_8;
  undefined2 local_6;
  undefined2 local_4;
  
  uVar2 = 0x1010;
  uVar1 = 0xab;
  M007_GETVALUE(unaff_CS,local_12);
  local_e = FUN_1000_0264(uVar1,uVar2);
  uVar1 = 0xac;
  M007_GETVALUE(0x1018,local_16);
  local_c = FUN_1000_0264(uVar1);
  uVar1 = 0x66ed;
  local_a = FUN_1000_0264();
  if (DAT_1010_0174 == '\x01') {
    uVar1 = 0x11b;
    M007_GETVALUE(0x1018,local_1a);
    local_8 = FUN_1000_0264(uVar1);
  }
  else {
    local_8 = 0;
  }
  if (DAT_1010_0173 == '\x01') {
    uVar2 = 0x11a;
    M007_GETVALUE(0x1018,local_1a);
    local_6 = FUN_1000_0264(uVar2,uVar1);
  }
  else {
    local_6 = 0;
  }
  if (DAT_1010_0176 == '\x01') {
    uVar2 = 0x167;
    M007_GETVALUE(0x1018,local_1a);
    local_4 = FUN_1000_0264(uVar2,uVar1);
  }
  else {
    local_4 = 0;
  }
  M007_PUTVALUE(0x1018,param_1,param_2);
  FUN_1000_9a96(&local_e);
  return;
}


// ---- SETSTAGE_CRUISE_T @ 1000:6780

void __stdcall16far SETSTAGE_CRUISE_T(undefined2 param_1,undefined2 param_2)

{
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  undefined1 local_1a [4];
  undefined1 local_16 [4];
  undefined1 local_12 [4];
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_a;
  undefined2 local_8;
  undefined2 local_6;
  undefined2 local_4;
  
  uVar2 = 0x1010;
  uVar1 = 0xab;
  M007_GETVALUE(unaff_CS,local_12);
  local_e = FUN_1000_0264(uVar1,uVar2);
  uVar2 = 0xac;
  M007_GETVALUE(0x1018,local_16);
  uVar1 = 0x67b7;
  local_c = FUN_1000_0264(uVar2);
  if (DAT_1010_0175 == '\x01') {
    uVar1 = 0xad;
    M007_GETVALUE(0x1018,local_1a);
    local_a = FUN_1000_0264(uVar1);
  }
  else {
    local_a = 0;
  }
  local_8 = FUN_1000_0264(uVar1);
  if (DAT_1010_0173 == '\x01') {
    uVar1 = 0x11a;
    M007_GETVALUE(0x1018,local_1a);
    local_6 = FUN_1000_0264(uVar1);
  }
  else {
    local_6 = 0;
  }
  if (DAT_1010_0176 == '\x01') {
    uVar1 = 0x167;
    M007_GETVALUE(0x1018,local_1a);
    local_4 = FUN_1000_0264(uVar1);
  }
  else {
    local_4 = 0;
  }
  M007_PUTVALUE(0x1018,param_1,param_2);
  FUN_1000_9a96(&local_e);
  return;
}


// ---- SETSTAGE_CRUISE_R @ 1000:6854

void __stdcall16far SETSTAGE_CRUISE_R(undefined2 param_1,undefined2 param_2)

{
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  undefined1 local_1a [4];
  undefined1 local_16 [4];
  undefined1 local_12 [4];
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_a;
  undefined2 local_8;
  undefined2 local_6;
  undefined2 local_4;
  
  uVar2 = 0x1010;
  uVar1 = 0xab;
  M007_GETVALUE(unaff_CS,local_12);
  local_e = FUN_1000_0264(uVar1,uVar2);
  uVar2 = 0xac;
  M007_GETVALUE(0x1018,local_16);
  uVar1 = 0x688b;
  local_c = FUN_1000_0264(uVar2);
  if (DAT_1010_0175 == '\x01') {
    uVar1 = 0xad;
    M007_GETVALUE(0x1018,local_1a);
    local_a = FUN_1000_0264(uVar1);
  }
  else {
    local_a = 0;
  }
  if (DAT_1010_0174 == '\x01') {
    uVar2 = 0x11b;
    M007_GETVALUE(0x1018,local_1a);
    local_8 = FUN_1000_0264(uVar2,uVar1);
  }
  else {
    local_8 = 0;
  }
  local_6 = FUN_1000_0264();
  if (DAT_1010_0176 == '\x01') {
    uVar1 = 0x167;
    M007_GETVALUE(0x1018,local_1a);
    local_4 = FUN_1000_0264(uVar1);
  }
  else {
    local_4 = 0;
  }
  M007_PUTVALUE(0x1018,param_1,param_2);
  FUN_1000_9a96(&local_e);
  return;
}


// ---- SETSTAGE_SPEED_INC_X @ 1000:6928

void __stdcall16far SETSTAGE_SPEED_INC_X(undefined2 param_1,undefined2 param_2)

{
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  undefined1 local_16 [4];
  undefined1 local_12 [4];
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_a;
  undefined2 local_8;
  undefined2 local_6;
  undefined2 local_4;
  
  local_e = FUN_1000_0264(0x1010);
  uVar2 = 0xaf;
  M007_GETVALUE(unaff_CS,local_12);
  uVar1 = 0x6951;
  local_c = FUN_1000_0264(uVar2);
  if (DAT_1010_0175 == '\x01') {
    uVar1 = 0xb0;
    M007_GETVALUE(0x1018,local_16);
    local_a = FUN_1000_0264(uVar1);
  }
  else {
    local_a = 0;
  }
  if (DAT_1010_0174 == '\x01') {
    uVar2 = 0x11d;
    M007_GETVALUE(0x1018,local_16);
    local_8 = FUN_1000_0264(uVar2,uVar1);
  }
  else {
    local_8 = 0;
  }
  if (DAT_1010_0173 == '\x01') {
    uVar2 = 0x11c;
    M007_GETVALUE(0x1018,local_16);
    local_6 = FUN_1000_0264(uVar2,uVar1);
  }
  else {
    local_6 = 0;
  }
  if (DAT_1010_0176 == '\x01') {
    uVar1 = 0x168;
    M007_GETVALUE(0x1018,local_16);
    local_4 = FUN_1000_0264(uVar1);
  }
  else {
    local_4 = 0;
  }
  M007_PUTVALUE(0x1018,param_1,param_2);
  FUN_1000_9ae6(&local_e);
  return;
}


// ---- SETSTAGE_SPEED_INC_Y @ 1000:6a0a

void __stdcall16far SETSTAGE_SPEED_INC_Y(undefined2 param_1,undefined2 param_2)

{
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  undefined1 local_16 [4];
  undefined1 local_12 [4];
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_a;
  undefined2 local_8;
  undefined2 local_6;
  undefined2 local_4;
  
  uVar2 = 0x1010;
  uVar1 = 0xae;
  M007_GETVALUE(unaff_CS,local_12);
  local_e = FUN_1000_0264(uVar1,uVar2);
  uVar1 = 0x6a33;
  local_c = FUN_1000_0264();
  if (DAT_1010_0175 == '\x01') {
    uVar1 = 0xb0;
    M007_GETVALUE(0x1018,local_16);
    local_a = FUN_1000_0264(uVar1);
  }
  else {
    local_a = 0;
  }
  if (DAT_1010_0174 == '\x01') {
    uVar2 = 0x11d;
    M007_GETVALUE(0x1018,local_16);
    local_8 = FUN_1000_0264(uVar2,uVar1);
  }
  else {
    local_8 = 0;
  }
  if (DAT_1010_0173 == '\x01') {
    uVar2 = 0x11c;
    M007_GETVALUE(0x1018,local_16);
    local_6 = FUN_1000_0264(uVar2,uVar1);
  }
  else {
    local_6 = 0;
  }
  if (DAT_1010_0176 == '\x01') {
    uVar1 = 0x168;
    M007_GETVALUE(0x1018,local_16);
    local_4 = FUN_1000_0264(uVar1);
  }
  else {
    local_4 = 0;
  }
  M007_PUTVALUE(0x1018,param_1,param_2);
  FUN_1000_9ae6(&local_e);
  return;
}


// ---- SETSTAGE_SPEED_INC_Z @ 1000:6aec

void __stdcall16far SETSTAGE_SPEED_INC_Z(undefined2 param_1,undefined2 param_2)

{
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  undefined1 local_1a [4];
  undefined1 local_16 [4];
  undefined1 local_12 [4];
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_a;
  undefined2 local_8;
  undefined2 local_6;
  undefined2 local_4;
  
  uVar2 = 0x1010;
  uVar1 = 0xae;
  M007_GETVALUE(unaff_CS,local_12);
  local_e = FUN_1000_0264(uVar1,uVar2);
  uVar1 = 0xaf;
  M007_GETVALUE(0x1018,local_16);
  local_c = FUN_1000_0264(uVar1);
  uVar1 = 0x6b2d;
  local_a = FUN_1000_0264();
  if (DAT_1010_0174 == '\x01') {
    uVar1 = 0x11d;
    M007_GETVALUE(0x1018,local_1a);
    local_8 = FUN_1000_0264(uVar1);
  }
  else {
    local_8 = 0;
  }
  if (DAT_1010_0173 == '\x01') {
    uVar2 = 0x11c;
    M007_GETVALUE(0x1018,local_1a);
    local_6 = FUN_1000_0264(uVar2,uVar1);
  }
  else {
    local_6 = 0;
  }
  if (DAT_1010_0176 == '\x01') {
    uVar2 = 0x168;
    M007_GETVALUE(0x1018,local_1a);
    local_4 = FUN_1000_0264(uVar2,uVar1);
  }
  else {
    local_4 = 0;
  }
  M007_PUTVALUE(0x1018,param_1,param_2);
  FUN_1000_9ae6(&local_e);
  return;
}


// ---- SETSTAGE_SPEED_INC_T @ 1000:6bc0

void __stdcall16far SETSTAGE_SPEED_INC_T(undefined2 param_1,undefined2 param_2)

{
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  undefined1 local_1a [4];
  undefined1 local_16 [4];
  undefined1 local_12 [4];
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_a;
  undefined2 local_8;
  undefined2 local_6;
  undefined2 local_4;
  
  uVar2 = 0x1010;
  uVar1 = 0xae;
  M007_GETVALUE(unaff_CS,local_12);
  local_e = FUN_1000_0264(uVar1,uVar2);
  uVar2 = 0xaf;
  M007_GETVALUE(0x1018,local_16);
  uVar1 = 0x6bf7;
  local_c = FUN_1000_0264(uVar2);
  if (DAT_1010_0175 == '\x01') {
    uVar1 = 0xb0;
    M007_GETVALUE(0x1018,local_1a);
    local_a = FUN_1000_0264(uVar1);
  }
  else {
    local_a = 0;
  }
  local_8 = FUN_1000_0264(uVar1);
  if (DAT_1010_0173 == '\x01') {
    uVar1 = 0x11c;
    M007_GETVALUE(0x1018,local_1a);
    local_6 = FUN_1000_0264(uVar1);
  }
  else {
    local_6 = 0;
  }
  if (DAT_1010_0176 == '\x01') {
    uVar1 = 0x168;
    M007_GETVALUE(0x1018,local_1a);
    local_4 = FUN_1000_0264(uVar1);
  }
  else {
    local_4 = 0;
  }
  M007_PUTVALUE(0x1018,param_1,param_2);
  FUN_1000_9ae6(&local_e);
  return;
}


// ---- SETSTAGE_SPEED_INC_R @ 1000:6c94

void __stdcall16far SETSTAGE_SPEED_INC_R(undefined2 param_1,undefined2 param_2)

{
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  undefined1 local_1a [4];
  undefined1 local_16 [4];
  undefined1 local_12 [4];
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_a;
  undefined2 local_8;
  undefined2 local_6;
  undefined2 local_4;
  
  uVar2 = 0x1010;
  uVar1 = 0xae;
  M007_GETVALUE(unaff_CS,local_12);
  local_e = FUN_1000_0264(uVar1,uVar2);
  uVar2 = 0xaf;
  M007_GETVALUE(0x1018,local_16);
  uVar1 = 0x6ccb;
  local_c = FUN_1000_0264(uVar2);
  if (DAT_1010_0175 == '\x01') {
    uVar1 = 0xb0;
    M007_GETVALUE(0x1018,local_1a);
    local_a = FUN_1000_0264(uVar1);
  }
  else {
    local_a = 0;
  }
  if (DAT_1010_0174 == '\x01') {
    uVar2 = 0x11d;
    M007_GETVALUE(0x1018,local_1a);
    local_8 = FUN_1000_0264(uVar2,uVar1);
  }
  else {
    local_8 = 0;
  }
  local_6 = FUN_1000_0264();
  if (DAT_1010_0176 == '\x01') {
    uVar1 = 0x168;
    M007_GETVALUE(0x1018,local_1a);
    local_4 = FUN_1000_0264(uVar1);
  }
  else {
    local_4 = 0;
  }
  M007_PUTVALUE(0x1018,param_1,param_2);
  FUN_1000_9ae6(&local_e);
  return;
}


// ---- SETSTAGE_TIME_INC_X @ 1000:6d68

void __stdcall16far SETSTAGE_TIME_INC_X(undefined2 param_1,undefined2 param_2)

{
  undefined2 *puVar1;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined1 local_22 [4];
  undefined1 local_1e [4];
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
  
  local_1a = param_1;
  local_18 = param_2;
  puVar1 = (undefined2 *)M007_GETVALUE(unaff_CS,local_1e);
  local_16 = *puVar1;
  local_14 = puVar1[1];
  local_12 = DAT_1010_0ab4;
  local_10 = DAT_1010_0ab6;
  if (DAT_1010_0175 == '\x01') {
    puVar1 = (undefined2 *)M007_GETVALUE(0x1018,local_22);
    local_12 = *puVar1;
    local_10 = puVar1[1];
  }
  local_e = DAT_1010_0ab4;
  local_c = DAT_1010_0ab6;
  if (DAT_1010_0174 == '\x01') {
    puVar1 = (undefined2 *)M007_GETVALUE(0x1018,local_22);
    local_e = *puVar1;
    local_c = puVar1[1];
  }
  local_a = DAT_1010_0ab4;
  local_8 = DAT_1010_0ab6;
  if (DAT_1010_0173 == '\x01') {
    puVar1 = (undefined2 *)M007_GETVALUE(0x1018,local_22);
    local_a = *puVar1;
    local_8 = puVar1[1];
  }
  local_6 = DAT_1010_0ab4;
  local_4 = DAT_1010_0ab6;
  if (DAT_1010_0176 == '\x01') {
    puVar1 = (undefined2 *)M007_GETVALUE(0x1018,local_22);
    local_6 = *puVar1;
    local_4 = puVar1[1];
  }
  M007_PUTVALUE(0x1018,param_1,param_2);
  FUN_1000_9b36(&local_1a);
  return;
}


// ---- SETSTAGE_TIME_INC_Y @ 1000:6e64

void __stdcall16far SETSTAGE_TIME_INC_Y(undefined2 param_1,undefined2 param_2)

{
  undefined2 *puVar1;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined1 local_22 [4];
  undefined1 local_1e [4];
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
  
  puVar1 = (undefined2 *)M007_GETVALUE(unaff_CS,local_1e);
  local_1a = *puVar1;
  local_18 = puVar1[1];
  local_16 = param_1;
  local_14 = param_2;
  local_12 = DAT_1010_0ab4;
  local_10 = DAT_1010_0ab6;
  if (DAT_1010_0175 == '\x01') {
    puVar1 = (undefined2 *)M007_GETVALUE(0x1018,local_22);
    local_12 = *puVar1;
    local_10 = puVar1[1];
  }
  local_e = DAT_1010_0ab4;
  local_c = DAT_1010_0ab6;
  if (DAT_1010_0174 == '\x01') {
    puVar1 = (undefined2 *)M007_GETVALUE(0x1018,local_22);
    local_e = *puVar1;
    local_c = puVar1[1];
  }
  local_a = DAT_1010_0ab4;
  local_8 = DAT_1010_0ab6;
  if (DAT_1010_0173 == '\x01') {
    puVar1 = (undefined2 *)M007_GETVALUE(0x1018,local_22);
    local_a = *puVar1;
    local_8 = puVar1[1];
  }
  local_6 = DAT_1010_0ab4;
  local_4 = DAT_1010_0ab6;
  if (DAT_1010_0176 == '\x01') {
    puVar1 = (undefined2 *)M007_GETVALUE(0x1018,local_22);
    local_6 = *puVar1;
    local_4 = puVar1[1];
  }
  M007_PUTVALUE(0x1018,param_1,param_2);
  FUN_1000_9b36(&local_1a);
  return;
}


// ---- SETSTAGE_TIME_INC_Z @ 1000:6f60

void __stdcall16far SETSTAGE_TIME_INC_Z(undefined2 param_1,undefined2 param_2)

{
  undefined2 *puVar1;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined1 local_26 [4];
  undefined1 local_22 [4];
  undefined1 local_1e [4];
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
  
  puVar1 = (undefined2 *)M007_GETVALUE(unaff_CS,local_1e);
  local_1a = *puVar1;
  local_18 = puVar1[1];
  puVar1 = (undefined2 *)M007_GETVALUE(0x1018,local_22);
  local_16 = *puVar1;
  local_14 = puVar1[1];
  local_12 = param_1;
  local_10 = param_2;
  local_e = DAT_1010_0ab4;
  local_c = DAT_1010_0ab6;
  if (DAT_1010_0174 == '\x01') {
    puVar1 = (undefined2 *)M007_GETVALUE(0x1018,local_26);
    local_e = *puVar1;
    local_c = puVar1[1];
  }
  local_a = DAT_1010_0ab4;
  local_8 = DAT_1010_0ab6;
  if (DAT_1010_0173 == '\x01') {
    puVar1 = (undefined2 *)M007_GETVALUE(0x1018,local_26);
    local_a = *puVar1;
    local_8 = puVar1[1];
  }
  local_6 = DAT_1010_0ab4;
  local_4 = DAT_1010_0ab6;
  if (DAT_1010_0176 == '\x01') {
    puVar1 = (undefined2 *)M007_GETVALUE(0x1018,local_26);
    local_6 = *puVar1;
    local_4 = puVar1[1];
  }
  M007_PUTVALUE(0x1018,param_1,param_2);
  FUN_1000_9b36(&local_1a);
  return;
}


// ---- SETSTAGE_TIME_INC_T @ 1000:704c

void __stdcall16far SETSTAGE_TIME_INC_T(undefined2 param_1,undefined2 param_2)

{
  undefined2 *puVar1;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined1 local_26 [4];
  undefined1 local_22 [4];
  undefined1 local_1e [4];
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
  
  puVar1 = (undefined2 *)M007_GETVALUE(unaff_CS,local_1e);
  local_1a = *puVar1;
  local_18 = puVar1[1];
  puVar1 = (undefined2 *)M007_GETVALUE(0x1018,local_22);
  local_16 = *puVar1;
  local_14 = puVar1[1];
  local_12 = DAT_1010_0ab4;
  local_10 = DAT_1010_0ab6;
  if (DAT_1010_0175 == '\x01') {
    puVar1 = (undefined2 *)M007_GETVALUE(0x1018,local_26);
    local_12 = *puVar1;
    local_10 = puVar1[1];
  }
  local_e = param_1;
  local_c = param_2;
  local_a = DAT_1010_0ab4;
  local_8 = DAT_1010_0ab6;
  if (DAT_1010_0173 == '\x01') {
    puVar1 = (undefined2 *)M007_GETVALUE(0x1018,local_26);
    local_a = *puVar1;
    local_8 = puVar1[1];
  }
  local_6 = DAT_1010_0ab4;
  local_4 = DAT_1010_0ab6;
  if (DAT_1010_0176 == '\x01') {
    puVar1 = (undefined2 *)M007_GETVALUE(0x1018,local_26);
    local_6 = *puVar1;
    local_4 = puVar1[1];
  }
  M007_PUTVALUE(0x1018,param_1,param_2);
  FUN_1000_9b36(&local_1a);
  return;
}


// ---- SETSTAGE_TIME_INC_R @ 1000:7138

void __stdcall16far SETSTAGE_TIME_INC_R(undefined2 param_1,undefined2 param_2)

{
  undefined2 *puVar1;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined1 local_26 [4];
  undefined1 local_22 [4];
  undefined1 local_1e [4];
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
  
  puVar1 = (undefined2 *)M007_GETVALUE(unaff_CS,local_1e);
  local_1a = *puVar1;
  local_18 = puVar1[1];
  puVar1 = (undefined2 *)M007_GETVALUE(0x1018,local_22);
  local_16 = *puVar1;
  local_14 = puVar1[1];
  local_12 = DAT_1010_0ab4;
  local_10 = DAT_1010_0ab6;
  if (DAT_1010_0175 == '\x01') {
    puVar1 = (undefined2 *)M007_GETVALUE(0x1018,local_26);
    local_12 = *puVar1;
    local_10 = puVar1[1];
  }
  local_e = DAT_1010_0ab4;
  local_c = DAT_1010_0ab6;
  if (DAT_1010_0174 == '\x01') {
    puVar1 = (undefined2 *)M007_GETVALUE(0x1018,local_26);
    local_e = *puVar1;
    local_c = puVar1[1];
  }
  local_a = param_1;
  local_8 = param_2;
  local_6 = DAT_1010_0ab4;
  local_4 = DAT_1010_0ab6;
  if (DAT_1010_0176 == '\x01') {
    puVar1 = (undefined2 *)M007_GETVALUE(0x1018,local_26);
    local_6 = *puVar1;
    local_4 = puVar1[1];
  }
  M007_PUTVALUE(0x1018,param_1,param_2);
  FUN_1000_9b36(&local_1a);
  return;
}


// ---- SWITCHSTAGE_MOTOR @ 1000:7224

void __stdcall16far SWITCHSTAGE_MOTOR(int param_1)

{
  uint uVar1;
  undefined2 unaff_CS;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  
  uVar5 = 0x1010;
  uVar4 = 0x6f;
  M007_PUTSTATE(unaff_CS,param_1);
  if (param_1 == 1) {
    uVar2 = 0;
  }
  else {
    uVar2 = 2;
  }
  uVar3 = 0xe2;
  uVar1 = M007_PUTSTATE(0x1018,uVar2);
  if (param_1 == 1) {
    FUN_1000_bbb2();
    FUN_1000_9bda();
  }
  else {
    DAT_1010_0175 = 0;
    FUN_1000_9036(uVar1 & 0xff00,uVar3,uVar4,uVar5);
  }
  return;
}


// ---- SWITCHSTAGE_MOTORS @ 1000:7272

void __stdcall16far SWITCHSTAGE_MOTORS(undefined2 param_1)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  switch(param_1) {
  default:
    M007_PUTSTATE(0x1000,1);
    M007_PUTSTATE(0x1018,1);
    uVar3 = 0;
    break;
  case 1:
    M007_PUTSTATE(0x1000,1);
    M007_PUTSTATE(0x1018,1);
    uVar3 = 1;
    break;
  case 2:
    M007_PUTSTATE(0x1000,1);
    M007_PUTSTATE(0x1018,1);
    M007_PUTSTATE(0x1018,1);
    uVar3 = 1;
    goto LAB_1000_7348;
  case 3:
    M007_PUTSTATE(0x1000,1);
    M007_PUTSTATE(0x1018,1);
    M007_PUTSTATE(0x1018,1);
    uVar4 = 0x150;
    M007_PUTSTATE(0x1018,1);
    uVar2 = 0x151;
    M007_PUTSTATE(0x1018,1);
    uVar3 = 1;
    goto LAB_1000_72b8;
  case 4:
    M007_PUTSTATE(0x1000,1);
    M007_PUTSTATE(0x1018,1);
    M007_PUTSTATE(0x1018,1);
    uVar3 = 0;
LAB_1000_7348:
    uVar4 = 0x150;
    M007_PUTSTATE(0x1018,uVar3);
    uVar3 = 1;
    goto LAB_1000_72ae;
  case 5:
    M007_PUTSTATE(0x1000,1);
    M007_PUTSTATE(0x1018,1);
    M007_PUTSTATE(0x1018,1);
    uVar3 = 1;
    goto LAB_1000_72a4;
  }
  M007_PUTSTATE(0x1018,uVar3);
  uVar3 = 0;
LAB_1000_72a4:
  uVar4 = 0x150;
  M007_PUTSTATE(0x1018,uVar3);
  uVar3 = 0;
LAB_1000_72ae:
  uVar2 = 0x151;
  M007_PUTSTATE(0x1018,uVar3);
  uVar3 = 0;
LAB_1000_72b8:
  uVar1 = 0x152;
  M007_PUTSTATE(0x1018,uVar3);
  FUN_1000_bbb2(uVar1,uVar2,uVar4);
  uVar3 = M007_GETSTATE(0x1018,0x14d,0x153);
  M007_PUTSTATE(0x1018,uVar3);
  uVar3 = M007_GETSTATE(0x1018,0x14e,0x154);
  M007_PUTSTATE(0x1018,uVar3);
  uVar3 = M007_GETSTATE(0x1018,0x14f,0x155);
  M007_PUTSTATE(0x1018,uVar3);
  uVar3 = M007_GETSTATE(0x1018,0x150,0x156);
  M007_PUTSTATE(0x1018,uVar3);
  uVar3 = M007_GETSTATE(0x1018,0x151,0x157);
  M007_PUTSTATE(0x1018,uVar3);
  uVar3 = M007_GETSTATE(0x1018,0x152,0x158);
  M007_PUTSTATE(0x1018,uVar3);
  return;
}


// ---- FUN_1000_741a @ 1000:741a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16near FUN_1000_741a(void)

{
  undefined2 *puVar1;
  int iVar2;
  undefined2 unaff_SS;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined1 local_8a [4];
  undefined1 local_86 [50];
  undefined1 local_54 [80];
  undefined2 local_4;
  
  if (0 < DAT_1010_0180) {
    DAT_1010_0180 = DAT_1010_0180 + -1;
  }
  uVar5 = 0x12e;
  puVar1 = (undefined2 *)STAGETEMPERATURE(local_8a);
  uVar3 = 0x7444;
  M007_PUTVALUE(0x1008,*puVar1,puVar1[1]);
  uVar4 = 0x744b;
  FUN_1000_9c34(0x10,0x1010,uVar5);
  if (((((_DAT_1010_003a & 0x23) != 0) || ((_DAT_1010_003a & 0xc00) != 0)) ||
      ((_DAT_1010_003a & 0xc) != 0)) || ((_DAT_1010_003a & 0x8000) != 0)) {
    uVar5 = 0x44;
    uVar4 = 0x746f;
    FUN_1000_a9f0(0x44,0x1010);
    if ((_DAT_1010_003a & 0x800) != 0) {
      FUN_1000_cf00(0xd4,0x1010);
      _WSPRINTF(0x1018,local_54);
      uVar5 = 0;
      UIF_MESSAGE(0x1018,local_54,unaff_SS);
      uVar4 = DAT_1010_0042;
      _WSPRINTF(0x1018,local_54);
      uVar3 = 0;
      UIF_MESSAGE(0x1018,local_54,unaff_SS);
    }
    if ((_DAT_1010_003a & 0x400) != 0) {
      FUN_1000_cc4c(0x44,0x1010,uVar3,uVar4,uVar5);
      FUN_1000_d296();
    }
    if ((_DAT_1010_003a & 2) != 0) {
      FUN_1000_c136(0x44,0x1010);
    }
    if ((_DAT_1010_003a & 1) != 0) {
      FUN_1000_c484(0x5c,0x1010);
    }
    if (((_DAT_1010_003a & 2) != 0) || ((_DAT_1010_003a & 1) != 0)) {
      FUN_1000_c7d2();
      if (DAT_1010_017c != 0) {
        FUN_1000_357c();
      }
      FUN_1000_d296();
    }
    if ((_DAT_1010_003a & 4) != 0) {
      M007_PUTSTATE(0x1018,(int)DAT_1010_00db);
    }
    if ((_DAT_1010_003a & 8) != 0) {
      M007_PUTSTATE(0x1018,(int)DAT_1010_00da);
    }
    if ((_DAT_1010_003a & 0x20) != 0) {
      if (DAT_1010_0171 == '\x01') {
        M007_PUTVALUE(0x1018,DAT_1010_008c,DAT_1010_008e);
        M007_PUTVALUE(0x1018,(float)DAT_1010_00c8);
        M007_PUTVALUE(0x1018,(float)DAT_1010_00a4);
        M007_PUTVALUE(0x1018,(float)DAT_1010_00bc);
        M007_PUTVALUE(0x1018,(float)DAT_1010_00b0);
        M007_PUTVALUE(0x1018,DAT_1010_0074,DAT_1010_0076);
      }
      if (DAT_1010_0172 == '\x01') {
        M007_PUTVALUE(0x1018,DAT_1010_0090,DAT_1010_0092);
        M007_PUTVALUE(0x1018,(float)DAT_1010_00ca);
        M007_PUTVALUE(0x1018,(float)DAT_1010_00a6);
        M007_PUTVALUE(0x1018,(float)DAT_1010_00be);
        M007_PUTVALUE(0x1018,(float)DAT_1010_00b2);
        M007_PUTVALUE(0x1018,DAT_1010_0078,DAT_1010_007a);
      }
      if (DAT_1010_0175 == '\x01') {
        M007_PUTVALUE(0x1018,DAT_1010_0094,DAT_1010_0096);
        M007_PUTVALUE(0x1018,(float)DAT_1010_00cc);
        M007_PUTVALUE(0x1018,(float)DAT_1010_00a8);
        M007_PUTVALUE(0x1018,(float)DAT_1010_00c0);
        M007_PUTVALUE(0x1018,(float)DAT_1010_00b4);
        M007_PUTVALUE(0x1018,DAT_1010_007c,DAT_1010_007e);
      }
      if (DAT_1010_0174 == '\x01') {
        M007_PUTVALUE(0x1018,DAT_1010_0098,DAT_1010_009a);
        M007_PUTVALUE(0x1018,(float)DAT_1010_00ce);
        M007_PUTVALUE(0x1018,(float)DAT_1010_00aa);
        M007_PUTVALUE(0x1018,(float)DAT_1010_00c2);
        M007_PUTVALUE(0x1018,(float)DAT_1010_00b6);
        M007_PUTVALUE(0x1018,DAT_1010_0080,DAT_1010_0082);
      }
      if (DAT_1010_0173 == '\x01') {
        M007_PUTVALUE(0x1018,DAT_1010_009c,DAT_1010_009e);
        M007_PUTVALUE(0x1018,(float)DAT_1010_00d0);
        M007_PUTVALUE(0x1018,(float)DAT_1010_00ac);
        M007_PUTVALUE(0x1018,(float)DAT_1010_00c4);
        M007_PUTVALUE(0x1018,(float)DAT_1010_00b8);
        M007_PUTVALUE(0x1018,DAT_1010_0084,DAT_1010_0086);
      }
      if (DAT_1010_0176 == '\x01') {
        M007_PUTVALUE(0x1018,DAT_1010_00a0,DAT_1010_00a2);
        M007_PUTVALUE(0x1018,(float)DAT_1010_00d2);
        M007_PUTVALUE(0x1018,(float)DAT_1010_00ae);
        M007_PUTVALUE(0x1018,(float)DAT_1010_00c6);
        M007_PUTVALUE(0x1018,(float)DAT_1010_00ba);
        M007_PUTVALUE(0x1018,DAT_1010_0088,DAT_1010_008a);
      }
    }
  }
  if (DAT_1010_003e == '\x01') {
    uVar5 = 0x7896;
    iVar2 = M007_GETSTATE(0x1018,0x2d,uVar3,uVar4);
    if (iVar2 == 0) {
      uVar4 = 0x2d;
      M007_PUTSTATE(0x1018,1);
      iVar2 = M007_GETSTATE(0x1018,0x148,uVar4);
      if (iVar2 == 0) {
        uVar4 = 0x1f5;
        UIF_LOG(0x1018,0x2000,0,0);
        uVar3 = HLEOUIFLANGUAGE(0x1018,uVar4);
        local_4 = uVar3;
        LOADSTRING(0x1018,0x50,local_54,unaff_SS,0x1f5);
        uVar4 = local_4;
        LOADSTRING(0x1018,0x32,local_86,unaff_SS,0x3b6);
        GETFOCUS(0x1018,uVar4,uVar3);
        MESSAGEBOX(0x1018,0x1010,local_86,unaff_SS,local_54,unaff_SS);
      }
      uVar5 = 0x1018;
      iVar2 = M007_GETSTATE(0x1018,0x53);
      if (iVar2 != 0) {
        uVar5 = 0x53;
        iVar2 = M007_GETSTATE(0x1018,0x53);
        if (iVar2 != 1) {
          FUN_1000_ab46();
        }
      }
    }
  }
  else {
    uVar4 = 0x2d;
    M007_PUTSTATE(0x1018,0);
    uVar5 = 0x1018;
    iVar2 = M007_GETSTATE(0x1018,0x9c,uVar4);
    if (iVar2 == 1) {
      uVar5 = 0x9c;
      M007_PUTSTATE(0x1018,0);
    }
  }
  if ((_DAT_1010_003a & 0x100) != 0) {
    FUN_1000_b6fc(0x28,0x1010,uVar5);
  }
  if ((_DAT_1010_003a & 0x40) != 0) {
    FUN_1000_b3ea(0x10,0x1010);
  }
  if ((_DAT_1010_003a & 0x80) != 0) {
    FUN_1000_b66a(0x34,0x1010);
  }
  if ((_DAT_1010_003a & 0x200) != 0) {
    FUN_1000_b790(0x2e,0x1010);
  }
  if (DAT_1010_1298 == '\x01') {
    if ((_DAT_1010_003a & 0x1000) != 0) {
      M007_PUTSTATE(0x1018,1);
    }
    if ((_DAT_1010_003a & 0x10) != 0) {
      M007_PUTXY(0x1018,(float)_DAT_1010_00e0,(float)_DAT_1010_00dc);
      M007_PUTSTATE(0x1018,2);
      DAT_1010_1298 = '\0';
    }
  }
  if ((DAT_1010_003c & 1) != 0) {
    UIF_LOG(0x1018,0x1000,0,0);
    M007_PUTSTATE(0x1018,0);
  }
  if ((DAT_1010_003c & 2) != 0) {
    uVar5 = 0x247;
    UIF_LOG(0x1018,0x2000,0,0);
    uVar3 = 0x131;
    M007_PUTSTATE(0x1018,1);
    uVar4 = 0x134;
    M007_PUTSTATE(0x1018,1);
    EOSUSPENDOPERATION(0x1018,uVar4,uVar3,uVar5);
  }
  if ((DAT_1010_003c & 4) != 0) {
    UIF_LOG(0x1018,0x2000,0,0);
  }
  if ((((DAT_1010_003f & 0x80) != 0) && (iVar2 = M007_GETSTATE(0x1018,0), iVar2 != 0)) &&
     (DAT_1010_0180 == 0)) {
    UIF_LOG(0x1018,0x5000,DAT_1010_003f & 0x7f,0);
  }
  FUN_1000_cdb4();
  if ((_DAT_1010_003a & 0x1000) != 0) {
    M007_PUTSTATE(0x1018,1);
  }
  if ((_DAT_1010_003a & 0x10) != 0) {
    uVar4 = 0x2f;
    M007_PUTSTATE(0x1018,0);
    FUN_1000_df64(uVar4);
  }
  if (((((_DAT_1010_003a & 0x4000) == 0) || ((_DAT_1010_003a & 0x8000) != 0)) &&
      (iVar2 = M007_GETSTATE(0x1018,0x34), iVar2 != 1)) &&
     (((iVar2 = M007_GETSTATE(0x1018,0x35), iVar2 != 1 &&
       (iVar2 = M007_GETSTATE(0x1018,0x36), iVar2 != 1)) &&
      (((iVar2 = M007_GETSTATE(0x1018,0xdd), iVar2 != 1 &&
        ((iVar2 = M007_GETSTATE(0x1018,0xdc), iVar2 != 1 &&
         (iVar2 = M007_GETSTATE(0x1018,0x122), iVar2 != 1)))) && ((DAT_1010_003c & 8) == 0)))))) {
    if ((_DAT_1010_003a & 0x1000) == 0) {
      uVar4 = 0x2f;
      M007_PUTSTATE(0x1018,0);
      FUN_1000_df64(uVar4);
    }
  }
  else {
    M007_PUTSTATE(0x1018,1);
  }
  if ((_DAT_1010_003a & 0x2000) != 0) {
    SWITCHSTAGE_MOTOR(0);
  }
  return;
}


// ---- RESTORE_STAGE_CONFIG @ 1000:7b10

void __stdcall16far RESTORE_STAGE_CONFIG(char *param_1)

{
  int iVar1;
  double *pdVar2;
  char *pcVar3;
  undefined2 unaff_CS;
  undefined4 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  undefined2 uVar12;
  undefined2 uVar13;
  undefined2 uVar14;
  
  uVar14 = 0x1010;
  uVar13 = 0x1010;
  uVar12 = 0x8b2;
  uVar11 = 0x1010;
  uVar10 = 0x93c;
  uVar9 = 0x1010;
  uVar8 = 0x93a;
  uVar7 = 0x1010;
  uVar6 = 0xfd6;
  uVar5 = 0x100;
  uVar4 = GETLEOINIFILEPATH();
  GETPRIVATEPROFILESTRING(0x1018,uVar4,unaff_CS,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11);
  uVar5 = thunk_FUN_1000_0380(0xfd6,uVar12,uVar13,uVar14);
  iVar1 = M007_GETSTATE(0x1018,0x41);
  if (iVar1 == 1) {
    uVar5 = 1;
  }
  SWITCHPROTECTED_Z(uVar5);
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  pcVar3 = (char *)param_1;
  M007_PUTSTATE(0x1000,(int)pcVar3[1]);
  if (pcVar3[1] == '\x01') {
    uVar6 = 0;
  }
  else {
    uVar6 = 2;
  }
  M007_PUTSTATE(0x1018,uVar6);
  M007_PUTSTATE(0x1018,(int)pcVar3[2]);
  SWITCHSTAGE_TYPE((int)*param_1);
  M007_PUTSTATE(0x1000,(int)pcVar3[3]);
  SWITCHX_BACKLASH((int)pcVar3[4]);
  SWITCHY_BACKLASH((int)pcVar3[5]);
  SWITCHZ_BACKLASH((int)pcVar3[6]);
  SWITCHT_BACKLASH((int)pcVar3[7]);
  SWITCHR_BACKLASH((int)pcVar3[8]);
  SWITCHM_BACKLASH((int)pcVar3[9]);
  SWITCHZ_ON_VENT((int)pcVar3[0xb]);
  SWITCHROTATE_LIMIT((int)pcVar3[10]);
  uVar5 = 0x1010;
  GETPRIVATEPROFILESTRING(0x1000,0x948,0x1010,0x100,0xfd6,0x1010,0x93a,0x1010,0x954,0x1010,0x95c);
  pdVar2 = (double *)FUN_1000_e582(0xfd6,0x1010,uVar5);
  M007_PUTVALUE(0x1018,(float)*pdVar2);
  return;
}


// ---- DOCOMMANDSTAGE_HERE_START @ 1000:7c68

void __cdecl16far DOCOMMANDSTAGE_HERE_START(void)

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
  
  puVar1 = (undefined2 *)M007_GETVALUE(unaff_CS,local_6);
  M007_PUTVALUE(0x1018,*puVar1,puVar1[1]);
  puVar1 = (undefined2 *)M007_GETVALUE(0x1018,local_a);
  M007_PUTVALUE(0x1018,*puVar1,puVar1[1]);
  puVar1 = (undefined2 *)M007_GETVALUE(0x1018,local_e);
  M007_PUTVALUE(0x1018,*puVar1,puVar1[1]);
  puVar1 = (undefined2 *)M007_GETVALUE(0x1018,local_12);
  M007_PUTVALUE(0x1018,*puVar1,puVar1[1]);
  uVar5 = 0x120;
  uVar4 = 0x112;
  puVar1 = (undefined2 *)M007_GETVALUE(0x1018,local_16);
  M007_PUTVALUE(0x1018,*puVar1,puVar1[1]);
  uVar3 = 0x162;
  uVar2 = 0x15e;
  puVar1 = (undefined2 *)M007_GETVALUE(0x1018,local_1a);
  M007_PUTVALUE(0x1018,*puVar1,puVar1[1]);
  FUN_1000_d008(uVar2,uVar3,uVar4,uVar5);
  return;
}


// ---- DOCOMMANDSTAGE_HERE_END @ 1000:7d26

void __cdecl16far DOCOMMANDSTAGE_HERE_END(void)

{
  undefined2 *puVar1;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined1 local_a [4];
  undefined1 local_6 [4];
  
  uVar6 = 0x1010;
  uVar5 = 0xfd;
  uVar4 = 0x84;
  puVar1 = (undefined2 *)M007_GETVALUE(unaff_CS,local_6);
  M007_PUTVALUE(0x1018,*puVar1,puVar1[1]);
  uVar3 = 0xfe;
  uVar2 = 0x85;
  puVar1 = (undefined2 *)M007_GETVALUE(0x1018,local_a);
  M007_PUTVALUE(0x1018,*puVar1,puVar1[1]);
  FUN_1000_d008(uVar2,uVar3,uVar4,uVar5,uVar6);
  return;
}


// ---- SETFIELD_OVERLAP @ 1000:7d70

void __stdcall16far SETFIELD_OVERLAP(undefined2 param_1,undefined2 param_2)

{
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  
  uVar2 = 0x1010;
  uVar1 = 0xf9;
  M007_PUTVALUE(unaff_CS,param_1,param_2);
  FUN_1000_d008(uVar1,uVar2);
  return;
}


// ---- DOCOMMANDSTAGE_CALC_SCAN @ 1000:7d90

void __cdecl16far DOCOMMANDSTAGE_CALC_SCAN(void)

{
  FUN_1000_d008(0x1010);
  return;
}


// ---- SETSTAGE_START_X @ 1000:7da0

void __stdcall16far SETSTAGE_START_X(undefined2 param_1,undefined2 param_2)

{
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  
  uVar2 = 0x1010;
  uVar1 = 0xfa;
  M007_PUTVALUE(unaff_CS,param_1,param_2);
  FUN_1000_d008(uVar1,uVar2);
  return;
}


// ---- SETSTAGE_START_Y @ 1000:7dc0

void __stdcall16far SETSTAGE_START_Y(undefined2 param_1,undefined2 param_2)

{
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  
  uVar2 = 0x1010;
  uVar1 = 0xfb;
  M007_PUTVALUE(unaff_CS,param_1,param_2);
  FUN_1000_d008(uVar1,uVar2);
  return;
}


// ---- SETSTAGE_START_Z @ 1000:7de0

void __stdcall16far SETSTAGE_START_Z(undefined2 param_1,undefined2 param_2)

{
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  
  uVar2 = 0x1010;
  uVar1 = 0xfc;
  M007_PUTVALUE(unaff_CS,param_1,param_2);
  FUN_1000_d008(uVar1,uVar2);
  return;
}


// ---- SETSTAGE_END_X @ 1000:7e00

void __stdcall16far SETSTAGE_END_X(undefined2 param_1,undefined2 param_2)

{
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  
  uVar2 = 0x1010;
  uVar1 = 0xfd;
  M007_PUTVALUE(unaff_CS,param_1,param_2);
  FUN_1000_d008(uVar1,uVar2);
  return;
}


// ---- SETSTAGE_END_Y @ 1000:7e20

void __stdcall16far SETSTAGE_END_Y(undefined2 param_1,undefined2 param_2)

{
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  
  uVar2 = 0x1010;
  uVar1 = 0xfe;
  M007_PUTVALUE(unaff_CS,param_1,param_2);
  FUN_1000_d008(uVar1,uVar2);
  return;
}


// ---- SETSTAGE_X_DISTANCE @ 1000:7e40

void __stdcall16far SETSTAGE_X_DISTANCE(undefined2 param_1,undefined2 param_2)

{
  DAT_1010_0178._0_2_ = param_1;
  DAT_1010_0178._2_2_ = param_2;
  FUN_1000_d374(0x1010);
  return;
}


// ---- DOCOMMANDSTAGE_PREVIOUS_FIELD @ 1000:7e5e

void __cdecl16far DOCOMMANDSTAGE_PREVIOUS_FIELD(void)

{
  char cVar1;
  undefined2 unaff_CS;
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
  
  local_22 = DAT_1010_0ab4;
  local_20 = DAT_1010_0ab6;
  local_1e = DAT_1010_0ab4;
  local_1c = DAT_1010_0ab6;
  local_1a = DAT_1010_0ab4;
  local_18 = DAT_1010_0ab6;
  local_16 = DAT_1010_0ab4;
  local_14 = DAT_1010_0ab6;
  local_12 = DAT_1010_0ab4;
  local_10 = DAT_1010_0ab6;
  local_e = DAT_1010_0ab4;
  local_c = DAT_1010_0ab6;
  cVar1 = FUN_1000_d4a8(&local_a);
  if (cVar1 != '\x01') {
    FUN_1000_abca(local_a,local_8,local_6,local_4,&local_22);
    cVar1 = FUN_1000_ade8(&local_22);
    if (cVar1 == '\x01') {
      FUN_1000_9652(&local_22);
      DAT_1010_1298 = 1;
      DAT_1010_00dc = local_a;
      DAT_1010_00de = local_8;
      DAT_1010_00e0 = local_6;
      DAT_1010_00e2 = local_4;
      return;
    }
    M007_PUTSTATE(unaff_CS,1);
  }
  return;
}


// ---- SWITCHX_BACKLASH @ 1000:7f02

void __stdcall16far SWITCHX_BACKLASH(undefined2 param_1)

{
  undefined1 extraout_AH;
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  
  uVar2 = 0x1010;
  uVar1 = 0xed;
  M007_PUTSTATE(unaff_CS,param_1);
  FUN_1000_aaa0(CONCAT11(extraout_AH,(undefined1)param_1),uVar1,uVar2);
  return;
}


// ---- SWITCHY_BACKLASH @ 1000:7f24

void __stdcall16far SWITCHY_BACKLASH(undefined2 param_1)

{
  undefined1 extraout_AH;
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  
  uVar2 = 0x1010;
  uVar1 = 0xee;
  M007_PUTSTATE(unaff_CS,param_1);
  FUN_1000_aaba(CONCAT11(extraout_AH,(undefined1)param_1),uVar1,uVar2);
  return;
}


// ---- SWITCHZ_BACKLASH @ 1000:7f46

void __stdcall16far SWITCHZ_BACKLASH(undefined2 param_1)

{
  undefined1 extraout_AH;
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  
  uVar2 = 0x1010;
  uVar1 = 0xef;
  M007_PUTSTATE(unaff_CS,param_1);
  FUN_1000_aad4(CONCAT11(extraout_AH,(undefined1)param_1),uVar1,uVar2);
  return;
}


// ---- SWITCHT_BACKLASH @ 1000:7f68

void __stdcall16far SWITCHT_BACKLASH(undefined2 param_1)

{
  undefined1 extraout_AH;
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  
  uVar2 = 0x1010;
  uVar1 = 0xf0;
  M007_PUTSTATE(unaff_CS,param_1);
  FUN_1000_aaee(CONCAT11(extraout_AH,(undefined1)param_1),uVar1,uVar2);
  return;
}


// ---- SWITCHR_BACKLASH @ 1000:7f8a

void __stdcall16far SWITCHR_BACKLASH(undefined2 param_1)

{
  undefined1 extraout_AH;
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  
  uVar2 = 0x1010;
  uVar1 = 0xf1;
  M007_PUTSTATE(unaff_CS,param_1);
  FUN_1000_ab08(CONCAT11(extraout_AH,(undefined1)param_1),uVar1,uVar2);
  return;
}


// ---- SWITCHSTAGE_MOTORS_OFF @ 1000:7fac

void __stdcall16far SWITCHSTAGE_MOTORS_OFF(undefined2 param_1)

{
  int iVar1;
  undefined1 extraout_AH;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  uVar4 = 0x1010;
  uVar3 = 0x53;
  iVar1 = M007_GETSTATE();
  if (iVar1 != 2) {
    uVar2 = 0x104;
    M007_PUTSTATE(0x1018,param_1);
    FUN_1000_ab2c(CONCAT11(extraout_AH,(undefined1)param_1),uVar2,uVar3,uVar4);
  }
  return;
}


// ---- SETSTAGETILTANGLE @ 1000:7fda

void __stdcall16far SETSTAGETILTANGLE(undefined2 param_1,undefined2 param_2)

{
  int iVar1;
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
  
  if ((DAT_1010_017e != 0) && (DAT_1010_1112 != 0)) {
    iVar1 = M007_GETSTATE();
    if (iVar1 == 0) {
      param_1 = DAT_1010_0ab4;
      param_2 = DAT_1010_0ab6;
    }
    local_1a = DAT_1010_0ab4;
    local_18 = DAT_1010_0ab6;
    local_16 = DAT_1010_0ab4;
    local_14 = DAT_1010_0ab6;
    local_12 = DAT_1010_0ab4;
    local_10 = DAT_1010_0ab6;
    local_e = DAT_1010_0ab4;
    local_c = DAT_1010_0ab6;
    local_a = DAT_1010_0ab4;
    local_8 = DAT_1010_0ab6;
    local_6 = DAT_1010_0ab4;
    local_4 = DAT_1010_0ab6;
    FUN_1000_ab58(param_1,param_2,&local_1a);
  }
  return;
}


// ---- SETSTAGE_GOTO_M @ 1000:804c

void __stdcall16far SETSTAGE_GOTO_M(undefined4 param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined2 uVar3;
  undefined4 local_26;
  undefined2 local_22 [2];
  undefined1 local_1e [4];
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
  undefined4 local_6;
  
  puVar1 = (undefined2 *)M007_GETVALUE(unaff_CS,local_1e);
  local_1a = *puVar1;
  local_18 = puVar1[1];
  uVar3 = 0x85;
  puVar1 = local_22;
  puVar2 = (undefined2 *)M007_GETVALUE(0x1018,puVar1);
  local_16 = *puVar2;
  local_14 = puVar2[1];
  local_12 = DAT_1010_0ab4;
  local_10 = DAT_1010_0ab6;
  if (DAT_1010_0175 == '\x01') {
    puVar1 = (undefined2 *)&DAT_1010_0086;
    puVar2 = (undefined2 *)M007_GETVALUE();
    local_12 = *puVar2;
    local_10 = puVar2[1];
  }
  local_e = DAT_1010_0ab4;
  local_c = DAT_1010_0ab6;
  if (DAT_1010_0174 == '\x01') {
    puVar2 = (undefined2 *)M007_GETVALUE(0x1018,&local_26);
    local_e = *puVar2;
    local_c = puVar2[1];
  }
  local_a = DAT_1010_0ab4;
  local_8 = DAT_1010_0ab6;
  if (DAT_1010_0173 == '\x01') {
    puVar2 = (undefined2 *)M007_GETVALUE(0x1018,&local_26);
    local_a = *puVar2;
    local_8 = puVar2[1];
  }
  local_26 = param_1;
  local_6 = param_1;
  FUN_1000_8ad0(puVar1,uVar3);
  M007_PUTVALUE(0x1018,local_26);
  FUN_1000_9652(&local_1a);
  return;
}


// ---- SETSTAGE_LOW_M @ 1000:8146

void __stdcall16far SETSTAGE_LOW_M(undefined2 param_1,undefined2 param_2)

{
  undefined2 *puVar1;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined1 local_26 [4];
  undefined1 local_22 [4];
  undefined1 local_1e [4];
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
  
  puVar1 = (undefined2 *)M007_GETVALUE(unaff_CS,local_1e);
  local_1a = *puVar1;
  local_18 = puVar1[1];
  puVar1 = (undefined2 *)M007_GETVALUE(0x1018,local_22);
  local_16 = *puVar1;
  local_14 = puVar1[1];
  local_12 = DAT_1010_0ab4;
  local_10 = DAT_1010_0ab6;
  if (DAT_1010_0175 == '\x01') {
    puVar1 = (undefined2 *)M007_GETVALUE(0x1018,local_26);
    local_12 = *puVar1;
    local_10 = puVar1[1];
  }
  local_e = DAT_1010_0ab4;
  local_c = DAT_1010_0ab6;
  if (DAT_1010_0174 == '\x01') {
    puVar1 = (undefined2 *)M007_GETVALUE(0x1018,local_26);
    local_e = *puVar1;
    local_c = puVar1[1];
  }
  local_a = DAT_1010_0ab4;
  local_8 = DAT_1010_0ab6;
  if (DAT_1010_0173 == '\x01') {
    local_a = DAT_1010_0ab8;
    local_8 = DAT_1010_0aba;
  }
  local_6 = param_1;
  local_4 = param_2;
  FUN_1000_978e(&local_1a);
  FUN_1000_c484(&local_1a);
  FUN_1000_c7d2();
  FUN_1000_d296();
  return;
}


// ---- SETSTAGE_HIGH_M @ 1000:8226

void __stdcall16far SETSTAGE_HIGH_M(undefined2 param_1,undefined2 param_2)

{
  undefined2 *puVar1;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined1 local_26 [4];
  undefined1 local_22 [4];
  undefined1 local_1e [4];
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
  
  puVar1 = (undefined2 *)M007_GETVALUE(unaff_CS,local_1e);
  local_1a = *puVar1;
  local_18 = puVar1[1];
  puVar1 = (undefined2 *)M007_GETVALUE(0x1018,local_22);
  local_16 = *puVar1;
  local_14 = puVar1[1];
  local_12 = DAT_1010_0ab4;
  local_10 = DAT_1010_0ab6;
  if (DAT_1010_0175 == '\x01') {
    puVar1 = (undefined2 *)M007_GETVALUE(0x1018,local_26);
    local_12 = *puVar1;
    local_10 = puVar1[1];
  }
  local_e = DAT_1010_0ab4;
  local_c = DAT_1010_0ab6;
  if (DAT_1010_0174 == '\x01') {
    puVar1 = (undefined2 *)M007_GETVALUE(0x1018,local_26);
    local_e = *puVar1;
    local_c = puVar1[1];
  }
  local_a = DAT_1010_0ab4;
  local_8 = DAT_1010_0ab6;
  if (DAT_1010_0173 == '\x01') {
    local_a = DAT_1010_0ab0;
    local_8 = DAT_1010_0ab2;
  }
  local_6 = param_1;
  local_4 = param_2;
  FUN_1000_986e(&local_1a);
  FUN_1000_c136(&local_1a);
  FUN_1000_c7d2();
  FUN_1000_d296();
  return;
}


// ---- SETSTAGE_VECTOR_M @ 1000:8306

void __stdcall16far SETSTAGE_VECTOR_M(undefined4 param_1)

{
  undefined2 *puVar1;
  int iVar2;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 local_32;
  undefined2 uStack_30;
  undefined1 local_2e [4];
  undefined2 local_2a;
  undefined2 local_28;
  undefined4 local_26;
  char local_22;
  char local_20;
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
  undefined4 local_6;
  
  uVar4 = 0x1010;
  uVar3 = 0x80;
  puVar1 = (undefined2 *)M007_GETVALUE(unaff_CS,local_2e);
  local_1e = *puVar1;
  local_1c = puVar1[1];
  local_20 = M007_GETSTATE(0x1018,0x2a,uVar3,uVar4);
  local_22 = M007_GETSTATE(0x1018,0xe);
  if ((local_22 != '\x01') || (local_20 != '\x01')) {
    local_1e = DAT_1010_0ad8;
    local_1c = DAT_1010_0ada;
  }
  iVar2 = M007_GETSTATE(0x1018,0x110);
  if (iVar2 == 1) {
    local_26 = DAT_1010_1232 * (float)DAT_1010_0adc;
  }
  else {
    M007_GETSTATE(0x1018,0x53);
    local_26 = (float)CONCAT22(DAT_1010_0b12,DAT_1010_0b10);
  }
  uVar4 = 0x167;
  puVar1 = (undefined2 *)M007_GETVALUE(0x1018,local_2e);
  local_2a = *puVar1;
  local_28 = puVar1[1];
  uVar3 = 0x163;
  uStack_30 = (undefined2)((ulong)param_1 >> 0x10);
  local_32 = (undefined2)param_1;
  M007_PUTVALUE(0x1018,local_32,uStack_30);
  local_18 = 0;
  local_1a = 0;
  local_14 = 0;
  local_16 = 0;
  local_10 = 0;
  local_12 = 0;
  local_c = 0;
  local_e = 0;
  local_8 = 0;
  local_a = 0;
  local_6 = FUN_1000_d838(local_1e,local_1c,param_1,local_2a,local_28,(undefined2)local_26,
                          local_26._2_2_,uVar3,uVar4);
  FUN_1000_96e2(&local_1a);
  return;
}


// ---- SETBACKLASH_DISTANCE_M @ 1000:8418

void __stdcall16far SETBACKLASH_DISTANCE_M(undefined4 param_1)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  undefined2 *puVar4;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined1 local_26 [4];
  undefined1 local_22 [4];
  undefined1 local_1e [4];
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
  undefined4 local_6;
  
  puVar4 = (undefined2 *)M007_GETVALUE(unaff_CS,local_1e);
  local_1a = *puVar4;
  local_18 = puVar4[1];
  puVar4 = (undefined2 *)M007_GETVALUE(0x1018,local_22);
  local_16 = *puVar4;
  local_14 = puVar4[1];
  local_12 = DAT_1010_0ab4;
  local_10 = DAT_1010_0ab6;
  if (DAT_1010_0175 == '\x01') {
    puVar4 = (undefined2 *)M007_GETVALUE(0x1018,local_26);
    local_12 = *puVar4;
    local_10 = puVar4[1];
  }
  local_e = DAT_1010_0ab4;
  local_c = DAT_1010_0ab6;
  if (DAT_1010_0174 == '\x01') {
    puVar4 = (undefined2 *)M007_GETVALUE(0x1018,local_26);
    local_e = *puVar4;
    local_c = puVar4[1];
  }
  local_a = DAT_1010_0ab4;
  local_8 = DAT_1010_0ab6;
  if (DAT_1010_0173 == '\x01') {
    puVar4 = (undefined2 *)M007_GETVALUE(0x1018,local_26);
    local_a = *puVar4;
    local_8 = puVar4[1];
  }
  local_6 = param_1;
  uVar2 = local_6;
  local_6._2_2_ = (undefined2)((ulong)param_1 >> 0x10);
  uVar3 = local_6._2_2_;
  local_6._0_2_ = (undefined2)param_1;
  uVar1 = (undefined2)local_6;
  local_6 = uVar2;
  M007_PUTVALUE(0x1018,uVar1,uVar3);
  FUN_1000_997e(&local_1a);
  return;
}


// ---- SETBACKLASH_SPEED_M @ 1000:8502

void __stdcall16far SETBACKLASH_SPEED_M(undefined4 param_1)

{
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  undefined4 local_1a;
  undefined1 local_16 [4];
  undefined1 local_12 [4];
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_a;
  undefined2 local_8;
  undefined2 local_6;
  undefined2 local_4;
  
  uVar2 = 0x1010;
  uVar1 = 0xa5;
  M007_GETVALUE(unaff_CS,local_12);
  local_e = FUN_1000_0264(uVar1,uVar2);
  uVar2 = 0xa6;
  M007_GETVALUE(0x1018,local_16);
  uVar1 = 0x8539;
  local_c = FUN_1000_0264(uVar2);
  if (DAT_1010_0175 == '\x01') {
    uVar1 = 0xa7;
    M007_GETVALUE();
    local_a = FUN_1000_0264(uVar1);
  }
  else {
    local_a = 0;
  }
  if (DAT_1010_0174 == '\x01') {
    uVar2 = 0x124;
    M007_GETVALUE(0x1018,&local_1a);
    local_8 = FUN_1000_0264(uVar2,uVar1);
  }
  else {
    local_8 = 0;
  }
  if (DAT_1010_0173 == '\x01') {
    uVar2 = 0x1a5;
    M007_GETVALUE(0x1018,&local_1a);
    local_6 = FUN_1000_0264(uVar2,uVar1);
  }
  else {
    local_6 = 0;
  }
  local_1a = param_1;
  local_4 = FUN_1000_0264();
  M007_PUTVALUE(0x1018,local_1a);
  FUN_1000_99f6(&local_e);
  return;
}


// ---- SETSTAGE_V_START_M @ 1000:85e4

void __stdcall16far SETSTAGE_V_START_M(undefined4 param_1)

{
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  undefined4 local_1a;
  undefined1 local_16 [4];
  undefined1 local_12 [4];
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_a;
  undefined2 local_8;
  undefined2 local_6;
  undefined2 local_4;
  
  uVar2 = 0x1010;
  uVar1 = 0xa8;
  M007_GETVALUE(unaff_CS,local_12);
  local_e = FUN_1000_0264(uVar1,uVar2);
  uVar2 = 0xa9;
  M007_GETVALUE(0x1018,local_16);
  uVar1 = 0x861b;
  local_c = FUN_1000_0264(uVar2);
  if (DAT_1010_0175 == '\x01') {
    uVar1 = 0xaa;
    M007_GETVALUE();
    local_a = FUN_1000_0264(uVar1);
  }
  else {
    local_a = 0;
  }
  if (DAT_1010_0174 == '\x01') {
    uVar2 = 0x119;
    M007_GETVALUE(0x1018,&local_1a);
    local_8 = FUN_1000_0264(uVar2,uVar1);
  }
  else {
    local_8 = 0;
  }
  if (DAT_1010_0173 == '\x01') {
    uVar2 = 0x118;
    M007_GETVALUE(0x1018,&local_1a);
    local_6 = FUN_1000_0264(uVar2,uVar1);
  }
  else {
    local_6 = 0;
  }
  local_1a = param_1;
  local_4 = FUN_1000_0264();
  M007_PUTVALUE(0x1018,local_1a);
  FUN_1000_9a46(&local_e);
  return;
}


// ---- SETSTAGE_CRUISE_M @ 1000:86c6

void __stdcall16far SETSTAGE_CRUISE_M(undefined2 param_1,undefined2 param_2)

{
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  undefined1 local_1a [4];
  undefined1 local_16 [4];
  undefined1 local_12 [4];
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_a;
  undefined2 local_8;
  undefined2 local_6;
  undefined2 local_4;
  
  uVar2 = 0x1010;
  uVar1 = 0xab;
  M007_GETVALUE(unaff_CS,local_12);
  local_e = FUN_1000_0264(uVar1,uVar2);
  uVar2 = 0xac;
  M007_GETVALUE(0x1018,local_16);
  uVar1 = 0x86fd;
  local_c = FUN_1000_0264(uVar2);
  if (DAT_1010_0175 == '\x01') {
    uVar1 = 0xad;
    M007_GETVALUE(0x1018,local_1a);
    local_a = FUN_1000_0264(uVar1);
  }
  else {
    local_a = 0;
  }
  local_4 = FUN_1000_0264(uVar1);
  if (DAT_1010_0174 == '\x01') {
    uVar1 = 0x11b;
    M007_GETVALUE(0x1018,local_1a);
    local_8 = FUN_1000_0264(uVar1);
  }
  else {
    local_8 = 0;
  }
  if (DAT_1010_0173 == '\x01') {
    uVar1 = 0x11a;
    M007_GETVALUE(0x1018,local_1a);
    local_6 = FUN_1000_0264(uVar1);
  }
  else {
    local_6 = 0;
  }
  M007_PUTVALUE(0x1018,param_1,param_2);
  FUN_1000_9a96(&local_e);
  return;
}


// ---- SETSTAGE_SPEED_INC_M @ 1000:879a

void __stdcall16far SETSTAGE_SPEED_INC_M(undefined4 param_1)

{
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  undefined4 local_1a;
  undefined1 local_16 [4];
  undefined1 local_12 [4];
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_a;
  undefined2 local_8;
  undefined2 local_6;
  undefined2 local_4;
  
  uVar2 = 0x1010;
  uVar1 = 0xae;
  M007_GETVALUE(unaff_CS,local_12);
  local_e = FUN_1000_0264(uVar1,uVar2);
  uVar2 = 0xaf;
  M007_GETVALUE(0x1018,local_16);
  uVar1 = 0x87d1;
  local_c = FUN_1000_0264(uVar2);
  if (DAT_1010_0175 == '\x01') {
    uVar1 = 0xb0;
    M007_GETVALUE();
    local_a = FUN_1000_0264(uVar1);
  }
  else {
    local_a = 0;
  }
  if (DAT_1010_0174 == '\x01') {
    uVar2 = 0x11d;
    M007_GETVALUE(0x1018,&local_1a);
    local_8 = FUN_1000_0264(uVar2,uVar1);
  }
  else {
    local_8 = 0;
  }
  if (DAT_1010_0173 == '\x01') {
    uVar2 = 0x11c;
    M007_GETVALUE(0x1018,&local_1a);
    local_6 = FUN_1000_0264(uVar2,uVar1);
  }
  else {
    local_6 = 0;
  }
  local_1a = param_1;
  local_4 = FUN_1000_0264();
  M007_PUTVALUE(0x1018,local_1a);
  FUN_1000_9ae6(&local_e);
  return;
}


// ---- SETSTAGE_TIME_INC_M @ 1000:887c

void __stdcall16far SETSTAGE_TIME_INC_M(undefined4 param_1)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  undefined2 *puVar4;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined1 local_26 [4];
  undefined1 local_22 [4];
  undefined1 local_1e [4];
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
  undefined4 local_6;
  
  puVar4 = (undefined2 *)M007_GETVALUE(unaff_CS,local_1e);
  local_1a = *puVar4;
  local_18 = puVar4[1];
  puVar4 = (undefined2 *)M007_GETVALUE(0x1018,local_22);
  local_16 = *puVar4;
  local_14 = puVar4[1];
  local_12 = DAT_1010_0ab4;
  local_10 = DAT_1010_0ab6;
  if (DAT_1010_0175 == '\x01') {
    puVar4 = (undefined2 *)M007_GETVALUE(0x1018,local_26);
    local_12 = *puVar4;
    local_10 = puVar4[1];
  }
  local_e = DAT_1010_0ab4;
  local_c = DAT_1010_0ab6;
  if (DAT_1010_0174 == '\x01') {
    puVar4 = (undefined2 *)M007_GETVALUE(0x1018,local_26);
    local_e = *puVar4;
    local_c = puVar4[1];
  }
  local_a = DAT_1010_0ab4;
  local_8 = DAT_1010_0ab6;
  if (DAT_1010_0173 == '\x01') {
    puVar4 = (undefined2 *)M007_GETVALUE(0x1018,local_26);
    local_a = *puVar4;
    local_8 = puVar4[1];
  }
  local_6 = param_1;
  uVar2 = local_6;
  local_6._2_2_ = (undefined2)((ulong)param_1 >> 0x10);
  uVar3 = local_6._2_2_;
  local_6._0_2_ = (undefined2)param_1;
  uVar1 = (undefined2)local_6;
  local_6 = uVar2;
  M007_PUTVALUE(0x1018,uVar1,uVar3);
  FUN_1000_9b36(&local_1a);
  return;
}


// ---- SWITCHM_BACKLASH @ 1000:8966

void __stdcall16far SWITCHM_BACKLASH(undefined2 param_1)

{
  undefined1 extraout_AH;
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  
  uVar2 = 0x1010;
  uVar1 = 0x124;
  M007_PUTSTATE(unaff_CS,param_1);
  FUN_1000_ab22(CONCAT11(extraout_AH,(undefined1)param_1),uVar1,uVar2);
  return;
}


// ---- SWITCHROTATE_LIMIT @ 1000:8988

void __stdcall16far SWITCHROTATE_LIMIT(undefined2 param_1)

{
  undefined1 extraout_AH;
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  
  uVar2 = 0x1010;
  uVar1 = 0x127;
  M007_PUTSTATE(unaff_CS,param_1);
  FUN_1000_ab84(CONCAT11(extraout_AH,(undefined1)param_1),uVar1,uVar2);
  return;
}


// ---- SWITCHPROTECTED_Z @ 1000:89aa

void __stdcall16far SWITCHPROTECTED_Z(int param_1)

{
  undefined1 extraout_AH;
  undefined2 unaff_CS;
  undefined4 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  
  uVar8 = 0x1010;
  uVar7 = 0x135;
  M007_PUTSTATE(unaff_CS,param_1);
  if (param_1 == 1) {
    uVar3 = 0x966;
  }
  else {
    uVar3 = 0x93a;
  }
  uVar6 = 0x1010;
  uVar5 = 0x93c;
  uVar4 = 0x1010;
  uVar2 = 0x1018;
  uVar1 = GETLEOINIFILEPATH(0x1018,uVar3,0x1010,0x93c,0x1010,0x8b2,0x1010,uVar7,uVar8);
  WRITEPRIVATEPROFILESTRING(0x1018,uVar1,uVar2,uVar3,uVar4,uVar5,uVar6);
  FUN_1000_aba8(CONCAT11(extraout_AH,(undefined1)param_1));
  return;
}


// ---- SETXYZTRMSTAGE_GOTO @ 1000:89f8

void __stdcall16far
SETXYZTRMSTAGE_GOTO(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                   undefined2 param_5,undefined2 param_6,undefined2 param_7,undefined2 param_8)

{
  undefined2 unaff_CS;
  undefined2 local_1a;
  undefined2 local_18;
  undefined2 local_16;
  undefined2 local_14;
  undefined4 local_12;
  undefined4 local_e;
  undefined4 local_a;
  undefined4 local_6;
  
  local_1a = param_7;
  local_18 = param_8;
  local_16 = param_5;
  local_14 = param_6;
  local_12 = param_4;
  local_e = param_3;
  local_a = param_2;
  local_6 = param_1;
  FUN_1000_8ad0(0x1010,param_1,param_2,param_3,param_4);
  M007_PUTXY(unaff_CS,local_16,local_14,local_1a,local_18);
  M007_PUTVALUE(0x1018,(int)param_4,(int)((ulong)param_4 >> 0x10));
  M007_PUTVALUE(0x1018,(int)param_3,(int)((ulong)param_3 >> 0x10));
  M007_PUTVALUE(0x1018,(int)param_2,(int)((ulong)param_2 >> 0x10));
  M007_PUTVALUE(0x1018,(int)param_1,(int)((ulong)param_1 >> 0x10));
  FUN_1000_9652(&local_1a);
  return;
}


// ---- FUN_1000_8ad0 @ 1000:8ad0

void __cdecl16near FUN_1000_8ad0(void)

{
  undefined2 *puVar1;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined1 local_1a [4];
  undefined1 local_16 [4];
  undefined1 local_12 [4];
  undefined1 local_e [4];
  undefined1 local_a [4];
  undefined1 local_6 [4];
  
  puVar1 = (undefined2 *)M007_GETVALUE(unaff_CS,local_6);
  DAT_1010_0fbe = *puVar1;
  DAT_1010_0fc0 = puVar1[1];
  puVar1 = (undefined2 *)M007_GETVALUE(0x1018,local_a);
  DAT_1010_0fc2 = *puVar1;
  DAT_1010_0fc4 = puVar1[1];
  puVar1 = (undefined2 *)M007_GETVALUE(0x1018,local_e);
  DAT_1010_0fc6 = *puVar1;
  DAT_1010_0fc8 = puVar1[1];
  puVar1 = (undefined2 *)M007_GETVALUE(0x1018,local_12);
  DAT_1010_0fca = *puVar1;
  DAT_1010_0fcc = puVar1[1];
  puVar1 = (undefined2 *)M007_GETVALUE(0x1018,local_16);
  DAT_1010_0fce = *puVar1;
  DAT_1010_0fd0 = puVar1[1];
  puVar1 = (undefined2 *)M007_GETVALUE(0x1018,local_1a);
  DAT_1010_0fd2 = *puVar1;
  DAT_1010_0fd4 = puVar1[1];
  M007_PUTSTATE(0x1018,1);
  return;
}


// ---- DOCOMMANDUNDO_STAGE_GOTO @ 1000:8b88

void __cdecl16far DOCOMMANDUNDO_STAGE_GOTO(void)

{
  undefined2 unaff_CS;
  
  FUN_1000_9652(0xfbe,0x1010,0x1010);
  M007_PUTSTATE(unaff_CS,0);
  return;
}


// ---- SETBACKLASH_DISTANCE_R @ 1000:8ba8

void __stdcall16far SETBACKLASH_DISTANCE_R(undefined2 param_1,undefined2 param_2)

{
  undefined2 *puVar1;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined1 local_26 [4];
  undefined1 local_22 [4];
  undefined1 local_1e [4];
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
  
  puVar1 = (undefined2 *)M007_GETVALUE(unaff_CS,local_1e);
  local_1a = *puVar1;
  local_18 = puVar1[1];
  puVar1 = (undefined2 *)M007_GETVALUE(0x1018,local_22);
  local_16 = *puVar1;
  local_14 = puVar1[1];
  local_12 = DAT_1010_0ab4;
  local_10 = DAT_1010_0ab6;
  if (DAT_1010_0175 == '\x01') {
    puVar1 = (undefined2 *)M007_GETVALUE(0x1018,local_26);
    local_12 = *puVar1;
    local_10 = puVar1[1];
  }
  local_e = DAT_1010_0ab4;
  local_c = DAT_1010_0ab6;
  if (DAT_1010_0174 == '\x01') {
    puVar1 = (undefined2 *)M007_GETVALUE(0x1018,local_26);
    local_e = *puVar1;
    local_c = puVar1[1];
  }
  local_a = param_1;
  local_8 = param_2;
  local_6 = DAT_1010_0ab4;
  local_4 = DAT_1010_0ab6;
  if (DAT_1010_0176 == '\x01') {
    puVar1 = (undefined2 *)M007_GETVALUE(0x1018,local_26);
    local_6 = *puVar1;
    local_4 = puVar1[1];
  }
  M007_PUTVALUE(0x1018,param_1,param_2);
  FUN_1000_997e(&local_1a);
  return;
}


// ---- SETBACKLASH_SPEED_R @ 1000:8c94

void __stdcall16far SETBACKLASH_SPEED_R(undefined2 param_1,undefined2 param_2)

{
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  undefined1 local_1a [4];
  undefined1 local_16 [4];
  undefined1 local_12 [4];
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_a;
  undefined2 local_8;
  undefined2 local_6;
  undefined2 local_4;
  
  uVar2 = 0x1010;
  uVar1 = 0xa5;
  M007_GETVALUE(unaff_CS,local_12);
  local_e = FUN_1000_0264(uVar1,uVar2);
  uVar2 = 0xa6;
  M007_GETVALUE(0x1018,local_16);
  uVar1 = 0x8ccb;
  local_c = FUN_1000_0264(uVar2);
  if (DAT_1010_0175 == '\x01') {
    uVar1 = 0xa7;
    M007_GETVALUE(0x1018,local_1a);
    local_a = FUN_1000_0264(uVar1);
  }
  else {
    local_a = 0;
  }
  if (DAT_1010_0174 == '\x01') {
    uVar2 = 0x124;
    M007_GETVALUE(0x1018,local_1a);
    local_8 = FUN_1000_0264(uVar2,uVar1);
  }
  else {
    local_8 = 0;
  }
  local_6 = FUN_1000_0264();
  if (DAT_1010_0176 == '\x01') {
    uVar1 = 0x165;
    M007_GETVALUE(0x1018,local_1a);
    local_4 = FUN_1000_0264(uVar1);
  }
  else {
    local_4 = 0;
  }
  M007_PUTVALUE(0x1018,param_1,param_2);
  FUN_1000_99f6(&local_e);
  return;
}


// ---- DOCOMMANDFORCE_STAGE_INIT @ 1000:8d68

void __cdecl16far DOCOMMANDFORCE_STAGE_INIT(void)

{
  FUN_1000_abc2(0x1010);
  return;
}


// ---- SETSTAGEPOSITION @ 1000:8d78

void __stdcall16far
SETSTAGEPOSITION(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
                undefined2 param_5,undefined2 param_6,undefined2 param_7,undefined2 param_8,
                undefined2 param_9,undefined2 param_10,undefined2 param_11,undefined2 param_12)

{
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
  
  local_1a = param_11;
  local_18 = param_12;
  local_16 = param_9;
  local_14 = param_10;
  local_12 = param_7;
  local_10 = param_8;
  local_e = param_5;
  local_c = param_6;
  local_a = param_3;
  local_8 = param_4;
  local_6 = param_1;
  local_4 = param_2;
  FUN_1000_abc6(&local_1a);
  return;
}


// ---- SUSPENDSTAGE @ 1000:8dda

void __cdecl16far SUSPENDSTAGE(void)

{
  FUN_1000_abc4(0x1010);
  return;
}


// ---- SETCOMPU_TILT_ERROR @ 1000:8dea

void __stdcall16far SETCOMPU_TILT_ERROR(undefined2 param_1,undefined2 param_2)

{
  FUN_1000_e4d2(param_1,param_2,0x1010);
  return;
}


// ---- SWITCHJOYSTICK @ 1000:8e04

void __stdcall16far SWITCHJOYSTICK(int param_1)

{
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  
  uVar2 = 0x1010;
  uVar1 = 0xc9;
  M007_PUTSTATE(unaff_CS,param_1);
  FUN_1000_ab9e(param_1 != 1,uVar1,uVar2);
  return;
}


// ---- DEFINECUSTOMSTAGE @ 1000:8e2e

void __stdcall16far DEFINECUSTOMSTAGE(undefined2 param_1,int param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined2 unaff_SS;
  undefined2 uVar7;
  undefined2 uVar8;
  
  uVar8 = 0x1010;
  uVar7 = 0x96;
  uVar3 = M007_GETSTATE();
  SWITCHSTAGE_MOTORS(uVar3);
  uVar3 = 0x159;
  M007_PUTSTATE(0x1000,param_2 != 0);
  puVar6 = (undefined2 *)&DAT_1010_1110;
  puVar5 = &param_1;
  for (iVar4 = 0xab; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar2 = puVar6;
    puVar6 = puVar6 + 1;
    puVar1 = puVar5;
    puVar5 = puVar5 + 1;
    *puVar2 = *puVar1;
  }
  DAT_1010_017e = 1;
  FUN_1000_bbb2(uVar3,uVar7,uVar8);
  return;
}


// ---- DEFINEAXISHIGHRANGE @ 1000:8e7a

void __stdcall16far DEFINEAXISHIGHRANGE(undefined2 param_1,undefined2 param_2,int param_3)

{
  *(undefined2 *)(param_3 * 0x30 + 0x114a) = param_1;
  *(undefined2 *)(param_3 * 0x30 + 0x114c) = param_2;
  FUN_1000_bbb2(0x1010);
  return;
}


// ---- SWITCHX_ENABLED @ 1000:8e9e

void __stdcall16far SWITCHX_ENABLED(int param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  uVar4 = 0x1010;
  uVar3 = 0x153;
  iVar1 = M007_GETSTATE();
  if (iVar1 != param_1) {
    uVar2 = 0x153;
    M007_PUTSTATE(0x1018,param_1);
    FUN_1000_bbb2(uVar2,uVar3,uVar4);
  }
  return;
}


// ---- SWITCHY_ENABLED @ 1000:8ec8

void __stdcall16far SWITCHY_ENABLED(int param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  uVar4 = 0x1010;
  uVar3 = 0x154;
  iVar1 = M007_GETSTATE();
  if (iVar1 != param_1) {
    uVar2 = 0x154;
    M007_PUTSTATE(0x1018,param_1);
    FUN_1000_bbb2(uVar2,uVar3,uVar4);
  }
  return;
}


// ---- SWITCHZ_ENABLED @ 1000:8ef2

void __stdcall16far SWITCHZ_ENABLED(int param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  uVar4 = 0x1010;
  uVar3 = 0x155;
  iVar1 = M007_GETSTATE();
  if (iVar1 != param_1) {
    uVar2 = 0x155;
    M007_PUTSTATE(0x1018,param_1);
    FUN_1000_bbb2(uVar2,uVar3,uVar4);
  }
  return;
}


// ---- SWITCHT_ENABLED @ 1000:8f1c

void __stdcall16far SWITCHT_ENABLED(int param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  uVar4 = 0x1010;
  uVar3 = 0x156;
  iVar1 = M007_GETSTATE();
  if (iVar1 != param_1) {
    uVar2 = 0x156;
    M007_PUTSTATE(0x1018,param_1);
    FUN_1000_bbb2(uVar2,uVar3,uVar4);
  }
  return;
}


// ---- SWITCHR_ENABLED @ 1000:8f46

void __stdcall16far SWITCHR_ENABLED(int param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  uVar4 = 0x1010;
  uVar3 = 0x157;
  iVar1 = M007_GETSTATE();
  if (iVar1 != param_1) {
    uVar2 = 0x157;
    M007_PUTSTATE(0x1018,param_1);
    FUN_1000_bbb2(uVar2,uVar3,uVar4);
  }
  return;
}


// ---- SWITCHM_ENABLED @ 1000:8f70

void __stdcall16far SWITCHM_ENABLED(int param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  uVar4 = 0x1010;
  uVar3 = 0x158;
  iVar1 = M007_GETSTATE();
  if (iVar1 != param_1) {
    uVar2 = 0x158;
    M007_PUTSTATE(0x1018,param_1);
    FUN_1000_bbb2(uVar2,uVar3,uVar4);
  }
  return;
}


// ---- FUN_1000_8f9a @ 1000:8f9a

undefined2 __cdecl16near FUN_1000_8f9a(undefined2 param_1,undefined2 param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    uVar2 = Ordinal_700(0x1018,param_1,param_2,uVar2);
    return uVar2;
  }
  return 0;
}


// ---- FUN_1000_8fba @ 1000:8fba

undefined2 __cdecl16near FUN_1000_8fba(void)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    uVar2 = Ordinal_722(0x1018,uVar2);
    return uVar2;
  }
  return 0;
}


// ---- FUN_1000_8fce @ 1000:8fce

void __cdecl16near FUN_1000_8fce(void)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_701(0x1018,uVar2);
    return;
  }
  return;
}


// ---- FUN_1000_8fe4 @ 1000:8fe4

void __cdecl16near FUN_1000_8fe4(void)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_723(0x1018,uVar2);
    return;
  }
  return;
}


// ---- FUN_1000_8ffa @ 1000:8ffa

void __cdecl16near FUN_1000_8ffa(void)

{
  int iVar1;
  undefined2 unaff_CS;
  undefined2 uVar2;
  
  uVar2 = 0x2f;
  M007_PUTSTATE(unaff_CS,1);
  iVar1 = M007_GETSTATE(0x1018,0x83,uVar2);
  if (iVar1 == 1) {
    Ordinal_706(0x1018);
  }
  else {
    DAT_1010_0184 = 1;
  }
  M007_PUTVALUE(0x1018,DAT_1010_0b14,DAT_1010_0b16);
  M007_PUTSTATE(0x1018,8);
  return;
}


// ---- FUN_1000_9036 @ 1000:9036

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 __cdecl16near FUN_1000_9036(char param_1)

{
  int iVar1;
  undefined2 in_BX;
  undefined2 uVar2;
  
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    uVar2 = Ordinal_704(0x1018,param_1,uVar2);
    return uVar2;
  }
  switch(param_1 + -1) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
    DAT_1010_023e._0_2_ = DAT_1010_0b18;
    DAT_1010_023e._2_2_ = DAT_1010_0b1a;
    DAT_1010_0242._0_2_ = DAT_1010_0b1c;
    DAT_1010_0242._2_2_ = DAT_1010_0b1e;
    DAT_1010_0246._0_2_ = DAT_1010_0b20;
    DAT_1010_0246._2_2_ = DAT_1010_0b22;
    DAT_1010_0216 = DAT_1010_0b28;
    DAT_1010_0218 = DAT_1010_0b2a;
    DAT_1010_0282 = 0x9c4;
    DAT_1010_0284 = 0x9c4;
    DAT_1010_028a = 3000;
    DAT_1010_0286 = 3000;
    goto LAB_1000_91c7;
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
    DAT_1010_023e._0_2_ = DAT_1010_0b38;
    DAT_1010_023e._2_2_ = DAT_1010_0b3a;
    DAT_1010_0242._0_2_ = DAT_1010_0b3c;
    DAT_1010_0242._2_2_ = DAT_1010_0b3e;
    DAT_1010_0216 = DAT_1010_0b14;
    DAT_1010_0218 = DAT_1010_0b16;
    DAT_1010_029a = DAT_1010_0b40;
    DAT_1010_029c = DAT_1010_0b42;
    DAT_1010_02a2 = DAT_1010_0b44;
    DAT_1010_02a4 = DAT_1010_0b46;
    DAT_1010_0282 = 2000;
    DAT_1010_0284 = 2000;
    DAT_1010_0286 = 1000;
    DAT_1010_028a = 1000;
    DAT_1010_0296 = 100;
    DAT_1010_021a = DAT_1010_0216;
    DAT_1010_021c = DAT_1010_0218;
    DAT_1010_0246._0_2_ = (undefined2)DAT_1010_0242;
    DAT_1010_0246._2_2_ = DAT_1010_0242._2_2_;
    DAT_1010_024a._0_2_ = (undefined2)DAT_1010_0242;
    DAT_1010_024a._2_2_ = DAT_1010_0242._2_2_;
    DAT_1010_029e = DAT_1010_029a;
    DAT_1010_02a0 = DAT_1010_029c;
    DAT_1010_02aa = DAT_1010_02a2;
    DAT_1010_02ac = DAT_1010_02a4;
    goto LAB_1000_91f1;
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
    DAT_1010_023e._0_2_ = DAT_1010_0b18;
    DAT_1010_023e._2_2_ = DAT_1010_0b1a;
    DAT_1010_0242._0_2_ = DAT_1010_0b48;
    DAT_1010_0242._2_2_ = DAT_1010_0b4a;
    DAT_1010_0246._0_2_ = DAT_1010_0b20;
    DAT_1010_0246._2_2_ = DAT_1010_0b22;
    DAT_1010_0216 = DAT_1010_0b28;
    DAT_1010_0218 = DAT_1010_0b2a;
    break;
  default:
    return in_BX;
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
    DAT_1010_023e._0_2_ = DAT_1010_0b4c;
    DAT_1010_023e._2_2_ = DAT_1010_0b4e;
    DAT_1010_0242._0_2_ = DAT_1010_0b50;
    DAT_1010_0242._2_2_ = DAT_1010_0b52;
    DAT_1010_0246._0_2_ = DAT_1010_0b54;
    DAT_1010_0246._2_2_ = DAT_1010_0b56;
    DAT_1010_0216 = DAT_1010_0b58;
    DAT_1010_0218 = DAT_1010_0b5a;
  }
  DAT_1010_0286 = 2000;
  DAT_1010_028a = 1000;
  DAT_1010_0282 = 1000;
  DAT_1010_0284 = 1000;
LAB_1000_91c7:
  DAT_1010_02a0 = DAT_1010_0b36;
  DAT_1010_029e = DAT_1010_0b34;
  DAT_1010_029c = DAT_1010_0b32;
  DAT_1010_029a = DAT_1010_0b30;
  DAT_1010_0234 = DAT_1010_0b26;
  DAT_1010_0232 = DAT_1010_0b24;
  DAT_1010_0202._2_2_ = DAT_1010_0b2e;
  DAT_1010_0202._0_2_ = DAT_1010_0b2c;
  DAT_1010_01f2._2_2_ = DAT_1010_0b16;
  DAT_1010_01f2._0_2_ = DAT_1010_0b14;
  DAT_1010_0296 = 0;
  DAT_1010_021a = (undefined2)DAT_1010_0202;
  DAT_1010_021c = DAT_1010_0202._2_2_;
  DAT_1010_024a._0_2_ = DAT_1010_0232;
  DAT_1010_024a._2_2_ = DAT_1010_0234;
  DAT_1010_02a2 = DAT_1010_029e;
  DAT_1010_02a4 = DAT_1010_02a0;
  DAT_1010_02aa = (undefined2)DAT_1010_01f2;
  DAT_1010_02ac = DAT_1010_01f2._2_2_;
LAB_1000_91f1:
  DAT_1010_026c = DAT_1010_0b1e;
  DAT_1010_026a = DAT_1010_0b1c;
  DAT_1010_01f2._2_2_ = DAT_1010_0b16;
  DAT_1010_01f2._0_2_ = DAT_1010_0b14;
  DAT_1010_0294 = 100;
  DAT_1010_0292 = 100;
  DAT_1010_0290 = 100;
  DAT_1010_028e = 100;
  DAT_1010_0266 = 200;
  DAT_1010_0264 = 200;
  DAT_1010_0262 = 200;
  DAT_1010_0260 = 200;
  DAT_1010_025e = 200;
  DAT_1010_025a = 100;
  DAT_1010_0258 = 100;
  DAT_1010_0256 = 100;
  DAT_1010_0254 = 100;
  DAT_1010_0252 = 100;
  _DAT_1010_02bc = _DAT_1010_02bc | 0x563;
  DAT_1010_02ba = 0;
  DAT_1010_01f6._0_2_ = (undefined2)DAT_1010_01f2;
  DAT_1010_01f6._2_2_ = DAT_1010_01f2._2_2_;
  DAT_1010_01fa._0_2_ = (undefined2)DAT_1010_01f2;
  DAT_1010_01fa._2_2_ = DAT_1010_01f2._2_2_;
  DAT_1010_01fe._0_2_ = DAT_1010_0216;
  DAT_1010_01fe._2_2_ = DAT_1010_0218;
  DAT_1010_0202._0_2_ = DAT_1010_021a;
  DAT_1010_0202._2_2_ = DAT_1010_021c;
  DAT_1010_020a = (undefined2)DAT_1010_01f2;
  DAT_1010_020c = DAT_1010_01f2._2_2_;
  DAT_1010_020e = (undefined2)DAT_1010_01f2;
  DAT_1010_0210 = DAT_1010_01f2._2_2_;
  DAT_1010_0212 = (undefined2)DAT_1010_01f2;
  DAT_1010_0214 = DAT_1010_01f2._2_2_;
  DAT_1010_0222 = (undefined2)DAT_1010_023e;
  DAT_1010_0224 = DAT_1010_023e._2_2_;
  DAT_1010_0226 = (undefined2)DAT_1010_023e;
  DAT_1010_0228 = DAT_1010_023e._2_2_;
  DAT_1010_022a = (undefined2)DAT_1010_0242;
  DAT_1010_022c = DAT_1010_0242._2_2_;
  DAT_1010_022e = (undefined2)DAT_1010_0246;
  DAT_1010_0230 = DAT_1010_0246._2_2_;
  DAT_1010_0232 = (undefined2)DAT_1010_024a;
  DAT_1010_0234 = DAT_1010_024a._2_2_;
  DAT_1010_023a._0_2_ = (undefined2)DAT_1010_023e;
  DAT_1010_023a._2_2_ = DAT_1010_023e._2_2_;
  DAT_1010_026e = DAT_1010_026a;
  DAT_1010_0270 = DAT_1010_026c;
  DAT_1010_0272 = DAT_1010_026a;
  DAT_1010_0274 = DAT_1010_026c;
  DAT_1010_0276 = DAT_1010_026a;
  DAT_1010_0278 = DAT_1010_026c;
  DAT_1010_027a = DAT_1010_026a;
  DAT_1010_027c = DAT_1010_026c;
  DAT_1010_0288 = DAT_1010_028a;
  DAT_1010_02a6 = DAT_1010_02aa;
  DAT_1010_02a8 = DAT_1010_02ac;
  return 100;
}


// ---- FUN_1000_95e2 @ 1000:95e2

void __cdecl16near FUN_1000_95e2(undefined2 *param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_705(0x1018,(undefined2 *)param_1,param_1._2_2_,uVar2);
    return;
  }
  DAT_1010_0186 = *param_1;
  DAT_1010_0188 = ((undefined2 *)param_1)[1];
  DAT_1010_018a = ((undefined2 *)param_1)[2];
  DAT_1010_018c = ((undefined2 *)param_1)[3];
  DAT_1010_018e = ((undefined2 *)param_1)[4];
  DAT_1010_0190 = ((undefined2 *)param_1)[5];
  DAT_1010_0192 = ((undefined2 *)param_1)[6];
  DAT_1010_0194 = ((undefined2 *)param_1)[7];
  DAT_1010_0196 = ((undefined2 *)param_1)[8];
  DAT_1010_0198 = ((undefined2 *)param_1)[9];
  DAT_1010_0184 = 2;
  return;
}


// ---- FUN_1000_9652 @ 1000:9652

void __cdecl16near FUN_1000_9652(undefined2 *param_1)

{
  int iVar1;
  undefined2 unaff_CS;
  undefined2 uVar2;
  
  uVar2 = 0x2f;
  M007_PUTSTATE(unaff_CS,1);
  iVar1 = M007_GETSTATE(0x1018,0x83,uVar2);
  if (iVar1 == 1) {
    Ordinal_710(0x1018,(undefined2 *)param_1,param_1._2_2_);
    return;
  }
  DAT_1010_01ce = *param_1;
  DAT_1010_01d0 = ((undefined2 *)param_1)[1];
  DAT_1010_01d2 = ((undefined2 *)param_1)[2];
  DAT_1010_01d4 = ((undefined2 *)param_1)[3];
  DAT_1010_01d6 = ((undefined2 *)param_1)[4];
  DAT_1010_01d8 = ((undefined2 *)param_1)[5];
  DAT_1010_01da = ((undefined2 *)param_1)[6];
  DAT_1010_01dc = ((undefined2 *)param_1)[7];
  DAT_1010_01de = ((undefined2 *)param_1)[8];
  DAT_1010_01e0 = ((undefined2 *)param_1)[9];
  DAT_1010_0184 = 3;
  return;
}


// ---- FUN_1000_96ca @ 1000:96ca

void __cdecl16near FUN_1000_96ca(void)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_719(0x1018,uVar2);
    return;
  }
  DAT_1010_0185 = 1;
  return;
}


// ---- FUN_1000_96e2 @ 1000:96e2

void __cdecl16near FUN_1000_96e2(undefined2 *param_1)

{
  int iVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  undefined2 unaff_CS;
  undefined2 uVar4;
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_a;
  undefined2 local_8;
  undefined2 local_6;
  undefined2 local_4;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  puVar2 = (undefined2 *)param_1;
  local_e = *param_1;
  local_c = puVar2[2];
  local_a = puVar2[4];
  local_8 = puVar2[6];
  local_6 = puVar2[8];
  local_4 = puVar2[10];
  uVar4 = 0x2f;
  M007_PUTSTATE(unaff_CS,1);
  iVar1 = M007_GETSTATE(0x1018,0x83,uVar4);
  if (iVar1 == 1) {
    Ordinal_709(0x1018,&local_e);
    return;
  }
  DAT_1010_01e6 = *param_1;
  DAT_1010_01e8 = puVar2[2];
  DAT_1010_01ea = puVar2[4];
  DAT_1010_01ec = puVar2[6];
  DAT_1010_01ee = puVar2[8];
  DAT_1010_0184 = 4;
  return;
}


// ---- FUN_1000_975e @ 1000:975e

void __cdecl16near FUN_1000_975e(undefined1 param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_711(0x1018,param_1,uVar2);
    return;
  }
  if (DAT_1010_0184 == '\0') {
    DAT_1010_02b9 = param_1;
    return;
  }
  DAT_1010_02bc = DAT_1010_02bc | 4;
  return;
}


// ---- FUN_1000_978e @ 1000:978e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16near FUN_1000_978e(float *param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_707(0x1018,(float *)param_1,param_1._2_2_,uVar2);
    return;
  }
  if ((((DAT_1010_0184 == '\0') && (*param_1 <= _DAT_1010_0186)) &&
      (((float *)param_1)[1] <= _DAT_1010_018a)) &&
     (((((float *)param_1)[2] <= _DAT_1010_018e && (((float *)param_1)[3] <= _DAT_1010_0192)) &&
      (((float *)param_1)[4] <= _DAT_1010_0196)))) {
    DAT_1010_020a = *(undefined2 *)param_1;
    DAT_1010_020c = *(undefined2 *)((int)(float *)param_1 + 2);
    DAT_1010_020e = *(undefined2 *)((float *)param_1 + 1);
    DAT_1010_0210 = *(undefined2 *)((int)(float *)param_1 + 6);
    DAT_1010_0212 = *(undefined2 *)((float *)param_1 + 2);
    DAT_1010_0214 = *(undefined2 *)((int)(float *)param_1 + 10);
    DAT_1010_0216 = *(undefined2 *)((float *)param_1 + 3);
    DAT_1010_0218 = *(undefined2 *)((int)(float *)param_1 + 0xe);
    DAT_1010_021a = *(undefined2 *)((float *)param_1 + 4);
    DAT_1010_021c = *(undefined2 *)((int)(float *)param_1 + 0x12);
    return;
  }
  DAT_1010_02bc = DAT_1010_02bc | 1;
  return;
}


// ---- FUN_1000_986e @ 1000:986e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16near FUN_1000_986e(float *param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_708(0x1018,(float *)param_1,param_1._2_2_,uVar2);
    return;
  }
  if ((((DAT_1010_0184 == '\0') && (_DAT_1010_0186 <= *param_1)) &&
      (_DAT_1010_018a <= ((float *)param_1)[1])) &&
     (((_DAT_1010_018e <= ((float *)param_1)[2] && (_DAT_1010_0192 <= ((float *)param_1)[3])) &&
      (_DAT_1010_0196 <= ((float *)param_1)[4])))) {
    DAT_1010_0222 = *(undefined2 *)param_1;
    DAT_1010_0224 = *(undefined2 *)((int)(float *)param_1 + 2);
    DAT_1010_0226 = *(undefined2 *)((float *)param_1 + 1);
    DAT_1010_0228 = *(undefined2 *)((int)(float *)param_1 + 6);
    DAT_1010_022a = *(undefined2 *)((float *)param_1 + 2);
    DAT_1010_022c = *(undefined2 *)((int)(float *)param_1 + 10);
    DAT_1010_022e = *(undefined2 *)((float *)param_1 + 3);
    DAT_1010_0230 = *(undefined2 *)((int)(float *)param_1 + 0xe);
    DAT_1010_0232 = *(undefined2 *)((float *)param_1 + 4);
    DAT_1010_0234 = *(undefined2 *)((int)(float *)param_1 + 0x12);
    return;
  }
  DAT_1010_02bc = DAT_1010_02bc | 2;
  return;
}


// ---- FUN_1000_994e @ 1000:994e

void __cdecl16near FUN_1000_994e(undefined1 param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_712(0x1018,param_1,uVar2);
    return;
  }
  if (DAT_1010_0184 == '\0') {
    DAT_1010_02b8 = param_1;
    return;
  }
  DAT_1010_02bc = DAT_1010_02bc | 8;
  return;
}


// ---- FUN_1000_997e @ 1000:997e

void __cdecl16near FUN_1000_997e(undefined2 *param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_717(0x1018,(undefined2 *)param_1,param_1._2_2_,uVar2);
    return;
  }
  if (DAT_1010_0184 == '\0') {
    DAT_1010_029a = *param_1;
    DAT_1010_029c = ((undefined2 *)param_1)[1];
    DAT_1010_029e = ((undefined2 *)param_1)[2];
    DAT_1010_02a0 = ((undefined2 *)param_1)[3];
    DAT_1010_02a2 = ((undefined2 *)param_1)[4];
    DAT_1010_02a4 = ((undefined2 *)param_1)[5];
    DAT_1010_02a6 = ((undefined2 *)param_1)[6];
    DAT_1010_02a8 = ((undefined2 *)param_1)[7];
    DAT_1010_02aa = DAT_1010_0b14;
    DAT_1010_02ac = DAT_1010_0b16;
    return;
  }
  DAT_1010_02bc = DAT_1010_02bc | 0x20;
  return;
}


// ---- FUN_1000_99f6 @ 1000:99f6

void __cdecl16near FUN_1000_99f6(undefined2 *param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_716(0x1018,(undefined2 *)param_1,param_1._2_2_,uVar2);
    return;
  }
  if (DAT_1010_0184 == '\0') {
    DAT_1010_028e = *param_1;
    DAT_1010_0290 = ((undefined2 *)param_1)[1];
    DAT_1010_0292 = ((undefined2 *)param_1)[2];
    DAT_1010_0294 = ((undefined2 *)param_1)[3];
    DAT_1010_0296 = 0;
    return;
  }
  DAT_1010_02bc = DAT_1010_02bc | 0x20;
  return;
}


// ---- FUN_1000_9a46 @ 1000:9a46

void __cdecl16near FUN_1000_9a46(undefined2 *param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_713(0x1018,(undefined2 *)param_1,param_1._2_2_,uVar2);
    return;
  }
  if (DAT_1010_0184 == '\0') {
    DAT_1010_0252 = *param_1;
    DAT_1010_0254 = ((undefined2 *)param_1)[1];
    DAT_1010_0256 = ((undefined2 *)param_1)[2];
    DAT_1010_0258 = ((undefined2 *)param_1)[3];
    DAT_1010_025a = ((undefined2 *)param_1)[4];
    return;
  }
  DAT_1010_02bc = DAT_1010_02bc | 0x20;
  return;
}


// ---- FUN_1000_9a96 @ 1000:9a96

void __cdecl16near FUN_1000_9a96(undefined2 *param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_718(0x1018,(undefined2 *)param_1,param_1._2_2_,uVar2);
    return;
  }
  if (DAT_1010_0184 == '\0') {
    DAT_1010_0282 = *param_1;
    DAT_1010_0284 = ((undefined2 *)param_1)[1];
    DAT_1010_0286 = ((undefined2 *)param_1)[2];
    DAT_1010_0288 = ((undefined2 *)param_1)[3];
    DAT_1010_028a = ((undefined2 *)param_1)[4];
    return;
  }
  DAT_1010_02bc = DAT_1010_02bc | 0x20;
  return;
}


// ---- FUN_1000_9ae6 @ 1000:9ae6

void __cdecl16near FUN_1000_9ae6(undefined2 *param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_714(0x1018,(undefined2 *)param_1,param_1._2_2_,uVar2);
    return;
  }
  if (DAT_1010_0184 == '\0') {
    DAT_1010_025e = *param_1;
    DAT_1010_0260 = ((undefined2 *)param_1)[1];
    DAT_1010_0262 = ((undefined2 *)param_1)[2];
    DAT_1010_0264 = ((undefined2 *)param_1)[3];
    DAT_1010_0266 = ((undefined2 *)param_1)[4];
    return;
  }
  DAT_1010_02bc = DAT_1010_02bc | 0x20;
  return;
}


// ---- FUN_1000_9b36 @ 1000:9b36

void __cdecl16near FUN_1000_9b36(undefined2 *param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_715(0x1018,(undefined2 *)param_1,param_1._2_2_,uVar2);
    return;
  }
  if (DAT_1010_0184 == '\0') {
    DAT_1010_026a = *param_1;
    DAT_1010_026c = ((undefined2 *)param_1)[1];
    DAT_1010_026e = ((undefined2 *)param_1)[2];
    DAT_1010_0270 = ((undefined2 *)param_1)[3];
    DAT_1010_0272 = ((undefined2 *)param_1)[4];
    DAT_1010_0274 = ((undefined2 *)param_1)[5];
    DAT_1010_0276 = ((undefined2 *)param_1)[6];
    DAT_1010_0278 = ((undefined2 *)param_1)[7];
    DAT_1010_027a = ((undefined2 *)param_1)[8];
    DAT_1010_027c = ((undefined2 *)param_1)[9];
    return;
  }
  DAT_1010_02bc = DAT_1010_02bc | 0x20;
  return;
}


// ---- FUN_1000_9bae @ 1000:9bae

void __cdecl16near FUN_1000_9bae(char param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_321(0x1018,(int)param_1,uVar2);
  }
  return;
}


// ---- FUN_1000_9bc8 @ 1000:9bc8

void __cdecl16near FUN_1000_9bc8(void)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_326(0x1018,uVar2);
  }
  return;
}


// ---- FUN_1000_9bda @ 1000:9bda

void __cdecl16near FUN_1000_9bda(void)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_721(0x1018,uVar2);
    return;
  }
  DAT_1010_02b2._0_1_ = 0;
  DAT_1010_02b2._1_1_ = 0;
  DAT_1010_02b4._0_1_ = 0;
  DAT_1010_02b4._1_1_ = 0;
  DAT_1010_02b6._0_1_ = 0;
  DAT_1010_02bd = DAT_1010_02bd | 8;
  return;
}


// ---- FUN_1000_9c02 @ 1000:9c02

void __cdecl16near
FUN_1000_9c02(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_720(0x1018,param_3,param_4,param_1,param_2,uVar2);
    return;
  }
  LSTRCPY(0x1018,0x968,0x1010,param_1);
  return;
}


// ---- FUN_1000_9c34 @ 1000:9c34

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16near FUN_1000_9c34(float *param_1)

{
  int iVar1;
  undefined2 unaff_CS;
  bool bVar2;
  undefined2 uVar3;
  undefined1 local_a [4];
  int local_6;
  int local_4;
  
  uVar3 = 0x154;
  M007_GETVALUE(unaff_CS,local_a);
  local_4 = FUN_1000_0264(uVar3);
  local_6 = 0;
  iVar1 = M007_GETSTATE(0x1018,0x83);
  if (iVar1 == 1) {
    Ordinal_702(0x1018,(float *)param_1,param_1._2_2_);
    iVar1 = M007_GETSTATE(0x1018,0x118);
    if (iVar1 != 8) {
      return;
    }
    local_4 = Ordinal_735();
    M007_PUTVALUE(0x1018,(float)local_4);
    if (local_4 < 0x5f) {
      return;
    }
    M007_PUTSTATE(0x1018,0);
    return;
  }
  *(undefined1 *)((int)(float *)param_1 + 0x2e) = 0;
  if (DAT_1010_0184 == '\x01') {
    if (DAT_1010_0171 == '\x01') {
      local_6 = local_6 + 1;
    }
    if (DAT_1010_0172 == '\x01') {
      local_6 = local_6 + 1;
    }
    if (DAT_1010_0175 == '\x01') {
      local_6 = local_6 + 1;
    }
    if (DAT_1010_0174 == '\x01') {
      local_6 = local_6 + 1;
    }
    if (DAT_1010_0173 == '\x01') {
      local_6 = local_6 + 1;
    }
    local_6 = (int)(100 / (long)local_6);
    DAT_1010_01b6 = 0.0 < _DAT_1010_0186;
    if ((bool)DAT_1010_01b6) {
      _DAT_1010_0186 = _DAT_1010_0186 - DAT_1010_0b5c;
    }
    else {
      _DAT_1010_0186 = (float)CONCAT22(DAT_1010_0b16,DAT_1010_0b14);
      local_4 = local_4 + local_6;
    }
    DAT_1010_01b7 = 0.0 < _DAT_1010_018a;
    if ((bool)DAT_1010_01b7) {
      _DAT_1010_018a = _DAT_1010_018a - DAT_1010_0b5c;
    }
    else {
      _DAT_1010_018a = (float)CONCAT22(DAT_1010_0b16,DAT_1010_0b14);
      local_4 = local_4 + local_6;
    }
    DAT_1010_01b8 = 0.0 < _DAT_1010_018e;
    if ((bool)DAT_1010_01b8) {
      _DAT_1010_018e = _DAT_1010_018e - DAT_1010_0b5c;
    }
    else {
      _DAT_1010_018e = (float)CONCAT22(DAT_1010_0b16,DAT_1010_0b14);
      local_4 = local_4 + local_6;
    }
    DAT_1010_01b9 = _DAT_1010_0b28 < _DAT_1010_0192;
    if ((bool)DAT_1010_01b9) {
      _DAT_1010_0192 = _DAT_1010_0192 - 1.0;
    }
    else {
      _DAT_1010_0192 = _DAT_1010_0b28;
      local_4 = local_4 + local_6;
    }
    DAT_1010_01ba = 0.0 < _DAT_1010_0196;
    if ((bool)DAT_1010_01ba) {
      _DAT_1010_0196 = _DAT_1010_0196 - 1.0;
    }
    else {
      _DAT_1010_0196 = (float)CONCAT22(DAT_1010_0b16,DAT_1010_0b14);
      local_4 = local_4 + local_6;
    }
    if (((((bool)DAT_1010_01b6) || ((bool)DAT_1010_01b7)) || ((bool)DAT_1010_01b8)) ||
       (((bool)DAT_1010_01b9 || ((bool)DAT_1010_01ba)))) {
      DAT_1010_02ba = '\0';
      M007_PUTVALUE(0x1018,(float)local_4);
    }
    else {
      _DAT_1010_02bc = _DAT_1010_02bc | 0x100;
      DAT_1010_02ba = '\x01';
      DAT_1010_0184 = '\0';
      M007_PUTSTATE(0x1018,0);
    }
  }
  else if (DAT_1010_0184 == '\x02') {
    _DAT_1010_02bc = _DAT_1010_02bc | 0x100;
    DAT_1010_02ba = '\x01';
    DAT_1010_01b6 = '\0';
    DAT_1010_01b7 = '\0';
    DAT_1010_01b8 = '\0';
    DAT_1010_01b9 = '\0';
    DAT_1010_01ba = '\0';
    DAT_1010_0184 = '\0';
  }
  else if (DAT_1010_0184 == '\x03') {
    if (_DAT_1010_01ce - DAT_1010_0b5c <= _DAT_1010_0186) {
      if (DAT_1010_0b5c + _DAT_1010_01ce < _DAT_1010_0186) {
        _DAT_1010_0186 = _DAT_1010_0186 - DAT_1010_0b5c;
        goto code_r0x1000a082;
      }
      _DAT_1010_0186 = _DAT_1010_01ce;
      DAT_1010_01b6 = false;
    }
    else {
      _DAT_1010_0186 = DAT_1010_0b5c + _DAT_1010_0186;
code_r0x1000a082:
      DAT_1010_01b6 = true;
    }
    if (_DAT_1010_01d2 - DAT_1010_0b5c <= _DAT_1010_018a) {
      if (DAT_1010_0b5c + _DAT_1010_01d2 < _DAT_1010_018a) {
        _DAT_1010_018a = _DAT_1010_018a - DAT_1010_0b5c;
        goto code_r0x1000a0e9;
      }
      _DAT_1010_018a = _DAT_1010_01d2;
      DAT_1010_01b7 = false;
    }
    else {
      _DAT_1010_018a = DAT_1010_0b5c + _DAT_1010_018a;
code_r0x1000a0e9:
      DAT_1010_01b7 = true;
    }
    if (_DAT_1010_01d6 - DAT_1010_0b5c <= _DAT_1010_018e) {
      if (DAT_1010_0b5c + _DAT_1010_01d6 < _DAT_1010_018e) {
        _DAT_1010_018e = _DAT_1010_018e - DAT_1010_0b5c;
        goto code_r0x1000a150;
      }
      _DAT_1010_018e = _DAT_1010_01d6;
      DAT_1010_01b8 = false;
    }
    else {
      _DAT_1010_018e = DAT_1010_0b5c + _DAT_1010_018e;
code_r0x1000a150:
      DAT_1010_01b8 = true;
    }
    if (_DAT_1010_01da - DAT_1010_0b60 <= _DAT_1010_0192) {
      if (_DAT_1010_01da + 1.0 < _DAT_1010_0192) {
        _DAT_1010_0192 = _DAT_1010_0192 - 1.0;
        goto code_r0x1000a1b5;
      }
      _DAT_1010_0192 = _DAT_1010_01da;
      DAT_1010_01b9 = false;
    }
    else {
      _DAT_1010_0192 = _DAT_1010_0192 + 1.0;
code_r0x1000a1b5:
      DAT_1010_01b9 = true;
    }
    if (_DAT_1010_01de - DAT_1010_0b60 <= _DAT_1010_0196) {
      if (_DAT_1010_01de + 1.0 < _DAT_1010_0196) {
        _DAT_1010_0196 = _DAT_1010_0196 - 1.0;
        goto code_r0x1000a216;
      }
      _DAT_1010_0196 = _DAT_1010_01de;
      DAT_1010_01ba = false;
    }
    else {
      _DAT_1010_0196 = _DAT_1010_0196 + 1.0;
code_r0x1000a216:
      DAT_1010_01ba = true;
    }
    if (((((bool)DAT_1010_01b6 == false) && ((bool)DAT_1010_01b7 == false)) &&
        ((bool)DAT_1010_01b8 == false)) &&
       (((bool)DAT_1010_01b9 == false && ((bool)DAT_1010_01ba == false)))) {
      _DAT_1010_02bc = _DAT_1010_02bc | 0x10;
LAB_1000_a284:
      DAT_1010_0184 = '\0';
    }
  }
  else if (DAT_1010_0184 == '\x04') {
    DAT_1010_01b6 = DAT_1010_01e6 != 0;
    if ((bool)DAT_1010_01b6) {
      _DAT_1010_0186 = (float)DAT_1010_01e6 * DAT_1010_0b64 + _DAT_1010_0186;
    }
    DAT_1010_01b7 = DAT_1010_01e8 != 0;
    if ((bool)DAT_1010_01b7) {
      _DAT_1010_018a = (float)DAT_1010_01e8 * DAT_1010_0b64 + _DAT_1010_018a;
    }
    DAT_1010_01b8 = DAT_1010_01ea != 0;
    if ((bool)DAT_1010_01b8) {
      _DAT_1010_018e = (float)DAT_1010_01ea * DAT_1010_0b64 + _DAT_1010_018e;
    }
    DAT_1010_01b9 = DAT_1010_01ec != 0;
    if ((bool)DAT_1010_01b9) {
      _DAT_1010_0192 = (float)DAT_1010_01ec * DAT_1010_0b64 + _DAT_1010_0192;
    }
    DAT_1010_01ba = DAT_1010_01ee != 0;
    if ((bool)DAT_1010_01ba) {
      _DAT_1010_0196 = (float)DAT_1010_01ee * DAT_1010_0b64 + _DAT_1010_0196;
    }
    if (((!(bool)DAT_1010_01b6) && (!(bool)DAT_1010_01b7)) &&
       ((!(bool)DAT_1010_01b8 && ((!(bool)DAT_1010_01b9 && (!(bool)DAT_1010_01ba))))))
    goto LAB_1000_a284;
  }
  uVar3 = DAT_1010_0188;
  if (((DAT_1010_019e != _DAT_1010_0186) || (DAT_1010_01a2 != _DAT_1010_018a)) ||
     ((_DAT_1010_01a6 != _DAT_1010_018e ||
      ((_DAT_1010_01aa != _DAT_1010_0192 || (_DAT_1010_01ae != _DAT_1010_0196)))))) {
    _DAT_1010_02bc = _DAT_1010_02bc | 0x40;
    DAT_1010_019e = _DAT_1010_0186;
    DAT_1010_01a2 = _DAT_1010_018a;
    _DAT_1010_01a6 = _DAT_1010_018e;
    _DAT_1010_01aa = _DAT_1010_0192;
    _DAT_1010_01ae = _DAT_1010_0196;
  }
  *(undefined2 *)param_1 = DAT_1010_0186;
  *(undefined2 *)((int)(float *)param_1 + 2) = uVar3;
  uVar3 = DAT_1010_018c;
  *(undefined2 *)((float *)param_1 + 1) = DAT_1010_018a;
  *(undefined2 *)((int)(float *)param_1 + 6) = uVar3;
  uVar3 = DAT_1010_0190;
  *(undefined2 *)((float *)param_1 + 2) = DAT_1010_018e;
  *(undefined2 *)((int)(float *)param_1 + 10) = uVar3;
  uVar3 = DAT_1010_0194;
  *(undefined2 *)((float *)param_1 + 3) = DAT_1010_0192;
  *(undefined2 *)((int)(float *)param_1 + 0xe) = uVar3;
  uVar3 = DAT_1010_0198;
  *(undefined2 *)((float *)param_1 + 4) = DAT_1010_0196;
  *(undefined2 *)((int)(float *)param_1 + 0x12) = uVar3;
  if ((((DAT_1010_01bc != DAT_1010_01b6) || (DAT_1010_01bd != DAT_1010_01b7)) ||
      (DAT_1010_01be != DAT_1010_01b8)) ||
     ((DAT_1010_01bf != DAT_1010_01b9 || (DAT_1010_01c0 != DAT_1010_01ba)))) {
    _DAT_1010_02bc = _DAT_1010_02bc | 0x80;
    DAT_1010_01bc = DAT_1010_01b6;
    DAT_1010_01bd = DAT_1010_01b7;
    DAT_1010_01be = DAT_1010_01b8;
    DAT_1010_01bf = DAT_1010_01b9;
    DAT_1010_01c0 = DAT_1010_01ba;
  }
  *(char *)((float *)param_1 + 9) = DAT_1010_01b6;
  *(char *)((int)(float *)param_1 + 0x25) = DAT_1010_01b7;
  *(char *)((int)(float *)param_1 + 0x26) = DAT_1010_01b8;
  *(char *)((int)(float *)param_1 + 0x27) = DAT_1010_01b9;
  *(char *)((float *)param_1 + 10) = DAT_1010_01ba;
  if (*param_1 < DAT_1010_01f2) {
    DAT_1010_01c2 = '\x02';
  }
  else if (_DAT_1010_020a <= *param_1) {
    if (*param_1 <= DAT_1010_023a) {
      if (*param_1 <= _DAT_1010_0222) {
        DAT_1010_01c2 = '\0';
      }
      else {
        DAT_1010_01c2 = '\x04';
      }
    }
    else {
      DAT_1010_01c2 = '\x05';
    }
  }
  else {
    DAT_1010_01c2 = '\x03';
  }
  if (DAT_1010_01f6 <= ((float *)param_1)[1]) {
    if (_DAT_1010_020e <= ((float *)param_1)[1]) {
      if (((float *)param_1)[1] <= DAT_1010_023e) {
        if (((float *)param_1)[1] <= _DAT_1010_0226) {
          DAT_1010_01c3 = '\0';
        }
        else {
          DAT_1010_01c3 = '\x04';
        }
      }
      else {
        DAT_1010_01c3 = '\x05';
      }
    }
    else {
      DAT_1010_01c3 = '\x03';
    }
  }
  else {
    DAT_1010_01c3 = '\x02';
  }
  if (DAT_1010_01fa <= ((float *)param_1)[2]) {
    if (_DAT_1010_0212 <= ((float *)param_1)[2]) {
      if (((float *)param_1)[2] <= DAT_1010_0242) {
        if (((float *)param_1)[2] <= _DAT_1010_022a) {
          DAT_1010_01c4 = '\0';
        }
        else {
          DAT_1010_01c4 = '\x04';
        }
      }
      else {
        DAT_1010_01c4 = '\x05';
      }
    }
    else {
      DAT_1010_01c4 = '\x03';
    }
  }
  else {
    DAT_1010_01c4 = '\x02';
  }
  if (DAT_1010_01fe <= ((float *)param_1)[3]) {
    if (_DAT_1010_0216 <= ((float *)param_1)[3]) {
      if (((float *)param_1)[3] <= DAT_1010_0246) {
        if (((float *)param_1)[3] <= _DAT_1010_022e) {
          DAT_1010_01c5 = '\0';
        }
        else {
          DAT_1010_01c5 = '\x04';
        }
      }
      else {
        DAT_1010_01c5 = '\x05';
      }
    }
    else {
      DAT_1010_01c5 = '\x03';
    }
  }
  else {
    DAT_1010_01c5 = '\x02';
  }
  if (DAT_1010_0202 <= ((float *)param_1)[4]) {
    if (_DAT_1010_021a <= ((float *)param_1)[4]) {
      if (((float *)param_1)[4] <= DAT_1010_024a) {
        if (((float *)param_1)[4] <= _DAT_1010_0232) {
          DAT_1010_01c6 = '\0';
        }
        else {
          DAT_1010_01c6 = '\x04';
        }
      }
      else {
        DAT_1010_01c6 = '\x05';
      }
    }
    else {
      DAT_1010_01c6 = '\x03';
    }
  }
  else {
    DAT_1010_01c6 = '\x02';
  }
  if (((DAT_1010_01c2 != '\0') || (DAT_1010_01c3 != '\0')) ||
     ((DAT_1010_01c4 != '\0' || ((DAT_1010_01c5 != '\0' || (DAT_1010_01c6 != '\0')))))) {
    if (DAT_1010_0184 == '\x01') {
      if ((DAT_1010_01c2 == '\x05') || (DAT_1010_01c2 == '\x04')) {
        DAT_1010_0185 = '\x01';
      }
      if ((DAT_1010_01c3 == '\x05') || (DAT_1010_01c3 == '\x04')) {
        DAT_1010_0185 = '\x01';
      }
      if ((DAT_1010_01c4 == '\x05') || (DAT_1010_01c4 == '\x04')) {
        DAT_1010_0185 = '\x01';
      }
      if ((DAT_1010_01c5 == '\x05') || (DAT_1010_01c5 == '\x04')) {
        DAT_1010_0185 = '\x01';
      }
      if ((DAT_1010_01c6 == '\x05') || (DAT_1010_01c6 == '\x04')) {
        DAT_1010_0185 = '\x01';
      }
      if ((DAT_1010_01c2 == '\x02') || (DAT_1010_01c2 == '\x03')) {
        DAT_1010_01c2 = '\0';
      }
      if ((DAT_1010_01c3 == '\x02') || (DAT_1010_01c3 == '\x03')) {
        DAT_1010_01c3 = '\0';
      }
      if ((DAT_1010_01c4 == '\x02') || (DAT_1010_01c4 == '\x03')) {
        DAT_1010_01c4 = '\0';
      }
      if ((DAT_1010_01c5 == '\x02') || (DAT_1010_01c5 == '\x03')) {
        DAT_1010_01c5 = '\0';
      }
      if ((DAT_1010_01c6 == '\x02') || (DAT_1010_01c6 == '\x03')) {
        DAT_1010_01c6 = '\0';
      }
    }
    else {
      if (DAT_1010_0184 == '\x03') {
        if (((DAT_1010_01c2 == '\x02') || (DAT_1010_01c2 == '\x03')) &&
           (_DAT_1010_01ce < _DAT_1010_0186)) {
          DAT_1010_0185 = '\x01';
        }
        if (((DAT_1010_01c2 == '\x05') || (DAT_1010_01c2 == '\x04')) &&
           (_DAT_1010_0186 < _DAT_1010_01ce)) {
          DAT_1010_0185 = '\x01';
        }
        if (((DAT_1010_01c3 == '\x02') || (DAT_1010_01c3 == '\x03')) &&
           (_DAT_1010_01d2 < _DAT_1010_018a)) {
          DAT_1010_0185 = '\x01';
        }
        if (((DAT_1010_01c3 == '\x05') || (DAT_1010_01c3 == '\x04')) &&
           (_DAT_1010_018a < _DAT_1010_01d2)) {
          DAT_1010_0185 = '\x01';
        }
        if (((DAT_1010_01c4 == '\x02') || (DAT_1010_01c4 == '\x03')) &&
           (_DAT_1010_01d6 < _DAT_1010_018e)) {
          DAT_1010_0185 = '\x01';
        }
        if (((DAT_1010_01c4 == '\x05') || (DAT_1010_01c4 == '\x04')) &&
           (_DAT_1010_018e < _DAT_1010_01d6)) {
          DAT_1010_0185 = '\x01';
        }
        if (((DAT_1010_01c5 == '\x02') || (DAT_1010_01c5 == '\x03')) &&
           (_DAT_1010_01da < _DAT_1010_0192)) {
          DAT_1010_0185 = '\x01';
        }
        if (((DAT_1010_01c5 == '\x05') || (DAT_1010_01c5 == '\x04')) &&
           (_DAT_1010_0192 < _DAT_1010_01da)) {
          DAT_1010_0185 = '\x01';
        }
        if (((DAT_1010_01c6 == '\x02') || (DAT_1010_01c6 == '\x03')) &&
           (_DAT_1010_01de < _DAT_1010_0196)) {
          DAT_1010_0185 = '\x01';
        }
        if (((DAT_1010_01c6 != '\x05') && (DAT_1010_01c6 != '\x04')) ||
           (_DAT_1010_01de <= _DAT_1010_0196)) goto LAB_1000_a6cd;
      }
      else if (DAT_1010_0184 == '\x04') {
        if (((DAT_1010_01c2 == '\x02') || (DAT_1010_01c2 == '\x03')) && (DAT_1010_01e6 < 0)) {
          DAT_1010_0185 = '\x01';
        }
        if (((DAT_1010_01c2 == '\x05') || (DAT_1010_01c2 == '\x04')) && (0 < DAT_1010_01e6)) {
          DAT_1010_0185 = '\x01';
        }
        if (((DAT_1010_01c3 == '\x02') || (DAT_1010_01c3 == '\x03')) && (DAT_1010_01e8 < 0)) {
          DAT_1010_0185 = '\x01';
        }
        if (((DAT_1010_01c3 == '\x05') || (DAT_1010_01c3 == '\x04')) && (0 < DAT_1010_01e8)) {
          DAT_1010_0185 = '\x01';
        }
        if (((DAT_1010_01c4 == '\x02') || (DAT_1010_01c4 == '\x03')) && (DAT_1010_01ea < 0)) {
          DAT_1010_0185 = '\x01';
        }
        if (((DAT_1010_01c4 == '\x05') || (DAT_1010_01c4 == '\x04')) && (0 < DAT_1010_01ea)) {
          DAT_1010_0185 = '\x01';
        }
        if (((DAT_1010_01c5 == '\x02') || (DAT_1010_01c5 == '\x03')) && (DAT_1010_01ec < 0)) {
          DAT_1010_0185 = '\x01';
        }
        if (((DAT_1010_01c5 == '\x05') || (DAT_1010_01c5 == '\x04')) && (0 < DAT_1010_01ec)) {
          DAT_1010_0185 = '\x01';
        }
        if (((DAT_1010_01c6 == '\x02') || (DAT_1010_01c6 == '\x03')) && (DAT_1010_01ee < 0)) {
          DAT_1010_0185 = '\x01';
        }
        if (((DAT_1010_01c6 != '\x05') && (DAT_1010_01c6 != '\x04')) || (DAT_1010_01ee < 1))
        goto LAB_1000_a6cd;
      }
      DAT_1010_0185 = '\x01';
    }
  }
LAB_1000_a6cd:
  if ((((DAT_1010_01c8 != DAT_1010_01c2) || (DAT_1010_01c9 != DAT_1010_01c3)) ||
      (DAT_1010_01ca != DAT_1010_01c4)) ||
     ((DAT_1010_01cb != DAT_1010_01c5 || (DAT_1010_01cc != DAT_1010_01c6)))) {
    _DAT_1010_02bc = _DAT_1010_02bc | 0x200;
    DAT_1010_01c8 = DAT_1010_01c2;
    DAT_1010_01c9 = DAT_1010_01c3;
    DAT_1010_01ca = DAT_1010_01c4;
    DAT_1010_01cb = DAT_1010_01c5;
    DAT_1010_01cc = DAT_1010_01c6;
  }
  *(char *)((int)(float *)param_1 + 0x1e) = DAT_1010_01c2;
  *(char *)((int)(float *)param_1 + 0x1f) = DAT_1010_01c3;
  *(char *)((float *)param_1 + 8) = DAT_1010_01c4;
  *(char *)((int)(float *)param_1 + 0x21) = DAT_1010_01c5;
  *(char *)((int)(float *)param_1 + 0x22) = DAT_1010_01c6;
  if (DAT_1010_0185 == '\x01') {
    DAT_1010_0185 = '\0';
    *(undefined1 *)((float *)param_1 + 9) = 0;
    *(undefined1 *)((int)(float *)param_1 + 0x25) = 0;
    *(undefined1 *)((int)(float *)param_1 + 0x26) = 0;
    *(undefined1 *)((int)(float *)param_1 + 0x27) = 0;
    *(undefined1 *)((float *)param_1 + 10) = 0;
    DAT_1010_0184 = '\0';
    _DAT_1010_02bc = _DAT_1010_02bc | 0x80;
  }
  bVar2 = DAT_1010_02ba != '\0';
  *(bool *)((float *)param_1 + 6) = bVar2;
  *(bool *)((int)(float *)param_1 + 0x19) = bVar2;
  *(bool *)((int)(float *)param_1 + 0x1a) = bVar2;
  *(bool *)((int)(float *)param_1 + 0x1b) = bVar2;
  *(bool *)((float *)param_1 + 7) = bVar2;
  *(uint *)((int)(float *)param_1 + 0x2a) = _DAT_1010_02bc;
  *(undefined2 *)((float *)param_1 + 0xb) = DAT_1010_02be;
  DAT_1010_02be = 0;
  _DAT_1010_02bc = 0;
  return;
}


// ---- FUN_1000_a9f0 @ 1000:a9f0

void __cdecl16near FUN_1000_a9f0(undefined2 *param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 uVar6;
  
  uVar6 = 0x83;
  iVar3 = M007_GETSTATE();
  if (iVar3 == 1) {
    Ordinal_703(0x1018,(undefined2 *)param_1,param_1._2_2_,uVar6);
  }
  else {
    *(undefined1 *)((undefined2 *)param_1 + 0x4b) = DAT_1010_02b8;
    *(undefined1 *)((int)(undefined2 *)param_1 + 0x97) = DAT_1010_02b9;
    puVar4 = (undefined2 *)&DAT_1010_0222;
    puVar5 = (undefined2 *)param_1;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      puVar2 = puVar5;
      puVar5 = puVar5 + 1;
      puVar1 = puVar4;
      puVar4 = puVar4 + 1;
      *puVar2 = *puVar1;
    }
    puVar4 = (undefined2 *)param_1 + 0xc;
    puVar5 = (undefined2 *)&DAT_1010_020a;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      puVar2 = puVar4;
      puVar4 = puVar4 + 1;
      puVar1 = puVar5;
      puVar5 = puVar5 + 1;
      *puVar2 = *puVar1;
    }
    puVar4 = (undefined2 *)param_1 + 0x30;
    puVar5 = (undefined2 *)&DAT_1010_0252;
    for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
      puVar2 = puVar4;
      puVar4 = puVar4 + 1;
      puVar1 = puVar5;
      puVar5 = puVar5 + 1;
      *puVar2 = *puVar1;
    }
    puVar4 = (undefined2 *)param_1 + 0x36;
    puVar5 = (undefined2 *)&DAT_1010_025e;
    for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
      puVar2 = puVar4;
      puVar4 = puVar4 + 1;
      puVar1 = puVar5;
      puVar5 = puVar5 + 1;
      *puVar2 = *puVar1;
    }
    puVar4 = (undefined2 *)param_1 + 0x18;
    puVar5 = (undefined2 *)&DAT_1010_026a;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      puVar2 = puVar4;
      puVar4 = puVar4 + 1;
      puVar1 = puVar5;
      puVar5 = puVar5 + 1;
      *puVar2 = *puVar1;
    }
    puVar4 = (undefined2 *)param_1 + 0x3c;
    puVar5 = (undefined2 *)&DAT_1010_0282;
    for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
      puVar2 = puVar4;
      puVar4 = puVar4 + 1;
      puVar1 = puVar5;
      puVar5 = puVar5 + 1;
      *puVar2 = *puVar1;
    }
    puVar4 = (undefined2 *)param_1 + 0x42;
    puVar5 = (undefined2 *)&DAT_1010_028e;
    for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
      puVar2 = puVar4;
      puVar4 = puVar4 + 1;
      puVar1 = puVar5;
      puVar5 = puVar5 + 1;
      *puVar2 = *puVar1;
    }
    puVar4 = (undefined2 *)param_1 + 0x24;
    puVar5 = (undefined2 *)&DAT_1010_029a;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      puVar2 = puVar4;
      puVar4 = puVar4 + 1;
      puVar1 = puVar5;
      puVar5 = puVar5 + 1;
      *puVar2 = *puVar1;
    }
    ((undefined2 *)param_1)[0x48] = DAT_1010_02b2;
    ((undefined2 *)param_1)[0x49] = DAT_1010_02b4;
    ((undefined2 *)param_1)[0x4a] = DAT_1010_02b6;
  }
  return;
}


// ---- FUN_1000_aaa0 @ 1000:aaa0

void __cdecl16near FUN_1000_aaa0(undefined1 param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_724(0x1018,param_1,uVar2);
  }
  return;
}


// ---- FUN_1000_aaba @ 1000:aaba

void __cdecl16near FUN_1000_aaba(undefined1 param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_725(0x1018,param_1,uVar2);
  }
  return;
}


// ---- FUN_1000_aad4 @ 1000:aad4

void __cdecl16near FUN_1000_aad4(undefined1 param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_726(0x1018,param_1,uVar2);
  }
  return;
}


// ---- FUN_1000_aaee @ 1000:aaee

void __cdecl16near FUN_1000_aaee(undefined1 param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_727(0x1018,param_1,uVar2);
  }
  return;
}


// ---- FUN_1000_ab08 @ 1000:ab08

void __cdecl16near FUN_1000_ab08(undefined1 param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_728(0x1018,param_1,uVar2);
  }
  return;
}


// ---- FUN_1000_ab22 @ 1000:ab22

void __cdecl16near FUN_1000_ab22(void)

{
  M007_GETSTATE();
  return;
}


// ---- FUN_1000_ab2c @ 1000:ab2c

void __cdecl16near FUN_1000_ab2c(undefined1 param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_729(0x1018,param_1,uVar2);
  }
  return;
}


// ---- FUN_1000_ab46 @ 1000:ab46

void __cdecl16near FUN_1000_ab46(void)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_730(0x1018,uVar2);
  }
  return;
}


// ---- FUN_1000_ab58 @ 1000:ab58

void __cdecl16near FUN_1000_ab58(float param_1,undefined2 param_2,undefined2 param_3)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_731(0x1018,param_2,param_3,(double)param_1,1,uVar2);
  }
  return;
}


// ---- FUN_1000_ab84 @ 1000:ab84

void __cdecl16near FUN_1000_ab84(char param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_733(0x1018,(int)param_1,uVar2);
  }
  return;
}


// ---- FUN_1000_ab9e @ 1000:ab9e

void __cdecl16near FUN_1000_ab9e(void)

{
  M007_GETSTATE();
  return;
}


// ---- FUN_1000_aba8 @ 1000:aba8

void __cdecl16near FUN_1000_aba8(char param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_734(0x1018,(int)param_1,uVar2);
  }
  return;
}


// ---- FUN_1000_abc2 @ 1000:abc2

void __cdecl16near FUN_1000_abc2(void)

{
  return;
}


// ---- FUN_1000_abc4 @ 1000:abc4

void __cdecl16near FUN_1000_abc4(void)

{
  return;
}


// ---- FUN_1000_abc6 @ 1000:abc6

undefined2 __cdecl16near FUN_1000_abc6(void)

{
  return 0;
}


// ---- FUN_1000_abca @ 1000:abca

void __cdecl16near FUN_1000_abca(int param_1,int param_2,int param_3,int param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  double *pdVar4;
  undefined2 *puVar5;
  int iVar6;
  float *pfVar7;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  undefined4 local_2a;
  undefined1 local_e [4];
  float local_a;
  float local_6;
  
  uVar10 = 0x90;
  pfVar3 = (float *)M007_GETVALUE(unaff_CS,local_e);
  local_2a = CONCAT22(param_2 - (uint)(param_1 == 0),param_1 + -1);
  local_6 = *pfVar3 * (float)local_2a;
  uVar9 = 0x91;
  pfVar3 = (float *)M007_GETVALUE();
  local_2a = CONCAT22(param_4 - (uint)(param_3 == 0),param_3 + -1);
  local_a = *pfVar3 * (float)local_2a;
  uVar8 = 0x8d;
  pfVar3 = (float *)M007_GETVALUE();
  pdVar4 = (double *)FUN_1000_0223((double)(*pfVar3 * DAT_1010_0b68),uVar8,uVar9,uVar10);
  fVar1 = local_a;
  local_6 = local_a * (float)*pdVar4 + local_6;
  pfVar3 = (float *)M007_GETVALUE();
  fVar2 = local_6;
  *param_5 = local_6 + *pfVar3;
  pfVar3 = (float *)M007_GETVALUE();
  uVar9 = (undefined2)((ulong)param_5 >> 0x10);
  pfVar7 = (float *)param_5;
  pfVar7[1] = *pfVar3 + fVar1;
  puVar5 = (undefined2 *)M007_GETVALUE(0x1018);
  uVar8 = puVar5[1];
  *(undefined2 *)(pfVar7 + 2) = *puVar5;
  *(undefined2 *)((int)pfVar7 + 10) = uVar8;
  if ((DAT_1010_0175 == '\x01') && (iVar6 = M007_GETSTATE(0x1018), iVar6 == 1)) {
    iVar6 = M007_GETSTATE(0x1018,0x62);
    if (iVar6 == 0) {
      uVar8 = 0x28;
      pfVar3 = (float *)M007_GETVALUE();
      pdVar4 = (double *)FUN_1000_0223((double)(*pfVar3 * DAT_1010_0b68),uVar8);
      fVar1 = (float)*pdVar4 * fVar2 + pfVar7[2];
    }
    else {
      uVar8 = 0x28;
      pfVar3 = (float *)M007_GETVALUE();
      pdVar4 = (double *)FUN_1000_0223((double)(*pfVar3 * DAT_1010_0b68),uVar8);
      fVar1 = pfVar7[2] - (float)*pdVar4 * local_a;
    }
    pfVar7[2] = fVar1;
  }
  if (DAT_1010_0174 == '\x01') {
    puVar5 = (undefined2 *)M007_GETVALUE();
    uVar8 = puVar5[1];
    *(undefined2 *)(pfVar7 + 3) = *puVar5;
    *(undefined2 *)((int)pfVar7 + 0xe) = uVar8;
  }
  if (DAT_1010_0173 == '\x01') {
    puVar5 = (undefined2 *)M007_GETVALUE();
    uVar8 = puVar5[1];
    *(undefined2 *)(pfVar7 + 4) = *puVar5;
    *(undefined2 *)((int)pfVar7 + 0x12) = uVar8;
  }
  if (DAT_1010_0176 == '\x01') {
    puVar5 = (undefined2 *)M007_GETVALUE();
    uVar8 = puVar5[1];
    *(undefined2 *)(pfVar7 + 5) = *puVar5;
    *(undefined2 *)((int)pfVar7 + 0x16) = uVar8;
  }
  return;
}


// ---- FUN_1000_ade8 @ 1000:ade8

undefined1 __cdecl16near FUN_1000_ade8(undefined2 *param_1)

{
  char cVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  puVar2 = (undefined2 *)param_1;
  cVar1 = FUN_1000_ae6c(*param_1,puVar2[1]);
  if ((cVar1 == '\0') || (cVar1 = FUN_1000_aeb6(puVar2[2],puVar2[3]), cVar1 == '\0')) {
    return 0;
  }
  if ((DAT_1010_0175 == '\x01') && (cVar1 = FUN_1000_af00(puVar2[4],puVar2[5]), cVar1 == '\0')) {
    return 0;
  }
  if ((DAT_1010_0174 == '\x01') && (cVar1 = FUN_1000_af4a(puVar2[6],puVar2[7]), cVar1 == '\0')) {
    return 0;
  }
  if ((DAT_1010_0176 == '\x01') && (cVar1 = FUN_1000_af94(puVar2[10],puVar2[0xb]), cVar1 == '\0')) {
    return 0;
  }
  return 1;
}


// ---- FUN_1000_ae6c @ 1000:ae6c

uint __cdecl16near FUN_1000_ae6c(float param_1)

{
  float fVar1;
  float *pfVar2;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  uint uVar3;
  undefined1 local_6 [4];
  
  pfVar2 = (float *)M007_GETVALUE(unaff_CS,local_6);
  fVar1 = *pfVar2;
  uVar3 = (uint)(fVar1 < param_1) << 8 | (uint)(NAN(fVar1) || NAN(param_1)) << 10 |
          (uint)(fVar1 == param_1) << 0xe;
  if (fVar1 < param_1 || (fVar1 == param_1) != 0) {
    pfVar2 = (float *)M007_GETVALUE(0x1018,local_6);
    fVar1 = *pfVar2;
    uVar3 = (uint)(fVar1 < param_1) << 8 | (uint)(NAN(fVar1) || NAN(param_1)) << 10 |
            (uint)(fVar1 == param_1) << 0xe;
    if (fVar1 >= param_1) {
      return CONCAT11((char)(uVar3 >> 8),1);
    }
  }
  return uVar3;
}


// ---- FUN_1000_aeb6 @ 1000:aeb6

uint __cdecl16near FUN_1000_aeb6(float param_1)

{
  float fVar1;
  float *pfVar2;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  uint uVar3;
  undefined1 local_6 [4];
  
  pfVar2 = (float *)M007_GETVALUE(unaff_CS,local_6);
  fVar1 = *pfVar2;
  uVar3 = (uint)(fVar1 < param_1) << 8 | (uint)(NAN(fVar1) || NAN(param_1)) << 10 |
          (uint)(fVar1 == param_1) << 0xe;
  if (fVar1 < param_1 || (fVar1 == param_1) != 0) {
    pfVar2 = (float *)M007_GETVALUE(0x1018,local_6);
    fVar1 = *pfVar2;
    uVar3 = (uint)(fVar1 < param_1) << 8 | (uint)(NAN(fVar1) || NAN(param_1)) << 10 |
            (uint)(fVar1 == param_1) << 0xe;
    if (fVar1 >= param_1) {
      return CONCAT11((char)(uVar3 >> 8),1);
    }
  }
  return uVar3;
}


// ---- FUN_1000_af00 @ 1000:af00

uint __cdecl16near FUN_1000_af00(float param_1)

{
  float fVar1;
  float *pfVar2;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  uint uVar3;
  undefined1 local_6 [4];
  
  pfVar2 = (float *)M007_GETVALUE(unaff_CS,local_6);
  fVar1 = *pfVar2;
  uVar3 = (uint)(fVar1 < param_1) << 8 | (uint)(NAN(fVar1) || NAN(param_1)) << 10 |
          (uint)(fVar1 == param_1) << 0xe;
  if (fVar1 < param_1 || (fVar1 == param_1) != 0) {
    pfVar2 = (float *)M007_GETVALUE(0x1018,local_6);
    fVar1 = *pfVar2;
    uVar3 = (uint)(fVar1 < param_1) << 8 | (uint)(NAN(fVar1) || NAN(param_1)) << 10 |
            (uint)(fVar1 == param_1) << 0xe;
    if (fVar1 >= param_1) {
      return CONCAT11((char)(uVar3 >> 8),1);
    }
  }
  return uVar3;
}


// ---- FUN_1000_af4a @ 1000:af4a

uint __cdecl16near FUN_1000_af4a(float param_1)

{
  float fVar1;
  float *pfVar2;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  uint uVar3;
  undefined1 local_6 [4];
  
  pfVar2 = (float *)M007_GETVALUE(unaff_CS,local_6);
  fVar1 = *pfVar2;
  uVar3 = (uint)(fVar1 < param_1) << 8 | (uint)(NAN(fVar1) || NAN(param_1)) << 10 |
          (uint)(fVar1 == param_1) << 0xe;
  if (fVar1 < param_1 || (fVar1 == param_1) != 0) {
    pfVar2 = (float *)M007_GETVALUE(0x1018,local_6);
    fVar1 = *pfVar2;
    uVar3 = (uint)(fVar1 < param_1) << 8 | (uint)(NAN(fVar1) || NAN(param_1)) << 10 |
            (uint)(fVar1 == param_1) << 0xe;
    if (fVar1 >= param_1) {
      return CONCAT11((char)(uVar3 >> 8),1);
    }
  }
  return uVar3;
}


// ---- FUN_1000_af94 @ 1000:af94

uint __cdecl16near FUN_1000_af94(float param_1)

{
  float fVar1;
  float *pfVar2;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  uint uVar3;
  undefined1 local_6 [4];
  
  pfVar2 = (float *)M007_GETVALUE(unaff_CS,local_6);
  fVar1 = *pfVar2;
  uVar3 = (uint)(fVar1 < param_1) << 8 | (uint)(NAN(fVar1) || NAN(param_1)) << 10 |
          (uint)(fVar1 == param_1) << 0xe;
  if (fVar1 < param_1 || (fVar1 == param_1) != 0) {
    pfVar2 = (float *)M007_GETVALUE(0x1018,local_6);
    fVar1 = *pfVar2;
    uVar3 = (uint)(fVar1 < param_1) << 8 | (uint)(NAN(fVar1) || NAN(param_1)) << 10 |
            (uint)(fVar1 == param_1) << 0xe;
    if (fVar1 >= param_1) {
      return CONCAT11((char)(uVar3 >> 8),1);
    }
  }
  return uVar3;
}


// ---- FUN_1000_afde @ 1000:afde

void __cdecl16near FUN_1000_afde(undefined2 param_1,undefined2 param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = 0x31;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 0) {
    FUN_1000_b0e4(param_1,param_2,uVar2);
  }
  else if (iVar1 == 1) {
    FUN_1000_b028(param_1,param_2);
  }
  else if (iVar1 == 2) {
    FUN_1000_b20a(param_1,param_2);
  }
  else {
    if (iVar1 != 3) {
      return;
    }
    FUN_1000_b32e(param_1,param_2);
  }
  return;
}


// ---- FUN_1000_b028 @ 1000:b028

/* WARNING: Removing unreachable block (ram,0x1000b086) */
/* WARNING: Removing unreachable block (ram,0x1000b0af) */

undefined2 __cdecl16near FUN_1000_b028(undefined2 *param_1)

{
  long lVar1;
  undefined2 *puVar2;
  undefined2 unaff_CS;
  long lVar3;
  long lVar4;
  undefined2 uVar5;
  undefined1 local_1a [4];
  undefined1 local_16 [4];
  undefined1 local_12 [4];
  undefined1 local_e [4];
  undefined4 local_a;
  undefined4 local_6;
  
  uVar5 = 0x94;
  M007_GETVALUE(unaff_CS,local_e);
  local_6 = FUN_1000_0264(uVar5);
  uVar5 = 0x95;
  M007_GETVALUE(0x1018,local_12);
  local_a = FUN_1000_0264(uVar5);
  uVar5 = 0x8e;
  M007_GETVALUE(0x1018,local_16);
  lVar3 = FUN_1000_0264(uVar5);
  local_6 = local_6 + 1;
  lVar1 = local_a;
  lVar4 = local_6;
  if (lVar3 < local_6) {
    uVar5 = 0x8f;
    M007_GETVALUE(0x1018,local_1a);
    lVar4 = FUN_1000_0264(uVar5);
    lVar1 = local_a + 1;
    if (lVar4 < lVar1) {
      return 1;
    }
    lVar4 = 1;
  }
  local_6._2_2_ = (undefined2)((ulong)lVar4 >> 0x10);
  local_6._0_2_ = (undefined2)lVar4;
  local_a._2_2_ = (undefined2)((ulong)lVar1 >> 0x10);
  local_a._0_2_ = (undefined2)lVar1;
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  puVar2 = (undefined2 *)param_1;
  *param_1 = (undefined2)local_6;
  puVar2[1] = local_6._2_2_;
  puVar2[2] = (undefined2)local_a;
  puVar2[3] = local_a._2_2_;
  return 0;
}


// ---- FUN_1000_b0e4 @ 1000:b0e4

/* WARNING: Removing unreachable block (ram,0x1000b19f) */
/* WARNING: Removing unreachable block (ram,0x1000b166) */
/* WARNING: Removing unreachable block (ram,0x1000b1c8) */

uint __cdecl16near FUN_1000_b0e4(undefined2 *param_1)

{
  undefined1 uVar1;
  undefined2 *puVar2;
  undefined2 unaff_CS;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined2 uVar7;
  undefined1 local_16 [4];
  undefined1 local_12 [4];
  undefined1 local_e [4];
  undefined4 local_a;
  undefined4 local_6;
  
  uVar7 = 0x94;
  M007_GETVALUE(unaff_CS,local_e);
  local_6 = FUN_1000_0264(uVar7);
  uVar7 = 0x95;
  M007_GETVALUE(0x1018,local_12);
  uVar4 = FUN_1000_0264(uVar7);
  if ((uVar4 & 1) == 0) {
    bVar3 = (int)local_6 == 0;
    local_6._0_2_ = (int)local_6 + -1;
    local_6._2_2_ = local_6._2_2_ - (uint)bVar3;
    lVar5 = CONCAT22(local_6._2_2_,(int)local_6);
    if ((local_6._2_2_ < 1) &&
       ((local_6._2_2_ < 0 || (lVar5 = CONCAT22(local_6._2_2_,(int)local_6), (int)local_6 == 0)))) {
      local_a = uVar4 + 1;
      uVar7 = 0x8f;
      M007_GETVALUE(0x1018,local_16);
      lVar5 = FUN_1000_0264(uVar7);
      uVar1 = (undefined1)((ulong)lVar5 >> 8);
      if (lVar5 < (long)local_a) {
LAB_1000_b16b:
        return CONCAT11(uVar1,1);
      }
      uVar4 = local_a;
      lVar5 = 1;
    }
  }
  else {
    uVar7 = 0x8e;
    local_a = uVar4;
    M007_GETVALUE(0x1018,local_16);
    lVar6 = FUN_1000_0264(uVar7);
    local_6 = local_6 + 1;
    uVar4 = local_a;
    lVar5 = local_6;
    if (lVar6 < local_6) {
      uVar7 = 0x8f;
      M007_GETVALUE(0x1018,local_12);
      lVar5 = FUN_1000_0264(uVar7);
      uVar1 = (undefined1)((ulong)lVar5 >> 8);
      if (lVar5 < (long)(local_a + 1)) goto LAB_1000_b16b;
      uVar7 = 0x8e;
      local_a = local_a + 1;
      M007_GETVALUE(0x1018,local_16);
      lVar5 = FUN_1000_0264(uVar7);
      uVar4 = local_a;
    }
  }
  local_6._2_2_ = (int)((ulong)lVar5 >> 0x10);
  local_6._0_2_ = (int)lVar5;
  local_a._2_2_ = (undefined2)(uVar4 >> 0x10);
  local_a._0_2_ = (uint)uVar4;
  uVar7 = (undefined2)((ulong)param_1 >> 0x10);
  puVar2 = (undefined2 *)param_1;
  *param_1 = (int)local_6;
  puVar2[1] = local_6._2_2_;
  puVar2[2] = (uint)local_a;
  puVar2[3] = local_a._2_2_;
  return (uint)local_a & 0xff00;
}


// ---- FUN_1000_b20a @ 1000:b20a

/* WARNING: Removing unreachable block (ram,0x1000b2c3) */
/* WARNING: Removing unreachable block (ram,0x1000b28a) */
/* WARNING: Removing unreachable block (ram,0x1000b2ec) */

uint __cdecl16near FUN_1000_b20a(undefined2 *param_1)

{
  ulong uVar1;
  int iVar2;
  undefined1 uVar3;
  undefined2 *puVar4;
  undefined2 unaff_CS;
  long lVar5;
  long lVar6;
  undefined2 uVar7;
  undefined1 local_16 [4];
  undefined1 local_12 [4];
  undefined1 local_e [4];
  undefined4 local_a;
  undefined4 local_6;
  
  uVar7 = 0x94;
  M007_GETVALUE(unaff_CS,local_e);
  local_6 = FUN_1000_0264(uVar7);
  uVar7 = 0x95;
  M007_GETVALUE(0x1018,local_12);
  local_a = FUN_1000_0264(uVar7);
  uVar1 = (ulong)local_a >> 0x10;
  iVar2 = (int)local_a;
  if ((local_6 & 1) == 0) {
    local_a._0_2_ = iVar2 + -1;
    local_a._2_2_ = (int)uVar1 - (uint)(iVar2 == 0);
    lVar5 = CONCAT22(local_a._2_2_,(uint)local_a);
    uVar1 = local_6;
    if ((local_a._2_2_ < 1) &&
       ((local_a._2_2_ < 0 || (lVar5 = CONCAT22(local_a._2_2_,(uint)local_a), (uint)local_a == 0))))
    {
      uVar7 = 0x8e;
      M007_GETVALUE(0x1018,local_16);
      lVar5 = FUN_1000_0264(uVar7);
      uVar3 = (undefined1)((ulong)lVar5 >> 8);
      if (lVar5 < (long)(local_6 + 1)) {
LAB_1000_b28f:
        return CONCAT11(uVar3,1);
      }
      uVar1 = local_6 + 1;
      lVar5 = 1;
    }
  }
  else {
    uVar7 = 0x8f;
    M007_GETVALUE(0x1018,local_16);
    lVar6 = FUN_1000_0264(uVar7);
    local_a = local_a + 1;
    uVar1 = local_6;
    lVar5 = local_a;
    if (lVar6 < local_a) {
      uVar7 = 0x8e;
      M007_GETVALUE(0x1018,local_12);
      lVar5 = FUN_1000_0264(uVar7);
      uVar3 = (undefined1)((ulong)lVar5 >> 8);
      if (lVar5 < (long)(local_6 + 1)) goto LAB_1000_b28f;
      uVar7 = 0x8f;
      local_6 = local_6 + 1;
      M007_GETVALUE(0x1018,local_16);
      lVar5 = FUN_1000_0264(uVar7);
      uVar1 = local_6;
    }
  }
  local_a._2_2_ = (int)((ulong)lVar5 >> 0x10);
  local_a._0_2_ = (uint)lVar5;
  local_6._2_2_ = (undefined2)(uVar1 >> 0x10);
  local_6._0_2_ = (undefined2)uVar1;
  uVar7 = (undefined2)((ulong)param_1 >> 0x10);
  puVar4 = (undefined2 *)param_1;
  *param_1 = (undefined2)local_6;
  puVar4[1] = local_6._2_2_;
  puVar4[2] = (uint)local_a;
  puVar4[3] = local_a._2_2_;
  return (uint)local_a & 0xff00;
}


// ---- FUN_1000_b32e @ 1000:b32e

/* WARNING: Removing unreachable block (ram,0x1000b38c) */
/* WARNING: Removing unreachable block (ram,0x1000b3b5) */

undefined2 __cdecl16near FUN_1000_b32e(undefined2 *param_1)

{
  long lVar1;
  undefined2 *puVar2;
  undefined2 unaff_CS;
  long lVar3;
  long lVar4;
  undefined2 uVar5;
  undefined1 local_1a [4];
  undefined1 local_16 [4];
  undefined1 local_12 [4];
  undefined1 local_e [4];
  undefined4 local_a;
  undefined4 local_6;
  
  uVar5 = 0x94;
  M007_GETVALUE(unaff_CS,local_e);
  local_6 = FUN_1000_0264(uVar5);
  uVar5 = 0x95;
  M007_GETVALUE(0x1018,local_12);
  local_a = FUN_1000_0264(uVar5);
  uVar5 = 0x8f;
  M007_GETVALUE(0x1018,local_16);
  lVar3 = FUN_1000_0264(uVar5);
  local_a = local_a + 1;
  lVar1 = local_6;
  lVar4 = local_a;
  if (lVar3 < local_a) {
    uVar5 = 0x8e;
    M007_GETVALUE(0x1018,local_1a);
    lVar4 = FUN_1000_0264(uVar5);
    lVar1 = local_6 + 1;
    if (lVar4 < lVar1) {
      return 1;
    }
    lVar4 = 1;
  }
  local_a._2_2_ = (undefined2)((ulong)lVar4 >> 0x10);
  local_a._0_2_ = (undefined2)lVar4;
  local_6._2_2_ = (undefined2)((ulong)lVar1 >> 0x10);
  local_6._0_2_ = (undefined2)lVar1;
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  puVar2 = (undefined2 *)param_1;
  *param_1 = (undefined2)local_6;
  puVar2[1] = local_6._2_2_;
  puVar2[2] = (undefined2)local_a;
  puVar2[3] = local_a._2_2_;
  return 0;
}


// ---- FUN_1000_b3ea @ 1000:b3ea

void __cdecl16near FUN_1000_b3ea(float *param_1)

{
  float *pfVar1;
  float *pfVar2;
  undefined2 uVar3;
  undefined2 unaff_CS;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 unaff_SS;
  undefined1 local_a [4];
  undefined1 local_6 [4];
  
  pfVar2 = (float *)param_1;
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  if ((DAT_1010_0171 == '\x01') || (uVar4 = unaff_CS, DAT_1010_0172 == '\x01')) {
    uVar4 = 0x1018;
    M007_PUTXY(unaff_CS,*(undefined2 *)(pfVar2 + 1),*(undefined2 *)((int)pfVar2 + 6),
               *(undefined2 *)param_1,*(undefined2 *)((int)pfVar2 + 2));
  }
  if (DAT_1010_0171 == '\x01') {
    pfVar1 = (float *)M007_GETHIGH(uVar4,local_6);
    M007_PUTHIGH(0x1018,*pfVar1 - *param_1);
    pfVar1 = (float *)M007_GETLOW(0x1018,local_a);
    uVar4 = 0x1018;
    M007_PUTLOW(0x1018,*pfVar1 - *param_1);
  }
  if (DAT_1010_0172 == '\x01') {
    pfVar1 = (float *)M007_GETHIGH(uVar4,local_a);
    M007_PUTHIGH(0x1018,*pfVar1 - pfVar2[1]);
    pfVar1 = (float *)M007_GETLOW(0x1018,local_6);
    uVar4 = 0x1018;
    M007_PUTLOW(0x1018,*pfVar1 - pfVar2[1]);
  }
  if (DAT_1010_0175 == '\x01') {
    M007_PUTVALUE(uVar4,*(undefined2 *)(pfVar2 + 2),*(undefined2 *)((int)pfVar2 + 10));
    pfVar1 = (float *)M007_GETHIGH(0x1018,local_a);
    M007_PUTHIGH(0x1018,*pfVar1 - pfVar2[2]);
    pfVar1 = (float *)M007_GETLOW(0x1018,local_6);
    uVar4 = 0x1018;
    M007_PUTLOW(0x1018,*pfVar1 - pfVar2[2]);
  }
  if (DAT_1010_0174 == '\x01') {
    M007_PUTVALUE(uVar4,*(undefined2 *)(pfVar2 + 3),*(undefined2 *)((int)pfVar2 + 0xe));
    pfVar1 = (float *)M007_GETHIGH(0x1018,local_a);
    M007_PUTHIGH(0x1018,*pfVar1 - pfVar2[3]);
    pfVar1 = (float *)M007_GETLOW(0x1018,local_6);
    uVar4 = 0x1018;
    M007_PUTLOW(0x1018,*pfVar1 - pfVar2[3]);
  }
  uVar5 = uVar4;
  if (DAT_1010_0173 == '\x01') {
    uVar5 = 0x1018;
    M007_PUTVALUE(uVar4,*(undefined2 *)(pfVar2 + 4),*(undefined2 *)((int)pfVar2 + 0x12));
  }
  if (DAT_1010_0176 == '\x01') {
    M007_PUTVALUE(uVar5,*(undefined2 *)(pfVar2 + 5),*(undefined2 *)((int)pfVar2 + 0x16));
    pfVar1 = (float *)M007_GETHIGH(0x1018,local_a);
    M007_PUTHIGH(0x1018,*pfVar1 - pfVar2[5]);
    pfVar1 = (float *)M007_GETLOW(0x1018,local_6);
    M007_PUTLOW(0x1018,*pfVar1 - pfVar2[5]);
  }
  return;
}


// ---- FUN_1000_b66a @ 1000:b66a

void __cdecl16near FUN_1000_b66a(char *param_1)

{
  char *pcVar1;
  undefined2 uVar2;
  undefined2 unaff_CS;
  undefined2 uVar3;
  undefined2 uVar4;
  
  uVar3 = unaff_CS;
  if (DAT_1010_0171 == '\x01') {
    uVar3 = 0x1018;
    M007_PUTSTATE(unaff_CS,(int)*param_1);
  }
  pcVar1 = (char *)param_1;
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  uVar4 = uVar3;
  if (DAT_1010_0172 == '\x01') {
    uVar4 = 0x1018;
    M007_PUTSTATE(uVar3,(int)pcVar1[1]);
  }
  uVar3 = uVar4;
  if (DAT_1010_0175 == '\x01') {
    uVar3 = 0x1018;
    M007_PUTSTATE(uVar4,(int)pcVar1[2]);
  }
  uVar4 = uVar3;
  if (DAT_1010_0174 == '\x01') {
    uVar4 = 0x1018;
    M007_PUTSTATE(uVar3,(int)pcVar1[3]);
  }
  uVar3 = uVar4;
  if (DAT_1010_0173 == '\x01') {
    uVar3 = 0x1018;
    M007_PUTSTATE(uVar4,(int)pcVar1[4]);
  }
  if (DAT_1010_0176 == '\x01') {
    M007_PUTSTATE(uVar3,(int)pcVar1[5]);
  }
  return;
}


// ---- FUN_1000_b6fc @ 1000:b6fc

void __cdecl16near FUN_1000_b6fc(char *param_1)

{
  char *pcVar1;
  undefined2 uVar2;
  undefined2 unaff_CS;
  undefined1 local_4;
  
  local_4 = 1;
  if ((DAT_1010_0171 == '\x01') && (*param_1 == '\0')) {
    local_4 = 0;
  }
  pcVar1 = (char *)param_1;
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  if ((DAT_1010_0172 == '\x01') && (pcVar1[1] == '\0')) {
    local_4 = 0;
  }
  if ((DAT_1010_0175 == '\x01') && (pcVar1[2] == '\0')) {
    local_4 = 0;
  }
  if ((DAT_1010_0174 == '\x01') && (pcVar1[3] == '\0')) {
    local_4 = 0;
  }
  if ((DAT_1010_0173 == '\x01') && (pcVar1[4] == '\0')) {
    local_4 = 0;
  }
  if ((DAT_1010_0176 == '\x01') && (pcVar1[5] == '\0')) {
    local_4 = 0;
  }
  M007_PUTSTATE(unaff_CS,local_4);
  return;
}


// ---- FUN_1000_b790 @ 1000:b790

void __cdecl16near FUN_1000_b790(char *param_1)

{
  char cVar1;
  char *pcVar2;
  undefined2 unaff_CS;
  undefined2 uVar3;
  undefined2 uVar4;
  
  if (DAT_1010_0171 != '\x01') goto switchD_1000_b85a_default;
  unaff_CS = 0x1018;
  cVar1 = M007_GETSTATE();
  if (*param_1 == cVar1) goto switchD_1000_b85a_default;
  unaff_CS = 0x1018;
  M007_PUTSTATE(0x1018,(int)*param_1);
  uVar3 = 0x1000;
  switch(*param_1) {
  case '\0':
    M007_PUTLOW(0x1000,DAT_1010_0b6c,DAT_1010_0b6e);
    unaff_CS = 0x1018;
    M007_PUTHIGH(0x1018,DAT_1010_0b70,DAT_1010_0b72);
    goto switchD_1000_b85a_default;
  case '\x01':
    break;
  case '\x02':
    uVar3 = 0x1018;
    M007_PUTLOW(0x1000,DAT_1010_0b74,DAT_1010_0b76);
    break;
  case '\x03':
    uVar3 = 0x1018;
    M007_PUTLOW(0x1000,DAT_1010_0b74,DAT_1010_0b76);
    break;
  case '\x04':
    uVar3 = 0x1018;
    M007_PUTHIGH(0x1000,DAT_1010_0b74,DAT_1010_0b76);
    break;
  case '\x05':
    uVar3 = 0x1018;
    M007_PUTHIGH(0x1000,DAT_1010_0b74,DAT_1010_0b76);
    break;
  case '\x06':
    break;
  default:
    goto switchD_1000_b85a_default;
  }
  unaff_CS = 0x1018;
  UIF_LOG(uVar3,0x1800,0,0);
switchD_1000_b85a_default:
  pcVar2 = (char *)param_1;
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  if (DAT_1010_0172 != '\x01') goto switchD_1000_b937_default;
  cVar1 = M007_GETSTATE(unaff_CS,0x38);
  unaff_CS = 0x1018;
  if (pcVar2[1] == cVar1) goto switchD_1000_b937_default;
  M007_PUTSTATE(0x1018,(int)pcVar2[1]);
  uVar4 = 0x1000;
  unaff_CS = 0x1018;
  switch(pcVar2[1]) {
  case '\0':
    M007_PUTLOW(0x1000,DAT_1010_0b6c,DAT_1010_0b6e);
    M007_PUTHIGH(0x1018,DAT_1010_0b70,DAT_1010_0b72);
    unaff_CS = 0x1018;
    goto switchD_1000_b937_default;
  case '\x01':
    break;
  case '\x02':
    uVar4 = 0x1018;
    M007_PUTLOW(0x1000,DAT_1010_0b74,DAT_1010_0b76);
    break;
  case '\x03':
    uVar4 = 0x1018;
    M007_PUTLOW(0x1000,DAT_1010_0b74,DAT_1010_0b76);
    break;
  case '\x04':
    uVar4 = 0x1018;
    M007_PUTHIGH(0x1000,DAT_1010_0b74,DAT_1010_0b76);
    break;
  case '\x05':
    uVar4 = 0x1018;
    M007_PUTHIGH(0x1000,DAT_1010_0b74,DAT_1010_0b76);
    break;
  case '\x06':
    break;
  default:
    goto switchD_1000_b937_default;
  }
  UIF_LOG(uVar4,0x1800,0,0);
  unaff_CS = 0x1018;
switchD_1000_b937_default:
  if (DAT_1010_0175 != '\x01') goto switchD_1000_ba14_default;
  cVar1 = M007_GETSTATE(unaff_CS,0x39);
  unaff_CS = 0x1018;
  if (pcVar2[2] == cVar1) goto switchD_1000_ba14_default;
  M007_PUTSTATE(0x1018,(int)pcVar2[2]);
  uVar4 = 0x1000;
  unaff_CS = 0x1018;
  switch(pcVar2[2]) {
  case '\0':
    M007_PUTLOW(0x1000,DAT_1010_0b6c,DAT_1010_0b6e);
    M007_PUTHIGH(0x1018,DAT_1010_0b70,DAT_1010_0b72);
    unaff_CS = 0x1018;
    goto switchD_1000_ba14_default;
  case '\x01':
    break;
  case '\x02':
    uVar4 = 0x1018;
    M007_PUTLOW(0x1000,DAT_1010_0b74,DAT_1010_0b76);
    break;
  case '\x03':
    uVar4 = 0x1018;
    M007_PUTLOW(0x1000,DAT_1010_0b74,DAT_1010_0b76);
    break;
  case '\x04':
    uVar4 = 0x1018;
    M007_PUTHIGH(0x1000,DAT_1010_0b74,DAT_1010_0b76);
    break;
  case '\x05':
    uVar4 = 0x1018;
    M007_PUTHIGH(0x1000,DAT_1010_0b74,DAT_1010_0b76);
    break;
  case '\x06':
    break;
  default:
    goto switchD_1000_ba14_default;
  }
  UIF_LOG(uVar4,0x1800,0,0);
  unaff_CS = 0x1018;
switchD_1000_ba14_default:
  if (DAT_1010_0174 != '\x01') goto switchD_1000_baf3_default;
  cVar1 = M007_GETSTATE(unaff_CS,0xde);
  unaff_CS = 0x1018;
  if (pcVar2[3] == cVar1) goto switchD_1000_baf3_default;
  M007_PUTSTATE(0x1018,(int)pcVar2[3]);
  uVar4 = 0x1000;
  unaff_CS = 0x1018;
  switch(pcVar2[3]) {
  case '\0':
    M007_PUTLOW(0x1000,DAT_1010_0b6c,DAT_1010_0b6e);
    M007_PUTHIGH(0x1018,DAT_1010_0b70,DAT_1010_0b72);
    unaff_CS = 0x1018;
    goto switchD_1000_baf3_default;
  case '\x01':
    break;
  case '\x02':
    uVar4 = 0x1018;
    M007_PUTLOW(0x1000,DAT_1010_0b74,DAT_1010_0b76);
    break;
  case '\x03':
    uVar4 = 0x1018;
    M007_PUTLOW(0x1000,DAT_1010_0b74,DAT_1010_0b76);
    break;
  case '\x04':
    uVar4 = 0x1018;
    M007_PUTHIGH(0x1000,DAT_1010_0b74,DAT_1010_0b76);
    break;
  case '\x05':
    uVar4 = 0x1018;
    M007_PUTHIGH(0x1000,DAT_1010_0b74,DAT_1010_0b76);
    break;
  case '\x06':
    break;
  default:
    goto switchD_1000_baf3_default;
  }
  UIF_LOG(uVar4,0x1800,0,0);
  unaff_CS = 0x1018;
switchD_1000_baf3_default:
  if ((DAT_1010_0176 == '\x01') && (cVar1 = M007_GETSTATE(unaff_CS,0x123), pcVar2[5] != cVar1)) {
    M007_PUTSTATE(0x1018,(int)pcVar2[5]);
    cVar1 = pcVar2[5];
    if (cVar1 == '\0') {
      M007_PUTLOW(0x1018,DAT_1010_0b6c,DAT_1010_0b6e);
      M007_PUTHIGH(0x1018,DAT_1010_0b70,DAT_1010_0b72);
      return;
    }
    if (cVar1 != '\x01') {
      if (cVar1 == '\x03') {
        M007_PUTLOW(0x1018,DAT_1010_0b74,DAT_1010_0b76);
      }
      else if (cVar1 == '\x04') {
        M007_PUTHIGH(0x1018,DAT_1010_0b74,DAT_1010_0b76);
      }
      else if (cVar1 != '\x06') {
        return;
      }
    }
    UIF_LOG(0x1018,0x1800,0,0);
    return;
  }
  return;
}


// ---- FUN_1000_bbb2 @ 1000:bbb2

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x100033bf) overlaps instruction at (ram,0x100033be)
    */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Removing unreachable block (ram,0x100043cd) */
/* WARNING: Removing unreachable block (ram,0x100043d8) */
/* WARNING: Type propagation algorithm not settling */

int __cdecl16near FUN_1000_bbb2(undefined4 param_1)

{
  char *pcVar1;
  code *pcVar2;
  byte bVar3;
  undefined2 uVar4;
  undefined2 *puVar5;
  int iVar6;
  float *pfVar7;
  uint uVar8;
  int iVar9;
  byte in_CL;
  int *piVar10;
  undefined4 *unaff_SI;
  char *unaff_DI;
  undefined2 unaff_ES;
  undefined2 uVar11;
  undefined2 unaff_SS;
  longdouble in_ST1;
  float fStack_51c;
  float fStack_518;
  float fStack_514;
  float fStack_510;
  undefined4 uStack_40c;
  undefined4 uStack_408;
  undefined4 uStack_404;
  undefined4 uStack_400;
  undefined1 auStack_2fc [130];
  undefined2 uStack_27a;
  undefined2 uStack_278;
  undefined2 uStack_276;
  undefined2 uStack_274;
  undefined2 uStack_272;
  undefined2 uStack_270;
  undefined2 uStack_26e;
  undefined2 uStack_26c;
  undefined2 uStack_26a;
  undefined2 uStack_268;
  undefined2 uStack_266;
  undefined2 uStack_264;
  undefined2 uStack_262;
  undefined2 uStack_260;
  undefined2 uStack_25e;
  undefined2 uStack_25c;
  undefined2 uStack_25a;
  undefined2 uStack_258;
  undefined2 uStack_256;
  undefined2 uStack_254;
  undefined2 uStack_252;
  undefined2 uStack_250;
  undefined2 uStack_24e;
  undefined2 uStack_24c;
  undefined2 uStack_24a;
  undefined2 uStack_248;
  undefined2 uStack_246;
  undefined2 uStack_244;
  undefined2 uStack_242;
  undefined2 uStack_240;
  undefined2 uStack_23e;
  undefined2 uStack_23c;
  undefined2 uStack_23a;
  undefined2 uStack_238;
  undefined2 uStack_236;
  undefined2 uStack_234;
  undefined2 uStack_232;
  undefined2 uStack_230;
  undefined2 uStack_22e;
  undefined2 uStack_22c;
  undefined2 uStack_22a;
  undefined2 uStack_228;
  undefined2 uStack_226;
  undefined2 uStack_224;
  undefined2 uStack_222;
  undefined2 uStack_220;
  undefined2 uStack_21e;
  undefined2 uStack_21c;
  undefined2 uStack_21a;
  undefined2 uStack_218;
  undefined2 uStack_216;
  undefined2 uStack_214;
  undefined2 uStack_212;
  undefined2 uStack_210;
  undefined2 uStack_20e;
  undefined2 uStack_20c;
  undefined2 uStack_20a;
  undefined2 uStack_208;
  undefined2 uStack_206;
  undefined2 uStack_204;
  undefined2 uStack_202;
  undefined2 uStack_200;
  undefined2 uStack_1fe;
  undefined2 uStack_1fc;
  uint uStack_1fa;
  undefined2 uStack_1f8;
  undefined2 uStack_1f6;
  undefined2 uStack_1f4;
  undefined2 uStack_1f2;
  undefined2 uStack_1f0;
  undefined2 uStack_1ee;
  undefined2 uStack_1ec;
  undefined2 uStack_1ea;
  undefined2 uStack_1e8;
  undefined2 uStack_1e6;
  undefined2 uStack_1e4;
  undefined2 uStack_1e2;
  undefined2 uStack_1e0;
  undefined2 uStack_1de;
  undefined2 uStack_1dc;
  undefined2 uStack_1da;
  undefined2 uStack_1d8;
  undefined2 uStack_1d6;
  undefined2 uStack_1d4;
  undefined2 uStack_1d2;
  undefined2 uStack_1d0;
  undefined2 uStack_1ce;
  undefined2 uStack_1cc;
  undefined2 uStack_1ca;
  undefined2 uStack_1c8;
  undefined2 uStack_1c6;
  undefined2 uStack_1c4;
  undefined2 uStack_1c2;
  undefined2 uStack_1c0;
  undefined2 uStack_1be;
  undefined2 uStack_1bc;
  undefined2 uStack_1ba;
  undefined2 uStack_1b8;
  undefined2 uStack_1b6;
  float *pfStack_1b4;
  undefined2 uStack_1b2;
  undefined2 uStack_1b0;
  float *pfStack_1ae;
  undefined2 uStack_1ac;
  undefined2 uStack_1aa;
  undefined2 uStack_1a8;
  undefined2 uStack_1a6;
  float *pfStack_1a4;
  int local_162;
  int local_160;
  uint local_15e;
  uint local_15c;
  int aiStack_7f [58];
  undefined2 uStack_a;
  undefined2 uStack_8;
  int iStack_6;
  uint local_4;
  
  local_4 = local_4 & 0xff00;
  if (DAT_1010_017e == 0) {
    return 0;
  }
  if (DAT_1010_1114 == 0) {
    M007_PUTSTATE();
    DLL_SET_TILT_AXIS();
LAB_1000_bc0d:
    FUN_1000_9bae();
  }
  else {
    M007_PUTSTATE();
    DLL_SET_TILT_AXIS();
    iVar6 = M007_GETSTATE();
    if ((iVar6 == 0) && (iVar6 = M007_GETSTATE(), iVar6 == 1)) goto LAB_1000_bc0d;
  }
  local_162 = 5;
  do {
    pfVar7 = (float *)(local_162 * 2);
    local_162 = local_162 + -1;
  } while (-1 < local_162);
  iVar6 = M007_GETSTATE();
  local_15e = (uint)(iVar6 == 1);
  local_15e = local_15e * 2;
  iVar6 = M007_GETSTATE();
  if (iVar6 == 1) {
    local_15e = local_15e + 1;
  }
  local_15e = local_15e * 2;
  iVar6 = M007_GETSTATE();
  if (iVar6 == 1) {
    local_15e = local_15e + 1;
  }
  local_15e = local_15e * 2;
  iVar6 = M007_GETSTATE();
  if (iVar6 == 1) {
    local_15e = local_15e + 1;
  }
  local_15e = local_15e * 2;
  iVar6 = M007_GETSTATE();
  if (iVar6 == 1) {
    local_15e = local_15e + 1;
  }
  local_15e = local_15e * 2;
  iVar6 = M007_GETSTATE();
  if (iVar6 == 1) {
    local_15e = local_15e + 1;
  }
  local_15c = local_15e;
  if (((local_15e & 1) != 0) || ((local_15e & 2) != 0)) {
    local_15c = local_15e | 3;
  }
  if (2 < DAT_1010_0040) goto switchD_1000_bd00_caseD_0;
  if ((local_15c - 3 & 3) == 0) {
    pfVar7 = (float *)(local_15c - 3 >> 1);
    switch(pfVar7) {
    case (float *)0x0:
    case (float *)0x2:
    case (float *)0x6:
    case (float *)0xe:
    case (float *)0x1e:
      break;
    case (float *)0x3:
    case (float *)0x7:
    case (float *)0xf:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    default:
      goto switchD_1000_bd00_caseD_4;
    case (float *)0x5:
    case (float *)0xd:
    case (float *)0x1d:
    case (float *)0x1:
      if (!SBORROW2((int)pfVar7,0x1e)) {
        bVar3 = in(0x2d);
        bVar3 = bVar3 ^ 0x4f;
        pcVar2 = (code *)swi(4);
        if (SBORROW1(bVar3,*unaff_DI)) {
          bVar3 = (*pcVar2)();
        }
        piVar10 = (int *)(*(int *)(unaff_DI + 1) * -0x71);
        uVar11 = *piVar10;
        do {
        } while ('[' < (char)bVar3);
        *piVar10 = 0x25fc;
        uVar4 = func_0x100044c2();
        out(0x88,uVar4);
        *piVar10 = (int)(unaff_DI + 1);
        piVar10[-1] = uVar11;
        *(uint *)(&stack0xfffe + (int)unaff_SI) = *(uint *)(&stack0xfffe + (int)unaff_SI) & 0x18;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      (&stack0xfffe)[(int)unaff_DI] = (&stack0xfffe)[(int)unaff_DI] << (in_CL & 0x1f);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (float *)0x9:
      (&stack0x9bd6)[(int)unaff_DI] =
           (&stack0x9bd6)[(int)unaff_DI] + in_CL + (pfVar7 < (float *)0x1e);
      uVar11 = (undefined2)((ulong)param_1 >> 0x10);
      iVar6 = (int)param_1;
      if (*pfVar7 < *(float *)(iVar6 + 4)) {
        M007_GETVALUE();
        M007_PUTXY();
      }
      iVar9 = M007_PUTLOW();
      if (DAT_1010_0175 == '\x01') {
        M007_PUTVALUE();
        pfVar7 = (float *)M007_GETVALUE();
        if (*pfVar7 < *(float *)(iVar6 + 8)) {
          M007_PUTVALUE();
        }
        M007_PUTLOW();
        pfVar7 = (float *)M007_GETVALUE();
        if (*pfVar7 < *(float *)(iVar6 + 8)) {
          M007_PUTVALUE();
        }
        iVar9 = M007_PUTLOW();
      }
      if (DAT_1010_0174 == '\x01') {
        M007_PUTVALUE();
        pfVar7 = (float *)M007_GETVALUE();
        if (*pfVar7 < *(float *)(iVar6 + 0xc)) {
          M007_PUTVALUE();
        }
        M007_PUTLOW();
        pfVar7 = (float *)M007_GETVALUE();
        if (*pfVar7 < *(float *)(iVar6 + 0xc)) {
          M007_PUTVALUE();
        }
        iVar9 = M007_PUTLOW();
      }
      if (DAT_1010_0176 == '\x01') {
        M007_PUTVALUE();
        pfVar7 = (float *)M007_GETVALUE();
        if (*pfVar7 < *(float *)(iVar6 + 0x14)) {
          M007_PUTVALUE();
        }
        iVar9 = M007_PUTLOW();
      }
      return iVar9;
    case (float *)0xa:
      if ((((DAT_1010_1110 != 3) && (DAT_1010_1110 != 6)) && (DAT_1010_1110 != 0)) &&
         (DAT_1010_1110 < 7)) {
        local_15c = 7;
      }
      break;
    case (float *)0xb:
    case (float *)0x11:
    case (float *)0x13:
    case (float *)0x15:
    case (float *)0x17:
    case (float *)0x19:
    case (float *)0x1b:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
switchD_1000_bd00_caseD_4:
    local_15c = 3;
  }
switchD_1000_bd00_caseD_0:
  local_15c = local_15c - 3;
  if ((local_15c & 3) != 0) {
switchD_1000_bd6a_caseD_0:
    local_160 = 0;
    goto LAB_1000_bd8f;
  }
  uVar8 = local_15c >> 1;
  switch(uVar8) {
  default:
    goto switchD_1000_bd6a_caseD_0;
  case 1:
    *(undefined2 *)(uVar8 + (int)unaff_SI) = 0x153;
    M007_PUTLOW();
    M007_PUTLOW();
    M007_PUTLOW();
    M007_PUTLOW();
    M007_PUTLOW();
    M007_PUTLOW();
    M007_PUTLOW();
    M007_PUTHIGH();
    M007_PUTHIGH();
    M007_PUTHIGH();
    M007_PUTHIGH();
    M007_PUTHIGH();
    M007_PUTHIGH();
    M007_PUTHIGH();
    M007_PUTHIGH();
    M007_PUTHIGH();
    M007_PUTHIGH();
    M007_PUTLOW();
    M007_PUTHIGH();
    M007_PUTVALUE();
    pfStack_1a4 = (float *)0x2d0c;
    M007_PUTLOW();
    pfStack_1a4 = (float *)0x1018;
    uStack_1a6 = 0x2d1c;
    M007_PUTHIGH();
    pfStack_1a4 = (float *)DAT_1010_0a54;
    uStack_1a6 = 0x1018;
    uStack_1a8 = 0x2d2c;
    M007_PUTLOW();
    pfStack_1a4 = (float *)DAT_1010_0a5a;
    uStack_1a6 = DAT_1010_0a58;
    uStack_1a8 = 0x1018;
    uStack_1aa = 0x2d3c;
    M007_PUTHIGH();
    pfStack_1a4 = (float *)0xb3;
    uStack_1a6 = DAT_1010_0a56;
    uStack_1a8 = DAT_1010_0a54;
    uStack_1aa = 0x1018;
    uStack_1ac = 0x2d4c;
    M007_PUTLOW();
    uStack_1a6 = 0xb3;
    uStack_1a8 = DAT_1010_0a5a;
    uStack_1aa = DAT_1010_0a58;
    uStack_1ac = 0x1018;
    pfStack_1ae = (float *)0x2d5c;
    M007_PUTHIGH();
    uStack_1a8 = 0x11f;
    uStack_1aa = DAT_1010_0a56;
    uStack_1ac = DAT_1010_0a54;
    pfStack_1ae = (float *)0x1018;
    uStack_1b0 = 0x2d6c;
    M007_PUTLOW();
    uStack_1aa = 0x11f;
    uStack_1ac = DAT_1010_0a5a;
    pfStack_1ae = (float *)DAT_1010_0a58;
    uStack_1b0 = 0x1018;
    uStack_1b2 = 0x2d7c;
    M007_PUTHIGH();
    uStack_1ac = 0x11e;
    pfStack_1ae = (float *)DAT_1010_0a56;
    uStack_1b0 = DAT_1010_0a54;
    uStack_1b2 = 0x1018;
    pfStack_1b4 = (float *)0x2d8c;
    M007_PUTLOW();
    pfStack_1ae = (float *)0x11e;
    uStack_1b0 = DAT_1010_0a5a;
    uStack_1b2 = DAT_1010_0a58;
    pfStack_1b4 = (float *)0x1018;
    uStack_1b6 = 0x2d9c;
    M007_PUTHIGH();
    uStack_1b0 = 0x169;
    uStack_1b2 = DAT_1010_0a56;
    pfStack_1b4 = (float *)DAT_1010_0a54;
    uStack_1b6 = 0x1018;
    uStack_1b8 = 0x2dac;
    M007_PUTLOW();
    uStack_1b2 = 0x169;
    pfStack_1b4 = (float *)DAT_1010_0a5a;
    uStack_1b6 = DAT_1010_0a58;
    uStack_1b8 = 0x1018;
    uStack_1ba = 0x2dbc;
    M007_PUTHIGH();
    pfStack_1b4 = (float *)0xa8;
    uStack_1b6 = DAT_1010_0a42;
    uStack_1b8 = DAT_1010_0a40;
    uStack_1ba = 0x1018;
    uStack_1bc = 0x2dcc;
    M007_PUTLOW();
    uStack_1b6 = 0xa8;
    uStack_1b8 = DAT_1010_0a5e;
    uStack_1ba = DAT_1010_0a5c;
    uStack_1bc = 0x1018;
    uStack_1be = 0x2ddc;
    M007_PUTHIGH();
    uStack_1b8 = 0xa9;
    uStack_1ba = DAT_1010_0a42;
    uStack_1bc = DAT_1010_0a40;
    uStack_1be = 0x1018;
    uStack_1c0 = 0x2dec;
    M007_PUTLOW();
    uStack_1ba = 0xa9;
    uStack_1bc = DAT_1010_0a5e;
    uStack_1be = DAT_1010_0a5c;
    uStack_1c0 = 0x1018;
    uStack_1c2 = 0x2dfc;
    M007_PUTHIGH();
    uStack_1bc = 0xaa;
    uStack_1be = DAT_1010_0a42;
    uStack_1c0 = DAT_1010_0a40;
    uStack_1c2 = 0x1018;
    uStack_1c4 = 0x2e0c;
    M007_PUTLOW();
    uStack_1be = 0xaa;
    uStack_1c0 = DAT_1010_0a5e;
    uStack_1c2 = DAT_1010_0a5c;
    uStack_1c4 = 0x1018;
    uStack_1c6 = 0x2e1c;
    M007_PUTHIGH();
    uStack_1c0 = 0x119;
    uStack_1c2 = DAT_1010_0a42;
    uStack_1c4 = DAT_1010_0a40;
    uStack_1c6 = 0x1018;
    uStack_1c8 = 0x2e2c;
    M007_PUTLOW();
    uStack_1c2 = 0x119;
    uStack_1c4 = DAT_1010_0a5e;
    uStack_1c6 = DAT_1010_0a5c;
    uStack_1c8 = 0x1018;
    uStack_1ca = 0x2e3c;
    M007_PUTHIGH();
    uStack_1c4 = 0x118;
    uStack_1c6 = DAT_1010_0a42;
    uStack_1c8 = DAT_1010_0a40;
    uStack_1ca = 0x1018;
    uStack_1cc = 0x2e4c;
    M007_PUTLOW();
    uStack_1c6 = 0x118;
    uStack_1c8 = DAT_1010_0a5e;
    uStack_1ca = DAT_1010_0a5c;
    uStack_1cc = 0x1018;
    uStack_1ce = 0x2e5c;
    M007_PUTHIGH();
    uStack_1c8 = 0x166;
    uStack_1ca = DAT_1010_0a42;
    uStack_1cc = DAT_1010_0a40;
    uStack_1ce = 0x1018;
    uStack_1d0 = 0x2e6c;
    M007_PUTLOW();
    uStack_1ca = 0x166;
    uStack_1cc = DAT_1010_0a5e;
    uStack_1ce = DAT_1010_0a5c;
    uStack_1d0 = 0x1018;
    uStack_1d2 = 0x2e7c;
    M007_PUTHIGH();
    uStack_1cc = 0xae;
    uStack_1ce = DAT_1010_0a42;
    uStack_1d0 = DAT_1010_0a40;
    uStack_1d2 = 0x1018;
    uStack_1d4 = 0x2e8c;
    M007_PUTLOW();
    uStack_1ce = 0xae;
    uStack_1d0 = DAT_1010_0a5e;
    uStack_1d2 = DAT_1010_0a5c;
    uStack_1d4 = 0x1018;
    uStack_1d6 = 0x2e9c;
    M007_PUTHIGH();
    uStack_1d0 = 0xaf;
    uStack_1d2 = DAT_1010_0a42;
    uStack_1d4 = DAT_1010_0a40;
    uStack_1d6 = 0x1018;
    uStack_1d8 = 0x2eac;
    M007_PUTLOW();
    uStack_1d2 = 0xaf;
    uStack_1d4 = DAT_1010_0a5e;
    uStack_1d6 = DAT_1010_0a5c;
    uStack_1d8 = 0x1018;
    uStack_1da = 0x2ebc;
    M007_PUTHIGH();
    uStack_1d4 = 0xb0;
    uStack_1d6 = DAT_1010_0a42;
    uStack_1d8 = DAT_1010_0a40;
    uStack_1da = 0x1018;
    uStack_1dc = 0x2ecc;
    M007_PUTLOW();
    uStack_1d6 = 0xb0;
    uStack_1d8 = DAT_1010_0a5e;
    uStack_1da = DAT_1010_0a5c;
    uStack_1dc = 0x1018;
    uStack_1de = 0x2edc;
    M007_PUTHIGH();
    uStack_1d8 = 0x11d;
    uStack_1da = DAT_1010_0a42;
    uStack_1dc = DAT_1010_0a40;
    uStack_1de = 0x1018;
    uStack_1e0 = 0x2eec;
    M007_PUTLOW();
    uStack_1da = 0x11d;
    uStack_1dc = DAT_1010_0a5e;
    uStack_1de = DAT_1010_0a5c;
    uStack_1e0 = 0x1018;
    uStack_1e2 = 0x2efc;
    M007_PUTHIGH();
    uStack_1dc = 0x11c;
    uStack_1de = DAT_1010_0a42;
    uStack_1e0 = DAT_1010_0a40;
    uStack_1e2 = 0x1018;
    uStack_1e4 = 0x2f0c;
    M007_PUTLOW();
    uStack_1de = 0x11c;
    uStack_1e0 = DAT_1010_0a5e;
    uStack_1e2 = DAT_1010_0a5c;
    uStack_1e4 = 0x1018;
    uStack_1e6 = 0x2f1c;
    M007_PUTHIGH();
    uStack_1e0 = 0x168;
    uStack_1e2 = DAT_1010_0a42;
    uStack_1e4 = DAT_1010_0a40;
    uStack_1e6 = 0x1018;
    uStack_1e8 = 0x2f2c;
    M007_PUTLOW();
    uStack_1e2 = 0x168;
    uStack_1e4 = DAT_1010_0a5e;
    uStack_1e6 = DAT_1010_0a5c;
    uStack_1e8 = 0x1018;
    uStack_1ea = 0x2f3c;
    M007_PUTHIGH();
    uStack_1e4 = 0xa2;
    uStack_1e6 = DAT_1010_0a0a;
    uStack_1e8 = DAT_1010_0a08;
    uStack_1ea = 0x1018;
    uStack_1ec = 0x2f4c;
    M007_PUTHIGH();
    uStack_1e6 = 0xa2;
    uStack_1e8 = DAT_1010_0a0e;
    uStack_1ea = DAT_1010_0a0c;
    uStack_1ec = 0x1018;
    uStack_1ee = 0x2f5c;
    M007_PUTLOW();
    uStack_1e8 = 0xa3;
    uStack_1ea = DAT_1010_0a0a;
    uStack_1ec = DAT_1010_0a08;
    uStack_1ee = 0x1018;
    uStack_1f0 = 0x2f6c;
    M007_PUTHIGH();
    uStack_1ea = 0xa3;
    uStack_1ec = DAT_1010_0a0e;
    uStack_1ee = DAT_1010_0a0c;
    uStack_1f0 = 0x1018;
    uStack_1f2 = 0x2f7c;
    M007_PUTLOW();
    uStack_1ec = 0xa4;
    uStack_1ee = DAT_1010_0a0a;
    uStack_1f0 = DAT_1010_0a08;
    uStack_1f2 = 0x1018;
    uStack_1f4 = 0x2f8c;
    M007_PUTHIGH();
    uStack_1ee = 0xa4;
    uStack_1f0 = DAT_1010_0a0e;
    uStack_1f2 = DAT_1010_0a0c;
    uStack_1f4 = 0x1018;
    uStack_1f6 = 0x2f9c;
    M007_PUTLOW();
    uStack_1f0 = 0x123;
    uStack_1f2 = DAT_1010_0a62;
    uStack_1f4 = DAT_1010_0a60;
    uStack_1f6 = 0x1018;
    uStack_1f8 = 0x2fac;
    M007_PUTHIGH();
    uStack_1f2 = 0x123;
    uStack_1f4 = DAT_1010_0a66;
    uStack_1f6 = DAT_1010_0a64;
    uStack_1f8 = 0x1018;
    uStack_1fa = 0x2fbc;
    M007_PUTLOW();
    uStack_1f4 = 0x1a4;
    uStack_1f6 = DAT_1010_0a62;
    uStack_1f8 = DAT_1010_0a60;
    uStack_1fa = 0x1018;
    uStack_1fc = 0x2fcc;
    M007_PUTHIGH();
    uStack_1f6 = 0x1a4;
    uStack_1f8 = DAT_1010_0a66;
    uStack_1fa = DAT_1010_0a64;
    uStack_1fc = 0x1018;
    uStack_1fe = 0x2fdc;
    M007_PUTLOW();
    uStack_1f8 = 0x164;
    uStack_1fa = DAT_1010_0a0a;
    uStack_1fc = DAT_1010_0a08;
    uStack_1fe = 0x1018;
    uStack_200 = 0x2fec;
    M007_PUTHIGH();
    uStack_1fa = 0x164;
    uStack_1fc = DAT_1010_0a0e;
    uStack_1fe = DAT_1010_0a0c;
    uStack_200 = 0x1018;
    uStack_202 = 0x2ffc;
    M007_PUTLOW();
    uStack_1fc = 0xa5;
    uStack_1fe = DAT_1010_0a6a;
    uStack_200 = DAT_1010_0a68;
    uStack_202 = 0x1018;
    uStack_204 = 0x300c;
    M007_PUTLOW();
    uStack_1fe = 0xa6;
    uStack_200 = DAT_1010_0a6a;
    uStack_202 = DAT_1010_0a68;
    uStack_204 = 0x1018;
    uStack_206 = 0x301c;
    M007_PUTLOW();
    uStack_200 = 0xa7;
    uStack_202 = DAT_1010_0a6a;
    uStack_204 = DAT_1010_0a68;
    uStack_206 = 0x1018;
    uStack_208 = 0x302c;
    M007_PUTLOW();
    uStack_202 = 0x124;
    uStack_204 = DAT_1010_0a6a;
    uStack_206 = DAT_1010_0a68;
    uStack_208 = 0x1018;
    uStack_20a = 0x303c;
    M007_PUTLOW();
    uStack_204 = 0x1a5;
    uStack_206 = DAT_1010_0a6a;
    uStack_208 = DAT_1010_0a68;
    uStack_20a = 0x1018;
    uStack_20c = 0x304c;
    M007_PUTLOW();
    uStack_206 = 0x165;
    uStack_208 = DAT_1010_0a6a;
    uStack_20a = DAT_1010_0a68;
    uStack_20c = 0x1018;
    uStack_20e = 0x305c;
    M007_PUTLOW();
    uStack_208 = 0xa5;
    uStack_20a = DAT_1010_0a6e;
    uStack_20c = DAT_1010_0a6c;
    uStack_20e = 0x1018;
    uStack_210 = 0x306c;
    M007_PUTHIGH();
    uStack_20a = 0xa6;
    uStack_20c = DAT_1010_0a6e;
    uStack_20e = DAT_1010_0a6c;
    uStack_210 = 0x1018;
    uStack_212 = 0x307c;
    M007_PUTHIGH();
    uStack_20c = 0xa7;
    uStack_20e = DAT_1010_0a6e;
    uStack_210 = DAT_1010_0a6c;
    uStack_212 = 0x1018;
    uStack_214 = 0x308c;
    M007_PUTHIGH();
    uStack_20e = 0x124;
    uStack_210 = DAT_1010_0a6e;
    uStack_212 = DAT_1010_0a6c;
    uStack_214 = 0x1018;
    uStack_216 = 0x309c;
    M007_PUTHIGH();
    uStack_210 = 0x1a5;
    uStack_212 = DAT_1010_0a6e;
    uStack_214 = DAT_1010_0a6c;
    uStack_216 = 0x1018;
    uStack_218 = 0x30ac;
    M007_PUTHIGH();
    uStack_212 = 0x165;
    uStack_214 = DAT_1010_0a6e;
    uStack_216 = DAT_1010_0a6c;
    uStack_218 = 0x1018;
    uStack_21a = 0x30bc;
    M007_PUTHIGH();
    uStack_214 = 0xab;
    uStack_216 = DAT_1010_0a6a;
    uStack_218 = DAT_1010_0a68;
    uStack_21a = 0x1018;
    uStack_21c = 0x30cc;
    M007_PUTLOW();
    uStack_216 = 0xac;
    uStack_218 = DAT_1010_0a6a;
    uStack_21a = DAT_1010_0a68;
    uStack_21c = 0x1018;
    uStack_21e = 0x30dc;
    M007_PUTLOW();
    uStack_218 = 0xad;
    uStack_21a = DAT_1010_0a6a;
    uStack_21c = DAT_1010_0a68;
    uStack_21e = 0x1018;
    uStack_220 = 0x30ec;
    M007_PUTLOW();
    uStack_21a = 0x11b;
    uStack_21c = DAT_1010_0a6a;
    uStack_21e = DAT_1010_0a68;
    uStack_220 = 0x1018;
    uStack_222 = 0x30fc;
    M007_PUTLOW();
    uStack_21c = 0x11a;
    uStack_21e = DAT_1010_0a6a;
    uStack_220 = DAT_1010_0a68;
    uStack_222 = 0x1018;
    uStack_224 = 0x310c;
    M007_PUTLOW();
    uStack_21e = 0x167;
    uStack_220 = DAT_1010_0a6a;
    uStack_222 = DAT_1010_0a68;
    uStack_224 = 0x1018;
    uStack_226 = 0x311c;
    M007_PUTLOW();
    uStack_220 = 0xab;
    uStack_222 = DAT_1010_0a6e;
    uStack_224 = DAT_1010_0a6c;
    uStack_226 = 0x1018;
    uStack_228 = 0x312c;
    M007_PUTHIGH();
    uStack_222 = 0xac;
    uStack_224 = DAT_1010_0a6e;
    uStack_226 = DAT_1010_0a6c;
    uStack_228 = 0x1018;
    uStack_22a = 0x313c;
    M007_PUTHIGH();
    uStack_224 = 0xad;
    uStack_226 = DAT_1010_0a6e;
    uStack_228 = DAT_1010_0a6c;
    uStack_22a = 0x1018;
    uStack_22c = 0x314c;
    M007_PUTHIGH();
    uStack_226 = 0x11b;
    uStack_228 = DAT_1010_0a6e;
    uStack_22a = DAT_1010_0a6c;
    uStack_22c = 0x1018;
    uStack_22e = 0x315c;
    M007_PUTHIGH();
    uStack_228 = 0x11a;
    uStack_22a = DAT_1010_0a6e;
    uStack_22c = DAT_1010_0a6c;
    uStack_22e = 0x1018;
    uStack_230 = 0x316c;
    M007_PUTHIGH();
    uStack_22a = 0x167;
    uStack_22c = DAT_1010_0a6e;
    uStack_22e = DAT_1010_0a6c;
    uStack_230 = 0x1018;
    uStack_232 = 0x317c;
    M007_PUTHIGH();
    uStack_22c = 0x84;
    uStack_22e = DAT_1010_0a72;
    uStack_230 = DAT_1010_0a70;
    uStack_232 = 0x1018;
    uStack_234 = 0x318c;
    M007_PUTHIGH();
    uStack_22e = 0x85;
    uStack_230 = DAT_1010_0a72;
    uStack_232 = DAT_1010_0a70;
    uStack_234 = 0x1018;
    uStack_236 = 0x319c;
    M007_PUTHIGH();
    uStack_230 = 0x86;
    uStack_232 = DAT_1010_0a72;
    uStack_234 = DAT_1010_0a70;
    uStack_236 = 0x1018;
    uStack_238 = 0x31ac;
    M007_PUTHIGH();
    uStack_232 = 0x113;
    uStack_234 = DAT_1010_0a22;
    uStack_236 = DAT_1010_0a20;
    uStack_238 = 0x1018;
    uStack_23a = 0x31bc;
    M007_PUTHIGH();
    uStack_234 = 0x112;
    uStack_236 = DAT_1010_0a76;
    uStack_238 = DAT_1010_0a74;
    uStack_23a = 0x1018;
    uStack_23c = 0x31cc;
    M007_PUTHIGH();
    uStack_236 = 0x15e;
    uStack_238 = DAT_1010_0a72;
    uStack_23a = DAT_1010_0a70;
    uStack_23c = 0x1018;
    uStack_23e = 0x31dc;
    M007_PUTHIGH();
    uStack_238 = 0x84;
    uStack_23a = DAT_1010_0a7a;
    uStack_23c = DAT_1010_0a78;
    uStack_23e = 0x1018;
    uStack_240 = 0x31ec;
    M007_PUTLOW();
    uStack_23a = 0x85;
    uStack_23c = DAT_1010_0a7a;
    uStack_23e = DAT_1010_0a78;
    uStack_240 = 0x1018;
    uStack_242 = 0x31fc;
    M007_PUTLOW();
    uStack_23c = 0x86;
    uStack_23e = DAT_1010_0a7a;
    uStack_240 = DAT_1010_0a78;
    uStack_242 = 0x1018;
    uStack_244 = 0x320c;
    M007_PUTLOW();
    uStack_23e = 0x113;
    uStack_240 = DAT_1010_0a16;
    uStack_242 = DAT_1010_0a14;
    uStack_244 = 0x1018;
    uStack_246 = 0x321c;
    M007_PUTLOW();
    uStack_240 = 0x112;
    uStack_242 = DAT_1010_0a7e;
    uStack_244 = DAT_1010_0a7c;
    uStack_246 = 0x1018;
    uStack_248 = 0x322c;
    M007_PUTLOW();
    uStack_242 = 0x15e;
    uStack_244 = DAT_1010_0a7a;
    uStack_246 = DAT_1010_0a78;
    uStack_248 = 0x1018;
    uStack_24a = 0x323c;
    M007_PUTLOW();
    uStack_244 = 0x96;
    uStack_246 = DAT_1010_0a0a;
    uStack_248 = DAT_1010_0a08;
    uStack_24a = 0x1018;
    uStack_24c = 0x324c;
    M007_PUTHIGH();
    uStack_246 = 0x97;
    uStack_248 = DAT_1010_0a0a;
    uStack_24a = DAT_1010_0a08;
    uStack_24c = 0x1018;
    uStack_24e = 0x325c;
    M007_PUTHIGH();
    uStack_248 = 0x87;
    uStack_24a = DAT_1010_0a0a;
    uStack_24c = DAT_1010_0a08;
    uStack_24e = 0x1018;
    uStack_250 = 0x326c;
    M007_PUTHIGH();
    uStack_24a = 0x88;
    uStack_24c = DAT_1010_0a0a;
    uStack_24e = DAT_1010_0a08;
    uStack_250 = 0x1018;
    uStack_252 = 0x327c;
    M007_PUTHIGH();
    uStack_24c = 0x9f;
    uStack_24e = DAT_1010_0a0a;
    uStack_250 = DAT_1010_0a08;
    uStack_252 = 0x1018;
    uStack_254 = 0x328c;
    M007_PUTHIGH();
    uStack_24e = 0xa0;
    uStack_250 = DAT_1010_0a0a;
    uStack_252 = DAT_1010_0a08;
    uStack_254 = 0x1018;
    uStack_256 = 0x329c;
    M007_PUTHIGH();
    uStack_250 = 0x90;
    uStack_252 = DAT_1010_0a0e;
    uStack_254 = DAT_1010_0a0c;
    uStack_256 = 0x1018;
    uStack_258 = 0x32ac;
    M007_PUTLOW();
    uStack_252 = 0x91;
    uStack_254 = DAT_1010_0a0e;
    uStack_256 = DAT_1010_0a0c;
    uStack_258 = 0x1018;
    uStack_25a = 0x32bc;
    M007_PUTLOW();
    uStack_254 = 0x90;
    uStack_256 = DAT_1010_0a0a;
    uStack_258 = DAT_1010_0a08;
    uStack_25a = 0x1018;
    uStack_25c = 0x32cc;
    M007_PUTHIGH();
    uStack_256 = 0x91;
    uStack_258 = DAT_1010_0a0a;
    uStack_25a = DAT_1010_0a08;
    uStack_25c = 0x1018;
    uStack_25e = 0x32dc;
    M007_PUTHIGH();
    uStack_258 = 0x98;
    uStack_25a = DAT_1010_0a82;
    uStack_25c = DAT_1010_0a80;
    uStack_25e = 0x1018;
    uStack_260 = 0x32ec;
    M007_PUTHIGH();
    uStack_25a = 0x89;
    uStack_25c = DAT_1010_0a82;
    uStack_25e = DAT_1010_0a80;
    uStack_260 = 0x1018;
    uStack_262 = 0x32fc;
    M007_PUTHIGH();
    uStack_25c = 0xa1;
    uStack_25e = DAT_1010_0a82;
    uStack_260 = DAT_1010_0a80;
    uStack_262 = 0x1018;
    uStack_264 = 0x330c;
    M007_PUTHIGH();
    uStack_25e = 0x1c3;
    uStack_260 = DAT_1010_0a82;
    uStack_262 = DAT_1010_0a80;
    uStack_264 = 0x1018;
    uStack_266 = 0x331c;
    M007_PUTHIGH();
    uStack_260 = 0x125;
    uStack_262 = DAT_1010_0a22;
    uStack_264 = DAT_1010_0a20;
    uStack_266 = 0x1018;
    uStack_268 = 0x332c;
    M007_PUTHIGH();
    uStack_262 = 0x126;
    uStack_264 = DAT_1010_0a16;
    uStack_266 = DAT_1010_0a14;
    uStack_268 = 0x1018;
    uStack_26a = 0x333c;
    M007_PUTLOW();
    uStack_264 = 0x115;
    uStack_266 = DAT_1010_0a22;
    uStack_268 = DAT_1010_0a20;
    uStack_26a = 0x1018;
    uStack_26c = 0x334c;
    M007_PUTHIGH();
    uStack_266 = 0x115;
    uStack_268 = DAT_1010_0a16;
    uStack_26a = DAT_1010_0a14;
    uStack_26c = 0x1018;
    uStack_26e = 0x335c;
    M007_PUTLOW();
    uStack_268 = 0x122;
    uStack_26a = DAT_1010_0a22;
    uStack_26c = DAT_1010_0a20;
    uStack_26e = 0x1018;
    uStack_270 = 0x336c;
    M007_PUTHIGH();
    uStack_26a = 0x122;
    uStack_26c = DAT_1010_0a16;
    uStack_26e = DAT_1010_0a14;
    uStack_270 = 0x1018;
    uStack_272 = 0x337c;
    M007_PUTLOW();
    uStack_26c = 0x114;
    uStack_26e = DAT_1010_0a76;
    uStack_270 = DAT_1010_0a74;
    uStack_272 = 0x1018;
    uStack_274 = 0x338c;
    M007_PUTHIGH();
    uStack_26e = 0x114;
    uStack_270 = DAT_1010_0a7e;
    uStack_272 = DAT_1010_0a7c;
    uStack_274 = 0x1018;
    uStack_276 = 0x339c;
    M007_PUTLOW();
    uStack_270 = 0x161;
    uStack_272 = DAT_1010_0a82;
    uStack_274 = DAT_1010_0a80;
    uStack_276 = 0x1018;
    uStack_278 = 0x33ac;
    M007_PUTHIGH();
    uStack_272 = 0x15f;
    uStack_274 = DAT_1010_0a82;
    uStack_276 = DAT_1010_0a80;
    uStack_278 = 0x1018;
    uStack_27a = 0x33bc;
    M007_PUTHIGH();
    uStack_274 = 0xf9;
    uStack_276 = DAT_1010_0a86;
    goto code_r0x100033c3;
  case 2:
    local_160 = 1;
    break;
  case 3:
  case 7:
  case 0xb:
  case 0xf:
  case 0x11:
  case 0x13:
  case 0x15:
  case 0x17:
  case 0x19:
  case 0x1b:
    *(int *)((int)aiStack_7f + (int)unaff_SI) = *(int *)((int)aiStack_7f + (int)unaff_SI) - uVar8;
    if ((char)*unaff_SI == '\x01') {
      M007_PUTXY();
      FUN_1000_9652();
      DAT_1010_1298 = 1;
      DAT_1010_00dc = uStack_a;
      DAT_1010_00de = uStack_8;
      DAT_1010_00e0 = iStack_6;
      DAT_1010_00e2 = local_4;
    }
    else {
      iStack_6 = M007_PUTSTATE();
    }
    return iStack_6;
  case 5:
    if (in_ST1 < (longdouble)fStack_510) {
      uStack_404 = (float)CONCAT22(DAT_1010_0a9e,DAT_1010_0a9c);
    }
    pfVar7 = (float *)M007_GETVALUE();
    fStack_510 = uStack_40c;
    if ((uStack_40c < *pfVar7) || (pfVar7 = (float *)M007_GETVALUE(), *pfVar7 < fStack_510)) {
      uStack_40c = (float)CONCAT22(DAT_1010_0aae,DAT_1010_0aac);
    }
    if (uStack_408 < uStack_400) {
      uStack_400 = (float)CONCAT22(DAT_1010_0a9e,DAT_1010_0a9c);
      uStack_408 = (float)CONCAT22(DAT_1010_0aae,DAT_1010_0aac);
    }
    if (uStack_40c < uStack_404) {
      uStack_404 = (float)CONCAT22(DAT_1010_0a9e,DAT_1010_0a9c);
      uStack_40c = (float)CONCAT22(DAT_1010_0aae,DAT_1010_0aac);
    }
    iVar6 = M007_GETSTATE();
    if ((iVar6 == 2) &&
       (((pfVar7 = (float *)M007_GETVALUE(), *pfVar7 < uStack_400 ||
         (pfVar7 = (float *)M007_GETVALUE(), uStack_408 < *pfVar7)) ||
        ((pfVar7 = (float *)M007_GETVALUE(), *pfVar7 < uStack_404 ||
         (pfVar7 = (float *)M007_GETVALUE(), uStack_40c < *pfVar7)))))) {
      uStack_1fa = uStack_1fa & 0xff00;
    }
    iVar6 = M007_GETSTATE();
    if (iVar6 == 1) {
      iVar6 = M007_GETSTATE();
      if (iVar6 == 0) {
        LOADSTRING();
        LOADSTRING();
        GETFOCUS();
        MESSAGEBOX();
      }
      else {
        M007_GETVALUE();
        SETSTAGE_GOTO_Z();
      }
    }
    iVar6 = M007_GETSTATE();
    if (iVar6 == 0) {
      LOADSTRING();
      LOADSTRING();
      LOADSTRING();
      LSTRCAT();
      GETFOCUS();
      pfStack_1a4 = (float *)0x3e2f;
      iVar6 = MESSAGEBOX();
      if (iVar6 == 6) {
        return 0;
      }
    }
    else if ((char)uStack_1fa == '\0') {
      LOADSTRING();
      LOADSTRING();
      LSTRCAT();
      fStack_518 = uStack_40c * DAT_1010_0a98;
      FUN_1000_0264();
      fStack_514 = uStack_404 * DAT_1010_0a98;
      FUN_1000_0264();
      fStack_510 = uStack_408 * DAT_1010_0a98;
      FUN_1000_0264();
      fStack_51c = uStack_400 * DAT_1010_0a98;
      FUN_1000_0264();
      FUN_1000_0264();
      FUN_1000_0264();
      pfStack_1a4 = (float *)auStack_2fc;
      uStack_1a6 = 0x1018;
      uStack_1a8 = 0x3eff;
      _WSPRINTF();
      GETFOCUS();
      pfStack_1a4 = (float *)0x3f1c;
      iVar6 = MESSAGEBOX();
      if (iVar6 == 6) {
        uStack_1fc = M007_GETSTATE();
        SWITCHPROTECTED_Z();
        pfStack_1a4 = &fStack_514;
        uStack_1a6 = 0x1000;
        uStack_1a8 = 0x3fac;
        puVar5 = (undefined2 *)M007_GETVALUE();
        pfStack_1a4 = (float *)puVar5[1];
        uStack_1a6 = *puVar5;
        uStack_1a8 = DAT_1010_0ab6;
        uStack_1aa = DAT_1010_0ab4;
        uStack_1ac = 0x112;
        pfStack_1ae = &fStack_518;
        uStack_1b0 = 0x1018;
        uStack_1b2 = 0x3fca;
        puVar5 = (undefined2 *)M007_GETVALUE();
        pfStack_1ae = (float *)puVar5[1];
        uStack_1b0 = *puVar5;
        uStack_1b2 = 0x15e;
        pfStack_1b4 = &fStack_51c;
        uStack_1b6 = 0x1018;
        uStack_1b8 = 0x3fe0;
        puVar5 = (undefined2 *)M007_GETVALUE();
        pfStack_1b4 = (float *)puVar5[1];
        uStack_1b6 = *puVar5;
        uStack_1b8 = 0x1018;
        uStack_1ba = 0x3fee;
        SETXYZTRMSTAGE_GOTO();
        pfStack_1a4 = (float *)0x3ff7;
        SWITCHPROTECTED_Z();
      }
      else {
        pfStack_1a4 = (float *)0x3f35;
        LOADSTRING();
        GETFOCUS();
        pfStack_1a4 = (float *)&uStack_1f8;
        uStack_1a6 = 0x1024;
        uStack_1a8 = 0x1018;
        uStack_1aa = 0x3f4f;
        iVar6 = MESSAGEBOX();
        if (iVar6 != 6) {
          return 0;
        }
      }
    }
    return 1;
  case 6:
    local_160 = 5;
    break;
  case 9:
    LOCK();
    (&stack0xfffe)[(int)unaff_SI] = in_CL;
    UNLOCK();
code_r0x100033c3:
    M007_PUTLOW();
    M007_PUTHIGH();
    M007_PUTVALUE();
    M007_PUTHIGH();
    M007_PUTHIGH();
    M007_PUTHIGH();
    M007_PUTHIGH();
    M007_PUTHIGH();
    M007_PUTHIGH();
    M007_PUTLOW();
    M007_PUTLOW();
    M007_PUTHIGH();
    M007_PUTHIGH();
    M007_PUTVALUE();
    M007_PUTLOW();
    M007_PUTHIGH();
    FUN_1000_da7e();
    iVar6 = STAGE_REPORTID();
    return iVar6;
  case 10:
    local_160 = 4;
    break;
  case 0xd:
    pcVar1 = (char *)((int)unaff_SI + uVar8 + 0x1010);
    *pcVar1 = *pcVar1 + (byte)(local_15c >> 9);
    iVar6 = M007_PUTSTATE();
    if (*(int *)&DAT_1010_017e != 0) {
      iVar6 = M007_GETSTATE();
      if (iVar6 == 1) {
        FUN_1000_bbb2();
        *(undefined1 *)&DAT_1010_0170 = 1;
      }
      else {
        FUN_1000_9036();
        *(undefined1 *)&DAT_1010_0175 = 0;
        *(undefined1 *)&DAT_1010_0170 = 0;
      }
      iVar6 = M007_GETSTATE();
      iVar6 = iVar6 + -1;
      if (iVar6 == 0) {
        iVar6 = FUN_1000_9bda();
      }
    }
    return iVar6;
  case 0xe:
    local_160 = 2;
    break;
  case 0x1d:
    *(int *)(unaff_DI + 0x17) = *(int *)(unaff_DI + 0x17) + (int)unaff_SI;
    puVar5 = (undefined2 *)M007_GETVALUE();
    uStack_a = *puVar5;
    uStack_8 = puVar5[1];
    iStack_6 = DAT_1010_0ab4;
    uVar11 = DAT_1010_0ab6;
    if (DAT_1010_0176 == '\x01') {
      puVar5 = (undefined2 *)M007_GETVALUE();
      iStack_6 = *puVar5;
      uVar11 = puVar5[1];
    }
    local_4 = uVar11;
    FUN_1000_8ad0();
    M007_PUTVALUE();
    iVar6 = FUN_1000_9652();
    return iVar6;
  case 0x1e:
    local_160 = 3;
  }
LAB_1000_bd8f:
  M007_PUTSTATE();
  M007_GETSTATE();
  FUN_1000_bf6a();
  FUN_1000_bfea();
  switch(DAT_1010_1110) {
  case 0:
    if (local_160 == 0) {
      local_4 = CONCAT11(local_4._1_1_,1);
    }
    else if (local_160 == 1) {
      local_4 = CONCAT11(local_4._1_1_,2);
    }
    else if (local_160 == 2) {
      local_4 = CONCAT11(local_4._1_1_,5);
    }
    else if (local_160 == 4) {
      local_4 = CONCAT11(local_4._1_1_,4);
    }
    else if (local_160 == 5) {
      local_4 = CONCAT11(local_4._1_1_,3);
    }
    break;
  case 1:
    if (local_160 == 0) {
      local_4 = CONCAT11(local_4._1_1_,6);
    }
    else if (local_160 == 1) {
      local_4 = CONCAT11(local_4._1_1_,7);
    }
    else if (local_160 == 2) {
      local_4 = CONCAT11(local_4._1_1_,10);
    }
    else if (local_160 == 5) {
      local_4 = CONCAT11(local_4._1_1_,8);
    }
    break;
  case 2:
    if (local_160 == 0) {
LAB_1000_bf14:
      local_4 = CONCAT11(local_4._1_1_,0xb);
    }
    else if (local_160 == 1) {
LAB_1000_bf26:
      local_4 = CONCAT11(local_4._1_1_,0xc);
    }
    else if (local_160 == 2) {
LAB_1000_bf32:
      local_4 = CONCAT11(local_4._1_1_,0xf);
    }
    else {
LAB_1000_bf10:
      if (local_160 == 5) {
        local_4 = CONCAT11(local_4._1_1_,0xd);
      }
    }
    goto LAB_1000_bf18;
  case 3:
    if (local_160 == 0) {
      local_4 = CONCAT11(local_4._1_1_,0x10);
    }
    else if (local_160 == 1) {
      local_4 = CONCAT11(local_4._1_1_,0x11);
    }
    else if (local_160 == 4) {
      local_4 = CONCAT11(local_4._1_1_,0x12);
    }
    break;
  case 4:
    if (local_160 == 0) {
      local_4 = CONCAT11(local_4._1_1_,0x13);
    }
    else if (local_160 == 1) {
      local_4 = CONCAT11(local_4._1_1_,0x14);
    }
    else if (local_160 == 2) {
      local_4 = CONCAT11(local_4._1_1_,0x16);
    }
    else if (local_160 == 3) {
      local_4 = CONCAT11(local_4._1_1_,0x17);
    }
    else if (local_160 == 5) {
      local_4 = CONCAT11(local_4._1_1_,0x15);
    }
    break;
  case 5:
    if (local_160 == 0) {
      local_4 = CONCAT11(local_4._1_1_,0x1b);
    }
    else if (local_160 == 1) {
      local_4 = CONCAT11(local_4._1_1_,0x1c);
    }
    else if (local_160 == 2) {
      local_4 = CONCAT11(local_4._1_1_,0x1e);
    }
    else if (local_160 == 5) {
      local_4 = CONCAT11(local_4._1_1_,0x1d);
    }
    break;
  case 6:
    if (local_160 == 0) {
      local_4 = CONCAT11(local_4._1_1_,0x18);
    }
    else if (local_160 == 1) {
      local_4 = CONCAT11(local_4._1_1_,0x19);
    }
    else if (local_160 == 4) {
      local_4 = CONCAT11(local_4._1_1_,0x1a);
    }
    break;
  default:
    if (local_160 == 0) goto LAB_1000_bf14;
    if (local_160 == 1) goto LAB_1000_bf26;
    if (local_160 == 2) goto LAB_1000_bf32;
    if (local_160 != 4) goto LAB_1000_bf10;
    local_4 = CONCAT11(local_4._1_1_,0x12);
LAB_1000_bf18:
    DAT_1010_017c = 1;
  }
  M007_PUTSTATE();
  iVar6 = FUN_1000_9036();
  return iVar6;
}


// ---- FUN_1000_bf6a @ 1000:bf6a

void __cdecl16near FUN_1000_bf6a(int param_1,byte param_2)

{
  DAT_1010_0171 = '\0';
  DAT_1010_0172 = '\0';
  DAT_1010_0175 = '\0';
  DAT_1010_0174 = '\0';
  DAT_1010_0173 = '\0';
  DAT_1010_0176 = '\0';
  if (param_1 == 1) {
    DAT_1010_0171 = '\x01' - ((param_2 & 1) == 0);
    DAT_1010_0172 = '\x01' - ((param_2 & 2) == 0);
    DAT_1010_0175 = '\x01' - ((param_2 & 4) == 0);
    DAT_1010_0174 = '\x01' - ((param_2 & 8) == 0);
    DAT_1010_0173 = '\x01' - ((param_2 & 0x10) == 0);
    DAT_1010_0176 = '\x01' - ((param_2 & 0x20) == 0);
  }
  return;
}


// ---- FUN_1000_bfea @ 1000:bfea

void __cdecl16near FUN_1000_bfea(int param_1)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 unaff_CS;
  undefined2 uVar3;
  undefined4 local_6;
  
  if ((param_1 == 0) || (uVar1 = DAT_1010_0b7c, uVar2 = DAT_1010_0b7e, param_1 != 1)) {
    uVar1 = DAT_1010_0b78;
    uVar2 = DAT_1010_0b7a;
  }
  local_6 = CONCAT22(uVar2,uVar1);
  if (DAT_1010_0171 != '\0') {
    M007_PUTHIGH(unaff_CS,uVar1,uVar2);
    unaff_CS = 0x1018;
    M007_PUTHIGH();
  }
  if (DAT_1010_0172 != '\0') {
    M007_PUTHIGH(unaff_CS,uVar1,uVar2);
    unaff_CS = 0x1018;
    M007_PUTHIGH(0x1018,local_6);
  }
  if (DAT_1010_0175 != '\0') {
    M007_PUTHIGH(unaff_CS,uVar1,uVar2);
    unaff_CS = 0x1018;
    M007_PUTHIGH(0x1018,local_6);
  }
  if (DAT_1010_0174 != '\0') {
    M007_PUTHIGH(unaff_CS,uVar1,uVar2);
    unaff_CS = 0x1018;
    M007_PUTHIGH(0x1018,local_6);
  }
  uVar3 = unaff_CS;
  if (DAT_1010_0173 != '\0') {
    uVar3 = 0x1018;
    M007_PUTHIGH(unaff_CS,uVar1,uVar2);
  }
  if (DAT_1010_0176 != '\0') {
    M007_PUTHIGH(uVar3,uVar1,uVar2);
    M007_PUTHIGH(0x1018,local_6);
  }
  return;
}


// ---- FUN_1000_c136 @ 1000:c136

void __cdecl16near FUN_1000_c136(float *param_1)

{
  undefined2 *puVar1;
  float *pfVar2;
  float *pfVar3;
  undefined2 uVar4;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined1 local_a [4];
  undefined1 local_6 [4];
  
  pfVar3 = (float *)param_1;
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  if (DAT_1010_0171 == '\x01') {
    M007_PUTXY(unaff_CS,*(undefined2 *)(pfVar3 + 1),*(undefined2 *)((int)pfVar3 + 6),
               *(undefined2 *)param_1,*(undefined2 *)((int)pfVar3 + 2));
    pfVar2 = (float *)M007_GETVALUE(0x1018,local_6);
    if (*param_1 < *pfVar2) {
      M007_PUTVALUE(0x1018,*(undefined2 *)param_1,*(undefined2 *)((int)pfVar3 + 2));
    }
    M007_PUTHIGH(0x1018,*(undefined2 *)param_1,*(undefined2 *)((int)pfVar3 + 2));
    pfVar2 = (float *)M007_GETVALUE(0x1018,local_6);
    if (*param_1 < *pfVar2) {
      uVar6 = *(undefined2 *)param_1;
      uVar5 = 0x88;
      puVar1 = (undefined2 *)M007_GETVALUE(0x1018,local_a);
      M007_PUTXY(0x1018,*puVar1,puVar1[1],uVar5,uVar6);
    }
    unaff_CS = 0x1018;
    M007_PUTHIGH(0x1018,*(undefined2 *)param_1,*(undefined2 *)((int)pfVar3 + 2));
  }
  if (DAT_1010_0172 == '\x01') {
    M007_PUTXY(unaff_CS,*(undefined2 *)(pfVar3 + 1),*(undefined2 *)((int)pfVar3 + 6),
               *(undefined2 *)param_1,*(undefined2 *)((int)pfVar3 + 2));
    pfVar2 = (float *)M007_GETVALUE(0x1018,local_a);
    if (pfVar3[1] < *pfVar2) {
      M007_PUTVALUE(0x1018,*(undefined2 *)(pfVar3 + 1),*(undefined2 *)((int)pfVar3 + 6));
    }
    M007_PUTHIGH(0x1018,*(undefined2 *)(pfVar3 + 1),*(undefined2 *)((int)pfVar3 + 6));
    pfVar2 = (float *)M007_GETVALUE(0x1018,local_a);
    if (pfVar3[1] < *pfVar2) {
      puVar1 = (undefined2 *)M007_GETVALUE(0x1018,local_6);
      M007_PUTXY(0x1018,*(undefined2 *)(pfVar3 + 1),*(undefined2 *)((int)pfVar3 + 6),*puVar1,
                 puVar1[1]);
    }
    unaff_CS = 0x1018;
    M007_PUTHIGH(0x1018,*(undefined2 *)(pfVar3 + 1),*(undefined2 *)((int)pfVar3 + 6));
  }
  if (DAT_1010_0175 == '\x01') {
    M007_PUTVALUE(unaff_CS,*(undefined2 *)(pfVar3 + 2),*(undefined2 *)((int)pfVar3 + 10));
    pfVar2 = (float *)M007_GETVALUE(0x1018,local_a);
    if (pfVar3[2] < *pfVar2) {
      M007_PUTVALUE(0x1018,*(undefined2 *)(pfVar3 + 2),*(undefined2 *)((int)pfVar3 + 10));
    }
    M007_PUTHIGH(0x1018,*(undefined2 *)(pfVar3 + 2),*(undefined2 *)((int)pfVar3 + 10));
    pfVar2 = (float *)M007_GETVALUE(0x1018,local_a);
    if (pfVar3[2] < *pfVar2) {
      M007_PUTVALUE(0x1018,*(undefined2 *)(pfVar3 + 2),*(undefined2 *)((int)pfVar3 + 10));
    }
    unaff_CS = 0x1018;
    M007_PUTHIGH(0x1018,*(undefined2 *)(pfVar3 + 2),*(undefined2 *)((int)pfVar3 + 10));
  }
  if (DAT_1010_0174 == '\x01') {
    M007_PUTVALUE(unaff_CS,*(undefined2 *)(pfVar3 + 3),*(undefined2 *)((int)pfVar3 + 0xe));
    pfVar2 = (float *)M007_GETVALUE(0x1018,local_a);
    if (pfVar3[3] < *pfVar2) {
      M007_PUTVALUE(0x1018,*(undefined2 *)(pfVar3 + 3),*(undefined2 *)((int)pfVar3 + 0xe));
    }
    M007_PUTHIGH(0x1018,*(undefined2 *)(pfVar3 + 3),*(undefined2 *)((int)pfVar3 + 0xe));
    pfVar2 = (float *)M007_GETVALUE(0x1018,local_a);
    if (pfVar3[3] < *pfVar2) {
      M007_PUTVALUE(0x1018,*(undefined2 *)(pfVar3 + 3),*(undefined2 *)((int)pfVar3 + 0xe));
    }
    unaff_CS = 0x1018;
    M007_PUTHIGH(0x1018,*(undefined2 *)(pfVar3 + 3),*(undefined2 *)((int)pfVar3 + 0xe));
  }
  if (DAT_1010_0176 == '\x01') {
    M007_PUTVALUE(unaff_CS,*(undefined2 *)(pfVar3 + 5),*(undefined2 *)((int)pfVar3 + 0x16));
    pfVar2 = (float *)M007_GETVALUE(0x1018,local_a);
    if (pfVar3[5] < *pfVar2) {
      M007_PUTVALUE(0x1018,*(undefined2 *)(pfVar3 + 5),*(undefined2 *)((int)pfVar3 + 0x16));
    }
    M007_PUTHIGH(0x1018,*(undefined2 *)(pfVar3 + 5),*(undefined2 *)((int)pfVar3 + 0x16));
  }
  return;
}


// ---- FUN_1000_c484 @ 1000:c484

void __cdecl16near FUN_1000_c484(float *param_1)

{
  undefined2 *puVar1;
  float *pfVar2;
  float *pfVar3;
  undefined2 uVar4;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined1 local_a [4];
  undefined1 local_6 [4];
  
  pfVar3 = (float *)param_1;
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  if (DAT_1010_0171 == '\x01') {
    M007_PUTXY(unaff_CS,*(undefined2 *)(pfVar3 + 1),*(undefined2 *)((int)pfVar3 + 6),
               *(undefined2 *)param_1,*(undefined2 *)((int)pfVar3 + 2));
    pfVar2 = (float *)M007_GETVALUE(0x1018,local_6);
    if (*pfVar2 < *param_1) {
      M007_PUTVALUE(0x1018,*(undefined2 *)param_1,*(undefined2 *)((int)pfVar3 + 2));
    }
    M007_PUTLOW(0x1018,*(undefined2 *)param_1,*(undefined2 *)((int)pfVar3 + 2));
    pfVar2 = (float *)M007_GETVALUE(0x1018,local_6);
    if (*pfVar2 < *param_1) {
      uVar6 = *(undefined2 *)param_1;
      uVar5 = 0x88;
      puVar1 = (undefined2 *)M007_GETVALUE(0x1018,local_a);
      M007_PUTXY(0x1018,*puVar1,puVar1[1],uVar5,uVar6);
    }
    unaff_CS = 0x1018;
    M007_PUTLOW(0x1018,*(undefined2 *)param_1,*(undefined2 *)((int)pfVar3 + 2));
  }
  if (DAT_1010_0172 == '\x01') {
    M007_PUTXY(unaff_CS,*(undefined2 *)(pfVar3 + 1),*(undefined2 *)((int)pfVar3 + 6),
               *(undefined2 *)param_1,*(undefined2 *)((int)pfVar3 + 2));
    pfVar2 = (float *)M007_GETVALUE(0x1018,local_a);
    if (*pfVar2 < pfVar3[1]) {
      M007_PUTVALUE(0x1018,*(undefined2 *)(pfVar3 + 1),*(undefined2 *)((int)pfVar3 + 6));
    }
    M007_PUTLOW(0x1018,*(undefined2 *)(pfVar3 + 1),*(undefined2 *)((int)pfVar3 + 6));
    pfVar2 = (float *)M007_GETVALUE(0x1018,local_a);
    if (*pfVar2 < pfVar3[1]) {
      puVar1 = (undefined2 *)M007_GETVALUE(0x1018,local_6);
      M007_PUTXY(0x1018,*(undefined2 *)(pfVar3 + 1),*(undefined2 *)((int)pfVar3 + 6),*puVar1,
                 puVar1[1]);
    }
    unaff_CS = 0x1018;
    M007_PUTLOW(0x1018,*(undefined2 *)(pfVar3 + 1),*(undefined2 *)((int)pfVar3 + 6));
  }
  if (DAT_1010_0175 == '\x01') {
    M007_PUTVALUE(unaff_CS,*(undefined2 *)(pfVar3 + 2),*(undefined2 *)((int)pfVar3 + 10));
    pfVar2 = (float *)M007_GETVALUE(0x1018,local_a);
    if (*pfVar2 < pfVar3[2]) {
      M007_PUTVALUE(0x1018,*(undefined2 *)(pfVar3 + 2),*(undefined2 *)((int)pfVar3 + 10));
    }
    M007_PUTLOW(0x1018,*(undefined2 *)(pfVar3 + 2),*(undefined2 *)((int)pfVar3 + 10));
    pfVar2 = (float *)M007_GETVALUE(0x1018,local_a);
    if (*pfVar2 < pfVar3[2]) {
      M007_PUTVALUE(0x1018,*(undefined2 *)(pfVar3 + 2),*(undefined2 *)((int)pfVar3 + 10));
    }
    unaff_CS = 0x1018;
    M007_PUTLOW(0x1018,*(undefined2 *)(pfVar3 + 2),*(undefined2 *)((int)pfVar3 + 10));
  }
  if (DAT_1010_0174 == '\x01') {
    M007_PUTVALUE(unaff_CS,*(undefined2 *)(pfVar3 + 3),*(undefined2 *)((int)pfVar3 + 0xe));
    pfVar2 = (float *)M007_GETVALUE(0x1018,local_a);
    if (*pfVar2 < pfVar3[3]) {
      M007_PUTVALUE(0x1018,*(undefined2 *)(pfVar3 + 3),*(undefined2 *)((int)pfVar3 + 0xe));
    }
    M007_PUTLOW(0x1018,*(undefined2 *)(pfVar3 + 3),*(undefined2 *)((int)pfVar3 + 0xe));
    pfVar2 = (float *)M007_GETVALUE(0x1018,local_a);
    if (*pfVar2 < pfVar3[3]) {
      M007_PUTVALUE(0x1018,*(undefined2 *)(pfVar3 + 3),*(undefined2 *)((int)pfVar3 + 0xe));
    }
    unaff_CS = 0x1018;
    M007_PUTLOW(0x1018,*(undefined2 *)(pfVar3 + 3),*(undefined2 *)((int)pfVar3 + 0xe));
  }
  if (DAT_1010_0176 == '\x01') {
    M007_PUTVALUE(unaff_CS,*(undefined2 *)(pfVar3 + 5),*(undefined2 *)((int)pfVar3 + 0x16));
    pfVar2 = (float *)M007_GETVALUE(0x1018,local_a);
    if (*pfVar2 < pfVar3[5]) {
      M007_PUTVALUE(0x1018,*(undefined2 *)(pfVar3 + 5),*(undefined2 *)((int)pfVar3 + 0x16));
    }
    M007_PUTLOW(0x1018,*(undefined2 *)(pfVar3 + 5),*(undefined2 *)((int)pfVar3 + 0x16));
  }
  return;
}


// ---- FUN_1000_c7d2 @ 1000:c7d2

void __cdecl16near FUN_1000_c7d2(void)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 *puVar3;
  float *pfVar4;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  float local_32;
  float local_2e;
  float local_2a;
  float local_26;
  float local_22;
  undefined1 local_1e [4];
  float local_1a;
  float local_16;
  undefined1 local_12 [4];
  float local_e;
  undefined4 local_a;
  undefined4 local_6;
  
  if (DAT_1010_0171 == '\x01') {
    puVar3 = (undefined2 *)M007_GETVALUE(unaff_CS,&local_a);
    local_6 = (float)CONCAT22(puVar3[1],*puVar3);
    M007_PUTHIGH(0x1018,*puVar3,puVar3[1]);
    puVar3 = (undefined2 *)M007_GETVALUE(0x1018,&local_e);
    local_6 = (float)CONCAT22(puVar3[1],*puVar3);
    M007_PUTLOW(0x1018,*puVar3,puVar3[1]);
    pfVar4 = (float *)M007_GETHIGH();
    local_22 = *pfVar4;
    pfVar4 = (float *)M007_GETVALUE(0x1018,&local_16);
    M007_PUTHIGH(0x1018,local_22 - *pfVar4);
    pfVar4 = (float *)M007_GETLOW();
    local_26 = *pfVar4;
    pfVar4 = (float *)M007_GETVALUE(0x1018,local_1e);
    unaff_CS = 0x1018;
    M007_PUTLOW(0x1018,local_26 - *pfVar4);
  }
  if (DAT_1010_0172 == '\x01') {
    puVar3 = (undefined2 *)M007_GETVALUE(unaff_CS,&local_26);
    local_6 = (float)CONCAT22(puVar3[1],*puVar3);
    M007_PUTHIGH(0x1018,*puVar3,puVar3[1]);
    puVar3 = (undefined2 *)M007_GETVALUE(0x1018,&local_22);
    local_6 = (float)CONCAT22(puVar3[1],*puVar3);
    M007_PUTLOW(0x1018,*puVar3,puVar3[1]);
    pfVar4 = (float *)M007_GETHIGH();
    local_e = *pfVar4;
    pfVar4 = (float *)M007_GETVALUE(0x1018,&local_1a);
    M007_PUTHIGH(0x1018,local_e - *pfVar4);
    pfVar4 = (float *)M007_GETLOW(0x1018,&local_16);
    local_a = *pfVar4;
    pfVar4 = (float *)M007_GETVALUE(0x1018,local_12);
    unaff_CS = 0x1018;
    M007_PUTLOW(0x1018,local_a - *pfVar4);
  }
  if (DAT_1010_0175 == '\x01') {
    puVar3 = (undefined2 *)M007_GETVALUE(unaff_CS,&local_26);
    local_6 = (float)CONCAT22(puVar3[1],*puVar3);
    M007_PUTHIGH(0x1018,*puVar3,puVar3[1]);
    pfVar4 = (float *)M007_GETVALUE(0x1018,&local_22);
    local_6 = *pfVar4;
    local_a._2_2_ = (undefined2)((ulong)local_6 >> 0x10);
    uVar1 = local_a._2_2_;
    local_a._0_2_ = SUB42(local_6,0);
    uVar2 = (undefined2)local_a;
    local_a = local_6;
    M007_PUTLOW(0x1018,uVar2,uVar1);
    pfVar4 = (float *)M007_GETHIGH();
    local_2a = *pfVar4;
    pfVar4 = (float *)M007_GETVALUE(0x1018,&local_1a);
    M007_PUTHIGH(0x1018,local_2a - *pfVar4);
    pfVar4 = (float *)M007_GETLOW(0x1018,&local_16);
    local_2e = *pfVar4;
    pfVar4 = (float *)M007_GETVALUE(0x1018,local_12);
    M007_PUTLOW(0x1018,local_2e - *pfVar4);
    M007_PUTLOW();
    local_32 = local_a;
    unaff_CS = 0x1018;
    pfVar4 = (float *)M007_GETVALUE();
    if (*pfVar4 < local_32) {
      unaff_CS = 0x1018;
      M007_PUTVALUE(0x1018,local_32);
    }
  }
  if (DAT_1010_0174 == '\x01') {
    puVar3 = (undefined2 *)M007_GETVALUE(unaff_CS,&local_32);
    local_6 = (float)CONCAT22(puVar3[1],*puVar3);
    M007_PUTHIGH(0x1018,*puVar3,puVar3[1]);
    puVar3 = (undefined2 *)M007_GETVALUE(0x1018,&local_2e);
    local_6 = (float)CONCAT22(puVar3[1],*puVar3);
    M007_PUTLOW(0x1018,*puVar3,puVar3[1]);
    pfVar4 = (float *)M007_GETHIGH();
    local_1a = *pfVar4;
    pfVar4 = (float *)M007_GETVALUE(0x1018,&local_26);
    M007_PUTHIGH(0x1018,local_1a - *pfVar4);
    pfVar4 = (float *)M007_GETLOW(0x1018,&local_22);
    local_16 = *pfVar4;
    pfVar4 = (float *)M007_GETVALUE(0x1018,local_1e);
    unaff_CS = 0x1018;
    M007_PUTLOW(0x1018,local_16 - *pfVar4);
  }
  if (DAT_1010_0176 == '\x01') {
    puVar3 = (undefined2 *)M007_GETVALUE(unaff_CS,&local_32);
    local_6 = (float)CONCAT22(puVar3[1],*puVar3);
    M007_PUTHIGH(0x1018,*puVar3,puVar3[1]);
    puVar3 = (undefined2 *)M007_GETVALUE(0x1018,&local_2e);
    local_6 = (float)CONCAT22(puVar3[1],*puVar3);
    M007_PUTLOW(0x1018,*puVar3,puVar3[1]);
    pfVar4 = (float *)M007_GETHIGH();
    local_1a = *pfVar4;
    pfVar4 = (float *)M007_GETVALUE(0x1018,&local_26);
    M007_PUTHIGH(0x1018,local_1a - *pfVar4);
    pfVar4 = (float *)M007_GETLOW(0x1018,&local_22);
    local_16 = *pfVar4;
    pfVar4 = (float *)M007_GETVALUE(0x1018,local_1e);
    M007_PUTLOW(0x1018,local_16 - *pfVar4);
  }
  return;
}


// ---- FUN_1000_cc4c @ 1000:cc4c

void __cdecl16near FUN_1000_cc4c(undefined2 *param_1)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  undefined2 unaff_CS;
  
  puVar1 = (undefined2 *)param_1;
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  if (DAT_1010_0171 == '\x01') {
    M007_PUTHIGH(unaff_CS,*param_1,puVar1[1]);
    M007_PUTHIGH(0x1018,*param_1,puVar1[1]);
    M007_PUTHIGH(0x1018,*param_1,puVar1[1]);
    unaff_CS = 0x1018;
    M007_PUTHIGH(0x1018,*param_1,puVar1[1]);
  }
  if (DAT_1010_0172 == '\x01') {
    M007_PUTHIGH(unaff_CS,puVar1[2],puVar1[3]);
    M007_PUTHIGH(0x1018,puVar1[2],puVar1[3]);
    M007_PUTHIGH(0x1018,puVar1[2],puVar1[3]);
    unaff_CS = 0x1018;
    M007_PUTHIGH(0x1018,puVar1[2],puVar1[3]);
  }
  if (DAT_1010_0175 == '\x01') {
    M007_PUTHIGH(unaff_CS,puVar1[4],puVar1[5]);
    M007_PUTHIGH(0x1018,puVar1[4],puVar1[5]);
    M007_PUTHIGH(0x1018,puVar1[4],puVar1[5]);
    unaff_CS = 0x1018;
    M007_PUTHIGH(0x1018,puVar1[4],puVar1[5]);
  }
  if (DAT_1010_0174 == '\x01') {
    M007_PUTHIGH(unaff_CS,puVar1[6],puVar1[7]);
    M007_PUTHIGH(0x1018,puVar1[6],puVar1[7]);
    unaff_CS = 0x1018;
    M007_PUTHIGH(0x1018,puVar1[6],puVar1[7]);
  }
  if (DAT_1010_0176 == '\x01') {
    M007_PUTHIGH(unaff_CS,puVar1[10],puVar1[0xb]);
    M007_PUTHIGH(0x1018,puVar1[10],puVar1[0xb]);
  }
  return;
}


// ---- FUN_1000_cdb4 @ 1000:cdb4

void __cdecl16near FUN_1000_cdb4(void)

{
  bool bVar1;
  int iVar2;
  undefined2 unaff_CS;
  undefined2 uVar3;
  undefined2 uVar4;
  
  bVar1 = true;
  if (DAT_1010_0170 == '\x01') {
    uVar3 = unaff_CS;
    if (DAT_1010_0171 == '\x01') {
      FUN_1000_9c02(0x1284,0x1010,0x968,0x1010);
      uVar3 = 0x1018;
      iVar2 = LSTRCMP(unaff_CS,0x96a,0x1010,0x1284);
      if (iVar2 == 0) {
        bVar1 = false;
      }
    }
    uVar4 = uVar3;
    if (DAT_1010_0172 == '\x01') {
      FUN_1000_9c02(0x127a,0x1010,0x972,0x1010);
      uVar4 = 0x1018;
      iVar2 = LSTRCMP(uVar3,0x96a,0x1010,0x127a);
      if (iVar2 == 0) {
        bVar1 = false;
      }
    }
    uVar3 = uVar4;
    if (DAT_1010_0175 == '\x01') {
      FUN_1000_9c02(0x128e,0x1010,0x974,0x1010);
      uVar3 = 0x1018;
      iVar2 = LSTRCMP(uVar4,0x96a,0x1010,0x128e);
      if (iVar2 == 0) {
        bVar1 = false;
      }
    }
    uVar4 = uVar3;
    if (DAT_1010_0174 == '\x01') {
      FUN_1000_9c02(0x1270,0x1010,0x976,0x1010);
      uVar4 = 0x1018;
      iVar2 = LSTRCMP(uVar3,0x96a,0x1010,0x1270);
      if (iVar2 == 0) {
        bVar1 = false;
      }
    }
    uVar3 = uVar4;
    if (DAT_1010_0173 == '\x01') {
      FUN_1000_9c02(0x1266,0x1010,0x978,0x1010);
      uVar3 = 0x1018;
      iVar2 = LSTRCMP(uVar4,0x96a,0x1010,0x1266);
      if (iVar2 == 0) {
        bVar1 = false;
      }
    }
    if (bVar1) {
      DAT_1010_0170 = '\0';
      uVar4 = uVar3;
      if (DAT_1010_0171 == '\x01') {
        uVar4 = 0x1018;
        UIF_MESSAGE(uVar3,0x1284,0x1010);
      }
      uVar3 = uVar4;
      if (DAT_1010_0172 == '\x01') {
        uVar3 = 0x1018;
        UIF_MESSAGE(uVar4,0x127a,0x1010);
      }
      uVar4 = uVar3;
      if (DAT_1010_0175 == '\x01') {
        uVar4 = 0x1018;
        UIF_MESSAGE(uVar3,0x128e,0x1010);
      }
      uVar3 = uVar4;
      if (DAT_1010_0174 == '\x01') {
        uVar3 = 0x1018;
        UIF_MESSAGE(uVar4,0x1270,0x1010);
      }
      if (DAT_1010_0173 == '\x01') {
        UIF_MESSAGE(uVar3,0x1266,0x1010);
      }
    }
  }
  return;
}


// ---- FUN_1000_cf00 @ 1000:cf00

void __cdecl16near FUN_1000_cf00(char *param_1)

{
  char *pcVar1;
  undefined2 uVar2;
  undefined2 unaff_CS;
  
  if ((DAT_1010_0171 == '\x01') && ((*param_1 == '\x01' || (*param_1 == '\x02')))) {
    UIF_LOG(unaff_CS,0x1000,0,0);
    unaff_CS = 0x1018;
  }
  pcVar1 = (char *)param_1;
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  if ((DAT_1010_0172 == '\x01') && ((pcVar1[1] == '\x01' || (pcVar1[1] == '\x02')))) {
    UIF_LOG(unaff_CS,0x1000,0,0);
    unaff_CS = 0x1018;
  }
  if ((DAT_1010_0175 == '\x01') && ((pcVar1[2] == '\x01' || (pcVar1[2] == '\x02')))) {
    UIF_LOG(unaff_CS,0x1000,0,0);
    unaff_CS = 0x1018;
  }
  if ((DAT_1010_0174 == '\x01') && ((pcVar1[3] == '\x01' || (pcVar1[3] == '\x02')))) {
    UIF_LOG(unaff_CS,0x1000,0,0);
    unaff_CS = 0x1018;
  }
  if ((DAT_1010_0173 == '\x01') && ((pcVar1[4] == '\x01' || (pcVar1[4] == '\x02')))) {
    UIF_LOG(unaff_CS,0x1000,0,0);
    unaff_CS = 0x1018;
  }
  if ((DAT_1010_0176 == '\x01') && ((pcVar1[5] == '\x01' || (pcVar1[5] == '\x02')))) {
    UIF_LOG(unaff_CS,0x1000,0,0);
    return;
  }
  return;
}


// ---- FUN_1000_d008 @ 1000:d008

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16near FUN_1000_d008(void)

{
  float fVar1;
  double dVar2;
  int iVar3;
  float *pfVar4;
  double *pdVar5;
  undefined2 unaff_SS;
  long lVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  undefined2 local_5e;
  undefined2 uStack_5c;
  undefined4 local_5a;
  undefined1 local_46 [4];
  undefined1 local_42 [4];
  undefined1 local_3e [4];
  undefined1 local_3a [4];
  undefined1 local_36 [4];
  undefined1 local_32 [4];
  undefined1 local_2e [4];
  undefined1 local_2a [4];
  float local_26;
  undefined4 local_22;
  float local_1e;
  undefined4 local_1a;
  long local_16;
  float local_12;
  float local_e;
  float local_a;
  float local_6;
  
  iVar3 = M007_GETSTATE();
  if (iVar3 == 0) {
    M007_PUTSTATE(0x1018,1);
    return;
  }
  pfVar4 = (float *)M007_GETVALUE(0x1018,local_2a);
  local_26 = *pfVar4 * DAT_1010_0b80 + DAT_1010_0b84;
  pfVar4 = (float *)M007_GETVALUE(0x1018,local_2e);
  fVar1 = local_26;
  local_1e = local_26 * *pfVar4;
  pfVar4 = (float *)M007_GETVALUE(0x1018,local_32);
  local_22 = *pfVar4 * fVar1;
  pfVar4 = (float *)M007_GETVALUE(0x1018,local_36);
  fVar1 = *pfVar4;
  uVar10 = 0xfa;
  pfVar4 = (float *)M007_GETVALUE(0x1018,local_3a);
  local_e = fVar1 - *pfVar4;
  uVar9 = 0xfe;
  pfVar4 = (float *)M007_GETVALUE(0x1018,local_3e);
  fVar1 = *pfVar4;
  uVar8 = 0xfb;
  pfVar4 = (float *)M007_GETVALUE(0x1018,local_42);
  local_12 = fVar1 - *pfVar4;
  uVar7 = 0x8d;
  pfVar4 = (float *)M007_GETVALUE(0x1018,local_46);
  dVar2 = (double)(*pfVar4 * DAT_1010_0b68);
  pdVar5 = (double *)
           FUN_1000_0223(SUB82(dVar2,0),(int)((qword)dVar2 >> 0x10),(int)((qword)dVar2 >> 0x20),
                         (int)((qword)dVar2 >> 0x30),uVar7,uVar8,uVar9,uVar10);
  local_e = local_12 * (float)*pdVar5 + local_e;
  local_6 = local_e / local_1e;
  local_a = local_12 / local_22;
  if (local_6 < _DAT_1010_0b74) {
    local_1e = -local_1e;
  }
  if (local_a < _DAT_1010_0b74) {
    local_22 = -local_22;
  }
  dVar2 = (double)local_6;
  FUN_1000_0298(SUB82(dVar2,0),(int)((qword)dVar2 >> 0x10),(int)((qword)dVar2 >> 0x20),
                (int)((qword)dVar2 >> 0x30));
  local_1a = FUN_1000_0264();
  local_1a = local_1a + 1;
  dVar2 = (double)local_a;
  FUN_1000_0298(SUB82(dVar2,0),(int)((qword)dVar2 >> 0x10),(int)((qword)dVar2 >> 0x20),
                (int)((qword)dVar2 >> 0x30));
  lVar6 = FUN_1000_0264();
  local_16 = lVar6 + 1;
  if (((int)local_1a == 1) && (local_1a._2_2_ == 0)) {
    local_1e = _DAT_1010_0b74;
  }
  fVar1 = local_1e;
  if (((int)lVar6 == 0) && ((int)((ulong)(lVar6 + 1) >> 0x10) == 0)) {
    local_22 = _DAT_1010_0b74;
  }
  uVar10 = 0x90;
  uStack_5c = (undefined2)((ulong)local_1e >> 0x10);
  local_5e = SUB42(local_1e,0);
  M007_PUTVALUE(0x1018,local_5e,uStack_5c);
  uVar9 = 0x91;
  M007_PUTVALUE(0x1018,(undefined2)local_22,local_22._2_2_);
  uVar8 = 0x8e;
  M007_PUTVALUE(0x1018,(float)local_1a);
  uVar7 = 0x8f;
  M007_PUTVALUE(0x1018,(float)local_16);
  FUN_1000_d296(uVar7,uVar8,uVar9,uVar10);
  local_5a = CONCAT22(local_1a._2_2_ - (uint)((int)local_1a == 0),(int)local_1a + -1);
  DAT_1010_0178 = (float)local_5a * fVar1;
  return;
}


// ---- FUN_1000_d296 @ 1000:d296

void __cdecl16near FUN_1000_d296(void)

{
  char cVar1;
  undefined2 unaff_CS;
  undefined2 uVar2;
  undefined1 local_2a [4];
  undefined1 local_26 [4];
  undefined4 local_22;
  undefined4 local_1e;
  undefined1 local_1a [24];
  
  uVar2 = 0x8e;
  M007_GETVALUE(unaff_CS,local_26);
  local_22 = FUN_1000_0264(uVar2);
  uVar2 = 0x8f;
  M007_GETVALUE(0x1018,local_2a);
  local_1e = FUN_1000_0264(uVar2);
  FUN_1000_abca(1,0,1,0,local_1a);
  cVar1 = FUN_1000_ade8(local_1a);
  if (cVar1 != '\0') {
    FUN_1000_abca(local_22,1,0,local_1a);
    cVar1 = FUN_1000_ade8(local_1a);
    if (cVar1 != '\0') {
      FUN_1000_abca(1,0,local_1e,local_1a);
      cVar1 = FUN_1000_ade8(local_1a);
      if (cVar1 != '\0') {
        FUN_1000_abca(local_22,local_1e,local_1a);
        cVar1 = FUN_1000_ade8(local_1a);
        if (cVar1 != '\0') {
          uVar2 = 0;
          goto LAB_1000_d36c;
        }
      }
    }
  }
  uVar2 = 1;
LAB_1000_d36c:
  M007_PUTSTATE(0x1018,uVar2);
  return;
}


// ---- FUN_1000_d374 @ 1000:d374

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16near FUN_1000_d374(void)

{
  float fVar1;
  float *pfVar2;
  double *pdVar3;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined1 local_1e [4];
  undefined1 local_1a [4];
  undefined1 local_16 [4];
  float local_12;
  float local_e;
  float local_a;
  float local_6;
  
  pfVar2 = (float *)M007_GETVALUE(unaff_CS,local_16);
  local_6 = *pfVar2 * DAT_1010_0b80 + DAT_1010_0b84;
  uVar7 = 0xfd;
  pfVar2 = (float *)M007_GETVALUE(0x1018,local_1a);
  fVar1 = *pfVar2;
  uVar6 = 0xfa;
  pfVar2 = (float *)M007_GETVALUE(0x1018,local_1e);
  local_a = fVar1 - *pfVar2;
  uVar5 = 0xfe;
  pfVar2 = (float *)M007_GETVALUE();
  fVar1 = *pfVar2;
  uVar4 = 0xfb;
  pfVar2 = (float *)M007_GETVALUE();
  local_e = fVar1 - *pfVar2;
  if (local_e == _DAT_1010_0b74) {
    M007_PUTVALUE(0x1018);
    return;
  }
  pdVar3 = (double *)
           FUN_1000_0243((double)((DAT_1010_0178 / local_6 - local_a) / local_e),uVar4,uVar5,uVar6,
                         uVar7);
  local_12 = DAT_1010_0b88 * (float)*pdVar3;
  if (local_12 <= _DAT_1010_0b8c) {
    if (local_12 < _DAT_1010_0b90) {
      local_12 = _DAT_1010_0b90;
    }
  }
  else {
    local_12 = _DAT_1010_0b8c;
  }
  uVar4 = 0x8d;
  M007_PUTVALUE();
  FUN_1000_d008(uVar4);
  return;
}


// ---- FUN_1000_d4a8 @ 1000:d4a8

void __cdecl16near FUN_1000_d4a8(undefined2 param_1,undefined2 param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = 0x31;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 0) {
    FUN_1000_d59a(param_1,param_2,uVar2);
  }
  else if (iVar1 == 1) {
    FUN_1000_d4f2(param_1,param_2);
  }
  else if (iVar1 == 2) {
    FUN_1000_d698(param_1,param_2);
  }
  else {
    if (iVar1 != 3) {
      return;
    }
    FUN_1000_d790(param_1,param_2);
  }
  return;
}


// ---- FUN_1000_d4f2 @ 1000:d4f2

undefined2 __cdecl16near FUN_1000_d4f2(undefined2 *param_1)

{
  undefined2 *puVar1;
  undefined2 unaff_CS;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined2 uVar5;
  undefined1 local_12 [4];
  undefined1 local_e [4];
  int local_a;
  int local_8;
  undefined4 local_6;
  
  uVar5 = 0x94;
  M007_GETVALUE(unaff_CS,local_e);
  local_6 = FUN_1000_0264(uVar5);
  uVar5 = 0x95;
  M007_GETVALUE(0x1018,local_12);
  uVar3 = FUN_1000_0264(uVar5);
  bVar2 = (int)local_6 == 0;
  local_6._0_2_ = (int)local_6 + -1;
  local_6._2_2_ = local_6._2_2_ - (uint)bVar2;
  uVar4 = CONCAT22(local_6._2_2_,(int)local_6);
  if ((local_6._2_2_ < 1) &&
     ((local_6._2_2_ < 0 || (uVar4 = CONCAT22(local_6._2_2_,(int)local_6), (int)local_6 == 0)))) {
    local_a = (int)uVar3 + -1;
    local_8 = (int)((ulong)uVar3 >> 0x10) - (uint)((int)uVar3 == 0);
    if ((local_8 < 1) && ((local_8 < 0 || (local_a == 0)))) {
      return 1;
    }
    uVar5 = 0x8f;
    M007_GETVALUE(0x1018,local_12);
    uVar4 = FUN_1000_0264(uVar5);
    uVar3 = CONCAT22(local_8,local_a);
  }
  local_6._2_2_ = (int)((ulong)uVar4 >> 0x10);
  local_6._0_2_ = (int)uVar4;
  local_8 = (int)((ulong)uVar3 >> 0x10);
  local_a = (int)uVar3;
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  puVar1 = (undefined2 *)param_1;
  *param_1 = (int)local_6;
  puVar1[1] = local_6._2_2_;
  puVar1[2] = local_a;
  puVar1[3] = local_8;
  return 0;
}


// ---- FUN_1000_d59a @ 1000:d59a

/* WARNING: Removing unreachable block (ram,0x1000d5fc) */

uint __cdecl16near FUN_1000_d59a(undefined2 *param_1)

{
  int iVar1;
  ulong uVar2;
  undefined2 *puVar3;
  undefined2 unaff_CS;
  bool bVar4;
  long lVar5;
  long lVar6;
  undefined2 uVar7;
  undefined1 local_16 [4];
  undefined1 local_12 [4];
  undefined1 local_e [4];
  undefined4 local_a;
  undefined4 local_6;
  
  uVar7 = 0x94;
  M007_GETVALUE(unaff_CS,local_e);
  local_6 = FUN_1000_0264(uVar7);
  uVar7 = 0x95;
  M007_GETVALUE(0x1018,local_12);
  local_a = FUN_1000_0264(uVar7);
  if ((local_a & 1) == 0) {
    uVar7 = 0x8e;
    M007_GETVALUE(0x1018,local_16);
    lVar5 = FUN_1000_0264(uVar7);
    local_6 = local_6 + 1;
    uVar2 = local_a;
    lVar6 = local_6;
    if (lVar5 < local_6) {
      bVar4 = (uint)local_a == 0;
      local_a._0_2_ = (uint)local_a + -1;
      local_a._2_2_ = local_a._2_2_ - (uint)bVar4;
      if ((local_a._2_2_ < 1) && ((local_a._2_2_ < 0 || ((uint)local_a == 0)))) {
LAB_1000_d61e:
        return CONCAT11((char)((uint)local_a >> 8),1);
      }
      uVar7 = 0x8e;
      M007_GETVALUE(0x1018,local_16);
      lVar6 = FUN_1000_0264(uVar7);
      uVar2 = CONCAT22(local_a._2_2_,(uint)local_a);
    }
  }
  else {
    iVar1 = (int)local_6 + -1;
    local_6._2_2_ = local_6._2_2_ - (uint)((int)local_6 == 0);
    uVar2 = local_a;
    lVar6 = CONCAT22(local_6._2_2_,iVar1);
    if ((local_6._2_2_ < 1) &&
       ((local_6._2_2_ < 0 || (lVar6 = CONCAT22(local_6._2_2_,iVar1), iVar1 == 0)))) {
      iVar1 = (int)(local_a >> 0x10) - (uint)((uint)local_a == 0);
      uVar2 = CONCAT22(iVar1,(uint)local_a + -1);
      if ((iVar1 < 1) && ((iVar1 < 0 || ((uint)local_a + -1 == 0)))) goto LAB_1000_d61e;
      lVar6 = 1;
    }
  }
  local_6._2_2_ = (int)((ulong)lVar6 >> 0x10);
  local_6._0_2_ = (int)lVar6;
  local_a._2_2_ = (int)(uVar2 >> 0x10);
  local_a._0_2_ = (uint)uVar2;
  uVar7 = (undefined2)((ulong)param_1 >> 0x10);
  puVar3 = (undefined2 *)param_1;
  *param_1 = (int)local_6;
  puVar3[1] = local_6._2_2_;
  puVar3[2] = (uint)local_a;
  puVar3[3] = local_a._2_2_;
  return (uint)local_a & 0xff00;
}


// ---- FUN_1000_d698 @ 1000:d698

/* WARNING: Removing unreachable block (ram,0x1000d6fc) */

uint __cdecl16near FUN_1000_d698(undefined2 *param_1)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined2 unaff_CS;
  bool bVar6;
  long lVar7;
  long lVar8;
  undefined2 uVar9;
  undefined1 local_16 [4];
  undefined1 local_12 [4];
  undefined1 local_e [4];
  undefined4 local_a;
  undefined4 local_6;
  
  uVar9 = 0x94;
  M007_GETVALUE(unaff_CS,local_e);
  local_6 = FUN_1000_0264(uVar9);
  uVar9 = 0x95;
  M007_GETVALUE(0x1018,local_12);
  local_a = FUN_1000_0264(uVar9);
  iVar4 = (int)local_a;
  if ((local_6 & 1) == 0) {
    uVar9 = 0x8f;
    M007_GETVALUE(0x1018,local_16);
    lVar7 = FUN_1000_0264(uVar9);
    iVar4 = (int)lVar7;
    local_a = local_a + 1;
    uVar3 = local_6;
    lVar8 = local_a;
    if (lVar7 < local_a) {
      bVar6 = (int)local_6 == 0;
      local_6._0_2_ = (int)local_6 + -1;
      local_6._2_2_ = local_6._2_2_ - (uint)bVar6;
      if ((local_6._2_2_ < 1) && ((local_6._2_2_ < 0 || ((int)local_6 == 0)))) {
LAB_1000_d717:
        return CONCAT11((char)((uint)iVar4 >> 8),1);
      }
      uVar9 = 0x8f;
      M007_GETVALUE(0x1018,local_16);
      lVar8 = FUN_1000_0264(uVar9);
      uVar3 = CONCAT22(local_6._2_2_,(int)local_6);
    }
  }
  else {
    iVar1 = iVar4 + -1;
    iVar2 = (int)((ulong)local_a >> 0x10) - (uint)(iVar4 == 0);
    uVar3 = local_6;
    lVar8 = CONCAT22(iVar2,iVar1);
    if ((iVar2 < 1) && ((iVar2 < 0 || (lVar8 = CONCAT22(iVar2,iVar1), iVar1 == 0)))) {
      local_6._2_2_ = local_6._2_2_ - (uint)((int)local_6 == 0);
      uVar3 = CONCAT22(local_6._2_2_,(int)local_6 + -1);
      if ((local_6._2_2_ < 1) && ((local_6._2_2_ < 0 || ((int)local_6 + -1 == 0))))
      goto LAB_1000_d717;
      lVar8 = 1;
    }
  }
  local_a._2_2_ = (undefined2)((ulong)lVar8 >> 0x10);
  local_a._0_2_ = (uint)lVar8;
  local_6._2_2_ = (int)(uVar3 >> 0x10);
  local_6._0_2_ = (int)uVar3;
  uVar9 = (undefined2)((ulong)param_1 >> 0x10);
  puVar5 = (undefined2 *)param_1;
  *param_1 = (int)local_6;
  puVar5[1] = local_6._2_2_;
  puVar5[2] = (uint)local_a;
  puVar5[3] = local_a._2_2_;
  return (uint)local_a & 0xff00;
}


// ---- FUN_1000_d790 @ 1000:d790

undefined2 __cdecl16near FUN_1000_d790(undefined2 *param_1)

{
  undefined2 *puVar1;
  undefined2 unaff_CS;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined2 uVar5;
  undefined1 local_12 [4];
  undefined1 local_e [4];
  int local_a;
  int local_8;
  undefined4 local_6;
  
  uVar5 = 0x94;
  M007_GETVALUE(unaff_CS,local_e);
  local_6 = FUN_1000_0264(uVar5);
  uVar5 = 0x95;
  M007_GETVALUE(0x1018,local_12);
  uVar3 = FUN_1000_0264(uVar5);
  local_a = (int)uVar3 + -1;
  local_8 = (int)((ulong)uVar3 >> 0x10) - (uint)((int)uVar3 == 0);
  uVar3 = local_6;
  uVar4 = CONCAT22(local_8,local_a);
  if ((local_8 < 1) && ((local_8 < 0 || (uVar4 = CONCAT22(local_8,local_a), local_a == 0)))) {
    bVar2 = (int)local_6 == 0;
    local_6._0_2_ = (int)local_6 + -1;
    local_6._2_2_ = local_6._2_2_ - (uint)bVar2;
    if ((local_6._2_2_ < 1) && ((local_6._2_2_ < 0 || ((int)local_6 == 0)))) {
      return 1;
    }
    uVar5 = 0x8f;
    M007_GETVALUE(0x1018,local_12);
    uVar4 = FUN_1000_0264(uVar5);
    uVar3 = CONCAT22(local_6._2_2_,(int)local_6);
  }
  local_8 = (int)((ulong)uVar4 >> 0x10);
  local_a = (int)uVar4;
  local_6._2_2_ = (int)((ulong)uVar3 >> 0x10);
  local_6._0_2_ = (int)uVar3;
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  puVar1 = (undefined2 *)param_1;
  *param_1 = (int)local_6;
  puVar1[1] = local_6._2_2_;
  puVar1[2] = local_a;
  puVar1[3] = local_8;
  return 0;
}


// ---- FUN_1000_d838 @ 1000:d838

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16near FUN_1000_d838(undefined2 param_1,undefined2 param_2,float param_3)

{
  if (param_3 == _DAT_1010_0b74) {
    return;
  }
  FUN_1000_0264();
  return;
}


// ---- FUN_1000_d95a @ 1000:d95a

void __cdecl16near FUN_1000_d95a(void)

{
  undefined2 unaff_CS;
  long lVar1;
  undefined2 uVar2;
  uint uVar3;
  undefined2 uVar4;
  
  uVar4 = 0x1010;
  DAT_1010_032e = LOADLIBRARY(unaff_CS,0x97a);
  if (DAT_1010_032e < 0x21) {
    MESSAGEBOX(0x1018,0x30,0x2c0,0x1010,0x99a,0x1010);
    lVar1 = CONCAT22(DAT_1010_10d8,DAT_1010_10d6);
  }
  else {
    uVar3 = DAT_1010_032e;
    lVar1 = GETPROCADDRESS(0x1018,7,0);
    DAT_1010_10d8 = (undefined2)((ulong)lVar1 >> 0x10);
    DAT_1010_10d6 = (undefined2)lVar1;
    if (lVar1 == 0) {
      uVar2 = 0;
      MESSAGEBOX(0x1018,0x30,0x2c0,0x1010,0x984,0x1010);
      FREELIBRARY(0x1018,DAT_1010_032e,uVar2,uVar3,uVar4);
      return;
    }
  }
  DAT_1010_10d8 = (undefined2)((ulong)lVar1 >> 0x10);
  DAT_1010_10d6 = (undefined2)lVar1;
  return;
}


// ---- FUN_1000_d9b2 @ 1000:d9b2

void __cdecl16near FUN_1000_d9b2(void)

{
  FREELIBRARY();
  DAT_1010_10d8 = 0;
  DAT_1010_10d6 = 0;
  return;
}


// ---- SWITCHHCSTAGE @ 1000:d9c4

void __stdcall16far SWITCHHCSTAGE(int param_1)

{
  undefined2 uVar1;
  undefined2 unaff_CS;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 local_a;
  undefined2 local_8;
  int local_6;
  int local_4;
  
  uVar3 = 0x1010;
  uVar2 = 0;
  uVar1 = LOADCURSOR(unaff_CS,0x7f02,0);
  SETCURSOR(0x1018,uVar1,uVar2,uVar3);
  uVar3 = 0x1010;
  uVar2 = 0x9aa;
  uVar1 = 0x1018;
  local_6 = GETMODULEHANDLE(0x1018,0x9aa);
  if (param_1 == 1) {
    if (local_6 == 0) {
      uVar2 = 0x1010;
      uVar1 = 0x318;
      local_4 = WINEXEC(0x1018,2,0x318);
      if (local_4 < 0x20) {
        if (local_4 == 0) {
          uVar2 = 0x2d4;
          uVar1 = 0;
        }
        else {
          if (local_4 == 2) {
            uVar2 = 0x2e2;
          }
          else if (local_4 == 3) {
            uVar2 = 0x2f2;
          }
          else {
            uVar2 = 0x302;
          }
          uVar1 = 0x10;
        }
        MESSAGEBOX(0x1018,uVar1,0x318,0x1010,uVar2,0x1010);
        param_1 = 0;
        goto LAB_1000_da52;
      }
    }
    FUN_1000_d95a(uVar1,uVar2);
  }
  else {
    FUN_1000_d9b2(uVar3);
  }
LAB_1000_da52:
  GETCURSORPOS(0x1018,&local_a);
  SETCURSORPOS(0x1018,local_8,local_a);
  M007_PUTSTATE(0x1018,param_1);
  return;
}


// ---- FUN_1000_da7e @ 1000:da7e

void __cdecl16near FUN_1000_da7e(void)

{
  double *pdVar1;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined1 local_202 [512];
  
  if (DAT_1010_0330 == 0) {
    GETPRIVATEPROFILESTRING
              (unaff_CS,0x9b4,0x1010,0x200,local_202,unaff_SS,0x93a,0x1010,0x9c0,0x1010,0x95c);
    pdVar1 = (double *)FUN_1000_e582(local_202);
    DAT_1010_0332 = (float)*pdVar1;
    M007_PUTVALUE(0x1018,DAT_1010_0332);
    GETPRIVATEPROFILESTRING
              (0x1018,0x9b4,0x1010,0x200,local_202,unaff_SS,0x93a,0x1010,0x9d6,0x1010,0x95c);
    pdVar1 = (double *)FUN_1000_e582(local_202);
    DAT_1010_0336 = (float)*pdVar1;
    GETPRIVATEPROFILESTRING
              (0x1018,0x9b4,0x1010,0x200,local_202,unaff_SS,0x93a,0x1010,0x9e6,0x1010,0x95c);
    pdVar1 = (double *)FUN_1000_e582(local_202);
    DAT_1010_033a = (float)*pdVar1;
    DAT_1010_0330 = 1;
  }
  return;
}


// ---- FUN_1000_db44 @ 1000:db44

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16near FUN_1000_db44(void)

{
  undefined2 *puVar1;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined1 local_1a [4];
  undefined1 local_16 [4];
  undefined1 local_12 [4];
  undefined1 local_e [4];
  undefined1 local_a [4];
  undefined1 local_6 [4];
  
  puVar1 = (undefined2 *)M007_GETVALUE(unaff_CS,local_6);
  DAT_1010_10de = *puVar1;
  _DAT_1010_10e0 = puVar1[1];
  puVar1 = (undefined2 *)M007_GETVALUE(0x1018,local_a);
  DAT_1010_10e2._0_2_ = *puVar1;
  DAT_1010_10e2._2_2_ = puVar1[1];
  puVar1 = (undefined2 *)M007_GETVALUE(0x1018,local_e);
  DAT_1010_10e6._0_2_ = *puVar1;
  DAT_1010_10e6._2_2_ = puVar1[1];
  puVar1 = (undefined2 *)M007_GETVALUE(0x1018,local_12);
  DAT_1010_10ea._0_2_ = *puVar1;
  DAT_1010_10ea._2_2_ = puVar1[1];
  puVar1 = (undefined2 *)M007_GETVALUE(0x1018,local_16);
  DAT_1010_10ee = *puVar1;
  _DAT_1010_10f0 = puVar1[1];
  puVar1 = (undefined2 *)M007_GETVALUE(0x1018,local_1a);
  DAT_1010_10f2 = *puVar1;
  DAT_1010_10f4 = puVar1[1];
  return;
}


// ---- FUN_1000_dbf2 @ 1000:dbf2

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16near FUN_1000_dbf2(void)

{
  undefined1 *puVar1;
  float *pfVar2;
  undefined2 unaff_SS;
  undefined1 *puVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined1 local_19c [4];
  undefined2 local_198;
  undefined1 local_196 [100];
  undefined1 local_132 [100];
  undefined1 local_ce [100];
  undefined1 local_6a [100];
  undefined1 *local_6;
  int local_4;
  
  local_4 = 0;
  puVar1 = (undefined1 *)HLEOUIFLANGUAGE();
  local_6 = puVar1;
  LOADSTRING(0x1018,100,local_6a,unaff_SS,0x772);
  local_198 = FUN_1000_0264(puVar1);
  uVar7 = 0x96;
  puVar1 = local_19c;
  uVar6 = 0x1018;
  pfVar2 = (float *)M007_GETVALUE(0x1018,puVar1);
  if (*pfVar2 < _DAT_1010_10de) {
    puVar1 = local_6;
    LOADSTRING(0x1018,100,local_196,unaff_SS,0x773);
    uVar6 = local_198;
    _WSPRINTF(0x1018,local_132);
    local_4 = 1;
  }
  uVar5 = 0x99;
  puVar3 = local_19c;
  uVar4 = 0x1018;
  pfVar2 = (float *)M007_GETVALUE(0x1018,puVar3);
  if (_DAT_1010_10de < *pfVar2) {
    puVar3 = local_6;
    LOADSTRING(0x1018,100,local_196,unaff_SS,0x774);
    uVar4 = local_198;
    _WSPRINTF(0x1018,local_132);
    local_4 = 1;
  }
  local_198 = FUN_1000_0264(uVar4,puVar3,uVar5,uVar6,puVar1,uVar7);
  uVar7 = 0x97;
  puVar1 = local_19c;
  uVar6 = 0x1018;
  pfVar2 = (float *)M007_GETVALUE(0x1018,puVar1);
  if (*pfVar2 < DAT_1010_10e2) {
    puVar1 = local_6;
    LOADSTRING(0x1018,100,local_196,unaff_SS,0x775);
    uVar6 = local_198;
    _WSPRINTF(0x1018,local_132);
    local_4 = 1;
  }
  uVar5 = 0x9a;
  puVar3 = local_19c;
  uVar4 = 0x1018;
  pfVar2 = (float *)M007_GETVALUE(0x1018,puVar3);
  if (DAT_1010_10e2 < *pfVar2) {
    puVar3 = local_6;
    LOADSTRING(0x1018,100,local_196,unaff_SS,0x776);
    uVar4 = local_198;
    _WSPRINTF(0x1018,local_132);
    local_4 = 1;
  }
  local_198 = FUN_1000_0264(uVar4,puVar3,uVar5,uVar6,puVar1,uVar7);
  uVar7 = 0x98;
  puVar1 = local_19c;
  uVar6 = 0x1018;
  pfVar2 = (float *)M007_GETVALUE(0x1018,puVar1);
  if (*pfVar2 < DAT_1010_10e6) {
    puVar1 = local_6;
    LOADSTRING(0x1018,100,local_196,unaff_SS,0x777);
    uVar6 = local_198;
    _WSPRINTF(0x1018,local_132);
    local_4 = 1;
  }
  uVar5 = 0x9b;
  puVar3 = local_19c;
  uVar4 = 0x1018;
  pfVar2 = (float *)M007_GETVALUE(0x1018,puVar3);
  if (DAT_1010_10e6 < *pfVar2) {
    puVar3 = local_6;
    LOADSTRING(0x1018,100,local_196,unaff_SS,0x778);
    uVar4 = local_198;
    _WSPRINTF(0x1018,local_132);
    local_4 = 1;
  }
  local_198 = FUN_1000_0264(uVar4,puVar3,uVar5,uVar6,puVar1,uVar7);
  uVar7 = 0x125;
  puVar1 = local_19c;
  uVar6 = 0x1018;
  pfVar2 = (float *)M007_GETVALUE(0x1018,puVar1);
  if (*pfVar2 < DAT_1010_10ea) {
    puVar1 = local_6;
    LOADSTRING(0x1018,100,local_196,unaff_SS,0x779);
    uVar6 = local_198;
    _WSPRINTF(0x1018,local_132);
    local_4 = 1;
  }
  uVar5 = 0x126;
  puVar3 = local_19c;
  uVar4 = 0x1018;
  pfVar2 = (float *)M007_GETVALUE(0x1018,puVar3);
  if (DAT_1010_10ea < *pfVar2) {
    puVar3 = local_6;
    LOADSTRING(0x1018,100,local_196,unaff_SS,0x77a);
    uVar4 = local_198;
    _WSPRINTF(0x1018,local_132);
    local_4 = 1;
  }
  if (local_4 != 0) {
    LOADSTRING(0x1018,100,local_ce,unaff_SS,0x77b);
    LSTRCAT(0x1018,local_132,unaff_SS,local_ce);
    GETFOCUS(0x1018);
    MESSAGEBOX(0x1018,0x1010,local_6a,unaff_SS,local_ce,unaff_SS);
    return;
  }
  DAT_1010_0342 = M007_GETSTATE(0x1018,0x11c,uVar4,puVar3,uVar5,uVar6,puVar1,uVar7);
  M007_PUTSTATE(0x1018,0);
  SETXYZTRSTAGE_GOTO(DAT_1010_10ee,_DAT_1010_10f0,DAT_1010_10ea._0_2_,DAT_1010_10ea._2_2_,
                     DAT_1010_10e6._0_2_,DAT_1010_10e6._2_2_,DAT_1010_10e2._0_2_,DAT_1010_10e2._2_2_
                     ,DAT_1010_10de,_DAT_1010_10e0);
  return;
}


// ---- FUN_1000_df64 @ 1000:df64

void __cdecl16near FUN_1000_df64(void)

{
  undefined2 unaff_CS;
  
  if (DAT_1010_0342 != 0) {
    M007_PUTSTATE(unaff_CS,DAT_1010_0342);
    DAT_1010_0342 = 0;
  }
  return;
}


// ---- FUN_1000_df7e @ 1000:df7e

undefined2 __cdecl16near FUN_1000_df7e(undefined2 param_1,undefined2 param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = 0x137;
  iVar1 = M007_GETSTATE();
  if (iVar1 != 0) {
    iVar1 = M007_GETSTATE(0x1018,0x137,uVar2);
    if (iVar1 != 1) {
      if (DAT_1010_0344 != 1) {
        DAT_1010_0344 = 1;
        FUN_1000_da7e();
        FUN_1000_db44();
        FUN_1000_dfcc(param_1,param_2);
        FUN_1000_dbf2();
        DAT_1010_0344 = 0;
      }
      return 1;
    }
  }
  return 0;
}


// ---- FUN_1000_dfcc @ 1000:dfcc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16near FUN_1000_dfcc(float param_1)

{
  double dVar1;
  float *pfVar2;
  double *pdVar3;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined6 uVar6;
  float local_32;
  float local_2e;
  float local_2a;
  float local_26;
  undefined2 local_22;
  undefined2 local_20;
  float local_1e;
  float local_1a;
  float local_16;
  float local_12;
  float local_e;
  float local_a;
  float local_6;
  
  local_22 = (undefined2)DAT_1010_10ea;
  local_20 = DAT_1010_10ea._2_2_;
  FUN_1000_e25c(DAT_1010_0bb8._0_2_,DAT_1010_0bb8._2_2_);
  uVar5 = 0x196;
  pfVar2 = (float *)M007_GETVALUE(unaff_CS,&local_26);
  local_6 = _DAT_1010_10de - *pfVar2;
  uVar4 = 0x197;
  pfVar2 = (float *)M007_GETVALUE(0x1018,&local_2a);
  local_2e = DAT_1010_10e2 - *pfVar2;
  local_32 = local_6;
  dVar1 = (double)(local_6 * local_6 + local_2e * local_2e);
  local_a = local_2e;
  pdVar3 = (double *)
           FUN_1000_01e0(SUB82(dVar1,0),(int)((qword)dVar1 >> 0x10),(int)((qword)dVar1 >> 0x20),
                         (int)((qword)dVar1 >> 0x30),uVar4,uVar5);
  local_e = (float)*pdVar3;
  if (local_32 == DAT_1010_0bb8) {
    local_12 = DAT_1010_0bb8;
  }
  else {
    local_32 = DAT_1010_0bbc / DAT_1010_033e;
    dVar1 = (double)(local_a / local_6);
    pdVar3 = (double *)
             FUN_1000_0243(SUB82(dVar1,0),(int)((qword)dVar1 >> 0x10),(int)((qword)dVar1 >> 0x20),
                           (int)((qword)dVar1 >> 0x30));
    local_12 = (float)*pdVar3 * local_32;
  }
  if (local_6 <= DAT_1010_0bb8) {
    local_12 = DAT_1010_0bbc + local_12;
  }
  for (; param_1 < DAT_1010_0bb8; param_1 = DAT_1010_0bc0 + param_1) {
  }
  for (; DAT_1010_0bc0 <= param_1; param_1 = param_1 - DAT_1010_0bc0) {
  }
  local_2a = param_1;
  local_26 = (param_1 - _DAT_1010_10ee) + (DAT_1010_0bc0 - local_12);
  dVar1 = (double)(DAT_1010_0bc4 * DAT_1010_033e * local_26);
  local_16 = local_26;
  pdVar3 = (double *)
           FUN_1000_021e(SUB82(dVar1,0),(int)((qword)dVar1 >> 0x10),(int)((qword)dVar1 >> 0x20),
                         (int)((qword)dVar1 >> 0x30));
  uVar4 = SUB82((double)local_e,0);
  uVar6 = (undefined6)((qword)(double)local_e >> 0x10);
  local_1a = local_e * (float)*pdVar3;
  dVar1 = (double)(DAT_1010_0bc4 * DAT_1010_033e * local_26);
  pdVar3 = (double *)
           FUN_1000_0218(SUB82(dVar1,0),(int)((qword)dVar1 >> 0x10),(int)((qword)dVar1 >> 0x20),
                         (int)((qword)dVar1 >> 0x30),uVar4,uVar6);
  local_1e = (float)((longdouble)*pdVar3 * (longdouble)(double)CONCAT62(uVar6,uVar4));
  FUN_1000_e570(SUB42(local_2a,0),(int)((ulong)local_2a >> 0x10));
  uVar4 = 0x196;
  pfVar2 = (float *)M007_GETVALUE(0x1018,&local_32);
  FUN_1000_e528(*pfVar2 + local_1a,uVar4);
  uVar4 = 0x197;
  pfVar2 = (float *)M007_GETVALUE(0x1018,&local_2e);
  FUN_1000_e53a(*pfVar2 - local_1e,uVar4);
  FUN_1000_e25c(local_22,local_20);
  return;
}


// ---- FUN_1000_e20c @ 1000:e20c

undefined2 __cdecl16near FUN_1000_e20c(undefined2 param_1,undefined2 param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = 0x137;
  iVar1 = M007_GETSTATE();
  if (iVar1 != 0) {
    iVar1 = M007_GETSTATE(0x1018,0x137,uVar2);
    if (iVar1 != 2) {
      if (DAT_1010_0346 != 1) {
        DAT_1010_0346 = 1;
        FUN_1000_da7e();
        FUN_1000_db44();
        FUN_1000_e25c(param_1,param_2);
        FUN_1000_dbf2();
        DAT_1010_0346 = 0;
      }
      return 1;
    }
  }
  return 0;
}


// ---- FUN_1000_e25c @ 1000:e25c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16near FUN_1000_e25c(float param_1)

{
  double dVar1;
  double dVar2;
  float fVar3;
  double dVar4;
  float fVar5;
  undefined2 *puVar6;
  float *pfVar7;
  double *pdVar8;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined2 uVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  undefined2 uVar12;
  undefined2 uStack_7a;
  undefined2 uStack_78;
  undefined2 local_6e;
  undefined2 uStack_6c;
  undefined2 uStack_6a;
  undefined2 uStack_68;
  undefined2 local_52;
  undefined2 uStack_50;
  undefined2 uStack_4e;
  undefined2 uStack_4c;
  undefined2 local_32;
  undefined2 uStack_30;
  undefined2 uStack_2e;
  undefined2 uStack_2c;
  undefined1 local_2a [4];
  undefined1 local_26 [4];
  undefined1 local_22 [4];
  undefined1 local_1e [4];
  undefined4 local_1a;
  float local_16;
  float local_12;
  float local_e;
  float local_a;
  float local_6;
  
  uVar10 = 0x195;
  puVar6 = (undefined2 *)M007_GETVALUE(unaff_CS,local_1e);
  local_1a = (float)CONCAT22(puVar6[1],*puVar6);
  uVar9 = 0x197;
  pfVar7 = (float *)M007_GETVALUE(0x1018,local_22);
  fVar3 = *pfVar7 + DAT_1010_033a;
  dVar1 = (double)(DAT_1010_0bc4 * DAT_1010_033e * DAT_1010_10ea);
  uStack_2c = (undefined2)((qword)dVar1 >> 0x30);
  uStack_2e = (undefined2)((qword)dVar1 >> 0x20);
  uStack_30 = (undefined2)((qword)dVar1 >> 0x10);
  local_32 = SUB82(dVar1,0);
  pdVar8 = (double *)FUN_1000_0218(local_32,uStack_30,uStack_2e,uStack_2c,uVar9,uVar10);
  fVar5 = local_1a;
  dVar1 = *pdVar8;
  dVar4 = (double)local_1a;
  dVar2 = (double)DAT_1010_10e2;
  pdVar8 = (double *)FUN_1000_021e(local_32,uStack_30,uStack_2e,uStack_2c);
  local_6 = (float)((longdouble)(((double)fVar3 - dVar4 * dVar1) - dVar2) / (longdouble)*pdVar8);
  dVar1 = (double)(DAT_1010_0bc4 * DAT_1010_033e * DAT_1010_10ea);
  uStack_4c = (undefined2)((qword)dVar1 >> 0x30);
  uStack_4e = (undefined2)((qword)dVar1 >> 0x20);
  uStack_50 = (undefined2)((qword)dVar1 >> 0x10);
  local_52 = SUB82(dVar1,0);
  pdVar8 = (double *)FUN_1000_021e(local_52,uStack_50,uStack_4e,uStack_4c);
  dVar1 = *pdVar8;
  pdVar8 = (double *)FUN_1000_0218(local_52,uStack_50,uStack_4e,uStack_4c);
  fVar3 = local_6;
  dVar2 = (double)local_6;
  local_a = fVar5 - ((float)(dVar1 * dVar4) - local_6 * (float)*pdVar8);
  dVar1 = (double)(param_1 * DAT_1010_0bc4 * DAT_1010_033e);
  uStack_68 = (undefined2)((qword)dVar1 >> 0x30);
  uStack_6a = (undefined2)((qword)dVar1 >> 0x20);
  uStack_6c = (undefined2)((qword)dVar1 >> 0x10);
  local_6e = SUB82(dVar1,0);
  pdVar8 = (double *)FUN_1000_021e(local_6e,uStack_6c,uStack_6a,uStack_68);
  dVar1 = *pdVar8;
  pdVar8 = (double *)FUN_1000_0218(local_6e,uStack_6c,uStack_6a,uStack_68);
  local_12 = (float)*pdVar8 * fVar5 + (float)(dVar1 * dVar2);
  dVar1 = (double)(DAT_1010_0bc4 * DAT_1010_033e * param_1);
  uStack_7a = (undefined2)((qword)dVar1 >> 0x20);
  uStack_78 = (undefined2)((qword)dVar1 >> 0x30);
  pdVar8 = (double *)FUN_1000_021e(SUB82(dVar1,0),(int)((qword)dVar1 >> 0x10),uStack_7a,uStack_78);
  dVar4 = *pdVar8 * dVar4;
  uVar10 = (undefined2)((qword)dVar4 >> 0x10);
  uVar11 = (undefined2)((qword)dVar4 >> 0x20);
  uVar12 = (undefined2)((qword)dVar4 >> 0x30);
  uVar9 = 0xe405;
  pdVar8 = (double *)FUN_1000_0218(uVar10,uVar11,uVar12,uStack_78);
  local_16 = fVar5 - ((float)(double)CONCAT26(uVar12,CONCAT24(uVar11,CONCAT22(uVar10,uVar9))) -
                     (float)*pdVar8 * fVar3);
  uVar9 = 0x1b1;
  pfVar7 = (float *)M007_GETVALUE(0x1018,local_26);
  local_e = (param_1 - DAT_1010_10ea) * *pfVar7 * DAT_1010_0bc8 * DAT_1010_0bc8;
  FUN_1000_e528(_DAT_1010_10de - local_e,uVar9);
  uVar9 = 0x197;
  pfVar7 = (float *)M007_GETVALUE(0x1018,local_2a);
  FUN_1000_e53a((*pfVar7 + DAT_1010_033a) - local_12,uVar9);
  FUN_1000_e54c((DAT_1010_10e6 - local_a) + local_16);
  FUN_1000_e55e(SUB42(param_1,0),(int)((ulong)param_1 >> 0x10));
  return;
}


// ---- FUN_1000_e4d2 @ 1000:e4d2

void __cdecl16near FUN_1000_e4d2(undefined4 param_1)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 unaff_CS;
  undefined2 uVar3;
  undefined2 local_a;
  undefined2 uStack_8;
  
  FUN_1000_db44();
  uVar2 = DAT_1010_10ea._2_2_;
  uVar1 = (undefined2)DAT_1010_10ea;
  FUN_1000_e25c((undefined2)DAT_1010_0bb8,DAT_1010_0bb8._2_2_);
  uVar3 = 0x1b1;
  uStack_8 = (undefined2)((ulong)param_1 >> 0x10);
  local_a = (undefined2)param_1;
  M007_PUTVALUE(unaff_CS,local_a,uStack_8);
  DAT_1010_0332 = param_1;
  FUN_1000_e25c(uVar1,uVar2,uVar3);
  FUN_1000_dbf2();
  return;
}


// ---- FUN_1000_e528 @ 1000:e528

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16near FUN_1000_e528(undefined2 param_1,undefined2 param_2)

{
  DAT_1010_10de = param_1;
  _DAT_1010_10e0 = param_2;
  return;
}


// ---- FUN_1000_e53a @ 1000:e53a

void __cdecl16near FUN_1000_e53a(undefined2 param_1,undefined2 param_2)

{
  DAT_1010_10e2._0_2_ = param_1;
  DAT_1010_10e2._2_2_ = param_2;
  return;
}


// ---- FUN_1000_e54c @ 1000:e54c

void __cdecl16near FUN_1000_e54c(undefined2 param_1,undefined2 param_2)

{
  DAT_1010_10e6._0_2_ = param_1;
  DAT_1010_10e6._2_2_ = param_2;
  return;
}


// ---- FUN_1000_e55e @ 1000:e55e

void __cdecl16near FUN_1000_e55e(undefined2 param_1,undefined2 param_2)

{
  DAT_1010_10ea._0_2_ = param_1;
  DAT_1010_10ea._2_2_ = param_2;
  return;
}


// ---- FUN_1000_e570 @ 1000:e570

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16near FUN_1000_e570(undefined2 param_1,undefined2 param_2)

{
  DAT_1010_10ee = param_1;
  _DAT_1010_10f0 = param_2;
  return;
}


// ---- FUN_1000_e582 @ 1000:e582

void __cdecl16near FUN_1000_e582(char *param_1,undefined2 param_2)

{
  char *pcVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  double *pdVar5;
  undefined8 *puVar6;
  undefined2 uVar7;
  undefined2 unaff_SS;
  bool bVar8;
  double adStack_1d2 [41];
  undefined2 uStack_8a;
  undefined2 uStack_88;
  undefined2 uStack_86;
  undefined2 uStack_84;
  undefined2 uStack_82;
  int local_64;
  int local_62;
  undefined4 local_60;
  char local_5c;
  undefined8 local_5a;
  
  local_5a._0_4_ = CONCAT22(DAT_1010_0bcc._2_2_,(undefined2)DAT_1010_0bcc);
  local_5a._0_6_ = CONCAT24(DAT_1010_0bcc._4_2_,(undefined4)local_5a);
  local_5a = (double)CONCAT26(DAT_1010_0bcc._6_2_,(undefined6)local_5a);
  local_60 = (char *)CONCAT22(param_2,param_1);
  local_62 = 0;
  bVar8 = false;
  while( true ) {
    uVar7 = (undefined2)((ulong)local_60 >> 0x10);
    if ((*(byte *)(*local_60 + 0x39f) & 8) == 0) break;
    local_60 = (char *)CONCAT22(uVar7,(char *)local_60 + 1);
  }
  cVar2 = *local_60;
  if ((cVar2 == '-') || (cVar2 == '+')) {
    local_60 = (char *)CONCAT22(uVar7,(char *)local_60 + 1);
    bVar8 = true;
  }
  while( true ) {
    cVar3 = *local_60;
    if ((*(byte *)(cVar3 + 0x39f) & 4) == 0) break;
    local_5a = local_5a *
               (double)CONCAT26(DAT_1010_0c1c._6_2_,
                                CONCAT24(DAT_1010_0c1c._4_2_,
                                         CONCAT22(DAT_1010_0c1c._2_2_,(undefined2)DAT_1010_0c1c))) +
               adStack_1d2[cVar3];
    bVar8 = true;
    local_60 = (char *)CONCAT22(local_60._2_2_,(char *)local_60 + 1);
  }
  if (cVar3 == '.') {
    while( true ) {
      local_60 = (char *)CONCAT22(local_60._2_2_,(char *)local_60 + 1);
      if ((*(byte *)(*local_60 + 0x39f) & 4) == 0) break;
      local_5a = local_5a *
                 (double)CONCAT26(DAT_1010_0c1c._6_2_,
                                  CONCAT24(DAT_1010_0c1c._4_2_,
                                           CONCAT22(DAT_1010_0c1c._2_2_,(undefined2)DAT_1010_0c1c)))
                 + adStack_1d2[*local_60];
      bVar8 = true;
      local_62 = local_62 + -1;
    }
  }
  if (cVar2 == '-') {
    local_5a = -local_5a;
  }
  if (bVar8) {
    uVar7 = (undefined2)((ulong)local_60 >> 0x10);
    if ((*(byte *)(*local_60 + 0x39f) & 2) == 0) {
      iVar4 = (int)*local_60;
    }
    else {
      iVar4 = *local_60 + -0x20;
    }
    if (iVar4 == 0x45) {
      pcVar1 = (char *)local_60 + 1;
      local_5c = *pcVar1;
      bVar8 = local_5c == '-';
      if ((bVar8) || (local_5c == '+')) {
        pcVar1 = (char *)local_60 + 2;
        local_5c = *pcVar1;
      }
      local_60 = (char *)CONCAT22(uVar7,pcVar1);
      local_64 = 0;
      while ((*(byte *)(local_5c + 0x39f) & 4) != 0) {
        local_64 = local_64 * 10 + local_5c + -0x30;
        local_60 = (char *)CONCAT22(local_60._2_2_,(char *)local_60 + 1);
        local_5c = *local_60;
      }
      if (bVar8) {
        local_62 = local_62 - local_64;
      }
      else {
        local_62 = local_62 + local_64;
      }
    }
  }
  if (local_5a !=
      (double)CONCAT26(DAT_1010_0bcc._6_2_,
                       CONCAT24(DAT_1010_0bcc._4_2_,
                                CONCAT22(DAT_1010_0bcc._2_2_,(undefined2)DAT_1010_0bcc)))) {
    if (local_62 < 0x135) {
      if (-0x134 < local_62) {
        if (local_62 < 0) {
          FUN_1000_01d0();
          uStack_82 = DAT_1010_0c1c._6_2_;
          uStack_84 = DAT_1010_0c1c._4_2_;
          uStack_86 = DAT_1010_0c1c._2_2_;
          uStack_88 = (undefined2)DAT_1010_0c1c;
          uStack_8a = 0xe817;
          pdVar5 = (double *)FUN_1000_01ec();
          local_5a = local_5a / *pdVar5;
        }
        else {
          uStack_82 = DAT_1010_0c1c._6_2_;
          uStack_84 = DAT_1010_0c1c._4_2_;
          uStack_86 = DAT_1010_0c1c._2_2_;
          uStack_88 = (undefined2)DAT_1010_0c1c;
          uStack_8a = 0xe847;
          pdVar5 = (double *)FUN_1000_01ec();
          local_5a = *pdVar5 * local_5a;
        }
        goto LAB_1000_e859;
      }
      puVar6 = (undefined8 *)&DAT_1010_0bcc;
    }
    else {
      if (local_5a <
          (double)CONCAT26(DAT_1010_0bcc._6_2_,
                           CONCAT24(DAT_1010_0bcc._4_2_,
                                    CONCAT22(DAT_1010_0bcc._2_2_,(undefined2)DAT_1010_0bcc)))) {
        local_5a = -DAT_1010_04a0;
        goto LAB_1000_e859;
      }
      puVar6 = (undefined8 *)&DAT_1010_04a0;
    }
    local_5a._0_4_ = CONCAT22(*(undefined2 *)((int)puVar6 + 2),*(undefined2 *)puVar6);
    local_5a._0_6_ = CONCAT24(*(undefined2 *)((int)puVar6 + 4),(undefined4)local_5a);
    local_5a = (double)CONCAT26(*(undefined2 *)((int)puVar6 + 6),(undefined6)local_5a);
  }
LAB_1000_e859:
  DAT_1010_0362 = (undefined2)local_5a;
  DAT_1010_0364 = local_5a._2_2_;
  DAT_1010_0366 = local_5a._4_2_;
  DAT_1010_0368 = local_5a._6_2_;
  return;
}


// ---- FUN_1008_0000 @ 1008:0000

undefined2 __stdcall16far FUN_1008_0000(void)

{
                    /* Segment:    2
                       Offset:     00013a20
                       Length:     08f8
                       Min Alloc:  08f9
                       Flags:      0d50
                           Code
                           Moveable
                           Preload
                           Impure (Non-shareable)
                        */
  return 1;
}


// ---- WEP @ 1008:0012

undefined2 __stdcall16far WEP(void)

{
  return 1;
}


// ---- STAGE_REPORTID @ 1008:0024

void __cdecl16far STAGE_REPORTID(void)

{
  undefined2 unaff_CS;
  
  UIF_MESSAGE(unaff_CS,0x87e,0x1010);
  return;
}


// ---- STAGE_CONTROLLER_SHUTDOWN @ 1008:003c

undefined2 __cdecl16far STAGE_CONTROLLER_SHUTDOWN(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1010;
  uVar2 = 0x6f;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    DOCOMMANDSTAGE_ABORT(uVar2,uVar3);
  }
  return 0;
}


// ---- EXPECTSTAGETIMEOUT @ 1008:005a

void __cdecl16far EXPECTSTAGETIMEOUT(void)

{
  DAT_1010_0180 = 0x28;
  return;
}


// ---- SETSTAGE_SET_X @ 1008:006c

void __stdcall16far SETSTAGE_SET_X(undefined2 param_1,undefined2 param_2)

{
  undefined2 unaff_CS;
  
  M007_PUTVALUE(unaff_CS,param_1,param_2);
  return;
}


// ---- SETSTAGE_SET_Y @ 1008:0088

void __stdcall16far SETSTAGE_SET_Y(undefined2 param_1,undefined2 param_2)

{
  undefined2 unaff_CS;
  
  M007_PUTVALUE(unaff_CS,param_1,param_2);
  return;
}


// ---- SETSTAGE_SET_T @ 1008:00a4

void __stdcall16far SETSTAGE_SET_T(undefined2 param_1,undefined2 param_2)

{
  undefined2 unaff_CS;
  
  M007_PUTVALUE(unaff_CS,param_1,param_2);
  return;
}


// ---- SETSTAGE_SET_Z @ 1008:00c0

void __stdcall16far SETSTAGE_SET_Z(undefined2 param_1,undefined2 param_2)

{
  undefined2 unaff_CS;
  
  M007_PUTVALUE(unaff_CS,param_1,param_2);
  return;
}


// ---- SWITCHSTAGE_XYZ @ 1008:00dc

void __stdcall16far SWITCHSTAGE_XYZ(undefined2 param_1)

{
  undefined2 *puVar1;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined1 local_6 [4];
  
  M007_PUTSTATE(unaff_CS,param_1);
  puVar1 = (undefined2 *)M007_GETVALUE(0x1018,local_6);
  SETSTAGETILTANGLE(*puVar1,puVar1[1]);
  return;
}


// ---- SWITCHSTAGE_SCAN @ 1008:010e

void __stdcall16far SWITCHSTAGE_SCAN(undefined2 param_1)

{
  undefined2 unaff_CS;
  
  M007_PUTSTATE(unaff_CS,param_1);
  return;
}


// ---- GET_STAGE_CONFIG @ 1008:0126

void __stdcall16far GET_STAGE_CONFIG(undefined1 *param_1)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  uVar4 = 0x1010;
  uVar3 = 0x53;
  uVar1 = M007_GETSTATE();
  *param_1 = uVar1;
  uVar1 = M007_GETSTATE(0x1018,0x6f,uVar3,uVar4);
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  puVar2 = (undefined1 *)param_1;
  puVar2[1] = uVar1;
  uVar1 = M007_GETSTATE(0x1018,0x96);
  puVar2[2] = uVar1;
  uVar1 = M007_GETSTATE(0x1018,0xe6);
  puVar2[3] = uVar1;
  uVar1 = M007_GETSTATE(0x1018,0xed);
  puVar2[4] = uVar1;
  uVar1 = M007_GETSTATE(0x1018,0xee);
  puVar2[5] = uVar1;
  uVar1 = M007_GETSTATE(0x1018,0xef);
  puVar2[6] = uVar1;
  uVar1 = M007_GETSTATE(0x1018,0xf0);
  puVar2[7] = uVar1;
  uVar1 = M007_GETSTATE(0x1018,0xf1);
  puVar2[8] = uVar1;
  uVar1 = M007_GETSTATE(0x1018,0x124);
  puVar2[9] = uVar1;
  uVar1 = M007_GETSTATE(0x1018,0x11a);
  puVar2[0xb] = uVar1;
  uVar1 = M007_GETSTATE(0x1018,0x127);
  puVar2[10] = uVar1;
  return;
}


// ---- DOCOMMANDSTAGE_SET_END @ 1008:01e6

undefined2 __cdecl16far DOCOMMANDSTAGE_SET_END(void)

{
  return 0x1010;
}


// ---- DOCOMMANDSTAGE_SET_START @ 1008:01f2

undefined2 __cdecl16far DOCOMMANDSTAGE_SET_START(void)

{
  return 0x1010;
}


// ---- SETSTAGE_START_T @ 1008:01fe

void __stdcall16far SETSTAGE_START_T(undefined2 param_1,undefined2 param_2)

{
  undefined2 unaff_CS;
  
  M007_PUTVALUE(unaff_CS,param_1,param_2);
  return;
}


// ---- SETSTAGE_START_R @ 1008:021a

void __stdcall16far SETSTAGE_START_R(undefined2 param_1,undefined2 param_2)

{
  undefined2 unaff_CS;
  
  M007_PUTVALUE(unaff_CS,param_1,param_2);
  return;
}


// ---- SWITCHZ_ON_VENT @ 1008:0236

void __stdcall16far SWITCHZ_ON_VENT(undefined2 param_1)

{
  undefined2 unaff_CS;
  
  M007_PUTSTATE(unaff_CS,param_1);
  return;
}


// ---- SWITCHTRACK_Z @ 1008:0250

void __stdcall16far SWITCHTRACK_Z(undefined2 param_1)

{
  undefined2 unaff_CS;
  
  M007_PUTSTATE(unaff_CS,param_1);
  return;
}


// ---- SETSTAGE_START_M @ 1008:026a

void __stdcall16far SETSTAGE_START_M(undefined2 param_1,undefined2 param_2)

{
  undefined2 unaff_CS;
  
  M007_PUTVALUE(unaff_CS,param_1,param_2);
  return;
}


// ---- SWITCHSTAGE_POINTS_LIST @ 1008:0286

void __stdcall16far SWITCHSTAGE_POINTS_LIST(undefined2 param_1)

{
  undefined2 unaff_CS;
  
  M007_PUTSTATE(unaff_CS,param_1);
  return;
}


// ---- SWITCHHARD_PANEL @ 1008:02a0

void __stdcall16far SWITCHHARD_PANEL(undefined2 param_1)

{
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  
  uVar2 = 0x1010;
  uVar1 = 0x128;
  M007_PUTSTATE(unaff_CS,param_1);
  CONFIGURE_HARD_PANEL(0x1018,uVar1,uVar2);
  return;
}


// ---- STAGERESUMEOPERATION @ 1008:02be

undefined2 __cdecl16far STAGERESUMEOPERATION(void)

{
  return 0x1010;
}


// ---- DOCOMMANDSTART_COMP_CAL @ 1008:02ca

void __cdecl16far DOCOMMANDSTART_COMP_CAL(void)

{
  DAT_1010_0182 = M007_GETSTATE();
  M007_PUTSTATE(0x1018,2);
  return;
}


// ---- DOCOMMANDACCEPT_COMP_CAL @ 1008:02ec

void __cdecl16far DOCOMMANDACCEPT_COMP_CAL(void)

{
  undefined2 unaff_CS;
  
  M007_PUTSTATE(unaff_CS,1);
  return;
}


// ---- DOCOMMANDEXIT_COMP_CAL @ 1008:0302

void __cdecl16far DOCOMMANDEXIT_COMP_CAL(void)

{
  undefined2 unaff_CS;
  
  M007_PUTSTATE(unaff_CS,DAT_1010_0182);
  return;
}


// ---- SWITCHREGISTRATION @ 1008:031a

void __stdcall16far SWITCHREGISTRATION(undefined2 param_1)

{
  undefined2 unaff_CS;
  
  M007_PUTSTATE(unaff_CS,param_1);
  return;
}


// ---- SWITCHCOMPUCENTRIC_MODE @ 1008:0334

undefined2 __stdcall16far SWITCHCOMPUCENTRIC_MODE(int param_1)

{
  undefined2 uVar1;
  undefined2 in_BX;
  undefined2 unaff_CS;
  undefined2 uVar2;
  
  if (param_1 != 0) {
    uVar2 = 0x1018;
    uVar1 = M007_GETSTATE();
    unaff_CS = 0x1008;
    switch(uVar1) {
    case 0:
    case 1:
      goto switchD_1008_0379_caseD_0;
    case 2:
    case 5:
      break;
    case 3:
    case 4:
    case 6:
switchD_1008_0379_caseD_3:
      if (param_1 != 2) {
        return in_BX;
      }
      break;
    default:
      in_BX = uVar1;
      unaff_CS = uVar2;
      if ((DAT_1010_017e == 0) || (DAT_1010_1112 == 0)) goto switchD_1008_0379_caseD_3;
    }
  }
  in_BX = M007_PUTSTATE(unaff_CS,param_1);
switchD_1008_0379_caseD_0:
  return in_BX;
}


// ---- DOCOMMANDSET_STAGE_CENTRE @ 1008:0392

void __cdecl16far DOCOMMANDSET_STAGE_CENTRE(void)

{
  undefined2 *puVar1;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined1 local_a [4];
  undefined1 local_6 [4];
  
  puVar1 = (undefined2 *)M007_GETVALUE(unaff_CS,local_6);
  M007_PUTVALUE(0x1018,*puVar1,puVar1[1]);
  puVar1 = (undefined2 *)M007_GETVALUE(0x1018,local_a);
  M007_PUTVALUE(0x1018,*puVar1,puVar1[1]);
  return;
}


// ---- SETSAMPLE_HEIGHT @ 1008:03da

void __stdcall16far SETSAMPLE_HEIGHT(undefined2 param_1,undefined2 param_2)

{
  undefined2 unaff_CS;
  
  M007_PUTVALUE(unaff_CS,param_1,param_2);
  return;
}


// ---- SETSPACER_THICKNESS @ 1008:03f6

void __stdcall16far SETSPACER_THICKNESS(undefined2 param_1,undefined2 param_2)

{
  undefined2 unaff_CS;
  
  M007_PUTVALUE(unaff_CS,param_1,param_2);
  return;
}


// ---- SETXYSAMPLE_AT @ 1008:0412

void __stdcall16far
SETXYSAMPLE_AT(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  undefined2 unaff_CS;
  
  M007_PUTXY(unaff_CS,param_1,param_2,param_3,param_4);
  return;
}


// ---- SETXYSAMPLE_GOTO @ 1008:0434

void __stdcall16far
SETXYSAMPLE_GOTO(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  undefined2 unaff_CS;
  
  M007_PUTXY(unaff_CS,param_1,param_2,param_3,param_4);
  return;
}


// ---- SWITCHSTAGE_LIST @ 1008:0456

void __stdcall16far SWITCHSTAGE_LIST(undefined2 param_1)

{
  undefined2 unaff_CS;
  
  M007_PUTSTATE(unaff_CS,param_1);
  return;
}


// ---- SETSTAGE_TILT_CAL @ 1008:0470

void __stdcall16far SETSTAGE_TILT_CAL(undefined2 param_1,undefined2 param_2)

{
  undefined2 unaff_CS;
  
  M007_PUTVALUE(unaff_CS,param_1,param_2);
  return;
}


// ---- SETXYSTAGE_DELTA @ 1008:048c

void __stdcall16far SETXYSTAGE_DELTA(float param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined1 *puVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined2 local_2a;
  undefined2 uStack_28;
  undefined2 local_26;
  undefined2 uStack_24;
  undefined1 local_22 [4];
  undefined1 local_1e [4];
  undefined2 local_1a [2];
  undefined2 local_16 [2];
  undefined1 local_12 [4];
  undefined1 local_e [4];
  float local_a;
  float local_6;
  
  uStack_24 = (undefined2)((ulong)param_2 >> 0x10);
  local_26 = SUB42(param_2,0);
  uStack_28 = (undefined2)((ulong)param_1 >> 0x10);
  local_2a = SUB42(param_1,0);
  M007_PUTXY(unaff_CS,local_2a,uStack_28,local_26,uStack_24);
  uVar9 = 0x84;
  pfVar3 = (float *)M007_GETVALUE(0x1018,local_e);
  local_6 = *pfVar3 + param_2;
  uVar8 = 0x85;
  pfVar3 = (float *)M007_GETVALUE(0x1018,local_12);
  local_a = *pfVar3 + param_1;
  uVar7 = 0x99;
  puVar6 = local_16;
  puVar5 = (undefined2 *)0x1018;
  puVar4 = (undefined1 *)0x502;
  pfVar3 = (float *)M007_GETVALUE(0x1018,puVar6);
  fVar2 = local_6;
  if (*pfVar3 <= local_6) {
    puVar6 = (undefined2 *)&DAT_1010_0096;
    puVar5 = local_1a;
    puVar4 = (undefined1 *)0x1018;
    pfVar3 = (float *)M007_GETVALUE(0x1018,puVar5);
    if (fVar2 <= *pfVar3) {
      puVar5 = (undefined2 *)&DAT_1010_009a;
      puVar4 = local_1e;
      pfVar3 = (float *)M007_GETVALUE();
      fVar1 = local_a;
      if (*pfVar3 <= local_a) {
        puVar4 = (undefined1 *)((int)(undefined2 *)&DAT_1010_0096 + 1);
        pfVar3 = (float *)M007_GETVALUE(0x1018,local_22);
        if (fVar1 <= *pfVar3) {
          SETXYSTAGE_GOTO(fVar1,fVar2);
          return;
        }
      }
    }
  }
  MESSAGEBEEP(0x1018,0x40,puVar4,puVar5,puVar6,uVar7,uVar8,uVar9);
  return;
}


// ---- SETSTAGE_DELTA_Z @ 1008:05be

void __stdcall16far SETSTAGE_DELTA_Z(float param_1)

{
  float fVar1;
  float *pfVar2;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined2 *puVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 local_16;
  undefined2 uStack_14;
  undefined1 local_12 [4];
  undefined2 local_e [2];
  undefined1 local_a [4];
  float local_6;
  
  uVar7 = 0x1010;
  uVar6 = 0x19c;
  uStack_14 = (undefined2)((ulong)param_1 >> 0x10);
  local_16 = SUB42(param_1,0);
  M007_PUTVALUE(unaff_CS,local_16,uStack_14);
  uVar5 = 0x86;
  pfVar2 = (float *)M007_GETVALUE(0x1018,local_a);
  local_6 = *pfVar2 + param_1;
  uVar4 = 0x9b;
  puVar3 = local_e;
  pfVar2 = (float *)M007_GETVALUE();
  fVar1 = local_6;
  if (*pfVar2 <= local_6) {
    puVar3 = (undefined2 *)&DAT_1010_0098;
    pfVar2 = (float *)M007_GETVALUE(0x1018,local_12);
    if (fVar1 <= *pfVar2) {
      SETSTAGE_GOTO_Z(fVar1);
      return;
    }
  }
  MESSAGEBEEP(0x1018,0x40,puVar3,uVar4,uVar5,uVar6,uVar7);
  return;
}


// ---- SETSTAGE_DELTA_T @ 1008:066a

void __stdcall16far SETSTAGE_DELTA_T(float param_1)

{
  float fVar1;
  float *pfVar2;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined1 *puVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 local_16;
  undefined2 uStack_14;
  undefined1 local_12 [4];
  undefined1 local_e [4];
  undefined1 local_a [4];
  float local_6;
  
  uVar7 = 0x1010;
  uVar6 = 0x19d;
  uStack_14 = (undefined2)((ulong)param_1 >> 0x10);
  local_16 = SUB42(param_1,0);
  M007_PUTVALUE(unaff_CS,local_16,uStack_14);
  uVar5 = 0x113;
  pfVar2 = (float *)M007_GETVALUE(0x1018,local_a);
  local_6 = *pfVar2 + param_1;
  uVar4 = 0x126;
  puVar3 = local_e;
  pfVar2 = (float *)M007_GETVALUE();
  fVar1 = local_6;
  if (*pfVar2 <= local_6) {
    puVar3 = (undefined1 *)0x125;
    pfVar2 = (float *)M007_GETVALUE(0x1018,local_12);
    if (fVar1 <= *pfVar2) {
      SETSTAGE_GOTO_T(fVar1);
      return;
    }
  }
  MESSAGEBEEP(0x1018,0x40,puVar3,uVar4,uVar5,uVar6,uVar7);
  return;
}


// ---- SETSTAGE_DELTA_R @ 1008:0716

void __stdcall16far SETSTAGE_DELTA_R(float param_1)

{
  float *pfVar1;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined2 uStack_8;
  undefined1 local_6 [4];
  
  uStack_8 = (undefined2)((ulong)param_1 >> 0x10);
  M007_PUTVALUE(unaff_CS,SUB42(param_1,0),uStack_8);
  pfVar1 = (float *)M007_GETVALUE(0x1018,local_6);
  SETSTAGE_GOTO_R(*pfVar1 + param_1);
  return;
}


// ---- SETSTAGE_DELTA_M @ 1008:0764

void __stdcall16far SETSTAGE_DELTA_M(float param_1)

{
  float *pfVar1;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined2 uStack_8;
  undefined1 local_6 [4];
  
  uStack_8 = (undefined2)((ulong)param_1 >> 0x10);
  M007_PUTVALUE(unaff_CS,SUB42(param_1,0),uStack_8);
  pfVar1 = (float *)M007_GETVALUE(0x1018,local_6);
  SETSTAGE_GOTO_M(*pfVar1 + param_1);
  return;
}


// ---- SWITCHJOYSTICK_DISABLE @ 1008:07b2

void __stdcall16far SWITCHJOYSTICK_DISABLE(undefined2 param_1)

{
  undefined2 unaff_CS;
  
  M007_PUTSTATE(unaff_CS,param_1);
  return;
}


// ---- SETXYSTAGE_CENTRE @ 1008:07cc

void __stdcall16far
SETXYSTAGE_CENTRE(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  undefined2 unaff_CS;
  
  M007_PUTXY(unaff_CS,param_1,param_2,param_3,param_4);
  return;
}


// ---- SWITCHSURVEY_MODE @ 1008:07ee

void __stdcall16far SWITCHSURVEY_MODE(undefined2 param_1)

{
  undefined2 unaff_CS;
  
  M007_PUTSTATE(unaff_CS,param_1);
  return;
}


// ---- SWITCHNEAR_EXCHANGE @ 1008:0808

void __stdcall16far SWITCHNEAR_EXCHANGE(undefined2 param_1)

{
  undefined2 unaff_CS;
  
  M007_PUTSTATE(unaff_CS,param_1);
  return;
}


// ---- SWITCHSAMPLE_HOLDER @ 1008:0822

void __stdcall16far SWITCHSAMPLE_HOLDER(undefined2 param_1)

{
  undefined2 unaff_CS;
  
  M007_PUTSTATE(unaff_CS,param_1);
  return;
}


// ---- SETSAMPLE_HOLDER_OFFSET @ 1008:083c

void __stdcall16far SETSAMPLE_HOLDER_OFFSET(undefined2 param_1,undefined2 param_2)

{
  undefined2 unaff_CS;
  
  M007_PUTVALUE(unaff_CS,param_1,param_2);
  return;
}


// ---- SETSPECIMEN_HEIGHT @ 1008:0858

void __stdcall16far SETSPECIMEN_HEIGHT(undefined2 param_1,undefined2 param_2)

{
  undefined2 unaff_CS;
  
  M007_PUTVALUE(unaff_CS,param_1,param_2);
  return;
}


// ---- SETSAFE_Z @ 1008:0874

void __stdcall16far SETSAFE_Z(undefined2 param_1,undefined2 param_2)

{
  undefined2 unaff_CS;
  
  M007_PUTVALUE(unaff_CS,param_1,param_2);
  return;
}


// ---- STAGETEMPERATURE @ 1008:0890

float * __stdcall16far STAGETEMPERATURE(float *param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 unaff_SS;
  undefined2 uVar3;
  undefined2 uVar4;
  
  uVar4 = 0x1010;
  uVar3 = 0xe6;
  iVar2 = M007_GETSTATE();
  uVar1 = DAT_1010_0bb2;
  if (((iVar2 == 1) && (0x20 < DAT_1010_032e)) &&
     (DAT_1010_10d8 != 0 || DAT_1010_10d6 != (code *)0x0)) {
    iVar2 = (*DAT_1010_10d6)(0x1018,uVar3,uVar4);
    DAT_1010_10da = (float)iVar2 * DAT_1010_0bac;
    *param_1 = DAT_1010_10da;
  }
  else {
    *(undefined2 *)param_1 = DAT_1010_0bb0;
    *(undefined2 *)((int)param_1 + 2) = uVar1;
  }
  return param_1;
}


// ---- __FPMATH @ 1018:0000

/* WARNING: Control flow encountered bad instruction data */

void __FPMATH(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- FATALEXIT @ 1018:0004

/* WARNING: Control flow encountered bad instruction data */

void FATALEXIT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GETVERSION @ 1018:0008

/* WARNING: Control flow encountered bad instruction data */

void GETVERSION(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- LOCALINIT @ 1018:000c

/* WARNING: Control flow encountered bad instruction data */

void LOCALINIT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- LOCALALLOC @ 1018:0010

/* WARNING: Control flow encountered bad instruction data */

void LOCALALLOC(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- LOCALREALLOC @ 1018:0014

/* WARNING: Control flow encountered bad instruction data */

void LOCALREALLOC(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- LOCALFREE @ 1018:0018

/* WARNING: Control flow encountered bad instruction data */

void LOCALFREE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- LOCALSIZE @ 1018:001c

/* WARNING: Control flow encountered bad instruction data */

void LOCALSIZE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GLOBALREALLOC @ 1018:0020

/* WARNING: Control flow encountered bad instruction data */

void GLOBALREALLOC(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GLOBALSIZE @ 1018:0024

/* WARNING: Control flow encountered bad instruction data */

void GLOBALSIZE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- LOCKSEGMENT @ 1018:0028

/* WARNING: Control flow encountered bad instruction data */

void LOCKSEGMENT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- UNLOCKSEGMENT @ 1018:002c

/* WARNING: Control flow encountered bad instruction data */

void UNLOCKSEGMENT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GETMODULEHANDLE @ 1018:0030

/* WARNING: Control flow encountered bad instruction data */

void GETMODULEHANDLE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GETMODULEUSAGE @ 1018:0034

/* WARNING: Control flow encountered bad instruction data */

void GETMODULEUSAGE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GETPROCADDRESS @ 1018:0038

/* WARNING: Control flow encountered bad instruction data */

void GETPROCADDRESS(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- LSTRCPY @ 1018:003c

/* WARNING: Control flow encountered bad instruction data */

void LSTRCPY(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- LSTRCAT @ 1018:0040

/* WARNING: Control flow encountered bad instruction data */

void LSTRCAT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- INITTASK @ 1018:0044

/* WARNING: Control flow encountered bad instruction data */

void INITTASK(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- LOADLIBRARY @ 1018:0048

/* WARNING: Control flow encountered bad instruction data */

void LOADLIBRARY(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- FREELIBRARY @ 1018:004c

/* WARNING: Control flow encountered bad instruction data */

void FREELIBRARY(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- DOS3CALL @ 1018:0050

/* WARNING: Control flow encountered bad instruction data */

void DOS3CALL(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- __AHSHIFT @ 1018:0054

/* WARNING: Control flow encountered bad instruction data */

void __AHSHIFT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- __AHINCR @ 1018:0058

/* WARNING: Control flow encountered bad instruction data */

void __AHINCR(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GETPRIVATEPROFILESTRING @ 1018:005c

/* WARNING: Control flow encountered bad instruction data */

void GETPRIVATEPROFILESTRING(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- WRITEPRIVATEPROFILESTRING @ 1018:0060

/* WARNING: Control flow encountered bad instruction data */

void WRITEPRIVATEPROFILESTRING(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GETDOSENVIRONMENT @ 1018:0064

/* WARNING: Control flow encountered bad instruction data */

void GETDOSENVIRONMENT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- FATALAPPEXIT @ 1018:0068

/* WARNING: Control flow encountered bad instruction data */

void FATALAPPEXIT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- WINEXEC @ 1018:006c

/* WARNING: Control flow encountered bad instruction data */

void WINEXEC(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- __WINFLAGS @ 1018:0070

/* WARNING: Control flow encountered bad instruction data */

void __WINFLAGS(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- MESSAGEBOX @ 1018:0074

/* WARNING: Control flow encountered bad instruction data */

void MESSAGEBOX(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GETCURSORPOS @ 1018:0078

/* WARNING: Control flow encountered bad instruction data */

void GETCURSORPOS(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GETFOCUS @ 1018:007c

/* WARNING: Control flow encountered bad instruction data */

void GETFOCUS(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- SETCURSOR @ 1018:0080

/* WARNING: Control flow encountered bad instruction data */

void SETCURSOR(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- SETCURSORPOS @ 1018:0084

/* WARNING: Control flow encountered bad instruction data */

void SETCURSORPOS(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- MESSAGEBEEP @ 1018:0088

/* WARNING: Control flow encountered bad instruction data */

void MESSAGEBEEP(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- LOADCURSOR @ 1018:008c

/* WARNING: Control flow encountered bad instruction data */

void LOADCURSOR(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- LOADSTRING @ 1018:0090

/* WARNING: Control flow encountered bad instruction data */

void LOADSTRING(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- _WSPRINTF @ 1018:0094

/* WARNING: Control flow encountered bad instruction data */

void _WSPRINTF(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- LSTRCMP @ 1018:0098

/* WARNING: Control flow encountered bad instruction data */

void LSTRCMP(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- M007_PUTVALUE @ 1018:009c

/* WARNING: Control flow encountered bad instruction data */

void M007_PUTVALUE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- M007_GETVALUE @ 1018:00a0

/* WARNING: Control flow encountered bad instruction data */

void M007_GETVALUE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- M007_PUTLOW @ 1018:00a4

/* WARNING: Control flow encountered bad instruction data */

void M007_PUTLOW(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- M007_GETLOW @ 1018:00a8

/* WARNING: Control flow encountered bad instruction data */

void M007_GETLOW(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- M007_PUTHIGH @ 1018:00ac

/* WARNING: Control flow encountered bad instruction data */

void M007_PUTHIGH(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- M007_GETHIGH @ 1018:00b0

/* WARNING: Control flow encountered bad instruction data */

void M007_GETHIGH(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- M007_PUTSTATE @ 1018:00b4

/* WARNING: Control flow encountered bad instruction data */

void M007_PUTSTATE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- M007_GETSTATE @ 1018:00b8

/* WARNING: Control flow encountered bad instruction data */

void M007_GETSTATE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- UIF_MESSAGE @ 1018:00bc

/* WARNING: Control flow encountered bad instruction data */

void UIF_MESSAGE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- M007_PUTXY @ 1018:00c0

/* WARNING: Control flow encountered bad instruction data */

void M007_PUTXY(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- UIF_LOG @ 1018:00c4

/* WARNING: Control flow encountered bad instruction data */

void UIF_LOG(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- HLEOUIFLANGUAGE @ 1018:00c8

/* WARNING: Control flow encountered bad instruction data */

void HLEOUIFLANGUAGE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GETLEOINIFILEPATH @ 1018:00cc

/* WARNING: Control flow encountered bad instruction data */

void GETLEOINIFILEPATH(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- DLL_SET_TILT_AXIS @ 1018:00d0

/* WARNING: Control flow encountered bad instruction data */

void DLL_SET_TILT_AXIS(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- EOSUSPENDOPERATION @ 1018:00d4

/* WARNING: Control flow encountered bad instruction data */

void EOSUSPENDOPERATION(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- CONFIGURE_HARD_PANEL @ 1018:00d8

/* WARNING: Control flow encountered bad instruction data */

void CONFIGURE_HARD_PANEL(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- DOCOMMANDGETCOMMSPSU @ 1018:00dc

/* WARNING: Control flow encountered bad instruction data */

void DOCOMMANDGETCOMMSPSU(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_321 @ 1018:00e0

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_321(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_326 @ 1018:00e4

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_326(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_700 @ 1018:00e8

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_700(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_701 @ 1018:00ec

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_701(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_702 @ 1018:00f0

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_702(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_703 @ 1018:00f4

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_703(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_704 @ 1018:00f8

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_704(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_705 @ 1018:00fc

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_705(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_706 @ 1018:0100

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_706(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_707 @ 1018:0104

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_707(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_708 @ 1018:0108

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_708(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_709 @ 1018:010c

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_709(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_710 @ 1018:0110

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_710(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_711 @ 1018:0114

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_711(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_712 @ 1018:0118

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_712(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_713 @ 1018:011c

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_713(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_714 @ 1018:0120

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_714(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_715 @ 1018:0124

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_715(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_716 @ 1018:0128

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_716(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_717 @ 1018:012c

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_717(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_718 @ 1018:0130

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_718(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_719 @ 1018:0134

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_719(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_720 @ 1018:0138

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_720(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_721 @ 1018:013c

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_721(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_722 @ 1018:0140

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_722(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_723 @ 1018:0144

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_723(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_724 @ 1018:0148

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_724(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_725 @ 1018:014c

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_725(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_726 @ 1018:0150

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_726(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_727 @ 1018:0154

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_727(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_728 @ 1018:0158

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_728(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_729 @ 1018:015c

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_729(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_730 @ 1018:0160

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_730(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_731 @ 1018:0164

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_731(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_732 @ 1018:0168

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_732(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_733 @ 1018:016c

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_733(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_734 @ 1018:0170

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_734(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_735 @ 1018:0174

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_735(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


