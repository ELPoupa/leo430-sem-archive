// Decompiled with Ghidra from m100.dll
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
  
  DAT_1008_011c = 0x1008;
  uVar3 = unaff_CS;
  DAT_1008_011a = unaff_DI;
  DAT_1008_011e = in_CX;
  DAT_1008_0120 = in_BX;
  DAT_1008_0122 = unaff_SI;
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
  DAT_1008_0140 = CONCAT11((char)uVar3,(char)((uint)uVar3 >> 8));
  if ((DAT_1000_0010 & 1) == 0) {
    pcVar1 = (code *)swi(0x21);
    DAT_1008_0144 = (*pcVar1)();
  }
  else {
    uVar4 = 0x1000;
    DAT_1008_0144 = DOS3CALL(0x1000);
  }
  DAT_1008_0142 = CONCAT11((char)DAT_1008_0144,(char)((uint)DAT_1008_0144 >> 8));
  if ((DAT_1000_0010 & 1) == 0) {
    DAT_1008_0147 = 0;
  }
  FUN_1000_010e(uVar4);
  FUN_1000_03f0();
  DAT_1008_0124 = DAT_1008_0124 + '\x01';
  FUN_1000_03a0(DAT_1008_0160,DAT_1008_0162,DAT_1008_0164,DAT_1008_0166,DAT_1008_0168);
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
  if (DAT_1008_0362 != 0) {
    bVar2 = false;
    (*DAT_1008_0360)();
    if (bVar2) {
      FUN_1000_0488();
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
  DAT_1008_0171 = 1;
  FUN_1000_01de();
  FUN_1000_01de();
  FUN_1000_01de();
  FUN_1000_01de();
  FUN_1000_1dde();
  FUN_1000_04fc();
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


// ---- thunk_FUN_1000_0518 @ 1000:01f2

int __cdecl16far thunk_FUN_1000_0518(byte *param_1)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  byte *pbVar5;
  undefined2 uVar6;
  
  uVar6 = (undefined2)((ulong)param_1 >> 0x10);
  pbVar5 = (byte *)param_1;
  iVar4 = 0;
  do {
    do {
      pbVar1 = pbVar5;
      pbVar5 = pbVar5 + 1;
      bVar2 = *pbVar1;
    } while (bVar2 == 0x20);
  } while (bVar2 == 9);
  if ((bVar2 != 0x2d) && (bVar3 = bVar2, bVar2 != 0x2b)) goto LAB_1000_0539;
  while( true ) {
    pbVar1 = pbVar5;
    pbVar5 = pbVar5 + 1;
    bVar3 = *pbVar1;
LAB_1000_0539:
    if ((0x39 < bVar3) || (bVar3 < 0x30)) break;
    iVar4 = iVar4 * 10 + (uint)(byte)(bVar3 - 0x30);
  }
  if (bVar2 == 0x2d) {
    iVar4 = -iVar4;
  }
  return iVar4;
}


// ---- FUN_1000_01f6 @ 1000:01f6

undefined2 __cdecl16far FUN_1000_01f6(char *param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 in_DX;
  undefined2 uVar3;
  
  while (uVar3 = (undefined2)((ulong)param_1 >> 0x10), (*(byte *)(*param_1 + 0x1c3) & 8) != 0) {
    param_1 = (char *)CONCAT22(uVar3,(char *)param_1 + 1);
  }
  uVar1 = FUN_1000_04fe((char *)param_1,uVar3,0,0);
  iVar2 = FUN_1000_0bde((char *)param_1,uVar3,uVar1);
  DAT_1008_0980 = *(undefined2 *)(iVar2 + 8);
  DAT_1008_0982 = *(undefined2 *)(iVar2 + 10);
  DAT_1008_0984 = *(undefined2 *)(iVar2 + 0xc);
  DAT_1008_0986 = *(undefined2 *)(iVar2 + 0xe);
  return 0x980;
}


// ---- FUN_1000_0254 @ 1000:0254

void FUN_1000_0254(void)

{
  code *pcVar1;
  int unaff_BP;
  
  if ((DAT_1000_0010 & 1) == 0) {
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)(0x1008,unaff_BP + 1);
  }
  else {
    DOS3CALL(0x1000,0x1008);
  }
  FUN_1000_048e();
  return;
}


// ---- FUN_1000_028c @ 1000:028c

void __cdecl16far FUN_1000_028c(char *param_1,char *param_2)

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


// ---- FUN_1000_02c8 @ 1000:02c8

undefined2 __cdecl16far FUN_1000_02c8(void)

{
  longdouble in_ST0;
  undefined2 local_10;
  
  local_10 = (undefined2)(sqword)ROUND(in_ST0);
  return local_10;
}


// ---- FUN_1000_0306 @ 1000:0306

void __cdecl16far FUN_1000_0306(void)

{
  longdouble in_ST0;
  longdouble in_ST1;
  
  DAT_1008_0172 =
       (uint)(in_ST0 < in_ST1) << 8 | (uint)(NAN(in_ST0) || NAN(in_ST1)) << 10 |
       (uint)(in_ST0 == in_ST1) << 0xe;
  return;
}


// ---- FUN_1000_0330 @ 1000:0330

void __cdecl16far FUN_1000_0330(void)

{
  longdouble in_ST0;
  longdouble in_ST1;
  
  DAT_1008_0172 =
       (uint)(in_ST0 < in_ST1) << 8 | (uint)(NAN(in_ST0) || NAN(in_ST1)) << 10 |
       (uint)(in_ST0 == in_ST1) << 0xe;
  return;
}


// ---- FUN_1000_035a @ 1000:035a

undefined2 __cdecl16far
FUN_1000_035a(undefined2 param_1,undefined2 param_2,undefined2 param_3,uint param_4)

{
  DAT_1008_0132._0_2_ = param_1;
  DAT_1008_0132._2_2_ = param_2;
  DAT_1008_0136 = param_3;
  DAT_1008_0138 = param_4 & 0x7fff;
  return 0x132;
}


// ---- FUN_1000_03a0 @ 1000:03a0

void __cdecl16far FUN_1000_03a0(void)

{
  FUN_1000_2010(DAT_1008_0120,DAT_1008_0122,DAT_1008_011e,DAT_1008_011c,DAT_1008_011a);
  return;
}


// ---- FUN_1000_03cc @ 1000:03cc

void __cdecl16far FUN_1000_03cc(void)

{
  FUN_1000_0c9d(0xfc);
  FUN_1000_0c9d(0xff);
  return;
}


// ---- FUN_1000_03f0 @ 1000:03f0

void __cdecl16far FUN_1000_03f0(void)

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
  pcVar11 = (char *)FUN_1000_0d00();
  uVar5 = (undefined2)((ulong)pcVar11 >> 0x10);
  pcVar9 = (char *)pcVar11;
  puVar12 = (undefined2 *)FUN_1000_0d00();
  uVar6 = (undefined2)((ulong)puVar12 >> 0x10);
  DAT_1008_0166 = (undefined2 *)puVar12;
  pcVar8 = (char *)0x0;
  for (; DAT_1008_0168 = (undefined2)((ulong)puVar12 >> 0x10), puVar2 = (undefined2 *)puVar12,
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
      puVar12 = (undefined2 *)CONCAT22(DAT_1008_0168,puVar2 + 2);
    } while (cVar1 != '\0');
  }
  *puVar2 = 0;
  puVar2[1] = 0;
  return;
}


// ---- FUN_1000_0488 @ 1000:0488

void FUN_1000_0488(void)

{
  FUN_1000_0cbe();
  return;
}


// ---- FUN_1000_048e @ 1000:048e

undefined2 __cdecl16far FUN_1000_048e(void)

{
  bool in_CF;
  
  if (!in_CF) {
    return 0;
  }
  FUN_1000_04c5();
  return 0xffff;
}


// ---- FUN_1000_04c5 @ 1000:04c5

void __cdecl16near FUN_1000_04c5(void)

{
  char cVar1;
  uint in_AX;
  
  DAT_1008_0148 = (byte)in_AX;
  cVar1 = (char)(in_AX >> 8);
  if (cVar1 != '\0') goto LAB_1000_04e2;
  if (DAT_1008_0148 < 0x22) {
    if (DAT_1008_0148 < 0x20) {
      if (0x13 < DAT_1008_0148) goto LAB_1000_04dc;
    }
    else {
      in_AX = 5;
    }
  }
  else {
LAB_1000_04dc:
    in_AX = 0x13;
  }
  cVar1 = *(char *)(ulong)((in_AX & 0xff) + 0x18c);
LAB_1000_04e2:
  DAT_1008_013c = (int)cVar1;
  return;
}


// ---- FUN_1000_04ec @ 1000:04ec

undefined2 __cdecl16far FUN_1000_04ec(void)

{
  undefined2 unaff_SS;
  
  if (___EXPORTEDSTUB != (code)0xb8) {
    return unaff_SS;
  }
  return uRam10000d2f;
}


// ---- FUN_1000_04fc @ 1000:04fc

void __cdecl16near FUN_1000_04fc(void)

{
  return;
}


// ---- FUN_1000_04fe @ 1000:04fe

uint __cdecl16far FUN_1000_04fe(char *param_1)

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


// ---- FUN_1000_0518 @ 1000:0518

int __cdecl16far FUN_1000_0518(byte *param_1)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  byte *pbVar5;
  undefined2 uVar6;
  
  uVar6 = (undefined2)((ulong)param_1 >> 0x10);
  pbVar5 = (byte *)param_1;
  iVar4 = 0;
  do {
    do {
      pbVar1 = pbVar5;
      pbVar5 = pbVar5 + 1;
      bVar2 = *pbVar1;
    } while (bVar2 == 0x20);
  } while (bVar2 == 9);
  if ((bVar2 != 0x2d) && (bVar3 = bVar2, bVar2 != 0x2b)) goto LAB_1000_0539;
  while( true ) {
    pbVar1 = pbVar5;
    pbVar5 = pbVar5 + 1;
    bVar3 = *pbVar1;
LAB_1000_0539:
    if ((0x39 < bVar3) || (bVar3 < 0x30)) break;
    iVar4 = iVar4 * 10 + (uint)(byte)(bVar3 - 0x30);
  }
  if (bVar2 == 0x2d) {
    iVar4 = -iVar4;
  }
  return iVar4;
}


// ---- FUN_1000_056e @ 1000:056e

void __cdecl16far FUN_1000_056e(char *param_1)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  undefined2 uVar4;
  char local_6;
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  if ((*(byte *)(*param_1 + 0x1c3) & 1) == 0) {
    iVar3 = (int)*param_1;
  }
  else {
    iVar3 = *param_1 + 0x20;
  }
  if (iVar3 != 0x65) {
    do {
      pcVar1 = (char *)param_1 + 1;
      param_1 = (char *)ZEXT24(pcVar1);
    } while ((*(byte *)(*pcVar1 + 0x1c3) & 4) != 0);
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


// ---- FUN_1000_05e4 @ 1000:05e4

undefined2 __cdecl16far FUN_1000_05e4(char *param_1)

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


// ---- FUN_1000_0668 @ 1000:0668

bool __cdecl16far FUN_1000_0668(double *param_1)

{
  return DAT_1008_04b0 <= *param_1;
}


// ---- FUN_1000_06a0 @ 1000:06a0

void __cdecl16far FUN_1000_06a0(int param_1,float *param_2,undefined2 param_3,undefined2 param_4)

{
  undefined2 *puVar1;
  double *pdVar2;
  undefined2 in_DX;
  float *pfVar3;
  undefined2 uVar4;
  
  if (param_1 == 0) {
    pdVar2 = (double *)FUN_1000_01f6(param_3,param_4);
    *param_2 = (float)*pdVar2;
  }
  else {
    puVar1 = (undefined2 *)FUN_1000_01f6(param_3,param_4);
    uVar4 = (undefined2)((ulong)param_2 >> 0x10);
    pfVar3 = (float *)param_2;
    *(undefined2 *)param_2 = *puVar1;
    *(undefined2 *)((int)pfVar3 + 2) = puVar1[1];
    *(undefined2 *)(pfVar3 + 1) = puVar1[2];
    *(undefined2 *)((int)pfVar3 + 6) = puVar1[3];
  }
  return;
}


// ---- FUN_1000_06f8 @ 1000:06f8

undefined1 * __cdecl16far
FUN_1000_06f8(undefined2 *param_1,undefined1 *param_2,undefined2 param_3,int param_4,int param_5)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined2 in_DX;
  undefined2 *puVar3;
  int iVar4;
  undefined2 uVar5;
  undefined4 local_c;
  undefined4 local_8;
  
  if (DAT_1008_02c4 == '\0') {
    uVar5 = (undefined2)((ulong)param_1 >> 0x10);
    puVar3 = (undefined2 *)param_1;
    piVar1 = (int *)FUN_1000_0f84(*param_1,puVar3[1],puVar3[2],puVar3[3]);
    local_8 = (int *)CONCAT22(in_DX,piVar1);
    FUN_1000_0d42(param_2 + (uint)(0 < param_4) + (uint)(*local_8 == 0x2d),param_3,param_4 + 1,
                  piVar1,in_DX);
  }
  else {
    local_8 = (int *)CONCAT22(DAT_1008_0964,DAT_1008_0962);
    FUN_1000_0baa(0 < param_4,param_2 + (*DAT_1008_0962 == 0x2d),param_3);
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
           FUN_1000_028c((undefined1 *)local_c + param_4 + (uint)(DAT_1008_02c4 == '\0'),
                         local_c._2_2_,0x2c9,0x1008);
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


// ---- FUN_1000_0890 @ 1000:0890

void __cdecl16far
FUN_1000_0890(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5,undefined2 param_6)

{
  DAT_1008_02c4 = 1;
  FUN_1000_06f8(param_1,param_2,param_3,param_4,param_5,param_6);
  DAT_1008_02c4 = 0;
  return;
}


// ---- FUN_1000_08c4 @ 1000:08c4

undefined1 * __cdecl16far
FUN_1000_08c4(undefined2 *param_1,undefined1 *param_2,undefined2 param_3,int param_4)

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
  
  iVar3 = DAT_1008_02c6;
  if (DAT_1008_02c4 == '\0') {
    uVar6 = (undefined2)((ulong)param_1 >> 0x10);
    puVar4 = (undefined2 *)param_1;
    piVar5 = (int *)FUN_1000_0f84(*param_1,puVar4[1],puVar4[2],puVar4[3]);
    local_8 = (int *)CONCAT22(in_DX,piVar5);
    FUN_1000_0d42(param_2 + (*local_8 == 0x2d),param_3,piVar5[1] + param_4,piVar5,in_DX);
  }
  else {
    local_8 = (int *)CONCAT22(DAT_1008_0964,DAT_1008_0962);
    iVar1 = *DAT_1008_0962;
    if (param_4 == DAT_1008_02c6) {
      param_2[DAT_1008_02c6 + (uint)(iVar1 == 0x2d)] = 0x30;
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
    FUN_1000_0baa(1,puVar2,param_3);
    puVar2 = puVar2 + 1;
    *local_c = 0x30;
  }
  else {
    puVar2 = puVar2 + piVar5[1];
  }
  local_c = (undefined1 *)CONCAT22(param_3,puVar2);
  if (0 < param_4) {
    FUN_1000_0baa(1,puVar2,param_3);
    *local_c = 0x2e;
    if (piVar5[1] < 0) {
      if (DAT_1008_02c4 == '\0') {
        iVar3 = -piVar5[1];
        if (-param_4 != piVar5[1] && param_4 <= iVar3) {
          iVar3 = param_4;
        }
      }
      else {
        iVar3 = -piVar5[1];
      }
      FUN_1000_0baa(iVar3,puVar2 + 1,param_3);
      FUN_1000_0e0a(puVar2 + 1,param_3,0x30,iVar3);
    }
  }
  return param_2;
}


// ---- FUN_1000_0a2a @ 1000:0a2a

void __cdecl16far
FUN_1000_0a2a(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5)

{
  DAT_1008_02c4 = 1;
  FUN_1000_08c4(param_1,param_2,param_3,param_4,param_5);
  DAT_1008_02c4 = 0;
  return;
}


// ---- FUN_1000_0a5c @ 1000:0a5c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far
FUN_1000_0a5c(undefined2 *param_1,int param_2,undefined2 param_3,int param_4,undefined2 param_5)

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
  piVar2 = (int *)FUN_1000_0f84(*param_1,puVar5[1],puVar5[2],puVar5[3]);
  _DAT_1008_0962 = (int *)CONCAT22(in_DX,piVar2);
  DAT_1008_02c6 = piVar2[1] + -1;
  pcVar3 = (char *)((uint)(*_DAT_1008_0962 == 0x2d) + param_2);
  local_8 = (char *)CONCAT22(param_3,pcVar3);
  FUN_1000_0d42(pcVar3,param_3,param_4,piVar2,in_DX);
  iVar4 = ((int *)_DAT_1008_0962)[1] + -1;
  DAT_1008_02c8 = DAT_1008_02c6 < iVar4;
  DAT_1008_02c6 = iVar4;
  if ((iVar4 < -4) || (param_4 <= iVar4)) {
    FUN_1000_0890(puVar5,uVar6,param_2,param_3,param_4,param_5);
  }
  else {
    if ((bool)DAT_1008_02c8) {
      do {
        pcVar1 = local_8;
        uVar7 = (undefined2)((ulong)local_8 >> 0x10);
        pcVar3 = (char *)local_8;
        local_8 = (char *)CONCAT22(uVar7,(char *)local_8 + 1);
      } while (*pcVar1 != '\0');
      pcVar3[-1] = '\0';
    }
    FUN_1000_0a2a(puVar5,uVar6,param_2,param_3,param_4);
  }
  return;
}


// ---- FUN_1000_0b3c @ 1000:0b3c

void __cdecl16far
FUN_1000_0b3c(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             int param_5,undefined2 param_6,undefined2 param_7)

{
  int unaff_BP;
  
  if ((param_5 == 0x65) || (param_5 == 0x45)) {
    FUN_1000_06f8(param_1,param_2,param_3,param_4,param_6,param_7);
  }
  else if (param_5 == 0x66) {
    FUN_1000_08c4(param_1,param_2,param_3,param_4,param_6);
  }
  else {
    FUN_1000_0a5c(param_1,param_2,param_3,param_4,param_6,param_7,0x1008,unaff_BP + 1);
  }
  return;
}


// ---- FUN_1000_0baa @ 1000:0baa

void FUN_1000_0baa(int param_1,int param_2,undefined2 param_3)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = FUN_1000_0df0(param_2,param_3);
    FUN_1000_0e52(param_2 + param_1,param_3,param_2,param_3,iVar1 + 1);
  }
  return;
}


// ---- FUN_1000_0bde @ 1000:0bde

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 __cdecl16far FUN_1000_0bde(int param_1,undefined2 param_2)

{
  uint uVar1;
  int unaff_BP;
  undefined2 unaff_SS;
  int local_8 [2];
  undefined2 local_4;
  int iStack_2;
  
  iStack_2 = unaff_BP + 1;
  local_4 = 0x1008;
  uVar1 = FUN_1000_0f1c(0,param_1,param_2,local_8,unaff_SS,0x96e,0x1008);
  DAT_1008_0968 = local_8[0] - param_1;
  DAT_1008_0967 = 0;
  if ((uVar1 & 4) != 0) {
    DAT_1008_0967 = 2;
  }
  if ((uVar1 & 1) != 0) {
    DAT_1008_0967 = DAT_1008_0967 | 1;
  }
  DAT_1008_0966 = (uVar1 & 2) != 0;
  return 0x966;
}


// ---- FUN_1000_0c66 @ 1000:0c66

int * __stdcall16far FUN_1000_0c66(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  piVar3 = (int *)&DAT_1008_04c0;
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


// ---- FUN_1000_0c9d @ 1000:0c9d

undefined2 __stdcall16far FUN_1000_0c9d(void)

{
  return 0x1008;
}


// ---- FUN_1000_0cbe @ 1000:0cbe

void FUN_1000_0cbe(void)

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
  FUN_1000_03cc();
  FUN_1000_0c9d(in_AX);
  pcVar2 = (char *)FUN_1000_0c66(uVar5);
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
  uVar8 = DAT_1008_0300;
  iVar4 = (int)((ulong)uVar7 >> 0x10);
  LOCK();
  DAT_1008_0300 = 0x1000;
  UNLOCK();
  iVar3 = FUN_1000_152f((int)uVar7,uVar8,in_CX,unaff_ES,uVar5);
  DAT_1008_0300 = uVar8;
  if (iVar4 != 0 || iVar3 != 0) {
    return;
  }
  FUN_1000_0cbe();
  return;
}


// ---- FUN_1000_0d00 @ 1000:0d00

void __cdecl16near FUN_1000_0d00(void)

{
  undefined2 uVar1;
  int iVar2;
  int in_DX;
  
  uVar1 = DAT_1008_0300;
  LOCK();
  DAT_1008_0300 = 0x1000;
  UNLOCK();
  iVar2 = FUN_1000_152f();
  DAT_1008_0300 = uVar1;
  if (in_DX != 0 || iVar2 != 0) {
    return;
  }
  FUN_1000_0cbe();
  return;
}


// ---- ___EXPORTEDSTUB @ 1000:0d2e

undefined2 __cdecl16far ___EXPORTEDSTUB(void)

{
  return 0;
}


// ---- FUN_1000_0d42 @ 1000:0d42

void __cdecl16far FUN_1000_0d42(char *param_1,int param_2,undefined4 param_3)

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
    FUN_1000_028c(pcVar4,uVar6,pcVar4 + 1,uVar6);
  }
  return;
}


// ---- FUN_1000_0df0 @ 1000:0df0

uint __cdecl16far FUN_1000_0df0(char *param_1)

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


// ---- FUN_1000_0e0a @ 1000:0e0a

undefined2 * __cdecl16far FUN_1000_0e0a(undefined2 *param_1,undefined1 param_2,uint param_3)

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


// ---- FUN_1000_0e52 @ 1000:0e52

undefined2 * __cdecl16far FUN_1000_0e52(undefined2 *param_1,undefined2 *param_2,uint param_3)

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
    lVar15 = FUN_1000_10f2(puVar10,iVar13,puVar8,iVar14);
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
          iVar14 = iVar14 + 0x74;
        }
        if (puVar12 == (undefined2 *)0x0) {
          iVar13 = iVar13 + 0x74;
        }
      }
    }
    else {
      uVar6 = param_3 - 1;
      puVar9 = (undefined1 *)((int)puVar8 + uVar6);
      if (CARRY2((uint)puVar8,uVar6)) {
        iVar14 = iVar14 + 0x74;
      }
      puVar11 = (undefined1 *)((int)puVar10 + uVar6);
      if (CARRY2((uint)puVar10,uVar6)) {
        iVar13 = iVar13 + 0x74;
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
          iVar14 = iVar14 + -0x74;
        }
        if (puVar11 == (undefined1 *)0xffff) {
          iVar13 = iVar13 + -0x74;
        }
      }
    }
  }
  return puVar10;
}


// ---- FUN_1000_0f1c @ 1000:0f1c

/* WARNING: Removing unreachable block (ram,0x10000f72) */
/* WARNING: Removing unreachable block (ram,0x10000f7b) */

int FUN_1000_0f1c(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
                 undefined2 param_5,double *param_6)

{
  int iVar1;
  undefined2 unaff_SS;
  longdouble local_c;
  
  iVar1 = FUN_1000_12a6(param_1,param_2,param_3,param_4,param_5,&local_c,unaff_SS);
  *param_6 = (double)local_c;
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  return iVar1;
}


// ---- FUN_1000_0f84 @ 1000:0f84

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 __cdecl16far
FUN_1000_0f84(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

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
  _DAT_1008_02e4 = param_1;
  _DAT_1008_02e6 = param_2;
  DAT_1008_02e8 = param_3;
  DAT_1008_02ea = param_4;
  uVar6 = FUN_1000_1160(&iStack_2);
  puVar5 = (undefined1 *)&DAT_1008_02ec;
  puVar4 = (undefined1 *)&DAT_1008_02e5;
  for (iVar3 = (int)DAT_1008_02e4; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar2 = *puVar1;
  }
  *puVar5 = 0;
  DAT_1008_02da = in_BX & 0xff;
  DAT_1008_02dc = (int)((ulong)uVar6 >> 0x10);
  DAT_1008_02de = (int)uVar6;
  DAT_1008_02e0 = 0x2ec;
  DAT_1008_02e2 = 0x1008;
  return 0x2da;
}


// ---- FUN_1000_0fda @ 1000:0fda

void __cdecl16near FUN_1000_0fda(void)

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
    FUN_1000_10d1();
    if ((*unaff_SI & 1) != 0) {
      in_CX = (in_CX - *unaff_SI) + -1;
    }
    uVar4 = *(uint *)(in_BX + 4);
    if (uVar4 != 0) {
      if (!CARRY2(in_CX + 2U,uVar4)) {
        uVar2 = FUN_1000_04ec();
        uVar4 = *(uint *)&DAT_1008_0300;
        if (uVar4 == 0x1000) goto LAB_1000_102c;
        uVar5 = 0x8000;
        while (uVar4 <= uVar5) {
          uVar5 = uVar5 >> 1;
          if (uVar5 == 0) goto LAB_1000_1045;
        }
        if (uVar5 < 8) goto LAB_1000_1045;
        uVar4 = uVar5 << 1;
        goto LAB_1000_102c;
      }
      uVar5 = 0xfff0;
      if (in_CX + 2U + uVar4 == 0) {
        while( true ) {
          bVar8 = false;
          iVar3 = FUN_1000_106b();
          if (!bVar8) break;
          if (uVar5 == 0xfff0) {
            return;
          }
LAB_1000_1045:
          uVar4 = 0x10;
LAB_1000_102c:
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


// ---- FUN_1000_106b @ 1000:106b

void __cdecl16near FUN_1000_106b(void)

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
LAB_1000_10c6:
    FUN_1000_0cbe();
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
    goto LAB_1000_10c6;
    if ((*(byte *)(iVar5 + 2) & 4) != 0) {
      *(int *)(iVar5 + -2) = in_BX + -1;
    }
  }
  return;
}


// ---- FUN_1000_10d1 @ 1000:10d1

void __cdecl16near FUN_1000_10d1(void)

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


// ---- FUN_1000_10f2 @ 1000:10f2

undefined4 __stdcall16far FUN_1000_10f2(uint param_1,undefined2 param_2,uint param_3)

{
  return CONCAT22(-(uint)(param_1 < param_3),param_1 - param_3);
}


// ---- FUN_1000_1160 @ 1000:1160

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined4 __cdecl16near FUN_1000_1160(void)

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
  
  pdVar30 = (double *)&DAT_1008_0302;
  for (iVar18 = 4; Var14 = _DAT_1008_0302, iVar18 != 0; iVar18 = iVar18 + -1) {
    pdVar3 = pdVar30;
    pdVar30 = (double *)((int)pdVar30 + 2);
    puVar1 = unaff_SI;
    unaff_SI = unaff_SI + 1;
    *(undefined2 *)pdVar3 = *puVar1;
  }
  uVar19 = DAT_1008_0302._6_2_;
                    /* WARNING: Ignoring partial resolution of indirect */
  DAT_1008_0302._7_1_ = DAT_1008_0302._7_1_ & 0x7f;
  Var15 = _DAT_1008_0302;
  DAT_1008_0302 = ABS((double)Var14);
  uVar24 = 0x20;
  if (((DAT_1008_0302._0_2_ == 0 && DAT_1008_0302._2_2_ == 0) && DAT_1008_0302._4_2_ == 0) &&
      DAT_1008_0302._6_2_ == 0) {
    DAT_1008_030e = 0x3001;
    _DAT_1008_0302 = (longdouble)Var15;
    return 1;
  }
  if ((int)uVar19 < 0) {
    uVar24 = 0x2d;
  }
  if ((~uVar19 & 0x7ff0) == 0) {
    _DAT_1008_0302 = (longdouble)Var15;
    return 0x10000;
  }
  DAT_1008_033b = (undefined1)in_FPUControlWord;
  DAT_1008_033d._0_1_ = DAT_1008_033b;
  lVar35 = (longdouble)DAT_1008_0302;
  DAT_1008_0302._7_1_ = (byte)((unkuint10)lVar35 >> 0x38);
  DAT_1008_030a = (uint)((unkuint10)lVar35 >> 0x40);
  lVar12 = (ulong)DAT_1008_030a * 0x4d10 + (ulong)((DAT_1008_030a >> 8) * 0x4d);
  uVar19 = (uint)lVar12;
  iVar18 = ((int)((ulong)lVar12 >> 0x10) + (uint)CARRY2(uVar19,(uint)DAT_1008_0302._7_1_ * 0x9a) +
           -0x1343) - (uint)(uVar19 + (uint)DAT_1008_0302._7_1_ * 0x9a < 0x12f4);
  _DAT_1008_0302 = lVar35;
  _DAT_1008_033b = in_FPUControlWord;
  FUN_1000_1752(iVar18,uVar24);
  DAT_1008_0339 =
       (uint)(_DAT_1000_1112 < lVar35) << 8 | (uint)(NAN(_DAT_1000_1112) || NAN(lVar35)) << 10 |
       (uint)(_DAT_1000_1112 == lVar35) << 0xe;
  if (_DAT_1000_1112 < lVar35 || (_DAT_1000_1112 == lVar35) != 0) {
    iVar18 = iVar18 + 1;
    lVar35 = _DAT_1000_111c * lVar35;
  }
  DAT_1008_0302._0_2_ = SUB102(lVar35,0);
  DAT_1008_0302._2_2_ = (uint)((unkuint10)lVar35 >> 0x10);
  DAT_1008_0302._4_2_ = (uint)((unkuint10)lVar35 >> 0x20);
  DAT_1008_0302._6_2_ = (uint)((unkuint10)lVar35 >> 0x30);
  DAT_1008_030a = (uint)((unkuint10)lVar35 >> 0x40);
  bVar32 = false;
  bVar17 = 0;
  for (iVar20 = -(DAT_1008_030a + 0xc002); iVar20 != 0; iVar20 = iVar20 + -1) {
    uVar19 = DAT_1008_0302._6_2_ & 1;
    DAT_1008_0302._6_2_ = DAT_1008_0302._6_2_ >> 1;
    bVar32 = (bVar17 & 1) != 0;
    bVar17 = (byte)(CONCAT11((DAT_1008_0302._0_2_ & 1) != 0,bVar17) >> 1);
    DAT_1008_0302._0_2_ = (uint)(CONCAT12((DAT_1008_0302._2_2_ & 1) != 0,DAT_1008_0302._0_2_) >> 1);
    DAT_1008_0302._2_2_ = (uint)(CONCAT12((DAT_1008_0302._4_2_ & 1) != 0,DAT_1008_0302._2_2_) >> 1);
    DAT_1008_0302._4_2_ = (uint)(CONCAT12(uVar19 != 0,DAT_1008_0302._4_2_) >> 1);
  }
  uVar28 = DAT_1008_0302._0_2_ + 0x39a + (uint)bVar32;
  uVar19 = (uint)(0xfc65 < DAT_1008_0302._0_2_ || CARRY2(DAT_1008_0302._0_2_ + 0x39a,(uint)bVar32));
  uVar26 = DAT_1008_0302._2_2_ + uVar19;
  uVar19 = (uint)CARRY2(DAT_1008_0302._2_2_,uVar19);
  uVar22 = DAT_1008_0302._4_2_ + uVar19;
  uVar19 = DAT_1008_0302._6_2_ + CARRY2(DAT_1008_0302._4_2_,uVar19);
  iVar20 = 0x10;
  pcVar16 = (char *)((int)(undefined2 *)&DAT_1008_030e + 1);
  _DAT_1008_0302 = lVar35;
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
  DAT_1008_030e = CONCAT11(DAT_1008_030e._1_1_,(char)iVar21 + '\x12');
  return CONCAT22(iVar18,1);
}


// ---- FUN_1000_12a6 @ 1000:12a6

uint FUN_1000_12a6(undefined2 param_1,byte *param_2,int *param_3,uint *param_4)

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
LAB_1000_12f5:
      pbVar1 = pbVar11;
      pbVar11 = pbVar9 + 2;
      bVar6 = *pbVar1;
    }
    else if (bVar6 == 0x2d) {
      local_16 = 0x8000;
      goto LAB_1000_12f5;
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
            if (local_1c == 0) goto LAB_1000_1343;
            pbVar1 = pbVar11;
            pbVar11 = pbVar11 + 1;
            bVar6 = *pbVar1;
          }
          if (bVar6 == 0x2e) {
            do {
              pbVar1 = pbVar11;
              pbVar11 = pbVar11 + 1;
              bVar6 = *pbVar1;
LAB_1000_135d:
              if ((bVar6 < 0x30) || (0x39 < bVar6)) goto LAB_1000_1379;
              pcVar2 = pcVar10;
              pcVar10 = pcVar10 + 1;
              *pcVar2 = bVar6 - 0x30;
              local_18 = local_18 + -1;
              local_1c = local_1c + -1;
            } while (local_1c != 0);
            goto LAB_1000_1370;
          }
          goto LAB_1000_1379;
        }
        do {
          local_18 = iVar5;
          bVar6 = *pbVar11;
LAB_1000_1322:
          pbVar11 = pbVar11 + 1;
          iVar5 = local_18 + -1;
        } while (bVar6 == 0x30);
        if (bVar6 != 0) goto LAB_1000_135d;
      }
      local_14 = pbVar11 + -1;
      goto LAB_1000_14db;
    }
    if ((bVar6 == 0x2e) && ((bVar6 = *pbVar11, 0x2f < bVar6 && (bVar6 < 0x3a)))) goto LAB_1000_1322;
  }
  local_10 = 4;
  goto LAB_1000_14db;
  while (iVar5 = local_18 + 1, bVar6 < 0x3a) {
LAB_1000_1343:
    local_18 = iVar5;
    pbVar1 = pbVar11;
    pbVar11 = pbVar11 + 1;
    bVar6 = *pbVar1;
    if (bVar6 < 0x30) break;
  }
  if (bVar6 == 0x2e) {
LAB_1000_1370:
    do {
      pbVar1 = pbVar11;
      pbVar11 = pbVar11 + 1;
      bVar6 = *pbVar1;
      if (bVar6 < 0x30) break;
    } while (bVar6 < 0x3a);
  }
LAB_1000_1379:
  local_1c = 0x19 - local_1c;
  local_14 = pbVar11 + -1;
  if ((((bVar6 == 0x45) || (bVar6 == 0x65)) || (bVar6 == 0x44)) || (bVar6 == 100)) {
    pbVar9 = pbVar11 + 1;
    bVar6 = *pbVar11;
    if (bVar6 == 0x2b) {
LAB_1000_13a8:
      pbVar1 = pbVar9;
      pbVar9 = pbVar11 + 2;
      bVar6 = *pbVar1;
    }
    else if (bVar6 == 0x2d) {
      local_1a = 0xffff;
      goto LAB_1000_13a8;
    }
    if ((0x2f < bVar6) && (bVar6 < 0x3a)) {
      uVar7 = bVar6 - 0x30;
      uVar8 = uVar7;
      do {
        pbVar1 = pbVar9;
        pbVar9 = pbVar9 + 1;
        bVar6 = *pbVar1;
        if ((bVar6 < 0x30) || (0x39 < bVar6)) goto LAB_1000_13df;
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
LAB_1000_13df:
      local_18 = local_18 + ((uVar8 ^ local_1a) - local_1a);
      local_14 = pbVar9 + -1;
    }
  }
  if (local_1c != 0) {
    *pcVar10 = '\0';
    pbVar11 = (byte *)(pcVar10 + -1);
    if (local_1c < 0x19) {
      if (local_18 != 0) goto LAB_1000_1426;
    }
    else {
      bVar6 = *pbVar11;
      *pbVar11 = 0;
      local_1c = local_1c - 1;
      local_18 = local_18 + 1;
      pbVar11 = (byte *)(pcVar10 + -2);
      if (bVar6 < 5) {
LAB_1000_1426:
        for (; *pbVar11 == 0; pbVar11 = pbVar11 + -1) {
          local_1c = local_1c - 1;
          local_18 = local_18 + 1;
        }
      }
      else {
        *pbVar11 = *pbVar11 + 1;
      }
    }
    FUN_1000_1ca2(&local_e,local_1c,local_36,unaff_SS);
    if (local_18 == 0) {
LAB_1000_1460:
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
          goto LAB_1000_14bd;
        }
LAB_1000_14e7:
        local_10 = local_10 | 1;
        goto LAB_1000_14db;
      }
    }
    else if (local_18 < 0x1450) {
      if (-0x1450 < local_18) {
        FUN_1000_1a48(param_1,local_18,&local_e,unaff_SS);
        goto LAB_1000_1460;
      }
      goto LAB_1000_14e7;
    }
    local_10 = local_10 | 2;
    puVar12[4] = local_16 | 0x7fff;
    puVar12[3] = 0x8000;
    puVar12[2] = 0;
    puVar12[1] = 0;
    *param_4 = 0;
    goto LAB_1000_14bd;
  }
LAB_1000_14db:
  for (iVar14 = 5; iVar14 != 0; iVar14 = iVar14 + -1) {
    puVar3 = puVar12;
    puVar12 = puVar12 + 1;
    *puVar3 = 0;
  }
LAB_1000_14bd:
  *param_3 = (int)local_14;
  ((int *)param_3)[1] = local_12;
  return local_10;
}


// ---- FUN_1000_152f @ 1000:152f

undefined2 __cdecl16far FUN_1000_152f(uint param_1)

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
      if (*(int *)((int)(undefined4 *)&DAT_1008_0350 + 2) != 0) {
        pcVar4 = (code *)0x1dec;
        while( true ) {
          uVar3 = *(uint *)&DAT_1008_035a;
          uVar6 = (uint)((ulong)*(undefined4 *)&DAT_1008_0354 >> 0x10);
          in_BX = (int)*(undefined4 *)&DAT_1008_0354;
          uVar10 = uVar6;
          do {
            do {
              unaff_CS = 0x1000;
              uVar9 = (*pcVar4)();
              if (!bVar7) {
                if (pcVar4 == (code *)0x1dec) goto LAB_1000_15a0;
                goto LAB_1000_159d;
              }
              puVar1 = (undefined4 *)(in_BX + 0xe);
              in_BX = (int)*puVar1;
              bVar7 = uVar6 < uVar3;
              bVar8 = uVar6 != uVar3;
              uVar6 = (uint)((ulong)*puVar1 >> 0x10);
            } while (bVar8);
            uVar3 = *(uint *)((int)*(undefined4 *)&DAT_1008_0354 + 0x14);
            uVar6 = (uint)((ulong)*(undefined4 *)&DAT_1008_0350 >> 0x10);
            in_BX = (int)*(undefined4 *)&DAT_1008_0350;
            bVar7 = uVar6 < uVar10;
            bVar8 = uVar6 != uVar10;
            uVar10 = uVar6;
          } while (bVar8);
          bVar7 = pcVar4 < (code *)0xfda;
          if (pcVar4 == (code *)0xfda) break;
          pcVar4 = (code *)0xfda;
        }
      }
      FUN_1000_1d5c();
      if (!bVar7) {
LAB_1000_159d:
        uVar9 = FUN_1000_1dec();
LAB_1000_15a0:
        *(undefined2 *)((int)(undefined4 *)&DAT_1008_0354 + 2) = (int)((ulong)uVar9 >> 0x10);
        *(int *)&DAT_1008_0354 = in_BX;
        return (int)uVar9;
      }
    }
    if (*(int *)&DAT_1008_034e == 0 && *(int *)&DAT_1008_034c == 0) {
      return 0;
    }
    iVar2 = (*(code *)*(undefined2 *)&DAT_1008_034c)(unaff_CS,param_1);
    if (iVar2 == 0) {
      return 0;
    }
  } while( true );
}


// ---- FUN_1000_1752 @ 1000:1752

void __cdecl16near FUN_1000_1752(void)

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


// ---- FUN_1000_1a48 @ 1000:1a48

void FUN_1000_1a48(int param_1,uint param_2,undefined2 *param_3)

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
    local_8 = (code *)0x1ae6;
    uVar2 = (undefined2)((ulong)param_3 >> 0x10);
    uStack_e = param_2;
    if (param_1 == 0) {
      local_8 = (code *)0x1adc;
      in_ST0 = *(unkbyte10 *)((undefined2 *)param_3 + 1);
    }
    while (uStack_e != 0) {
      uVar1 = uStack_e & 7;
      uStack_e = uStack_e >> 3;
      if (uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x10001ab2. Too many branches */
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


// ---- FUN_1000_1ca2 @ 1000:1ca2

uint * FUN_1000_1ca2(uint *param_1,int param_2,byte *param_3)

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
    FUN_1000_1d50();
    uVar18 = FUN_1000_1d50();
    uVar8 = (uint)CARRY2((uint)((ulong)uVar18 >> 0x10),uVar8);
    uVar4 = uVar13 + uVar5 + uVar8;
    uVar13 = (uint)(CARRY2(uVar13,uVar5) || CARRY2(uVar13 + uVar5,uVar8));
    bVar17 = CARRY2(uVar6,uVar10);
    uVar6 = uVar6 + uVar10;
    uVar11 = uVar6 + uVar13;
    bVar15 = CARRY2((uint)uVar18,uVar3);
    uVar1 = (uint)uVar18 + uVar3;
    uVar18 = FUN_1000_1d50();
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


// ---- FUN_1000_1d50 @ 1000:1d50

undefined4 __cdecl16near FUN_1000_1d50(void)

{
  int in_AX;
  int in_DX;
  uint in_BX;
  
  return CONCAT22(in_DX << 1,in_AX << 1 | (uint)((in_BX & 0x8000) != 0));
}


// ---- FUN_1000_1d5c @ 1000:1d5c

void __cdecl16near FUN_1000_1d5c(void)

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
      if (((int)uVar4 != 0) || (iVar1 == 0)) goto LAB_1000_1dd3;
    }
    lVar5 = GLOBALSIZE(0x1010,iVar1);
    if (lVar5 == 0) {
LAB_1000_1dd3:
      FUN_1000_0cbe();
      return;
    }
    *(int *)0x6 = iVar2;
    *(undefined2 *)0x2 = *(undefined2 *)(unaff_DI + 0xc);
    FUN_1000_1e92();
    FUN_1000_1ec6();
  }
  return;
}


// ---- FUN_1000_1dde @ 1000:1dde

void __cdecl16near FUN_1000_1dde(void)

{
  FUN_1000_1e68();
  return;
}


// ---- FUN_1000_1dec @ 1000:1dec

uint * __cdecl16near FUN_1000_1dec(void)

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
          if (CARRY2((uint)puVar1,uVar2)) goto LAB_1000_1e45;
          puVar6 = (uint *)((int)puVar1 + uVar2) + 1;
          uVar3 = *(uint *)((int)puVar1 + uVar2);
          if ((uVar3 & 1) == 0) break;
          uVar3 = uVar3 + uVar2 + 2;
          *puVar7 = uVar3;
        }
      }
      if (puVar6 + -1 < puVar5) break;
      if (((uint)puVar5 & 1) != 0) goto LAB_1000_1e45;
      puVar7 = (uint *)*(undefined2 *)(in_BX + 8);
      if ((uint *)*(undefined2 *)(in_BX + 10) == puVar7) goto LAB_1000_1e45;
      puVar5 = (uint *)((int)*(undefined2 *)(in_BX + 10) + -1);
    }
    puVar7 = (uint *)((int)puVar6 + uVar3);
  } while (!CARRY2((uint)puVar6,uVar3));
LAB_1000_1e45:
  puVar7 = (uint *)*(undefined2 *)(in_BX + 8);
  *(undefined2 *)(in_BX + 10) = puVar7;
  return puVar7;
}


// ---- FUN_1000_1e68 @ 1000:1e68

void __cdecl16near FUN_1000_1e68(void)

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


// ---- FUN_1000_1e92 @ 1000:1e92

void __cdecl16near FUN_1000_1e92(void)

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


// ---- FUN_1000_1ec6 @ 1000:1ec6

void __cdecl16near FUN_1000_1ec6(void)

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


// ---- FUN_1000_1efc @ 1000:1efc

char * __cdecl16far
FUN_1000_1efc(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             int param_5,undefined2 param_6,undefined2 param_7)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  undefined2 in_DX;
  undefined2 uVar7;
  undefined4 local_16;
  undefined4 local_12;
  
  iVar4 = FUN_1000_0f84(param_1,param_2,param_3,param_4);
  iVar5 = *(int *)(iVar4 + 2) + -1;
  DAT_1008_0976 = param_1;
  DAT_1008_0978 = param_2;
  DAT_1008_097a = param_3;
  DAT_1008_097c = param_4;
  if ((iVar5 < -1) || (param_5 + -1 < iVar5)) {
    pcVar6 = (char *)FUN_1000_06f8(0x976,0x1008,param_6,param_7,param_5 + -1,0);
  }
  else {
    pcVar6 = (char *)FUN_1000_08c4(0x976,0x1008,param_6,param_7,param_5 - *(int *)(iVar4 + 2));
  }
  local_12 = (char *)CONCAT22(in_DX,pcVar6);
  while( true ) {
    uVar7 = (undefined2)((ulong)local_12 >> 0x10);
    if ((*local_12 == '\0') || (*local_12 == '.')) break;
    local_12 = (char *)CONCAT22(uVar7,(char *)local_12 + 1);
  }
  if (*local_12 != '\0') {
    do {
      pcVar2 = (char *)local_12;
      local_12._0_2_ = pcVar2 + 1;
      if (*(char *)local_12 == '\0') break;
    } while (*(char *)local_12 != 'e');
    local_16 = (char *)CONCAT22(uVar7,(char *)local_12);
    local_12 = (char *)CONCAT22(uVar7,pcVar2);
    while (*(char *)local_12 == '0') {
      local_12 = (char *)CONCAT22(local_12._2_2_,(char *)local_12 + -1);
    }
    do {
      pcVar3 = local_16;
      local_16 = (char *)CONCAT22(local_16._2_2_,(char *)local_16 + 1);
      cVar1 = *pcVar3;
      local_12 = (char *)CONCAT22(local_12._2_2_,(char *)local_12 + 1);
      *local_12 = cVar1;
    } while (cVar1 != '\0');
  }
  return pcVar6;
}


// ---- FUN_1000_2010 @ 1000:2010

undefined2 __stdcall16far FUN_1000_2010(void)

{
  return 1;
}


// ---- WEP @ 1000:2022

undefined2 __stdcall16far WEP(void)

{
  return 1;
}


// ---- EHT_REPORTID @ 1000:2034

void __cdecl16far EHT_REPORTID(void)

{
  undefined2 unaff_CS;
  
  UIF_MESSAGE(unaff_CS,0x3082,0x1000);
  return;
}


// ---- INITIALISE_EHT_CONTROLLER_DATA @ 1000:204e

void __cdecl16far INITIALISE_EHT_CONTROLLER_DATA(void)

{
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  DAT_1008_0010 = 0;
  M007_PUTSTATE(unaff_CS,1);
  M007_PUTHIGH(0x1010,DAT_1008_0370,DAT_1008_0372);
  M007_PUTHIGH(0x1010,DAT_1008_0374,DAT_1008_0376);
  M007_PUTVALUE(0x1010,DAT_1008_0374,DAT_1008_0376);
  M007_PUTHIGH(0x1010,DAT_1008_0378,DAT_1008_037a);
  M007_PUTHIGH(0x1010,DAT_1008_037c,DAT_1008_037e);
  M007_PUTHIGH(0x1010,DAT_1008_0370,DAT_1008_0372);
  M007_PUTHIGH(0x1010,DAT_1008_0380,DAT_1008_0382);
  M007_PUTHIGH(0x1010,DAT_1008_0378,DAT_1008_037a);
  M007_PUTHIGH(0x1010,DAT_1008_037c,DAT_1008_037e);
  M007_PUTHIGH(0x1010,DAT_1008_0384,DAT_1008_0386);
  M007_PUTHIGH(0x1010,DAT_1008_0380,DAT_1008_0382);
  M007_PUTHIGH(0x1010,DAT_1008_0388,DAT_1008_038a);
  M007_PUTHIGH(0x1010,DAT_1008_0378,DAT_1008_037a);
  M007_PUTHIGH(0x1010,DAT_1008_037c,DAT_1008_037e);
  M007_PUTHIGH(0x1010,DAT_1008_0370,DAT_1008_0372);
  M007_PUTHIGH(0x1010,DAT_1008_038c,DAT_1008_038e);
  M007_PUTHIGH(0x1010,DAT_1008_0390,DAT_1008_0392);
  M007_PUTHIGH(0x1010,DAT_1008_0390,DAT_1008_0392);
  M007_PUTHIGH(0x1010,DAT_1008_0390,DAT_1008_0392);
  M007_PUTHIGH(0x1010,DAT_1008_0390,DAT_1008_0392);
  M007_PUTHIGH(0x1010,DAT_1008_0394,DAT_1008_0396);
  M007_PUTLOW(0x1010,DAT_1008_0398,DAT_1008_039a);
  M007_PUTLOW(0x1010,DAT_1008_039c,DAT_1008_039e);
  M007_PUTVALUE(0x1010,DAT_1008_0394,DAT_1008_0396);
  M007_PUTHIGH(0x1010,DAT_1008_03a0,DAT_1008_03a2);
  M007_PUTLOW(0x1010,DAT_1008_03a4,DAT_1008_03a6);
  M007_PUTVALUE(0x1010,DAT_1008_0370,DAT_1008_0372);
  M007_PUTHIGH(0x1010,DAT_1008_03a8,DAT_1008_03aa);
  M007_PUTLOW(0x1010,DAT_1008_03ac,DAT_1008_03ae);
  M007_PUTVALUE(0x1010,DAT_1008_03b0,DAT_1008_03b2);
  M007_PUTHIGH(0x1010,DAT_1008_03b4,DAT_1008_03b6);
  M007_PUTLOW(0x1010,DAT_1008_03b8,DAT_1008_03ba);
  M007_PUTVALUE(0x1010,DAT_1008_0374,DAT_1008_0376);
  M007_PUTHIGH(0x1010,DAT_1008_03bc,DAT_1008_03be);
  M007_PUTLOW(0x1010,DAT_1008_03c0,DAT_1008_03c2);
  M007_PUTVALUE(0x1010,DAT_1008_0378,DAT_1008_037a);
  M007_PUTHIGH(0x1010,DAT_1008_0378,DAT_1008_037a);
  M007_PUTHIGH(0x1010,DAT_1008_03a0,DAT_1008_03a2);
  M007_PUTHIGH(0x1010,DAT_1008_03a0,DAT_1008_03a2);
  M007_PUTHIGH(0x1010,DAT_1008_03a0,DAT_1008_03a2);
  M007_PUTLOW(0x1010,DAT_1008_0394,DAT_1008_0396);
  M007_PUTLOW(0x1010,DAT_1008_0394,DAT_1008_0396);
  M007_PUTLOW(0x1010,DAT_1008_0394,DAT_1008_0396);
  M007_PUTHIGH(0x1010,DAT_1008_03c4,DAT_1008_03c6);
  M007_PUTHIGH(0x1010,DAT_1008_03c8,DAT_1008_03ca);
  M007_PUTLOW(0x1010,DAT_1008_03cc,DAT_1008_03ce);
  M007_PUTLOW(0x1010,DAT_1008_03d0,DAT_1008_03d2);
  M007_PUTVALUE(0x1010,DAT_1008_0390,DAT_1008_0392);
  M007_PUTVALUE(0x1010,DAT_1008_0394,DAT_1008_0396);
  M007_PUTVALUE(0x1010,DAT_1008_0394,DAT_1008_0396);
  M007_PUTVALUE(0x1010,DAT_1008_0394,DAT_1008_0396);
  M007_PUTVALUE(0x1010,DAT_1008_03d4,DAT_1008_03d6);
  M007_PUTVALUE(0x1010,DAT_1008_03d8,DAT_1008_03da);
  M007_PUTSTATE(0x1010,0);
  M007_PUTSTATE(0x1010,2);
  M007_PUTSTATE(0x1010,0);
  M007_PUTSTATE(0x1010,0);
  M007_PUTSTATE(0x1010,0);
  uVar4 = 0x146;
  M007_PUTSTATE(0x1010,0);
  uVar3 = 0x28;
  M007_PUTSTATE(0x1010,0);
  uVar2 = 0xb;
  M007_PUTSTATE(0x1010,4);
  uVar1 = 0xe9;
  M007_PUTSTATE(0x1010,2);
  EHT_REPORTID(uVar1,uVar2,uVar3,uVar4);
  return;
}


// ---- INITIALISE_EHT_CONTROLLER @ 1000:240e

undefined2 __cdecl16far INITIALISE_EHT_CONTROLLER(void)

{
  int iVar1;
  long lVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  uVar4 = 0x1008;
  uVar3 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_900(0x1010,0x30a0,0x1000,uVar3,uVar4);
    lVar2 = Ordinal_901(0x1010);
    if (lVar2 != 0) {
      UIF_PRINT_DOUBLE(0x1010,(double)lVar2);
      UIF_LOG(0x1010,0x2000);
      return 0x1aa;
    }
  }
  return 0;
}


// ---- SUSPEND_EHT_CONTROLLER @ 1000:246e

undefined2 __cdecl16far SUSPEND_EHT_CONTROLLER(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_931(0x1010,uVar2,uVar3);
  }
  return 0;
}


// ---- KILL_EHT_CONTROLLER @ 1000:248c

undefined2 __cdecl16far KILL_EHT_CONTROLLER(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_932(0x1010,uVar2,uVar3);
  }
  return 0;
}


// ---- EHT_CONTROLLER_SHUTDOWN @ 1000:24ac

undefined2 __cdecl16far EHT_CONTROLLER_SHUTDOWN(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0xe;
  iVar1 = M007_GETSTATE();
  if (iVar1 != 0) {
    if (iVar1 != 3) {
      DOCOMMANDSHUTDOWN(uVar2,uVar3);
    }
    return 0x199;
  }
  return 0;
}


// ---- EHT_TIMER_TICK @ 1000:24d6

/* WARNING: Removing unreachable block (ram,0x10002506) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __stdcall16far EHT_TIMER_TICK(void)

{
  float fVar1;
  float *pfVar2;
  int iVar3;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  ulong uVar4;
  long lVar5;
  undefined4 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined1 *puVar9;
  undefined4 *puVar10;
  char *pcVar11;
  undefined2 uVar12;
  undefined2 uVar13;
  undefined4 local_8a;
  undefined2 uStack_86;
  float *pfStack_84;
  undefined2 uStack_82;
  undefined1 local_4a [64];
  undefined4 local_a;
  float local_6;
  
  uVar13 = 0x1008;
  if ((DAT_1008_0010 == 1) && (DAT_1008_0020 != '\0')) {
    FUN_1000_665c(0x1008);
    unaff_CS = 0x1010;
    uVar4 = GETTICKCOUNT();
    if (CONCAT22(DAT_1008_0014,DAT_1008_0012) <= uVar4) {
      lVar5 = GETTICKCOUNT();
      DAT_1008_0012 = (undefined2)(lVar5 + 60000);
      DAT_1008_0014 = (undefined2)((ulong)(lVar5 + 60000) >> 0x10);
      uStack_82 = 0x1d;
      pfStack_84 = &local_6;
      uStack_86 = 0x1010;
      local_8a = (float)CONCAT22(0x252c,(undefined2)local_8a);
      pfVar2 = (float *)M007_GETVALUE();
      if (_DAT_1008_03dc < *pfVar2) {
        pfStack_84 = (float *)&DAT_1008_00d2;
        uStack_86 = 0xd2;
        local_8a = (float)CONCAT22(&local_a,0x1010);
        pfVar2 = (float *)M007_GETVALUE();
        local_8a = *pfVar2 + DAT_1008_03e0;
        M007_PUTVALUE(0x1010);
      }
      local_8a = 1.291459e-39;
      unaff_CS = 0x1010;
      uVar13 = 0x2571;
      iVar3 = M007_GETSTATE();
      if (iVar3 == 1) {
        local_8a = (float)CONCAT22(local_8a._2_2_,0x111);
        uVar13 = 0x111;
        pfVar2 = (float *)M007_GETVALUE(0x1010,&local_a);
        unaff_CS = 0x1010;
        M007_PUTVALUE(0x1010,*pfVar2 + DAT_1008_03e0);
      }
    }
  }
  else if (DAT_1008_0020 == '\0') {
    unaff_CS = 0x1000;
    FUN_1000_50f0(0x16,0x1008);
  }
  if ((DAT_1008_0020 != '\0') && (DAT_1008_0022 != 0)) {
    local_a = DAT_1008_0016;
    fVar1 = local_a;
    local_a._2_2_ = (undefined2)((ulong)DAT_1008_0016 >> 0x10);
    uVar8 = local_a._2_2_;
    uVar12 = 0x1a6;
    local_a._0_2_ = SUB42(DAT_1008_0016,0);
    uVar7 = (undefined2)local_a;
    local_a = fVar1;
    M007_PUTHIGH(unaff_CS,uVar7,uVar8);
    uVar6 = CONCAT22(uVar12,0x1a6);
    M007_PUTLOW(0x1010,DAT_1008_001a._0_2_,DAT_1008_001a._2_2_);
    uVar13 = FUN_1000_02c8(uVar6,uVar13);
    _WSPRINTF(0x1000,&local_8a);
    uVar6 = GETLEOINIFILEPATH(0x1010,0,uVar13);
    iVar3 = FUN_1000_0254(0x1010,uVar6);
    if (iVar3 == 0) {
      pcVar11 = "UserMaxEht";
      puVar10 = &local_8a;
      puVar9 = local_4a;
      uVar8 = 0x40;
      uVar7 = 0x1000;
      uVar13 = unaff_SS;
      uVar6 = GETLEOINIFILEPATH(0x1000,0x40,puVar9);
      GETPRIVATEPROFILESTRING(0x1010,uVar6,uVar7,uVar8,puVar9,unaff_SS,puVar10,uVar13,pcVar11);
      iVar3 = thunk_FUN_1000_0518(local_4a);
      local_a = (float)iVar3;
    }
    local_6 = local_a;
    if ((local_a <= DAT_1008_0016) && (DAT_1008_001a <= local_a)) {
      SETUSER_MAX_EHT(local_a);
    }
    DAT_1008_0022 = 0;
  }
  return;
}


// ---- TEST_100 @ 1000:26a8

undefined2 * __stdcall16far TEST_100(undefined2 *param_1,float param_2)

{
  undefined2 uVar1;
  undefined2 unaff_SS;
  
  UIF_MESSAGE();
  UIF_PRINT_DOUBLE(0x1010,(double)param_2);
  UIF_LOG(0x1010,0x2000);
  uVar1 = DAT_1008_03de;
  *param_1 = DAT_1008_03dc;
  param_1[1] = uVar1;
  return param_1;
}


// ---- RESTORE_EHT_CONFIG @ 1000:26fe

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __stdcall16far RESTORE_EHT_CONFIG(undefined4 param_1)

{
  undefined2 *puVar1;
  double *pdVar2;
  undefined2 extraout_DX;
  undefined2 extraout_DX_00;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 unaff_SS;
  undefined4 uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  undefined2 uVar12;
  undefined2 uVar13;
  undefined2 uVar14;
  undefined2 uVar15;
  int iVar16;
  float local_9a;
  undefined1 local_96 [4];
  undefined1 local_92 [4];
  int local_8e;
  float local_8c;
  int local_88;
  int local_86;
  undefined1 local_84 [64];
  undefined1 local_44 [64];
  int local_4;
  
  local_86 = 0;
  local_88 = 0;
  FUN_1000_50f0(0x16,0x1008,0x1008);
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar3 = (int)param_1;
  if ((*(char *)(iVar3 + 5) < '\0') || ('\x01' < *(char *)(iVar3 + 5))) {
    iVar16 = 1;
  }
  else {
    iVar16 = (int)*(char *)(iVar3 + 5);
  }
  SWITCHANODE(iVar16);
  iVar16 = M007_GETSTATE(0x1000,0x8c);
  if ((iVar16 == 5) || (iVar16 = M007_GETSTATE(0x1010,0x8c), iVar16 == 7)) {
    local_86 = 1;
  }
  uVar15 = 0x2767;
  iVar16 = M007_GETSTATE(0x1010,0x144);
  if (iVar16 == 2) {
    local_88 = 1;
  }
  if (local_86 != 0) {
    uVar15 = 0x30d4;
    uVar14 = 0x1000;
    uVar13 = 0x30ce;
    uVar12 = 0x1000;
    uVar11 = 0x30ca;
    puVar7 = local_44;
    uVar10 = 0x40;
    uVar9 = 0x1010;
    uVar5 = unaff_SS;
    uVar6 = GETLEOINIFILEPATH(0x1010,0x40,puVar7);
    GETPRIVATEPROFILESTRING(0x1010,uVar6,uVar9,uVar10,puVar7,uVar5,uVar11,uVar12,uVar13,uVar14);
    local_8e = thunk_FUN_1000_0518(local_44);
    if (local_8e < 0) {
      if ((local_88 != 0) && (*(char *)(iVar3 + 4) == '\0')) {
        *(undefined1 *)(iVar3 + 4) = 5;
      }
    }
    else {
      *(undefined1 *)(iVar3 + 4) = (undefined1)local_8e;
    }
  }
  iVar16 = (int)*(char *)(iVar3 + 4);
  if ((iVar16 < 0) || ((3 < iVar16 && ((iVar16 + -4 < 1 || (1 < iVar16 + -6)))))) {
    iVar16 = 1;
  }
  else {
    iVar16 = (int)*(char *)(iVar3 + 4);
  }
  SWITCHFILAMENT_TYPE(iVar16);
  uVar5 = 0x1010;
  iVar16 = M007_GETSTATE(0x1000,0xb,uVar15);
  if (iVar16 != 4) {
    uVar15 = 0x81;
    M007_PUTVALUE(0x1010,DAT_1008_03dc,DAT_1008_03de);
    uVar15 = M007_GETSTATE(0x1010,0xb,uVar15);
    uVar5 = 0x1000;
    FUN_1000_58fe(uVar15);
  }
  if ((*(char *)(iVar3 + 6) < '\0') || ('\x01' < *(char *)(iVar3 + 6))) {
    iVar16 = 1;
  }
  else {
    iVar16 = (int)*(char *)(iVar3 + 6);
  }
  M007_PUTSTATE(uVar5,iVar16);
  SETEHT_ACTUAL_1(*(undefined2 *)(iVar3 + 7),*(undefined2 *)(iVar3 + 9));
  SETEHT_ACTUAL_3(*(undefined2 *)(iVar3 + 0xb),*(undefined2 *)(iVar3 + 0xd));
  M007_PUTVALUE(0x1000,*(undefined2 *)(iVar3 + 0x2f),*(undefined2 *)(iVar3 + 0x31));
  M007_PUTVALUE(0x1010,*(undefined2 *)(iVar3 + 0x56),*(undefined2 *)(iVar3 + 0x58));
  M007_PUTVALUE(0x1010,*(undefined2 *)(iVar3 + 0x5a),*(undefined2 *)(iVar3 + 0x5c));
  puVar1 = (undefined2 *)M007_GETVALUE(0x1010,local_92);
  M007_PUTLOW(0x1010,*puVar1,puVar1[1]);
  puVar1 = (undefined2 *)M007_GETVALUE(0x1010,local_96);
  M007_PUTHIGH(0x1010,*puVar1,puVar1[1]);
  M007_PUTVALUE(0x1010,*(undefined2 *)(iVar3 + 0x37),*(undefined2 *)(iVar3 + 0x39));
  M007_PUTVALUE(0x1010,*(undefined2 *)(iVar3 + 0x3b),*(undefined2 *)(iVar3 + 0x3d));
  puVar1 = (undefined2 *)M007_GETVALUE(0x1010,&local_9a);
  M007_PUTVALUE(0x1010,*puVar1,puVar1[1]);
  uVar10 = 0x159;
  M007_PUTVALUE(0x1010,*(undefined2 *)(iVar3 + 0x5e),*(undefined2 *)(iVar3 + 0x60));
  uVar9 = 0x15a;
  M007_PUTVALUE(0x1010,*(undefined2 *)(iVar3 + 0x62),*(undefined2 *)(iVar3 + 100));
  uVar5 = 0x15b;
  M007_PUTVALUE(0x1010,*(undefined2 *)(iVar3 + 0x66),*(undefined2 *)(iVar3 + 0x68));
  uVar15 = 0x15c;
  M007_PUTVALUE();
  FUN_1000_59b4(uVar15,uVar5,uVar9,uVar10);
  for (local_4 = 0; local_4 < 5; local_4 = local_4 + 1) {
    iVar16 = local_4 * 4;
    uVar15 = *(undefined2 *)(iVar3 + 0xf + iVar16 + 2);
    *(undefined2 *)(iVar16 + 0x24) = *(undefined2 *)(iVar3 + 0xf + iVar16);
    *(undefined2 *)(iVar16 + 0x26) = uVar15;
  }
  if (local_86 != 0) {
    for (local_4 = 0; local_4 < 8; local_4 = local_4 + 1) {
      _WSPRINTF(0x1000,local_84);
      puVar8 = local_84;
      uVar11 = 0x1000;
      uVar10 = 0x30ca;
      puVar7 = local_44;
      uVar9 = 0x40;
      uVar5 = 0x1010;
      uVar15 = unaff_SS;
      uVar6 = GETLEOINIFILEPATH(0x1010,0x40,puVar7);
      GETPRIVATEPROFILESTRING(0x1010,uVar6,uVar5,uVar9,puVar7,uVar15,uVar10,uVar11,puVar8);
      uVar15 = extraout_DX;
      pdVar2 = (double *)FUN_1000_01f6(local_44);
      local_9a = (float)*pdVar2;
      if (_DAT_1008_03dc <= local_9a) {
        *(float *)(local_4 * 4 + 0x24) = local_9a;
      }
      else {
        if (local_4 == 5) {
          uVar15 = DAT_1008_03e4;
          uVar5 = DAT_1008_03e6;
          if ((local_88 != 0) && (local_8e < 0)) goto LAB_1000_29da;
        }
        else {
          if (local_4 != 6) {
            if (local_4 == 7) {
              uVar15 = DAT_1008_03dc;
              uVar5 = DAT_1008_03de;
              goto LAB_1000_29ea;
            }
            goto LAB_1000_29f8;
          }
LAB_1000_29da:
          uVar15 = DAT_1008_0024;
          uVar5 = DAT_1008_0026;
        }
LAB_1000_29ea:
        *(undefined2 *)(local_4 * 4 + 0x24) = uVar15;
        *(undefined2 *)(local_4 * 4 + 0x26) = uVar5;
      }
LAB_1000_29f8:
      local_8c = local_9a;
    }
  }
  M007_GETSTATE(0x1000,0xb);
  SETTARGETCURRENT();
  DAT_1008_0010 = 1;
  uVar9 = 0x111;
  M007_PUTVALUE(0x1000,(float)CONCAT22(*(undefined2 *)(iVar3 + 0x29),*(undefined2 *)(iVar3 + 0x27))
                       * DAT_1008_03e8);
  SETEHT_OFFSET(*(undefined2 *)(iVar3 + 0x23),*(undefined2 *)(iVar3 + 0x25));
  uVar5 = 0xe0;
  uVar15 = 0x1010;
  M007_PUTSTATE(0x1000,(int)*(char *)(iVar3 + 0x3f));
  local_4 = 0;
  do {
    iVar16 = local_4 * 4;
    uVar10 = *(undefined2 *)(iVar3 + 0x40 + iVar16 + 2);
    *(undefined2 *)(iVar16 + 0x44) = *(undefined2 *)(iVar3 + 0x40 + iVar16);
    *(undefined2 *)(iVar16 + 0x46) = uVar10;
    local_4 = local_4 + 1;
  } while (local_4 < 5);
  if (local_86 != 0) {
    for (local_4 = 0; local_4 < 8; local_4 = local_4 + 1) {
      _WSPRINTF(uVar15,local_84);
      puVar8 = local_84;
      uVar14 = 0x1000;
      uVar13 = 0x30ca;
      puVar7 = local_44;
      uVar12 = 0x40;
      uVar11 = 0x1010;
      uVar15 = unaff_SS;
      uVar10 = unaff_SS;
      uVar6 = GETLEOINIFILEPATH(0x1010,0x40,puVar7);
      GETPRIVATEPROFILESTRING(0x1010,uVar6,uVar11,uVar12,puVar7,uVar15,uVar13,uVar14,puVar8,uVar10);
      uVar15 = 0x1000;
      uVar10 = extraout_DX_00;
      pdVar2 = (double *)FUN_1000_01f6(local_44);
      local_8c = (float)*pdVar2;
      if (_DAT_1008_03dc <= local_8c) {
        *(float *)(local_4 * 4 + 0x44) = local_8c;
      }
      else {
        uVar10 = DAT_1008_0044;
        uVar11 = DAT_1008_0046;
        if (local_4 == 5) {
          if ((local_88 == 0) || (-1 < local_8e)) {
LAB_1000_2b6f:
            uVar10 = DAT_1008_03dc;
            uVar11 = DAT_1008_03de;
          }
        }
        else if (local_4 != 6) {
          if (local_4 == 7) goto LAB_1000_2b6f;
          goto LAB_1000_2b84;
        }
        *(undefined2 *)(local_4 * 4 + 0x44) = uVar10;
        *(undefined2 *)(local_4 * 4 + 0x46) = uVar11;
      }
LAB_1000_2b84:
    }
  }
  iVar16 = M007_GETSTATE(uVar15,0xb,0xd2,uVar5,uVar9);
  M007_PUTVALUE(0x1010,*(undefined2 *)(iVar16 * 4 + 0x44),*(undefined2 *)(iVar16 * 4 + 0x46));
  M007_PUTSTATE(0x1010,(int)*(char *)(iVar3 + 0x54));
  M007_PUTSTATE(0x1010,(int)*(char *)(iVar3 + 0x55));
  return;
}


// ---- GET_EHT_CONFIG @ 1000:2c56

void __stdcall16far GET_EHT_CONFIG(undefined4 param_1)

{
  double dVar1;
  undefined1 uVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 extraout_DX;
  undefined2 unaff_SS;
  undefined4 uVar5;
  undefined1 *puVar6;
  undefined2 uVar7;
  undefined1 *puVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  undefined2 uVar12;
  undefined1 local_bc [4];
  undefined1 local_b8 [4];
  undefined1 local_b4 [4];
  undefined1 local_b0 [4];
  undefined1 local_ac [4];
  undefined1 local_a8 [4];
  undefined1 local_a4 [4];
  undefined1 local_a0 [4];
  undefined1 local_9c [4];
  undefined1 local_98 [4];
  undefined1 local_94 [4];
  undefined1 local_90 [4];
  int local_8c;
  undefined1 local_8a [4];
  undefined1 local_86 [64];
  undefined1 local_46 [64];
  int local_6;
  int local_4;
  
  uVar12 = 0x1008;
  local_6 = 0;
  uVar11 = 0x8c;
  iVar3 = M007_GETSTATE();
  if ((iVar3 == 5) || (iVar3 = M007_GETSTATE(0x1010,0x8c,uVar11,uVar12), iVar3 == 7)) {
    local_6 = 1;
  }
  local_8c = M007_GETSTATE(0x1010,0xb);
  uVar12 = 0xd2;
  puVar4 = (undefined2 *)M007_GETVALUE(0x1010,local_8a);
  uVar11 = puVar4[1];
  *(undefined2 *)(local_8c * 4 + 0x44) = *puVar4;
  *(undefined2 *)(local_8c * 4 + 0x46) = uVar11;
  if (local_6 != 0) {
    iVar3 = M007_GETSTATE(0x1010,0xb,uVar12);
    if (iVar3 == 0) {
      DAT_1008_005c = DAT_1008_0044;
      DAT_1008_005e = DAT_1008_0046;
      DAT_1008_003c = DAT_1008_0024;
      DAT_1008_003e = DAT_1008_0026;
    }
    iVar3 = M007_GETSTATE(0x1010,0xb);
    if (iVar3 == 6) {
      DAT_1008_0044 = DAT_1008_005c;
      DAT_1008_0046 = DAT_1008_005e;
      DAT_1008_0024 = DAT_1008_003c;
      DAT_1008_0026 = DAT_1008_003e;
    }
    M007_GETSTATE(0x1010,0xb);
    _WSPRINTF(0x1010,local_86);
    uVar10 = 0x1000;
    uVar9 = 0x30ce;
    puVar8 = local_86;
    uVar12 = 0x1010;
    uVar11 = unaff_SS;
    uVar5 = GETLEOINIFILEPATH(0x1010,puVar8);
    WRITEPRIVATEPROFILESTRING(0x1010,uVar5,uVar12,puVar8,uVar11,uVar9,uVar10);
    local_4 = 0;
    do {
      _WSPRINTF(0x1010,local_46);
      iVar3 = local_4 * 4;
      dVar1 = (double)*(float *)(iVar3 + 0x24);
      FUN_1000_1efc(SUB82(dVar1,0),(int)((qword)dVar1 >> 0x10),(int)((qword)dVar1 >> 0x20),
                    (int)((qword)dVar1 >> 0x30),0x14,local_86);
      puVar8 = local_46;
      puVar6 = local_86;
      uVar9 = 0x1000;
      uVar11 = unaff_SS;
      uVar12 = unaff_SS;
      uVar5 = GETLEOINIFILEPATH(0x1000,puVar6);
      WRITEPRIVATEPROFILESTRING(0x1010,uVar5,uVar9,puVar6,uVar11,puVar8,uVar12);
      _WSPRINTF(0x1010,local_46);
      dVar1 = (double)*(float *)(iVar3 + 0x44);
      FUN_1000_1efc(SUB82(dVar1,0),(int)((qword)dVar1 >> 0x10),(int)((qword)dVar1 >> 0x20),
                    (int)((qword)dVar1 >> 0x30),0x14,local_86);
      puVar8 = local_46;
      puVar6 = local_86;
      uVar9 = 0x1000;
      uVar11 = unaff_SS;
      uVar12 = unaff_SS;
      uVar5 = GETLEOINIFILEPATH(0x1000,puVar6);
      WRITEPRIVATEPROFILESTRING(0x1010,uVar5,uVar9,puVar6,uVar11,puVar8,uVar12);
      local_4 = local_4 + 1;
    } while (local_4 < 8);
  }
  local_4 = 0;
  do {
    iVar3 = local_4 * 4;
    uVar11 = *(undefined2 *)(iVar3 + 0x46);
    *(undefined2 *)((int)param_1 + iVar3 + 0x40) = *(undefined2 *)(iVar3 + 0x44);
    *(undefined2 *)((int)param_1 + iVar3 + 0x42) = uVar11;
    local_4 = local_4 + 1;
  } while (local_4 < 5);
  local_4 = 0;
  do {
    iVar3 = local_4 * 4;
    uVar11 = *(undefined2 *)(iVar3 + 0x26);
    *(undefined2 *)((int)param_1 + iVar3 + 0xf) = *(undefined2 *)(iVar3 + 0x24);
    *(undefined2 *)((int)param_1 + iVar3 + 0x11) = uVar11;
    local_4 = local_4 + 1;
  } while (local_4 < 5);
  uVar2 = M007_GETSTATE(0x1010,0xc);
  *(undefined1 *)((int)param_1 + 5) = uVar2;
  uVar2 = M007_GETSTATE(0x1010,0xb);
  *(undefined1 *)((int)param_1 + 4) = uVar2;
  uVar2 = M007_GETSTATE(0x1010,0xd);
  *(undefined1 *)((int)param_1 + 6) = uVar2;
  uVar10 = 0xf2;
  puVar4 = (undefined2 *)M007_GETVALUE(0x1010,local_8a);
  uVar11 = puVar4[1];
  *(undefined2 *)((int)param_1 + 7) = *puVar4;
  *(undefined2 *)((int)param_1 + 9) = uVar11;
  uVar9 = 0xf3;
  puVar4 = (undefined2 *)M007_GETVALUE(0x1010,local_90);
  uVar11 = puVar4[1];
  *(undefined2 *)((int)param_1 + 0xb) = *puVar4;
  *(undefined2 *)((int)param_1 + 0xd) = uVar11;
  uVar12 = 0x111;
  M007_GETVALUE(0x1010,local_94);
  uVar11 = extraout_DX;
  uVar12 = FUN_1000_02c8(uVar12,uVar9,uVar10);
  *(undefined2 *)((int)param_1 + 0x27) = uVar12;
  *(undefined2 *)((int)param_1 + 0x29) = uVar11;
  uVar12 = 0x127;
  puVar4 = (undefined2 *)M007_GETVALUE(0x1000,local_98);
  uVar11 = puVar4[1];
  *(undefined2 *)((int)param_1 + 0x23) = *puVar4;
  *(undefined2 *)((int)param_1 + 0x25) = uVar11;
  uVar2 = M007_GETSTATE(0x1010,0xe0,uVar12);
  *(undefined1 *)((int)param_1 + 0x3f) = uVar2;
  puVar4 = (undefined2 *)M007_GETVALUE(0x1010,local_9c);
  uVar11 = puVar4[1];
  *(undefined2 *)((int)param_1 + 0x2f) = *puVar4;
  *(undefined2 *)((int)param_1 + 0x31) = uVar11;
  uVar7 = 0x152;
  puVar4 = (undefined2 *)M007_GETVALUE(0x1010,local_a0);
  uVar11 = puVar4[1];
  *(undefined2 *)((int)param_1 + 0x56) = *puVar4;
  *(undefined2 *)((int)param_1 + 0x58) = uVar11;
  uVar10 = 0x15d;
  puVar4 = (undefined2 *)M007_GETVALUE(0x1010,local_a4);
  uVar11 = puVar4[1];
  *(undefined2 *)((int)param_1 + 0x5a) = *puVar4;
  *(undefined2 *)((int)param_1 + 0x5c) = uVar11;
  uVar9 = 0x135;
  puVar4 = (undefined2 *)M007_GETVALUE(0x1010,local_a8);
  uVar11 = puVar4[1];
  *(undefined2 *)((int)param_1 + 0x37) = *puVar4;
  *(undefined2 *)((int)param_1 + 0x39) = uVar11;
  uVar12 = 0x136;
  puVar4 = (undefined2 *)M007_GETVALUE(0x1010,local_ac);
  uVar11 = puVar4[1];
  *(undefined2 *)((int)param_1 + 0x3b) = *puVar4;
  *(undefined2 *)((int)param_1 + 0x3d) = uVar11;
  uVar2 = M007_GETSTATE(0x1010,0xe9,uVar12,uVar9,uVar10,uVar7);
  *(undefined1 *)((int)param_1 + 0x54) = uVar2;
  uVar2 = M007_GETSTATE(0x1010,0x10e);
  *(undefined1 *)((int)param_1 + 0x55) = uVar2;
  puVar4 = (undefined2 *)M007_GETVALUE(0x1010,local_b0);
  uVar11 = puVar4[1];
  *(undefined2 *)((int)param_1 + 0x5e) = *puVar4;
  *(undefined2 *)((int)param_1 + 0x60) = uVar11;
  puVar4 = (undefined2 *)M007_GETVALUE(0x1010,local_b4);
  uVar11 = puVar4[1];
  *(undefined2 *)((int)param_1 + 0x62) = *puVar4;
  *(undefined2 *)((int)param_1 + 100) = uVar11;
  puVar4 = (undefined2 *)M007_GETVALUE(0x1010,local_b8);
  uVar11 = puVar4[1];
  *(undefined2 *)((int)param_1 + 0x66) = *puVar4;
  *(undefined2 *)((int)param_1 + 0x68) = uVar11;
  puVar4 = (undefined2 *)M007_GETVALUE(0x1010,local_bc);
  uVar11 = puVar4[1];
  *(undefined2 *)((int)param_1 + 0x6a) = *puVar4;
  *(undefined2 *)((int)param_1 + 0x6c) = uVar11;
  return;
}


// ---- SET_FE_FILAMENT_LIMITS @ 1000:3076

undefined2 __cdecl16far SET_FE_FILAMENT_LIMITS(void)

{
  return 0x1008;
}


// ---- SWITCHLEAVE_BEAM_ON @ 1000:30e6

void __stdcall16far SWITCHLEAVE_BEAM_ON(undefined2 param_1)

{
  undefined2 unaff_CS;
  
  M007_PUTSTATE(unaff_CS,param_1);
  return;
}


// ---- SWITCHADJ_ANODE @ 1000:3100

void __stdcall16far SWITCHADJ_ANODE(undefined2 param_1)

{
  undefined2 unaff_CS;
  
  M007_PUTSTATE(unaff_CS,param_1);
  return;
}


// ---- FUN_1000_311a @ 1000:311a

void __cdecl16far FUN_1000_311a(float param_1)

{
  float *pfVar1;
  int iVar2;
  undefined2 unaff_CS;
  undefined2 uVar3;
  undefined2 unaff_SS;
  undefined2 uVar4;
  undefined2 uVar5;
  float local_a;
  float local_6;
  
  uVar5 = 0x1008;
  if (DAT_1008_006c == 0) {
    uVar4 = 0x1c;
    uVar3 = 0x1010;
    pfVar1 = (float *)M007_GETVALUE(unaff_CS,&local_6);
    local_a = param_1;
    if ((*pfVar1 < param_1) && (DAT_1008_03f0 < param_1)) {
      uVar3 = 0x1010;
      iVar2 = M007_GETSTATE(0x1010,0xc,uVar4,uVar5);
      if (iVar2 == 1) {
        DAT_1008_006c = 1;
        LEO_MSGBOX(0x1010,0,0x741);
        uVar3 = 0x1000;
        SWITCHANODE(0);
        DAT_1008_006c = 0;
      }
    }
    uVar5 = 0x1c;
    pfVar1 = (float *)M007_GETVALUE(uVar3,&local_a);
    local_6 = param_1;
    if (((param_1 == *pfVar1) && (param_1 <= DAT_1008_03f0)) &&
       (iVar2 = M007_GETSTATE(0x1010,0xc,uVar5), iVar2 == 0)) {
      DAT_1008_006c = 1;
      LEO_MSGBOX(0x1010,0,0x742);
      SWITCHANODE();
      SETMANUALKV(local_6);
      DAT_1008_006c = 0;
    }
  }
  return;
}


// ---- SETMAX_EXTRACTOR_V @ 1000:320e

void __stdcall16far SETMAX_EXTRACTOR_V(undefined2 param_1,undefined2 param_2)

{
  undefined2 unaff_CS;
  
  M007_PUTVALUE(unaff_CS,param_1,param_2);
  return;
}


// ---- SETEHT_OFFSET @ 1000:322a

void __stdcall16far SETEHT_OFFSET(float param_1)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  undefined2 unaff_SS;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  
  uVar6 = 0x1008;
  uVar5 = 0x127;
  M007_PUTVALUE();
  uVar4 = 0x83;
  iVar2 = M007_GETSTATE();
  if (iVar2 == 1) {
    Ordinal_917(0x1010,(double)param_1,uVar4,uVar5,uVar6);
  }
  iVar2 = M007_GETSTATE();
  if (iVar2 == 1) {
    pfVar3 = (float *)M007_GETVALUE(0x1010);
    fVar1 = *pfVar3;
    SETMANUALKV(fVar1 + DAT_1008_03f4);
    SETMANUALKV(fVar1);
  }
  return;
}


// ---- CHECKKVLICENCES @ 1000:32bc

void __cdecl16far CHECKKVLICENCES(void)

{
  float *pfVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 unaff_SS;
  undefined4 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  float local_1a;
  undefined4 local_16;
  undefined1 local_12 [4];
  float local_e;
  undefined4 local_a;
  float local_6;
  
  uVar6 = 0x1008;
  uVar5 = 0xc;
  uVar4 = M007_GETSTATE();
  uVar3 = (undefined2)((ulong)uVar4 >> 0x10);
  pfVar1 = (float *)FUN_1000_574a((int)uVar4,uVar5,uVar6);
  local_6 = *pfVar1;
  local_16._2_2_ = (undefined2)((ulong)local_6 >> 0x10);
  uVar3 = local_16._2_2_;
  local_16._0_2_ = SUB42(local_6,0);
  uVar5 = (undefined2)local_16;
  local_16 = local_6;
  FUN_1000_50a0(uVar5,uVar3);
  FUN_1000_57a2(SUB42(local_16,0),(int)((ulong)local_16 >> 0x10));
  uVar5 = 0x1c;
  local_1a = local_16;
  uVar3 = 0x1010;
  pfVar1 = (float *)M007_GETVALUE(0x1000,local_12);
  if (local_1a < *pfVar1) {
    uVar3 = 0x1000;
    SETMANUALKV(SUB42(local_1a,0),(int)((ulong)local_1a >> 0x10));
  }
  iVar2 = ISLICENCED(uVar3,0x24,uVar5);
  uVar3 = DAT_1008_03fc;
  uVar5 = DAT_1008_03fe;
  if (iVar2 == 1) {
    uVar3 = DAT_1008_03f8;
    uVar5 = DAT_1008_03fa;
  }
  local_a = (float)CONCAT22(uVar5,uVar3);
  pfVar1 = (float *)M007_GETVALUE(0x1010,&local_1a);
  local_16 = *pfVar1;
  if (local_a < local_16) {
    local_a = local_16;
  }
  local_e = local_16;
  M007_PUTLOW(0x1010,(undefined2)local_a,local_a._2_2_);
  return;
}


// ---- SWITCHSE_SUPPLIES @ 1000:33aa

void __stdcall16far SWITCHSE_SUPPLIES(undefined2 param_1)

{
  undefined2 unaff_CS;
  
  M007_PUTSTATE(unaff_CS,param_1);
  return;
}


// ---- SETEHT_ACTUAL_1 @ 1000:33c4

void __stdcall16far SETEHT_ACTUAL_1(float param_1)

{
  double dVar1;
  float *pfVar2;
  int iVar3;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined1 local_a [4];
  undefined1 local_6 [4];
  
  uVar8 = 0x1008;
  uVar7 = 0xf2;
  pfVar2 = (float *)M007_GETHIGH(unaff_CS,local_6);
  if (param_1 <= *pfVar2) {
    uVar6 = 0xf2;
    pfVar2 = (float *)M007_GETLOW(0x1010,local_a);
    if (*pfVar2 <= param_1) {
      uVar5 = 0xf2;
      M007_PUTVALUE(0x1010,SUB42(param_1,0),(int)((ulong)param_1 >> 0x10));
      iVar3 = M007_GETSTATE(0x1010,0x83,uVar5,uVar6,uVar7,uVar8);
      if (iVar3 == 1) {
        dVar1 = (double)param_1;
        uVar8 = SUB82(dVar1,0);
        uVar6 = (undefined2)((qword)dVar1 >> 0x10);
        uVar5 = (undefined2)((qword)dVar1 >> 0x20);
        uVar4 = (undefined2)((qword)dVar1 >> 0x30);
        uVar7 = 0xf3;
        pfVar2 = (float *)M007_GETVALUE();
        Ordinal_816(0x1010,(double)*pfVar2,uVar7,uVar8,uVar6,uVar5,uVar4);
      }
    }
  }
  return;
}


// ---- SETEHT_ACTUAL_3 @ 1000:346e

void __stdcall16far SETEHT_ACTUAL_3(float param_1)

{
  float *pfVar1;
  int iVar2;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined2 uVar4;
  undefined4 uVar3;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined1 local_6 [4];
  
  uVar8 = 0x1008;
  uVar7 = 0xf3;
  pfVar1 = (float *)M007_GETHIGH(unaff_CS,local_6);
  if (param_1 <= *pfVar1) {
    uVar6 = 0xf3;
    pfVar1 = (float *)M007_GETLOW();
    if (*pfVar1 <= param_1) {
      uVar5 = 0xf3;
      M007_PUTVALUE();
      uVar4 = 0x83;
      iVar2 = M007_GETSTATE(0x1010,0x83,uVar5,uVar6,uVar7,uVar8);
      if (iVar2 == 1) {
        uVar3 = CONCAT22(uVar4,0xf2);
        pfVar1 = (float *)M007_GETVALUE();
        Ordinal_816(0x1010,(double)param_1,(double)*pfVar1,uVar3);
      }
    }
  }
  return;
}


// ---- SETBEAM_CURRENT @ 1000:3516

void __stdcall16far SETBEAM_CURRENT(float param_1)

{
  double dVar1;
  float *pfVar2;
  int iVar3;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined1 local_a [4];
  undefined1 local_6 [4];
  
  uVar7 = 0x1008;
  uVar6 = 0x81;
  pfVar2 = (float *)M007_GETHIGH(unaff_CS,local_6);
  if (param_1 <= *pfVar2) {
    uVar5 = 0x81;
    pfVar2 = (float *)M007_GETLOW(0x1010,local_a);
    if (*pfVar2 <= param_1) {
      uVar4 = 0x81;
      M007_PUTVALUE(0x1010,SUB42(param_1,0),(int)((ulong)param_1 >> 0x10));
      DAT_1008_00e6 = param_1;
      iVar3 = M007_GETSTATE(0x1010,0x83,uVar4,uVar5,uVar6,uVar7);
      if (iVar3 == 1) {
        dVar1 = (double)param_1;
        Ordinal_909(0x1010,SUB82(dVar1,0),(int)((qword)dVar1 >> 0x10),(int)((qword)dVar1 >> 0x20),
                    (int)((qword)dVar1 >> 0x30));
      }
    }
  }
  return;
}


// ---- SETPM1 @ 1000:35ae

void __stdcall16far SETPM1(float param_1)

{
  float *pfVar1;
  int iVar2;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined1 local_6 [4];
  
  uVar6 = 0x1008;
  uVar5 = 0xcd;
  pfVar1 = (float *)M007_GETHIGH(unaff_CS,local_6);
  if (param_1 <= *pfVar1) {
    uVar4 = 0xcd;
    pfVar1 = (float *)M007_GETLOW();
    if (*pfVar1 <= param_1) {
      uVar3 = 0xcd;
      M007_PUTVALUE();
      iVar2 = M007_GETSTATE(0x1010,0x83,uVar3,uVar4,uVar5,uVar6);
      if (iVar2 == 1) {
        Ordinal_913(0x1010,(double)param_1,1);
      }
    }
  }
  return;
}


// ---- SETPM2 @ 1000:363e

void __stdcall16far SETPM2(float param_1)

{
  float *pfVar1;
  int iVar2;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined1 local_6 [4];
  
  uVar6 = 0x1008;
  uVar5 = 0xce;
  pfVar1 = (float *)M007_GETHIGH(unaff_CS,local_6);
  if (param_1 <= *pfVar1) {
    uVar4 = 0xce;
    pfVar1 = (float *)M007_GETLOW();
    if (*pfVar1 <= param_1) {
      uVar3 = 0xce;
      M007_PUTVALUE();
      iVar2 = M007_GETSTATE(0x1010,0x83,uVar3,uVar4,uVar5,uVar6);
      if (iVar2 == 1) {
        Ordinal_913(0x1010,(double)param_1,2);
      }
    }
  }
  return;
}


// ---- SETPM3 @ 1000:36ce

void __stdcall16far SETPM3(float param_1)

{
  float *pfVar1;
  int iVar2;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined1 local_6 [4];
  
  uVar6 = 0x1008;
  uVar5 = 0xcf;
  pfVar1 = (float *)M007_GETHIGH(unaff_CS,local_6);
  if (param_1 <= *pfVar1) {
    uVar4 = 0xcf;
    pfVar1 = (float *)M007_GETLOW();
    if (*pfVar1 <= param_1) {
      uVar3 = 0xcf;
      M007_PUTVALUE();
      iVar2 = M007_GETSTATE(0x1010,0x83,uVar3,uVar4,uVar5,uVar6);
      if (iVar2 == 1) {
        Ordinal_913(0x1010,(double)param_1,3);
      }
    }
  }
  return;
}


// ---- SETTARGETKV @ 1000:375e

void __stdcall16far SETTARGETKV(float param_1)

{
  float *pfVar1;
  undefined2 *puVar2;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  float local_e;
  undefined1 local_a [4];
  undefined1 local_6 [4];
  
  pfVar1 = (float *)M007_GETHIGH(unaff_CS,local_6);
  local_e = param_1;
  if (param_1 <= *pfVar1) {
    pfVar1 = (float *)M007_GETLOW();
    if (*pfVar1 <= local_e) {
      M007_PUTVALUE(0x1010,local_e);
    }
  }
  puVar2 = (undefined2 *)M007_GETVALUE(0x1010,&local_e);
  M007_PUTVALUE(0x1010,*puVar2,puVar2[1]);
  puVar2 = (undefined2 *)M007_GETVALUE(0x1010,local_a);
  DAT_1008_0064 = *puVar2;
  DAT_1008_0066 = puVar2[1];
  return;
}


// ---- SETTARGETCURRENT @ 1000:3800

void __stdcall16far SETTARGETCURRENT(float param_1)

{
  undefined2 uVar1;
  float *pfVar2;
  undefined2 *puVar3;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined4 uVar4;
  float local_e;
  undefined1 local_a [4];
  int local_6 [2];
  
  pfVar2 = (float *)M007_GETHIGH(unaff_CS,local_6);
  local_e = param_1;
  if (param_1 <= *pfVar2) {
    pfVar2 = (float *)M007_GETLOW();
    if (*pfVar2 <= local_e) {
      M007_PUTVALUE(0x1010,local_e);
    }
  }
  uVar4 = 0x1b0017;
  puVar3 = (undefined2 *)M007_GETVALUE(0x1010,&local_e);
  M007_PUTVALUE(0x1010,*puVar3,puVar3[1]);
  local_6[0] = M007_GETSTATE(0x1010,0xb,uVar4);
  puVar3 = (undefined2 *)M007_GETVALUE(0x1010,local_a);
  uVar1 = puVar3[1];
  *(undefined2 *)(local_6[0] * 4 + 0x24) = *puVar3;
  *(undefined2 *)(local_6[0] * 4 + 0x26) = uVar1;
  return;
}


// ---- SETUSERMAXCURRENT @ 1000:38b2

void __stdcall16far SETUSERMAXCURRENT(void)

{
  float fVar1;
  undefined2 *puVar2;
  float *pfVar3;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  longdouble lVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined1 local_9a [4];
  undefined1 local_96 [64];
  undefined1 local_56 [64];
  undefined1 local_16 [4];
  float local_12;
  float local_e;
  float local_a;
  undefined4 local_6;
  
  uVar9 = 0x1008;
  uVar8 = 0x1d;
  puVar2 = (undefined2 *)M007_GETVALUE(unaff_CS,local_16);
  local_6 = (float)CONCAT22(puVar2[1],*puVar2);
  uVar5 = M007_GETSTATE(0x1010,0xb,uVar8,uVar9);
  uVar8 = (undefined2)((ulong)uVar5 >> 0x10);
  pfVar3 = (float *)FUN_1000_5698((int)uVar5);
  fVar1 = *pfVar3;
  local_a = fVar1;
  FUN_1000_0330();
  lVar4 = (longdouble)local_6;
  FUN_1000_0306();
  local_12 = (float)lVar4;
  uVar8 = 0x19;
  M007_PUTVALUE(0x1000,(float)lVar4);
  lVar4 = (longdouble)fVar1;
  FUN_1000_0330(uVar8);
  fVar1 = (float)lVar4;
  local_e = (float)lVar4;
  uVar9 = 0x1b;
  M007_PUTHIGH(0x1000,fVar1);
  uVar8 = 0x17;
  M007_PUTHIGH(0x1010,fVar1);
  FUN_1000_5610(fVar1,uVar8,uVar9);
  uVar8 = M007_GETSTATE(0x1000,0xb);
  _WSPRINTF(0x1010,local_56);
  uVar9 = 0x19;
  M007_GETVALUE(0x1010,local_9a);
  FUN_1000_02c8(uVar9,uVar8);
  _WSPRINTF(0x1000,local_96);
  puVar7 = local_56;
  puVar6 = local_96;
  uVar9 = 0x1010;
  uVar8 = unaff_SS;
  uVar5 = GETLEOINIFILEPATH(0x1010,puVar6);
  WRITEPRIVATEPROFILESTRING(0x1010,uVar5,uVar9,puVar6,unaff_SS,puVar7,uVar8);
  return;
}


// ---- SWITCHANODE @ 1000:3a04

void __stdcall16far SWITCHANODE(undefined2 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 local_a;
  
  uVar7 = 0x1008;
  uVar6 = 0x8c;
  iVar1 = M007_GETSTATE();
  if (iVar1 != 6) {
    uVar5 = 0x8c;
    uVar4 = M007_GETSTATE();
    uVar3 = (undefined2)((ulong)uVar4 >> 0x10);
    if ((int)uVar4 != 8) {
      puVar2 = (undefined4 *)FUN_1000_574a();
      uVar4 = *puVar2;
      local_a = (undefined2)uVar4;
      FUN_1000_50a0(local_a,(int)((ulong)uVar4 >> 0x10),uVar5,uVar6,uVar7);
      FUN_1000_57a2(uVar4);
      M007_PUTSTATE(0x1000,param_1);
      iVar1 = M007_GETSTATE(0x1010,0x83);
      if (iVar1 == 1) {
        Ordinal_907(0x1010,param_1);
      }
    }
  }
  return;
}


// ---- SWITCHNEWFILAMENT @ 1000:3a86

void __stdcall16far SWITCHNEWFILAMENT(int param_1)

{
  undefined2 unaff_CS;
  
  M007_PUTSTATE(unaff_CS,param_1);
  if (param_1 == 1) {
    M007_PUTVALUE(0x1010,DAT_1008_0404,DAT_1008_0406);
  }
  return;
}


// ---- SWITCHFILAMENT_TYPE @ 1000:3ab4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __stdcall16far SWITCHFILAMENT_TYPE(int param_1)

{
  undefined2 *puVar1;
  int iVar2;
  float *pfVar3;
  undefined2 in_DX;
  undefined2 unaff_SS;
  undefined4 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  undefined2 uVar12;
  undefined1 *puVar13;
  undefined2 uVar14;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 local_18 [4];
  float local_14;
  int local_10 [2];
  undefined4 local_c;
  undefined4 local_8;
  int local_4;
  
  local_4 = 1;
  puVar1 = (undefined2 *)FUN_1000_582a(param_1,0x1008);
  local_8 = CONCAT22(puVar1[1],*puVar1);
  uVar14 = 0x81;
  puVar1 = (undefined2 *)M007_GETVALUE(0x1000,local_10);
  local_c = (float)CONCAT22(puVar1[1],*puVar1);
  iVar2 = M007_GETSTATE(0x1010,0xb,uVar14);
  if (iVar2 != 4) {
    uVar14 = M007_GETSTATE(0x1010,0xb);
    _WSPRINTF(0x1010,0x818,0x1008,0x5080,0x1000,uVar14);
    uVar14 = 0x19;
    M007_GETVALUE(0x1010,&local_14);
    uVar14 = FUN_1000_02c8(uVar14);
    _WSPRINTF(0x1000,0x858,0x1008,0x30aa,0x1000,uVar14);
    GETLEOINIFILEPATH(0x1010,0x858,0x1008,0x818,0x1008,0x30ba,0x1000);
    local_4 = WRITEPRIVATEPROFILESTRING();
  }
  local_10[0] = M007_GETSTATE(0x1010,0xb);
  puVar1 = (undefined2 *)M007_GETVALUE(0x1010,&local_14);
  uVar14 = puVar1[1];
  *(undefined2 *)(local_10[0] * 4 + 0x44) = *puVar1;
  *(undefined2 *)(local_10[0] * 4 + 0x46) = uVar14;
  M007_PUTVALUE();
  local_1c = local_8;
  uVar4 = local_1c;
  local_1c._2_2_ = (undefined2)((ulong)local_8 >> 0x10);
  uVar14 = local_1c._2_2_;
  local_1c = uVar4;
  M007_PUTHIGH(0x1010,(int)local_8,uVar14);
  uVar14 = 0x17;
  M007_PUTHIGH();
  FUN_1000_58fe();
  puVar13 = (undefined1 *)CONCAT22(0x81,local_18);
  pfVar3 = (float *)M007_GETVALUE();
  if (local_c < *pfVar3) {
    puVar13 = (undefined1 *)((long)&DAT_1008_0080 + 1U & 0xffff);
    M007_PUTVALUE(0x1010,local_c);
  }
  FUN_1000_5610((undefined2)local_8,(int)((ulong)local_8 >> 0x10),puVar13,uVar14);
  M007_PUTSTATE(0x1000,param_1);
  uVar14 = 0x1010;
  iVar2 = M007_GETSTATE(0x1010,0xb);
  if ((iVar2 != 4) && (local_4 != 0)) {
    local_20 = _DAT_1008_0404;
    uVar14 = M007_GETSTATE(0x1010,0xb);
    _WSPRINTF(0x1010,0x818,0x1008,0x5080,0x1000,uVar14);
    uVar12 = 0x1008;
    uVar11 = 0x818;
    uVar10 = 0x1000;
    uVar9 = 0x508c;
    uVar8 = 0x1008;
    uVar7 = 0x858;
    uVar6 = 0x40;
    uVar5 = 0x1010;
    uVar4 = GETLEOINIFILEPATH(0x1010,0x40,0x858,0x1008,0x508c,0x1000,0x818,0x1008,0x30ba,0x1000);
    uVar14 = 0x1010;
    local_4 = GETPRIVATEPROFILESTRING
                        (0x1010,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11,uVar12);
    if (local_4 != 0) {
      uVar14 = 0x1000;
      iVar2 = thunk_FUN_1000_0518(0x858,0x1008);
      local_1c = CONCAT22(local_1c._2_2_,iVar2);
      local_20 = (float)iVar2 * DAT_1008_0408;
    }
    local_14 = local_20;
    if (_DAT_1008_0404 < local_20) {
      pfVar3 = (float *)M007_GETHIGH(uVar14,&local_1c);
      if (*pfVar3 < local_14) {
        puVar1 = (undefined2 *)M007_GETHIGH(0x1010,local_18);
        local_20 = (float)CONCAT22(puVar1[1],*puVar1);
      }
      uVar14 = 0x1010;
      M007_PUTVALUE(0x1010,(undefined2)local_20,local_20._2_2_);
    }
  }
  iVar2 = M007_GETSTATE(uVar14,0x83);
  if (iVar2 == 1) {
    Ordinal_908(0x1010,param_1);
  }
  M007_PUTVALUE(0x1010,*(undefined2 *)(param_1 * 4 + 0x24),*(undefined2 *)(param_1 * 4 + 0x26));
  return;
}


// ---- SWITCHSCINT @ 1000:3d48

void __stdcall16far SWITCHSCINT(int param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_915(0x1010,param_1,uVar2,uVar3);
  }
  if (param_1 == 3) {
    param_1 = 0;
  }
  if (param_1 == 2) {
    param_1 = 0;
  }
  M007_PUTSTATE(0x1010,param_1);
  return;
}


// ---- SETMANUALKV @ 1000:3d8a

void __stdcall16far SETMANUALKV(float param_1)

{
  undefined2 *puVar1;
  float *pfVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 unaff_SS;
  undefined2 uVar5;
  undefined1 *puVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  float local_20;
  undefined1 local_1c [4];
  undefined1 local_18 [4];
  undefined1 local_14 [4];
  undefined4 local_10;
  undefined2 local_c;
  undefined2 local_a;
  undefined2 local_8;
  undefined2 local_6;
  undefined2 local_4;
  
  local_4 = M007_GETSTATE();
  puVar1 = (undefined2 *)M007_GETVALUE(0x1010,local_14);
  local_8 = *puVar1;
  local_6 = puVar1[1];
  uVar8 = 0x1c;
  puVar1 = (undefined2 *)M007_GETVALUE(0x1010,local_18);
  local_c = *puVar1;
  local_a = puVar1[1];
  uVar7 = 0x1a6;
  puVar6 = local_1c;
  pfVar2 = (float *)M007_GETVALUE(0x1010,puVar6);
  if (*pfVar2 < param_1) {
    puVar6 = (undefined1 *)0x1a6;
    puVar1 = (undefined2 *)M007_GETVALUE(0x1010,&local_20);
    param_1 = (float)CONCAT22(puVar1[1],*puVar1);
  }
  uVar5 = 0x1a;
  local_10 = param_1;
  local_20 = param_1;
  M007_PUTVALUE();
  uVar4 = 0x1010;
  iVar3 = M007_GETSTATE(0x1010,0xe,uVar5,puVar6,uVar7,uVar8);
  if (iVar3 == 1) {
    uVar7 = 0xe0;
    iVar3 = M007_GETSTATE();
    if (iVar3 == 1) {
      FUN_1000_311a(local_20,uVar7);
    }
    uVar4 = 0x1000;
    switch(local_4) {
    case 0:
    case 5:
    case 6:
    case 7:
      FUN_1000_7282(local_c,local_a,(undefined2)local_10,local_10._2_2_);
      break;
    case 1:
      FUN_1000_7926(local_c,local_a,(undefined2)local_10,local_10._2_2_);
      break;
    case 2:
      FUN_1000_86bc(local_c,local_a,(undefined2)local_10,local_10._2_2_);
      break;
    case 3:
      FUN_1000_8046(local_c,local_a,(undefined2)local_10,local_10._2_2_);
      break;
    default:
      goto switchD_1000_3eb5_caseD_4;
    }
    uVar4 = 0x1000;
  }
switchD_1000_3eb5_caseD_4:
  puVar1 = (undefined2 *)M007_GETVALUE(uVar4,&local_20);
  DAT_1008_0064 = *puVar1;
  DAT_1008_0066 = puVar1[1];
  return;
}


// ---- SETMANUALCURRENT @ 1000:3eea

void __stdcall16far SETMANUALCURRENT(float param_1)

{
  undefined2 *puVar1;
  int iVar2;
  undefined2 unaff_SS;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined1 local_10 [4];
  float local_c;
  undefined2 local_8;
  undefined2 local_6;
  int local_4;
  
  uVar6 = 0x1008;
  uVar5 = 0xb;
  local_4 = M007_GETSTATE();
  uVar4 = 0x1d;
  puVar1 = (undefined2 *)M007_GETVALUE(0x1010,local_10);
  local_8 = *puVar1;
  local_6 = puVar1[1];
  uVar3 = 0x1b;
  local_c = param_1;
  M007_PUTVALUE();
  iVar2 = M007_GETSTATE(0x1010,0xe,uVar3,uVar4,uVar5,uVar6);
  if (iVar2 == 1) {
    switch(local_4) {
    case 0:
    case 5:
    case 6:
    case 7:
      uVar3 = 0x83;
      iVar2 = M007_GETSTATE();
      if (iVar2 == 1) {
        Ordinal_910(0x1010,(double)param_1,uVar3);
      }
      break;
    case 1:
      FUN_1000_7b0c();
      break;
    case 2:
      FUN_1000_88a2();
      break;
    case 3:
      FUN_1000_822c();
    }
  }
  puVar1 = (undefined2 *)M007_GETVALUE();
  uVar3 = puVar1[1];
  *(undefined2 *)(local_4 * 4 + 0x24) = *puVar1;
  *(undefined2 *)(local_4 * 4 + 0x26) = uVar3;
  return;
}


// ---- DOCOMMANDSHUTDOWN @ 1000:3fe0

void __cdecl16far DOCOMMANDSHUTDOWN(void)

{
  undefined2 *puVar1;
  int iVar2;
  undefined2 unaff_SS;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined1 local_1c [4];
  undefined1 local_18 [4];
  undefined2 local_14;
  undefined2 local_12;
  undefined2 local_10;
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_a;
  undefined2 local_8;
  undefined2 local_6;
  undefined2 local_4;
  
  FUN_1000_59b4(0x1008);
  local_4 = M007_GETSTATE(0x1000,0xb);
  uVar4 = 0x1d;
  puVar1 = (undefined2 *)M007_GETVALUE(0x1010,local_18);
  local_14 = *puVar1;
  local_12 = puVar1[1];
  uVar3 = 0x1c;
  puVar1 = (undefined2 *)M007_GETVALUE(0x1010,local_1c);
  local_10 = *puVar1;
  local_e = puVar1[1];
  FUN_1000_5c9a(uVar3,uVar4);
  iVar2 = M007_GETSTATE(0x1000,0x83);
  if (iVar2 == 1) {
    Ordinal_914(0x1010,0);
  }
  local_8 = DAT_1008_0404;
  local_6 = DAT_1008_0406;
  local_c = DAT_1008_0404;
  local_a = DAT_1008_0406;
  switch(local_4) {
  case 0:
  case 5:
  case 6:
  case 7:
    FUN_1000_6f48(local_14,local_12,local_10,local_e,DAT_1008_0404,DAT_1008_0406,DAT_1008_0404,
                  DAT_1008_0406);
    break;
  case 1:
    FUN_1000_7468(local_14,local_12,local_10,local_e,DAT_1008_0404,DAT_1008_0406,DAT_1008_0404,
                  DAT_1008_0406);
    break;
  case 2:
    FUN_1000_82a8(local_14,local_12,local_10,local_e,DAT_1008_0404,DAT_1008_0406,DAT_1008_0404,
                  DAT_1008_0406);
    break;
  case 3:
    FUN_1000_7c32(local_14,local_12,local_10,local_e,DAT_1008_0404,DAT_1008_0406,DAT_1008_0404,
                  DAT_1008_0406);
  }
  uVar3 = 0xe;
  M007_PUTSTATE(0x1000,3);
  EOSTANDBY(0x1010,1,uVar3);
  FUN_1000_66c6();
  return;
}


// ---- DOCOMMANDMANUAL @ 1000:4110

void __cdecl16far DOCOMMANDMANUAL(void)

{
  DOCOMMANDBEAM_ON(0x1008);
  return;
}


// ---- DOCOMMANDSTANDBY @ 1000:4122

void __cdecl16far DOCOMMANDSTANDBY(void)

{
  undefined2 *puVar1;
  int iVar2;
  undefined2 unaff_SS;
  longdouble lVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined4 local_1c;
  undefined1 local_18 [4];
  undefined4 local_14;
  undefined2 local_10;
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_a;
  undefined4 local_8;
  undefined2 local_4;
  
  FUN_1000_59b4(0x1008);
  local_4 = M007_GETSTATE(0x1000,0xb);
  uVar5 = 0x1d;
  puVar1 = (undefined2 *)M007_GETVALUE(0x1010,local_18);
  local_14 = CONCAT22(puVar1[1],*puVar1);
  uVar4 = 0x1c;
  puVar1 = (undefined2 *)M007_GETVALUE(0x1010,&local_1c);
  local_10 = *puVar1;
  local_e = puVar1[1];
  FUN_1000_5c9a(uVar4,uVar5);
  iVar2 = M007_GETSTATE(0x1000,0x83);
  if (iVar2 == 1) {
    Ordinal_914(0x1010,7);
  }
  local_c = DAT_1008_0404;
  local_a = DAT_1008_0406;
  switch(local_4) {
  case 0:
  case 5:
  case 6:
  case 7:
    local_8 = (float)CONCAT22(DAT_1008_0406,DAT_1008_0404);
    FUN_1000_6f48((undefined2)local_14,(int)((ulong)local_14 >> 0x10),local_10,local_e,DAT_1008_0404
                  ,DAT_1008_0406,DAT_1008_0404,DAT_1008_0406);
    break;
  case 1:
    local_1c = local_14;
    lVar3 = (longdouble)0;
    FUN_1000_0306(DAT_1008_0404,DAT_1008_0406);
    local_8 = (float)lVar3;
    FUN_1000_7468(local_1c,local_10,local_e,local_8);
    break;
  case 2:
    local_1c = local_14;
    lVar3 = (longdouble)0;
    FUN_1000_0306(DAT_1008_0404,DAT_1008_0406);
    local_8 = (float)lVar3;
    FUN_1000_82a8(local_1c,local_10,local_e,local_8);
    break;
  case 3:
    local_1c = local_14;
    lVar3 = (longdouble)0;
    FUN_1000_0306(DAT_1008_0404,DAT_1008_0406);
    local_8 = (float)lVar3;
    FUN_1000_7c32(local_1c,local_10,local_e,local_8);
  }
  uVar4 = 0xe;
  M007_PUTSTATE(0x1000,4);
  EOSTANDBY(0x1010,1,uVar4);
  return;
}


// ---- DOCOMMANDBEAM_OFF @ 1000:42c0

void __cdecl16far DOCOMMANDBEAM_OFF(void)

{
  undefined2 *puVar1;
  int iVar2;
  undefined2 unaff_SS;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined1 local_1c [4];
  undefined1 local_18 [4];
  undefined2 local_14;
  undefined2 local_12;
  undefined2 local_10;
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_a;
  undefined2 local_8;
  undefined2 local_6;
  undefined2 local_4;
  
  FUN_1000_59b4(0x1008);
  local_4 = M007_GETSTATE(0x1000,0xb);
  uVar4 = 0x1d;
  puVar1 = (undefined2 *)M007_GETVALUE(0x1010,local_18);
  local_14 = *puVar1;
  local_12 = puVar1[1];
  uVar3 = 0x1c;
  puVar1 = (undefined2 *)M007_GETVALUE(0x1010,local_1c);
  local_10 = *puVar1;
  local_e = puVar1[1];
  FUN_1000_5c9a(uVar3,uVar4);
  iVar2 = M007_GETSTATE(0x1000,0x83);
  if (iVar2 == 1) {
    Ordinal_914(0x1010,9);
  }
  local_8 = DAT_1008_0404;
  local_6 = DAT_1008_0406;
  local_c = DAT_1008_0404;
  local_a = DAT_1008_0406;
  switch(local_4) {
  case 0:
  case 5:
  case 6:
  case 7:
    FUN_1000_6f48(local_14,local_12,local_10,local_e,DAT_1008_0404,DAT_1008_0406,DAT_1008_0404,
                  DAT_1008_0406);
    break;
  case 1:
    FUN_1000_7468(local_14,local_12,local_10,local_e,DAT_1008_0404,DAT_1008_0406,DAT_1008_0404,
                  DAT_1008_0406);
    break;
  case 2:
    FUN_1000_82a8(local_14,local_12,local_10,local_e,DAT_1008_0404,DAT_1008_0406,DAT_1008_0404,
                  DAT_1008_0406);
    break;
  case 3:
    FUN_1000_7c32(local_14,local_12,local_10,local_e,DAT_1008_0404,DAT_1008_0406,DAT_1008_0404,
                  DAT_1008_0406);
  }
  uVar3 = 0xe;
  M007_PUTSTATE(0x1000,5);
  EOSTANDBY(0x1010,1,uVar3);
  return;
}


// ---- DOCOMMANDEHT_OFF @ 1000:43ec

void __cdecl16far DOCOMMANDEHT_OFF(void)

{
  undefined2 *puVar1;
  int iVar2;
  undefined2 unaff_SS;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined1 local_18 [4];
  undefined1 local_14 [4];
  undefined2 local_10;
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_a;
  undefined2 local_8;
  undefined2 local_6;
  undefined2 local_4;
  
  FUN_1000_59b4(0x1008);
  local_4 = M007_GETSTATE(0x1000,0xb);
  uVar4 = 0x1d;
  puVar1 = (undefined2 *)M007_GETVALUE(0x1010,local_14);
  local_10 = *puVar1;
  local_e = puVar1[1];
  uVar3 = 0x1c;
  puVar1 = (undefined2 *)M007_GETVALUE(0x1010,local_18);
  local_c = *puVar1;
  local_a = puVar1[1];
  FUN_1000_5c9a(uVar3,uVar4);
  local_8 = DAT_1008_0404;
  local_6 = DAT_1008_0406;
  iVar2 = M007_GETSTATE(0x1000,0x83);
  if (iVar2 == 1) {
    Ordinal_914(0x1010,7);
  }
  switch(local_4) {
  case 0:
  case 5:
  case 6:
  case 7:
    FUN_1000_7282(local_c,local_a,local_8,local_6);
    break;
  case 1:
    FUN_1000_7926(local_c,local_a,local_8,local_6);
    break;
  case 2:
    FUN_1000_86bc(local_c,local_a,local_8,local_6);
    break;
  case 3:
    FUN_1000_8046(local_c,local_a,local_8,local_6);
  }
  uVar3 = 0xe;
  M007_PUTSTATE(0x1000,8);
  EOSTANDBY(0x1010,1,uVar3);
  FUN_1000_66c6();
  return;
}


// ---- DOCOMMANDRUNUP @ 1000:44e6

void __cdecl16far DOCOMMANDRUNUP(void)

{
  int iVar1;
  undefined2 *puVar2;
  float *pfVar3;
  undefined2 uVar4;
  undefined2 unaff_SS;
  undefined1 *puVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined1 local_26 [4];
  undefined1 local_22 [4];
  undefined1 local_1e [4];
  undefined1 local_1a [4];
  undefined2 local_16;
  undefined2 local_14;
  undefined2 local_12;
  undefined2 local_10;
  undefined2 local_e;
  undefined2 local_c;
  undefined4 local_a;
  undefined2 local_6;
  int local_4;
  
  uVar8 = 0x1008;
  uVar7 = 0xe0;
  uVar4 = 0x1010;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    uVar6 = 0x1a;
    puVar2 = (undefined2 *)M007_GETVALUE(0x1010,local_1a);
    uVar4 = 0x1000;
    FUN_1000_311a(*puVar2,puVar2[1],uVar6,uVar7,uVar8);
  }
  iVar1 = M007_GETSTATE(uVar4,0x29);
  if (iVar1 != 1) {
    M007_PUTSTATE(0x1010,0xc);
    return;
  }
  iVar1 = M007_GETSTATE(0x1010,0x83);
  if (iVar1 == 1) {
    Ordinal_914(0x1010,2);
  }
  uVar4 = 0x1010;
  iVar1 = M007_GETSTATE(0x1010,0x26);
  if (iVar1 == 1) {
    uVar4 = 0x26;
    M007_PUTSTATE(0x1010,2);
  }
  FUN_1000_59b4(uVar4);
  local_4 = M007_GETSTATE(0x1000,0xd);
  local_6 = M007_GETSTATE(0x1010,0xb);
  uVar7 = 0x1d;
  puVar2 = (undefined2 *)M007_GETVALUE(0x1010,local_1a);
  local_16 = *puVar2;
  local_14 = puVar2[1];
  uVar4 = 0x1c;
  puVar2 = (undefined2 *)M007_GETVALUE(0x1010,local_1e);
  local_12 = *puVar2;
  local_10 = puVar2[1];
  iVar1 = M007_GETSTATE(0x1010,0xb,uVar4,uVar7);
  if (iVar1 == 4) goto LAB_1000_465a;
  iVar1 = M007_GETSTATE(0x1010,0xb);
  local_a = (float)CONCAT22(*(undefined2 *)(iVar1 * 4 + 0x26),*(undefined2 *)(iVar1 * 4 + 0x24));
  uVar4 = 0x19;
  puVar5 = local_22;
  pfVar3 = (float *)M007_GETVALUE(0x1010,puVar5);
  if (*pfVar3 < local_a) {
    puVar5 = (undefined1 *)((int)(undefined4 *)&DAT_1008_0016 + 3);
    puVar2 = (undefined2 *)M007_GETVALUE(0x1010,local_26);
    local_a = (float)CONCAT22(puVar2[1],*puVar2);
  }
  local_e = DAT_1008_0064;
  local_c = DAT_1008_0066;
  if (DAT_1008_00e6 == (float)DAT_1008_040c) {
LAB_1000_463a:
    uVar8 = 0x1010;
    uVar7 = local_6;
    FUN_1000_58fe(local_6,puVar5,uVar4);
  }
  else {
    uVar7 = 0x81;
    pfVar3 = (float *)M007_GETHIGH(0x1010,local_26);
    if (*pfVar3 < DAT_1008_00e6) goto LAB_1000_463a;
    uVar8 = 0x81;
    M007_PUTVALUE(0x1010,DAT_1008_00e6._0_2_,DAT_1008_00e6._2_2_);
  }
  FUN_1000_5df0(uVar8,uVar7);
LAB_1000_465a:
  switch(local_6) {
  case 0:
  case 5:
  case 6:
  case 7:
    FUN_1000_6f48(local_16,local_14,local_12,local_10,(undefined2)local_a,local_a._2_2_,local_e,
                  local_c);
    break;
  case 1:
    if (local_4 == 1) {
      FUN_1000_77a2();
    }
    else {
      FUN_1000_7468(local_16,local_14,local_12,local_10,(undefined2)local_a,local_a._2_2_,local_e,
                    local_c);
    }
    break;
  case 2:
    if (local_4 == 1) {
      FUN_1000_8538();
    }
    else {
      FUN_1000_82a8(local_16,local_14,local_12,local_10,(undefined2)local_a,local_a._2_2_,local_e,
                    local_c);
    }
    break;
  case 3:
    if (local_4 == 1) {
      FUN_1000_7ec2();
    }
    else {
      FUN_1000_7c32(local_16,local_14,local_12,local_10,(undefined2)local_a,local_a._2_2_,local_e,
                    local_c);
    }
  }
  uVar4 = 0xe;
  M007_PUTSTATE(0x1000,2);
  EOSTANDBY(0x1010,0,uVar4);
  FUN_1000_66c6();
  return;
}


// ---- DOCOMMANDBEAM_ON @ 1000:474a

void __cdecl16far DOCOMMANDBEAM_ON(void)

{
  int iVar1;
  undefined2 *puVar2;
  float *pfVar3;
  undefined2 uVar4;
  undefined2 unaff_SS;
  undefined1 *puVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined1 local_24 [4];
  undefined1 local_20 [4];
  undefined1 local_1c [4];
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
  int local_4;
  
  uVar7 = 0x1008;
  uVar6 = 0xe;
  local_8 = M007_GETSTATE();
  uVar4 = 0x1010;
  iVar1 = M007_GETSTATE(0x1010,0xe0,uVar6,uVar7);
  if (iVar1 == 1) {
    uVar6 = 0x1a;
    puVar2 = (undefined2 *)M007_GETVALUE(0x1010,local_1c);
    uVar4 = 0x1000;
    FUN_1000_311a(*puVar2,puVar2[1],uVar6);
  }
  iVar1 = M007_GETSTATE(uVar4,0xe);
  if (iVar1 == 0) {
    DOCOMMANDRUNUP();
    return;
  }
  iVar1 = M007_GETSTATE(0x1010,0x29);
  if (iVar1 != 1) {
    M007_PUTSTATE(0x1010,0xc);
    return;
  }
  iVar1 = M007_GETSTATE(0x1010,0x83);
  if (iVar1 == 1) {
    Ordinal_914(0x1010,6);
  }
  uVar4 = 0x1010;
  iVar1 = M007_GETSTATE(0x1010,0x26);
  if (iVar1 == 1) {
    uVar4 = 0x26;
    M007_PUTSTATE(0x1010,2);
  }
  FUN_1000_59b4(uVar4);
  local_4 = M007_GETSTATE(0x1000,0xd);
  local_6 = M007_GETSTATE(0x1010,0xb);
  uVar7 = 0x1d;
  puVar2 = (undefined2 *)M007_GETVALUE(0x1010,local_1c);
  local_18 = *puVar2;
  local_16 = puVar2[1];
  uVar6 = 0x1c;
  puVar2 = (undefined2 *)M007_GETVALUE(0x1010,local_20);
  local_14 = *puVar2;
  local_12 = puVar2[1];
  uVar4 = 0x1010;
  iVar1 = M007_GETSTATE(0x1010,0xb,uVar6,uVar7);
  if (iVar1 != 4) {
    uVar4 = 0x1b;
    puVar2 = (undefined2 *)M007_GETVALUE(0x1010,local_24);
    local_c = *puVar2;
    local_a = puVar2[1];
  }
  uVar7 = 0x1a;
  puVar2 = (undefined2 *)M007_GETVALUE(0x1010,local_24);
  local_10 = *puVar2;
  local_e = puVar2[1];
  uVar6 = 0x1010;
  puVar5 = (undefined1 *)0x485e;
  iVar1 = M007_GETSTATE(0x1010,0xb,uVar7,uVar4);
  if (iVar1 == 4) goto LAB_1000_48b6;
  if (DAT_1008_00e6 == (float)DAT_1008_040c) {
LAB_1000_4896:
    FUN_1000_58fe(local_6,puVar5,uVar6);
  }
  else {
    uVar6 = 0x81;
    puVar5 = local_20;
    pfVar3 = (float *)M007_GETHIGH(0x1010,puVar5);
    if (*pfVar3 < DAT_1008_00e6) goto LAB_1000_4896;
    puVar5 = (undefined1 *)((int)(undefined2 *)&DAT_1008_0080 + 1);
    M007_PUTVALUE(0x1010,DAT_1008_00e6._0_2_,DAT_1008_00e6._2_2_);
  }
  FUN_1000_5df0(puVar5);
LAB_1000_48b6:
  switch(local_6) {
  case 0:
  case 5:
  case 6:
  case 7:
    FUN_1000_6f48(local_18,local_16,local_14,local_12,local_c,local_a,local_10,local_e);
    break;
  case 1:
    if (local_4 == 1) {
      FUN_1000_77a2();
    }
    else {
      FUN_1000_7468(local_18,local_16,local_14,local_12,local_c,local_a,local_10,local_e);
    }
    break;
  case 2:
    if (local_4 == 1) {
      FUN_1000_8538();
    }
    else {
      FUN_1000_82a8(local_18,local_16,local_14,local_12,local_c,local_a,local_10,local_e);
    }
    break;
  case 3:
    if (local_4 == 1) {
      FUN_1000_7ec2();
    }
    else {
      FUN_1000_7c32(local_18,local_16,local_14,local_12,local_c,local_a,local_10,local_e);
    }
  }
  uVar4 = 0xe;
  M007_PUTSTATE(0x1000,6);
  EOSTANDBY(0x1010,0,uVar4);
  FUN_1000_66c6();
  return;
}


// ---- DOCOMMANDLOAD_TARGETS @ 1000:49a6

void __cdecl16far DOCOMMANDLOAD_TARGETS(void)

{
  undefined2 *puVar1;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined1 local_a [4];
  undefined1 local_6 [4];
  
  puVar1 = (undefined2 *)M007_GETVALUE(unaff_CS,local_6);
  M007_PUTVALUE(0x1010,*puVar1,puVar1[1]);
  puVar1 = (undefined2 *)M007_GETVALUE(0x1010,local_a);
  M007_PUTVALUE(0x1010,*puVar1,puVar1[1]);
  return;
}


// ---- DOCOMMANDSERVICE_RUNUP @ 1000:49ea

void __cdecl16far DOCOMMANDSERVICE_RUNUP(void)

{
  int iVar1;
  undefined2 *puVar2;
  undefined2 unaff_SS;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined1 local_14 [4];
  undefined1 local_10 [4];
  undefined1 local_c [4];
  undefined1 local_8 [4];
  undefined2 local_4;
  
  uVar6 = 0x1008;
  uVar5 = 0xe;
  local_4 = M007_GETSTATE();
  iVar1 = M007_GETSTATE(0x1010,0x29,uVar5,uVar6);
  if (iVar1 == 1) {
    iVar1 = M007_GETSTATE(0x1010,0x83);
    if (iVar1 == 1) {
      Ordinal_914(0x1010,2);
    }
    iVar1 = M007_GETSTATE(0x1010,0x26);
    if (iVar1 == 1) {
      M007_PUTSTATE(0x1010,2);
    }
    M007_PUTSTATE(0x1010,1);
    puVar2 = (undefined2 *)M007_GETVALUE(0x1010,local_8);
    M007_PUTVALUE(0x1010,*puVar2,puVar2[1]);
    puVar2 = (undefined2 *)M007_GETVALUE(0x1010,local_c);
    M007_PUTVALUE(0x1010,*puVar2,puVar2[1]);
    uVar4 = 0x14f;
    uVar3 = 0x12f;
    puVar2 = (undefined2 *)M007_GETVALUE(0x1010,local_10);
    M007_PUTVALUE(0x1010,*puVar2,puVar2[1]);
    uVar6 = 0x151;
    uVar5 = 0x131;
    puVar2 = (undefined2 *)M007_GETVALUE(0x1010,local_14);
    M007_PUTVALUE(0x1010,*puVar2,puVar2[1]);
    EOSTANDBY(0x1010,0,uVar5,uVar6,uVar3,uVar4);
  }
  return;
}


// ---- DOCOMMANDEMERGENCYRUNDOWN @ 1000:4ab4

undefined2 __cdecl16far DOCOMMANDEMERGENCYRUNDOWN(void)

{
  return 0x1008;
}


// ---- READ_GSP_EHT_STATUS @ 1000:4ac0

void __stdcall16far READ_GSP_EHT_STATUS(undefined2 *param_1)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  
  uVar1 = DAT_1008_009c;
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  puVar2 = (undefined2 *)param_1;
  puVar2[2] = DAT_1008_009a;
  puVar2[3] = uVar1;
  uVar1 = DAT_1008_0098;
  *param_1 = DAT_1008_0096;
  puVar2[1] = uVar1;
  uVar1 = DAT_1008_00b0;
  puVar2[0xc] = DAT_1008_00ae;
  puVar2[0xd] = uVar1;
  uVar1 = DAT_1008_00b4;
  puVar2[0xe] = DAT_1008_00b2;
  puVar2[0xf] = uVar1;
  uVar1 = DAT_1008_00b8;
  puVar2[0x10] = DAT_1008_00b6;
  puVar2[0x11] = uVar1;
  uVar1 = DAT_1008_00c0;
  puVar2[0x14] = DAT_1008_00be;
  puVar2[0x15] = uVar1;
  puVar2[0x16] = DAT_1008_00c2;
  puVar2[0x17] = DAT_1008_00c4;
  puVar2[0x1b] = DAT_1008_00cc;
  uVar1 = DAT_1008_00bc;
  puVar2[0x12] = DAT_1008_00ba;
  puVar2[0x13] = uVar1;
  puVar2[0x1d] = DAT_1008_00d0;
  puVar2[0x1c] = DAT_1008_00ce;
  return;
}


// ---- SEND_GSP_EHT_RAMP_REQUEST @ 1000:4b5c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __stdcall16far SEND_GSP_EHT_RAMP_REQUEST(float param_1,float param_2)

{
  int iVar1;
  undefined2 unaff_CS;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 local_16;
  undefined2 uStack_14;
  undefined2 local_12;
  undefined2 local_10;
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_a;
  undefined2 local_8;
  undefined2 local_6;
  undefined2 local_4;
  
  uVar3 = 0x1008;
  uVar2 = 0x1a;
  uStack_14 = (undefined2)((ulong)param_2 >> 0x10);
  local_16 = SUB42(param_2,0);
  M007_PUTVALUE(unaff_CS,local_16,uStack_14);
  _DAT_1008_0064 = param_2;
  iVar1 = M007_GETSTATE(0x1010,0x83,uVar2,uVar3);
  if (iVar1 == 1) {
    local_12 = DAT_1008_0404;
    local_10 = DAT_1008_0406;
    if (param_2 < _DAT_1008_009a) {
      if (_DAT_1008_0404 < param_1) {
        param_1 = -param_1;
      }
    }
    local_e = param_1._0_2_;
    local_c = param_1._2_2_;
    local_a = DAT_1008_0418;
    local_8 = DAT_1008_041a;
    local_6 = local_16;
    local_4 = uStack_14;
    Ordinal_903(0x1010,&local_12);
  }
  else {
    _DAT_1008_009a = param_2;
    DAT_1008_00c2 = 0;
  }
  return;
}


// ---- SEND_GSP_FIL_RAMP_REQUEST @ 1000:4c22

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __stdcall16far SEND_GSP_FIL_RAMP_REQUEST(float param_1,float param_2)

{
  int iVar1;
  undefined2 local_12;
  undefined2 local_10;
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_a;
  undefined2 local_8;
  undefined2 local_6;
  undefined2 local_4;
  
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    local_12 = DAT_1008_0404;
    local_10 = DAT_1008_0406;
    if (param_2 < _DAT_1008_0096) {
      if (_DAT_1008_0404 < param_1) {
        param_1 = -param_1;
      }
    }
    local_e = param_1._0_2_;
    local_c = param_1._2_2_;
    local_a = DAT_1008_0418;
    local_8 = DAT_1008_041a;
    local_6 = param_2._0_2_;
    local_4 = param_2._2_2_;
    Ordinal_904(0x1010,&local_12);
  }
  else {
    _DAT_1008_0096 = param_2;
    DAT_1008_00c4 = 0;
  }
  return;
}


// ---- SEND_GSP_EXT_RAMP_REQUEST @ 1000:4cc6

undefined2 __stdcall16far SEND_GSP_EXT_RAMP_REQUEST(void)

{
  return 0x1008;
}


// ---- SEND_GSP_SUPP_RAMP_REQUEST @ 1000:4cd4

undefined2 __stdcall16far SEND_GSP_SUPP_RAMP_REQUEST(void)

{
  return 0x1008;
}


// ---- SEND_GSP_LENS_RAMP_REQUEST @ 1000:4ce2

undefined2 __stdcall16far SEND_GSP_LENS_RAMP_REQUEST(void)

{
  return 0x1008;
}


// ---- SET_EHT_SET_SUPPLY_TOGGLE @ 1000:4cf0

void __stdcall16far SET_EHT_SET_SUPPLY_TOGGLE(undefined2 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_914(0x1010,param_1,uVar2,uVar3);
  }
  return;
}


// ---- GET_EHT_SET_DESC @ 1000:4d12

void __stdcall16far GET_EHT_SET_DESC(undefined2 *param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  uVar4 = 0x1008;
  uVar3 = 0x83;
  iVar2 = M007_GETSTATE();
  uVar1 = DAT_1008_041e;
  if (iVar2 == 1) {
    Ordinal_906(0x1010,(undefined2 *)param_1,param_1._2_2_,uVar3,uVar4);
  }
  else {
    *param_1 = DAT_1008_041c;
    ((undefined2 *)param_1)[1] = uVar1;
    uVar1 = DAT_1008_03fe;
    ((undefined2 *)param_1)[2] = DAT_1008_03fc;
    ((undefined2 *)param_1)[3] = uVar1;
    ((undefined2 *)param_1)[4] = 0;
    *(undefined1 *)((undefined2 *)param_1 + 5) = 0x41;
  }
  return;
}


// ---- READ_EHT_SET_READBACK @ 1000:4d64

undefined2 __stdcall16far READ_EHT_SET_READBACK(undefined2 param_1,undefined2 param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 != 1) {
    FUN_1000_028c(param_1,param_2,0x508e,0x1000,uVar2,uVar3);
  }
  return 1;
}


// ---- TOGGLE_READBACK @ 1000:4d94

void __stdcall16far TOGGLE_READBACK(undefined2 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    DAT_1008_0068 = param_1;
    Ordinal_929(0x1010,param_1,uVar2,uVar3);
  }
  return;
}


// ---- SEND_GSP_LENS_WOBBLE @ 1000:4dba

void __stdcall16far SEND_GSP_LENS_WOBBLE(undefined2 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_927(0x1010,param_1,uVar2,uVar3);
  }
  return;
}


// ---- SEND_GSP_BEAM_WOBBLE @ 1000:4ddc

void __stdcall16far SEND_GSP_BEAM_WOBBLE(undefined2 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_928(0x1010,param_1,uVar2,uVar3);
  }
  return;
}


// ---- SET_FE_EHT_CONFIG @ 1000:4dfe

undefined2 __stdcall16far SET_FE_EHT_CONFIG(void)

{
  return 0x1008;
}


// ---- SETNOMINALEXT @ 1000:4e0c

undefined2 __stdcall16far SETNOMINALEXT(void)

{
  return 0x1008;
}


// ---- SETNOMINALEXTI @ 1000:4e1a

undefined2 __stdcall16far SETNOMINALEXTI(void)

{
  return 0x1008;
}


// ---- SETNOMINALFIL @ 1000:4e28

undefined2 __stdcall16far SETNOMINALFIL(void)

{
  return 0x1008;
}


// ---- DOCOMMANDEHT_RESET @ 1000:4e36

undefined2 __cdecl16far DOCOMMANDEHT_RESET(void)

{
  return 0x1008;
}


// ---- SETMANUALEXT @ 1000:4e42

undefined2 __stdcall16far SETMANUALEXT(void)

{
  return 0x1008;
}


// ---- SETMANUALSUPP @ 1000:4e50

undefined2 __stdcall16far SETMANUALSUPP(void)

{
  return 0x1008;
}


// ---- SETMANUALLENS @ 1000:4e5e

undefined2 __stdcall16far SETMANUALLENS(void)

{
  return 0x1008;
}


// ---- SETMIN_EXT @ 1000:4e6c

undefined2 __stdcall16far SETMIN_EXT(void)

{
  return 0x1008;
}


// ---- SWITCHCOND_STATUS @ 1000:4e7a

undefined2 __stdcall16far SWITCHCOND_STATUS(void)

{
  return 0x1008;
}


// ---- SWITCHRUNUPSTATE @ 1000:4e88

undefined2 __stdcall16far SWITCHRUNUPSTATE(void)

{
  return 0x1008;
}


// ---- SETEHT_CAL_100 @ 1000:4e96

void __stdcall16far SETEHT_CAL_100(undefined2 param_1,undefined2 param_2)

{
  int iVar1;
  undefined2 *puVar2;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined1 local_6 [4];
  
  uVar4 = 0x1008;
  uVar3 = 0x159;
  M007_PUTVALUE(unaff_CS,param_1,param_2);
  iVar1 = M007_GETSTATE(0x1010,0xe,uVar3,uVar4);
  if (iVar1 == 1) {
    puVar2 = (undefined2 *)M007_GETVALUE(0x1010,local_6);
    SETMANUALKV(*puVar2,puVar2[1]);
  }
  return;
}


// ---- SETEHT_CAL_10KV @ 1000:4ed6

void __stdcall16far SETEHT_CAL_10KV(undefined2 param_1,undefined2 param_2)

{
  int iVar1;
  undefined2 *puVar2;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined1 local_6 [4];
  
  uVar4 = 0x1008;
  uVar3 = 0x15a;
  M007_PUTVALUE(unaff_CS,param_1,param_2);
  iVar1 = M007_GETSTATE(0x1010,0xe,uVar3,uVar4);
  if (iVar1 == 1) {
    puVar2 = (undefined2 *)M007_GETVALUE(0x1010,local_6);
    SETMANUALKV(*puVar2,puVar2[1]);
  }
  return;
}


// ---- SETEHT_CAL_24KV @ 1000:4f16

void __stdcall16far SETEHT_CAL_24KV(undefined2 param_1,undefined2 param_2)

{
  int iVar1;
  undefined2 *puVar2;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined1 local_6 [4];
  
  uVar4 = 0x1008;
  uVar3 = 0x15b;
  M007_PUTVALUE(unaff_CS,param_1,param_2);
  iVar1 = M007_GETSTATE(0x1010,0xe,uVar3,uVar4);
  if (iVar1 == 1) {
    puVar2 = (undefined2 *)M007_GETVALUE(0x1010,local_6);
    SETMANUALKV(*puVar2,puVar2[1]);
  }
  return;
}


// ---- SETEHT_CAL_30KV @ 1000:4f56

void __stdcall16far SETEHT_CAL_30KV(undefined2 param_1,undefined2 param_2)

{
  int iVar1;
  undefined2 *puVar2;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined1 local_6 [4];
  
  uVar4 = 0x1008;
  uVar3 = 0x15c;
  M007_PUTVALUE(unaff_CS,param_1,param_2);
  iVar1 = M007_GETSTATE(0x1010,0xe,uVar3,uVar4);
  if (iVar1 == 1) {
    puVar2 = (undefined2 *)M007_GETVALUE(0x1010,local_6);
    SETMANUALKV(*puVar2,puVar2[1]);
  }
  return;
}


// ---- SEND_EHT_DIRECT_COMMAND @ 1000:4f96

void __stdcall16far SEND_EHT_DIRECT_COMMAND(undefined2 param_1,undefined2 param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_930(0x1010,param_1,param_2,uVar2,uVar3);
  }
  return;
}


// ---- SETUSER_MAX_EHT @ 1000:4fba

void __stdcall16far SETUSER_MAX_EHT(float param_1)

{
  float *pfVar1;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 local_4a;
  undefined2 uStack_48;
  undefined1 local_46 [4];
  undefined1 local_42 [64];
  
  uVar7 = 0x1008;
  uVar6 = 0x1a6;
  uStack_48 = (undefined2)((ulong)param_1 >> 0x10);
  local_4a = SUB42(param_1,0);
  M007_PUTVALUE(unaff_CS,local_4a,uStack_48);
  uVar5 = 0x1a;
  M007_PUTHIGH(0x1010,local_4a,uStack_48);
  uVar4 = 0x1a;
  pfVar1 = (float *)M007_GETVALUE(0x1010,local_46);
  if (param_1 < *pfVar1) {
    SETMANUALKV(local_4a,uStack_48);
  }
  FUN_1000_02c8(uVar4,uVar5,uVar6,uVar7);
  _WSPRINTF(0x1000,local_42);
  uVar6 = 0x1000;
  uVar5 = 0x30ae;
  puVar3 = local_42;
  uVar4 = 0x1010;
  uVar2 = GETLEOINIFILEPATH(0x1010,puVar3);
  WRITEPRIVATEPROFILESTRING(0x1010,uVar2,uVar4,puVar3,unaff_SS,uVar5,uVar6);
  return;
}


// ---- SETFILAMENT_AGE @ 1000:5064

void __stdcall16far SETFILAMENT_AGE(undefined2 param_1,undefined2 param_2)

{
  undefined2 unaff_CS;
  
  M007_PUTVALUE(unaff_CS,param_1,param_2);
  return;
}


// ---- FUN_1000_50a0 @ 1000:50a0

void __cdecl16far FUN_1000_50a0(undefined4 param_1)

{
  undefined2 unaff_CS;
  undefined2 local_6;
  undefined2 uStack_4;
  
  uStack_4 = (undefined2)((ulong)param_1 >> 0x10);
  local_6 = (undefined2)param_1;
  M007_PUTHIGH(unaff_CS,local_6,uStack_4);
  M007_PUTHIGH(0x1010,local_6,uStack_4);
  M007_PUTHIGH(0x1010,local_6,uStack_4);
  return;
}


// ---- FUN_1000_50f0 @ 1000:50f0

void __cdecl16far FUN_1000_50f0(undefined2 *param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  uVar4 = 0x1008;
  uVar3 = 0x83;
  iVar2 = M007_GETSTATE();
  uVar1 = DAT_1008_0422;
  if (iVar2 == 1) {
    Ordinal_906(0x1010,(undefined2 *)param_1,param_1._2_2_,uVar3,uVar4);
  }
  else {
    *param_1 = DAT_1008_0420;
    ((undefined2 *)param_1)[1] = uVar1;
    uVar1 = DAT_1008_0426;
    ((undefined2 *)param_1)[2] = DAT_1008_0424;
    ((undefined2 *)param_1)[3] = uVar1;
    ((undefined2 *)param_1)[4] = 0;
    *(undefined1 *)((undefined2 *)param_1 + 5) = 0x41;
  }
  if (*(char *)((undefined2 *)param_1 + 5) != '\0') {
    M007_PUTVALUE(0x1010,*param_1,((undefined2 *)param_1)[1]);
    M007_PUTVALUE(0x1010,((undefined2 *)param_1)[2],((undefined2 *)param_1)[3]);
    M007_PUTHIGH(0x1010,*param_1,((undefined2 *)param_1)[1]);
    M007_PUTHIGH(0x1010,*param_1,((undefined2 *)param_1)[1]);
    M007_PUTHIGH(0x1010,*param_1,((undefined2 *)param_1)[1]);
    M007_PUTLOW(0x1010,((undefined2 *)param_1)[2],((undefined2 *)param_1)[3]);
    M007_PUTLOW(0x1010,((undefined2 *)param_1)[2],((undefined2 *)param_1)[3]);
    if (*(char *)((undefined2 *)param_1 + 5) == 'X') {
      M007_PUTLOW(0x1010,DAT_1008_0428,DAT_1008_042a);
    }
  }
  return;
}


// ---- FUN_1000_51e0 @ 1000:51e0

void __cdecl16far FUN_1000_51e0(byte *param_1)

{
  int iVar1;
  byte *pbVar2;
  undefined2 uVar3;
  undefined2 unaff_CS;
  int iVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  
  uVar6 = 0x1008;
  if (*(int *)param_1 == 0) {
    uVar5 = 0xf;
    M007_PUTSTATE(unaff_CS,0);
    DAT_1008_00e4 = 0;
    goto LAB_1000_52a3;
  }
  uVar5 = 0xf;
  iVar1 = M007_GETSTATE();
  if (iVar1 != 1) {
    if (((*(int *)param_1 == 1) || (*(int *)param_1 == 2)) || (*(int *)param_1 == 4)) {
      iVar4 = 0;
      iVar1 = -0x8000;
LAB_1000_5252:
      uVar3 = 0x2000;
    }
    else {
      if (*(int *)param_1 == 0x80) {
        iVar1 = DAT_1008_00e4 + 1;
        if (iVar1 != 1) {
          iVar4 = iVar1 >> 0xf;
          DAT_1008_00e4 = iVar1;
          goto LAB_1000_5252;
        }
        iVar4 = 0;
        iVar1 = 0;
      }
      else {
        if (DAT_1008_00e4 + 1 != 1) {
          iVar1 = (uint)*param_1 << 8;
          iVar4 = (int)(char)*param_1 >> 7;
          uVar3 = 0x5000;
          DAT_1008_00e4 = DAT_1008_00e4 + 1;
          goto LAB_1000_527d;
        }
        iVar1 = (uint)*param_1 << 8;
        iVar4 = (int)(char)*param_1 >> 7;
      }
      DAT_1008_00e4 = DAT_1008_00e4 + 1;
      uVar3 = 0xc000;
    }
LAB_1000_527d:
    UIF_LOG(0x1010,uVar3,iVar1,iVar4);
  }
  if (1 < DAT_1008_00e4) {
    M007_PUTSTATE(0x1010,1);
  }
LAB_1000_52a3:
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  pbVar2 = (byte *)param_1;
  if (*(int *)(pbVar2 + 2) != 0) {
    iVar1 = M007_GETSTATE(0x1010,0x26,uVar5,uVar6);
    if (iVar1 != 1) {
      UIF_LOG(0x1010,0x2000,0,0);
      M007_PUTSTATE(0x1010,0);
    }
    uVar5 = 0x26;
    M007_PUTSTATE(0x1010,1);
  }
  if (*(int *)(pbVar2 + 4) == 0) {
    uVar6 = 0;
  }
  else {
    iVar1 = M007_GETSTATE(0x1010,0x27,uVar5,uVar6);
    if (iVar1 != 1) {
      UIF_LOG(0x1010,0x2000,0,0);
      M007_PUTSTATE(0x1010,0);
    }
    uVar6 = 1;
  }
  uVar5 = 0x27;
  M007_PUTSTATE(0x1010,uVar6);
  iVar1 = *(int *)(pbVar2 + 6);
  if (iVar1 == 0) {
    uVar6 = 0x29;
    M007_GETSTATE(0x1010,0x29,uVar5);
  }
  else {
    uVar6 = 0xe;
    M007_PUTSTATE(0x1010,0);
  }
  uVar5 = 0x29;
  M007_PUTSTATE(0x1010,iVar1 == 0);
  if (*(int *)(pbVar2 + 8) == 0) {
    uVar6 = 0;
  }
  else {
    iVar1 = M007_GETSTATE(0x1010,0x28,uVar5,uVar6);
    if (iVar1 != 1) {
      M007_PUTSTATE(0x1010,0);
      UIF_LOG(0x1010,0x2000,0,0);
    }
    uVar6 = 1;
  }
  uVar5 = 0x28;
  M007_PUTSTATE(0x1010,uVar6);
  if (*(int *)(pbVar2 + 0xc) == 0) {
    uVar6 = 0xea;
    M007_PUTSTATE(0x1010,0);
  }
  else {
    uVar6 = 0xea;
    iVar1 = M007_GETSTATE(0x1010,0xea,uVar5);
    if ((iVar1 != 1) && (DAT_1008_006e == 0)) {
      UIF_LOG(0x1010,0x2000,0,0);
    }
  }
  if (*(int *)(pbVar2 + 0xe) == 0) {
    uVar5 = 0xeb;
    M007_PUTSTATE(0x1010,0);
  }
  else {
    uVar5 = 0xeb;
    iVar1 = M007_GETSTATE(0x1010,0xeb,uVar6);
    if (iVar1 != 1) {
      UIF_LOG(0x1010,0x2000,0,0);
    }
  }
  if (*(int *)(pbVar2 + 10) == 0) {
    iVar1 = M007_GETSTATE(0x1010,0x146,uVar5);
    if (iVar1 != 0) {
      return;
    }
    uVar6 = 1;
  }
  else {
    iVar1 = M007_GETSTATE(0x1010,0x146,uVar5);
    if (iVar1 != 1) {
      return;
    }
    uVar6 = 0x146;
    M007_PUTSTATE(0x1010,0);
    iVar1 = M007_GETSTATE(0x1010,0xe,uVar6);
    if ((iVar1 != 1) && (iVar1 = M007_GETSTATE(0x1010,0xe), iVar1 != 8)) {
      return;
    }
    uVar6 = 10;
  }
  M007_PUTSTATE(0x1010,uVar6);
  return;
}


// ---- FUN_1000_5432 @ 1000:5432

int __cdecl16far FUN_1000_5432(void)

{
  undefined2 uVar1;
  undefined2 *****pppppuVar2;
  int iVar3;
  undefined2 *puVar4;
  int in_BX;
  undefined2 unaff_SS;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 ****local_e;
  undefined2 uStack_c;
  undefined2 ***local_a;
  undefined2 uStack_8;
  undefined2 ***local_6;
  undefined2 uStack_4;
  
  uVar8 = 0x1008;
  uVar7 = 0xe;
  uVar1 = M007_GETSTATE();
  uVar5 = 0x1000;
  switch(uVar1) {
  default:
    goto switchD_1000_55cb_caseD_0;
  case 2:
    if (DAT_1008_0084 != 0) {
      uVar5 = 0x1010;
      in_BX = M007_GETSTATE(0x1000,0xb,uVar7,uVar8);
      if (in_BX != 4) {
        return in_BX;
      }
    }
    if (DAT_1008_0086 != 0) {
      return in_BX;
    }
    uStack_4 = 0xe;
    local_6 = (undefined2 ****)0x1;
    local_a = (undefined2 ***)0x546f;
    uStack_8 = uVar5;
    M007_PUTSTATE();
    local_6 = (undefined2 ****)0x1a;
    uStack_8 = 0x1c;
    local_a = &local_6;
    uStack_c = 0x1010;
    local_e = (undefined2 ****)0x547c;
    puVar4 = (undefined2 *)M007_GETVALUE();
    local_a = (undefined2 ***)puVar4[1];
    uStack_c = *puVar4;
    local_e = (undefined2 ****)0x1010;
    M007_PUTVALUE();
    local_a = (undefined2 ***)0x1b;
    uStack_c = 0x1d;
    local_e = &local_a;
    puVar4 = (undefined2 *)M007_GETVALUE(0x1010);
    local_e = (undefined2 ****)puVar4[1];
    M007_PUTVALUE(0x1010,*puVar4);
    local_e = (undefined2 ****)0xe0;
    uVar1 = 0x1010;
    iVar3 = M007_GETSTATE(0x1010);
    if (iVar3 == 1) {
      pppppuVar2 = &local_e;
LAB_1000_54b5:
      puVar4 = (undefined2 *)M007_GETVALUE(0x1010,pppppuVar2);
      uVar1 = 0x1000;
      FUN_1000_311a(*puVar4,puVar4[1]);
    }
    goto LAB_1000_54cc;
  case 3:
    if (DAT_1008_0084 != 0) {
      return in_BX;
    }
    if (DAT_1008_0086 != 0) {
      return in_BX;
    }
    goto LAB_1000_54ed;
  case 4:
    if (DAT_1008_0084 != 0) {
      return in_BX;
    }
    if (DAT_1008_0086 != 0) {
      uVar5 = 0x1010;
      iVar3 = M007_GETSTATE(0x1000,0xb,uVar7,uVar8);
      if (iVar3 != 4) {
        return iVar3;
      }
    }
    uVar1 = 7;
    break;
  case 5:
    if (DAT_1008_0084 != 0) {
      return in_BX;
    }
    if (DAT_1008_0086 != 0) {
      return in_BX;
    }
    uVar1 = 9;
    break;
  case 6:
    if (DAT_1008_0084 != 0) {
      return in_BX;
    }
    if (DAT_1008_0086 != 0) {
      return in_BX;
    }
    M007_PUTSTATE(0x1000,1);
    uVar6 = 0x1a;
    uVar8 = 0x1c;
    puVar4 = (undefined2 *)M007_GETVALUE(0x1010,&local_e);
    M007_PUTVALUE(0x1010,*puVar4,puVar4[1]);
    uVar7 = 0x1b;
    uVar5 = 0x1d;
    puVar4 = (undefined2 *)M007_GETVALUE(0x1010,&local_a);
    M007_PUTVALUE(0x1010,*puVar4,puVar4[1]);
    uVar1 = 0x1010;
    iVar3 = M007_GETSTATE(0x1010,0xe0,uVar5,uVar7,uVar8,uVar6);
    if (iVar3 == 1) {
      pppppuVar2 = (undefined2 *****)&local_6;
      goto LAB_1000_54b5;
    }
LAB_1000_54cc:
    iVar3 = M007_GETSTATE(uVar1,0xd);
    if (iVar3 == 1) {
      uVar1 = 0xd;
      M007_PUTSTATE(0x1010,0);
    }
    uVar5 = 0x1010;
    iVar3 = M007_GETSTATE(0x1010,0x26,uVar1);
    if (iVar3 == 2) {
LAB_1000_54ed:
      uVar1 = 0;
      break;
    }
    goto LAB_1000_54f4;
  case 8:
    if (DAT_1008_0084 != 0) {
      return in_BX;
    }
    uVar1 = 10;
  }
  M007_PUTSTATE(uVar5,uVar1);
LAB_1000_54f4:
  DAT_1008_0084 = 0;
  DAT_1008_0086 = 0;
switchD_1000_55cb_caseD_0:
  iVar3 = FUN_1000_6f08();
  return iVar3;
}


// ---- FUN_1000_55ea @ 1000:55ea

undefined2 __cdecl16far FUN_1000_55ea(float param_1)

{
  longdouble lVar1;
  
  lVar1 = (longdouble)param_1;
  FUN_1000_0330(0x1008);
  DAT_1008_0132 = (float)lVar1;
  return 0x132;
}


// ---- FUN_1000_5610 @ 1000:5610

void __cdecl16far FUN_1000_5610(undefined4 param_1)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined2 *puVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 local_e;
  undefined2 uStack_c;
  undefined1 local_a [4];
  undefined1 local_6 [4];
  
  uVar6 = 0x1008;
  uVar5 = 0x17;
  uStack_c = (undefined2)((ulong)param_1 >> 0x10);
  local_e = (undefined2)param_1;
  uVar4 = 0x17;
  puVar3 = (undefined2 *)M007_GETVALUE(unaff_CS,local_6);
  uVar2 = (undefined2)((ulong)puVar3 >> 0x10);
  puVar1 = (undefined2 *)
           FUN_1000_55ea(*(undefined2 *)puVar3,((undefined2 *)puVar3)[1],uVar4,local_e,uStack_c,
                         uVar5,uVar6);
  M007_PUTVALUE(0x1000,*puVar1,puVar1[1]);
  uVar5 = 0x1b;
  uVar4 = 0x1b;
  puVar3 = (undefined2 *)M007_GETVALUE(0x1010,local_a);
  uVar2 = (undefined2)((ulong)puVar3 >> 0x10);
  puVar1 = (undefined2 *)
           FUN_1000_55ea(*(undefined2 *)puVar3,((undefined2 *)puVar3)[1],uVar4,param_1,uVar5);
  M007_PUTVALUE(0x1000,*puVar1,puVar1[1]);
  return;
}


// ---- FUN_1000_5698 @ 1000:5698

undefined2 __cdecl16far FUN_1000_5698(int param_1)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 unaff_CS;
  undefined4 local_6;
  
  uVar1 = DAT_1008_042c;
  uVar2 = DAT_1008_042e;
  if ((param_1 != 1) && ((param_1 == 2 || (param_1 == 3)))) {
    uVar1 = DAT_1008_0430;
    uVar2 = DAT_1008_0432;
  }
  local_6 = CONCAT22(uVar2,uVar1);
  M007_PUTHIGH(unaff_CS,uVar1,uVar2);
  DAT_1008_0132 = local_6;
  return 0x132;
}


// ---- FUN_1000_56fc @ 1000:56fc

undefined2 __cdecl16far FUN_1000_56fc(int param_1)

{
  int iVar1;
  undefined2 unaff_CS;
  
  if (param_1 == 1) {
    unaff_CS = 0x1010;
    iVar1 = M007_GETSTATE();
    if (iVar1 == 0) {
      DAT_1008_0132._0_2_ = DAT_1008_0434;
      DAT_1008_0132._2_2_ = DAT_1008_0436;
      return 0x132;
    }
  }
  iVar1 = ISLICENCED(unaff_CS,0x23);
  DAT_1008_0132._0_2_ = DAT_1008_0438;
  DAT_1008_0132._2_2_ = DAT_1008_043a;
  if (iVar1 == 1) {
    DAT_1008_0132._0_2_ = DAT_1008_0420;
    DAT_1008_0132._2_2_ = DAT_1008_0422;
  }
  return 0x132;
}


// ---- FUN_1000_574a @ 1000:574a

undefined2 __cdecl16far FUN_1000_574a(undefined2 param_1)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  undefined2 uVar3;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  longdouble lVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined1 local_e [4];
  undefined4 local_a;
  undefined4 local_6;
  
  uVar6 = 0x1008;
  uVar5 = 0x82;
  puVar1 = (undefined2 *)M007_GETVALUE(unaff_CS,local_e);
  uVar3 = puVar1[1];
  local_6 = (float)CONCAT22(uVar3,*puVar1);
  puVar2 = (undefined4 *)FUN_1000_56fc(param_1,uVar5,uVar6);
  local_a = *puVar2;
  lVar4 = (longdouble)local_6;
  FUN_1000_0330();
  DAT_1008_0132 = (float)lVar4;
  return 0x132;
}


// ---- FUN_1000_57a2 @ 1000:57a2

void __cdecl16far FUN_1000_57a2(undefined4 param_1)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined2 *puVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 local_e;
  undefined2 uStack_c;
  undefined1 local_a [4];
  undefined1 local_6 [4];
  
  uVar6 = 0x1008;
  uVar5 = 0x18;
  uStack_c = (undefined2)((ulong)param_1 >> 0x10);
  local_e = (undefined2)param_1;
  uVar4 = 0x18;
  puVar3 = (undefined2 *)M007_GETVALUE(unaff_CS,local_6);
  uVar2 = (undefined2)((ulong)puVar3 >> 0x10);
  puVar1 = (undefined2 *)
           FUN_1000_55ea(*(undefined2 *)puVar3,((undefined2 *)puVar3)[1],uVar4,local_e,uStack_c,
                         uVar5,uVar6);
  M007_PUTVALUE(0x1000,*puVar1,puVar1[1]);
  uVar5 = 0x1a;
  uVar4 = 0x1a;
  puVar3 = (undefined2 *)M007_GETVALUE(0x1010,local_a);
  uVar2 = (undefined2)((ulong)puVar3 >> 0x10);
  puVar1 = (undefined2 *)
           FUN_1000_55ea(*(undefined2 *)puVar3,((undefined2 *)puVar3)[1],uVar4,param_1,uVar5);
  M007_PUTVALUE(0x1000,*puVar1,puVar1[1]);
  return;
}


// ---- FUN_1000_582a @ 1000:582a

undefined2 __cdecl16far FUN_1000_582a(undefined2 param_1)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  undefined2 in_DX;
  undefined2 unaff_SS;
  longdouble lVar3;
  undefined2 uVar4;
  undefined1 local_e [4];
  undefined4 local_a;
  undefined4 local_6;
  
  puVar1 = (undefined2 *)FUN_1000_5698(param_1,0x1008);
  local_6 = (float)CONCAT22(puVar1[1],*puVar1);
  uVar4 = 0x19;
  puVar2 = (undefined4 *)M007_GETVALUE(0x1000,local_e);
  local_a = *puVar2;
  lVar3 = (longdouble)local_6;
  FUN_1000_0330(uVar4);
  DAT_1008_0132 = (float)lVar3;
  return 0x132;
}


// ---- FUN_1000_5880 @ 1000:5880

undefined2 __cdecl16far FUN_1000_5880(int param_1)

{
  if (((param_1 < 1) || (SBORROW2(param_1,1))) ||
     ((DAT_1008_0132._0_2_ = DAT_1008_043c, DAT_1008_0132._2_2_ = DAT_1008_043e,
      param_1 != 2 && 0 < param_1 + -1 &&
      (DAT_1008_0132._0_2_ = DAT_1008_0440, DAT_1008_0132._2_2_ = DAT_1008_0442, param_1 != 3)))) {
    DAT_1008_0132._0_2_ = DAT_1008_0444;
    DAT_1008_0132._2_2_ = DAT_1008_0446;
  }
  return 0x132;
}


// ---- FUN_1000_58c0 @ 1000:58c0

undefined2 __cdecl16far FUN_1000_58c0(int param_1)

{
  DAT_1008_0132._0_2_ = DAT_1008_043c;
  DAT_1008_0132._2_2_ = DAT_1008_043e;
  if (((param_1 != 1) &&
      (DAT_1008_0132._0_2_ = DAT_1008_0440, DAT_1008_0132._2_2_ = DAT_1008_0442, param_1 != 2)) &&
     (param_1 != 3)) {
    DAT_1008_0132._0_2_ = DAT_1008_0444;
    DAT_1008_0132._2_2_ = DAT_1008_0446;
  }
  return 0x132;
}


// ---- FUN_1000_58fe @ 1000:58fe

void __cdecl16far FUN_1000_58fe(int param_1)

{
  undefined2 *puVar1;
  undefined2 in_DX;
  undefined2 unaff_SS;
  undefined4 uVar2;
  undefined2 uVar3;
  float local_e;
  undefined4 local_a;
  undefined4 local_6;
  
  puVar1 = (undefined2 *)FUN_1000_5880(param_1,0x1008);
  local_6 = (float)CONCAT22(puVar1[1],*puVar1);
  uVar3 = 0x81;
  puVar1 = (undefined2 *)M007_GETVALUE(0x1000,&local_e);
  local_a = (float)CONCAT22(puVar1[1],*puVar1);
  uVar2 = M007_GETSTATE(0x1010,0xb,uVar3);
  uVar3 = (undefined2)((ulong)uVar2 >> 0x10);
  if ((int)uVar2 != param_1) {
    puVar1 = (undefined2 *)FUN_1000_58c0(param_1);
    local_a = (float)CONCAT22(puVar1[1],*puVar1);
    M007_PUTVALUE(0x1000,*puVar1,puVar1[1]);
  }
  local_e = local_a;
  if ((local_6 < local_a) || (local_a == (float)DAT_1008_0448)) {
    M007_PUTVALUE(0x1010,(undefined2)local_6,local_6._2_2_);
  }
  M007_PUTHIGH(0x1010,(undefined2)local_6,local_6._2_2_);
  return;
}


// ---- FUN_1000_59b4 @ 1000:59b4

void __cdecl16far FUN_1000_59b4(void)

{
  int iVar1;
  undefined2 *puVar2;
  float *pfVar3;
  undefined2 unaff_SS;
  undefined2 ***local_12;
  undefined2 ***pppuStack_10;
  undefined2 ***local_e;
  undefined2 uStack_c;
  undefined4 local_a;
  undefined4 local_6;
  
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_905(0x1010,&local_a);
    uStack_c = 0x1c;
    local_e = &local_e;
    pppuStack_10 = (undefined2 ***)0x1010;
    local_12 = (undefined2 ***)0x59e6;
    pfVar3 = (float *)M007_GETHIGH();
    if (*pfVar3 < local_6) {
      local_e = (undefined2 ***)((int)(undefined4 *)&DAT_1008_001a + 2);
      pppuStack_10 = &local_12;
      local_12 = (undefined2 ***)0x1010;
      puVar2 = (undefined2 *)M007_GETHIGH();
      local_6 = (float)CONCAT22(puVar2[1],*puVar2);
    }
    pppuStack_10 = (undefined2 ***)0x1c;
    local_12 = &local_12;
    pfVar3 = (float *)M007_GETLOW(0x1010);
    if (local_6 < *pfVar3) {
      local_12 = (undefined2 ***)((int)(undefined4 *)&DAT_1008_001a + 2);
      puVar2 = (undefined2 *)M007_GETLOW(0x1010,&local_e);
      local_6 = (float)CONCAT22(puVar2[1],*puVar2);
    }
    pfVar3 = (float *)M007_GETHIGH(0x1010,&local_12);
    if (*pfVar3 < local_a) {
      puVar2 = (undefined2 *)M007_GETHIGH(0x1010,&local_e);
      local_a = (float)CONCAT22(puVar2[1],*puVar2);
    }
    pfVar3 = (float *)M007_GETLOW(0x1010,&local_12);
    if (local_a < *pfVar3) {
      puVar2 = (undefined2 *)M007_GETLOW(0x1010,&local_e);
      local_a = (float)CONCAT22(puVar2[1],*puVar2);
    }
  }
  else {
    puVar2 = (undefined2 *)M007_GETVALUE(0x1010,&local_12);
    local_a = (float)CONCAT22(puVar2[1],*puVar2);
    puVar2 = (undefined2 *)M007_GETVALUE(0x1010,&local_e);
    local_6 = (float)CONCAT22(puVar2[1],*puVar2);
  }
  pfVar3 = (float *)M007_GETHIGH(0x1010,&local_12);
  if (local_a <= *pfVar3) {
    pfVar3 = (float *)M007_GETLOW(0x1010,&local_e);
    if (*pfVar3 <= local_a) {
      M007_PUTVALUE(0x1010,(undefined2)local_a,local_a._2_2_);
    }
  }
  pfVar3 = (float *)M007_GETHIGH(0x1010,&local_12);
  if (local_6 <= *pfVar3) {
    pfVar3 = (float *)M007_GETLOW(0x1010,&local_e);
    if (*pfVar3 <= local_6) {
      M007_PUTVALUE(0x1010,(undefined2)local_6,local_6._2_2_);
    }
  }
  DAT_1008_007c = 0;
  DAT_1008_007e = 0;
  DAT_1008_0080 = 0;
  DAT_1008_0082 = 0;
  DAT_1008_0084 = 0;
  DAT_1008_0086 = 0;
  DAT_1008_0088 = 0;
  DAT_1008_008a = 0;
  return;
}


// ---- FUN_1000_5bba @ 1000:5bba

void __cdecl16far FUN_1000_5bba(void)

{
  undefined2 unaff_CS;
  
  M007_PUTVALUE(unaff_CS,DAT_1008_0428,DAT_1008_042a);
  M007_PUTVALUE(0x1010,DAT_1008_0428,DAT_1008_042a);
  M007_PUTVALUE(0x1010,DAT_1008_0428,DAT_1008_042a);
  M007_PUTVALUE(0x1010,DAT_1008_0428,DAT_1008_042a);
  M007_PUTVALUE(0x1010,DAT_1008_0428,DAT_1008_042a);
  M007_PUTVALUE(0x1010,DAT_1008_0450,DAT_1008_0452);
  M007_PUTVALUE(0x1010,DAT_1008_0450,DAT_1008_0452);
  M007_PUTVALUE(0x1010,DAT_1008_0450,DAT_1008_0452);
  M007_PUTSTATE(0x1010,1);
  M007_PUTSTATE(0x1010,1);
  M007_PUTSTATE(0x1010,1);
  M007_PUTSTATE(0x1010,1);
  M007_PUTSTATE(0x1010,1);
  return;
}


// ---- FUN_1000_5c76 @ 1000:5c76

void __cdecl16far FUN_1000_5c76(void)

{
  undefined2 uVar1;
  undefined2 uVar2;
  
  uVar2 = 0x1008;
  uVar1 = 0xe;
  M007_GETSTATE();
  FUN_1000_59b4(uVar1,uVar2);
  if (DAT_1008_00d2 != 0) {
    FUN_1000_5bba();
  }
  return;
}


// ---- FUN_1000_5c9a @ 1000:5c9a

void __cdecl16far FUN_1000_5c9a(void)

{
  int iVar1;
  undefined2 *puVar2;
  undefined2 unaff_SS;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined1 local_6 [4];
  
  uVar4 = 0x1008;
  uVar3 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_909(0x1010,(undefined2)DAT_1008_0448,DAT_1008_0448._2_2_,DAT_1008_0448._4_2_,
                DAT_1008_0448._6_2_,uVar3,uVar4);
  }
  puVar2 = (undefined2 *)M007_GETVALUE(0x1010,local_6);
  DAT_1008_00e6._0_2_ = *puVar2;
  DAT_1008_00e6._2_2_ = puVar2[1];
  return;
}


// ---- FUN_1000_5ce4 @ 1000:5ce4

void __cdecl16far FUN_1000_5ce4(undefined2 param_1)

{
  DAT_1008_007a = param_1;
  return;
}


// ---- FUN_1000_5cf6 @ 1000:5cf6

void __cdecl16far FUN_1000_5cf6(undefined2 param_1)

{
  DAT_1008_0078 = param_1;
  return;
}


// ---- FUN_1000_5d08 @ 1000:5d08

void __cdecl16far FUN_1000_5d08(void)

{
  DAT_1008_008a = 1;
  DAT_1008_007e = 1;
  return;
}


// ---- FUN_1000_5d1e @ 1000:5d1e

void __cdecl16far FUN_1000_5d1e(void)

{
  DAT_1008_0088 = 1;
  DAT_1008_007c = 1;
  return;
}


// ---- FUN_1000_5d34 @ 1000:5d34

void __cdecl16far FUN_1000_5d34(void)

{
  DAT_1008_0088 = 1;
  DAT_1008_008a = 1;
  DAT_1008_007c = 1;
  DAT_1008_007e = 1;
  return;
}


// ---- FUN_1000_5d50 @ 1000:5d50

void __cdecl16far
FUN_1000_5d50(int param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5,undefined2 param_6,undefined2 param_7,undefined2 param_8,
             undefined2 param_9,undefined2 param_10,undefined2 param_11)

{
  param_1 = param_1 * 0x14;
  *(undefined2 *)(param_1 + 0x898) = param_2;
  *(undefined2 *)(param_1 + 0x89a) = param_3;
  *(undefined2 *)(param_1 + 0x89c) = param_4;
  *(undefined2 *)(param_1 + 0x89e) = param_5;
  *(undefined2 *)(param_1 + 0x8a0) = param_6;
  *(undefined2 *)(param_1 + 0x8a2) = param_7;
  *(undefined2 *)(param_1 + 0x8a4) = param_8;
  *(undefined2 *)(param_1 + 0x8a6) = param_9;
  *(undefined2 *)(param_1 + 0x8a8) = param_10;
  *(undefined2 *)(param_1 + 0x8aa) = param_11;
  return;
}


// ---- FUN_1000_5da0 @ 1000:5da0

void __cdecl16far
FUN_1000_5da0(int param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5,undefined2 param_6,undefined2 param_7,undefined2 param_8,
             undefined2 param_9,undefined2 param_10,undefined2 param_11)

{
  param_1 = param_1 * 0x14;
  *(undefined2 *)(param_1 + 0x8fc) = param_2;
  *(undefined2 *)(param_1 + 0x8fe) = param_3;
  *(undefined2 *)(param_1 + 0x900) = param_4;
  *(undefined2 *)(param_1 + 0x902) = param_5;
  *(undefined2 *)(param_1 + 0x904) = param_6;
  *(undefined2 *)(param_1 + 0x906) = param_7;
  *(undefined2 *)(param_1 + 0x908) = param_8;
  *(undefined2 *)(param_1 + 0x90a) = param_9;
  *(undefined2 *)(param_1 + 0x90c) = param_10;
  *(undefined2 *)(param_1 + 0x90e) = param_11;
  return;
}


// ---- FUN_1000_5df0 @ 1000:5df0

void __cdecl16far FUN_1000_5df0(void)

{
  undefined2 *puVar1;
  int iVar2;
  undefined2 unaff_SS;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined4 local_6;
  
  uVar5 = 0x1008;
  uVar4 = 0x81;
  puVar1 = (undefined2 *)M007_GETVALUE();
  local_6 = (float)CONCAT22(puVar1[1],*puVar1);
  uVar3 = 0x83;
  iVar2 = M007_GETSTATE();
  if (iVar2 == 1) {
    Ordinal_909(0x1010,(double)local_6,uVar3,uVar4,uVar5);
  }
  return;
}


// ---- FUN_1000_5e3a @ 1000:5e3a

undefined2 __cdecl16far FUN_1000_5e3a(int *param_1)

{
  int *piVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  piVar1 = (int *)param_1;
  if ((((*param_1 == 0) || (*param_1 == 0x20)) || (DAT_1008_00e4 < 1)) &&
     (((piVar1[1] == 0 && (piVar1[2] == 0)) && ((piVar1[3] == 0 && (piVar1[4] == 0)))))) {
    return 0;
  }
  return 1;
}


// ---- FUN_1000_5e80 @ 1000:5e80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_1000_5e80(void)

{
  int iVar1;
  float *pfVar2;
  undefined2 uVar3;
  undefined2 unaff_SS;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined1 local_12 [4];
  undefined1 local_e [8];
  undefined1 local_6 [4];
  
  uVar6 = 0x1008;
  uVar5 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_902(0x1010,0x96,0x1008,uVar5,uVar6);
    if (((_DAT_1008_00fa != _DAT_1008_0096) &&
        (pfVar2 = (float *)M007_GETHIGH(0x1010,local_e), _DAT_1008_0096 <= *pfVar2)) &&
       (pfVar2 = (float *)M007_GETLOW(0x1010,local_12), *pfVar2 <= _DAT_1008_0096)) {
      M007_PUTVALUE(0x1010,DAT_1008_0096,DAT_1008_0098);
      _DAT_1008_00fa = _DAT_1008_0096;
    }
    uVar5 = 0x1010;
    if (DAT_1008_00fe != _DAT_1008_009a) {
      uVar6 = 0x1c;
      uVar5 = 0x1010;
      pfVar2 = (float *)M007_GETHIGH(0x1010,local_12);
      if (_DAT_1008_009a <= *pfVar2) {
        uVar3 = 0x1c;
        uVar5 = 0x1010;
        pfVar2 = (float *)M007_GETLOW(0x1010,local_e);
        if (*pfVar2 <= _DAT_1008_009a) {
          uVar4 = 0x1c;
          M007_PUTVALUE(0x1010,DAT_1008_009a,DAT_1008_009c);
          DAT_1008_00fe = _DAT_1008_009a;
          uVar5 = 0x1010;
          iVar1 = M007_GETSTATE(0x1010,0xe,uVar4,uVar3,uVar6);
          if (iVar1 == 1) {
            uVar5 = 0x1010;
            iVar1 = M007_GETSTATE(0x1010,0xe0);
            if ((iVar1 == 1) && (DAT_1008_00fe != 0.0)) {
              uVar5 = 0x1000;
              FUN_1000_311a(DAT_1008_00fe._0_2_,DAT_1008_00fe._2_2_);
            }
          }
        }
      }
    }
    uVar6 = uVar5;
    if (DAT_1008_0102 != _DAT_1008_00ae) {
      uVar6 = 0x1010;
      pfVar2 = (float *)M007_GETHIGH(uVar5,local_12);
      if (_DAT_1008_00ae <= *pfVar2) {
        uVar6 = 0x1010;
        pfVar2 = (float *)M007_GETLOW(0x1010,local_e);
        if (*pfVar2 <= _DAT_1008_00ae) {
          uVar6 = 0x1010;
          M007_PUTVALUE(0x1010,DAT_1008_00ae,DAT_1008_00b0);
          DAT_1008_0102 = _DAT_1008_00ae;
        }
      }
    }
    uVar5 = uVar6;
    if (DAT_1008_0106 != _DAT_1008_00b2) {
      uVar5 = 0x1010;
      pfVar2 = (float *)M007_GETHIGH(uVar6,local_12);
      if (_DAT_1008_00b2 <= *pfVar2) {
        uVar5 = 0x1010;
        pfVar2 = (float *)M007_GETLOW(0x1010,local_e);
        if (*pfVar2 <= _DAT_1008_00b2) {
          uVar5 = 0x1010;
          M007_PUTVALUE(0x1010,DAT_1008_00b2,DAT_1008_00b4);
          DAT_1008_0106 = _DAT_1008_00b2;
        }
      }
    }
    uVar6 = uVar5;
    if (DAT_1008_010a != _DAT_1008_00b6) {
      uVar6 = 0x1010;
      pfVar2 = (float *)M007_GETHIGH(uVar5,local_12);
      if (_DAT_1008_00b6 <= *pfVar2) {
        uVar6 = 0x1010;
        pfVar2 = (float *)M007_GETLOW(0x1010,local_e);
        if (*pfVar2 <= _DAT_1008_00b6) {
          uVar6 = 0x1010;
          M007_PUTVALUE(0x1010,DAT_1008_00b6,DAT_1008_00b8);
          DAT_1008_010a = _DAT_1008_00b6;
        }
      }
    }
    uVar3 = uVar6;
    if (DAT_1008_0112 != _DAT_1008_00be) {
      uVar3 = 0x1010;
      pfVar2 = (float *)M007_GETHIGH(uVar6,local_12);
      if (_DAT_1008_00be <= *pfVar2) {
        uVar3 = 0x1010;
        pfVar2 = (float *)M007_GETLOW(0x1010,local_e);
        if (*pfVar2 <= _DAT_1008_00be) {
          uVar3 = 0x1010;
          M007_PUTVALUE(0x1010,DAT_1008_00be,DAT_1008_00c0);
          DAT_1008_0112 = _DAT_1008_00be;
        }
      }
    }
    uVar5 = 0x84;
    M007_PUTSTATE(uVar3,DAT_1008_00cc);
  }
  if ((DAT_1008_00d0 == 0) || ((DAT_1008_00d0 & 0xffa0) != 0)) {
    if (DAT_1008_00e2 != DAT_1008_00d0) {
      UIF_LOG(0x1010,0x5000,DAT_1008_00d0,(int)DAT_1008_00d0 >> 0xf);
    }
    DAT_1008_00e2 = DAT_1008_00d0;
  }
  else {
    DAT_1008_00e2 = 0x40;
  }
  iVar1 = FUN_1000_5e3a(0xd2,0x1008,uVar5);
  if (iVar1 == 0) {
    if (DAT_1008_00dc == 0) {
      DAT_1008_0090 = 1;
    }
    else {
      DAT_1008_0090 = 2;
    }
  }
  else {
    DAT_1008_0090 = 0;
    FUN_1000_6f08();
  }
  uVar6 = 0x1000;
  if (DAT_1008_0090 == 0) {
    FUN_1000_5c76();
    DAT_1008_0960 = 0;
    DAT_1008_0092 = 0;
  }
  else if (DAT_1008_0090 == 2) {
    if (DAT_1008_0094 == 3) {
      iVar1 = M007_GETSTATE(0x1000,0x83);
      if (iVar1 == 1) {
        Ordinal_905(0x1010,local_6);
      }
      uVar5 = 0x1010;
      DAT_1008_0960 = M007_GETSTATE(0x1010,0xe);
      if (DAT_1008_0960 == 1) {
        uVar5 = 0xe;
        M007_PUTSTATE(0x1010,10);
      }
      DAT_1008_0094 = 2;
    }
  }
  else if ((DAT_1008_0092 != 1) || (DAT_1008_0094 != 3)) {
    if (DAT_1008_0092 == 0) {
      M007_PUTSTATE(0x1000,0);
      M007_PUTSTATE(0x1010,0);
      M007_PUTSTATE(0x1010,0);
      M007_PUTSTATE(0x1010,0);
      uVar6 = 0x1010;
      M007_PUTSTATE(0x1010,0);
      DAT_1008_0092 = 1;
    }
    if (DAT_1008_0094 == 2) {
      M007_PUTSTATE(uVar6,DAT_1008_0960);
      DAT_1008_0094 = 3;
    }
  }
  FUN_1000_51e0(0xd2,0x1008,uVar5);
  if (DAT_1008_0082 != 0) {
    DAT_1008_008e = DAT_1008_00c4;
  }
  if (DAT_1008_0080 != 0) {
    DAT_1008_008c = DAT_1008_00c2;
  }
  FUN_1000_6910();
  return;
}


// ---- FUN_1000_62e0 @ 1000:62e0

void __cdecl16far FUN_1000_62e0(int param_1)

{
  float *pfVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined1 *puVar4;
  undefined2 uVar5;
  undefined1 *puVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined1 local_1e [4];
  undefined1 local_1a [4];
  int local_16;
  undefined2 uStack_14;
  undefined2 local_12;
  undefined2 local_10;
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_a;
  undefined2 local_8;
  undefined4 local_6;
  
  uVar8 = 0x1008;
  param_1 = param_1 * 0x14;
  _local_16 = CONCAT22(0x1008,param_1 + 0x8fc);
  local_12 = *(undefined2 *)(param_1 + 0x8fe);
  local_10 = *(undefined2 *)(param_1 + 0x900);
  local_e = *(undefined2 *)(param_1 + 0x904);
  local_c = *(undefined2 *)(param_1 + 0x906);
  local_a = *(undefined2 *)(param_1 + 0x908);
  local_8 = *(undefined2 *)(param_1 + 0x90a);
  local_6 = (float)CONCAT22(*(undefined2 *)(param_1 + 0x90e),*(undefined2 *)(param_1 + 0x90c));
  uVar7 = 0x1c;
  puVar6 = local_1a;
  pfVar1 = (float *)M007_GETHIGH(unaff_CS,puVar6);
  if (*pfVar1 < local_6) {
    puVar6 = (undefined1 *)((int)(undefined4 *)&DAT_1008_001a + 2);
    puVar2 = (undefined2 *)M007_GETHIGH(0x1010,local_1e);
    local_6 = (float)CONCAT22(puVar2[1],*puVar2);
  }
  uVar5 = 0x1c;
  puVar4 = local_1e;
  pfVar1 = (float *)M007_GETLOW(0x1010,puVar4);
  if (local_6 < *pfVar1) {
    puVar4 = (undefined1 *)((int)(undefined4 *)&DAT_1008_001a + 2);
    puVar2 = (undefined2 *)M007_GETLOW(0x1010,local_1a);
    local_6 = (float)CONCAT22(puVar2[1],*puVar2);
  }
  iVar3 = M007_GETSTATE(0x1010,0x83,puVar4,uVar5,puVar6,uVar7,uVar8);
  if (iVar3 == 1) {
    Ordinal_903(0x1010,&local_12);
    return;
  }
  uVar7 = (undefined2)((ulong)_local_16 >> 0x10);
  DAT_1008_009a = *(undefined2 *)((int)_local_16 + 0x10);
  DAT_1008_009c = *(undefined2 *)((int)_local_16 + 0x12);
  DAT_1008_00c2 = 0;
  return;
}


// ---- FUN_1000_63d2 @ 1000:63d2

void __cdecl16far FUN_1000_63d2(int param_1)

{
  float *pfVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined1 *puVar4;
  undefined2 uVar5;
  undefined1 *puVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined1 local_1e [4];
  undefined1 local_1a [4];
  int local_16;
  undefined2 uStack_14;
  undefined2 local_12;
  undefined2 local_10;
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_a;
  undefined2 local_8;
  undefined4 local_6;
  
  uVar8 = 0x1008;
  param_1 = param_1 * 0x14;
  _local_16 = CONCAT22(0x1008,param_1 + 0x898);
  local_12 = *(undefined2 *)(param_1 + 0x89a);
  local_10 = *(undefined2 *)(param_1 + 0x89c);
  local_e = *(undefined2 *)(param_1 + 0x8a0);
  local_c = *(undefined2 *)(param_1 + 0x8a2);
  local_a = *(undefined2 *)(param_1 + 0x8a4);
  local_8 = *(undefined2 *)(param_1 + 0x8a6);
  local_6 = (float)CONCAT22(*(undefined2 *)(param_1 + 0x8aa),*(undefined2 *)(param_1 + 0x8a8));
  uVar7 = 0x1d;
  puVar6 = local_1a;
  pfVar1 = (float *)M007_GETHIGH(unaff_CS,puVar6);
  if (*pfVar1 < local_6) {
    puVar6 = (undefined1 *)((int)(undefined4 *)&DAT_1008_001a + 3);
    puVar2 = (undefined2 *)M007_GETHIGH(0x1010,local_1e);
    local_6 = (float)CONCAT22(puVar2[1],*puVar2);
  }
  uVar5 = 0x1d;
  puVar4 = local_1e;
  pfVar1 = (float *)M007_GETLOW(0x1010,puVar4);
  if (local_6 < *pfVar1) {
    puVar4 = (undefined1 *)((int)(undefined4 *)&DAT_1008_001a + 3);
    puVar2 = (undefined2 *)M007_GETLOW(0x1010,local_1a);
    local_6 = (float)CONCAT22(puVar2[1],*puVar2);
  }
  iVar3 = M007_GETSTATE(0x1010,0x83,puVar4,uVar5,puVar6,uVar7,uVar8);
  if (iVar3 == 1) {
    Ordinal_904(0x1010,&local_12);
    return;
  }
  uVar7 = (undefined2)((ulong)_local_16 >> 0x10);
  DAT_1008_0096 = *(undefined2 *)((int)_local_16 + 0x10);
  DAT_1008_0098 = *(undefined2 *)((int)_local_16 + 0x12);
  DAT_1008_00c4 = 0;
  return;
}


// ---- FUN_1000_64c4 @ 1000:64c4

void __cdecl16far FUN_1000_64c4(void)

{
  char cVar1;
  
  if (DAT_1008_0088 == 0x20) {
    if (DAT_1008_0072 != 0) {
      DAT_1008_0072 = 0;
      goto LAB_1000_653d;
    }
  }
  else if ((DAT_1008_0088 < 0x21) && (cVar1 = (char)DAT_1008_0088, cVar1 != '\0')) {
    if (cVar1 == '\x01') {
      DAT_1008_0076 = 1;
      DAT_1008_0084 = 1;
      if (DAT_1008_0910 != 0) {
        DAT_1008_0088 = 0x20;
        return;
      }
    }
    else {
      if (cVar1 != '\x02') {
        return;
      }
      if ((DAT_1008_008c != 0) && (DAT_1008_008c != 1)) {
        return;
      }
      if (*(int *)(DAT_1008_0076 * 0x14 + 0x902) != 0) {
        DAT_1008_0070 = 1;
      }
      if (DAT_1008_007a == DAT_1008_0076) {
        DAT_1008_0088 = 0;
        DAT_1008_0084 = 0;
        DAT_1008_0080 = 0;
        FUN_1000_5432(0x1008);
        return;
      }
      DAT_1008_0076 = DAT_1008_0076 + 1;
      if (*(int *)(DAT_1008_0076 * 0x14 + 0x8fc) != 0) {
        DAT_1008_0088 = 0x20;
        DAT_1008_0080 = 0;
        return;
      }
    }
LAB_1000_653d:
    FUN_1000_62e0(DAT_1008_0076);
    DAT_1008_0080 = 1;
    DAT_1008_0088 = 2;
    return;
  }
  return;
}


// ---- FUN_1000_6590 @ 1000:6590

void __cdecl16far FUN_1000_6590(void)

{
  char cVar1;
  
  if (DAT_1008_008a == 0x10) {
    if (DAT_1008_0070 != 0) {
      DAT_1008_0070 = 0;
      goto LAB_1000_6609;
    }
  }
  else if ((DAT_1008_008a < 0x11) && (cVar1 = (char)DAT_1008_008a, cVar1 != '\0')) {
    if (cVar1 == '\x01') {
      DAT_1008_0074 = 1;
      DAT_1008_0086 = 1;
      if (DAT_1008_08ac != 0) {
        DAT_1008_008a = 0x10;
        return;
      }
    }
    else {
      if (cVar1 != '\x03') {
        return;
      }
      if ((DAT_1008_008e != 0) && (DAT_1008_008e != 1)) {
        return;
      }
      if (*(int *)(DAT_1008_0074 * 0x14 + 0x89e) != 0) {
        DAT_1008_0072 = 1;
      }
      if (DAT_1008_0078 == DAT_1008_0074) {
        DAT_1008_008a = 0;
        DAT_1008_0086 = 0;
        DAT_1008_0082 = 0;
        FUN_1000_5432(0x1008);
        return;
      }
      DAT_1008_0074 = DAT_1008_0074 + 1;
      if (*(int *)(DAT_1008_0074 * 0x14 + 0x898) != 0) {
        DAT_1008_008a = 0x10;
        DAT_1008_0082 = 0;
        return;
      }
    }
LAB_1000_6609:
    FUN_1000_63d2(DAT_1008_0074);
    DAT_1008_0082 = 1;
    DAT_1008_008a = 3;
    return;
  }
  return;
}


// ---- FUN_1000_665c @ 1000:665c

void __cdecl16far FUN_1000_665c(void)

{
  int iVar1;
  
  FUN_1000_5e80(0x1008);
  iVar1 = M007_GETSTATE(0x1000,0xe);
  if (iVar1 == 0xc) {
    iVar1 = M007_GETSTATE(0x1010,0x29);
    if ((iVar1 == 1) && (DAT_1008_0116 == 0)) {
      DAT_1008_0116 = 10;
    }
  }
  iVar1 = M007_GETSTATE(0x1010,0xe);
  if (((iVar1 == 0xc) && (DAT_1008_0116 != 0)) &&
     (DAT_1008_0116 = DAT_1008_0116 + -1, DAT_1008_0116 == 0)) {
    DOCOMMANDBEAM_ON();
  }
  if (DAT_1008_007c == 1) {
    FUN_1000_64c4();
  }
  if (DAT_1008_007e == 1) {
    FUN_1000_6590();
  }
  return;
}


// ---- FUN_1000_66c6 @ 1000:66c6

void __cdecl16far FUN_1000_66c6(void)

{
  double dVar1;
  int iVar2;
  float *pfVar3;
  double *pdVar4;
  undefined2 *puVar5;
  undefined2 unaff_SS;
  float *pfVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  float local_32;
  float local_2e;
  float local_2a;
  float local_26;
  undefined1 local_22 [4];
  undefined1 local_1e [4];
  undefined1 local_1a [4];
  undefined1 local_16 [4];
  undefined1 local_12 [4];
  undefined1 local_e [4];
  undefined1 local_a [4];
  undefined1 local_6 [4];
  
  uVar10 = 0x1008;
  uVar9 = 0x118;
  uVar8 = 0x66d8;
  iVar2 = M007_GETSTATE();
  if (iVar2 != 0) {
    uVar8 = 0x1010;
    iVar2 = M007_GETSTATE(0x1010,0x118,uVar9,uVar10);
    if (iVar2 != 4) {
      uVar8 = 0x118;
      iVar2 = M007_GETSTATE(0x1010,0x118);
      if (iVar2 != 7) {
        return;
      }
    }
  }
  uVar7 = 0x154;
  uVar9 = 0x6709;
  M007_PUTVALUE(0x1010,DAT_1008_0428,DAT_1008_042a);
  uVar10 = 0x6710;
  iVar2 = M007_GETSTATE(0x1010,0xe,uVar7,uVar8);
  if (iVar2 == 2) {
LAB_1000_6729:
    uVar10 = 0x1d;
    pfVar3 = (float *)M007_GETVALUE(0x1010,local_6);
    local_26 = *pfVar3;
    uVar9 = 0x1b;
    pfVar6 = (float *)M007_GETVALUE(0x1010,local_a);
    uVar8 = (undefined2)((ulong)pfVar6 >> 0x10);
    dVar1 = (double)(local_26 - *(float *)pfVar6);
    pdVar4 = (double *)
             FUN_1000_035a(SUB82(dVar1,0),(int)((qword)dVar1 >> 0x10),(int)((qword)dVar1 >> 0x20),
                           (int)((qword)dVar1 >> 0x30),uVar9,uVar10);
    DAT_1008_00ee = (float)*pdVar4;
    uVar10 = 0x1c;
    pfVar3 = (float *)M007_GETVALUE(0x1000,local_e);
    local_2a = *pfVar3;
    uVar9 = 0x1a;
    pfVar6 = (float *)M007_GETVALUE(0x1010,local_12);
    uVar8 = (undefined2)((ulong)pfVar6 >> 0x10);
    dVar1 = (double)(local_2a - *(float *)pfVar6);
    pdVar4 = (double *)
             FUN_1000_035a(SUB82(dVar1,0),(int)((qword)dVar1 >> 0x10),(int)((qword)dVar1 >> 0x20),
                           (int)((qword)dVar1 >> 0x30),uVar9,uVar10);
    DAT_1008_00ea = (float)*pdVar4;
    uVar8 = 0x1010;
    iVar2 = M007_GETSTATE(0x1000,0xb);
    if (iVar2 == 4) {
      uVar10 = 0x12f;
      pfVar3 = (float *)M007_GETVALUE(0x1010,local_16);
      local_2e = *pfVar3;
      uVar9 = 0x14f;
      pfVar6 = (float *)M007_GETVALUE(0x1010,local_1a);
      uVar8 = (undefined2)((ulong)pfVar6 >> 0x10);
      dVar1 = (double)(local_2e - *(float *)pfVar6);
      pdVar4 = (double *)
               FUN_1000_035a(SUB82(dVar1,0),(int)((qword)dVar1 >> 0x10),(int)((qword)dVar1 >> 0x20),
                             (int)((qword)dVar1 >> 0x30),uVar9,uVar10);
      DAT_1008_00f6 = (float)*pdVar4;
      uVar7 = 0x131;
      pfVar3 = (float *)M007_GETVALUE(0x1000,local_1e);
      local_32 = *pfVar3;
      uVar10 = 0x151;
      pfVar6 = (float *)M007_GETVALUE(0x1010,local_22);
      uVar9 = (undefined2)((ulong)pfVar6 >> 0x10);
      dVar1 = (double)(local_32 - *(float *)pfVar6);
      uVar8 = 0x1000;
      pdVar4 = (double *)
               FUN_1000_035a(SUB82(dVar1,0),(int)((qword)dVar1 >> 0x10),(int)((qword)dVar1 >> 0x20),
                             (int)((qword)dVar1 >> 0x30),uVar10,uVar7);
      DAT_1008_00f2 = (float)*pdVar4;
    }
    uVar9 = 4;
  }
  else {
    if (iVar2 == 3) {
      uVar8 = 0x1d;
      puVar5 = (undefined2 *)M007_GETVALUE(0x1010,&local_32);
      DAT_1008_00ee = (float)CONCAT22(puVar5[1],*puVar5);
      uVar10 = 0xb;
      uVar9 = 0x1010;
      iVar2 = M007_GETSTATE(0x1010,0xb,uVar8);
      if (iVar2 == 4) {
        uVar9 = 0x12f;
        puVar5 = (undefined2 *)M007_GETVALUE(0x1010,&local_2e);
        DAT_1008_00f6 = (float)CONCAT22(puVar5[1],*puVar5);
      }
    }
    else {
      if (iVar2 == 6) goto LAB_1000_6729;
      if (iVar2 != 8) {
        FUN_1000_6f08();
        return;
      }
    }
    uVar8 = 0x1c;
    puVar5 = (undefined2 *)M007_GETVALUE(0x1010,&local_32);
    DAT_1008_00ea = (float)CONCAT22(puVar5[1],*puVar5);
    iVar2 = M007_GETSTATE(0x1010,0xb,uVar8,uVar9,uVar10);
    if (iVar2 == 4) {
      puVar5 = (undefined2 *)M007_GETVALUE(0x1010,&local_2e);
      DAT_1008_00f2 = (float)CONCAT22(puVar5[1],*puVar5);
    }
    uVar8 = 0x1010;
    uVar9 = 7;
  }
  M007_PUTSTATE(uVar8,uVar9);
  return;
}


// ---- FUN_1000_6910 @ 1000:6910

void __cdecl16far FUN_1000_6910(void)

{
  float fVar1;
  double dVar2;
  int iVar3;
  float *pfVar4;
  double *pdVar5;
  undefined2 unaff_SS;
  float *pfVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  float local_2a;
  float local_26;
  float local_22;
  undefined1 local_1e [4];
  float local_1a;
  float local_16;
  undefined1 local_12 [4];
  undefined1 local_e [4];
  undefined1 local_a [4];
  undefined4 local_6;
  
  uVar10 = 0x1008;
  uVar9 = 0x118;
  iVar3 = M007_GETSTATE();
  if ((iVar3 != 4) && (iVar3 = M007_GETSTATE(0x1010,0x118,uVar9,uVar10), iVar3 != 7)) {
    return;
  }
  local_6 = (float)CONCAT22(DAT_1008_0452,DAT_1008_0450);
  uVar9 = 0x1010;
  iVar3 = M007_GETSTATE(0x1010,0xe);
  if (iVar3 == 2) {
LAB_1000_694e:
    uVar9 = 0x1010;
    iVar3 = M007_GETSTATE(0x1010,0xb);
    if (iVar3 == 4) {
      if ((DAT_1008_00ee <= 0.0) || (DAT_1008_00f6 <= 0.0)) {
        if (0.0 < DAT_1008_00ea) {
          uVar8 = 0x1c;
          pfVar4 = (float *)M007_GETVALUE(0x1010,&local_2a);
          local_22 = *pfVar4;
          uVar7 = 0x1a;
          pfVar6 = (float *)M007_GETVALUE(0x1010,&local_26);
          uVar10 = (undefined2)((ulong)pfVar6 >> 0x10);
          dVar2 = (double)(local_22 - *(float *)pfVar6);
          uVar9 = 0x1000;
          pdVar5 = (double *)
                   FUN_1000_035a(SUB82(dVar2,0),(int)((qword)dVar2 >> 0x10),
                                 (int)((qword)dVar2 >> 0x20),(int)((qword)dVar2 >> 0x30),uVar7,uVar8
                                );
          local_6 = ((float)*pdVar5 / DAT_1008_00ea) * DAT_1008_045c + local_6;
        }
        if (DAT_1008_00f2 <= 0.0) goto LAB_1000_6ef7;
        uVar8 = 0x131;
        pfVar4 = (float *)M007_GETVALUE(uVar9,&local_2a);
        local_22 = *pfVar4;
        uVar7 = 0x151;
        pfVar6 = (float *)M007_GETVALUE(0x1010,&local_26);
        uVar10 = (undefined2)((ulong)pfVar6 >> 0x10);
        dVar2 = (double)(local_22 - *(float *)pfVar6);
        uVar9 = 0x1000;
        pdVar5 = (double *)
                 FUN_1000_035a(SUB82(dVar2,0),(int)((qword)dVar2 >> 0x10),
                               (int)((qword)dVar2 >> 0x20),(int)((qword)dVar2 >> 0x30),uVar7,uVar8);
        fVar1 = (float)*pdVar5;
code_r0x10006bcb:
        fVar1 = (fVar1 / DAT_1008_00f2) * DAT_1008_0460;
      }
      else {
        uVar7 = 0x1d;
        pfVar4 = (float *)M007_GETVALUE(0x1010,local_a);
        local_22 = *pfVar4;
        uVar10 = 0x1b;
        pfVar6 = (float *)M007_GETVALUE(0x1010,local_e);
        uVar9 = (undefined2)((ulong)pfVar6 >> 0x10);
        dVar2 = (double)(local_22 - *(float *)pfVar6);
        pdVar5 = (double *)
                 FUN_1000_035a(SUB82(dVar2,0),(int)((qword)dVar2 >> 0x10),
                               (int)((qword)dVar2 >> 0x20),(int)((qword)dVar2 >> 0x30),uVar10,uVar7)
        ;
        local_6 = ((float)*pdVar5 / DAT_1008_00ee) * DAT_1008_0454 + local_6;
        uVar7 = 0x12f;
        pfVar4 = (float *)M007_GETVALUE(0x1000,local_12);
        local_26 = *pfVar4;
        uVar10 = 0x14f;
        pfVar6 = (float *)M007_GETVALUE(0x1010,&local_16);
        uVar9 = (undefined2)((ulong)pfVar6 >> 0x10);
        dVar2 = (double)(local_26 - *(float *)pfVar6);
        pdVar5 = (double *)
                 FUN_1000_035a(SUB82(dVar2,0),(int)((qword)dVar2 >> 0x10),
                               (int)((qword)dVar2 >> 0x20),(int)((qword)dVar2 >> 0x30),uVar10,uVar7)
        ;
        local_6 = ((float)*pdVar5 / DAT_1008_00f6) * DAT_1008_0454 + local_6;
        if (0.0 < DAT_1008_00ea) {
          uVar7 = 0x1c;
          pfVar4 = (float *)M007_GETVALUE(0x1000,&local_1a);
          local_2a = *pfVar4;
          uVar10 = 0x1a;
          pfVar6 = (float *)M007_GETVALUE(0x1010,local_1e);
          uVar9 = (undefined2)((ulong)pfVar6 >> 0x10);
          dVar2 = (double)(local_2a - *(float *)pfVar6);
          pdVar5 = (double *)
                   FUN_1000_035a(SUB82(dVar2,0),(int)((qword)dVar2 >> 0x10),
                                 (int)((qword)dVar2 >> 0x20),(int)((qword)dVar2 >> 0x30),uVar10,
                                 uVar7);
          local_6 = ((float)*pdVar5 / DAT_1008_00ea) * DAT_1008_0458 + local_6;
        }
        uVar9 = 0x1000;
        if (DAT_1008_00f2 <= 0.0) goto LAB_1000_6ef7;
        uVar8 = 0x131;
        pfVar4 = (float *)M007_GETVALUE(0x1000,&local_2a);
        local_22 = *pfVar4;
        uVar7 = 0x151;
        pfVar6 = (float *)M007_GETVALUE(0x1010,&local_26);
        uVar10 = (undefined2)((ulong)pfVar6 >> 0x10);
        dVar2 = (double)(local_22 - *(float *)pfVar6);
        uVar9 = 0x1000;
        pdVar5 = (double *)
                 FUN_1000_035a(SUB82(dVar2,0),(int)((qword)dVar2 >> 0x10),
                               (int)((qword)dVar2 >> 0x20),(int)((qword)dVar2 >> 0x30),uVar7,uVar8);
        fVar1 = (float)*pdVar5;
code_r0x10006afb:
        fVar1 = (fVar1 / DAT_1008_00f2) * DAT_1008_0458;
      }
    }
    else {
      if (DAT_1008_00ee <= 0.0) {
        if (DAT_1008_00ea <= 0.0) goto LAB_1000_6ef7;
        uVar8 = 0x1c;
        pfVar4 = (float *)M007_GETVALUE(0x1010,&local_2a);
        local_22 = *pfVar4;
        uVar7 = 0x1a;
        pfVar6 = (float *)M007_GETVALUE(0x1010,&local_26);
        uVar10 = (undefined2)((ulong)pfVar6 >> 0x10);
        dVar2 = (double)(local_22 - *(float *)pfVar6);
        uVar9 = 0x1000;
        pdVar5 = (double *)
                 FUN_1000_035a(SUB82(dVar2,0),(int)((qword)dVar2 >> 0x10),
                               (int)((qword)dVar2 >> 0x20),(int)((qword)dVar2 >> 0x30),uVar7,uVar8);
        fVar1 = (float)*pdVar5;
        goto code_r0x10006d09;
      }
      uVar8 = 0x1d;
      pfVar4 = (float *)M007_GETVALUE(0x1010,&local_2a);
      local_1a = *pfVar4;
      uVar7 = 0x1b;
      pfVar6 = (float *)M007_GETVALUE(0x1010,&local_26);
      uVar10 = (undefined2)((ulong)pfVar6 >> 0x10);
      dVar2 = (double)(local_1a - *(float *)pfVar6);
      uVar9 = 0x1000;
      pdVar5 = (double *)
               FUN_1000_035a(SUB82(dVar2,0),(int)((qword)dVar2 >> 0x10),(int)((qword)dVar2 >> 0x20),
                             (int)((qword)dVar2 >> 0x30),uVar7,uVar8);
      local_6 = ((float)*pdVar5 / DAT_1008_00ee) * DAT_1008_0464 + local_6;
      if (DAT_1008_00ea <= 0.0) goto LAB_1000_6ef7;
      uVar8 = 0x1c;
      pfVar4 = (float *)M007_GETVALUE(0x1000,&local_22);
      local_16 = *pfVar4;
      uVar7 = 0x1a;
      pfVar6 = (float *)M007_GETVALUE(0x1010,local_1e);
      uVar10 = (undefined2)((ulong)pfVar6 >> 0x10);
      dVar2 = (double)(local_16 - *(float *)pfVar6);
      uVar9 = 0x1000;
      pdVar5 = (double *)
               FUN_1000_035a(SUB82(dVar2,0),(int)((qword)dVar2 >> 0x10),(int)((qword)dVar2 >> 0x20),
                             (int)((qword)dVar2 >> 0x30),uVar7,uVar8);
      fVar1 = ((float)*pdVar5 / DAT_1008_00ea) * DAT_1008_0468;
    }
  }
  else if (iVar3 == 3) {
    iVar3 = M007_GETSTATE(0x1010,0xb);
    if (iVar3 == 4) {
      if (0.0 < DAT_1008_00ee) {
        pfVar4 = (float *)M007_GETVALUE(0x1010,&local_2a);
        local_6 = (*pfVar4 / DAT_1008_00ee) * DAT_1008_0454 + local_6;
      }
      if (0.0 < DAT_1008_00f6) {
        pfVar4 = (float *)M007_GETVALUE(0x1010,&local_2a);
        local_6 = (*pfVar4 / DAT_1008_00f6) * DAT_1008_0454 + local_6;
      }
      if (0.0 < DAT_1008_00ea) {
        pfVar4 = (float *)M007_GETVALUE(0x1010,&local_2a);
        local_6 = (*pfVar4 / DAT_1008_00ea) * DAT_1008_0458 + local_6;
      }
      uVar9 = 0x1010;
      if (DAT_1008_00f2 <= 0.0) goto LAB_1000_6ef7;
      uVar9 = 0x1010;
      pfVar4 = (float *)M007_GETVALUE(0x1010,&local_2a);
      fVar1 = *pfVar4;
      goto code_r0x10006afb;
    }
    if (0.0 < DAT_1008_00ee) {
      pfVar4 = (float *)M007_GETVALUE(0x1010,&local_2a);
      local_6 = (*pfVar4 / DAT_1008_00ee) * DAT_1008_0470 + local_6;
    }
    uVar9 = 0x1010;
    if (DAT_1008_00ea <= 0.0) goto LAB_1000_6ef7;
    uVar9 = 0x1010;
    pfVar4 = (float *)M007_GETVALUE(0x1010,&local_2a);
    fVar1 = (*pfVar4 / DAT_1008_00ea) * DAT_1008_0474;
  }
  else {
    if (iVar3 == 6) goto LAB_1000_694e;
    if (iVar3 != 8) goto LAB_1000_6ef7;
    uVar9 = 0x1010;
    iVar3 = M007_GETSTATE(0x1010,0xb);
    if (iVar3 == 4) {
      if (0.0 < DAT_1008_00ea) {
        pfVar4 = (float *)M007_GETVALUE(0x1010,&local_2a);
        local_6 = (*pfVar4 / DAT_1008_00ea) * DAT_1008_045c + local_6;
      }
      uVar9 = 0x1010;
      if (DAT_1008_00f2 <= 0.0) goto LAB_1000_6ef7;
      uVar9 = 0x1010;
      pfVar4 = (float *)M007_GETVALUE(0x1010,&local_2a);
      fVar1 = *pfVar4;
      goto code_r0x10006bcb;
    }
    if (DAT_1008_00ea <= 0.0) goto LAB_1000_6ef7;
    uVar9 = 0x1010;
    pfVar4 = (float *)M007_GETVALUE(0x1010,&local_2a);
    fVar1 = *pfVar4;
code_r0x10006d09:
    fVar1 = (fVar1 / DAT_1008_00ea) * DAT_1008_046c;
  }
  local_6 = fVar1 + local_6;
LAB_1000_6ef7:
  M007_PUTVALUE(uVar9,(undefined2)local_6,local_6._2_2_);
  return;
}


// ---- FUN_1000_6f08 @ 1000:6f08

void __cdecl16far FUN_1000_6f08(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x118;
  iVar1 = M007_GETSTATE();
  if ((iVar1 != 4) && (iVar1 = M007_GETSTATE(0x1010,0x118,uVar2,uVar3), iVar1 != 7)) {
    return;
  }
  M007_PUTVALUE(0x1010,DAT_1008_0428,DAT_1008_042a);
  M007_PUTSTATE(0x1010,0);
  return;
}


// ---- FUN_1000_6f48 @ 1000:6f48

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_1000_6f48(float param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0;
  if (param_2 < param_4) {
    fVar1 = param_4;
    if (param_4 < _DAT_1008_0478) goto LAB_1000_7146;
    if (_DAT_1008_0478 <= param_2) {
      FUN_1000_5da0(1,1,DAT_1008_0480,DAT_1008_0482,0,DAT_1008_0484,DAT_1008_0486,DAT_1008_047c,
                    DAT_1008_047e,param_4._0_2_,param_4._2_2_,0x1008);
    }
    else {
      FUN_1000_5da0(1,0,DAT_1008_0480,DAT_1008_0482,0,DAT_1008_0478,DAT_1008_047a,DAT_1008_047c,
                    DAT_1008_047e,DAT_1008_0478,DAT_1008_047a,0x1008);
      FUN_1000_5da0(2,1,DAT_1008_0480,DAT_1008_0482,0,DAT_1008_0484,DAT_1008_0486,DAT_1008_047c,
                    DAT_1008_047e,param_4);
    }
    FUN_1000_5ce4();
    uVar3 = 1;
  }
  else {
    if (_DAT_1008_0478 <= param_2) {
      if (_DAT_1008_0478 <= param_4) {
        fVar1 = (float)CONCAT22(DAT_1008_048a,DAT_1008_0488);
        goto LAB_1000_7146;
      }
      FUN_1000_5da0(1,0,DAT_1008_0480,DAT_1008_0482,0,DAT_1008_0488,DAT_1008_048a,DAT_1008_047c,
                    DAT_1008_047e,DAT_1008_0478,DAT_1008_047a,0x1008,param_2,param_4,0);
      FUN_1000_5da0(2,0,DAT_1008_0480,DAT_1008_0482,0,param_4 - param_2,DAT_1008_047c,DAT_1008_047e,
                    param_4);
    }
    else {
      fVar1 = param_4 - param_2;
LAB_1000_7146:
      FUN_1000_5da0(1,0,DAT_1008_0480,DAT_1008_0482,0,fVar1,DAT_1008_047c,DAT_1008_047e,param_4,
                    0x1008);
    }
    FUN_1000_5ce4();
  }
  if (param_1 < param_3) {
    if (DAT_1008_048c < param_3) {
      if (param_1 < DAT_1008_048c) {
        FUN_1000_5d50(1,0,DAT_1008_0480,DAT_1008_0482,0,DAT_1008_0490,DAT_1008_0492,DAT_1008_047c,
                      DAT_1008_047e,DAT_1008_048c._0_2_,(int)((ulong)DAT_1008_048c >> 0x10));
        FUN_1000_5d50(2,0,DAT_1008_0480,DAT_1008_0482,uVar3,DAT_1008_0494,DAT_1008_0496,
                      DAT_1008_047c,DAT_1008_047e,param_3);
        goto LAB_1000_7274;
      }
      uVar2 = CONCAT22(DAT_1008_0496,DAT_1008_0494);
    }
    else {
      uVar2 = CONCAT22(DAT_1008_0492,DAT_1008_0490);
    }
  }
  else {
    uVar2 = CONCAT22(DAT_1008_049a,DAT_1008_0498);
  }
  FUN_1000_5d50(1,0,DAT_1008_0480,DAT_1008_0482,uVar3,uVar2,DAT_1008_047c,DAT_1008_047e,param_3);
LAB_1000_7274:
  FUN_1000_5cf6();
  FUN_1000_5d34();
  return;
}


// ---- FUN_1000_7282 @ 1000:7282

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_1000_7282(float param_1,float param_2)

{
  float fVar1;
  undefined2 uVar2;
  
  uVar2 = 0x1008;
  if (param_1 < param_2) {
    fVar1 = param_2;
    if (_DAT_1008_0478 <= param_2) {
      if (param_1 < _DAT_1008_0478) {
        FUN_1000_5da0(1,0,DAT_1008_0480,DAT_1008_0482,0,DAT_1008_0478,DAT_1008_047a,DAT_1008_047c,
                      DAT_1008_047e,DAT_1008_0478,DAT_1008_047a,0x1008);
        param_1 = (float)CONCAT22(DAT_1008_0486,DAT_1008_0484);
        goto LAB_1000_7322;
      }
      fVar1 = (float)CONCAT22(DAT_1008_0486,DAT_1008_0484);
    }
  }
  else if (_DAT_1008_0478 <= param_1) {
    if (param_2 < _DAT_1008_0478) {
      FUN_1000_5da0(1,0,DAT_1008_0480,DAT_1008_0482,0,DAT_1008_0488,DAT_1008_048a,DAT_1008_047c,
                    DAT_1008_047e,DAT_1008_0478,DAT_1008_047a,0x1008,param_1,param_2);
      param_1 = param_2 - param_1;
LAB_1000_7322:
      FUN_1000_5da0(2,0,DAT_1008_0480,DAT_1008_0482,0,param_1,DAT_1008_047c,DAT_1008_047e,param_2,
                    uVar2);
      goto LAB_1000_745a;
    }
    fVar1 = (float)CONCAT22(DAT_1008_048a,DAT_1008_0488);
  }
  else {
    fVar1 = param_2 - param_1;
  }
  FUN_1000_5da0(1,0,DAT_1008_0480,DAT_1008_0482,0,fVar1,DAT_1008_047c,DAT_1008_047e,param_2,0x1008);
LAB_1000_745a:
  FUN_1000_5ce4();
  FUN_1000_5d1e();
  return;
}


// ---- FUN_1000_7468 @ 1000:7468

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_1000_7468(float param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0;
  if (param_2 < param_4) {
    fVar1 = param_4;
    if (param_4 < _DAT_1008_0478) goto LAB_1000_7666;
    if (_DAT_1008_0478 <= param_2) {
      FUN_1000_5da0(1,1,DAT_1008_0480,DAT_1008_0482,0,DAT_1008_0484,DAT_1008_0486,DAT_1008_047c,
                    DAT_1008_047e,param_4._0_2_,param_4._2_2_,0x1008);
    }
    else {
      FUN_1000_5da0(1,0,DAT_1008_0480,DAT_1008_0482,0,DAT_1008_0478,DAT_1008_047a,DAT_1008_047c,
                    DAT_1008_047e,DAT_1008_0478,DAT_1008_047a,0x1008);
      FUN_1000_5da0(2,1,DAT_1008_0480,DAT_1008_0482,0,DAT_1008_0484,DAT_1008_0486,DAT_1008_047c,
                    DAT_1008_047e,param_4);
    }
    FUN_1000_5ce4();
    uVar3 = 1;
  }
  else {
    if (_DAT_1008_0478 <= param_2) {
      if (_DAT_1008_0478 <= param_4) {
        fVar1 = (float)CONCAT22(DAT_1008_048a,DAT_1008_0488);
        goto LAB_1000_7666;
      }
      FUN_1000_5da0(1,0,DAT_1008_0480,DAT_1008_0482,0,DAT_1008_0488,DAT_1008_048a,DAT_1008_047c,
                    DAT_1008_047e,DAT_1008_0478,DAT_1008_047a,0x1008,param_2,param_4,0);
      FUN_1000_5da0(2,0,DAT_1008_0480,DAT_1008_0482,0,param_4 - param_2,DAT_1008_047c,DAT_1008_047e,
                    param_4);
    }
    else {
      fVar1 = param_4 - param_2;
LAB_1000_7666:
      FUN_1000_5da0(1,0,DAT_1008_0480,DAT_1008_0482,0,fVar1,DAT_1008_047c,DAT_1008_047e,param_4,
                    0x1008);
    }
    FUN_1000_5ce4();
  }
  if (param_1 < param_3) {
    if (DAT_1008_048c < param_3) {
      if (param_1 < DAT_1008_048c) {
        FUN_1000_5d50(1,0,DAT_1008_0480,DAT_1008_0482,0,DAT_1008_049c,DAT_1008_049e,DAT_1008_047c,
                      DAT_1008_047e,DAT_1008_048c._0_2_,(int)((ulong)DAT_1008_048c >> 0x10));
        FUN_1000_5d50(2,0,DAT_1008_0480,DAT_1008_0482,uVar3,DAT_1008_04a0,DAT_1008_04a2,
                      DAT_1008_047c,DAT_1008_047e,param_3);
        goto LAB_1000_7794;
      }
      uVar2 = CONCAT22(DAT_1008_04a2,DAT_1008_04a0);
    }
    else {
      uVar2 = CONCAT22(DAT_1008_049e,DAT_1008_049c);
    }
  }
  else {
    uVar2 = CONCAT22(DAT_1008_049a,DAT_1008_0498);
  }
  FUN_1000_5d50(1,0,DAT_1008_0480,DAT_1008_0482,uVar3,uVar2,DAT_1008_047c,DAT_1008_047e,param_3);
LAB_1000_7794:
  FUN_1000_5cf6();
  FUN_1000_5d34();
  return;
}


// ---- FUN_1000_77a2 @ 1000:77a2

void __cdecl16far FUN_1000_77a2(void)

{
  float fVar1;
  float *pfVar2;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined4 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined1 *puVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined1 local_1a [4];
  undefined1 local_16 [4];
  float local_12;
  float local_e;
  undefined4 local_a;
  float local_6;
  
  uVar8 = 0x1008;
  local_a = (float)CONCAT22(DAT_1008_047a,DAT_1008_0478);
  uVar7 = 0x19;
  puVar6 = local_16;
  pfVar2 = (float *)M007_GETVALUE(unaff_CS,puVar6);
  local_6 = DAT_1008_04a4;
  local_12 = DAT_1008_04a4;
  if (*pfVar2 <= DAT_1008_04a4) {
    puVar6 = (undefined1 *)((int)(undefined4 *)&DAT_1008_0016 + 3);
    pfVar2 = (float *)M007_GETVALUE(0x1010,local_1a);
    local_12 = *pfVar2;
  }
  uVar4 = SUB42(local_12,0);
  uVar5 = (undefined2)((ulong)local_12 >> 0x10);
  FUN_1000_5d50(1,0,DAT_1008_0480,DAT_1008_0482,1,DAT_1008_04a8,DAT_1008_04aa,DAT_1008_047c,
                DAT_1008_047e,uVar4,uVar5,puVar6,uVar7,uVar8);
  FUN_1000_5cf6(1);
  uVar7 = 0x17;
  M007_PUTVALUE(0x1000,uVar4,uVar5);
  uVar3 = M007_GETSTATE(0x1010,0xc,uVar7);
  uVar7 = (undefined2)((ulong)uVar3 >> 0x10);
  pfVar2 = (float *)FUN_1000_56fc((int)uVar3);
  fVar1 = local_a;
  if (*pfVar2 <= local_a) {
    uVar3 = M007_GETSTATE(0x1000,0xc);
    uVar7 = (undefined2)((ulong)uVar3 >> 0x10);
    pfVar2 = (float *)FUN_1000_56fc((int)uVar3);
    fVar1 = *pfVar2;
  }
  local_e = fVar1;
  FUN_1000_5da0(1,0,DAT_1008_0480,DAT_1008_0482,0,DAT_1008_0484,DAT_1008_0486,DAT_1008_047c,
                DAT_1008_047e,DAT_1008_0484,DAT_1008_0486);
  uVar7 = (undefined2)((ulong)fVar1 >> 0x10);
  FUN_1000_5da0(2,1,DAT_1008_0480,DAT_1008_0482,0,DAT_1008_04ac,DAT_1008_04ae,DAT_1008_047c,
                DAT_1008_047e,SUB42(fVar1,0),uVar7);
  FUN_1000_5ce4(2);
  uVar8 = 0x18;
  M007_PUTVALUE(0x1000,SUB42(fVar1,0),uVar7);
  FUN_1000_5d34(uVar8);
  return;
}


// ---- FUN_1000_7926 @ 1000:7926

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_1000_7926(float param_1,float param_2)

{
  float fVar1;
  undefined2 uVar2;
  
  uVar2 = 0x1008;
  if (param_1 < param_2) {
    fVar1 = param_2;
    if (_DAT_1008_0478 <= param_2) {
      if (param_1 < _DAT_1008_0478) {
        FUN_1000_5da0(1,0,DAT_1008_0480,DAT_1008_0482,0,DAT_1008_0478,DAT_1008_047a,DAT_1008_047c,
                      DAT_1008_047e,DAT_1008_0478,DAT_1008_047a,0x1008);
        param_1 = (float)CONCAT22(DAT_1008_0486,DAT_1008_0484);
        goto LAB_1000_79c6;
      }
      fVar1 = (float)CONCAT22(DAT_1008_0486,DAT_1008_0484);
    }
  }
  else if (_DAT_1008_0478 <= param_1) {
    if (param_2 < _DAT_1008_0478) {
      FUN_1000_5da0(1,0,DAT_1008_0480,DAT_1008_0482,0,DAT_1008_0488,DAT_1008_048a,DAT_1008_047c,
                    DAT_1008_047e,DAT_1008_0478,DAT_1008_047a,0x1008,param_1,param_2);
      param_1 = param_2 - param_1;
LAB_1000_79c6:
      FUN_1000_5da0(2,0,DAT_1008_0480,DAT_1008_0482,0,param_1,DAT_1008_047c,DAT_1008_047e,param_2,
                    uVar2);
      goto LAB_1000_7afe;
    }
    fVar1 = (float)CONCAT22(DAT_1008_048a,DAT_1008_0488);
  }
  else {
    fVar1 = param_2 - param_1;
  }
  FUN_1000_5da0(1,0,DAT_1008_0480,DAT_1008_0482,0,fVar1,DAT_1008_047c,DAT_1008_047e,param_2,0x1008);
LAB_1000_7afe:
  FUN_1000_5ce4();
  FUN_1000_5d1e();
  return;
}


// ---- FUN_1000_7b0c @ 1000:7b0c

void __cdecl16far FUN_1000_7b0c(float param_1,float param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  
  uVar1 = DAT_1008_0498;
  uVar2 = DAT_1008_049a;
  if (((param_2 <= param_1) ||
      (uVar1 = DAT_1008_049c, uVar2 = DAT_1008_049e, param_2 <= DAT_1008_048c)) ||
     (uVar1 = DAT_1008_04a0, uVar2 = DAT_1008_04a2, DAT_1008_048c <= param_1)) {
    FUN_1000_5d50(1,0,DAT_1008_0480,DAT_1008_0482,0,uVar1,uVar2,DAT_1008_047c,DAT_1008_047e,param_2,
                  0x1008);
  }
  else {
    FUN_1000_5d50(1,0,DAT_1008_0480,DAT_1008_0482,0,DAT_1008_049c,DAT_1008_049e,DAT_1008_047c,
                  DAT_1008_047e,DAT_1008_048c._0_2_,(int)((ulong)DAT_1008_048c >> 0x10),0x1008);
    FUN_1000_5d50(2,0,DAT_1008_0480,DAT_1008_0482,0,DAT_1008_04a0,DAT_1008_04a2,DAT_1008_047c,
                  DAT_1008_047e,param_2);
  }
  FUN_1000_5cf6();
  FUN_1000_5d08();
  return;
}


// ---- FUN_1000_7c32 @ 1000:7c32

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_1000_7c32(float param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0;
  if (param_2 < param_4) {
    fVar1 = param_4;
    if (_DAT_1008_0478 <= param_4) {
      if (_DAT_1008_0478 <= param_2) {
        FUN_1000_5da0(1,1,DAT_1008_0480,DAT_1008_0482,0,DAT_1008_0484,DAT_1008_0486,DAT_1008_047c,
                      DAT_1008_047e,param_4._0_2_,param_4._2_2_,0x1008);
      }
      else {
        FUN_1000_5da0(1,0,DAT_1008_0480,DAT_1008_0482,0,DAT_1008_0478,DAT_1008_047a,DAT_1008_047c,
                      DAT_1008_047e,DAT_1008_0478,DAT_1008_047a,0x1008);
        FUN_1000_5da0(2,1,DAT_1008_0480,DAT_1008_0482,0,DAT_1008_0484,DAT_1008_0486,DAT_1008_047c,
                      DAT_1008_047e,param_4);
      }
      FUN_1000_5ce4();
      uVar3 = 1;
      goto code_r0x10007e4f;
    }
LAB_1000_7e30:
    FUN_1000_5da0(1,0,DAT_1008_0480,DAT_1008_0482,0,fVar1,DAT_1008_047c,DAT_1008_047e,param_4,0x1008
                 );
  }
  else {
    if (param_2 < _DAT_1008_0478) {
      fVar1 = param_4 - param_2;
      goto LAB_1000_7e30;
    }
    if (_DAT_1008_0478 <= param_4) {
      fVar1 = (float)CONCAT22(DAT_1008_048a,DAT_1008_0488);
      goto LAB_1000_7e30;
    }
    FUN_1000_5da0(1,0,DAT_1008_0480,DAT_1008_0482,0,DAT_1008_0488,DAT_1008_048a,DAT_1008_047c,
                  DAT_1008_047e,DAT_1008_0478,DAT_1008_047a,0x1008,param_2,param_4,0);
    FUN_1000_5da0(2,0,DAT_1008_0480,DAT_1008_0482,0,param_4 - param_2,DAT_1008_047c,DAT_1008_047e,
                  param_4);
  }
  FUN_1000_5ce4();
code_r0x10007e4f:
  if (param_3 <= param_1) {
    uVar2 = CONCAT22(DAT_1008_049a,DAT_1008_0498);
  }
  else {
    uVar2 = CONCAT22(DAT_1008_049e,DAT_1008_049c);
  }
  FUN_1000_5d50(1,0,DAT_1008_0480,DAT_1008_0482,uVar3,uVar2,DAT_1008_047c,DAT_1008_047e,param_3);
  FUN_1000_5cf6();
  FUN_1000_5d34();
  return;
}


// ---- FUN_1000_7ec2 @ 1000:7ec2

void __cdecl16far FUN_1000_7ec2(void)

{
  float fVar1;
  float *pfVar2;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined4 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined1 *puVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined1 local_1a [4];
  undefined1 local_16 [4];
  float local_12;
  float local_e;
  undefined4 local_a;
  float local_6;
  
  uVar8 = 0x1008;
  local_a = (float)CONCAT22(DAT_1008_047a,DAT_1008_0478);
  uVar7 = 0x19;
  puVar6 = local_16;
  pfVar2 = (float *)M007_GETVALUE(unaff_CS,puVar6);
  local_6 = DAT_1008_048c;
  local_12 = DAT_1008_048c;
  if (*pfVar2 <= DAT_1008_048c) {
    puVar6 = (undefined1 *)((int)(undefined4 *)&DAT_1008_0016 + 3);
    pfVar2 = (float *)M007_GETVALUE(0x1010,local_1a);
    local_12 = *pfVar2;
  }
  uVar4 = SUB42(local_12,0);
  uVar5 = (undefined2)((ulong)local_12 >> 0x10);
  FUN_1000_5d50(1,0,DAT_1008_0480,DAT_1008_0482,1,DAT_1008_04a8,DAT_1008_04aa,DAT_1008_047c,
                DAT_1008_047e,uVar4,uVar5,puVar6,uVar7,uVar8);
  FUN_1000_5cf6(1);
  uVar7 = 0x17;
  M007_PUTVALUE(0x1000,uVar4,uVar5);
  uVar3 = M007_GETSTATE(0x1010,0xc,uVar7);
  uVar7 = (undefined2)((ulong)uVar3 >> 0x10);
  pfVar2 = (float *)FUN_1000_56fc((int)uVar3);
  fVar1 = local_a;
  if (*pfVar2 <= local_a) {
    uVar3 = M007_GETSTATE(0x1000,0xc);
    uVar7 = (undefined2)((ulong)uVar3 >> 0x10);
    pfVar2 = (float *)FUN_1000_56fc((int)uVar3);
    fVar1 = *pfVar2;
  }
  local_e = fVar1;
  FUN_1000_5da0(1,0,DAT_1008_0480,DAT_1008_0482,0,DAT_1008_0484,DAT_1008_0486,DAT_1008_047c,
                DAT_1008_047e,DAT_1008_0484,DAT_1008_0486);
  uVar7 = (undefined2)((ulong)fVar1 >> 0x10);
  FUN_1000_5da0(2,1,DAT_1008_0480,DAT_1008_0482,0,DAT_1008_04ac,DAT_1008_04ae,DAT_1008_047c,
                DAT_1008_047e,SUB42(fVar1,0),uVar7);
  FUN_1000_5ce4(2);
  uVar8 = 0x18;
  M007_PUTVALUE(0x1000,SUB42(fVar1,0),uVar7);
  FUN_1000_5d34(uVar8);
  return;
}


// ---- FUN_1000_8046 @ 1000:8046

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_1000_8046(float param_1,float param_2)

{
  float fVar1;
  undefined2 uVar2;
  
  uVar2 = 0x1008;
  if (param_1 < param_2) {
    fVar1 = param_2;
    if (_DAT_1008_0478 <= param_2) {
      if (param_1 < _DAT_1008_0478) {
        FUN_1000_5da0(1,0,DAT_1008_0480,DAT_1008_0482,0,DAT_1008_0478,DAT_1008_047a,DAT_1008_047c,
                      DAT_1008_047e,DAT_1008_0478,DAT_1008_047a,0x1008);
        param_1 = (float)CONCAT22(DAT_1008_0486,DAT_1008_0484);
        goto LAB_1000_80e6;
      }
      fVar1 = (float)CONCAT22(DAT_1008_0486,DAT_1008_0484);
    }
  }
  else if (_DAT_1008_0478 <= param_1) {
    if (param_2 < _DAT_1008_0478) {
      FUN_1000_5da0(1,0,DAT_1008_0480,DAT_1008_0482,0,DAT_1008_0488,DAT_1008_048a,DAT_1008_047c,
                    DAT_1008_047e,DAT_1008_0478,DAT_1008_047a,0x1008,param_1,param_2);
      param_1 = param_2 - param_1;
LAB_1000_80e6:
      FUN_1000_5da0(2,0,DAT_1008_0480,DAT_1008_0482,0,param_1,DAT_1008_047c,DAT_1008_047e,param_2,
                    uVar2);
      goto LAB_1000_821e;
    }
    fVar1 = (float)CONCAT22(DAT_1008_048a,DAT_1008_0488);
  }
  else {
    fVar1 = param_2 - param_1;
  }
  FUN_1000_5da0(1,0,DAT_1008_0480,DAT_1008_0482,0,fVar1,DAT_1008_047c,DAT_1008_047e,param_2,0x1008);
LAB_1000_821e:
  FUN_1000_5ce4();
  FUN_1000_5d1e();
  return;
}


// ---- FUN_1000_822c @ 1000:822c

void __cdecl16far FUN_1000_822c(float param_1,float param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  
  uVar1 = DAT_1008_0498;
  uVar2 = DAT_1008_049a;
  if (param_1 < param_2) {
    uVar1 = DAT_1008_049c;
    uVar2 = DAT_1008_049e;
  }
  FUN_1000_5d50(1,0,DAT_1008_0480,DAT_1008_0482,0,uVar1,uVar2,DAT_1008_047c,DAT_1008_047e,param_2,
                0x1008);
  FUN_1000_5cf6();
  FUN_1000_5d08();
  return;
}


// ---- FUN_1000_82a8 @ 1000:82a8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_1000_82a8(float param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0;
  if (param_2 < param_4) {
    fVar1 = param_4;
    if (_DAT_1008_0478 <= param_4) {
      if (_DAT_1008_0478 <= param_2) {
        FUN_1000_5da0(1,1,DAT_1008_0480,DAT_1008_0482,0,DAT_1008_0484,DAT_1008_0486,DAT_1008_047c,
                      DAT_1008_047e,param_4._0_2_,param_4._2_2_,0x1008);
      }
      else {
        FUN_1000_5da0(1,0,DAT_1008_0480,DAT_1008_0482,0,DAT_1008_0478,DAT_1008_047a,DAT_1008_047c,
                      DAT_1008_047e,DAT_1008_0478,DAT_1008_047a,0x1008);
        FUN_1000_5da0(2,1,DAT_1008_0480,DAT_1008_0482,0,DAT_1008_0484,DAT_1008_0486,DAT_1008_047c,
                      DAT_1008_047e,param_4);
      }
      FUN_1000_5ce4();
      uVar3 = 1;
      goto code_r0x100084c5;
    }
LAB_1000_84a6:
    FUN_1000_5da0(1,0,DAT_1008_0480,DAT_1008_0482,0,fVar1,DAT_1008_047c,DAT_1008_047e,param_4,0x1008
                 );
  }
  else {
    if (param_2 < _DAT_1008_0478) {
      fVar1 = param_4 - param_2;
      goto LAB_1000_84a6;
    }
    if (_DAT_1008_0478 <= param_4) {
      fVar1 = (float)CONCAT22(DAT_1008_048a,DAT_1008_0488);
      goto LAB_1000_84a6;
    }
    FUN_1000_5da0(1,0,DAT_1008_0480,DAT_1008_0482,0,DAT_1008_0488,DAT_1008_048a,DAT_1008_047c,
                  DAT_1008_047e,DAT_1008_0478,DAT_1008_047a,0x1008,param_2,param_4,0);
    FUN_1000_5da0(2,0,DAT_1008_0480,DAT_1008_0482,0,param_4 - param_2,DAT_1008_047c,DAT_1008_047e,
                  param_4);
  }
  FUN_1000_5ce4();
code_r0x100084c5:
  if (param_3 <= param_1) {
    uVar2 = CONCAT22(DAT_1008_049a,DAT_1008_0498);
  }
  else {
    uVar2 = CONCAT22(DAT_1008_049e,DAT_1008_049c);
  }
  FUN_1000_5d50(1,0,DAT_1008_0480,DAT_1008_0482,uVar3,uVar2,DAT_1008_047c,DAT_1008_047e,param_3);
  FUN_1000_5cf6();
  FUN_1000_5d34();
  return;
}


// ---- FUN_1000_8538 @ 1000:8538

void __cdecl16far FUN_1000_8538(void)

{
  float fVar1;
  float *pfVar2;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined4 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined1 *puVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined1 local_1a [4];
  undefined1 local_16 [4];
  float local_12;
  float local_e;
  undefined4 local_a;
  float local_6;
  
  uVar8 = 0x1008;
  local_a = (float)CONCAT22(DAT_1008_047a,DAT_1008_0478);
  uVar7 = 0x19;
  puVar6 = local_16;
  pfVar2 = (float *)M007_GETVALUE(unaff_CS,puVar6);
  local_6 = DAT_1008_048c;
  local_12 = DAT_1008_048c;
  if (*pfVar2 <= DAT_1008_048c) {
    puVar6 = (undefined1 *)((int)(undefined4 *)&DAT_1008_0016 + 3);
    pfVar2 = (float *)M007_GETVALUE(0x1010,local_1a);
    local_12 = *pfVar2;
  }
  uVar4 = SUB42(local_12,0);
  uVar5 = (undefined2)((ulong)local_12 >> 0x10);
  FUN_1000_5d50(1,0,DAT_1008_0480,DAT_1008_0482,1,DAT_1008_04a8,DAT_1008_04aa,DAT_1008_047c,
                DAT_1008_047e,uVar4,uVar5,puVar6,uVar7,uVar8);
  FUN_1000_5cf6(1);
  uVar7 = 0x17;
  M007_PUTVALUE(0x1000,uVar4,uVar5);
  uVar3 = M007_GETSTATE(0x1010,0xc,uVar7);
  uVar7 = (undefined2)((ulong)uVar3 >> 0x10);
  pfVar2 = (float *)FUN_1000_56fc((int)uVar3);
  fVar1 = local_a;
  if (*pfVar2 <= local_a) {
    uVar3 = M007_GETSTATE(0x1000,0xc);
    uVar7 = (undefined2)((ulong)uVar3 >> 0x10);
    pfVar2 = (float *)FUN_1000_56fc((int)uVar3);
    fVar1 = *pfVar2;
  }
  local_e = fVar1;
  FUN_1000_5da0(1,0,DAT_1008_0480,DAT_1008_0482,0,DAT_1008_0484,DAT_1008_0486,DAT_1008_047c,
                DAT_1008_047e,DAT_1008_0484,DAT_1008_0486);
  uVar7 = (undefined2)((ulong)fVar1 >> 0x10);
  FUN_1000_5da0(2,1,DAT_1008_0480,DAT_1008_0482,0,DAT_1008_04ac,DAT_1008_04ae,DAT_1008_047c,
                DAT_1008_047e,SUB42(fVar1,0),uVar7);
  FUN_1000_5ce4(2);
  uVar8 = 0x18;
  M007_PUTVALUE(0x1000,SUB42(fVar1,0),uVar7);
  FUN_1000_5d34(uVar8);
  return;
}


// ---- FUN_1000_86bc @ 1000:86bc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_1000_86bc(float param_1,float param_2)

{
  float fVar1;
  undefined2 uVar2;
  
  uVar2 = 0x1008;
  if (param_1 < param_2) {
    fVar1 = param_2;
    if (_DAT_1008_0478 <= param_2) {
      if (param_1 < _DAT_1008_0478) {
        FUN_1000_5da0(1,0,DAT_1008_0480,DAT_1008_0482,0,DAT_1008_0478,DAT_1008_047a,DAT_1008_047c,
                      DAT_1008_047e,DAT_1008_0478,DAT_1008_047a,0x1008);
        param_1 = (float)CONCAT22(DAT_1008_0486,DAT_1008_0484);
        goto LAB_1000_875c;
      }
      fVar1 = (float)CONCAT22(DAT_1008_0486,DAT_1008_0484);
    }
  }
  else if (_DAT_1008_0478 <= param_1) {
    if (param_2 < _DAT_1008_0478) {
      FUN_1000_5da0(1,0,DAT_1008_0480,DAT_1008_0482,0,DAT_1008_0488,DAT_1008_048a,DAT_1008_047c,
                    DAT_1008_047e,DAT_1008_0478,DAT_1008_047a,0x1008,param_1,param_2);
      param_1 = param_2 - param_1;
LAB_1000_875c:
      FUN_1000_5da0(2,0,DAT_1008_0480,DAT_1008_0482,0,param_1,DAT_1008_047c,DAT_1008_047e,param_2,
                    uVar2);
      goto LAB_1000_8894;
    }
    fVar1 = (float)CONCAT22(DAT_1008_048a,DAT_1008_0488);
  }
  else {
    fVar1 = param_2 - param_1;
  }
  FUN_1000_5da0(1,0,DAT_1008_0480,DAT_1008_0482,0,fVar1,DAT_1008_047c,DAT_1008_047e,param_2,0x1008);
LAB_1000_8894:
  FUN_1000_5ce4();
  FUN_1000_5d1e();
  return;
}


// ---- FUN_1000_88a2 @ 1000:88a2

void __cdecl16far FUN_1000_88a2(float param_1,float param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  
  uVar1 = DAT_1008_0498;
  uVar2 = DAT_1008_049a;
  if (param_1 < param_2) {
    uVar1 = DAT_1008_049c;
    uVar2 = DAT_1008_049e;
  }
  FUN_1000_5d50(1,0,DAT_1008_0480,DAT_1008_0482,0,uVar1,uVar2,DAT_1008_047c,DAT_1008_047e,param_2,
                0x1008);
  FUN_1000_5cf6();
  FUN_1000_5d08();
  return;
}


// ---- __FPMATH @ 1010:0000

/* WARNING: Control flow encountered bad instruction data */

void __FPMATH(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- M007_PUTVALUE @ 1010:0004

/* WARNING: Control flow encountered bad instruction data */

void M007_PUTVALUE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- M007_GETVALUE @ 1010:0008

/* WARNING: Control flow encountered bad instruction data */

void M007_GETVALUE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- M007_PUTLOW @ 1010:000c

/* WARNING: Control flow encountered bad instruction data */

void M007_PUTLOW(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- M007_GETLOW @ 1010:0010

/* WARNING: Control flow encountered bad instruction data */

void M007_GETLOW(void)

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


// ---- M007_GETHIGH @ 1010:0018

/* WARNING: Control flow encountered bad instruction data */

void M007_GETHIGH(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- M007_PUTSTATE @ 1010:001c

/* WARNING: Control flow encountered bad instruction data */

void M007_PUTSTATE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- M007_GETSTATE @ 1010:0020

/* WARNING: Control flow encountered bad instruction data */

void M007_GETSTATE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- UIF_MESSAGE @ 1010:0024

/* WARNING: Control flow encountered bad instruction data */

void UIF_MESSAGE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- UIF_PRINT_DOUBLE @ 1010:0028

/* WARNING: Control flow encountered bad instruction data */

void UIF_PRINT_DOUBLE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- UIF_LOG @ 1010:002c

/* WARNING: Control flow encountered bad instruction data */

void UIF_LOG(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- ISLICENCED @ 1010:0030

/* WARNING: Control flow encountered bad instruction data */

void ISLICENCED(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- LEO_MSGBOX @ 1010:0034

/* WARNING: Control flow encountered bad instruction data */

void LEO_MSGBOX(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GETLEOINIFILEPATH @ 1010:0038

/* WARNING: Control flow encountered bad instruction data */

void GETLEOINIFILEPATH(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- FATALEXIT @ 1010:003c

/* WARNING: Control flow encountered bad instruction data */

void FATALEXIT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GETVERSION @ 1010:0040

/* WARNING: Control flow encountered bad instruction data */

void GETVERSION(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- LOCALINIT @ 1010:0044

/* WARNING: Control flow encountered bad instruction data */

void LOCALINIT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GLOBALALLOC @ 1010:0048

/* WARNING: Control flow encountered bad instruction data */

void GLOBALALLOC(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GLOBALREALLOC @ 1010:004c

/* WARNING: Control flow encountered bad instruction data */

void GLOBALREALLOC(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GLOBALFREE @ 1010:0050

/* WARNING: Control flow encountered bad instruction data */

void GLOBALFREE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GLOBALLOCK @ 1010:0054

/* WARNING: Control flow encountered bad instruction data */

void GLOBALLOCK(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GLOBALUNLOCK @ 1010:0058

/* WARNING: Control flow encountered bad instruction data */

void GLOBALUNLOCK(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GLOBALSIZE @ 1010:005c

/* WARNING: Control flow encountered bad instruction data */

void GLOBALSIZE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- LOCKSEGMENT @ 1010:0060

/* WARNING: Control flow encountered bad instruction data */

void LOCKSEGMENT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GETMODULEUSAGE @ 1010:0064

/* WARNING: Control flow encountered bad instruction data */

void GETMODULEUSAGE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- INITTASK @ 1010:0068

/* WARNING: Control flow encountered bad instruction data */

void INITTASK(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- DOS3CALL @ 1010:006c

/* WARNING: Control flow encountered bad instruction data */

void DOS3CALL(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- __AHSHIFT @ 1010:0070

/* WARNING: Control flow encountered bad instruction data */

void __AHSHIFT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- __AHINCR @ 1010:0074

/* WARNING: Control flow encountered bad instruction data */

void __AHINCR(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GETPRIVATEPROFILESTRING @ 1010:0078

/* WARNING: Control flow encountered bad instruction data */

void GETPRIVATEPROFILESTRING(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- WRITEPRIVATEPROFILESTRING @ 1010:007c

/* WARNING: Control flow encountered bad instruction data */

void WRITEPRIVATEPROFILESTRING(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GETDOSENVIRONMENT @ 1010:0080

/* WARNING: Control flow encountered bad instruction data */

void GETDOSENVIRONMENT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- FATALAPPEXIT @ 1010:0084

/* WARNING: Control flow encountered bad instruction data */

void FATALAPPEXIT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- __WINFLAGS @ 1010:0088

/* WARNING: Control flow encountered bad instruction data */

void __WINFLAGS(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GETTICKCOUNT @ 1010:008c

/* WARNING: Control flow encountered bad instruction data */

void GETTICKCOUNT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- _WSPRINTF @ 1010:0090

/* WARNING: Control flow encountered bad instruction data */

void _WSPRINTF(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- EOSTANDBY @ 1010:0094

/* WARNING: Control flow encountered bad instruction data */

void EOSTANDBY(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_816 @ 1010:0098

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_816(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_900 @ 1010:009c

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_900(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_901 @ 1010:00a0

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_901(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_902 @ 1010:00a4

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_902(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_903 @ 1010:00a8

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_903(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_904 @ 1010:00ac

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_904(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_905 @ 1010:00b0

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_905(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_906 @ 1010:00b4

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_906(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_907 @ 1010:00b8

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_907(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_908 @ 1010:00bc

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_908(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_909 @ 1010:00c0

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_909(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_910 @ 1010:00c4

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_910(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_913 @ 1010:00c8

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_913(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_914 @ 1010:00cc

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_914(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_915 @ 1010:00d0

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_915(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_917 @ 1010:00d4

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_917(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_927 @ 1010:00d8

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_927(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_928 @ 1010:00dc

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_928(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_929 @ 1010:00e0

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_929(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_930 @ 1010:00e4

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_930(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_931 @ 1010:00e8

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_931(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_932 @ 1010:00ec

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_932(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


