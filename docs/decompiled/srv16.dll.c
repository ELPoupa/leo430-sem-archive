// Decompiled with Ghidra from srv16.dll
// Format: New Executable (NE), image base 0000:0000

// ---- FUN_1000_0144 @ 1000:0144

void FUN_1000_0144(undefined2 param_1)

{
  Ordinal_651(param_1);
  return;
}


// ---- entry @ 1000:01be

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
  
  DAT_1008_2aa2 = 0x1008;
  uVar3 = unaff_CS;
  DAT_1008_2aa0 = unaff_DI;
  DAT_1008_2aa4 = in_CX;
  DAT_1008_2aa6 = in_BX;
  DAT_1008_2aa8 = unaff_SI;
  if (in_CX != 0) {
    uVar3 = 0x1010;
    iVar2 = LOCALINIT(unaff_CS,in_CX,0);
    if (iVar2 == 0) {
      return;
    }
  }
  LOCKSEGMENT(uVar3,0xffff);
  uVar4 = 0x1fc;
  uVar3 = GETVERSION(0x1010);
  DAT_1008_2ada = CONCAT11((char)uVar3,(char)((uint)uVar3 >> 8));
  if ((DAT_1000_017a & 1) == 0) {
    pcVar1 = (code *)swi(0x21);
    DAT_1008_2ade = (*pcVar1)();
  }
  else {
    uVar4 = 0x1000;
    DAT_1008_2ade = DOS3CALL(0x1000);
  }
  DAT_1008_2adc = CONCAT11((char)DAT_1008_2ade,(char)((uint)DAT_1008_2ade >> 8));
  if ((DAT_1000_017a & 1) == 0) {
    DAT_1008_2ae1 = 0;
  }
  FUN_1000_02f6(uVar4);
  FUN_1000_03fe();
  DAT_1008_2aaa = DAT_1008_2aaa + '\x01';
  FUN_1000_02ca(DAT_1008_2afa,DAT_1008_2afc,DAT_1008_2afe,DAT_1008_2b00,DAT_1008_2b02);
  return;
}


// ---- FUN_1000_0260 @ 1000:0260

undefined2 __stdcall16far FUN_1000_0260(void)

{
  return 1;
}


// ---- FUN_1000_0278 @ 1000:0278

undefined2 __cdecl16far FUN_1000_0278(void)

{
  longdouble in_ST0;
  undefined2 local_10;
  
  local_10 = (undefined2)(sqword)ROUND(in_ST0);
  return local_10;
}


// ---- FUN_1000_02ca @ 1000:02ca

void __cdecl16far FUN_1000_02ca(void)

{
  FUN_1000_1ef0(DAT_1008_2aa6,DAT_1008_2aa8,DAT_1008_2aa4,DAT_1008_2aa2,DAT_1008_2aa0);
  return;
}


// ---- FUN_1000_02f6 @ 1000:02f6

void __cdecl16far FUN_1000_02f6(void)

{
  int unaff_BP;
  int iVar1;
  bool bVar2;
  undefined2 uVar3;
  
  iVar1 = unaff_BP + 1;
  uVar3 = 0x1008;
  if (DAT_1008_2cd2 != 0) {
    bVar2 = false;
    (*DAT_1008_2cd0)();
    if (bVar2) {
      FUN_1000_0e34();
      return;
    }
  }
  FUN_1000_03c6(uVar3,iVar1);
  FUN_1000_03c6();
  FUN_1000_03c6();
  return;
}


// ---- FUN_1000_033e @ 1000:033e

undefined2 __cdecl16far FUN_1000_033e(void)

{
  DAT_1008_2b0b = 1;
  FUN_1000_03c6();
  FUN_1000_03c6();
  FUN_1000_03c6();
  FUN_1000_03c6();
  FUN_1000_0d0e();
  FUN_1000_0e78();
  return 0x100;
}


// ---- FUN_1000_03c6 @ 1000:03c6

void __cdecl16near FUN_1000_03c6(void)

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


// ---- FUN_1000_03da @ 1000:03da

void __cdecl16far FUN_1000_03da(void)

{
  FUN_1000_0c29(0xfc);
  FUN_1000_0c29(0xff);
  return;
}


// ---- FUN_1000_03fe @ 1000:03fe

void __cdecl16far FUN_1000_03fe(void)

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
  pcVar11 = (char *)FUN_1000_0e3a();
  uVar5 = (undefined2)((ulong)pcVar11 >> 0x10);
  pcVar9 = (char *)pcVar11;
  puVar12 = (undefined2 *)FUN_1000_0e3a();
  uVar6 = (undefined2)((ulong)puVar12 >> 0x10);
  DAT_1008_2b00 = (undefined2 *)puVar12;
  pcVar8 = (char *)0x0;
  for (; DAT_1008_2b02 = (undefined2)((ulong)puVar12 >> 0x10), puVar2 = (undefined2 *)puVar12,
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
      puVar12 = (undefined2 *)CONCAT22(DAT_1008_2b02,puVar2 + 2);
    } while (cVar1 != '\0');
  }
  *puVar2 = 0;
  puVar2[1] = 0;
  return;
}


// ---- FUN_1000_0496 @ 1000:0496

undefined2 __cdecl16far FUN_1000_0496(undefined4 param_1)

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


// ---- FUN_1000_04b7 @ 1000:04b7

undefined2 __cdecl16far FUN_1000_04b7(uint param_1)

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
      if (*(int *)((int)(undefined4 *)&DAT_1008_2b42 + 2) != 0) {
        pcVar4 = (code *)0xe7a;
        while( true ) {
          uVar3 = *(uint *)&DAT_1008_2b4c;
          uVar6 = (uint)((ulong)*(undefined4 *)&DAT_1008_2b46 >> 0x10);
          in_BX = (int)*(undefined4 *)&DAT_1008_2b46;
          uVar10 = uVar6;
          do {
            do {
              unaff_CS = 0x1000;
              uVar9 = (*pcVar4)();
              if (!bVar7) {
                if (pcVar4 == (code *)0xe7a) goto LAB_1000_0528;
                goto LAB_1000_0525;
              }
              puVar1 = (undefined4 *)(in_BX + 0xe);
              in_BX = (int)*puVar1;
              bVar7 = uVar6 < uVar3;
              bVar8 = uVar6 != uVar3;
              uVar6 = (uint)((ulong)*puVar1 >> 0x10);
            } while (bVar8);
            uVar3 = *(uint *)((int)*(undefined4 *)&DAT_1008_2b46 + 0x14);
            uVar6 = (uint)((ulong)*(undefined4 *)&DAT_1008_2b42 >> 0x10);
            in_BX = (int)*(undefined4 *)&DAT_1008_2b42;
            bVar7 = uVar6 < uVar10;
            bVar8 = uVar6 != uVar10;
            uVar10 = uVar6;
          } while (bVar8);
          bVar7 = pcVar4 < (code *)0xd1c;
          if (pcVar4 == (code *)0xd1c) break;
          pcVar4 = (code *)0xd1c;
        }
      }
      FUN_1000_0c8c();
      if (!bVar7) {
LAB_1000_0525:
        uVar9 = FUN_1000_0e7a();
LAB_1000_0528:
        *(undefined2 *)((int)(undefined4 *)&DAT_1008_2b46 + 2) = (int)((ulong)uVar9 >> 0x10);
        *(int *)&DAT_1008_2b46 = in_BX;
        return (int)uVar9;
      }
    }
    if (*(int *)&DAT_1008_2b12 == 0 && *(int *)&DAT_1008_2b10 == 0) {
      return 0;
    }
    iVar2 = (*(code *)*(undefined2 *)&DAT_1008_2b10)(unaff_CS,param_1);
    if (iVar2 == 0) {
      return 0;
    }
  } while( true );
}


// ---- FUN_1000_055e @ 1000:055e

void __cdecl16far FUN_1000_055e(char *param_1)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  undefined2 uVar4;
  char local_6;
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  if ((*(byte *)(*param_1 + 0x2b53) & 1) == 0) {
    iVar3 = (int)*param_1;
  }
  else {
    iVar3 = *param_1 + 0x20;
  }
  if (iVar3 != 0x65) {
    do {
      pcVar1 = (char *)param_1 + 1;
      param_1 = (char *)ZEXT24(pcVar1);
    } while ((*(byte *)(*pcVar1 + 0x2b53) & 4) != 0);
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


// ---- FUN_1000_05d4 @ 1000:05d4

undefined2 __cdecl16far FUN_1000_05d4(char *param_1)

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


// ---- FUN_1000_0658 @ 1000:0658

bool __cdecl16far FUN_1000_0658(double *param_1)

{
  return DAT_1008_2ce8 <= *param_1;
}


// ---- FUN_1000_0690 @ 1000:0690

void __cdecl16far FUN_1000_0690(int param_1,float *param_2,undefined2 param_3,undefined2 param_4)

{
  undefined2 *puVar1;
  double *pdVar2;
  undefined2 in_DX;
  float *pfVar3;
  undefined2 uVar4;
  
  if (param_1 == 0) {
    pdVar2 = (double *)FUN_1000_0ef6(param_3,param_4);
    *param_2 = (float)*pdVar2;
  }
  else {
    puVar1 = (undefined2 *)FUN_1000_0ef6(param_3,param_4);
    uVar4 = (undefined2)((ulong)param_2 >> 0x10);
    pfVar3 = (float *)param_2;
    *(undefined2 *)param_2 = *puVar1;
    *(undefined2 *)((int)pfVar3 + 2) = puVar1[1];
    *(undefined2 *)(pfVar3 + 1) = puVar1[2];
    *(undefined2 *)((int)pfVar3 + 6) = puVar1[3];
  }
  return;
}


// ---- FUN_1000_06e8 @ 1000:06e8

undefined1 * __cdecl16far
FUN_1000_06e8(undefined2 *param_1,undefined1 *param_2,undefined2 param_3,int param_4,int param_5)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined2 in_DX;
  undefined2 *puVar3;
  int iVar4;
  undefined2 uVar5;
  undefined4 local_c;
  undefined4 local_8;
  
  if (DAT_1008_2b36 == '\0') {
    uVar5 = (undefined2)((ulong)param_1 >> 0x10);
    puVar3 = (undefined2 *)param_1;
    piVar1 = (int *)FUN_1000_116a(*param_1,puVar3[1],puVar3[2],puVar3[3]);
    local_8 = (int *)CONCAT22(in_DX,piVar1);
    FUN_1000_0f54(param_2 + (uint)(0 < param_4) + (uint)(*local_8 == 0x2d),param_3,param_4 + 1,
                  piVar1,in_DX);
  }
  else {
    local_8 = (int *)CONCAT22(DAT_1008_3052,DAT_1008_3050);
    FUN_1000_0b9a(0 < param_4,param_2 + (*DAT_1008_3050 == 0x2d),param_3);
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
           FUN_1000_101c((undefined1 *)local_c + param_4 + (uint)(DAT_1008_2b36 == '\0'),
                         local_c._2_2_,0x2b3b,0x1008);
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


// ---- FUN_1000_0880 @ 1000:0880

void __cdecl16far
FUN_1000_0880(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5,undefined2 param_6)

{
  DAT_1008_2b36 = 1;
  FUN_1000_06e8(param_1,param_2,param_3,param_4,param_5,param_6);
  DAT_1008_2b36 = 0;
  return;
}


// ---- FUN_1000_08b4 @ 1000:08b4

undefined1 * __cdecl16far
FUN_1000_08b4(undefined2 *param_1,undefined1 *param_2,undefined2 param_3,int param_4)

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
  
  iVar3 = DAT_1008_2b38;
  if (DAT_1008_2b36 == '\0') {
    uVar6 = (undefined2)((ulong)param_1 >> 0x10);
    puVar4 = (undefined2 *)param_1;
    piVar5 = (int *)FUN_1000_116a(*param_1,puVar4[1],puVar4[2],puVar4[3]);
    local_8 = (int *)CONCAT22(in_DX,piVar5);
    FUN_1000_0f54(param_2 + (*local_8 == 0x2d),param_3,piVar5[1] + param_4,piVar5,in_DX);
  }
  else {
    local_8 = (int *)CONCAT22(DAT_1008_3052,DAT_1008_3050);
    iVar1 = *DAT_1008_3050;
    if (param_4 == DAT_1008_2b38) {
      param_2[DAT_1008_2b38 + (uint)(iVar1 == 0x2d)] = 0x30;
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
    FUN_1000_0b9a(1,puVar2,param_3);
    puVar2 = puVar2 + 1;
    *local_c = 0x30;
  }
  else {
    puVar2 = puVar2 + piVar5[1];
  }
  local_c = (undefined1 *)CONCAT22(param_3,puVar2);
  if (0 < param_4) {
    FUN_1000_0b9a(1,puVar2,param_3);
    *local_c = 0x2e;
    if (piVar5[1] < 0) {
      if (DAT_1008_2b36 == '\0') {
        iVar3 = -piVar5[1];
        if (-param_4 != piVar5[1] && param_4 <= iVar3) {
          iVar3 = param_4;
        }
      }
      else {
        iVar3 = -piVar5[1];
      }
      FUN_1000_0b9a(iVar3,puVar2 + 1,param_3);
      FUN_1000_1058(puVar2 + 1,param_3,0x30,iVar3);
    }
  }
  return param_2;
}


// ---- FUN_1000_0a1a @ 1000:0a1a

void __cdecl16far
FUN_1000_0a1a(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5)

{
  DAT_1008_2b36 = 1;
  FUN_1000_08b4(param_1,param_2,param_3,param_4,param_5);
  DAT_1008_2b36 = 0;
  return;
}


// ---- FUN_1000_0a4c @ 1000:0a4c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far
FUN_1000_0a4c(undefined2 *param_1,int param_2,undefined2 param_3,int param_4,undefined2 param_5)

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
  piVar2 = (int *)FUN_1000_116a(*param_1,puVar5[1],puVar5[2],puVar5[3]);
  _DAT_1008_3050 = (int *)CONCAT22(in_DX,piVar2);
  DAT_1008_2b38 = piVar2[1] + -1;
  pcVar3 = (char *)((uint)(*_DAT_1008_3050 == 0x2d) + param_2);
  local_8 = (char *)CONCAT22(param_3,pcVar3);
  FUN_1000_0f54(pcVar3,param_3,param_4,piVar2,in_DX);
  iVar4 = ((int *)_DAT_1008_3050)[1] + -1;
  DAT_1008_2b3a = DAT_1008_2b38 < iVar4;
  DAT_1008_2b38 = iVar4;
  if ((iVar4 < -4) || (param_4 <= iVar4)) {
    FUN_1000_0880(puVar5,uVar6,param_2,param_3,param_4,param_5);
  }
  else {
    if ((bool)DAT_1008_2b3a) {
      do {
        pcVar1 = local_8;
        uVar7 = (undefined2)((ulong)local_8 >> 0x10);
        pcVar3 = (char *)local_8;
        local_8 = (char *)CONCAT22(uVar7,(char *)local_8 + 1);
      } while (*pcVar1 != '\0');
      pcVar3[-1] = '\0';
    }
    FUN_1000_0a1a(puVar5,uVar6,param_2,param_3,param_4);
  }
  return;
}


// ---- FUN_1000_0b2c @ 1000:0b2c

void __cdecl16far
FUN_1000_0b2c(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             int param_5,undefined2 param_6,undefined2 param_7)

{
  int unaff_BP;
  
  if ((param_5 == 0x65) || (param_5 == 0x45)) {
    FUN_1000_06e8(param_1,param_2,param_3,param_4,param_6,param_7);
  }
  else if (param_5 == 0x66) {
    FUN_1000_08b4(param_1,param_2,param_3,param_4,param_6);
  }
  else {
    FUN_1000_0a4c(param_1,param_2,param_3,param_4,param_6,param_7,0x1008,unaff_BP + 1);
  }
  return;
}


// ---- FUN_1000_0b9a @ 1000:0b9a

void FUN_1000_0b9a(int param_1,int param_2,undefined2 param_3)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = FUN_1000_1002(param_2,param_3);
    FUN_1000_10a0(param_2 + param_1,param_3,param_2,param_3,iVar1 + 1);
  }
  return;
}


// ---- FUN_1000_0bf2 @ 1000:0bf2

int * __stdcall16far FUN_1000_0bf2(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  piVar3 = (int *)&DAT_1008_2cf8;
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


// ---- FUN_1000_0c29 @ 1000:0c29

undefined2 __stdcall16far FUN_1000_0c29(void)

{
  return 0x1008;
}


// ---- FUN_1000_0c4a @ 1000:0c4a

void FUN_1000_0c4a(void)

{
  char *pcVar1;
  undefined2 in_AX;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int in_CX;
  uint uVar5;
  char *unaff_DI;
  undefined2 unaff_ES;
  undefined2 unaff_CS;
  undefined4 uVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  undefined2 uVar10;
  
  uVar10 = in_AX;
  FUN_1000_03da();
  FUN_1000_0c29(in_AX);
  pcVar2 = (char *)FUN_1000_0bf2(uVar10);
  if (pcVar2 != (char *)0x0) {
    iVar3 = 9;
    if (*pcVar2 == 'M') {
      iVar3 = 0xf;
    }
    pcVar2 = pcVar2 + iVar3;
    unaff_ES = 0x1008;
    in_CX = 0x22;
    unaff_DI = pcVar2;
    do {
      if (in_CX == 0) break;
      in_CX = in_CX + -1;
      pcVar1 = unaff_DI;
      unaff_DI = unaff_DI + 1;
    } while (*pcVar1 != '\r');
    unaff_DI[-1] = '\0';
  }
  uVar10 = 0;
  FATALAPPEXIT(unaff_CS,pcVar2,0x1008);
  FATALEXIT(0x1010,0xff,uVar10);
  uVar5 = in_CX + 0x1019U & 0xf000;
  iVar3 = 0;
  if (uVar5 == 0) {
    if ((DAT_1000_017a & 0x10) != 0) {
      return;
    }
    iVar3 = 1;
  }
  uVar8 = 0;
  uVar9 = DAT_1000_017a;
  iVar4 = GLOBALALLOC(0x1000,uVar5,iVar3);
  if (iVar4 != 0) {
    if ((uVar8 & 1) != 0) {
      iVar3 = iVar4;
      uVar6 = GLOBALLOCK(0x1010,iVar4,iVar4,uVar9,unaff_ES,in_CX);
      iVar4 = (int)((ulong)uVar6 >> 0x10);
      if (((int)uVar6 != 0) || (iVar4 == 0)) goto LAB_1000_0d03;
    }
    lVar7 = GLOBALSIZE(0x1010,iVar4);
    if (lVar7 == 0) {
LAB_1000_0d03:
      FUN_1000_0c4a();
      return;
    }
    *(int *)0x6 = iVar3;
    *(undefined2 *)0x2 = *(undefined2 *)(unaff_DI + 0xc);
    FUN_1000_11fe();
    FUN_1000_1232();
  }
  return;
}


// ---- FUN_1000_0c8c @ 1000:0c8c

void __cdecl16near FUN_1000_0c8c(void)

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
    if ((DAT_1000_017a & 0x10) != 0) {
      return;
    }
    iVar2 = 1;
  }
  uVar6 = 0;
  uVar7 = DAT_1000_017a;
  iVar1 = GLOBALALLOC(0x1000,uVar3,iVar2);
  if (iVar1 != 0) {
    if ((uVar6 & 1) != 0) {
      iVar2 = iVar1;
      uVar4 = GLOBALLOCK(0x1010,iVar1,iVar1,uVar7);
      iVar1 = (int)((ulong)uVar4 >> 0x10);
      if (((int)uVar4 != 0) || (iVar1 == 0)) goto LAB_1000_0d03;
    }
    lVar5 = GLOBALSIZE(0x1010,iVar1);
    if (lVar5 == 0) {
LAB_1000_0d03:
      FUN_1000_0c4a();
      return;
    }
    *(int *)0x6 = iVar2;
    *(undefined2 *)0x2 = *(undefined2 *)(unaff_DI + 0xc);
    FUN_1000_11fe();
    FUN_1000_1232();
  }
  return;
}


// ---- FUN_1000_0d0e @ 1000:0d0e

void __cdecl16near FUN_1000_0d0e(void)

{
  FUN_1000_11c0();
  return;
}


// ---- FUN_1000_0d1c @ 1000:0d1c

void __cdecl16near FUN_1000_0d1c(void)

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
    FUN_1000_0e13();
    if ((*unaff_SI & 1) != 0) {
      in_CX = (in_CX - *unaff_SI) + -1;
    }
    uVar4 = *(uint *)(in_BX + 4);
    if (uVar4 != 0) {
      if (!CARRY2(in_CX + 2U,uVar4)) {
        uVar2 = FUN_1000_0e68();
        uVar4 = *(uint *)&DAT_1008_2b50;
        if (uVar4 == 0x1000) goto LAB_1000_0d6e;
        uVar5 = 0x8000;
        while (uVar4 <= uVar5) {
          uVar5 = uVar5 >> 1;
          if (uVar5 == 0) goto LAB_1000_0d87;
        }
        if (uVar5 < 8) goto LAB_1000_0d87;
        uVar4 = uVar5 << 1;
        goto LAB_1000_0d6e;
      }
      uVar5 = 0xfff0;
      if (in_CX + 2U + uVar4 == 0) {
        while( true ) {
          bVar8 = false;
          iVar3 = FUN_1000_0dad();
          if (!bVar8) break;
          if (uVar5 == 0xfff0) {
            return;
          }
LAB_1000_0d87:
          uVar4 = 0x10;
LAB_1000_0d6e:
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


// ---- FUN_1000_0dad @ 1000:0dad

void __cdecl16near FUN_1000_0dad(void)

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
LAB_1000_0e08:
    FUN_1000_0c4a();
    return;
  }
  iVar5 = *(int *)(in_BX + 6);
  uVar3 = 0;
  if (in_AX == 0) {
    if ((DAT_1000_017a & 0x10) != 0) {
      return;
    }
    uVar3 = 1;
  }
  uVar1 = 0x2002;
  if ((DAT_1000_017a & 1) == 0) {
    uVar1 = 0x2020;
  }
  iVar6 = iVar5;
  iVar2 = GLOBALREALLOC(0x1000,uVar1,in_AX,uVar3);
  if (iVar2 != 0) {
    if ((iVar2 != iVar5) || (lVar4 = GLOBALSIZE(0x1010,iVar5,iVar6), lVar4 == 0))
    goto LAB_1000_0e08;
    if ((*(byte *)(iVar5 + 2) & 4) != 0) {
      *(int *)(iVar5 + -2) = in_BX + -1;
    }
  }
  return;
}


// ---- FUN_1000_0e13 @ 1000:0e13

void __cdecl16near FUN_1000_0e13(void)

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


// ---- FUN_1000_0e34 @ 1000:0e34

void FUN_1000_0e34(void)

{
  FUN_1000_0c4a();
  return;
}


// ---- FUN_1000_0e3a @ 1000:0e3a

void __cdecl16near FUN_1000_0e3a(void)

{
  undefined2 uVar1;
  int iVar2;
  int in_DX;
  
  uVar1 = DAT_1008_2b50;
  LOCK();
  DAT_1008_2b50 = 0x1000;
  UNLOCK();
  iVar2 = FUN_1000_04b7();
  DAT_1008_2b50 = uVar1;
  if (in_DX != 0 || iVar2 != 0) {
    return;
  }
  FUN_1000_0c4a();
  return;
}


// ---- FUN_1000_0e68 @ 1000:0e68

undefined2 __cdecl16far FUN_1000_0e68(void)

{
  undefined2 unaff_SS;
  
  if (___EXPORTEDSTUB != (code)0xb8) {
    return unaff_SS;
  }
  return uRam100011eb;
}


// ---- FUN_1000_0e78 @ 1000:0e78

void __cdecl16near FUN_1000_0e78(void)

{
  return;
}


// ---- FUN_1000_0e7a @ 1000:0e7a

uint * __cdecl16near FUN_1000_0e7a(void)

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
          if (CARRY2((uint)puVar1,uVar2)) goto LAB_1000_0ed3;
          puVar6 = (uint *)((int)puVar1 + uVar2) + 1;
          uVar3 = *(uint *)((int)puVar1 + uVar2);
          if ((uVar3 & 1) == 0) break;
          uVar3 = uVar3 + uVar2 + 2;
          *puVar7 = uVar3;
        }
      }
      if (puVar6 + -1 < puVar5) break;
      if (((uint)puVar5 & 1) != 0) goto LAB_1000_0ed3;
      puVar7 = (uint *)*(undefined2 *)(in_BX + 8);
      if ((uint *)*(undefined2 *)(in_BX + 10) == puVar7) goto LAB_1000_0ed3;
      puVar5 = (uint *)((int)*(undefined2 *)(in_BX + 10) + -1);
    }
    puVar7 = (uint *)((int)puVar6 + uVar3);
  } while (!CARRY2((uint)puVar6,uVar3));
LAB_1000_0ed3:
  puVar7 = (uint *)*(undefined2 *)(in_BX + 8);
  *(undefined2 *)(in_BX + 10) = puVar7;
  return puVar7;
}


// ---- FUN_1000_0ef6 @ 1000:0ef6

undefined2 * __cdecl16far FUN_1000_0ef6(char *param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 in_DX;
  undefined2 uVar3;
  
  while (uVar3 = (undefined2)((ulong)param_1 >> 0x10), (*(byte *)(*param_1 + 0x2b53) & 8) != 0) {
    param_1 = (char *)CONCAT22(uVar3,(char *)param_1 + 1);
  }
  uVar1 = FUN_1000_1268((char *)param_1,uVar3,0,0);
  iVar2 = FUN_1000_1436((char *)param_1,uVar3,uVar1);
  DAT_1008_3178 = *(undefined2 *)(iVar2 + 8);
  DAT_1008_317a = *(undefined2 *)(iVar2 + 10);
  DAT_1008_317c = *(undefined2 *)(iVar2 + 0xc);
  DAT_1008_317e = *(undefined2 *)(iVar2 + 0xe);
  return (undefined2 *)&DAT_1008_3178;
}


// ---- FUN_1000_0f54 @ 1000:0f54

void __cdecl16far FUN_1000_0f54(char *param_1,int param_2,undefined4 param_3)

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
    FUN_1000_101c(pcVar4,uVar6,pcVar4 + 1,uVar6);
  }
  return;
}


// ---- FUN_1000_1002 @ 1000:1002

uint __cdecl16far FUN_1000_1002(char *param_1)

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


// ---- FUN_1000_101c @ 1000:101c

void __cdecl16far FUN_1000_101c(char *param_1,char *param_2)

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


// ---- FUN_1000_1058 @ 1000:1058

undefined2 * __cdecl16far FUN_1000_1058(undefined2 *param_1,undefined1 param_2,uint param_3)

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


// ---- FUN_1000_10a0 @ 1000:10a0

undefined2 * __cdecl16far FUN_1000_10a0(undefined2 *param_1,undefined2 *param_2,uint param_3)

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
    lVar15 = FUN_1000_1282(puVar10,iVar13,puVar8,iVar14);
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
          iVar14 = iVar14 + 0x1000;
        }
        if (puVar12 == (undefined2 *)0x0) {
          iVar13 = iVar13 + 0x1000;
        }
      }
    }
    else {
      uVar6 = param_3 - 1;
      puVar9 = (undefined1 *)((int)puVar8 + uVar6);
      if (CARRY2((uint)puVar8,uVar6)) {
        iVar14 = iVar14 + 0x1000;
      }
      puVar11 = (undefined1 *)((int)puVar10 + uVar6);
      if (CARRY2((uint)puVar10,uVar6)) {
        iVar13 = iVar13 + 0x1000;
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
          iVar14 = iVar14 + -0x1000;
        }
        if (puVar11 == (undefined1 *)0xffff) {
          iVar13 = iVar13 + -0x1000;
        }
      }
    }
  }
  return puVar10;
}


// ---- FUN_1000_116a @ 1000:116a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 * __cdecl16far
FUN_1000_116a(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

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
  _DAT_1008_2c5e = param_1;
  _DAT_1008_2c60 = param_2;
  DAT_1008_2c62 = param_3;
  DAT_1008_2c64 = param_4;
  uVar6 = FUN_1000_12f0(&iStack_2);
  puVar5 = (undefined1 *)&DAT_1008_2c66;
  puVar4 = (undefined1 *)&DAT_1008_2c5f;
  for (iVar3 = (int)DAT_1008_2c5e; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar2 = *puVar1;
  }
  *puVar5 = 0;
  DAT_1008_2c54 = in_BX & 0xff;
  DAT_1008_2c56 = (int)((ulong)uVar6 >> 0x10);
  DAT_1008_2c58 = (int)uVar6;
  DAT_1008_2c5a = (undefined1 *)&DAT_1008_2c66;
  DAT_1008_2c5c = 0x1008;
  return (undefined2 *)&DAT_1008_2c54;
}


// ---- FUN_1000_11c0 @ 1000:11c0

void __cdecl16near FUN_1000_11c0(void)

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


// ---- ___EXPORTEDSTUB @ 1000:11ea

undefined2 __cdecl16far ___EXPORTEDSTUB(void)

{
  return 0;
}


// ---- FUN_1000_11fe @ 1000:11fe

void __cdecl16near FUN_1000_11fe(void)

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


// ---- FUN_1000_1232 @ 1000:1232

void __cdecl16near FUN_1000_1232(void)

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


// ---- FUN_1000_1268 @ 1000:1268

uint __cdecl16far FUN_1000_1268(char *param_1)

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


// ---- FUN_1000_1282 @ 1000:1282

undefined4 __stdcall16far FUN_1000_1282(uint param_1,uint param_2,uint param_3,uint param_4)

{
  return CONCAT22(((param_2 >> 0xc) - (param_4 >> 0xc)) - (uint)(param_1 < param_3),
                  param_1 - param_3);
}


// ---- FUN_1000_12f0 @ 1000:12f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined4 __cdecl16near FUN_1000_12f0(void)

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
  
  pdVar30 = (double *)&DAT_1008_2c7a;
  for (iVar18 = 4; Var14 = _DAT_1008_2c7a, iVar18 != 0; iVar18 = iVar18 + -1) {
    pdVar3 = pdVar30;
    pdVar30 = (double *)((int)pdVar30 + 2);
    puVar1 = unaff_SI;
    unaff_SI = unaff_SI + 1;
    *(undefined2 *)pdVar3 = *puVar1;
  }
  uVar19 = DAT_1008_2c7a._6_2_;
                    /* WARNING: Ignoring partial resolution of indirect */
  DAT_1008_2c7a._7_1_ = DAT_1008_2c7a._7_1_ & 0x7f;
  Var15 = _DAT_1008_2c7a;
  DAT_1008_2c7a = ABS((double)Var14);
  uVar24 = 0x20;
  if (((DAT_1008_2c7a._0_2_ == 0 && DAT_1008_2c7a._2_2_ == 0) && DAT_1008_2c7a._4_2_ == 0) &&
      DAT_1008_2c7a._6_2_ == 0) {
    DAT_1008_2c86 = (char *)s_M6100__MATH___floating_point_err_1008_2fe1 + 0x20;
    _DAT_1008_2c7a = (longdouble)Var15;
    return 1;
  }
  if ((int)uVar19 < 0) {
    uVar24 = 0x2d;
  }
  if ((~uVar19 & 0x7ff0) == 0) {
    _DAT_1008_2c7a = (longdouble)Var15;
    return 0x10000;
  }
  DAT_1008_2cb3 = (undefined1)in_FPUControlWord;
  DAT_1008_2cb5._0_1_ = DAT_1008_2cb3;
  lVar35 = (longdouble)DAT_1008_2c7a;
  DAT_1008_2c7a._7_1_ = (byte)((unkuint10)lVar35 >> 0x38);
  DAT_1008_2c82 = (uint)((unkuint10)lVar35 >> 0x40);
  lVar12 = (ulong)DAT_1008_2c82 * 0x4d10 + (ulong)((DAT_1008_2c82 >> 8) * 0x4d);
  uVar19 = (uint)lVar12;
  iVar18 = ((int)((ulong)lVar12 >> 0x10) + (uint)CARRY2(uVar19,(uint)DAT_1008_2c7a._7_1_ * 0x9a) +
           -0x1343) - (uint)(uVar19 + (uint)DAT_1008_2c7a._7_1_ * 0x9a < 0x12f4);
  _DAT_1008_2c7a = lVar35;
  _DAT_1008_2cb3 = in_FPUControlWord;
  FUN_1000_1616(iVar18,uVar24);
  DAT_1008_2cb1 =
       (uint)(_DAT_1000_12a2 < lVar35) << 8 | (uint)(NAN(_DAT_1000_12a2) || NAN(lVar35)) << 10 |
       (uint)(_DAT_1000_12a2 == lVar35) << 0xe;
  if (_DAT_1000_12a2 < lVar35 || (_DAT_1000_12a2 == lVar35) != 0) {
    iVar18 = iVar18 + 1;
    lVar35 = _DAT_1000_12ac * lVar35;
  }
  DAT_1008_2c7a._0_2_ = SUB102(lVar35,0);
  DAT_1008_2c7a._2_2_ = (uint)((unkuint10)lVar35 >> 0x10);
  DAT_1008_2c7a._4_2_ = (uint)((unkuint10)lVar35 >> 0x20);
  DAT_1008_2c7a._6_2_ = (uint)((unkuint10)lVar35 >> 0x30);
  DAT_1008_2c82 = (uint)((unkuint10)lVar35 >> 0x40);
  bVar32 = false;
  bVar17 = 0;
  for (iVar20 = -(DAT_1008_2c82 + 0xc002); iVar20 != 0; iVar20 = iVar20 + -1) {
    uVar19 = DAT_1008_2c7a._6_2_ & 1;
    DAT_1008_2c7a._6_2_ = DAT_1008_2c7a._6_2_ >> 1;
    bVar32 = (bVar17 & 1) != 0;
    bVar17 = (byte)(CONCAT11((DAT_1008_2c7a._0_2_ & 1) != 0,bVar17) >> 1);
    DAT_1008_2c7a._0_2_ = (uint)(CONCAT12((DAT_1008_2c7a._2_2_ & 1) != 0,DAT_1008_2c7a._0_2_) >> 1);
    DAT_1008_2c7a._2_2_ = (uint)(CONCAT12((DAT_1008_2c7a._4_2_ & 1) != 0,DAT_1008_2c7a._2_2_) >> 1);
    DAT_1008_2c7a._4_2_ = (uint)(CONCAT12(uVar19 != 0,DAT_1008_2c7a._4_2_) >> 1);
  }
  uVar28 = DAT_1008_2c7a._0_2_ + 0x39a + (uint)bVar32;
  uVar19 = (uint)(0xfc65 < DAT_1008_2c7a._0_2_ || CARRY2(DAT_1008_2c7a._0_2_ + 0x39a,(uint)bVar32));
  uVar26 = DAT_1008_2c7a._2_2_ + uVar19;
  uVar19 = (uint)CARRY2(DAT_1008_2c7a._2_2_,uVar19);
  uVar22 = DAT_1008_2c7a._4_2_ + uVar19;
  uVar19 = DAT_1008_2c7a._6_2_ + CARRY2(DAT_1008_2c7a._4_2_,uVar19);
  iVar20 = 0x10;
  pcVar16 = (char *)((int)(char **)&DAT_1008_2c86 + 1);
  _DAT_1008_2c7a = lVar35;
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
  DAT_1008_2c86 = (char *)CONCAT11(DAT_1008_2c86._1_1_,(char)iVar21 + '\x12');
  return CONCAT22(iVar18,1);
}


// ---- FUN_1000_1436 @ 1000:1436

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * __cdecl16far FUN_1000_1436(int param_1,undefined2 param_2)

{
  uint uVar1;
  int unaff_BP;
  undefined2 unaff_SS;
  int local_8 [2];
  undefined2 local_4;
  int iStack_2;
  
  iStack_2 = unaff_BP + 1;
  local_4 = 0x1008;
  uVar1 = FUN_1000_1654(0,param_1,param_2,local_8,unaff_SS,0x305c,0x1008);
  DAT_1008_3056 = local_8[0] - param_1;
  DAT_1008_3055 = 0;
  if ((uVar1 & 4) != 0) {
    DAT_1008_3055 = 2;
  }
  if ((uVar1 & 1) != 0) {
    DAT_1008_3055 = DAT_1008_3055 | 1;
  }
  DAT_1008_3054 = (uVar1 & 2) != 0;
  return (undefined1 *)&DAT_1008_3054;
}


// ---- FUN_1000_1616 @ 1000:1616

void __cdecl16near FUN_1000_1616(void)

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


// ---- FUN_1000_1654 @ 1000:1654

/* WARNING: Removing unreachable block (ram,0x100016aa) */
/* WARNING: Removing unreachable block (ram,0x100016b3) */

int FUN_1000_1654(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
                 undefined2 param_5,double *param_6)

{
  int iVar1;
  undefined2 unaff_SS;
  longdouble local_c;
  
  iVar1 = FUN_1000_16bc(param_1,param_2,param_3,param_4,param_5,&local_c,unaff_SS);
  *param_6 = (double)local_c;
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  return iVar1;
}


// ---- FUN_1000_16bc @ 1000:16bc

uint FUN_1000_16bc(undefined2 param_1,byte *param_2,int *param_3,uint *param_4)

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
LAB_1000_170b:
      pbVar1 = pbVar11;
      pbVar11 = pbVar9 + 2;
      bVar6 = *pbVar1;
    }
    else if (bVar6 == 0x2d) {
      local_16 = 0x8000;
      goto LAB_1000_170b;
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
            if (local_1c == 0) goto LAB_1000_1759;
            pbVar1 = pbVar11;
            pbVar11 = pbVar11 + 1;
            bVar6 = *pbVar1;
          }
          if (bVar6 == 0x2e) {
            do {
              pbVar1 = pbVar11;
              pbVar11 = pbVar11 + 1;
              bVar6 = *pbVar1;
LAB_1000_1773:
              if ((bVar6 < 0x30) || (0x39 < bVar6)) goto LAB_1000_178f;
              pcVar2 = pcVar10;
              pcVar10 = pcVar10 + 1;
              *pcVar2 = bVar6 - 0x30;
              local_18 = local_18 + -1;
              local_1c = local_1c + -1;
            } while (local_1c != 0);
            goto LAB_1000_1786;
          }
          goto LAB_1000_178f;
        }
        do {
          local_18 = iVar5;
          bVar6 = *pbVar11;
LAB_1000_1738:
          pbVar11 = pbVar11 + 1;
          iVar5 = local_18 + -1;
        } while (bVar6 == 0x30);
        if (bVar6 != 0) goto LAB_1000_1773;
      }
      local_14 = pbVar11 + -1;
      goto LAB_1000_18f1;
    }
    if ((bVar6 == 0x2e) && ((bVar6 = *pbVar11, 0x2f < bVar6 && (bVar6 < 0x3a)))) goto LAB_1000_1738;
  }
  local_10 = 4;
  goto LAB_1000_18f1;
  while (iVar5 = local_18 + 1, bVar6 < 0x3a) {
LAB_1000_1759:
    local_18 = iVar5;
    pbVar1 = pbVar11;
    pbVar11 = pbVar11 + 1;
    bVar6 = *pbVar1;
    if (bVar6 < 0x30) break;
  }
  if (bVar6 == 0x2e) {
LAB_1000_1786:
    do {
      pbVar1 = pbVar11;
      pbVar11 = pbVar11 + 1;
      bVar6 = *pbVar1;
      if (bVar6 < 0x30) break;
    } while (bVar6 < 0x3a);
  }
LAB_1000_178f:
  local_1c = 0x19 - local_1c;
  local_14 = pbVar11 + -1;
  if ((((bVar6 == 0x45) || (bVar6 == 0x65)) || (bVar6 == 0x44)) || (bVar6 == 100)) {
    pbVar9 = pbVar11 + 1;
    bVar6 = *pbVar11;
    if (bVar6 == 0x2b) {
LAB_1000_17be:
      pbVar1 = pbVar9;
      pbVar9 = pbVar11 + 2;
      bVar6 = *pbVar1;
    }
    else if (bVar6 == 0x2d) {
      local_1a = 0xffff;
      goto LAB_1000_17be;
    }
    if ((0x2f < bVar6) && (bVar6 < 0x3a)) {
      uVar7 = bVar6 - 0x30;
      uVar8 = uVar7;
      do {
        pbVar1 = pbVar9;
        pbVar9 = pbVar9 + 1;
        bVar6 = *pbVar1;
        if ((bVar6 < 0x30) || (0x39 < bVar6)) goto LAB_1000_17f5;
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
LAB_1000_17f5:
      local_18 = local_18 + ((uVar8 ^ local_1a) - local_1a);
      local_14 = pbVar9 + -1;
    }
  }
  if (local_1c != 0) {
    *pcVar10 = '\0';
    pbVar11 = (byte *)(pcVar10 + -1);
    if (local_1c < 0x19) {
      if (local_18 != 0) goto LAB_1000_183c;
    }
    else {
      bVar6 = *pbVar11;
      *pbVar11 = 0;
      local_1c = local_1c - 1;
      local_18 = local_18 + 1;
      pbVar11 = (byte *)(pcVar10 + -2);
      if (bVar6 < 5) {
LAB_1000_183c:
        for (; *pbVar11 == 0; pbVar11 = pbVar11 + -1) {
          local_1c = local_1c - 1;
          local_18 = local_18 + 1;
        }
      }
      else {
        *pbVar11 = *pbVar11 + 1;
      }
    }
    FUN_1000_1e36(&local_e,local_1c,local_36,unaff_SS);
    if (local_18 == 0) {
LAB_1000_1876:
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
          goto LAB_1000_18d3;
        }
LAB_1000_18fd:
        local_10 = local_10 | 1;
        goto LAB_1000_18f1;
      }
    }
    else if (local_18 < 0x1450) {
      if (-0x1450 < local_18) {
        FUN_1000_1bdc(param_1,local_18,&local_e,unaff_SS);
        goto LAB_1000_1876;
      }
      goto LAB_1000_18fd;
    }
    local_10 = local_10 | 2;
    puVar12[4] = local_16 | 0x7fff;
    puVar12[3] = 0x8000;
    puVar12[2] = 0;
    puVar12[1] = 0;
    *param_4 = 0;
    goto LAB_1000_18d3;
  }
LAB_1000_18f1:
  for (iVar14 = 5; iVar14 != 0; iVar14 = iVar14 + -1) {
    puVar3 = puVar12;
    puVar12 = puVar12 + 1;
    *puVar3 = 0;
  }
LAB_1000_18d3:
  *param_3 = (int)local_14;
  ((int *)param_3)[1] = local_12;
  return local_10;
}


// ---- FUN_1000_1bdc @ 1000:1bdc

void FUN_1000_1bdc(int param_1,uint param_2,undefined2 *param_3)

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
    local_8 = (code *)0x1c7a;
    uVar2 = (undefined2)((ulong)param_3 >> 0x10);
    uStack_e = param_2;
    if (param_1 == 0) {
      local_8 = (code *)0x1c70;
      in_ST0 = *(unkbyte10 *)((undefined2 *)param_3 + 1);
    }
    while (uStack_e != 0) {
      uVar1 = uStack_e & 7;
      uStack_e = uStack_e >> 3;
      if (uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x10001c46. Too many branches */
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


// ---- FUN_1000_1e36 @ 1000:1e36

uint * FUN_1000_1e36(uint *param_1,int param_2,byte *param_3)

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
    FUN_1000_1ee4();
    uVar18 = FUN_1000_1ee4();
    uVar8 = (uint)CARRY2((uint)((ulong)uVar18 >> 0x10),uVar8);
    uVar4 = uVar13 + uVar5 + uVar8;
    uVar13 = (uint)(CARRY2(uVar13,uVar5) || CARRY2(uVar13 + uVar5,uVar8));
    bVar17 = CARRY2(uVar6,uVar10);
    uVar6 = uVar6 + uVar10;
    uVar11 = uVar6 + uVar13;
    bVar15 = CARRY2((uint)uVar18,uVar3);
    uVar1 = (uint)uVar18 + uVar3;
    uVar18 = FUN_1000_1ee4();
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


// ---- FUN_1000_1ee4 @ 1000:1ee4

undefined4 __cdecl16near FUN_1000_1ee4(void)

{
  int in_AX;
  int in_DX;
  uint in_BX;
  
  return CONCAT22(in_DX << 1,in_AX << 1 | (uint)((in_BX & 0x8000) != 0));
}


// ---- FUN_1000_1ef0 @ 1000:1ef0

undefined2 __stdcall16far FUN_1000_1ef0(void)

{
  return 1;
}


// ---- DLLENTRYPOINT @ 1000:1efc

bool __stdcall16far DLLENTRYPOINT(void)

{
  int iVar1;
  
  iVar1 = FUN_1000_0144();
  return iVar1 != 0;
}


// ---- SRV_TIMER_TICK @ 1000:1f24

void __cdecl16far SRV_TIMER_TICK(void)

{
  FUN_1000_2c30(0x1008);
  return;
}


// ---- SRV_SET_LANGUAGE_HANDLE @ 1000:1f36

void __stdcall16far SRV_SET_LANGUAGE_HANDLE(undefined2 param_1)

{
  FUN_1000_2c36(param_1);
  return;
}


// ---- SRV_SET_VALUE @ 1000:1f4c

void __stdcall16far SRV_SET_VALUE(undefined2 param_1,undefined2 param_2,undefined2 param_3)

{
  FUN_1000_2c96(param_1,param_2,param_3);
  return;
}


// ---- SRV_SET_STRING @ 1000:1f68

void __stdcall16far SRV_SET_STRING(undefined2 param_1,undefined2 param_2)

{
  FUN_1000_2c46(param_1,param_2);
  return;
}


// ---- SRV_GET_VALUE @ 1000:1f82

void __stdcall16far SRV_GET_VALUE(undefined2 param_1,undefined2 param_2)

{
  FUN_1000_2cac(param_1,param_2);
  return;
}


// ---- SRV_GET_VALUE_EXTRA @ 1000:1f9c

void __stdcall16far SRV_GET_VALUE_EXTRA(undefined2 param_1,undefined2 param_2)

{
  FUN_1000_2d08(param_1,param_2);
  return;
}


// ---- SRV_GET_COMMAND @ 1000:1fb6

void __stdcall16far SRV_GET_COMMAND(undefined2 param_1,undefined2 param_2)

{
  FUN_1000_2e0e(param_1,param_2);
  return;
}


// ---- SRV_SET_STATE @ 1000:1fd0

void __stdcall16far SRV_SET_STATE(undefined2 param_1,undefined2 param_2)

{
  FUN_1000_2eb4(param_1,param_2);
  return;
}


// ---- SRV_GET_STATE @ 1000:1fea

void __stdcall16far SRV_GET_STATE(undefined2 param_1,undefined2 param_2)

{
  FUN_1000_2f08(param_1,param_2);
  return;
}


// ---- SRV_SET_XY @ 1000:2004

void __stdcall16far SRV_SET_XY(undefined2 param_1,undefined2 param_2,undefined2 param_3)

{
  FUN_1000_3532(param_1,param_2,param_3);
  return;
}


// ---- SRV_GET_XY @ 1000:2020

void __stdcall16far SRV_GET_XY(undefined2 param_1,undefined2 param_2,undefined2 param_3)

{
  FUN_1000_3562(param_1,param_2,param_3);
  return;
}


// ---- SRV_NUDGE_VALUE @ 1000:203c

void __stdcall16far SRV_NUDGE_VALUE(undefined2 param_1,undefined2 param_2)

{
  FUN_1000_35c2(param_1,param_2);
  return;
}


// ---- SRV_EXECUTE_COMMAND @ 1000:2056

void __stdcall16far SRV_EXECUTE_COMMAND(undefined2 param_1)

{
  FUN_1000_35d4(param_1);
  return;
}


// ---- SRV_INITIATE @ 1000:206c

void __stdcall16far
SRV_INITIATE(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  FUN_1000_35e4(param_1,param_2,param_3,param_4);
  return;
}


// ---- SRV_INITIALISE_CONTROLLER @ 1000:208c

void __stdcall16far SRV_INITIALISE_CONTROLLER(undefined2 param_1,undefined2 param_2)

{
  FUN_1000_360e(param_1,param_2);
  return;
}


// ---- SRV_NOTIFY @ 1000:20a6

void __stdcall16far SRV_NOTIFY(undefined2 param_1,undefined2 param_2)

{
  FUN_1000_3620(param_1,param_2);
  return;
}


// ---- SRV_HANDLE @ 1000:20c0

void __cdecl16far SRV_HANDLE(void)

{
  FUN_1000_3632(0x1008);
  return;
}


// ---- SRV_SHUTDOWN @ 1000:20d2

void __stdcall16far SRV_SHUTDOWN(undefined2 param_1,undefined2 param_2)

{
  FUN_1000_3638(param_1,param_2);
  return;
}


// ---- SRV_SUSPEND_CONTROLLER @ 1000:20ec

void __stdcall16far SRV_SUSPEND_CONTROLLER(undefined2 param_1)

{
  FUN_1000_364a(param_1);
  return;
}


// ---- SRV_KILL_CONTROLLER @ 1000:2102

void __stdcall16far SRV_KILL_CONTROLLER(undefined2 param_1)

{
  FUN_1000_365c(param_1);
  return;
}


// ---- SRV_LOAD_DLL @ 1000:2118

void __stdcall16far SRV_LOAD_DLL(undefined2 param_1)

{
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined2 uVar1;
  undefined2 uVar2;
  undefined1 local_102 [256];
  
  uVar2 = 0x1008;
  uVar1 = param_1;
  GLOBALGETATOMNAME(unaff_CS,0xff,local_102,unaff_SS);
  GLOBALDELETEATOM(0x1010,param_1,uVar1,uVar2);
  LOADLIBRARY(0x1010,local_102);
  return;
}


// ---- SRV_UNLOAD_DLL @ 1000:214c

undefined2 __stdcall16far SRV_UNLOAD_DLL(void)

{
  FREELIBRARY();
  return 1;
}


// ---- SRV_LOAD_STRING @ 1000:2166

void __stdcall16far SRV_LOAD_STRING(undefined2 param_1)

{
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined1 local_102 [256];
  
  LOADSTRING(unaff_CS,0xff,local_102,unaff_SS,param_1);
  GLOBALADDATOM(0x1010,local_102);
  return;
}


// ---- SRV_USE_ATOM @ 1000:2194

void __cdecl16far SRV_USE_ATOM(void)

{
  FUN_1000_366e(0x1008);
  return;
}


// ---- SRV_SET_FORMAT_MODIFIER @ 1000:21a6

undefined2 __stdcall16far SRV_SET_FORMAT_MODIFIER(undefined2 param_1,undefined2 param_2)

{
  FUN_1000_3674(param_1,param_2);
  return 1;
}


// ---- SRV_SET_DEF_PRINTING_FACTOR @ 1000:21c2

undefined2 __stdcall16far SRV_SET_DEF_PRINTING_FACTOR(undefined2 param_1,undefined2 param_2)

{
  FUN_1000_368a(param_1,param_2);
  return 1;
}


// ---- SRV_LOAD_VIS_TABLE @ 1000:21de

undefined2 __cdecl16far SRV_LOAD_VIS_TABLE(void)

{
  FUN_1000_36a0(0x1008);
  return 1;
}


// ---- SRV_SAVE_VIS_TABLE @ 1000:21f2

undefined2 __cdecl16far SRV_SAVE_VIS_TABLE(void)

{
  FUN_1000_36ac(0x1008);
  return 1;
}


// ---- SRV_GET_CONFIGURATION @ 1000:2206

void __cdecl16far SRV_GET_CONFIGURATION(void)

{
  FUN_1000_36ae(0x1008);
  return;
}


// ---- SRV_SAVE_CONFIGURATION @ 1000:2218

void __cdecl16far SRV_SAVE_CONFIGURATION(void)

{
  FUN_1000_36ee(0x1008);
  return;
}


// ---- SRV_GET_MACHINE_TYPE @ 1000:222a

void __cdecl16far SRV_GET_MACHINE_TYPE(void)

{
  FUN_1000_373a(0x1008);
  return;
}


// ---- SRV_GET_LICENSES @ 1000:223c

undefined2 __stdcall16far SRV_GET_LICENSES(undefined2 param_1,undefined2 param_2)

{
  FUN_1000_370a(param_1,param_2);
  return 1;
}


// ---- SRV_SET_LICENSES @ 1000:2258

undefined2 __stdcall16far SRV_SET_LICENSES(undefined2 param_1,undefined2 param_2)

{
  FUN_1000_3722(param_1,param_2);
  return 1;
}


// ---- SRV_GET_SERIAL_NUMBER @ 1000:2274

undefined2 __cdecl16far SRV_GET_SERIAL_NUMBER(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_SS;
  undefined1 local_102 [256];
  
  iVar1 = FUN_1000_375e(local_102,unaff_SS);
  if (iVar1 == 0) {
    UIF_MESSAGE(0x1000,local_102,unaff_SS);
    uVar2 = GLOBALADDATOM(0x1010,local_102);
  }
  else {
    _WSPRINTF(0x1000,local_102);
    UIF_MESSAGE(0x1010,local_102,unaff_SS);
    uVar2 = 0;
  }
  return uVar2;
}


// ---- SRV_EO_COLUMN_TYPE @ 1000:22d2

void __cdecl16far SRV_EO_COLUMN_TYPE(void)

{
  FUN_1000_393c(0x1008);
  return;
}


// ---- SRV_SET_USER_LEVEL @ 1000:22e4

void __stdcall16far SRV_SET_USER_LEVEL(undefined2 param_1)

{
  FUN_1000_3942(param_1);
  return;
}


// ---- SRV_GET_STATE_STRING @ 1000:22fa

void __stdcall16far SRV_GET_STATE_STRING(undefined2 param_1,undefined2 param_2)

{
  FUN_1000_3180(param_1,param_2);
  return;
}


// ---- SRV_GETSTATEVALUERESOURCEID @ 1000:2314

void __stdcall16far SRV_GETSTATEVALUERESOURCEID(undefined2 param_1,undefined2 param_2)

{
  FUN_1000_315a(param_1,param_2);
  return;
}


// ---- SRV_GET_ADMIN_CONFIG @ 1000:232e

void __stdcall16far SRV_GET_ADMIN_CONFIG(undefined2 param_1,undefined2 param_2)

{
  FUN_1000_3952(param_1,param_2);
  return;
}


// ---- SRV_SET_ADMIN_CONFIG @ 1000:2348

void __stdcall16far SRV_SET_ADMIN_CONFIG(undefined2 param_1,undefined2 param_2)

{
  FUN_1000_3964(param_1,param_2);
  return;
}


// ---- SRV_SET_BEAMSHIFT_DISTANCE @ 1000:2362

void __stdcall16far SRV_SET_BEAMSHIFT_DISTANCE(undefined2 param_1,undefined2 param_2)

{
  FUN_1000_3992(param_1,param_2);
  return;
}


// ---- SRV_STAGE_GOTO @ 1000:237c

void __stdcall16far SRV_STAGE_GOTO(undefined2 param_1,undefined2 param_2)

{
  FUN_1000_39ce(param_1,param_2);
  return;
}


// ---- SRV_GET_STAGE_POSITION @ 1000:2396

void __stdcall16far SRV_GET_STAGE_POSITION(undefined2 param_1,undefined2 param_2)

{
  FUN_1000_3a56(param_1,param_2);
  return;
}


// ---- SRV_GET_APERTURE_TABLE @ 1000:23b0

void __stdcall16far SRV_GET_APERTURE_TABLE(undefined2 param_1,undefined2 param_2)

{
  FUN_1000_3b22(param_1,param_2);
  return;
}


// ---- SRV_SET_APERTURE_TABLE @ 1000:23ca

void __stdcall16far SRV_SET_APERTURE_TABLE(undefined2 param_1,undefined2 param_2)

{
  FUN_1000_3cd0(param_1,param_2);
  return;
}


// ---- SRV_SET_LUT_POINT @ 1000:23e4

void __stdcall16far SRV_SET_LUT_POINT(undefined2 param_1,undefined2 param_2)

{
  FUN_1000_3d84(param_1,param_2);
  return;
}


// ---- SRV_SET_LUT_RGB @ 1000:23fe

void __stdcall16far SRV_SET_LUT_RGB(undefined2 param_1,undefined2 param_2)

{
  FUN_1000_3e68(param_1,param_2);
  return;
}


// ---- SRV_SET_LUT_COLOR @ 1000:2418

void __stdcall16far SRV_SET_LUT_COLOR(undefined2 param_1,undefined2 param_2)

{
  FUN_1000_3e90(param_1,param_2);
  return;
}


// ---- SRV_SET_LUT_BC @ 1000:2432

void __stdcall16far SRV_SET_LUT_BC(undefined2 param_1,undefined2 param_2)

{
  FUN_1000_3eec(param_1,param_2);
  return;
}


// ---- SRV_SET_LUT_INVERSE @ 1000:244c

void __stdcall16far SRV_SET_LUT_INVERSE(undefined2 param_1,undefined2 param_2)

{
  FUN_1000_3f14(param_1,param_2);
  return;
}


// ---- SRV_SET_LUT_LINEAR @ 1000:2466

void __stdcall16far SRV_SET_LUT_LINEAR(undefined2 param_1,undefined2 param_2)

{
  FUN_1000_3f3c(param_1,param_2);
  return;
}


// ---- SRV_SET_LUT_GAMMA @ 1000:2480

void __stdcall16far SRV_SET_LUT_GAMMA(undefined2 param_1,undefined2 param_2)

{
  FUN_1000_3f64(param_1,param_2);
  return;
}


// ---- SRV_DRAW_GREY_WEDGE @ 1000:249a

void __stdcall16far SRV_DRAW_GREY_WEDGE(undefined2 param_1,undefined2 param_2)

{
  FUN_1000_3f84(param_1,param_2);
  return;
}


// ---- SRV_GET_IMAGE_PIXEL @ 1000:24b4

void __stdcall16far SRV_GET_IMAGE_PIXEL(undefined2 param_1,undefined2 param_2)

{
  FUN_1000_3f96(param_1,param_2);
  return;
}


// ---- SRV_LUT_LOAD @ 1000:24e0

void __stdcall16far SRV_LUT_LOAD(undefined2 param_1,undefined2 param_2)

{
  FUN_1000_3fd6(param_1,param_2);
  return;
}


// ---- SRV_LUT_READ @ 1000:24fa

void __stdcall16far SRV_LUT_READ(undefined2 param_1,undefined2 param_2)

{
  FUN_1000_3ffa(param_1,param_2);
  return;
}


// ---- SRV_READ_COLOR @ 1000:2514

void __stdcall16far SRV_READ_COLOR(undefined2 param_1,undefined2 param_2)

{
  FUN_1000_401e(param_1,param_2);
  return;
}


// ---- SRV_LUT_FILL @ 1000:252e

void __stdcall16far SRV_LUT_FILL(undefined2 param_1,undefined2 param_2)

{
  FUN_1000_4086(param_1,param_2);
  return;
}


// ---- SRV_LUT_QLIN @ 1000:2548

void __stdcall16far SRV_LUT_QLIN(undefined2 param_1,undefined2 param_2)

{
  FUN_1000_40b2(param_1,param_2);
  return;
}


// ---- SRV_LUT_QINV @ 1000:2562

void __stdcall16far SRV_LUT_QINV(undefined2 param_1,undefined2 param_2)

{
  FUN_1000_40c4(param_1,param_2);
  return;
}


// ---- SRV_LUT_SAVE @ 1000:257c

void __stdcall16far SRV_LUT_SAVE(undefined2 param_1,undefined2 param_2)

{
  FUN_1000_40d6(param_1,param_2);
  return;
}


// ---- SRV_LUT_RESTORE @ 1000:2596

void __stdcall16far SRV_LUT_RESTORE(undefined2 param_1,undefined2 param_2)

{
  FUN_1000_40f2(param_1,param_2);
  return;
}


// ---- SRV_READ_COLOR_LUT @ 1000:25b0

void __stdcall16far SRV_READ_COLOR_LUT(undefined2 param_1,undefined2 param_2)

{
  FUN_1000_410e(param_1,param_2);
  return;
}


// ---- SRV_POINT_AS_ZONE @ 1000:25ca

void __stdcall16far SRV_POINT_AS_ZONE(undefined2 param_1,undefined2 param_2,undefined2 param_3)

{
  FUN_1000_2c1a(param_1,param_2,param_3);
  return;
}


// ---- SRV_IMPORT_EXPORT @ 1000:25e6

void __stdcall16far SRV_IMPORT_EXPORT(undefined2 param_1,undefined2 param_2)

{
  FUN_1000_2b46(param_1,param_2);
  return;
}


// ---- SRV_GET_COVARIANCE @ 1000:2600

void __stdcall16far SRV_GET_COVARIANCE(undefined2 param_1,undefined2 param_2)

{
  FUN_1000_41c0(param_1,param_2);
  return;
}


// ---- SRV_MISC_FUNCTION @ 1000:261a

void __stdcall16far SRV_MISC_FUNCTION(undefined2 param_1)

{
  FUN_1000_420c(param_1);
  return;
}


// ---- SRV_GET_HISTO @ 1000:2630

void __stdcall16far SRV_GET_HISTO(undefined2 param_1,undefined2 param_2)

{
  FUN_1000_4282(param_1,param_2);
  return;
}


// ---- SRV_GETLINEDATA @ 1000:264a

void __stdcall16far SRV_GETLINEDATA(undefined2 param_1,undefined2 param_2)

{
  FUN_1000_4294(param_1,param_2);
  return;
}


// ---- SRV_GET_COLOUR_PIXEL @ 1000:2664

void __stdcall16far SRV_GET_COLOUR_PIXEL(undefined2 param_1,undefined2 param_2)

{
  FUN_1000_4182(param_1,param_2);
  return;
}


// ---- SRV_DO_FEATURESCAN @ 1000:267e

void __stdcall16far
SRV_DO_FEATURESCAN(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
                  undefined2 param_5,undefined2 param_6)

{
  FUN_1000_42d2(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}


// ---- SRV_STOP_FEATURESCAN @ 1000:26a4

void __cdecl16far SRV_STOP_FEATURESCAN(void)

{
  FUN_1000_42f0(0x1008);
  return;
}


// ---- SRV_SETKNOB @ 1000:26b6

void __stdcall16far SRV_SETKNOB(undefined2 param_1,undefined2 param_2)

{
  FUN_1000_42f6(param_1,param_2);
  return;
}


// ---- SRV_GET_COLUMN_CAL_DATA @ 1000:26d0

void __stdcall16far SRV_GET_COLUMN_CAL_DATA(undefined2 param_1,undefined2 param_2)

{
  FUN_1000_4308(param_1,param_2);
  return;
}


// ---- SRV_UPDATE_HPSEM_PANEL @ 1000:26ea

void __stdcall16far SRV_UPDATE_HPSEM_PANEL(undefined2 param_1,undefined2 param_2)

{
  FUN_1000_431a(param_1,param_2);
  return;
}


// ---- SRV_HPSEM_FUNCTION @ 1000:2704

void __stdcall16far SRV_HPSEM_FUNCTION(undefined2 param_1,undefined2 param_2,undefined2 param_3)

{
  FUN_1000_432c(param_1,param_2,param_3);
  return;
}


// ---- SRV_SET_STAGE_POSITION @ 1000:2720

void __stdcall16far SRV_SET_STAGE_POSITION(undefined2 param_1,undefined2 param_2)

{
  FUN_1000_3a12(param_1,param_2);
  return;
}


// ---- SRV_DEFINE_CUSTOM_STAGE @ 1000:273a

void __stdcall16far SRV_DEFINE_CUSTOM_STAGE(undefined2 param_1,undefined2 param_2)

{
  FUN_1000_43cc(param_1,param_2);
  return;
}


// ---- SRV_CUSTOM_STAGE_NAME @ 1000:2754

void __stdcall16far SRV_CUSTOM_STAGE_NAME(undefined2 param_1)

{
  FUN_1000_43f8(param_1);
  return;
}


// ---- SRV_AXIS_HIGH_RANGE @ 1000:276a

void __stdcall16far SRV_AXIS_HIGH_RANGE(undefined2 param_1,undefined2 param_2,undefined2 param_3)

{
  FUN_1000_4428(param_1,param_2,param_3);
  return;
}


// ---- FUN_1000_27c8 @ 1000:27c8

undefined2 __cdecl16far FUN_1000_27c8(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 uVar3;
  
  if (param_1 != 0) {
    uVar3 = 0x53;
    uVar1 = M007_GETSTATE();
    switch(uVar1) {
    case 2:
    case 5:
      goto switchD_1000_27ea_caseD_2;
    case 3:
    case 4:
    case 6:
      break;
    case 7:
      if (DAT_1008_003a == 0) {
        return 0;
      }
      iVar2 = M007_GETSTATE(0x1000,0x159,uVar3);
      if (iVar2 == 1) {
        return 1;
      }
      break;
    default:
      goto switchD_1000_27ea_default;
    }
    if (param_1 != 2) {
switchD_1000_27ea_default:
      return 0;
    }
  }
switchD_1000_27ea_caseD_2:
  return 1;
}


// ---- FUN_1000_281c @ 1000:281c

undefined2 __cdecl16far FUN_1000_281c(undefined2 param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = 0x11b;
  iVar1 = M007_GETSTATE();
  switch(param_1) {
  case 1:
    if (((0xe < iVar1) && (!SBORROW2(iVar1,0xf))) && (iVar1 + -0xf < 2)) {
      return 1;
    }
  case 0:
    iVar1 = M007_GETSTATE(0x1000,0x8c,uVar2);
    if ((-1 < iVar1) && ((iVar1 < 2 || ((0 < iVar1 + -2 && (iVar1 + -3 < 2)))))) {
switchD_1000_2838_caseD_2:
      return 1;
    }
    break;
  case 2:
    goto switchD_1000_2838_caseD_2;
  case 3:
  case 5:
  case 6:
    iVar1 = M007_GETSTATE(0x1000,0x8c,uVar2);
    if (iVar1 == 6) {
      return 1;
    }
    if (iVar1 == 8) {
      return 1;
    }
    break;
  case 4:
    iVar1 = M007_GETSTATE(0x1000,0x8c,uVar2);
    if (((4 < iVar1) && (!SBORROW2(iVar1,5))) && (iVar1 + -5 < 4)) {
      return 1;
    }
    break;
  case 7:
    iVar1 = M007_GETSTATE(0x1000,0x8c,uVar2);
    if (((iVar1 < 0) || ((1 < iVar1 && ((iVar1 + -2 < 1 || (iVar1 != 4 && 0 < iVar1 + -3)))))) &&
       (DAT_1008_003a != 0)) {
      return 1;
    }
  }
  return 0;
}


// ---- FUN_1000_28c6 @ 1000:28c6

undefined2 __cdecl16far FUN_1000_28c6(int param_1)

{
  int iVar1;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  int local_82 [64];
  
  iVar1 = UIF_READ_LICENCES(unaff_CS,local_82,unaff_SS,0x40);
  if ((iVar1 == 0) && (local_82[param_1] == 1)) {
    return 1;
  }
  return 0;
}


// ---- FUN_1000_28f4 @ 1000:28f4

char __cdecl16far FUN_1000_28f4(void)

{
  int iVar1;
  
  switch(DAT_1008_3164) {
  case 0:
  case 2:
  case 0xb:
  case 0xd:
  case 0xf:
  case 0x11:
  case 0x14:
    goto switchD_1000_28ff_caseD_0;
  case 1:
    iVar1 = M007_GETSTATE(0x1000,0xcc);
    if (iVar1 != 1) {
      return '\x04';
    }
switchD_1000_28ff_caseD_0:
    return '\x03';
  case 3:
  case 5:
  case 6:
    return '\x04';
  case 4:
  case 10:
  case 0xc:
  case 0xe:
  case 0x10:
  case 0x12:
  case 0x15:
    iVar1 = M007_GETSTATE(0x1000,0x10a);
    return (-(iVar1 == 0) & 1U) + 1;
  case 7:
  case 8:
  case 9:
  case 0x13:
  case 0x16:
  case 0x17:
  case 0x18:
    return '\x06';
  default:
    return '\0';
  }
}


// ---- FUN_1000_2962 @ 1000:2962

undefined2 __cdecl16far FUN_1000_2962(void)

{
  if (((6 < DAT_1008_3164) && (!SBORROW2(DAT_1008_3164,7))) &&
     ((DAT_1008_3164 == 9 || DAT_1008_3164 + -8 < 1 ||
      ((0 < DAT_1008_3164 + -10 && (DAT_1008_3164 + -0xb < 0xe)))))) {
    return 2;
  }
  return 4;
}


// ---- FUN_1000_2982 @ 1000:2982

undefined2 __cdecl16far FUN_1000_2982(int param_1)

{
  if ((DAT_1008_3164 != 1) && (param_1 == 1)) {
    return 0;
  }
  return 1;
}


// ---- FUN_1000_299a @ 1000:299a

undefined2 __cdecl16far FUN_1000_299a(int param_1)

{
  int iVar1;
  
  iVar1 = M007_GETSTATE();
  if (((iVar1 < 5) || (SBORROW2(iVar1,5))) || (iVar1 != 8 && 2 < iVar1 + -5)) {
    if (((param_1 != 4) && (param_1 != 5)) && (param_1 != 6)) {
      return 1;
    }
  }
  else if (((param_1 != 1) && (param_1 != 2)) && (param_1 != 3)) {
    return 1;
  }
  return 0;
}


// ---- FUN_1000_29e0 @ 1000:29e0

undefined2 __cdecl16far FUN_1000_29e0(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  bool bVar3;
  undefined2 uVar4;
  
  uVar4 = 0x8c;
  uVar1 = M007_GETSTATE();
  switch(uVar1) {
  case 0:
  case 4:
    if (param_1 < 0) {
      return 0;
    }
    bVar3 = SBORROW2(param_1,3);
    param_1 = param_1 + -3;
    goto LAB_1000_2a1a;
  case 1:
  case 3:
    bVar3 = param_1 == 0;
    break;
  case 2:
    bVar3 = param_1 == 4;
    break;
  case 5:
  case 7:
    if (param_1 == 0) {
      iVar2 = M007_GETSTATE(0x1000,0x144,uVar4);
      if (iVar2 == 2) {
        return 0;
      }
      return 1;
    }
    if (param_1 == 2) {
      return 1;
    }
    if (param_1 + -2 < 3) {
      return 0;
    }
    if (SBORROW2(param_1 + -2,3)) {
      return 0;
    }
    bVar3 = SBORROW2(param_1 + -6,1);
    param_1 = param_1 + -7;
LAB_1000_2a1a:
    if (param_1 != 0 && bVar3 == param_1 < 0) {
      return 0;
    }
    return 1;
  case 6:
  case 8:
    if (param_1 == 0) {
      return 1;
    }
    bVar3 = param_1 == 4;
    break;
  default:
    goto switchD_1000_29f3_default;
  }
  if (bVar3) {
    return 1;
  }
switchD_1000_29f3_default:
  return 0;
}


// ---- FUN_1000_2a62 @ 1000:2a62

void __cdecl16far FUN_1000_2a62(int param_1,undefined2 param_2)

{
  int iVar1;
  int iVar2;
  undefined2 unaff_CS;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  
  iVar2 = 0;
  do {
    ((undefined1 *)&DAT_1008_3166)[iVar2] = 0;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x11);
  uVar5 = 0x1008;
  LSTRCPY(unaff_CS,0x443e,0x1000,0x30b0);
  uVar4 = 0x149;
  SETSTATE(0x1010,0,0);
  for (iVar2 = 0; iVar2 < 0x11; iVar2 = iVar2 + 1) {
    uVar3 = param_2;
    iVar1 = LSTRLEN(0x1010,iVar2 * 0x12 + param_1);
    if (iVar1 < 1) {
      Ordinal_41(0x1010,10,iVar2 * 10 + 0x30ba,0x1008,iVar2 + 1,0x66,uVar3);
    }
    else {
      LSTRCPY(0x1010,iVar2 * 0x12 + param_1,param_2,iVar2 * 10 + 0x30ba);
    }
    if (*(char *)(iVar2 * 0x12 + param_1 + 0xe) != '\0') {
      iVar1 = iVar2 * 0x12 + param_1;
      *(char *)((int)(undefined2 *)&DAT_1008_3164 + *(char *)(iVar1 + 0xe) + 1) =
           (char)iVar2 + '\x01';
      iVar1 = LSTRCMP(0x1010,0x4444,0x1000,iVar1);
      if (iVar1 == 0) {
        SETSTATE(0x1010,1,0);
      }
    }
  }
  iVar2 = 0;
  do {
    ((undefined1 *)&DAT_1008_316e)[iVar2] = ((undefined1 *)&DAT_1008_3166)[iVar2];
    iVar2 = iVar2 + 1;
  } while (iVar2 < 7);
  iVar2 = M007_GETSTATE(0x1010,0x71,uVar4,uVar5);
  if (iVar2 == 0) {
    DAT_1008_3175 = DAT_1008_316d;
  }
  return;
}


// ---- FUN_1000_2b46 @ 1000:2b46

undefined2 __stdcall16far FUN_1000_2b46(int *param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  int iVar3;
  undefined1 local_118 [256];
  undefined1 *local_18;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = ((int *)param_1)[10];
  if (iVar1 == 0) {
    local_18 = (undefined1 *)0x0;
  }
  else {
    iVar3 = iVar1;
    GLOBALGETATOMNAME(unaff_CS,0x100,local_118,unaff_SS);
    unaff_CS = 0x1010;
    GLOBALDELETEATOM(0x1010,iVar1,iVar3);
    local_18 = local_118;
    ((int *)param_1)[10] = 0;
  }
  iVar1 = *param_1;
  if (iVar1 == 0) {
    uVar2 = Z130IMAGETOFILE(unaff_CS,&local_18);
  }
  else if (iVar1 == 1) {
    uVar2 = Z130IMAGEFROMFILE(unaff_CS,&local_18);
  }
  else if (iVar1 == 2) {
    uVar2 = Z130IMAGETOHRRU(unaff_CS,&local_18);
  }
  else if (iVar1 == 3) {
    uVar2 = Z130FILETOHRRU(unaff_CS,&local_18);
  }
  else if (iVar1 == 4) {
    uVar2 = Z130RAWIMAGETOFILE(unaff_CS,&local_18);
  }
  else {
    uVar2 = 2;
  }
  return uVar2;
}


// ---- FUN_1000_2c1a @ 1000:2c1a

void __stdcall16far FUN_1000_2c1a(void)

{
  Ordinal_31();
  return;
}


// ---- FUN_1000_2c30 @ 1000:2c30

void __cdecl16far FUN_1000_2c30(void)

{
  S300_TICK();
  return;
}


// ---- FUN_1000_2c36 @ 1000:2c36

void __stdcall16far FUN_1000_2c36(void)

{
  UIF_SET_HLANGUAGE();
  return;
}


// ---- FUN_1000_2c46 @ 1000:2c46

void __stdcall16far FUN_1000_2c46(undefined2 param_1)

{
  undefined2 *puVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined2 uVar4;
  undefined1 local_102;
  undefined2 local_101 [127];
  
  local_102 = DAT_1000_444a;
  puVar3 = local_101;
  for (iVar2 = 0x7f; iVar2 != 0; iVar2 = iVar2 + -1) {
    puVar1 = puVar3;
    puVar3 = puVar3 + 1;
    *puVar1 = 0;
  }
  uVar4 = param_1;
  GLOBALGETATOMNAME(unaff_CS,0xff,&local_102,unaff_SS);
  GLOBALDELETEATOM(0x1010,param_1,uVar4);
  M007_SETSTRING(0x1010,&local_102,unaff_SS);
  return;
}


// ---- FUN_1000_2c96 @ 1000:2c96

void __stdcall16far FUN_1000_2c96(undefined2 param_1,undefined2 param_2)

{
  undefined2 unaff_CS;
  
  SETVALUE(unaff_CS,param_1,param_2);
  return;
}


// ---- FUN_1000_2cac @ 1000:2cac

int __stdcall16far FUN_1000_2cac(undefined2 *param_1,undefined2 param_2)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined2 unaff_SS;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined1 local_6 [4];
  
  uVar5 = *param_1;
  iVar2 = Ordinal_14();
  if (iVar2 < 2) {
    uVar4 = *param_1;
    puVar3 = (undefined2 *)M007_GETVALUE(0x1010,local_6);
    uVar1 = puVar3[1];
    param_1[1] = *puVar3;
    param_1[2] = uVar1;
    iVar2 = VALUEENABLE(0x1010,*param_1,uVar4,uVar5);
    param_1[3] = (uint)(iVar2 == 0);
    iVar2 = 0;
  }
  return iVar2;
}


// ---- FUN_1000_2d08 @ 1000:2d08

int __stdcall16far FUN_1000_2d08(undefined2 *param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined2 uVar5;
  int iVar6;
  undefined2 *puVar7;
  undefined2 uVar8;
  undefined2 unaff_SS;
  undefined1 local_7c [64];
  undefined1 local_3c [24];
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
  undefined1 local_c [4];
  undefined1 local_8 [4];
  int local_4;
  
  local_4 = Ordinal_14();
  if (local_4 < 2) {
    uVar8 = (undefined2)((ulong)param_1 >> 0x10);
    puVar7 = (undefined2 *)param_1;
    puVar7[0x11] = (uint)(local_4 == 0);
    puVar3 = (undefined2 *)M007_GETLOW(0x1010,local_8);
    uVar5 = puVar3[1];
    puVar7[0xd] = *puVar3;
    puVar7[0xe] = uVar5;
    puVar3 = (undefined2 *)M007_GETHIGH(0x1010,local_c);
    uVar5 = puVar3[1];
    puVar7[0xf] = *puVar3;
    puVar7[0x10] = uVar5;
    puVar4 = (undefined2 *)FUN_1000_45a0(local_3c,*param_1);
    puVar3 = &local_24;
    for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
      puVar2 = puVar3;
      puVar3 = puVar3 + 1;
      puVar1 = puVar4;
      puVar4 = puVar4 + 1;
      *puVar2 = *puVar1;
    }
    puVar7[1] = local_22;
    puVar7[2] = local_18;
    puVar7[3] = local_e;
    puVar7[4] = local_24;
    puVar7[5] = local_20;
    puVar7[6] = local_1e;
    puVar7[7] = local_1c;
    puVar7[8] = local_1a;
    puVar7[9] = local_16;
    puVar7[10] = local_14;
    puVar7[0xb] = local_12;
    puVar7[0xc] = local_10;
    Ordinal_42(0x1000,0x40,local_7c);
    uVar5 = GLOBALADDATOM(0x1010,local_7c);
    puVar7[0x12] = uVar5;
    local_4 = 1;
  }
  return local_4;
}


// ---- FUN_1000_2e0e @ 1000:2e0e

int __stdcall16far FUN_1000_2e0e(int *param_1,undefined2 param_2)

{
  int iVar1;
  int iVar2;
  undefined1 local_42 [64];
  
  iVar2 = *param_1;
  iVar1 = Ordinal_16();
  if (iVar1 < 2) {
    param_1[2] = (uint)(iVar1 == 0);
    if ((((*param_1 == 0xb7) || (*param_1 == 0xad)) &&
        (iVar2 = M007_GETSTATE(0x1010,0x144,iVar2), iVar2 == 2)) &&
       ((iVar2 = M007_GETSTATE(0x1010,0x8c), iVar2 == 5 || (iVar2 == 7)))) {
      param_1[2] = 0;
    }
    iVar2 = COMMANDENABLE(0x1010,*param_1);
    param_1[1] = (uint)(iVar2 == 0);
    Ordinal_39(0x1010,0x40,local_42);
    iVar2 = GLOBALADDATOM(0x1010,local_42);
    param_1[3] = iVar2;
    iVar1 = 0;
  }
  return iVar1;
}


// ---- FUN_1000_2eb4 @ 1000:2eb4

undefined2 __stdcall16far FUN_1000_2eb4(int param_1,int param_2)

{
  int iVar1;
  undefined2 unaff_CS;
  undefined2 uVar2;
  
  uVar2 = unaff_CS;
  if ((param_2 == 7) && (param_1 == 1)) {
    uVar2 = 0x1010;
    UIF_MESSAGE(unaff_CS,0x20,0x1008);
  }
  if (param_2 == 0xb) {
    uVar2 = 0x1000;
    iVar1 = FUN_1000_29e0(param_1);
    if (iVar1 != 0) goto LAB_1000_2ee9;
LAB_1000_2ee4:
    uVar2 = 0x192;
  }
  else {
LAB_1000_2ee9:
    if (param_2 == 100) {
      uVar2 = 0x1000;
      iVar1 = FUN_1000_2962();
      if (iVar1 < param_1) goto LAB_1000_2ee4;
    }
    uVar2 = SETSTATE(uVar2,param_1,param_1 >> 0xf);
  }
  return uVar2;
}


// ---- FUN_1000_2f08 @ 1000:2f08

int __stdcall16far FUN_1000_2f08(int *param_1,undefined2 param_2)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 unaff_SS;
  undefined1 local_7c [80];
  undefined1 local_2c [40];
  int local_4;
  
  iVar2 = *param_1;
  iVar1 = STATEENABLE();
  param_1[2] = (uint)(iVar1 == 0);
  local_4 = Ordinal_15(0x1010,*param_1,iVar2);
  if (1 < local_4) {
    return local_4;
  }
  param_1[3] = (uint)(local_4 == 0);
  uVar3 = 0x1010;
  iVar2 = M007_GETSTATE(0x1010,*param_1);
  param_1[1] = iVar2;
  iVar2 = *param_1;
  if (iVar2 == 0x1a) {
    uVar3 = 0x1000;
    iVar2 = FUN_1000_28f4();
LAB_1000_2f7e:
    param_1[4] = iVar2;
  }
  else {
    if (iVar2 == 100) {
      uVar3 = 0x1000;
      iVar2 = FUN_1000_2962();
      goto LAB_1000_2f7e;
    }
    if ((iVar2 == 0x65) || (iVar2 == 0x97)) {
      if (((DAT_1008_3164 < 7) || (SBORROW2(DAT_1008_3164,7))) ||
         ((DAT_1008_3164 != 9 && 0 < DAT_1008_3164 + -8 &&
          ((DAT_1008_3164 + -10 < 1 || (0xd < DAT_1008_3164 + -0xb)))))) goto LAB_1000_2f73;
      param_1[4] = 7;
    }
    else {
      if (iVar2 != 0x128) {
LAB_1000_2f73:
        uVar3 = 0x1010;
        iVar2 = STATEMAX(0x1010,*param_1);
        goto LAB_1000_2f7e;
      }
      param_1[4] = 2;
    }
  }
  Ordinal_40(uVar3,0x50,local_7c);
  LSTRCAT(0x1010,0x444c,0x1000,local_7c);
  iVar2 = *param_1;
  if (iVar2 == 0x53) {
    iVar2 = param_1[1];
    if (iVar2 == 3) {
      uVar3 = 0x1000;
      iVar2 = 0x4464;
    }
    else if (iVar2 == 4) {
      uVar3 = 0x1000;
      iVar2 = 0x4450;
    }
    else if (iVar2 == 5) {
      uVar3 = 0x1000;
      iVar2 = 0x445a;
    }
    else if (iVar2 == 6) {
      uVar3 = 0x1000;
      iVar2 = 0x446e;
    }
    else {
      if ((iVar2 != 7) || (DAT_1008_003a == 0)) goto LAB_1000_3018;
      uVar3 = 0x1008;
      iVar2 = 0x3070;
    }
  }
  else {
    if (iVar2 == 0x65) {
      iVar2 = (char)((undefined1 *)&DAT_1008_3166)[param_1[1]] * 10;
    }
    else if (iVar2 == 0x66) {
      iVar2 = param_1[1] * 10;
    }
    else {
      if (iVar2 != 0x97) {
        if ((0x21 < iVar2 + -0x97) && (!SBORROW2(iVar2 + -0x97,0x22))) {
          if (iVar2 == 0xba || iVar2 + -0xb9 < 1) {
            iVar2 = M007_GETSTATE(0x1010,0x8c);
            if ((iVar2 != 6) && (iVar2 = M007_GETSTATE(0x1010,0x8c), iVar2 != 8)) {
              _WSPRINTF(0x1010,local_2c);
              goto LAB_1000_3133;
            }
          }
          else if (iVar2 == 0x109) {
            if (param_1[1] == 0) {
              HLEOUIFLANGUAGE(0x1010);
              iVar2 = 0x57e;
            }
            else {
              HLEOUIFLANGUAGE(0x1010);
              iVar2 = param_1[1] + 0x225;
            }
            LOADSTRING(0x1010,0x28,local_2c,unaff_SS,iVar2);
            goto LAB_1000_3133;
          }
        }
LAB_1000_3018:
        Ordinal_41(0x1010,0x28,local_2c);
        goto LAB_1000_3133;
      }
      iVar2 = (char)((undefined1 *)&DAT_1008_316e)[param_1[1]] * 10;
    }
    iVar2 = iVar2 + 0x30b0;
    uVar3 = 0x1008;
  }
  LSTRCPY(0x1010,iVar2,uVar3,local_2c);
LAB_1000_3133:
  LSTRCAT(0x1010,local_2c,unaff_SS,local_7c);
  iVar2 = GLOBALADDATOM(0x1010,local_7c);
  param_1[5] = iVar2;
  return 0;
}


// ---- FUN_1000_315a @ 1000:315a

void __stdcall16far FUN_1000_315a(undefined2 param_1,undefined2 param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = param_2;
  iVar1 = Ordinal_15();
  if (iVar1 < 2) {
    Ordinal_43(0x1010,param_1,param_2,uVar2);
  }
  return;
}


// ---- FUN_1000_3180 @ 1000:3180

int __stdcall16far FUN_1000_3180(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  bool bVar4;
  undefined2 uVar5;
  undefined1 local_52 [40];
  undefined1 local_2a [40];
  
  uVar5 = 0x8c;
  iVar1 = M007_GETSTATE();
  uVar3 = 0x1010;
  iVar2 = Ordinal_15(0x1010,*param_1,uVar5);
  if (1 < iVar2) {
    return iVar2;
  }
  iVar2 = *param_1;
  if (iVar2 == 0) {
    uVar3 = 0x1000;
    iVar1 = FUN_1000_299a(((int *)param_1)[1]);
    bVar4 = iVar1 == 0;
    goto LAB_1000_3239;
  }
  if (iVar2 == 0xb) {
    iVar1 = FUN_1000_29e0(((int *)param_1)[1]);
    goto LAB_1000_34fb;
  }
  if (iVar2 == 0x53) {
    uVar3 = 0x1000;
    iVar1 = FUN_1000_281c(((int *)param_1)[1]);
    if (iVar1 == 0) {
      return 0x192;
    }
    iVar1 = ((int *)param_1)[1];
    if (iVar1 == 3) {
      uVar5 = 0x1000;
      iVar1 = 0x4464;
    }
    else if (iVar1 == 4) {
      uVar5 = 0x1000;
      iVar1 = 0x4450;
    }
    else if (iVar1 == 5) {
      uVar5 = 0x1000;
      iVar1 = 0x445a;
    }
    else if (iVar1 == 6) {
      uVar5 = 0x1000;
      iVar1 = 0x446e;
    }
    else {
      if ((iVar1 != 7) || (DAT_1008_003a == 0)) goto LAB_1000_3503;
      uVar5 = 0x1008;
      iVar1 = 0x3070;
    }
  }
  else {
    if (iVar2 == 99) {
      uVar3 = 0x1010;
      iVar1 = M007_GETSTATE(0x1010,0x144);
      if ((iVar1 == 0) && ((((int *)param_1)[1] == 2 || (((int *)param_1)[1] == 3)))) {
        iVar1 = M007_GETSTATE(0x1010,0x11);
        if (0xc < iVar1) {
          return 0x192;
        }
        iVar1 = M007_GETSTATE(0x1010,0x22);
        if (iVar1 == 1) {
          return 0x192;
        }
        iVar1 = M007_GETSTATE(0x1010,199);
        if (iVar1 == 1) {
          return 0x192;
        }
        iVar1 = M007_GETSTATE(0x1010,0x1f);
        if (iVar1 == 1) {
          return 0x192;
        }
        uVar3 = 0x1010;
        iVar1 = M007_GETSTATE(0x1010,0x1e);
        bVar4 = iVar1 == 1;
        goto LAB_1000_3239;
      }
LAB_1000_3503:
      Ordinal_41(uVar3,0x28,local_2a);
      goto LAB_1000_3519;
    }
    if (iVar2 == 0x65) {
      iVar1 = (char)((undefined1 *)&DAT_1008_3166)[((int *)param_1)[1]] * 10;
    }
    else {
      if (iVar2 != 0x66) {
        if (iVar2 == 0x6e) {
          if ((((2 < ((int *)param_1)[1]) && (iVar1 != 6)) && (iVar1 != 8)) &&
             ((iVar1 != 5 && (iVar1 != 7)))) {
            return 0x192;
          }
        }
        else if (iVar2 == 0x76) {
          if (((int *)param_1)[1] == 1) {
            if (DAT_1008_3164 == 8) {
              return 0x192;
            }
            if (DAT_1008_3164 == 7) {
              return 0x192;
            }
            if (DAT_1008_3164 == 9) {
              return 0x192;
            }
            if (DAT_1008_3164 == 0x13) {
              return 0x192;
            }
            if (DAT_1008_3164 == 0xb) {
              return 0x192;
            }
            if (DAT_1008_3164 == 0xc) {
              return 0x192;
            }
            if (DAT_1008_3164 == 0x14) {
              return 0x192;
            }
            if (DAT_1008_3164 == 0x15) {
              return 0x192;
            }
            if (DAT_1008_3164 == 0xd) {
              return 0x192;
            }
            if (DAT_1008_3164 == 0xe) {
              return 0x192;
            }
            if (DAT_1008_3164 == 0xf) {
              return 0x192;
            }
            if (DAT_1008_3164 == 0x10) {
              return 0x192;
            }
            if (DAT_1008_3164 == 0x11) {
              return 0x192;
            }
            if (DAT_1008_3164 == 0x12) {
              return 0x192;
            }
            if (DAT_1008_3164 == 0x16) {
              return 0x192;
            }
            if (DAT_1008_3164 == 0x17) {
              return 0x192;
            }
            bVar4 = DAT_1008_3164 == 0x18;
LAB_1000_3239:
            if (bVar4) {
              return 0x192;
            }
          }
        }
        else if (iVar2 == 0x8f) {
          if (((int *)param_1)[1] == 1) {
            if (iVar1 == 6) {
              return 0x192;
            }
            if (iVar1 == 8) {
              return 0x192;
            }
            if (iVar1 == 5) {
              return 0x192;
            }
            bVar4 = iVar1 == 7;
            goto LAB_1000_3239;
          }
        }
        else {
          if (iVar2 == 0x97) {
            iVar1 = (char)((undefined1 *)&DAT_1008_316e)[((int *)param_1)[1]] * 10;
            goto LAB_1000_3336;
          }
          if ((0x21 < iVar2 + -0x97) && (!SBORROW2(iVar2 + -0x97,0x22))) {
            if (iVar2 == 0xba || iVar2 + -0xb9 < 1) {
              if ((iVar1 != 6) && (iVar1 != 8)) {
                Ordinal_40(0x1010,0x28,local_52);
                LSTRCAT(0x1010,0x447c,0x1000,local_52);
                _WSPRINTF(0x1010,local_2a);
                goto LAB_1000_3519;
              }
            }
            else if (iVar2 == 0xc0) {
              iVar1 = FUN_1000_2982(((int *)param_1)[1]);
LAB_1000_34fb:
              uVar3 = 0x1000;
              if (iVar1 == 0) {
                return 0x192;
              }
            }
            else if (iVar2 == 0x113) {
              uVar3 = 0x1000;
              iVar1 = FUN_1000_28c6(0xb);
              if (iVar1 == 0) {
                if (((int *)param_1)[1] == 1) {
                  return 0x192;
                }
                bVar4 = ((int *)param_1)[1] == 3;
                goto LAB_1000_3239;
              }
            }
            else if (iVar2 == 0x12e) {
              iVar1 = M007_GETSTATE(0x1010,0x144);
              if ((iVar1 == 0) && (((int *)param_1)[1] == 0)) {
                iVar1 = M007_GETSTATE(0x1010,99);
                if (iVar1 == 2) {
                  return 0x192;
                }
                iVar1 = M007_GETSTATE(0x1010,99);
                if (iVar1 == 3) {
                  return 0x192;
                }
              }
              uVar3 = 0x1010;
              iVar1 = M007_GETSTATE(0x1010,0x144);
              if ((iVar1 == 0) && (3 < ((int *)param_1)[1])) {
                return 0x192;
              }
            }
            else if (iVar2 == 0x137) {
              iVar1 = FUN_1000_27c8(((int *)param_1)[1]);
              goto LAB_1000_34fb;
            }
          }
        }
        goto LAB_1000_3503;
      }
      iVar1 = ((int *)param_1)[1] * 10;
    }
LAB_1000_3336:
    iVar1 = iVar1 + 0x30b0;
    uVar5 = 0x1008;
  }
  LSTRCPY(uVar3,iVar1,uVar5,local_2a);
LAB_1000_3519:
  iVar1 = GLOBALADDATOM(0x1010,local_2a);
  ((int *)param_1)[2] = iVar1;
  return 0;
}


// ---- FUN_1000_3532 @ 1000:3532

void __stdcall16far FUN_1000_3532(float *param_1,undefined2 param_2)

{
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  double local_12;
  double local_a;
  
  local_12 = (double)*param_1;
  local_a = (double)param_1[1];
  SETXY(unaff_CS,&local_12,unaff_SS);
  return;
}


// ---- FUN_1000_3562 @ 1000:3562

int __stdcall16far FUN_1000_3562(undefined2 *param_1,undefined2 param_2)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined2 unaff_SS;
  undefined1 local_a [4];
  undefined1 local_6 [4];
  
  iVar2 = Ordinal_14();
  if (iVar2 < 2) {
    puVar3 = (undefined2 *)M007_GETVALUE(0x1010,local_6);
    uVar1 = puVar3[1];
    *param_1 = *puVar3;
    param_1[1] = uVar1;
    puVar3 = (undefined2 *)M007_GETVALUE(0x1010,local_a);
    uVar1 = puVar3[1];
    param_1[2] = *puVar3;
    param_1[3] = uVar1;
    iVar2 = 0;
  }
  return iVar2;
}


// ---- FUN_1000_35c2 @ 1000:35c2

void __stdcall16far FUN_1000_35c2(undefined2 param_1)

{
  undefined2 unaff_CS;
  
  NUDGEVALUE(unaff_CS,param_1);
  return;
}


// ---- FUN_1000_35d4 @ 1000:35d4

void __stdcall16far FUN_1000_35d4(void)

{
  EXECUTECOMMAND();
  return;
}


// ---- FUN_1000_35e4 @ 1000:35e4

undefined2 __stdcall16far FUN_1000_35e4(undefined2 param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 uVar1;
  undefined2 unaff_CS;
  
  uVar1 = UIF_INITIATE(unaff_CS,param_1,param_2,param_3);
  UIF_MESSAGE(0x1010,0x20,0x1008);
  return uVar1;
}


// ---- FUN_1000_360e @ 1000:360e

void __stdcall16far FUN_1000_360e(undefined2 param_1)

{
  undefined2 unaff_CS;
  
  INITIALISE_CONTROLLER(unaff_CS,param_1);
  return;
}


// ---- FUN_1000_3620 @ 1000:3620

void __stdcall16far FUN_1000_3620(undefined2 param_1)

{
  undefined2 unaff_CS;
  
  UIF_NOTIFY(unaff_CS,param_1);
  return;
}


// ---- FUN_1000_3632 @ 1000:3632

void __cdecl16far FUN_1000_3632(void)

{
  HLEOUIFINSTANCE();
  return;
}


// ---- FUN_1000_3638 @ 1000:3638

void __stdcall16far FUN_1000_3638(undefined2 param_1)

{
  undefined2 unaff_CS;
  
  UIF_SHUTDOWN(unaff_CS,param_1);
  return;
}


// ---- FUN_1000_364a @ 1000:364a

undefined2 __stdcall16far FUN_1000_364a(void)

{
  SUSPEND_CONTROLLER();
  return 1;
}


// ---- FUN_1000_365c @ 1000:365c

undefined2 __stdcall16far FUN_1000_365c(void)

{
  KILL_CONTROLLER();
  return 1;
}


// ---- FUN_1000_366e @ 1000:366e

void __cdecl16far FUN_1000_366e(void)

{
  SETUSEATOMS();
  return;
}


// ---- FUN_1000_3674 @ 1000:3674

void __stdcall16far FUN_1000_3674(undefined2 *param_1)

{
  undefined2 unaff_CS;
  
  SETFORMAT_MODIFIER(unaff_CS,*param_1);
  return;
}


// ---- FUN_1000_368a @ 1000:368a

void __stdcall16far FUN_1000_368a(undefined2 *param_1)

{
  undefined2 unaff_CS;
  
  SETDEFPRINTFACTOR(unaff_CS,*param_1);
  return;
}


// ---- FUN_1000_36a0 @ 1000:36a0

void __cdecl16far FUN_1000_36a0(void)

{
  Ordinal_17();
  Ordinal_33(0x1010);
  return;
}


// ---- FUN_1000_36ac @ 1000:36ac

void __cdecl16far FUN_1000_36ac(void)

{
  return;
}


// ---- FUN_1000_36ae @ 1000:36ae

int __cdecl16far FUN_1000_36ae(void)

{
  int iVar1;
  undefined2 unaff_CS;
  undefined1 local_1f2 [18];
  undefined1 local_1e0 [478];
  
  iVar1 = GET_CONFIG(unaff_CS,local_1f2);
  if ((iVar1 != 0x199) && (((iVar1 == 0 || (iVar1 == 0x19c)) || (iVar1 == 0x19e)))) {
    FUN_1000_373a();
    FUN_1000_2a62(local_1e0);
  }
  return iVar1;
}


// ---- FUN_1000_36ee @ 1000:36ee

void __cdecl16far FUN_1000_36ee(void)

{
  undefined2 unaff_CS;
  undefined1 local_1f2 [496];
  
  GET_CONFIG(unaff_CS,local_1f2);
  PUT_CONFIG(0x1010,local_1f2);
  return;
}


// ---- FUN_1000_370a @ 1000:370a

void __stdcall16far FUN_1000_370a(undefined2 param_1,undefined2 param_2)

{
  undefined2 unaff_CS;
  
  UIF_READ_LICENCES(unaff_CS,param_1,param_2,0x40);
  return;
}


// ---- FUN_1000_3722 @ 1000:3722

void __stdcall16far FUN_1000_3722(undefined2 param_1,undefined2 param_2)

{
  undefined2 unaff_CS;
  
  UIF_WRITE_LICENCES(unaff_CS,param_1,param_2,0x40);
  return;
}


// ---- FUN_1000_373a @ 1000:373a

undefined2 __cdecl16far FUN_1000_373a(void)

{
  int iVar1;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined2 local_82 [64];
  
  iVar1 = UIF_READ_LICENCES(unaff_CS,local_82,unaff_SS,0x40);
  if (iVar1 == 0) {
    DAT_1008_3164 = local_82[0];
    return local_82[0];
  }
  return 0xffff;
}


// ---- FUN_1000_375e @ 1000:375e

undefined2 __stdcall16far FUN_1000_375e(undefined2 param_1,undefined2 param_2)

{
  undefined2 uVar1;
  undefined1 local_26 [32];
  int local_6;
  int local_4;
  
  local_6 = UIF_READ_SN();
  local_4 = local_6 / 100;
  local_6 = local_6 % 100;
  uVar1 = FUN_1000_373a();
  switch(uVar1) {
  case 0:
    uVar1 = 0x4482;
    break;
  case 1:
    uVar1 = 0x448c;
    break;
  case 2:
    uVar1 = 0x4496;
    break;
  default:
    uVar1 = 0x44a0;
    break;
  case 4:
    uVar1 = 0x44a8;
    break;
  case 5:
    uVar1 = 0x44b4;
    break;
  case 6:
    uVar1 = 0x44c0;
    break;
  case 7:
    uVar1 = 0x44cc;
    break;
  case 8:
    uVar1 = 0x44d6;
    break;
  case 9:
    uVar1 = 0x44e0;
    break;
  case 10:
    uVar1 = 0x44ea;
    break;
  case 0xb:
    uVar1 = 0x44f6;
    break;
  case 0xc:
    uVar1 = 0x4500;
    break;
  case 0xd:
    uVar1 = 0x450c;
    break;
  case 0xe:
    uVar1 = 0x4516;
    break;
  case 0xf:
    uVar1 = 0x4522;
    break;
  case 0x10:
    uVar1 = 0x452c;
    break;
  case 0x11:
    uVar1 = 0x4538;
    break;
  case 0x12:
    uVar1 = 0x4542;
    break;
  case 0x13:
    uVar1 = 0x454e;
    break;
  case 0x14:
    uVar1 = 0x4558;
    break;
  case 0x15:
    uVar1 = 0x4562;
    break;
  case 0x16:
    uVar1 = 0x456e;
    break;
  case 0x17:
    uVar1 = 0x457a;
    break;
  case 0x18:
    uVar1 = 0x4586;
  }
  LSTRCPY(0x1000,uVar1,0x1000,local_26);
  _WSPRINTF(0x1010,param_1,param_2,0x4592,0x1000,local_26);
  return 0;
}


// ---- FUN_1000_393c @ 1000:393c

void __cdecl16far FUN_1000_393c(void)

{
  EO_COLUMN_TYPE();
  return;
}


// ---- FUN_1000_3942 @ 1000:3942

void __stdcall16far FUN_1000_3942(void)

{
  Ordinal_13();
  return;
}


// ---- FUN_1000_3952 @ 1000:3952

void __stdcall16far FUN_1000_3952(undefined2 param_1)

{
  undefined2 unaff_CS;
  
  GET_SRV_CONFIG(unaff_CS,param_1);
  return;
}


// ---- FUN_1000_3964 @ 1000:3964

int __stdcall16far FUN_1000_3964(undefined2 param_1,undefined2 param_2)

{
  int iVar1;
  undefined2 unaff_CS;
  
  iVar1 = SET_SRV_CONFIG(unaff_CS,param_1);
  FUN_1000_36ae(param_2);
  if ((iVar1 == 0x19c) || (iVar1 == 0x19e)) {
    iVar1 = 0;
  }
  return iVar1;
}


// ---- FUN_1000_3992 @ 1000:3992

void __stdcall16far FUN_1000_3992(int param_1,undefined2 param_2)

{
  undefined2 unaff_CS;
  
  SETBEAMSHIFTDIST(unaff_CS,*(float *)(param_1 + 4) * DAT_1008_2ce0);
  return;
}


// ---- FUN_1000_39ce @ 1000:39ce

void __stdcall16far FUN_1000_39ce(undefined2 *param_1,undefined2 param_2)

{
  undefined2 unaff_CS;
  
  MOVESTAGEXYZTRM(unaff_CS,param_1[10],param_1[0xb],param_1[8],param_1[9],param_1[6],param_1[7],
                  param_1[4],param_1[5],param_1[2],param_1[3],*param_1);
  return;
}


// ---- FUN_1000_3a12 @ 1000:3a12

void __stdcall16far FUN_1000_3a12(undefined2 *param_1,undefined2 param_2)

{
  undefined2 unaff_CS;
  
  SETSTAGEPOSITION(unaff_CS,param_1[10],param_1[0xb],param_1[8],param_1[9],param_1[6],param_1[7],
                   param_1[4],param_1[5],param_1[2],param_1[3],*param_1);
  return;
}


// ---- FUN_1000_3a56 @ 1000:3a56

void __stdcall16far FUN_1000_3a56(undefined2 *param_1,undefined2 param_2)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined1 local_1a [4];
  undefined1 local_16 [4];
  undefined1 local_12 [4];
  undefined1 local_e [4];
  undefined1 local_a [4];
  undefined1 local_6 [4];
  
  puVar2 = (undefined2 *)M007_GETVALUE(unaff_CS,local_6);
  uVar1 = puVar2[1];
  *param_1 = *puVar2;
  param_1[1] = uVar1;
  puVar2 = (undefined2 *)M007_GETVALUE(0x1010,local_a);
  uVar1 = puVar2[1];
  param_1[2] = *puVar2;
  param_1[3] = uVar1;
  puVar2 = (undefined2 *)M007_GETVALUE(0x1010,local_e);
  uVar1 = puVar2[1];
  param_1[4] = *puVar2;
  param_1[5] = uVar1;
  puVar2 = (undefined2 *)M007_GETVALUE(0x1010,local_12);
  uVar1 = puVar2[1];
  param_1[6] = *puVar2;
  param_1[7] = uVar1;
  puVar2 = (undefined2 *)M007_GETVALUE(0x1010,local_16);
  uVar1 = puVar2[1];
  param_1[8] = *puVar2;
  param_1[9] = uVar1;
  puVar2 = (undefined2 *)M007_GETVALUE(0x1010,local_1a);
  uVar1 = puVar2[1];
  param_1[10] = *puVar2;
  param_1[0xb] = uVar1;
  return;
}


// ---- FUN_1000_3b22 @ 1000:3b22

void __stdcall16far FUN_1000_3b22(int *param_1,undefined2 param_2)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 unaff_SS;
  int local_17c [18];
  int local_158 [115];
  int local_72 [56];
  
  for (iVar2 = 0; iVar2 < 7; iVar2 = iVar2 + 1) {
    param_1[iVar2 * 8 + 8] = 0;
    iVar1 = DAT_1008_2ce6;
    param_1[iVar2 * 8 + 1] = DAT_1008_2ce4;
    param_1[iVar2 * 8 + 2] = iVar1;
    iVar1 = DAT_1008_2ce6;
    param_1[iVar2 * 8 + 3] = DAT_1008_2ce4;
    param_1[iVar2 * 8 + 4] = iVar1;
    iVar1 = DAT_1008_2ce6;
    param_1[iVar2 * 8 + 5] = DAT_1008_2ce4;
    param_1[iVar2 * 8 + 6] = iVar1;
    param_1[iVar2 * 8 + 7] = 0;
  }
  uVar3 = 0x1000;
  iVar2 = FUN_1000_28f4();
  *param_1 = iVar2;
  if (DAT_1008_3164 == 1) {
    uVar3 = 0x1010;
    iVar2 = M007_GETSTATE(0x1000,0xcc);
    if (iVar2 == 1) {
      *param_1 = *param_1 + 1;
    }
  }
  if ((((DAT_1008_3164 == 8) || (DAT_1008_3164 == 7)) || (DAT_1008_3164 == 9)) ||
     (((DAT_1008_3164 == 0x13 || (DAT_1008_3164 == 0x16)) ||
      ((DAT_1008_3164 == 0x17 || (DAT_1008_3164 == 0x18)))))) {
    EXPORTZ130APERTURETABLE(uVar3,local_17c);
    for (iVar2 = 0; iVar2 <= *param_1; iVar2 = iVar2 + 1) {
      param_1[iVar2 * 8 + 8] = local_158[iVar2 * 0x13];
      iVar1 = local_17c[iVar2 * 0x13 + 1];
      param_1[iVar2 * 8 + 1] = local_17c[iVar2 * 0x13];
      param_1[iVar2 * 8 + 2] = iVar1;
    }
  }
  else {
    EXPORTAPERTURETABLE(uVar3,local_72);
    if ((((DAT_1008_3164 == 4) || (DAT_1008_3164 == 10)) ||
        ((DAT_1008_3164 == 0x10 ||
         (((DAT_1008_3164 == 0x12 || (DAT_1008_3164 == 0xc)) || (DAT_1008_3164 == 0x15)))))) ||
       (DAT_1008_3164 == 0xe)) {
      *param_1 = *param_1 + 1;
    }
    for (iVar2 = 0; iVar2 <= *param_1; iVar2 = iVar2 + 1) {
      param_1[iVar2 * 8 + 8] = local_72[iVar2 * 8 + 7];
      iVar1 = local_72[iVar2 * 8 + 1];
      param_1[iVar2 * 8 + 1] = local_72[iVar2 * 8];
      param_1[iVar2 * 8 + 2] = iVar1;
      param_1[iVar2 * 8 + 7] = local_72[iVar2 * 8 + 6];
      iVar1 = local_72[iVar2 * 8 + 3];
      param_1[iVar2 * 8 + 3] = local_72[iVar2 * 8 + 2];
      param_1[iVar2 * 8 + 4] = iVar1;
      iVar1 = local_72[iVar2 * 8 + 5];
      param_1[iVar2 * 8 + 5] = local_72[iVar2 * 8 + 4];
      param_1[iVar2 * 8 + 6] = iVar1;
    }
  }
  return;
}


// ---- FUN_1000_3cd0 @ 1000:3cd0

void __stdcall16far FUN_1000_3cd0(int *param_1,undefined2 param_2)

{
  int iVar1;
  int iVar2;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  int local_72 [56];
  
  iVar2 = 0;
  do {
    local_72[iVar2 * 8 + 7] = 0;
    local_72[iVar2 * 8] = DAT_1008_2ce4;
    local_72[iVar2 * 8 + 1] = DAT_1008_2ce6;
    local_72[iVar2 * 8 + 2] = DAT_1008_2ce4;
    local_72[iVar2 * 8 + 3] = DAT_1008_2ce6;
    local_72[iVar2 * 8 + 4] = DAT_1008_2ce4;
    local_72[iVar2 * 8 + 5] = DAT_1008_2ce6;
    local_72[iVar2 * 8 + 6] = 0;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 6);
  for (iVar2 = 0; iVar2 <= *param_1; iVar2 = iVar2 + 1) {
    local_72[iVar2 * 8 + 7] = param_1[iVar2 * 8 + 8];
    iVar1 = param_1[iVar2 * 8 + 2];
    local_72[iVar2 * 8] = param_1[iVar2 * 8 + 1];
    local_72[iVar2 * 8 + 1] = iVar1;
    iVar1 = param_1[iVar2 * 8 + 4];
    local_72[iVar2 * 8 + 2] = param_1[iVar2 * 8 + 3];
    local_72[iVar2 * 8 + 3] = iVar1;
    iVar1 = param_1[iVar2 * 8 + 6];
    local_72[iVar2 * 8 + 4] = param_1[iVar2 * 8 + 5];
    local_72[iVar2 * 8 + 5] = iVar1;
    local_72[iVar2 * 8 + 6] = param_1[iVar2 * 8 + 7];
  }
  IMPORTAPERTURETABLE(unaff_CS,local_72);
  return;
}


// ---- FUN_1000_3d84 @ 1000:3d84

undefined2 __stdcall16far FUN_1000_3d84(int *param_1,undefined2 param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 in_DX;
  undefined1 *puVar3;
  int iVar4;
  
  iVar1 = FUN_1000_04b7(0x800);
  for (iVar4 = 0; iVar4 < param_1[2]; iVar4 = iVar4 + 1) {
    puVar3 = (undefined1 *)(iVar4 * 2 + iVar1);
    *puVar3 = *(undefined1 *)((int)param_1 + iVar4 + 6);
    puVar3[1] = *(undefined1 *)((int)param_1 + iVar4 + 0x406);
  }
  if (*param_1 == 1) {
    iVar4 = param_1[1];
    uVar2 = OPLUT_SET_RED_PTS(0x1000,iVar1,in_DX,param_1[2]);
  }
  else if (*param_1 == 2) {
    iVar4 = param_1[1];
    uVar2 = OPLUT_SET_GREEN_PTS(0x1000,iVar1,in_DX,param_1[2]);
  }
  else if (*param_1 == 3) {
    iVar4 = param_1[1];
    uVar2 = OPLUT_SET_BLUE_PTS(0x1000,iVar1,in_DX,param_1[2]);
  }
  else {
    if (*param_1 != 4) {
      FUN_1000_0496(iVar1,in_DX);
      return 0;
    }
    iVar4 = param_1[1];
    uVar2 = OPLUT_SET_GREY_PTS(0x1000,iVar1,in_DX,param_1[2]);
  }
  FUN_1000_0496(iVar1,in_DX,iVar4);
  return uVar2;
}


// ---- FUN_1000_3e68 @ 1000:3e68

void __stdcall16far FUN_1000_3e68(int param_1,undefined2 param_2)

{
  undefined2 unaff_CS;
  
  OPLUT_RGB_SET(unaff_CS,*(undefined2 *)(param_1 + 8),*(undefined2 *)(param_1 + 6),
                *(undefined2 *)(param_1 + 4),*(undefined2 *)(param_1 + 2));
  return;
}


// ---- FUN_1000_3e90 @ 1000:3e90

undefined2 __stdcall16far FUN_1000_3e90(int *param_1,undefined2 param_2)

{
  undefined2 uVar1;
  undefined2 unaff_CS;
  
  if (*param_1 == 1) {
    uVar1 = OPLUT_SET_RED(unaff_CS,param_1[3],param_1[2]);
  }
  else if (*param_1 == 2) {
    uVar1 = OPLUT_SET_GREEN(unaff_CS,param_1[3],param_1[2]);
  }
  else if (*param_1 == 3) {
    uVar1 = OPLUT_SET_BLUE(unaff_CS,param_1[3],param_1[2]);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


// ---- FUN_1000_3eec @ 1000:3eec

void __stdcall16far FUN_1000_3eec(int param_1,undefined2 param_2)

{
  undefined2 unaff_CS;
  
  OPLUT_BRI_AND_CONT(unaff_CS,*(undefined2 *)(param_1 + 6),*(undefined2 *)(param_1 + 8),
                     *(undefined2 *)(param_1 + 2),*(undefined2 *)(param_1 + 4));
  return;
}


// ---- FUN_1000_3f14 @ 1000:3f14

void __stdcall16far FUN_1000_3f14(int param_1,undefined2 param_2)

{
  undefined2 unaff_CS;
  
  OPLUT_INV(unaff_CS,*(undefined2 *)(param_1 + 6),*(undefined2 *)(param_1 + 8),
            *(undefined2 *)(param_1 + 2),*(undefined2 *)(param_1 + 4));
  return;
}


// ---- FUN_1000_3f3c @ 1000:3f3c

void __stdcall16far FUN_1000_3f3c(int param_1,undefined2 param_2)

{
  undefined2 unaff_CS;
  
  OPLUT_LIN(unaff_CS,*(undefined2 *)(param_1 + 6),*(undefined2 *)(param_1 + 8),
            *(undefined2 *)(param_1 + 2),*(undefined2 *)(param_1 + 4));
  return;
}


// ---- FUN_1000_3f64 @ 1000:3f64

void __stdcall16far FUN_1000_3f64(int param_1,undefined2 param_2)

{
  undefined2 unaff_CS;
  
  OPLUT_GAMMA(unaff_CS,*(undefined2 *)(param_1 + 2),*(undefined2 *)(param_1 + 4));
  return;
}


// ---- FUN_1000_3f84 @ 1000:3f84

void __stdcall16far FUN_1000_3f84(void)

{
  DRAW_GREY_WEDGE();
  return;
}


// ---- FUN_1000_3f96 @ 1000:3f96

void __stdcall16far FUN_1000_3f96(int param_1,undefined2 param_2)

{
  undefined2 unaff_CS;
  
  READ_AN_IMAGE_PIXEL(unaff_CS,*(undefined2 *)(param_1 + 4),*(undefined2 *)(param_1 + 2));
  return;
}


// ---- FUN_1000_3fd6 @ 1000:3fd6

void __stdcall16far FUN_1000_3fd6(int param_1,undefined2 param_2)

{
  undefined2 unaff_CS;
  
  OPLUT_LOAD(unaff_CS,param_1 + 6,param_2,*(undefined2 *)(param_1 + 4),*(undefined2 *)(param_1 + 2))
  ;
  return;
}


// ---- FUN_1000_3ffa @ 1000:3ffa

void __stdcall16far FUN_1000_3ffa(int param_1,undefined2 param_2)

{
  undefined2 unaff_CS;
  
  OPLUT_READ(unaff_CS,param_1 + 6,param_2,*(undefined2 *)(param_1 + 4),*(undefined2 *)(param_1 + 2))
  ;
  return;
}


// ---- FUN_1000_401e @ 1000:401e

undefined2 __stdcall16far FUN_1000_401e(int *param_1,undefined2 param_2)

{
  int *piVar1;
  undefined2 uVar2;
  undefined2 unaff_CS;
  
  piVar1 = param_1 + 3;
  if (*param_1 == 1) {
    uVar2 = OPLUT_READ_RED(unaff_CS,piVar1,param_2,param_1[2]);
  }
  else if (*param_1 == 2) {
    uVar2 = OPLUT_READ_GREEN(unaff_CS,piVar1,param_2,param_1[2]);
  }
  else if (*param_1 == 3) {
    uVar2 = OPLUT_READ_BLUE(unaff_CS,piVar1,param_2,param_1[2]);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


// ---- FUN_1000_4086 @ 1000:4086

void __stdcall16far FUN_1000_4086(int param_1,undefined2 param_2)

{
  undefined2 unaff_CS;
  
  OPLUT_FILL(unaff_CS,*(undefined2 *)(param_1 + 10),*(undefined2 *)(param_1 + 8),
             *(undefined2 *)(param_1 + 6),*(undefined2 *)(param_1 + 4),*(undefined2 *)(param_1 + 2))
  ;
  return;
}


// ---- FUN_1000_40b2 @ 1000:40b2

void __stdcall16far FUN_1000_40b2(void)

{
  OPLUT_QLIN();
  return;
}


// ---- FUN_1000_40c4 @ 1000:40c4

void __stdcall16far FUN_1000_40c4(void)

{
  OPLUT_QINV();
  return;
}


// ---- FUN_1000_40d6 @ 1000:40d6

void __stdcall16far FUN_1000_40d6(int param_1,undefined2 param_2)

{
  undefined2 unaff_CS;
  
  OPLUT_SAVE(unaff_CS,*(undefined2 *)(param_1 + 2));
  return;
}


// ---- FUN_1000_40f2 @ 1000:40f2

void __stdcall16far FUN_1000_40f2(int param_1,undefined2 param_2)

{
  undefined2 unaff_CS;
  
  OPLUT_RESTORE(unaff_CS,*(undefined2 *)(param_1 + 2));
  return;
}


// ---- FUN_1000_410e @ 1000:410e

undefined2 __stdcall16far FUN_1000_410e(int *param_1,undefined2 param_2)

{
  int *piVar1;
  undefined2 uVar2;
  undefined2 unaff_CS;
  
  piVar1 = param_1 + 4;
  if (*param_1 == 1) {
    uVar2 = OPLUT_READ_RED_LUT(unaff_CS,piVar1,param_2,param_1[3],param_1[2]);
  }
  else if (*param_1 == 2) {
    uVar2 = OPLUT_READ_GREEN_LUT(unaff_CS,piVar1,param_2,param_1[3],param_1[2]);
  }
  else if (*param_1 == 3) {
    uVar2 = OPLUT_READ_BLUE_LUT(unaff_CS,piVar1,param_2,param_1[3],param_1[2]);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


// ---- FUN_1000_4182 @ 1000:4182

undefined2 __stdcall16far FUN_1000_4182(undefined2 *param_1,undefined2 param_2)

{
  undefined2 uVar1;
  undefined2 unaff_CS;
  undefined2 local_a;
  undefined2 local_8;
  undefined2 local_6;
  undefined2 local_4;
  
  local_a = *param_1;
  local_8 = param_1[1];
  uVar1 = Z130PIXELDATA(unaff_CS,&local_a);
  param_1[2] = local_6;
  param_1[3] = local_4;
  return uVar1;
}


// ---- FUN_1000_41c0 @ 1000:41c0

void __stdcall16far FUN_1000_41c0(undefined2 *param_1,undefined2 param_2)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined1 local_6 [4];
  
  puVar2 = (undefined2 *)
           Z130_GET_COVARIANCE(unaff_CS,local_6,param_1[7],param_1[8],param_1[5],param_1[6],
                               param_1[4],param_1[2]);
  uVar1 = puVar2[1];
  *param_1 = *puVar2;
  param_1[1] = uVar1;
  return;
}


// ---- FUN_1000_420c @ 1000:420c

undefined2 __stdcall16far FUN_1000_420c(undefined2 param_1)

{
  int iVar1;
  undefined2 uVar2;
  int iVar3;
  
  uVar2 = 0x1000;
  switch(param_1) {
  case 0:
    SETSHIFT_START(0x1000);
    break;
  case 1:
    SETSHIFT_END(0x1000);
    break;
  case 2:
    FUN_1000_36ee();
    FORCE_SAVE_NVRAM(0x1000);
    break;
  case 3:
    uVar2 = GET_FEATURESCAN_STATUS(0x1000);
    return uVar2;
  case 4:
    SUSPENDSTAGE(0x1000);
    break;
  case 5:
    uVar2 = 0x1010;
    DAT_1008_003c = M007_GETSTATE(0x1000,0x110);
    iVar1 = 0x110;
    iVar3 = 0;
    goto LAB_1000_4276;
  case 6:
    iVar1 = DAT_1008_003c >> 0xf;
    iVar3 = DAT_1008_003c;
LAB_1000_4276:
    SETSTATE(uVar2,iVar3,iVar1);
    break;
  default:
    return 0;
  }
  return 1;
}


// ---- FUN_1000_4282 @ 1000:4282

void __stdcall16far FUN_1000_4282(undefined2 param_1)

{
  undefined2 unaff_CS;
  
  Z130HISTOGRAM(unaff_CS,param_1);
  return;
}


// ---- FUN_1000_4294 @ 1000:4294

void __stdcall16far FUN_1000_4294(undefined2 *param_1,undefined2 param_2)

{
  undefined2 unaff_CS;
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_a;
  undefined2 local_8;
  undefined2 *local_6;
  undefined2 local_4;
  
  local_e = *param_1;
  local_c = param_1[1];
  local_a = param_1[2];
  local_8 = param_1[3];
  local_6 = param_1 + 4;
  local_4 = param_2;
  Z130LINEDATA(unaff_CS,&local_e);
  return;
}


// ---- FUN_1000_42d2 @ 1000:42d2

void __stdcall16far
FUN_1000_42d2(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5)

{
  undefined2 unaff_CS;
  
  DO_FEATURESCAN(unaff_CS,param_1,param_2,param_3,param_4,param_5);
  return;
}


// ---- FUN_1000_42f0 @ 1000:42f0

void __cdecl16far FUN_1000_42f0(void)

{
  STOP_FEATURESCAN();
  return;
}


// ---- FUN_1000_42f6 @ 1000:42f6

void __stdcall16far FUN_1000_42f6(undefined2 param_1)

{
  undefined2 unaff_CS;
  
  SETHARDPANELKNOB(unaff_CS,param_1);
  return;
}


// ---- FUN_1000_4308 @ 1000:4308

void __stdcall16far FUN_1000_4308(undefined2 param_1)

{
  undefined2 unaff_CS;
  
  READ_COLUMN_CAL_DATA(unaff_CS,param_1);
  return;
}


// ---- FUN_1000_431a @ 1000:431a

void __stdcall16far FUN_1000_431a(undefined2 param_1)

{
  undefined2 unaff_CS;
  
  UPDATE_HPSEM_PANEL(unaff_CS,param_1);
  return;
}


// ---- FUN_1000_432c @ 1000:432c

void __stdcall16far FUN_1000_432c(undefined2 param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 uVar1;
  
  switch(param_3) {
  case 0:
    uVar1 = FUN_1000_0278();
    HP_STATE_EVENT(0x1000,uVar1);
    break;
  case 1:
    uVar1 = FUN_1000_0278();
    HP_ERROR_EVENT(0x1000,uVar1);
    break;
  case 2:
    uVar1 = FUN_1000_0278();
    HP_SET_V8(0x1000,uVar1);
    break;
  case 3:
    uVar1 = FUN_1000_0278();
    HP_SET_V14(0x1000,uVar1);
    break;
  case 4:
    HP_SET_CHAMBER_PRESSURE(0x1000,param_1);
    break;
  case 5:
    HP_STILL_ACTIVE(0x1000);
    break;
  case 6:
    HP_SHOW_PANEL(0x1000);
    break;
  case 7:
    HP_SHOW_SERVICE_PANEL(0x1000);
    break;
  case 8:
    RESTART_HPAPP(0x1000);
    break;
  case 9:
    CLOSE_HPAPP(0x1000);
  }
  return;
}


// ---- FUN_1000_43cc @ 1000:43cc

void __stdcall16far FUN_1000_43cc(undefined2 *param_1,undefined2 param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined2 auStack_15c [171];
  
  puVar4 = auStack_15c;
  for (iVar3 = 0xab; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = puVar4;
    puVar4 = puVar4 + 1;
    puVar1 = param_1;
    param_1 = param_1 + 1;
    *puVar2 = *puVar1;
  }
  DEFINECUSTOMSTAGE(unaff_CS);
  return;
}


// ---- FUN_1000_43f8 @ 1000:43f8

void __stdcall16far FUN_1000_43f8(undefined2 param_1)

{
  int iVar1;
  undefined2 unaff_CS;
  undefined2 uVar2;
  
  uVar2 = param_1;
  GLOBALGETATOMNAME(unaff_CS,0x40,0x3070,0x1008);
  GLOBALDELETEATOM(0x1010,param_1,uVar2);
  iVar1 = LSTRLEN(0x1010,0x3070);
  DAT_1008_003a = (uint)(iVar1 != 0);
  return;
}


// ---- FUN_1000_4428 @ 1000:4428

void __stdcall16far FUN_1000_4428(undefined2 param_1,undefined2 param_2)

{
  undefined2 unaff_CS;
  
  DEFINEAXISHIGHRANGE(unaff_CS,param_1,param_2);
  return;
}


// ---- FUN_1000_45a0 @ 1000:45a0

undefined2 * __stdcall16far FUN_1000_45a0(undefined2 *param_1,uint param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  
  if (param_2 < 0x1c4) {
    puVar4 = (undefined2 *)(param_2 * 0x18 + 0x3e);
  }
  else {
    MESSAGEBOX(unaff_CS,0x30,0x45ea,0x1000,0x45f6,0x1000);
    puVar4 = (undefined2 *)&DAT_1008_003e;
  }
  puVar5 = param_1;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar2 = *puVar1;
  }
  return param_1;
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


// ---- LSTRCPY @ 1010:002c

/* WARNING: Control flow encountered bad instruction data */

void LSTRCPY(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- LSTRCAT @ 1010:0030

/* WARNING: Control flow encountered bad instruction data */

void LSTRCAT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- LSTRLEN @ 1010:0034

/* WARNING: Control flow encountered bad instruction data */

void LSTRLEN(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- INITTASK @ 1010:0038

/* WARNING: Control flow encountered bad instruction data */

void INITTASK(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- LOADLIBRARY @ 1010:003c

/* WARNING: Control flow encountered bad instruction data */

void LOADLIBRARY(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- FREELIBRARY @ 1010:0040

/* WARNING: Control flow encountered bad instruction data */

void FREELIBRARY(void)

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


// ---- GETDOSENVIRONMENT @ 1010:0048

/* WARNING: Control flow encountered bad instruction data */

void GETDOSENVIRONMENT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- FATALAPPEXIT @ 1010:004c

/* WARNING: Control flow encountered bad instruction data */

void FATALAPPEXIT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- __WINFLAGS @ 1010:0050

/* WARNING: Control flow encountered bad instruction data */

void __WINFLAGS(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_651 @ 1010:0054

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_651(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- OPLUT_RGB_SET @ 1010:0058

/* WARNING: Control flow encountered bad instruction data */

void OPLUT_RGB_SET(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- OPLUT_RGB_READ @ 1010:005c

/* WARNING: Control flow encountered bad instruction data */

void OPLUT_RGB_READ(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- OPLUT_LOAD @ 1010:0060

/* WARNING: Control flow encountered bad instruction data */

void OPLUT_LOAD(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- OPLUT_READ @ 1010:0064

/* WARNING: Control flow encountered bad instruction data */

void OPLUT_READ(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- OPLUT_SET_RED @ 1010:0068

/* WARNING: Control flow encountered bad instruction data */

void OPLUT_SET_RED(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- OPLUT_SET_GREEN @ 1010:006c

/* WARNING: Control flow encountered bad instruction data */

void OPLUT_SET_GREEN(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- OPLUT_SET_BLUE @ 1010:0070

/* WARNING: Control flow encountered bad instruction data */

void OPLUT_SET_BLUE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- OPLUT_READ_RED @ 1010:0074

/* WARNING: Control flow encountered bad instruction data */

void OPLUT_READ_RED(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- OPLUT_READ_GREEN @ 1010:0078

/* WARNING: Control flow encountered bad instruction data */

void OPLUT_READ_GREEN(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- OPLUT_READ_BLUE @ 1010:007c

/* WARNING: Control flow encountered bad instruction data */

void OPLUT_READ_BLUE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- OPLUT_SET_RED_PTS @ 1010:0080

/* WARNING: Control flow encountered bad instruction data */

void OPLUT_SET_RED_PTS(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- OPLUT_SET_GREEN_PTS @ 1010:0084

/* WARNING: Control flow encountered bad instruction data */

void OPLUT_SET_GREEN_PTS(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- OPLUT_SET_BLUE_PTS @ 1010:0088

/* WARNING: Control flow encountered bad instruction data */

void OPLUT_SET_BLUE_PTS(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- OPLUT_SET_GREY_PTS @ 1010:008c

/* WARNING: Control flow encountered bad instruction data */

void OPLUT_SET_GREY_PTS(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- OPLUT_QLIN @ 1010:0090

/* WARNING: Control flow encountered bad instruction data */

void OPLUT_QLIN(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- OPLUT_QINV @ 1010:0094

/* WARNING: Control flow encountered bad instruction data */

void OPLUT_QINV(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- OPLUT_FILL @ 1010:0098

/* WARNING: Control flow encountered bad instruction data */

void OPLUT_FILL(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- OPLUT_GAMMA @ 1010:009c

/* WARNING: Control flow encountered bad instruction data */

void OPLUT_GAMMA(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- OPLUT_INV @ 1010:00a0

/* WARNING: Control flow encountered bad instruction data */

void OPLUT_INV(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- OPLUT_LIN @ 1010:00a4

/* WARNING: Control flow encountered bad instruction data */

void OPLUT_LIN(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- OPLUT_BRI_AND_CONT @ 1010:00a8

/* WARNING: Control flow encountered bad instruction data */

void OPLUT_BRI_AND_CONT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- OPLUT_SAVE @ 1010:00ac

/* WARNING: Control flow encountered bad instruction data */

void OPLUT_SAVE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- OPLUT_RESTORE @ 1010:00b0

/* WARNING: Control flow encountered bad instruction data */

void OPLUT_RESTORE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- DRAW_GREY_WEDGE @ 1010:00b4

/* WARNING: Control flow encountered bad instruction data */

void DRAW_GREY_WEDGE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- OPLUT_READ_RED_LUT @ 1010:00b8

/* WARNING: Control flow encountered bad instruction data */

void OPLUT_READ_RED_LUT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- OPLUT_READ_GREEN_LUT @ 1010:00bc

/* WARNING: Control flow encountered bad instruction data */

void OPLUT_READ_GREEN_LUT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- OPLUT_READ_BLUE_LUT @ 1010:00c0

/* WARNING: Control flow encountered bad instruction data */

void OPLUT_READ_BLUE_LUT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- READ_AN_IMAGE_PIXEL @ 1010:00c4

/* WARNING: Control flow encountered bad instruction data */

void READ_AN_IMAGE_PIXEL(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_31 @ 1010:00c8

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_31(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- MESSAGEBOX @ 1010:00cc

/* WARNING: Control flow encountered bad instruction data */

void MESSAGEBOX(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- LOADSTRING @ 1010:00d0

/* WARNING: Control flow encountered bad instruction data */

void LOADSTRING(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GLOBALADDATOM @ 1010:00d4

/* WARNING: Control flow encountered bad instruction data */

void GLOBALADDATOM(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GLOBALDELETEATOM @ 1010:00d8

/* WARNING: Control flow encountered bad instruction data */

void GLOBALDELETEATOM(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GLOBALGETATOMNAME @ 1010:00dc

/* WARNING: Control flow encountered bad instruction data */

void GLOBALGETATOMNAME(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- _WSPRINTF @ 1010:00e0

/* WARNING: Control flow encountered bad instruction data */

void _WSPRINTF(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- LSTRCMP @ 1010:00e4

/* WARNING: Control flow encountered bad instruction data */

void LSTRCMP(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- __FPMATH @ 1010:00e8

/* WARNING: Control flow encountered bad instruction data */

void __FPMATH(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- UIF_INITIATE @ 1010:00ec

/* WARNING: Control flow encountered bad instruction data */

void UIF_INITIATE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- UIF_NOTIFY @ 1010:00f0

/* WARNING: Control flow encountered bad instruction data */

void UIF_NOTIFY(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- SETVALUE @ 1010:00f4

/* WARNING: Control flow encountered bad instruction data */

void SETVALUE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- NUDGEVALUE @ 1010:00f8

/* WARNING: Control flow encountered bad instruction data */

void NUDGEVALUE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- SETSTATE @ 1010:00fc

/* WARNING: Control flow encountered bad instruction data */

void SETSTATE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- EXECUTECOMMAND @ 1010:0100

/* WARNING: Control flow encountered bad instruction data */

void EXECUTECOMMAND(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- VALUEENABLE @ 1010:0104

/* WARNING: Control flow encountered bad instruction data */

void VALUEENABLE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- STATEENABLE @ 1010:0108

/* WARNING: Control flow encountered bad instruction data */

void STATEENABLE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- COMMANDENABLE @ 1010:010c

/* WARNING: Control flow encountered bad instruction data */

void COMMANDENABLE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- UIF_SHUTDOWN @ 1010:0110

/* WARNING: Control flow encountered bad instruction data */

void UIF_SHUTDOWN(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- S300_TICK @ 1010:0114

/* WARNING: Control flow encountered bad instruction data */

void S300_TICK(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- M007_GETVALUE @ 1010:0118

/* WARNING: Control flow encountered bad instruction data */

void M007_GETVALUE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- M007_GETLOW @ 1010:011c

/* WARNING: Control flow encountered bad instruction data */

void M007_GETLOW(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- M007_GETHIGH @ 1010:0120

/* WARNING: Control flow encountered bad instruction data */

void M007_GETHIGH(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- M007_GETSTATE @ 1010:0124

/* WARNING: Control flow encountered bad instruction data */

void M007_GETSTATE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- UIF_MESSAGE @ 1010:0128

/* WARNING: Control flow encountered bad instruction data */

void UIF_MESSAGE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- SETXY @ 1010:012c

/* WARNING: Control flow encountered bad instruction data */

void SETXY(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GET_CONFIG @ 1010:0130

/* WARNING: Control flow encountered bad instruction data */

void GET_CONFIG(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- PUT_CONFIG @ 1010:0134

/* WARNING: Control flow encountered bad instruction data */

void PUT_CONFIG(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- INITIALISE_CONTROLLER @ 1010:0138

/* WARNING: Control flow encountered bad instruction data */

void INITIALISE_CONTROLLER(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- UIF_READ_SN @ 1010:013c

/* WARNING: Control flow encountered bad instruction data */

void UIF_READ_SN(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- UIF_READ_LICENCES @ 1010:0140

/* WARNING: Control flow encountered bad instruction data */

void UIF_READ_LICENCES(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- UIF_WRITE_LICENCES @ 1010:0144

/* WARNING: Control flow encountered bad instruction data */

void UIF_WRITE_LICENCES(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- SUSPEND_CONTROLLER @ 1010:0148

/* WARNING: Control flow encountered bad instruction data */

void SUSPEND_CONTROLLER(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- KILL_CONTROLLER @ 1010:014c

/* WARNING: Control flow encountered bad instruction data */

void KILL_CONTROLLER(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- HLEOUIFINSTANCE @ 1010:0150

/* WARNING: Control flow encountered bad instruction data */

void HLEOUIFINSTANCE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- UIF_SET_HLANGUAGE @ 1010:0154

/* WARNING: Control flow encountered bad instruction data */

void UIF_SET_HLANGUAGE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- HLEOUIFLANGUAGE @ 1010:0158

/* WARNING: Control flow encountered bad instruction data */

void HLEOUIFLANGUAGE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- MOVESTAGEXYZTRM @ 1010:015c

/* WARNING: Control flow encountered bad instruction data */

void MOVESTAGEXYZTRM(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- SETUSEATOMS @ 1010:0160

/* WARNING: Control flow encountered bad instruction data */

void SETUSEATOMS(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- STATEMAX @ 1010:0164

/* WARNING: Control flow encountered bad instruction data */

void STATEMAX(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GET_SRV_CONFIG @ 1010:0168

/* WARNING: Control flow encountered bad instruction data */

void GET_SRV_CONFIG(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- SET_SRV_CONFIG @ 1010:016c

/* WARNING: Control flow encountered bad instruction data */

void SET_SRV_CONFIG(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- M007_SETSTRING @ 1010:0170

/* WARNING: Control flow encountered bad instruction data */

void M007_SETSTRING(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_13 @ 1010:0174

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_13(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_14 @ 1010:0178

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_14(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_15 @ 1010:017c

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_15(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_16 @ 1010:0180

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_16(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_17 @ 1010:0184

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_17(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_33 @ 1010:0188

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_33(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_39 @ 1010:018c

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_39(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_40 @ 1010:0190

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_40(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_41 @ 1010:0194

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_41(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_42 @ 1010:0198

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_42(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_43 @ 1010:019c

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_43(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- IMPORTAPERTURETABLE @ 1010:01a0

/* WARNING: Control flow encountered bad instruction data */

void IMPORTAPERTURETABLE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- EXPORTAPERTURETABLE @ 1010:01a4

/* WARNING: Control flow encountered bad instruction data */

void EXPORTAPERTURETABLE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- EO_COLUMN_TYPE @ 1010:01a8

/* WARNING: Control flow encountered bad instruction data */

void EO_COLUMN_TYPE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- SETBEAMSHIFTDIST @ 1010:01ac

/* WARNING: Control flow encountered bad instruction data */

void SETBEAMSHIFTDIST(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- SETFORMAT_MODIFIER @ 1010:01b0

/* WARNING: Control flow encountered bad instruction data */

void SETFORMAT_MODIFIER(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- SETSHIFT_START @ 1010:01b4

/* WARNING: Control flow encountered bad instruction data */

void SETSHIFT_START(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- SETSHIFT_END @ 1010:01b8

/* WARNING: Control flow encountered bad instruction data */

void SETSHIFT_END(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- DO_FEATURESCAN @ 1010:01bc

/* WARNING: Control flow encountered bad instruction data */

void DO_FEATURESCAN(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- STOP_FEATURESCAN @ 1010:01c0

/* WARNING: Control flow encountered bad instruction data */

void STOP_FEATURESCAN(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- READ_COLUMN_CAL_DATA @ 1010:01c4

/* WARNING: Control flow encountered bad instruction data */

void READ_COLUMN_CAL_DATA(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- SETDEFPRINTFACTOR @ 1010:01c8

/* WARNING: Control flow encountered bad instruction data */

void SETDEFPRINTFACTOR(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- EXPORTZ130APERTURETABLE @ 1010:01cc

/* WARNING: Control flow encountered bad instruction data */

void EXPORTZ130APERTURETABLE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Z130_GET_COVARIANCE @ 1010:01d0

/* WARNING: Control flow encountered bad instruction data */

void Z130_GET_COVARIANCE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- SETHARDPANELKNOB @ 1010:01d4

/* WARNING: Control flow encountered bad instruction data */

void SETHARDPANELKNOB(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GET_FEATURESCAN_STATUS @ 1010:01d8

/* WARNING: Control flow encountered bad instruction data */

void GET_FEATURESCAN_STATUS(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- SETSTAGEPOSITION @ 1010:01dc

/* WARNING: Control flow encountered bad instruction data */

void SETSTAGEPOSITION(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- SUSPENDSTAGE @ 1010:01e0

/* WARNING: Control flow encountered bad instruction data */

void SUSPENDSTAGE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- DEFINECUSTOMSTAGE @ 1010:01e4

/* WARNING: Control flow encountered bad instruction data */

void DEFINECUSTOMSTAGE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- DEFINEAXISHIGHRANGE @ 1010:01e8

/* WARNING: Control flow encountered bad instruction data */

void DEFINEAXISHIGHRANGE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- HP_STATE_EVENT @ 1010:01ec

/* WARNING: Control flow encountered bad instruction data */

void HP_STATE_EVENT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- HP_ERROR_EVENT @ 1010:01f0

/* WARNING: Control flow encountered bad instruction data */

void HP_ERROR_EVENT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- HP_SET_V8 @ 1010:01f4

/* WARNING: Control flow encountered bad instruction data */

void HP_SET_V8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- HP_SET_V14 @ 1010:01f8

/* WARNING: Control flow encountered bad instruction data */

void HP_SET_V14(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- HP_SET_CHAMBER_PRESSURE @ 1010:01fc

/* WARNING: Control flow encountered bad instruction data */

void HP_SET_CHAMBER_PRESSURE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- HP_STILL_ACTIVE @ 1010:0200

/* WARNING: Control flow encountered bad instruction data */

void HP_STILL_ACTIVE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- UPDATE_HPSEM_PANEL @ 1010:0204

/* WARNING: Control flow encountered bad instruction data */

void UPDATE_HPSEM_PANEL(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- RESTART_HPAPP @ 1010:0208

/* WARNING: Control flow encountered bad instruction data */

void RESTART_HPAPP(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- HP_SHOW_PANEL @ 1010:020c

/* WARNING: Control flow encountered bad instruction data */

void HP_SHOW_PANEL(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- HP_SHOW_SERVICE_PANEL @ 1010:0210

/* WARNING: Control flow encountered bad instruction data */

void HP_SHOW_SERVICE_PANEL(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- CLOSE_HPAPP @ 1010:0214

/* WARNING: Control flow encountered bad instruction data */

void CLOSE_HPAPP(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- FORCE_SAVE_NVRAM @ 1010:0218

/* WARNING: Control flow encountered bad instruction data */

void FORCE_SAVE_NVRAM(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Z130IMAGETOFILE @ 1010:021c

/* WARNING: Control flow encountered bad instruction data */

void Z130IMAGETOFILE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Z130IMAGEFROMFILE @ 1010:0220

/* WARNING: Control flow encountered bad instruction data */

void Z130IMAGEFROMFILE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Z130IMAGETOHRRU @ 1010:0224

/* WARNING: Control flow encountered bad instruction data */

void Z130IMAGETOHRRU(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Z130FILETOHRRU @ 1010:0228

/* WARNING: Control flow encountered bad instruction data */

void Z130FILETOHRRU(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Z130RAWIMAGETOFILE @ 1010:022c

/* WARNING: Control flow encountered bad instruction data */

void Z130RAWIMAGETOFILE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Z130HISTOGRAM @ 1010:0230

/* WARNING: Control flow encountered bad instruction data */

void Z130HISTOGRAM(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Z130LINEDATA @ 1010:0234

/* WARNING: Control flow encountered bad instruction data */

void Z130LINEDATA(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Z130PIXELDATA @ 1010:0238

/* WARNING: Control flow encountered bad instruction data */

void Z130PIXELDATA(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


