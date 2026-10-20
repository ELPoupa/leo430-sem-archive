// Decompiled with Ghidra from mcs2gsp.exe
// Format: Old-style DOS Executable (MZ), image base 0000:0000

// ---- FUN_1000_0010 @ 1000:0010

void __cdecl16near FUN_1000_0010(undefined2 param_1,undefined2 param_2,undefined1 param_3)

{
  undefined1 uVar1;
  uint uVar2;
  
  uVar1 = FUN_1000_24e2();
  FUN_1000_2326(0xa301,uVar1);
  uVar2 = FUN_1000_24e2();
  FUN_1000_2326(0xa300,uVar2 & 0xfc);
  uVar2 = FUN_1000_24e2();
  FUN_1000_01a8(0xd000,uVar2 & 0x7fff,param_3);
  return;
}


// ---- FUN_1000_008e @ 1000:008e

void __cdecl16near FUN_1000_008e(undefined2 param_1,undefined2 param_2,uint *param_3)

{
  undefined1 uVar1;
  uint uVar2;
  undefined2 unaff_DS;
  
  uVar1 = FUN_1000_24e2();
  FUN_1000_2326(0xa301,uVar1);
  uVar2 = FUN_1000_24e2();
  FUN_1000_2326(0xa300,uVar2 & 0xfc);
  uVar2 = FUN_1000_24e2();
  uVar2 = FUN_1000_01ec(0xd000,uVar2 & 0x7fff);
  *param_3 = uVar2 & 0xff;
  return;
}


// ---- FUN_1000_010c @ 1000:010c

void __cdecl16near FUN_1000_010c(uint *param_1,undefined2 param_2,undefined2 param_3,int param_4)

{
  undefined1 uVar1;
  uint uVar2;
  undefined2 unaff_DS;
  int local_a;
  int local_8;
  
  uVar1 = FUN_1000_24e2();
  FUN_1000_2326(0xa301,uVar1);
  uVar2 = FUN_1000_24e2();
  FUN_1000_2326(0xa300,uVar2 & 0xfc);
  local_a = FUN_1000_24e2();
  for (local_8 = 0; local_8 < param_4; local_8 = local_8 + 1) {
    FUN_1000_01a8(0xd000,local_a,*param_1 & 0xff);
    local_a = local_a + 2;
  }
  return;
}


// ---- FUN_1000_01a8 @ 1000:01a8

void __cdecl16near FUN_1000_01a8(undefined2 param_1,uint param_2,undefined1 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_1000_24d6();
  *(undefined1 *)CONCAT22((int)((ulong)uVar1 >> 0x10),(undefined1 *)((uint)uVar1 | param_2)) =
       param_3;
  return;
}


// ---- FUN_1000_01ec @ 1000:01ec

undefined2 __cdecl16near FUN_1000_01ec(undefined2 param_1,uint param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  
  uVar2 = FUN_1000_24d6();
  puVar1 = (undefined1 *)((uint)uVar2 | param_2);
  return CONCAT11((char)((uint)puVar1 >> 8),
                  *(undefined1 *)CONCAT22((int)((ulong)uVar2 >> 0x10),puVar1));
}


// ---- FUN_1000_0230 @ 1000:0230

void __cdecl16near FUN_1000_0230(int param_1,int param_2)

{
  undefined2 uVar1;
  char cVar2;
  undefined2 unaff_DS;
  
  uVar1 = *(undefined2 *)(param_2 + 2);
  FUN_1000_120a(0x60,0x42);
  if (param_1 == 1) {
    FUN_1000_120a(100);
    FUN_1000_0d0a(1);
  }
  FUN_1000_02cc();
  cVar2 = FUN_1000_0308(uVar1,0xa22);
  if (cVar2 == '\x01') {
    cVar2 = FUN_1000_039e();
    if (cVar2 == '\x01') {
      FUN_1000_120a(0x8d);
    }
    else {
      FUN_1000_120a(0xb2);
    }
  }
  else {
    FUN_1000_120a(0xd6,*(undefined2 *)(param_2 + 2));
  }
  FUN_1000_0d0a(0);
  return;
}


// ---- FUN_1000_02cc @ 1000:02cc

void __cdecl16near FUN_1000_02cc(void)

{
  undefined2 unaff_DS;
  
  *(undefined2 *)0x31ca = 0;
  *(undefined2 *)0x31c0 = 0;
  *(uint *)0x31be = *(uint *)0x31be & 0xfffe;
  FUN_1000_0010(0x80,0x6030,*(undefined1 *)0x31be);
  return;
}


// ---- FUN_1000_0308 @ 1000:0308

undefined2 __cdecl16near FUN_1000_0308(undefined2 param_1,undefined2 param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined2 unaff_SI;
  undefined2 unaff_DI;
  undefined2 unaff_DS;
  
  FUN_1000_120a(0x110,param_1);
  iVar2 = FUN_1000_11f6(param_1,0x12d);
  *(int *)0x31bc = iVar2;
  if (iVar2 != 0) {
    uVar3 = (int)*(char *)(*(int *)0x31bc + 6) & 0x20;
    *(uint *)0x31ca = uVar3;
    if (uVar3 == 0) {
      while (cVar1 = FUN_1000_05d0(0x3138,*(undefined2 *)0x31bc), cVar1 != -1) {
        FUN_1000_065c(param_2,unaff_DI,unaff_SI);
      }
      FUN_1000_1118(*(undefined2 *)0x31bc);
      return 1;
    }
    *(undefined2 *)0x31ca = 0;
    FUN_1000_1118(*(undefined2 *)0x31bc);
  }
  return 0;
}


// ---- FUN_1000_039e @ 1000:039e

undefined2 __cdecl16near FUN_1000_039e(void)

{
  int iVar1;
  undefined2 unaff_DS;
  long lVar2;
  int local_14;
  int local_e;
  uint local_a;
  int local_8;
  byte local_6;
  
  FUN_1000_120a(0x131);
  FUN_1000_008e(0x40,0x6040,0x3134);
  *(undefined1 *)0x3136 = (char)*(undefined2 *)0x3134;
  *(uint *)0x3136 = *(uint *)0x3136 & 0xfff7 | 8;
  FUN_1000_0010(0x40,0x6040,(int)*(char *)0x3136);
  *(uint *)0x3136 = *(uint *)0x3136 & 0xfff7;
  FUN_1000_0010(0x40,0x6040,(int)*(char *)0x3136);
  FUN_1000_008e(0x80,0x6030,0x3134);
  *(undefined1 *)0x31be = (char)*(undefined2 *)0x3134;
  local_8 = 0;
  for (local_a = 0; (local_8 < 0 || ((local_8 < 1 && (local_a < 50000)))); local_a = local_a + 1) {
    FUN_1000_0a88();
    local_8 = local_8 + (uint)(0xfffe < local_a);
  }
  iVar1 = FUN_1000_0a3a();
  if (iVar1 == 1) {
    FUN_1000_120a(0x14b);
    FUN_1000_0d0a(1);
  }
  FUN_1000_120a(0x191);
  FUN_1000_120a(0x1cb);
  for (local_e = 0; local_e < *(int *)0x3132; local_e = local_e + 1) {
    local_6 = *(byte *)(local_e + 0xa22);
    for (local_14 = 0; local_14 < 8; local_14 = local_14 + 1) {
      if ((local_6 & 1) == 0) {
        *(uint *)0x3136 = *(uint *)0x3136 & 0xfffb;
      }
      else {
        *(uint *)0x3136 = *(uint *)0x3136 & 0xfffb | 4;
      }
      FUN_1000_0010(0x40,0x6040,(int)*(char *)0x3136);
      iVar1 = FUN_1000_097a();
      lVar2 = FUN_1000_2436(*(undefined2 *)0x5c,0,0x1158,0);
      if (lVar2 == 0) {
        FUN_1000_2334(0x31);
      }
      if ((iVar1 == 1) && (*(uint *)0x5c < 0xad70)) {
        FUN_1000_120a(0x1f9,*(undefined2 *)0x5c);
        FUN_1000_0d0a(1);
      }
      if ((iVar1 == 1) && (*(int *)0x5c == -0x5290)) {
        FUN_1000_120a(0x22f,*(undefined2 *)0x5c);
        FUN_1000_0d0a(1);
      }
      if ((iVar1 == 1) && (0xad70 < *(uint *)0x5c)) {
        FUN_1000_120a(0x263,*(undefined2 *)0x5c);
        FUN_1000_0d0a(1);
      }
      local_6 = (byte)((int)(uint)local_6 >> 1);
    }
  }
  return CONCAT11((char)((uint)*(int *)0x3132 >> 8),1);
}


// ---- FUN_1000_05d0 @ 1000:05d0

undefined2 __cdecl16near FUN_1000_05d0(int param_1,undefined2 param_2)

{
  char cVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  undefined2 local_6;
  
  local_6 = 0;
  while( true ) {
    cVar1 = FUN_1000_1c64(param_2);
    *(char *)(param_1 + local_6) = cVar1;
    if ((cVar1 == '\r') || (*(char *)(param_1 + local_6) == -1)) break;
    local_6 = local_6 + 1;
  }
  if (*(char *)(param_1 + local_6) == -1) {
    *(undefined1 *)(param_1 + local_6) = 0;
    uVar2 = 0xff;
  }
  else {
    *(undefined1 *)(param_1 + local_6) = 0;
    FUN_1000_1c64(param_2);
    uVar2 = 0;
  }
  return uVar2;
}


// ---- FUN_1000_065c @ 1000:065c

undefined2 __stdcall16far FUN_1000_065c(void)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  undefined2 unaff_DS;
  char *in_stack_00000002;
  undefined2 local_38;
  
  if (*in_stack_00000002 == ':') {
    FUN_1000_091e((int)in_stack_00000002[2]);
    FUN_1000_091e((int)in_stack_00000002[1]);
    FUN_1000_091e((int)in_stack_00000002[6]);
    FUN_1000_091e((int)in_stack_00000002[5]);
    pcVar1 = (code *)swi(0x37);
    uVar2 = (*pcVar1)();
    out(0xcd,uVar2);
    pcVar1 = (code *)swi(0x39);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x3d);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x37);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x39);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x3d);
    (*pcVar1)();
    FUN_1000_3816();
    pcVar1 = (code *)swi(0x39);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x3d);
    (*pcVar1)();
    FUN_1000_39c8();
    FUN_1000_091e((int)in_stack_00000002[4]);
    pcVar1 = (code *)swi(0x37);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x39);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x3d);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x37);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  return CONCAT11(*in_stack_00000002 >> 7,0xfe);
}


// ---- FUN_1000_091e @ 1000:091e

int __cdecl16near FUN_1000_091e(char param_1)

{
  undefined2 unaff_DS;
  int local_6;
  
  local_6 = 0;
  while( true ) {
    if (local_6 == 0x10) {
      FUN_1000_120a(0x2a6);
      return -1;
    }
    if (param_1 == *(char *)(local_6 + 0x296)) break;
    local_6 = local_6 + 1;
  }
  return local_6;
}


// ---- FUN_1000_097a @ 1000:097a

undefined2 __cdecl16near FUN_1000_097a(void)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  uint local_8;
  int local_6;
  
  *(uint *)0x31be = *(uint *)0x31be & 0xfffe | 1;
  FUN_1000_0010(0x80,0x6030,*(undefined1 *)0x31be);
  local_6 = 0;
  for (local_8 = 0; (local_6 < 0 || ((local_6 < 1 && (local_8 < 2)))); local_8 = local_8 + 1) {
    FUN_1000_0a88();
    local_6 = local_6 + (uint)(0xfffe < local_8);
  }
  *(uint *)0x31be = *(uint *)0x31be & 0xfffe;
  FUN_1000_0010(0x80,0x6030,*(undefined1 *)0x31be);
  local_6 = 0;
  for (local_8 = 0; (local_6 < 0 || ((local_6 < 1 && (local_8 < 2)))); local_8 = local_8 + 1) {
    FUN_1000_0a88();
    local_6 = local_6 + (uint)(0xfffe < local_8);
  }
  *(int *)0x5c = *(int *)0x5c + 1;
  uVar1 = FUN_1000_0a3a();
  return uVar1;
}


// ---- FUN_1000_0a3a @ 1000:0a3a

bool __cdecl16near FUN_1000_0a3a(void)

{
  undefined2 unaff_DS;
  undefined1 local_6 [4];
  
  FUN_1000_008e(0x20,0x6040,local_6);
  *(undefined1 *)0xa20 = local_6[0];
  return (*(uint *)0xa20 >> 5 & 1) == 1;
}


// ---- FUN_1000_0a88 @ 1000:0a88

void __cdecl16near FUN_1000_0a88(void)

{
  int iVar1;
  uint uVar2;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte local_8 [2];
  uint local_6;
  
  local_6 = 0xffff;
  local_8[0] = FUN_1000_2318(0x61,(uint)(in_NT & 1) * 0x4000 |
                                  (uint)SBORROW2((int)&stack0xfffe,6) * 0x800 |
                                  (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 |
                                  (uint)((int)local_8 < 0) * 0x80 |
                                  (uint)(&stack0x0000 == (undefined1 *)0x8) * 0x40 |
                                  (uint)(in_AF & 1) * 0x10 |
                                  (uint)((POPCOUNT((uint)local_8 & 0xff) & 1U) == 0) * 4 |
                                  (uint)(&stack0xfffe < (undefined1 *)0x6));
  FUN_1000_2326(0x61,local_8[0] & 0xfe);
  FUN_1000_2326(0x43,0xb0);
  FUN_1000_2326(0x42,0xff);
  FUN_1000_2326(0x42,0xff);
  FUN_1000_2326(0x61,local_8[0] | 1);
  for (; 0xfffc < local_6; local_6 = local_6 | uVar2) {
    iVar1 = FUN_1000_2318(0x42);
    local_6 = iVar1 << 8;
    uVar2 = FUN_1000_2318(0x42);
  }
  FUN_1000_2326(0x61,local_8[0]);
  return;
}


// ---- entry @ 1000:0b3c

/* WARNING: Stack frame is not setup normally: Input value of stackpointer is not used */
/* WARNING: This function may have set the stack pointer */

void __cdecl16far entry(void)

{
  undefined1 *puVar1;
  code *pcVar2;
  code *pcVar3;
  undefined2 uVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined2 *puVar10;
  undefined1 *puVar11;
  uint uVar12;
  undefined1 *puVar13;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  
  puVar6 = (undefined1 *)0x1400;
  pcVar3 = (code *)swi(0x21);
  uVar4 = (*pcVar3)();
  if ((byte)uVar4 < 2) {
    *(undefined2 *)(puVar6 + -2) = unaff_ES;
    *(undefined2 *)(puVar6 + -4) = 0;
    return;
  }
  uVar12 = *(int *)0x2 + 0xe9a5;
  if (0xfff < uVar12) {
    uVar12 = 0x1000;
  }
  puVar7 = puVar6 + 0x31ce;
  puVar13 = puVar6 + 0x31ce;
  if ((undefined1 *)0xce31 < puVar6) {
    *(undefined2 *)(puVar6 + 0x31cc) = 0x165b;
    unaff_DS = *(undefined2 *)(puVar6 + 0x31cc);
    *(undefined2 *)(puVar6 + 0x31cc) = 0xb6a;
    FUN_1000_0dd4();
    *(undefined2 *)(puVar6 + 0x31cc) = 0;
    *(undefined2 *)(puVar6 + 0x31ca) = 0xb70;
    FUN_1000_1067();
    pcVar3 = (code *)swi(0x21);
    uVar4 = (*pcVar3)();
    puVar13 = puVar7;
  }
  DAT_165b_031c = CONCAT11((char)uVar4,(char)((uint)uVar4 >> 8));
  DAT_165b_02dc = uVar12 * 0x10 + -1;
  DAT_165b_02de = 0x165b;
  puVar8 = (undefined1 *)((uint)puVar13 & 0xfffe);
  DAT_165b_02e8 = puVar8 + -2;
  DAT_165b_02e2 = puVar8;
  DAT_165b_031e = uVar4;
  *(undefined2 *)(puVar8 + -2) = 0xfffe;
  puVar9 = puVar8 + -4;
  DAT_165b_02e4 = puVar8 + -4;
  DAT_165b_02e6 = puVar8 + -4;
  DAT_165b_02d8 = puVar8 + -4;
  *(undefined2 *)(puVar8 + -4) = 1;
  *(int *)0x2 = uVar12 + 0x165b;
  pcVar3 = (code *)swi(0x21);
  (*pcVar3)();
  DAT_165b_031a = unaff_DS;
  *(undefined2 *)(puVar9 + -2) = 0x165b;
  uVar4 = *(undefined2 *)(puVar9 + -2);
  puVar13 = (undefined1 *)0xa04;
  for (iVar5 = 0x27cc; iVar5 != 0; iVar5 = iVar5 + -1) {
    puVar1 = puVar13;
    puVar13 = puVar13 + 1;
    *puVar1 = 0;
  }
  *(undefined2 *)(puVar9 + -2) = 0x165b;
  pcVar2 = (code *)*(int *)0x7ee;
  if (pcVar2 != (code *)0x0) {
    puVar10 = (undefined2 *)(puVar9 + -2);
    puVar9 = puVar9 + -2;
    *puVar10 = 0xbdd;
    (*pcVar2)();
  }
  *(undefined2 *)(puVar9 + -2) = 0xbe0;
  FUN_1000_0fbe();
  puVar11 = puVar9 + -2;
  *(undefined2 *)(puVar9 + -2) = 0xbe3;
  FUN_1000_0e34();
  *(undefined2 *)(puVar11 + -2) = 0xbe8;
  FUN_1000_0c38();
  *(undefined2 *)(puVar11 + -2) = 0x165b;
  uVar4 = *(undefined2 *)(puVar11 + -2);
  *(undefined2 *)(puVar11 + -2) = *(undefined2 *)0x33e;
  *(undefined2 *)(puVar11 + -4) = *(undefined2 *)0x33c;
  *(undefined2 *)(puVar11 + -6) = *(undefined2 *)0x33a;
  *(undefined2 *)(puVar11 + -8) = 0xbf9;
  uVar4 = FUN_1000_0230();
  *(undefined2 *)(puVar11 + -8) = uVar4;
  *(undefined2 *)(puVar11 + -10) = 0xbfd;
  FUN_1000_0d0a();
  return;
}


// ---- FUN_1000_0bfd @ 1000:0bfd

void __cdecl16near FUN_1000_0bfd(void)

{
  return;
}


// ---- FUN_1000_0c0d @ 1000:0c0d

void FUN_1000_0c0d(void)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  code *pcVar4;
  undefined2 uVar5;
  int iVar6;
  uint extraout_DX;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  undefined2 unaff_ES;
  undefined2 unaff_SS;
  bool bVar10;
  undefined2 in_stack_00000000;
  
  uVar5 = uRam00010c36;
  FUN_1000_1116();
  FUN_1000_0dd4();
  FUN_1000_1067();
  if (*(int *)0x7f0 == -0x292a) {
    (*(code *)*(undefined2 *)0x7f4)();
  }
  (*(code *)*(undefined2 *)0x2da)(0xff);
  pcVar4 = (code *)swi(0x21);
  (*pcVar4)();
  *(undefined2 *)0x306 = in_stack_00000000;
  *(undefined2 *)0x308 = unaff_ES;
  pcVar4 = (code *)swi(0x21);
  (*pcVar4)();
  if (*(int *)0x7fe != 0) {
    *(undefined2 *)0x800 = 0x1000;
    *(undefined2 *)0x808 = 0x1000;
    bVar10 = false;
    (*(code *)*(undefined2 *)0x7fe)();
    if (bVar10) {
      FUN_1000_0df4();
      return;
    }
    (*(code *)*(undefined2 *)0x7fe)();
  }
  iVar7 = *(int *)0x2c;
  if (iVar7 != 0) {
    pbVar9 = (byte *)0x0;
    do {
      if (*pbVar9 == 0) break;
      iVar6 = 0xd;
      pbVar8 = (byte *)0x2f8;
      bVar10 = false;
      do {
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pbVar3 = pbVar9;
        pbVar9 = pbVar9 + 1;
        pbVar1 = pbVar8;
        pbVar8 = pbVar8 + 1;
        bVar10 = *pbVar1 == *pbVar3;
      } while (bVar10);
      if (bVar10) {
        pbVar8 = (byte *)0x326;
        goto LAB_1000_0cbe;
      }
      iVar6 = 0x7fff;
      bVar10 = true;
      do {
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pbVar1 = pbVar9;
        pbVar9 = pbVar9 + 1;
        bVar10 = *pbVar1 == 0;
      } while (!bVar10);
    } while (bVar10);
  }
LAB_1000_0cd2:
  iVar7 = 4;
  do {
    bVar10 = false;
    *(byte *)(iVar7 + 0x326) = *(byte *)(iVar7 + 0x326) & 0xbf;
    pcVar4 = (code *)swi(0x21);
    (*pcVar4)();
    if ((!bVar10) && ((extraout_DX & 0x80) != 0)) {
      *(byte *)(iVar7 + 0x326) = *(byte *)(iVar7 + 0x326) | 0x40;
    }
    iVar7 = iVar7 + -1;
  } while (-1 < iVar7);
  FUN_1000_0dc0();
  FUN_1000_0db1();
  FUN_1000_0dc0();
  return;
LAB_1000_0cbe:
  pbVar1 = pbVar9;
  pbVar2 = pbVar9 + 1;
  if (*pbVar1 < 0x41) goto LAB_1000_0cd2;
  pbVar9 = pbVar9 + 2;
  if (*pbVar2 < 0x41) goto LAB_1000_0cd2;
  pbVar3 = pbVar8;
  pbVar8 = pbVar8 + 1;
  *pbVar3 = *pbVar2 + 0xbf | (*pbVar1 + 0xbf) * '\x10';
  goto LAB_1000_0cbe;
}


// ---- FUN_1000_0c38 @ 1000:0c38

void __cdecl16near FUN_1000_0c38(void)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  code *pcVar4;
  int iVar5;
  uint extraout_DX;
  undefined2 in_BX;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  undefined2 unaff_ES;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  bool bVar9;
  
  pcVar4 = (code *)swi(0x21);
  (*pcVar4)();
  *(undefined2 *)0x306 = in_BX;
  *(undefined2 *)0x308 = unaff_ES;
  pcVar4 = (code *)swi(0x21);
  (*pcVar4)();
  if (*(int *)0x7fe != 0) {
    *(undefined2 *)0x800 = 0x1000;
    *(undefined2 *)0x808 = 0x1000;
    bVar9 = false;
    (*(code *)*(undefined2 *)0x7fe)();
    if (bVar9) {
      FUN_1000_0df4();
      return;
    }
    (*(code *)*(undefined2 *)0x7fe)();
  }
  iVar6 = *(int *)0x2c;
  if (iVar6 != 0) {
    pbVar8 = (byte *)0x0;
    do {
      if (*pbVar8 == 0) break;
      iVar5 = 0xd;
      pbVar7 = (byte *)0x2f8;
      bVar9 = false;
      do {
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pbVar3 = pbVar8;
        pbVar8 = pbVar8 + 1;
        pbVar1 = pbVar7;
        pbVar7 = pbVar7 + 1;
        bVar9 = *pbVar1 == *pbVar3;
      } while (bVar9);
      if (bVar9) {
        pbVar7 = (byte *)0x326;
        goto LAB_1000_0cbe;
      }
      iVar5 = 0x7fff;
      bVar9 = true;
      do {
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pbVar1 = pbVar8;
        pbVar8 = pbVar8 + 1;
        bVar9 = *pbVar1 == 0;
      } while (!bVar9);
    } while (bVar9);
  }
LAB_1000_0cd2:
  iVar6 = 4;
  do {
    bVar9 = false;
    *(byte *)(iVar6 + 0x326) = *(byte *)(iVar6 + 0x326) & 0xbf;
    pcVar4 = (code *)swi(0x21);
    (*pcVar4)();
    if ((!bVar9) && ((extraout_DX & 0x80) != 0)) {
      *(byte *)(iVar6 + 0x326) = *(byte *)(iVar6 + 0x326) | 0x40;
    }
    iVar6 = iVar6 + -1;
  } while (-1 < iVar6);
  FUN_1000_0dc0();
  FUN_1000_0db1();
  FUN_1000_0dc0();
  return;
LAB_1000_0cbe:
  pbVar1 = pbVar8;
  pbVar2 = pbVar8 + 1;
  if (*pbVar1 < 0x41) goto LAB_1000_0cd2;
  pbVar8 = pbVar8 + 2;
  if (*pbVar2 < 0x41) goto LAB_1000_0cd2;
  pbVar3 = pbVar7;
  pbVar7 = pbVar7 + 1;
  *pbVar3 = *pbVar2 + 0xbf | (*pbVar1 + 0xbf) * '\x10';
  goto LAB_1000_0cbe;
}


// ---- FUN_1000_0d0a @ 1000:0d0a

void __cdecl16near FUN_1000_0d0a(void)

{
  FUN_1000_0d2b();
  return;
}


// ---- FUN_1000_0d11 @ 1000:0d11

void FUN_1000_0d11(void)

{
  FUN_1000_0d2b();
  return;
}


// ---- FUN_1000_0d2b @ 1000:0d2b

void __cdecl16near FUN_1000_0d2b(void)

{
  code *pcVar1;
  int iVar2;
  undefined2 in_CX;
  char cVar3;
  int unaff_BP;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  
  cVar3 = (char)((uint)in_CX >> 8);
  *(char *)0x34d = cVar3;
  if ((char)in_CX == '\0') {
    FUN_1000_0db1();
    FUN_1000_0dc0();
    FUN_1000_0db1();
    if (*(int *)0x7f0 == -0x292a) {
      (*(code *)*(undefined2 *)0x7f6)();
    }
  }
  FUN_1000_0db1();
  FUN_1000_0dc0();
  iVar2 = FUN_1000_0e12();
  if (((iVar2 != 0) && (cVar3 == '\0')) && (*(int *)(unaff_BP + 4) == 0)) {
    *(undefined2 *)(unaff_BP + 4) = 0xff;
  }
  FUN_1000_0d98();
  if (cVar3 == '\0') {
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
  }
  return;
}


// ---- FUN_1000_0d98 @ 1000:0d98

void __cdecl16near FUN_1000_0d98(void)

{
  code *pcVar1;
  undefined2 unaff_DS;
  
  if (*(int *)0x800 != 0) {
    (*(code *)*(undefined2 *)0x7fe)(0x1000);
  }
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  return;
}


// ---- FUN_1000_0db1 @ 1000:0db1

void __cdecl16near FUN_1000_0db1(void)

{
  int *unaff_SI;
  int *unaff_DI;
  undefined2 unaff_DS;
  
  while (unaff_SI < unaff_DI) {
    unaff_DI = unaff_DI + -1;
    if ((code *)*unaff_DI != (code *)0x0) {
      (*(code *)*unaff_DI)();
    }
  }
  return;
}


// ---- FUN_1000_0dc0 @ 1000:0dc0

void __cdecl16near FUN_1000_0dc0(void)

{
  int *piVar1;
  int *unaff_SI;
  int *unaff_DI;
  int *piVar2;
  undefined2 unaff_DS;
  
  while (unaff_SI < unaff_DI) {
    piVar2 = unaff_DI + -2;
    piVar1 = unaff_DI + -1;
    unaff_DI = piVar2;
    if (*piVar2 != 0 || *piVar1 != 0) {
      (*(code *)*piVar2)(0x1000);
    }
  }
  return;
}


// ---- FUN_1000_0dd4 @ 1000:0dd4

void __cdecl16near FUN_1000_0dd4(void)

{
  undefined2 unaff_DS;
  
  FUN_1000_1067(0xfc);
  if (*(int *)0x34e != 0) {
    (*(code *)*(undefined2 *)0x34e)();
  }
  FUN_1000_1067(0xff);
  return;
}


// ---- FUN_1000_0df4 @ 1000:0df4

void FUN_1000_0df4(void)

{
  FUN_1000_0c0d();
  return;
}


// ---- FUN_1000_0dfa @ 1000:0dfa

void FUN_1000_0dfa(void)

{
  undefined1 *in_AX;
  undefined2 unaff_DS;
  code *in_stack_00000000;
  
  if ((in_AX <= &stack0x0002) && ((undefined1 *)*(uint *)0x352 <= &stack0x0002 + -(int)in_AX)) {
                    /* WARNING: Could not recover jumptable at 0x00010e09. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*in_stack_00000000)();
    return;
  }
  FUN_1000_0c0d();
  return;
}


// ---- FUN_1000_0e12 @ 1000:0e12

uint __cdecl16near FUN_1000_0e12(void)

{
  byte *pbVar1;
  byte bVar3;
  uint uVar2;
  int iVar4;
  byte *pbVar5;
  undefined2 unaff_DS;
  
  pbVar5 = (byte *)0x0;
  iVar4 = 0x42;
  bVar3 = 0;
  do {
    pbVar1 = pbVar5;
    pbVar5 = pbVar5 + 1;
    bVar3 = bVar3 ^ *pbVar1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  uVar2 = CONCAT11(bVar3,*pbVar1) ^ 0x5500;
  if (bVar3 != 0x55) {
    FUN_1000_0dd4();
    FUN_1000_1067(1);
    uVar2 = 1;
  }
  return uVar2;
}


// ---- FUN_1000_0e34 @ 1000:0e34

/* WARNING (jumptable): Unable to track spacebase fully for stack */
/* WARNING: Unable to track spacebase fully for stack */

void FUN_1000_0e34(void)

{
  undefined2 uVar1;
  char *pcVar2;
  char cVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined2 *puVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  int iVar12;
  undefined2 uVar13;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined2 in_stack_00000000;
  
  *(undefined2 *)0x354 = in_stack_00000000;
  uVar7 = 1;
  if ((char)*(undefined2 *)0x31e != '\x02') {
    uVar13 = *(undefined2 *)0x2c;
    *(undefined2 *)0x342 = uVar13;
    iVar5 = -0x8000;
    pcVar10 = (char *)0x0;
LAB_1000_0e57:
    do {
      pcVar11 = pcVar10;
      if (iVar5 != 0) {
        iVar5 = iVar5 + -1;
        pcVar4 = pcVar10;
        pcVar10 = pcVar10 + 1;
        pcVar11 = pcVar10;
        if (*pcVar4 != '\0') goto LAB_1000_0e57;
      }
      pcVar10 = pcVar11 + 1;
    } while (*pcVar11 != '\0');
    pcVar11 = pcVar11 + 3;
    *(undefined2 *)0x340 = pcVar11;
    uVar7 = 0xffff;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      pcVar4 = pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (*pcVar4 != '\0');
    uVar7 = ~uVar7;
  }
  iVar5 = 1;
  pcVar10 = (char *)0x81;
  uVar13 = *(undefined2 *)0x31a;
LAB_1000_0e75:
  do {
    do {
      pcVar4 = pcVar10;
      pcVar10 = pcVar10 + 1;
      cVar3 = *pcVar4;
    } while (cVar3 == ' ');
  } while (cVar3 == '\t');
  if ((cVar3 != '\r') && (cVar3 != '\0')) {
    iVar5 = iVar5 + 1;
    do {
      pcVar10 = pcVar10 + -1;
LAB_1000_0e88:
      pcVar4 = pcVar10;
      pcVar10 = pcVar10 + 1;
      cVar3 = *pcVar4;
      if ((cVar3 == ' ') || (cVar3 == '\t')) goto LAB_1000_0e75;
      if ((cVar3 == '\r') || (cVar3 == '\0')) break;
      if (cVar3 == '\"') {
LAB_1000_0ec1:
        do {
          while( true ) {
            while( true ) {
              pcVar4 = pcVar10;
              pcVar10 = pcVar10 + 1;
              cVar3 = *pcVar4;
              if ((cVar3 == '\r') || (cVar3 == '\0')) goto LAB_1000_0ef1;
              if (cVar3 == '\"') goto LAB_1000_0e88;
              if (cVar3 == '\\') break;
              uVar7 = uVar7 + 1;
            }
            uVar6 = 0;
            do {
              pcVar11 = pcVar10;
              uVar6 = uVar6 + 1;
              pcVar10 = pcVar11 + 1;
            } while (*pcVar11 == '\\');
            if (*pcVar11 == '\"') break;
            uVar7 = uVar7 + uVar6;
            pcVar10 = pcVar11;
          }
          uVar7 = uVar7 + (uVar6 >> 1) + (uint)((uVar6 & 1) != 0);
        } while ((uVar6 & 1) != 0);
        goto LAB_1000_0e88;
      }
      if (cVar3 != '\\') {
        uVar7 = uVar7 + 1;
        goto LAB_1000_0e88;
      }
      uVar6 = 0;
      do {
        uVar6 = uVar6 + 1;
        pcVar4 = pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (*pcVar4 == '\\');
      if (*pcVar4 == '\"') {
        uVar7 = uVar7 + (uVar6 >> 1) + (uint)((uVar6 & 1) != 0);
        if ((uVar6 & 1) == 0) goto LAB_1000_0ec1;
        goto LAB_1000_0e88;
      }
      uVar7 = uVar7 + uVar6;
    } while( true );
  }
LAB_1000_0ef1:
  *(int *)0x33a = iVar5;
  iVar12 = (iVar5 + 1) * 2;
  iVar5 = -(uVar7 + iVar5 + iVar12 + 1 & 0xfffe);
  *(undefined1 **)0x33c = &stack0x0002 + iVar5;
  pcVar11 = &stack0x0002 + iVar12 + iVar5;
  *(undefined2 *)(&stack0x0000 + iVar5) = unaff_SS;
  uVar13 = *(undefined2 *)(&stack0x0000 + iVar5);
  *(char **)(&stack0x0002 + iVar5) = pcVar11;
  puVar8 = (undefined2 *)(&stack0x0004 + iVar5);
  pcVar4 = (char *)*(undefined4 *)0x340;
  pcVar10 = (char *)pcVar4;
  do {
    pcVar2 = pcVar10;
    pcVar10 = pcVar10 + 1;
    cVar3 = *pcVar2;
    pcVar2 = pcVar11;
    pcVar11 = pcVar11 + 1;
    *pcVar2 = cVar3;
  } while (cVar3 != '\0');
  uVar1 = *(undefined2 *)0x31a;
  pcVar10 = (char *)0x81;
LAB_1000_0f2b:
  do {
    do {
      pcVar4 = pcVar10;
      pcVar10 = pcVar10 + 1;
      cVar3 = *pcVar4;
    } while (cVar3 == ' ');
  } while (cVar3 == '\t');
  if ((cVar3 == '\r') || (cVar3 == '\0')) {
LAB_1000_0fb4:
    *(undefined2 *)(&stack0x0000 + iVar5) = unaff_SS;
    uVar13 = *(undefined2 *)(&stack0x0000 + iVar5);
    *puVar8 = 0;
                    /* WARNING: Could not recover jumptable at 0x00010fba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*(undefined2 *)0x354)();
    return;
  }
  *puVar8 = pcVar11;
  puVar8 = puVar8 + 1;
  do {
    pcVar10 = pcVar10 + -1;
LAB_1000_0f42:
    pcVar4 = pcVar10;
    pcVar10 = pcVar10 + 1;
    cVar3 = *pcVar4;
    if ((cVar3 == ' ') || (cVar3 == '\t')) {
      pcVar4 = pcVar11;
      pcVar11 = pcVar11 + 1;
      *pcVar4 = '\0';
      goto LAB_1000_0f2b;
    }
    if ((cVar3 == '\r') || (cVar3 == '\0')) {
LAB_1000_0fb1:
      *pcVar11 = '\0';
      goto LAB_1000_0fb4;
    }
    pcVar9 = pcVar10;
    if (cVar3 == '\"') {
LAB_1000_0f7e:
      while( true ) {
        pcVar10 = pcVar9 + 1;
        cVar3 = *pcVar9;
        if ((cVar3 == '\r') || (cVar3 == '\0')) goto LAB_1000_0fb1;
        if (cVar3 == '\"') break;
        if (cVar3 == '\\') {
          uVar7 = 0;
          do {
            pcVar9 = pcVar10;
            uVar7 = uVar7 + 1;
            pcVar10 = pcVar9 + 1;
          } while (*pcVar9 == '\\');
          if (*pcVar9 == '\"') {
            for (uVar6 = uVar7 >> 1; uVar6 != 0; uVar6 = uVar6 - 1) {
              pcVar4 = pcVar11;
              pcVar11 = pcVar11 + 1;
              *pcVar4 = '\\';
            }
            if ((uVar7 & 1) == 0) break;
            pcVar4 = pcVar11;
            pcVar11 = pcVar11 + 1;
            *pcVar4 = '\"';
            pcVar9 = pcVar10;
          }
          else {
            for (; uVar7 != 0; uVar7 = uVar7 - 1) {
              pcVar4 = pcVar11;
              pcVar11 = pcVar11 + 1;
              *pcVar4 = '\\';
            }
          }
        }
        else {
          pcVar4 = pcVar11;
          pcVar11 = pcVar11 + 1;
          *pcVar4 = cVar3;
          pcVar9 = pcVar10;
        }
      }
      goto LAB_1000_0f42;
    }
    if (cVar3 != '\\') {
      pcVar4 = pcVar11;
      pcVar11 = pcVar11 + 1;
      *pcVar4 = cVar3;
      goto LAB_1000_0f42;
    }
    uVar7 = 0;
    do {
      uVar7 = uVar7 + 1;
      pcVar4 = pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (*pcVar4 == '\\');
    if (*pcVar4 == '\"') {
      for (uVar6 = uVar7 >> 1; uVar6 != 0; uVar6 = uVar6 - 1) {
        pcVar4 = pcVar11;
        pcVar11 = pcVar11 + 1;
        *pcVar4 = '\\';
      }
      pcVar9 = pcVar10;
      if ((uVar7 & 1) == 0) goto LAB_1000_0f7e;
      pcVar4 = pcVar11;
      pcVar11 = pcVar11 + 1;
      *pcVar4 = '\"';
      goto LAB_1000_0f42;
    }
    for (; uVar7 != 0; uVar7 = uVar7 - 1) {
      pcVar4 = pcVar11;
      pcVar11 = pcVar11 + 1;
      *pcVar4 = '\\';
    }
  } while( true );
}


// ---- FUN_1000_0fbe @ 1000:0fbe

void __cdecl16near FUN_1000_0fbe(void)

{
  int *piVar1;
  char *pcVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  undefined2 *puVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  char *pcVar11;
  int *piVar12;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  bool bVar13;
  
  iVar5 = *(int *)0x2c;
  iVar8 = 0;
  pcVar11 = (char *)0x0;
  iVar7 = -1;
  if (iVar5 != 0) {
    cVar4 = *(char *)0x0;
    while (cVar4 != '\0') {
      do {
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        pcVar2 = pcVar11;
        pcVar11 = pcVar11 + 1;
      } while (*pcVar2 != '\0');
      iVar8 = iVar8 + 1;
      pcVar2 = pcVar11;
      pcVar11 = pcVar11 + 1;
      cVar4 = *pcVar2;
    }
  }
  pcVar11 = (char *)FUN_1000_109c();
  puVar6 = (undefined2 *)FUN_1000_109c();
  *(undefined2 *)0x33e = puVar6;
  piVar9 = (int *)0x0;
  do {
    if (iVar8 == 0) {
      *puVar6 = 0;
      return;
    }
    bVar13 = *piVar9 == *(int *)0x2f8;
    if (bVar13) {
      piVar12 = (int *)0x2f8;
      iVar7 = 6;
      piVar10 = piVar9;
      do {
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        piVar3 = piVar12;
        piVar12 = piVar12 + 1;
        piVar1 = piVar10;
        piVar10 = piVar10 + 1;
        bVar13 = *piVar1 == *piVar3;
      } while (bVar13);
      if (!bVar13) goto LAB_1000_1028;
    }
    else {
LAB_1000_1028:
      *puVar6 = pcVar11;
      puVar6 = puVar6 + 1;
    }
    do {
      piVar1 = piVar9;
      piVar9 = (int *)((int)piVar9 + 1);
      iVar7 = *piVar1;
      pcVar2 = pcVar11;
      pcVar11 = pcVar11 + 1;
      *pcVar2 = (char)iVar7;
    } while ((char)iVar7 != '\0');
    iVar8 = iVar8 + -1;
  } while( true );
}


// ---- FUN_1000_103c @ 1000:103c

int * FUN_1000_103c(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined2 unaff_DS;
  
  piVar3 = (int *)0x820;
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


// ---- FUN_1000_1067 @ 1000:1067

void FUN_1000_1067(undefined2 param_1)

{
  char *pcVar1;
  code *pcVar2;
  char *pcVar3;
  int iVar4;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  
  pcVar3 = (char *)FUN_1000_103c(param_1);
  if (pcVar3 != (char *)0x0) {
    iVar4 = -1;
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar1 = pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (*pcVar1 != '\0');
    if (*(int *)0x7f0 == -0x292a) {
      (*(code *)*(undefined2 *)0x7f2)();
    }
    pcVar2 = (code *)swi(0x21);
    (*pcVar2)();
  }
  return;
}


// ---- FUN_1000_109c @ 1000:109c

void __cdecl16near FUN_1000_109c(void)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 unaff_DS;
  
  LOCK();
  uVar1 = *(undefined2 *)0x520;
  *(undefined2 *)0x520 = 0x400;
  UNLOCK();
  iVar2 = FUN_1000_3c6f();
  *(undefined2 *)0x520 = uVar1;
  if (iVar2 != 0) {
    return;
  }
  FUN_1000_0c0d();
  return;
}


// ---- FUN_1000_10c0 @ 1000:10c0

long __cdecl16near FUN_1000_10c0(void)

{
  uint in_DX;
  bool in_CF;
  
  if (!in_CF) {
    return (ulong)in_DX << 0x10;
  }
  FUN_1000_10e8();
  return -1;
}


// ---- FUN_1000_10c8 @ 1000:10c8

undefined1 __cdecl16near FUN_1000_10c8(void)

{
  undefined1 in_AL;
  bool in_CF;
  
  if (in_CF) {
    FUN_1000_10e8();
    return in_AL;
  }
  return 0;
}


// ---- FUN_1000_10d5 @ 1000:10d5

void __cdecl16near FUN_1000_10d5(void)

{
  bool in_CF;
  
  if (in_CF) {
    FUN_1000_10e8();
  }
  return;
}


// ---- FUN_1000_10e8 @ 1000:10e8

void __cdecl16near FUN_1000_10e8(void)

{
  byte bVar1;
  char cVar2;
  uint in_AX;
  undefined2 unaff_DS;
  
  bVar1 = (byte)in_AX;
  *(byte *)0x322 = bVar1;
  cVar2 = (char)(in_AX >> 8);
  if (cVar2 != '\0') goto LAB_1000_110c;
  if (*(byte *)0x31d < 3) {
LAB_1000_1102:
    if (0x13 < bVar1) {
LAB_1000_1106:
      in_AX = 0x13;
    }
  }
  else {
    if (0x21 < bVar1) goto LAB_1000_1106;
    if (bVar1 < 0x20) goto LAB_1000_1102;
    in_AX = 5;
  }
  cVar2 = *(char *)(ulong)((in_AX & 0xff) + 0x356);
LAB_1000_110c:
  *(int *)0x314 = (int)cVar2;
  return;
}


// ---- FUN_1000_1116 @ 1000:1116

void __cdecl16far FUN_1000_1116(void)

{
  return;
}


// ---- FUN_1000_1118 @ 1000:1118

undefined2 __cdecl16near FUN_1000_1118(int param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  undefined1 *local_10;
  char local_e;
  undefined1 uStack_d;
  undefined1 local_c [8];
  int local_4;
  
  uVar2 = 0xffff;
  if ((*(byte *)(param_1 + 6) & 0x40) != 0) {
    *(undefined1 *)(param_1 + 6) = 0;
    return 0xffff;
  }
  if ((*(byte *)(param_1 + 6) & 0x83) == 0) goto LAB_1000_11c2;
  uVar2 = FUN_1000_1660(param_1);
  local_4 = *(int *)(param_1 + 0xa4);
  FUN_1000_13cc(param_1);
  iVar1 = FUN_1000_1c82(*(undefined1 *)(param_1 + 7));
  if (-1 < iVar1) {
    if (local_4 == 0) goto LAB_1000_11c2;
    FUN_1000_2108(&local_e,0x36a);
    local_10 = local_c;
    if (local_e == '\\') {
      local_10 = &uStack_d;
    }
    else {
      FUN_1000_20c8(&local_e,0x36c);
    }
    FUN_1000_2198(local_4,local_10,10);
    iVar1 = FUN_1000_3d42(&local_e);
    if (iVar1 == 0) goto LAB_1000_11c2;
  }
  uVar2 = 0xffff;
LAB_1000_11c2:
  *(undefined1 *)(param_1 + 6) = 0;
  return uVar2;
}


// ---- FUN_1000_11ce @ 1000:11ce

undefined2 __cdecl16near FUN_1000_11ce(undefined2 param_1,undefined2 param_2,undefined2 param_3)

{
  int iVar1;
  undefined2 uVar2;
  
  iVar1 = FUN_1000_1c2a();
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_1000_1438(param_1,param_2,param_3,iVar1);
  }
  return uVar2;
}


// ---- FUN_1000_11f6 @ 1000:11f6

void __cdecl16near FUN_1000_11f6(undefined2 param_1,undefined2 param_2)

{
  FUN_1000_11ce(param_1,param_2,0);
  return;
}


// ---- FUN_1000_120a @ 1000:120a

undefined2 __cdecl16near FUN_1000_120a(undefined2 param_1)

{
  undefined2 uVar1;
  undefined2 uVar2;
  
  uVar1 = FUN_1000_1562(0x378);
  uVar2 = FUN_1000_1754(0x378,param_1,&stack0x0004);
  FUN_1000_15d3(uVar1,0x378);
  return uVar2;
}


// ---- FUN_1000_1246 @ 1000:1246

void __cdecl16near FUN_1000_1246(void)

{
  undefined2 unaff_DS;
  
  FUN_1000_16d6();
  if (*(char *)0x34d != '\0') {
    FUN_1000_229c();
  }
  return;
}


// ---- FUN_1000_1258 @ 1000:1258

uint __cdecl16near FUN_1000_1258(undefined2 *param_1)

{
  byte *pbVar1;
  byte bVar2;
  undefined2 uVar3;
  int iVar4;
  uint uVar5;
  undefined2 unaff_DS;
  
  bVar2 = *(byte *)(param_1 + 3);
  if (((bVar2 & 0x83) != 0) && ((bVar2 & 0x40) == 0)) {
    if ((bVar2 & 2) == 0) {
      *(byte *)(param_1 + 3) = bVar2 | 1;
      if (((bVar2 & 0xc) == 0) && ((*(byte *)(param_1 + 0x50) & 1) == 0)) {
        FUN_1000_13f6(param_1);
      }
      uVar3 = param_1[2];
      *param_1 = uVar3;
      uVar5 = (uint)*(byte *)((int)param_1 + 7);
      iVar4 = FUN_1000_1ee0(uVar5,uVar3,param_1[0x51]);
      if (iVar4 == 0) {
        *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) | 0x10;
      }
      else {
        if (iVar4 != -1) {
          if (((*(byte *)(uVar5 + 0x326) & 0x82) == 0x82) && ((*(byte *)(param_1 + 3) & 0x82) == 0))
          {
            pbVar1 = (byte *)(param_1 + 0x50);
            *pbVar1 = *pbVar1 | 0x20;
          }
          param_1[1] = iVar4 + -1;
          bVar2 = *(byte *)*param_1;
          *param_1 = (byte *)*param_1 + 1;
          return (uint)bVar2;
        }
        *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) | 0x20;
      }
      param_1[1] = 0;
    }
    else {
      *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) | 0x20;
    }
  }
  return 0xffff;
}


// ---- FUN_1000_12ec @ 1000:12ec

uint __cdecl16near FUN_1000_12ec(uint param_1,int *param_2)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int unaff_DI;
  undefined2 unaff_DS;
  
  piVar1 = param_2;
  bVar2 = *(byte *)(param_2 + 3);
  if (((bVar2 & 0x82) != 0) && ((bVar2 & 0x40) == 0)) {
    param_2[1] = 0;
    if ((bVar2 & 1) != 0) {
      if ((bVar2 & 0x10) == 0) goto LAB_1000_1363;
      *param_2 = param_2[2];
      bVar2 = bVar2 & 0xfe;
    }
    *(byte *)(param_2 + 3) = bVar2 & 0xef | 2;
    uVar4 = (uint)*(byte *)((int)param_2 + 7);
    if (((bVar2 & 8) == 0) &&
       (((bVar2 & 4) != 0 ||
        (((*(byte *)(param_2 + 0x50) & 1) == 0 &&
         (((((param_2 == (int *)0x378 || (param_2 == (int *)0x380)) || (param_2 == (int *)0x390)) &&
           ((*(byte *)(uVar4 + 0x326) & 0x40) != 0)) ||
          (FUN_1000_13f6(param_2), (*(byte *)(piVar1 + 3) & 8) == 0)))))))) {
      iVar3 = FUN_1000_3afe(uVar4,&param_1,1);
      unaff_DI = 1;
    }
    else {
      iVar3 = *piVar1 - piVar1[2];
      *piVar1 = piVar1[2] + 1;
      piVar1[1] = piVar1[0x51] + -1;
      if (iVar3 == 0) {
        iVar3 = 0;
        unaff_DI = 0;
        if ((*(byte *)(uVar4 + 0x326) & 0x20) != 0) {
          FUN_1000_1ca2(uVar4,0,0,2);
          iVar3 = 0;
          unaff_DI = 0;
        }
      }
      else {
        iVar3 = FUN_1000_3afe(uVar4,piVar1[2],iVar3,iVar3);
      }
      *(undefined1 *)piVar1[2] = (char)param_1;
    }
    if (iVar3 == unaff_DI) {
      return param_1 & 0xff;
    }
  }
LAB_1000_1363:
  *(byte *)(piVar1 + 3) = *(byte *)(piVar1 + 3) | 0x20;
  return 0xffff;
}


// ---- FUN_1000_13cc @ 1000:13cc

void __cdecl16near FUN_1000_13cc(undefined2 *param_1)

{
  undefined2 unaff_DS;
  
  if (((*(byte *)(param_1 + 3) & 0x83) != 0) && ((*(byte *)(param_1 + 3) & 8) != 0)) {
    FUN_1000_3c4e(param_1[2]);
    *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) & 0xf7;
    param_1[2] = 0;
    *param_1 = 0;
    param_1[1] = 0;
  }
  return;
}


// ---- FUN_1000_13f6 @ 1000:13f6

void __cdecl16near FUN_1000_13f6(int *param_1)

{
  int iVar1;
  undefined2 unaff_DS;
  
  iVar1 = FUN_1000_3c6f(0x200);
  if (iVar1 == 0) {
    *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) | 4;
    param_1[0x51] = 1;
    iVar1 = (int)param_1 + 0xa1;
  }
  else {
    *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) | 8;
    param_1[0x51] = 0x200;
  }
  *param_1 = iVar1;
  param_1[2] = iVar1;
  param_1[1] = 0;
  return;
}


// ---- FUN_1000_1438 @ 1000:1438

undefined2 * __cdecl16near
FUN_1000_1438(undefined2 param_1,byte *param_2,undefined2 param_3,undefined2 *param_4)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  undefined2 unaff_DS;
  undefined1 local_c;
  byte local_6;
  undefined1 local_4;
  
  local_6 = *(byte *)0x51c;
  bVar3 = false;
  bVar1 = *param_2;
  if (bVar1 == 0x77) {
    uVar5 = 0x301;
  }
  else {
    if (0x77 < bVar1) {
      return (undefined2 *)0x0;
    }
    if (bVar1 != 0x61) {
      if (bVar1 != 0x72) {
        return (undefined2 *)0x0;
      }
      uVar5 = 0;
      local_4 = 1;
      goto LAB_1000_146c;
    }
    uVar5 = 0x109;
  }
  local_4 = 2;
LAB_1000_146c:
  bVar2 = true;
LAB_1000_1471:
  param_2 = param_2 + 1;
  if ((*param_2 == 0) || (!bVar2)) {
    iVar4 = FUN_1000_1d24(param_1,uVar5,param_3,0x1a4);
    if (iVar4 < 0) {
      return (undefined2 *)0x0;
    }
    *(int *)0x36e = *(int *)0x36e + 1;
    *(undefined1 *)(param_4 + 3) = local_4;
    *param_4 = 0;
    param_4[2] = 0;
    local_c = (undefined1)iVar4;
    *(undefined1 *)((int)param_4 + 7) = local_c;
    *(byte *)(param_4 + 0x50) = local_6;
    param_4[1] = 0;
    param_4[0x52] = 0;
    return param_4;
  }
  bVar1 = *param_2;
  if (bVar1 == 0x74) {
    if ((uVar5 & 0xc000) == 0) {
      uVar5 = uVar5 | 0x4000;
      goto LAB_1000_1471;
    }
  }
  else {
    if (0x74 < bVar1) goto LAB_1000_14a2;
    if (bVar1 == 0x2b) {
      if ((uVar5 & 2) != 0) goto LAB_1000_14a2;
      uVar5 = uVar5 & 0xfffe | 2;
      local_4 = 0x80;
      goto LAB_1000_1471;
    }
    if (bVar1 == 0x62) {
      if ((uVar5 & 0xc000) == 0) {
        uVar5 = uVar5 | 0x8000;
        goto LAB_1000_1471;
      }
    }
    else {
      if (bVar1 != 99) {
        if ((bVar1 != 0x6e) || (bVar3)) goto LAB_1000_14a2;
        bVar3 = true;
        local_6 = local_6 & 0xbf;
        goto LAB_1000_1471;
      }
      if (!bVar3) {
        bVar3 = true;
        local_6 = local_6 | 0x40;
        goto LAB_1000_1471;
      }
    }
  }
LAB_1000_14a2:
  bVar2 = false;
  goto LAB_1000_1471;
}


// ---- FUN_1000_1562 @ 1000:1562

undefined2 __cdecl16near FUN_1000_1562(int *param_1)

{
  undefined2 uVar1;
  int iVar2;
  int *piVar3;
  undefined2 unaff_DS;
  
  piVar3 = (int *)0x4b2;
  if ((((param_1 == (int *)0x378) || (piVar3 = (int *)0x4b4, param_1 == (int *)0x380)) ||
      (piVar3 = (int *)0x4b6, param_1 == (int *)0x390)) &&
     (((*(byte *)(param_1 + 3) & 0xc) == 0 && ((*(byte *)(param_1 + 0x50) & 1) == 0)))) {
    iVar2 = *piVar3;
    if (iVar2 == 0) {
      iVar2 = FUN_1000_3c6f(0x200);
      if (iVar2 == 0) goto LAB_1000_15cd;
      *piVar3 = iVar2;
    }
    param_1[2] = iVar2;
    *param_1 = iVar2;
    param_1[1] = 0x200;
    param_1[0x51] = 0x200;
    *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) | 2;
    *(byte *)(param_1 + 0x50) = 0x11;
    uVar1 = 1;
  }
  else {
LAB_1000_15cd:
    uVar1 = 0;
  }
  return uVar1;
}


// ---- FUN_1000_15d3 @ 1000:15d3

void __cdecl16near FUN_1000_15d3(int param_1,undefined2 *param_2)

{
  undefined2 unaff_DS;
  
  if (((*(byte *)(param_2 + 0x50) & 0x10) != 0) &&
     ((*(byte *)(*(byte *)((int)param_2 + 7) + 0x326) & 0x40) != 0)) {
    FUN_1000_1660(param_2);
    if (param_1 != 0) {
      *(byte *)(param_2 + 0x50) = 0;
      param_2[0x51] = 0;
      *param_2 = 0;
      param_2[2] = 0;
    }
  }
  return;
}


// ---- FUN_1000_1612 @ 1000:1612

int __cdecl16near FUN_1000_1612(int param_1)

{
  int iVar1;
  undefined2 unaff_DS;
  
  if (param_1 == 0) {
    iVar1 = FUN_1000_16de(0);
  }
  else {
    iVar1 = FUN_1000_1660(param_1);
    if (iVar1 == 0) {
      iVar1 = 0;
      if ((*(byte *)(param_1 + 0xa0) & 0x40) != 0) {
        iVar1 = FUN_1000_22c0(*(undefined1 *)(param_1 + 7));
        iVar1 = -(uint)(iVar1 != 0);
      }
    }
    else {
      iVar1 = -1;
    }
  }
  return iVar1;
}


// ---- FUN_1000_1660 @ 1000:1660

undefined2 __cdecl16near FUN_1000_1660(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 unaff_DS;
  
  uVar3 = 0;
  if (((*(byte *)(param_1 + 3) & 3) == 2) &&
     (((*(byte *)(param_1 + 3) & 8) != 0 || ((*(byte *)(param_1 + 0x50) & 1) != 0)))) {
    iVar1 = *param_1 - param_1[2];
    if (0 < iVar1) {
      iVar2 = FUN_1000_3afe(*(undefined1 *)((int)param_1 + 7),param_1[2],iVar1);
      if (iVar2 == iVar1) {
        if ((*(byte *)(param_1 + 3) & 0x80) != 0) {
          *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) & 0xfd;
        }
      }
      else {
        *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) | 0x20;
        uVar3 = 0xffff;
      }
    }
  }
  *param_1 = param_1[2];
  param_1[1] = 0;
  return uVar3;
}


// ---- FUN_1000_16d6 @ 1000:16d6

void __cdecl16near FUN_1000_16d6(void)

{
  FUN_1000_16de(1);
  return;
}


// ---- FUN_1000_16de @ 1000:16de

int FUN_1000_16de(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined2 unaff_DS;
  int local_4;
  
  iVar3 = 0;
  local_4 = 0;
  for (uVar2 = 0x370; uVar2 <= *(uint *)0x4b0; uVar2 = uVar2 + 8) {
    if ((param_1 == 1) && ((*(byte *)(uVar2 + 6) & 0x83) != 0)) {
      iVar1 = FUN_1000_1612(uVar2);
      if (iVar1 != -1) {
        iVar3 = iVar3 + 1;
      }
    }
    else if ((param_1 == 0) &&
            (((*(byte *)(uVar2 + 6) & 2) != 0 && (iVar1 = FUN_1000_1612(uVar2), iVar1 == -1)))) {
      local_4 = -1;
    }
  }
  if (param_1 == 1) {
    local_4 = iVar3;
  }
  return local_4;
}


// ---- FUN_1000_1754 @ 1000:1754

undefined2 __cdecl16near FUN_1000_1754(undefined2 param_1,char *param_2)

{
  byte bVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  
  FUN_1000_0dfa();
  if (*param_2 == '\0') {
    return 0;
  }
  bVar1 = *param_2 - 0x20;
  if (bVar1 < 0x59) {
    bVar1 = *(byte *)(ulong)(bVar1 + 0x4b8) & 0xf;
  }
  else {
    bVar1 = 0;
  }
                    /* WARNING: Could not emulate address calculation at 0x00011798 */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*(code *)*(undefined2 *)
                     ((char)(*(byte *)(ulong)((byte)(bVar1 * '\b') + 0x4b8) >> 4) * 2 + 0x1744))();
  return uVar2;
}


// ---- FUN_1000_1c2a @ 1000:1c2a

undefined2 * __cdecl16near FUN_1000_1c2a(void)

{
  undefined2 *puVar1;
  undefined2 unaff_DS;
  
  puVar1 = (undefined2 *)0x370;
  while( true ) {
    if ((undefined2 *)*(undefined2 *)0x4b0 < puVar1) {
      return (undefined2 *)0x0;
    }
    if ((*(byte *)(puVar1 + 3) & 0x83) == 0) break;
    puVar1 = puVar1 + 4;
  }
  *(undefined1 *)(puVar1 + 3) = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = 0;
  *(undefined1 *)((int)puVar1 + 7) = 0xff;
  return puVar1;
}


// ---- FUN_1000_1c5c @ 1000:1c5c

undefined2 __cdecl16near FUN_1000_1c5c(void)

{
  int *piVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 extraout_AH;
  undefined2 unaff_DS;
  
  piVar1 = (int *)0x372;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 < 0) {
    uVar2 = FUN_1000_1258(0x370);
    uVar3 = extraout_AH;
  }
  else {
    *(int *)0x370 = *(int *)0x370 + 1;
    uVar2 = *(undefined1 *)(*(int *)0x370 + -1);
    uVar3 = 0;
  }
  return CONCAT11(uVar3,uVar2);
}


// ---- FUN_1000_1c64 @ 1000:1c64

undefined2 __cdecl16near FUN_1000_1c64(int *param_1)

{
  int *piVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 extraout_AH;
  undefined2 unaff_DS;
  
  piVar1 = param_1 + 1;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 < 0) {
    uVar2 = FUN_1000_1258(param_1);
    uVar3 = extraout_AH;
  }
  else {
    *param_1 = *param_1 + 1;
    uVar2 = *(undefined1 *)(*param_1 + -1);
    uVar3 = 0;
  }
  return CONCAT11(uVar3,uVar2);
}


// ---- FUN_1000_1c82 @ 1000:1c82

void FUN_1000_1c82(uint param_1)

{
  code *pcVar1;
  undefined2 unaff_DS;
  bool bVar2;
  
  bVar2 = param_1 < *(uint *)0x324;
  if (bVar2) {
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
    if (!bVar2) {
      *(undefined1 *)(param_1 + 0x326) = 0;
    }
  }
  FUN_1000_10c0();
  return;
}


// ---- FUN_1000_1ca2 @ 1000:1ca2

void FUN_1000_1ca2(uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  undefined2 unaff_DS;
  bool bVar5;
  undefined4 uVar6;
  
  if (*(uint *)0x324 <= param_1) goto LAB_1000_1d20;
  bVar5 = false;
  if ((*(int *)0x51e != 0) && (bVar5 = false, (param_3 & 0x8000) != 0)) {
    if (param_4 == 0) goto LAB_1000_1d20;
    bVar5 = false;
    pcVar2 = (code *)swi(0x21);
    uVar6 = (*pcVar2)();
    uVar3 = (uint)((ulong)uVar6 >> 0x10);
    if (bVar5) goto LAB_1000_1d20;
    if ((param_4 & 2) == 0) {
      uVar1 = (uint)CARRY2((uint)uVar6,param_2);
      bVar5 = CARRY2(uVar3,param_3) || CARRY2(uVar3 + param_3,uVar1);
      if ((int)(uVar3 + param_3 + uVar1) < 0) goto LAB_1000_1d20;
    }
    else {
      pcVar2 = (code *)swi(0x21);
      uVar6 = (*pcVar2)(uVar3);
      uVar4 = (uint)((ulong)uVar6 >> 0x10);
      uVar3 = (uint)CARRY2((uint)uVar6,param_2);
      uVar1 = uVar4 + param_3;
      bVar5 = CARRY2(uVar4,param_3) || CARRY2(uVar1,uVar3);
      if ((int)(uVar1 + uVar3) < 0) {
        pcVar2 = (code *)swi(0x21);
        (*pcVar2)();
        goto LAB_1000_1d20;
      }
    }
  }
  pcVar2 = (code *)swi(0x21);
  (*pcVar2)();
  if (!bVar5) {
    *(byte *)(param_1 + 0x326) = *(byte *)(param_1 + 0x326) & 0xfd;
  }
LAB_1000_1d20:
  FUN_1000_10d5();
  return;
}


// ---- FUN_1000_1d24 @ 1000:1d24

/* WARNING: Removing unreachable block (ram,0x00011e34) */

uint __cdecl16near FUN_1000_1d24(undefined2 param_1,uint param_2,char param_3,uint param_4)

{
  code *pcVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  byte bVar6;
  uint extraout_DX;
  undefined2 unaff_DS;
  bool bVar7;
  undefined1 uVar8;
  bool bVar9;
  byte local_6;
  char local_4;
  char local_3;
  
  cVar2 = '\0';
  if (2 < *(byte *)0x31d) {
    cVar2 = param_3;
  }
  _param_3 = param_4;
  local_6 = 0;
  if (((param_2 & 0x8000) == 0) && (((param_2 & 0x4000) != 0 || ((*(byte *)0x51b & 0x80) == 0)))) {
    local_6 = 0x80;
  }
  bVar7 = false;
  pcVar1 = (code *)swi(0x21);
  uVar5 = param_2;
  uVar3 = (*pcVar1)();
  if (bVar7) {
    if ((uVar3 != 2) || ((uVar5 & 0x100) == 0)) goto LAB_1000_1d82;
    bVar7 = false;
    local_4 = '+';
    FUN_1000_1ecf();
    uVar8 = 0;
    uVar5 = 0;
    _param_3 = param_4;
LAB_1000_1e3e:
    pcVar1 = (code *)swi(0x21);
    uVar3 = (*pcVar1)();
    if ((bool)uVar8) {
LAB_1000_1e47:
      uVar5 = FUN_1000_10d5();
      return uVar5;
    }
    if ((local_4 != '\0') || ((param_2 & 2) == 0)) {
      pcVar1 = (code *)swi(0x21);
      (*pcVar1)();
      bVar9 = false;
      pcVar1 = (code *)swi(0x21);
      uVar3 = (*pcVar1)();
      if (bVar9) goto LAB_1000_1e47;
      if ((!bVar7) && ((_param_3 & 1) != 0)) {
        bVar7 = false;
        uVar5 = (uint)(byte)((byte)uVar5 | 1);
        pcVar1 = (code *)swi(0x21);
        (*pcVar1)();
        if (bVar7) goto LAB_1000_1e47;
      }
    }
  }
  else {
    if ((uVar5 & 0x500) == 0x500) {
      pcVar1 = (code *)swi(0x21);
      (*pcVar1)();
      goto LAB_1000_1d82;
    }
    bVar7 = true;
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
    if ((extraout_DX & 0x80) != 0) {
      local_6 = local_6 | 0x40;
    }
    if ((local_6 & 0x40) == 0) {
      if ((param_2 & 0x200) == 0) {
        if (((local_6 & 0x80) != 0) && ((param_2 & 2) != 0)) {
          pcVar1 = (code *)swi(0x21);
          (*pcVar1)();
          pcVar1 = (code *)swi(0x21);
          iVar4 = (*pcVar1)();
          if ((iVar4 != 0) && (local_3 == '\x1a')) {
            pcVar1 = (code *)swi(0x21);
            (*pcVar1)();
            pcVar1 = (code *)swi(0x21);
            (*pcVar1)();
          }
          uVar5 = 0;
          pcVar1 = (code *)swi(0x21);
          (*pcVar1)();
        }
      }
      else {
        uVar8 = 0;
        if ((param_2 & 3) == 0) {
          pcVar1 = (code *)swi(0x21);
          (*pcVar1)();
          pcVar1 = (code *)swi(0x21);
          (*pcVar1)();
          local_4 = cVar2;
          goto LAB_1000_1e3e;
        }
        uVar5 = 0;
        pcVar1 = (code *)swi(0x21);
        (*pcVar1)();
      }
    }
  }
  if ((local_6 & 0x40) == 0) {
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
    bVar6 = 0;
    if ((uVar5 & 1) != 0) {
      bVar6 = 0x10;
    }
    if ((param_2 & 8) != 0) {
      bVar6 = bVar6 | 0x20;
    }
  }
  else {
    bVar6 = 0;
  }
  if (uVar3 < *(uint *)0x324) {
    *(byte *)(uVar3 + 0x326) = bVar6 | local_6 | 1;
    return uVar3;
  }
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
LAB_1000_1d82:
  uVar5 = FUN_1000_10d5();
  return uVar5;
}


// ---- FUN_1000_1ecf @ 1000:1ecf

void __cdecl16near FUN_1000_1ecf(void)

{
  return;
}


// ---- FUN_1000_1ee0 @ 1000:1ee0

/* WARNING: Removing unreachable block (ram,0x00011fc7) */
/* WARNING: Removing unreachable block (ram,0x00011fbc) */

void FUN_1000_1ee0(uint param_1,undefined2 param_2,int param_3)

{
  char *pcVar1;
  char cVar2;
  code *pcVar3;
  undefined2 uVar4;
  undefined1 extraout_AH;
  undefined1 extraout_AH_00;
  int iVar5;
  undefined1 extraout_AH_01;
  int iVar7;
  uint extraout_DX;
  char *pcVar8;
  char *pcVar9;
  undefined2 unaff_DS;
  undefined1 uVar10;
  bool bVar11;
  undefined4 uVar12;
  char cVar6;
  
  if (((*(uint *)0x324 <= param_1) || (param_3 == 0)) || ((*(byte *)(param_1 + 0x326) & 2) != 0)) {
LAB_1000_1f5d:
    FUN_1000_10d5();
    return;
  }
  uVar10 = *(uint *)0x7f0 < 0xd6d6;
  if (*(uint *)0x7f0 == 0xd6d6) {
    (*(code *)*(undefined2 *)0x7f2)();
  }
  pcVar3 = (code *)swi(0x21);
  uVar12 = (*pcVar3)();
  pcVar9 = (char *)((ulong)uVar12 >> 0x10);
  if ((((bool)uVar10) || ((*(byte *)(param_1 + 0x326) & 0x80) == 0)) ||
     (*(byte *)(param_1 + 0x326) = *(byte *)(param_1 + 0x326) & 0xfb, (int)uVar12 == 0))
  goto LAB_1000_1f5d;
  uVar4 = 0xd00;
  if (*pcVar9 == '\n') {
    *(byte *)(param_1 + 0x326) = *(byte *)(param_1 + 0x326) | 4;
  }
LAB_1000_1f42:
  pcVar8 = (char *)((ulong)uVar12 >> 0x10);
  iVar7 = (int)uVar12;
  pcVar1 = pcVar8 + 1;
  cVar2 = *pcVar8;
  cVar6 = (char)((uint)uVar4 >> 8);
  uVar4 = CONCAT11(cVar6,cVar2);
  if (cVar2 == cVar6) {
    if (iVar7 != 1) {
      if (*pcVar1 != '\n') goto LAB_1000_1f52;
      goto LAB_1000_1f55;
    }
    bVar11 = false;
    if ((*(byte *)(param_1 + 0x326) & 0x40) == 0) {
      pcVar3 = (code *)swi(0x21);
      iVar5 = (*pcVar3)();
      if (!bVar11) {
        uVar10 = 0;
        if (iVar5 != 0) {
          pcVar3 = (code *)swi(0x21);
          (*pcVar3)();
          iVar7 = 1;
          uVar10 = extraout_AH_01;
        }
        uVar4 = CONCAT11(uVar10,0xd);
        goto LAB_1000_1f52;
      }
      goto LAB_1000_1f5d;
    }
    pcVar3 = (code *)swi(0x21);
    (*pcVar3)();
    bVar11 = false;
    uVar10 = extraout_AH;
    if ((extraout_DX & 0x20) == 0) {
      pcVar3 = (code *)swi(0x21);
      (*pcVar3)();
      uVar10 = extraout_AH_00;
      if (bVar11) goto LAB_1000_1f5d;
    }
    uVar4 = CONCAT11(uVar10,10);
  }
  else if (cVar2 == '\x1a') {
    *(byte *)(param_1 + 0x326) = *(byte *)(param_1 + 0x326) | 2;
    goto LAB_1000_1f5d;
  }
LAB_1000_1f52:
  *pcVar9 = (char)uVar4;
  pcVar9 = pcVar9 + 1;
LAB_1000_1f55:
  uVar12 = CONCAT22(pcVar1,iVar7 + -1);
  if (iVar7 + -1 == 0) goto LAB_1000_1f5d;
  goto LAB_1000_1f42;
}


// ---- FUN_1000_1fca @ 1000:1fca

void __cdecl16near FUN_1000_1fca(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int in_CX;
  uint uVar4;
  int iVar5;
  int in_BX;
  uint *unaff_SI;
  undefined2 *puVar6;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  bool bVar7;
  
  if ((*(byte *)(in_BX + 2) & 1) != 0) {
    FUN_1000_20a7();
    if ((*unaff_SI & 1) != 0) {
      in_CX = (in_CX - *unaff_SI) + -1;
    }
    uVar3 = *(uint *)(in_BX + 4);
    if (uVar3 != 0) {
      if (!CARRY2(in_CX + 2U,uVar3)) {
        uVar3 = *(uint *)0x520;
        if (uVar3 == 0x2000) goto LAB_1000_2017;
        uVar4 = 0x8000;
        while (uVar3 <= uVar4) {
          uVar4 = uVar4 >> 1;
          if (uVar4 == 0) goto LAB_1000_2030;
        }
        if (uVar4 < 8) goto LAB_1000_2030;
        uVar3 = uVar4 << 1;
        goto LAB_1000_2017;
      }
      uVar4 = 0xfff0;
      if (in_CX + 2U + uVar3 == 0) {
        while( true ) {
          bVar7 = false;
          iVar2 = FUN_1000_2056();
          if (!bVar7) break;
          if (uVar4 == 0xfff0) {
            return;
          }
LAB_1000_2030:
          uVar3 = 0x10;
LAB_1000_2017:
          uVar4 = ~(uVar3 - 1);
        }
        iVar5 = iVar2 - *(int *)(in_BX + 4);
        *(int *)(in_BX + 4) = iVar2;
        *(undefined2 *)(in_BX + 8) = unaff_SI;
        piVar1 = (int *)*(int *)(in_BX + 10);
        *piVar1 = iVar5 + -1;
        puVar6 = (undefined2 *)((int)piVar1 + iVar5);
        *puVar6 = 0xfffe;
        *(undefined2 *)(in_BX + 10) = puVar6;
      }
    }
  }
  return;
}


// ---- FUN_1000_2056 @ 1000:2056

void __cdecl16near FUN_1000_2056(int param_1)

{
  code *pcVar1;
  uint in_AX;
  uint uVar2;
  int extraout_DX;
  int in_BX;
  int unaff_DS;
  bool bVar3;
  
  if ((((*(byte *)(in_BX + 2) & 4) == 0) || (in_AX - 1 <= *(int *)(in_BX + 4) - 1U)) ||
     (*(uint *)(in_BX + -2) < in_AX - 1)) {
    uVar2 = in_AX >> 4;
    if (uVar2 == 0) {
      uVar2 = 0x1000;
    }
    bVar3 = false;
    if ((*(byte *)(in_BX + 2) & 4) != 0) {
      bVar3 = uVar2 + unaff_DS < *(uint *)0x31a;
    }
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
    if ((!bVar3) && ((*(byte *)(param_1 + 2) & 4) != 0)) {
      *(int *)(param_1 + -2) = extraout_DX + -1;
    }
  }
  return;
}


// ---- FUN_1000_20a7 @ 1000:20a7

void __cdecl16near FUN_1000_20a7(void)

{
  int in_BX;
  uint *puVar1;
  undefined2 unaff_DS;
  
  puVar1 = (uint *)*(undefined2 *)(in_BX + 8);
  if (puVar1 == (uint *)*(undefined2 *)(in_BX + 10)) {
    puVar1 = (uint *)*(undefined2 *)(in_BX + 6);
  }
  while( true ) {
    if (*puVar1 == 0xfffe) break;
    puVar1 = (uint *)((int)puVar1 + (*puVar1 & 0xfffe) + 2);
  }
  return;
}


// ---- FUN_1000_20c8 @ 1000:20c8

char * __cdecl16near FUN_1000_20c8(char *param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  undefined2 unaff_DS;
  
  iVar3 = -1;
  pcVar6 = param_1;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    pcVar1 = pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (*pcVar1 != '\0');
  uVar4 = 0xffff;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar1 = param_2;
    param_2 = param_2 + 1;
  } while (*pcVar1 != '\0');
  uVar4 = ~uVar4;
  param_2 = param_2 + -uVar4;
  pcVar7 = pcVar6 + -1;
  if (((uint)param_2 & 1) != 0) {
    pcVar1 = param_2;
    param_2 = param_2 + 1;
    pcVar6[-1] = *pcVar1;
    uVar4 = uVar4 - 1;
    pcVar7 = pcVar6;
  }
  for (uVar5 = uVar4 >> 1; uVar5 != 0; uVar5 = uVar5 - 1) {
    pcVar2 = pcVar7;
    pcVar7 = pcVar7 + 2;
    pcVar1 = param_2;
    param_2 = param_2 + 2;
    *(undefined2 *)pcVar2 = *(undefined2 *)pcVar1;
  }
  for (uVar4 = (uint)((uVar4 & 1) != 0); uVar4 != 0; uVar4 = uVar4 - 1) {
    pcVar2 = pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar1 = param_2;
    param_2 = param_2 + 1;
    *pcVar2 = *pcVar1;
  }
  return param_1;
}


// ---- FUN_1000_2108 @ 1000:2108

void __cdecl16near FUN_1000_2108(char *param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  undefined2 unaff_DS;
  
  uVar3 = 0xffff;
  pcVar5 = param_2;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar1 = pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (*pcVar1 != '\0');
  uVar3 = ~uVar3;
  if (((uint)param_1 & 1) != 0) {
    pcVar2 = param_1;
    param_1 = param_1 + 1;
    pcVar1 = param_2;
    param_2 = param_2 + 1;
    *pcVar2 = *pcVar1;
    uVar3 = uVar3 - 1;
  }
  for (uVar4 = uVar3 >> 1; uVar4 != 0; uVar4 = uVar4 - 1) {
    pcVar2 = param_1;
    param_1 = param_1 + 2;
    pcVar1 = param_2;
    param_2 = param_2 + 2;
    *(undefined2 *)pcVar2 = *(undefined2 *)pcVar1;
  }
  for (uVar3 = (uint)((uVar3 & 1) != 0); uVar3 != 0; uVar3 = uVar3 - 1) {
    pcVar2 = param_1;
    param_1 = param_1 + 1;
    pcVar1 = param_2;
    param_2 = param_2 + 1;
    *pcVar2 = *pcVar1;
  }
  return;
}


// ---- FUN_1000_213a @ 1000:213a

int __cdecl16near FUN_1000_213a(char *param_1)

{
  char *pcVar1;
  uint uVar2;
  undefined2 unaff_DS;
  
  uVar2 = 0xffff;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar1 = param_1;
    param_1 = param_1 + 1;
  } while (*pcVar1 != '\0');
  return ~uVar2 - 1;
}


// ---- FUN_1000_2156 @ 1000:2156

void __cdecl16near FUN_1000_2156(char *param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 unaff_DS;
  
  while ((*(byte *)(*param_1 + 0x537) & 8) != 0) {
    param_1 = param_1 + 1;
  }
  uVar1 = FUN_1000_213a(param_1,0,0);
  iVar2 = FUN_1000_39fc(param_1,uVar1);
  *(undefined2 *)0x31c2 = *(undefined2 *)(iVar2 + 8);
  *(undefined2 *)0x31c4 = *(undefined2 *)(iVar2 + 10);
  *(undefined2 *)0x31c6 = *(undefined2 *)(iVar2 + 0xc);
  *(undefined2 *)0x31c8 = *(undefined2 *)(iVar2 + 0xe);
  return;
}


// ---- FUN_1000_2198 @ 1000:2198

void FUN_1000_2198(void)

{
  FUN_1000_23d4();
  return;
}


// ---- FUN_1000_21b4 @ 1000:21b4

void __cdecl16near FUN_1000_21b4(char *param_1,int param_2,int param_3)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  undefined2 unaff_DS;
  
  pcVar3 = (char *)*(undefined2 *)(param_3 + 6);
  *param_1 = '0';
  pcVar2 = param_1;
  for (; pcVar2 = pcVar2 + 1, 0 < param_2; param_2 = param_2 + -1) {
    if (*pcVar3 == '\0') {
      cVar1 = '0';
    }
    else {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    }
    *pcVar2 = cVar1;
  }
  *pcVar2 = '\0';
  if ((-1 < param_2) && ('4' < *pcVar3)) {
    while (pcVar2 = pcVar2 + -1, *pcVar2 == '9') {
      *pcVar2 = '0';
    }
    *pcVar2 = *pcVar2 + '\x01';
  }
  if (*param_1 == '1') {
    *(int *)(param_3 + 2) = *(int *)(param_3 + 2) + 1;
  }
  else {
    FUN_1000_2108(param_1,param_1 + 1);
  }
  return;
}


// ---- FUN_1000_222e @ 1000:222e

undefined2 __stdcall16far FUN_1000_222e(undefined2 param_1,undefined2 param_2,undefined2 *param_3)

{
  *param_3 = 1;
  return 0;
}


// ---- FUN_1000_2245 @ 1000:2245

void __stdcall16far FUN_1000_2245(undefined1 *param_1)

{
  *param_1 = 0;
  return;
}


// ---- FUN_1000_225a @ 1000:225a

void __stdcall16far FUN_1000_225a(void)

{
  return;
}


// ---- FUN_1000_2263 @ 1000:2263

void __stdcall16far FUN_1000_2263(undefined2 *param_1,undefined2 param_2)

{
  *param_1 = param_2;
  return;
}


// ---- FUN_1000_2279 @ 1000:2279

void __stdcall16far FUN_1000_2279(void)

{
  return;
}


// ---- FUN_1000_2282 @ 1000:2282

undefined2 __stdcall16far FUN_1000_2282(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  return 0;
}


// ---- FUN_1000_229c @ 1000:229c

int __cdecl16near FUN_1000_229c(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined2 unaff_DS;
  
  iVar3 = 0;
  for (uVar2 = 0x398; uVar2 <= *(uint *)0x4b0; uVar2 = uVar2 + 8) {
    iVar1 = FUN_1000_1118(uVar2);
    if (iVar1 != -1) {
      iVar3 = iVar3 + 1;
    }
  }
  return iVar3;
}


// ---- FUN_1000_22c0 @ 1000:22c0

undefined2 __cdecl16near FUN_1000_22c0(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 unaff_DS;
  
  if ((param_1 < 0) || (*(int *)0x324 <= param_1)) {
    *(undefined2 *)0x314 = 9;
    uVar1 = 0xffff;
  }
  else if (CONCAT11(*(undefined1 *)0x31d,*(undefined1 *)0x31c) < 0x31e) {
    uVar1 = 0;
  }
  else {
    if ((*(byte *)(param_1 + 0x326) & 1) != 0) {
      iVar2 = FUN_1000_2428(param_1);
      if (iVar2 == 0) {
        return 0;
      }
      *(int *)0x322 = iVar2;
    }
    *(undefined2 *)0x314 = 9;
    uVar1 = 0xffff;
  }
  return uVar1;
}


// ---- FUN_1000_2318 @ 1000:2318

undefined1 __cdecl16near FUN_1000_2318(undefined2 param_1)

{
  undefined1 uVar1;
  
  uVar1 = in(param_1);
  return uVar1;
}


// ---- FUN_1000_2326 @ 1000:2326

undefined4 __cdecl16near FUN_1000_2326(undefined2 param_1,byte param_2)

{
  out(param_1,param_2);
  return CONCAT22(param_1,(uint)param_2);
}


// ---- FUN_1000_2334 @ 1000:2334

ulong __cdecl16near FUN_1000_2334(void)

{
  code *pcVar1;
  ulong uVar2;
  undefined2 unaff_DS;
  
  if (*(int *)0x7f0 == -0x292a) {
    (*(code *)*(undefined2 *)0x7f2)();
  }
  pcVar1 = (code *)swi(0x21);
  uVar2 = (*pcVar1)();
  return uVar2 & 0xffff00ff;
}


// ---- FUN_1000_2352 @ 1000:2352

undefined2 * __cdecl16near FUN_1000_2352(undefined2 *param_1,undefined2 *param_2,uint param_3)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined2 *puVar6;
  undefined2 unaff_DS;
  
  if (param_3 != 0) {
    if ((param_2 < param_1) && (param_1 < (undefined2 *)((int)param_2 + param_3))) {
      puVar4 = (undefined1 *)((int)param_2 + param_3);
      puVar5 = (undefined1 *)((int)param_1 + param_3);
      while( true ) {
        puVar5 = puVar5 + -1;
        puVar4 = puVar4 + -1;
        if (param_3 == 0) break;
        param_3 = param_3 - 1;
        *puVar5 = *puVar4;
      }
    }
    else {
      puVar6 = param_1;
      if (((uint)param_1 & 1) != 0) {
        puVar6 = (undefined2 *)((int)param_1 + 1);
        puVar1 = param_2;
        param_2 = (undefined2 *)((int)param_2 + 1);
        *(undefined1 *)param_1 = *(undefined1 *)puVar1;
        param_3 = param_3 - 1;
      }
      for (uVar3 = param_3 >> 1; uVar3 != 0; uVar3 = uVar3 - 1) {
        puVar2 = puVar6;
        puVar6 = puVar6 + 1;
        puVar1 = param_2;
        param_2 = param_2 + 1;
        *puVar2 = *puVar1;
      }
      for (uVar3 = (uint)((param_3 & 1) != 0); uVar3 != 0; uVar3 = uVar3 - 1) {
        puVar2 = puVar6;
        puVar6 = (undefined2 *)((int)puVar6 + 1);
        puVar1 = param_2;
        param_2 = (undefined2 *)((int)param_2 + 1);
        *(undefined1 *)puVar2 = *(undefined1 *)puVar1;
      }
    }
  }
  return param_1;
}


// ---- FUN_1000_239a @ 1000:239a

undefined2 * __cdecl16near FUN_1000_239a(undefined2 *param_1,undefined1 param_2,uint param_3)

{
  undefined2 *puVar1;
  uint uVar2;
  undefined2 *puVar3;
  undefined2 unaff_DS;
  
  if (param_3 != 0) {
    puVar3 = param_1;
    if (((uint)param_1 & 1) != 0) {
      puVar3 = (undefined2 *)((int)param_1 + 1);
      *(undefined1 *)param_1 = param_2;
      param_3 = param_3 - 1;
    }
    for (uVar2 = param_3 >> 1; uVar2 != 0; uVar2 = uVar2 - 1) {
      puVar1 = puVar3;
      puVar3 = puVar3 + 1;
      *puVar1 = CONCAT11(param_2,param_2);
    }
    for (uVar2 = (uint)((param_3 & 1) != 0); uVar2 != 0; uVar2 = uVar2 - 1) {
      puVar1 = puVar3;
      puVar3 = (undefined2 *)((int)puVar3 + 1);
      *(undefined1 *)puVar1 = param_2;
    }
  }
  return param_1;
}


// ---- FUN_1000_23d4 @ 1000:23d4

byte * __cdecl16near FUN_1000_23d4(void)

{
  ulong uVar1;
  byte bVar2;
  int in_AX;
  uint uVar4;
  uint in_CX;
  uint in_DX;
  uint uVar5;
  char in_BL;
  byte *pbVar6;
  byte *unaff_DI;
  byte *pbVar7;
  byte *pbVar8;
  undefined2 unaff_DS;
  bool bVar9;
  char cVar3;
  
  pbVar7 = unaff_DI;
  pbVar6 = unaff_DI;
  if (((in_BL != '\0') && (in_CX == 10)) && ((int)in_DX < 0)) {
    pbVar7 = unaff_DI + 1;
    *unaff_DI = 0x2d;
    bVar9 = in_AX != 0;
    in_AX = -in_AX;
    in_DX = -(in_DX + bVar9);
    pbVar6 = pbVar7;
  }
  do {
    uVar5 = 0;
    uVar4 = in_DX;
    if (in_DX != 0) {
      uVar4 = in_DX / in_CX;
      uVar5 = in_DX % in_CX;
    }
    uVar1 = CONCAT22(uVar5,in_AX);
    in_AX = (int)(uVar1 / in_CX);
    cVar3 = (char)(uVar1 % (ulong)in_CX);
    bVar2 = cVar3 + 0x30;
    if (0x39 < bVar2) {
      bVar2 = cVar3 + 0x57;
    }
    pbVar8 = pbVar7 + 1;
    *pbVar7 = bVar2;
    in_DX = uVar4;
    pbVar7 = pbVar8;
  } while (uVar4 != 0 || in_AX != 0);
  *pbVar8 = 0;
  do {
    pbVar8 = pbVar8 + -1;
    LOCK();
    bVar2 = *pbVar8;
    *pbVar8 = *pbVar6;
    UNLOCK();
    *pbVar6 = bVar2;
    pbVar7 = pbVar6 + 2;
    pbVar6 = pbVar6 + 1;
  } while (pbVar7 < pbVar8);
  return unaff_DI;
}


// ---- FUN_1000_2428 @ 1000:2428

void FUN_1000_2428(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  FUN_1000_10c8();
  return;
}


// ---- FUN_1000_2436 @ 1000:2436

undefined4 FUN_1000_2436(uint param_1,uint param_2,uint param_3,uint param_4)

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
    if ((int)(uVar11 - 1) < 0) goto LAB_1000_24d0;
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
    if (-1 < (int)(uVar11 - 1)) goto LAB_1000_24d0;
  }
  bVar13 = iVar5 != 0;
  iVar5 = -iVar5;
  iVar6 = -(uint)bVar13 - iVar6;
LAB_1000_24d0:
  return CONCAT22(iVar6,iVar5);
}


// ---- FUN_1000_24d6 @ 1000:24d6

void __cdecl16near FUN_1000_24d6(void)

{
  uint in_CX;
  uint uVar1;
  
  for (uVar1 = in_CX & 0xff; uVar1 != 0; uVar1 = uVar1 - 1) {
  }
  return;
}


// ---- FUN_1000_24e2 @ 1000:24e2

void __cdecl16near FUN_1000_24e2(void)

{
  uint in_CX;
  uint uVar1;
  
  for (uVar1 = in_CX & 0xff; uVar1 != 0; uVar1 = uVar1 - 1) {
  }
  return;
}


// ---- FUN_1000_2530 @ 1000:2530

/* WARNING: Control flow encountered bad instruction data */

void FUN_1000_2530(void)

{
  code *pcVar1;
  undefined2 extraout_DX;
  undefined2 *in_BX;
  int unaff_BP;
  undefined1 *unaff_SI;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 in_ZF;
  char in_SF;
  char in_OF;
  
  pcVar1 = (code *)swi(0x35);
  (*pcVar1)();
  if (!(bool)in_ZF && in_OF == in_SF) {
    *(undefined2 *)(unaff_BP + -8) = CONCAT11(0x13,*(byte *)(unaff_BP + -6) | 0x38);
    pcVar1 = (code *)swi(0x35);
    (*pcVar1)();
    out(*unaff_SI,extraout_DX);
    pcVar1 = (code *)swi(0x35);
    (*pcVar1)();
    in(0x89);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Could not recover jumptable at 0x0001252e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*in_BX)();
  return;
}


// ---- FUN_1000_27ba @ 1000:27ba

undefined4 __cdecl16near FUN_1000_27ba(void)

{
  undefined2 *puVar1;
  char *pcVar2;
  undefined2 *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  code *pcVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  bool bVar13;
  char *pcVar14;
  byte bVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  undefined2 *unaff_SI;
  uint uVar24;
  uint uVar25;
  undefined2 *puVar26;
  char *pcVar27;
  undefined2 unaff_DS;
  bool bVar28;
  bool bVar29;
  bool bVar30;
  undefined2 in_stack_0000001e;
  undefined2 in_stack_00000024;
  
  puVar26 = (undefined2 *)0x708;
  for (iVar16 = 4; iVar16 != 0; iVar16 = iVar16 + -1) {
    puVar3 = puVar26;
    puVar26 = puVar26 + 1;
    puVar1 = unaff_SI;
    unaff_SI = unaff_SI + 1;
    *puVar3 = *puVar1;
  }
  uVar20 = *(uint *)0x70e;
  *(byte *)0x70f = *(byte *)0x70f & 0x7f;
  if (((*(int *)0x708 == 0 && *(int *)0x70a == 0) && *(int *)0x70c == 0) && *(int *)0x70e == 0) {
    *(undefined2 *)0x714 = 0x3001;
    return 1;
  }
  if ((~uVar20 & 0x7ff0) == 0) {
    return 0x10000;
  }
  pcVar8 = (code *)swi(0x35);
  (*pcVar8)();
  pcVar8 = (code *)swi(0x3d);
  (*pcVar8)();
  *(undefined1 *)0x743 = *(undefined1 *)0x741;
  pcVar8 = (code *)swi(0x35);
  (*pcVar8)();
  pcVar8 = (code *)swi(0x39);
  (*pcVar8)();
  FUN_1000_2a7b();
  pcVar8 = (code *)swi(0x3c);
  (*pcVar8)();
  pcVar8 = (code *)swi(0x34);
  (*pcVar8)();
  pcVar8 = (code *)swi(0x3d);
  (*pcVar8)();
  if ((*(byte *)0x740 & 0x41) != 0) {
    pcVar8 = (code *)swi(0x3c);
    (*pcVar8)();
    pcVar8 = (code *)swi(0x3a);
    (*pcVar8)();
  }
  pcVar8 = (code *)swi(0x37);
  (*pcVar8)();
  pcVar8 = (code *)swi(0x3d);
  (*pcVar8)();
  uVar20 = *(uint *)0x70e;
  bVar28 = false;
  uVar4 = *(uint *)0x708;
  uVar18 = *(uint *)0x70a;
  uVar25 = *(uint *)0x70c;
  bVar15 = 0;
  for (iVar16 = -(*(int *)0x710 + -0x3ffe); iVar16 != 0; iVar16 = iVar16 + -1) {
    uVar22 = uVar20 & 1;
    uVar20 = uVar20 >> 1;
    uVar24 = uVar4 & 1;
    bVar28 = (bVar15 & 1) != 0;
    uVar4 = (uint)(CONCAT12((uVar18 & 1) != 0,uVar4) >> 1);
    uVar18 = (uint)(CONCAT12((uVar25 & 1) != 0,uVar18) >> 1);
    uVar25 = (uint)(CONCAT12(uVar22 != 0,uVar25) >> 1);
    bVar15 = (byte)(CONCAT11(uVar24 != 0,bVar15) >> 1);
  }
  uVar24 = uVar4 + 0x39a + (uint)bVar28;
  uVar4 = (uint)(0xfc65 < uVar4 || CARRY2(uVar4 + 0x39a,(uint)bVar28));
  uVar22 = uVar18 + uVar4;
  uVar4 = (uint)CARRY2(uVar18,uVar4);
  uVar18 = uVar25 + uVar4;
  uVar20 = uVar20 + CARRY2(uVar25,uVar4);
  iVar16 = 0x10;
  pcVar14 = (char *)0x715;
  do {
    pcVar27 = pcVar14;
    iVar17 = iVar16;
    bVar29 = (int)((uint)bVar15 << 8) < 0;
    uVar9 = (ulong)CONCAT12(bVar29,uVar24) << 1;
    bVar28 = (uVar9 & 0x10000) != 0;
    uVar10 = (ulong)CONCAT12(bVar28,uVar22) << 1;
    bVar30 = (uVar10 & 0x10000) != 0;
    uVar11 = (ulong)CONCAT12(bVar30,uVar18) << 1;
    bVar13 = (uVar11 & 0x10000) != 0;
    uVar12 = (ulong)CONCAT12(bVar13,uVar20) << 1;
    uVar25 = (uint)((uVar9 & 0xffff | (ulong)bVar29) << 1) | (uint)((char)(bVar15 * '\x02') < '\0');
    uVar23 = (uint)((uVar10 & 0xffff | (ulong)bVar28) << 1) | (uint)((uVar9 & 0x8000) != 0);
    uVar19 = (uint)((uVar11 & 0xffff | (ulong)bVar30) << 1) | (uint)((uVar10 & 0x8000) != 0);
    uVar21 = (uint)((uVar12 & 0xffff | (ulong)bVar13) << 1) | (uint)((uVar11 & 0x8000) != 0);
    uVar4 = (uint)CARRY1(bVar15 * '\x04',bVar15);
    uVar5 = uVar25 + uVar24;
    uVar25 = (uint)(CARRY2(uVar25,uVar24) || CARRY2(uVar5,uVar4));
    uVar6 = uVar23 + uVar22;
    uVar23 = (uint)(CARRY2(uVar23,uVar22) || CARRY2(uVar6,uVar25));
    uVar7 = uVar19 + uVar18;
    uVar19 = (uint)(CARRY2(uVar19,uVar18) || CARRY2(uVar7,uVar23));
    bVar30 = CARRY2(uVar21,uVar20);
    uVar21 = uVar21 + uVar20;
    bVar28 = (char)(bVar15 * '\x05') < '\0';
    bVar15 = bVar15 * '\n';
    uVar9 = (ulong)CONCAT12(bVar28,uVar5 + uVar4) << 1;
    uVar24 = (uint)uVar9 | (uint)bVar28;
    bVar28 = (uVar9 & 0x10000) != 0;
    uVar9 = (ulong)CONCAT12(bVar28,uVar6 + uVar25) << 1;
    uVar22 = (uint)uVar9 | (uint)bVar28;
    bVar28 = (uVar9 & 0x10000) != 0;
    uVar9 = (ulong)CONCAT12(bVar28,uVar7 + uVar23) << 1;
    uVar18 = (uint)uVar9 | (uint)bVar28;
    bVar28 = (uVar9 & 0x10000) != 0;
    uVar9 = (ulong)CONCAT12(bVar28,uVar21 + uVar19) << 1;
    uVar20 = (uint)uVar9 | (uint)bVar28;
    *pcVar27 = (((((uVar12 & 0x10000) != 0) << 1 | (uVar12 & 0x8000) != 0) +
                (bVar30 || CARRY2(uVar21,uVar19))) * '\x02' | (uVar9 & 0x10000) != 0) + 0x30;
    iVar16 = iVar17 + -1;
    pcVar14 = pcVar27 + 1;
  } while (iVar16 != 0);
  iVar17 = iVar17 + -2;
  do {
    if (iVar17 == 0) break;
    iVar17 = iVar17 + -1;
    pcVar2 = pcVar27;
    pcVar27 = pcVar27 + -1;
  } while (*pcVar2 == '0');
  *(char *)0x714 = (char)iVar17 + '\x12';
  return CONCAT22(in_stack_00000024,1);
}


// ---- FUN_1000_2a7b @ 1000:2a7b

/* WARNING: Unable to track spacebase fully for stack */

void __cdecl16near FUN_1000_2a7b(void)

{
  code *pcVar1;
  uint uVar2;
  uint unaff_DI;
  uint uVar3;
  uint uStack_2;
  
  uStack_2 = unaff_DI;
  if ((int)unaff_DI < 0) {
    uStack_2 = -unaff_DI;
  }
  while (uStack_2 != 0) {
    uVar3 = uStack_2 >> 3;
    uVar2 = uStack_2 & 7;
    uStack_2 = uVar3;
    if (uVar2 != 0) {
      pcVar1 = (code *)swi(0x3c);
      (*pcVar1)();
      pcVar1 = (code *)swi(0x3a);
      (*pcVar1)();
    }
  }
  return;
}


// ---- FUN_1000_2d70 @ 1000:2d70

/* WARNING: Instruction at (ram,0x00012db7) overlaps instruction at (ram,0x00012db6)
    */

void FUN_1000_2d70(int param_1,uint param_2,undefined2 *param_3)

{
  code *pcVar1;
  uint uVar2;
  int in_CX;
  undefined2 extraout_DX;
  undefined1 *unaff_SI;
  undefined2 unaff_DS;
  bool bVar3;
  char cVar4;
  char cVar5;
  unkbyte10 in_ST0;
  uint uStack_e;
  code *local_8;
  
  if (param_2 != 0) {
    if ((int)param_2 < 0) {
      param_2 = -param_2;
    }
    local_8 = (code *)0x2e0e;
    cVar5 = '\0';
    cVar4 = param_1 < 0;
    bVar3 = param_1 == 0;
    uStack_e = param_2;
    if (bVar3) {
      local_8 = (code *)0x2e04;
      pcVar1 = (code *)swi(0x35);
      (*pcVar1)();
      do {
      } while (bVar3 || cVar5 != cVar4);
      pcVar1 = (code *)swi(0x3d);
      (*pcVar1)();
      pcVar1 = (code *)swi(0x35);
      (*pcVar1)();
      out(*unaff_SI,extraout_DX);
      pcVar1 = (code *)swi(0x3c);
      (*pcVar1)();
      in_ST0 = *(unkbyte10 *)((undefined2 *)param_3 + 1);
    }
    while (uStack_e != 0) {
      uVar2 = uStack_e & 7;
      uStack_e = uStack_e >> 3;
      if (uVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00012dda. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*local_8)();
        return;
      }
    }
    if (param_1 == 0) {
      pcVar1 = (code *)swi(0x37);
      (*pcVar1)();
      if (in_CX != 1) {
        return;
      }
      pcVar1 = (code *)swi(0x3c);
      (*pcVar1)();
      *(unkbyte10 *)((undefined2 *)param_3 + 1) = in_ST0;
      *param_3 = 0;
      pcVar1 = (code *)swi(0x3d);
      (*pcVar1)();
    }
  }
  return;
}


// ---- FUN_1000_2fca @ 1000:2fca

uint * FUN_1000_2fca(uint *param_1,int param_2,byte *param_3)

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
    FUN_1000_3078();
    uVar18 = FUN_1000_3078();
    uVar8 = (uint)CARRY2((uint)((ulong)uVar18 >> 0x10),uVar8);
    uVar4 = uVar13 + uVar5 + uVar8;
    uVar13 = (uint)(CARRY2(uVar13,uVar5) || CARRY2(uVar13 + uVar5,uVar8));
    bVar17 = CARRY2(uVar6,uVar10);
    uVar6 = uVar6 + uVar10;
    uVar11 = uVar6 + uVar13;
    bVar15 = CARRY2((uint)uVar18,uVar3);
    uVar1 = (uint)uVar18 + uVar3;
    uVar18 = FUN_1000_3078();
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


// ---- FUN_1000_3078 @ 1000:3078

undefined4 __cdecl16near FUN_1000_3078(void)

{
  int in_AX;
  int in_DX;
  uint in_BX;
  
  return CONCAT22(in_DX << 1,in_AX << 1 | (uint)((in_BX & 0x8000) != 0));
}


// ---- FUN_1000_3084 @ 1000:3084

/* WARNING: Instruction at (ram,0x00013097) overlaps instruction at (ram,0x00013095)
    */

void __cdecl16far
FUN_1000_3084(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  code *pcVar1;
  undefined2 extraout_DX;
  char in_BH;
  undefined1 *unaff_SI;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar2;
  char cVar3;
  char cVar4;
  undefined2 in_stack_00000002;
  undefined1 *puVar5;
  undefined1 auStack_10 [4];
  undefined1 local_c [10];
  
  cVar4 = SBORROW2((int)&stack0xfffe,0xe);
  cVar3 = (int)auStack_10 < 0;
  uVar2 = &stack0x0000 == (undefined1 *)0x10;
  puVar5 = local_c;
  do {
    FUN_1000_30ec(in_stack_00000002,param_1,param_2,param_3,param_4,puVar5,unaff_SS);
    do {
      pcVar1 = (code *)swi(0x35);
      (*pcVar1)();
      if (!(bool)uVar2 && cVar4 == cVar3) {
        pcVar1 = (code *)swi(0x37);
        (*pcVar1)();
        out(*unaff_SI,extraout_DX);
        return;
      }
      cVar4 = false;
      cVar3 = in_BH < '\0';
      uVar2 = in_BH == '\0';
    } while ((bool)uVar2);
  } while( true );
}


// ---- FUN_1000_30ec @ 1000:30ec

uint FUN_1000_30ec(undefined2 param_1,byte *param_2,int *param_3,uint *param_4)

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
LAB_1000_313b:
      pbVar1 = pbVar11;
      pbVar11 = pbVar9 + 2;
      bVar6 = *pbVar1;
    }
    else if (bVar6 == 0x2d) {
      local_16 = 0x8000;
      goto LAB_1000_313b;
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
            if (local_1c == 0) goto LAB_1000_3189;
            pbVar1 = pbVar11;
            pbVar11 = pbVar11 + 1;
            bVar6 = *pbVar1;
          }
          if (bVar6 == 0x2e) {
            do {
              pbVar1 = pbVar11;
              pbVar11 = pbVar11 + 1;
              bVar6 = *pbVar1;
LAB_1000_31a3:
              if ((bVar6 < 0x30) || (0x39 < bVar6)) goto LAB_1000_31bf;
              pcVar2 = pcVar10;
              pcVar10 = pcVar10 + 1;
              *pcVar2 = bVar6 - 0x30;
              local_18 = local_18 + -1;
              local_1c = local_1c + -1;
            } while (local_1c != 0);
            goto LAB_1000_31b6;
          }
          goto LAB_1000_31bf;
        }
        do {
          local_18 = iVar5;
          bVar6 = *pbVar11;
LAB_1000_3168:
          pbVar11 = pbVar11 + 1;
          iVar5 = local_18 + -1;
        } while (bVar6 == 0x30);
        if (bVar6 != 0) goto LAB_1000_31a3;
      }
      local_14 = pbVar11 + -1;
      goto LAB_1000_3321;
    }
    if ((bVar6 == 0x2e) && ((bVar6 = *pbVar11, 0x2f < bVar6 && (bVar6 < 0x3a)))) goto LAB_1000_3168;
  }
  local_10 = 4;
  goto LAB_1000_3321;
  while (iVar5 = local_18 + 1, bVar6 < 0x3a) {
LAB_1000_3189:
    local_18 = iVar5;
    pbVar1 = pbVar11;
    pbVar11 = pbVar11 + 1;
    bVar6 = *pbVar1;
    if (bVar6 < 0x30) break;
  }
  if (bVar6 == 0x2e) {
LAB_1000_31b6:
    do {
      pbVar1 = pbVar11;
      pbVar11 = pbVar11 + 1;
      bVar6 = *pbVar1;
      if (bVar6 < 0x30) break;
    } while (bVar6 < 0x3a);
  }
LAB_1000_31bf:
  local_1c = 0x19 - local_1c;
  local_14 = pbVar11 + -1;
  if ((((bVar6 == 0x45) || (bVar6 == 0x65)) || (bVar6 == 0x44)) || (bVar6 == 100)) {
    pbVar9 = pbVar11 + 1;
    bVar6 = *pbVar11;
    if (bVar6 == 0x2b) {
LAB_1000_31ee:
      pbVar1 = pbVar9;
      pbVar9 = pbVar11 + 2;
      bVar6 = *pbVar1;
    }
    else if (bVar6 == 0x2d) {
      local_1a = 0xffff;
      goto LAB_1000_31ee;
    }
    if ((0x2f < bVar6) && (bVar6 < 0x3a)) {
      uVar7 = bVar6 - 0x30;
      uVar8 = uVar7;
      do {
        pbVar1 = pbVar9;
        pbVar9 = pbVar9 + 1;
        bVar6 = *pbVar1;
        if ((bVar6 < 0x30) || (0x39 < bVar6)) goto LAB_1000_3225;
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
LAB_1000_3225:
      local_18 = local_18 + ((uVar8 ^ local_1a) - local_1a);
      local_14 = pbVar9 + -1;
    }
  }
  if (local_1c != 0) {
    *pcVar10 = '\0';
    pbVar11 = (byte *)(pcVar10 + -1);
    if (local_1c < 0x19) {
      if (local_18 != 0) goto LAB_1000_326c;
    }
    else {
      bVar6 = *pbVar11;
      *pbVar11 = 0;
      local_1c = local_1c - 1;
      local_18 = local_18 + 1;
      pbVar11 = (byte *)(pcVar10 + -2);
      if (bVar6 < 5) {
LAB_1000_326c:
        for (; *pbVar11 == 0; pbVar11 = pbVar11 + -1) {
          local_1c = local_1c - 1;
          local_18 = local_18 + 1;
        }
      }
      else {
        *pbVar11 = *pbVar11 + 1;
      }
    }
    FUN_1000_2fca(&local_e,local_1c,local_36,unaff_SS);
    if (local_18 == 0) {
LAB_1000_32a6:
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
          goto LAB_1000_3303;
        }
LAB_1000_332d:
        local_10 = local_10 | 1;
        goto LAB_1000_3321;
      }
    }
    else if (local_18 < 0x1450) {
      if (-0x1450 < local_18) {
        FUN_1000_2d70(param_1,local_18,&local_e,unaff_SS);
        goto LAB_1000_32a6;
      }
      goto LAB_1000_332d;
    }
    local_10 = local_10 | 2;
    puVar12[4] = local_16 | 0x7fff;
    puVar12[3] = 0x8000;
    puVar12[2] = 0;
    puVar12[1] = 0;
    *param_4 = 0;
    goto LAB_1000_3303;
  }
LAB_1000_3321:
  for (iVar14 = 5; iVar14 != 0; iVar14 = iVar14 + -1) {
    puVar3 = puVar12;
    puVar12 = puVar12 + 1;
    *puVar3 = 0;
  }
LAB_1000_3303:
  *param_3 = (int)local_14;
  ((int *)param_3)[1] = local_12;
  return local_10;
}


// ---- FUN_1000_33b8 @ 1000:33b8

void __cdecl16near FUN_1000_33b8(char *param_1)

{
  char cVar1;
  char *pcVar2;
  undefined2 unaff_DS;
  char *local_4;
  
  for (; (*param_1 != '\0' && (*param_1 != '.')); param_1 = param_1 + 1) {
  }
  if (*param_1 != '\0') {
    do {
      pcVar2 = param_1;
      param_1 = pcVar2 + 1;
      if ((*param_1 == '\0') || (*param_1 == 'e')) break;
    } while (*param_1 != 'E');
    local_4 = param_1;
    for (param_1 = pcVar2; *param_1 == '0'; param_1 = param_1 + -1) {
    }
    if (*param_1 == '.') {
      param_1 = param_1 + -1;
    }
    do {
      cVar1 = *local_4;
      param_1 = param_1 + 1;
      *param_1 = cVar1;
      local_4 = local_4 + 1;
    } while (cVar1 != '\0');
  }
  return;
}


// ---- FUN_1000_3424 @ 1000:3424

undefined2 __cdecl16near FUN_1000_3424(int param_1)

{
  code *pcVar1;
  char in_CL;
  int unaff_SI;
  undefined2 unaff_DS;
  char cVar2;
  byte bStack_3;
  
  cVar2 = &stack0xfffe < (undefined1 *)0x2;
  pcVar1 = (code *)swi(0x39);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x38);
  (*pcVar1)();
  *(char *)(param_1 + unaff_SI) = *(char *)(param_1 + unaff_SI) + in_CL + cVar2;
  pcVar1 = (code *)swi(0x39);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x3d);
  (*pcVar1)();
  if ((bStack_3 & 1) == 0) {
    return 1;
  }
  return 0;
}


// ---- FUN_1000_3452 @ 1000:3452

void __cdecl16near FUN_1000_3452(int param_1,float *param_2,undefined2 param_3)

{
  code *pcVar1;
  undefined2 *puVar2;
  float *pfVar3;
  undefined2 uVar4;
  undefined2 unaff_DS;
  longdouble in_ST0;
  
  pfVar3 = (float *)param_2;
  if (param_1 != 0) {
    puVar2 = (undefined2 *)FUN_1000_2156(param_3);
    uVar4 = (undefined2)((ulong)param_2 >> 0x10);
    *(undefined2 *)param_2 = *puVar2;
    *(undefined2 *)((int)pfVar3 + 2) = puVar2[1];
    *(undefined2 *)(pfVar3 + 1) = puVar2[2];
    *(undefined2 *)((int)pfVar3 + 6) = puVar2[3];
    return;
  }
  FUN_1000_2156(param_3);
  pcVar1 = (code *)swi(0x39);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x3c);
  (*pcVar1)();
  *pfVar3 = (float)in_ST0;
  pcVar1 = (code *)swi(0x3d);
  (*pcVar1)();
  return;
}


// ---- FUN_1000_3494 @ 1000:3494

undefined1 * __cdecl16near
FUN_1000_3494(undefined2 *param_1,undefined1 *param_2,int param_3,int param_4)

{
  undefined1 *puVar1;
  int iVar2;
  undefined2 unaff_DS;
  int *local_4;
  
  if (*(char *)0x75c == '\0') {
    local_4 = (int *)FUN_1000_3a52(*param_1,param_1[1],param_1[2],param_1[3]);
    FUN_1000_21b4(param_2 + (uint)(0 < param_3) + (uint)(*local_4 == 0x2d),param_3 + 1,local_4);
  }
  else {
    local_4 = (int *)*(undefined2 *)0xa04;
    FUN_1000_37f0(0 < param_3,param_2 + (*local_4 == 0x2d));
  }
  puVar1 = param_2;
  if (*local_4 == 0x2d) {
    *param_2 = 0x2d;
    puVar1 = param_2 + 1;
  }
  if (0 < param_3) {
    *puVar1 = puVar1[1];
    puVar1 = puVar1 + 1;
    *puVar1 = 0x2e;
  }
  puVar1 = (undefined1 *)FUN_1000_2108(puVar1 + (uint)(*(char *)0x75c == '\0') + param_3,0x761);
  if (param_4 != 0) {
    *puVar1 = 0x45;
  }
  if (*(char *)local_4[3] != '0') {
    iVar2 = local_4[1] + -1;
    if (iVar2 < 0) {
      iVar2 = -iVar2;
      puVar1[1] = 0x2d;
    }
    if (99 < iVar2) {
      puVar1[2] = puVar1[2] + (char)(iVar2 / 100);
      iVar2 = iVar2 % 100;
    }
    if (9 < iVar2) {
      puVar1[3] = puVar1[3] + (char)(iVar2 / 10);
      iVar2 = iVar2 % 10;
    }
    puVar1[4] = puVar1[4] + (char)iVar2;
  }
  return param_2;
}


// ---- FUN_1000_35be @ 1000:35be

void __cdecl16near
FUN_1000_35be(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  undefined2 unaff_DS;
  
  *(undefined1 *)0x75c = 1;
  FUN_1000_3494(param_1,param_2,param_3,param_4);
  *(undefined1 *)0x75c = 0;
  return;
}


// ---- FUN_1000_35e2 @ 1000:35e2

undefined1 * __cdecl16near FUN_1000_35e2(undefined2 *param_1,undefined1 *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined2 unaff_DS;
  int *local_4;
  
  if (*(char *)0x75c == '\0') {
    local_4 = (int *)FUN_1000_3a52(*param_1,param_1[1],param_1[2],param_1[3]);
    FUN_1000_21b4(param_2 + (*local_4 == 0x2d),local_4[1] + param_3,local_4);
  }
  else {
    local_4 = (int *)*(undefined2 *)0xa04;
    iVar2 = *local_4;
    iVar1 = *(int *)0x75e;
    if (param_3 == iVar1) {
      param_2[iVar1 + (uint)(iVar2 == 0x2d)] = 0x30;
      param_2[iVar1 + (uint)(iVar2 == 0x2d) + 1] = 0;
    }
  }
  puVar3 = param_2;
  if (*local_4 == 0x2d) {
    *param_2 = 0x2d;
    puVar3 = param_2 + 1;
  }
  if (local_4[1] < 1) {
    FUN_1000_37f0(1,puVar3);
    *puVar3 = 0x30;
    puVar3 = puVar3 + 1;
  }
  else {
    puVar3 = puVar3 + local_4[1];
  }
  if (0 < param_3) {
    FUN_1000_37f0(1,puVar3);
    *puVar3 = 0x2e;
    if (local_4[1] < 0) {
      if (*(char *)0x75c == '\0') {
        iVar2 = -local_4[1];
        if (-param_3 != local_4[1] && param_3 <= iVar2) {
          iVar2 = param_3;
        }
      }
      else {
        iVar2 = -local_4[1];
      }
      FUN_1000_37f0(iVar2,puVar3 + 1);
      FUN_1000_239a(puVar3 + 1,0x30,iVar2);
    }
  }
  return param_2;
}


// ---- FUN_1000_36dc @ 1000:36dc

void __cdecl16near FUN_1000_36dc(undefined2 param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 unaff_DS;
  
  *(undefined1 *)0x75c = 1;
  FUN_1000_35e2(param_1,param_2,param_3);
  *(undefined1 *)0x75c = 0;
  return;
}


// ---- FUN_1000_36fc @ 1000:36fc

void __cdecl16near FUN_1000_36fc(undefined2 *param_1,int param_2,int param_3,undefined2 param_4)

{
  int *piVar1;
  char *pcVar2;
  int iVar3;
  undefined2 unaff_DS;
  char *local_4;
  
  piVar1 = (int *)FUN_1000_3a52(*param_1,param_1[1],param_1[2],param_1[3]);
  *(undefined2 *)0xa04 = piVar1;
  *(int *)0x75e = piVar1[1] + -1;
  pcVar2 = (char *)((uint)(*piVar1 == 0x2d) + param_2);
  FUN_1000_21b4(pcVar2,param_3,piVar1);
  iVar3 = *(int *)(*(int *)0xa04 + 2) + -1;
  *(bool *)0x760 = *(int *)0x75e < iVar3;
  *(int *)0x75e = iVar3;
  if ((-5 < iVar3) && (iVar3 < param_3)) {
    if (*(char *)0x760 != '\0') {
      do {
        local_4 = pcVar2;
        pcVar2 = local_4 + 1;
      } while (*local_4 != '\0');
      local_4[-1] = '\0';
    }
    FUN_1000_36dc(param_1,param_2,param_3);
    return;
  }
  FUN_1000_35be(param_1,param_2,param_3,param_4);
  return;
}


// ---- FUN_1000_37a6 @ 1000:37a6

void __cdecl16near
FUN_1000_37a6(undefined2 param_1,undefined2 param_2,int param_3,undefined2 param_4,
             undefined2 param_5)

{
  if ((param_3 == 0x65) || (param_3 == 0x45)) {
    FUN_1000_3494(param_1,param_2,param_4,param_5);
  }
  else {
    if (param_3 != 0x66) {
      FUN_1000_36fc(param_1,param_2,param_4,param_5);
      return;
    }
    FUN_1000_35e2(param_1,param_2,param_4);
  }
  return;
}


// ---- FUN_1000_37f0 @ 1000:37f0

void FUN_1000_37f0(int param_1,int param_2)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = FUN_1000_213a(param_2);
    FUN_1000_2352(param_1 + param_2,param_2,iVar1 + 1);
  }
  return;
}


// ---- FUN_1000_3816 @ 1000:3816

undefined2 __cdecl16near FUN_1000_3816(void)

{
  int iVar1;
  code *pcVar2;
  undefined2 uVar3;
  uint uVar4;
  int in_CX;
  int extraout_DX;
  int iVar5;
  int extraout_DX_00;
  undefined2 extraout_DX_01;
  int *piVar6;
  int unaff_SI;
  int unaff_DI;
  undefined2 unaff_DS;
  bool bVar7;
  char cVar8;
  char cVar9;
  char local_13;
  uint local_c;
  
  pcVar2 = (code *)swi(0x39);
  (*pcVar2)();
  FUN_1000_2530();
  *(undefined1 *)0x79c = 0;
  if ((local_13 < '\x01') || (local_13 == '\x06')) {
    pcVar2 = (code *)swi(0x37);
    (*pcVar2)();
    iVar5 = extraout_DX;
    do {
      in_CX = in_CX + -1;
      if (in_CX != 0) {
        uVar3 = in(0x5d);
        return uVar3;
      }
      iVar1 = *(int *)0x30a;
      cVar9 = SBORROW2(iVar1,iVar5);
      cVar8 = iVar1 - iVar5 < 0;
      bVar7 = iVar1 == iVar5;
      pcVar2 = (code *)swi(0x39);
      (*pcVar2)();
      iVar5 = extraout_DX_00;
    } while (bVar7 || cVar9 != cVar8);
    pcVar2 = (code *)swi(0x3d);
    local_13 = (*pcVar2)();
    if ((local_c & 8) == 0) {
      if (local_13 != '\x06') {
        if (*(char *)0x79c == '\0') {
          pcVar2 = (code *)swi(0x39);
          (*pcVar2)();
        }
        pcVar2 = (code *)swi(0x35);
        (*pcVar2)();
        out(*(undefined1 *)(unaff_SI + 1),extraout_DX_01);
        pcVar2 = (code *)swi(0x3d);
        uVar3 = (*pcVar2)();
        return uVar3;
      }
    }
    else {
      local_13 = '\x03';
    }
  }
  uVar4 = (uint)local_13;
  *(uint *)0x768 = uVar4;
  piVar6 = (int *)(unaff_DI + 1);
  *(undefined2 *)0x76a = piVar6;
  *(undefined1 *)0x79b = 0;
  if (((*piVar6 == 0x6f6c) && (*(char *)(unaff_DI + 3) == 'g')) && (local_13 == '\x02')) {
    *(undefined1 *)0x79b = 1;
  }
  if (*(char *)0x79c == '\0') {
    pcVar2 = (code *)swi(0x39);
    uVar3 = (*pcVar2)((undefined1 *)(unaff_SI + 1));
    uVar4 = CONCAT11((char)((uint)uVar3 >> 8),(char)uVar3 + -0x33);
    if ((char)piVar6[6] != '\x01') {
      pcVar2 = (code *)swi(0x39);
      uVar4 = (*pcVar2)();
      uVar4 = uVar4 | 0xcd;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00013945. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (*(code *)*(undefined2 *)(*(byte *)((int)piVar6 + uVar4 + 5) + 0x784))();
  return uVar3;
}


// ---- FUN_1000_39c8 @ 1000:39c8

/* WARNING: Instruction at (ram,0x000139dd) overlaps instruction at (ram,0x000139db)
    */

void __cdecl16near FUN_1000_39c8(void)

{
  code *pcVar1;
  undefined2 extraout_DX;
  undefined2 extraout_DX_00;
  undefined1 *unaff_SI;
  int unaff_DI;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  bool bVar2;
  undefined1 uVar3;
  char cVar4;
  char cVar5;
  char acStack_bbc [2982];
  undefined1 auStack_e [8];
  uint local_6;
  uint local_4;
  
  cVar5 = SBORROW2((int)&stack0xfffe,0xc);
  cVar4 = (int)auStack_e < 0;
  bVar2 = &stack0x0000 == (undefined1 *)0xe;
  pcVar1 = (code *)swi(0x35);
  (*pcVar1)();
  do {
  } while (bVar2 || cVar5 != cVar4);
  while( true ) {
    pcVar1 = (code *)swi(0x3d);
    (*pcVar1)();
    cVar5 = '\0';
    local_6 = local_4 | 0xc00;
    cVar4 = (int)local_6 < 0;
    uVar3 = (byte)((byte)(local_4 >> 8) | 0xc) == 0;
    pcVar1 = (code *)swi(0x35);
    (*pcVar1)();
    out(*unaff_SI,extraout_DX);
    pcVar1 = (code *)swi(0x3b);
    (*pcVar1)();
    if (!(bool)uVar3 && cVar5 == cVar4) break;
    unaff_SI = unaff_SI + 2;
  }
  pcVar1 = (code *)swi(0x35);
  (*pcVar1)();
  out(unaff_SI[1],extraout_DX_00);
  acStack_bbc[unaff_DI] = acStack_bbc[unaff_DI] + -1;
  return;
}


// ---- FUN_1000_39fc @ 1000:39fc

undefined2 __cdecl16near FUN_1000_39fc(int param_1)

{
  uint uVar1;
  undefined2 unaff_DS;
  undefined2 local_6;
  
  uVar1 = FUN_1000_3084(param_1);
  *(int *)0xa08 = local_6 - param_1;
  *(undefined2 *)0xa06 = 0;
  if ((uVar1 & 4) != 0) {
    *(undefined2 *)0xa06 = 0x200;
  }
  if ((uVar1 & 2) != 0) {
    *(byte *)0xa06 = *(byte *)0xa06 | 1;
  }
  if ((uVar1 & 1) != 0) {
    *(byte *)0xa07 = *(byte *)0xa07 | 1;
  }
  return 0xa06;
}


// ---- FUN_1000_3a52 @ 1000:3a52

undefined2 __cdecl16near
FUN_1000_3a52(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  uint in_BX;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined2 unaff_DS;
  undefined4 uVar6;
  
  *(undefined2 *)0x7a6 = param_1;
  *(undefined2 *)0x7a8 = param_2;
  *(undefined2 *)0x7aa = param_3;
  *(undefined2 *)0x7ac = param_4;
  uVar6 = FUN_1000_27ba(&stack0xfffe);
  puVar5 = (undefined1 *)0x7ae;
  puVar4 = (undefined1 *)0x7a7;
  for (iVar3 = (int)*(char *)0x7a6; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar2 = *puVar1;
  }
  *puVar5 = 0;
  *(uint *)0x79e = in_BX & 0xff;
  *(undefined2 *)0x7a0 = (int)((ulong)uVar6 >> 0x10);
  *(undefined2 *)0x7a2 = (int)uVar6;
  *(undefined2 *)0x7a4 = 0x7ae;
  return 0x79e;
}


// ---- FUN_1000_3aee @ 1000:3aee

undefined2 __cdecl16near FUN_1000_3aee(void)

{
  return 0;
}


// ---- FUN_1000_3afe @ 1000:3afe

/* WARNING: Unable to track spacebase fully for stack */

undefined2 FUN_1000_3afe(uint param_1,char *param_2,int param_3)

{
  char *pcVar1;
  code *pcVar2;
  char cVar3;
  undefined2 uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  bool bVar9;
  undefined4 uVar10;
  
  if (*(uint *)0x324 <= param_1) {
LAB_1000_3b11:
    uVar4 = FUN_1000_10d5();
    return uVar4;
  }
  if (*(int *)0x7f0 == -0x292a) {
    (*(code *)*(undefined2 *)0x7f2)();
  }
  if ((*(byte *)(param_1 + 0x326) & 0x20) != 0) {
    bVar9 = false;
    pcVar2 = (code *)swi(0x21);
    (*pcVar2)();
    if (bVar9) goto LAB_1000_3b11;
  }
  if ((*(byte *)(param_1 + 0x326) & 0x80) != 0) {
    bVar9 = true;
    iVar6 = param_3;
    pcVar8 = param_2;
    if (param_3 != 0) {
      do {
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar1 = pcVar8;
        pcVar8 = pcVar8 + 1;
        bVar9 = *pcVar1 == '\n';
      } while (!bVar9);
      if (!bVar9) goto LAB_1000_3ba7;
      uVar5 = FUN_1000_3c3c();
      if (uVar5 < 0xa9) {
        uVar10 = FUN_1000_0dfa();
        pcVar7 = (char *)((ulong)uVar10 >> 0x10);
        bVar9 = pcVar8 < pcVar7;
        if (pcVar8 != pcVar7) {
          pcVar2 = (code *)swi(0x21);
          uVar5 = (*pcVar2)(iVar6);
          if ((bVar9) || (uVar5 < (uint)((int)pcVar8 - (int)pcVar7))) {
            uVar4 = FUN_1000_10d5();
            return uVar4;
          }
        }
        return (int)uVar10;
      }
      pcVar7 = &stack0xfff2;
      pcVar8 = &stack0xfff2;
      do {
        pcVar1 = param_2;
        param_2 = param_2 + 1;
        cVar3 = *pcVar1;
        if (cVar3 == '\n') {
          cVar3 = '\r';
          if (pcVar8 == pcVar7) {
            cVar3 = FUN_1000_3baf();
          }
          pcVar1 = pcVar8;
          pcVar8 = pcVar8 + 1;
          *pcVar1 = cVar3;
          cVar3 = '\n';
        }
        if (pcVar8 == pcVar7) {
          cVar3 = FUN_1000_3baf();
        }
        pcVar1 = pcVar8;
        pcVar8 = pcVar8 + 1;
        *pcVar1 = cVar3;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
      FUN_1000_3baf();
    }
    uVar4 = FUN_1000_3bf9();
    return uVar4;
  }
LAB_1000_3ba7:
  uVar4 = FUN_1000_3c07();
  return uVar4;
}


// ---- FUN_1000_3baf @ 1000:3baf

/* WARNING: Unable to track spacebase fully for stack */

undefined2 __cdecl16near FUN_1000_3baf(void)

{
  code *pcVar1;
  undefined2 in_AX;
  uint uVar2;
  undefined2 uVar3;
  uint in_DX;
  int unaff_BP;
  uint unaff_DI;
  undefined2 unaff_SS;
  bool bVar4;
  
  bVar4 = unaff_DI < in_DX;
  if (unaff_DI != in_DX) {
    pcVar1 = (code *)swi(0x21);
    uVar2 = (*pcVar1)();
    if ((bVar4) ||
       (*(int *)(unaff_BP + -2) = *(int *)(unaff_BP + -2) + uVar2, uVar2 < unaff_DI - in_DX)) {
      uVar3 = FUN_1000_10d5();
      return uVar3;
    }
  }
  return in_AX;
}


// ---- FUN_1000_3bf9 @ 1000:3bf9

/* WARNING: Stack frame is not setup normally: Input value of stackpointer is not used */

void FUN_1000_3bf9(void)

{
  FUN_1000_10d5();
  return;
}


// ---- FUN_1000_3c07 @ 1000:3c07

void FUN_1000_3c07(void)

{
  code *pcVar1;
  int unaff_BP;
  undefined2 unaff_SS;
  
  if (*(int *)(unaff_BP + 8) != 0) {
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
    FUN_1000_10d5();
    return;
  }
  FUN_1000_10d5();
  return;
}


// ---- FUN_1000_3c3c @ 1000:3c3c

void FUN_1000_3c3c(void)

{
  code *in_stack_00000000;
  
                    /* WARNING: Could not recover jumptable at 0x00013c48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*in_stack_00000000)();
  return;
}


// ---- FUN_1000_3c4e @ 1000:3c4e

void __cdecl16near FUN_1000_3c4e(uint param_1)

{
  byte *pbVar1;
  undefined2 unaff_DS;
  
  if (*(uint *)0x2e4 < param_1) {
    pbVar1 = (byte *)(param_1 - 2);
    *pbVar1 = *pbVar1 | 1;
    if (pbVar1 < (byte *)*(undefined2 *)0x2e6) {
      *(undefined2 *)0x2e6 = pbVar1;
    }
  }
  return;
}


// ---- FUN_1000_3c6f @ 1000:3c6f

void __cdecl16near FUN_1000_3c6f(uint param_1)

{
  int iVar1;
  undefined2 unaff_DS;
  bool bVar2;
  
  do {
    bVar2 = param_1 < 0xffe8;
    if (param_1 < 0xffe9) {
      FUN_1000_3caa();
      if (!bVar2) {
        return;
      }
      FUN_1000_1fca();
      if ((!bVar2) && (FUN_1000_3caa(), !bVar2)) {
        return;
      }
    }
    if (*(int *)0x7ec == 0) {
      return;
    }
    iVar1 = (*(code *)*(undefined2 *)0x7ec)(param_1);
  } while (iVar1 != 0);
  return;
}


// ---- FUN_1000_3caa @ 1000:3caa

uint * __cdecl16near FUN_1000_3caa(void)

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
  undefined2 unaff_DS;
  
  uVar4 = in_CX + 1U & 0xfffe;
  puVar7 = (uint *)*(undefined2 *)(in_BX + 8);
  puVar5 = (uint *)*(undefined2 *)(in_BX + 10);
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
            *(int *)(in_BX + 8) = (int)puVar7 + uVar4;
            return puVar1;
          }
          if (CARRY2((uint)puVar1,uVar2)) goto LAB_1000_3d03;
          puVar6 = (uint *)((int)puVar1 + uVar2) + 1;
          uVar3 = *(uint *)((int)puVar1 + uVar2);
          if ((uVar3 & 1) == 0) break;
          uVar3 = uVar3 + uVar2 + 2;
          *puVar7 = uVar3;
        }
      }
      if (puVar6 + -1 < puVar5) break;
      if (((uint)puVar5 & 1) != 0) goto LAB_1000_3d03;
      puVar7 = (uint *)*(undefined2 *)(in_BX + 6);
      if ((uint *)*(undefined2 *)(in_BX + 8) == puVar7) goto LAB_1000_3d03;
      puVar5 = (uint *)((int)*(undefined2 *)(in_BX + 8) + -1);
    }
    puVar7 = (uint *)((int)puVar6 + uVar3);
  } while (!CARRY2((uint)puVar6,uVar3));
LAB_1000_3d03:
  puVar7 = (uint *)*(undefined2 *)(in_BX + 6);
  *(undefined2 *)(in_BX + 8) = puVar7;
  return puVar7;
}


// ---- FUN_1000_3d42 @ 1000:3d42

void FUN_1000_3d42(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  FUN_1000_10c0();
  return;
}


