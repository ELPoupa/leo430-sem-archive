// Decompiled with Ghidra from m800.dll
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
  
  DAT_1010_0148 = 0x1010;
  uVar3 = unaff_CS;
  DAT_1010_0146 = unaff_DI;
  DAT_1010_014a = in_CX;
  DAT_1010_014c = in_BX;
  DAT_1010_014e = unaff_SI;
  if (in_CX != 0) {
    uVar3 = 0x1018;
    iVar2 = LOCALINIT(unaff_CS,in_CX,0);
    if (iVar2 == 0) {
      return;
    }
  }
  LOCKSEGMENT(uVar3,0xffff);
  uVar4 = 0x92;
  uVar3 = GETVERSION(0x1018);
  DAT_1010_016c = CONCAT11((char)uVar3,(char)((uint)uVar3 >> 8));
  if ((uRam10000010 & 1) == 0) {
    pcVar1 = (code *)swi(0x21);
    DAT_1010_0170 = (*pcVar1)();
  }
  else {
    uVar4 = 0x1000;
    DAT_1010_0170 = DOS3CALL(0x1000);
  }
  DAT_1010_016e = CONCAT11((char)DAT_1010_0170,(char)((uint)DAT_1010_0170 >> 8));
  if ((uRam10000010 & 1) == 0) {
    DAT_1010_0173 = 0;
  }
  FUN_1000_010e(uVar4);
  FUN_1000_0684();
  DAT_1010_0150 = DAT_1010_0150 + '\x01';
  FUN_1000_0634(DAT_1010_018c,DAT_1010_018e,DAT_1010_0190,DAT_1010_0192,DAT_1010_0194);
  return;
}


// ---- FUN_1000_00f6 @ 1000:00f6

undefined2 FUN_1000_00f6(void)

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
  uVar3 = 0x1010;
  if (DAT_1010_0692 != 0) {
    bVar2 = false;
    (*DAT_1010_0690)();
    if (bVar2) {
      FUN_1000_081a();
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
  DAT_1010_019d = 1;
  FUN_1000_01de();
  FUN_1000_01de();
  FUN_1000_01de();
  FUN_1000_01de();
  FUN_1000_2bcc();
  FUN_1000_088e();
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


// ---- FUN_1000_01f2 @ 1000:01f2

void FUN_1000_01f2(undefined2 param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  
  if (DAT_1010_0176 <= param_2) goto LAB_1000_02b7;
  if ((DAT_1010_01ca != 0) && ((param_4 & 0x8000) != 0)) {
    if (param_5 == 0) goto LAB_1000_02b7;
    uVar2 = 0;
    if ((uRam10000010 & 1) == 0) {
      pcVar1 = (code *)swi(0x21);
      uVar3 = (*pcVar1)();
    }
    else {
      uVar3 = DOS3CALL(0x1000);
    }
    if ((bool)uVar2) goto LAB_1000_02b7;
    if ((param_5 & 2) == 0) {
      if ((int)((int)((ulong)uVar3 >> 0x10) + param_4 + (uint)CARRY2((uint)uVar3,param_3)) < 0)
      goto LAB_1000_02b7;
    }
    else {
      if ((uRam10000010 & 1) == 0) {
        pcVar1 = (code *)swi(0x21);
        uVar3 = (*pcVar1)(uVar3);
      }
      else {
        uVar3 = DOS3CALL(0x1000);
      }
      if ((int)((int)((ulong)uVar3 >> 0x10) + param_4 + (uint)CARRY2((uint)uVar3,param_3)) < 0) {
        if ((uRam10000010 & 1) == 0) {
          pcVar1 = (code *)swi(0x21);
          (*pcVar1)();
        }
        else {
          DOS3CALL(0x1000);
        }
        goto LAB_1000_02b7;
      }
    }
  }
  uVar2 = 0;
  if ((uRam10000010 & 1) == 0) {
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
  }
  else {
    DOS3CALL();
  }
  if (!(bool)uVar2) {
    *(byte *)(param_2 + 0x178) = *(byte *)(param_2 + 0x178) & 0xfd;
  }
LAB_1000_02b7:
  FUN_1000_083f();
  return;
}


// ---- FUN_1000_02ba @ 1000:02ba

char * __cdecl16far FUN_1000_02ba(char *param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  bool bVar11;
  
  uVar9 = (undefined2)((ulong)param_1 >> 0x10);
  bVar11 = true;
  iVar3 = -1;
  pcVar6 = (char *)param_1;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    pcVar1 = pcVar6;
    pcVar6 = pcVar6 + 1;
    bVar11 = *pcVar1 == '\0';
  } while (!bVar11);
  pcVar8 = pcVar6 + -1;
  uVar10 = (undefined2)((ulong)param_2 >> 0x10);
  pcVar7 = (char *)param_2;
  uVar4 = 0xffff;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar1 = pcVar7;
    pcVar7 = pcVar7 + 1;
    bVar11 = *pcVar1 == '\0';
  } while (!bVar11);
  uVar4 = ~uVar4;
  if (!bVar11) {
    pcVar7 = pcVar7 + -uVar4;
    uVar4 = uVar4 + 1;
  }
  pcVar7 = pcVar7 + -uVar4;
  if (uVar4 == 0) {
    pcVar1 = pcVar7;
    pcVar7 = pcVar7 + 2;
    *(undefined2 *)pcVar8 = *(undefined2 *)pcVar1;
    uVar4 = 0xfffe;
    pcVar8 = pcVar6 + 1;
  }
  else if (((uint)pcVar7 & 1) != 0) {
    pcVar1 = pcVar7;
    pcVar7 = pcVar7 + 1;
    *pcVar8 = *pcVar1;
    uVar4 = uVar4 - 1;
    pcVar8 = pcVar6;
  }
  for (uVar5 = uVar4 >> 1; uVar5 != 0; uVar5 = uVar5 - 1) {
    pcVar2 = pcVar8;
    pcVar8 = pcVar8 + 2;
    pcVar1 = pcVar7;
    pcVar7 = pcVar7 + 2;
    *(undefined2 *)pcVar2 = *(undefined2 *)pcVar1;
  }
  for (uVar4 = (uint)((uVar4 & 1) != 0); uVar4 != 0; uVar4 = uVar4 - 1) {
    pcVar2 = pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar1 = pcVar7;
    pcVar7 = pcVar7 + 1;
    *pcVar2 = *pcVar1;
  }
  return (char *)param_1;
}


// ---- FUN_1000_030e @ 1000:030e

void __cdecl16far FUN_1000_030e(char *param_1,char *param_2)

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


// ---- thunk_FUN_1000_0890 @ 1000:034a

int __cdecl16far thunk_FUN_1000_0890(byte *param_1)

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
  if ((bVar2 != 0x2d) && (bVar3 = bVar2, bVar2 != 0x2b)) goto LAB_1000_08b1;
  while( true ) {
    pbVar1 = pbVar5;
    pbVar5 = pbVar5 + 1;
    bVar3 = *pbVar1;
LAB_1000_08b1:
    if ((0x39 < bVar3) || (bVar3 < 0x30)) break;
    iVar4 = iVar4 * 10 + (uint)(byte)(bVar3 - 0x30);
  }
  if (bVar2 == 0x2d) {
    iVar4 = -iVar4;
  }
  return iVar4;
}


// ---- FUN_1000_034e @ 1000:034e

undefined1 __cdecl16far FUN_1000_034e(undefined2 param_1)

{
  undefined1 uVar1;
  
  uVar1 = in(param_1);
  return uVar1;
}


// ---- FUN_1000_0368 @ 1000:0368

undefined1 __cdecl16far FUN_1000_0368(undefined2 param_1,undefined1 param_2)

{
  out(param_1,param_2);
  return param_2;
}


// ---- FUN_1000_0384 @ 1000:0384

void __cdecl16far FUN_1000_0384(undefined2 *param_1)

{
  code *pcVar1;
  undefined2 uVar2;
  uint in_CX;
  uint uVar3;
  uint extraout_DX;
  uint extraout_DX_00;
  uint uVar4;
  undefined1 extraout_DH;
  undefined1 extraout_DH_00;
  undefined1 uVar6;
  uint extraout_DX_01;
  uint extraout_DX_02;
  uint uVar5;
  int unaff_BP;
  char in_stack_0000ffec;
  
  if ((uRam10000010 & 1) == 0) {
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)(0x1010,unaff_BP + 1);
    uVar4 = extraout_DX_00;
  }
  else {
    DOS3CALL(0x1000);
    uVar4 = extraout_DX;
  }
  uVar3 = in_CX;
  if ((uRam10000010 & 1) == 0) {
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
    uVar6 = extraout_DH_00;
  }
  else {
    DOS3CALL(0x1000);
    uVar6 = extraout_DH;
  }
  if ((uRam10000010 & 1) == 0) {
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)(uVar3 >> 8,uVar3 & 0xff,uVar6);
    uVar5 = extraout_DX_02;
  }
  else {
    in_stack_0000ffec = '\0';
    DOS3CALL(0x1000,uVar3 >> 8);
    uVar5 = extraout_DX_01;
  }
  if ((uVar4 != uVar5) && (in_stack_0000ffec == '\x17')) {
    uVar3 = in_CX;
    uVar5 = uVar4;
  }
  uVar2 = FUN_1000_071c(uVar3 - 0x7bc,uVar5 >> 8,uVar5 & 0xff);
  if (param_1._2_2_ != 0) {
    ((undefined2 *)param_1)[1] = uVar5;
    *param_1 = uVar2;
  }
  return;
}


// ---- FUN_1000_0418 @ 1000:0418

int __cdecl16far FUN_1000_0418(uint param_1)

{
  return (param_1 ^ (int)param_1 >> 0xf) - ((int)param_1 >> 0xf);
}


// ---- FUN_1000_042c @ 1000:042c

void FUN_1000_042c(void)

{
  code *pcVar1;
  int unaff_BP;
  
  if ((uRam10000010 & 1) == 0) {
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)(0x1010,unaff_BP + 1);
  }
  else {
    DOS3CALL(0x1000,0x1010);
  }
  FUN_1000_0820();
  return;
}


// ---- FUN_1000_0452 @ 1000:0452

void __stdcall16far FUN_1000_0452(undefined2 *param_1)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 *puVar3;
  undefined2 uVar4;
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  puVar3 = (undefined2 *)param_1;
  uVar2 = puVar3[1];
  uVar1 = FUN_1000_053e();
  *puVar3 = uVar1;
  puVar3[1] = uVar2;
  return;
}


// ---- FUN_1000_0472 @ 1000:0472

undefined4 __stdcall16far FUN_1000_0472(uint param_1,uint param_2,uint param_3,uint param_4)

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


// ---- FUN_1000_050c @ 1000:050c

long __stdcall16far FUN_1000_050c(uint param_1,int param_2,uint param_3,int param_4)

{
  if (param_4 == 0 && param_2 == 0) {
    return (ulong)param_1 * (ulong)param_3;
  }
  return CONCAT22((int)((ulong)param_1 * (ulong)param_3 >> 0x10) +
                  param_2 * param_3 + param_1 * param_4,(int)((ulong)param_1 * (ulong)param_3));
}


// ---- FUN_1000_053e @ 1000:053e

void __cdecl16far FUN_1000_053e(void)

{
  uint in_CX;
  uint uVar1;
  
  for (uVar1 = in_CX & 0xff; uVar1 != 0; uVar1 = uVar1 - 1) {
  }
  return;
}


// ---- FUN_1000_054a @ 1000:054a

void __cdecl16far FUN_1000_054a(void)

{
  uint in_CX;
  uint uVar1;
  
  for (uVar1 = in_CX & 0xff; uVar1 != 0; uVar1 = uVar1 - 1) {
  }
  return;
}


// ---- FUN_1000_0556 @ 1000:0556

undefined4 __stdcall16far FUN_1000_0556(uint param_1,uint param_2,uint param_3,uint param_4)

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


// ---- FUN_1000_05b6 @ 1000:05b6

void __cdecl16far FUN_1000_05b6(void)

{
  uint in_CX;
  uint uVar1;
  
  for (uVar1 = in_CX & 0xff; uVar1 != 0; uVar1 = uVar1 - 1) {
  }
  return;
}


// ---- FUN_1000_05c2 @ 1000:05c2

void FUN_1000_05c2(void)

{
  FUN_1000_10d0();
  return;
}


// ---- FUN_1000_05c8 @ 1000:05c8

void FUN_1000_05c8(void)

{
  FUN_1000_10d0();
  return;
}


// ---- FUN_1000_05cd @ 1000:05cd

void FUN_1000_05cd(void)

{
  FUN_1000_10d0();
  return;
}


// ---- FUN_1000_05e2 @ 1000:05e2

undefined2 __cdecl16far FUN_1000_05e2(void)

{
  longdouble in_ST0;
  undefined2 local_10;
  
  local_10 = (undefined2)(sqword)ROUND(in_ST0);
  return local_10;
}


// ---- FUN_1000_0634 @ 1000:0634

void __cdecl16far FUN_1000_0634(void)

{
  FUN_1008_0000(DAT_1010_014c,DAT_1010_014e,DAT_1010_014a,DAT_1010_0148,DAT_1010_0146);
  return;
}


// ---- FUN_1000_0660 @ 1000:0660

void __cdecl16far FUN_1000_0660(void)

{
  FUN_1000_126d(0xfc);
  FUN_1000_126d(0xff);
  return;
}


// ---- FUN_1000_0684 @ 1000:0684

void __cdecl16far FUN_1000_0684(void)

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
  pcVar11 = (char *)FUN_1000_1588();
  uVar5 = (undefined2)((ulong)pcVar11 >> 0x10);
  pcVar9 = (char *)pcVar11;
  puVar12 = (undefined2 *)FUN_1000_1588();
  uVar6 = (undefined2)((ulong)puVar12 >> 0x10);
  DAT_1010_0192 = (undefined2 *)puVar12;
  pcVar8 = (char *)0x0;
  for (; DAT_1010_0194 = (undefined2)((ulong)puVar12 >> 0x10), puVar2 = (undefined2 *)puVar12,
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
      puVar12 = (undefined2 *)CONCAT22(DAT_1010_0194,puVar2 + 2);
    } while (cVar1 != '\0');
  }
  *puVar2 = 0;
  puVar2[1] = 0;
  return;
}


// ---- FUN_1000_071c @ 1000:071c

int __cdecl16far
FUN_1000_071c(uint param_1,int param_2,uint param_3,uint param_4,uint param_5,int param_6)

{
  uint uVar1;
  int iVar2;
  int unaff_BP;
  int iVar3;
  undefined4 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  int local_1a;
  undefined1 local_16 [4];
  uint local_12;
  int local_e;
  int local_c;
  int local_8;
  undefined2 local_4;
  int iStack_2;
  
  iStack_2 = unaff_BP + 1;
  local_4 = 0x1010;
  iVar3 = *(int *)(param_2 * 2 + 0x3c6);
  if (((param_1 & 3) == 0) && (2 < param_2)) {
    iVar3 = iVar3 + 1;
  }
  FUN_1000_12d0();
  uVar8 = 0;
  uVar7 = 0x3c;
  uVar6 = 0;
  uVar5 = 0x3c;
  uVar1 = (int)(param_1 + 3) >> 2;
  uVar4 = FUN_1000_050c((long)(int)param_1 * 0x16d +
                        CONCAT22(((int)(param_1 + 3) >> 0xf) + ((int)param_3 >> 0xf) +
                                 (uint)CARRY2(uVar1,param_3),uVar1 + param_3) + (long)iVar3 + 0xe44,
                        0x18,0);
  uVar4 = FUN_1000_050c((uint)uVar4 + param_4,
                        (int)((ulong)uVar4 >> 0x10) + ((int)param_4 >> 0xf) +
                        (uint)CARRY2((uint)uVar4,param_4),uVar5,uVar6);
  iVar2 = FUN_1000_050c((uint)uVar4 + param_5,
                        (int)((ulong)uVar4 >> 0x10) + ((int)param_5 >> 0xf) +
                        (uint)CARRY2((uint)uVar4,param_5),uVar7,uVar8);
  local_1a = iVar2 + param_6 + DAT_1010_03e2;
  local_8 = param_3 + iVar3;
  local_c = param_1 + 0x50;
  local_e = param_2 + -1;
  local_12 = param_4;
  if (DAT_1010_03e6 != 0) {
    iVar3 = FUN_1000_14b4(local_16);
    if (iVar3 != 0) {
      local_1a = local_1a + -0xe10;
    }
  }
  return local_1a;
}


// ---- FUN_1000_081a @ 1000:081a

void FUN_1000_081a(void)

{
  FUN_1000_128e();
  return;
}


// ---- FUN_1000_0820 @ 1000:0820

undefined2 __cdecl16far FUN_1000_0820(void)

{
  bool in_CF;
  
  if (!in_CF) {
    return 0;
  }
  FUN_1000_0857();
  return 0xffff;
}


// ---- FUN_1000_083f @ 1000:083f

void __cdecl16far FUN_1000_083f(void)

{
  bool in_CF;
  
  if (in_CF) {
    FUN_1000_0857();
  }
  return;
}


// ---- FUN_1000_0857 @ 1000:0857

void __cdecl16near FUN_1000_0857(void)

{
  char cVar1;
  uint in_AX;
  
  DAT_1010_0174 = (byte)in_AX;
  cVar1 = (char)(in_AX >> 8);
  if (cVar1 != '\0') goto LAB_1000_0874;
  if (DAT_1010_0174 < 0x22) {
    if (DAT_1010_0174 < 0x20) {
      if (0x13 < DAT_1010_0174) goto LAB_1000_086e;
    }
    else {
      in_AX = 5;
    }
  }
  else {
LAB_1000_086e:
    in_AX = 0x13;
  }
  cVar1 = *(char *)(ulong)((in_AX & 0xff) + 0x1b6);
LAB_1000_0874:
  DAT_1010_0168 = (int)cVar1;
  return;
}


// ---- FUN_1000_087e @ 1000:087e

undefined2 __cdecl16far FUN_1000_087e(void)

{
  undefined2 unaff_SS;
  
  if (___EXPORTEDSTUB != (code)0xb8) {
    return unaff_SS;
  }
  return uRam100015b7;
}


// ---- FUN_1000_088e @ 1000:088e

void __cdecl16near FUN_1000_088e(void)

{
  return;
}


// ---- FUN_1000_0890 @ 1000:0890

int __cdecl16far FUN_1000_0890(byte *param_1)

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
  if ((bVar2 != 0x2d) && (bVar3 = bVar2, bVar2 != 0x2b)) goto LAB_1000_08b1;
  while( true ) {
    pbVar1 = pbVar5;
    pbVar5 = pbVar5 + 1;
    bVar3 = *pbVar1;
LAB_1000_08b1:
    if ((0x39 < bVar3) || (bVar3 < 0x30)) break;
    iVar4 = iVar4 * 10 + (uint)(byte)(bVar3 - 0x30);
  }
  if (bVar2 == 0x2d) {
    iVar4 = -iVar4;
  }
  return iVar4;
}


// ---- FUN_1000_09ea @ 1000:09ea

void __cdecl16far FUN_1000_09ea(char *param_1)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  undefined2 uVar4;
  char local_6;
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  if ((*(byte *)(*param_1 + 0x2ad) & 1) == 0) {
    iVar3 = (int)*param_1;
  }
  else {
    iVar3 = *param_1 + 0x20;
  }
  if (iVar3 != 0x65) {
    do {
      pcVar1 = (char *)param_1 + 1;
      param_1 = (char *)ZEXT24(pcVar1);
    } while ((*(byte *)(*pcVar1 + 0x2ad) & 4) != 0);
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


// ---- FUN_1000_0a60 @ 1000:0a60

undefined2 __cdecl16far FUN_1000_0a60(char *param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined4 local_8;
  
  uVar5 = 0x1010;
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


// ---- FUN_1000_0ae4 @ 1000:0ae4

bool __cdecl16far FUN_1000_0ae4(double *param_1)

{
  return DAT_1010_0780 <= *param_1;
}


// ---- FUN_1000_0b1c @ 1000:0b1c

void __cdecl16far FUN_1000_0b1c(int param_1,float *param_2,undefined2 param_3,undefined2 param_4)

{
  undefined2 *puVar1;
  double *pdVar2;
  undefined2 in_DX;
  float *pfVar3;
  undefined2 uVar4;
  
  if (param_1 == 0) {
    pdVar2 = (double *)FUN_1000_15ca(param_3,param_4);
    *param_2 = (float)*pdVar2;
  }
  else {
    puVar1 = (undefined2 *)FUN_1000_15ca(param_3,param_4);
    uVar4 = (undefined2)((ulong)param_2 >> 0x10);
    pfVar3 = (float *)param_2;
    *(undefined2 *)param_2 = *puVar1;
    *(undefined2 *)((int)pfVar3 + 2) = puVar1[1];
    *(undefined2 *)(pfVar3 + 1) = puVar1[2];
    *(undefined2 *)((int)pfVar3 + 6) = puVar1[3];
  }
  return;
}


// ---- FUN_1000_0b74 @ 1000:0b74

undefined1 * __cdecl16far
FUN_1000_0b74(undefined2 *param_1,undefined1 *param_2,undefined2 param_3,int param_4,int param_5)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined2 in_DX;
  undefined2 *puVar3;
  int iVar4;
  undefined2 uVar5;
  undefined4 local_c;
  undefined4 local_8;
  
  if (DAT_1010_0260 == '\0') {
    uVar5 = (undefined2)((ulong)param_1 >> 0x10);
    puVar3 = (undefined2 *)param_1;
    piVar1 = (int *)FUN_1000_200a(*param_1,puVar3[1],puVar3[2],puVar3[3]);
    local_8 = (int *)CONCAT22(in_DX,piVar1);
    FUN_1000_1628(param_2 + (uint)(0 < param_4) + (uint)(*local_8 == 0x2d),param_3,param_4 + 1,
                  piVar1,in_DX);
  }
  else {
    local_8 = (int *)CONCAT22(DAT_1010_11aa,DAT_1010_11a8);
    FUN_1000_1026(0 < param_4,param_2 + (*DAT_1010_11a8 == 0x2d),param_3);
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
           FUN_1000_16f0((undefined1 *)local_c + param_4 + (uint)(DAT_1010_0260 == '\0'),
                         local_c._2_2_,0x265,0x1010);
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


// ---- FUN_1000_0d0c @ 1000:0d0c

void __cdecl16far
FUN_1000_0d0c(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5,undefined2 param_6)

{
  DAT_1010_0260 = 1;
  FUN_1000_0b74(param_1,param_2,param_3,param_4,param_5,param_6);
  DAT_1010_0260 = 0;
  return;
}


// ---- FUN_1000_0d40 @ 1000:0d40

undefined1 * __cdecl16far
FUN_1000_0d40(undefined2 *param_1,undefined1 *param_2,undefined2 param_3,int param_4)

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
  
  iVar3 = DAT_1010_0262;
  if (DAT_1010_0260 == '\0') {
    uVar6 = (undefined2)((ulong)param_1 >> 0x10);
    puVar4 = (undefined2 *)param_1;
    piVar5 = (int *)FUN_1000_200a(*param_1,puVar4[1],puVar4[2],puVar4[3]);
    local_8 = (int *)CONCAT22(in_DX,piVar5);
    FUN_1000_1628(param_2 + (*local_8 == 0x2d),param_3,piVar5[1] + param_4,piVar5,in_DX);
  }
  else {
    local_8 = (int *)CONCAT22(DAT_1010_11aa,DAT_1010_11a8);
    iVar1 = *DAT_1010_11a8;
    if (param_4 == DAT_1010_0262) {
      param_2[DAT_1010_0262 + (uint)(iVar1 == 0x2d)] = 0x30;
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
    FUN_1000_1026(1,puVar2,param_3);
    puVar2 = puVar2 + 1;
    *local_c = 0x30;
  }
  else {
    puVar2 = puVar2 + piVar5[1];
  }
  local_c = (undefined1 *)CONCAT22(param_3,puVar2);
  if (0 < param_4) {
    FUN_1000_1026(1,puVar2,param_3);
    *local_c = 0x2e;
    if (piVar5[1] < 0) {
      if (DAT_1010_0260 == '\0') {
        iVar3 = -piVar5[1];
        if (-param_4 != piVar5[1] && param_4 <= iVar3) {
          iVar3 = param_4;
        }
      }
      else {
        iVar3 = -piVar5[1];
      }
      FUN_1000_1026(iVar3,puVar2 + 1,param_3);
      FUN_1000_172c(puVar2 + 1,param_3,0x30,iVar3);
    }
  }
  return param_2;
}


// ---- FUN_1000_0ea6 @ 1000:0ea6

void __cdecl16far
FUN_1000_0ea6(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5)

{
  DAT_1010_0260 = 1;
  FUN_1000_0d40(param_1,param_2,param_3,param_4,param_5);
  DAT_1010_0260 = 0;
  return;
}


// ---- FUN_1000_0ed8 @ 1000:0ed8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far
FUN_1000_0ed8(undefined2 *param_1,int param_2,undefined2 param_3,int param_4,undefined2 param_5)

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
  piVar2 = (int *)FUN_1000_200a(*param_1,puVar5[1],puVar5[2],puVar5[3]);
  _DAT_1010_11a8 = (int *)CONCAT22(in_DX,piVar2);
  DAT_1010_0262 = piVar2[1] + -1;
  pcVar3 = (char *)((uint)(*_DAT_1010_11a8 == 0x2d) + param_2);
  local_8 = (char *)CONCAT22(param_3,pcVar3);
  FUN_1000_1628(pcVar3,param_3,param_4,piVar2,in_DX);
  iVar4 = ((int *)_DAT_1010_11a8)[1] + -1;
  DAT_1010_0264 = DAT_1010_0262 < iVar4;
  DAT_1010_0262 = iVar4;
  if ((iVar4 < -4) || (param_4 <= iVar4)) {
    FUN_1000_0d0c(puVar5,uVar6,param_2,param_3,param_4,param_5);
  }
  else {
    if ((bool)DAT_1010_0264) {
      do {
        pcVar1 = local_8;
        uVar7 = (undefined2)((ulong)local_8 >> 0x10);
        pcVar3 = (char *)local_8;
        local_8 = (char *)CONCAT22(uVar7,(char *)local_8 + 1);
      } while (*pcVar1 != '\0');
      pcVar3[-1] = '\0';
    }
    FUN_1000_0ea6(puVar5,uVar6,param_2,param_3,param_4);
  }
  return;
}


// ---- FUN_1000_0fb8 @ 1000:0fb8

void __cdecl16far
FUN_1000_0fb8(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             int param_5,undefined2 param_6,undefined2 param_7)

{
  int unaff_BP;
  
  if ((param_5 == 0x65) || (param_5 == 0x45)) {
    FUN_1000_0b74(param_1,param_2,param_3,param_4,param_6,param_7);
  }
  else if (param_5 == 0x66) {
    FUN_1000_0d40(param_1,param_2,param_3,param_4,param_6);
  }
  else {
    FUN_1000_0ed8(param_1,param_2,param_3,param_4,param_6,param_7,0x1010,unaff_BP + 1);
  }
  return;
}


// ---- FUN_1000_1026 @ 1000:1026

void FUN_1000_1026(int param_1,int param_2,undefined2 param_3)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = FUN_1000_16d6(param_2,param_3);
    FUN_1000_1774(param_2 + param_1,param_3,param_2,param_3,iVar1 + 1);
  }
  return;
}


// ---- FUN_1000_105a @ 1000:105a

/* WARNING: Instruction at (ram,0x10000282) overlaps instruction at (ram,0x1000027f)
    */
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x1000001e) */
/* WARNING: Removing unreachable block (ram,0x10001127) */
/* WARNING: Removing unreachable block (ram,0x10001163) */
/* WARNING: Removing unreachable block (ram,0x10001172) */

undefined8 * __cdecl16far FUN_1000_105a(undefined2 param_1,uint param_2,uint param_3,uint param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  code *pcVar3;
  byte bVar4;
  char cVar5;
  undefined1 uVar6;
  undefined2 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  int iVar10;
  byte bVar11;
  uint uVar12;
  undefined2 extraout_DX;
  int *piVar13;
  undefined8 *unaff_SI;
  byte *pbVar14;
  undefined8 *unaff_DI;
  undefined8 *puVar15;
  byte *pbVar16;
  undefined2 unaff_ES;
  undefined2 unaff_SS;
  undefined2 uVar17;
  undefined1 uVar18;
  bool bVar19;
  longdouble in_ST0;
  longdouble in_ST1;
  undefined4 uVar20;
  undefined8 *puVar21;
  undefined2 uStack_14;
  int iStack_12;
  int iStack_10;
  
  uVar7 = 0x1010;
  uVar17 = 0x1010;
  puVar9 = unaff_SI;
  puVar15 = unaff_DI;
  if (DAT_1010_0624 == '\0') {
    DAT_1010_0272 = (double)in_ST1;
    goto switchD_1000_1185_caseD_5c;
  }
LAB_1000_106e:
  FUN_1000_1880();
  puVar21 = (undefined8 *)CONCAT22(extraout_DX,puVar9);
  UINT_1010_02a2._0_1_ = '\x01';
  puVar8 = (undefined8 *)(uint)uStack_14._1_1_;
  if ((((char)uStack_14._1_1_ < '\x01') || (uStack_14._1_1_ == 6)) &&
     (DAT_1010_015e = (double)in_ST0, uStack_14._1_1_ != 6)) goto LAB_1000_1109;
  unaff_SI = (undefined8 *)(int)(char)uStack_14._1_1_;
  DAT_1010_026c = unaff_SI;
  piVar13 = (int *)(iStack_12 + 1);
  DAT_1010_026e = piVar13;
  DAT_1010_0270 = 0x1010;
  UINT_1010_02a0._1_1_ = '\0';
  if (((*piVar13 == 0x6f6c) && (*(char *)(iStack_12 + 3) == 'g')) && (uStack_14._1_1_ == 2)) {
    UINT_1010_02a0._1_1_ = '\x01';
  }
  bVar11 = ((char *)((int)piVar13 + (int)unaff_SI))[5];
  uVar12 = (uint)bVar11;
  bVar19 = 0xfd75 < uVar12;
  unaff_DI = (undefined8 *)(uVar12 + 0x28a);
  bVar4 = (byte)puVar9;
  uVar18 = (undefined1)((uint)puVar9 >> 8);
  uStack_14 = puVar9;
  switch(bVar11) {
  case 0:
    goto code_r0x100011b4;
  case 1:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 2:
    in_ST0 = (longdouble)0;
    goto code_r0x100011b4;
  case 3:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 4:
    if (in_ST0 < (longdouble)0) goto code_r0x100011a9;
    in_ST0 = (longdouble)DAT_1010_061c;
    goto code_r0x100011b4;
  case 5:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 6:
code_r0x100011a9:
    in_ST0 = -(longdouble)DAT_1010_061c;
code_r0x100011b4:
    DAT_1010_0282 = (double)in_ST0;
    puVar8 = (undefined8 *)FUN_1000_2060();
    if (puVar8 == (undefined8 *)0x0) {
      cVar5 = '!';
      if ((UINT_1010_02a0._1_1_ != '\0') || ((undefined8 *)0x2 < DAT_1010_026c)) {
        cVar5 = '\"';
      }
      puVar8 = (undefined8 *)(int)cVar5;
      DAT_1010_0168 = puVar8;
      if (*(int *)((int)unaff_SI * 2 + 0x290) != 0) {
        FUN_1000_2192();
        FUN_1000_2192();
        puVar8 = (undefined8 *)FUN_1000_126d();
      }
    }
    in_ST0 = (longdouble)DAT_1010_0282;
    DAT_1010_015e = DAT_1010_0282;
LAB_1000_1109:
    if ((char)UINT_1010_02a2 == '\0') {
      DAT_1010_015e = (double)in_ST0;
      puVar8 = (undefined8 *)&DAT_1010_015e;
    }
    return puVar8;
  case 7:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 8:
    ((char *)((int)piVar13 + (int)unaff_SI))[0x51] =
         (char)(CONCAT11(bVar19,((char *)((int)piVar13 + (int)unaff_SI))[0x51]) >> 1);
    *(byte *)((int)piVar13 + (int)unaff_SI) = *(byte *)((int)piVar13 + (int)unaff_SI) | bVar4;
    *(char *)((int)piVar13 + (int)unaff_SI) =
         *(char *)((int)piVar13 + (int)unaff_SI) - (char)extraout_DX;
    uVar7 = uVar17;
    break;
  case 9:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 10:
switchD_1000_1185_caseD_a:
    break;
  default:
    *(char *)((int)piVar13 + (int)unaff_SI) = *(char *)((int)piVar13 + (int)unaff_SI) + bVar4;
    *(char *)((int)piVar13 + (int)unaff_SI) = *(char *)((int)piVar13 + (int)unaff_SI) + bVar4;
    *(char *)((int)piVar13 + (int)unaff_SI) = *(char *)((int)piVar13 + (int)unaff_SI) + bVar4;
    *(char *)((int)piVar13 + (int)unaff_SI) = *(char *)((int)piVar13 + (int)unaff_SI) + bVar4;
    *(char *)((int)piVar13 + (int)unaff_SI) = *(char *)((int)piVar13 + (int)unaff_SI) + bVar4;
    *(char *)((int)piVar13 + (int)unaff_SI) = *(char *)((int)piVar13 + (int)unaff_SI) + bVar4;
    *(char *)((int)piVar13 + (int)unaff_SI) = *(char *)((int)piVar13 + (int)unaff_SI) + bVar4;
    *(char *)((int)piVar13 + (int)unaff_SI) = *(char *)((int)piVar13 + (int)unaff_SI) + bVar4;
    puVar9 = (undefined8 *)entry();
    return puVar9;
  case 0xf:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x10:
    break;
  case 0x13:
  case 0x8a:
  case 0x8b:
  case 0x8c:
  case 0x8d:
  case 0x8e:
  case 0x8f:
  case 0x90:
  case 0x91:
  case 0x92:
  case 0x93:
  case 0x94:
  case 0x95:
  case 0x96:
  case 0x97:
  case 0x98:
  case 0x99:
  case 0x9a:
  case 0x9b:
  case 0x9c:
    if (DAT_1010_0176 <= piVar13) goto LAB_1000_02b7;
    if ((DAT_1010_01ca != 0) && ((param_3 & 0x8000) != 0)) {
      if (param_4 == 0) goto LAB_1000_02b7;
      uVar18 = 0;
      if ((uRam10000010 & 1) == 0) {
        pcVar3 = (code *)swi(0x21);
        uVar20 = (*pcVar3)();
      }
      else {
        uVar20 = DOS3CALL();
      }
      if ((bool)uVar18) goto LAB_1000_02b7;
      if ((param_4 & 2) == 0) {
        if ((int)((int)((ulong)uVar20 >> 0x10) + param_3 + (uint)CARRY2((uint)uVar20,param_2)) < 0)
        goto LAB_1000_02b7;
      }
      else {
        if ((uRam10000010 & 1) == 0) {
          pcVar3 = (code *)swi(0x21);
          uVar20 = (*pcVar3)();
        }
        else {
          uVar20 = DOS3CALL();
        }
        if ((int)((int)((ulong)uVar20 >> 0x10) + param_3 + (uint)CARRY2((uint)uVar20,param_2)) < 0)
        {
code_r0x10000276:
          if ((uRam10000010 & 1) == 0) {
            pcVar3 = (code *)swi(0x21);
            (*pcVar3)();
          }
          else {
            DOS3CALL();
          }
          goto LAB_1000_02b7;
        }
      }
    }
    uVar18 = 0;
    if ((uRam10000010 & 1) == 0) {
      pcVar3 = (code *)swi(0x21);
      (*pcVar3)();
    }
    else {
      DOS3CALL();
    }
    if (!(bool)uVar18) {
      *(byte *)(piVar13 + 0xbc) = *(byte *)(piVar13 + 0xbc) & 0xfd;
    }
LAB_1000_02b7:
    puVar9 = (undefined8 *)FUN_1000_083f();
    return puVar9;
  case 0x14:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x15:
    pbVar16 = (byte *)(uVar12 + 0x28b);
    *(undefined1 *)unaff_DI = *(undefined1 *)unaff_SI;
    goto code_r0x1000203b;
  case 0x16:
  case 0xa2:
    func_0x10190053();
    puVar9 = (undefined8 *)entry();
    return puVar9;
  case 0x19:
  case 0x1c:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x1a:
  case 0x1d:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x1b:
    uVar6 = in(extraout_DX);
    uVar7 = CONCAT11(uVar18,uVar6);
    *(undefined2 *)&DAT_1010_0146 = unaff_DI;
    *(undefined2 *)&DAT_1010_0148 = uVar7;
    *(uint *)&DAT_1010_014a = uVar12;
    *(undefined2 *)&DAT_1010_014c = piVar13;
    *(undefined2 *)&DAT_1010_014e = unaff_SI;
    if (uVar12 != 0) goto switchD_1000_1185_caseD_a;
    goto LAB_1000_0084;
  case 0x1e:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x1f:
    return (undefined8 *)((int)puVar9 + 1);
  case 0x22:
    out(*(undefined1 *)unaff_SI,extraout_DX);
    return puVar9;
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
  case 0x3a:
  case 0x3b:
  case 0x3c:
  case 0x3d:
  case 0x3e:
  case 0x3f:
  case 0x40:
  case 0x41:
  case 0xa1:
switchD_1000_1185_caseD_a1:
    uVar6 = in(extraout_DX);
    unaff_ES = CONCAT11(uVar18,uVar6);
    *(undefined2 *)&DAT_1010_0600 = param_1;
    *(uint *)&DAT_1010_0602 = param_2;
    *(uint *)&DAT_1010_0604 = param_3;
    *(uint *)&DAT_1010_0606 = param_4;
    puVar21 = (undefined8 *)FUN_1000_23ec();
    pbVar16 = (byte *)&DAT_1010_0608;
    pbVar14 = (byte *)&DAT_1010_0601;
    for (iVar10 = (int)*(char *)&DAT_1010_0600; bVar11 = 0, uVar17 = unaff_ES, iVar10 != 0;
        iVar10 = iVar10 + -1) {
      pbVar2 = pbVar16;
      pbVar16 = pbVar16 + 1;
      pbVar1 = pbVar14;
      pbVar14 = pbVar14 + 1;
      *pbVar2 = *pbVar1;
    }
code_r0x1000203b:
    *pbVar16 = bVar11;
    *(uint *)&DAT_1010_05f6 = (uint)piVar13 & 0xff;
    *(undefined2 *)&DAT_1010_05f8 = (int)((ulong)puVar21 >> 0x10);
    *(undefined2 *)&DAT_1010_05fa = (undefined8 *)puVar21;
    *(undefined2 *)&DAT_1010_05fc = 0x608;
    *(undefined2 *)&DAT_1010_05fe = uVar17;
    return (undefined8 *)&DAT_1010_05f6;
  case 0x2b:
    *(char *)piVar13 = (char)*piVar13 + '\x01';
    return puVar9;
  case 0x2c:
  case 0x2d:
  case 0x2e:
  case 0x2f:
    if (iStack_10 != 0) {
      *(byte *)(iStack_12 + -2) = *(byte *)(iStack_12 + -2) | 1;
    }
    return puVar9;
  case 0x30:
    *(undefined2 *)unaff_DI = *(undefined2 *)unaff_SI;
    goto switchD_1000_1185_caseD_a1;
  case 0x42:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x43:
    (&stack0xfffe)[(int)unaff_DI] = (&stack0xfffe)[(int)unaff_DI] | bVar4;
    puVar9 = (undefined8 *)FUN_1000_1774();
    return puVar9;
  case 0x44:
  case 0x45:
  case 0x46:
  case 0x47:
  case 0x48:
  case 0x49:
  case 0x4a:
  case 0x4b:
  case 0x4c:
  case 0x4d:
  case 0x4e:
  case 0x4f:
  case 0x50:
  case 0x51:
  case 0x5d:
  case 0x5e:
  case 0x5f:
  case 0x60:
  case 0x61:
  case 0x62:
  case 0x7e:
  case 0x7f:
  case 0x80:
  case 0x81:
  case 0x82:
  case 0x9e:
  case 0x9f:
  case 0xa0:
    puVar9 = (undefined8 *)FUN_1000_0ed8();
    return puVar9;
  case 0x52:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x53:
  case 0x54:
  case 0x55:
  case 0x56:
  case 0x57:
  case 0x58:
  case 0x59:
  case 0x5a:
  case 0x5b:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x5c:
    goto switchD_1000_1185_caseD_5c;
  case 99:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 100:
  case 0x65:
  case 0x66:
  case 0x67:
  case 0x68:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x69:
    *(int *)(iStack_12 + 0x11cf) =
         (int)((int)unaff_DI + (uint)bVar19 + *(int *)(iStack_12 + 0x11cf));
    FUN_1000_01de();
    FUN_1000_01de();
    FUN_1000_01de();
    FUN_1000_01de();
    FUN_1000_2bcc();
    FUN_1000_088e();
    return puVar15;
  case 0x6a:
  case 0x6b:
  case 0x6c:
  case 0x6d:
  case 0x6e:
  case 0x6f:
  case 0x70:
  case 0x71:
  case 0x72:
  case 0x73:
  case 0x74:
  case 0x75:
  case 0x76:
  case 0x77:
  case 0x78:
  case 0x79:
  case 0x7a:
  case 0x7b:
  case 0x7c:
    *(int *)((int)piVar13 + (int)unaff_SI) =
         (int)(*(int *)((int)piVar13 + (int)unaff_SI) + (int)puVar9);
    return puVar9;
  case 0x7d:
    DAT_1010_026c = unaff_SI;
    DAT_1010_026e = piVar13;
    DAT_1010_0270 = 0x1010;
    UINT_1010_02a2._0_1_ = 1;
    return puVar9;
  case 0x83:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x84:
  case 0x85:
  case 0x86:
  case 0x87:
  case 0x88:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x89:
    *(char *)((int)piVar13 + (int)unaff_SI) =
         *(char *)((int)piVar13 + (int)unaff_SI) + bVar4 + bVar19;
    *(int *)((int)piVar13 + (int)unaff_SI) =
         (int)(*(int *)((int)piVar13 + (int)unaff_SI) + (int)puVar9);
    goto code_r0x10000276;
  case 0x9d:
    UINT_1010_02a2._0_1_ = 1;
    DAT_1010_0270 = 0x1010;
    DAT_1010_026e = piVar13;
    DAT_1010_026c = unaff_SI;
    return puVar9;
  }
  iVar10 = LOCALINIT();
  puVar9 = (undefined8 *)0x0;
  if (iVar10 != 0) {
LAB_1000_0084:
    LOCKSEGMENT();
    uVar17 = GETVERSION();
    *(undefined2 *)&DAT_1010_016c = CONCAT11((char)uVar17,(char)((uint)uVar17 >> 8));
    if ((uRam10000010 & 1) == 0) {
      pcVar3 = (code *)swi(0x21);
      uVar17 = (*pcVar3)();
    }
    else {
      uVar17 = DOS3CALL();
    }
    *(undefined2 *)&DAT_1010_0170 = uVar17;
    *(undefined2 *)&DAT_1010_016e = CONCAT11((char)uVar17,(char)((uint)uVar17 >> 8));
    if ((uRam10000010 & 1) == 0) {
      *(undefined1 *)&DAT_1010_0173 = 0;
    }
    FUN_1000_010e();
    FUN_1000_0684();
    *(char *)&DAT_1010_0150 = *(char *)&DAT_1010_0150 + '\x01';
    puVar9 = (undefined8 *)FUN_1000_0634();
  }
  return puVar9;
switchD_1000_1185_caseD_5c:
  DAT_1010_027a = (double)in_ST0;
  puVar9 = unaff_SI;
  puVar15 = unaff_DI;
  goto LAB_1000_106e;
}


// ---- FUN_1000_10b6 @ 1000:10b6

/* WARNING: Instruction at (ram,0x10000282) overlaps instruction at (ram,0x1000027f)
    */
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x1000001e) */
/* WARNING: Removing unreachable block (ram,0x10001127) */

undefined8 * __cdecl16far
FUN_1000_10b6(undefined2 param_1,uint param_2,uint param_3,uint param_4,double param_5)

{
  byte *pbVar1;
  byte *pbVar2;
  code *pcVar3;
  byte bVar4;
  char cVar5;
  undefined1 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  int iVar11;
  byte bVar12;
  uint uVar13;
  undefined2 extraout_DX;
  undefined2 extraout_DX_00;
  int *piVar14;
  undefined8 *unaff_SI;
  byte *pbVar15;
  undefined8 *unaff_DI;
  byte *pbVar16;
  undefined2 unaff_ES;
  undefined2 unaff_SS;
  undefined2 uVar17;
  undefined1 uVar18;
  bool bVar19;
  longdouble lVar20;
  undefined4 uVar21;
  undefined8 *puVar22;
  byte bStack_13;
  undefined4 uStack_14;
  int iStack_12;
  
  uVar8 = 0x1010;
  uVar17 = 0x1010;
  lVar20 = (longdouble)param_5;
  FUN_1000_1880();
  UINT_1010_02a2._0_1_ = '\0';
  uVar7 = extraout_DX_00;
LAB_1000_10e9:
  puVar22 = (undefined8 *)CONCAT22(uVar7,unaff_SI);
  puVar9 = (undefined8 *)(uint)bStack_13;
  if ((((char)bStack_13 < '\x01') || (bStack_13 == 6)) &&
     (DAT_1010_015e = (double)lVar20, bStack_13 != 6)) goto LAB_1000_1109;
  puVar10 = (undefined8 *)(int)(char)bStack_13;
  DAT_1010_026c = puVar10;
  piVar14 = (int *)(iStack_12 + 1);
  DAT_1010_026e = piVar14;
  DAT_1010_0270 = 0x1010;
  UINT_1010_02a0._1_1_ = '\0';
  if (((*piVar14 == 0x6f6c) && (*(char *)(iStack_12 + 3) == 'g')) && (bStack_13 == 2)) {
    UINT_1010_02a0._1_1_ = '\x01';
  }
  if (((char)UINT_1010_02a2 == '\0') &&
     (DAT_1010_0272 = CONCAT26(param_4,CONCAT24(param_3,CONCAT22(param_2,param_1))),
     *(char *)(iStack_12 + 0xd) != '\x01')) {
    DAT_1010_027a = param_5;
  }
  bVar12 = ((char *)((int)piVar14 + (int)puVar10))[5];
  uVar13 = (uint)bVar12;
  bVar19 = 0xfd75 < uVar13;
  puVar9 = (undefined8 *)(uVar13 + 0x28a);
  bVar4 = (byte)unaff_SI;
  uVar18 = (undefined1)((uint)unaff_SI >> 8);
  switch(bVar12) {
  case 0:
    goto code_r0x100011b4;
  case 1:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 2:
    lVar20 = (longdouble)0;
    goto code_r0x100011b4;
  case 3:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 4:
    if (lVar20 < (longdouble)0) goto code_r0x100011a9;
    lVar20 = (longdouble)DAT_1010_061c;
    goto code_r0x100011b4;
  case 5:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 6:
code_r0x100011a9:
    lVar20 = -(longdouble)DAT_1010_061c;
code_r0x100011b4:
    DAT_1010_0282 = (double)lVar20;
    puVar9 = (undefined8 *)FUN_1000_2060();
    if (puVar9 == (undefined8 *)0x0) {
      cVar5 = '!';
      if ((UINT_1010_02a0._1_1_ != '\0') || ((undefined8 *)0x2 < DAT_1010_026c)) {
        cVar5 = '\"';
      }
      puVar9 = (undefined8 *)(int)cVar5;
      DAT_1010_0168 = puVar9;
      if (*(int *)((int)puVar10 * 2 + 0x290) != 0) {
        FUN_1000_2192();
        FUN_1000_2192();
        puVar9 = (undefined8 *)FUN_1000_126d();
      }
    }
    lVar20 = (longdouble)DAT_1010_0282;
    DAT_1010_015e = DAT_1010_0282;
LAB_1000_1109:
    if ((char)UINT_1010_02a2 == '\0') {
      DAT_1010_015e = (double)lVar20;
      puVar9 = (undefined8 *)&DAT_1010_015e;
    }
    return puVar9;
  case 7:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 8:
    ((char *)((int)piVar14 + (int)puVar10))[0x51] =
         (char)(CONCAT11(bVar19,((char *)((int)piVar14 + (int)puVar10))[0x51]) >> 1);
    *(byte *)((int)piVar14 + (int)puVar10) = *(byte *)((int)piVar14 + (int)puVar10) | bVar4;
    *(char *)((int)piVar14 + (int)puVar10) = *(char *)((int)piVar14 + (int)puVar10) - (char)uVar7;
    uVar8 = uVar17;
    break;
  case 9:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 10:
switchD_1000_1185_caseD_a:
    break;
  default:
    *(char *)((int)piVar14 + (int)puVar10) = *(char *)((int)piVar14 + (int)puVar10) + bVar4;
    *(char *)((int)piVar14 + (int)puVar10) = *(char *)((int)piVar14 + (int)puVar10) + bVar4;
    *(char *)((int)piVar14 + (int)puVar10) = *(char *)((int)piVar14 + (int)puVar10) + bVar4;
    *(char *)((int)piVar14 + (int)puVar10) = *(char *)((int)piVar14 + (int)puVar10) + bVar4;
    *(char *)((int)piVar14 + (int)puVar10) = *(char *)((int)piVar14 + (int)puVar10) + bVar4;
    *(char *)((int)piVar14 + (int)puVar10) = *(char *)((int)piVar14 + (int)puVar10) + bVar4;
    *(char *)((int)piVar14 + (int)puVar10) = *(char *)((int)piVar14 + (int)puVar10) + bVar4;
    *(char *)((int)piVar14 + (int)puVar10) = *(char *)((int)piVar14 + (int)puVar10) + bVar4;
    puVar9 = (undefined8 *)entry();
    return puVar9;
  case 0xf:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x10:
    break;
  case 0x13:
  case 0x8a:
  case 0x8b:
  case 0x8c:
  case 0x8d:
  case 0x8e:
  case 0x8f:
  case 0x90:
  case 0x91:
  case 0x92:
  case 0x93:
  case 0x94:
  case 0x95:
  case 0x96:
  case 0x97:
  case 0x98:
  case 0x99:
  case 0x9a:
  case 0x9b:
  case 0x9c:
    if (DAT_1010_0176 <= piVar14) goto LAB_1000_02b7;
    if ((DAT_1010_01ca != 0) && ((param_3 & 0x8000) != 0)) {
      if (param_4 == 0) goto LAB_1000_02b7;
      uVar18 = 0;
      if ((uRam10000010 & 1) == 0) {
        pcVar3 = (code *)swi(0x21);
        uVar21 = (*pcVar3)();
      }
      else {
        uVar21 = DOS3CALL();
      }
      if ((bool)uVar18) goto LAB_1000_02b7;
      if ((param_4 & 2) == 0) {
        if ((int)((int)((ulong)uVar21 >> 0x10) + param_3 + (uint)CARRY2((uint)uVar21,param_2)) < 0)
        goto LAB_1000_02b7;
      }
      else {
        if ((uRam10000010 & 1) == 0) {
          pcVar3 = (code *)swi(0x21);
          uVar21 = (*pcVar3)();
        }
        else {
          uVar21 = DOS3CALL();
        }
        if ((int)((int)((ulong)uVar21 >> 0x10) + param_3 + (uint)CARRY2((uint)uVar21,param_2)) < 0)
        {
code_r0x10000276:
          if ((uRam10000010 & 1) == 0) {
            pcVar3 = (code *)swi(0x21);
            (*pcVar3)();
          }
          else {
            DOS3CALL();
          }
          goto LAB_1000_02b7;
        }
      }
    }
    uVar18 = 0;
    if ((uRam10000010 & 1) == 0) {
      pcVar3 = (code *)swi(0x21);
      (*pcVar3)();
    }
    else {
      DOS3CALL();
    }
    if (!(bool)uVar18) {
      *(byte *)(piVar14 + 0xbc) = *(byte *)(piVar14 + 0xbc) & 0xfd;
    }
LAB_1000_02b7:
    puVar9 = (undefined8 *)FUN_1000_083f();
    return puVar9;
  case 0x14:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x15:
    pbVar16 = (byte *)(uVar13 + 0x28b);
    *(undefined1 *)puVar9 = *(undefined1 *)puVar10;
    goto code_r0x1000203b;
  case 0x16:
  case 0xa2:
    func_0x10190053();
    puVar9 = (undefined8 *)entry();
    return puVar9;
  case 0x19:
  case 0x1c:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x1a:
  case 0x1d:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x1b:
    uVar6 = in(uVar7);
    uVar8 = CONCAT11(uVar18,uVar6);
    *(undefined2 *)&DAT_1010_0146 = puVar9;
    *(undefined2 *)&DAT_1010_0148 = uVar8;
    *(uint *)&DAT_1010_014a = uVar13;
    *(undefined2 *)&DAT_1010_014c = piVar14;
    *(undefined2 *)&DAT_1010_014e = puVar10;
    if (uVar13 != 0) goto switchD_1000_1185_caseD_a;
    goto LAB_1000_0084;
  case 0x1e:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x1f:
    return (undefined8 *)((int)unaff_SI + 1);
  case 0x22:
    out(*(undefined1 *)puVar10,uVar7);
    return unaff_SI;
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
  case 0x3a:
  case 0x3b:
  case 0x3c:
  case 0x3d:
  case 0x3e:
  case 0x3f:
  case 0x40:
  case 0x41:
  case 0xa1:
switchD_1000_1185_caseD_a1:
    uVar6 = in(uVar7);
    unaff_ES = CONCAT11(uVar18,uVar6);
    *(undefined2 *)&DAT_1010_0600 = param_1;
    *(uint *)&DAT_1010_0602 = param_2;
    *(uint *)&DAT_1010_0604 = param_3;
    *(uint *)&DAT_1010_0606 = param_4;
    puVar22 = (undefined8 *)FUN_1000_23ec();
    pbVar16 = (byte *)&DAT_1010_0608;
    pbVar15 = (byte *)&DAT_1010_0601;
    for (iVar11 = (int)*(char *)&DAT_1010_0600; bVar12 = 0, uVar17 = unaff_ES, iVar11 != 0;
        iVar11 = iVar11 + -1) {
      pbVar2 = pbVar16;
      pbVar16 = pbVar16 + 1;
      pbVar1 = pbVar15;
      pbVar15 = pbVar15 + 1;
      *pbVar2 = *pbVar1;
    }
code_r0x1000203b:
    *pbVar16 = bVar12;
    *(uint *)&DAT_1010_05f6 = (uint)piVar14 & 0xff;
    *(undefined2 *)&DAT_1010_05f8 = (int)((ulong)puVar22 >> 0x10);
    *(undefined2 *)&DAT_1010_05fa = (undefined8 *)puVar22;
    *(undefined2 *)&DAT_1010_05fc = 0x608;
    *(undefined2 *)&DAT_1010_05fe = uVar17;
    return (undefined8 *)&DAT_1010_05f6;
  case 0x2b:
    *(char *)piVar14 = (char)*piVar14 + '\x01';
    return unaff_SI;
  case 0x2c:
  case 0x2d:
  case 0x2e:
  case 0x2f:
    if (iStack_12 != 0) {
      pbVar1 = (byte *)((int)uStack_14 + -2);
      *pbVar1 = *pbVar1 | 1;
    }
    return unaff_SI;
  case 0x30:
    *(undefined2 *)puVar9 = *(undefined2 *)puVar10;
    goto switchD_1000_1185_caseD_a1;
  case 0x42:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x43:
    (&stack0xfffe)[(int)puVar9] = (&stack0xfffe)[(int)puVar9] | bVar4;
    puVar9 = (undefined8 *)FUN_1000_1774();
    return puVar9;
  case 0x44:
  case 0x45:
  case 0x46:
  case 0x47:
  case 0x48:
  case 0x49:
  case 0x4a:
  case 0x4b:
  case 0x4c:
  case 0x4d:
  case 0x4e:
  case 0x4f:
  case 0x50:
  case 0x51:
  case 0x5d:
  case 0x5e:
  case 0x5f:
  case 0x60:
  case 0x61:
  case 0x62:
  case 0x7e:
  case 0x7f:
  case 0x80:
  case 0x81:
  case 0x82:
  case 0x9e:
  case 0x9f:
  case 0xa0:
    puVar9 = (undefined8 *)FUN_1000_0ed8();
    return puVar9;
  case 0x52:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x53:
  case 0x54:
  case 0x55:
  case 0x56:
  case 0x57:
  case 0x58:
  case 0x59:
  case 0x5a:
  case 0x5b:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x5c:
    goto switchD_1000_1185_caseD_5c;
  case 99:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 100:
  case 0x65:
  case 0x66:
  case 0x67:
  case 0x68:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x69:
    *(int *)(iStack_12 + 0x11cf) = (int)((int)puVar9 + (uint)bVar19 + *(int *)(iStack_12 + 0x11cf));
    FUN_1000_01de();
    FUN_1000_01de();
    FUN_1000_01de();
    FUN_1000_01de();
    FUN_1000_2bcc();
    FUN_1000_088e();
    return unaff_DI;
  case 0x6a:
  case 0x6b:
  case 0x6c:
  case 0x6d:
  case 0x6e:
  case 0x6f:
  case 0x70:
  case 0x71:
  case 0x72:
  case 0x73:
  case 0x74:
  case 0x75:
  case 0x76:
  case 0x77:
  case 0x78:
  case 0x79:
  case 0x7a:
  case 0x7b:
  case 0x7c:
    *(int *)((int)piVar14 + (int)puVar10) =
         (int)(*(int *)((int)piVar14 + (int)puVar10) + (int)unaff_SI);
    return unaff_SI;
  case 0x7d:
    DAT_1010_026c = puVar10;
    DAT_1010_026e = piVar14;
    DAT_1010_0270 = 0x1010;
    return unaff_SI;
  case 0x83:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x84:
  case 0x85:
  case 0x86:
  case 0x87:
  case 0x88:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x89:
    *(char *)((int)piVar14 + (int)puVar10) = *(char *)((int)piVar14 + (int)puVar10) + bVar4 + bVar19
    ;
    *(int *)((int)piVar14 + (int)puVar10) =
         (int)(*(int *)((int)piVar14 + (int)puVar10) + (int)unaff_SI);
    goto code_r0x10000276;
  case 0x9d:
    DAT_1010_0270 = 0x1010;
    DAT_1010_026e = piVar14;
    DAT_1010_026c = puVar10;
    return unaff_SI;
  }
  iVar11 = LOCALINIT();
  puVar9 = (undefined8 *)0x0;
  if (iVar11 != 0) {
LAB_1000_0084:
    LOCKSEGMENT();
    uVar7 = GETVERSION();
    *(undefined2 *)&DAT_1010_016c = CONCAT11((char)uVar7,(char)((uint)uVar7 >> 8));
    if ((uRam10000010 & 1) == 0) {
      pcVar3 = (code *)swi(0x21);
      uVar7 = (*pcVar3)();
    }
    else {
      uVar7 = DOS3CALL();
    }
    *(undefined2 *)&DAT_1010_0170 = uVar7;
    *(undefined2 *)&DAT_1010_016e = CONCAT11((char)uVar7,(char)((uint)uVar7 >> 8));
    if ((uRam10000010 & 1) == 0) {
      *(undefined1 *)&DAT_1010_0173 = 0;
    }
    FUN_1000_010e();
    FUN_1000_0684();
    *(char *)&DAT_1010_0150 = *(char *)&DAT_1010_0150 + '\x01';
    puVar9 = (undefined8 *)FUN_1000_0634();
  }
  return puVar9;
switchD_1000_1185_caseD_5c:
  DAT_1010_027a = (double)lVar20;
  FUN_1000_1880();
  UINT_1010_02a2._0_1_ = '\x01';
  uVar7 = extraout_DX;
  unaff_SI = puVar10;
  unaff_DI = puVar9;
  goto LAB_1000_10e9;
}


// ---- FUN_1000_10d0 @ 1000:10d0

/* WARNING: Instruction at (ram,0x10000282) overlaps instruction at (ram,0x1000027f)
    */
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x1000001e) */
/* WARNING: Removing unreachable block (ram,0x10001127) */

undefined8 * __cdecl16far
FUN_1000_10d0(undefined2 param_1,uint param_2,uint param_3,uint param_4,double param_5)

{
  byte *pbVar1;
  byte *pbVar2;
  code *pcVar3;
  byte bVar4;
  char cVar5;
  undefined1 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  int iVar11;
  byte bVar12;
  uint uVar13;
  undefined2 extraout_DX;
  undefined2 extraout_DX_00;
  int *piVar14;
  undefined8 *unaff_SI;
  byte *pbVar15;
  undefined8 *unaff_DI;
  byte *pbVar16;
  undefined2 unaff_ES;
  undefined2 unaff_SS;
  undefined2 uVar17;
  undefined1 uVar18;
  bool bVar19;
  longdouble lVar20;
  undefined4 uVar21;
  undefined8 *puVar22;
  byte bStack_13;
  undefined4 uStack_14;
  int iStack_12;
  
  uVar8 = 0x1010;
  uVar17 = 0x1010;
  lVar20 = (longdouble)(double)CONCAT26(param_4,CONCAT24(param_3,CONCAT22(param_2,param_1)));
  FUN_1000_183e();
  UINT_1010_02a2._0_1_ = '\0';
  uVar7 = extraout_DX_00;
LAB_1000_10e9:
  puVar22 = (undefined8 *)CONCAT22(uVar7,unaff_SI);
  puVar9 = (undefined8 *)(uint)bStack_13;
  if ((((char)bStack_13 < '\x01') || (bStack_13 == 6)) &&
     (DAT_1010_015e = (double)lVar20, bStack_13 != 6)) goto LAB_1000_1109;
  puVar10 = (undefined8 *)(int)(char)bStack_13;
  DAT_1010_026c = puVar10;
  piVar14 = (int *)(iStack_12 + 1);
  DAT_1010_026e = piVar14;
  DAT_1010_0270 = 0x1010;
  UINT_1010_02a0._1_1_ = '\0';
  if (((*piVar14 == 0x6f6c) && (*(char *)(iStack_12 + 3) == 'g')) && (bStack_13 == 2)) {
    UINT_1010_02a0._1_1_ = '\x01';
  }
  if (((char)UINT_1010_02a2 == '\0') &&
     (DAT_1010_0272 = CONCAT26(param_4,CONCAT24(param_3,CONCAT22(param_2,param_1))),
     *(char *)(iStack_12 + 0xd) != '\x01')) {
    DAT_1010_027a = param_5;
  }
  bVar12 = ((char *)((int)piVar14 + (int)puVar10))[5];
  uVar13 = (uint)bVar12;
  bVar19 = 0xfd75 < uVar13;
  puVar9 = (undefined8 *)(uVar13 + 0x28a);
  bVar4 = (byte)unaff_SI;
  uVar18 = (undefined1)((uint)unaff_SI >> 8);
  switch(bVar12) {
  case 0:
    goto code_r0x100011b4;
  case 1:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 2:
    lVar20 = (longdouble)0;
    goto code_r0x100011b4;
  case 3:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 4:
    if (lVar20 < (longdouble)0) goto code_r0x100011a9;
    lVar20 = (longdouble)DAT_1010_061c;
    goto code_r0x100011b4;
  case 5:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 6:
code_r0x100011a9:
    lVar20 = -(longdouble)DAT_1010_061c;
code_r0x100011b4:
    DAT_1010_0282 = (double)lVar20;
    puVar9 = (undefined8 *)FUN_1000_2060();
    if (puVar9 == (undefined8 *)0x0) {
      cVar5 = '!';
      if ((UINT_1010_02a0._1_1_ != '\0') || ((undefined8 *)0x2 < DAT_1010_026c)) {
        cVar5 = '\"';
      }
      puVar9 = (undefined8 *)(int)cVar5;
      DAT_1010_0168 = puVar9;
      if (*(int *)((int)puVar10 * 2 + 0x290) != 0) {
        FUN_1000_2192();
        FUN_1000_2192();
        puVar9 = (undefined8 *)FUN_1000_126d();
      }
    }
    lVar20 = (longdouble)DAT_1010_0282;
    DAT_1010_015e = DAT_1010_0282;
LAB_1000_1109:
    if ((char)UINT_1010_02a2 == '\0') {
      DAT_1010_015e = (double)lVar20;
      puVar9 = (undefined8 *)&DAT_1010_015e;
    }
    return puVar9;
  case 7:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 8:
    ((char *)((int)piVar14 + (int)puVar10))[0x51] =
         (char)(CONCAT11(bVar19,((char *)((int)piVar14 + (int)puVar10))[0x51]) >> 1);
    *(byte *)((int)piVar14 + (int)puVar10) = *(byte *)((int)piVar14 + (int)puVar10) | bVar4;
    *(char *)((int)piVar14 + (int)puVar10) = *(char *)((int)piVar14 + (int)puVar10) - (char)uVar7;
    uVar8 = uVar17;
    break;
  case 9:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 10:
switchD_1000_1185_caseD_a:
    break;
  default:
                    /* Segment:    1
                       Offset:     00000cf0
                       Length:     351d
                       Min Alloc:  351d
                       Flags:      0d50
                           Code
                           Moveable
                           Preload
                           Impure (Non-shareable)
                        */
    *(char *)((int)piVar14 + (int)puVar10) = *(char *)((int)piVar14 + (int)puVar10) + bVar4;
    *(char *)((int)piVar14 + (int)puVar10) = *(char *)((int)piVar14 + (int)puVar10) + bVar4;
    *(char *)((int)piVar14 + (int)puVar10) = *(char *)((int)piVar14 + (int)puVar10) + bVar4;
    *(char *)((int)piVar14 + (int)puVar10) = *(char *)((int)piVar14 + (int)puVar10) + bVar4;
    *(char *)((int)piVar14 + (int)puVar10) = *(char *)((int)piVar14 + (int)puVar10) + bVar4;
    *(char *)((int)piVar14 + (int)puVar10) = *(char *)((int)piVar14 + (int)puVar10) + bVar4;
    *(char *)((int)piVar14 + (int)puVar10) = *(char *)((int)piVar14 + (int)puVar10) + bVar4;
    *(char *)((int)piVar14 + (int)puVar10) = *(char *)((int)piVar14 + (int)puVar10) + bVar4;
    puVar9 = (undefined8 *)entry();
    return puVar9;
  case 0xf:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x10:
    break;
  case 0x13:
  case 0x8a:
  case 0x8b:
  case 0x8c:
  case 0x8d:
  case 0x8e:
  case 0x8f:
  case 0x90:
  case 0x91:
  case 0x92:
  case 0x93:
  case 0x94:
  case 0x95:
  case 0x96:
  case 0x97:
  case 0x98:
  case 0x99:
  case 0x9a:
  case 0x9b:
  case 0x9c:
    if (DAT_1010_0176 <= piVar14) goto LAB_1000_02b7;
    if ((DAT_1010_01ca != 0) && ((param_3 & 0x8000) != 0)) {
      if (param_4 == 0) goto LAB_1000_02b7;
      uVar18 = 0;
      if ((uRam10000010 & 1) == 0) {
        pcVar3 = (code *)swi(0x21);
        uVar21 = (*pcVar3)();
      }
      else {
        uVar21 = DOS3CALL();
      }
      if ((bool)uVar18) goto LAB_1000_02b7;
      if ((param_4 & 2) == 0) {
        if ((int)((int)((ulong)uVar21 >> 0x10) + param_3 + (uint)CARRY2((uint)uVar21,param_2)) < 0)
        goto LAB_1000_02b7;
      }
      else {
        if ((uRam10000010 & 1) == 0) {
          pcVar3 = (code *)swi(0x21);
          uVar21 = (*pcVar3)();
        }
        else {
          uVar21 = DOS3CALL();
        }
        if ((int)((int)((ulong)uVar21 >> 0x10) + param_3 + (uint)CARRY2((uint)uVar21,param_2)) < 0)
        {
code_r0x10000276:
          if ((uRam10000010 & 1) == 0) {
            pcVar3 = (code *)swi(0x21);
            (*pcVar3)();
          }
          else {
            DOS3CALL();
          }
          goto LAB_1000_02b7;
        }
      }
    }
    uVar18 = 0;
    if ((uRam10000010 & 1) == 0) {
      pcVar3 = (code *)swi(0x21);
      (*pcVar3)();
    }
    else {
      DOS3CALL();
    }
    if (!(bool)uVar18) {
      *(byte *)(piVar14 + 0xbc) = *(byte *)(piVar14 + 0xbc) & 0xfd;
    }
LAB_1000_02b7:
    puVar9 = (undefined8 *)FUN_1000_083f();
    return puVar9;
  case 0x14:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x15:
    pbVar16 = (byte *)(uVar13 + 0x28b);
    *(undefined1 *)puVar9 = *(undefined1 *)puVar10;
    goto code_r0x1000203b;
  case 0x16:
  case 0xa2:
    func_0x10190053();
    puVar9 = (undefined8 *)entry();
    return puVar9;
  case 0x19:
  case 0x1c:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x1a:
  case 0x1d:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x1b:
    uVar6 = in(uVar7);
    uVar8 = CONCAT11(uVar18,uVar6);
    *(undefined2 *)&DAT_1010_0146 = puVar9;
    *(undefined2 *)&DAT_1010_0148 = uVar8;
    *(uint *)&DAT_1010_014a = uVar13;
    *(undefined2 *)&DAT_1010_014c = piVar14;
    *(undefined2 *)&DAT_1010_014e = puVar10;
    if (uVar13 != 0) goto switchD_1000_1185_caseD_a;
    goto LAB_1000_0084;
  case 0x1e:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x1f:
    return (undefined8 *)((int)unaff_SI + 1);
  case 0x22:
    out(*(undefined1 *)puVar10,uVar7);
    return unaff_SI;
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
  case 0x3a:
  case 0x3b:
  case 0x3c:
  case 0x3d:
  case 0x3e:
  case 0x3f:
  case 0x40:
  case 0x41:
  case 0xa1:
switchD_1000_1185_caseD_a1:
    uVar6 = in(uVar7);
    unaff_ES = CONCAT11(uVar18,uVar6);
    *(undefined2 *)&DAT_1010_0600 = param_1;
    *(uint *)&DAT_1010_0602 = param_2;
    *(uint *)&DAT_1010_0604 = param_3;
    *(uint *)&DAT_1010_0606 = param_4;
    puVar22 = (undefined8 *)FUN_1000_23ec();
    pbVar16 = (byte *)&DAT_1010_0608;
    pbVar15 = (byte *)&DAT_1010_0601;
    for (iVar11 = (int)*(char *)&DAT_1010_0600; bVar12 = 0, uVar17 = unaff_ES, iVar11 != 0;
        iVar11 = iVar11 + -1) {
      pbVar2 = pbVar16;
      pbVar16 = pbVar16 + 1;
      pbVar1 = pbVar15;
      pbVar15 = pbVar15 + 1;
      *pbVar2 = *pbVar1;
    }
code_r0x1000203b:
    *pbVar16 = bVar12;
    *(uint *)&DAT_1010_05f6 = (uint)piVar14 & 0xff;
    *(undefined2 *)&DAT_1010_05f8 = (int)((ulong)puVar22 >> 0x10);
    *(undefined2 *)&DAT_1010_05fa = (undefined8 *)puVar22;
    *(undefined2 *)&DAT_1010_05fc = 0x608;
    *(undefined2 *)&DAT_1010_05fe = uVar17;
    return (undefined8 *)&DAT_1010_05f6;
  case 0x2b:
    *(char *)piVar14 = (char)*piVar14 + '\x01';
    return unaff_SI;
  case 0x2c:
  case 0x2d:
  case 0x2e:
  case 0x2f:
    if (iStack_12 != 0) {
      pbVar1 = (byte *)((int)uStack_14 + -2);
      *pbVar1 = *pbVar1 | 1;
    }
    return unaff_SI;
  case 0x30:
    *(undefined2 *)puVar9 = *(undefined2 *)puVar10;
    goto switchD_1000_1185_caseD_a1;
  case 0x42:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x43:
    (&stack0xfffe)[(int)puVar9] = (&stack0xfffe)[(int)puVar9] | bVar4;
    puVar9 = (undefined8 *)FUN_1000_1774();
    return puVar9;
  case 0x44:
  case 0x45:
  case 0x46:
  case 0x47:
  case 0x48:
  case 0x49:
  case 0x4a:
  case 0x4b:
  case 0x4c:
  case 0x4d:
  case 0x4e:
  case 0x4f:
  case 0x50:
  case 0x51:
  case 0x5d:
  case 0x5e:
  case 0x5f:
  case 0x60:
  case 0x61:
  case 0x62:
  case 0x7e:
  case 0x7f:
  case 0x80:
  case 0x81:
  case 0x82:
  case 0x9e:
  case 0x9f:
  case 0xa0:
    puVar9 = (undefined8 *)FUN_1000_0ed8();
    return puVar9;
  case 0x52:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x53:
  case 0x54:
  case 0x55:
  case 0x56:
  case 0x57:
  case 0x58:
  case 0x59:
  case 0x5a:
  case 0x5b:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x5c:
    goto switchD_1000_1185_caseD_5c;
  case 99:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 100:
  case 0x65:
  case 0x66:
  case 0x67:
  case 0x68:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x69:
    *(int *)(iStack_12 + 0x11cf) = (int)((int)puVar9 + (uint)bVar19 + *(int *)(iStack_12 + 0x11cf));
    FUN_1000_01de();
    FUN_1000_01de();
    FUN_1000_01de();
    FUN_1000_01de();
    FUN_1000_2bcc();
    FUN_1000_088e();
    return unaff_DI;
  case 0x6a:
  case 0x6b:
  case 0x6c:
  case 0x6d:
  case 0x6e:
  case 0x6f:
  case 0x70:
  case 0x71:
  case 0x72:
  case 0x73:
  case 0x74:
  case 0x75:
  case 0x76:
  case 0x77:
  case 0x78:
  case 0x79:
  case 0x7a:
  case 0x7b:
  case 0x7c:
    *(int *)((int)piVar14 + (int)puVar10) =
         (int)(*(int *)((int)piVar14 + (int)puVar10) + (int)unaff_SI);
    return unaff_SI;
  case 0x7d:
    DAT_1010_026c = puVar10;
    DAT_1010_026e = piVar14;
    DAT_1010_0270 = 0x1010;
    return unaff_SI;
  case 0x83:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x84:
  case 0x85:
  case 0x86:
  case 0x87:
  case 0x88:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x89:
    *(char *)((int)piVar14 + (int)puVar10) = *(char *)((int)piVar14 + (int)puVar10) + bVar4 + bVar19
    ;
    *(int *)((int)piVar14 + (int)puVar10) =
         (int)(*(int *)((int)piVar14 + (int)puVar10) + (int)unaff_SI);
    goto code_r0x10000276;
  case 0x9d:
    DAT_1010_0270 = 0x1010;
    DAT_1010_026e = piVar14;
    DAT_1010_026c = puVar10;
    return unaff_SI;
  }
  iVar11 = LOCALINIT();
  puVar9 = (undefined8 *)0x0;
  if (iVar11 != 0) {
LAB_1000_0084:
    LOCKSEGMENT();
    uVar7 = GETVERSION();
    *(undefined2 *)&DAT_1010_016c = CONCAT11((char)uVar7,(char)((uint)uVar7 >> 8));
    if ((uRam10000010 & 1) == 0) {
      pcVar3 = (code *)swi(0x21);
      uVar7 = (*pcVar3)();
    }
    else {
      uVar7 = DOS3CALL();
    }
    *(undefined2 *)&DAT_1010_0170 = uVar7;
    *(undefined2 *)&DAT_1010_016e = CONCAT11((char)uVar7,(char)((uint)uVar7 >> 8));
    if ((uRam10000010 & 1) == 0) {
      *(undefined1 *)&DAT_1010_0173 = 0;
    }
    FUN_1000_010e();
    FUN_1000_0684();
    *(char *)&DAT_1010_0150 = *(char *)&DAT_1010_0150 + '\x01';
    puVar9 = (undefined8 *)FUN_1000_0634();
  }
  return puVar9;
switchD_1000_1185_caseD_5c:
  DAT_1010_027a = (double)lVar20;
  FUN_1000_1880();
  UINT_1010_02a2._0_1_ = '\x01';
  uVar7 = extraout_DX;
  unaff_SI = puVar10;
  unaff_DI = puVar9;
  goto LAB_1000_10e9;
}


// ---- FUN_1000_1236 @ 1000:1236

int * __stdcall16far FUN_1000_1236(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  piVar3 = (int *)&DAT_1010_0790;
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


// ---- FUN_1000_126d @ 1000:126d

undefined2 __stdcall16far FUN_1000_126d(void)

{
  return 0x1010;
}


// ---- FUN_1000_128e @ 1000:128e

void FUN_1000_128e(void)

{
  char *pcVar1;
  undefined2 in_AX;
  char *pcVar2;
  int iVar3;
  int unaff_BP;
  char *pcVar4;
  undefined2 unaff_CS;
  undefined2 uVar5;
  
  uVar5 = in_AX;
  FUN_1000_0660();
  FUN_1000_126d(in_AX);
  pcVar2 = (char *)FUN_1000_1236(uVar5);
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
  FATALAPPEXIT(unaff_CS,pcVar2,0x1010);
  FATALEXIT(0x1018,0xff,uVar5);
  if (DAT_1010_11ac == 0) {
    FUN_1000_12ec(0x1010,unaff_BP + 1);
    DAT_1010_11ac = DAT_1010_11ac + 1;
  }
  return;
}


// ---- FUN_1000_12d0 @ 1000:12d0

void __cdecl16far FUN_1000_12d0(void)

{
  int unaff_BP;
  
  if (DAT_1010_11ac == 0) {
    FUN_1000_12ec(0x1010,unaff_BP + 1);
    DAT_1010_11ac = DAT_1010_11ac + 1;
  }
  return;
}


// ---- FUN_1000_12ec @ 1000:12ec

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_1000_12ec(void)

{
  char cVar1;
  long lVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  int in_DX;
  undefined2 uVar6;
  undefined2 uVar7;
  long lVar8;
  long lVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  undefined4 local_c;
  undefined4 local_8;
  
  pcVar3 = (char *)FUN_1000_21dc(0x2a4,0x1010);
  local_c = (char *)CONCAT22(in_DX,pcVar3);
  if ((in_DX == 0 && pcVar3 == (char *)0x0) || (*local_c == '\0')) {
    local_8 = (char *)GETDOSENVIRONMENT(0x1000);
    if (local_8 == (char *)0x0) {
      return;
    }
    if (*local_8 == '\0') {
      return;
    }
    while( true ) {
      uVar7 = (undefined2)((ulong)local_8 >> 0x10);
      pcVar3 = (char *)local_8;
      if ((*local_8 == '\0') || (iVar4 = FUN_1000_2338(pcVar3,uVar7,0x2a7,0x1010,3), iVar4 == 0))
      break;
      iVar4 = FUN_1000_16d6(pcVar3,uVar7);
      local_8 = (char *)CONCAT22(uVar7,pcVar3 + iVar4 + 1);
    }
    if (*local_8 == '\0') {
      return;
    }
    local_c = (char *)0x101011ae;
    FUN_1000_2374(0x11ae,0x1010,pcVar3 + 3,uVar7,0x10);
  }
  uVar7 = local_c._2_2_;
  pcVar3 = (char *)local_c;
  FUN_1000_21ae(DAT_1010_03f0,DAT_1010_03f2,(char *)local_c,local_c._2_2_,3);
  local_c = (char *)CONCAT22(local_c._2_2_,(char *)local_c + 3);
  cVar1 = *local_c;
  if (cVar1 == '-') {
    local_c = (char *)CONCAT22(local_c._2_2_,pcVar3 + 4);
  }
  uVar6 = 0;
  uVar11 = 0;
  uVar10 = 0xe10;
  uVar7 = thunk_FUN_1000_0890((char *)local_c,uVar7,0xe10,0);
  lVar8 = FUN_1000_050c(uVar7,uVar6,uVar10,uVar11);
  DAT_1010_03e4 = (int)((ulong)lVar8 >> 0x10);
  DAT_1010_03e2 = (uint)lVar8;
  while( true ) {
    uVar7 = (undefined2)((ulong)local_c >> 0x10);
    if ((*local_c != '+') && ((*local_c < '0' || ('9' < *local_c)))) break;
    local_c = (char *)CONCAT22(uVar7,(char *)local_c + 1);
  }
  if (*local_c == ':') {
    uVar6 = 0;
    uVar11 = 0;
    uVar10 = 0x3c;
    local_c._0_2_ = (char *)local_c + 1;
    local_c = (char *)CONCAT22(uVar7,(char *)local_c);
    uVar7 = thunk_FUN_1000_0890((char *)local_c,uVar7,0x3c,0);
    lVar9 = FUN_1000_050c(uVar7,uVar6,uVar10,uVar11);
    lVar8 = CONCAT22(DAT_1010_03e4,DAT_1010_03e2);
    iVar4 = (int)((ulong)lVar9 >> 0x10);
    lVar2 = lVar9 + lVar8;
    DAT_1010_03e2 = (uint)lVar2;
    DAT_1010_03e4 = (int)((ulong)lVar2 >> 0x10);
    while( true ) {
      uVar7 = (undefined2)((ulong)local_c >> 0x10);
      if ((*local_c < '0') || ('9' < *local_c)) break;
      local_c = (char *)CONCAT22(uVar7,(char *)local_c + 1);
    }
    lVar8 = lVar9 + lVar8;
    if (*local_c == ':') {
      local_c._0_2_ = (char *)local_c + 1;
      local_c = (char *)CONCAT22(uVar7,(char *)local_c);
      uVar5 = thunk_FUN_1000_0890((char *)local_c,uVar7);
      iVar4 = DAT_1010_03e4 + iVar4 + (uint)CARRY2(DAT_1010_03e2,uVar5);
      while ((lVar8 = CONCAT22(iVar4,DAT_1010_03e2 + uVar5), '/' < *local_c &&
             (lVar8 = CONCAT22(iVar4,DAT_1010_03e2 + uVar5), *local_c < ':'))) {
        local_c = (char *)CONCAT22(local_c._2_2_,(char *)local_c + 1);
      }
    }
  }
  DAT_1010_03e4 = (int)((ulong)lVar8 >> 0x10);
  DAT_1010_03e2 = (uint)lVar8;
  if (cVar1 == '-') {
    lVar8 = CONCAT22(-(DAT_1010_03e4 + (uint)(DAT_1010_03e2 != 0)),-DAT_1010_03e2);
  }
  DAT_1010_03e4 = (int)((ulong)lVar8 >> 0x10);
  DAT_1010_03e2 = (uint)lVar8;
  DAT_1010_03e6 = (int)*local_c;
  if (DAT_1010_03e6 == 0) {
    *_DAT_1010_03f4 = 0;
  }
  else {
    FUN_1000_21ae(DAT_1010_03f4,DAT_1010_03f6,(char *)local_c,(int)((ulong)local_c >> 0x10),3);
  }
  return;
}


// ---- FUN_1000_14b4 @ 1000:14b4

undefined2 __cdecl16far FUN_1000_14b4(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  int local_6;
  
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  iVar4 = (int)param_1;
  if (((*(int *)(iVar4 + 10) < 0x43) || (*(int *)(iVar4 + 8) < 3)) || (9 < *(int *)(iVar4 + 8)))
  goto LAB_1000_157d;
  if ((*(int *)(iVar4 + 8) < 4) || (8 < *(int *)(iVar4 + 8))) {
    uVar1 = *(uint *)(iVar4 + 10);
    if (((int)uVar1 < 0x57) || (*(int *)(iVar4 + 8) != 3)) {
      local_6 = *(int *)(*(int *)(iVar4 + 8) * 2 + 0x3ca);
    }
    else {
      local_6 = *(int *)(*(int *)(iVar4 + 8) * 2 + 0x3c8) + 7;
    }
    if ((uVar1 & 3) == 0) {
      local_6 = local_6 + 1;
    }
    uVar1 = (uVar1 - 0x46) * 0x16d + ((int)(uVar1 - 1) >> 2) + local_6;
    iVar2 = FUN_1000_2298(uVar1 - 0xd,((int)uVar1 >> 0xf) - (uint)(uVar1 < 0xd),7,0);
    iVar3 = -(iVar2 - local_6);
    if (*(int *)(iVar4 + 8) == 3) {
      if ((iVar3 < *(int *)(iVar4 + 0xe)) ||
         ((-*(int *)(iVar4 + 0xe) == iVar2 - local_6 && (1 < *(int *)(iVar4 + 4)))))
      goto LAB_1000_1568;
    }
    else if ((*(int *)(iVar4 + 0xe) < iVar3) ||
            ((*(int *)(iVar4 + 0xe) == iVar3 && (*(int *)(iVar4 + 4) < 1)))) goto LAB_1000_1568;
LAB_1000_157d:
    uVar5 = 0;
  }
  else {
LAB_1000_1568:
    uVar5 = 1;
  }
  return uVar5;
}


// ---- FUN_1000_1588 @ 1000:1588

void __cdecl16near FUN_1000_1588(void)

{
  undefined2 uVar1;
  int iVar2;
  int in_DX;
  
  uVar1 = DAT_1010_0626;
  LOCK();
  DAT_1010_0626 = 0x1000;
  UNLOCK();
  iVar2 = FUN_1000_2847();
  DAT_1010_0626 = uVar1;
  if (in_DX != 0 || iVar2 != 0) {
    return;
  }
  FUN_1000_128e();
  return;
}


// ---- ___EXPORTEDSTUB @ 1000:15b6

undefined2 __cdecl16far ___EXPORTEDSTUB(void)

{
  return 0;
}


// ---- FUN_1000_15ca @ 1000:15ca

undefined2 * __cdecl16far FUN_1000_15ca(char *param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  
  while (uVar3 = (undefined2)((ulong)param_1 >> 0x10), (*(byte *)(*param_1 + 0x2ad) & 8) != 0) {
    param_1 = (char *)CONCAT22(uVar3,(char *)param_1 + 1);
  }
  uVar1 = FUN_1000_2194((char *)param_1,uVar3,0,0);
  uVar4 = FUN_1000_27c2(0x1000,(char *)param_1,uVar3,uVar1);
  uVar3 = (undefined2)((ulong)uVar4 >> 0x10);
  iVar2 = (int)uVar4;
  DAT_1010_1e5a = *(undefined2 *)(iVar2 + 8);
  DAT_1010_1e5c = *(undefined2 *)(iVar2 + 10);
  DAT_1010_1e5e = *(undefined2 *)(iVar2 + 0xc);
  DAT_1010_1e60 = *(undefined2 *)(iVar2 + 0xe);
  return (undefined2 *)&DAT_1010_1e5a;
}


// ---- FUN_1000_1628 @ 1000:1628

void __cdecl16far FUN_1000_1628(char *param_1,int param_2,undefined4 param_3)

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
    FUN_1000_16f0(pcVar4,uVar6,pcVar4 + 1,uVar6);
  }
  return;
}


// ---- FUN_1000_16d6 @ 1000:16d6

uint __cdecl16far FUN_1000_16d6(char *param_1)

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


// ---- FUN_1000_16f0 @ 1000:16f0

void __cdecl16far FUN_1000_16f0(char *param_1,char *param_2)

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


// ---- FUN_1000_172c @ 1000:172c

undefined2 * __cdecl16far FUN_1000_172c(undefined2 *param_1,undefined1 param_2,uint param_3)

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


// ---- FUN_1000_1774 @ 1000:1774

undefined2 * __cdecl16far FUN_1000_1774(undefined2 *param_1,undefined2 *param_2,uint param_3)

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
    lVar15 = FUN_1000_2278(puVar10,iVar13,puVar8,iVar14);
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
          iVar14 = iVar14 + 0x68;
        }
        if (puVar12 == (undefined2 *)0x0) {
          iVar13 = iVar13 + 0x68;
        }
      }
    }
    else {
      uVar6 = param_3 - 1;
      puVar9 = (undefined1 *)((int)puVar8 + uVar6);
      if (CARRY2((uint)puVar8,uVar6)) {
        iVar14 = iVar14 + 0x68;
      }
      puVar11 = (undefined1 *)((int)puVar10 + uVar6);
      if (CARRY2((uint)puVar10,uVar6)) {
        iVar13 = iVar13 + 0x68;
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
          iVar14 = iVar14 + -0x68;
        }
        if (puVar11 == (undefined1 *)0xffff) {
          iVar13 = iVar13 + -0x68;
        }
      }
    }
  }
  return puVar10;
}


// ---- FUN_1000_183e @ 1000:183e

void FUN_1000_183e(void)

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
                    /* WARNING: Could not recover jumptable at 0x1000187e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*(undefined2 *)
             (in_DX + *(char *)(ulong)((byte)((bVar2 & 7) << 1 | (char)bVar2 < '\0') + 0x40d) + 0x10
             ))();
  return;
}


// ---- FUN_1000_1880 @ 1000:1880

void FUN_1000_1880(void)

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
                    /* WARNING: Could not recover jumptable at 0x100018e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*(undefined2 *)
             (in_DX + (char)(*(byte *)(ulong)(((byte)(cVar2 << 1 | cVar2 < '\0') & 0xf) + 0x40d) |
                            *(char *)(ulong)((byte)((bVar3 & 7) << 1 | (char)bVar3 < '\0') + 0x40d)
                            << 2) + 0x10))();
  return;
}


// ---- FUN_1000_200a @ 1000:200a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 __cdecl16far
FUN_1000_200a(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

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
  _DAT_1010_0600 = param_1;
  _DAT_1010_0602 = param_2;
  DAT_1010_0604 = param_3;
  DAT_1010_0606 = param_4;
  uVar6 = FUN_1000_23ec(&iStack_2);
  puVar5 = (undefined1 *)&DAT_1010_0608;
  puVar4 = (undefined1 *)&DAT_1010_0601;
  for (iVar3 = (int)DAT_1010_0600; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar2 = *puVar1;
  }
  *puVar5 = 0;
  DAT_1010_05f6 = in_BX & 0xff;
  DAT_1010_05f8 = (int)((ulong)uVar6 >> 0x10);
  DAT_1010_05fa = (int)uVar6;
  DAT_1010_05fc = 0x608;
  DAT_1010_05fe = 0x1010;
  return 0x5f6;
}


// ---- FUN_1000_2060 @ 1000:2060

undefined2 __cdecl16far FUN_1000_2060(void)

{
  return 0;
}


// ---- FUN_1000_207a @ 1000:207a

void __cdecl16near FUN_1000_207a(void)

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
    FUN_1000_2171();
    if ((*unaff_SI & 1) != 0) {
      in_CX = (in_CX - *unaff_SI) + -1;
    }
    uVar4 = *(uint *)(in_BX + 4);
    if (uVar4 != 0) {
      if (!CARRY2(in_CX + 2U,uVar4)) {
        uVar2 = FUN_1000_087e();
        uVar4 = *(uint *)&DAT_1010_0626;
        if (uVar4 == 0x1000) goto LAB_1000_20cc;
        uVar5 = 0x8000;
        while (uVar4 <= uVar5) {
          uVar5 = uVar5 >> 1;
          if (uVar5 == 0) goto LAB_1000_20e5;
        }
        if (uVar5 < 8) goto LAB_1000_20e5;
        uVar4 = uVar5 << 1;
        goto LAB_1000_20cc;
      }
      uVar5 = 0xfff0;
      if (in_CX + 2U + uVar4 == 0) {
        while( true ) {
          bVar8 = false;
          iVar3 = FUN_1000_210b();
          if (!bVar8) break;
          if (uVar5 == 0xfff0) {
            return;
          }
LAB_1000_20e5:
          uVar4 = 0x10;
LAB_1000_20cc:
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


// ---- FUN_1000_210b @ 1000:210b

void __cdecl16near FUN_1000_210b(void)

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
LAB_1000_2166:
    FUN_1000_128e();
    return;
  }
  iVar5 = *(int *)(in_BX + 6);
  uVar3 = 0;
  if (in_AX == 0) {
    if ((uRam10000010 & 0x10) != 0) {
      return;
    }
    uVar3 = 1;
  }
  uVar1 = 0x2002;
  if ((uRam10000010 & 1) == 0) {
    uVar1 = 0x2020;
  }
  iVar6 = iVar5;
  iVar2 = GLOBALREALLOC(0x1000,uVar1,in_AX,uVar3);
  if (iVar2 != 0) {
    if ((iVar2 != iVar5) || (lVar4 = GLOBALSIZE(0x1018,iVar5,iVar6), lVar4 == 0))
    goto LAB_1000_2166;
    if ((*(byte *)(iVar5 + 2) & 4) != 0) {
      *(int *)(iVar5 + -2) = in_BX + -1;
    }
  }
  return;
}


// ---- FUN_1000_2171 @ 1000:2171

void __cdecl16near FUN_1000_2171(void)

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


// ---- FUN_1000_2192 @ 1000:2192

void __cdecl16far FUN_1000_2192(void)

{
  return;
}


// ---- FUN_1000_2194 @ 1000:2194

uint __cdecl16far FUN_1000_2194(char *param_1)

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


// ---- FUN_1000_21ae @ 1000:21ae

char * __cdecl16far FUN_1000_21ae(char *param_1,char *param_2,int param_3)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  undefined2 uVar5;
  
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  pcVar3 = (char *)param_2;
  pcVar4 = (char *)param_1;
  if (param_3 != 0) {
    do {
      pcVar1 = pcVar3;
      pcVar3 = pcVar3 + 1;
      if (*pcVar1 == '\0') break;
      pcVar2 = pcVar4;
      pcVar4 = pcVar4 + 1;
      *pcVar2 = *pcVar1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
    for (; param_3 != 0; param_3 = param_3 + -1) {
      pcVar1 = pcVar4;
      pcVar4 = pcVar4 + 1;
      *pcVar1 = '\0';
    }
  }
  return (char *)param_1;
}


// ---- thunk_FUN_1000_0890 @ 1000:21d8

int __cdecl16far thunk_FUN_1000_0890(byte *param_1)

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
  if ((bVar2 != 0x2d) && (bVar3 = bVar2, bVar2 != 0x2b)) goto LAB_1000_08b1;
  while( true ) {
    pbVar1 = pbVar5;
    pbVar5 = pbVar5 + 1;
    bVar3 = *pbVar1;
LAB_1000_08b1:
    if ((0x39 < bVar3) || (bVar3 < 0x30)) break;
    iVar4 = iVar4 * 10 + (uint)(byte)(bVar3 - 0x30);
  }
  if (bVar2 == 0x2d) {
    iVar4 = -iVar4;
  }
  return iVar4;
}


// ---- FUN_1000_21dc @ 1000:21dc

int __cdecl16far FUN_1000_21dc(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  undefined2 uVar5;
  undefined4 local_8;
  
  local_8 = (int *)CONCAT22(DAT_1010_0194,DAT_1010_0192);
  if ((DAT_1010_0194 != 0 || DAT_1010_0192 != (int *)0x0) && (param_2 != 0 || param_1 != 0)) {
    uVar1 = FUN_1000_2194(param_1,param_2);
    while( true ) {
      uVar5 = (undefined2)((ulong)local_8 >> 0x10);
      piVar4 = (int *)local_8;
      if (piVar4[1] == 0 && *local_8 == 0) break;
      uVar2 = FUN_1000_2194(*local_8,piVar4[1]);
      if (((uVar1 < uVar2) && (*(char *)((int)*(undefined4 *)local_8 + uVar1) == '=')) &&
         (iVar3 = FUN_1000_28ee(*local_8,piVar4[1],param_1,param_2,uVar1), iVar3 == 0)) {
        return *local_8 + uVar1 + 1;
      }
      local_8 = (int *)CONCAT22(uVar5,piVar4 + 2);
    }
  }
  return 0;
}


// ---- FUN_1000_2278 @ 1000:2278

undefined4 __stdcall16far FUN_1000_2278(uint param_1,uint param_2,uint param_3,uint param_4)

{
  return CONCAT22(((param_2 >> 4) - (param_4 >> 4)) - (uint)(param_1 < param_3),param_1 - param_3);
}


// ---- FUN_1000_2298 @ 1000:2298

undefined4 __stdcall16far FUN_1000_2298(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  bool bVar13;
  
  bVar13 = (int)param_2 < 0;
  if (bVar13) {
    bVar12 = param_1 != 0;
    param_1 = -param_1;
    param_2 = -(uint)bVar12 - param_2;
  }
  uVar11 = (uint)bVar13;
  if ((int)param_4 < 0) {
    bVar13 = param_3 != 0;
    param_3 = -param_3;
    param_4 = -(uint)bVar13 - param_4;
  }
  uVar4 = param_1;
  uVar3 = param_3;
  uVar8 = param_2;
  uVar9 = param_4;
  if (param_4 == 0) {
    iVar5 = (int)(((ulong)param_2 % (ulong)param_3 << 0x10 | (ulong)param_1) % (ulong)param_3);
    iVar6 = 0;
    if ((int)(uVar11 - 1) < 0) goto LAB_1000_2332;
  }
  else {
    do {
      uVar10 = uVar9 >> 1;
      uVar3 = (uint)(CONCAT12((uVar9 & 1) != 0,uVar3) >> 1);
      uVar7 = uVar8 >> 1;
      uVar4 = (uint)(CONCAT12((uVar8 & 1) != 0,uVar4) >> 1);
      uVar8 = uVar7;
      uVar9 = uVar10;
    } while (uVar10 != 0);
    uVar1 = CONCAT22(uVar7,uVar4) / (ulong)uVar3;
    uVar3 = (int)uVar1 * param_4;
    lVar2 = (uVar1 & 0xffff) * (ulong)param_3;
    uVar8 = (uint)((ulong)lVar2 >> 0x10);
    uVar4 = (uint)lVar2;
    uVar9 = uVar8 + uVar3;
    if (((CARRY2(uVar8,uVar3)) || (param_2 < uVar9)) || ((param_2 <= uVar9 && (param_1 < uVar4)))) {
      bVar13 = uVar4 < param_3;
      uVar4 = uVar4 - param_3;
      uVar9 = (uVar9 - param_4) - (uint)bVar13;
    }
    iVar5 = uVar4 - param_1;
    iVar6 = (uVar9 - param_2) - (uint)(uVar4 < param_1);
    if (-1 < (int)(uVar11 - 1)) goto LAB_1000_2332;
  }
  bVar13 = iVar5 != 0;
  iVar5 = -iVar5;
  iVar6 = -(uint)bVar13 - iVar6;
LAB_1000_2332:
  return CONCAT22(iVar6,iVar5);
}


// ---- FUN_1000_2338 @ 1000:2338

uint __cdecl16far FUN_1000_2338(char *param_1,char *param_2,int param_3)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  
  uVar4 = 0;
  if (param_3 != 0) {
    uVar7 = (undefined2)((ulong)param_1 >> 0x10);
    pcVar6 = (char *)param_1;
    iVar3 = param_3;
    pcVar5 = pcVar6;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pcVar1 = pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (*pcVar1 != '\0');
    param_3 = param_3 - iVar3;
    uVar8 = (undefined2)((ulong)param_2 >> 0x10);
    pcVar5 = (char *)param_2;
    do {
      if (param_3 == 0) break;
      param_3 = param_3 + -1;
      pcVar2 = pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar1 = pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (*pcVar1 == *pcVar2);
    uVar4 = 0;
    if ((byte)pcVar5[-1] <= (byte)pcVar6[-1]) {
      if (pcVar5[-1] == pcVar6[-1]) {
        return 0;
      }
      uVar4 = 0xfffe;
    }
    uVar4 = ~uVar4;
  }
  return uVar4;
}


// ---- FUN_1000_2374 @ 1000:2374

char * __cdecl16far FUN_1000_2374(char *param_1,char *param_2,int param_3)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  undefined2 uVar5;
  
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  pcVar3 = (char *)param_2;
  pcVar4 = (char *)param_1;
  if (param_3 != 0) {
    do {
      pcVar1 = pcVar3;
      pcVar3 = pcVar3 + 1;
      if (*pcVar1 == '\0') break;
      pcVar2 = pcVar4;
      pcVar4 = pcVar4 + 1;
      *pcVar2 = *pcVar1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
    for (; param_3 != 0; param_3 = param_3 + -1) {
      pcVar1 = pcVar4;
      pcVar4 = pcVar4 + 1;
      *pcVar1 = '\0';
    }
  }
  return (char *)param_1;
}


// ---- FUN_1000_23ec @ 1000:23ec

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined4 __cdecl16near FUN_1000_23ec(void)

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
  
  pdVar30 = (double *)&DAT_1010_0628;
  for (iVar18 = 4; Var14 = _DAT_1010_0628, iVar18 != 0; iVar18 = iVar18 + -1) {
    pdVar3 = pdVar30;
    pdVar30 = (double *)((int)pdVar30 + 2);
    puVar1 = unaff_SI;
    unaff_SI = unaff_SI + 1;
    *(undefined2 *)pdVar3 = *puVar1;
  }
  uVar19 = DAT_1010_0628._6_2_;
                    /* WARNING: Ignoring partial resolution of indirect */
  DAT_1010_0628._7_1_ = DAT_1010_0628._7_1_ & 0x7f;
  Var15 = _DAT_1010_0628;
  DAT_1010_0628 = ABS((double)Var14);
  uVar24 = 0x20;
  if (((DAT_1010_0628._0_2_ == 0 && DAT_1010_0628._2_2_ == 0) && DAT_1010_0628._4_2_ == 0) &&
      DAT_1010_0628._6_2_ == 0) {
    DAT_1010_0634 = 0x3001;
    _DAT_1010_0628 = (longdouble)Var15;
    return 1;
  }
  if ((int)uVar19 < 0) {
    uVar24 = 0x2d;
  }
  if ((~uVar19 & 0x7ff0) == 0) {
    _DAT_1010_0628 = (longdouble)Var15;
    return 0x10000;
  }
  DAT_1010_0661 = (undefined1)in_FPUControlWord;
  DAT_1010_0663._0_1_ = DAT_1010_0661;
  lVar35 = (longdouble)DAT_1010_0628;
  DAT_1010_0628._7_1_ = (byte)((unkuint10)lVar35 >> 0x38);
  DAT_1010_0630 = (uint)((unkuint10)lVar35 >> 0x40);
  lVar12 = (ulong)DAT_1010_0630 * 0x4d10 + (ulong)((DAT_1010_0630 >> 8) * 0x4d);
  uVar19 = (uint)lVar12;
  iVar18 = ((int)((ulong)lVar12 >> 0x10) + (uint)CARRY2(uVar19,(uint)DAT_1010_0628._7_1_ * 0x9a) +
           -0x1343) -
           (uint)((undefined2 *)(uVar19 + (uint)DAT_1010_0628._7_1_ * 0x9a) <
                 (undefined2 *)&DAT_1010_12f4);
  _DAT_1010_0628 = lVar35;
  _DAT_1010_0661 = in_FPUControlWord;
  FUN_1000_2aa5(iVar18,uVar24);
  DAT_1010_065f =
       (uint)(_DAT_1000_239e < lVar35) << 8 | (uint)(NAN(_DAT_1000_239e) || NAN(lVar35)) << 10 |
       (uint)(_DAT_1000_239e == lVar35) << 0xe;
  if (_DAT_1000_239e < lVar35 || (_DAT_1000_239e == lVar35) != 0) {
    iVar18 = iVar18 + 1;
    lVar35 = _DAT_1000_23a8 * lVar35;
  }
  DAT_1010_0628._0_2_ = SUB102(lVar35,0);
  DAT_1010_0628._2_2_ = (uint)((unkuint10)lVar35 >> 0x10);
  DAT_1010_0628._4_2_ = (uint)((unkuint10)lVar35 >> 0x20);
  DAT_1010_0628._6_2_ = (uint)((unkuint10)lVar35 >> 0x30);
  DAT_1010_0630 = (uint)((unkuint10)lVar35 >> 0x40);
  bVar32 = false;
  bVar17 = 0;
  for (iVar20 = -(DAT_1010_0630 + 0xc002); iVar20 != 0; iVar20 = iVar20 + -1) {
    uVar19 = DAT_1010_0628._6_2_ & 1;
    DAT_1010_0628._6_2_ = DAT_1010_0628._6_2_ >> 1;
    bVar32 = (bVar17 & 1) != 0;
    bVar17 = (byte)(CONCAT11((DAT_1010_0628._0_2_ & 1) != 0,bVar17) >> 1);
    DAT_1010_0628._0_2_ = (uint)(CONCAT12((DAT_1010_0628._2_2_ & 1) != 0,DAT_1010_0628._0_2_) >> 1);
    DAT_1010_0628._2_2_ = (uint)(CONCAT12((DAT_1010_0628._4_2_ & 1) != 0,DAT_1010_0628._2_2_) >> 1);
    DAT_1010_0628._4_2_ = (uint)(CONCAT12(uVar19 != 0,DAT_1010_0628._4_2_) >> 1);
  }
  uVar28 = DAT_1010_0628._0_2_ + 0x39a + (uint)bVar32;
  uVar19 = (uint)(0xfc65 < DAT_1010_0628._0_2_ || CARRY2(DAT_1010_0628._0_2_ + 0x39a,(uint)bVar32));
  uVar26 = DAT_1010_0628._2_2_ + uVar19;
  uVar19 = (uint)CARRY2(DAT_1010_0628._2_2_,uVar19);
  uVar22 = DAT_1010_0628._4_2_ + uVar19;
  uVar19 = DAT_1010_0628._6_2_ + CARRY2(DAT_1010_0628._4_2_,uVar19);
  iVar20 = 0x10;
  pcVar16 = (char *)((int)(undefined2 *)&DAT_1010_0634 + 1);
  _DAT_1010_0628 = lVar35;
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
  DAT_1010_0634 = CONCAT11(DAT_1010_0634._1_1_,(char)iVar21 + '\x12');
  return CONCAT22(iVar18,1);
}


// ---- FUN_1000_27c2 @ 1000:27c2

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1000_27c2(undefined2 param_1,int param_2,undefined2 param_3)

{
  uint uVar1;
  int unaff_BP;
  undefined2 unaff_SS;
  int local_8 [2];
  undefined2 uStack_4;
  int iStack_2;
  
  iStack_2 = unaff_BP + 1;
  uStack_4 = 0x1010;
  uVar1 = FUN_1000_2ae2(0,param_2,param_3,local_8,unaff_SS,0x11c6,0x1010);
  DAT_1010_11c0 = local_8[0] - param_2;
  DAT_1010_11bf = 0;
  if ((uVar1 & 4) != 0) {
    DAT_1010_11bf = 2;
  }
  if ((uVar1 & 1) != 0) {
    DAT_1010_11bf = DAT_1010_11bf | 1;
  }
  DAT_1010_11be = (uVar1 & 2) != 0;
  return &DAT_1010_11be;
}


// ---- FUN_1000_2826 @ 1000:2826

undefined2 __cdecl16far FUN_1000_2826(undefined4 param_1)

{
  byte *pbVar1;
  int iVar2;
  
  iVar2 = (int)((ulong)param_1 >> 0x10);
  if (iVar2 != 0) {
    pbVar1 = (byte *)((int)param_1 + -2);
    *pbVar1 = *pbVar1 | 1;
  }
  return 0x1010;
}


// ---- FUN_1000_2847 @ 1000:2847

undefined2 __cdecl16far FUN_1000_2847(uint param_1)

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
  
  uVar5 = 0x1010;
  do {
    if (param_1 < 0xffe7) {
      bVar7 = false;
      if (*(int *)((int)(undefined4 *)&DAT_1010_0680 + 2) != 0) {
        pcVar4 = (code *)0x2bda;
        while( true ) {
          uVar3 = *(uint *)&DAT_1010_068a;
          uVar6 = (uint)((ulong)*(undefined4 *)&DAT_1010_0684 >> 0x10);
          in_BX = (int)*(undefined4 *)&DAT_1010_0684;
          uVar10 = uVar6;
          do {
            do {
              unaff_CS = 0x1000;
              uVar9 = (*pcVar4)();
              if (!bVar7) {
                if (pcVar4 == (code *)0x2bda) goto LAB_1000_28b8;
                goto LAB_1000_28b5;
              }
              puVar1 = (undefined4 *)(in_BX + 0xe);
              in_BX = (int)*puVar1;
              bVar7 = uVar6 < uVar3;
              bVar8 = uVar6 != uVar3;
              uVar6 = (uint)((ulong)*puVar1 >> 0x10);
            } while (bVar8);
            uVar3 = *(uint *)((int)*(undefined4 *)&DAT_1010_0684 + 0x14);
            uVar6 = (uint)((ulong)*(undefined4 *)&DAT_1010_0680 >> 0x10);
            in_BX = (int)*(undefined4 *)&DAT_1010_0680;
            bVar7 = uVar6 < uVar10;
            bVar8 = uVar6 != uVar10;
            uVar10 = uVar6;
          } while (bVar8);
          bVar7 = pcVar4 < (code *)0x207a;
          if (pcVar4 == (code *)0x207a) break;
          pcVar4 = (code *)0x207a;
        }
      }
      FUN_1000_2b4a();
      if (!bVar7) {
LAB_1000_28b5:
        uVar9 = FUN_1000_2bda();
LAB_1000_28b8:
        *(undefined2 *)((int)(undefined4 *)&DAT_1010_0684 + 2) = (int)((ulong)uVar9 >> 0x10);
        *(int *)&DAT_1010_0684 = in_BX;
        return (int)uVar9;
      }
    }
    if (*(int *)&DAT_1010_0674 == 0 && *(int *)&DAT_1010_0672 == 0) {
      return 0;
    }
    iVar2 = (*(code *)*(undefined2 *)&DAT_1010_0672)(unaff_CS,param_1);
    if (iVar2 == 0) {
      return 0;
    }
  } while( true );
}


// ---- FUN_1000_28ee @ 1000:28ee

uint __cdecl16far FUN_1000_28ee(char *param_1,char *param_2,int param_3)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  
  uVar4 = 0;
  if (param_3 != 0) {
    uVar7 = (undefined2)((ulong)param_1 >> 0x10);
    pcVar6 = (char *)param_1;
    iVar3 = param_3;
    pcVar5 = pcVar6;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pcVar1 = pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (*pcVar1 != '\0');
    param_3 = param_3 - iVar3;
    uVar8 = (undefined2)((ulong)param_2 >> 0x10);
    pcVar5 = (char *)param_2;
    do {
      if (param_3 == 0) break;
      param_3 = param_3 + -1;
      pcVar2 = pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar1 = pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (*pcVar1 == *pcVar2);
    uVar4 = 0;
    if ((byte)pcVar5[-1] <= (byte)pcVar6[-1]) {
      if (pcVar5[-1] == pcVar6[-1]) {
        return 0;
      }
      uVar4 = 0xfffe;
    }
    uVar4 = ~uVar4;
  }
  return uVar4;
}


// ---- FUN_1000_2aa5 @ 1000:2aa5

void __cdecl16near FUN_1000_2aa5(void)

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


// ---- FUN_1000_2ae2 @ 1000:2ae2

/* WARNING: Removing unreachable block (ram,0x10002b38) */
/* WARNING: Removing unreachable block (ram,0x10002b41) */

int FUN_1000_2ae2(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
                 undefined2 param_5,double *param_6)

{
  int iVar1;
  undefined2 unaff_SS;
  longdouble local_c;
  
  iVar1 = FUN_1000_2c56(param_1,param_2,param_3,param_4,param_5,&local_c,unaff_SS);
  *param_6 = (double)local_c;
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  return iVar1;
}


// ---- FUN_1000_2b4a @ 1000:2b4a

void __cdecl16near FUN_1000_2b4a(void)

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
    if ((uRam10000010 & 0x10) != 0) {
      return;
    }
    iVar2 = 1;
  }
  uVar6 = 0;
  uVar7 = uRam10000010;
  iVar1 = GLOBALALLOC(0x1000,uVar3,iVar2);
  if (iVar1 != 0) {
    if ((uVar6 & 1) != 0) {
      iVar2 = iVar1;
      uVar4 = GLOBALLOCK(0x1018,iVar1,iVar1,uVar7);
      iVar1 = (int)((ulong)uVar4 >> 0x10);
      if (((int)uVar4 != 0) || (iVar1 == 0)) goto LAB_1000_2bc1;
    }
    lVar5 = GLOBALSIZE(0x1018,iVar1);
    if (lVar5 == 0) {
LAB_1000_2bc1:
      FUN_1000_128e();
      return;
    }
    *(int *)0x6 = iVar2;
    *(undefined2 *)0x2 = *(undefined2 *)(unaff_DI + 0xc);
    FUN_1000_2ee8();
    FUN_1000_2f1c();
  }
  return;
}


// ---- FUN_1000_2bcc @ 1000:2bcc

void __cdecl16near FUN_1000_2bcc(void)

{
  FUN_1000_2ebe();
  return;
}


// ---- FUN_1000_2bda @ 1000:2bda

uint * __cdecl16near FUN_1000_2bda(void)

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
          if (CARRY2((uint)puVar1,uVar2)) goto LAB_1000_2c33;
          puVar6 = (uint *)((int)puVar1 + uVar2) + 1;
          uVar3 = *(uint *)((int)puVar1 + uVar2);
          if ((uVar3 & 1) == 0) break;
          uVar3 = uVar3 + uVar2 + 2;
          *puVar7 = uVar3;
        }
      }
      if (puVar6 + -1 < puVar5) break;
      if (((uint)puVar5 & 1) != 0) goto LAB_1000_2c33;
      puVar7 = (uint *)*(undefined2 *)(in_BX + 8);
      if ((uint *)*(undefined2 *)(in_BX + 10) == puVar7) goto LAB_1000_2c33;
      puVar5 = (uint *)((int)*(undefined2 *)(in_BX + 10) + -1);
    }
    puVar7 = (uint *)((int)puVar6 + uVar3);
  } while (!CARRY2((uint)puVar6,uVar3));
LAB_1000_2c33:
  puVar7 = (uint *)*(undefined2 *)(in_BX + 8);
  *(undefined2 *)(in_BX + 10) = puVar7;
  return puVar7;
}


// ---- FUN_1000_2c56 @ 1000:2c56

uint FUN_1000_2c56(undefined2 param_1,byte *param_2,int *param_3,uint *param_4)

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
LAB_1000_2ca5:
      pbVar1 = pbVar11;
      pbVar11 = pbVar9 + 2;
      bVar6 = *pbVar1;
    }
    else if (bVar6 == 0x2d) {
      local_16 = 0x8000;
      goto LAB_1000_2ca5;
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
            if (local_1c == 0) goto LAB_1000_2cf3;
            pbVar1 = pbVar11;
            pbVar11 = pbVar11 + 1;
            bVar6 = *pbVar1;
          }
          if (bVar6 == 0x2e) {
            do {
              pbVar1 = pbVar11;
              pbVar11 = pbVar11 + 1;
              bVar6 = *pbVar1;
LAB_1000_2d0d:
              if ((bVar6 < 0x30) || (0x39 < bVar6)) goto LAB_1000_2d29;
              pcVar2 = pcVar10;
              pcVar10 = pcVar10 + 1;
              *pcVar2 = bVar6 - 0x30;
              local_18 = local_18 + -1;
              local_1c = local_1c + -1;
            } while (local_1c != 0);
            goto LAB_1000_2d20;
          }
          goto LAB_1000_2d29;
        }
        do {
          local_18 = iVar5;
          bVar6 = *pbVar11;
LAB_1000_2cd2:
          pbVar11 = pbVar11 + 1;
          iVar5 = local_18 + -1;
        } while (bVar6 == 0x30);
        if (bVar6 != 0) goto LAB_1000_2d0d;
      }
      local_14 = pbVar11 + -1;
      goto LAB_1000_2e8b;
    }
    if ((bVar6 == 0x2e) && ((bVar6 = *pbVar11, 0x2f < bVar6 && (bVar6 < 0x3a)))) goto LAB_1000_2cd2;
  }
  local_10 = 4;
  goto LAB_1000_2e8b;
  while (iVar5 = local_18 + 1, bVar6 < 0x3a) {
LAB_1000_2cf3:
    local_18 = iVar5;
    pbVar1 = pbVar11;
    pbVar11 = pbVar11 + 1;
    bVar6 = *pbVar1;
    if (bVar6 < 0x30) break;
  }
  if (bVar6 == 0x2e) {
LAB_1000_2d20:
    do {
      pbVar1 = pbVar11;
      pbVar11 = pbVar11 + 1;
      bVar6 = *pbVar1;
      if (bVar6 < 0x30) break;
    } while (bVar6 < 0x3a);
  }
LAB_1000_2d29:
  local_1c = 0x19 - local_1c;
  local_14 = pbVar11 + -1;
  if ((((bVar6 == 0x45) || (bVar6 == 0x65)) || (bVar6 == 0x44)) || (bVar6 == 100)) {
    pbVar9 = pbVar11 + 1;
    bVar6 = *pbVar11;
    if (bVar6 == 0x2b) {
LAB_1000_2d58:
      pbVar1 = pbVar9;
      pbVar9 = pbVar11 + 2;
      bVar6 = *pbVar1;
    }
    else if (bVar6 == 0x2d) {
      local_1a = 0xffff;
      goto LAB_1000_2d58;
    }
    if ((0x2f < bVar6) && (bVar6 < 0x3a)) {
      uVar7 = bVar6 - 0x30;
      uVar8 = uVar7;
      do {
        pbVar1 = pbVar9;
        pbVar9 = pbVar9 + 1;
        bVar6 = *pbVar1;
        if ((bVar6 < 0x30) || (0x39 < bVar6)) goto LAB_1000_2d8f;
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
LAB_1000_2d8f:
      local_18 = local_18 + ((uVar8 ^ local_1a) - local_1a);
      local_14 = pbVar9 + -1;
    }
  }
  if (local_1c != 0) {
    *pcVar10 = '\0';
    pbVar11 = (byte *)(pcVar10 + -1);
    if (local_1c < 0x19) {
      if (local_18 != 0) goto LAB_1000_2dd6;
    }
    else {
      bVar6 = *pbVar11;
      *pbVar11 = 0;
      local_1c = local_1c - 1;
      local_18 = local_18 + 1;
      pbVar11 = (byte *)(pcVar10 + -2);
      if (bVar6 < 5) {
LAB_1000_2dd6:
        for (; *pbVar11 == 0; pbVar11 = pbVar11 + -1) {
          local_1c = local_1c - 1;
          local_18 = local_18 + 1;
        }
      }
      else {
        *pbVar11 = *pbVar11 + 1;
      }
    }
    FUN_1000_3464(&local_e,local_1c,local_36,unaff_SS);
    if (local_18 == 0) {
LAB_1000_2e10:
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
          goto LAB_1000_2e6d;
        }
LAB_1000_2e97:
        local_10 = local_10 | 1;
        goto LAB_1000_2e8b;
      }
    }
    else if (local_18 < 0x1450) {
      if (-0x1450 < local_18) {
        FUN_1000_320a(param_1,local_18,&local_e,unaff_SS);
        goto LAB_1000_2e10;
      }
      goto LAB_1000_2e97;
    }
    local_10 = local_10 | 2;
    puVar12[4] = local_16 | 0x7fff;
    puVar12[3] = 0x8000;
    puVar12[2] = 0;
    puVar12[1] = 0;
    *param_4 = 0;
    goto LAB_1000_2e6d;
  }
LAB_1000_2e8b:
  for (iVar14 = 5; iVar14 != 0; iVar14 = iVar14 + -1) {
    puVar3 = puVar12;
    puVar12 = puVar12 + 1;
    *puVar3 = 0;
  }
LAB_1000_2e6d:
  *param_3 = (int)local_14;
  ((int *)param_3)[1] = local_12;
  return local_10;
}


// ---- FUN_1000_2ebe @ 1000:2ebe

void __cdecl16near FUN_1000_2ebe(void)

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
    unaff_CS = 0x1018;
    iVar3 = iVar4;
    GLOBALFREE(0x1018);
  }
  return;
}


// ---- FUN_1000_2ee8 @ 1000:2ee8

void __cdecl16near FUN_1000_2ee8(void)

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
  *in_BX = 0x1010;
  in_BX[4] = piVar1;
  in_BX[5] = piVar1;
  in_BX[7] = 0;
  in_BX[8] = 0;
  in_BX[9] = 0;
  in_BX[10] = 0;
  return;
}


// ---- FUN_1000_2f1c @ 1000:2f1c

void __cdecl16near FUN_1000_2f1c(void)

{
  int in_BX;
  int iVar1;
  int *unaff_DI;
  undefined2 unaff_ES;
  undefined2 uVar2;
  
  if (unaff_DI[1] == 0) {
    unaff_DI[1] = 0x1010;
    *unaff_DI = in_BX;
  }
  else {
    uVar2 = (undefined2)((ulong)*(undefined4 *)(unaff_DI + 4) >> 0x10);
    iVar1 = (int)*(undefined4 *)(unaff_DI + 4);
    *(undefined2 *)(iVar1 + 0x10) = 0x1010;
    *(int *)(iVar1 + 0xe) = in_BX;
    *(undefined2 *)(in_BX + 0x14) = uVar2;
    *(int *)(in_BX + 0x12) = iVar1;
  }
  unaff_DI[5] = 0x1010;
  unaff_DI[4] = in_BX;
  unaff_DI[3] = 0x1010;
  unaff_DI[2] = in_BX;
  return;
}


// ---- FUN_1000_320a @ 1000:320a

void FUN_1000_320a(int param_1,uint param_2,undefined2 *param_3)

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
    local_8 = (code *)0x32a8;
    uVar2 = (undefined2)((ulong)param_3 >> 0x10);
    uStack_e = param_2;
    if (param_1 == 0) {
      local_8 = (code *)0x329e;
      in_ST0 = *(unkbyte10 *)((undefined2 *)param_3 + 1);
    }
    while (uStack_e != 0) {
      uVar1 = uStack_e & 7;
      uStack_e = uStack_e >> 3;
      if (uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x10003274. Too many branches */
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


// ---- FUN_1000_3464 @ 1000:3464

uint * FUN_1000_3464(uint *param_1,int param_2,byte *param_3)

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
    FUN_1000_3512();
    uVar18 = FUN_1000_3512();
    uVar8 = (uint)CARRY2((uint)((ulong)uVar18 >> 0x10),uVar8);
    uVar4 = uVar13 + uVar5 + uVar8;
    uVar13 = (uint)(CARRY2(uVar13,uVar5) || CARRY2(uVar13 + uVar5,uVar8));
    bVar17 = CARRY2(uVar6,uVar10);
    uVar6 = uVar6 + uVar10;
    uVar11 = uVar6 + uVar13;
    bVar15 = CARRY2((uint)uVar18,uVar3);
    uVar1 = (uint)uVar18 + uVar3;
    uVar18 = FUN_1000_3512();
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


// ---- FUN_1000_3512 @ 1000:3512

undefined4 __cdecl16near FUN_1000_3512(void)

{
  int in_AX;
  int in_DX;
  uint in_BX;
  
  return CONCAT22(in_DX << 1,in_AX << 1 | (uint)((in_BX & 0x8000) != 0));
}


// ---- FUN_1008_0000 @ 1008:0000

undefined2 __stdcall16far FUN_1008_0000(void)

{
                    /* Segment:    2
                       Offset:     000048f0
                       Length:     e340
                       Min Alloc:  e341
                       Flags:      0d50
                           Code
                           Moveable
                           Preload
                           Impure (Non-shareable)
                        */
  return 1;
}


// ---- WEP @ 1008:0014

undefined2 __stdcall16far WEP(void)

{
  return 1;
}


// ---- IMEX_REPORTID @ 1008:0028

void __cdecl16far IMEX_REPORTID(void)

{
  undefined2 unaff_CS;
  
  UIF_MESSAGE(unaff_CS,0x3fc,0x1008);
  return;
}


// ---- INITIALISE_IMEX_CONTROLLER_DATA @ 1008:0046

void __cdecl16far INITIALISE_IMEX_CONTROLLER_DATA(void)

{
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  M007_PUTLOW(unaff_CS,DAT_1010_06a8,DAT_1010_06aa);
  M007_PUTHIGH(0x1018,DAT_1010_06ac,DAT_1010_06ae);
  M007_PUTVALUE(0x1018,DAT_1010_06b0,DAT_1010_06b2);
  M007_PUTHIGH(0x1018,DAT_1010_06b4,DAT_1010_06b6);
  M007_PUTHIGH(0x1018,DAT_1010_06b8,DAT_1010_06ba);
  M007_PUTHIGH(0x1018,DAT_1010_06b8,DAT_1010_06ba);
  M007_PUTHIGH(0x1018,DAT_1010_06b8,DAT_1010_06ba);
  M007_PUTLOW(0x1018,DAT_1010_06bc,DAT_1010_06be);
  M007_PUTHIGH(0x1018,DAT_1010_06c0,DAT_1010_06c2);
  M007_PUTLOW(0x1018,DAT_1010_06c4,DAT_1010_06c6);
  M007_PUTVALUE(0x1018,DAT_1010_06c4,DAT_1010_06c6);
  M007_PUTHIGH(0x1018,DAT_1010_06c8,DAT_1010_06ca);
  M007_PUTLOW(0x1018,DAT_1010_06cc,DAT_1010_06ce);
  M007_PUTVALUE(0x1018,DAT_1010_06d0,DAT_1010_06d2);
  M007_PUTVALUE(0x1018,DAT_1010_06d4,DAT_1010_06d6);
  M007_PUTVALUE(0x1018,DAT_1010_06d4,DAT_1010_06d6);
  M007_PUTSTATE(0x1018,2);
  M007_PUTSTATE(0x1018,4);
  M007_PUTVALUE(0x1018,DAT_1010_06d8,DAT_1010_06da);
  M007_PUTSTATE(0x1018,3);
  M007_PUTSTATE(0x1018,0);
  M007_PUTSTATE(0x1018,1);
  M007_PUTHIGH(0x1018,DAT_1010_06dc,DAT_1010_06de);
  M007_PUTVALUE(0x1018,DAT_1010_06bc,DAT_1010_06be);
  M007_PUTVALUE(0x1018,DAT_1010_06b8,DAT_1010_06ba);
  M007_PUTLOW(0x1018,DAT_1010_06bc,DAT_1010_06be);
  M007_PUTLOW(0x1018,DAT_1010_06bc,DAT_1010_06be);
  M007_PUTHIGH(0x1018,DAT_1010_06b8,DAT_1010_06ba);
  M007_PUTHIGH(0x1018,DAT_1010_06b8,DAT_1010_06ba);
  M007_PUTVALUE(0x1018,DAT_1010_06c4,DAT_1010_06c6);
  M007_PUTLOW(0x1018,DAT_1010_06c4,DAT_1010_06c6);
  M007_PUTHIGH(0x1018,DAT_1010_06e0,DAT_1010_06e2);
  M007_PUTVALUE(0x1018,DAT_1010_06bc,DAT_1010_06be);
  M007_PUTLOW(0x1018,DAT_1010_06bc,DAT_1010_06be);
  M007_PUTHIGH(0x1018,DAT_1010_06e4,DAT_1010_06e6);
  uVar4 = 299;
  M007_PUTVALUE(0x1018,DAT_1010_06a8,DAT_1010_06aa);
  uVar3 = 299;
  M007_PUTLOW(0x1018,DAT_1010_06b8,DAT_1010_06ba);
  uVar2 = 299;
  M007_PUTHIGH(0x1018,DAT_1010_06ac,DAT_1010_06ae);
  uVar1 = 0xf7;
  M007_PUTSTATE(0x1018,0);
  IMEX_REPORTID(uVar1,uVar2,uVar3,uVar4);
  return;
}


// ---- INITIALISE_IMEX_CONTROLLER @ 1008:02d6

undefined2 __cdecl16far INITIALISE_IMEX_CONTROLLER(void)

{
  int iVar1;
  undefined2 uVar2;
  int in_DX;
  
  iVar1 = FUN_1008_aff2(0x414,0x1008,0x1010);
  if (iVar1 < 0) {
    UIF_LOG(0x1008,0x2000,0,0);
    uVar2 = 0x1b0;
  }
  else {
    iVar1 = FUN_1008_b064();
    if (in_DX == 0 && iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      UIF_LOG(0x1008,0x2000,0,0);
      uVar2 = 0x1c5;
    }
  }
  return uVar2;
}


// ---- IMEX_CONTROLLER_SHUTDOWN @ 1008:0330

undefined2 __cdecl16far IMEX_CONTROLLER_SHUTDOWN(void)

{
  FUN_1008_b39a(0x1000,0x1010);
  return 0;
}


// ---- IMEX_TIMER_TICK @ 1008:034a

void __stdcall16far IMEX_TIMER_TICK(void)

{
  FUN_1008_2814(0x1010);
  return;
}


// ---- TEST_800 @ 1008:0360

undefined2 * __stdcall16far TEST_800(undefined2 *param_1)

{
  undefined2 uVar1;
  undefined2 unaff_SS;
  
  uVar1 = DAT_1010_06be;
  *param_1 = DAT_1010_06bc;
  param_1[1] = uVar1;
  return param_1;
}


// ---- IMEX_CONTROLLER_SUSPEND @ 1008:0388

void __cdecl16far IMEX_CONTROLLER_SUSPEND(void)

{
  FUN_1008_b040(0x1010);
  return;
}


// ---- IMEX_CONTROLLER_REMOVE @ 1008:039e

void __cdecl16far IMEX_CONTROLLER_REMOVE(void)

{
  FUN_1008_b01c(0x1010);
  return;
}


// ---- HRRU_INTO_STANDBY @ 1008:03b4

void __cdecl16far HRRU_INTO_STANDBY(void)

{
  uint uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1010;
  uVar2 = 0x94;
  uVar1 = M007_GETSTATE();
  if (uVar1 != 0) {
    FUN_1008_b39a(uVar1 & 0xff00,uVar2,uVar3);
  }
  return;
}


// ---- HRRU_OUT_OF_STANDBY @ 1008:03d8

void __cdecl16far HRRU_OUT_OF_STANDBY(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1010;
  uVar2 = 0x94;
  iVar1 = M007_GETSTATE();
  if (iVar1 != 0) {
    FUN_1008_b39a(1,uVar2,uVar3);
  }
  return;
}


// ---- SWITCHHRRU_GAMMA @ 1008:041e

void __stdcall16far SWITCHHRRU_GAMMA(undefined2 param_1)

{
  undefined2 unaff_CS;
  
  M007_PUTSTATE(unaff_CS,param_1);
  return;
}


// ---- Z130PIXELDATA @ 1008:043a

undefined2 __stdcall16far Z130PIXELDATA(undefined2 *param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 *puVar4;
  undefined2 uVar5;
  
  iVar2 = M007_GETSTATE();
  puVar4 = (undefined2 *)param_1;
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  if (iVar2 == 1) {
    uVar3 = READ_AN_IMAGE_PIXEL(0x1018,puVar4[1],*param_1);
    OPLUT_RGB_READ(0x1018,0xb22,0x1010,uVar3);
    *(undefined1 *)(puVar4 + 3) = DAT_1010_0b22;
    *(undefined1 *)((int)puVar4 + 5) = DAT_1010_0b23;
    uVar1 = DAT_1010_0b24;
  }
  else {
    uVar1 = 0x80;
    *(undefined1 *)(puVar4 + 3) = 0x80;
    *(undefined1 *)((int)puVar4 + 5) = 0x80;
  }
  *(undefined1 *)(puVar4 + 2) = uVar1;
  return 0;
}


// ---- Z130LINEDATA @ 1008:04a2

undefined2 __stdcall16far Z130LINEDATA(int *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  undefined1 *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined1 *puVar10;
  undefined2 uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  int *piVar16;
  undefined2 uVar17;
  undefined2 unaff_CS;
  bool bVar18;
  long lVar19;
  undefined1 *puVar20;
  undefined4 uVar21;
  long lVar22;
  uint uVar23;
  int iVar24;
  int iVar25;
  undefined2 uVar26;
  undefined2 uVar27;
  uint local_46;
  undefined2 local_36;
  uint local_2c;
  uint local_28;
  undefined4 local_20;
  undefined4 local_18;
  int local_12;
  int local_10;
  int local_a;
  int local_8;
  int local_6;
  int local_4;
  
  uVar27 = 0x1010;
  uVar17 = (undefined2)((ulong)param_1 >> 0x10);
  piVar16 = (int *)param_1;
  iVar13 = *param_1;
  iVar25 = piVar16[1];
  local_6 = piVar16[2];
  local_4 = piVar16[3];
  uVar26 = 0;
  uVar11 = LOADCURSOR(unaff_CS,0x7f02,0);
  uVar11 = SETCURSOR(0x1018,uVar11,uVar26,uVar27);
  uVar9 = DAT_1010_1e56;
  iVar8 = DAT_1010_1b44;
  iVar7 = DAT_1010_1b42;
  uVar6 = DAT_1010_11d0;
  local_10 = 0;
  bVar18 = false;
  bVar3 = false;
  bVar4 = false;
  local_a = iVar13;
  if (local_6 < iVar13) {
    local_a = local_6;
    local_6 = iVar13;
  }
  local_8 = iVar25;
  if (local_4 < iVar25) {
    local_8 = local_4;
    local_4 = iVar25;
  }
  uVar12 = local_6 - local_a;
  if ((int)uVar12 < 1) {
    uVar12 = 1;
  }
  uVar15 = local_4 - local_8;
  if ((int)uVar15 < 1) {
    uVar15 = 1;
  }
  local_46 = uVar15;
  if ((int)uVar15 < (int)uVar12) {
    local_46 = uVar12;
  }
  if (0x400 < local_46) {
    local_46 = 0x400;
  }
  DAT_1010_1b44 = local_a;
  DAT_1010_1b42 = local_8;
  local_36 = 0;
  DAT_1010_11d0 = uVar15;
  DAT_1010_1e56 = uVar12;
  iVar13 = FUN_1008_a918();
  if (iVar13 == 0) {
    return 1;
  }
  uVar26 = 0x1018;
  iVar25 = 0x5c6;
  lVar19 = GLOBALLOCK(0x1008,iVar13);
  if (lVar19 == 0) {
    GLOBALFREE(0x1018,iVar13);
    return 1;
  }
  puVar1 = (undefined1 *)((uint)lVar19 + 8);
  iVar2 = (int)((ulong)lVar19 >> 0x10) + (-(uint)(0xfff7 < (uint)lVar19) & 0x68);
  puVar20 = (undefined1 *)CONCAT22(iVar2,puVar1);
  if (*param_1 < piVar16[2]) {
    if (piVar16[3] <= piVar16[1]) {
      bVar18 = true;
    }
  }
  else if (piVar16[3] < piVar16[1]) {
    bVar3 = true;
  }
  if ((bVar18) || (bVar3)) {
    uVar27 = 0;
    uVar21 = FUN_1000_050c(uVar15,0,uVar12,0);
    local_10 = GLOBALALLOC(0x1000,uVar21);
    iVar24 = iVar13;
    if (local_10 == 0) {
      GLOBALUNLOCK(0x1018,iVar13);
    }
    else {
      uVar26 = 0x1018;
      iVar25 = local_10;
      puVar20 = (undefined1 *)GLOBALLOCK(0x1018,local_10,uVar27);
      if (puVar20 != (undefined1 *)0x0) {
        bVar18 = false;
        local_20 = puVar20;
        for (local_28 = 0; (!bVar18 && (local_28 < uVar15)); local_28 = local_28 + 1) {
          uVar26 = 0x1000;
          uVar21 = FUN_1000_050c(local_28 + 1,0xfffe < local_28,uVar12,0);
          uVar14 = (int)uVar21 - 1;
          local_18 = (undefined1 *)
                     CONCAT22((((int)((ulong)uVar21 >> 0x10) - (uint)((int)uVar21 == 0)) +
                              (uint)CARRY2(uVar14,(uint)puVar1)) * 0x10 + iVar2,puVar1 + uVar14);
          bVar18 = false;
          for (local_2c = 0; (puVar10 = local_18, puVar5 = local_20, !bVar18 && (local_2c < uVar12))
              ; local_2c = local_2c + 1) {
            if ((undefined1 *)local_18 == (undefined1 *)0x0) {
              local_18._2_2_ = local_18._2_2_ + -0x68;
            }
            local_18 = (undefined1 *)CONCAT22(local_18._2_2_,(undefined1 *)local_18 + -1);
            if ((undefined1 *)local_20 == (undefined1 *)0xffff) {
              local_20._2_2_ = local_20._2_2_ + 0x68;
            }
            local_20 = (undefined1 *)CONCAT22(local_20._2_2_,(undefined1 *)local_20 + 1);
            *puVar5 = *puVar10;
            bVar18 = 0xfffe < local_2c;
          }
          bVar18 = 0xfffe < local_28;
        }
        bVar4 = true;
        goto LAB_1008_072e;
      }
      GLOBALUNLOCK(0x1018,iVar13);
      GLOBALFREE(0x1018,iVar13);
    }
    GLOBALFREE(0x1018,iVar24);
  }
  else {
LAB_1008_072e:
    local_12 = (int)((ulong)puVar20 >> 0x10);
    if (bVar4) {
      bVar18 = false;
      for (local_28 = 0; (!bVar18 && (local_28 < local_46)); local_28 = local_28 + 1) {
        if (uVar12 == 1) {
          lVar19 = 0;
        }
        else {
          uVar26 = 0;
          uVar14 = local_46;
          uVar21 = FUN_1000_050c(uVar12,0,local_28,0);
          lVar19 = FUN_1000_0556(uVar21,uVar14,uVar26);
        }
        uVar14 = uVar12;
        uVar27 = local_36;
        if (uVar15 == 1) {
          uVar21 = 0;
        }
        else {
          uVar26 = 0;
          uVar23 = local_46;
          uVar21 = FUN_1000_050c(uVar15,0,local_28,0);
          uVar21 = FUN_1000_0556(uVar21,uVar23,uVar26);
        }
        uVar26 = 0x1000;
        lVar22 = FUN_1000_050c(uVar21,uVar14,uVar27);
        puVar5 = (undefined1 *)(lVar19 + lVar22 + ((ulong)puVar20 & 0xffff));
        *(undefined1 *)(((int)*(undefined4 *)(piVar16 + 4) - local_28) + local_46) =
             *(undefined1 *)puVar5;
        bVar18 = 0xfffe < local_28;
      }
    }
    else {
      bVar18 = false;
      for (local_28 = 0; (!bVar18 && (local_28 < local_46)); local_28 = local_28 + 1) {
        if (uVar12 == 1) {
          lVar19 = 0;
        }
        else {
          uVar26 = 0;
          uVar14 = local_46;
          uVar21 = FUN_1000_050c(uVar12,0,local_28,0);
          lVar19 = FUN_1000_0556(uVar21,uVar14,uVar26);
        }
        uVar14 = uVar12;
        uVar27 = local_36;
        if (uVar15 == 1) {
          uVar21 = 0;
        }
        else {
          uVar26 = 0;
          uVar23 = local_46;
          uVar21 = FUN_1000_050c(uVar15,0,local_28,0);
          uVar21 = FUN_1000_0556(uVar21,uVar23,uVar26);
        }
        uVar26 = 0x1000;
        lVar22 = FUN_1000_050c(uVar21,uVar14,uVar27);
        puVar5 = (undefined1 *)(lVar19 + lVar22 + ((ulong)puVar20 & 0xffff));
        *(undefined1 *)((int)*(undefined4 *)(piVar16 + 4) + local_28) = *(undefined1 *)puVar5;
        bVar18 = 0xfffe < local_28;
      }
    }
    if (iVar13 != 0) {
      GLOBALUNLOCK(uVar26,iVar13,iVar25);
      uVar26 = 0x1018;
      GLOBALFREE(0x1018,iVar13);
    }
    if (local_10 != 0) {
      GLOBALUNLOCK(uVar26,local_10);
      uVar26 = 0x1018;
      GLOBALFREE(0x1018,local_10);
    }
    DAT_1010_11d0 = uVar6;
    DAT_1010_1b42 = iVar7;
    DAT_1010_1b44 = iVar8;
    DAT_1010_1e56 = uVar9;
    SETCURSOR(uVar26,uVar11);
  }
  return 0;
}


// ---- Z130HISTOGRAM @ 1008:0936

undefined2 __stdcall16far Z130HISTOGRAM(undefined4 param_1)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  byte bVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  int iVar8;
  int iVar9;
  undefined2 uVar10;
  undefined2 unaff_CS;
  undefined2 uVar11;
  bool bVar12;
  int iVar13;
  undefined2 uVar14;
  undefined2 uVar15;
  uint local_14;
  uint local_12;
  undefined4 local_c;
  
  uVar15 = 0x1010;
  uVar14 = 0;
  uVar6 = LOADCURSOR(unaff_CS,0x7f02,0);
  uVar7 = SETCURSOR(0x1018,uVar6,uVar14,uVar15);
  uVar5 = DAT_1010_1e56;
  uVar15 = DAT_1010_1b44;
  uVar14 = DAT_1010_1b42;
  uVar6 = DAT_1010_11d0;
  DAT_1010_1b44 = 0;
  DAT_1010_1b42 = 0;
  DAT_1010_1e56 = 0x400;
  DAT_1010_11d0 = 0x300;
  iVar13 = 0x1018;
  uVar11 = 0x1008;
  iVar8 = FUN_1008_a918();
  if (iVar8 != 0) {
    uVar11 = 0x1018;
    iVar13 = iVar8;
    local_c = (byte *)GLOBALLOCK(0x1008,iVar8);
  }
  if (local_c._2_2_ == 0 && (byte *)local_c == (byte *)0x0) {
    uVar6 = 1;
  }
  else {
    local_c = (byte *)CONCAT22(local_c._2_2_ + (-(uint)(0xfff7 < (byte *)local_c) & 0x68),
                               (byte *)((int)(byte *)local_c + 8));
    bVar12 = false;
    local_14 = 0;
    while( true ) {
      iVar9 = (int)param_1;
      uVar10 = (undefined2)((ulong)param_1 >> 0x10);
      if ((bVar12) || (0xff < local_14)) break;
      *(undefined2 *)(local_14 * 4 + iVar9 + 2) = 0;
      *(undefined2 *)(local_14 * 4 + iVar9) = 0;
      bVar12 = 0xfffe < local_14;
      local_14 = local_14 + 1;
    }
    local_12 = 0;
    local_14 = 0;
    while( true ) {
      bVar12 = 0xfffe < local_14;
      local_14 = local_14 + 1;
      if ((0xc < local_12) || (0xb < local_12)) break;
      bVar4 = *local_c;
      puVar1 = (uint *)((uint)bVar4 * 4 + iVar9);
      uVar3 = *puVar1;
      *puVar1 = *puVar1 + 1;
      piVar2 = (int *)((uint)bVar4 * 4 + iVar9 + 2);
      *piVar2 = *piVar2 + (uint)(0xfffe < uVar3);
      local_c = (byte *)CONCAT22(local_c._2_2_ + (-(uint)((byte *)0xfffe < (byte *)local_c) & 0x68),
                                 (byte *)local_c + 1);
      local_12 = local_12 + bVar12;
    }
    GLOBALUNLOCK(uVar11,iVar8,iVar13);
    GLOBALFREE(0x1018,iVar8);
    DAT_1010_11d0 = uVar6;
    DAT_1010_1b42 = uVar14;
    DAT_1010_1b44 = uVar15;
    DAT_1010_1e56 = uVar5;
    SETCURSOR(0x1018,uVar7);
    uVar6 = 0;
  }
  return uVar6;
}


// ---- Z130RAWIMAGETOFILE @ 1008:0a7e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __stdcall16far Z130RAWIMAGETOFILE(undefined2 *param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined2 unaff_CS;
  undefined2 uVar4;
  undefined2 uVar5;
  
  uVar5 = 0x1010;
  uVar4 = 0;
  uVar1 = LOADCURSOR(unaff_CS,0x7f02,0);
  uVar1 = SETCURSOR(0x1018,uVar1,uVar4,uVar5);
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  puVar3 = (undefined2 *)param_1;
  DAT_1010_1e58 = -(puVar3[2] == 0) & 3;
  DAT_1010_1e6e = -(puVar3[3] == 0) & 3;
  DAT_1010_12e2 = 3;
  DAT_1010_1b44 = puVar3[4];
  DAT_1010_1b42 = puVar3[5];
  DAT_1010_11d0 = puVar3[7] - puVar3[5];
  DAT_1010_1e56 = puVar3[6] - puVar3[4];
  _DAT_1010_1b04 = (uint)(puVar3[10] != 0);
  iVar2 = FUN_1008_ab2c(*param_1,puVar3[1]);
  SETCURSOR(0x1008,uVar1);
  return iVar2 == 0;
}


// ---- Z130IMAGETOFILE @ 1008:0b1c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __stdcall16far Z130IMAGETOFILE(undefined2 *param_1)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 unaff_CS;
  bool bVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  uint local_a;
  
  uVar7 = 0x1010;
  uVar6 = 0;
  uVar1 = LOADCURSOR(unaff_CS,0x7f02,0);
  uVar1 = SETCURSOR(0x1018,uVar1,uVar6,uVar7);
  uVar6 = (undefined2)((ulong)param_1 >> 0x10);
  puVar4 = (undefined2 *)param_1;
  local_a = puVar4[9];
  if (local_a == 0) {
    local_a = 1;
  }
  else if (8 < local_a) {
    local_a = 8;
  }
  DAT_1010_1e58 = -(puVar4[2] == 0) & 3;
  DAT_1010_1e6e = -(puVar4[3] == 0) & 3;
  DAT_1010_12e2 = 3;
  DAT_1010_1b44 = puVar4[4];
  DAT_1010_1b42 = puVar4[5];
  DAT_1010_11d0 = puVar4[7] - puVar4[5];
  DAT_1010_1e56 = puVar4[6] - puVar4[4];
  _DAT_1010_1b04 = (uint)(puVar4[10] != 0);
  if (local_a < 2) {
    uVar7 = 0x1008;
    iVar2 = FUN_1008_a7f4(*param_1,puVar4[1]);
    bVar5 = iVar2 == 0;
  }
  else {
    uVar7 = 0x1008;
    iVar2 = FUN_1008_a4de();
    if (iVar2 == 0) {
      bVar5 = true;
    }
    else {
      iVar3 = FUN_1008_98f4(iVar2,local_a,*param_1,puVar4[1]);
      bVar5 = iVar3 == 0;
      uVar7 = 0x1018;
      GLOBALFREE(0x1008,iVar2);
    }
  }
  SETCURSOR(uVar7,uVar1);
  return bVar5;
}


// ---- Z130IMAGEFROMFILE @ 1008:0c26

bool __stdcall16far Z130IMAGEFROMFILE(undefined2 param_1,undefined2 param_2)

{
  int iVar1;
  
  iVar1 = FUN_1008_8fd2(param_1,param_2,0x1010);
  if (iVar1 == 0) {
    UIF_LOG(0x1008,0x2000,0,0);
  }
  else {
    if ((0 < DAT_1010_1e56 + DAT_1010_1b44) && (0 < DAT_1010_11d0 + DAT_1010_1b42)) {
      FUN_1008_9ff0(iVar1);
    }
    GLOBALFREE(0x1008,iVar1);
  }
  return iVar1 == 0;
}


// ---- Z130IMAGETOHRRU @ 1008:0c96

undefined2 __stdcall16far Z130IMAGETOHRRU(int *param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_CS;
  undefined2 uVar3;
  
  uVar3 = 0x1010;
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  if (((int *)param_1)[1] != 0 || *param_1 != 0) {
    unaff_CS = 0x1008;
    FUN_1008_423c(*param_1,((int *)param_1)[1]);
  }
  uVar2 = 0xcc8;
  iVar1 = M007_GETSTATE(unaff_CS,0x73,uVar3);
  if (iVar1 == 1) {
    uVar2 = 0x1018;
    iVar1 = M007_GETSTATE(0x1018,0x8f);
    if (iVar1 == 1) {
      uVar2 = 0x1018;
      DOCOMMANDUNFREEZE_ALL(0x1018);
    }
  }
  DOCOMMANDTAKE_PHOTO(uVar2);
  return 0;
}


// ---- Z130FILETOHRRU @ 1008:0cec

undefined2 __stdcall16far Z130FILETOHRRU(undefined2 param_1,undefined2 param_2)

{
  FUN_1008_0d30(0,0x1010);
  Z130IMAGEFROMFILE(param_1,param_2);
  DOCOMMANDTAKE_PHOTO();
  return 0;
}


// ---- Z130PHOTO @ 1008:0d1a

undefined2 __stdcall16far Z130PHOTO(void)

{
  return 0;
}


// ---- FUN_1008_0d30 @ 1008:0d30

undefined2 __cdecl16far FUN_1008_0d30(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined2 unaff_CS;
  undefined2 uVar3;
  
  if (param_1 == 0) {
    if (DAT_1010_0034 != 0) {
      DAT_1010_0136 = 0;
      DAT_1010_0034 = 0;
    }
    if (DAT_1010_0034 == 0) {
      uVar1 = FUN_1000_042c();
      uVar1 = uVar1 & 0xff00;
      GETTEMPFILENAME(0x1000,0x36,0x1010,0,0x42e6,0x1008);
      DAT_1010_0b26 = 0x36;
      DAT_1010_0b28 = 0x1010;
      DAT_1010_0b32 = 0x3ff;
      DAT_1010_0b34 = 0x2ff;
      DAT_1010_0b38 = 1;
      DAT_1010_0b2a = 1;
      DAT_1010_0b36 = 1;
      DAT_1010_0b2e = 0;
      DAT_1010_0b30 = 0;
      DAT_1010_0b2c = 0;
      DAT_1010_002c = 0;
      iVar2 = Z130IMAGETOFILE(0xb26,0x1010);
      DAT_1010_0136 = (uint)(iVar2 == 0);
      _WSPRINTF(0x1008,0x11e2,0x1010,0x42ea,0x1008,0x36,0x1010,uVar1);
      if (DAT_1010_0136 == 0) {
        FUN_1000_02ba(0x11e2,0x1010,0x4302,0x1008);
      }
    }
  }
  else if (param_1 == 1) {
    if (DAT_1010_0136 == 0) {
      return 1;
    }
    DAT_1010_0136 = 0;
    if (DAT_1010_0034 == 0) {
      uVar3 = 0x1010;
      _WSPRINTF();
      Z130IMAGEFROMFILE(0xb26,0x1010);
      FUN_1000_042c(0x1008,0x36,0x1010,uVar3);
      DAT_1010_002c = 1;
      FUN_1000_030e(0x36,0x1010,0x4364,0x1008);
    }
    else {
      UIF_MESSAGE(unaff_CS,0x430e,0x1008);
    }
  }
  return 0;
}


// ---- DEFPRINTFACTOR @ 1008:0e94

void __stdcall16far DEFPRINTFACTOR(void)

{
  return;
}


// ---- DEFPRINTERDC @ 1008:0ea8

undefined2 __stdcall16far DEFPRINTERDC(void)

{
  return 0;
}


// ---- DEFPRINTTIDY @ 1008:0eba

undefined2 __cdecl16far DEFPRINTTIDY(void)

{
  return 0x1010;
}


// ---- SAVEWORK @ 1008:0ec8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 __stdcall16far SAVEWORK(char *param_1,undefined2 param_2,undefined2 param_3)

{
  int iVar1;
  char *pcVar2;
  undefined2 uVar3;
  undefined2 unaff_CS;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  
  uVar6 = 0x1010;
  cVar10 = '\0';
  cVar9 = '\0';
  cVar8 = '\0';
  cVar7 = '\0';
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  pcVar2 = (char *)param_1;
  DAT_1010_1e6a = *(int *)(pcVar2 + 1);
  DAT_1010_1e66 = *(int *)(pcVar2 + 3);
  if (DAT_1010_1e6a != 0) {
    unaff_CS = 0x1018;
    _DAT_1010_11d6 = (byte *)GLOBALLOCK();
    if (_DAT_1010_11d6 != (byte *)0x0) {
      DAT_1010_1b38 = (uint)((byte *)_DAT_1010_11d6)[1] * 0x100 + (uint)*_DAT_1010_11d6 + 2;
      cVar10 = '\x01';
      goto LAB_1008_0f2f;
    }
LAB_1008_101b:
    FUN_1008_46fc();
    FUN_1008_472a();
    goto LAB_1008_1025;
  }
LAB_1008_0f2f:
  uVar4 = unaff_CS;
  if (DAT_1010_1e66 != 0) {
    uVar4 = 0x1018;
    _DAT_1010_11de = (byte *)GLOBALLOCK(unaff_CS,DAT_1010_1e66);
    if (_DAT_1010_11de == (byte *)0x0) goto LAB_1008_101b;
    DAT_1010_1b3c = (uint)((byte *)_DAT_1010_11de)[1] * 0x100 + (uint)*_DAT_1010_11de + 2;
    cVar9 = '\x01';
  }
  DAT_1010_1e68 = *(int *)(pcVar2 + 9);
  DAT_1010_1e64 = *(int *)(pcVar2 + 0xb);
  uVar5 = uVar4;
  if (DAT_1010_1e68 != 0) {
    uVar5 = 0x1018;
    _DAT_1010_11d2 = (byte *)GLOBALLOCK(uVar4,DAT_1010_1e68,uVar6,cVar7,cVar8,cVar9,cVar10);
    if (_DAT_1010_11d2 != (byte *)0x0) {
      DAT_1010_1b36 = (uint)((byte *)_DAT_1010_11d2)[1] * 0x100 + (uint)*_DAT_1010_11d2 + 2;
      cVar8 = '\x01';
      goto LAB_1008_0fb8;
    }
LAB_1008_103c:
    FUN_1008_46fc();
    FUN_1008_472a();
    FUN_1008_4758();
    FUN_1008_4786();
LAB_1008_1025:
    UIF_LOG(0x1008,0x2800,0,0);
    return 0x1d1;
  }
LAB_1008_0fb8:
  uVar4 = uVar5;
  if (DAT_1010_1e64 != 0) {
    uVar4 = 0x1018;
    _DAT_1010_11da = (byte *)GLOBALLOCK(uVar5,DAT_1010_1e64,uVar6,cVar7,cVar8,cVar9,cVar10);
    if (_DAT_1010_11da == (byte *)0x0) goto LAB_1008_103c;
    DAT_1010_1b3a = (uint)((byte *)_DAT_1010_11da)[1] * 0x100 + (uint)*_DAT_1010_11da + 2;
    cVar7 = '\x01';
  }
  if (*param_1 == '\x03') {
    FUN_1008_46fc();
    FUN_1008_472a();
    UIF_LOG(0x1008,0x2800,0,0);
    return 0x1d0;
  }
  DAT_1010_1b44 = 0;
  DAT_1010_1b42 = 0;
  DAT_1010_1b4c = *(undefined2 *)(pcVar2 + 5);
  DAT_1010_1b4e = *(undefined2 *)(pcVar2 + 7);
  DAT_1010_1e6e = 3;
  DAT_1010_12e2 = 3;
  DAT_1010_1b54 = 0;
  DAT_1010_11d0 = 0x300;
  DAT_1010_1e56 = 0x400;
  _DAT_1010_1b04 = 0;
  iVar1 = M007_GETSTATE(uVar4,99);
  if (iVar1 == 1) {
    DAT_1010_11d0 = DAT_1010_11d0 << 1;
    DAT_1010_1e56 = DAT_1010_1e56 << 1;
  }
  iVar1 = FUN_1008_6f02(param_2,param_3);
  if (iVar1 != 0) {
    FUN_1008_70c8();
    FUN_1008_46fc();
    FUN_1008_472a();
    FUN_1008_4758();
    FUN_1008_4786();
    UIF_LOG(0x1008,0x2800,0,0);
    return 0x1c9;
  }
  if (*param_1 == '\x02') {
    DAT_1010_1e58 = '\0';
    iVar1 = FUN_1008_6800(0,(int)cVar10,(int)cVar8,0,1,2,0);
    if (iVar1 != 0) goto LAB_1008_1112;
    iVar1 = FUN_1008_5cc4(0,0);
    if (iVar1 != 0) goto LAB_1008_1152;
    DAT_1010_1e58 = '\x01';
    uVar6 = 2;
    uVar3 = 1;
  }
  else {
    DAT_1010_1e58 = *param_1;
    uVar6 = 0;
    uVar3 = 0;
    cVar9 = cVar10;
    cVar7 = cVar8;
  }
  iVar1 = FUN_1008_6800(uVar3,(int)cVar9,(int)cVar7,0,1,uVar6,0);
  if (iVar1 == 0) {
    iVar1 = FUN_1008_5cc4(0,0);
    if (iVar1 == 0) {
      FUN_1008_70c8();
      FUN_1008_46fc();
      FUN_1008_472a();
      FUN_1008_4758();
      FUN_1008_4786();
      FUN_1008_b592();
      Ordinal_36(0x1008,3);
      return 0;
    }
LAB_1008_1152:
    FUN_1008_70c8();
    FUN_1008_46fc();
    FUN_1008_472a();
    FUN_1008_4758();
    FUN_1008_4786();
    UIF_LOG(0x1008,0x2800,0,0);
    return 0x1cb;
  }
LAB_1008_1112:
  FUN_1008_70c8();
  FUN_1008_46fc();
  FUN_1008_472a();
  FUN_1008_4758();
  FUN_1008_4786();
  UIF_LOG(0x1008,0x2800,0,0);
  return 0x1ca;
}


// ---- LOADWORK @ 1008:120c

undefined2 __stdcall16far LOADWORK(char *param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 uVar1;
  int iVar2;
  undefined1 uVar4;
  uint uVar3;
  char *pcVar5;
  undefined2 unaff_CS;
  char local_1c;
  int local_1b;
  int local_19;
  uint local_17;
  int local_15;
  char local_13;
  char local_10;
  char local_f;
  char local_d;
  char local_6;
  char local_4;
  
  if (*param_1 == '\x03') {
    UIF_LOG(unaff_CS,0x2800,0,0);
    uVar1 = 0x1d0;
  }
  else {
    DAT_1010_1b44 = 0;
    DAT_1010_1b42 = 0;
    DAT_1010_1e6a = 0;
    DAT_1010_1e66 = 0;
    DAT_1010_1e68 = 0;
    DAT_1010_1e64 = 0;
    iVar2 = FUN_1008_5886(param_2,param_3,0x1010);
    if (iVar2 == 0) {
      if (*param_1 == '\x02') {
        local_4 = '\x02';
      }
      else {
        local_4 = '\x01';
      }
      while (local_4 != '\0') {
        iVar2 = FUN_1008_4fba(&local_1c);
        if (iVar2 != 0) {
          FUN_1008_70c8();
          FUN_1008_472a();
          FUN_1008_4786();
          UIF_LOG(0x1008,0x2800,0,0);
          return 0x1cd;
        }
        if ((local_d == '\0') || (local_13 != '\0')) {
LAB_1008_12c9:
          FUN_1008_70c8();
          FUN_1008_472a();
          FUN_1008_4786();
          UIF_LOG(0x1008,0x2800,0,0);
          return 0x1cf;
        }
        iVar2 = M007_GETSTATE(0x1008,99);
        if (iVar2 == 0) {
          if (((local_1b != 0x400) || (local_19 != 0)) || (local_17 != 0x300)) goto LAB_1008_12c9;
        }
        else if (((local_1b != 0x800) || (local_19 != 0)) || (local_17 != 0x600))
        goto LAB_1008_12c9;
        if (local_15 != 0) goto LAB_1008_12c9;
        DAT_1010_1e56 = local_1b;
        DAT_1010_11d0 = local_17;
        uVar4 = (undefined1)(local_17 >> 8);
        if (*param_1 == '\x02') {
          if (local_4 == '\x02') {
            uVar3 = local_17 & 0xff00;
          }
          else {
            uVar3 = CONCAT11(uVar4,1);
          }
          DAT_1010_1e58 = (char)uVar3;
          local_6 = DAT_1010_1e58;
        }
        else {
          DAT_1010_1e58 = *param_1;
          uVar3 = CONCAT11(uVar4,DAT_1010_1e58);
          local_6 = '\0';
        }
        uVar4 = (undefined1)(uVar3 >> 8);
        if (local_10 == '\x01') {
          iVar2 = FUN_1008_4834(CONCAT11(uVar4,local_6));
          uVar4 = 0;
          if (iVar2 != 0) goto LAB_1008_12c9;
        }
        if ((local_f == '\x01') && (iVar2 = FUN_1008_48b0(CONCAT11(uVar4,local_6)), iVar2 != 0))
        goto LAB_1008_12c9;
        iVar2 = FUN_1008_582c(0,0);
        if (iVar2 != 0) {
          FUN_1008_70c8();
          FUN_1008_472a();
          FUN_1008_4786();
          UIF_LOG(0x1008,0x2800,0,0);
          return 0x1ce;
        }
        if ((local_4 == '\x01') || (local_1c != '\0')) {
          local_4 = local_4 + -1;
        }
        else {
          local_4 = local_4 + -2;
        }
      }
      FUN_1008_70c8();
      uVar1 = (undefined2)((ulong)param_1 >> 0x10);
      pcVar5 = (char *)param_1;
      *(undefined2 *)(pcVar5 + 1) = DAT_1010_1e6a;
      *(undefined2 *)(pcVar5 + 3) = DAT_1010_1e66;
      *(undefined2 *)(pcVar5 + 9) = DAT_1010_1e68;
      *(undefined2 *)(pcVar5 + 0xb) = DAT_1010_1e64;
      uVar1 = 0;
    }
    else {
      UIF_LOG(0x1008,0x2800,0,0);
      uVar1 = 0x1cc;
    }
  }
  return uVar1;
}


// ---- SAVEGREY @ 1008:1418

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 __stdcall16far SAVEGREY(char *param_1,undefined2 param_2,undefined2 param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  undefined2 uVar6;
  undefined2 unaff_CS;
  undefined2 uVar7;
  undefined1 local_10;
  undefined1 local_e;
  uint local_c;
  uint local_a;
  
  local_e = 0;
  local_10 = 0;
  uVar6 = (undefined2)((ulong)param_1 >> 0x10);
  pcVar5 = (char *)param_1;
  cVar1 = pcVar5[10];
  _DAT_1010_1b04 = (int)pcVar5[0xe];
  DAT_1010_1b4c = *(undefined2 *)(pcVar5 + 0x12);
  DAT_1010_1b4e = *(undefined2 *)(pcVar5 + 0x14);
  DAT_1010_1b44 = *(int *)(pcVar5 + 2);
  DAT_1010_1b42 = *(int *)(pcVar5 + 4);
  DAT_1010_11d0 = *(int *)(pcVar5 + 8) - *(int *)(pcVar5 + 4);
  DAT_1010_1e56 = *(int *)(pcVar5 + 6) - *(int *)(pcVar5 + 2);
  DAT_1010_1e68 = *(int *)(pcVar5 + 0x18);
  DAT_1010_1e64 = *(int *)(pcVar5 + 0x1a);
  if (DAT_1010_1e68 != 0) {
    unaff_CS = 0x1018;
    _DAT_1010_11d2 = (byte *)GLOBALLOCK();
    if (_DAT_1010_11d2 == (byte *)0x0) goto LAB_1008_1592;
    DAT_1010_1b36 = (uint)((byte *)_DAT_1010_11d2)[1] * 0x100 + (uint)*_DAT_1010_11d2 + 2;
    local_e = 1;
  }
  uVar7 = unaff_CS;
  if (DAT_1010_1e64 != 0) {
    uVar7 = 0x1018;
    _DAT_1010_11da = (byte *)GLOBALLOCK(unaff_CS,DAT_1010_1e64);
    if (_DAT_1010_11da == (byte *)0x0) {
LAB_1008_1592:
      FUN_1008_4758();
      FUN_1008_4786();
      UIF_LOG(0x1008,0x2800,0,0);
      return 0x1d1;
    }
    DAT_1010_1b3a = (uint)((byte *)_DAT_1010_11da)[1] * 0x100 + (uint)*_DAT_1010_11da + 2;
    local_10 = 1;
  }
  iVar4 = M007_GETSTATE(uVar7,99);
  if (iVar4 == 1) {
    DAT_1010_1b44 = DAT_1010_1b44 << 1;
    DAT_1010_1b42 = DAT_1010_1b42 << 1;
    DAT_1010_11d0 = DAT_1010_11d0 << 1;
    DAT_1010_1e56 = DAT_1010_1e56 << 1;
  }
  uVar3 = DAT_1010_1e56;
  uVar2 = DAT_1010_11d0;
  local_a = DAT_1010_11d0 / DAT_1010_0028;
  if (DAT_1010_11d0 % DAT_1010_0028 != 0) {
    local_a = local_a + 1;
  }
  local_c = DAT_1010_1e56 / DAT_1010_0028;
  if (DAT_1010_1e56 % DAT_1010_0028 != 0) {
    local_c = local_c + 1;
  }
  iVar4 = FUN_1008_6f02(param_2,param_3);
  if (iVar4 != 0) {
    FUN_1008_70c8();
    FUN_1008_4758();
    FUN_1008_4786();
    UIF_LOG(0x1008,0x2800,0,0);
    return 0x1c9;
  }
  if (((*param_1 == '\x02') || (pcVar5[1] == '\x02')) || (pcVar5[0x16] == '\x02')) {
    DAT_1010_1b54 = '\0';
    if (*param_1 == '\x02') {
      DAT_1010_1e58 = '\0';
    }
    else {
      DAT_1010_1e58 = '\x03';
    }
    if (pcVar5[1] == '\x02') {
      DAT_1010_1e6e = '\0';
    }
    else {
      DAT_1010_1e6e = '\x03';
    }
    if (pcVar5[0x16] == '\x02') {
      DAT_1010_12e2 = '\0';
    }
    else {
      DAT_1010_12e2 = '\x03';
    }
    DAT_1010_11d0 = local_a;
    DAT_1010_1e56 = local_c;
    iVar4 = FUN_1008_6800(0,0,local_e,0,(int)cVar1,2,0);
    if (iVar4 != 0) goto LAB_1008_163a;
    DAT_1010_11d0 = uVar2;
    DAT_1010_1e56 = uVar3;
    iVar4 = FUN_1008_5cc4(0,0);
    if (iVar4 != 0) goto LAB_1008_167c;
    if (DAT_1010_1e58 == '\0') {
      DAT_1010_1e58 = '\x01';
    }
    if (DAT_1010_1e6e == '\0') {
      DAT_1010_1e6e = '\x01';
    }
    if (DAT_1010_12e2 == '\0') {
      DAT_1010_12e2 = '\x01';
    }
    uVar7 = 2;
    uVar6 = 1;
    local_e = local_10;
  }
  else {
    DAT_1010_1e58 = *param_1;
    DAT_1010_1e6e = pcVar5[1];
    DAT_1010_12e2 = pcVar5[0x16];
    DAT_1010_1b54 = pcVar5[0x17];
    if (DAT_1010_1b54 == '\x01') {
      DAT_1010_11d0 = local_a;
      DAT_1010_1e56 = local_c;
      iVar4 = FUN_1008_6800(0,0,local_e,0,(int)cVar1,2,0);
      if (iVar4 == 0) {
        DAT_1010_11d0 = uVar2;
        DAT_1010_1e56 = uVar3;
        iVar4 = FUN_1008_5cc4(0,0);
        if (iVar4 == 0) {
          iVar4 = M007_GETSTATE(0x1008,99);
          if (iVar4 == 1) {
            DAT_1010_11d0 = 0xc0;
            DAT_1010_1e56 = 0x100;
          }
          else {
            DAT_1010_11d0 = 0x60;
            DAT_1010_1e56 = 0x80;
          }
          iVar4 = FUN_1008_6800(1,0,0,0,0,3,0);
          if (iVar4 != 0) goto LAB_1008_163a;
          iVar4 = FUN_1008_5cc4(5,0);
          if (iVar4 != 0) goto LAB_1008_167c;
          goto LAB_1008_180b;
        }
        goto LAB_1008_167c;
      }
      goto LAB_1008_163a;
    }
    uVar7 = 0;
    uVar6 = 0;
  }
  DAT_1010_1e56 = local_c;
  DAT_1010_11d0 = local_a;
  iVar4 = FUN_1008_6800(uVar6,0,local_e,0,(int)cVar1,uVar7,0);
  if (iVar4 == 0) {
    DAT_1010_11d0 = uVar2;
    DAT_1010_1e56 = uVar3;
    iVar4 = FUN_1008_5cc4(0,0);
    if (iVar4 == 0) {
LAB_1008_180b:
      FUN_1008_70c8();
      FUN_1008_4758();
      FUN_1008_4786();
      FUN_1008_b592();
      Ordinal_36(0x1008,3);
      return 0;
    }
LAB_1008_167c:
    FUN_1008_70c8();
    FUN_1008_4758();
    FUN_1008_4786();
    UIF_LOG(0x1008,0x2800,0,0);
    return 0x1cb;
  }
LAB_1008_163a:
  FUN_1008_70c8();
  FUN_1008_4758();
  FUN_1008_4786();
  UIF_LOG(0x1008,0x2800,0,0);
  return 0x1ca;
}


// ---- SAVECOLOUR @ 1008:1832

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 __stdcall16far SAVECOLOUR(char *param_1,undefined2 param_2,undefined2 param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  undefined2 uVar5;
  undefined2 unaff_CS;
  undefined2 uVar6;
  undefined1 local_e;
  undefined1 local_c;
  uint local_a;
  uint local_8;
  
  local_c = 0;
  local_e = 0;
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  pcVar4 = (char *)param_1;
  DAT_1010_1b4c = *(undefined2 *)(pcVar4 + 0x12);
  DAT_1010_1b4e = *(undefined2 *)(pcVar4 + 0x14);
  DAT_1010_1b44 = *(int *)(pcVar4 + 2);
  DAT_1010_1b42 = *(int *)(pcVar4 + 4);
  DAT_1010_11d0 = *(int *)(pcVar4 + 8) - *(int *)(pcVar4 + 4);
  DAT_1010_1e56 = *(int *)(pcVar4 + 6) - *(int *)(pcVar4 + 2);
  DAT_1010_1e68 = *(int *)(pcVar4 + 0x18);
  DAT_1010_1e64 = *(int *)(pcVar4 + 0x1a);
  if (DAT_1010_1e68 != 0) {
    unaff_CS = 0x1018;
    _DAT_1010_11d2 = (byte *)GLOBALLOCK();
    if (_DAT_1010_11d2 == (byte *)0x0) goto LAB_1008_199d;
    DAT_1010_1b36 = (uint)((byte *)_DAT_1010_11d2)[1] * 0x100 + (uint)*_DAT_1010_11d2 + 2;
    local_c = 1;
  }
  uVar6 = unaff_CS;
  if (DAT_1010_1e64 != 0) {
    uVar6 = 0x1018;
    _DAT_1010_11da = (byte *)GLOBALLOCK(unaff_CS,DAT_1010_1e64);
    if (_DAT_1010_11da == (byte *)0x0) {
LAB_1008_199d:
      FUN_1008_4758();
      FUN_1008_4786();
      UIF_LOG(0x1008,0x2800,0,0);
      return 0x1d1;
    }
    DAT_1010_1b3a = (uint)((byte *)_DAT_1010_11da)[1] * 0x100 + (uint)*_DAT_1010_11da + 2;
    local_e = 1;
  }
  iVar3 = M007_GETSTATE(uVar6,99);
  if (iVar3 == 1) {
    DAT_1010_1b44 = DAT_1010_1b44 << 1;
    DAT_1010_1b42 = DAT_1010_1b42 << 1;
    DAT_1010_11d0 = DAT_1010_11d0 << 1;
    DAT_1010_1e56 = DAT_1010_1e56 << 1;
  }
  uVar2 = DAT_1010_1e56;
  uVar1 = DAT_1010_11d0;
  local_8 = DAT_1010_11d0 / DAT_1010_0028;
  if (DAT_1010_11d0 % DAT_1010_0028 != 0) {
    local_8 = local_8 + 1;
  }
  local_a = DAT_1010_1e56 / DAT_1010_0028;
  if (DAT_1010_1e56 % DAT_1010_0028 != 0) {
    local_a = local_a + 1;
  }
  iVar3 = FUN_1008_6f02(param_2,param_3);
  if (iVar3 != 0) {
    FUN_1008_70c8();
    FUN_1008_4758();
    FUN_1008_4786();
    UIF_LOG(0x1008,0x2800,0,0);
    return 0x1c9;
  }
  if (((*param_1 == '\x02') || (pcVar4[0x16] == '\x02')) || (pcVar4[1] == '\x02')) {
    if (*param_1 == '\x02') {
      DAT_1010_1e58 = '\0';
    }
    else {
      DAT_1010_1e58 = '\x03';
    }
    if (pcVar4[1] == '\x02') {
      DAT_1010_1e6e = '\0';
    }
    else {
      DAT_1010_1e6e = '\x03';
    }
    if (pcVar4[0x16] == '\x02') {
      DAT_1010_12e2 = '\0';
    }
    else {
      DAT_1010_12e2 = '\x03';
    }
    DAT_1010_11d0 = local_8;
    DAT_1010_1e56 = local_a;
    iVar3 = FUN_1008_6800(0,0,local_c,0,0,2,1);
    if (iVar3 != 0) goto LAB_1008_1a3d;
    DAT_1010_11d0 = uVar1;
    DAT_1010_1e56 = uVar2;
    iVar3 = FUN_1008_5cc4(1,0);
    if (iVar3 != 0) goto LAB_1008_1a82;
    if (DAT_1010_1e58 == '\0') {
      DAT_1010_1e58 = '\x01';
    }
    if (DAT_1010_1e6e == '\0') {
      DAT_1010_1e6e = '\x01';
    }
    if (DAT_1010_12e2 == '\0') {
      DAT_1010_12e2 = '\x01';
    }
    uVar6 = 2;
    uVar5 = 1;
    local_c = local_e;
  }
  else {
    DAT_1010_1e58 = *param_1;
    DAT_1010_1e6e = pcVar4[1];
    DAT_1010_12e2 = pcVar4[0x16];
    uVar6 = 0;
    uVar5 = 0;
  }
  DAT_1010_1e56 = local_a;
  DAT_1010_11d0 = local_8;
  iVar3 = FUN_1008_6800(uVar5,0,local_c,0,0,uVar6,1);
  if (iVar3 == 0) {
    DAT_1010_11d0 = uVar1;
    DAT_1010_1e56 = uVar2;
    iVar3 = FUN_1008_5cc4(1,0);
    if (iVar3 == 0) {
      FUN_1008_70c8();
      FUN_1008_4758();
      FUN_1008_4786();
      FUN_1008_b592();
      Ordinal_36(0x1008,3);
      return 0;
    }
LAB_1008_1a82:
    FUN_1008_70c8();
    FUN_1008_4758();
    FUN_1008_4786();
    UIF_LOG(0x1008,0x2800,0,0);
    return 0x1cb;
  }
LAB_1008_1a3d:
  FUN_1008_70c8();
  FUN_1008_4758();
  FUN_1008_4786();
  UIF_LOG(0x1008,0x2800,0,0);
  return 0x1ca;
}


// ---- SAVEBINARY @ 1008:1b78

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 __stdcall16far SAVEBINARY(char *param_1,undefined2 param_2,undefined2 param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  undefined2 uVar6;
  undefined2 unaff_CS;
  undefined2 uVar7;
  undefined1 local_10;
  undefined1 local_e;
  uint local_c;
  uint local_a;
  
  local_e = 0;
  local_10 = 0;
  uVar6 = (undefined2)((ulong)param_1 >> 0x10);
  pcVar5 = (char *)param_1;
  cVar1 = pcVar5[0xc];
  _DAT_1010_1b04 = 1;
  DAT_1010_1e62 = pcVar5[0xf];
  DAT_1010_1b55 = pcVar5[0x10];
  DAT_1010_12ec = pcVar5[0x11];
  DAT_1010_1b4c = *(undefined2 *)(pcVar5 + 0x12);
  DAT_1010_1b4e = *(undefined2 *)(pcVar5 + 0x14);
  DAT_1010_1b44 = *(int *)(pcVar5 + 2);
  DAT_1010_1b42 = *(int *)(pcVar5 + 4);
  DAT_1010_11d0 = *(int *)(pcVar5 + 8) - *(int *)(pcVar5 + 4);
  DAT_1010_1e56 = *(int *)(pcVar5 + 6) - *(int *)(pcVar5 + 2);
  DAT_1010_1e68 = *(int *)(pcVar5 + 0x18);
  DAT_1010_1e64 = *(int *)(pcVar5 + 0x1a);
  if (DAT_1010_1e68 != 0) {
    unaff_CS = 0x1018;
    _DAT_1010_11d2 = (byte *)GLOBALLOCK();
    if (_DAT_1010_11d2 == (byte *)0x0) goto LAB_1008_1d05;
    DAT_1010_1b36 = (uint)((byte *)_DAT_1010_11d2)[1] * 0x100 + (uint)*_DAT_1010_11d2 + 2;
    local_e = 1;
  }
  uVar7 = unaff_CS;
  if (DAT_1010_1e64 != 0) {
    uVar7 = 0x1018;
    _DAT_1010_11da = (byte *)GLOBALLOCK(unaff_CS,DAT_1010_1e64);
    if (_DAT_1010_11da == (byte *)0x0) {
LAB_1008_1d05:
      FUN_1008_4758();
      FUN_1008_4786();
      UIF_LOG(0x1008,0x2800,0,0);
      return 0x1d1;
    }
    DAT_1010_1b3a = (uint)((byte *)_DAT_1010_11da)[1] * 0x100 + (uint)*_DAT_1010_11da + 2;
    local_10 = 1;
  }
  iVar4 = M007_GETSTATE(uVar7,99);
  if (iVar4 == 1) {
    DAT_1010_1b44 = DAT_1010_1b44 << 1;
    DAT_1010_1b42 = DAT_1010_1b42 << 1;
    DAT_1010_11d0 = DAT_1010_11d0 << 1;
    DAT_1010_1e56 = DAT_1010_1e56 << 1;
  }
  uVar3 = DAT_1010_1e56;
  uVar2 = DAT_1010_11d0;
  local_a = DAT_1010_11d0 / DAT_1010_0028;
  if (DAT_1010_11d0 % DAT_1010_0028 != 0) {
    local_a = local_a + 1;
  }
  local_c = DAT_1010_1e56 / DAT_1010_0028;
  if (DAT_1010_1e56 % DAT_1010_0028 != 0) {
    local_c = local_c + 1;
  }
  iVar4 = FUN_1008_6f02(param_2,param_3);
  if (iVar4 != 0) {
    FUN_1008_70c8();
    FUN_1008_4758();
    FUN_1008_4786();
    UIF_LOG(0x1008,0x2800,0,0);
    return 0x1c9;
  }
  if ((*param_1 == '\x02') || (pcVar5[1] == '\x02')) {
    if (*param_1 == '\x02') {
      DAT_1010_1e58 = '\0';
    }
    else {
      DAT_1010_1e58 = '\x03';
    }
    if (pcVar5[1] == '\x02') {
      DAT_1010_1e6e = '\0';
    }
    else {
      DAT_1010_1e6e = '\x03';
    }
    DAT_1010_11d0 = local_a;
    DAT_1010_1e56 = local_c;
    iVar4 = FUN_1008_6800(0,0,local_e,(int)cVar1,0,2,2);
    if (iVar4 != 0) goto LAB_1008_1d8c;
    DAT_1010_11d0 = uVar2;
    DAT_1010_1e56 = uVar3;
    iVar4 = FUN_1008_5cc4(2,(int)cVar1);
    if (iVar4 != 0) goto LAB_1008_1dd3;
    if (DAT_1010_1e58 == '\0') {
      DAT_1010_1e58 = '\x01';
    }
    if (DAT_1010_1e6e == '\0') {
      DAT_1010_1e6e = '\x01';
    }
    uVar7 = 2;
    uVar6 = 1;
    local_e = local_10;
  }
  else {
    DAT_1010_1e58 = *param_1;
    DAT_1010_1e6e = pcVar5[1];
    uVar7 = 0;
    uVar6 = 0;
  }
  DAT_1010_1e56 = local_c;
  DAT_1010_11d0 = local_a;
  iVar4 = FUN_1008_6800(uVar6,0,local_e,(int)cVar1,0,uVar7,2);
  if (iVar4 == 0) {
    DAT_1010_11d0 = uVar2;
    DAT_1010_1e56 = uVar3;
    iVar4 = FUN_1008_5cc4(2,(int)cVar1);
    if (iVar4 == 0) {
      FUN_1008_70c8();
      FUN_1008_4758();
      FUN_1008_4786();
      FUN_1008_b592();
      Ordinal_36(0x1008,3);
      return 0;
    }
LAB_1008_1dd3:
    FUN_1008_70c8();
    FUN_1008_4758();
    FUN_1008_4786();
    UIF_LOG(0x1008,0x2800,0,0);
    return 0x1cb;
  }
LAB_1008_1d8c:
  FUN_1008_70c8();
  FUN_1008_4758();
  FUN_1008_4786();
  UIF_LOG(0x1008,0x2800,0,0);
  return 0x1ca;
}


// ---- LOADIMAGE @ 1008:1ec0

undefined2 __stdcall16far LOADIMAGE(char *param_1,undefined2 param_2,undefined2 param_3)

{
  int iVar1;
  char *pcVar2;
  undefined2 uVar3;
  undefined2 unaff_CS;
  undefined2 uVar4;
  char local_1c;
  int local_1b;
  int local_19;
  int local_17;
  int local_15;
  char local_13;
  char local_12;
  char local_e;
  char local_d;
  char local_6;
  char local_4;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  pcVar2 = (char *)param_1;
  if (*param_1 == '\x03') {
    UIF_LOG(unaff_CS,0x2800,0,0);
    uVar3 = 0x1d0;
  }
  else {
    DAT_1010_1b44 = *(int *)(pcVar2 + 2);
    DAT_1010_1b42 = *(int *)(pcVar2 + 4);
    DAT_1010_1b02 = '\x01' << (pcVar2[0xb] & 0x1fU);
    DAT_1010_1afe = (int)pcVar2[0xd];
    uVar4 = 99;
    iVar1 = M007_GETSTATE();
    if (iVar1 == 1) {
      DAT_1010_1b44 = DAT_1010_1b44 << 1;
      DAT_1010_1b42 = DAT_1010_1b42 << 1;
    }
    iVar1 = FUN_1008_5886(param_2,param_3,uVar4);
    if (iVar1 == 0) {
      if (*param_1 == '\x02') {
        local_4 = '\x02';
      }
      else {
        local_4 = '\x01';
      }
      while (local_4 != '\0') {
        iVar1 = FUN_1008_4fba(&local_1c);
        if (iVar1 != 0) {
          FUN_1008_70c8();
          UIF_LOG(0x1008,0x2800,0,0);
          return 0x1cd;
        }
        if ((local_d == '\0') || (local_13 == '\x01')) {
LAB_1008_1f94:
          FUN_1008_70c8();
          UIF_LOG(0x1008,0x2800,0,0);
          return 0x1cf;
        }
        local_6 = local_13;
        if ((local_19 == 0 && local_1b == 0) || (local_15 == 0 && local_17 == 0))
        goto LAB_1008_1f94;
        DAT_1010_1e56 = local_1b;
        DAT_1010_11d0 = local_17;
        if (*param_1 == '\x02') {
          if (local_4 == '\x02') {
            DAT_1010_1e58 = '\0';
          }
          else {
            DAT_1010_1e58 = '\x01';
          }
        }
        else {
          DAT_1010_1e58 = *param_1;
        }
        if (((local_e == '\x01') && (pcVar2[0xe] == '\x01')) &&
           (iVar1 = FUN_1008_454c(), iVar1 != 0)) goto LAB_1008_1f94;
        if (local_12 == '\x01') {
          DAT_1010_002a = 1;
          M007_PUTSTATE(0x1008,0);
        }
        iVar1 = FUN_1008_582c((int)local_12,(int)local_6);
        if (iVar1 != 0) {
          FUN_1008_70c8();
          UIF_LOG(0x1008,0x2800,0,0);
          return 0x1ce;
        }
        if ((local_4 == '\x01') || (local_1c != '\0')) {
          local_4 = local_4 + -1;
        }
        else {
          local_4 = local_4 + -2;
        }
      }
      FUN_1008_70c8();
      uVar3 = 0;
    }
    else {
      UIF_LOG(0x1008,0x2800,0,0);
      uVar3 = 0x1cc;
    }
  }
  return uVar3;
}


// ---- GETTIFFHEADER @ 1008:208c

undefined2 __stdcall16far
GETTIFFHEADER(int param_1,char *param_2,undefined2 param_3,undefined2 param_4)

{
  int iVar1;
  undefined2 uVar2;
  uint uVar3;
  char *pcVar4;
  undefined4 uVar5;
  char local_18;
  undefined2 local_17;
  undefined2 local_15;
  undefined2 local_13;
  undefined2 local_11;
  char local_f;
  char local_e;
  char local_d;
  char local_b;
  char local_4;
  char local_3;
  
  DAT_1010_1e68 = 0;
  DAT_1010_1e64 = 0;
  iVar1 = FUN_1008_5886(param_3,param_4,0x1010);
  if (iVar1 != 0) {
    UIF_LOG(0x1008,0x2800,0,0);
    return 0x1cc;
  }
  iVar1 = FUN_1008_4fba(&local_18);
  if (iVar1 == 0) {
    if (local_e == '\x01') {
      DAT_1010_002a = 1;
      M007_PUTSTATE(0x1008,0);
    }
    uVar5 = FUN_1000_0556(local_17,local_15,DAT_1010_002a,DAT_1010_002a >> 0xf);
    uVar2 = (undefined2)((ulong)param_2 >> 0x10);
    pcVar4 = (char *)param_2;
    *(int *)(pcVar4 + 1) = (int)uVar5;
    *(int *)(pcVar4 + 3) = (int)((ulong)uVar5 >> 0x10);
    uVar5 = FUN_1000_0556(local_13,local_11,DAT_1010_002a,DAT_1010_002a >> 0xf);
    uVar3 = (uint)uVar5;
    *(uint *)(pcVar4 + 5) = uVar3;
    *(int *)(pcVar4 + 7) = (int)((ulong)uVar5 >> 0x10);
    if (local_f == '\x02') {
      pcVar4[9] = '\x02';
    }
    if (local_f == '\0') {
      if (local_d == '\x03') {
        pcVar4[9] = '\x03';
      }
      else {
        pcVar4[9] = '\0';
      }
    }
    if (local_f == '\x01') {
      pcVar4[9] = '\x01';
    }
    if (local_4 == '\x01') {
      iVar1 = FUN_1008_591a(*(undefined2 *)(pcVar4 + 10),*(undefined2 *)(pcVar4 + 0xc));
      uVar3 = 0;
      if (iVar1 == 0) goto LAB_1008_21c1;
      FUN_1008_70c8();
    }
    else {
      **(undefined1 **)(pcVar4 + 10) = 0;
LAB_1008_21c1:
      if (((param_1 == 0) || (local_b != '\x01')) ||
         (iVar1 = FUN_1008_48b0(uVar3 & 0xff00), iVar1 == 0)) {
        *param_2 = local_18;
        pcVar4[0xe] = local_3;
        if (*param_2 != '\x01') {
          (pcVar4 + 0x11)[0] = '\0';
          (pcVar4 + 0x11)[1] = '\0';
          (pcVar4 + 0xf)[0] = '\0';
          (pcVar4 + 0xf)[1] = '\0';
          (pcVar4 + 0x15)[0] = '\0';
          (pcVar4 + 0x15)[1] = '\0';
          (pcVar4 + 0x13)[0] = '\0';
          (pcVar4 + 0x13)[1] = '\0';
          pcVar4[0x17] = '\0';
LAB_1008_2298:
          FUN_1008_70c8();
          *(undefined2 *)(pcVar4 + 0x18) = DAT_1010_1e68;
          *(undefined2 *)(pcVar4 + 0x1a) = DAT_1010_1e64;
          return 0;
        }
        iVar1 = FUN_1008_4fba(&local_18);
        if (iVar1 != 0) {
          FUN_1008_70c8();
          FUN_1008_4786();
          goto LAB_1008_20df;
        }
        uVar5 = FUN_1000_0556(local_17,local_15,DAT_1010_002a,DAT_1010_002a >> 0xf);
        *(int *)(pcVar4 + 0xf) = (int)uVar5;
        *(int *)(pcVar4 + 0x11) = (int)((ulong)uVar5 >> 0x10);
        uVar5 = FUN_1000_0556(local_13,local_11,DAT_1010_002a,DAT_1010_002a >> 0xf);
        *(int *)(pcVar4 + 0x13) = (int)uVar5;
        *(int *)(pcVar4 + 0x15) = (int)((ulong)uVar5 >> 0x10);
        pcVar4[0x17] = local_3;
        if (((param_1 == 0) || (local_b != '\x01')) || (iVar1 = FUN_1008_48b0(1), iVar1 == 0))
        goto LAB_1008_2298;
        FUN_1008_70c8();
      }
      else {
        FUN_1008_70c8();
        FUN_1008_472a();
      }
      FUN_1008_4786();
    }
    UIF_LOG(0x1008,0x2800,0,0);
    uVar2 = 0x1cf;
  }
  else {
    FUN_1008_70c8();
LAB_1008_20df:
    UIF_LOG(0x1008,0x2800,0,0);
    uVar2 = 0x1cd;
  }
  return uVar2;
}


// ---- SETOVERLAYGREY @ 1008:22b8

undefined2 __stdcall16far SETOVERLAYGREY(undefined1 param_1,int param_2)

{
  *(undefined1 *)(param_2 + 0x10) = param_1;
  return 0;
}


// ---- SENDIMAGETOCLIPBOARD @ 1008:22d4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __stdcall16far SENDIMAGETOCLIPBOARD(undefined2 param_1,char *param_2)

{
  int iVar1;
  char *pcVar2;
  undefined2 uVar3;
  undefined2 unaff_CS;
  
  uVar3 = (undefined2)((ulong)param_2 >> 0x10);
  pcVar2 = (char *)param_2;
  DAT_1010_1e58 = *param_2;
  DAT_1010_1e6e = pcVar2[1];
  DAT_1010_12e2 = pcVar2[0x16];
  if ((((DAT_1010_12e2 == '\x02') || (DAT_1010_1e58 == '\x02')) || (DAT_1010_1e6e == '\x02')) ||
     (((DAT_1010_12e2 == '\x03' && (DAT_1010_1e58 == '\x03')) && (DAT_1010_1e6e == '\x03')))) {
    UIF_LOG(unaff_CS,0x2800,0,0);
    iVar1 = 0x1d0;
  }
  else {
    DAT_1010_1b44 = *(int *)(pcVar2 + 2);
    DAT_1010_1b42 = *(int *)(pcVar2 + 4);
    DAT_1010_11d0 = *(int *)(pcVar2 + 8) - *(int *)(pcVar2 + 4);
    DAT_1010_1e56 = *(int *)(pcVar2 + 6) - *(int *)(pcVar2 + 2);
    _DAT_1010_1b04 = (int)pcVar2[0xe];
    uVar3 = 99;
    iVar1 = M007_GETSTATE();
    if (iVar1 == 1) {
      DAT_1010_1b44 = DAT_1010_1b44 << 1;
      DAT_1010_1b42 = DAT_1010_1b42 << 1;
      DAT_1010_11d0 = DAT_1010_11d0 << 1;
      DAT_1010_1e56 = DAT_1010_1e56 << 1;
    }
    iVar1 = FUN_1008_7c88(param_1,uVar3);
    if (iVar1 != 0) {
      UIF_LOG(0x1008,0x2800,0,0);
    }
  }
  return iVar1;
}


// ---- SENDBINARYTOCLIPBOARD @ 1008:23a4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __stdcall16far SENDBINARYTOCLIPBOARD(undefined2 param_1,char *param_2)

{
  int iVar1;
  char *pcVar2;
  undefined2 uVar3;
  undefined2 unaff_CS;
  
  uVar3 = (undefined2)((ulong)param_2 >> 0x10);
  pcVar2 = (char *)param_2;
  DAT_1010_1e58 = *param_2;
  DAT_1010_1e6e = pcVar2[1];
  if (((DAT_1010_1e58 == '\x02') || (DAT_1010_1e6e == '\x02')) ||
     ((DAT_1010_1e58 == '\x03' && (DAT_1010_1e6e == '\x03')))) {
    UIF_LOG(unaff_CS,0x2800,0,0);
    iVar1 = 0x1d0;
  }
  else {
    DAT_1010_1b44 = *(int *)(pcVar2 + 2);
    DAT_1010_1b42 = *(int *)(pcVar2 + 4);
    DAT_1010_11d0 = *(int *)(pcVar2 + 8) - *(int *)(pcVar2 + 4);
    DAT_1010_1e56 = *(int *)(pcVar2 + 6) - *(int *)(pcVar2 + 2);
    _DAT_1010_1b04 = 1;
    DAT_1010_1e62 = pcVar2[0xf];
    DAT_1010_1b55 = pcVar2[0x10];
    DAT_1010_12ec = pcVar2[0x11];
    uVar3 = 99;
    iVar1 = M007_GETSTATE();
    if (iVar1 == 1) {
      DAT_1010_1b44 = DAT_1010_1b44 << 1;
      DAT_1010_1b42 = DAT_1010_1b42 << 1;
      DAT_1010_11d0 = DAT_1010_11d0 << 1;
      DAT_1010_1e56 = DAT_1010_1e56 << 1;
    }
    iVar1 = FUN_1008_8ada(param_1,uVar3);
    if (iVar1 != 0) {
      UIF_LOG(0x1008,0x2800,0,0);
    }
  }
  return iVar1;
}


// ---- GETIMAGEFROMCLIPBOARD @ 1008:2474

undefined2 __stdcall16far GETIMAGEFROMCLIPBOARD(undefined2 param_1,char *param_2)

{
  int iVar1;
  char *pcVar2;
  undefined2 uVar3;
  undefined2 unaff_CS;
  
  uVar3 = (undefined2)((ulong)param_2 >> 0x10);
  pcVar2 = (char *)param_2;
  DAT_1010_1e58 = *param_2;
  if ((DAT_1010_1e58 == '\x02') || (DAT_1010_1e58 == '\x03')) {
    UIF_LOG(unaff_CS,0x2800,0,0);
    uVar3 = 0x1d0;
  }
  else {
    DAT_1010_1b44 = *(int *)(pcVar2 + 2);
    DAT_1010_1b42 = *(int *)(pcVar2 + 4);
    DAT_1010_11d0 = *(int *)(pcVar2 + 8) - *(int *)(pcVar2 + 4);
    DAT_1010_1e56 = *(int *)(pcVar2 + 6) - *(int *)(pcVar2 + 2);
    DAT_1010_1b02 = '\x01' << (pcVar2[0xb] & 0x1fU);
    DAT_1010_1afe = (int)pcVar2[0xd];
    uVar3 = 99;
    iVar1 = M007_GETSTATE();
    if (iVar1 == 1) {
      DAT_1010_1b44 = DAT_1010_1b44 << 1;
      DAT_1010_1b42 = DAT_1010_1b42 << 1;
      DAT_1010_11d0 = DAT_1010_11d0 << 1;
      DAT_1010_1e56 = DAT_1010_1e56 << 1;
    }
    uVar3 = FUN_1008_80c4(param_1,uVar3);
  }
  return uVar3;
}


// ---- SWITCHHRRU_FITTED @ 1008:250a

void __stdcall16far SWITCHHRRU_FITTED(int param_1)

{
  FUN_1008_b0fc(CONCAT11(0x10,(undefined1)param_1),0x1010);
  M007_PUTSTATE(0x1008,param_1);
  if (param_1 == 0) {
    M007_PUTSTATE(0x1018,0);
  }
  return;
}


// ---- DOCOMMANDSAVE_HRRU_PARAMS @ 1008:2542

undefined2 __cdecl16far DOCOMMANDSAVE_HRRU_PARAMS(void)

{
  return 0x1010;
}


// ---- DOCOMMANDTAKE_PHOTO @ 1008:2550

void __cdecl16far DOCOMMANDTAKE_PHOTO(void)

{
  char cVar1;
  int iVar2;
  undefined1 extraout_AH;
  undefined1 extraout_AH_00;
  uint uVar3;
  undefined1 extraout_AH_01;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined1 uVar6;
  
  uVar5 = 0x1010;
  uVar4 = 0x8f;
  cVar1 = M007_GETSTATE();
  uVar6 = 1;
  iVar2 = M007_GETSTATE(0x1018,0x95,uVar4,uVar5,1);
  if (iVar2 != 0) {
    return;
  }
  uVar4 = 0x95;
  M007_PUTSTATE(0x1018,1);
  if (cVar1 == '\0') {
    FUN_1008_b500(0,uVar4);
    FUN_1008_b134(CONCAT11(extraout_AH,uVar6));
  }
  else if (cVar1 == '\x01') {
    FUN_1008_b500(1,uVar4);
    FUN_1008_b190(CONCAT11(extraout_AH_01,uVar6));
  }
  else {
    if (cVar1 == '\x02') {
      FUN_1008_b500(0,uVar4);
      uVar3 = CONCAT11(extraout_AH_00,1);
    }
    else {
      if (cVar1 != '\x03') goto LAB_1008_25e3;
      uVar3 = FUN_1008_b500(0,uVar4);
      uVar3 = uVar3 & 0xff00;
    }
    FUN_1008_b162(uVar3);
  }
LAB_1008_25e3:
  FUN_1008_ce32();
  Ordinal_36(0x1008,4);
  return;
}


// ---- SWITCHHRRU_SOURCE @ 1008:25f6

void __stdcall16far SWITCHHRRU_SOURCE(undefined2 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  uVar4 = 0x1010;
  uVar3 = 0x95;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 0) {
    uVar2 = 0x8f;
    M007_PUTSTATE(0x1018,param_1);
    FUN_1008_b5f0(uVar2,uVar3,uVar4);
  }
  return;
}


// ---- SWITCHFILM_SPEED @ 1008:2624

void __stdcall16far SWITCHFILM_SPEED(uint param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1010;
  uVar2 = 0x95;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 0) {
    FUN_1008_b1ec(param_1 & 0xff,uVar2,uVar3);
    uVar2 = 0x90;
    M007_PUTSTATE(0x1008,param_1);
    FUN_1008_b76a(uVar2);
    FUN_1008_b5f0();
  }
  return;
}


// ---- SWITCHHRRU_LINE_REPEAT @ 1008:2662

undefined2 __stdcall16far SWITCHHRRU_LINE_REPEAT(void)

{
  return 0x1010;
}


// ---- SWITCHHRRU_OVERLAY_SOURCE @ 1008:2672

void __stdcall16far SWITCHHRRU_OVERLAY_SOURCE(undefined2 param_1)

{
  int iVar1;
  
  iVar1 = M007_GETSTATE();
  if (iVar1 == 0) {
    M007_PUTSTATE(0x1018,param_1);
  }
  return;
}


// ---- SWITCHHRRU_CAMERA @ 1008:269c

void __stdcall16far SWITCHHRRU_CAMERA(uint param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1010;
  uVar2 = 0x95;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 0) {
    FUN_1008_b210(param_1 & 0xff,uVar2,uVar3);
    uVar2 = 0x93;
    M007_PUTSTATE(0x1008,param_1);
    iVar1 = M007_GETSTATE(0x1018,0xb5,uVar2);
    if (iVar1 == 1) {
      if (param_1 == 0) {
        uVar2 = 0;
      }
      else if (param_1 == 1) {
        uVar2 = 1;
      }
      else if (param_1 == 2) {
        uVar2 = 2;
      }
      else {
        if (param_1 != 3) {
          return;
        }
        uVar2 = 3;
      }
      SWITCHOUT_DEV(0x1018,uVar2);
    }
  }
  return;
}


// ---- SETHRRU_BRIGHTNESS @ 1008:2706

void __stdcall16far SETHRRU_BRIGHTNESS(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = M007_GETSTATE();
  if (iVar1 == 0) {
    FUN_1008_b234();
    M007_PUTVALUE(0x1008,param_1);
  }
  return;
}


// ---- SETHRRU_CONTRAST @ 1008:2756

void __stdcall16far SETHRRU_CONTRAST(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = M007_GETSTATE();
  if (iVar1 == 0) {
    FUN_1008_b262();
    M007_PUTVALUE(0x1008,param_1);
  }
  return;
}


// ---- SETHRRU_FOCUS @ 1008:27a6

undefined2 __stdcall16far SETHRRU_FOCUS(void)

{
  return 0x1010;
}


// ---- SETHRRU_GAMMA @ 1008:27b6

void __stdcall16far SETHRRU_GAMMA(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 local_6;
  
  uVar5 = 0x1010;
  uVar4 = 0x95;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 0) {
    uVar3 = 0x95;
    M007_PUTSTATE();
    uVar2 = 0xd6;
    local_6 = (undefined2)param_1;
    M007_PUTVALUE(0x1018,local_6,(int)((ulong)param_1 >> 0x10));
    FUN_1008_b1be(param_1,uVar2,uVar3,uVar4,uVar5);
  }
  return;
}


// ---- FUN_1008_2814 @ 1008:2814

void __cdecl16far FUN_1008_2814(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  long local_1a;
  char local_16;
  float local_14 [3];
  byte local_8;
  byte local_7;
  byte local_4;
  
  uVar6 = 0x1010;
  uVar2 = 0x1008;
  FUN_1008_b088(local_14);
  if ((local_8 & 8) != 0) {
    uVar2 = 0x95;
    M007_PUTSTATE(0x1008,0);
    MESSAGEBEEP(0x1018,0x40,uVar2,uVar6);
    MESSAGEBEEP(0x1018,0x40);
    MESSAGEBEEP(0x1018,0x40);
    FUN_1008_b592();
    FUN_1008_b3f4();
    uVar2 = 0xf0;
    M007_PUTVALUE(0x1008,DAT_1010_06e8,DAT_1010_06ea);
    FUN_1008_0d30(1,uVar2);
    FUN_1008_423c(0,0);
    uVar2 = 0x1018;
    SEM_PLANE_CTRL(0x1008,3);
  }
  if ((local_8 & 0x20) != 0) {
    uVar6 = 0x95;
    M007_PUTSTATE(uVar2,0);
    FUN_1008_b3f4(uVar6);
    uVar2 = 0xf0;
    M007_PUTVALUE(0x1008,DAT_1010_06e8,DAT_1010_06ea);
    FUN_1008_0d30(1,uVar2);
    FUN_1008_423c(0,0);
    uVar2 = 0x1018;
    SEM_PLANE_CTRL(0x1008,3);
  }
  iVar1 = M007_GETSTATE(uVar2,0x95);
  if (iVar1 == 1) {
    uVar2 = 0xf0;
    M007_PUTVALUE(0x1018,DAT_1010_06ec - local_14[0]);
  }
  if ((local_8 & 0x80) != 0) {
    M007_PUTSTATE(0x1018,0);
  }
  if (((local_4 & 0x80) != 0) && (iVar1 = M007_GETSTATE(0x1018,0,uVar2), iVar1 != 0)) {
    UIF_LOG(0x1018,0x6000,local_4 & 0x7f,0);
  }
  if ((local_8 & 0x40) != 0) {
    M007_PUTSTATE(0x1018,0);
  }
  uVar2 = 0x1018;
  if ((local_8 & 0x10) == 0) goto LAB_1008_2af2;
  switch(DAT_1010_0020) {
  case '\0':
    uVar4 = 0x4000;
    uVar5 = 0x4030;
    uVar3 = 0x4000;
    uVar6 = 0x4366;
    break;
  case '\x01':
    uVar4 = 0x2000;
    uVar5 = 0x2038;
    uVar3 = 0x2001;
    uVar6 = 0x4378;
    break;
  case '\x02':
    uVar4 = 0x2000;
    uVar5 = 0x2038;
    uVar3 = 0x2002;
    uVar6 = 0x438a;
    break;
  case '\x03':
    uVar4 = 0x2000;
    uVar5 = 0x203a;
    uVar3 = 0x2001;
    uVar6 = 0x439c;
    break;
  case '\x04':
    uVar4 = 0x2000;
    uVar5 = 0x203a;
    uVar3 = 0x2002;
    uVar6 = 0x43ae;
    break;
  case '\x05':
    uVar4 = 0x94;
    iVar1 = M007_GETSTATE(0x1008,0x94);
    if (iVar1 == 1) {
      uVar5 = 0x2000;
      uVar3 = 0x2039;
      uVar6 = 0x43c0;
    }
    else {
      uVar5 = 0x2000;
      uVar3 = 0x2039;
      uVar6 = 0x43d2;
    }
    break;
  case '\x06':
    uVar4 = 0x94;
    iVar1 = M007_GETSTATE(0x1008,0x94);
    if (iVar1 == 1) {
      uVar5 = 0x2000;
      uVar3 = 0x2039;
      uVar6 = 0x43e4;
    }
    else {
      uVar5 = 0x2000;
      uVar3 = 0x2039;
      uVar6 = 0x43f6;
    }
    break;
  case '\a':
    uVar4 = 0x94;
    iVar1 = M007_GETSTATE(0x1008,0x94);
    if (iVar1 == 1) {
      uVar5 = 0x2000;
      uVar3 = 0x203b;
      uVar6 = 0x4408;
    }
    else {
      uVar5 = 0x2000;
      uVar3 = 0x203b;
      uVar6 = 0x441a;
    }
    break;
  case '\b':
    uVar4 = 0x94;
    iVar1 = M007_GETSTATE(0x1008,0x94);
    if (iVar1 == 1) {
      uVar5 = 0x2000;
      uVar3 = 0x203b;
      uVar6 = 0x442c;
    }
    else {
      uVar5 = 0x2000;
      uVar3 = 0x203b;
      uVar6 = 0x443e;
    }
    break;
  case '\t':
    uVar4 = 0x22;
    uVar5 = 1;
    uVar3 = 7;
    uVar6 = 0x4450;
    break;
  case '\n':
    local_16 = FUN_1008_b366();
    FUN_1008_b76a();
    FUN_1008_b5f0();
    uVar2 = 0x1018;
    M007_PUTSTATE(0x1008,1);
    goto LAB_1008_2ae1;
  default:
    local_16 = '\x01';
    goto LAB_1008_2ae1;
  }
  uVar2 = 0x1008;
  local_16 = FUN_1008_b290(uVar6,0x1008,uVar3,uVar5,uVar4);
LAB_1008_2ae1:
  if (local_16 == '\x01') {
    DAT_1010_0020 = '\0';
  }
  else {
    DAT_1010_0020 = DAT_1010_0020 + '\x01';
  }
LAB_1008_2af2:
  if (DAT_1010_002e == '\x01') {
    FUN_1000_0384(0xb1e,0x1010);
    if ((DAT_1010_0b20 < DAT_1010_0b1c) ||
       ((DAT_1010_0b20 <= DAT_1010_0b1c && (DAT_1010_0b1e < DAT_1010_0b1a)))) {
      uVar5 = 0xf8;
      uVar6 = 0x1000;
      local_1a = FUN_1000_050c(DAT_1010_0b1a - DAT_1010_0b1e,
                               (DAT_1010_0b1c - DAT_1010_0b20) -
                               (uint)(DAT_1010_0b1a < DAT_1010_0b1e),1000,0);
      uVar3 = (undefined2)((ulong)(float)local_1a >> 0x10);
    }
    else {
      uVar5 = 0x40;
      MESSAGEBEEP(0x1000,0x40);
      uVar3 = 0x40;
      MESSAGEBEEP(0x1018,0x40);
      uVar6 = 0x1018;
      MESSAGEBEEP(0x1018,0x40);
      DAT_1010_002e = '\0';
    }
    uVar2 = 0x1018;
    M007_PUTVALUE(uVar6,uVar3,uVar5);
  }
  if (DAT_1010_0021 != '\0') {
    uVar2 = 0x1008;
    FUN_1008_b99a();
  }
  uVar6 = 0x1018;
  iVar1 = M007_GETSTATE(uVar2,0x95);
  if (iVar1 == 1) {
    uVar2 = 0x1018;
    uVar6 = 0x1008;
    FUN_1008_ce32();
  }
  if ((local_7 & 1) != 0) {
    uVar2 = 0xe5;
    M007_PUTSTATE(uVar6,0);
    uVar6 = 0x1008;
    FUN_1008_d518(0x12,uVar2);
  }
  iVar1 = M007_GETSTATE(uVar6,0xf5,uVar2);
  if (iVar1 == 1) {
    DOCOMMANDIA_GET_RTN_STAT();
  }
  return;
}


// ---- LOADREDUCEDIMAGE @ 1008:2bd6

undefined2 __stdcall16far LOADREDUCEDIMAGE(char *param_1,undefined2 param_2,undefined2 param_3)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_CS;
  undefined1 local_18;
  int local_17;
  int local_15;
  int local_13;
  int local_11;
  char local_f;
  char local_9;
  char local_3;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  if (*param_1 == '\x03') {
    UIF_LOG(unaff_CS,0x2800,0,0);
    uVar2 = 0x1d0;
  }
  else {
    DAT_1010_1b44 = *(int *)((char *)param_1 + 2);
    DAT_1010_1b42 = *(int *)((char *)param_1 + 4);
    uVar2 = 99;
    iVar1 = M007_GETSTATE();
    if (iVar1 == 1) {
      DAT_1010_1b44 = DAT_1010_1b44 << 1;
      DAT_1010_1b42 = DAT_1010_1b42 << 1;
    }
    iVar1 = FUN_1008_5886(param_2,param_3,uVar2);
    if (iVar1 == 0) {
      do {
        iVar1 = FUN_1008_4fba(&local_18);
        if (iVar1 != 0) goto LAB_1008_2c5e;
        if (local_3 == '\x01') goto LAB_1008_2c80;
      } while (DAT_1010_1b4a != 0 || DAT_1010_1b48 != 0);
      FUN_1008_70c8();
      iVar1 = FUN_1008_5886(param_2,param_3);
      if (iVar1 == 0) {
        iVar1 = FUN_1008_4fba(&local_18);
        if (iVar1 == 0) {
LAB_1008_2c80:
          uVar2 = DAT_1010_002a;
          if ((((local_9 == '\0') || (local_f == '\x01')) || (local_f == '\x02')) ||
             ((local_15 == 0 && local_17 == 0 || (local_11 == 0 && local_13 == 0)))) {
            FUN_1008_70c8();
            UIF_LOG(0x1008,0x2800,0,0);
            return 0x1cf;
          }
          DAT_1010_1e56 = local_17;
          DAT_1010_11d0 = local_13;
          if (*param_1 == '\x02') {
            DAT_1010_1e58 = '\0';
          }
          else {
            DAT_1010_1e58 = *param_1;
          }
          if (local_3 == '\0') {
            iVar1 = FUN_1008_582c(0,5);
          }
          else {
            DAT_1010_002a = 1;
            iVar1 = FUN_1008_582c(0,0);
            DAT_1010_002a = uVar2;
          }
          if (iVar1 != 0) {
            FUN_1008_70c8();
            UIF_LOG(0x1008,0x2800,0,0);
            return 0x1ce;
          }
          FUN_1008_70c8();
          return 0;
        }
LAB_1008_2c5e:
        FUN_1008_70c8();
        UIF_LOG(0x1008,0x2800,0,0);
        return 0x1cd;
      }
    }
    UIF_LOG(0x1008,0x2800,0,0);
    uVar2 = 0x1cc;
  }
  return uVar2;
}


// ---- GETCLIPDATA @ 1008:2d82

undefined2 __stdcall16far GETCLIPDATA(undefined2 param_1,undefined1 *param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  long lVar6;
  undefined2 uVar7;
  
  uVar7 = 0x1010;
  iVar3 = OPENCLIPBOARD();
  if (iVar3 == 0) {
    UIF_LOG(0x1018,0x2800,0,0);
    return 0x1d4;
  }
  iVar3 = ISCLIPBOARDFORMATAVAILABLE(0x1018,8,param_1,uVar7);
  if (iVar3 == 0) {
    CLOSECLIPBOARD(0x1018);
    return 0x1d5;
  }
  iVar3 = GETCLIPBOARDDATA(0x1018,8);
  if (iVar3 != 0) {
    lVar6 = GLOBALLOCK(0x1018,iVar3);
    uVar7 = (undefined2)((ulong)lVar6 >> 0x10);
    iVar4 = (int)lVar6;
    if (lVar6 != 0) {
      uVar1 = *(uint *)(iVar4 + 0xe);
      if (uVar1 == 0x18) {
        *param_2 = 2;
      }
      else {
        if (0x18 < uVar1) {
LAB_1008_2e1f:
          GLOBALUNLOCK(0x1018,iVar3);
          CLOSECLIPBOARD(0x1018);
          UIF_LOG(0x1018,0x1800,0,0);
          return 0x1d7;
        }
        cVar2 = (char)uVar1;
        if (cVar2 == '\x01') {
          *param_2 = 0;
        }
        else if (cVar2 == '\x04') {
          *param_2 = 3;
        }
        else {
          if (cVar2 != '\b') goto LAB_1008_2e1f;
          *param_2 = 1;
        }
      }
      uVar5 = (undefined2)((ulong)param_2 >> 0x10);
      *(undefined2 *)((undefined1 *)param_2 + 1) = *(undefined2 *)(iVar4 + 4);
      *(undefined2 *)((undefined1 *)param_2 + 3) = *(undefined2 *)(iVar4 + 8);
      GLOBALUNLOCK(0x1018,iVar3);
      CLOSECLIPBOARD(0x1018);
      return 0;
    }
  }
  CLOSECLIPBOARD(0x1018);
  UIF_LOG(0x1018,0x2800,0,0);
  return 0x1d6;
}


// ---- SETPHOTO_NUMBER @ 1008:2e96

void __stdcall16far SETPHOTO_NUMBER(undefined2 param_1,undefined2 param_2)

{
  undefined2 unaff_CS;
  
  M007_PUTVALUE(unaff_CS,param_1,param_2);
  return;
}


// ---- DOCOMMANDABORT_PHOTO @ 1008:2eb6

void __cdecl16far DOCOMMANDABORT_PHOTO(void)

{
  FUN_1008_b3d4(0x1010);
  return;
}


// ---- OUTPUTDEVICEFACTOR @ 1008:2eca

float __stdcall16far OUTPUTDEVICEFACTOR(uint param_1,int param_2,int param_3)

{
  undefined2 uVar1;
  bool bVar2;
  uint uVar3;
  undefined2 uVar4;
  int iVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  uint local_14;
  uint local_a;
  uint local_8;
  undefined4 local_6;
  
  uVar8 = 0x1010;
  bVar2 = false;
  uVar7 = 0xb2;
  uVar4 = M007_GETSTATE();
  uVar1 = 0x1008;
  uVar6 = 0x1008;
  switch(uVar4) {
  case 1:
    uVar6 = 0x1018;
    iVar5 = M007_GETSTATE(0x1008,0xb4,uVar7,uVar8);
    uVar1 = uVar6;
    if (iVar5 == 0) {
      local_a = 0x500;
      local_8 = 400;
      bVar2 = true;
      break;
    }
  case 6:
    uVar6 = uVar1;
    local_a = 0x280;
    local_8 = 800;
    break;
  case 2:
    uVar6 = 0x1018;
    iVar5 = M007_GETSTATE(0x1008,0xb4,uVar7,uVar8);
    if (iVar5 == 1) {
      local_a = 0x500;
      local_8 = 0x4c4;
    }
    else {
      local_a = 0x500;
      local_8 = 0x3c0;
    }
    break;
  case 3:
    uVar6 = 0x1018;
    iVar5 = M007_GETSTATE(0x1008,0xb4,uVar7,uVar8);
    if (iVar5 == 1) {
      local_a = 0x200;
      local_8 = 0x2e8;
    }
    else {
      local_a = 0x280;
      local_8 = 0x220;
    }
    break;
  default:
    local_6 = (float)CONCAT22(DAT_1010_06f2,DAT_1010_06f0);
    return local_6;
  case 5:
    local_a = 0x800;
    local_8 = 0xffff;
    break;
  case 7:
    local_a = 0x280;
    local_8 = 0x280;
    uVar6 = uVar1;
    break;
  case 8:
    local_a = 0x380;
    local_8 = 0x264;
    uVar6 = uVar1;
  }
  uVar3 = local_a;
  if (param_3 == 1) {
    local_a = local_8;
    local_8 = uVar3;
  }
  local_a = (param_1 - 1) / local_a;
  local_8 = (param_2 - 1U) / local_8;
  if (local_a < local_8) {
    local_a = local_8;
  }
  local_6 = 1.0 / (float)(local_a + 1);
  if (bVar2) {
    local_6 = local_6 * DAT_1010_06f4;
  }
  iVar5 = M007_GETSTATE(uVar6,0xb2);
  if ((iVar5 == 5) && (iVar5 = M007_GETSTATE(0x1018,0xb4), iVar5 == 1)) {
    local_14 = ((local_a + 1) * 0x800) / param_1;
    if (8 < local_14) {
      local_14 = 8;
    }
    local_6 = (float)local_14 * local_6;
  }
  return local_6;
}


// ---- SWITCHVP_TYPE @ 1008:3082

void __stdcall16far SWITCHVP_TYPE(undefined2 param_1)

{
  int iVar1;
  undefined2 unaff_CS;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1010;
  uVar2 = 0xb2;
  M007_PUTSTATE(unaff_CS,param_1);
  iVar1 = M007_GETSTATE(0x1018,0xb5,uVar2,uVar3);
  if (iVar1 == 0) {
    switch(param_1) {
    case 1:
      uVar2 = 8;
      break;
    case 2:
      uVar2 = 10;
      break;
    case 3:
      uVar2 = 9;
      break;
    case 4:
      uVar2 = 0xb;
      break;
    case 5:
      uVar2 = 0xc;
      break;
    case 6:
      uVar2 = 7;
      break;
    case 7:
      uVar2 = 0xd;
      break;
    case 8:
      uVar2 = 0xe;
      break;
    default:
      goto switchD_1008_30e0_default;
    }
    SWITCHOUT_DEV(0x1008,uVar2);
  }
switchD_1008_30e0_default:
  return;
}


// ---- PRINTVIDEOIMAGE @ 1008:30fc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __stdcall16far PRINTVIDEOIMAGE(undefined1 *param_1)

{
  int iVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  
  uVar6 = 0x1010;
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  puVar3 = (undefined1 *)param_1;
  DAT_1010_1b44 = *(undefined2 *)(puVar3 + 5);
  DAT_1010_1b42 = *(undefined2 *)(puVar3 + 7);
  DAT_1010_11d0 = *(int *)(puVar3 + 0xb) - *(int *)(puVar3 + 7);
  DAT_1010_1e56 = *(int *)(puVar3 + 9) - *(int *)(puVar3 + 5);
  uVar5 = 99;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    DAT_1010_11d0 = DAT_1010_11d0 << 1;
    DAT_1010_1e56 = DAT_1010_1e56 << 1;
  }
  DAT_1010_1e58 = *param_1;
  DAT_1010_1e6e = puVar3[1];
  DAT_1010_12e2 = puVar3[2];
  _DAT_1010_1b04 = (int)(char)puVar3[3];
  uVar2 = Ordinal_36(0x1018,2,uVar5,uVar6);
  FUN_1008_c362((int)(char)puVar3[4],uVar2 & 0xff00);
  return;
}


// ---- DETERMINEBESTPRINT @ 1008:3184

void __stdcall16far DETERMINEBESTPRINT(undefined2 *param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  
  uVar6 = 0x1010;
  uVar5 = 0xb2;
  uVar1 = M007_GETSTATE();
  puVar3 = (undefined2 *)param_1;
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  switch(uVar1) {
  case 1:
    iVar2 = M007_GETSTATE(0x1008,0xb4,uVar5,uVar6);
    if (iVar2 != 0) goto switchD_1008_3248_caseD_6;
  default:
    *param_1 = 0x400;
    puVar3[1] = 0x300;
    break;
  case 2:
  case 4:
    *param_1 = 0x400;
    puVar3[1] = 0x300;
    goto LAB_1008_3201;
  case 3:
    iVar2 = M007_GETSTATE(0x1008,0xb4,uVar5,uVar6);
    if (iVar2 == 1) {
      *param_1 = 0x200;
      puVar3[1] = 0x2e8;
    }
    else {
      *param_1 = 0x280;
      puVar3[1] = 0x220;
    }
LAB_1008_3201:
    *(undefined1 *)(puVar3 + 2) = 0;
    *(undefined1 *)((int)puVar3 + 5) = 1;
    return;
  case 6:
switchD_1008_3248_caseD_6:
    *param_1 = 800;
    puVar3[1] = 0x280;
    *(undefined1 *)(puVar3 + 2) = 1;
    goto LAB_1008_31cf;
  case 7:
    *param_1 = 0x280;
    puVar3[1] = 0x280;
    break;
  case 8:
    *param_1 = 0x380;
    puVar3[1] = 0x264;
  }
  *(undefined1 *)(puVar3 + 2) = 0;
LAB_1008_31cf:
  *(undefined1 *)((int)puVar3 + 5) = 0;
  return;
}


// ---- DOCOMMANDHRRU @ 1008:3264

void __cdecl16far DOCOMMANDHRRU(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  uVar4 = 0x1010;
  uVar3 = 0x95;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 0) {
    uVar2 = 0xb5;
    M007_PUTSTATE(0x1018,1);
    uVar3 = M007_GETSTATE(0x1018,0x93,uVar2,uVar3,uVar4);
    SWITCHHRRU_CAMERA(uVar3);
  }
  return;
}


// ---- DOCOMMANDDISPLAY @ 1008:329c

void __cdecl16far DOCOMMANDDISPLAY(void)

{
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  
  uVar2 = 0x1010;
  uVar1 = 0xb5;
  M007_PUTSTATE(unaff_CS,2);
  uVar1 = M007_GETSTATE(0x1018,0xb6,uVar1,uVar2);
  SWITCHMONITOR(uVar1);
  return;
}


// ---- DOCOMMANDVIDEO_PRINTER @ 1008:32c6

void __cdecl16far DOCOMMANDVIDEO_PRINTER(void)

{
  undefined2 unaff_CS;
  
  M007_PUTSTATE(unaff_CS,0);
  SWITCHVP_TYPE(8);
  return;
}


// ---- DOCOMMANDPRINTER @ 1008:32ea

void __cdecl16far DOCOMMANDPRINTER(void)

{
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  
  uVar2 = 0x1010;
  uVar1 = 0xb5;
  M007_PUTSTATE(unaff_CS,3);
  SWITCHOUT_DEV(0x1018,0xf,uVar1,uVar2);
  return;
}


// ---- SWITCHVP_PAPER_SIZE @ 1008:330e

void __stdcall16far SWITCHVP_PAPER_SIZE(undefined2 param_1)

{
  undefined2 unaff_CS;
  
  M007_PUTSTATE(unaff_CS,param_1);
  return;
}


// ---- SWITCHMONITOR @ 1008:332a

void __stdcall16far SWITCHMONITOR(int param_1)

{
  int iVar1;
  undefined2 unaff_CS;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1010;
  uVar2 = 0xb6;
  M007_PUTSTATE(unaff_CS,param_1);
  iVar1 = M007_GETSTATE(0x1018,0xb5,uVar2,uVar3);
  if (iVar1 == 2) {
    if (param_1 == 0) {
      uVar2 = 4;
    }
    else if (param_1 == 1) {
      uVar2 = 5;
    }
    else {
      if (param_1 != 2) {
        return;
      }
      uVar2 = 6;
    }
    SWITCHOUT_DEV(0x1018,uVar2);
  }
  return;
}


// ---- SWITCHHRRU_SPEED @ 1008:3378

void __stdcall16far SWITCHHRRU_SPEED(undefined2 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  uVar4 = 0x1010;
  uVar3 = 0x95;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 0) {
    uVar2 = 0xb8;
    M007_PUTSTATE(0x1018,param_1);
    FUN_1008_b5f0(uVar2,uVar3,uVar4);
  }
  return;
}


// ---- SWITCHHRRU_FAST @ 1008:33a6

void __stdcall16far SWITCHHRRU_FAST(undefined2 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  uVar4 = 0x1010;
  uVar3 = 0x95;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 0) {
    uVar2 = 0xb9;
    M007_PUTSTATE(0x1018,param_1);
    FUN_1008_b5f0(uVar2,uVar3,uVar4);
  }
  return;
}


// ---- SWITCHHRRU_SLOW @ 1008:33d4

void __stdcall16far SWITCHHRRU_SLOW(undefined2 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  uVar4 = 0x1010;
  uVar3 = 0x95;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 0) {
    uVar2 = 0xba;
    M007_PUTSTATE(0x1018,param_1);
    FUN_1008_b5f0(uVar2,uVar3,uVar4);
  }
  return;
}


// ---- SETDEVELOP_TIME @ 1008:3402

void __stdcall16far SETDEVELOP_TIME(undefined4 param_1)

{
  undefined2 unaff_CS;
  undefined2 local_6;
  undefined2 uStack_4;
  
  if (DAT_1010_002e == '\0') {
    uStack_4 = (undefined2)((ulong)param_1 >> 0x10);
    local_6 = (undefined2)param_1;
    M007_PUTVALUE(unaff_CS,local_6,uStack_4);
    DAT_1010_0030 = param_1;
  }
  return;
}


// ---- DOCOMMANDSTART_DEVELOP_TIMER @ 1008:3440

void __cdecl16far DOCOMMANDSTART_DEVELOP_TIMER(void)

{
  uint uVar1;
  int in_DX;
  
  DAT_1010_002e = 1;
  FUN_1000_0384(0xb1e,0x1010,0x1010);
  uVar1 = FUN_1000_05e2();
  DAT_1010_0b1a = uVar1 + DAT_1010_0b1e;
  DAT_1010_0b1c = in_DX + DAT_1010_0b20 + (uint)CARRY2(uVar1,DAT_1010_0b1e);
  return;
}


// ---- SWITCHVP_FORMFEED @ 1008:347e

void __stdcall16far SWITCHVP_FORMFEED(undefined2 param_1)

{
  undefined2 unaff_CS;
  
  M007_PUTSTATE(unaff_CS,param_1);
  return;
}


// ---- PRINTVIDEOTIFF @ 1008:349a

undefined2 __stdcall16far PRINTVIDEOTIFF(undefined2 param_1,undefined2 param_2)

{
  int iVar1;
  undefined1 extraout_AH;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined1 local_18;
  int local_17;
  int local_15;
  int local_13;
  int local_11;
  char local_f;
  char local_a;
  char local_9;
  
  uVar3 = 0x1010;
  uVar2 = 0xb3;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    return 1;
  }
  iVar1 = FUN_1008_5886(param_1,param_2,uVar2,uVar3);
  if (iVar1 != 0) {
    UIF_LOG(0x1008,0x2800,0,0);
    return 0x1cc;
  }
  iVar1 = FUN_1008_4fba(&local_18);
  if (iVar1 == 0) {
    if ((local_9 != '\0') && (local_15 != 0 || local_17 != 0)) {
      DAT_1010_1e56 = local_17;
      if (local_11 != 0 || local_13 != 0) {
        DAT_1010_11d0 = local_13;
        if (local_f != '\0') goto LAB_1008_34f2;
        iVar1 = FUN_1008_d0c2();
        if (iVar1 != 1) {
LAB_1008_3572:
          if ((DAT_1010_0024 == '\0') &&
             (iVar1 = FUN_1008_70ec(DAT_1010_12e8,DAT_1010_12ea), iVar1 != 0)) {
            FUN_1008_70c8();
            UIF_LOG(0x1008,0x2800,0,0);
            return 0x1ce;
          }
          Ordinal_36(0x1008,2);
          FUN_1008_c362(0,CONCAT11(extraout_AH,1));
          FUN_1008_70c8();
          return 0;
        }
        if (local_a != '\x01') {
          FUN_1008_d0ea();
          goto LAB_1008_3572;
        }
        iVar1 = FUN_1008_cfd4();
        if (iVar1 == 0) goto LAB_1008_3572;
      }
    }
    FUN_1008_70c8();
    UIF_LOG(0x1008,0x2800,0,0);
    uVar2 = 0x1cf;
  }
  else {
LAB_1008_34f2:
    FUN_1008_70c8();
    UIF_LOG(0x1008,0x2800,0,0);
    uVar2 = 0x1cd;
  }
  return uVar2;
}


// ---- SWITCHPARALLEL_PORT @ 1008:35ce

void __stdcall16far SWITCHPARALLEL_PORT(undefined2 param_1)

{
  FUN_1008_d0fe(param_1,0x1010);
  M007_PUTSTATE(0x1008,param_1);
  return;
}


// ---- DISPLAYS400DIB @ 1008:35f4

void __stdcall16far DISPLAYS400DIB(undefined2 param_1,undefined2 param_2,undefined2 param_3)

{
  DAT_1010_1b44 = param_3;
  DAT_1010_1b42 = param_2;
  DAT_1010_1e58 = 0;
  DAT_1010_1b02 = 0xff;
  DAT_1010_1afe = 1;
  FUN_1008_9ff0(param_1,0x1010);
  return;
}


// ---- READ_BITMAP @ 1008:362a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 __stdcall16far
READ_BITMAP(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
           undefined2 param_5,undefined2 param_6,int param_7)

{
  undefined2 uVar1;
  
  DAT_1010_1e58 = 0;
  DAT_1010_1e6e = 3;
  DAT_1010_12e2 = 3;
  DAT_1010_1b44 = param_6;
  DAT_1010_1b42 = param_5;
  DAT_1010_11d0 = param_3;
  DAT_1010_1e56 = param_4;
  _DAT_1010_1b04 = 0;
  if (param_7 != 6) {
    if (param_7 == 10) {
      DAT_1010_12e2 = 0;
    }
    else if (param_7 == 0xb) {
      DAT_1010_1e6e = 0;
    }
    else {
      if (param_7 != 0xc) {
        if (param_7 == 7) {
          uVar1 = FUN_1008_a7f4(param_1,param_2);
          return uVar1;
        }
        if (param_7 != 8) {
          if (param_7 == 9) {
            uVar1 = FUN_1008_ab2c(param_1,param_2,0x1010);
            return uVar1;
          }
          DAT_1010_12e2 = 3;
          _DAT_1010_1b04 = 0;
          DAT_1010_1e58 = 0;
          DAT_1010_1e6e = 3;
          return 0;
        }
        uVar1 = FUN_1008_a918();
        return uVar1;
      }
      DAT_1010_12e2 = 0;
      DAT_1010_1e6e = 0;
    }
  }
  uVar1 = FUN_1008_a4de();
  return uVar1;
}


// ---- SWITCHISIS_ON_TOP @ 1008:36d4

void __stdcall16far SWITCHISIS_ON_TOP(undefined2 param_1)

{
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  
  uVar2 = 0x1010;
  uVar1 = 0xcf;
  M007_PUTSTATE(unaff_CS,param_1);
  FUN_1008_79da(0x4460,0x1008,param_1,uVar1,uVar2);
  FUN_1008_79da(0x4470,0x1008,param_1);
  FUN_1008_79da(0x4476,0x1008,param_1);
  FUN_1008_79da(0x4486,0x1008,param_1);
  FUN_1008_79da(0x449a,0x1008,param_1);
  FUN_1008_79da(0x44a4,0x1008,param_1);
  FUN_1008_79da(0x44b0,0x1008,param_1);
  FUN_1008_79da(0x44ba,0x1008,param_1);
  FUN_1008_79da(0x44ce,0x1008,param_1);
  FUN_1008_79da(0x44d8,0x1008,param_1);
  FUN_1008_79da(0x44e4,0x1008,param_1);
  return;
}


// ---- SWITCHINPUT_REDUCTION @ 1008:37c2

void __stdcall16far SWITCHINPUT_REDUCTION(int param_1)

{
  undefined2 unaff_CS;
  
  M007_PUTSTATE(unaff_CS,param_1);
  DAT_1010_002a = param_1 + 1;
  return;
}


// ---- SWITCHOUTPUT_REDUCTION @ 1008:37e6

void __stdcall16far SWITCHOUTPUT_REDUCTION(int param_1)

{
  undefined2 unaff_CS;
  
  M007_PUTSTATE(unaff_CS,param_1);
  DAT_1010_0028 = param_1 + 1;
  return;
}


// ---- DOCOMMANDAPLUSB @ 1008:380a

void __cdecl16far DOCOMMANDAPLUSB(void)

{
  FUN_1008_d518(2,0x1010);
  return;
}


// ---- DOCOMMANDAMINUSB @ 1008:3822

void __cdecl16far DOCOMMANDAMINUSB(void)

{
  FUN_1008_d518(5,0x1010);
  return;
}


// ---- DOCOMMANDBMINUSA @ 1008:383a

void __cdecl16far DOCOMMANDBMINUSA(void)

{
  FUN_1008_d518(6,0x1010);
  return;
}


// ---- DOCOMMANDAMINB @ 1008:3852

void __cdecl16far DOCOMMANDAMINB(void)

{
  FUN_1008_d518(3,0x1010);
  return;
}


// ---- DOCOMMANDAMAXB @ 1008:386a

void __cdecl16far DOCOMMANDAMAXB(void)

{
  FUN_1008_d518(4,0x1010);
  return;
}


// ---- DOCOMMANDATOB @ 1008:3882

void __cdecl16far DOCOMMANDATOB(void)

{
  FUN_1008_d518(0,0x1010);
  return;
}


// ---- DOCOMMANDBTOA @ 1008:389a

void __cdecl16far DOCOMMANDBTOA(void)

{
  FUN_1008_d518(1,0x1010);
  return;
}


// ---- DOCOMMANDHISTO_EQU_STORE @ 1008:38b2

void __cdecl16far DOCOMMANDHISTO_EQU_STORE(void)

{
  FUN_1008_d568(2,0x1010);
  return;
}


// ---- DOCOMMANDHISTO_EQU_LUT @ 1008:38ca

void __cdecl16far DOCOMMANDHISTO_EQU_LUT(void)

{
  FUN_1008_d568(1,0x1010);
  return;
}


// ---- DOCOMMANDAREA_FRACTION @ 1008:38e2

void __cdecl16far DOCOMMANDAREA_FRACTION(void)

{
  int iVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  undefined2 unaff_CS;
  undefined4 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined1 local_16 [4];
  undefined1 local_12 [4];
  undefined2 local_e;
  undefined2 uStack_c;
  undefined2 uStack_a;
  undefined2 uStack_8;
  undefined2 local_6;
  undefined2 local_4;
  
  uVar6 = 0x1010;
  uVar5 = 0x105;
  M007_GETVALUE(unaff_CS,local_12);
  local_6 = FUN_1000_05e2(uVar5,uVar6);
  uVar5 = 0x106;
  M007_GETVALUE(0x1000,local_16);
  local_4 = FUN_1000_05e2(uVar5);
  uVar6 = 0x1018;
  uVar4 = M007_GETSTATE(0x1000,0xd0);
  uVar5 = (undefined2)((ulong)uVar4 >> 0x10);
  iVar1 = (int)uVar4;
  if (iVar1 == 0) {
    uVar3 = 0xe;
  }
  else if (iVar1 == 1) {
    uVar3 = 0xf;
  }
  else {
    if (iVar1 != 2) goto LAB_1008_3988;
    uVar3 = 0x10;
  }
  uVar6 = 0x1008;
  puVar2 = (undefined2 *)FUN_1008_d64c(uVar3);
  local_e = *puVar2;
  uStack_c = puVar2[1];
  uStack_a = puVar2[2];
  uStack_8 = puVar2[3];
LAB_1008_3988:
  M007_PUTVALUE(uVar6,(float)(double)CONCAT26(uStack_8,CONCAT24(uStack_a,CONCAT22(uStack_c,local_e))
                                             ));
  return;
}


// ---- SWITCHIMAGE_DETECT @ 1008:39a8

void __stdcall16far SWITCHIMAGE_DETECT(int param_1)

{
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined1 local_e [4];
  undefined1 local_a [4];
  undefined2 local_6;
  undefined2 local_4;
  
  uVar3 = 0x1010;
  uVar2 = 0xd0;
  M007_PUTSTATE(unaff_CS,param_1);
  uVar1 = 0x105;
  M007_GETVALUE(0x1018,local_a);
  local_4 = FUN_1000_05e2(uVar1,uVar2,uVar3);
  uVar1 = 0x106;
  M007_GETVALUE(0x1000,local_e);
  local_6 = FUN_1000_05e2(uVar1);
  uVar1 = local_4;
  if (param_1 == 0) {
    uVar2 = 0;
    uVar3 = 0xb;
  }
  else {
    uVar2 = local_6;
    if (param_1 == 1) {
      uVar3 = 0xc;
      uVar1 = 0;
    }
    else {
      if (param_1 != 2) {
        return;
      }
      uVar3 = 0xd;
    }
  }
  FUN_1008_d5fa(uVar3,uVar1,uVar2);
  return;
}


// ---- SWITCHIMAGE_FILTER @ 1008:3a4a

void __stdcall16far SWITCHIMAGE_FILTER(undefined2 param_1)

{
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  
  uVar2 = 0x1010;
  uVar1 = 0xd1;
  M007_PUTSTATE(unaff_CS,param_1);
  FUN_1008_d70e(param_1,uVar1,uVar2);
  return;
}


// ---- SWITCHCOPY_ZONE @ 1008:3a70

void __stdcall16far SWITCHCOPY_ZONE(int param_1)

{
  int iVar1;
  undefined2 unaff_CS;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1010;
  uVar2 = 0xd2;
  M007_PUTSTATE(unaff_CS,param_1);
  iVar1 = M007_GETSTATE(0x1018,100,uVar2,uVar3);
  if (iVar1 != param_1) {
    FUN_1008_d81e(param_1);
  }
  return;
}


// ---- SETBLACK_DETECT @ 1008:3aa4

void __stdcall16far SETBLACK_DETECT(float param_1)

{
  float *pfVar1;
  int iVar2;
  undefined2 unaff_SS;
  undefined1 *puVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  float local_e;
  undefined1 local_a [4];
  undefined2 local_6;
  undefined2 local_4;
  
  uVar6 = 0x1010;
  uVar5 = 0x105;
  local_e = param_1;
  M007_PUTVALUE();
  uVar4 = 0x106;
  puVar3 = local_a;
  pfVar1 = (float *)M007_GETVALUE();
  if (*pfVar1 < local_e) {
    puVar3 = (undefined1 *)0x106;
    M007_PUTVALUE(0x1018,local_e);
  }
  local_6 = FUN_1000_05e2(puVar3,uVar4,uVar5,uVar6);
  M007_GETVALUE(0x1000,&local_e);
  local_4 = FUN_1000_05e2();
  iVar2 = M007_GETSTATE(0x1000,0xd0);
  uVar4 = local_6;
  if (iVar2 == 0) {
    uVar5 = 0;
    uVar6 = 0xb;
  }
  else {
    uVar5 = local_4;
    if (iVar2 == 1) {
      uVar6 = 0xc;
      uVar4 = 0;
    }
    else {
      if (iVar2 != 2) {
        return;
      }
      uVar6 = 0xd;
    }
  }
  FUN_1008_d5fa(uVar6,uVar4,uVar5);
  return;
}


// ---- SETWHITE_DETECT @ 1008:3b88

void __stdcall16far SETWHITE_DETECT(float param_1)

{
  float *pfVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 unaff_SS;
  undefined2 uVar4;
  undefined2 uVar5;
  float local_e [2];
  undefined2 local_6;
  undefined2 local_4;
  
  local_e[0] = param_1;
  M007_PUTVALUE();
  pfVar1 = (float *)M007_GETVALUE();
  if (local_e[0] < *pfVar1) {
    M007_PUTVALUE(0x1018,local_e[0]);
  }
  M007_GETVALUE(0x1018,local_e);
  local_4 = FUN_1000_05e2();
  local_6 = FUN_1000_05e2();
  iVar2 = M007_GETSTATE(0x1000,0xd0);
  uVar4 = local_4;
  if (iVar2 == 0) {
    uVar5 = 0;
    uVar3 = 0xb;
  }
  else {
    uVar5 = local_6;
    if (iVar2 == 1) {
      uVar3 = 0xc;
      uVar4 = 0;
    }
    else {
      if (iVar2 != 2) {
        return;
      }
      uVar3 = 0xd;
    }
  }
  FUN_1008_d5fa(uVar3,uVar4,uVar5);
  return;
}


// ---- SETVP_COPIES @ 1008:3c6c

void __stdcall16far SETVP_COPIES(undefined2 param_1,undefined2 param_2)

{
  undefined2 unaff_CS;
  
  M007_PUTVALUE(unaff_CS,param_1,param_2);
  return;
}


// ---- DOCOMMANDAEXCHB @ 1008:3c8c

void __cdecl16far DOCOMMANDAEXCHB(void)

{
  FUN_1008_d518(0x12,0x1010);
  return;
}


// ---- DOCOMMANDRESET_DISPLAY_LUT @ 1008:3ca4

void __cdecl16far DOCOMMANDRESET_DISPLAY_LUT(void)

{
  OPLUT_QLIN();
  return;
}


// ---- SWITCHSTATIC_STEREO @ 1008:3cbc

void __stdcall16far SWITCHSTATIC_STEREO(int param_1)

{
  int iVar1;
  undefined2 uVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  
  uVar6 = 0x1010;
  uVar5 = 0xc0;
  iVar1 = M007_GETSTATE();
  uVar4 = 0xd5;
  iVar3 = param_1;
  M007_PUTSTATE(0x1018,param_1);
  if (param_1 == 1) {
    if (iVar1 == 0) {
      iVar3 = 1;
      OPLUT_SAVE(0x1018,0);
    }
    uVar4 = 0xc0;
    M007_PUTSTATE(0x1018,1);
    FUN_1008_d79a(uVar4,iVar3);
  }
  else {
    if (iVar1 == 1) {
      iVar3 = 1;
      OPLUT_RESTORE(0x1018,0);
    }
    uVar2 = 0xc0;
    M007_PUTSTATE(0x1018,0);
    DOCOMMANDUNFREEZE_ALL(0x1018,uVar2,iVar3,uVar4,uVar5,uVar6);
  }
  return;
}


// ---- SWITCHSEMI_DYN_STEREO @ 1008:3d36

void __stdcall16far SWITCHSEMI_DYN_STEREO(int param_1)

{
  undefined1 extraout_AH;
  byte extraout_AH_00;
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  
  uVar2 = 0x1010;
  uVar1 = 0xd6;
  M007_PUTSTATE(unaff_CS,param_1);
  if (param_1 == 1) {
    SWITCHPLANEA_FROZEN(0x1018,1);
    SWITCHPLANEB_FROZEN(0x1018,1);
    DOCOMMANDSET_STEREO(0x1018);
    SWITCHLUT_MODE(0x1018,1);
    Ordinal_547(0x1018,1);
    uVar1 = CONCAT11(extraout_AH,1);
    SEVENBITMODE(0x1018,uVar1);
    SWITCHPLANEA_FROZEN(0x1018,0,uVar1);
  }
  else {
    SWITCHLUT_MODE(0x1018,0,uVar1,uVar2);
    SEVENBITMODE(0x1018,(uint)extraout_AH_00 << 8);
  }
  return;
}


// ---- DOCOMMANDCALC_SS_DEPTH @ 1008:3da8

void __cdecl16far DOCOMMANDCALC_SS_DEPTH(void)

{
  FUN_1008_d88e(0x1010);
  return;
}


// ---- SETSS_ANGLE @ 1008:3dbc

void __stdcall16far SETSS_ANGLE(undefined2 param_1,undefined2 param_2)

{
  undefined2 unaff_CS;
  
  M007_PUTVALUE(unaff_CS,param_1,param_2);
  return;
}


// ---- DEFAULTVIDEOPRINT @ 1008:3ddc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far DEFAULTVIDEOPRINT(void)

{
  uint uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1010;
  DAT_1010_1b44 = 0;
  DAT_1010_1b42 = 0;
  DAT_1010_11d0 = 0x300;
  DAT_1010_1e56 = 0x400;
  DAT_1010_1e58 = 0;
  DAT_1010_1e6e = 0;
  DAT_1010_12e2 = 0;
  _DAT_1010_1b04 = 0;
  uVar2 = 2;
  uVar1 = Ordinal_36();
  FUN_1008_c362(0,uVar1 & 0xff00,uVar2,uVar3);
  return;
}


// ---- SWITCHIMAGE_COMPARISON @ 1008:3e26

void __stdcall16far SWITCHIMAGE_COMPARISON(int param_1)

{
  byte extraout_AH;
  undefined1 extraout_AH_00;
  undefined2 uVar1;
  undefined2 unaff_CS;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1010;
  uVar2 = 0xe3;
  M007_PUTSTATE(unaff_CS,param_1);
  if (param_1 == 1) {
    SWITCHPLANEA_FROZEN(0x1018,1);
    SWITCHPLANEB_FROZEN(0x1018,1);
    DOCOMMANDSET_STEREO(0x1018);
    uVar2 = CONCAT11(extraout_AH_00,1);
    SEVENBITMODE(0x1018,uVar2);
    SWITCHPLANEA_FROZEN(0x1018,0,uVar2);
  }
  else {
    uVar1 = CONCAT11(extraout_AH,1);
    SEVENBITMODE(0x1018,(uint)extraout_AH << 8);
    SWITCHPLANEA_FROZEN(0x1018,0,uVar1,uVar2,uVar3);
    SWITCHPLANEB_FROZEN(0x1018,0);
  }
  return;
}


// ---- DOCOMMANDSTART_CINE_MODE @ 1008:3e8e

void __cdecl16far DOCOMMANDSTART_CINE_MODE(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1010;
  uVar2 = 0xe5;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 0) {
    uVar2 = 0xe5;
    M007_PUTSTATE(0x1018,1);
    FUN_1008_b96a(uVar2);
  }
  else {
    FUN_1008_b91a(DAT_1010_06e8,DAT_1010_06ea,uVar2,uVar3);
  }
  return;
}


// ---- SWITCHCINE_REDUCTION @ 1008:3ece

void __stdcall16far SWITCHCINE_REDUCTION(undefined2 param_1)

{
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  
  uVar2 = 0x1010;
  uVar1 = 0xe4;
  M007_PUTSTATE(unaff_CS,param_1);
  FUN_1008_b948(param_1,uVar1,uVar2);
  return;
}


// ---- SETELAPSED_TIME @ 1008:3ef4

void __stdcall16far SETELAPSED_TIME(float param_1)

{
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 local_6;
  
  uVar2 = 0x1010;
  uVar1 = 299;
  local_6 = SUB42(param_1,0);
  M007_PUTVALUE(unaff_CS,local_6,(int)((ulong)param_1 >> 0x10));
  FUN_1008_b91a(param_1 * DAT_1010_0710,uVar1,uVar2);
  return;
}


// ---- DOCOMMANDSPLIT_STEREO @ 1008:3f3c

void __cdecl16far DOCOMMANDSPLIT_STEREO(void)

{
  int iVar1;
  byte extraout_AH;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1010;
  uVar2 = 0xd6;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    OPLUT_RESTORE(0x1018,0);
    uVar2 = 0xc0;
    M007_PUTSTATE(0x1018,0);
    uVar3 = 0xd6;
    M007_PUTSTATE(0x1018,0);
    SEVENBITMODE(0x1018,(uint)extraout_AH << 8);
  }
  else {
    iVar1 = M007_GETSTATE(0x1018,0xd5,uVar2,uVar3);
    if (iVar1 == 1) {
      uVar2 = 1;
      OPLUT_RESTORE(0x1018,0);
      uVar3 = 0xc0;
      M007_PUTSTATE(0x1018,0);
      M007_PUTSTATE(0x1018,0);
    }
    else {
      uVar2 = 0x24;
      iVar1 = M007_GETSTATE(0x1018,0x24);
      if (iVar1 == 1) {
        SWITCHPLANEA_FROZEN(0x1018,1);
        SWITCHPLANEB_FROZEN(0x1018,1);
        SETEOSTEREO(0x1018,0);
        FUN_1008_db02();
        SWITCHPLANEA_FROZEN(0x1008,0);
        SWITCHPLANEB_FROZEN(0x1018,0);
        return;
      }
      uVar3 = 1;
      OPLUT_QLIN(0x1018,1);
    }
  }
  FUN_1008_db02(uVar3,uVar2);
  return;
}


// ---- DOCOMMANDSTEREO_PAIR @ 1008:4008

void __cdecl16far DOCOMMANDSTEREO_PAIR(void)

{
  FUN_1008_db86(0x1010);
  return;
}


// ---- SWITCHIA_USER_ROUTINE @ 1008:401c

void __stdcall16far SWITCHIA_USER_ROUTINE(undefined2 param_1)

{
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  
  uVar2 = 0x1010;
  uVar1 = 0xf3;
  M007_PUTSTATE(unaff_CS,param_1);
  FUN_1008_dee6(param_1,uVar1,uVar2);
  return;
}


// ---- SWITCHIA_USER_DLG @ 1008:4042

void __stdcall16far SWITCHIA_USER_DLG(undefined2 param_1)

{
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  
  uVar2 = 0x1010;
  uVar1 = 0xf4;
  M007_PUTSTATE(unaff_CS,param_1);
  FUN_1008_dc0a(param_1,uVar1,uVar2);
  return;
}


// ---- DOCOMMANDIA_GET_RTN_STAT @ 1008:4068

void __cdecl16far DOCOMMANDIA_GET_RTN_STAT(void)

{
  undefined2 uVar1;
  
  uVar1 = FUN_1008_e1c0(0xf5,0x1010);
  M007_PUTSTATE(0x1008,uVar1);
  return;
}


// ---- DOCOMMANDIA_READ_STORE @ 1008:4088

void __cdecl16far DOCOMMANDIA_READ_STORE(void)

{
  FUN_1008_e202(0x1010);
  return;
}


// ---- DOCOMMANDISIS_START @ 1008:409c

undefined2 __cdecl16far DOCOMMANDISIS_START(void)

{
  return 0x1010;
}


// ---- DOCOMMANDISIS_STOP @ 1008:40aa

undefined2 __cdecl16far DOCOMMANDISIS_STOP(void)

{
  return 0x1010;
}


// ---- DOCOMMANDISIS_GET_STATUS @ 1008:40b8

void __cdecl16far DOCOMMANDISIS_GET_STATUS(void)

{
  undefined2 uVar1;
  undefined2 unaff_CS;
  
  if (DAT_1010_0b3c == 0) {
    uVar1 = 1;
  }
  else if (DAT_1010_0b3c == 1) {
    uVar1 = 0;
  }
  else {
    if (DAT_1010_0b3c != 2) {
      return;
    }
    uVar1 = 2;
  }
  M007_PUTSTATE(unaff_CS,uVar1);
  return;
}


// ---- DOCOMMANDRUN_ISIS @ 1008:40f8

void __cdecl16far DOCOMMANDRUN_ISIS(void)

{
  int iVar1;
  undefined2 unaff_CS;
  
  iVar1 = GETPROFILESTRING(unaff_CS,0x80,0xb3e,0x1010,0x4364,0x1008,0x44ee,0x1008,0x44fa);
  if (iVar1 == 0) {
    WRITEPROFILESTRING(0x1018,0x4502,0x1008,0x44ee,0x1008,0x44fa);
    GETPROFILESTRING(0x1018,0x80,0xb3e,0x1010,0x4364,0x1008,0x44ee,0x1008,0x44fa);
  }
  WINEXEC(0x1018,1,0xb3e);
  return;
}


// ---- DOCOMMANDRUN_QWIN @ 1008:4184

void __cdecl16far DOCOMMANDRUN_QWIN(void)

{
  int iVar1;
  undefined2 unaff_CS;
  
  iVar1 = GETPROFILESTRING(unaff_CS,0x80,0xbbe,0x1010,0x4364,0x1008,0x4528,0x1008,0x44fa);
  if (iVar1 == 0) {
    WRITEPROFILESTRING(0x1018,0x4534,0x1008,0x4528,0x1008,0x44fa);
    GETPROFILESTRING(0x1018,0x80,0xbbe,0x1010,0x4364,0x1008,0x4528,0x1008,0x44fa);
  }
  WINEXEC(0x1018,1,0xbbe);
  return;
}


// ---- SWITCHVP_PRIORITY @ 1008:4210

void __stdcall16far SWITCHVP_PRIORITY(undefined2 param_1)

{
  undefined2 unaff_CS;
  
  M007_PUTSTATE(unaff_CS,param_1);
  return;
}


// ---- DUMPIMAGETOPRINTER @ 1008:422c

undefined2 __stdcall16far DUMPIMAGETOPRINTER(void)

{
  return 0x1010;
}


// ---- FUN_1008_423c @ 1008:423c

void __stdcall16far FUN_1008_423c(int param_1,int param_2)

{
  undefined2 uVar1;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined4 uVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 local_3c;
  undefined2 local_3a;
  undefined2 local_38;
  undefined2 local_36;
  undefined2 local_34;
  undefined2 local_32;
  undefined2 local_30;
  undefined2 local_2e;
  int local_2c;
  int local_2a;
  undefined2 local_4;
  
  uVar5 = 0x1010;
  uVar4 = 0;
  uVar1 = LOADCURSOR(unaff_CS,0x7f02,0);
  iVar3 = 0x1018;
  local_4 = SETCURSOR(0x1018,uVar1,uVar4,uVar5);
  uVar2 = CONCAT22(DAT_1010_013a,DAT_1010_0138);
  if (param_2 == 0 && param_1 == 0) {
    if (DAT_1010_013a != 0 || DAT_1010_0138 != 0) {
      OM_KILL_OVERLAY_OBJ(0x1018,DAT_1010_0138);
      uVar2 = 0;
      iVar3 = DAT_1010_013a;
    }
  }
  else {
    local_3c = 0;
    local_3a = 0;
    local_38 = 0;
    local_36 = 1;
    local_34 = 0;
    local_32 = 0;
    local_30 = 0x400;
    local_2e = 0x300;
    local_2c = param_1;
    local_2a = param_2;
    iVar3 = 0;
    SEM_PLANE_CTRL(0x1018,0);
    uVar2 = OM_CREATE_OVERLAY_OBJ(0x1018,&local_3c,unaff_SS,1,1,0,0);
  }
  DAT_1010_013a = (int)((ulong)uVar2 >> 0x10);
  DAT_1010_0138 = (int)uVar2;
  SETCURSOR(0x1018,local_4,iVar3);
  return;
}


// ---- FUN_1008_454c @ 1008:454c

undefined2 __cdecl16far FUN_1008_454c(void)

{
  int iVar1;
  undefined2 unaff_SS;
  undefined2 uVar2;
  undefined1 local_308;
  undefined1 local_307;
  uint local_306;
  uint local_304;
  undefined1 local_302 [768];
  
  uVar2 = 0x1010;
  local_304 = FUN_1000_0472(DAT_1010_1b50,DAT_1010_1b52,3,0);
  if (0x100 < local_304) {
    local_304 = 0x100;
  }
  iVar1 = FUN_1008_70ec(DAT_1010_1b3e,DAT_1010_1b40,uVar2);
  if (iVar1 == 0) {
    for (local_306 = 0; local_306 < local_304; local_306 = local_306 + 1) {
      iVar1 = FUN_1008_7262(&local_308);
      if (iVar1 != 0) goto LAB_1008_4590;
      local_302[local_306 * 3] = local_307;
    }
    for (local_306 = 0; local_306 < local_304; local_306 = local_306 + 1) {
      iVar1 = FUN_1008_7262(&local_308);
      if (iVar1 != 0) goto LAB_1008_4590;
      local_302[local_306 * 3 + 1] = local_307;
    }
    for (local_306 = 0; local_306 < local_304; local_306 = local_306 + 1) {
      iVar1 = FUN_1008_7262(&local_308);
      if (iVar1 != 0) goto LAB_1008_4590;
      local_302[local_306 * 3 + 2] = local_307;
    }
    OPLUT_LOAD(0x1008,local_302,unaff_SS,local_304,0);
    uVar2 = 0;
  }
  else {
LAB_1008_4590:
    uVar2 = 1;
  }
  return uVar2;
}


// ---- FUN_1008_4672 @ 1008:4672

bool __cdecl16far FUN_1008_4672(void)

{
  int iVar1;
  
  iVar1 = FUN_1008_70ec(DAT_1010_12e8,DAT_1010_12ea,0x1010);
  return iVar1 != 0;
}


// ---- FUN_1008_469c @ 1008:469c

undefined2 __cdecl16far FUN_1008_469c(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 local_6;
  undefined2 local_4;
  
  uVar2 = 0x1010;
  iVar1 = FUN_1008_763a(&local_6);
  if ((((iVar1 == 0) && (iVar1 = FUN_1008_70ec(DAT_1010_12e8,DAT_1010_12ea,uVar2), iVar1 == 0)) &&
      (iVar1 = FUN_1008_706e(local_6,local_4), iVar1 == 0)) &&
     (iVar1 = FUN_1008_70ec(local_6,local_4,uVar2), iVar1 == 0)) {
    return 0;
  }
  return 1;
}


// ---- FUN_1008_46fc @ 1008:46fc

void __cdecl16far FUN_1008_46fc(void)

{
  undefined2 unaff_CS;
  
  if (DAT_1010_1e6a != 0) {
    unaff_CS = 0x1018;
    GLOBALUNLOCK();
  }
  if (DAT_1010_1e66 != 0) {
    GLOBALUNLOCK(unaff_CS,DAT_1010_1e66);
  }
  return;
}


// ---- FUN_1008_472a @ 1008:472a

void __cdecl16far FUN_1008_472a(void)

{
  undefined2 unaff_CS;
  
  if (DAT_1010_1e6a != 0) {
    unaff_CS = 0x1018;
    GLOBALFREE();
  }
  if (DAT_1010_1e66 != 0) {
    GLOBALFREE(unaff_CS,DAT_1010_1e66);
  }
  return;
}


// ---- FUN_1008_4758 @ 1008:4758

void __cdecl16far FUN_1008_4758(void)

{
  undefined2 unaff_CS;
  
  if (DAT_1010_1e68 != 0) {
    unaff_CS = 0x1018;
    GLOBALUNLOCK();
  }
  if (DAT_1010_1e64 != 0) {
    GLOBALUNLOCK(unaff_CS,DAT_1010_1e64);
  }
  return;
}


// ---- FUN_1008_4786 @ 1008:4786

void __cdecl16far FUN_1008_4786(void)

{
  undefined2 unaff_CS;
  
  if (DAT_1010_1e68 != 0) {
    unaff_CS = 0x1018;
    GLOBALFREE();
  }
  if (DAT_1010_1e64 != 0) {
    GLOBALFREE(unaff_CS,DAT_1010_1e64);
  }
  return;
}


// ---- FUN_1008_47b4 @ 1008:47b4

undefined2 __cdecl16far FUN_1008_47b4(int param_1)

{
  return *(undefined2 *)((param_1 + DAT_1010_0026) * 4 + DAT_1010_12f2);
}


// ---- FUN_1008_47e0 @ 1008:47e0

undefined2 __cdecl16far FUN_1008_47e0(int param_1)

{
  return *(undefined2 *)(param_1 * 4 + DAT_1010_12f2);
}


// ---- FUN_1008_4808 @ 1008:4808

void __cdecl16far FUN_1008_4808(void)

{
  undefined2 uVar1;
  undefined2 uVar2;
  
  uVar2 = 0x1010;
  if (DAT_1010_0024 != '\0') {
    uVar1 = DAT_1010_12e4;
    GLOBALUNLOCK();
    GLOBALFREE(0x1018,DAT_1010_12e4,uVar1,uVar2);
    DAT_1010_0024 = '\0';
  }
  return;
}


// ---- FUN_1008_4834 @ 1008:4834

undefined2 __cdecl16far FUN_1008_4834(char param_1)

{
  undefined2 uVar1;
  int iVar2;
  
  iVar2 = FUN_1008_7b9c(CONCAT11(0x10,param_1),0x1010);
  if ((iVar2 == 0) && (iVar2 = FUN_1008_70ec(DAT_1010_12ee,DAT_1010_12f0), iVar2 == 0)) {
    if (param_1 == '\0') {
      iVar2 = FUN_1008_760a(DAT_1010_1afa,DAT_1010_11d6,DAT_1010_11d8);
      uVar1 = DAT_1010_1e6a;
    }
    else {
      iVar2 = FUN_1008_760a(DAT_1010_1afa,DAT_1010_11de,DAT_1010_11e0);
      uVar1 = DAT_1010_1e66;
    }
    if (iVar2 == 0) {
      GLOBALUNLOCK(0x1008,uVar1);
      return 0;
    }
  }
  return 1;
}


// ---- FUN_1008_48b0 @ 1008:48b0

undefined2 __cdecl16far FUN_1008_48b0(char param_1)

{
  undefined2 uVar1;
  int iVar2;
  
  iVar2 = FUN_1008_7c12(CONCAT11(0x10,param_1),0x1010);
  if ((iVar2 == 0) && (iVar2 = FUN_1008_70ec(DAT_1010_1e72,DAT_1010_1e74), iVar2 == 0)) {
    if (param_1 == '\0') {
      iVar2 = FUN_1008_760a(DAT_1010_1e70,DAT_1010_11d2,DAT_1010_11d4);
      uVar1 = DAT_1010_1e68;
    }
    else {
      iVar2 = FUN_1008_760a(DAT_1010_1e70,DAT_1010_11da,DAT_1010_11dc);
      uVar1 = DAT_1010_1e64;
    }
    if (iVar2 == 0) {
      GLOBALUNLOCK(0x1008,uVar1);
      return 0;
    }
  }
  return 1;
}


// ---- FUN_1008_492c @ 1008:492c

undefined2 __cdecl16far FUN_1008_492c(void)

{
  int iVar1;
  int iVar2;
  undefined2 unaff_CS;
  bool bVar3;
  long lVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  uint local_8;
  int local_6;
  
  uVar6 = 0x1010;
  local_6 = 0;
  local_8 = 0;
  uVar5 = 0;
  iVar1 = GLOBALALLOC(unaff_CS,0xfffe,0);
  if (iVar1 != 0) {
    lVar4 = GLOBALLOCK(0x1018,iVar1,uVar5,uVar6);
    if (lVar4 != 0) {
      iVar2 = M007_GETSTATE(0x1018,0x83);
      if (iVar2 == 1) {
        Ordinal_2072(0x1018,0);
        EXPECTSTAGETIMEOUT(0x1018);
      }
      DAT_1010_1b0d = 1;
      iVar2 = M007_GETSTATE(0x1018,0x83);
      if (iVar2 == 1) {
        Ordinal_536(0x1018,(undefined2 *)&DAT_1010_1b06,0x1010);
      }
      DAT_1010_1b69 = M007_GETSTATE(0x1018,99);
      DAT_1010_1b61 = DAT_1010_1e58;
      DAT_1010_1b63 = 4;
      DAT_1010_1b64 = 1;
      DAT_1010_1b5c = DAT_1010_1e56;
      DAT_1010_1b5e = DAT_1010_11d0;
      DAT_1010_1b58 = DAT_1010_1b44;
      DAT_1010_1b5a = DAT_1010_1b42;
      DAT_1010_1b67 = (undefined1)DAT_1010_1afe;
      DAT_1010_1b68 = DAT_1010_1b02;
      DAT_1010_1b66 = 1;
      do {
        FUN_1008_777c(lVar4,0xfffe,0,local_8,local_6);
        DAT_1010_1b56 = 0xfffe;
        iVar2 = M007_GETSTATE(0x1008,0x83);
        if (iVar2 == 1) {
          Ordinal_109(0x1018,0,0xfffe,DAT_1010_1b06,DAT_1010_1b08,lVar4);
          Ordinal_535(0x1018,(undefined2 *)&DAT_1010_1b56,0x1010);
          if (DAT_1010_1b6d == '\0') {
            GLOBALUNLOCK(0x1018,iVar1);
            GLOBALFREE(0x1018,iVar1);
            iVar1 = M007_GETSTATE(0x1018,0x83);
            if (iVar1 == 1) {
              Ordinal_2072(0x1018,1);
            }
            return 0;
          }
          DAT_1010_1b66 = 0;
        }
        bVar3 = 1 < local_8;
        local_8 = local_8 - 2;
        local_6 = local_6 + (uint)bVar3;
      } while( true );
    }
    GLOBALFREE(0x1018,iVar1);
  }
  return 1;
}


// ---- FUN_1008_4a98 @ 1008:4a98

/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined2 __cdecl16far FUN_1008_4a98(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  long lVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  uint local_12;
  int local_10;
  int local_a;
  uint local_8;
  uint local_4;
  
  uVar11 = 0x1010;
  local_10 = 0;
  local_12 = 0;
  local_4 = DAT_1010_11d0 / DAT_1010_002a;
  uVar1 = DAT_1010_1e56 / DAT_1010_002a;
  uVar10 = 99;
  iVar2 = M007_GETSTATE();
  if (iVar2 == 1) {
    if (local_4 + DAT_1010_1b42 < 0x601) goto LAB_1008_4af7;
    iVar2 = 0x600;
  }
  else {
    if (local_4 + DAT_1010_1b42 < 0x301) goto LAB_1008_4af7;
    iVar2 = 0x300;
  }
  local_4 = iVar2 - DAT_1010_1b42;
LAB_1008_4af7:
  uVar3 = DAT_1010_1e56 >> 3;
  if ((DAT_1010_1e56 & 7) != 0) {
    uVar3 = uVar3 + 1;
  }
  if (((int)((ulong)uVar3 * (ulong)DAT_1010_11d0 >> 0x10) != 0) ||
     (uVar4 = DAT_1010_11d0, (int)((ulong)uVar3 * (ulong)DAT_1010_11d0) == -1)) {
    uVar4 = (uint)(0xfffe / (ulong)uVar3);
  }
  uVar5 = (uint)((ulong)uVar4 / (ulong)DAT_1010_002a);
  local_8 = (uint)((((ulong)uVar4 / (ulong)DAT_1010_002a) * (ulong)uVar3 & 0xffff) *
                  (ulong)DAT_1010_002a);
  uVar9 = 0;
  iVar2 = GLOBALALLOC(0x1018,0xfffe,0);
  if (iVar2 != 0) {
    lVar8 = GLOBALLOCK(0x1018,iVar2,uVar9,uVar10,uVar11);
    if (lVar8 == 0) {
      GLOBALFREE(0x1018,iVar2);
    }
    else {
      iVar6 = M007_GETSTATE(0x1018,0x83);
      if (iVar6 == 1) {
        Ordinal_2072(0x1018,0);
        EXPECTSTAGETIMEOUT(0x1018);
      }
      DAT_1010_1b0d = 1;
      iVar6 = M007_GETSTATE(0x1018,0x83);
      if (iVar6 == 1) {
        Ordinal_536(0x1018,(undefined2 *)&DAT_1010_1b06,0x1010);
      }
      DAT_1010_1b61 = DAT_1010_1e58;
      DAT_1010_1b63 = 2;
      DAT_1010_1b64 = 1;
      DAT_1010_1b58 = DAT_1010_1b44;
      DAT_1010_1b5a = DAT_1010_1b42;
      DAT_1010_1b67 = (undefined1)DAT_1010_1afe;
      DAT_1010_1b68 = DAT_1010_1b02;
      DAT_1010_1b5c = uVar1;
      DAT_1010_1b5e = uVar5;
      DAT_1010_1b69 = M007_GETSTATE(0x1018,99);
      local_a = uVar3 * DAT_1010_1b5e;
      while( true ) {
        if (local_4 == 0) {
          GLOBALUNLOCK(0x1018,iVar2);
          GLOBALFREE(0x1018,iVar2);
          iVar2 = M007_GETSTATE(0x1018,0x83);
          if (iVar2 == 1) {
            Ordinal_2072(0x1018,1);
          }
          return 0;
        }
        if (local_4 < uVar5) {
          DAT_1010_1b5e = local_4;
          local_a = local_4 * uVar3;
          local_8 = ((local_4 - 1) * DAT_1010_002a + 1) * uVar3;
          local_4 = 0;
        }
        else {
          local_4 = local_4 - DAT_1010_1b5e;
        }
        iVar6 = FUN_1008_777c(lVar8,local_8,0,local_12,local_10);
        if (iVar6 != 0) break;
        if (DAT_1010_002a != 1) {
          FUN_1008_7a1e(lVar8,DAT_1010_1b5c,DAT_1010_1b5e,DAT_1010_002a,uVar3);
        }
        iVar6 = M007_GETSTATE(0x1008,0x83);
        if (iVar6 == 1) {
          Ordinal_109(0x1018,0,local_a,DAT_1010_1b06,DAT_1010_1b08,lVar8);
          Ordinal_535(0x1018,(undefined2 *)&DAT_1010_1b56,0x1010);
        }
        DAT_1010_1b5a = DAT_1010_1b5a + uVar5;
        bVar7 = CARRY2(local_12,local_8);
        local_12 = local_12 + local_8;
        local_10 = local_10 + (uint)bVar7;
      }
      GLOBALUNLOCK(0x1008,iVar2);
      GLOBALFREE(0x1018,iVar2);
      iVar2 = M007_GETSTATE(0x1018,0x83);
      if (iVar2 == 1) {
        Ordinal_2072(0x1018,1);
      }
    }
  }
  return 1;
}


// ---- FUN_1008_4d22 @ 1008:4d22

/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined2 __cdecl16far FUN_1008_4d22(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  long lVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  uint local_10;
  int local_e;
  int local_c;
  uint local_a;
  uint local_6;
  uint local_4;
  
  uVar9 = 0x1010;
  local_e = 0;
  local_10 = 0;
  local_4 = DAT_1010_11d0 / DAT_1010_002a;
  if (DAT_1010_11d0 % DAT_1010_002a != 0) {
    local_4 = local_4 + 1;
  }
  local_6 = DAT_1010_1e56 / DAT_1010_002a;
  if (DAT_1010_1e56 % DAT_1010_002a != 0) {
    local_6 = local_6 + 1;
  }
  uVar8 = 99;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    if (local_4 + DAT_1010_1b42 < 0x601) goto LAB_1008_4da7;
    iVar1 = 0x600;
  }
  else {
    if (local_4 + DAT_1010_1b42 < 0x301) goto LAB_1008_4da7;
    iVar1 = 0x300;
  }
  local_4 = iVar1 - DAT_1010_1b42;
LAB_1008_4da7:
  if (((int)((ulong)DAT_1010_1e56 * (ulong)DAT_1010_11d0 >> 0x10) != 0) ||
     (uVar2 = DAT_1010_11d0, (int)((ulong)DAT_1010_1e56 * (ulong)DAT_1010_11d0) == -1)) {
    uVar2 = (uint)(0xfffe / (ulong)DAT_1010_1e56);
  }
  uVar3 = (uint)((ulong)uVar2 / (ulong)DAT_1010_002a);
  local_a = (uint)((((ulong)uVar2 / (ulong)DAT_1010_002a) * (ulong)DAT_1010_002a & 0xffff) *
                  (ulong)DAT_1010_1e56);
  uVar7 = 0;
  iVar1 = GLOBALALLOC(0x1018,0xfffe,0);
  if (iVar1 != 0) {
    lVar6 = GLOBALLOCK(0x1018,iVar1,uVar7,uVar8,uVar9);
    if (lVar6 == 0) {
      GLOBALFREE(0x1018,iVar1);
    }
    else {
      iVar4 = M007_GETSTATE(0x1018,0x83);
      if (iVar4 == 1) {
        Ordinal_2072(0x1018,0);
        EXPECTSTAGETIMEOUT(0x1018);
      }
      DAT_1010_1b0d = 1;
      iVar4 = M007_GETSTATE(0x1018,0x83);
      if (iVar4 == 1) {
        Ordinal_536(0x1018,(undefined2 *)&DAT_1010_1b06,0x1010);
      }
      DAT_1010_1b61 = DAT_1010_1e58;
      DAT_1010_1b63 = 0;
      DAT_1010_1b64 = 1;
      DAT_1010_1b5c = local_6;
      DAT_1010_1b58 = DAT_1010_1b44;
      DAT_1010_1b5a = DAT_1010_1b42;
      DAT_1010_1b5e = uVar3;
      DAT_1010_1b69 = M007_GETSTATE(0x1018,99);
      local_c = DAT_1010_1b5c * DAT_1010_1b5e;
      while( true ) {
        if (local_4 == 0) {
          GLOBALUNLOCK(0x1018,iVar1);
          GLOBALFREE(0x1018,iVar1);
          iVar1 = M007_GETSTATE(0x1018,0x83);
          if (iVar1 == 1) {
            Ordinal_2072(0x1018,1);
          }
          return 0;
        }
        if (local_4 < uVar3) {
          DAT_1010_1b5e = local_4;
          local_c = local_4 * DAT_1010_1b5c;
          local_a = ((local_4 - 1) * DAT_1010_002a + 1) * DAT_1010_1e56;
          local_4 = 0;
        }
        else {
          local_4 = local_4 - DAT_1010_1b5e;
        }
        iVar4 = FUN_1008_777c(lVar6,local_a,0,local_10,local_e);
        if (iVar4 != 0) break;
        if (DAT_1010_002a != 1) {
          FUN_1008_78bc(lVar6,DAT_1010_1b5c,DAT_1010_1b5e,DAT_1010_002a,DAT_1010_1e56);
        }
        iVar4 = M007_GETSTATE(0x1008,0x83);
        if (iVar4 == 1) {
          Ordinal_109(0x1018,0,local_c,DAT_1010_1b06,DAT_1010_1b08,lVar6);
          Ordinal_535(0x1018,(undefined2 *)&DAT_1010_1b56,0x1010);
        }
        DAT_1010_1b5a = DAT_1010_1b5a + uVar3;
        bVar5 = CARRY2(local_10,local_a);
        local_10 = local_10 + local_a;
        local_e = local_e + (uint)bVar5;
      }
      GLOBALUNLOCK(0x1008,iVar1);
      GLOBALFREE(0x1018,iVar1);
      iVar1 = M007_GETSTATE(0x1018,0x83);
      if (iVar1 == 1) {
        Ordinal_2072(0x1018,1);
      }
    }
  }
  return 1;
}


// ---- FUN_1008_4fba @ 1008:4fba

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 __cdecl16far FUN_1008_4fba(char *param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  uint *puVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined4 local_36;
  uint local_32;
  uint local_30;
  uint local_2e;
  uint local_2c;
  uint local_2a;
  char local_28;
  char local_26;
  uint local_24;
  uint local_22;
  uint local_20;
  uint local_1e;
  uint local_1c;
  int local_1a;
  uint local_18;
  undefined2 local_16;
  int local_14;
  int local_12;
  uint local_10;
  int local_e;
  uint local_c;
  uint local_a;
  int local_8;
  uint local_6;
  uint local_4;
  
  iVar2 = FUN_1008_70ec(DAT_1010_1b48,DAT_1010_1b4a,0x1010);
  if ((iVar2 == 0) && (iVar2 = FUN_1008_7262(&local_4), iVar2 == 0)) {
    uVar7 = (undefined2)((ulong)param_1 >> 0x10);
    pcVar5 = (char *)param_1;
    *param_1 = '\0';
    (pcVar5 + 3)[0] = '\0';
    (pcVar5 + 3)[1] = '\0';
    (pcVar5 + 1)[0] = '\0';
    (pcVar5 + 1)[1] = '\0';
    (pcVar5 + 7)[0] = '\0';
    (pcVar5 + 7)[1] = '\0';
    (pcVar5 + 5)[0] = '\0';
    (pcVar5 + 5)[1] = '\0';
    pcVar5[9] = '\x02';
    pcVar5[10] = '\0';
    pcVar5[0xb] = '\0';
    pcVar5[0xc] = '\0';
    pcVar5[0xd] = '\0';
    pcVar5[0xe] = '\0';
    pcVar5[0xf] = '\0';
    pcVar5[0x10] = '\x01';
    pcVar5[0x11] = '\x01';
    pcVar5[0x12] = '\0';
    pcVar5[0x13] = '\0';
    pcVar5[0x14] = '\0';
    pcVar5[0x15] = '\0';
    local_6 = local_4;
    for (local_2e = 0; local_2e < local_6; local_2e = local_2e + 1) {
      iVar2 = FUN_1008_737c(&local_14);
      if (iVar2 != 0) {
        return 1;
      }
      if (local_14 == 0xfe) {
        if (local_12 != 4) {
          return 1;
        }
        if (local_10 != 1) {
          return 1;
        }
        if (local_e != 0) {
          return 1;
        }
        if ((local_c & 2) != 0) {
          *param_1 = '\x01';
        }
        if ((local_c & 1) != 0) {
          pcVar5[0x15] = '\x01';
        }
      }
      else if (local_14 == 0x100) {
        if (((local_12 == 4) && (local_10 == 1)) && (local_e == 0)) {
          *(uint *)(pcVar5 + 1) = local_c;
          *(uint *)(pcVar5 + 3) = local_a;
        }
        else {
          if (local_12 != 3) {
            return 1;
          }
          if (local_10 != 1) {
            return 1;
          }
          if (local_e != 0) {
            return 1;
          }
          *(uint *)(pcVar5 + 1) = local_a;
          (pcVar5 + 3)[0] = '\0';
          (pcVar5 + 3)[1] = '\0';
        }
      }
      else if (local_14 == 0x101) {
        if (((local_12 == 4) && (local_10 == 1)) && (local_e == 0)) {
          *(uint *)(pcVar5 + 5) = local_c;
          *(uint *)(pcVar5 + 7) = local_a;
        }
        else {
          if (local_12 != 3) {
            return 1;
          }
          if (local_10 != 1) {
            return 1;
          }
          if (local_e != 0) {
            return 1;
          }
          *(uint *)(pcVar5 + 5) = local_a;
          (pcVar5 + 7)[0] = '\0';
          (pcVar5 + 7)[1] = '\0';
        }
      }
      else if (local_14 == 0x102) {
        if (local_12 != 3) {
          return 1;
        }
        if ((local_10 == 1) && (local_e == 0)) {
          local_18 = local_a;
          local_16 = 0;
          if (local_a == 1) {
            pcVar5[9] = '\x02';
          }
          else {
            if (local_a != 8) goto LAB_1008_51f3;
            pcVar5[9] = '\0';
          }
        }
        else {
LAB_1008_51f3:
          if (local_10 != 3) {
            return 1;
          }
          if (local_e != 0) {
            return 1;
          }
          iVar2 = FUN_1008_763a(&local_1c);
          if (iVar2 != 0) {
            return 1;
          }
          iVar2 = FUN_1008_70ec(local_c,local_a);
          if (iVar2 != 0) {
            return 1;
          }
          for (local_8 = 0; local_8 < 3; local_8 = local_8 + 1) {
            iVar2 = FUN_1008_7262(&local_4);
            if (iVar2 != 0) {
              return 1;
            }
            if (local_4 != 8) {
              return 1;
            }
          }
          iVar2 = FUN_1008_70ec(local_1c,local_1a);
          if (iVar2 != 0) {
            return 1;
          }
LAB_1008_5335:
          pcVar5[9] = '\x01';
        }
      }
      else if (local_14 == 0x103) {
        if (local_12 != 3) {
          return 1;
        }
        if (local_10 != 1) {
          return 1;
        }
        if (local_e != 0) {
          return 1;
        }
        local_18 = local_a;
        local_16 = 0;
        if (local_a == 1) {
          pcVar5[10] = '\0';
        }
        else {
          if (local_a != 2) {
            return 1;
          }
          if (pcVar5[9] != '\x02') {
            return 1;
          }
          pcVar5[10] = '\x01';
        }
      }
      else if (local_14 == 0x106) {
        if (local_12 != 3) {
          return 1;
        }
        if (local_10 != 1) {
          return 1;
        }
        if (local_e != 0) {
          return 1;
        }
        local_18 = local_a;
        local_16 = 0;
        if ((local_a == 0) && (pcVar5[10] == '\x01')) {
LAB_1008_5320:
          pcVar5[0xb] = '\x01';
        }
        else if ((local_a == 1) && ((pcVar5[9] == '\0' || (pcVar5[9] == '\x02')))) {
          pcVar5[0xb] = '\0';
        }
        else {
          if (local_a == 2) {
            if (pcVar5[9] == '\x01') goto LAB_1008_5320;
            if (pcVar5[9] != '\0') goto LAB_1008_533d;
            pcVar5[0xb] = '\x01';
            goto LAB_1008_5335;
          }
LAB_1008_533d:
          if (local_a != 3) {
            return 1;
          }
          if (pcVar5[9] != '\0') {
            return 1;
          }
          pcVar5[0xb] = '\x03';
        }
      }
      else if (local_14 == 0x10e) {
        if (local_12 != 2) {
          return 1;
        }
        DAT_1010_1afc = local_10;
        uVar3 = local_c;
        uVar4 = local_a;
        if ((local_e == 0) && (local_10 < 5)) {
          iVar2 = FUN_1008_763a(&local_1c);
          if (iVar2 != 0) {
            return 1;
          }
          uVar3 = local_1c - 4;
          uVar4 = local_1a - (uint)(local_1c < 4);
        }
        DAT_1010_1af6 = uVar3;
        DAT_1010_1af8 = uVar4;
        pcVar5[0x14] = '\x01';
      }
      else if (local_14 == 0x111) {
        if (local_12 == 4) {
          local_2c = local_10;
          local_28 = '\x04';
          local_24 = local_c;
          local_22 = local_a;
        }
        else {
          if (local_12 != 3) {
            return 1;
          }
          local_2c = local_10;
          local_28 = '\x03';
          local_24 = local_a;
          local_22 = 0;
        }
      }
      else if (local_14 == 0x115) {
        if (local_12 != 3) {
          return 1;
        }
        if (local_10 != 1) {
          return 1;
        }
        if (local_e != 0) {
          return 1;
        }
        local_18 = local_a;
        local_16 = 0;
        if (local_a == 1) {
          pcVar5[0x10] = '\x01';
        }
        else {
          if (local_a != 3) {
            return 1;
          }
          if (pcVar5[9] != '\x01') {
            return 1;
          }
          pcVar5[0x10] = '\x03';
        }
      }
      else if (local_14 == 0x117) {
        if (local_12 == 3) {
          local_2a = local_10;
          local_26 = '\x03';
          local_20 = local_a;
          local_1e = 0;
        }
        else {
          if (local_12 != 4) {
            return 1;
          }
          local_2a = local_10;
          local_26 = '\x04';
          local_1e = local_a;
          local_20 = local_c;
        }
      }
      else if (local_14 == 0x11c) {
        if (local_12 != 3) {
          return 1;
        }
        if (local_10 != 1) {
          return 1;
        }
        if (local_e != 0) {
          return 1;
        }
        local_18 = local_a;
        local_16 = 0;
        if (local_a != 1) {
          return 1;
        }
        if (pcVar5[9] == '\x01') {
          pcVar5[0x11] = '\x01';
        }
      }
      else if (local_14 == 0x129) {
        if (local_12 != 3) {
          return 1;
        }
        if (local_10 != 2) {
          return 1;
        }
        if (local_e != 0) {
          return 1;
        }
        if (*param_1 != '\x01') {
          return 1;
        }
        pcVar5[0x12] = (char)local_a;
        local_18 = local_c & 0xff;
        local_16 = 0;
        pcVar5[0x13] = (char)local_c;
      }
      else if (local_14 == 0x140) {
        if (local_12 != 3) {
          return 1;
        }
        DAT_1010_1b50 = local_10;
        DAT_1010_1b52 = local_e;
        uVar3 = local_c;
        uVar4 = local_a;
        if ((local_e == 0) && (local_10 < 5)) {
          iVar2 = FUN_1008_763a(&local_1c);
          if (iVar2 != 0) {
            return 1;
          }
          uVar3 = local_1c - 4;
          uVar4 = local_1a - (uint)(local_1c < 4);
        }
        DAT_1010_1b3e = uVar3;
        DAT_1010_1b40 = uVar4;
        pcVar5[0xe] = '\x01';
      }
      else if (local_14 == -0x7abb) {
        if (local_12 != 2) {
          return 1;
        }
        DAT_1010_1afa = local_10;
        uVar3 = local_c;
        uVar4 = local_a;
        if ((local_e == 0) && (local_10 < 5)) {
          iVar2 = FUN_1008_763a(&local_1c);
          if (iVar2 != 0) {
            return 1;
          }
          uVar3 = local_1c - 4;
          uVar4 = local_1a - (uint)(local_1c < 4);
        }
        DAT_1010_12ee = uVar3;
        DAT_1010_12f0 = uVar4;
        pcVar5[0xc] = '\x01';
      }
      else if (local_14 == -0x7aba) {
        if (local_12 != 2) {
          return 1;
        }
        DAT_1010_1e70 = local_10;
        uVar3 = local_c;
        uVar4 = local_a;
        if ((local_e == 0) && (local_10 < 5)) {
          iVar2 = FUN_1008_763a(&local_1c);
          if (iVar2 != 0) {
            return 1;
          }
          uVar3 = local_1c - 4;
          uVar4 = local_1a - (uint)(local_1c < 4);
        }
        DAT_1010_1e72 = uVar3;
        DAT_1010_1e74 = uVar4;
        pcVar5[0xd] = '\x01';
      }
    }
    iVar2 = FUN_1008_72b6((undefined2 *)&DAT_1010_1b48,0x1010);
    if ((iVar2 == 0) || (*param_1 != '\x01')) {
      if (local_2c == 1) {
LAB_1008_5619:
        DAT_1010_12e8 = local_24;
        DAT_1010_12ea = local_22;
        pcVar5[0xf] = '\x01';
        return 0;
      }
      if (local_2c == local_2a) {
        uVar8 = 0;
        DAT_1010_0026 = local_2c;
        DAT_1010_12e4 = GLOBALALLOC(0x1008,local_2c << 3,0);
        if (DAT_1010_12e4 != 0) {
          local_36 = (uint *)GLOBALLOCK(0x1018,DAT_1010_12e4,uVar8);
          uVar8 = (undefined2)((ulong)local_36 >> 0x10);
          puVar6 = (uint *)local_36;
          _DAT_1010_12f2 = local_36;
          if (local_36 != (uint *)0x0) {
            DAT_1010_0024 = 1;
            if ((DAT_1010_0026 == 2) && (local_28 == '\x03')) {
              *local_36 = local_22;
              puVar6[1] = 0;
              local_36 = (uint *)CONCAT22(uVar8,puVar6 + 2);
              *local_36 = local_24;
              puVar6[3] = 0;
            }
            else {
              iVar2 = FUN_1008_70ec(local_24,local_22);
              if (iVar2 != 0) {
                return 1;
              }
              if (local_26 == '\x03') {
                for (local_2e = 0; puVar1 = local_36, local_2e < DAT_1010_0026;
                    local_2e = local_2e + 1) {
                  iVar2 = FUN_1008_7262(&local_4);
                  if (iVar2 != 0) {
                    return 1;
                  }
                  uVar8 = (undefined2)((ulong)local_36 >> 0x10);
                  puVar6 = (uint *)local_36;
                  local_36 = (uint *)CONCAT22(uVar8,puVar6 + 2);
                  *puVar1 = local_4;
                  puVar6[1] = (int)local_4 >> 0xf;
                }
              }
              else {
                for (local_2e = 0; puVar1 = local_36, local_2e < DAT_1010_0026;
                    local_2e = local_2e + 1) {
                  iVar2 = FUN_1008_72b6(&local_32);
                  if (iVar2 != 0) {
                    return 1;
                  }
                  uVar8 = (undefined2)((ulong)local_36 >> 0x10);
                  puVar6 = (uint *)local_36;
                  local_36 = (uint *)CONCAT22(uVar8,puVar6 + 2);
                  *puVar1 = local_32;
                  puVar6[1] = local_30;
                }
              }
            }
            puVar6 = DAT_1010_12f2 + DAT_1010_0026 * 2;
            uVar8 = DAT_1010_12f4;
            local_36 = (uint *)CONCAT22(DAT_1010_12f4,puVar6);
            if ((DAT_1010_0026 == 2) && (local_26 == '\x03')) {
              *puVar6 = local_1e;
              puVar6[1] = 0;
              local_36 = (uint *)CONCAT22(uVar8,puVar6 + 2);
              *local_36 = local_20;
              puVar6[3] = 0;
            }
            else {
              iVar2 = FUN_1008_70ec(local_20,local_1e);
              if (iVar2 != 0) {
                return 1;
              }
              if (local_28 == '\x03') {
                for (local_2e = 0; puVar1 = local_36, local_2e < DAT_1010_0026;
                    local_2e = local_2e + 1) {
                  iVar2 = FUN_1008_7262(&local_4);
                  if (iVar2 != 0) {
                    return 1;
                  }
                  uVar8 = (undefined2)((ulong)local_36 >> 0x10);
                  puVar6 = (uint *)local_36;
                  local_36 = (uint *)CONCAT22(uVar8,puVar6 + 2);
                  *puVar1 = local_4;
                  puVar6[1] = (int)local_4 >> 0xf;
                }
              }
              else {
                for (local_2e = 0; puVar1 = local_36, local_2e < DAT_1010_0026;
                    local_2e = local_2e + 1) {
                  iVar2 = FUN_1008_72b6(&local_32);
                  if (iVar2 != 0) {
                    return 1;
                  }
                  uVar8 = (undefined2)((ulong)local_36 >> 0x10);
                  puVar6 = (uint *)local_36;
                  local_36 = (uint *)CONCAT22(uVar8,puVar6 + 2);
                  *puVar1 = local_32;
                  puVar6[1] = local_30;
                }
              }
            }
            local_24 = *_DAT_1010_12f2;
            local_22 = ((uint *)_DAT_1010_12f2)[1];
            goto LAB_1008_5619;
          }
          GLOBALFREE(0x1018,DAT_1010_12e4);
        }
      }
    }
  }
  return 1;
}


// ---- FUN_1008_582c @ 1008:582c

undefined2 __cdecl16far FUN_1008_582c(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_1008_4672(0x1010);
  if (iVar1 == 0) {
    if (param_2 == 2) {
      if (param_1 == 1) {
        iVar1 = FUN_1008_492c();
      }
      else {
        iVar1 = FUN_1008_4a98();
      }
    }
    else if (param_2 == 0) {
      iVar1 = FUN_1008_4d22();
    }
    else {
      if (param_2 != 5) {
        return 1;
      }
      iVar1 = FUN_1008_5992();
    }
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 1;
}


// ---- FUN_1008_5886 @ 1008:5886

undefined2 __cdecl16far FUN_1008_5886(undefined2 param_1,undefined2 param_2)

{
  int iVar1;
  undefined2 local_8;
  undefined2 local_6;
  int local_4;
  
  iVar1 = FUN_1008_7236(param_1,param_2,0x1010);
  if (iVar1 != 0) {
    return 1;
  }
  iVar1 = FUN_1008_7262(&local_4);
  if (iVar1 == 0) {
    if (local_4 == 0x4949) {
      DAT_1010_1b46 = 0x4949;
    }
    else {
      if (local_4 != 0x4d4d) goto LAB_1008_58ba;
      DAT_1010_1b46 = 0x4d4d;
    }
    iVar1 = FUN_1008_7262(&local_4);
    if (((iVar1 == 0) && (local_4 == 0x2a)) && (iVar1 = FUN_1008_72b6(&local_8), iVar1 == 0)) {
      DAT_1010_1b48 = local_8;
      DAT_1010_1b4a = local_6;
      return 0;
    }
  }
LAB_1008_58ba:
  FUN_1008_70c8();
  return 1;
}


// ---- FUN_1008_591a @ 1008:591a

undefined2 __cdecl16far FUN_1008_591a(undefined1 *param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 unaff_CS;
  
  if (DAT_1010_1afc == 0) {
    LSTRCPY(unaff_CS,0x4364,0x1008,(undefined1 *)param_1);
LAB_1008_593d:
    uVar1 = 0;
  }
  else {
    iVar2 = FUN_1008_70ec(DAT_1010_1af6,DAT_1010_1af8,0x1010);
    if (iVar2 == 0) {
      if (0x50 < DAT_1010_1afc) {
        DAT_1010_1afc = 0x50;
      }
      iVar2 = FUN_1008_760a(DAT_1010_1afc,(undefined1 *)param_1,param_1._2_2_);
      if (iVar2 == 0) {
        param_1 = (undefined1 *)
                  CONCAT22(param_1._2_2_,(undefined1 *)((int)(undefined1 *)param_1 + DAT_1010_1afc))
        ;
        *param_1 = 0;
        goto LAB_1008_593d;
      }
    }
    uVar1 = 1;
  }
  return uVar1;
}


// ---- FUN_1008_5992 @ 1008:5992

/* WARNING: Removing unreachable block (ram,0x10085bc5) */

undefined2 __cdecl16far FUN_1008_5992(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined2 uVar11;
  undefined2 uVar12;
  undefined2 uVar13;
  uint local_30;
  uint local_2c;
  uint local_28;
  int local_26;
  undefined1 *local_24;
  uint local_18;
  uint local_16;
  undefined1 *local_c;
  
  uVar13 = 0x1010;
  uVar12 = 99;
  iVar3 = M007_GETSTATE();
  if (iVar3 == 1) {
    local_16 = 0xc0;
    local_18 = 0x100;
  }
  else {
    local_16 = 0x60;
    local_18 = 0x80;
  }
  uVar4 = DAT_1010_1e56 >> 3;
  uVar5 = DAT_1010_11d0 >> 3;
  local_26 = 0;
  local_28 = 0;
  uVar11 = 0;
  iVar3 = GLOBALALLOC(0x1018,DAT_1010_1e56,0);
  if (iVar3 != 0) {
    puVar9 = (undefined1 *)GLOBALLOCK(0x1018,iVar3,uVar11,uVar12,uVar13);
    if (puVar9 != (undefined1 *)0x0) {
      uVar12 = 0;
      iVar6 = GLOBALALLOC(0x1018,local_18 * local_16,0);
      if (iVar6 == 0) {
        GLOBALUNLOCK(0x1018,iVar3);
      }
      else {
        uVar13 = 0x1018;
        puVar10 = (undefined1 *)GLOBALLOCK(0x1018,iVar6,uVar12);
        if (puVar10 != (undefined1 *)0x0) {
          bVar8 = false;
          local_2c = 0;
          local_24 = puVar10;
          do {
            if ((bVar8) || (local_16 <= local_2c)) {
              iVar7 = M007_GETSTATE(uVar13,0x83);
              if (iVar7 == 1) {
                Ordinal_2072(0x1018,0);
                EXPECTSTAGETIMEOUT(0x1018);
              }
              DAT_1010_1b0d = 1;
              iVar7 = M007_GETSTATE(0x1018,0x83);
              if (iVar7 == 1) {
                Ordinal_536(0x1018,(undefined2 *)&DAT_1010_1b06,0x1010);
              }
              DAT_1010_1b61 = DAT_1010_1e58;
              DAT_1010_1b63 = 0;
              DAT_1010_1b64 = 1;
              DAT_1010_1b5c = local_18;
              DAT_1010_1b5e = local_16;
              DAT_1010_1b58 = DAT_1010_1b44;
              DAT_1010_1b5a = DAT_1010_1b42;
              DAT_1010_1b69 = M007_GETSTATE(0x1018,99);
              iVar7 = M007_GETSTATE(0x1018,0x83);
              if (iVar7 == 1) {
                Ordinal_109(0x1018,0,local_18 * local_16,DAT_1010_1b06,DAT_1010_1b08,puVar10);
                Ordinal_535(0x1018,(undefined2 *)&DAT_1010_1b56,0x1010);
              }
              iVar7 = M007_GETSTATE(0x1018,0x83);
              if (iVar7 == 1) {
                Ordinal_2072(0x1018,1);
              }
              GLOBALUNLOCK(0x1018,iVar3);
              GLOBALFREE(0x1018,iVar3);
              GLOBALUNLOCK(0x1018,iVar6);
              GLOBALFREE(0x1018,iVar6);
              return 0;
            }
            if (local_2c < uVar5) {
              uVar13 = 0x1008;
              iVar7 = FUN_1008_777c(puVar9,DAT_1010_1e56,0,local_28,local_26);
              if (iVar7 != 0) {
                GLOBALUNLOCK(0x1008,iVar3);
                GLOBALFREE(0x1018,iVar3);
                GLOBALUNLOCK(0x1018,iVar6);
                iVar3 = iVar6;
                goto LAB_1008_5a11;
              }
              local_c = puVar9;
              if (uVar4 < local_18) {
                bVar8 = false;
                for (local_30 = 0;
                    (puVar2 = local_c, puVar1 = local_24, !bVar8 && (local_30 < uVar4));
                    local_30 = local_30 + 1) {
                  local_c = (undefined1 *)CONCAT22(local_c._2_2_,(undefined1 *)local_c + 8);
                  local_24 = (undefined1 *)CONCAT22(local_24._2_2_,(undefined1 *)local_24 + 1);
                  *puVar1 = *puVar2;
                  bVar8 = 0xfffe < local_30;
                }
                bVar8 = false;
                for (local_30 = 0; (puVar1 = local_24, !bVar8 && (local_30 < local_18 - uVar4));
                    local_30 = local_30 + 1) {
                  local_24 = (undefined1 *)CONCAT22(local_24._2_2_,(undefined1 *)local_24 + 1);
                  *puVar1 = 0;
                  bVar8 = 0xfffe < local_30;
                }
              }
              else {
                bVar8 = false;
                for (local_30 = 0;
                    (puVar2 = local_c, puVar1 = local_24, !bVar8 && (local_30 < local_18));
                    local_30 = local_30 + 1) {
                  local_c = (undefined1 *)CONCAT22(local_c._2_2_,(undefined1 *)local_c + 8);
                  local_24 = (undefined1 *)CONCAT22(local_24._2_2_,(undefined1 *)local_24 + 1);
                  *puVar1 = *puVar2;
                  bVar8 = 0xfffe < local_30;
                }
              }
              bVar8 = CARRY2(local_28,DAT_1010_1e56 * 8);
              local_28 = local_28 + DAT_1010_1e56 * 8;
              local_26 = local_26 + (uint)bVar8;
            }
            else {
              bVar8 = false;
              for (local_30 = 0; (puVar1 = local_24, !bVar8 && (local_30 < local_18));
                  local_30 = local_30 + 1) {
                local_24 = (undefined1 *)CONCAT22(local_24._2_2_,(undefined1 *)local_24 + 1);
                *puVar1 = 0;
                bVar8 = 0xfffe < local_30;
              }
            }
            bVar8 = 0xfffe < local_2c;
            local_2c = local_2c + 1;
          } while( true );
        }
        GLOBALUNLOCK(0x1018,iVar3);
        GLOBALFREE(0x1018,iVar3);
        iVar3 = iVar6;
      }
    }
LAB_1008_5a11:
    GLOBALFREE(0x1018,iVar3);
  }
  return 1;
}


// ---- FUN_1008_5cc4 @ 1008:5cc4

undefined2 __cdecl16far FUN_1008_5cc4(int param_1,int param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  iVar1 = FUN_1008_469c(0x1010);
  if (iVar1 == 0) {
    if (param_1 == 2) {
      if (param_2 == 1) {
        uVar2 = FUN_1008_6064();
        return uVar2;
      }
      uVar2 = FUN_1008_5dfc();
      return uVar2;
    }
    if (param_1 == 0) {
      uVar2 = FUN_1008_6212();
      return uVar2;
    }
    if (param_1 == 1) {
      uVar2 = FUN_1008_65aa();
      return uVar2;
    }
    if (param_1 == 5) {
      uVar2 = FUN_1008_6f82();
      return uVar2;
    }
  }
  return 1;
}


// ---- FUN_1008_5d20 @ 1008:5d20

undefined2 __cdecl16far FUN_1008_5d20(char param_1,int param_2)

{
  int iVar1;
  undefined2 uVar2;
  uint uVar3;
  undefined1 local_a;
  undefined2 local_6;
  undefined2 local_4;
  
  if (param_2 == 0) {
    local_6 = DAT_1010_11d6;
    local_4 = DAT_1010_11d8;
    uVar2 = DAT_1010_1b38;
  }
  else {
    local_6 = DAT_1010_11de;
    local_4 = DAT_1010_11e0;
    uVar2 = DAT_1010_1b3c;
  }
  iVar1 = FUN_1008_71d0(local_6,local_4,uVar2,0x1010);
  if (iVar1 == 0) {
    uVar3 = 0;
    for (local_a = '\0'; local_a < param_1; local_a = local_a + '\x01') {
      uVar3 = FUN_1008_7040(uVar3 & 0xff00);
    }
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}


// ---- FUN_1008_5d8e @ 1008:5d8e

undefined2 __cdecl16far FUN_1008_5d8e(char param_1,int param_2)

{
  int iVar1;
  undefined2 uVar2;
  uint uVar3;
  undefined1 local_a;
  undefined2 local_6;
  undefined2 local_4;
  
  if (param_2 == 0) {
    local_6 = DAT_1010_11d2;
    local_4 = DAT_1010_11d4;
    uVar2 = DAT_1010_1b36;
  }
  else {
    local_6 = DAT_1010_11da;
    local_4 = DAT_1010_11dc;
    uVar2 = DAT_1010_1b3a;
  }
  iVar1 = FUN_1008_71d0(local_6,local_4,uVar2,0x1010);
  if (iVar1 == 0) {
    uVar3 = 0;
    for (local_a = '\0'; local_a < param_1; local_a = local_a + '\x01') {
      uVar3 = FUN_1008_7040(uVar3 & 0xff00);
    }
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}


// ---- FUN_1008_5dfc @ 1008:5dfc

/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined2 __cdecl16far FUN_1008_5dfc(void)

{
  ulong uVar1;
  uint uVar2;
  int iVar3;
  undefined2 unaff_CS;
  long lVar4;
  int iVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  uint local_10;
  uint local_e;
  uint local_c;
  uint local_a;
  int local_8;
  uint local_4;
  
  uVar8 = 0x1010;
  local_4 = DAT_1010_11d0;
  local_10 = DAT_1010_1e56 >> 3;
  if ((DAT_1010_1e56 & 7) != 0) {
    local_10 = local_10 + 1;
  }
  if (((int)((ulong)DAT_1010_1e56 * (ulong)DAT_1010_11d0 >> 0x10) == 0) &&
     ((int)((ulong)DAT_1010_1e56 * (ulong)DAT_1010_11d0) != -1)) {
    uVar1 = (ulong)DAT_1010_11d0;
  }
  else {
    uVar1 = ((0xfffe / (ulong)DAT_1010_1e56) / (ulong)DAT_1010_0028) * (ulong)DAT_1010_0028;
  }
  uVar2 = (uint)uVar1;
  uVar7 = 0;
  iVar5 = 0x5e5d;
  iVar3 = GLOBALALLOC(unaff_CS,0xfffe,0);
  if (iVar3 != 0) {
    uVar6 = 0x5e70;
    lVar4 = GLOBALLOCK(0x1018,iVar3,uVar7,uVar8);
    if (lVar4 != 0) {
      DAT_1010_1b0b = DAT_1010_1e58;
      DAT_1010_1b0c = DAT_1010_1e6e;
      DAT_1010_1b0a = 3;
      DAT_1010_1b0d = 0;
      DAT_1010_1b0e = 3;
      iVar5 = M007_GETSTATE(0x1018,0x83);
      if (iVar5 == 1) {
        Ordinal_536(0x1018,(undefined2 *)&DAT_1010_1b06,0x1010);
      }
      DAT_1010_1b61 = DAT_1010_1e58;
      DAT_1010_1b62 = DAT_1010_1e6e;
      DAT_1010_1b60 = 3;
      DAT_1010_1b63 = 2;
      DAT_1010_1b64 = 0;
      DAT_1010_1b5c = DAT_1010_1e56;
      DAT_1010_1b58 = DAT_1010_1b44;
      DAT_1010_1b5a = DAT_1010_1b42;
      DAT_1010_1b65 = DAT_1010_1b04;
      DAT_1010_1b6a = DAT_1010_1e62;
      DAT_1010_1b6b = DAT_1010_1b55;
      DAT_1010_1b6c = DAT_1010_12ec;
      uVar6 = 99;
      uVar8 = 0x1018;
      DAT_1010_1b5e = uVar2;
      DAT_1010_1b69 = M007_GETSTATE(0x1018,99);
      local_a = local_10 * DAT_1010_1b5e;
      local_8 = local_a;
      while( true ) {
        if (local_4 == 0) {
          GLOBALUNLOCK(uVar8,iVar3);
          GLOBALFREE(0x1018,iVar3);
          return 0;
        }
        if (local_4 < uVar2) {
          DAT_1010_1b5e = local_4;
          local_8 = local_4 * local_10;
          local_4 = 0;
        }
        else {
          local_4 = local_4 - DAT_1010_1b5e;
        }
        iVar5 = M007_GETSTATE(uVar8,0x83);
        if (iVar5 == 1) {
          Ordinal_535(0x1018,(undefined2 *)&DAT_1010_1b56,0x1010);
          Ordinal_105(0x1018,0,local_8,lVar4,DAT_1010_1b06,DAT_1010_1b08);
        }
        if (DAT_1010_0028 != 1) {
          local_c = DAT_1010_1b5c / DAT_1010_0028;
          if (DAT_1010_1b5c % DAT_1010_0028 != 0) {
            local_c = local_c + 1;
          }
          local_e = DAT_1010_1b5e / DAT_1010_0028;
          if (DAT_1010_1b5e % DAT_1010_0028 != 0) {
            local_e = local_e + 1;
          }
          FUN_1008_7a1e(lVar4,local_c,local_e,DAT_1010_0028,local_10);
          local_a = local_c >> 3;
          if ((local_c & 7) != 0) {
            local_a = local_a + 1;
          }
          local_a = local_e * local_a;
        }
        uVar8 = 0x1008;
        iVar5 = FUN_1008_7200(lVar4,local_a,0);
        if (iVar5 != 0) break;
        DAT_1010_1b5a = DAT_1010_1b5a + uVar2;
      }
      iVar5 = iVar3;
      GLOBALUNLOCK(0x1008,iVar3);
    }
    GLOBALFREE(0x1018,iVar3,iVar5,uVar6);
  }
  return 1;
}


// ---- FUN_1008_6064 @ 1008:6064

/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined2 __cdecl16far FUN_1008_6064(void)

{
  uint uVar1;
  int iVar2;
  undefined2 unaff_CS;
  long lVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  uint local_4;
  
  uVar7 = 0x1010;
  local_4 = DAT_1010_11d0;
  if (((int)((ulong)DAT_1010_11d0 * (ulong)DAT_1010_1e56 >> 0x10) != 0) ||
     (uVar1 = DAT_1010_11d0, (int)((ulong)DAT_1010_11d0 * (ulong)DAT_1010_1e56) == -1)) {
    uVar1 = (uint)(0xfffe / (ulong)DAT_1010_1e56);
  }
  uVar6 = 0;
  iVar4 = 0x60a3;
  iVar2 = GLOBALALLOC(unaff_CS,0xfffe,0);
  if (iVar2 != 0) {
    uVar5 = 0x60b6;
    lVar3 = GLOBALLOCK(0x1018,iVar2,uVar6,uVar7);
    if (lVar3 != 0) {
      DAT_1010_1b0b = DAT_1010_1e58;
      DAT_1010_1b0c = DAT_1010_1e6e;
      DAT_1010_1b0a = 3;
      DAT_1010_1b0d = 0;
      DAT_1010_1b0e = 3;
      iVar4 = M007_GETSTATE(0x1018,0x83);
      if (iVar4 == 1) {
        Ordinal_536(0x1018,(undefined2 *)&DAT_1010_1b06,0x1010);
      }
      DAT_1010_1b61 = DAT_1010_1e58;
      DAT_1010_1b62 = DAT_1010_1e6e;
      DAT_1010_1b60 = 3;
      DAT_1010_1b63 = 4;
      DAT_1010_1b64 = 0;
      DAT_1010_1b5c = DAT_1010_1e56;
      DAT_1010_1b58 = DAT_1010_1b44;
      DAT_1010_1b5a = DAT_1010_1b42;
      DAT_1010_1b6a = DAT_1010_1e62;
      DAT_1010_1b6b = DAT_1010_1b55;
      DAT_1010_1b6c = DAT_1010_12ec;
      uVar5 = 99;
      uVar7 = 0x1018;
      DAT_1010_1b5e = uVar1;
      DAT_1010_1b69 = M007_GETSTATE(0x1018,99);
      while( true ) {
        if (local_4 == 0) {
          GLOBALUNLOCK(uVar7,iVar2);
          GLOBALFREE(0x1018,iVar2);
          return 0;
        }
        if (local_4 < uVar1) {
          DAT_1010_1b5e = local_4;
          local_4 = 0;
        }
        else {
          local_4 = local_4 - DAT_1010_1b5e;
        }
        iVar4 = M007_GETSTATE(uVar7,0x83);
        if (iVar4 == 1) break;
LAB_1008_61cc:
        uVar7 = 0x1008;
        iVar4 = FUN_1008_7200(lVar3,DAT_1010_1b56,0);
        if (iVar4 != 0) goto LAB_1008_61c1;
        DAT_1010_1b5a = DAT_1010_1b5a + uVar1;
      }
      Ordinal_535(0x1018,(int *)&DAT_1010_1b56,0x1010);
      uVar7 = 0x1018;
      Ordinal_105(0x1018,0,DAT_1010_1b56,lVar3,DAT_1010_1b06,DAT_1010_1b08);
      if (DAT_1010_1b56 != 0) goto LAB_1008_61cc;
LAB_1008_61c1:
      iVar4 = iVar2;
      GLOBALUNLOCK(uVar7,iVar2);
    }
    GLOBALFREE(0x1018,iVar2,iVar4,uVar5);
  }
  return 1;
}


// ---- FUN_1008_6212 @ 1008:6212

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined2 __cdecl16far FUN_1008_6212(void)

{
  ulong uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined2 unaff_CS;
  bool bVar7;
  long lVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  int local_34;
  int local_32;
  int local_30;
  uint local_2e;
  undefined4 local_2c;
  undefined4 local_20;
  uint local_16;
  uint local_12;
  uint local_e;
  uint local_c;
  int local_a;
  int local_8;
  uint local_4;
  
  puVar2 = (undefined1 *)CONCAT22(DAT_1010_0c40,DAT_1010_0c3e);
  if (DAT_1010_1b54 == '\x01') {
    uVar9 = 99;
    iVar5 = M007_GETSTATE();
    if (iVar5 == 1) {
      local_34 = 0xc0;
      local_32 = 0x100;
    }
    else {
      local_34 = 0x60;
      local_32 = 0x80;
    }
    uVar10 = 0;
    DAT_1010_0c42 = GLOBALALLOC(0x1018,local_34 * local_32,0);
    if (DAT_1010_0c42 == 0) {
      return 1;
    }
    unaff_CS = 0x1018;
    local_2c = (undefined1 *)GLOBALLOCK(0x1018,DAT_1010_0c42,uVar10,uVar9);
    puVar2 = (undefined1 *)0x0;
    if (local_2c == (undefined1 *)0x0) goto LAB_1008_6281;
    bVar7 = false;
    local_12 = 0;
    puVar2 = local_2c;
    while( true ) {
      puVar3 = local_2c;
      DAT_1010_0c40 = (undefined2)((ulong)puVar2 >> 0x10);
      DAT_1010_0c3e = (undefined1 *)puVar2;
      if ((bVar7) || ((uint)(local_34 * local_32) <= local_12)) break;
      local_2c = (undefined1 *)CONCAT22(local_2c._2_2_,(undefined1 *)local_2c + 1);
      *puVar3 = 0;
      puVar2 = (undefined1 *)CONCAT22(DAT_1010_0c40,DAT_1010_0c3e);
      bVar7 = 0xfffe < local_12;
      local_12 = local_12 + 1;
    }
  }
  DAT_1010_0c40 = (undefined2)((ulong)puVar2 >> 0x10);
  DAT_1010_0c3e = (undefined1 *)puVar2;
  local_4 = DAT_1010_11d0;
  if (((int)((ulong)DAT_1010_11d0 * (ulong)DAT_1010_1e56 >> 0x10) == 0) &&
     ((int)((ulong)DAT_1010_11d0 * (ulong)DAT_1010_1e56) != -1)) {
    uVar1 = (ulong)DAT_1010_11d0;
  }
  else {
    uVar1 = ((0xfffe / (ulong)DAT_1010_1e56) / (ulong)DAT_1010_0028) * (ulong)DAT_1010_0028;
  }
  uVar4 = (uint)uVar1;
  uVar9 = 0;
  iVar5 = GLOBALALLOC(unaff_CS,0xfffe,0);
  if (iVar5 != 0) {
    lVar8 = GLOBALLOCK(0x1018,iVar5,uVar9);
    if (lVar8 != 0) {
      DAT_1010_1b0b = DAT_1010_1e58;
      DAT_1010_1b0c = DAT_1010_1e6e;
      DAT_1010_1b0a = DAT_1010_12e2;
      DAT_1010_1b0d = 0;
      iVar6 = M007_GETSTATE(0x1018,0xc0);
      if ((iVar6 == 2) && (_DAT_1010_1b04 != 0)) {
        DAT_1010_1b0e = 4;
      }
      else {
        DAT_1010_1b0e = 3;
      }
      iVar6 = M007_GETSTATE(0x1018,0x83);
      if (iVar6 == 1) {
        Ordinal_536(0x1018,(undefined2 *)&DAT_1010_1b06,0x1010);
      }
      DAT_1010_1b61 = DAT_1010_1e58;
      DAT_1010_1b62 = DAT_1010_1e6e;
      DAT_1010_1b60 = DAT_1010_12e2;
      DAT_1010_1b63 = 0;
      DAT_1010_1b64 = 0;
      DAT_1010_1b5c = DAT_1010_1e56;
      DAT_1010_1b58 = DAT_1010_1b44;
      DAT_1010_1b5a = DAT_1010_1b42;
      DAT_1010_1b65 = DAT_1010_1b04;
      uVar9 = 0x1018;
      DAT_1010_1b5e = uVar4;
      DAT_1010_1b69 = M007_GETSTATE(0x1018,99);
      local_a = DAT_1010_1b5c * DAT_1010_1b5e;
      local_2e = 0;
      local_30 = 0;
      local_8 = local_a;
      while( true ) {
        if (local_4 == 0) {
          GLOBALUNLOCK(uVar9,iVar5);
          GLOBALFREE(0x1018,iVar5);
          return 0;
        }
        if (local_4 < uVar4) {
          DAT_1010_1b5e = local_4;
          local_8 = local_4 * DAT_1010_1b5c;
          local_4 = 0;
        }
        else {
          local_4 = local_4 - DAT_1010_1b5e;
        }
        iVar6 = M007_GETSTATE(uVar9,0x83);
        if (iVar6 == 1) {
          Ordinal_535(0x1018,(undefined2 *)&DAT_1010_1b56,0x1010);
          Ordinal_105(0x1018,0,local_8,lVar8,DAT_1010_1b06,DAT_1010_1b08);
        }
        if (DAT_1010_1b54 == '\x01') {
          bVar7 = false;
          for (local_12 = 0; (!bVar7 && (local_12 < DAT_1010_1b5e)); local_12 = local_12 + 1) {
            if ((local_2e & 7) == 0) {
              local_20 = (undefined1 *)
                         CONCAT22((int)((ulong)lVar8 >> 0x10),
                                  (undefined1 *)(local_12 * DAT_1010_1e56 + (int)lVar8));
              local_2c = (undefined1 *)CONCAT22(DAT_1010_0c40,DAT_1010_0c3e + local_32 * local_30);
              bVar7 = false;
              for (local_16 = 0;
                  (puVar3 = local_20, puVar2 = local_2c, !bVar7 && (local_16 < DAT_1010_1e56 >> 3));
                  local_16 = local_16 + 1) {
                local_20 = (undefined1 *)CONCAT22(local_20._2_2_,(undefined1 *)local_20 + 8);
                local_2c = (undefined1 *)CONCAT22(local_2c._2_2_,(undefined1 *)local_2c + 1);
                *puVar2 = *puVar3;
                bVar7 = 0xfffe < local_16;
              }
              local_30 = local_30 + 1;
            }
            local_2e = local_2e + 1;
            bVar7 = 0xfffe < local_12;
          }
        }
        if (DAT_1010_0028 != 1) {
          local_c = DAT_1010_1b5c / DAT_1010_0028;
          if (DAT_1010_1b5c % DAT_1010_0028 != 0) {
            local_c = local_c + 1;
          }
          local_e = DAT_1010_1b5e / DAT_1010_0028;
          if (DAT_1010_1b5e % DAT_1010_0028 != 0) {
            local_e = local_e + 1;
          }
          FUN_1008_78bc(lVar8,local_c,local_e,DAT_1010_0028,DAT_1010_1e56);
          local_a = local_e * local_c;
        }
        uVar9 = 0x1008;
        iVar6 = FUN_1008_7200(lVar8,local_a,0);
        if (iVar6 != 0) break;
        DAT_1010_1b5a = DAT_1010_1b5a + uVar4;
      }
      GLOBALUNLOCK(0x1008,iVar5);
    }
    GLOBALFREE(0x1018,iVar5);
  }
  GLOBALUNLOCK(0x1018,DAT_1010_0c42);
  puVar2 = (undefined1 *)CONCAT22(DAT_1010_0c40,DAT_1010_0c3e);
LAB_1008_6281:
  DAT_1010_0c40 = (undefined2)((ulong)puVar2 >> 0x10);
  DAT_1010_0c3e = (undefined1 *)puVar2;
  GLOBALFREE(0x1018,DAT_1010_0c42);
  return 1;
}


// ---- FUN_1008_65aa @ 1008:65aa

/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined2 __cdecl16far FUN_1008_65aa(void)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined2 unaff_CS;
  long lVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  uint local_e;
  uint local_c;
  int local_a;
  int local_8;
  uint local_4;
  
  uVar8 = 0x1010;
  uVar2 = DAT_1010_1e56 * 3;
  local_4 = DAT_1010_11d0;
  if (((int)((ulong)uVar2 * (ulong)DAT_1010_11d0 >> 0x10) == 0) &&
     ((int)((ulong)uVar2 * (ulong)DAT_1010_11d0) != -1)) {
    uVar1 = (ulong)DAT_1010_11d0;
  }
  else {
    uVar1 = ((0xfffe / (ulong)uVar2) / (ulong)DAT_1010_0028) * (ulong)DAT_1010_0028;
  }
  uVar3 = (uint)uVar1;
  uVar7 = 0;
  iVar4 = GLOBALALLOC(unaff_CS,0xfffe,0);
  if (iVar4 != 0) {
    lVar6 = GLOBALLOCK(0x1018,iVar4,uVar7,uVar8);
    if (lVar6 != 0) {
      DAT_1010_1b0b = DAT_1010_1e58;
      DAT_1010_1b0c = DAT_1010_1e6e;
      DAT_1010_1b0a = DAT_1010_12e2;
      DAT_1010_1b0d = 0;
      DAT_1010_1b0e = 3;
      iVar5 = M007_GETSTATE(0x1018,0x83);
      if (iVar5 == 1) {
        Ordinal_536(0x1018,(undefined2 *)&DAT_1010_1b06,0x1010);
      }
      DAT_1010_1b61 = DAT_1010_1e58;
      DAT_1010_1b62 = DAT_1010_1e6e;
      DAT_1010_1b60 = DAT_1010_12e2;
      DAT_1010_1b63 = 1;
      DAT_1010_1b64 = 0;
      DAT_1010_1b5c = DAT_1010_1e56;
      DAT_1010_1b58 = DAT_1010_1b44;
      DAT_1010_1b5a = DAT_1010_1b42;
      DAT_1010_1b5e = uVar3;
      DAT_1010_1b69 = M007_GETSTATE(0x1018,99);
      uVar8 = 0x1018;
      iVar5 = M007_GETSTATE(0x1018,0xc0);
      DAT_1010_1b65 = iVar5 == 1;
      local_a = DAT_1010_1b5e * uVar2;
      local_8 = local_a;
      while( true ) {
        if (local_4 == 0) {
          GLOBALUNLOCK(uVar8,iVar4);
          GLOBALFREE(0x1018,iVar4);
          return 0;
        }
        if (local_4 < uVar3) {
          DAT_1010_1b5e = local_4;
          local_8 = local_4 * uVar2;
          local_4 = 0;
        }
        else {
          local_4 = local_4 - DAT_1010_1b5e;
        }
        iVar5 = M007_GETSTATE(uVar8,0x83);
        if (iVar5 == 1) {
          Ordinal_535(0x1018,(undefined2 *)&DAT_1010_1b56,0x1010);
          Ordinal_105(0x1018,0,local_8,lVar6,DAT_1010_1b06,DAT_1010_1b08);
        }
        if (DAT_1010_0028 != 1) {
          local_c = DAT_1010_1b5c / DAT_1010_0028;
          if (DAT_1010_1b5c % DAT_1010_0028 != 0) {
            local_c = local_c + 1;
          }
          local_e = DAT_1010_1b5e / DAT_1010_0028;
          if (DAT_1010_1b5e % DAT_1010_0028 != 0) {
            local_e = local_e + 1;
          }
          FUN_1008_7ae8(lVar6,local_c,local_e,DAT_1010_0028,DAT_1010_1e56);
          local_a = local_e * local_c * 3;
        }
        uVar8 = 0x1008;
        iVar5 = FUN_1008_7200(lVar6,local_a,0);
        if (iVar5 != 0) break;
        DAT_1010_1b5a = DAT_1010_1b5a + uVar3;
      }
      GLOBALUNLOCK(0x1008,iVar4);
    }
    GLOBALFREE(0x1018,iVar4);
  }
  return 1;
}


// ---- FUN_1008_6800 @ 1008:6800

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 __cdecl16far
FUN_1008_6800(uint param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  undefined2 uVar5;
  undefined2 local_1c;
  undefined2 local_1a;
  uint local_18;
  int local_16;
  uint local_14;
  int local_12;
  uint local_10;
  uint local_e;
  int local_c;
  uint local_a;
  int local_8;
  uint local_6;
  int local_4;
  
  uVar5 = 0x1010;
  local_c = 8;
  iVar1 = FUN_1008_763a(&local_6);
  if ((((iVar1 == 0) && (iVar1 = FUN_1008_70ec(DAT_1010_1b48,DAT_1010_1b4a,uVar5), iVar1 == 0)) &&
      (iVar1 = FUN_1008_706e(local_6,local_4), iVar1 == 0)) &&
     (iVar1 = local_4, iVar2 = FUN_1008_70ec(local_6,local_4,uVar5), iVar2 == 0)) {
    if (param_2 != 0) {
      local_c = local_c + 1;
      if (param_1 == 0) {
        if ((int)DAT_1010_1b38 < 5) {
          local_e = 6 - DAT_1010_1b38;
        }
        else {
          local_e = 0;
          if ((DAT_1010_1b38 & 1) != 0) {
            local_e = 1;
          }
        }
        DAT_1010_1afa = local_e + DAT_1010_1b38;
      }
      else {
        if ((int)DAT_1010_1b3c < 5) {
          local_e = 6 - DAT_1010_1b3c;
        }
        else {
          local_e = 0;
          if ((DAT_1010_1b3c & 1) != 0) {
            local_e = 1;
          }
        }
        DAT_1010_1afa = local_e + DAT_1010_1b3c;
      }
    }
    if (param_3 != 0) {
      local_c = local_c + 1;
      if (param_1 == 0) {
        if ((int)DAT_1010_1b36 < 5) {
          local_10 = 6 - DAT_1010_1b36;
        }
        else if ((DAT_1010_1b36 & 1) == 0) {
          local_10 = 0;
        }
        else {
          local_10 = 1;
        }
        DAT_1010_1e70 = local_10 + DAT_1010_1b36;
      }
      else {
        if ((int)DAT_1010_1b3a < 5) {
          local_10 = 6 - DAT_1010_1b3a;
        }
        else if ((DAT_1010_1b3a & 1) == 0) {
          local_10 = 0;
        }
        else {
          local_10 = 1;
        }
        DAT_1010_1e70 = local_10 + DAT_1010_1b3a;
      }
    }
    if (param_5 != 0) {
      local_c = local_c + 1;
    }
    if (param_6 != 0) {
      local_c = local_c + 1;
    }
    if (param_7 == 1) {
      local_c = local_c + 1;
    }
    iVar2 = (int)((ulong)_DAT_1010_1b4c >> 0x10);
    if (*_DAT_1010_1b4c != '\0') {
      local_c = local_c + 1;
      iVar1 = LSTRLEN(0x1008,(char *)_DAT_1010_1b4c);
      DAT_1010_1afc = iVar1 + 1;
      if ((DAT_1010_1afc & 1) != 0) {
        DAT_1010_1afc = iVar1 + 2;
      }
      iVar1 = iVar2;
      if ((int)DAT_1010_1afc < 5) {
        DAT_1010_1afc = 6;
      }
    }
    uVar3 = local_c * 0xc + local_6;
    local_a = uVar3 + 6;
    local_8 = local_4 + (uint)CARRY2(local_c * 0xc,local_6) + (uint)(0xfff9 < uVar3);
    local_16 = FUN_1008_6ffc(local_c,iVar1);
    if (local_16 == 0) {
      bVar4 = 0xfffd < local_6;
      local_6 = local_6 + 2;
      local_4 = local_4 + (uint)bVar4;
      local_1c = 0xfe;
      local_1a = 4;
      local_18 = 1;
      local_12 = param_6 >> 0xf;
      local_14 = param_6;
      local_16 = FUN_1008_7120(&local_1c);
      if (local_16 == 0) {
        bVar4 = 0xfff3 < local_6;
        local_6 = local_6 + 0xc;
        local_4 = local_4 + (uint)bVar4;
        local_1c = 0x100;
        local_1a = 3;
        local_18 = 1;
        local_14 = DAT_1010_1e56;
        local_12 = 0;
        local_16 = FUN_1008_7120(&local_1c);
        if (local_16 == 0) {
          bVar4 = 0xfff3 < local_6;
          local_6 = local_6 + 0xc;
          local_4 = local_4 + (uint)bVar4;
          local_1c = 0x101;
          local_1a = 3;
          local_18 = 1;
          local_14 = DAT_1010_11d0;
          local_12 = 0;
          iVar1 = FUN_1008_7120(&local_1c);
          if (iVar1 == 0) {
            bVar4 = 0xfff3 < local_6;
            local_6 = local_6 + 0xc;
            local_4 = local_4 + (uint)bVar4;
            local_1c = 0x102;
            local_1a = 3;
            if (param_7 == 1) {
              local_18 = 3;
              bVar4 = 0xfff9 < local_a;
              local_14 = local_a;
              local_12 = local_8;
              local_a = local_a + 6;
              local_8 = local_8 + (uint)bVar4;
            }
            else if (param_7 == 0) {
              local_18 = 1;
              local_14 = 8;
              local_12 = 0;
            }
            else {
              local_14 = 1;
              local_12 = 0;
              local_18 = 1;
            }
            local_16 = 0;
            local_16 = FUN_1008_7120(&local_1c);
            if (local_16 == 0) {
              bVar4 = 0xfff3 < local_6;
              local_6 = local_6 + 0xc;
              local_4 = local_4 + (uint)bVar4;
              local_1c = 0x103;
              local_1a = 3;
              local_18 = 1;
              if ((param_7 == 2) && (param_4 != 0)) {
                local_14 = 2;
              }
              else {
                local_14 = 1;
              }
              local_12 = local_16;
              local_16 = FUN_1008_7120(&local_1c);
              if (local_16 == 0) {
                bVar4 = 0xfff3 < local_6;
                local_6 = local_6 + 0xc;
                local_4 = local_4 + (uint)bVar4;
                local_1c = 0x106;
                local_1a = 3;
                local_18 = 1;
                if (param_7 == 1) {
                  local_14 = 2;
                }
                else if (param_5 == 0) {
                  local_14 = 1;
                }
                else {
                  local_14 = 3;
                }
                local_12 = local_16;
                iVar1 = FUN_1008_7120(&local_1c);
                if (iVar1 == 0) {
                  bVar4 = 0xfff3 < local_6;
                  local_6 = local_6 + 0xc;
                  local_4 = local_4 + (uint)bVar4;
                  if (*_DAT_1010_1b4c != '\0') {
                    local_1c = 0x10e;
                    local_1a = 2;
                    local_14 = local_a;
                    local_12 = local_8;
                    local_16 = (int)DAT_1010_1afc >> 0xf;
                    local_18 = DAT_1010_1afc;
                    bVar4 = CARRY2(local_a,DAT_1010_1afc);
                    local_a = local_a + DAT_1010_1afc;
                    local_8 = local_8 + local_16 + (uint)bVar4;
                    iVar1 = FUN_1008_7120(&local_1c);
                    if (iVar1 != 0) {
                      return 1;
                    }
                    bVar4 = 0xfff3 < local_6;
                    local_6 = local_6 + 0xc;
                    local_4 = local_4 + (uint)bVar4;
                  }
                  local_16 = 0;
                  local_1c = 0x111;
                  local_1a = 4;
                  local_18 = 1;
                  DAT_1010_12e8 = local_6 + 8;
                  DAT_1010_12ea = local_4 + (uint)(0xfff7 < local_6);
                  local_14 = local_16;
                  local_12 = local_16;
                  local_16 = FUN_1008_7120(&local_1c);
                  if (local_16 == 0) {
                    bVar4 = 0xfff3 < local_6;
                    local_6 = local_6 + 0xc;
                    local_4 = local_4 + (uint)bVar4;
                    local_1c = 0x115;
                    local_1a = 3;
                    local_18 = 1;
                    if (param_7 == 1) {
                      local_14 = 3;
                    }
                    else {
                      local_14 = 1;
                    }
                    local_12 = local_16;
                    iVar1 = FUN_1008_7120(&local_1c);
                    if (iVar1 == 0) {
                      bVar4 = 0xfff3 < local_6;
                      local_6 = local_6 + 0xc;
                      local_4 = local_4 + (uint)bVar4;
                      if (param_7 == 1) {
                        local_1c = 0x11c;
                        local_1a = 3;
                        local_18 = 1;
                        local_16 = 0;
                        local_14 = 1;
                        local_12 = 0;
                        iVar1 = FUN_1008_7120(&local_1c);
                        if (iVar1 != 0) {
                          return 1;
                        }
                        bVar4 = 0xfff3 < local_6;
                        local_6 = local_6 + 0xc;
                        local_4 = local_4 + (uint)bVar4;
                      }
                      if (param_6 != 0) {
                        local_1c = 0x129;
                        local_1a = 3;
                        local_18 = 2;
                        local_12 = ((int)param_1 >> 0xf) + 2;
                        local_14 = param_1;
                        local_16 = 0;
                        iVar1 = FUN_1008_7120(&local_1c);
                        if (iVar1 != 0) {
                          return 1;
                        }
                        bVar4 = 0xfff3 < local_6;
                        local_6 = local_6 + 0xc;
                        local_4 = local_4 + (uint)bVar4;
                      }
                      if (param_5 != 0) {
                        local_1c = 0x140;
                        local_1a = 3;
                        local_18 = 0x300;
                        local_14 = local_a;
                        local_12 = local_8;
                        local_16 = 0;
                        iVar1 = FUN_1008_7120(&local_1c);
                        if (iVar1 != 0) {
                          return 1;
                        }
                        bVar4 = CARRY2(local_a,local_18 * 2);
                        local_a = local_a + local_18 * 2;
                        local_8 = local_8 + local_16 * 2 + (uint)CARRY2(local_18,local_18) +
                                  (uint)bVar4;
                        bVar4 = 0xfff3 < local_6;
                        local_6 = local_6 + 0xc;
                        local_4 = local_4 + (uint)bVar4;
                      }
                      if (param_2 != 0) {
                        local_1c = 0x8545;
                        local_1a = 2;
                        local_14 = local_a;
                        local_12 = local_8;
                        local_16 = (int)DAT_1010_1afa >> 0xf;
                        local_18 = DAT_1010_1afa;
                        bVar4 = CARRY2(local_a,DAT_1010_1afa);
                        local_a = local_a + DAT_1010_1afa;
                        local_8 = local_8 + local_16 + (uint)bVar4;
                        iVar1 = FUN_1008_7120(&local_1c);
                        if (iVar1 != 0) {
                          return 1;
                        }
                        bVar4 = 0xfff3 < local_6;
                        local_6 = local_6 + 0xc;
                        local_4 = local_4 + (uint)bVar4;
                      }
                      if (param_3 != 0) {
                        local_1c = 0x8546;
                        local_1a = 2;
                        local_14 = local_a;
                        local_12 = local_8;
                        local_16 = (int)DAT_1010_1e70 >> 0xf;
                        local_18 = DAT_1010_1e70;
                        bVar4 = CARRY2(local_a,DAT_1010_1e70);
                        local_a = local_a + DAT_1010_1e70;
                        local_8 = local_8 + local_16 + (uint)bVar4;
                        iVar1 = FUN_1008_7120(&local_1c);
                        if (iVar1 != 0) {
                          return 1;
                        }
                        bVar4 = 0xfff3 < local_6;
                        local_6 = local_6 + 0xc;
                        local_4 = local_4 + (uint)bVar4;
                      }
                      DAT_1010_1b48 = local_6;
                      DAT_1010_1b4a = local_4;
                      iVar1 = FUN_1008_706e(0,0);
                      if ((iVar1 == 0) &&
                         ((param_7 != 1 ||
                          (((iVar1 = FUN_1008_6ffc(8), iVar1 == 0 &&
                            (iVar1 = FUN_1008_6ffc(8), iVar1 == 0)) &&
                           (iVar1 = FUN_1008_6ffc(8), iVar1 == 0)))))) {
                        if (((*_DAT_1010_1b4c == '\0') ||
                            (iVar1 = FUN_1008_71d0((char *)_DAT_1010_1b4c,
                                                   (int)((ulong)_DAT_1010_1b4c >> 0x10),
                                                   DAT_1010_1afc), iVar1 == 0)) &&
                           (((param_5 == 0 || (iVar1 = FUN_1008_6e34(), iVar1 == 0)) &&
                            ((param_2 == 0 ||
                             (iVar1 = FUN_1008_5d20(local_e & 0xff,param_1), iVar1 == 0)))))) {
                          if (param_3 == 0) {
                            return 0;
                          }
                          iVar1 = FUN_1008_5d8e(local_10 & 0xff,param_1);
                          if (iVar1 == 0) {
                            return 0;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 1;
}


// ---- FUN_1008_6e34 @ 1008:6e34

undefined2 __cdecl16far FUN_1008_6e34(void)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined2 uVar3;
  int local_304;
  byte local_302 [768];
  
  uVar3 = 0x1010;
  if (DAT_1010_1e58 == '\0') {
    uVar1 = 1;
  }
  else {
    uVar1 = 2;
  }
  OPLUT_READ(unaff_CS,local_302,unaff_SS,0x100,0);
  for (local_304 = 0; local_304 < 0x100; local_304 = local_304 + 1) {
    iVar2 = FUN_1008_6ffc((uint)local_302[local_304 * 3] << 8,uVar1,uVar3);
    if (iVar2 != 0) {
      return 1;
    }
  }
  for (local_304 = 0; local_304 < 0x100; local_304 = local_304 + 1) {
    iVar2 = FUN_1008_6ffc((uint)local_302[local_304 * 3 + 1] << 8,uVar1,uVar3);
    if (iVar2 != 0) {
      return 1;
    }
  }
  local_304 = 0;
  while( true ) {
    if (0xff < local_304) {
      return 0;
    }
    iVar2 = FUN_1008_6ffc((uint)local_302[local_304 * 3 + 2] << 8,uVar1,uVar3);
    if (iVar2 != 0) break;
    local_304 = local_304 + 1;
  }
  return 1;
}


// ---- FUN_1008_6f02 @ 1008:6f02

undefined2 __cdecl16far FUN_1008_6f02(undefined2 param_1,undefined2 param_2)

{
  int iVar1;
  
  iVar1 = FUN_1008_6fd0(param_1,param_2,0x1010);
  if (iVar1 == 0) {
    iVar1 = FUN_1008_6ffc(0x4949);
    if ((iVar1 == 0) && (iVar1 = FUN_1008_6ffc(0x2a), iVar1 == 0)) {
      DAT_1010_1b48 = 4;
      DAT_1010_1b4a = 0;
      iVar1 = FUN_1008_706e(0,0);
      if (iVar1 == 0) {
        return 0;
      }
    }
    FUN_1008_70c8();
  }
  return 1;
}


// ---- FUN_1008_6f82 @ 1008:6f82

bool __cdecl16far FUN_1008_6f82(void)

{
  int iVar1;
  
  iVar1 = FUN_1008_7200(DAT_1010_0c3e,DAT_1010_0c40,DAT_1010_1e56 * DAT_1010_11d0,0,0x1010);
  GLOBALUNLOCK(0x1008,DAT_1010_0c42);
  GLOBALFREE(0x1018,DAT_1010_0c42);
  return iVar1 != 0;
}


// ---- FUN_1008_6fd0 @ 1008:6fd0

bool __cdecl16far FUN_1008_6fd0(undefined2 param_1)

{
  undefined2 unaff_CS;
  
  DAT_1010_1e6c = _LCREAT(unaff_CS,0x1000,param_1);
  return DAT_1010_1e6c == -1;
}


// ---- FUN_1008_6ffc @ 1008:6ffc

bool __cdecl16far FUN_1008_6ffc(undefined1 param_1)

{
  char cVar1;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined1 local_4 [2];
  
  local_4[0] = param_1;
  cVar1 = _LWRITE(unaff_CS,2,local_4,unaff_SS);
  return cVar1 != '\x02';
}


// ---- FUN_1008_7040 @ 1008:7040

bool __cdecl16far FUN_1008_7040(void)

{
  char cVar1;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  
  cVar1 = _LWRITE(unaff_CS,1,&stack0x0004,unaff_SS);
  return cVar1 != '\x01';
}


// ---- FUN_1008_706e @ 1008:706e

bool __cdecl16far FUN_1008_706e(undefined1 param_1,undefined1 param_2)

{
  char cVar1;
  undefined2 unaff_SS;
  undefined1 local_6;
  undefined1 local_5;
  undefined1 local_4;
  
  local_4 = param_2;
  local_5 = FUN_1000_054a(0x1010);
  local_6 = param_1;
  cVar1 = _LWRITE(0x1000,4,&local_6,unaff_SS);
  return cVar1 != '\x04';
}


// ---- FUN_1008_70c8 @ 1008:70c8

void __cdecl16far FUN_1008_70c8(void)

{
  if (DAT_1010_1e6c != 0) {
    _LCLOSE();
  }
  FUN_1008_4808();
  return;
}


// ---- FUN_1008_70ec @ 1008:70ec

bool __cdecl16far FUN_1008_70ec(undefined2 param_1,undefined2 param_2)

{
  undefined2 unaff_CS;
  long lVar1;
  
  lVar1 = _LLSEEK(unaff_CS,0,param_1,param_2);
  return lVar1 != CONCAT22(param_2,param_1);
}


// ---- FUN_1008_7120 @ 1008:7120

bool __cdecl16far FUN_1008_7120(undefined1 *param_1)

{
  char cVar1;
  undefined1 *puVar2;
  undefined2 uVar3;
  undefined2 unaff_SS;
  undefined1 local_e;
  undefined1 local_d;
  undefined1 local_c;
  undefined1 local_b;
  undefined1 local_a;
  undefined1 local_9;
  undefined1 local_8;
  undefined1 local_7;
  undefined1 local_6;
  undefined1 local_5;
  undefined1 local_4;
  undefined1 local_3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  puVar2 = (undefined1 *)param_1;
  local_d = puVar2[1];
  local_e = *param_1;
  local_b = puVar2[3];
  local_c = puVar2[2];
  local_7 = puVar2[7];
  local_8 = puVar2[6];
  local_9 = FUN_1000_05b6(0x1010);
  local_a = puVar2[4];
  local_3 = puVar2[0xb];
  local_4 = puVar2[10];
  local_5 = FUN_1000_05b6();
  local_6 = puVar2[8];
  cVar1 = _LWRITE(0x1000,0xc,&local_e,unaff_SS);
  return cVar1 != '\f';
}


// ---- FUN_1008_71d0 @ 1008:71d0

bool __cdecl16far FUN_1008_71d0(undefined2 param_1,undefined2 param_2,int param_3)

{
  int iVar1;
  undefined2 unaff_CS;
  
  iVar1 = _LWRITE(unaff_CS,param_3,param_1,param_2);
  return iVar1 != param_3;
}


// ---- FUN_1008_7200 @ 1008:7200

undefined2 __cdecl16far FUN_1008_7200(undefined2 param_1,undefined2 param_2,int param_3,int param_4)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_CS;
  
  iVar1 = _LWRITE(unaff_CS,param_3,param_1,param_2);
  if ((iVar1 == param_3) && (param_4 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}


// ---- FUN_1008_7236 @ 1008:7236

bool __cdecl16far FUN_1008_7236(undefined2 param_1)

{
  undefined2 unaff_CS;
  
  DAT_1010_1e6c = _LOPEN(unaff_CS,0x20,param_1);
  return DAT_1010_1e6c == -1;
}


// ---- FUN_1008_7262 @ 1008:7262

undefined2 __cdecl16far FUN_1008_7262(undefined2 *param_1)

{
  char cVar1;
  undefined2 uVar2;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined1 local_4;
  undefined1 local_3;
  
  cVar1 = _LREAD(unaff_CS,2,&local_4,unaff_SS);
  if (cVar1 == '\x02') {
    if (DAT_1010_1b46 == 0x4d4d) {
      uVar2 = CONCAT11(local_4,local_3);
    }
    else {
      uVar2 = CONCAT11(local_3,local_4);
    }
    *param_1 = uVar2;
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}


// ---- FUN_1008_72b6 @ 1008:72b6

undefined2 __cdecl16far FUN_1008_72b6(uint *param_1)

{
  uint uVar1;
  char cVar2;
  undefined2 uVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  undefined2 uVar7;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined2 uVar8;
  byte *pbVar9;
  byte local_6;
  byte local_5;
  byte local_4;
  byte local_3;
  
  uVar8 = 0x1010;
  pbVar9 = &local_6;
  uVar3 = DAT_1010_1e6c;
  cVar2 = _LREAD(unaff_CS,4,pbVar9,unaff_SS);
  if (cVar2 == '\x04') {
    puVar6 = (uint *)param_1;
    uVar7 = (undefined2)((ulong)param_1 >> 0x10);
    if (DAT_1010_1b46 == 0x4d4d) {
      *param_1 = 0;
      puVar6[1] = (uint)local_6 << 8;
      *param_1 = *param_1;
      puVar6[1] = puVar6[1] + (uint)local_5;
      iVar5 = 0;
      uVar4 = FUN_1000_053e(uVar3,uVar8,pbVar9);
      uVar1 = *param_1;
      *param_1 = *param_1 + uVar4;
      puVar6[1] = puVar6[1] + iVar5 + (uint)CARRY2(uVar1,uVar4);
    }
    else {
      *param_1 = 0;
      puVar6[1] = (uint)local_3 << 8;
      *param_1 = *param_1;
      puVar6[1] = puVar6[1] + (uint)local_4;
      iVar5 = 0;
      uVar4 = FUN_1000_053e(uVar3,uVar8,pbVar9);
      uVar1 = *param_1;
      *param_1 = *param_1 + uVar4;
      puVar6[1] = puVar6[1] + iVar5 + (uint)CARRY2(uVar1,uVar4);
      local_3 = local_6;
    }
    uVar1 = *param_1;
    *param_1 = *param_1 + (uint)local_3;
    puVar6[1] = puVar6[1] + (uint)CARRY2(uVar1,(uint)local_3);
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}


// ---- FUN_1008_737c @ 1008:737c

undefined2 __cdecl16far FUN_1008_737c(int *param_1)

{
  uint *puVar1;
  uint uVar2;
  char cVar3;
  undefined2 uVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  undefined2 uVar8;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined2 uVar9;
  byte *pbVar10;
  byte local_e;
  byte local_d;
  byte local_c;
  byte local_b;
  byte local_a;
  byte local_9;
  byte local_8;
  byte local_7;
  byte local_6;
  byte local_5;
  byte local_4;
  byte local_3;
  
  uVar9 = 0x1010;
  pbVar10 = &local_e;
  uVar4 = DAT_1010_1e6c;
  cVar3 = _LREAD(unaff_CS,0xc,pbVar10,unaff_SS);
  if (cVar3 == '\f') {
    piVar7 = (int *)param_1;
    uVar8 = (undefined2)((ulong)param_1 >> 0x10);
    if (DAT_1010_1b46 == 0x4d4d) {
      *param_1 = (uint)local_e << 8;
      *param_1 = *param_1 + (uint)local_d;
      piVar7[1] = (uint)local_c << 8;
      piVar7[1] = piVar7[1] + (uint)local_b;
      piVar7[2] = 0;
      piVar7[3] = (uint)local_a << 8;
      piVar7[2] = piVar7[2];
      piVar7[3] = piVar7[3] + (uint)local_9;
      iVar6 = 0;
      uVar5 = FUN_1000_053e(uVar4,uVar9,pbVar10);
      puVar1 = (uint *)(piVar7 + 2);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 + uVar5;
      piVar7[3] = piVar7[3] + iVar6 + (uint)CARRY2(uVar2,uVar5);
      puVar1 = (uint *)(piVar7 + 2);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 + (uint)local_7;
      piVar7[3] = piVar7[3] + (uint)CARRY2(uVar2,(uint)local_7);
      piVar7[4] = 0;
      piVar7[5] = (uint)local_6 << 8;
      piVar7[4] = piVar7[4];
      piVar7[5] = piVar7[5] + (uint)local_5;
      iVar6 = 0;
      uVar5 = FUN_1000_053e();
      puVar1 = (uint *)(piVar7 + 4);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 + uVar5;
      piVar7[5] = piVar7[5] + iVar6 + (uint)CARRY2(uVar2,uVar5);
      puVar1 = (uint *)(piVar7 + 4);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 + (uint)local_3;
      piVar7[5] = piVar7[5] + (uint)CARRY2(uVar2,(uint)local_3);
    }
    if (DAT_1010_1b46 == 0x4949) {
      *param_1 = (uint)local_d << 8;
      *param_1 = *param_1 + (uint)local_e;
      piVar7[1] = (uint)local_b << 8;
      piVar7[1] = piVar7[1] + (uint)local_c;
      piVar7[2] = 0;
      piVar7[3] = (uint)local_7 << 8;
      piVar7[2] = piVar7[2];
      piVar7[3] = piVar7[3] + (uint)local_8;
      iVar6 = 0;
      uVar5 = FUN_1000_053e(uVar4,uVar9,pbVar10);
      puVar1 = (uint *)(piVar7 + 2);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 + uVar5;
      piVar7[3] = piVar7[3] + iVar6 + (uint)CARRY2(uVar2,uVar5);
      puVar1 = (uint *)(piVar7 + 2);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 + (uint)local_a;
      piVar7[3] = piVar7[3] + (uint)CARRY2(uVar2,(uint)local_a);
      if (((piVar7[1] == 3) && (piVar7[3] == 0)) && ((uint)piVar7[2] < 3)) {
        piVar7[4] = 0;
        piVar7[5] = (uint)local_5 << 8;
        piVar7[4] = piVar7[4];
        piVar7[5] = piVar7[5] + (uint)local_6;
        iVar6 = 0;
        uVar5 = FUN_1000_053e(uVar4,uVar9,pbVar10);
        puVar1 = (uint *)(piVar7 + 4);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 + uVar5;
        piVar7[5] = piVar7[5] + iVar6 + (uint)CARRY2(uVar2,uVar5);
      }
      else if (((piVar7[1] == 2) && (piVar7[3] == 0)) && ((uint)piVar7[2] < 5)) {
        piVar7[4] = 0;
        piVar7[5] = (uint)local_6 << 8;
        piVar7[4] = piVar7[4];
        piVar7[5] = piVar7[5] + (uint)local_5;
        iVar6 = 0;
        uVar5 = FUN_1000_053e(uVar4,uVar9,pbVar10);
        puVar1 = (uint *)(piVar7 + 4);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 + uVar5;
        piVar7[5] = piVar7[5] + iVar6 + (uint)CARRY2(uVar2,uVar5);
        local_4 = local_3;
      }
      else {
        piVar7[4] = 0;
        piVar7[5] = (uint)local_3 << 8;
        piVar7[4] = piVar7[4];
        piVar7[5] = piVar7[5] + (uint)local_4;
        iVar6 = 0;
        uVar5 = FUN_1000_053e(uVar4,uVar9,pbVar10);
        puVar1 = (uint *)(piVar7 + 4);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 + uVar5;
        piVar7[5] = piVar7[5] + iVar6 + (uint)CARRY2(uVar2,uVar5);
        local_4 = local_6;
      }
      puVar1 = (uint *)(piVar7 + 4);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 + (uint)local_4;
      piVar7[5] = piVar7[5] + (uint)CARRY2(uVar2,(uint)local_4);
    }
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
}


// ---- FUN_1008_75d4 @ 1008:75d4

undefined2 __cdecl16far FUN_1008_75d4(undefined2 param_1,undefined2 param_2,int param_3,int param_4)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_CS;
  
  iVar1 = _LREAD(unaff_CS,param_3,param_1,param_2);
  if ((iVar1 == param_3) && (param_4 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}


// ---- FUN_1008_760a @ 1008:760a

bool __cdecl16far FUN_1008_760a(int param_1,undefined2 param_2,undefined2 param_3)

{
  int iVar1;
  undefined2 unaff_CS;
  
  iVar1 = _LREAD(unaff_CS,param_1,param_2,param_3);
  return iVar1 != param_1;
}


// ---- FUN_1008_763a @ 1008:763a

undefined2 __cdecl16far FUN_1008_763a(int *param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 unaff_CS;
  undefined4 uVar3;
  
  uVar3 = _LLSEEK(unaff_CS,1,0,0);
  iVar2 = (int)((ulong)uVar3 >> 0x10);
  *param_1 = (int)uVar3;
  ((int *)param_1)[1] = iVar2;
  if ((*param_1 == -1) && (iVar2 == -1)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


// ---- FUN_1008_7676 @ 1008:7676

bool __cdecl16far FUN_1008_7676(undefined2 param_1)

{
  undefined2 unaff_CS;
  
  DAT_1010_12e6 = _LCREAT(unaff_CS,0x1000,param_1);
  return DAT_1010_12e6 == -1;
}


// ---- FUN_1008_76a2 @ 1008:76a2

void __cdecl16far FUN_1008_76a2(void)

{
  if (DAT_1010_12e6 != 0) {
    _LCLOSE();
  }
  return;
}


// ---- FUN_1008_76c0 @ 1008:76c0

undefined2 __cdecl16far FUN_1008_76c0(undefined2 param_1,undefined2 param_2,int param_3,int param_4)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_CS;
  
  iVar1 = _LWRITE(unaff_CS,param_3,param_1,param_2);
  if ((iVar1 == param_3) && (param_4 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}


// ---- FUN_1008_76f6 @ 1008:76f6

undefined2 __cdecl16far FUN_1008_76f6(undefined2 param_1,undefined2 param_2,int param_3,int param_4)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_CS;
  
  iVar1 = _LREAD(unaff_CS,param_3,param_1,param_2);
  if ((iVar1 == param_3) && (param_4 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}


// ---- FUN_1008_772c @ 1008:772c

bool __cdecl16far FUN_1008_772c(undefined2 param_1,undefined2 param_2)

{
  undefined2 unaff_CS;
  long lVar1;
  
  lVar1 = _LLSEEK(unaff_CS,0,param_1,param_2);
  return lVar1 != CONCAT22(param_2,param_1);
}


// ---- FUN_1008_7760 @ 1008:7760

void __cdecl16far FUN_1008_7760(void)

{
  FUN_1000_042c();
  return;
}


// ---- FUN_1008_777c @ 1008:777c

undefined2 __cdecl16far
FUN_1008_777c(int param_1,undefined2 param_2,uint param_3,uint param_4,uint param_5,uint param_6)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint in_DX;
  bool bVar4;
  undefined2 uVar5;
  uint local_18;
  uint local_16;
  uint local_14;
  uint local_12;
  uint local_10;
  uint local_6;
  uint local_4;
  
  uVar5 = 0x1010;
  local_4 = 0;
  local_6 = 0;
  if (DAT_1010_0024 == '\0') {
    iVar3 = FUN_1008_70ec(param_5 + DAT_1010_12e8,
                          param_6 + DAT_1010_12ea + (uint)CARRY2(param_5,DAT_1010_12e8));
    if (iVar3 != 0) {
      return 1;
    }
    uVar5 = FUN_1008_75d4(param_1,param_2,param_3,param_4);
    return uVar5;
  }
  local_18 = 0;
  while( true ) {
    if (DAT_1010_0026 <= local_18) {
      return 1;
    }
    uVar1 = FUN_1008_47b4(local_18,uVar5);
    bVar4 = CARRY2(local_6,uVar1);
    local_6 = local_6 + uVar1;
    local_4 = local_4 + in_DX + (uint)bVar4;
    if ((param_6 <= local_4) && ((local_4 != param_6 || (param_5 < local_6)))) break;
    local_18 = local_18 + 1;
    in_DX = param_6;
  }
  local_12 = param_5 - (local_6 - uVar1);
  local_14 = (param_6 - ((local_4 - in_DX) - (uint)(local_6 < uVar1))) -
             (uint)(param_5 < local_6 - uVar1);
  local_10 = local_14;
  while( true ) {
    if (param_4 == 0 && param_3 == 0) {
      return 0;
    }
    uVar2 = FUN_1008_47e0(local_18);
    iVar3 = FUN_1008_70ec(uVar2 + local_12,local_14 + local_10 + (uint)CARRY2(uVar2,local_12));
    if (iVar3 != 0) break;
    local_16 = uVar1 - local_12;
    local_14 = (in_DX - local_10) - (uint)(uVar1 < local_12);
    if ((param_4 <= local_14) && ((param_4 < local_14 || (param_3 < local_16)))) {
      local_16 = param_3;
      local_14 = param_4;
    }
    iVar3 = FUN_1008_75d4(param_1,param_2,local_16,local_14);
    if (iVar3 == 1) {
      return 1;
    }
    param_1 = param_1 + local_16;
    bVar4 = param_3 < local_16;
    param_3 = param_3 - local_16;
    param_4 = (param_4 - local_14) - (uint)bVar4;
    if (param_4 != 0 || param_3 != 0) {
      local_10 = 0;
      local_12 = 0;
      local_18 = local_18 + 1;
      if (local_18 == DAT_1010_0026) {
        return 1;
      }
    }
  }
  return 1;
}


// ---- FUN_1008_78bc @ 1008:78bc

void __cdecl16far
FUN_1008_78bc(undefined1 *param_1,undefined2 param_2,uint param_3,uint param_4,int param_5,
             int param_6)

{
  undefined1 *puVar1;
  uint local_e;
  uint local_c;
  undefined4 local_a;
  undefined4 local_6;
  
  local_6 = (undefined1 *)CONCAT22(param_2,param_1);
  for (local_e = 0; local_e < param_4; local_e = local_e + 1) {
    local_a = (undefined1 *)CONCAT22(param_2,param_1 + param_6 * param_5 * local_e);
    for (local_c = 0; puVar1 = local_6, local_c < param_3; local_c = local_c + 1) {
      local_6 = (undefined1 *)CONCAT22(local_6._2_2_,(undefined1 *)local_6 + 1);
      *puVar1 = *local_a;
      local_a = (undefined1 *)CONCAT22(local_a._2_2_,(undefined1 *)local_a + param_5);
    }
  }
  return;
}


// ---- FUN_1008_7930 @ 1008:7930

void __cdecl16far FUN_1008_7930(char *param_1,undefined2 param_2,int param_3,uint param_4)

{
  char *pcVar1;
  undefined2 uVar2;
  undefined4 local_a;
  uint local_6;
  uint local_4;
  
  if (param_3 == 1) {
    local_a = (char *)CONCAT22(param_2,param_1);
    for (local_4 = 0; local_4 < param_4 - 1; local_4 = local_4 + 2) {
      uVar2 = (undefined2)((ulong)local_a >> 0x10);
      pcVar1 = (char *)local_a;
      if (*local_a == '\0') {
        *local_a = pcVar1[1];
      }
      else {
        pcVar1[1] = *local_a;
      }
      local_a = (char *)CONCAT22(uVar2,pcVar1 + 2);
    }
  }
  else {
    for (local_4 = 0; local_4 < param_4; local_4 = local_4 + 1) {
      local_a = (char *)CONCAT22(param_2,param_1 + local_4 * param_3);
      for (local_6 = 0; local_6 < param_3 - 1U; local_6 = local_6 + 2) {
        uVar2 = (undefined2)((ulong)local_a >> 0x10);
        pcVar1 = (char *)local_a;
        if (*local_a == '\0') {
          *local_a = pcVar1[1];
        }
        else {
          pcVar1[1] = *local_a;
        }
        local_a = (char *)CONCAT22(uVar2,pcVar1 + 2);
      }
    }
  }
  return;
}


// ---- FUN_1008_79da @ 1008:79da

void __cdecl16far FUN_1008_79da(undefined2 param_1,undefined2 param_2,int param_3)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_CS;
  
  iVar1 = FINDWINDOW(unaff_CS,param_1,param_2,0);
  if (iVar1 != 0) {
    if (param_3 == 1) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = 0xfffe;
    }
    SETWINDOWPOS(0x1018,3,0,0,0,0,uVar2);
  }
  return;
}


// ---- FUN_1008_7a1e @ 1008:7a1e

void __cdecl16far
FUN_1008_7a1e(byte *param_1,undefined2 param_2,uint param_3,uint param_4,uint param_5,int param_6)

{
  byte local_14;
  byte local_12;
  uint local_10;
  uint local_e;
  uint local_c;
  undefined4 local_a;
  undefined4 local_6;
  
  local_6 = (byte *)CONCAT22(param_2,param_1);
  local_12 = 0x80;
  for (local_e = 0; local_e < param_4; local_e = local_e + 1) {
    if (local_12 != 0x80) {
      local_12 = 0x80;
      local_6 = (byte *)CONCAT22(local_6._2_2_,(byte *)local_6 + 1);
    }
    local_a = (byte *)CONCAT22(param_2,param_1 + param_6 * param_5 * local_e);
    local_14 = 0x80;
    for (local_c = 0; local_c < param_3; local_c = local_c + 1) {
      if ((local_14 & *local_a) == 0) {
        *local_6 = *local_6 & ~local_12;
      }
      else {
        *local_6 = *local_6 | local_12;
      }
      local_12 = local_12 >> 1;
      if (local_12 == 0) {
        local_6 = (byte *)CONCAT22(local_6._2_2_,(byte *)local_6 + 1);
        local_12 = 0x80;
      }
      for (local_10 = 0; local_10 < param_5; local_10 = local_10 + 1) {
        local_14 = local_14 >> 1;
        if (local_14 == 0) {
          local_a = (byte *)CONCAT22(local_a._2_2_,(byte *)local_a + 1);
          local_14 = 0x80;
        }
      }
    }
  }
  return;
}


// ---- FUN_1008_7ae8 @ 1008:7ae8

void __cdecl16far
FUN_1008_7ae8(undefined1 *param_1,undefined2 param_2,uint param_3,uint param_4,int param_5,
             int param_6)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  uint local_e;
  uint local_c;
  undefined4 local_a;
  undefined4 local_6;
  
  local_6 = (undefined1 *)CONCAT22(param_2,param_1);
  for (local_e = 0; local_e < param_4; local_e = local_e + 1) {
    local_a = (undefined1 *)CONCAT22(param_2,param_1 + param_6 * param_5 * 3 * local_e);
    for (local_c = 0; puVar5 = local_6, puVar2 = local_a, local_c < param_3; local_c = local_c + 1)
    {
      puVar1 = (undefined1 *)local_a;
      local_a = (undefined1 *)CONCAT22(local_a._2_2_,(undefined1 *)local_a + 1);
      puVar3 = local_a;
      puVar4 = (undefined1 *)local_6;
      local_6 = (undefined1 *)CONCAT22(local_6._2_2_,(undefined1 *)local_6 + 1);
      puVar6 = local_6;
      *puVar5 = *puVar2;
      local_a = (undefined1 *)CONCAT22(local_a._2_2_,puVar1 + 2);
      local_6 = (undefined1 *)CONCAT22(local_6._2_2_,puVar4 + 2);
      puVar2 = local_6;
      *puVar6 = *puVar3;
      local_6 = (undefined1 *)CONCAT22(local_6._2_2_,puVar4 + 3);
      *puVar2 = *local_a;
      local_a = (undefined1 *)CONCAT22(local_a._2_2_,puVar1 + param_5 * 3);
    }
  }
  return;
}


// ---- FUN_1008_7b9c @ 1008:7b9c

undefined2 __cdecl16far FUN_1008_7b9c(char param_1)

{
  undefined2 unaff_CS;
  undefined2 uVar1;
  long lVar2;
  long lVar3;
  undefined2 uVar4;
  
  lVar2 = CONCAT22(DAT_1010_11d8,DAT_1010_11d6);
  uVar1 = unaff_CS;
  if (param_1 == '\0') {
    uVar4 = 0;
    uVar1 = 0x1018;
    DAT_1010_1e6a = GLOBALALLOC(unaff_CS,DAT_1010_1afa,DAT_1010_1afa >> 0xf);
    lVar2 = CONCAT22(DAT_1010_11d8,DAT_1010_11d6);
    if (DAT_1010_1e6a == 0) goto LAB_1008_7bd9;
    uVar1 = 0x1018;
    lVar2 = GLOBALLOCK(0x1018,DAT_1010_1e6a,uVar4);
    lVar3 = CONCAT22(DAT_1010_11e0,DAT_1010_11de);
    if (lVar2 == 0) goto LAB_1008_7bd9;
LAB_1008_7bd5:
    uVar1 = 0;
  }
  else {
LAB_1008_7bd9:
    lVar3 = CONCAT22(DAT_1010_11e0,DAT_1010_11de);
    DAT_1010_11d8 = (undefined2)((ulong)lVar2 >> 0x10);
    DAT_1010_11d6 = (undefined2)lVar2;
    if (param_1 == '\x01') {
      uVar4 = 0;
      DAT_1010_1e66 = GLOBALALLOC(uVar1,DAT_1010_1afa,DAT_1010_1afa >> 0xf);
      lVar3 = CONCAT22(DAT_1010_11e0,DAT_1010_11de);
      lVar2 = CONCAT22(DAT_1010_11d8,DAT_1010_11d6);
      if (DAT_1010_1e66 != 0) {
        lVar3 = GLOBALLOCK(0x1018,DAT_1010_1e66,uVar4);
        lVar2 = CONCAT22(DAT_1010_11d8,DAT_1010_11d6);
        if (lVar3 != 0) goto LAB_1008_7bd5;
      }
    }
    uVar1 = 1;
  }
  DAT_1010_11e0 = (undefined2)((ulong)lVar3 >> 0x10);
  DAT_1010_11de = (undefined2)lVar3;
  DAT_1010_11d8 = (undefined2)((ulong)lVar2 >> 0x10);
  DAT_1010_11d6 = (undefined2)lVar2;
  return uVar1;
}


// ---- FUN_1008_7c12 @ 1008:7c12

undefined2 __cdecl16far FUN_1008_7c12(char param_1)

{
  undefined2 unaff_CS;
  undefined2 uVar1;
  long lVar2;
  long lVar3;
  undefined2 uVar4;
  
  lVar2 = CONCAT22(DAT_1010_11d4,DAT_1010_11d2);
  uVar1 = unaff_CS;
  if (param_1 == '\0') {
    uVar4 = 0;
    uVar1 = 0x1018;
    DAT_1010_1e68 = GLOBALALLOC(unaff_CS,DAT_1010_1e70,DAT_1010_1e70 >> 0xf);
    lVar2 = CONCAT22(DAT_1010_11d4,DAT_1010_11d2);
    if (DAT_1010_1e68 == 0) goto LAB_1008_7c4f;
    uVar1 = 0x1018;
    lVar2 = GLOBALLOCK(0x1018,DAT_1010_1e68,uVar4);
    lVar3 = CONCAT22(DAT_1010_11dc,DAT_1010_11da);
    if (lVar2 == 0) goto LAB_1008_7c4f;
LAB_1008_7c4b:
    uVar1 = 0;
  }
  else {
LAB_1008_7c4f:
    lVar3 = CONCAT22(DAT_1010_11dc,DAT_1010_11da);
    DAT_1010_11d4 = (undefined2)((ulong)lVar2 >> 0x10);
    DAT_1010_11d2 = (undefined2)lVar2;
    if (param_1 == '\x01') {
      uVar4 = 0;
      DAT_1010_1e64 = GLOBALALLOC(uVar1,DAT_1010_1e70,DAT_1010_1e70 >> 0xf);
      lVar3 = CONCAT22(DAT_1010_11dc,DAT_1010_11da);
      lVar2 = CONCAT22(DAT_1010_11d4,DAT_1010_11d2);
      if (DAT_1010_1e64 != 0) {
        lVar3 = GLOBALLOCK(0x1018,DAT_1010_1e64,uVar4);
        lVar2 = CONCAT22(DAT_1010_11d4,DAT_1010_11d2);
        if (lVar3 != 0) goto LAB_1008_7c4b;
      }
    }
    uVar1 = 1;
  }
  DAT_1010_11dc = (undefined2)((ulong)lVar3 >> 0x10);
  DAT_1010_11da = (undefined2)lVar3;
  DAT_1010_11d4 = (undefined2)((ulong)lVar2 >> 0x10);
  DAT_1010_11d2 = (undefined2)lVar2;
  return uVar1;
}


// ---- FUN_1008_7c88 @ 1008:7c88

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined2 __cdecl16far FUN_1008_7c88(undefined2 param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined2 *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined2 unaff_CS;
  bool bVar8;
  undefined2 *puVar9;
  ulong uVar10;
  long lVar11;
  undefined2 uVar12;
  undefined2 uVar13;
  uint local_3e;
  uint local_3c;
  int local_36;
  int local_34;
  int local_32;
  undefined4 local_22;
  undefined4 local_1e;
  uint local_e;
  int local_c;
  uint local_a;
  int local_8;
  uint local_6;
  uint local_4;
  
  uVar13 = 0x1010;
  local_3c = DAT_1010_1e56 / DAT_1010_0028;
  if (DAT_1010_1e56 % DAT_1010_0028 != 0) {
    local_3c = local_3c + 1;
  }
  local_3e = DAT_1010_11d0 / DAT_1010_0028;
  if (DAT_1010_11d0 % DAT_1010_0028 != 0) {
    local_3e = local_3e + 1;
  }
  local_6 = local_3c >> 2;
  if ((local_3c & 3) != 0) {
    local_6 = local_6 + 1;
  }
  uVar12 = 0;
  iVar2 = GLOBALALLOC(unaff_CS,(ulong)(local_6 << 2) * (ulong)local_3e + 0x428);
  if (iVar2 != 0) {
    puVar9 = (undefined2 *)GLOBALLOCK(0x1018,iVar2,uVar12,uVar13);
    iVar7 = (int)((ulong)puVar9 >> 0x10);
    puVar3 = (undefined2 *)puVar9;
    if (puVar9 != (undefined2 *)0x0) {
      uVar4 = DAT_1010_11d0;
      if ((int)((ulong)DAT_1010_1e56 * (ulong)DAT_1010_11d0 >> 0x10) != 0) {
        uVar4 = (uint)(((0xffff / (ulong)DAT_1010_1e56) / (ulong)DAT_1010_0028) *
                      (ulong)DAT_1010_0028);
      }
      uVar13 = 0;
      iVar5 = GLOBALALLOC(0x1018,0xffff,0);
      if (iVar5 == 0) {
        GLOBALUNLOCK(0x1018,iVar2);
      }
      else {
        uVar10 = GLOBALLOCK(0x1018,iVar5,uVar13);
        if (uVar10 != 0) {
          *puVar9 = 0x28;
          puVar3[1] = 0;
          puVar3[2] = local_3c;
          puVar3[3] = 0;
          puVar3[4] = local_3e;
          puVar3[5] = 0;
          puVar3[6] = 1;
          puVar3[7] = 8;
          puVar3[9] = 0;
          puVar3[8] = 0;
          puVar3[0xb] = 0;
          puVar3[10] = 0;
          puVar3[0xd] = 0;
          puVar3[0xc] = 0;
          puVar3[0xf] = 0;
          puVar3[0xe] = 0;
          puVar3[0x11] = 0;
          puVar3[0x10] = 0;
          puVar3[0x13] = 0;
          puVar3[0x12] = 0;
          uVar13 = 1;
          OPLUT_READ(0x1018,(undefined2 *)&DAT_1010_1b56,0x1010,0x100,0);
          local_8 = 0;
          for (local_a = 0; (local_8 < 1 && ((local_8 < 0 || (local_a < 0x100))));
              local_a = local_a + 1) {
            iVar6 = local_a * 3;
            *(undefined1 *)(puVar3 + local_a * 2 + 0x15) =
                 *(undefined1 *)((int)(undefined2 *)&DAT_1010_1b56 + iVar6);
            *(undefined1 *)((int)puVar3 + local_a * 4 + 0x29) =
                 *(undefined1 *)((int)(undefined2 *)&DAT_1010_1b56 + iVar6 + 1);
            *(undefined1 *)(puVar3 + local_a * 2 + 0x14) =
                 *(undefined1 *)((int)(undefined2 *)&DAT_1010_1b58 + iVar6);
            *(undefined1 *)((int)puVar3 + local_a * 4 + 0x2b) = 0;
            local_8 = local_8 + (uint)(0xfffe < local_a);
          }
          DAT_1010_1b0b = DAT_1010_1e58;
          DAT_1010_1b0c = DAT_1010_1e6e;
          DAT_1010_1b0d = 0;
          DAT_1010_1b0a = DAT_1010_12e2;
          iVar6 = M007_GETSTATE(0x1018,0xc0,uVar13);
          if ((iVar6 == 2) && (_DAT_1010_1b04 != 0)) {
            DAT_1010_1b0e = 4;
          }
          else {
            DAT_1010_1b0e = 3;
          }
          iVar6 = M007_GETSTATE(0x1018,0x83);
          if (iVar6 == 1) {
            Ordinal_536(0x1018,(undefined2 *)&DAT_1010_1b06,0x1010);
          }
          DAT_1010_1b61 = DAT_1010_1e58;
          DAT_1010_1b62 = DAT_1010_1e6e;
          DAT_1010_1b60 = DAT_1010_12e2;
          DAT_1010_1b63 = 0;
          DAT_1010_1b64 = 0;
          DAT_1010_1b5c = DAT_1010_1e56;
          DAT_1010_1b58 = DAT_1010_1b44;
          DAT_1010_1b5a = DAT_1010_1b42;
          DAT_1010_1b65 = DAT_1010_1b04;
          uVar13 = 0x1018;
          DAT_1010_1b5e = uVar4;
          DAT_1010_1b69 = M007_GETSTATE(0x1018,99);
          local_32 = DAT_1010_1b5c * DAT_1010_1b5e;
          local_36 = local_3e - 1;
          local_34 = 0;
          for (local_4 = DAT_1010_11d0; local_4 != 0; local_4 = local_4 - DAT_1010_1b5e) {
            if (local_4 < uVar4) {
              DAT_1010_1b5e = local_4;
              local_32 = local_4 * DAT_1010_1b5c;
            }
            iVar6 = M007_GETSTATE(uVar13,0x83);
            if (iVar6 == 1) {
              Ordinal_535(0x1018,(undefined2 *)&DAT_1010_1b56,0x1010);
              Ordinal_105(0x1018,0,local_32,uVar10,DAT_1010_1b06,DAT_1010_1b08);
            }
            uVar13 = 0x1018;
            local_8 = 0;
            for (local_a = 0;
                (local_8 <= (int)DAT_1010_1b5e >> 0xf &&
                ((local_8 < (int)DAT_1010_1b5e >> 0xf || (local_a < DAT_1010_1b5e))));
                local_a = local_a + DAT_1010_0028) {
              lVar11 = FUN_1000_050c(local_a,local_8,DAT_1010_1e56,0);
              puVar1 = (undefined1 *)(lVar11 + (uVar10 & 0xffff));
              local_22 = (undefined1 *)
                         CONCAT22((int)((ulong)puVar1 >> 0x10) * 0x10 + (int)(uVar10 >> 0x10),
                                  (undefined1 *)puVar1);
              uVar13 = 0x1000;
              lVar11 = FUN_1000_050c(local_6 << 2,0,local_36,local_34);
              local_1e = (undefined1 *)
                         CONCAT22((int)(lVar11 + ZEXT24(puVar3 + 0x214) >> 0x10) * 0x10 +
                                  iVar7 + (-(uint)((undefined2 *)0xfbd7 < puVar3) & 0x68),
                                  (undefined1 *)(undefined1 *)(lVar11 + ZEXT24(puVar3 + 0x214)));
              bVar8 = local_36 == 0;
              local_36 = local_36 + -1;
              local_34 = local_34 - (uint)bVar8;
              local_c = 0;
              for (local_e = 0;
                  (puVar1 = local_1e, local_c <= (int)DAT_1010_1e56 >> 0xf &&
                  ((local_c < (int)DAT_1010_1e56 >> 0xf || (local_e < DAT_1010_1e56))));
                  local_e = local_e + DAT_1010_0028) {
                if ((undefined1 *)local_1e == (undefined1 *)0xffff) {
                  local_1e._2_2_ = local_1e._2_2_ + 0x68;
                }
                local_1e = (undefined1 *)CONCAT22(local_1e._2_2_,(undefined1 *)local_1e + 1);
                *puVar1 = *local_22;
                local_22 = (undefined1 *)
                           CONCAT22(local_22._2_2_ +
                                    (((int)DAT_1010_0028 >> 0xf) +
                                    (uint)CARRY2((uint)(undefined1 *)local_22,DAT_1010_0028)) * 0x10
                                    ,(undefined1 *)local_22 + DAT_1010_0028);
                local_c = local_c + ((int)DAT_1010_0028 >> 0xf) +
                          (uint)CARRY2(local_e,DAT_1010_0028);
              }
              local_8 = local_8 + ((int)DAT_1010_0028 >> 0xf) + (uint)CARRY2(local_a,DAT_1010_0028);
            }
            DAT_1010_1b5a = DAT_1010_1b5a + uVar4;
          }
          GLOBALUNLOCK(uVar13,iVar2);
          iVar7 = OPENCLIPBOARD(0x1018,param_1);
          if (iVar7 != 0) {
            EMPTYCLIPBOARD(0x1018);
            uVar13 = 8;
            SETCLIPBOARDDATA(0x1018,iVar2);
            CLOSECLIPBOARD(0x1018,uVar13);
            GLOBALUNLOCK(0x1018,iVar5);
            GLOBALFREE(0x1018,iVar5);
            return 0;
          }
          GLOBALFREE(0x1018,iVar2);
          GLOBALUNLOCK(0x1018,iVar5);
          GLOBALFREE(0x1018,iVar5);
          return 0x1d4;
        }
        GLOBALUNLOCK(0x1018,iVar2);
        GLOBALFREE(0x1018,iVar2);
        iVar2 = iVar5;
      }
    }
    GLOBALFREE(0x1018,iVar2);
  }
  return 0x1d2;
}


// ---- FUN_1008_80c4 @ 1008:80c4

int __cdecl16far FUN_1008_80c4(undefined2 param_1)

{
  int iVar1;
  char cVar2;
  undefined2 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined2 unaff_CS;
  long lVar11;
  undefined2 uVar12;
  undefined2 uVar13;
  int local_16;
  int local_14;
  char local_12;
  uint local_c;
  
  uVar13 = 0x1010;
  uVar12 = 0;
  uVar3 = LOADCURSOR(unaff_CS,0x7f02,0);
  uVar3 = SETCURSOR(0x1018,uVar3,uVar12,uVar13);
  iVar4 = OPENCLIPBOARD(0x1018,param_1);
  if (iVar4 == 0) {
    UIF_LOG(0x1018,0x2800,0,0);
    return 0x1d4;
  }
  iVar4 = ISCLIPBOARDFORMATAVAILABLE(0x1018,8);
  if (iVar4 == 0) {
    CLOSECLIPBOARD(0x1018);
    UIF_LOG(0x1018,0x1800,0,0);
    return 0x1d5;
  }
  iVar4 = GETCLIPBOARDDATA(0x1018,8);
  if (iVar4 == 0) {
LAB_1008_8144:
    CLOSECLIPBOARD(0x1018);
    UIF_LOG(0x1018,0x2800,0,0);
    return 0x1d6;
  }
  lVar11 = GLOBALLOCK(0x1018,iVar4);
  iVar8 = (int)((ulong)lVar11 >> 0x10);
  uVar5 = (uint)lVar11;
  if (lVar11 == 0) goto LAB_1008_8144;
  uVar9 = *(uint *)(uVar5 + 0xe);
  if (uVar9 == 0x18) {
    local_12 = '\x04';
    if (*(int *)(uVar5 + 0x22) == 0 && *(int *)(uVar5 + 0x20) == 0) {
      local_c = 0;
    }
    else {
LAB_1008_822f:
      local_c = 0x100;
    }
  }
  else {
    if (0x18 < uVar9) {
LAB_1008_8199:
      GLOBALUNLOCK(0x1018,iVar4);
      CLOSECLIPBOARD(0x1018);
      UIF_LOG(0x1018,0x1800,0,0);
      return 0x1d7;
    }
    cVar2 = (char)uVar9;
    if (cVar2 == '\x01') {
      local_12 = '\0';
      local_c = 2;
    }
    else {
      if (cVar2 != '\x04') {
        if (cVar2 != '\b') goto LAB_1008_8199;
        local_12 = '\x01';
        goto LAB_1008_822f;
      }
      local_12 = '\x03';
      local_c = 0x10;
    }
  }
  uVar9 = (uint)(0xfff5 < local_c);
  uVar6 = FUN_1000_053e();
  iVar1 = uVar5 + uVar6;
  iVar10 = iVar8 + (uVar9 + CARRY2(uVar5,uVar6)) * 0x10;
  iVar7 = M007_GETSTATE(0x1000,0x83);
  if (iVar7 == 1) {
    Ordinal_2072(0x1018,0);
    EXPECTSTAGETIMEOUT(0x1018);
  }
  uVar12 = 0x1018;
  DAT_1010_1e56 = *(undefined2 *)(uVar5 + 4);
  DAT_1010_11d0 = *(undefined2 *)(uVar5 + 8);
  if (local_12 == '\0') {
    local_14 = FUN_1008_8618(*(undefined2 *)(uVar5 + 4),*(undefined2 *)(uVar5 + 6),iVar1,iVar10);
LAB_1008_8268:
    uVar12 = 0x1008;
  }
  else {
    if (local_12 == '\x01') {
      local_14 = FUN_1008_889a(*(undefined2 *)(uVar5 + 4),*(undefined2 *)(uVar5 + 6),iVar1,iVar10);
      local_16 = 0;
      do {
        iVar10 = local_16 * 4 + uVar5;
        iVar1 = local_16 * 3;
        *(undefined1 *)((int)(undefined2 *)&DAT_1010_1b56 + iVar1) = *(undefined1 *)(iVar10 + 0x2a);
        *(undefined1 *)((int)(undefined2 *)&DAT_1010_1b56 + iVar1 + 1) =
             *(undefined1 *)(iVar10 + 0x29);
        *(undefined1 *)((int)(undefined2 *)&DAT_1010_1b58 + iVar1) = *(undefined1 *)(iVar10 + 0x28);
        local_16 = local_16 + 1;
      } while (local_16 < 0x100);
    }
    else {
      if (local_12 == '\x03') {
        local_14 = FUN_1008_83be(*(undefined2 *)(uVar5 + 4),*(undefined2 *)(uVar5 + 6),iVar1,iVar10)
        ;
        goto LAB_1008_8268;
      }
      if (local_12 != '\x04') goto LAB_1008_8374;
      local_14 = FUN_1008_a24c(*(undefined2 *)(uVar5 + 4),*(undefined2 *)(uVar5 + 6),iVar1,iVar10);
      for (local_16 = 0; local_16 < 0x100; local_16 = local_16 + 1) {
        iVar8 = local_16 * 3;
        *(char *)((int)(undefined2 *)&DAT_1010_1b56 + iVar8) = ((byte)(local_16 >> 5) & 7) * '$';
        *(char *)((int)(undefined2 *)&DAT_1010_1b56 + iVar8 + 1) = ((byte)local_16 & 0x1c) * '\t';
        *(char *)((int)(undefined2 *)&DAT_1010_1b58 + iVar8) = ((byte)local_16 & 3) * 'U';
      }
    }
    uVar12 = 0x1018;
    OPLUT_LOAD(0x1008,(undefined2 *)&DAT_1010_1b56,0x1010,0x100,0);
  }
LAB_1008_8374:
  iVar8 = M007_GETSTATE(uVar12,0x83);
  if (iVar8 == 1) {
    Ordinal_2072(0x1018,1);
  }
  GLOBALUNLOCK(0x1018,iVar4);
  iVar4 = -0x7c6a;
  CLOSECLIPBOARD(0x1018);
  if (local_14 != 0) {
    iVar4 = local_14;
    UIF_LOG(0x1018,0x2800,0,0);
  }
  SETCURSOR(0x1018,uVar3,iVar4);
  return local_14;
}


// ---- FUN_1008_83be @ 1008:83be

/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined2 __cdecl16far FUN_1008_83be(byte param_1,int param_2,uint param_3,int param_4)

{
  byte *pbVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  undefined2 unaff_SS;
  bool bVar5;
  long lVar6;
  undefined2 uVar7;
  int local_2a;
  int local_28;
  int local_26;
  uint local_24;
  int local_22;
  uint local_20;
  undefined2 local_1e;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  long local_e;
  uint local_a;
  int local_8;
  uint local_6;
  int local_4;
  
  local_24 = FUN_1000_05b6(0x1010);
  local_22 = param_2;
  if ((param_1 & 7) != 0) {
    bVar5 = 0xfffe < local_24;
    local_24 = local_24 + 1;
    local_22 = param_2 + (uint)bVar5;
  }
  FUN_1000_0452(&local_24,unaff_SS,2);
  local_e = (ulong)DAT_1010_1e56 * (ulong)DAT_1010_11d0;
  local_20 = DAT_1010_11d0;
  if ((int)((ulong)local_e >> 0x10) != 0) {
    local_20 = (uint)(0xffff / (ulong)DAT_1010_1e56);
  }
  local_1e = 0;
  uVar7 = 0;
  local_10 = GLOBALALLOC(0x1000,0xffff,0);
  if (local_10 != 0) {
    local_14 = GLOBALLOCK(0x1018,local_10,uVar7);
    if (local_14 != 0) {
      DAT_1010_1b0d = 1;
      iVar3 = M007_GETSTATE(0x1018,0x83);
      if (iVar3 == 1) {
        Ordinal_536(0x1018,(undefined2 *)&DAT_1010_1b06,0x1010);
      }
      DAT_1010_1b61 = DAT_1010_1e58;
      DAT_1010_1b63 = 0;
      DAT_1010_1b64 = 1;
      DAT_1010_1b5c = DAT_1010_1e56;
      DAT_1010_1b5e = local_20;
      DAT_1010_1b58 = DAT_1010_1b44;
      DAT_1010_1b5a = DAT_1010_1b42;
      DAT_1010_1b69 = M007_GETSTATE(0x1018,99);
      local_2a = DAT_1010_1b5c * DAT_1010_1b5e;
      local_28 = DAT_1010_11d0 - 1;
      local_26 = 0;
      while (uVar7 = 0x1018, DAT_1010_11d0 != 0) {
        if (DAT_1010_11d0 < local_20) {
          DAT_1010_1b5e = DAT_1010_11d0;
          local_2a = DAT_1010_1b5c * DAT_1010_11d0;
          DAT_1010_11d0 = 0;
        }
        else {
          DAT_1010_11d0 = DAT_1010_11d0 - DAT_1010_1b5e;
        }
        local_4 = 0;
        for (local_6 = 0;
            (local_4 <= (int)DAT_1010_1b5e >> 0xf &&
            ((local_4 < (int)DAT_1010_1b5e >> 0xf || (local_6 < DAT_1010_1b5e))));
            local_6 = local_6 + 1) {
          uVar7 = 0x1000;
          lVar6 = FUN_1000_050c(local_28,local_26,local_24,local_22);
          local_1c = (byte *)CONCAT22((int)(lVar6 + (ulong)param_3 >> 0x10) * 0x10 + param_4,
                                      (byte *)(byte *)(lVar6 + (ulong)param_3));
          local_18 = (undefined1 *)
                     CONCAT22(local_14._2_2_,(undefined1 *)(local_6 * DAT_1010_1e56 + (int)local_14)
                             );
          bVar5 = local_28 == 0;
          local_28 = local_28 + -1;
          local_26 = local_26 - (uint)bVar5;
          local_8 = 0;
          for (local_a = 0;
              (puVar2 = local_18, pbVar1 = local_1c, local_8 <= (int)DAT_1010_1e56 >> 0xf &&
              ((local_8 < (int)DAT_1010_1e56 >> 0xf || (local_a < DAT_1010_1e56))));
              local_a = local_a + 1) {
            if ((local_a & 1) == 0) {
              uVar4 = *local_1c & 0xf;
            }
            else {
              if ((byte *)local_1c == (byte *)0xffff) {
                local_1c._2_2_ = local_1c._2_2_ + 0x68;
              }
              local_1c = (byte *)CONCAT22(local_1c._2_2_,(byte *)local_1c + 1);
              uVar4 = (uint)((char)*pbVar1 >> 4);
            }
            local_18 = (undefined1 *)CONCAT22(local_18._2_2_,(undefined1 *)local_18 + 1);
            *puVar2 = *(undefined1 *)(uVar4 + 0x10);
            local_8 = local_8 + (uint)(0xfffe < local_a);
          }
          local_4 = local_4 + (uint)(0xfffe < local_6);
        }
        iVar3 = M007_GETSTATE(uVar7,0x83);
        if (iVar3 == 1) {
          Ordinal_109(0x1018,0,local_2a,DAT_1010_1b06,DAT_1010_1b08,local_14);
          Ordinal_535(0x1018,(undefined2 *)&DAT_1010_1b56,0x1010);
        }
        DAT_1010_1b5a = DAT_1010_1b5a + local_20;
      }
      GLOBALUNLOCK(0x1018,local_10);
      GLOBALFREE(0x1018,local_10);
      return 0;
    }
    GLOBALFREE(0x1018,local_10);
  }
  return 0x1d2;
}


// ---- FUN_1008_8618 @ 1008:8618

/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined2 __cdecl16far FUN_1008_8618(uint param_1,int param_2,uint param_3,int param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined2 unaff_SS;
  bool bVar4;
  long lVar5;
  undefined2 uVar6;
  int local_2e;
  int local_2c;
  int local_2a;
  uint local_28;
  int local_26;
  uint local_24;
  int local_22;
  ulong local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  undefined4 local_e;
  uint local_a;
  int local_8;
  uint local_6;
  int local_4;
  
  uVar6 = 0x1010;
  iVar3 = param_2;
  local_24 = FUN_1000_05b6(0x1010);
  local_22 = iVar3;
  if ((param_1 & 7) != 0) {
    bVar4 = 0xfffe < local_24;
    local_24 = local_24 + 1;
    local_22 = iVar3 + (uint)bVar4;
  }
  local_28 = FUN_1000_05b6(uVar6);
  local_26 = param_2;
  if ((param_1 & 0x1f) != 0) {
    bVar4 = 0xfffe < local_28;
    local_28 = local_28 + 1;
    local_26 = param_2 + (uint)bVar4;
  }
  FUN_1000_0452(&local_28,unaff_SS,2);
  local_e = FUN_1000_050c(local_24,local_22,DAT_1010_11d0,0);
  if ((int)((ulong)local_e >> 0x10) == 0) {
    local_20 = (ulong)DAT_1010_11d0;
  }
  else {
    local_20 = FUN_1000_0472(0xffff,0,local_24,local_22);
  }
  uVar6 = 0;
  local_10 = GLOBALALLOC(0x1000,0xffff,0);
  if (local_10 != 0) {
    local_14 = GLOBALLOCK(0x1018,local_10,uVar6);
    if (local_14 != 0) {
      DAT_1010_1b0d = 1;
      iVar3 = M007_GETSTATE(0x1018,0x83);
      if (iVar3 == 1) {
        Ordinal_536(0x1018,(undefined2 *)&DAT_1010_1b06,0x1010);
      }
      DAT_1010_1b61 = DAT_1010_1e58;
      DAT_1010_1b63 = 2;
      DAT_1010_1b64 = 1;
      DAT_1010_1b5c = param_1;
      DAT_1010_1b5e = (uint)local_20;
      DAT_1010_1b58 = DAT_1010_1b44;
      DAT_1010_1b5a = DAT_1010_1b42;
      DAT_1010_1b67 = (undefined1)DAT_1010_1afe;
      DAT_1010_1b68 = DAT_1010_1b02;
      DAT_1010_1b69 = M007_GETSTATE(0x1018,99);
      local_2e = local_24 * DAT_1010_1b5e;
      local_2c = DAT_1010_11d0 - 1;
      local_2a = 0;
      while( true ) {
        uVar6 = 0x1018;
        if (DAT_1010_11d0 == 0) break;
        if (DAT_1010_11d0 < (uint)local_20) {
          DAT_1010_1b5e = DAT_1010_11d0;
          local_2e = DAT_1010_11d0 * local_24;
          DAT_1010_11d0 = 0;
        }
        else {
          DAT_1010_11d0 = DAT_1010_11d0 - DAT_1010_1b5e;
        }
        local_4 = 0;
        for (local_6 = 0;
            (local_4 <= (int)DAT_1010_1b5e >> 0xf &&
            ((local_4 < (int)DAT_1010_1b5e >> 0xf || (local_6 < DAT_1010_1b5e))));
            local_6 = local_6 + 1) {
          uVar6 = 0x1000;
          lVar5 = FUN_1000_050c(local_2c,local_2a,local_28,local_26);
          local_1c = (undefined1 *)
                     CONCAT22((int)(lVar5 + (ulong)param_3 >> 0x10) * 0x10 + param_4,
                              (undefined1 *)(undefined1 *)(lVar5 + (ulong)param_3));
          local_18 = (undefined1 *)
                     CONCAT22(local_14._2_2_,(undefined1 *)(local_24 * local_6 + (int)local_14));
          bVar4 = local_2c == 0;
          local_2c = local_2c + -1;
          local_2a = local_2a - (uint)bVar4;
          local_8 = 0;
          for (local_a = 0;
              (puVar2 = local_18, puVar1 = local_1c, local_8 <= local_22 &&
              ((local_8 < local_22 || (local_a < local_24)))); local_a = local_a + 1) {
            if ((undefined1 *)local_1c == (undefined1 *)0xffff) {
              local_1c._2_2_ = local_1c._2_2_ + 0x68;
            }
            local_1c = (undefined1 *)CONCAT22(local_1c._2_2_,(undefined1 *)local_1c + 1);
            local_18 = (undefined1 *)CONCAT22(local_18._2_2_,(undefined1 *)local_18 + 1);
            *puVar2 = *puVar1;
            local_8 = local_8 + (uint)(0xfffe < local_a);
          }
          local_4 = local_4 + (uint)(0xfffe < local_6);
        }
        iVar3 = M007_GETSTATE(uVar6,0x83);
        if (iVar3 == 1) {
          Ordinal_109(0x1018,0,local_2e,DAT_1010_1b06,DAT_1010_1b08,local_14);
          Ordinal_535(0x1018,(undefined2 *)&DAT_1010_1b56,0x1010);
        }
        DAT_1010_1b5a = DAT_1010_1b5a + (uint)local_20;
      }
      GLOBALUNLOCK(0x1018,local_10);
      GLOBALFREE(0x1018,local_10);
      return 0;
    }
    GLOBALFREE(0x1018,local_10);
  }
  return 0x1d2;
}


// ---- FUN_1008_889a @ 1008:889a

/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined2 __cdecl16far FUN_1008_889a(byte param_1,int param_2,uint param_3,int param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined2 unaff_SS;
  bool bVar4;
  long lVar5;
  undefined2 uVar6;
  uint local_2a;
  int local_28;
  int local_26;
  int local_24;
  int local_22;
  uint local_20;
  undefined2 local_1e;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  long local_e;
  uint local_a;
  int local_8;
  uint local_6;
  int local_4;
  
  local_2a = FUN_1000_05b6(0x1010);
  local_28 = param_2;
  if ((param_1 & 3) != 0) {
    bVar4 = 0xfffe < local_2a;
    local_2a = local_2a + 1;
    local_28 = param_2 + (uint)bVar4;
  }
  FUN_1000_0452(&local_2a,unaff_SS,2);
  local_e = (ulong)DAT_1010_1e56 * (ulong)DAT_1010_11d0;
  local_20 = DAT_1010_11d0;
  if ((int)((ulong)local_e >> 0x10) != 0) {
    local_20 = (uint)(0xffff / (ulong)DAT_1010_1e56);
  }
  local_1e = 0;
  uVar6 = 0;
  local_10 = GLOBALALLOC(0x1000,0xffff,0);
  if (local_10 != 0) {
    local_14 = GLOBALLOCK(0x1018,local_10,uVar6);
    if (local_14 != 0) {
      DAT_1010_1b0d = 1;
      iVar3 = M007_GETSTATE(0x1018,0x83);
      if (iVar3 == 1) {
        Ordinal_536(0x1018,(undefined2 *)&DAT_1010_1b06,0x1010);
      }
      DAT_1010_1b61 = DAT_1010_1e58;
      DAT_1010_1b63 = 0;
      DAT_1010_1b64 = 1;
      DAT_1010_1b5c = DAT_1010_1e56;
      DAT_1010_1b5e = local_20;
      DAT_1010_1b58 = DAT_1010_1b44;
      DAT_1010_1b5a = DAT_1010_1b42;
      DAT_1010_1b69 = M007_GETSTATE(0x1018,99);
      local_26 = DAT_1010_1b5c * DAT_1010_1b5e;
      local_24 = DAT_1010_11d0 - 1;
      local_22 = 0;
      while (uVar6 = 0x1018, DAT_1010_11d0 != 0) {
        if (DAT_1010_11d0 < local_20) {
          DAT_1010_1b5e = DAT_1010_11d0;
          local_26 = DAT_1010_1b5c * DAT_1010_11d0;
          DAT_1010_11d0 = 0;
        }
        else {
          DAT_1010_11d0 = DAT_1010_11d0 - DAT_1010_1b5e;
        }
        local_4 = 0;
        for (local_6 = 0;
            (local_4 <= (int)DAT_1010_1b5e >> 0xf &&
            ((local_4 < (int)DAT_1010_1b5e >> 0xf || (local_6 < DAT_1010_1b5e))));
            local_6 = local_6 + 1) {
          uVar6 = 0x1000;
          lVar5 = FUN_1000_050c(local_2a,local_28,local_24,local_22);
          local_1c = (undefined1 *)
                     CONCAT22((int)(lVar5 + (ulong)param_3 >> 0x10) * 0x10 + param_4,
                              (undefined1 *)(undefined1 *)(lVar5 + (ulong)param_3));
          local_18 = (undefined1 *)
                     CONCAT22(local_14._2_2_,(undefined1 *)(local_6 * DAT_1010_1e56 + (int)local_14)
                             );
          bVar4 = local_24 == 0;
          local_24 = local_24 + -1;
          local_22 = local_22 - (uint)bVar4;
          local_8 = 0;
          for (local_a = 0;
              (puVar2 = local_18, puVar1 = local_1c, local_8 <= (int)DAT_1010_1e56 >> 0xf &&
              ((local_8 < (int)DAT_1010_1e56 >> 0xf || (local_a < DAT_1010_1e56))));
              local_a = local_a + 1) {
            if ((undefined1 *)local_1c == (undefined1 *)0xffff) {
              local_1c._2_2_ = local_1c._2_2_ + 0x68;
            }
            local_1c = (undefined1 *)CONCAT22(local_1c._2_2_,(undefined1 *)local_1c + 1);
            local_18 = (undefined1 *)CONCAT22(local_18._2_2_,(undefined1 *)local_18 + 1);
            *puVar2 = *puVar1;
            local_8 = local_8 + (uint)(0xfffe < local_a);
          }
          local_4 = local_4 + (uint)(0xfffe < local_6);
        }
        iVar3 = M007_GETSTATE(uVar6,0x83);
        if (iVar3 == 1) {
          Ordinal_109(0x1018,0,local_26,DAT_1010_1b06,DAT_1010_1b08,local_14);
          Ordinal_535(0x1018,(undefined2 *)&DAT_1010_1b56,0x1010);
        }
        DAT_1010_1b5a = DAT_1010_1b5a + local_20;
      }
      GLOBALUNLOCK(0x1018,local_10);
      GLOBALFREE(0x1018,local_10);
      return 0;
    }
    GLOBALFREE(0x1018,local_10);
  }
  return 0x1d2;
}


// ---- FUN_1008_8ada @ 1008:8ada

/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined2 __cdecl16far FUN_1008_8ada(undefined2 param_1)

{
  byte *pbVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined2 *puVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined2 unaff_CS;
  bool bVar13;
  undefined2 *puVar14;
  ulong uVar15;
  long lVar16;
  undefined2 uVar17;
  undefined2 uVar18;
  byte local_48;
  byte local_46;
  uint local_3c;
  uint local_3a;
  int local_38;
  int local_36;
  int local_34;
  undefined4 local_24;
  undefined4 local_20;
  uint local_10;
  int local_e;
  uint local_c;
  int local_a;
  uint local_8;
  int local_6;
  uint local_4;
  
  uVar9 = DAT_1010_11d0;
  uVar18 = 0x1010;
  uVar4 = DAT_1010_1e56 / DAT_1010_0028;
  uVar5 = DAT_1010_11d0 / DAT_1010_0028;
  local_4 = DAT_1010_11d0;
  local_3a = DAT_1010_1e56 >> 3;
  if ((DAT_1010_1e56 & 7) != 0) {
    local_3a = local_3a + 1;
  }
  local_3c = uVar4 >> 5;
  if ((uVar4 & 0x1f) != 0) {
    local_3c = local_3c + 1;
  }
  local_3c = local_3c << 2;
  uVar17 = 0;
  iVar6 = GLOBALALLOC(unaff_CS,(ulong)local_3c * (ulong)uVar5 + 0x30);
  if (iVar6 != 0) {
    puVar14 = (undefined2 *)GLOBALLOCK(0x1018,iVar6,uVar17,uVar18);
    iVar11 = (int)((ulong)puVar14 >> 0x10);
    puVar7 = (undefined2 *)puVar14;
    if (puVar14 != (undefined2 *)0x0) {
      if ((int)((ulong)DAT_1010_1e56 * (ulong)DAT_1010_11d0 >> 0x10) != 0) {
        uVar9 = (uint)(((0xffff / (ulong)DAT_1010_1e56) / (ulong)DAT_1010_0028) *
                      (ulong)DAT_1010_0028);
      }
      uVar18 = 0;
      iVar8 = GLOBALALLOC(0x1018,0xffff,0);
      if (iVar8 == 0) {
        GLOBALUNLOCK(0x1018,iVar6);
      }
      else {
        uVar15 = GLOBALLOCK(0x1018,iVar8,uVar18);
        iVar12 = (int)(uVar15 >> 0x10);
        if (uVar15 != 0) {
          *puVar14 = 0x28;
          puVar7[1] = 0;
          puVar7[2] = uVar4;
          puVar7[3] = 0;
          puVar7[4] = uVar5;
          puVar7[5] = 0;
          puVar7[6] = 1;
          puVar7[7] = 1;
          puVar7[9] = 0;
          puVar7[8] = 0;
          puVar7[0xb] = 0;
          puVar7[10] = 0;
          puVar7[0xd] = 0;
          puVar7[0xc] = 0;
          puVar7[0xf] = 0;
          puVar7[0xe] = 0;
          puVar7[0x11] = 0;
          puVar7[0x10] = 0;
          puVar7[0x13] = 0;
          puVar7[0x12] = 0;
          *(undefined1 *)(puVar7 + 0x15) = 0;
          *(undefined1 *)((int)puVar7 + 0x29) = 0;
          *(undefined1 *)(puVar7 + 0x14) = 0;
          *(undefined1 *)(puVar7 + 0x17) = 0xff;
          *(undefined1 *)((int)puVar7 + 0x2d) = 0xff;
          *(undefined1 *)(puVar7 + 0x16) = 0xff;
          iVar11 = iVar11 + (-(uint)((undefined2 *)0xffcf < puVar7) & 0x68);
          DAT_1010_1b0b = DAT_1010_1e58;
          DAT_1010_1b0c = DAT_1010_1e6e;
          DAT_1010_1b0a = 3;
          DAT_1010_1b0d = 0;
          DAT_1010_1b0e = 3;
          iVar10 = M007_GETSTATE(0x1018,0x83);
          if (iVar10 == 1) {
            Ordinal_536(0x1018,(undefined2 *)&DAT_1010_1b06,0x1010);
          }
          DAT_1010_1b61 = DAT_1010_1e58;
          DAT_1010_1b62 = DAT_1010_1e6e;
          DAT_1010_1b60 = 3;
          DAT_1010_1b63 = 2;
          DAT_1010_1b64 = 0;
          DAT_1010_1b5c = DAT_1010_1e56;
          DAT_1010_1b58 = DAT_1010_1b44;
          DAT_1010_1b5a = DAT_1010_1b42;
          DAT_1010_1b65 = DAT_1010_1b04;
          DAT_1010_1b6a = DAT_1010_1e62;
          DAT_1010_1b6b = DAT_1010_1b55;
          DAT_1010_1b6c = DAT_1010_12ec;
          uVar18 = 0x1018;
          DAT_1010_1b5e = uVar9;
          DAT_1010_1b69 = M007_GETSTATE(0x1018,99);
          local_34 = local_3a * DAT_1010_1b5e;
          local_38 = uVar5 - 1;
          local_36 = 0;
          for (; local_4 != 0; local_4 = local_4 - DAT_1010_1b5e) {
            if (local_4 < uVar9) {
              DAT_1010_1b5e = local_4;
              local_34 = local_4 * local_3a;
            }
            iVar10 = M007_GETSTATE(uVar18,0x83);
            if (iVar10 == 1) {
              Ordinal_535(0x1018,(undefined2 *)&DAT_1010_1b56,0x1010);
              Ordinal_105(0x1018,0,local_34,uVar15,DAT_1010_1b06,DAT_1010_1b08);
            }
            uVar18 = 0x1018;
            if (DAT_1010_0028 == 1) {
              local_6 = 0;
              for (local_8 = 0;
                  (local_6 <= (int)DAT_1010_1b5e >> 0xf &&
                  ((local_6 < (int)DAT_1010_1b5e >> 0xf || (local_8 < DAT_1010_1b5e))));
                  local_8 = local_8 + 1) {
                lVar16 = FUN_1000_050c(local_3a,0,local_8,local_6);
                puVar2 = (undefined1 *)(lVar16 + (uVar15 & 0xffff));
                local_24 = (byte *)CONCAT22((int)((ulong)puVar2 >> 0x10) * 0x10 + iVar12,
                                            (undefined1 *)puVar2);
                uVar18 = 0x1000;
                lVar16 = FUN_1000_050c(local_3c,0,local_38,local_36);
                puVar2 = (undefined1 *)(lVar16 + ZEXT24(puVar7 + 0x18));
                local_20 = (byte *)CONCAT22((int)((ulong)puVar2 >> 0x10) * 0x10 + iVar11,
                                            (undefined1 *)puVar2);
                bVar13 = local_38 == 0;
                local_38 = local_38 + -1;
                local_36 = local_36 - (uint)bVar13;
                local_a = 0;
                for (local_c = 0;
                    (puVar3 = local_20, puVar2 = local_24, local_a < 1 &&
                    ((local_a < 0 || (local_c < local_3a)))); local_c = local_c + 1) {
                  if ((byte *)local_24 == (undefined1 *)0xffff) {
                    local_24._2_2_ = local_24._2_2_ + 0x68;
                  }
                  local_24 = (byte *)CONCAT22(local_24._2_2_,(byte *)local_24 + 1);
                  if ((byte *)local_20 == (undefined1 *)0xffff) {
                    local_20._2_2_ = local_20._2_2_ + 0x68;
                  }
                  local_20 = (byte *)CONCAT22(local_20._2_2_,(byte *)local_20 + 1);
                  *puVar3 = *puVar2;
                  local_a = local_a + (uint)(0xfffe < local_c);
                }
                local_6 = local_6 + (uint)(0xfffe < local_8);
              }
            }
            else {
              local_6 = 0;
              for (local_8 = 0;
                  (local_6 <= (int)DAT_1010_1b5e >> 0xf &&
                  ((local_6 < (int)DAT_1010_1b5e >> 0xf || (local_8 < DAT_1010_1b5e))));
                  local_8 = local_8 + DAT_1010_0028) {
                lVar16 = FUN_1000_050c(local_3a,0,local_8,local_6);
                pbVar1 = (byte *)(lVar16 + (uVar15 & 0xffff));
                local_24 = (byte *)CONCAT22((int)((ulong)pbVar1 >> 0x10) * 0x10 + iVar12,
                                            (byte *)pbVar1);
                uVar18 = 0x1000;
                lVar16 = FUN_1000_050c(local_3c,0,local_38,local_36);
                pbVar1 = (byte *)(lVar16 + ZEXT24(puVar7 + 0x18));
                local_20 = (byte *)CONCAT22((int)((ulong)pbVar1 >> 0x10) * 0x10 + iVar11,
                                            (byte *)pbVar1);
                bVar13 = local_38 == 0;
                local_38 = local_38 + -1;
                local_36 = local_36 - (uint)bVar13;
                local_46 = 0x80;
                local_48 = 0x80;
                local_a = 0;
                for (local_c = 0;
                    (local_a <= (int)uVar4 >> 0xf &&
                    ((local_a < (int)uVar4 >> 0xf || (local_c < uVar4)))); local_c = local_c + 1) {
                  if ((local_48 & *local_24) == 0) {
                    *local_20 = *local_20 & ~local_46;
                  }
                  else {
                    *local_20 = *local_20 | local_46;
                  }
                  local_46 = local_46 >> 1;
                  if (local_46 == 0) {
                    local_20 = (byte *)CONCAT22(local_20._2_2_ +
                                                (-(uint)((byte *)0xfffe < (byte *)local_20) & 0x68),
                                                (byte *)local_20 + 1);
                    local_46 = 0x80;
                  }
                  local_e = 0;
                  for (local_10 = 0;
                      (local_e <= (int)DAT_1010_0028 >> 0xf &&
                      ((local_e < (int)DAT_1010_0028 >> 0xf || (local_10 < DAT_1010_0028))));
                      local_10 = local_10 + 1) {
                    local_48 = local_48 >> 1;
                    if (local_48 == 0) {
                      local_24 = (byte *)CONCAT22(local_24._2_2_ +
                                                  (-(uint)((byte *)0xfffe < (byte *)local_24) & 0x68
                                                  ),(byte *)local_24 + 1);
                      local_48 = 0x80;
                    }
                    local_e = local_e + (uint)(0xfffe < local_10);
                  }
                  local_a = local_a + (uint)(0xfffe < local_c);
                }
                local_6 = local_6 + ((int)DAT_1010_0028 >> 0xf) +
                          (uint)CARRY2(local_8,DAT_1010_0028);
              }
            }
            DAT_1010_1b5a = DAT_1010_1b5a + uVar9;
          }
          GLOBALUNLOCK(uVar18,iVar6);
          iVar11 = OPENCLIPBOARD(0x1018,param_1);
          if (iVar11 != 0) {
            EMPTYCLIPBOARD(0x1018);
            uVar18 = 8;
            SETCLIPBOARDDATA(0x1018,iVar6);
            CLOSECLIPBOARD(0x1018,uVar18);
            GLOBALUNLOCK(0x1018,iVar8);
            GLOBALFREE(0x1018,iVar8);
            return 0;
          }
          GLOBALFREE(0x1018,iVar6);
          GLOBALUNLOCK(0x1018,iVar8);
          GLOBALFREE(0x1018,iVar8);
          return 0x1d4;
        }
        GLOBALUNLOCK(0x1018,iVar6);
        GLOBALFREE(0x1018,iVar6);
        iVar6 = iVar8;
      }
    }
    GLOBALFREE(0x1018,iVar6);
  }
  return 0x1d2;
}


// ---- FUN_1008_8fd2 @ 1008:8fd2

/* WARNING: Removing unreachable block (ram,0x100891e9) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl16far FUN_1008_8fd2(undefined2 *param_1)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  char cVar5;
  byte bVar6;
  undefined2 uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  undefined2 *puVar14;
  uint *puVar15;
  uint uVar16;
  undefined2 uVar17;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  bool bVar18;
  undefined4 uVar19;
  long lVar20;
  int iVar21;
  int iVar22;
  undefined2 uVar23;
  undefined2 uVar24;
  int local_58;
  uint local_56;
  uint local_4c;
  uint local_4a;
  uint local_48;
  byte local_44;
  undefined4 local_40;
  undefined4 local_3c;
  byte *local_38;
  int local_36;
  byte *local_34;
  int local_32;
  uint local_30;
  uint local_22;
  int local_1a [5];
  int local_10;
  int local_e;
  undefined4 local_c;
  int local_8;
  int local_6;
  int local_4;
  
  uVar24 = 0x1010;
  local_6 = 0;
  uVar17 = (undefined2)((ulong)param_1 >> 0x10);
  puVar14 = (undefined2 *)param_1;
  iVar1 = puVar14[8];
  iVar2 = puVar14[4];
  iVar13 = puVar14[5];
  iVar22 = puVar14[6];
  iVar21 = puVar14[7];
  local_4 = 0;
  uVar23 = 0;
  uVar7 = LOADCURSOR(unaff_CS,0x7f02,0);
  uVar7 = SETCURSOR(0x1018,uVar7,uVar23,uVar24);
  local_30 = puVar14[9];
  if (local_30 == 0) {
    local_30 = 1;
  }
  DAT_1010_1e58 = -(puVar14[2] == 0) & 3;
  DAT_1010_1e6e = -(puVar14[3] == 0) & 3;
  DAT_1010_12e2 = 3;
  DAT_1010_11d0 = -(iVar13 - iVar21);
  DAT_1010_1e56 = -(iVar2 - iVar22);
  _DAT_1010_1b04 = (uint)(puVar14[10] != 0);
  uVar17 = puVar14[1];
  DAT_1010_1b42 = iVar13;
  DAT_1010_1b44 = iVar2;
  local_8 = _LOPEN(0x1018,0,*param_1);
  if (local_8 == -1) {
    UIF_LOG(0x1018,0x2000,0,0);
    return 0;
  }
  uVar23 = 2;
  local_4 = GLOBALALLOC(0x1018,0x428,0);
  local_c = (uint *)GLOBALLOCK(0x1018,local_4,uVar23,uVar17);
  iVar22 = -0x6f25;
  iVar21 = local_8;
  iVar8 = _LREAD(0x1018,0xe,local_1a,unaff_SS);
  if ((iVar8 == -1) || (local_1a[0] != 0x4d42)) {
LAB_1008_90fe:
    uVar17 = 0x1018;
  }
  else {
    iVar22 = 0x1018;
    uVar17 = 0x1018;
    iVar8 = local_8;
    iVar9 = _LREAD(0x1018,0x28,(uint *)local_c,local_c._2_2_);
    if (iVar9 == -1) goto LAB_1008_90fe;
    uVar23 = (undefined2)((ulong)local_c >> 0x10);
    puVar15 = (uint *)local_c;
    if ((*local_c != 0xc) || (puVar15[1] != 0)) {
      local_22 = puVar15[0x10];
      if ((local_22 == 0) && (puVar15[7] != 0x18)) {
        local_22 = 1 << ((byte)puVar15[7] & 0x1f);
      }
      if (puVar15[0xb] == 0 && puVar15[10] == 0) {
        uVar10 = puVar15[5];
        uVar12 = puVar15[4];
        uVar19 = FUN_1000_050c(puVar15[7],0,puVar15[2],puVar15[3]);
        iVar22 = (int)((ulong)uVar19 >> 0x10) + (uint)(0xffe0 < (uint)uVar19);
        uVar23 = FUN_1000_05b6(uVar12,uVar10,iVar8,iVar21);
        uVar17 = 0x1000;
        uVar19 = FUN_1000_050c(uVar23,iVar22,uVar12,uVar10);
        uVar23 = (undefined2)((ulong)local_c >> 0x10);
        ((uint *)local_c)[10] = (uint)uVar19;
        ((uint *)local_c)[0xb] = (uint)((ulong)uVar19 >> 0x10);
      }
      GLOBALUNLOCK(uVar17,local_4);
      uVar17 = (undefined2)((ulong)local_c >> 0x10);
      puVar15 = (uint *)local_c;
      uVar10 = local_22 * 4 + puVar15[10];
      iVar22 = GLOBALREALLOC(0x1018,0,uVar10 + *local_c,
                             puVar15[0xb] + (uint)CARRY2(local_22 * 4,puVar15[10]) + puVar15[1] +
                             (uint)CARRY2(uVar10,*local_c));
      if (iVar22 == 0) goto LAB_1008_93e2;
      iVar21 = local_4;
      local_4 = iVar22;
      local_c = (uint *)GLOBALLOCK(0x1018,iVar22,iVar21);
      uVar23 = 0x1018;
      iVar22 = local_8;
      _LREAD(0x1018,local_22 * 4,(int)(uint *)local_c + *local_c,(int)((ulong)local_c >> 0x10));
      uVar10 = local_22 * 4 + *local_c;
      if (local_e != 0 || local_10 != 0) {
        uVar23 = 0x1000;
        FUN_1000_01f2(0x1018,local_8,local_10,local_e,0,iVar22);
      }
      uVar17 = 0x1018;
      iVar21 = local_8;
      lVar20 = _HREAD(uVar23,((uint *)local_c)[10],((uint *)local_c)[0xb],
                      (int)(uint *)local_c + uVar10,local_c._2_2_);
      if (lVar20 != -1) {
        local_6 = 1;
        if (1 < local_30) {
          GLOBALUNLOCK(0x1018,local_4,iVar21);
          FUN_1008_98f4(local_4,local_30,0,0);
          local_c = (uint *)GLOBALLOCK(0x1008,local_4);
        }
        uVar17 = 0x1018;
        if ((iVar2 < 0) || (iVar13 < 0)) {
          local_56 = 0;
          local_58 = 0;
          if (iVar2 < 0) {
            if ((int)(iVar2 + DAT_1010_1e56) < 1) goto LAB_1008_93d2;
            uVar17 = 0x1000;
            local_56 = FUN_1000_0418(iVar2);
            DAT_1010_1b44 = 0;
          }
          if (iVar13 < 0) {
            if ((int)(iVar13 + DAT_1010_11d0) < 1) goto LAB_1008_93d2;
            local_58 = FUN_1000_0418(iVar13);
            DAT_1010_1b42 = 0;
          }
          local_38 = (byte *)(uVar10 + (int)(uint *)local_c);
          local_36 = (uint)CARRY2(uVar10,(uint)(uint *)local_c) * 0x10 + local_c._2_2_;
          uVar11 = (((uint *)local_c)[7] * DAT_1010_1e56 + 0x1f & 0xffe7) >> 3;
          iVar2 = ((uint *)local_c)[7] * DAT_1010_1e56;
          DAT_1010_1e56 = DAT_1010_1e56 - local_56;
          ((uint *)local_c)[2] = DAT_1010_1e56;
          ((uint *)local_c)[3] = 0;
          DAT_1010_11d0 = DAT_1010_11d0 - local_58;
          ((uint *)local_c)[4] = DAT_1010_11d0;
          ((uint *)local_c)[5] = 0;
          uVar10 = ((uint *)local_c)[5];
          uVar12 = ((uint *)local_c)[4];
          uVar19 = FUN_1000_050c(((uint *)local_c)[7],0,((uint *)local_c)[2],((uint *)local_c)[3]);
          iVar13 = (int)((ulong)uVar19 >> 0x10) + (uint)(0xffe0 < (uint)uVar19);
          uVar23 = FUN_1000_05b6(uVar12,uVar10);
          uVar17 = 0x1000;
          uVar19 = FUN_1000_050c(uVar23,iVar13,uVar12,uVar10);
          uVar23 = (undefined2)((ulong)local_c >> 0x10);
          puVar15 = (uint *)local_c;
          puVar15[10] = (uint)uVar19;
          puVar15[0xb] = (uint)((ulong)uVar19 >> 0x10);
          uVar12 = (puVar15[2] * puVar15[7] + 0x1f & 0xffe7) >> 3;
          uVar10 = puVar15[7];
          local_34 = local_38;
          local_32 = local_36;
          if (uVar10 == 0x18) {
            local_4c = 0;
            while( true ) {
              if (((int)puVar15[5] < (int)local_4c >> 0xf) ||
                 (((int)puVar15[5] <= (int)local_4c >> 0xf && (puVar15[4] <= local_4c)))) break;
              uVar10 = local_56 * 3;
              local_3c = (byte *)CONCAT22((((int)uVar10 >> 0xf) +
                                          (uint)CARRY2(uVar10,(uint)local_38)) * 0x10 + local_36,
                                          local_38 + uVar10);
              local_40 = (byte *)CONCAT22(local_32,local_34);
              for (local_4a = 0; (int)local_4a < iVar2; local_4a = local_4a + 0x18) {
                *local_40 = *local_3c;
                ((byte *)local_40)[1] = ((byte *)local_3c)[1];
                ((byte *)local_40)[2] = ((byte *)local_3c)[2];
                local_3c = (byte *)CONCAT22(local_3c._2_2_ +
                                            (-(uint)((byte *)0xfffc < (byte *)local_3c) & 0x68),
                                            (byte *)local_3c + 3);
                local_40 = (byte *)CONCAT22(local_40._2_2_ +
                                            (-(uint)((byte *)0xfffc < (byte *)local_40) & 0x68),
                                            (byte *)local_40 + 3);
              }
              bVar18 = CARRY2((uint)local_38,uVar11);
              local_38 = local_38 + uVar11;
              local_36 = local_36 + (uint)bVar18 * 0x10;
              bVar18 = CARRY2((uint)local_34,uVar12);
              local_34 = local_34 + uVar12;
              local_32 = local_32 + (uint)bVar18 * 0x10;
              local_4c = local_4c + 1;
            }
          }
          else if (uVar10 < 0x19) {
            cVar5 = (char)uVar10;
            if (cVar5 == '\x01') {
              local_4c = 0;
              while( true ) {
                if (((int)puVar15[5] < (int)local_4c >> 0xf) ||
                   (((int)puVar15[5] <= (int)local_4c >> 0xf && (puVar15[4] <= local_4c)))) break;
                local_44 = 0;
                local_4a = 0;
                local_48 = 0;
                local_40 = (byte *)CONCAT22(local_32,local_34);
                while (pbVar3 = local_40, (int)local_4a < iVar2) {
                  iVar13 = local_48 + ((int)local_48 >> 0xf & 7U);
                  uVar10 = iVar13 >> 3;
                  iVar13 = iVar13 >> 0xf;
                  if (iVar2 < (int)(local_48 + 0x10)) {
                    if ((int)(local_48 + 8) <= iVar2) {
                      bVar6 = local_38[uVar10];
                      uVar10 = ((int)(iVar2 + (iVar2 >> 0xf & 7U)) >> 3) - 1;
                      goto LAB_1008_9442;
                    }
                    iVar13 = (int)(iVar2 + (iVar2 >> 0xf & 7U)) >> 3;
                    uVar10 = iVar13 - 1;
                    uVar16 = (uint)local_38[uVar10];
                    uVar10 = iVar13 - 2;
                    uVar10 = (uint)local_38[uVar10] << 8;
                  }
                  else {
                    bVar6 = local_38[uVar10];
                    uVar10 = uVar10 + 1;
LAB_1008_9442:
                    uVar16 = (uint)bVar6 << 8;
                    uVar10 = (uint)local_38[uVar10];
                  }
                  local_44 = local_44 << 1 |
                             (byte)(((uVar16 | uVar10) << ((byte)((int)local_48 % 8) & 0x1f)) >> 0xf
                                   );
                  local_48 = local_48 + 1;
                  local_4a = local_4a + 1;
                  if (((local_4a & 7) == 0) && ((int)local_56 <= (int)local_4a)) {
                    if ((byte *)local_40 == (byte *)0xffff) {
                      local_40._2_2_ = local_40._2_2_ + 0x68;
                    }
                    local_40 = (byte *)CONCAT22(local_40._2_2_,(byte *)local_40 + 1);
                    *pbVar3 = local_44;
                    local_44 = 0;
                  }
                }
                if ((local_4a & 7) != 0) {
                  *local_40 = local_44 << (8U - (char)((int)local_4a % 8) & 0x1f);
                }
                bVar18 = CARRY2((uint)local_38,uVar11);
                local_38 = local_38 + uVar11;
                local_36 = local_36 + (uint)bVar18 * 0x10;
                bVar18 = CARRY2((uint)local_34,uVar12);
                local_34 = local_34 + uVar12;
                local_32 = local_32 + (uint)bVar18 * 0x10;
                local_4c = local_4c + 1;
              }
            }
            else if (cVar5 == '\x04') {
              local_4c = 0;
              while( true ) {
                if (((int)puVar15[5] < (int)local_4c >> 0xf) ||
                   (((int)puVar15[5] <= (int)local_4c >> 0xf && (puVar15[4] <= local_4c)))) break;
                local_44 = 0;
                local_4a = 0;
                local_48 = 0;
                local_40 = (byte *)CONCAT22(local_32,local_34);
                while (pbVar3 = local_40, (int)local_4a < iVar2) {
                  iVar13 = local_48 + ((int)local_48 >> 0xf & 7U);
                  uVar10 = iVar13 >> 3;
                  iVar13 = iVar13 >> 0xf;
                  if ((local_48 & 7) == 0) {
                    if ((local_4a & 7) == 0) {
                      bVar6 = local_38[uVar10] & 0xf0;
                    }
                    else {
                      bVar6 = local_38[uVar10] >> 4;
                    }
                  }
                  else if ((local_4a & 7) == 0) {
                    bVar6 = local_38[uVar10] << 4;
                  }
                  else {
                    bVar6 = local_38[uVar10] & 0xf;
                  }
                  local_44 = local_44 | bVar6;
                  local_48 = local_48 + 4;
                  local_4a = local_4a + 4;
                  if (((local_4a & 7) == 0) && ((int)local_56 <= (int)local_4a)) {
                    if ((byte *)local_40 == (byte *)0xffff) {
                      local_40._2_2_ = local_40._2_2_ + 0x68;
                    }
                    local_40 = (byte *)CONCAT22(local_40._2_2_,(byte *)local_40 + 1);
                    *pbVar3 = local_44;
                    local_44 = 0;
                  }
                }
                if ((local_4a & 7) != 0) {
                  *local_40 = local_44 << 4;
                }
                bVar18 = CARRY2((uint)local_38,uVar11);
                local_38 = local_38 + uVar11;
                local_36 = local_36 + (uint)bVar18 * 0x10;
                bVar18 = CARRY2((uint)local_34,uVar12);
                local_34 = local_34 + uVar12;
                local_32 = local_32 + (uint)bVar18 * 0x10;
                local_4c = local_4c + 1;
              }
            }
            else if (cVar5 == '\b') {
              local_4c = 0;
              while( true ) {
                if (((int)puVar15[5] < (int)local_4c >> 0xf) ||
                   (((int)puVar15[5] <= (int)local_4c >> 0xf && (puVar15[4] <= local_4c)))) break;
                local_3c = (byte *)CONCAT22((((int)local_56 >> 0xf) +
                                            (uint)CARRY2(local_56,(uint)local_38)) * 0x10 + local_36
                                            ,local_38 + local_56);
                local_40 = (byte *)CONCAT22(local_32,local_34);
                for (local_4a = local_56 << 3; pbVar4 = local_3c, pbVar3 = local_40,
                    (int)local_4a < iVar2; local_4a = local_4a + 8) {
                  if ((byte *)local_3c == (byte *)0xffff) {
                    local_3c._2_2_ = local_3c._2_2_ + 0x68;
                  }
                  local_3c = (byte *)CONCAT22(local_3c._2_2_,(byte *)local_3c + 1);
                  if ((byte *)local_40 == (byte *)0xffff) {
                    local_40._2_2_ = local_40._2_2_ + 0x68;
                  }
                  local_40 = (byte *)CONCAT22(local_40._2_2_,(byte *)local_40 + 1);
                  *pbVar3 = *pbVar4;
                }
                bVar18 = CARRY2((uint)local_38,uVar11);
                local_38 = local_38 + uVar11;
                local_36 = local_36 + (uint)bVar18 * 0x10;
                bVar18 = CARRY2((uint)local_34,uVar12);
                local_34 = local_34 + uVar12;
                local_32 = local_32 + (uint)bVar18 * 0x10;
                local_4c = local_4c + 1;
              }
            }
          }
        }
        if (iVar1 == 0) {
          uVar23 = (undefined2)((ulong)local_c >> 0x10);
          puVar15 = (uint *)local_c;
          puVar15[0x11] = 0;
          puVar15[0x10] = 0;
          puVar15[0x13] = 0;
          puVar15[0x12] = 0;
        }
      }
    }
  }
LAB_1008_93d2:
  _LCLOSE(uVar17,local_8,iVar22);
  GLOBALUNLOCK(0x1018,local_4);
  iVar22 = local_4;
LAB_1008_93e2:
  local_4 = iVar22;
  SETCURSOR(0x1018,uVar7);
  if (local_6 == 0) {
    return 0;
  }
  return local_4;
}


// ---- FUN_1008_98f4 @ 1008:98f4

undefined2 __cdecl16far FUN_1008_98f4(undefined2 param_1,uint param_2,int param_3,int param_4)

{
  byte *pbVar1;
  char cVar2;
  byte bVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  undefined2 uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  bool bVar17;
  int *piVar18;
  undefined4 uVar19;
  long lVar20;
  int iVar21;
  undefined2 uVar22;
  int local_36;
  uint local_20;
  uint local_1e;
  uint local_1c;
  byte local_18;
  undefined4 local_14;
  undefined4 local_10;
  byte *local_c;
  int local_a;
  byte *local_8;
  int local_6;
  undefined2 local_4;
  
  uVar22 = 0x1010;
  local_4 = 1;
  local_36 = 0;
  uVar7 = param_1;
  piVar18 = (int *)GLOBALLOCK();
  iVar13 = (int)((ulong)piVar18 >> 0x10);
  piVar4 = (int *)piVar18;
  iVar5 = piVar4[0x10];
  if ((iVar5 == 0) && (piVar4[7] != 0x18)) {
    iVar5 = 1 << (*(byte *)(piVar4 + 7) & 0x1f);
  }
  uVar6 = iVar5 * 4 + *piVar18;
  local_c = (byte *)(uVar6 + (int)piVar4);
  local_a = (uint)CARRY2(uVar6,(uint)piVar4) * 0x10 + iVar13;
  piVar4[2] = DAT_1010_1e56 / param_2;
  piVar4[3] = 0;
  piVar4[4] = DAT_1010_11d0 / param_2;
  piVar4[5] = 0;
  iVar5 = piVar4[5];
  iVar21 = piVar4[4];
  uVar19 = FUN_1000_050c(piVar4[7],0,piVar4[2],piVar4[3]);
  iVar14 = (int)((ulong)uVar19 >> 0x10) + (uint)(0xffe0 < (uint)uVar19);
  uVar7 = FUN_1000_05b6(iVar21,iVar5,uVar7,uVar22);
  uVar22 = 0x1000;
  uVar19 = FUN_1000_050c(uVar7,iVar14,iVar21,iVar5);
  piVar4[10] = (int)uVar19;
  piVar4[0xb] = (int)((ulong)uVar19 >> 0x10);
  iVar15 = piVar4[2];
  iVar11 = piVar4[7];
  uVar8 = (iVar11 * DAT_1010_1e56 + 0x1f & 0xffe7) >> 3;
  uVar9 = (iVar15 * iVar11 + 0x1fU & 0xffe7) >> 3;
  iVar10 = iVar11 * DAT_1010_1e56;
  iVar11 = iVar15 * iVar11;
  DAT_1010_11d0 = piVar4[4];
  uVar12 = piVar4[7];
  DAT_1010_1e56 = iVar15;
  local_8 = local_c;
  local_6 = local_a;
  if (uVar12 == 0x18) {
    local_20 = 0;
    while( true ) {
      if ((piVar4[5] < (int)local_20 >> 0xf) ||
         ((piVar4[5] <= (int)local_20 >> 0xf && ((uint)piVar4[4] <= local_20)))) break;
      local_10 = (byte *)CONCAT22(local_a,local_c);
      local_14 = (byte *)CONCAT22(local_6,local_8);
      for (local_1e = 0; (int)local_1e < iVar11; local_1e = local_1e + 0x18) {
        *local_14 = *local_10;
        ((byte *)local_14)[1] = ((byte *)local_10)[1];
        ((byte *)local_14)[2] = ((byte *)local_10)[2];
        uVar12 = param_2 * 3;
        local_10 = (byte *)CONCAT22(local_10._2_2_ +
                                    (((int)uVar12 >> 0xf) +
                                    (uint)CARRY2((uint)(byte *)local_10,uVar12)) * 0x10,
                                    (byte *)local_10 + uVar12);
        local_14 = (byte *)CONCAT22(local_14._2_2_ +
                                    (-(uint)((byte *)0xfffc < (byte *)local_14) & 0x68),
                                    (byte *)local_14 + 3);
      }
      uVar12 = uVar8 * param_2;
      bVar17 = CARRY2((uint)local_c,uVar12);
      local_c = local_c + uVar12;
      local_a = local_a + (((int)uVar12 >> 0xf) + (uint)bVar17) * 0x10;
      bVar17 = CARRY2((uint)local_8,uVar9);
      local_8 = local_8 + uVar9;
      local_6 = local_6 + (uint)bVar17 * 0x10;
      local_20 = local_20 + 1;
    }
  }
  else if (uVar12 < 0x19) {
    cVar2 = (char)uVar12;
    if (cVar2 == '\x01') {
      local_20 = 0;
      while( true ) {
        if ((piVar4[5] < (int)local_20 >> 0xf) ||
           ((piVar4[5] <= (int)local_20 >> 0xf && ((uint)piVar4[4] <= local_20)))) break;
        local_18 = 0;
        local_1e = 0;
        local_1c = 0;
        local_14 = (byte *)CONCAT22(local_6,local_8);
        while (pbVar1 = local_14, (int)local_1e < iVar11) {
          iVar15 = local_1c + ((int)local_1c >> 0xf & 7U);
          uVar12 = iVar15 >> 3;
          iVar15 = iVar15 >> 0xf;
          if (iVar10 < (int)(local_1c + 0x10)) {
            if ((int)(local_1c + 8) <= iVar10) {
              bVar3 = local_c[uVar12];
              uVar12 = ((int)(iVar10 + (iVar10 >> 0xf & 7U)) >> 3) - 1;
              goto LAB_1008_9ab5;
            }
            iVar15 = (int)(iVar10 + (iVar10 >> 0xf & 7U)) >> 3;
            uVar12 = iVar15 - 1;
            uVar16 = (uint)local_c[uVar12];
            uVar12 = iVar15 - 2;
            uVar12 = (uint)local_c[uVar12] << 8;
          }
          else {
            bVar3 = local_c[uVar12];
            uVar12 = uVar12 + 1;
LAB_1008_9ab5:
            uVar16 = (uint)bVar3 << 8;
            uVar12 = (uint)local_c[uVar12];
          }
          local_18 = local_18 << 1 |
                     (byte)(((uVar16 | uVar12) << ((byte)((int)local_1c % 8) & 0x1f)) >> 0xf);
          local_1c = local_1c + param_2;
          local_1e = local_1e + 1;
          if ((local_1e & 7) == 0) {
            if ((byte *)local_14 == (byte *)0xffff) {
              local_14._2_2_ = local_14._2_2_ + 0x68;
            }
            local_14 = (byte *)CONCAT22(local_14._2_2_,(byte *)local_14 + 1);
            *pbVar1 = local_18;
            local_18 = 0;
          }
        }
        if ((local_1e & 7) != 0) {
          *local_14 = local_18 << (8U - (char)((int)local_1e % 8) & 0x1f);
        }
        uVar12 = uVar8 * param_2;
        bVar17 = CARRY2((uint)local_c,uVar12);
        local_c = local_c + uVar12;
        local_a = local_a + (((int)uVar12 >> 0xf) + (uint)bVar17) * 0x10;
        bVar17 = CARRY2((uint)local_8,uVar9);
        local_8 = local_8 + uVar9;
        local_6 = local_6 + (uint)bVar17 * 0x10;
        local_20 = local_20 + 1;
      }
    }
    else if (cVar2 == '\x04') {
      local_20 = 0;
      while( true ) {
        if ((piVar4[5] < (int)local_20 >> 0xf) ||
           ((piVar4[5] <= (int)local_20 >> 0xf && ((uint)piVar4[4] <= local_20)))) break;
        local_18 = 0;
        local_1e = 0;
        local_1c = 0;
        local_14 = (byte *)CONCAT22(local_6,local_8);
        while (pbVar1 = local_14, (int)local_1e < iVar11) {
          iVar15 = local_1c + ((int)local_1c >> 0xf & 7U);
          uVar12 = iVar15 >> 3;
          iVar15 = iVar15 >> 0xf;
          if ((local_1c & 7) == 0) {
            if ((local_1e & 7) == 0) {
              bVar3 = local_c[uVar12] & 0xf0;
            }
            else {
              bVar3 = local_c[uVar12] >> 4;
            }
          }
          else if ((local_1e & 7) == 0) {
            bVar3 = local_c[uVar12] << 4;
          }
          else {
            bVar3 = local_c[uVar12] & 0xf;
          }
          local_18 = local_18 | bVar3;
          local_1c = local_1c + param_2 * 4;
          local_1e = local_1e + 4;
          if ((local_1e & 7) == 0) {
            if ((byte *)local_14 == (byte *)0xffff) {
              local_14._2_2_ = local_14._2_2_ + 0x68;
            }
            local_14 = (byte *)CONCAT22(local_14._2_2_,(byte *)local_14 + 1);
            *pbVar1 = local_18;
            local_18 = 0;
          }
        }
        if ((local_1e & 7) != 0) {
          *local_14 = local_18 << 4;
        }
        uVar12 = uVar8 * param_2;
        bVar17 = CARRY2((uint)local_c,uVar12);
        local_c = local_c + uVar12;
        local_a = local_a + (((int)uVar12 >> 0xf) + (uint)bVar17) * 0x10;
        bVar17 = CARRY2((uint)local_8,uVar9);
        local_8 = local_8 + uVar9;
        local_6 = local_6 + (uint)bVar17 * 0x10;
        local_20 = local_20 + 1;
      }
    }
    else if (cVar2 == '\b') {
      local_20 = 0;
      while( true ) {
        if ((piVar4[5] < (int)local_20 >> 0xf) ||
           ((piVar4[5] <= (int)local_20 >> 0xf && ((uint)piVar4[4] <= local_20)))) break;
        local_10 = (byte *)CONCAT22(local_a,local_c);
        local_14 = (byte *)CONCAT22(local_6,local_8);
        for (local_1e = 0; (int)local_1e < iVar11; local_1e = local_1e + 8) {
          *local_14 = *local_10;
          local_10 = (byte *)CONCAT22(local_10._2_2_ +
                                      (((int)param_2 >> 0xf) +
                                      (uint)CARRY2((uint)(byte *)local_10,param_2)) * 0x10,
                                      (byte *)local_10 + param_2);
          local_14 = (byte *)CONCAT22(local_14._2_2_ +
                                      (-(uint)((byte *)0xfffe < (byte *)local_14) & 0x68),
                                      (byte *)local_14 + 1);
        }
        uVar12 = uVar8 * param_2;
        bVar17 = CARRY2((uint)local_c,uVar12);
        local_c = local_c + uVar12;
        local_a = local_a + (((int)uVar12 >> 0xf) + (uint)bVar17) * 0x10;
        bVar17 = CARRY2((uint)local_8,uVar9);
        local_8 = local_8 + uVar9;
        local_6 = local_6 + (uint)bVar17 * 0x10;
        local_20 = local_20 + 1;
      }
    }
  }
  if (param_4 != 0 || param_3 != 0) {
    local_4 = 0;
    iVar14 = 0;
    uVar22 = 0x1018;
    local_36 = _LCREAT(0x1000,0,param_3);
    iVar21 = param_3;
    iVar5 = param_4;
    if (local_36 != -1) {
      uVar12 = uVar6 + piVar4[10];
      iVar15 = piVar4[0xb] + (uint)CARRY2(uVar6,piVar4[10]);
      DAT_1010_0c44 = 0x4d42;
      DAT_1010_0c46 = uVar12 + 0xe;
      DAT_1010_0c48 = iVar15 + (uint)(0xfff1 < uVar12);
      DAT_1010_0c4e = uVar6 + 0xe;
      DAT_1010_0c50 = 0;
      iVar14 = 0x1010;
      uVar22 = 0x1018;
      iVar21 = local_36;
      iVar13 = _LWRITE(0x1018,0xe,0xc44,0x1010);
      iVar5 = param_4;
      if (iVar13 == 0xe) {
        uVar22 = 0x1018;
        iVar14 = local_36;
        lVar20 = _HWRITE(0x1018,uVar12,iVar15,piVar18);
        iVar5 = param_4;
        if (lVar20 == CONCAT22(iVar15,uVar12)) {
          local_4 = 1;
        }
      }
    }
  }
  uVar7 = uVar22;
  if (local_36 != 0) {
    uVar7 = 0x1018;
    _LCLOSE(uVar22,local_36,iVar14,iVar21,iVar5);
  }
  GLOBALUNLOCK(uVar7,param_1);
  return local_4;
}


// ---- FUN_1008_9ff0 @ 1008:9ff0

void __cdecl16far FUN_1008_9ff0(undefined2 param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined2 uVar10;
  long lVar11;
  undefined2 uVar12;
  undefined2 uVar13;
  int local_14;
  uint local_10;
  char local_c;
  
  uVar13 = 0x1010;
  uVar12 = 0xa005;
  uVar10 = param_1;
  lVar11 = GLOBALLOCK();
  iVar7 = (int)((ulong)lVar11 >> 0x10);
  uVar4 = (uint)lVar11;
  if (lVar11 == 0) {
    return;
  }
  uVar8 = *(uint *)(uVar4 + 0xe);
  if (uVar8 == 0x18) {
    local_c = '\x04';
    if (*(int *)(uVar4 + 0x22) == 0 && *(int *)(uVar4 + 0x20) == 0) {
      local_10 = 0;
    }
    else {
LAB_1008_a0ad:
      local_10 = 0x100;
    }
  }
  else {
    if (0x18 < uVar8) goto LAB_1008_a23d;
    cVar3 = (char)uVar8;
    if (cVar3 == '\x01') {
      local_c = '\0';
      local_10 = 2;
    }
    else {
      if (cVar3 != '\x04') {
        if (cVar3 != '\b') goto LAB_1008_a23d;
        local_c = '\x01';
        goto LAB_1008_a0ad;
      }
      local_c = '\x03';
      local_10 = 0x10;
    }
  }
  uVar8 = (uint)(0xfff5 < local_10);
  uVar5 = FUN_1000_053e(uVar10,uVar13);
  iVar1 = uVar4 + uVar5;
  iVar2 = iVar7 + (uVar8 + CARRY2(uVar4,uVar5)) * 0x10;
  iVar6 = M007_GETSTATE(0x1000,0x83);
  if (iVar6 == 1) {
    Ordinal_2072(0x1018,0);
    EXPECTSTAGETIMEOUT(0x1018);
  }
  uVar10 = 0x1018;
  DAT_1010_1e56 = *(undefined2 *)(uVar4 + 4);
  DAT_1010_11d0 = *(undefined2 *)(uVar4 + 8);
  if (local_c == '\0') {
    FUN_1008_8618(*(undefined2 *)(uVar4 + 4),*(undefined2 *)(uVar4 + 6),iVar1,iVar2);
LAB_1008_a0e6:
    uVar10 = 0x1008;
  }
  else {
    if (local_c == '\x01') {
      if ((*(int *)(uVar4 + 0x22) != 0 || *(int *)(uVar4 + 0x20) != 0) ||
         (*(int *)(uVar4 + 0x26) != 0 || *(int *)(uVar4 + 0x24) != 0)) {
        local_14 = 0;
        do {
          iVar9 = local_14 * 4 + uVar4;
          iVar6 = local_14 * 3;
          *(undefined1 *)((int)(undefined2 *)&DAT_1010_1b56 + iVar6) = *(undefined1 *)(iVar9 + 0x2a)
          ;
          *(undefined1 *)((int)(undefined2 *)&DAT_1010_1b56 + iVar6 + 1) =
               *(undefined1 *)(iVar9 + 0x29);
          *(undefined1 *)((int)(undefined2 *)&DAT_1010_1b58 + iVar6) = *(undefined1 *)(iVar9 + 0x28)
          ;
          local_14 = local_14 + 1;
        } while (local_14 < 0x100);
        OPLUT_LOAD(0x1018,(undefined2 *)&DAT_1010_1b56,0x1010,0x100,0);
      }
      FUN_1008_889a(*(undefined2 *)(uVar4 + 4),*(undefined2 *)(uVar4 + 6),iVar1,iVar2);
      goto LAB_1008_a0e6;
    }
    if (local_c == '\x03') {
      FUN_1008_83be(*(undefined2 *)(uVar4 + 4),*(undefined2 *)(uVar4 + 6),iVar1,iVar2);
      goto LAB_1008_a0e6;
    }
    if (local_c == '\x04') {
      if ((*(int *)(uVar4 + 0x22) != 0 || *(int *)(uVar4 + 0x20) != 0) ||
         (*(int *)(uVar4 + 0x26) != 0 || *(int *)(uVar4 + 0x24) != 0)) {
        local_14 = 0;
        do {
          iVar6 = local_14 * 3;
          *(char *)((int)(undefined2 *)&DAT_1010_1b56 + iVar6) = ((byte)(local_14 >> 5) & 7) * '$';
          *(char *)((int)(undefined2 *)&DAT_1010_1b56 + iVar6 + 1) = ((byte)local_14 & 0x1c) * '\t';
          *(char *)((int)(undefined2 *)&DAT_1010_1b58 + iVar6) = ((byte)local_14 & 3) * 'U';
          local_14 = local_14 + 1;
        } while (local_14 < 0x100);
        OPLUT_LOAD(0x1018,(undefined2 *)&DAT_1010_1b56,0x1010,0x100,0);
      }
      FUN_1008_a24c(*(undefined2 *)(uVar4 + 4),*(undefined2 *)(uVar4 + 6),iVar1,iVar2);
      goto LAB_1008_a0e6;
    }
  }
  uVar12 = 0x83;
  iVar7 = M007_GETSTATE(uVar10,0x83);
  if (iVar7 == 1) {
    Ordinal_2072(0x1018,1);
  }
LAB_1008_a23d:
  GLOBALUNLOCK(0x1018,param_1,uVar12);
  return;
}


// ---- FUN_1008_a24c @ 1008:a24c

/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined2 __cdecl16far FUN_1008_a24c(uint param_1,int param_2,uint param_3,int param_4)

{
  char *pcVar1;
  byte *pbVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  byte *pbVar6;
  int iVar7;
  undefined2 unaff_SS;
  bool bVar8;
  long lVar9;
  undefined2 uVar10;
  uint local_2a;
  int local_28;
  int local_26;
  int local_24;
  int local_22;
  uint local_20;
  undefined2 local_1e;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  long local_e;
  uint local_a;
  int local_8;
  uint local_6;
  int local_4;
  
  iVar7 = param_2 * 3 + (uint)CARRY2(param_1,param_1) + (uint)CARRY2(param_1 * 2,param_1);
  local_2a = FUN_1000_05b6(0x1010);
  local_28 = iVar7;
  if ((-param_1 & 3) != 0) {
    bVar8 = 0xfffe < local_2a;
    local_2a = local_2a + 1;
    local_28 = iVar7 + (uint)bVar8;
  }
  FUN_1000_0452(&local_2a,unaff_SS,CONCAT11((char)(-param_1 >> 8),2));
  local_e = (ulong)DAT_1010_1e56 * (ulong)DAT_1010_11d0;
  local_20 = DAT_1010_11d0;
  if ((int)((ulong)local_e >> 0x10) != 0) {
    local_20 = (uint)(0xffff / (ulong)DAT_1010_1e56);
  }
  local_1e = 0;
  uVar10 = 0;
  local_10 = GLOBALALLOC(0x1000,0xffff,0);
  if (local_10 != 0) {
    local_14 = GLOBALLOCK(0x1018,local_10,uVar10);
    if (local_14 != 0) {
      DAT_1010_1b0d = 1;
      iVar7 = M007_GETSTATE(0x1018,0x83);
      if (iVar7 == 1) {
        Ordinal_536(0x1018,(undefined2 *)&DAT_1010_1b06,0x1010);
      }
      DAT_1010_1b61 = DAT_1010_1e58;
      DAT_1010_1b63 = 0;
      DAT_1010_1b64 = 1;
      DAT_1010_1b5c = DAT_1010_1e56;
      DAT_1010_1b5e = local_20;
      DAT_1010_1b58 = DAT_1010_1b44;
      DAT_1010_1b5a = DAT_1010_1b42;
      DAT_1010_1b69 = M007_GETSTATE(0x1018,99);
      local_26 = DAT_1010_1b5c * DAT_1010_1b5e;
      local_24 = DAT_1010_11d0 - 1;
      local_22 = 0;
      while (uVar10 = 0x1018, DAT_1010_11d0 != 0) {
        if (DAT_1010_11d0 < local_20) {
          DAT_1010_1b5e = DAT_1010_11d0;
          local_26 = DAT_1010_1b5c * DAT_1010_11d0;
          DAT_1010_11d0 = 0;
        }
        else {
          DAT_1010_11d0 = DAT_1010_11d0 - DAT_1010_1b5e;
        }
        local_4 = 0;
        for (local_6 = 0;
            (local_4 <= (int)DAT_1010_1b5e >> 0xf &&
            ((local_4 < (int)DAT_1010_1b5e >> 0xf || (local_6 < DAT_1010_1b5e))));
            local_6 = local_6 + 1) {
          uVar10 = 0x1000;
          lVar9 = FUN_1000_050c(local_2a,local_28,local_24,local_22);
          local_1c = (byte *)CONCAT22((int)(lVar9 + (ulong)param_3 >> 0x10) * 0x10 + param_4,
                                      (char *)(char *)(lVar9 + (ulong)param_3));
          local_18 = (byte *)CONCAT22(local_14._2_2_,
                                      (byte *)(local_6 * DAT_1010_1e56 + (int)local_14));
          bVar8 = local_24 == 0;
          local_24 = local_24 + -1;
          local_22 = local_22 - (uint)bVar8;
          local_8 = 0;
          for (local_a = 0;
              (pcVar4 = (char *)local_1c, local_8 <= (int)DAT_1010_1e56 >> 0xf &&
              ((local_8 < (int)DAT_1010_1e56 >> 0xf || (local_a < DAT_1010_1e56))));
              local_a = local_a + 1) {
            pcVar3 = (char *)local_1c;
            pcVar1 = (char *)local_1c + 1;
            if ((char *)local_1c == (char *)0xffff) {
              local_1c._2_2_ = local_1c._2_2_ + 0x68;
            }
            local_1c = (byte *)CONCAT22(local_1c._2_2_,pcVar1);
            pcVar5 = (char *)local_1c;
            *local_18 = *pcVar4 >> 6 & 3;
            pbVar2 = (byte *)(pcVar3 + 2);
            if (pcVar1 == (char *)0xffff) {
              local_1c._2_2_ = local_1c._2_2_ + 0x68;
            }
            local_1c = (byte *)CONCAT22(local_1c._2_2_,pbVar2);
            pbVar6 = local_1c;
            *local_18 = *local_18 + (*pcVar5 >> 3 & 0x1cU);
            if (pbVar2 == (byte *)0xffff) {
              local_1c._2_2_ = local_1c._2_2_ + 0x68;
            }
            local_1c = (byte *)CONCAT22(local_1c._2_2_,pcVar3 + 3);
            *local_18 = *local_18 + (*pbVar6 & 0xe0);
            local_18 = (byte *)CONCAT22(local_18._2_2_,(byte *)local_18 + 1);
            local_8 = local_8 + (uint)(0xfffe < local_a);
          }
          local_4 = local_4 + (uint)(0xfffe < local_6);
        }
        iVar7 = M007_GETSTATE(uVar10,0x83);
        if (iVar7 == 1) {
          Ordinal_109(0x1018,0,local_26,DAT_1010_1b06,DAT_1010_1b08,local_14);
          Ordinal_535(0x1018,(undefined2 *)&DAT_1010_1b56,0x1010);
        }
        DAT_1010_1b5a = DAT_1010_1b5a + local_20;
      }
      GLOBALUNLOCK(0x1018,local_10);
      GLOBALFREE(0x1018,local_10);
      return 0;
    }
    GLOBALFREE(0x1018,local_10);
  }
  return 0x1d2;
}


// ---- FUN_1008_a4de @ 1008:a4de

int __cdecl16far FUN_1008_a4de(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  int iVar4;
  undefined2 *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  undefined2 *puVar11;
  undefined1 *puVar12;
  undefined4 uVar13;
  undefined2 uVar14;
  undefined2 uVar15;
  undefined2 local_28;
  int local_26;
  undefined1 *local_24;
  undefined4 local_1a;
  undefined4 local_16;
  uint local_10;
  int local_e;
  uint local_c;
  int local_a;
  
  FUN_1000_053e(0x1010);
  uVar3 = FUN_1000_05b6();
  uVar3 = uVar3 & 0xfffc;
  uVar15 = 0;
  iVar4 = GLOBALALLOC(0x1000,(ulong)uVar3 * (ulong)DAT_1010_11d0 + 0x428);
  if (iVar4 != 0) {
    puVar11 = (undefined2 *)GLOBALLOCK(0x1018,iVar4,uVar15);
    iVar8 = (int)((ulong)puVar11 >> 0x10);
    puVar5 = (undefined2 *)puVar11;
    if (puVar11 != (undefined2 *)0x0) {
      uVar15 = 0;
      iVar6 = GLOBALALLOC(0x1018,DAT_1010_1e56,0);
      if (iVar6 == 0) {
        GLOBALUNLOCK(0x1018,iVar4);
      }
      else {
        puVar12 = (undefined1 *)GLOBALLOCK(0x1018,iVar6,uVar15);
        if (puVar12 != (undefined1 *)0x0) {
          *puVar11 = 0x28;
          puVar5[1] = 0;
          puVar5[2] = DAT_1010_1e56;
          puVar5[3] = 0;
          puVar5[4] = DAT_1010_11d0;
          puVar5[5] = 0;
          puVar5[6] = 1;
          puVar5[7] = 8;
          puVar5[9] = 0;
          puVar5[8] = 0;
          uVar14 = 0;
          uVar7 = DAT_1010_11d0;
          uVar13 = FUN_1000_050c(8,0,DAT_1010_1e56,0);
          iVar9 = (int)((ulong)uVar13 >> 0x10) + (uint)(0xffe0 < (uint)uVar13);
          uVar15 = FUN_1000_05b6(uVar7,uVar14);
          uVar13 = FUN_1000_050c(uVar15,iVar9,uVar7,uVar14);
          puVar5[10] = (int)uVar13;
          puVar5[0xb] = (int)((ulong)uVar13 >> 0x10);
          puVar5[0xd] = 0;
          puVar5[0xc] = 0;
          puVar5[0xf] = 0;
          puVar5[0xe] = 0;
          puVar5[0x10] = 0x100;
          puVar5[0x11] = 0;
          puVar5[0x13] = 0;
          puVar5[0x12] = 0;
          uVar15 = 0x1018;
          iVar9 = M007_GETSTATE(0x1000,0x83);
          if (iVar9 == 1) {
            uVar15 = 1;
            OPLUT_READ(0x1018,(undefined2 *)&DAT_1010_1b56,0x1010,0x100,0);
            local_a = 0;
            for (local_c = 0; (local_a < 1 && ((local_a < 0 || (local_c < 0x100))));
                local_c = local_c + 1) {
              iVar9 = local_c * 3;
              *(undefined1 *)(puVar5 + local_c * 2 + 0x15) =
                   *(undefined1 *)((int)(undefined2 *)&DAT_1010_1b56 + iVar9);
              *(undefined1 *)((int)puVar5 + local_c * 4 + 0x29) =
                   *(undefined1 *)((int)(undefined2 *)&DAT_1010_1b56 + iVar9 + 1);
              *(undefined1 *)(puVar5 + local_c * 2 + 0x14) =
                   *(undefined1 *)((int)(undefined2 *)&DAT_1010_1b58 + iVar9);
              *(undefined1 *)((int)puVar5 + local_c * 4 + 0x2b) = 0;
              local_a = local_a + (uint)(0xfffe < local_c);
            }
            local_26 = 1;
            uVar7 = FUN_1000_053e(uVar15);
            local_26 = local_26 + (uint)CARRY2(uVar7,DAT_1010_1b44);
            uVar15 = 0x1000;
            local_28 = FUN_1000_053e();
            puVar1 = (undefined1 *)
                     ((ulong)uVar3 * (ulong)(DAT_1010_11d0 - 1) + 0x428 + ((ulong)puVar11 & 0xffff))
            ;
            local_16 = (undefined1 *)
                       CONCAT22(iVar8 + (int)((ulong)puVar1 >> 0x10) * 0x10,(undefined1 *)puVar1);
            local_a = 0;
            for (local_c = 0;
                (local_a <= (int)DAT_1010_11d0 >> 0xf &&
                ((local_a < (int)DAT_1010_11d0 >> 0xf || (local_c < DAT_1010_11d0))));
                local_c = local_c + 1) {
              if ((uint)-(int)((undefined1 *)local_16 + 1) < DAT_1010_1e56 ||
                  (undefined1 *)-DAT_1010_1e56 == (undefined1 *)local_16 + 1) {
                Ordinal_105(uVar15,0,DAT_1010_1e56,puVar12,local_28,local_26);
                local_1a = local_16;
                local_e = 0;
                local_24 = puVar12;
                for (local_10 = 0;
                    (puVar2 = local_1a, puVar1 = local_24, local_e <= (int)DAT_1010_1e56 >> 0xf &&
                    ((local_e < (int)DAT_1010_1e56 >> 0xf || (local_10 < DAT_1010_1e56))));
                    local_10 = local_10 + 1) {
                  local_24 = (undefined1 *)CONCAT22(local_24._2_2_,(undefined1 *)local_24 + 1);
                  if ((undefined1 *)local_1a == (undefined1 *)0xffff) {
                    local_1a._2_2_ = local_1a._2_2_ + 0x68;
                  }
                  local_1a = (undefined1 *)CONCAT22(local_1a._2_2_,(undefined1 *)local_1a + 1);
                  *puVar2 = *puVar1;
                  local_e = local_e + (uint)(0xfffe < local_10);
                }
              }
              else {
                Ordinal_105(uVar15,0,DAT_1010_1e56,(undefined1 *)local_16,local_16._2_2_,local_28,
                            local_26);
              }
              uVar15 = 0x1018;
              bVar10 = 0xdf < local_28._1_1_;
              local_28 = CONCAT11(local_28._1_1_ + 0x20,(undefined1)local_28);
              local_26 = local_26 + (uint)bVar10;
              local_16 = (undefined1 *)
                         CONCAT22(local_16._2_2_ +
                                  ((uint)CARRY2((uint)(undefined1 *)local_16,-uVar3) -
                                  (uint)(uVar3 != 0)) * 0x10,(undefined1 *)local_16 + -uVar3);
              local_a = local_a + (uint)(0xfffe < local_c);
            }
          }
          GLOBALUNLOCK(uVar15,iVar4);
          GLOBALUNLOCK(0x1018,iVar6);
          GLOBALFREE(0x1018,iVar6);
          return iVar4;
        }
        GLOBALUNLOCK(0x1018,iVar4);
        GLOBALFREE(0x1018,iVar4);
        iVar4 = iVar6;
      }
    }
    GLOBALFREE(0x1018,iVar4);
  }
  return 0;
}


// ---- FUN_1008_a7f4 @ 1008:a7f4

undefined2 __cdecl16far FUN_1008_a7f4(undefined2 param_1,undefined2 param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  uint local_e;
  
  iVar3 = FUN_1008_abde(0x1010);
  if (iVar3 != 0) {
    lVar6 = GLOBALLOCK(0x1008,iVar3);
    if (lVar6 != 0) {
      local_e = DAT_1010_1e56 >> 2;
      if ((DAT_1010_1e56 & 3) != 0) {
        local_e = local_e + 1;
      }
      lVar1 = (ulong)(local_e << 2) * (ulong)DAT_1010_11d0;
      lVar2 = lVar1 + 0x428;
      iVar4 = _LCREAT(0x1018,0,param_1);
      if (iVar4 != -1) {
        DAT_1010_0c52 = 0x4d42;
        lVar1 = lVar1 + 0x436;
        DAT_1010_0c54 = (undefined2)lVar1;
        DAT_1010_0c56 = (undefined2)((ulong)lVar1 >> 0x10);
        DAT_1010_0c5c = 0x436;
        DAT_1010_0c5e = 0;
        iVar7 = iVar4;
        iVar5 = _LWRITE(0x1018,0xe,0xc52,0x1010);
        if (iVar5 != 0xe) {
          GLOBALUNLOCK(0x1018,iVar3);
          GLOBALFREE(0x1018,iVar3);
          _LCLOSE(0x1018,iVar4);
          return 0;
        }
        iVar5 = iVar4;
        lVar6 = _HWRITE(0x1018,lVar2,lVar6);
        if (lVar2 == lVar6) {
          GLOBALUNLOCK(0x1018,iVar3);
          GLOBALFREE(0x1018,iVar3);
          _LCLOSE(0x1018,iVar4);
          return 1;
        }
        _LCLOSE(0x1018,iVar4,iVar5,iVar7,param_2);
      }
      GLOBALUNLOCK(0x1018,iVar3);
    }
    GLOBALFREE(0x1018,iVar3);
  }
  return 0;
}


// ---- FUN_1008_a918 @ 1008:a918

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl16far FUN_1008_a918(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined2 unaff_CS;
  bool bVar7;
  undefined1 *puVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  undefined1 *local_2c;
  undefined2 local_26;
  int local_24;
  undefined1 *local_22;
  undefined4 local_18;
  undefined4 local_14;
  uint local_e;
  int local_c;
  uint local_a;
  int local_8;
  
  uVar10 = 0x1010;
  local_2c = &DAT_1010_0c60;
  _DAT_1010_0c60 = DAT_1010_1b44;
  DAT_1010_0c62 = DAT_1010_1b42;
  DAT_1010_0c64 = DAT_1010_1e56;
  DAT_1010_0c66 = DAT_1010_11d0;
  uVar9 = 0;
  iVar3 = GLOBALALLOC(unaff_CS,(ulong)DAT_1010_1e56 * (ulong)DAT_1010_11d0 + 8);
  if (iVar3 != 0) {
    local_14 = (undefined1 *)GLOBALLOCK(0x1018,iVar3,uVar9,uVar10);
    if (local_14 != (undefined1 *)0x0) {
      uVar9 = 0;
      iVar4 = GLOBALALLOC(0x1018,DAT_1010_1e56,0);
      if (iVar4 == 0) {
        GLOBALUNLOCK(0x1018,iVar3);
      }
      else {
        puVar8 = (undefined1 *)GLOBALLOCK(0x1018,iVar4,uVar9);
        if (puVar8 != (undefined1 *)0x0) {
          local_8 = 0;
          for (local_a = 0; (local_8 < 1 && ((local_8 < 0 || (local_a < 8)))); local_a = local_a + 1
              ) {
            *local_14 = *local_2c;
            local_2c = (undefined1 *)CONCAT22(local_2c._2_2_,(undefined1 *)local_2c + 1);
            local_14 = (undefined1 *)
                       CONCAT22(local_14._2_2_ +
                                (-(uint)((undefined1 *)0xfffe < (undefined1 *)local_14) & 0x68),
                                (undefined1 *)local_14 + 1);
            local_8 = local_8 + (uint)(0xfffe < local_a);
          }
          uVar9 = 0x1018;
          iVar5 = M007_GETSTATE(0x1018,0x83);
          if (iVar5 == 1) {
            local_24 = 1;
            uVar6 = FUN_1000_053e();
            local_24 = local_24 + (uint)CARRY2(uVar6,DAT_1010_1b44);
            uVar9 = 0x1000;
            local_26 = FUN_1000_053e();
            local_8 = 0;
            for (local_a = 0;
                (local_8 <= (int)DAT_1010_11d0 >> 0xf &&
                ((local_8 < (int)DAT_1010_11d0 >> 0xf || (local_a < DAT_1010_11d0))));
                local_a = local_a + 1) {
              if ((uint)-(int)((undefined1 *)local_14 + 1) < DAT_1010_1e56 ||
                  (undefined1 *)-DAT_1010_1e56 == (undefined1 *)local_14 + 1) {
                Ordinal_105(uVar9,0,DAT_1010_1e56,puVar8,local_26,local_24);
                local_18 = local_14;
                local_c = 0;
                local_22 = puVar8;
                for (local_e = 0;
                    (puVar2 = local_18, puVar1 = local_22, local_c <= (int)DAT_1010_1e56 >> 0xf &&
                    ((local_c < (int)DAT_1010_1e56 >> 0xf || (local_e < DAT_1010_1e56))));
                    local_e = local_e + 1) {
                  local_22 = (undefined1 *)CONCAT22(local_22._2_2_,(undefined1 *)local_22 + 1);
                  if ((undefined1 *)local_18 == (undefined1 *)0xffff) {
                    local_18._2_2_ = local_18._2_2_ + 0x68;
                  }
                  local_18 = (undefined1 *)CONCAT22(local_18._2_2_,(undefined1 *)local_18 + 1);
                  *puVar2 = *puVar1;
                  local_c = local_c + (uint)(0xfffe < local_e);
                }
              }
              else {
                Ordinal_105(uVar9,0,DAT_1010_1e56,(undefined1 *)local_14,local_14._2_2_,local_26,
                            local_24);
              }
              uVar9 = 0x1018;
              bVar7 = 0xdf < local_26._1_1_;
              local_26 = CONCAT11(local_26._1_1_ + 0x20,(undefined1)local_26);
              local_24 = local_24 + (uint)bVar7;
              local_14 = (undefined1 *)
                         CONCAT22(local_14._2_2_ +
                                  (uint)CARRY2((uint)(undefined1 *)local_14,DAT_1010_1e56) * 0x10,
                                  (undefined1 *)local_14 + DAT_1010_1e56);
              local_8 = local_8 + (uint)(0xfffe < local_a);
            }
          }
          GLOBALUNLOCK(uVar9,iVar3);
          GLOBALUNLOCK(0x1018,iVar4);
          GLOBALFREE(0x1018,iVar4);
          return iVar3;
        }
        GLOBALUNLOCK(0x1018,iVar3);
        GLOBALFREE(0x1018,iVar3);
        iVar3 = iVar4;
      }
    }
    GLOBALFREE(0x1018,iVar3);
  }
  return 0;
}


// ---- FUN_1008_ab2c @ 1008:ab2c

undefined2 __cdecl16far FUN_1008_ab2c(undefined2 param_1,undefined2 param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  
  iVar2 = FUN_1008_a918(0x1010);
  if (iVar2 != 0) {
    lVar4 = GLOBALLOCK(0x1008,iVar2);
    if (lVar4 != 0) {
      lVar1 = (ulong)DAT_1010_1e56 * (ulong)DAT_1010_11d0 + 8;
      iVar3 = _LCREAT(0x1018,0,param_1);
      if (iVar3 != -1) {
        iVar5 = iVar3;
        lVar4 = _HWRITE(0x1018,lVar1,lVar4);
        if (lVar1 == lVar4) {
          GLOBALUNLOCK(0x1018,iVar2);
          GLOBALFREE(0x1018,iVar2);
          _LCLOSE(0x1018,iVar3);
          return 1;
        }
        _LCLOSE(0x1018,iVar3,iVar5,param_2);
      }
      GLOBALUNLOCK(0x1018,iVar2);
    }
    GLOBALFREE(0x1018,iVar2);
  }
  return 0;
}


// ---- FUN_1008_abde @ 1008:abde

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

int __cdecl16far FUN_1008_abde(void)

{
  undefined1 *puVar1;
  int iVar2;
  undefined2 *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined2 unaff_CS;
  bool bVar8;
  undefined2 *puVar9;
  ulong uVar10;
  long lVar11;
  undefined2 uVar12;
  undefined2 uVar13;
  uint local_3e;
  uint local_3c;
  int local_36;
  int local_34;
  int local_32;
  undefined4 local_22;
  undefined4 local_1e;
  uint local_e;
  int local_c;
  uint local_a;
  int local_8;
  uint local_6;
  uint local_4;
  
  uVar13 = 0x1010;
  local_3c = DAT_1010_1e56 / DAT_1010_0028;
  if (DAT_1010_1e56 % DAT_1010_0028 != 0) {
    local_3c = local_3c + 1;
  }
  local_3e = DAT_1010_11d0 / DAT_1010_0028;
  if (DAT_1010_11d0 % DAT_1010_0028 != 0) {
    local_3e = local_3e + 1;
  }
  local_6 = local_3c >> 2;
  if ((local_3c & 3) != 0) {
    local_6 = local_6 + 1;
  }
  uVar12 = 0;
  iVar2 = GLOBALALLOC(unaff_CS,(ulong)(local_6 << 2) * (ulong)local_3e + 0x428);
  if (iVar2 != 0) {
    puVar9 = (undefined2 *)GLOBALLOCK(0x1018,iVar2,uVar12,uVar13);
    iVar7 = (int)((ulong)puVar9 >> 0x10);
    puVar3 = (undefined2 *)puVar9;
    if (puVar9 != (undefined2 *)0x0) {
      uVar4 = DAT_1010_11d0;
      if ((int)((ulong)DAT_1010_1e56 * (ulong)DAT_1010_11d0 >> 0x10) != 0) {
        uVar4 = (uint)(((0xffff / (ulong)DAT_1010_1e56) / (ulong)DAT_1010_0028) *
                      (ulong)DAT_1010_0028);
      }
      uVar13 = 0;
      iVar5 = GLOBALALLOC(0x1018,0xffff,0);
      if (iVar5 == 0) {
        GLOBALUNLOCK(0x1018,iVar2);
      }
      else {
        uVar10 = GLOBALLOCK(0x1018,iVar5,uVar13);
        if (uVar10 != 0) {
          *puVar9 = 0x28;
          puVar3[1] = 0;
          puVar3[2] = local_3c;
          puVar3[3] = 0;
          puVar3[4] = local_3e;
          puVar3[5] = 0;
          puVar3[6] = 1;
          puVar3[7] = 8;
          puVar3[9] = 0;
          puVar3[8] = 0;
          puVar3[0xb] = 0;
          puVar3[10] = 0;
          puVar3[0xd] = 0;
          puVar3[0xc] = 0;
          puVar3[0xf] = 0;
          puVar3[0xe] = 0;
          puVar3[0x10] = 0x100;
          puVar3[0x11] = 0;
          puVar3[0x12] = 0x100;
          puVar3[0x13] = 0;
          uVar13 = 1;
          OPLUT_READ(0x1018,(undefined2 *)&DAT_1010_1b56,0x1010,0x100,0);
          local_8 = 0;
          for (local_a = 0; (local_8 < 1 && ((local_8 < 0 || (local_a < 0x100))));
              local_a = local_a + 1) {
            iVar6 = local_a * 3;
            *(undefined1 *)(puVar3 + local_a * 2 + 0x15) =
                 *(undefined1 *)((int)(undefined2 *)&DAT_1010_1b56 + iVar6);
            *(undefined1 *)((int)puVar3 + local_a * 4 + 0x29) =
                 *(undefined1 *)((int)(undefined2 *)&DAT_1010_1b56 + iVar6 + 1);
            *(undefined1 *)(puVar3 + local_a * 2 + 0x14) =
                 *(undefined1 *)((int)(undefined2 *)&DAT_1010_1b58 + iVar6);
            *(undefined1 *)((int)puVar3 + local_a * 4 + 0x2b) = 0;
            local_8 = local_8 + (uint)(0xfffe < local_a);
          }
          DAT_1010_1b0b = DAT_1010_1e58;
          DAT_1010_1b0c = DAT_1010_1e6e;
          DAT_1010_1b0d = 0;
          DAT_1010_1b0a = DAT_1010_12e2;
          iVar6 = M007_GETSTATE(0x1018,0xc0,uVar13);
          if ((iVar6 == 2) && (_DAT_1010_1b04 != 0)) {
            DAT_1010_1b0e = 4;
          }
          else {
            DAT_1010_1b0e = 3;
          }
          iVar6 = M007_GETSTATE(0x1018,0x83);
          if (iVar6 == 1) {
            Ordinal_536(0x1018,(undefined2 *)&DAT_1010_1b06,0x1010);
          }
          DAT_1010_1b61 = DAT_1010_1e58;
          DAT_1010_1b62 = DAT_1010_1e6e;
          DAT_1010_1b60 = DAT_1010_12e2;
          DAT_1010_1b63 = 0;
          DAT_1010_1b64 = 0;
          DAT_1010_1b5c = DAT_1010_1e56;
          DAT_1010_1b58 = DAT_1010_1b44;
          DAT_1010_1b5a = DAT_1010_1b42;
          DAT_1010_1b65 = DAT_1010_1b04;
          uVar13 = 0x1018;
          DAT_1010_1b5e = uVar4;
          DAT_1010_1b69 = M007_GETSTATE(0x1018,99);
          local_32 = DAT_1010_1b5c * DAT_1010_1b5e;
          local_36 = local_3e - 1;
          local_34 = 0;
          for (local_4 = DAT_1010_11d0; local_4 != 0; local_4 = local_4 - DAT_1010_1b5e) {
            if (local_4 < uVar4) {
              DAT_1010_1b5e = local_4;
              local_32 = local_4 * DAT_1010_1b5c;
            }
            iVar6 = M007_GETSTATE(uVar13,0x83);
            if (iVar6 == 1) {
              Ordinal_535(0x1018,(undefined2 *)&DAT_1010_1b56,0x1010);
              Ordinal_105(0x1018,0,local_32,uVar10,DAT_1010_1b06,DAT_1010_1b08);
            }
            uVar13 = 0x1018;
            local_8 = 0;
            for (local_a = 0;
                (local_8 <= (int)DAT_1010_1b5e >> 0xf &&
                ((local_8 < (int)DAT_1010_1b5e >> 0xf || (local_a < DAT_1010_1b5e))));
                local_a = local_a + DAT_1010_0028) {
              lVar11 = FUN_1000_050c(local_a,local_8,DAT_1010_1e56,0);
              puVar1 = (undefined1 *)(lVar11 + (uVar10 & 0xffff));
              local_22 = (undefined1 *)
                         CONCAT22((int)((ulong)puVar1 >> 0x10) * 0x10 + (int)(uVar10 >> 0x10),
                                  (undefined1 *)puVar1);
              uVar13 = 0x1000;
              lVar11 = FUN_1000_050c(local_6 << 2,0,local_36,local_34);
              local_1e = (undefined1 *)
                         CONCAT22((int)(lVar11 + ZEXT24(puVar3 + 0x214) >> 0x10) * 0x10 +
                                  iVar7 + (-(uint)((undefined2 *)0xfbd7 < puVar3) & 0x68),
                                  (undefined1 *)(undefined1 *)(lVar11 + ZEXT24(puVar3 + 0x214)));
              bVar8 = local_36 == 0;
              local_36 = local_36 + -1;
              local_34 = local_34 - (uint)bVar8;
              local_c = 0;
              for (local_e = 0;
                  (puVar1 = local_1e, local_c <= (int)DAT_1010_1e56 >> 0xf &&
                  ((local_c < (int)DAT_1010_1e56 >> 0xf || (local_e < DAT_1010_1e56))));
                  local_e = local_e + DAT_1010_0028) {
                if ((undefined1 *)local_1e == (undefined1 *)0xffff) {
                  local_1e._2_2_ = local_1e._2_2_ + 0x68;
                }
                local_1e = (undefined1 *)CONCAT22(local_1e._2_2_,(undefined1 *)local_1e + 1);
                *puVar1 = *local_22;
                local_22 = (undefined1 *)
                           CONCAT22(local_22._2_2_ +
                                    (((int)DAT_1010_0028 >> 0xf) +
                                    (uint)CARRY2((uint)(undefined1 *)local_22,DAT_1010_0028)) * 0x10
                                    ,(undefined1 *)local_22 + DAT_1010_0028);
                local_c = local_c + ((int)DAT_1010_0028 >> 0xf) +
                          (uint)CARRY2(local_e,DAT_1010_0028);
              }
              local_8 = local_8 + ((int)DAT_1010_0028 >> 0xf) + (uint)CARRY2(local_a,DAT_1010_0028);
            }
            DAT_1010_1b5a = DAT_1010_1b5a + uVar4;
          }
          GLOBALUNLOCK(uVar13,iVar5);
          GLOBALFREE(0x1018,iVar5);
          GLOBALUNLOCK(0x1018,iVar2);
          return iVar2;
        }
        GLOBALUNLOCK(0x1018,iVar2);
        GLOBALFREE(0x1018,iVar2);
        iVar2 = iVar5;
      }
    }
    GLOBALFREE(0x1018,iVar2);
  }
  return 0;
}


// ---- FUN_1008_aff2 @ 1008:aff2

undefined2 __cdecl16far FUN_1008_aff2(undefined2 param_1,undefined2 param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1010;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    uVar2 = Ordinal_537(0x1018,param_1,param_2,uVar2,uVar3);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


// ---- FUN_1008_b01c @ 1008:b01c

undefined2 __cdecl16far FUN_1008_b01c(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1010;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    uVar2 = Ordinal_8018(0x1018,uVar2,uVar3);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


// ---- FUN_1008_b040 @ 1008:b040

undefined2 __cdecl16far FUN_1008_b040(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1010;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    uVar2 = Ordinal_8017(0x1018,uVar2,uVar3);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


// ---- FUN_1008_b064 @ 1008:b064

undefined2 __cdecl16far FUN_1008_b064(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1010;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    uVar2 = Ordinal_8000(0x1018,uVar2,uVar3);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


// ---- FUN_1008_b088 @ 1008:b088

void __cdecl16far FUN_1008_b088(float *param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1010;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_8001(0x1018,(float *)param_1,param_1._2_2_,uVar2,uVar3);
  }
  else {
    *(undefined1 *)((float *)param_1 + 4) = 0;
    *(undefined2 *)((int)(float *)param_1 + 0xe) = 0;
    *(undefined2 *)((float *)param_1 + 3) = 0;
    if (DAT_1010_013c != '\0') {
      *param_1 = (float)((((int)DAT_1010_013d - (int)DAT_1010_013c) * 100) / (int)DAT_1010_013d);
      DAT_1010_013c = DAT_1010_013c + -1;
      if (DAT_1010_013c == '\0') {
        *(byte *)((float *)param_1 + 3) = *(byte *)((float *)param_1 + 3) | 8;
      }
    }
  }
  return;
}


// ---- FUN_1008_b0fc @ 1008:b0fc

void __cdecl16far FUN_1008_b0fc(undefined1 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1010;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_8002(0x1018,param_1);
  }
  else {
    FUN_1008_b5f0(uVar2,uVar3);
    M007_PUTSTATE(0x1008,1);
  }
  return;
}


// ---- FUN_1008_b134 @ 1008:b134

void __cdecl16far FUN_1008_b134(undefined1 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1010;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_8003(0x1018,param_1,uVar2,uVar3);
  }
  else {
    DAT_1010_013c = 0x14;
    DAT_1010_013d = 0x14;
  }
  return;
}


// ---- FUN_1008_b162 @ 1008:b162

void __cdecl16far FUN_1008_b162(undefined1 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1010;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_8004(0x1018,param_1,uVar2,uVar3);
  }
  else {
    DAT_1010_013c = 0x14;
    DAT_1010_013d = 0x14;
  }
  return;
}


// ---- FUN_1008_b190 @ 1008:b190

void __cdecl16far FUN_1008_b190(undefined1 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1010;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_8005(0x1018,param_1,uVar2,uVar3);
  }
  else {
    DAT_1010_013c = 0x14;
    DAT_1010_013d = 0x14;
  }
  return;
}


// ---- FUN_1008_b1be @ 1008:b1be

void __cdecl16far FUN_1008_b1be(float param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1010;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_8007(0x1018,(double)param_1,uVar2,uVar3);
  }
  return;
}


// ---- FUN_1008_b1ec @ 1008:b1ec

void __cdecl16far FUN_1008_b1ec(undefined1 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1010;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_8008(0x1018,param_1,uVar2,uVar3);
  }
  return;
}


// ---- FUN_1008_b210 @ 1008:b210

void __cdecl16far FUN_1008_b210(undefined1 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1010;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_8010(0x1018,param_1,uVar2,uVar3);
  }
  return;
}


// ---- FUN_1008_b234 @ 1008:b234

void __cdecl16far FUN_1008_b234(float param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1010;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_8012(0x1018,(double)param_1,uVar2,uVar3);
  }
  return;
}


// ---- FUN_1008_b262 @ 1008:b262

void __cdecl16far FUN_1008_b262(float param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1010;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_8013(0x1018,(double)param_1,uVar2,uVar3);
  }
  return;
}


// ---- FUN_1008_b290 @ 1008:b290

undefined2 __cdecl16far
FUN_1008_b290(undefined2 param_1,undefined2 param_2,undefined1 param_3,undefined1 param_4,
             int param_5)

{
  int iVar1;
  undefined1 uVar4;
  int iVar2;
  int iVar3;
  undefined1 extraout_AH;
  long lVar5;
  int iVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  bool local_14;
  
  uVar9 = 0x1010;
  local_14 = true;
  uVar8 = 0x83;
  iVar1 = M007_GETSTATE();
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar1 = _LOPEN(0x1018,0,param_1);
    if (iVar1 != -1) {
      uVar7 = 0;
      iVar6 = -0x4d2c;
      iVar2 = GLOBALALLOC(0x1018,param_5,0);
      if (iVar2 != 0) {
        iVar6 = -0x4d1f;
        lVar5 = GLOBALLOCK(0x1018,iVar2,uVar7,param_2,uVar8,uVar9);
        if (lVar5 != 0) {
          iVar6 = iVar1;
          iVar3 = _LREAD(0x1018,param_5,lVar5);
          if (iVar3 == param_5) {
            DAT_1010_1b0d = 2;
            Ordinal_536(0x1018,(undefined2 *)&DAT_1010_1b06,0x1010,iVar6);
            DAT_1010_1b63 = param_3;
            DAT_1010_1b61 = param_4;
            DAT_1010_1b64 = 2;
            Ordinal_109(0x1018,0,param_5,DAT_1010_1b06,DAT_1010_1b08,lVar5);
            Ordinal_535(0x1018,(undefined2 *)&DAT_1010_1b56,0x1010);
          }
          local_14 = iVar3 != param_5;
          iVar6 = iVar2;
          GLOBALUNLOCK(0x1018,iVar2);
        }
        GLOBALFREE(0x1018,iVar2,iVar6);
        iVar6 = iVar2;
      }
      _LCLOSE(0x1018,iVar1,iVar6);
      uVar4 = extraout_AH;
      goto LAB_1008_b35e;
    }
  }
  uVar4 = (undefined1)((uint)iVar1 >> 8);
LAB_1008_b35e:
  return CONCAT11(uVar4,local_14);
}


// ---- FUN_1008_b366 @ 1008:b366

uint __cdecl16far FUN_1008_b366(void)

{
  int iVar1;
  uint uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  uVar4 = 0x1010;
  DAT_1010_1b63 = 5;
  DAT_1010_1b64 = 2;
  uVar3 = 0x83;
  iVar1 = M007_GETSTATE();
  uVar2 = iVar1 - 1;
  if (uVar2 == 0) {
    uVar2 = Ordinal_535(0x1018,(undefined2 *)&DAT_1010_1b56,0x1010,uVar3,uVar4);
  }
  return uVar2 & 0xff00;
}


// ---- FUN_1008_b39a @ 1008:b39a

uint __cdecl16far FUN_1008_b39a(undefined1 param_1)

{
  int iVar1;
  uint uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  uVar4 = 0x1010;
  DAT_1010_1b63 = 6;
  DAT_1010_1b64 = 2;
  DAT_1010_1b61 = param_1;
  uVar3 = 0x83;
  iVar1 = M007_GETSTATE();
  uVar2 = iVar1 - 1;
  if (uVar2 == 0) {
    uVar2 = Ordinal_535(0x1018,(undefined2 *)&DAT_1010_1b56,0x1010,uVar3,uVar4);
  }
  return uVar2 & 0xff00;
}


// ---- FUN_1008_b3d4 @ 1008:b3d4

void __cdecl16far FUN_1008_b3d4(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1010;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_6006(0x1018,uVar2,uVar3);
  }
  return;
}


// ---- FUN_1008_b3f4 @ 1008:b3f4

void __cdecl16far FUN_1008_b3f4(void)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 in_stack_0000ffd4;
  undefined2 in_stack_0000ffd6;
  undefined2 in_stack_0000ffd8;
  undefined2 uVar3;
  undefined1 local_1a [4];
  undefined1 local_16 [4];
  undefined1 local_12 [4];
  undefined1 local_e [4];
  undefined2 local_a;
  undefined2 local_8;
  undefined2 local_6;
  undefined2 local_4;
  
  uVar2 = 0x1008;
  FUN_1008_b6b6(DAT_1010_0c6a,0x1010);
  if ((DAT_1010_0c68 == 0) || (DAT_1010_0c68 == 1)) {
    uVar1 = 0x300;
  }
  else if ((DAT_1010_0c68 == 2) || (DAT_1010_0c68 == 4)) {
    uVar1 = 0x180;
  }
  else {
    if (DAT_1010_0c68 != 5) goto LAB_1008_b4ea;
    uVar2 = 0x4c;
    M007_GETVALUE(0x1008,local_e);
    local_4 = FUN_1000_05e2(uVar2);
    uVar2 = 0x4d;
    M007_GETVALUE(0x1000,local_12);
    local_6 = FUN_1000_05e2(uVar2);
    uVar2 = 0x4e;
    M007_GETVALUE(0x1000,local_16);
    in_stack_0000ffd6 = FUN_1000_05e2(uVar2);
    uVar3 = 0;
    in_stack_0000ffd4 = 0x4f;
    in_stack_0000ffd8 = local_6;
    uVar1 = local_4;
    local_a = in_stack_0000ffd6;
    M007_GETVALUE(0x1000,local_1a);
    uVar2 = 0x1000;
    uVar1 = FUN_1000_05e2(in_stack_0000ffd4,in_stack_0000ffd6,in_stack_0000ffd8,uVar1,uVar3);
    local_8 = uVar1;
  }
  SETEOCOLUMNSCAN(uVar2,uVar1,in_stack_0000ffd4,in_stack_0000ffd6,in_stack_0000ffd8);
  uVar2 = 0x1018;
LAB_1008_b4ea:
  if (DAT_1010_0c6c == 1) {
    Ordinal_13(uVar2,1);
  }
  return;
}


// ---- FUN_1008_b500 @ 1008:b500

void __cdecl16far FUN_1008_b500(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  
  uVar5 = 0x1010;
  uVar4 = 0x1e;
  DAT_1010_0c68 = M007_GETSTATE();
  DAT_1010_0c6a = M007_GETSTATE(0x1018,0x11,uVar4,uVar5);
  DAT_1010_0c6c = M007_GETSTATE(0x1018,0x1f);
  FUN_1008_b792();
  if (param_1 == 0) {
    uVar3 = 0x1018;
    uVar4 = 0xb53d;
    DOCOMMANDSCANRATE7(0x1008);
  }
  else {
    iVar1 = M007_GETSTATE(0x1008,0xb8);
    if (iVar1 == 0) {
      uVar4 = 0xba;
    }
    else {
      uVar4 = 0xb9;
    }
    uVar5 = M007_GETSTATE(0x1018,uVar4);
    uVar3 = 0x1008;
    FUN_1008_b67e(uVar5);
  }
  Ordinal_34(uVar3,0x300,0x400,0,0,uVar4);
  uVar2 = M007_GETSTATE(0x1018,0xc0);
  if (uVar2 == 2) {
    uVar2 = 1;
  }
  else {
    uVar2 = uVar2 & 0xff00;
  }
  Ordinal_8009(0x1018,uVar2);
  return;
}


// ---- FUN_1008_b592 @ 1008:b592

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_1008_b592(void)

{
  float *pfVar1;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined1 local_a [4];
  undefined4 local_6;
  
  pfVar1 = (float *)M007_GETVALUE(unaff_CS,local_a);
  local_6 = *pfVar1 + _DAT_1010_0714;
  if (DAT_1010_0718 < local_6) {
    local_6 = _DAT_1010_0714;
  }
  M007_PUTVALUE(0x1018,(undefined2)local_6,local_6._2_2_);
  return;
}


// ---- FUN_1008_b5f0 @ 1008:b5f0

void __cdecl16far FUN_1008_b5f0(void)

{
  int iVar1;
  undefined2 in_stack_0000ffe8;
  undefined2 in_stack_0000ffea;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1010;
  uVar2 = 0x8f;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    iVar1 = M007_GETSTATE(0x1018,0xb8,uVar2,uVar3);
    if (iVar1 == 0) {
      uVar2 = 0xba;
    }
    else {
      uVar2 = 0xb9;
    }
    iVar1 = M007_GETSTATE(0x1018,uVar2);
    in_stack_0000ffe8 = DAT_1010_0720;
    in_stack_0000ffea = DAT_1010_0722;
    if (((iVar1 != 0) &&
        (in_stack_0000ffe8 = DAT_1010_0724, in_stack_0000ffea = DAT_1010_0726, iVar1 != 1)) &&
       (in_stack_0000ffe8 = DAT_1010_0728, in_stack_0000ffea = DAT_1010_072a, iVar1 != 2)) {
      in_stack_0000ffe8 = DAT_1010_072c;
      in_stack_0000ffea = DAT_1010_072e;
    }
  }
  M007_PUTVALUE(0x1018,in_stack_0000ffe8,in_stack_0000ffea);
  return;
}


// ---- FUN_1008_b67e @ 1008:b67e

void __cdecl16far FUN_1008_b67e(int param_1)

{
  if (param_1 == 0) {
    DOCOMMANDSCANRATE7();
  }
  else if (param_1 == 1) {
    DOCOMMANDSCANRATE8();
  }
  else if (param_1 == 2) {
    DOCOMMANDSCANRATE9();
  }
  else {
    DOCOMMANDSCANRATE10();
  }
  return;
}


// ---- FUN_1008_b6b6 @ 1008:b6b6

void __cdecl16far FUN_1008_b6b6(undefined2 param_1)

{
  switch(param_1) {
  case 0:
    DOCOMMANDSCANRATE0(0x1008);
    break;
  case 1:
    DOCOMMANDSCANRATE1(0x1008);
    break;
  case 2:
    DOCOMMANDSCANRATE2(0x1008);
    break;
  case 3:
    DOCOMMANDSCANRATE3(0x1008);
    break;
  case 4:
    DOCOMMANDSCANRATE4(0x1008);
    break;
  case 5:
    DOCOMMANDSCANRATE5(0x1008);
    break;
  case 6:
    DOCOMMANDSCANRATE6(0x1008);
    break;
  case 7:
    DOCOMMANDSCANRATE7(0x1008);
    break;
  case 8:
    DOCOMMANDSCANRATE8(0x1008);
    break;
  case 9:
    DOCOMMANDSCANRATE9(0x1008);
    break;
  case 10:
    DOCOMMANDSCANRATE10(0x1008);
    break;
  case 0xb:
    DOCOMMANDSCANRATE11(0x1008);
    break;
  case 0xc:
    DOCOMMANDSCANRATE12(0x1008);
    break;
  case 0xd:
    DOCOMMANDSCANRATE13(0x1008);
    break;
  case 0xe:
    DOCOMMANDSCANRATE14(0x1008);
    break;
  case 0xf:
    DOCOMMANDSCANRATE15(0x1008,0x1010);
  }
  return;
}


// ---- FUN_1008_b76a @ 1008:b76a

void __cdecl16far FUN_1008_b76a(void)

{
  undefined2 unaff_CS;
  
  M007_PUTSTATE(unaff_CS,0);
  M007_PUTSTATE(0x1018,3);
  return;
}


// ---- FUN_1008_b792 @ 1008:b792

void __cdecl16far FUN_1008_b792(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  
  uVar7 = 0x1010;
  uVar6 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    uVar5 = 0x1008;
    iVar1 = _LOPEN(0x1018,0,0xb98a);
    if (iVar1 == -1) {
      Ordinal_8011(0x1018,DAT_1010_0730,DAT_1010_0732,DAT_1010_0734,DAT_1010_0736);
      Ordinal_8006(0x1018);
    }
    else {
      iVar3 = iVar1;
      iVar2 = _LREAD(0x1018,0x28,0xc94,0x1010);
      if (iVar2 == 0x28) {
        iVar3 = M007_GETSTATE(0x1018,0x90,iVar3,uVar5,uVar6,uVar7);
        DAT_1010_0c6e = (float)CONCAT31(DAT_1010_0c6e._1_3_,*(undefined1 *)(iVar3 * 8 + 0xc94));
        iVar3 = M007_GETSTATE(0x1018,0x90);
        DAT_1010_0c6e._0_2_ = CONCAT11(*(undefined1 *)(iVar3 * 8 + 0xc95),DAT_1010_0c6e._0_1_);
        iVar3 = M007_GETSTATE(0x1018,0x90);
        DAT_1010_0c6e._0_3_ = CONCAT12(*(undefined1 *)(iVar3 * 8 + 0xc96),DAT_1010_0c6e._0_2_);
        uVar6 = 0x90;
        iVar3 = M007_GETSTATE();
        DAT_1010_0c6e = (float)CONCAT13(*(undefined1 *)(iVar3 * 8 + 0xc97),DAT_1010_0c6e._0_3_);
        Ordinal_8011(0x1018,(double)DAT_1010_0c6e,uVar6);
        iVar3 = M007_GETSTATE(0x1018,0x90);
        DAT_1010_0c6e = (float)CONCAT31(DAT_1010_0c6e._1_3_,*(undefined1 *)(iVar3 * 8 + 0xc98));
        iVar3 = M007_GETSTATE(0x1018,0x90);
        DAT_1010_0c6e._0_2_ = CONCAT11(*(undefined1 *)(iVar3 * 8 + 0xc99),DAT_1010_0c6e._0_1_);
        iVar3 = M007_GETSTATE(0x1018,0x90);
        DAT_1010_0c6e._0_3_ = CONCAT12(*(undefined1 *)(iVar3 * 8 + 0xc9a),DAT_1010_0c6e._0_2_);
        iVar3 = M007_GETSTATE();
        DAT_1010_0c6e = (float)CONCAT13(*(undefined1 *)(iVar3 * 8 + 0xc9b),DAT_1010_0c6e._0_3_);
        dVar4 = (double)DAT_1010_0c6e;
      }
      else {
        Ordinal_8011();
        dVar4 = (double)CONCAT62(CONCAT42(CONCAT22(DAT_1010_0736,DAT_1010_0734),DAT_1010_0732),
                                 DAT_1010_0730);
      }
      Ordinal_8006(0x1018,dVar4);
      _LCLOSE(0x1018,iVar1);
    }
  }
  return;
}


// ---- FUN_1008_b91a @ 1008:b91a

void __cdecl16far FUN_1008_b91a(float param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1010;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_8014(0x1018,(double)param_1,uVar2,uVar3);
  }
  return;
}


// ---- FUN_1008_b948 @ 1008:b948

void __cdecl16far FUN_1008_b948(undefined2 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1010;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_8015(0x1018,param_1,uVar2,uVar3);
  }
  return;
}


// ---- FUN_1008_b96a @ 1008:b96a

void __cdecl16far FUN_1008_b96a(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1010;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_8016(0x1018,uVar2,uVar3);
  }
  return;
}


// ---- FUN_1008_b99a @ 1008:b99a

void __cdecl16far FUN_1008_b99a(void)

{
  undefined2 uVar1;
  undefined2 unaff_CS;
  undefined2 uVar2;
  undefined2 local_6;
  undefined2 local_4;
  
  if (DAT_1010_10a0 == '\0') {
    uVar2 = 0;
    uVar1 = LOADCURSOR(unaff_CS,0x7f02,0);
    SETCURSOR(0x1018,uVar1,uVar2);
    uVar1 = 0x1018;
    EO_SPINMESSAGELOOP(0x1018);
    while (DAT_1010_0021 != '\0') {
      uVar1 = 0x1008;
      FUN_1008_b9fc();
    }
    GETCURSORPOS(uVar1,&local_6);
    SETCURSORPOS(0x1018,local_4,local_6);
  }
  else {
    FUN_1008_b9fc(0x1010);
  }
  return;
}


// ---- FUN_1008_b9fc @ 1008:b9fc

void __cdecl16far FUN_1008_b9fc(void)

{
  int iVar1;
  undefined2 unaff_CS;
  undefined2 uVar2;
  undefined1 local_18 [4];
  int local_14;
  float local_12;
  int local_e;
  undefined1 local_c [6];
  int local_6;
  int local_4;
  
  uVar2 = 0x1010;
  if (DAT_1010_0d9a == '\x01') {
    switch(DAT_1010_0ce4) {
    case 1:
      iVar1 = FUN_1008_bdb6();
      break;
    case 2:
    case 4:
      iVar1 = FUN_1008_bc3e();
      break;
    case 3:
      iVar1 = FUN_1008_bcfa();
      break;
    case 5:
      iVar1 = FUN_1008_bf5e();
      break;
    case 6:
      iVar1 = FUN_1008_bea2();
      break;
    case 7:
      iVar1 = FUN_1008_c0be();
      break;
    case 8:
      iVar1 = FUN_1008_c17a();
      break;
    default:
      goto switchD_1008_ba5c_default;
    }
    if (iVar1 != 1) {
      return;
    }
  }
  else {
    local_4 = 0;
    while( true ) {
      if (4 < local_4) {
        if (DAT_1010_0ce7 == '\x01') {
          local_12 = ((float)DAT_1010_0cd4 + (float)DAT_1010_0cbe / (float)DAT_1010_0cdc) *
                     DAT_1010_073c;
        }
        else {
          local_12 = ((float)DAT_1010_0cbe / (float)DAT_1010_0cdc) * DAT_1010_0738;
        }
        M007_PUTVALUE(unaff_CS,DAT_1010_0738 - local_12);
        return;
      }
      if (DAT_1010_0cdc <= DAT_1010_0cbe) break;
      if (DAT_1010_0d8a == 0) {
        iVar1 = FUN_1008_76f6((undefined1 *)&DAT_1010_12f6,0x1010,DAT_1010_0ce0,0);
        if (iVar1 == 1) goto switchD_1008_ba5c_default;
        DAT_1010_0d8a = DAT_1010_0ce0;
      }
      local_6 = FUN_1008_d3c8(DAT_1010_0cd6,
                              (undefined1 *)&DAT_1010_12f6 + (DAT_1010_0ce0 - DAT_1010_0d8a),0x1010,
                              DAT_1010_0d8a);
      if (local_6 < 1) {
        local_e = FUN_1008_d34e(DAT_1010_0cd6,local_c);
        if ((local_e != 0x100) && (local_e != 0)) goto switchD_1008_ba5c_default;
        DAT_1010_0d8a = DAT_1010_0d8a + local_6;
      }
      else {
        DAT_1010_0d8a = 0;
        DAT_1010_0cbe = DAT_1010_0cbe + 1;
      }
      unaff_CS = 0x1008;
      local_4 = local_4 + 1;
    }
    if ((DAT_1010_0ce7 == '\x01') && (DAT_1010_0cd4 < 2)) {
      DAT_1010_0cbe = 0;
      DAT_1010_0cd4 = DAT_1010_0cd4 + 1;
      return;
    }
    if (DAT_1010_0d98 != '\x01') {
      FUN_1008_c272(uVar2);
      return;
    }
    uVar2 = 0x108;
    M007_GETVALUE(unaff_CS,local_18);
    local_14 = FUN_1000_05e2(uVar2);
    local_14 = local_14 + -1;
    if (local_14 == 0) {
      FUN_1008_b592();
    }
    else {
      iVar1 = FUN_1008_772c(0,0);
      if (iVar1 == 0) {
        uVar2 = 0x108;
        M007_PUTVALUE(0x1008,(float)local_14);
        DAT_1010_0d98 = DAT_1010_0d99;
        FUN_1008_d194(uVar2);
        return;
      }
    }
  }
switchD_1008_ba5c_default:
  FUN_1008_c1fa();
  return;
}


// ---- FUN_1008_bc3e @ 1008:bc3e

undefined2 __cdecl16far FUN_1008_bc3e(void)

{
  int iVar1;
  undefined1 local_a [6];
  int local_4;
  
  if (DAT_1010_0d8a == 0) {
    DAT_1010_12f6 = 0x1b;
    DAT_1010_12f7 = 0x58;
    DAT_1010_12f8 = 0x30;
    DAT_1010_12f9 = DAT_1010_0cdc._1_1_;
    DAT_1010_12fa = (undefined1)DAT_1010_0cdc;
    DAT_1010_12fb = FUN_1000_05e2(0x1010,DAT_1010_0cdc,0,0,0);
    DAT_1010_0d8a = 6;
  }
  local_4 = FUN_1008_d3c8(DAT_1010_0cd6,(int)(undefined1 *)&DAT_1010_12fc - DAT_1010_0d8a,0x1010,
                          DAT_1010_0d8a);
  if (local_4 < 1) {
    iVar1 = FUN_1008_d34e(DAT_1010_0cd6,local_a);
    if ((iVar1 != 0x100) && (iVar1 != 0)) {
      return 1;
    }
    DAT_1010_0d8a = DAT_1010_0d8a + local_4;
  }
  else {
    DAT_1010_0d9a = 0;
    DAT_1010_0d8a = 0;
  }
  return 0;
}


// ---- FUN_1008_bcfa @ 1008:bcfa

undefined2 __cdecl16far FUN_1008_bcfa(void)

{
  int iVar1;
  undefined1 local_a [6];
  int local_4;
  
  if (DAT_1010_0d8a == 0) {
    DAT_1010_12f6 = 0x1b;
    DAT_1010_12f7 = 0x53;
    DAT_1010_12f8 = 0x30;
    DAT_1010_12f9 = DAT_1010_0cdc._1_1_;
    DAT_1010_12fa = (undefined1)DAT_1010_0cdc;
    DAT_1010_12fb = FUN_1000_05e2(0x1010,DAT_1010_0cdc,0,0,0);
    DAT_1010_0d8a = 6;
  }
  local_4 = FUN_1008_d3c8(DAT_1010_0cd6,(int)(undefined1 *)&DAT_1010_12fc - DAT_1010_0d8a,0x1010,
                          DAT_1010_0d8a);
  if (local_4 < 1) {
    iVar1 = FUN_1008_d34e(DAT_1010_0cd6,local_a);
    if ((iVar1 != 0x100) && (iVar1 != 0)) {
      return 1;
    }
    DAT_1010_0d8a = DAT_1010_0d8a + local_4;
  }
  else {
    DAT_1010_0d9a = 0;
    DAT_1010_0d8a = 0;
  }
  return 0;
}


// ---- FUN_1008_bdb6 @ 1008:bdb6

undefined2 __cdecl16far FUN_1008_bdb6(void)

{
  int iVar1;
  undefined1 local_a [6];
  int local_4;
  
  if (DAT_1010_0d8a == 0) {
    DAT_1010_12f6 = 0x1b;
    if (DAT_1010_0ce5 == '\0') {
      DAT_1010_12f7 = 0x58;
    }
    else {
      DAT_1010_12f7 = 0x53;
    }
    DAT_1010_12fc = FUN_1000_05e2(0x1010,DAT_1010_0cdc,0,0,0);
    DAT_1010_12f8 = 0x55;
    DAT_1010_12f9 = 2;
    DAT_1010_12fa = DAT_1010_0cdc._1_1_;
    DAT_1010_12fb = (undefined1)DAT_1010_0cdc;
    DAT_1010_0d8a = 7;
  }
  local_4 = FUN_1008_d3c8(DAT_1010_0cd6,(int)(undefined1 *)&DAT_1010_12fd - DAT_1010_0d8a,0x1010,
                          DAT_1010_0d8a);
  if (local_4 < 1) {
    iVar1 = FUN_1008_d34e(DAT_1010_0cd6,local_a);
    if ((iVar1 != 0x100) && (iVar1 != 0)) {
      return 1;
    }
    DAT_1010_0d8a = DAT_1010_0d8a + local_4;
  }
  else {
    DAT_1010_0d9a = 0;
    DAT_1010_0d8a = 0;
  }
  return 0;
}


// ---- FUN_1008_bea2 @ 1008:bea2

undefined2 __cdecl16far FUN_1008_bea2(void)

{
  int iVar1;
  undefined1 local_a [6];
  int local_4;
  
  if (DAT_1010_0d8a == 0) {
    DAT_1010_12f6 = 0x1b;
    DAT_1010_12f7 = 0x53;
    DAT_1010_12f8 = 0;
    DAT_1010_12f9 = DAT_1010_0cdc._1_1_;
    DAT_1010_12fa = (undefined1)DAT_1010_0cdc;
    DAT_1010_12fb = FUN_1000_05e2(0x1010,DAT_1010_0cdc,0,0,0);
    DAT_1010_0d8a = 6;
  }
  local_4 = FUN_1008_d3c8(DAT_1010_0cd6,(int)(undefined1 *)&DAT_1010_12fc - DAT_1010_0d8a,0x1010,
                          DAT_1010_0d8a);
  if (local_4 < 1) {
    iVar1 = FUN_1008_d34e(DAT_1010_0cd6,local_a);
    if ((iVar1 != 0x100) && (iVar1 != 0)) {
      return 1;
    }
    DAT_1010_0d8a = DAT_1010_0d8a + local_4;
  }
  else {
    DAT_1010_0d9a = 0;
    DAT_1010_0d8a = 0;
  }
  return 0;
}


// ---- FUN_1008_bf5e @ 1008:bf5e

undefined2 __cdecl16far FUN_1008_bf5e(void)

{
  byte bVar2;
  int iVar1;
  uint local_14;
  uint local_12;
  char local_c;
  undefined1 local_a [6];
  int local_4;
  
  if (DAT_1010_0d8a == 0) {
    if (DAT_1010_0ce5 == '\0') {
      local_12 = 0;
    }
    else {
      local_12 = (0x800 - DAT_1010_0cda) / DAT_1010_0cda;
      if (7 < local_12) {
        local_12 = 7;
      }
    }
    iVar1 = (-1 - local_12) * DAT_1010_0cda;
    bVar2 = (char)((uint)iVar1 >> 8) + 8;
    DAT_1010_12f6 = 1;
    DAT_1010_12f7 = bVar2 >> 1;
    DAT_1010_12f8 = (undefined1)(CONCAT11(bVar2,(char)iVar1) >> 1);
    DAT_1010_12f9 = DAT_1010_0cda._1_1_;
    DAT_1010_12fa = (undefined1)DAT_1010_0cda;
    DAT_1010_12fb = DAT_1010_0cdc._1_1_;
    DAT_1010_12fc = (undefined1)DAT_1010_0cdc;
    DAT_1010_12fe = (undefined1)local_12;
    DAT_1010_1300 = (undefined1)local_12;
    DAT_1010_1303 = 0x20;
    DAT_1010_1304 = 0x20;
    DAT_1010_1305 = 0x20;
    DAT_1010_1306 = 0x20;
    DAT_1010_1307 = 8;
    DAT_1010_1308 = 0x32;
    DAT_1010_12ff = 0;
    DAT_1010_1302 = 0;
    DAT_1010_1309 = 0;
    DAT_1010_12fd = 0xff;
    DAT_1010_1301 = 0xff;
    DAT_1010_130a = 0xff;
    DAT_1010_130b = 0xff;
    local_14 = 0x16;
    do {
      ((undefined1 *)&DAT_1010_12f6)[local_14] = 0;
      local_14 = local_14 + 1;
    } while (local_14 < 0x20);
    local_14 = 0x20;
    do {
      ((undefined1 *)&DAT_1010_12f6)[local_14] = 0;
      local_14 = local_14 + 1;
    } while (local_14 < 0x80);
    local_c = '\0';
    local_14 = 0x80;
    do {
      ((undefined1 *)&DAT_1010_12f6)[local_14] = local_c;
      local_14 = local_14 + 1;
      local_c = local_c + '\x01';
    } while (local_14 < 0x180);
    DAT_1010_0d8a = 0x180;
  }
  local_4 = FUN_1008_d3c8(DAT_1010_0cd6,0x1476 - DAT_1010_0d8a,0x1010,DAT_1010_0d8a,0x1010);
  if (local_4 < 1) {
    iVar1 = FUN_1008_d34e(DAT_1010_0cd6,local_a);
    if ((iVar1 != 0x100) && (iVar1 != 0)) {
      return 1;
    }
    DAT_1010_0d8a = DAT_1010_0d8a + local_4;
  }
  else {
    DAT_1010_0d9a = 0;
    DAT_1010_0d8a = 0;
  }
  return 0;
}


// ---- FUN_1008_c0be @ 1008:c0be

undefined2 __cdecl16far FUN_1008_c0be(void)

{
  int iVar1;
  undefined1 local_a [6];
  int local_4;
  
  if (DAT_1010_0d8a == 0) {
    DAT_1010_12f6 = 0x1b;
    DAT_1010_12f7 = 0x53;
    DAT_1010_12f8 = 2;
    DAT_1010_12f9 = DAT_1010_0cdc._1_1_;
    DAT_1010_12fa = (undefined1)DAT_1010_0cdc;
    DAT_1010_12fb = FUN_1000_05e2(0x1010,DAT_1010_0cdc,0,0,0);
    DAT_1010_0d8a = 6;
  }
  local_4 = FUN_1008_d3c8(DAT_1010_0cd6,(int)(undefined1 *)&DAT_1010_12fc - DAT_1010_0d8a,0x1010,
                          DAT_1010_0d8a);
  if (local_4 < 1) {
    iVar1 = FUN_1008_d34e(DAT_1010_0cd6,local_a);
    if ((iVar1 != 0x100) && (iVar1 != 0)) {
      return 1;
    }
    DAT_1010_0d8a = DAT_1010_0d8a + local_4;
  }
  else {
    DAT_1010_0d9a = 0;
    DAT_1010_0d8a = 0;
  }
  return 0;
}


// ---- FUN_1008_c17a @ 1008:c17a

undefined2 __cdecl16far FUN_1008_c17a(void)

{
  int iVar1;
  undefined1 local_a [6];
  int local_4;
  
  if (DAT_1010_0d8a == 0) {
    DAT_1010_12f6 = 0;
    DAT_1010_12f7 = 3;
    DAT_1010_0d8a = 2;
  }
  local_4 = FUN_1008_d3c8(DAT_1010_0cd6,(int)(undefined1 *)&DAT_1010_12f8 - DAT_1010_0d8a,0x1010,
                          DAT_1010_0d8a,0x1010);
  if (local_4 < 1) {
    iVar1 = FUN_1008_d34e(DAT_1010_0cd6,local_a);
    if ((iVar1 != 0x100) && (iVar1 != 0)) {
      return 1;
    }
    DAT_1010_0d8a = DAT_1010_0d8a + local_4;
  }
  else {
    DAT_1010_0d9a = 0;
    DAT_1010_0d8a = 0;
  }
  return 0;
}


// ---- FUN_1008_c1fa @ 1008:c1fa

void __cdecl16far FUN_1008_c1fa(void)

{
  FUN_1008_d35e(DAT_1010_0cd6,0x1010);
  FUN_1008_76a2();
  FUN_1008_7760();
  DAT_1010_0021 = 0;
  M007_PUTVALUE(0x1008,(float)DAT_1010_109e);
  M007_PUTSTATE(0x1018,0);
  M007_PUTVALUE(0x1018,DAT_1010_0750,DAT_1010_0752);
  return;
}


// ---- FUN_1008_c272 @ 1008:c272

void __cdecl16far FUN_1008_c272(void)

{
  int iVar1;
  int local_e;
  undefined1 local_a [6];
  int local_4;
  
  if (DAT_1010_0d8a == 0) {
    if (DAT_1010_0ce4 == '\x05') {
      DAT_1010_12f6 = 0xc;
      local_e = 1;
      do {
        ((undefined1 *)&DAT_1010_12f6)[local_e] = 10;
        local_e = local_e + 1;
      } while (local_e < 0x15);
      DAT_1010_0d8a = 0x15;
      DAT_1010_0d8c = DAT_1010_0d8a;
    }
    else {
      if (DAT_1010_0ce4 == '\a') {
        DAT_1010_12f6 = 0x1b;
        DAT_1010_12f7 = 0x45;
      }
      else {
        if (DAT_1010_0ce4 != '\b') {
          DAT_1010_12f7 = 0x53;
          DAT_1010_12f8 = 0x51;
          DAT_1010_12fa = 0x45;
          DAT_1010_12f6 = 0x1b;
          DAT_1010_12f9 = 0x1b;
          DAT_1010_12fb = 0x1b;
          DAT_1010_12fc = 0x54;
          DAT_1010_0d8a = 7;
          DAT_1010_0d8c = DAT_1010_0d8a;
          goto LAB_1008_c2fd;
        }
        DAT_1010_12f6 = 1;
        DAT_1010_12f7 = 0;
      }
      DAT_1010_0d8a = 2;
      DAT_1010_0d8c = DAT_1010_0d8a;
    }
  }
LAB_1008_c2fd:
  local_4 = FUN_1008_d3c8(DAT_1010_0cd6,
                          (undefined1 *)&DAT_1010_12f6 + (DAT_1010_0d8c - DAT_1010_0d8a),0x1010,
                          DAT_1010_0d8a,0x1010);
  if (local_4 < 1) {
    iVar1 = FUN_1008_d34e(DAT_1010_0cd6,local_a);
    if ((iVar1 == 0x100) || (iVar1 == 0)) {
      DAT_1010_0d8a = DAT_1010_0d8a + local_4;
    }
    else {
      FUN_1008_b592();
      FUN_1008_c1fa();
    }
  }
  else {
    DAT_1010_0d98 = 1;
    DAT_1010_0d8a = 0;
  }
  return;
}


// ---- FUN_1008_c362 @ 1008:c362

void __cdecl16far FUN_1008_c362(undefined2 param_1,char param_2)

{
  int iVar1;
  undefined2 unaff_SS;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined1 local_10 [4];
  int local_c;
  int local_a;
  int local_8;
  undefined1 local_6 [4];
  
  uVar3 = 0x1010;
  uVar2 = 0xb2;
  DAT_1010_0ce4 = M007_GETSTATE();
  DAT_1010_0d9b = param_2;
  DAT_1010_0ce8 = param_1;
  DAT_1010_0ce5 = M007_GETSTATE(0x1018,0xb4,uVar2,uVar3);
  DAT_1010_0ce6 = M007_GETSTATE(0x1018,0xc3);
  DAT_1010_10a0 = M007_GETSTATE(0x1018,0xf7);
  uVar2 = 0x108;
  M007_GETVALUE(0x1018,local_10);
  DAT_1010_109e = FUN_1000_05e2(uVar2);
  if (DAT_1010_0ce4 != '\0') {
    if (((DAT_1010_0ce4 == '\x01') || (DAT_1010_0ce4 == '\x06')) || (DAT_1010_0ce4 == '\a')) {
      DAT_1010_0ce7 = 0;
      local_a = 1;
      local_6[0] = 0;
      DAT_1010_0d96 = 0;
      DAT_1010_0d98 = DAT_1010_0ce6 != '\x01';
      DAT_1010_0d99 = DAT_1010_0d98;
      if ((DAT_1010_0ce5 == '\0') && (DAT_1010_0ce4 == '\x01')) {
        DAT_1010_0ce0 = 0x500;
        DAT_1010_0ce2 = 400;
      }
      else if (DAT_1010_0ce4 == '\a') {
        DAT_1010_0ce0 = 0x280;
        DAT_1010_0ce2 = 0x280;
      }
      else {
        DAT_1010_0ce0 = 0x280;
        DAT_1010_0ce2 = 800;
      }
    }
    if ((DAT_1010_0ce4 == '\x02') || (DAT_1010_0ce4 == '\x04')) {
      DAT_1010_0ce7 = 1;
      local_a = 3;
      local_6[0] = 2;
      local_6[1] = 1;
      local_6[2] = 0;
      DAT_1010_0ce0 = 0x500;
      if (DAT_1010_0ce5 == '\x01') {
        DAT_1010_0ce2 = 0x4c4;
      }
      else {
        DAT_1010_0ce2 = 0x3c0;
      }
      DAT_1010_0d96 = 0x280;
      DAT_1010_0d98 = 1;
      DAT_1010_0d99 = 1;
    }
    if (DAT_1010_0ce4 == '\x03') {
      DAT_1010_0ce7 = 1;
      local_a = 3;
      local_6[0] = 0;
      local_6[1] = 1;
      local_6[2] = 2;
      if (DAT_1010_0ce5 == '\x01') {
        DAT_1010_0ce0 = 0x200;
        DAT_1010_0ce2 = 0x2e8;
      }
      else {
        DAT_1010_0ce0 = 0x280;
        DAT_1010_0ce2 = 0x220;
      }
      DAT_1010_0d96 = 0x220;
      DAT_1010_0d98 = 1;
      DAT_1010_0d99 = 1;
    }
    if (DAT_1010_0ce4 == '\x05') {
      DAT_1010_0ce7 = 0;
      local_a = 1;
      local_6[0] = 0;
      DAT_1010_0d96 = 0;
      DAT_1010_0d98 = DAT_1010_0ce6 != '\x01';
      DAT_1010_0ce0 = 0x800;
      DAT_1010_0ce2 = 0xffff;
      DAT_1010_0d99 = DAT_1010_0d98;
    }
    if (DAT_1010_0ce4 == '\b') {
      local_a = 1;
      local_6[0] = 0;
      DAT_1010_0ce7 = 0;
      DAT_1010_0d98 = 0;
      DAT_1010_0d99 = 0;
      DAT_1010_0ce0 = 0x380;
      DAT_1010_0d96 = 0x264;
      DAT_1010_0ce2 = 0x264;
    }
    iVar1 = FUN_1008_c6e0();
    if (iVar1 == 0) {
      for (local_8 = 0; local_8 < local_a; local_8 = local_8 + 1) {
        if (DAT_1010_0ce4 == '\x06') {
          local_c = FUN_1008_cd56(DAT_1010_0d92);
        }
        else {
          local_c = FUN_1008_ccc8(DAT_1010_0d92);
        }
        if (local_c == 1) goto LAB_1008_c575;
        DAT_1010_0cd4 = local_6[local_8];
        DAT_1010_0cbc = 0;
        if (DAT_1010_0d9b == '\0') {
          FUN_1008_cc3a();
          FUN_1008_c8a2(0);
        }
        else {
          iVar1 = FUN_1008_ce58(0);
          if (iVar1 == 1) goto LAB_1008_c575;
        }
        for (DAT_1010_0cbe = 0; DAT_1010_0cbe < DAT_1010_0cdc; DAT_1010_0cbe = DAT_1010_0cbe + 1) {
          if (DAT_1010_0cc0 / DAT_1010_0cde <= DAT_1010_0cbc) {
            if (DAT_1010_0d9b == '\0') {
              FUN_1008_c8a2(DAT_1010_0cbe);
            }
            else {
              iVar1 = FUN_1008_ce58(DAT_1010_0cbe);
              if (iVar1 == 1) goto LAB_1008_c575;
            }
            DAT_1010_0cbc = 0;
          }
          if (DAT_1010_0ce4 == '\x06') {
            local_c = FUN_1008_cb3e(DAT_1010_0cbc);
          }
          else {
            local_c = FUN_1008_c9ec(DAT_1010_0cbc);
          }
          if (local_c == 1) goto LAB_1008_c575;
          DAT_1010_0cbc = DAT_1010_0cbc + 1;
        }
        if (DAT_1010_0ce4 == '\x06') {
          local_c = FUN_1008_cd56(DAT_1010_0d94);
        }
        else {
          local_c = FUN_1008_ccc8(DAT_1010_0d94);
        }
        if (local_c == 1) goto LAB_1008_c575;
      }
      if ((DAT_1010_0cd2 < 0xfffe) && (iVar1 = FUN_1008_cdea(), iVar1 == 1)) {
LAB_1008_c575:
        FUN_1008_cdb8();
      }
      else {
        if (DAT_1010_0cdc < DAT_1010_0d96) {
          DAT_1010_0cdc = DAT_1010_0d96;
        }
        if (DAT_1010_0ce4 == '\x06') {
          DAT_1010_0ce0 = DAT_1010_0ce0 >> 1;
        }
        FUN_1008_cdb8();
        iVar1 = FUN_1008_772c(0,0);
        if ((iVar1 == 0) && (DAT_1010_0cd6 = FUN_1008_d288(0x13e,0x1010,0,0), -1 < DAT_1010_0cd6)) {
          FUN_1008_d194();
          return;
        }
      }
      FUN_1008_76a2();
      FUN_1008_7760(0xcea,0x1010);
    }
  }
  return;
}


// ---- FUN_1008_c6e0 @ 1008:c6e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 __cdecl16far FUN_1008_c6e0(void)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined2 unaff_CS;
  long lVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  
  uVar7 = 0x1010;
  uVar6 = 0x1000;
  GETTEMPFILENAME(unaff_CS,0xcea,0x1010,0,0xd502,0x1008);
  iVar2 = FUN_1008_7676(0xcea,0x1010,uVar6,uVar7);
  uVar3 = DAT_1010_1e56;
  uVar4 = DAT_1010_11d0;
  if (iVar2 != 1) {
    if (DAT_1010_0ce8 == 0) {
      if (((int)((ulong)DAT_1010_1e56 * (ulong)DAT_1010_11d0 >> 0x10) != 0) ||
         (DAT_1010_0cc0 = DAT_1010_11d0, (int)((ulong)DAT_1010_1e56 * (ulong)DAT_1010_11d0) == -1))
      {
        DAT_1010_0cc0 = (uint)(0xfffe / (ulong)DAT_1010_1e56);
      }
      uVar4 = 0xfffe;
    }
    else {
      DAT_1010_1e56 = DAT_1010_11d0;
      DAT_1010_11d0 = uVar3;
      DAT_1010_0cc0 = 1;
    }
    uVar6 = 0;
    DAT_1010_0cc2 = GLOBALALLOC(0x1008,uVar4,0);
    if (DAT_1010_0cc2 == 0) {
      FUN_1008_76a2();
    }
    else {
      lVar5 = GLOBALLOCK(0x1018,DAT_1010_0cc2,uVar6);
      DAT_1010_0cc6 = (undefined2)((ulong)lVar5 >> 0x10);
      DAT_1010_0cc4 = (undefined2)lVar5;
      if (lVar5 == 0) {
        uVar6 = 0x1008;
        FUN_1008_76a2();
        iVar2 = DAT_1010_0cc2;
      }
      else {
        uVar6 = 0;
        DAT_1010_0cc8 = GLOBALALLOC(0x1018,0xfffe,0);
        if (DAT_1010_0cc8 == 0) {
          FUN_1008_76a2();
          uVar6 = 0x1018;
          GLOBALUNLOCK(0x1008,DAT_1010_0cc2);
          iVar2 = DAT_1010_0cc2;
        }
        else {
          lVar5 = GLOBALLOCK(0x1018,DAT_1010_0cc8,uVar6);
          _DAT_1010_0ccc = (undefined2)((ulong)lVar5 >> 0x10);
          DAT_1010_0cca = (undefined2)lVar5;
          if (lVar5 != 0) {
            DAT_1010_0cd2 = 0xfffe;
            uVar3 = (DAT_1010_1e56 - 1) / DAT_1010_0ce0;
            uVar4 = (DAT_1010_11d0 - 1) / DAT_1010_0ce2;
            if (uVar4 < uVar3) {
              uVar4 = uVar3;
            }
            DAT_1010_0cde = uVar4 + 1;
            DAT_1010_0cda = DAT_1010_1e56 / DAT_1010_0cde;
            DAT_1010_0cdc = DAT_1010_11d0 / DAT_1010_0cde;
            if (DAT_1010_0ce4 == '\x05') {
              DAT_1010_0d96 = DAT_1010_0cdc + 1;
              DAT_1010_0ce0 = DAT_1010_0cda;
              DAT_1010_0ce2 = DAT_1010_0cdc;
            }
            DAT_1010_0cd8 = DAT_1010_0ce0 - DAT_1010_0cda >> 1;
            if (DAT_1010_0cdc < DAT_1010_0d96) {
              DAT_1010_0d94 = -(DAT_1010_0cdc - DAT_1010_0d96) >> 1;
              DAT_1010_0d92 = -DAT_1010_0cdc - (DAT_1010_0d94 - DAT_1010_0d96);
            }
            else {
              DAT_1010_0d92 = 0;
              DAT_1010_0d94 = 0;
            }
            if (DAT_1010_0ce4 == '\b') {
              DAT_1010_0ce0 = 0x3c1;
            }
            uVar6 = 0;
            lVar1 = lVar5;
            goto LAB_1008_c89c;
          }
          FUN_1008_76a2();
          GLOBALUNLOCK(0x1008,DAT_1010_0cc2);
          uVar6 = 0x1018;
          GLOBALFREE(0x1018,DAT_1010_0cc2);
          iVar2 = DAT_1010_0cc8;
        }
      }
      GLOBALFREE(uVar6,iVar2);
    }
  }
  lVar5 = CONCAT22(_DAT_1010_0ccc,DAT_1010_0cca);
  uVar6 = 1;
  lVar1 = CONCAT22(DAT_1010_0cd0,DAT_1010_0cce);
LAB_1008_c89c:
  DAT_1010_0cd0 = (undefined2)((ulong)lVar1 >> 0x10);
  DAT_1010_0cce = (undefined2)lVar1;
  _DAT_1010_0ccc = (undefined2)((ulong)lVar5 >> 0x10);
  DAT_1010_0cca = (undefined2)lVar5;
  return uVar6;
}


// ---- FUN_1008_c8a2 @ 1008:c8a2

void __cdecl16far FUN_1008_c8a2(int param_1)

{
  uint uVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  uint local_e;
  undefined4 local_c;
  
  uVar5 = 0x1010;
  DAT_1010_1b61 = DAT_1010_1e58;
  DAT_1010_1b62 = DAT_1010_1e6e;
  DAT_1010_1b60 = DAT_1010_12e2;
  DAT_1010_1b63 = 0;
  if (DAT_1010_0ce7 == '\x01') {
    DAT_1010_1b65 = 1;
  }
  else {
    DAT_1010_1b65 = DAT_1010_1b04;
  }
  uVar4 = 99;
  DAT_1010_1b69 = M007_GETSTATE();
  DAT_1010_1b64 = 0;
  if (DAT_1010_0ce8 == 0) {
    DAT_1010_1b5c = DAT_1010_1e56;
    DAT_1010_1b5e = DAT_1010_0cc0;
    DAT_1010_1b58 = DAT_1010_1b44;
    DAT_1010_1b5a = param_1 * DAT_1010_0cde + DAT_1010_1b42;
  }
  else {
    DAT_1010_1b5c = DAT_1010_0cc0;
    DAT_1010_1b5e = DAT_1010_1e56;
    DAT_1010_1b58 = DAT_1010_1b44 - (param_1 * DAT_1010_0cde - DAT_1010_11d0);
    DAT_1010_1b5a = DAT_1010_1b42;
  }
  uVar1 = DAT_1010_0cc0 * DAT_1010_1e56;
  iVar3 = M007_GETSTATE(0x1018,0x83,uVar4,uVar5);
  if (iVar3 == 1) {
    Ordinal_535(0x1018,(undefined2 *)&DAT_1010_1b56,0x1010);
    Ordinal_105(0x1018,0,uVar1,DAT_1010_0cc4,DAT_1010_0cc6,DAT_1010_0d8e,DAT_1010_0d90);
    if (DAT_1010_0ce7 == '\x01') {
      iVar3 = M007_GETSTATE(0x1018,0xc0);
      if (iVar3 == 1) {
        FUN_1008_7930(DAT_1010_0cc4,DAT_1010_0cc6,DAT_1010_1b5c,DAT_1010_1b5e);
      }
    }
  }
  else {
    local_c = (undefined1 *)CONCAT22(DAT_1010_0cc6,DAT_1010_0cc4);
    for (local_e = 0; puVar2 = local_c, local_e < uVar1; local_e = local_e + 1) {
      local_c = (undefined1 *)CONCAT22(local_c._2_2_,(undefined1 *)local_c + 1);
      *puVar2 = (undefined1)local_e;
    }
  }
  return;
}


// ---- FUN_1008_c9ec @ 1008:c9ec

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 __cdecl16far FUN_1008_c9ec(int param_1)

{
  int iVar1;
  undefined4 local_8;
  uint local_4;
  
  if ((DAT_1010_0cd2 < DAT_1010_0ce0) && (iVar1 = FUN_1008_cdea(0x1010), iVar1 == 1)) {
    return 1;
  }
  if (DAT_1010_0ce4 == '\b') {
    for (local_4 = 0; local_4 < DAT_1010_0cd8; local_4 = local_4 + 1) {
      *_DAT_1010_0cca = 0xfc;
      _DAT_1010_0cca = (byte *)CONCAT22(_DAT_1010_0ccc,DAT_1010_0cca + 1);
    }
  }
  else {
    for (local_4 = 0; local_4 < DAT_1010_0cd8; local_4 = local_4 + 1) {
      *_DAT_1010_0cca = 0xff;
      _DAT_1010_0cca = (byte *)CONCAT22(_DAT_1010_0ccc,DAT_1010_0cca + 1);
    }
  }
  local_8 = (byte *)CONCAT22(DAT_1010_0cc6,
                             (byte *)(param_1 * DAT_1010_0cde * DAT_1010_1e56 + DAT_1010_0cc4));
  if (DAT_1010_0ce4 == '\b') {
    for (local_4 = DAT_1010_0cd8; local_4 < DAT_1010_0cda + DAT_1010_0cd8; local_4 = local_4 + 1) {
      *_DAT_1010_0cca = *local_8 & 0xfc;
      _DAT_1010_0cca = (byte *)CONCAT22(_DAT_1010_0ccc,DAT_1010_0cca + 1);
      local_8 = (byte *)CONCAT22(local_8._2_2_,(byte *)local_8 + DAT_1010_0cde);
    }
  }
  else {
    for (local_4 = DAT_1010_0cd8; local_4 < DAT_1010_0cda + DAT_1010_0cd8; local_4 = local_4 + 1) {
      *_DAT_1010_0cca = *local_8;
      _DAT_1010_0cca = (byte *)CONCAT22(_DAT_1010_0ccc,DAT_1010_0cca + 1);
      local_8 = (byte *)CONCAT22(local_8._2_2_,(byte *)local_8 + DAT_1010_0cde);
    }
  }
  if (DAT_1010_0ce4 == '\b') {
    for (local_4 = DAT_1010_0cda + DAT_1010_0cd8; local_4 < DAT_1010_0ce0 - 1; local_4 = local_4 + 1
        ) {
      *_DAT_1010_0cca = 0xfc;
      _DAT_1010_0cca = (byte *)CONCAT22(_DAT_1010_0ccc,DAT_1010_0cca + 1);
    }
    *_DAT_1010_0cca = 2;
    _DAT_1010_0cca = (byte *)CONCAT22(_DAT_1010_0ccc,DAT_1010_0cca + 1);
  }
  else {
    for (local_4 = DAT_1010_0cda + DAT_1010_0cd8; local_4 < DAT_1010_0ce0; local_4 = local_4 + 1) {
      *_DAT_1010_0cca = 0xff;
      _DAT_1010_0cca = (byte *)CONCAT22(_DAT_1010_0ccc,DAT_1010_0cca + 1);
    }
  }
  DAT_1010_0cd2 = DAT_1010_0cd2 - DAT_1010_0ce0;
  return 0;
}


// ---- FUN_1008_cb3e @ 1008:cb3e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 __cdecl16far FUN_1008_cb3e(int param_1)

{
  int iVar1;
  byte local_a;
  undefined4 local_8;
  uint local_4;
  
  if ((DAT_1010_0cd2 < DAT_1010_0ce0 >> 1) && (iVar1 = FUN_1008_cdea(0x1010), iVar1 == 1)) {
    return 1;
  }
  for (local_4 = 0; local_4 < DAT_1010_0cd8; local_4 = local_4 + 1) {
    if ((local_4 & 1) == 0) {
      local_a = 0xf;
    }
    else {
      local_a = local_a - 0x10;
      *_DAT_1010_0cca = local_a;
      _DAT_1010_0cca = (byte *)CONCAT22(_DAT_1010_0ccc,DAT_1010_0cca + 1);
    }
  }
  local_8 = (byte *)CONCAT22(DAT_1010_0cc6,
                             (byte *)(param_1 * DAT_1010_0cde * DAT_1010_1e56 + DAT_1010_0cc4));
  for (local_4 = DAT_1010_0cd8; local_4 < DAT_1010_0cda + DAT_1010_0cd8; local_4 = local_4 + 1) {
    if ((local_4 & 1) == 0) {
      local_a = *local_8 >> 4;
    }
    else {
      local_a = local_a + (*local_8 & 0xf0);
      *_DAT_1010_0cca = local_a;
      _DAT_1010_0cca = (byte *)CONCAT22(_DAT_1010_0ccc,DAT_1010_0cca + 1);
    }
    local_8 = (byte *)CONCAT22(local_8._2_2_,(byte *)local_8 + DAT_1010_0cde);
  }
  for (local_4 = DAT_1010_0cda + DAT_1010_0cd8; local_4 < DAT_1010_0ce0; local_4 = local_4 + 1) {
    if ((local_4 & 1) == 0) {
      local_a = 0xf;
    }
    else {
      local_a = local_a - 0x10;
      *_DAT_1010_0cca = local_a;
      _DAT_1010_0cca = (byte *)CONCAT22(_DAT_1010_0ccc,DAT_1010_0cca + 1);
    }
  }
  DAT_1010_0cd2 = DAT_1010_0cd2 - (DAT_1010_0ce0 >> 1);
  return 0;
}


// ---- FUN_1008_cc3a @ 1008:cc3a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_1008_cc3a(void)

{
  int iVar1;
  undefined2 unaff_CS;
  
  DAT_1010_1b0b = DAT_1010_1e58;
  DAT_1010_1b0c = DAT_1010_1e6e;
  DAT_1010_1b0a = DAT_1010_12e2;
  DAT_1010_1b0d = 0;
  if (DAT_1010_0ce7 == '\x01') {
    DAT_1010_1b0e = DAT_1010_0cd4;
  }
  else {
    unaff_CS = 0x1018;
    iVar1 = M007_GETSTATE();
    if ((iVar1 == 2) && (_DAT_1010_1b04 != 0)) {
      DAT_1010_1b0e = 4;
    }
    else {
      DAT_1010_1b0e = 3;
    }
  }
  iVar1 = M007_GETSTATE(unaff_CS,0x83);
  if (iVar1 == 1) {
    Ordinal_536(0x1018,(undefined2 *)&DAT_1010_1b06,0x1010);
    DAT_1010_0d8e = DAT_1010_1b06;
    DAT_1010_0d90 = DAT_1010_1b08;
  }
  return;
}


// ---- FUN_1008_ccc8 @ 1008:ccc8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 __cdecl16far FUN_1008_ccc8(int param_1)

{
  int iVar1;
  undefined2 uVar2;
  int local_4;
  
  uVar2 = 0x1010;
  while( true ) {
    if (param_1 == 0) {
      return 0;
    }
    if ((DAT_1010_0cd2 < DAT_1010_0ce0) && (iVar1 = FUN_1008_cdea(uVar2), iVar1 == 1)) break;
    if (DAT_1010_0ce4 == '\b') {
      for (local_4 = 0; local_4 < (int)(DAT_1010_0ce0 - 1); local_4 = local_4 + 1) {
        *_DAT_1010_0cca = 0xfc;
        _DAT_1010_0cca = (undefined1 *)CONCAT22(_DAT_1010_0ccc,DAT_1010_0cca + 1);
      }
      *_DAT_1010_0cca = 2;
      _DAT_1010_0cca = (undefined1 *)CONCAT22(_DAT_1010_0ccc,DAT_1010_0cca + 1);
    }
    else {
      for (local_4 = 0; local_4 < (int)DAT_1010_0ce0; local_4 = local_4 + 1) {
        *_DAT_1010_0cca = 0xff;
        _DAT_1010_0cca = (undefined1 *)CONCAT22(_DAT_1010_0ccc,DAT_1010_0cca + 1);
      }
    }
    DAT_1010_0cd2 = DAT_1010_0cd2 - DAT_1010_0ce0;
    param_1 = param_1 + -1;
  }
  return 1;
}


// ---- FUN_1008_cd56 @ 1008:cd56

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 __cdecl16far FUN_1008_cd56(int param_1)

{
  int iVar1;
  undefined2 uVar2;
  int local_4;
  
  uVar2 = 0x1010;
  while( true ) {
    if (param_1 == 0) {
      return 0;
    }
    if ((DAT_1010_0cd2 < DAT_1010_0ce0 >> 1) && (iVar1 = FUN_1008_cdea(uVar2), iVar1 == 1)) break;
    for (local_4 = 0; local_4 < (int)DAT_1010_0ce0 / 2; local_4 = local_4 + 1) {
      *_DAT_1010_0cca = 0xff;
      _DAT_1010_0cca = (undefined1 *)CONCAT22(_DAT_1010_0ccc,DAT_1010_0cca + 1);
    }
    DAT_1010_0cd2 = DAT_1010_0cd2 - (DAT_1010_0ce0 >> 1);
    param_1 = param_1 + -1;
  }
  return 1;
}


// ---- FUN_1008_cdb8 @ 1008:cdb8

void __cdecl16far FUN_1008_cdb8(void)

{
  undefined2 uVar1;
  undefined2 uVar2;
  
  uVar2 = 0x1010;
  uVar1 = DAT_1010_0cc2;
  GLOBALUNLOCK();
  GLOBALFREE(0x1018,DAT_1010_0cc2,uVar1,uVar2);
  GLOBALUNLOCK(0x1018,DAT_1010_0cc8);
  GLOBALFREE(0x1018,DAT_1010_0cc8);
  return;
}


// ---- FUN_1008_cdea @ 1008:cdea

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl16far FUN_1008_cdea(void)

{
  int iVar1;
  
  iVar1 = FUN_1008_76c0(DAT_1010_0cce,DAT_1010_0cd0,-2 - DAT_1010_0cd2,0,0x1010);
  if (iVar1 != 1) {
    DAT_1010_0cd2 = -2;
    DAT_1010_0cca = DAT_1010_0cce;
    _DAT_1010_0ccc = DAT_1010_0cd0;
  }
  return iVar1 == 1;
}


// ---- FUN_1008_ce32 @ 1008:ce32

void __cdecl16far FUN_1008_ce32(void)

{
  undefined2 local_6;
  undefined2 local_4;
  
  GETCURSORPOS();
  SETCURSORPOS(0x1018,local_4,local_6);
  return;
}


// ---- FUN_1008_ce58 @ 1008:ce58

undefined2 __cdecl16far FUN_1008_ce58(int param_1)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  uint local_c;
  undefined4 local_a;
  
  uVar4 = DAT_1010_0cc6;
  uVar5 = 0x1010;
  uVar2 = DAT_1010_0cc0;
  if ((uint)(DAT_1010_11d0 - param_1) <= DAT_1010_0cc0) {
    uVar2 = DAT_1010_11d0 - param_1;
  }
  local_a._0_2_ = DAT_1010_0cc4;
  lVar1 = (ulong)(uint)(param_1 * DAT_1010_0cde) * (ulong)DAT_1010_1e56;
  for (local_c = 0; local_c < uVar2; local_c = local_c + 1) {
    iVar3 = FUN_1008_777c((byte *)local_a,uVar4,DAT_1010_1e56,0,lVar1,uVar5);
    if (iVar3 != 0) goto LAB_1008_cedb;
    local_a._0_2_ = (byte *)local_a + DAT_1010_1e56;
    lVar1 = lVar1 + (ulong)DAT_1010_1e56;
  }
  if (DAT_1010_0ce7 == '\0') {
    uVar4 = 0;
  }
  else {
    if (DAT_1010_109c != '\0') {
      if (DAT_1010_0cd4 == '\0') {
        local_a = (byte *)CONCAT22(DAT_1010_0cc6,DAT_1010_0cc4);
        for (local_c = 0; local_c <= uVar2 * DAT_1010_1e56 && uVar2 * DAT_1010_1e56 - local_c != 0;
            local_c = local_c + 1) {
          *local_a = *(byte *)((uint)*local_a * 3 + 0xd9c);
          local_a = (byte *)CONCAT22((int)((ulong)local_a >> 0x10),(byte *)local_a + 1);
        }
      }
      else if (DAT_1010_0cd4 == '\x01') {
        local_a = (byte *)CONCAT22(DAT_1010_0cc6,DAT_1010_0cc4);
        for (local_c = 0; local_c <= uVar2 * DAT_1010_1e56 && uVar2 * DAT_1010_1e56 - local_c != 0;
            local_c = local_c + 1) {
          *local_a = *(byte *)((uint)*local_a * 3 + 0xd9d);
          local_a = (byte *)CONCAT22((int)((ulong)local_a >> 0x10),(byte *)local_a + 1);
        }
      }
      else if (DAT_1010_0cd4 == '\x02') {
        local_a = (byte *)CONCAT22(DAT_1010_0cc6,DAT_1010_0cc4);
        for (local_c = 0; local_c <= uVar2 * DAT_1010_1e56 && uVar2 * DAT_1010_1e56 - local_c != 0;
            local_c = local_c + 1) {
          *local_a = *(byte *)((uint)*local_a * 3 + 0xd9e);
          local_a = (byte *)CONCAT22((int)((ulong)local_a >> 0x10),(byte *)local_a + 1);
        }
      }
    }
LAB_1008_cedb:
    uVar4 = 1;
  }
  return uVar4;
}


// ---- FUN_1008_cfd4 @ 1008:cfd4

undefined2 __cdecl16far FUN_1008_cfd4(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined1 local_8;
  undefined1 local_7;
  int local_6;
  int local_4;
  
  uVar2 = 0x1010;
  local_4 = FUN_1000_0472(DAT_1010_1b50,DAT_1010_1b52,3,0);
  if (0x100 < local_4) {
    local_4 = 0x100;
  }
  iVar1 = FUN_1008_70ec(DAT_1010_1b3e,DAT_1010_1b40,uVar2);
  if (iVar1 == 0) {
    for (local_6 = 0; local_6 < local_4; local_6 = local_6 + 1) {
      iVar1 = FUN_1008_7262(&local_8);
      if (iVar1 != 0) goto LAB_1008_d014;
      *(undefined1 *)(local_6 * 3 + 0xd9c) = local_7;
    }
    for (local_6 = 0; local_6 < local_4; local_6 = local_6 + 1) {
      iVar1 = FUN_1008_7262(&local_8);
      if (iVar1 != 0) goto LAB_1008_d014;
      *(undefined1 *)(local_6 * 3 + 0xd9d) = local_7;
    }
    for (local_6 = 0; local_6 < local_4; local_6 = local_6 + 1) {
      iVar1 = FUN_1008_7262(&local_8);
      if (iVar1 != 0) goto LAB_1008_d014;
      *(undefined1 *)(local_6 * 3 + 0xd9e) = local_7;
    }
    DAT_1010_109c = 1;
    uVar2 = 0;
  }
  else {
LAB_1008_d014:
    uVar2 = 1;
  }
  return uVar2;
}


// ---- FUN_1008_d0c2 @ 1008:d0c2

undefined2 __cdecl16far FUN_1008_d0c2(void)

{
  int iVar1;
  undefined2 uVar2;
  
  iVar1 = M007_GETSTATE();
  if (((iVar1 + -1 < 1) || (SBORROW2(iVar1 + -1,1))) || (1 < iVar1 + -3)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}


// ---- FUN_1008_d0ea @ 1008:d0ea

void __cdecl16far FUN_1008_d0ea(void)

{
  DAT_1010_109c = 0;
  return;
}


// ---- FUN_1008_d0fe @ 1008:d0fe

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_1008_d0fe(int param_1)

{
  undefined2 unaff_CS;
  
  if (param_1 == 1) {
    LSTRCPY(unaff_CS,0xd506,0x1008,0x13e);
    DAT_1010_10a4 = _DAT_0040_000a;
    DAT_1010_10a2 = 1;
  }
  else if (param_1 == 2) {
    LSTRCPY(unaff_CS,0xd50c,0x1008,0x13e);
    DAT_1010_10a4 = _DAT_0040_000c;
    DAT_1010_10a2 = 2;
  }
  else {
    LSTRCPY(unaff_CS,0xd512,0x1008,0x13e);
    DAT_1010_10a4 = _DAT_0040_0008;
    DAT_1010_10a2 = 0;
  }
  return;
}


// ---- FUN_1008_d194 @ 1008:d194

void __cdecl16far FUN_1008_d194(void)

{
  undefined2 unaff_CS;
  
  DAT_1010_0021 = 1;
  DAT_1010_0cbe = 0;
  DAT_1010_0d8a = 0;
  DAT_1010_0cd4 = 0;
  DAT_1010_0d9a = 1;
  M007_PUTSTATE(unaff_CS,1);
  M007_PUTVALUE(0x1018,(undefined2)DAT_1010_0738,DAT_1010_0738._2_2_);
  return;
}


// ---- FUN_1008_d1d6 @ 1008:d1d6

void __cdecl16far FUN_1008_d1d6(void)

{
  int iVar1;
  uint uVar2;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  uint local_6;
  byte local_4;
  
  local_6 = 0xffff;
  local_4 = FUN_1000_034e(0x61,(uint)(in_NT & 1) * 0x4000 |
                               (uint)SBORROW2((int)&stack0xfffe,4) * 0x800 |
                               (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 |
                               (uint)((int)&local_6 < 0) * 0x80 |
                               (uint)(&stack0x0000 == (undefined1 *)0x6) * 0x40 |
                               (uint)(in_AF & 1) * 0x10 |
                               (uint)((POPCOUNT((uint)&local_6 & 0xff) & 1U) == 0) * 4 |
                               (uint)(&stack0xfffe < (undefined1 *)0x4),0x1010);
  FUN_1000_0368(0x61,local_4 & 0xfe);
  FUN_1000_0368(0x43,0xb0);
  FUN_1000_0368(0x42,0xff);
  FUN_1000_0368(0x42,0xff);
  FUN_1000_0368(0x61,local_4 | 1);
  for (; 0xfffd < local_6; local_6 = local_6 | uVar2) {
    iVar1 = FUN_1000_034e(0x42);
    local_6 = iVar1 << 8;
    uVar2 = FUN_1000_034e(0x42);
  }
  FUN_1000_0368(0x61,local_4);
  return;
}


// ---- FUN_1008_d288 @ 1008:d288

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 __cdecl16far FUN_1008_d288(void)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  undefined2 uVar4;
  undefined1 local_8;
  
  uVar4 = 0x1010;
  uVar1 = FUN_1000_034e(DAT_1010_10a4,0x1010);
  local_8 = FUN_1000_034e(DAT_1010_10a4 + 2);
  FUN_1000_0368(DAT_1010_10a4 + 2,2);
  FUN_1008_d1d6();
  FUN_1000_0368(DAT_1010_10a4,0xff);
  FUN_1008_d1d6();
  FUN_1000_0368(DAT_1010_10a4,0xaa,uVar4,0xaa);
  FUN_1008_d1d6();
  iVar2 = FUN_1000_034e(DAT_1010_10a4);
  if (iVar2 == 0xaa) {
    local_8 = local_8 & 0xdf;
  }
  else {
    local_8 = local_8 | 0x20;
  }
  _DAT_1010_10a6 = CONCAT11(uVar1,local_8) | 4;
  uVar3 = FUN_1000_034e(DAT_1010_10a4 + 1);
  uVar3 = (int)(uVar3 ^ 200) >> 3;
  if (((uVar3 & 0x15) == 0) && ((uVar3 & 2) != 0)) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0xffff;
  }
  return uVar4;
}


// ---- FUN_1008_d34e @ 1008:d34e

undefined2 __cdecl16far FUN_1008_d34e(void)

{
  return 0;
}


// ---- FUN_1008_d35e @ 1008:d35e

undefined2 __cdecl16far FUN_1008_d35e(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  uVar1 = DAT_1010_10a6;
  uVar2 = DAT_1010_10a7;
  FUN_1000_0368(DAT_1010_10a4 + 2,2,0x1010,DAT_1010_10a6,DAT_1010_10a7);
  FUN_1008_d1d6();
  FUN_1000_0368(DAT_1010_10a4,uVar2);
  FUN_1008_d1d6();
  FUN_1000_0368(DAT_1010_10a4 + 2,uVar1);
  FUN_1008_d1d6();
  return 1;
}


// ---- FUN_1008_d3c8 @ 1008:d3c8

int __cdecl16far FUN_1008_d3c8(undefined2 param_1,int param_2,undefined2 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  undefined2 uVar6;
  uint local_16;
  uint local_14;
  int local_4;
  
  iVar1 = DAT_1010_10a4;
  uVar6 = 0x1010;
  iVar2 = DAT_1010_10a4 + 1;
  iVar3 = DAT_1010_10a4 + 2;
  local_4 = 0;
  do {
    if (param_4 <= local_4) {
      return param_4;
    }
LAB_1008_d450:
    do {
      do {
        do {
          uVar4 = FUN_1000_034e(iVar2,uVar6);
          uVar4 = (int)(uVar4 ^ 200) >> 3;
          FUN_1008_d1d6();
        } while ((uVar4 & 0x15) != 0);
      } while ((uVar4 & 2) == 0);
      FUN_1000_0368(iVar1,*(undefined1 *)(param_2 + local_4));
      FUN_1000_0368(iVar3,0xd);
      FUN_1008_d1d6();
      FUN_1000_0368(iVar3,0xc);
      FUN_1008_d1d6();
      local_14 = 0;
      local_16 = 0;
      do {
        uVar4 = FUN_1000_034e(iVar2);
        uVar4 = (int)(uVar4 ^ 200) >> 3;
        FUN_1008_d1d6();
        bVar5 = 0xfffe < local_16;
        if ((6 < local_14) && ((7 < local_14 || (0xa120 < local_16)))) goto LAB_1008_d450;
        local_16 = local_16 + 1;
        local_14 = local_14 + bVar5;
      } while (uVar4 == 0);
    } while ((uVar4 & 1) != 0);
    for (; (uVar4 & 8) != 0; uVar4 = (int)(uVar4 ^ 200) >> 3) {
      uVar4 = FUN_1000_034e(iVar2);
      FUN_1008_d1d6();
    }
    local_4 = local_4 + 1;
  } while( true );
}


// ---- FUN_1008_d518 @ 1008:d518

void __cdecl16far FUN_1008_d518(int param_1)

{
  int iVar1;
  undefined2 unaff_CS;
  
  if (param_1 != 0) {
    unaff_CS = 0x1018;
    INSTANT_FREEZE_ALL();
  }
  DAT_1010_1b63 = (undefined1)param_1;
  DAT_1010_1b64 = 4;
  iVar1 = M007_GETSTATE(unaff_CS,0x83);
  if (iVar1 == 1) {
    Ordinal_2072(0x1018,0);
    Ordinal_535(0x1018,(undefined2 *)&DAT_1010_1b56,0x1010);
    Ordinal_2072(0x1018,1);
  }
  return;
}


// ---- FUN_1008_d568 @ 1008:d568

void __cdecl16far FUN_1008_d568(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 unaff_CS;
  undefined2 uVar3;
  undefined2 local_6;
  undefined2 local_4;
  
  if (param_1 == 2) {
    unaff_CS = 0x1018;
    INSTANT_FREEZE_ALL();
  }
  uVar3 = 0;
  uVar1 = LOADCURSOR(unaff_CS,0x7f02,0);
  SETCURSOR(0x1018,uVar1,uVar3);
  YIELD(0x1018);
  DAT_1010_1b63 = 10;
  DAT_1010_1b64 = 4;
  DAT_1010_1b65 = (undefined1)param_1;
  iVar2 = M007_GETSTATE(0x1018,0x83);
  if (iVar2 == 1) {
    Ordinal_2072(0x1018,0);
    Ordinal_535(0x1018,(undefined2 *)&DAT_1010_1b56,0x1010);
    Ordinal_2072(0x1018,1);
  }
  GETCURSORPOS(0x1018,&local_6);
  SETCURSORPOS(0x1018,local_4,local_6);
  return;
}


// ---- FUN_1008_d5fa @ 1008:d5fa

void __cdecl16far FUN_1008_d5fa(undefined1 param_1,undefined1 param_2,undefined1 param_3)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1010;
  DAT_1010_1b63 = param_1;
  DAT_1010_1b64 = 4;
  DAT_1010_1b65 = param_2;
  DAT_1010_1b67 = param_3;
  uVar2 = 0x83;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    Ordinal_2072(0x1018,0,uVar2,uVar3);
    Ordinal_535(0x1018,(undefined2 *)&DAT_1010_1b56,0x1010);
    Ordinal_2072(0x1018,1);
  }
  return;
}


// ---- FUN_1008_d64c @ 1008:d64c

undefined2 __cdecl16far FUN_1008_d64c(undefined1 param_1,undefined1 param_2,undefined1 param_3)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 local_6;
  undefined2 local_4;
  
  INSTANT_FREEZE_ALL();
  uVar3 = 0;
  uVar1 = LOADCURSOR(0x1018,0x7f02,0);
  SETCURSOR(0x1018,uVar1,uVar3);
  YIELD(0x1018);
  DAT_1010_1b63 = param_1;
  DAT_1010_1b64 = 4;
  DAT_1010_1b65 = param_2;
  DAT_1010_1b67 = param_3;
  iVar2 = M007_GETSTATE(0x1018,0x83);
  if (iVar2 == 1) {
    Ordinal_2072(0x1018,0);
    Ordinal_535(0x1018,(undefined2 *)&DAT_1010_1b56,0x1010);
    Ordinal_2072(0x1018,1);
  }
  GETCURSORPOS(0x1018,&local_6);
  SETCURSORPOS(0x1018,local_4,local_6);
  DAT_1010_015e = (double)DAT_1010_1b56 * DAT_1010_0754;
  return 0x15e;
}


// ---- FUN_1008_d70e @ 1008:d70e

void __cdecl16far FUN_1008_d70e(undefined1 param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 local_6;
  undefined2 local_4;
  
  INSTANT_FREEZE_ALL();
  uVar3 = 0;
  uVar1 = LOADCURSOR(0x1018,0x7f02,0);
  SETCURSOR(0x1018,uVar1,uVar3);
  YIELD(0x1018);
  DAT_1010_1b63 = 9;
  DAT_1010_1b64 = 4;
  DAT_1010_1b65 = param_1;
  iVar2 = M007_GETSTATE(0x1018,0x83);
  if (iVar2 == 1) {
    Ordinal_2072(0x1018,0);
    Ordinal_535(0x1018,(undefined2 *)&DAT_1010_1b56,0x1010);
    Ordinal_2072(0x1018,1);
  }
  GETCURSORPOS(0x1018,&local_6);
  SETCURSORPOS(0x1018,local_4,local_6);
  return;
}


// ---- FUN_1008_d79a @ 1008:d79a

void __cdecl16far FUN_1008_d79a(void)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 local_6;
  undefined2 local_4;
  
  INSTANT_FREEZE_ALL();
  uVar3 = 0;
  uVar1 = LOADCURSOR(0x1018,0x7f02,0);
  SETCURSOR(0x1018,uVar1,uVar3);
  YIELD(0x1018);
  DAT_1010_1b64 = 5;
  DAT_1010_1b63 = 0;
  iVar2 = M007_GETSTATE(0x1018,0x83);
  if (iVar2 == 1) {
    Ordinal_2072(0x1018,0);
    Ordinal_535(0x1018,(undefined2 *)&DAT_1010_1b56,0x1010);
    Ordinal_2072(0x1018,1);
  }
  GETCURSORPOS(0x1018,&local_6);
  SETCURSORPOS(0x1018,local_4,local_6);
  return;
}


// ---- FUN_1008_d81e @ 1008:d81e

void __cdecl16far FUN_1008_d81e(undefined2 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1010;
  uVar2 = param_1;
  INSTANT_FREEZE_ZONE();
  DAT_1010_1b64 = 0x11;
  DAT_1010_1b63 = M007_GETSTATE(0x1018,0x1e,uVar2,uVar3);
  DAT_1010_1b6a = (undefined1)param_1;
  DAT_1010_1b6b = M007_GETSTATE(0x1018,100);
  iVar1 = M007_GETSTATE(0x1018,0x83);
  if (iVar1 == 1) {
    Ordinal_2072(0x1018,0);
    Ordinal_535(0x1018,(undefined2 *)&DAT_1010_1b56,0x1010);
    Ordinal_2072(0x1018,1);
  }
  M007_PUTSTATE(0x1018,param_1);
  return;
}


// ---- FUN_1008_d88e @ 1008:d88e

void __cdecl16far FUN_1008_d88e(void)

{
  float fVar1;
  double dVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  float *pfVar7;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  double *pdVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  undefined2 local_70;
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  uint local_38;
  undefined1 local_36 [4];
  double local_32;
  double local_2a;
  double local_22;
  double local_1a;
  double local_12;
  double local_a;
  
  pfVar7 = (float *)M007_GETVALUE(unaff_CS,local_36);
  fVar1 = *pfVar7 * DAT_1010_075c;
  local_a = (double)fVar1;
  fVar3 = (float)DAT_1010_0760;
  local_38 = (uint)(fVar1 < fVar3) << 8 | (uint)(NAN(fVar1) || NAN(fVar3)) << 10 |
             (uint)(fVar1 == fVar3) << 0xe;
  if ((fVar1 == fVar3) == 0) {
    pfVar7 = (float *)M007_GETVALUE(0x1018,local_36);
    fVar1 = *pfVar7;
    fVar3 = (float)DAT_1010_0768;
    local_38 = (uint)(fVar1 < fVar3) << 8 | (uint)(NAN(fVar1) || NAN(fVar3)) << 10 |
               (uint)(fVar1 == fVar3) << 0xe;
    if ((fVar1 == fVar3) == 0) {
      pfVar7 = (float *)M007_GETVALUE(0x1018,local_36);
      fVar1 = *pfVar7;
      fVar3 = (float)DAT_1010_0768;
      local_38 = (uint)(fVar1 < fVar3) << 8 | (uint)(NAN(fVar1) || NAN(fVar3)) << 10 |
                 (uint)(fVar1 == fVar3) << 0xe;
      if ((fVar1 == fVar3) == 0) {
        pfVar7 = (float *)M007_GETVALUE(0x1018,local_36);
        local_a = (double)(*pfVar7 * DAT_1010_075c);
        pfVar7 = (float *)M007_GETVALUE(0x1018,local_3c);
        fVar1 = *pfVar7;
        pdVar8 = (double *)FUN_1000_05c8();
        local_2a = *pdVar8 * (double)fVar1;
        pfVar7 = (float *)M007_GETVALUE(0x1000,local_40);
        local_a = (double)(*pfVar7 * DAT_1010_075c);
        uVar10 = 0x51;
        pfVar7 = (float *)M007_GETVALUE();
        fVar1 = *pfVar7;
        pdVar8 = (double *)FUN_1000_05c8(0x1018);
        dVar6 = local_2a;
        local_32 = *pdVar8 * (double)fVar1;
        uVar9 = 0x10f;
        pfVar7 = (float *)M007_GETVALUE();
        local_a = (double)(*pfVar7 * DAT_1010_075c);
        dVar2 = (double)(*pfVar7 * DAT_1010_075c);
        local_70 = SUB82(dVar2,0);
        pdVar8 = (double *)FUN_1000_05c2(0x1018,local_70);
        dVar5 = local_32;
        local_1a = dVar6 / *pdVar8;
        pdVar8 = (double *)FUN_1000_05cd(0x1000,dVar2,uVar9,uVar10);
        dVar4 = local_1a - dVar5 / *pdVar8;
        local_1a = dVar4;
        pdVar8 = (double *)FUN_1000_05c2(0x1000,dVar2 * DAT_1010_0770);
        local_22 = (dVar6 - dVar5) / (*pdVar8 * DAT_1010_0778);
        local_12 = dVar4 - (dVar4 - local_22) * DAT_1010_0778;
        M007_PUTVALUE(0x1000);
        M007_PUTVALUE(0x1018,(float)dVar4);
      }
    }
  }
  return;
}


// ---- FUN_1008_db02 @ 1008:db02

void __cdecl16far FUN_1008_db02(void)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 local_6;
  undefined2 local_4;
  
  INSTANT_FREEZE_ALL();
  uVar3 = 0;
  uVar1 = LOADCURSOR(0x1018,0x7f02,0);
  SETCURSOR(0x1018,uVar1,uVar3);
  YIELD(0x1018);
  DAT_1010_1b64 = 5;
  DAT_1010_1b63 = 1;
  iVar2 = M007_GETSTATE(0x1018,0x83);
  if (iVar2 == 1) {
    Ordinal_2072(0x1018,0);
    Ordinal_535(0x1018,(undefined2 *)&DAT_1010_1b56,0x1010);
    Ordinal_2072(0x1018,1);
  }
  GETCURSORPOS(0x1018,&local_6);
  SETCURSORPOS(0x1018,local_4,local_6);
  return;
}


// ---- FUN_1008_db86 @ 1008:db86

void __cdecl16far FUN_1008_db86(void)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 local_6;
  undefined2 local_4;
  
  INSTANT_FREEZE_ALL();
  uVar3 = 0;
  uVar1 = LOADCURSOR(0x1018,0x7f02,0);
  SETCURSOR(0x1018,uVar1,uVar3);
  YIELD(0x1018);
  DAT_1010_1b64 = 5;
  DAT_1010_1b63 = 2;
  iVar2 = M007_GETSTATE(0x1018,0x83);
  if (iVar2 == 1) {
    Ordinal_2072(0x1018,0);
    Ordinal_535(0x1018,(undefined2 *)&DAT_1010_1b56,0x1010);
    Ordinal_2072(0x1018,1);
  }
  GETCURSORPOS(0x1018,&local_6);
  SETCURSORPOS(0x1018,local_4,local_6);
  return;
}


// ---- FUN_1008_dc0a @ 1008:dc0a

void __cdecl16far FUN_1008_dc0a(undefined2 param_1)

{
  int iVar1;
  undefined2 unaff_CS;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1010;
  switch(param_1) {
  case 0:
    uVar2 = 0x1008;
    iVar1 = GETPROFILESTRING(0x1008,0x80,0x10a8,0x1010,0x4364,0x1008,0xe230,0x1008,0xe23a);
    if (iVar1 == 0) {
      uVar3 = 0xe230;
LAB_1008_dc57:
      WRITEPROFILESTRING(0x1018,0x4364,0x1008,uVar3,0x1008,0xe23a);
      return;
    }
    break;
  case 1:
    uVar2 = 0x1008;
    iVar1 = GETPROFILESTRING(0x1008,0x80,0x10a8,0x1010,0x4364,0x1008,0xe246,0x1008,0xe23a);
    if (iVar1 == 0) {
      uVar3 = 0xe246;
      goto LAB_1008_dc57;
    }
    break;
  case 2:
    uVar2 = 0x1008;
    iVar1 = GETPROFILESTRING(0x1008,0x80,0x10a8,0x1010,0x4364,0x1008,0xe250,0x1008,0xe23a);
    if (iVar1 == 0) {
      uVar3 = 0xe250;
      goto LAB_1008_dc57;
    }
    break;
  case 3:
    uVar2 = 0x1008;
    iVar1 = GETPROFILESTRING(0x1008,0x80,0x10a8,0x1010,0x4364,0x1008,0xe25a,0x1008,0xe23a);
    if (iVar1 == 0) {
      uVar3 = 0xe25a;
      goto LAB_1008_dc57;
    }
    break;
  case 4:
    uVar2 = 0x1008;
    iVar1 = GETPROFILESTRING(0x1008,0x80,0x10a8,0x1010,0x4364,0x1008,0xe264,0x1008,0xe23a);
    if (iVar1 == 0) {
      uVar3 = 0xe264;
      goto LAB_1008_dc57;
    }
    break;
  case 5:
    uVar2 = 0x1008;
    iVar1 = GETPROFILESTRING(0x1008,0x80,0x10a8,0x1010,0x4364,0x1008,0xe26e,0x1008,0xe23a);
    if (iVar1 == 0) {
      uVar3 = 0xe26e;
      goto LAB_1008_dc57;
    }
    break;
  case 6:
    uVar2 = 0x1008;
    iVar1 = GETPROFILESTRING(0x1008,0x80,0x10a8,0x1010,0x4364,0x1008,0xe278,0x1008,0xe23a);
    if (iVar1 == 0) {
      uVar3 = 0xe278;
      goto LAB_1008_dc57;
    }
    break;
  case 7:
    uVar2 = 0x1008;
    iVar1 = GETPROFILESTRING(0x1008,0x80,0x10a8,0x1010,0x4364,0x1008,0xe282,0x1008,0xe23a);
    if (iVar1 == 0) {
      uVar3 = 0xe282;
      goto LAB_1008_dc57;
    }
    break;
  case 8:
    uVar2 = 0x1008;
    iVar1 = GETPROFILESTRING(0x1008,0x80,0x10a8,0x1010,0x4364,0x1008,0xe28c,0x1008,0xe23a);
    if (iVar1 == 0) {
      uVar3 = 0xe28c;
      goto LAB_1008_dc57;
    }
    break;
  default:
    uVar2 = 0x1008;
    iVar1 = GETPROFILESTRING(unaff_CS,0x80,0x10a8,0x1010,0x4364,0x1008,0xe296,0x1008,0xe23a);
    if (iVar1 == 0) {
      uVar3 = 0xe296;
      goto LAB_1008_dc57;
    }
  }
  uVar3 = thunk_FUN_1000_0890(0x10a8,0x1010,uVar2,uVar3);
  uVar2 = REGISTERWINDOWMESSAGE(0x1000,0xe2a0);
  SENDMESSAGE(0x1018,0x4364,0x1008,uVar3,uVar2);
  return;
}


// ---- FUN_1008_dee6 @ 1008:dee6

void __cdecl16far FUN_1008_dee6(undefined2 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_CS;
  
  switch(param_1) {
  case 0:
    iVar1 = GETPROFILESTRING(0x1008,0x80,0x1128,0x1010,0x4364,0x1008,0xe2b0,0x1008,0xe2ba);
    if (iVar1 == 0) {
      uVar2 = 0xe2b0;
LAB_1008_df33:
      WRITEPROFILESTRING(0x1018,0x4364,0x1008,uVar2,0x1008,0xe2ba);
      return;
    }
    break;
  case 1:
    iVar1 = GETPROFILESTRING(0x1008,0x80,0x1128,0x1010,0x4364,0x1008,0xe2c8,0x1008,0xe2ba);
    if (iVar1 == 0) {
      uVar2 = 0xe2c8;
      goto LAB_1008_df33;
    }
    break;
  case 2:
    iVar1 = GETPROFILESTRING(0x1008,0x80,0x1128,0x1010,0x4364,0x1008,0xe2d2,0x1008,0xe2ba);
    if (iVar1 == 0) {
      uVar2 = 0xe2d2;
      goto LAB_1008_df33;
    }
    break;
  case 3:
    iVar1 = GETPROFILESTRING(0x1008,0x80,0x1128,0x1010,0x4364,0x1008,0xe2dc,0x1008,0xe2ba);
    if (iVar1 == 0) {
      uVar2 = 0xe2dc;
      goto LAB_1008_df33;
    }
    break;
  case 4:
    iVar1 = GETPROFILESTRING(0x1008,0x80,0x1128,0x1010,0x4364,0x1008,0xe2e6,0x1008,0xe2ba);
    if (iVar1 == 0) {
      uVar2 = 0xe2e6;
      goto LAB_1008_df33;
    }
    break;
  case 5:
    iVar1 = GETPROFILESTRING(0x1008,0x80,0x1128,0x1010,0x4364,0x1008,0xe2f0,0x1008,0xe2ba);
    if (iVar1 == 0) {
      uVar2 = 0xe2f0;
      goto LAB_1008_df33;
    }
    break;
  case 6:
    iVar1 = GETPROFILESTRING(0x1008,0x80,0x1128,0x1010,0x4364,0x1008,0xe2fa,0x1008,0xe2ba);
    if (iVar1 == 0) {
      uVar2 = 0xe2fa;
      goto LAB_1008_df33;
    }
    break;
  case 7:
    iVar1 = GETPROFILESTRING(0x1008,0x80,0x1128,0x1010,0x4364,0x1008,0xe304,0x1008,0xe2ba);
    if (iVar1 == 0) {
      uVar2 = 0xe304;
      goto LAB_1008_df33;
    }
    break;
  case 8:
    iVar1 = GETPROFILESTRING(0x1008,0x80,0x1128,0x1010,0x4364,0x1008,0xe30e,0x1008,0xe2ba);
    if (iVar1 == 0) {
      uVar2 = 0xe30e;
      goto LAB_1008_df33;
    }
    break;
  default:
    iVar1 = GETPROFILESTRING(unaff_CS,0x80,0x1128,0x1010,0x4364,0x1008,0xe318,0x1008,0xe2ba);
    if (iVar1 == 0) {
      uVar2 = 0xe318;
      goto LAB_1008_df33;
    }
  }
  uVar2 = REGISTERWINDOWMESSAGE(0x1018,0xe322);
  iVar1 = SENDMESSAGE(0x1018,0x1128,0x1010,0,uVar2);
  if (iVar1 == 0) {
    M007_PUTSTATE(0x1018,1);
  }
  return;
}


// ---- FUN_1008_e1c0 @ 1008:e1c0

bool __cdecl16far FUN_1008_e1c0(void)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 unaff_CS;
  
  uVar1 = REGISTERWINDOWMESSAGE(unaff_CS,0xe322);
  iVar2 = SENDMESSAGE(0x1018,0,0,0,uVar1);
  return iVar2 == 2;
}


// ---- FUN_1008_e202 @ 1008:e202

void __cdecl16far FUN_1008_e202(void)

{
  undefined2 uVar1;
  undefined2 unaff_CS;
  
  uVar1 = REGISTERWINDOWMESSAGE(unaff_CS,0xe332);
  SENDMESSAGE(0x1018,0,0,0,uVar1);
  return;
}


// ---- FATALEXIT @ 1018:0000

/* WARNING: Control flow encountered bad instruction data */

void FATALEXIT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GETVERSION @ 1018:0004

/* WARNING: Control flow encountered bad instruction data */

void GETVERSION(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- LOCALINIT @ 1018:0008

/* WARNING: Control flow encountered bad instruction data */

void LOCALINIT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GLOBALALLOC @ 1018:000c

/* WARNING: Control flow encountered bad instruction data */

void GLOBALALLOC(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GLOBALREALLOC @ 1018:0010

/* WARNING: Control flow encountered bad instruction data */

void GLOBALREALLOC(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GLOBALFREE @ 1018:0014

/* WARNING: Control flow encountered bad instruction data */

void GLOBALFREE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GLOBALLOCK @ 1018:0018

/* WARNING: Control flow encountered bad instruction data */

void GLOBALLOCK(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GLOBALUNLOCK @ 1018:001c

/* WARNING: Control flow encountered bad instruction data */

void GLOBALUNLOCK(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GLOBALSIZE @ 1018:0020

/* WARNING: Control flow encountered bad instruction data */

void GLOBALSIZE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- LOCKSEGMENT @ 1018:0024

/* WARNING: Control flow encountered bad instruction data */

void LOCKSEGMENT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- YIELD @ 1018:0028

/* WARNING: Control flow encountered bad instruction data */

void YIELD(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GETMODULEUSAGE @ 1018:002c

/* WARNING: Control flow encountered bad instruction data */

void GETMODULEUSAGE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GETPROFILESTRING @ 1018:0030

/* WARNING: Control flow encountered bad instruction data */

void GETPROFILESTRING(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- WRITEPROFILESTRING @ 1018:0034

/* WARNING: Control flow encountered bad instruction data */

void WRITEPROFILESTRING(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- _LCLOSE @ 1018:0038

/* WARNING: Control flow encountered bad instruction data */

void _LCLOSE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- _LREAD @ 1018:003c

/* WARNING: Control flow encountered bad instruction data */

void _LREAD(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- _LCREAT @ 1018:0040

/* WARNING: Control flow encountered bad instruction data */

void _LCREAT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- _LLSEEK @ 1018:0044

/* WARNING: Control flow encountered bad instruction data */

void _LLSEEK(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- _LOPEN @ 1018:0048

/* WARNING: Control flow encountered bad instruction data */

void _LOPEN(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- _LWRITE @ 1018:004c

/* WARNING: Control flow encountered bad instruction data */

void _LWRITE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- LSTRCPY @ 1018:0050

/* WARNING: Control flow encountered bad instruction data */

void LSTRCPY(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- LSTRLEN @ 1018:0054

/* WARNING: Control flow encountered bad instruction data */

void LSTRLEN(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- INITTASK @ 1018:0058

/* WARNING: Control flow encountered bad instruction data */

void INITTASK(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GETTEMPFILENAME @ 1018:005c

/* WARNING: Control flow encountered bad instruction data */

void GETTEMPFILENAME(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- DOS3CALL @ 1018:0060

/* WARNING: Control flow encountered bad instruction data */

void DOS3CALL(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- __AHSHIFT @ 1018:0064

/* WARNING: Control flow encountered bad instruction data */

void __AHSHIFT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- __AHINCR @ 1018:0068

/* WARNING: Control flow encountered bad instruction data */

void __AHINCR(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GETDOSENVIRONMENT @ 1018:006c

/* WARNING: Control flow encountered bad instruction data */

void GETDOSENVIRONMENT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- FATALAPPEXIT @ 1018:0070

/* WARNING: Control flow encountered bad instruction data */

void FATALAPPEXIT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- WINEXEC @ 1018:0074

/* WARNING: Control flow encountered bad instruction data */

void WINEXEC(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- __WINFLAGS @ 1018:0078

/* WARNING: Control flow encountered bad instruction data */

void __WINFLAGS(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- _HREAD @ 1018:007c

/* WARNING: Control flow encountered bad instruction data */

void _HREAD(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- _HWRITE @ 1018:0080

/* WARNING: Control flow encountered bad instruction data */

void _HWRITE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GETCURSORPOS @ 1018:0084

/* WARNING: Control flow encountered bad instruction data */

void GETCURSORPOS(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- FINDWINDOW @ 1018:0088

/* WARNING: Control flow encountered bad instruction data */

void FINDWINDOW(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- SETCURSOR @ 1018:008c

/* WARNING: Control flow encountered bad instruction data */

void SETCURSOR(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- SETCURSORPOS @ 1018:0090

/* WARNING: Control flow encountered bad instruction data */

void SETCURSORPOS(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- MESSAGEBEEP @ 1018:0094

/* WARNING: Control flow encountered bad instruction data */

void MESSAGEBEEP(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- SENDMESSAGE @ 1018:0098

/* WARNING: Control flow encountered bad instruction data */

void SENDMESSAGE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- REGISTERWINDOWMESSAGE @ 1018:009c

/* WARNING: Control flow encountered bad instruction data */

void REGISTERWINDOWMESSAGE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- OPENCLIPBOARD @ 1018:00a0

/* WARNING: Control flow encountered bad instruction data */

void OPENCLIPBOARD(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- CLOSECLIPBOARD @ 1018:00a4

/* WARNING: Control flow encountered bad instruction data */

void CLOSECLIPBOARD(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- EMPTYCLIPBOARD @ 1018:00a8

/* WARNING: Control flow encountered bad instruction data */

void EMPTYCLIPBOARD(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- SETCLIPBOARDDATA @ 1018:00ac

/* WARNING: Control flow encountered bad instruction data */

void SETCLIPBOARDDATA(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GETCLIPBOARDDATA @ 1018:00b0

/* WARNING: Control flow encountered bad instruction data */

void GETCLIPBOARDDATA(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- LOADCURSOR @ 1018:00b4

/* WARNING: Control flow encountered bad instruction data */

void LOADCURSOR(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- ISCLIPBOARDFORMATAVAILABLE @ 1018:00b8

/* WARNING: Control flow encountered bad instruction data */

void ISCLIPBOARDFORMATAVAILABLE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- SETWINDOWPOS @ 1018:00bc

/* WARNING: Control flow encountered bad instruction data */

void SETWINDOWPOS(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- _WSPRINTF @ 1018:00c0

/* WARNING: Control flow encountered bad instruction data */

void _WSPRINTF(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- __FPMATH @ 1018:00c4

/* WARNING: Control flow encountered bad instruction data */

void __FPMATH(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- M007_PUTVALUE @ 1018:00c8

/* WARNING: Control flow encountered bad instruction data */

void M007_PUTVALUE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- M007_GETVALUE @ 1018:00cc

/* WARNING: Control flow encountered bad instruction data */

void M007_GETVALUE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- M007_PUTLOW @ 1018:00d0

/* WARNING: Control flow encountered bad instruction data */

void M007_PUTLOW(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- M007_PUTHIGH @ 1018:00d4

/* WARNING: Control flow encountered bad instruction data */

void M007_PUTHIGH(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- M007_PUTSTATE @ 1018:00d8

/* WARNING: Control flow encountered bad instruction data */

void M007_PUTSTATE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- M007_GETSTATE @ 1018:00dc

/* WARNING: Control flow encountered bad instruction data */

void M007_GETSTATE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- UIF_MESSAGE @ 1018:00e0

/* WARNING: Control flow encountered bad instruction data */

void UIF_MESSAGE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- UIF_LOG @ 1018:00e4

/* WARNING: Control flow encountered bad instruction data */

void UIF_LOG(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_36 @ 1018:00e8

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_36(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- SETEOCOLUMNSCAN @ 1018:00ec

/* WARNING: Control flow encountered bad instruction data */

void SETEOCOLUMNSCAN(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- SETEOSTEREO @ 1018:00f0

/* WARNING: Control flow encountered bad instruction data */

void SETEOSTEREO(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- DOCOMMANDSCANRATE0 @ 1018:00f4

/* WARNING: Control flow encountered bad instruction data */

void DOCOMMANDSCANRATE0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- DOCOMMANDSCANRATE1 @ 1018:00f8

/* WARNING: Control flow encountered bad instruction data */

void DOCOMMANDSCANRATE1(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- DOCOMMANDSCANRATE2 @ 1018:00fc

/* WARNING: Control flow encountered bad instruction data */

void DOCOMMANDSCANRATE2(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- DOCOMMANDSCANRATE3 @ 1018:0100

/* WARNING: Control flow encountered bad instruction data */

void DOCOMMANDSCANRATE3(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- DOCOMMANDSCANRATE4 @ 1018:0104

/* WARNING: Control flow encountered bad instruction data */

void DOCOMMANDSCANRATE4(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- DOCOMMANDSCANRATE5 @ 1018:0108

/* WARNING: Control flow encountered bad instruction data */

void DOCOMMANDSCANRATE5(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- DOCOMMANDSCANRATE6 @ 1018:010c

/* WARNING: Control flow encountered bad instruction data */

void DOCOMMANDSCANRATE6(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- DOCOMMANDSCANRATE7 @ 1018:0110

/* WARNING: Control flow encountered bad instruction data */

void DOCOMMANDSCANRATE7(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- DOCOMMANDSCANRATE8 @ 1018:0114

/* WARNING: Control flow encountered bad instruction data */

void DOCOMMANDSCANRATE8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- DOCOMMANDSCANRATE9 @ 1018:0118

/* WARNING: Control flow encountered bad instruction data */

void DOCOMMANDSCANRATE9(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- DOCOMMANDSCANRATE10 @ 1018:011c

/* WARNING: Control flow encountered bad instruction data */

void DOCOMMANDSCANRATE10(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- DOCOMMANDSCANRATE11 @ 1018:0120

/* WARNING: Control flow encountered bad instruction data */

void DOCOMMANDSCANRATE11(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- DOCOMMANDSCANRATE12 @ 1018:0124

/* WARNING: Control flow encountered bad instruction data */

void DOCOMMANDSCANRATE12(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- DOCOMMANDSCANRATE13 @ 1018:0128

/* WARNING: Control flow encountered bad instruction data */

void DOCOMMANDSCANRATE13(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- DOCOMMANDSCANRATE14 @ 1018:012c

/* WARNING: Control flow encountered bad instruction data */

void DOCOMMANDSCANRATE14(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- DOCOMMANDSCANRATE15 @ 1018:0130

/* WARNING: Control flow encountered bad instruction data */

void DOCOMMANDSCANRATE15(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- SWITCHOUT_DEV @ 1018:0134

/* WARNING: Control flow encountered bad instruction data */

void SWITCHOUT_DEV(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- DOCOMMANDSET_STEREO @ 1018:0138

/* WARNING: Control flow encountered bad instruction data */

void DOCOMMANDSET_STEREO(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- SEVENBITMODE @ 1018:013c

/* WARNING: Control flow encountered bad instruction data */

void SEVENBITMODE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- EO_SPINMESSAGELOOP @ 1018:0140

/* WARNING: Control flow encountered bad instruction data */

void EO_SPINMESSAGELOOP(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- OM_KILL_OVERLAY_OBJ @ 1018:0144

/* WARNING: Control flow encountered bad instruction data */

void OM_KILL_OVERLAY_OBJ(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- OM_CREATE_OVERLAY_OBJ @ 1018:0148

/* WARNING: Control flow encountered bad instruction data */

void OM_CREATE_OVERLAY_OBJ(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- OPLUT_RGB_READ @ 1018:014c

/* WARNING: Control flow encountered bad instruction data */

void OPLUT_RGB_READ(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- OPLUT_LOAD @ 1018:0150

/* WARNING: Control flow encountered bad instruction data */

void OPLUT_LOAD(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- OPLUT_READ @ 1018:0154

/* WARNING: Control flow encountered bad instruction data */

void OPLUT_READ(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- OPLUT_QLIN @ 1018:0158

/* WARNING: Control flow encountered bad instruction data */

void OPLUT_QLIN(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- OPLUT_SAVE @ 1018:015c

/* WARNING: Control flow encountered bad instruction data */

void OPLUT_SAVE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- OPLUT_RESTORE @ 1018:0160

/* WARNING: Control flow encountered bad instruction data */

void OPLUT_RESTORE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- SEM_PLANE_CTRL @ 1018:0164

/* WARNING: Control flow encountered bad instruction data */

void SEM_PLANE_CTRL(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- READ_AN_IMAGE_PIXEL @ 1018:0168

/* WARNING: Control flow encountered bad instruction data */

void READ_AN_IMAGE_PIXEL(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- SWITCHLUT_MODE @ 1018:016c

/* WARNING: Control flow encountered bad instruction data */

void SWITCHLUT_MODE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_13 @ 1018:0170

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_13(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_34 @ 1018:0174

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_34(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- EXPECTSTAGETIMEOUT @ 1018:0178

/* WARNING: Control flow encountered bad instruction data */

void EXPECTSTAGETIMEOUT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- DOCOMMANDUNFREEZE_ALL @ 1018:017c

/* WARNING: Control flow encountered bad instruction data */

void DOCOMMANDUNFREEZE_ALL(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- SWITCHPLANEA_FROZEN @ 1018:0180

/* WARNING: Control flow encountered bad instruction data */

void SWITCHPLANEA_FROZEN(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- SWITCHPLANEB_FROZEN @ 1018:0184

/* WARNING: Control flow encountered bad instruction data */

void SWITCHPLANEB_FROZEN(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- INSTANT_FREEZE_ALL @ 1018:0188

/* WARNING: Control flow encountered bad instruction data */

void INSTANT_FREEZE_ALL(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- INSTANT_FREEZE_ZONE @ 1018:018c

/* WARNING: Control flow encountered bad instruction data */

void INSTANT_FREEZE_ZONE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_105 @ 1018:0190

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_105(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_109 @ 1018:0194

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_109(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_535 @ 1018:0198

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_535(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_536 @ 1018:019c

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_536(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_537 @ 1018:01a0

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_537(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_547 @ 1018:01a4

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_547(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_2072 @ 1018:01a8

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_2072(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_6006 @ 1018:01ac

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_6006(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_8000 @ 1018:01b0

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_8000(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_8001 @ 1018:01b4

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_8001(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_8002 @ 1018:01b8

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_8002(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_8003 @ 1018:01bc

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_8003(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_8004 @ 1018:01c0

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_8004(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_8005 @ 1018:01c4

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_8005(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_8006 @ 1018:01c8

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_8006(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_8007 @ 1018:01cc

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_8007(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_8008 @ 1018:01d0

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_8008(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_8009 @ 1018:01d4

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_8009(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_8010 @ 1018:01d8

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_8010(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_8011 @ 1018:01dc

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_8011(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_8012 @ 1018:01e0

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_8012(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_8013 @ 1018:01e4

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_8013(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_8014 @ 1018:01e8

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_8014(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_8015 @ 1018:01ec

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_8015(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_8016 @ 1018:01f0

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_8016(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_8017 @ 1018:01f4

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_8017(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_8018 @ 1018:01f8

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_8018(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


