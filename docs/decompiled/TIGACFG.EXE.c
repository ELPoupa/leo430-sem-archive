// Decompiled with Ghidra from TIGACFG.EXE
// Format: Old-style DOS Executable (MZ), image base 0000:0000

// ---- FUN_1000_0982 @ 1000:0982

void __cdecl16far FUN_1000_0982(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 unaff_DS;
  undefined4 uVar5;
  
  uVar4 = 0x2b4;
  func_0x00002e2c(0x1000);
  uVar2 = (undefined2)((ulong)*(undefined4 *)0x410 >> 0x10);
  iVar1 = (int)*(undefined4 *)0x410;
  if ((((*(int *)(iVar1 + 0x12) == 0) || (*(int *)(iVar1 + 6) == 0)) ||
      (*(int *)(iVar1 + 0x14) == 0)) || (*(int *)(iVar1 + 8) == 0)) {
    FUN_1000_17f8(0x41d);
  }
  uVar2 = (undefined2)((ulong)*(undefined4 *)0x410 >> 0x10);
  iVar1 = (int)*(undefined4 *)0x410;
  if (*(int *)(iVar1 + 2) == 1) {
    if (((*(int *)(iVar1 + 10) != 0) && (*(int *)(iVar1 + 0xc) != 0)) &&
       ((*(int *)(iVar1 + 0xe) != 0 && (*(int *)(iVar1 + 0x10) != 0)))) goto LAB_1000_0a0f;
    uVar2 = 0x443;
  }
  else {
    if ((*(int *)(iVar1 + 10) != 0) || (*(int *)(iVar1 + 0xc) != 0)) goto LAB_1000_0a0f;
    uVar2 = 0x469;
  }
  FUN_1000_17f8(uVar2);
LAB_1000_0a0f:
  if (*(int *)0x6e < 0) {
    uVar2 = (undefined2)((ulong)*(undefined4 *)0x410 >> 0x10);
    iVar1 = (int)*(undefined4 *)0x410;
    if (*(int *)(iVar1 + 10) != 0) {
      if (*(int *)(iVar1 + 10) == 1) {
        *(undefined2 *)0x6e = 0;
      }
      else {
        uVar4 = 0x187;
        iVar1 = func_0x000018ec(0x2b4,*(undefined2 *)(iVar1 + 10),*(undefined2 *)0x11d4,
                                *(undefined2 *)0x11d6);
        *(int *)0x6e = iVar1;
        if (iVar1 < 0) {
          FUN_1000_17f8(0x48f);
        }
      }
    }
  }
  uVar2 = uVar4;
  if (*(int *)0x76 < 0) {
    uVar3 = (undefined2)((ulong)*(undefined4 *)0x410 >> 0x10);
    iVar1 = (int)*(undefined4 *)0x410;
    if (*(int *)(iVar1 + 0xc) != 0) {
      if (*(int *)(iVar1 + 0xc) == 1) {
        *(undefined2 *)0x76 = 0;
      }
      else {
        uVar2 = 0x187;
        iVar1 = func_0x0000195e(uVar4,*(undefined2 *)(iVar1 + 0xc),*(undefined2 *)0x11c4,
                                *(undefined2 *)0x11c6);
        *(int *)0x76 = iVar1;
        if (iVar1 < 0) {
          FUN_1000_17f8(0x4ab);
        }
      }
    }
  }
  uVar4 = uVar2;
  if (*(int *)0x78 < 0) {
    uVar3 = (undefined2)((ulong)*(undefined4 *)0x410 >> 0x10);
    iVar1 = (int)*(undefined4 *)0x410;
    if (*(int *)(iVar1 + 0xe) != 0) {
      if (*(int *)(iVar1 + 0xe) == 1) {
        *(undefined2 *)0x78 = 0;
      }
      else {
        uVar4 = 0x187;
        iVar1 = func_0x000019ce(uVar2,*(undefined2 *)(iVar1 + 0xe),*(undefined2 *)0x11c8,
                                *(undefined2 *)0x11ca);
        *(int *)0x78 = iVar1;
        if (iVar1 < 0) {
          FUN_1000_17f8(0x4d1);
        }
      }
    }
  }
  uVar2 = uVar4;
  if (*(int *)0x34 < 0) {
    uVar3 = (undefined2)((ulong)*(undefined4 *)0x410 >> 0x10);
    iVar1 = (int)*(undefined4 *)0x410;
    if (*(int *)(iVar1 + 8) == 1) {
      *(undefined2 *)0x34 = 0;
    }
    else {
      uVar2 = 0x187;
      iVar1 = func_0x0000187a(uVar4,*(undefined2 *)(iVar1 + 8),*(undefined2 *)0x11cc,
                              *(undefined2 *)0x11ce);
      *(int *)0x34 = iVar1;
      if (iVar1 < 0) {
        FUN_1000_17f8(0x4f7);
      }
    }
  }
  uVar4 = uVar2;
  if (*(int *)0x72 < 0) {
    uVar3 = (undefined2)((ulong)*(undefined4 *)0x410 >> 0x10);
    iVar1 = (int)*(undefined4 *)0x410;
    if (*(int *)(iVar1 + 0x10) != 0) {
      if (*(int *)(iVar1 + 0x10) == 1) {
        *(undefined2 *)0x72 = 0;
      }
      else {
        uVar4 = 0x187;
        iVar1 = func_0x00001a40(uVar2,*(undefined2 *)(iVar1 + 0x10),*(undefined2 *)0x11d8,
                                *(undefined2 *)0x11da);
        *(int *)0x72 = iVar1;
        if (iVar1 < 0) {
          FUN_1000_17f8(0x515);
        }
      }
    }
  }
  uVar2 = uVar4;
  if (*(int *)0x74 < 0) {
    uVar3 = (undefined2)((ulong)*(undefined4 *)0x410 >> 0x10);
    iVar1 = (int)*(undefined4 *)0x410;
    if (*(int *)(iVar1 + 6) == 1) {
      *(undefined2 *)0x74 = 0;
    }
    else {
      uVar2 = 0x187;
      iVar1 = func_0x00001b40(uVar4,*(undefined2 *)(iVar1 + 6),*(undefined2 *)0x11e4,
                              *(undefined2 *)0x11e6);
      *(int *)0x74 = iVar1;
      if (iVar1 < 0) {
        FUN_1000_17f8(0x537);
      }
    }
  }
  uVar4 = uVar2;
  if (*(int *)0x70 < 0) {
    uVar3 = (undefined2)((ulong)*(undefined4 *)0x410 >> 0x10);
    iVar1 = (int)*(undefined4 *)0x410;
    if (*(int *)(iVar1 + 0x12) == 1) {
      *(undefined2 *)0x70 = 0;
    }
    else {
      uVar4 = 0x187;
      iVar1 = func_0x00001ab2(uVar2,*(undefined2 *)(iVar1 + 0x12),*(undefined2 *)0x11e0,
                              *(undefined2 *)0x11e2);
      *(int *)0x70 = iVar1;
      if (iVar1 < 0) {
        FUN_1000_17f8(0x54f);
      }
    }
  }
  uVar2 = uVar4;
  if (*(int *)0x0 < 0) {
    uVar2 = 0x187;
    iVar1 = func_0x00001b0c(uVar4);
    *(int *)0x0 = iVar1;
    if (iVar1 < 0) {
      FUN_1000_17f8(0x56b);
    }
  }
  uVar4 = uVar2;
  if (*(int *)0x0 < 0) {
    uVar3 = (undefined2)((ulong)*(undefined4 *)0x410 >> 0x10);
    iVar1 = (int)*(undefined4 *)0x410;
    if (*(int *)(iVar1 + 0x14) == 1) {
      *(undefined2 *)0x0 = 0;
    }
    else {
      uVar4 = 0x187;
      iVar1 = func_0x00001bdc(uVar2,*(undefined2 *)(iVar1 + 0x14),*(undefined2 *)0x11dc,
                              *(undefined2 *)0x11de);
      *(int *)0x0 = iVar1;
      if (iVar1 < 0) {
        FUN_1000_17f8(0x593);
      }
    }
  }
  FUN_1000_0d88();
  uVar5 = func_0x0000329a(uVar4,2,0x55d,0x5b2);
  iVar1 = (int)((ulong)uVar5 >> 0x10);
  uVar2 = *(undefined2 *)0x10d4;
  *(undefined2 *)0x36 = (int)uVar5;
  *(int *)0x38 = iVar1;
  if (iVar1 == 0 && *(int *)0x36 == 0) {
    FUN_1000_17f8(0x5b5);
  }
  func_0x00003428(0x2b4,0,0x565,*(undefined2 *)0x38,1,*(undefined2 *)0x36);
  func_0x000031a0(0x2b4,*(undefined2 *)0x36,*(undefined2 *)0x38);
  return;
}


// ---- FUN_1000_0d88 @ 1000:0d88

int * __cdecl16far FUN_1000_0d88(void)

{
  byte *pbVar1;
  uint *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined2 *puVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int *piVar15;
  undefined2 uVar16;
  undefined2 uVar17;
  undefined2 uVar18;
  undefined2 unaff_DS;
  undefined4 local_26;
  uint local_22;
  undefined4 local_1c;
  int *local_14;
  int iVar19;
  int iVar20;
  int *piVar21;
  int iVar22;
  uint uVar23;
  
  func_0x00002e2c(0x1000);
  uVar23 = 0;
  iVar22 = 0;
  while( true ) {
    uVar16 = (undefined2)((ulong)*(undefined4 *)0x410 >> 0x10);
    puVar11 = (undefined2 *)(undefined2 *)*(undefined4 *)0x410;
    if ((uint)puVar11[2] <= uVar23) break;
    iVar7 = puVar11[uVar23 * 2 + 0x42];
    iVar12 = iVar7 + *(int *)(iVar7 + 0x14);
    if ((*(int *)(iVar7 + 4) == *(int *)(*(int *)0x0 * 0x42 + (int)*(undefined4 *)0x11dc)) &&
       (*(int *)(*(int *)0x70 * 6 + iVar12 + 4) != 0 || *(int *)(*(int *)0x70 * 6 + iVar12 + 2) != 0
       )) {
      iVar22 = iVar22 + 1;
    }
    uVar23 = uVar23 + 1;
  }
  *(int *)0x3a = iVar22;
  *(undefined2 *)*(undefined4 *)0x414 = *puVar11;
  *(undefined2 *)((int)*(undefined4 *)0x414 + 6) = *(undefined2 *)((int)*(undefined4 *)0x410 + 2);
  *(int *)((int)*(undefined4 *)0x414 + 8) = iVar22;
  *(undefined2 *)((int)*(undefined4 *)0x414 + 10) = 0;
  iVar7 = (iVar22 + 6) * 4;
  uVar16 = (undefined2)((ulong)*(undefined4 *)0x414 >> 0x10);
  iVar12 = (int)*(undefined4 *)0x414;
  *(int *)(iVar12 + 0xc) = iVar7;
  *(int *)(iVar12 + 0xe) = iVar7 >> 0xf;
  uVar16 = (undefined2)((ulong)*(undefined4 *)0x414 >> 0x10);
  iVar12 = (int)*(undefined4 *)0x414;
  uVar23 = *(uint *)(iVar12 + 0xc);
  iVar7 = *(int *)(iVar12 + 0xe);
  *(int *)(iVar12 + 0x10) = uVar23 + 0x52;
  *(int *)(iVar12 + 0x12) = iVar7 + (uint)(0xffad < uVar23);
  uVar16 = (undefined2)((ulong)*(undefined4 *)0x414 >> 0x10);
  iVar12 = (int)*(undefined4 *)0x414;
  uVar23 = *(uint *)(iVar12 + 0x10);
  iVar7 = *(int *)(iVar12 + 0x12);
  *(int *)(iVar12 + 0x14) = uVar23 + 4;
  *(int *)(iVar12 + 0x16) = iVar7 + (uint)(0xfffb < uVar23);
  uVar16 = (undefined2)((ulong)*(undefined4 *)0x414 >> 0x10);
  iVar12 = (int)*(undefined4 *)0x414;
  uVar23 = *(uint *)(iVar12 + 0x14);
  iVar7 = *(int *)(iVar12 + 0x16);
  *(int *)(iVar12 + 0x18) = uVar23 + 0x78;
  *(int *)(iVar12 + 0x1a) = iVar7 + (uint)(0xff87 < uVar23);
  *(undefined2 *)0x11c0 = *(undefined2 *)((int)*(undefined4 *)0x414 + 0xc);
  *(undefined2 *)0x11c2 = 0x565;
  func_0x00005082();
  *(undefined2 *)((int)*(undefined4 *)0x11c0 + 0x40) = *(undefined2 *)0x70;
  *(undefined2 *)((int)*(undefined4 *)0x11c0 + 0x42) = *(undefined2 *)0x0;
  *(undefined2 *)((int)*(undefined4 *)0x11c0 + 0x44) = *(undefined2 *)0x74;
  *(undefined2 *)((int)*(undefined4 *)0x11c0 + 0x46) = *(undefined2 *)0x34;
  *(undefined2 *)((int)*(undefined4 *)0x11c0 + 0x48) = *(undefined2 *)0x6e;
  *(undefined2 *)((int)*(undefined4 *)0x11c0 + 0x4a) = *(undefined2 *)0x76;
  *(undefined2 *)((int)*(undefined4 *)0x11c0 + 0x4c) = *(undefined2 *)0x78;
  *(undefined2 *)((int)*(undefined4 *)0x11c0 + 0x4e) = *(undefined2 *)0x72;
  *(undefined2 *)((int)*(undefined4 *)0x11c0 + 0x50) = *(undefined2 *)0x0;
  if (*(int *)0x3a != 0) {
    *(undefined2 *)0x11bc = *(undefined2 *)((int)*(undefined4 *)0x414 + 0x10);
    *(undefined2 *)0x11be = 0x565;
    func_0x00005420(0x2b4,*(undefined2 *)0x11bc,*(undefined2 *)0x11be,
                    *(int *)0x70 * 0x44 + *(int *)0x11e0,*(undefined2 *)0x11e2,4);
    *(undefined2 *)0x11d0 = *(undefined2 *)((int)*(undefined4 *)0x414 + 0x14);
    *(undefined2 *)0x11d2 = 0x565;
    *(undefined2 *)*(undefined4 *)0x11d0 =
         *(undefined2 *)(*(int *)0x74 * 2 + (int)*(undefined4 *)0x11e4);
    *(undefined2 *)((int)*(undefined4 *)0x11d0 + 4) =
         *(undefined2 *)(*(int *)0x34 * 2 + (int)*(undefined4 *)0x11cc);
    if (*(int *)((int)*(undefined4 *)0x410 + 2) == 1) {
      *(undefined2 *)((int)*(undefined4 *)0x11d0 + 2) =
           *(undefined2 *)(*(int *)0x6e * 2 + (int)*(undefined4 *)0x11d4);
      *(undefined2 *)((int)*(undefined4 *)0x11d0 + 6) =
           *(undefined2 *)(*(int *)0x72 * 2 + (int)*(undefined4 *)0x11d8);
      uVar17 = (undefined2)((ulong)*(undefined4 *)0x11c4 >> 0x10);
      iVar12 = (int)*(undefined4 *)0x11c4;
      uVar16 = *(undefined2 *)(*(int *)0x76 * 4 + iVar12 + 2);
      uVar18 = (undefined2)((ulong)*(undefined4 *)0x11d0 >> 0x10);
      iVar7 = (int)*(undefined4 *)0x11d0;
      *(undefined2 *)(iVar7 + 8) = *(undefined2 *)(*(int *)0x76 * 4 + iVar12);
      *(undefined2 *)(iVar7 + 10) = uVar16;
      uVar17 = (undefined2)((ulong)*(undefined4 *)0x11c8 >> 0x10);
      iVar12 = (int)*(undefined4 *)0x11c8;
      uVar16 = *(undefined2 *)(*(int *)0x78 * 4 + iVar12 + 2);
      uVar18 = (undefined2)((ulong)*(undefined4 *)0x11d0 >> 0x10);
      iVar7 = (int)*(undefined4 *)0x11d0;
      *(undefined2 *)(iVar7 + 0xc) = *(undefined2 *)(*(int *)0x78 * 4 + iVar12);
      *(undefined2 *)(iVar7 + 0xe) = uVar16;
    }
    else {
      if (*(int *)0x6e < 0) {
        *(undefined2 *)((int)*(undefined4 *)0x11d0 + 2) = 0;
      }
      else {
        *(undefined2 *)((int)*(undefined4 *)0x11d0 + 2) =
             *(undefined2 *)(*(int *)0x6e * 2 + (int)*(undefined4 *)0x11d4);
      }
      if (*(int *)0x76 < 0) {
        uVar16 = (undefined2)((ulong)*(undefined4 *)0x11d0 >> 0x10);
        iVar7 = (int)*(undefined4 *)0x11d0;
        *(undefined2 *)(iVar7 + 10) = 0;
        *(undefined2 *)(iVar7 + 8) = 0;
      }
      else {
        uVar17 = (undefined2)((ulong)*(undefined4 *)0x11c4 >> 0x10);
        iVar12 = (int)*(undefined4 *)0x11c4;
        uVar16 = *(undefined2 *)(*(int *)0x76 * 4 + iVar12 + 2);
        uVar18 = (undefined2)((ulong)*(undefined4 *)0x11d0 >> 0x10);
        iVar7 = (int)*(undefined4 *)0x11d0;
        *(undefined2 *)(iVar7 + 8) = *(undefined2 *)(*(int *)0x76 * 4 + iVar12);
        *(undefined2 *)(iVar7 + 10) = uVar16;
      }
      if (*(int *)0x78 < 0) {
        uVar16 = (undefined2)((ulong)*(undefined4 *)0x11d0 >> 0x10);
        iVar7 = (int)*(undefined4 *)0x11d0;
        *(undefined2 *)(iVar7 + 0xe) = 0;
        *(undefined2 *)(iVar7 + 0xc) = 0;
      }
      else {
        uVar17 = (undefined2)((ulong)*(undefined4 *)0x11c8 >> 0x10);
        iVar12 = (int)*(undefined4 *)0x11c8;
        uVar16 = *(undefined2 *)(*(int *)0x76 * 4 + iVar12 + 2);
        uVar18 = (undefined2)((ulong)*(undefined4 *)0x11d0 >> 0x10);
        iVar7 = (int)*(undefined4 *)0x11d0;
        *(undefined2 *)(iVar7 + 0xc) = *(undefined2 *)(*(int *)0x76 * 4 + iVar12);
        *(undefined2 *)(iVar7 + 0xe) = uVar16;
      }
      *(undefined2 *)((int)*(undefined4 *)0x11d0 + 6) = 0;
    }
    uVar23 = 0x68;
    func_0x00005420(0x2b4,*(int *)0x11d0 + 0x10,*(undefined2 *)0x11d2,
                    *(undefined2 *)((int)*(undefined4 *)0x410 + 0x78),0x1566);
    pbVar1 = (byte *)((int)*(undefined4 *)0x11d0 + 0x11);
    *pbVar1 = *pbVar1 & 0x3f;
    puVar2 = (uint *)((int)*(undefined4 *)0x11d0 + 0x10);
    *puVar2 = *puVar2 | (uint)*(byte *)0x0 << 0xe;
    uVar16 = (undefined2)((ulong)*(undefined4 *)0x11d0 >> 0x10);
    iVar7 = (int)*(undefined4 *)0x11d0;
    if (*(int *)(iVar7 + 2) != 0) {
      iVar12 = *(int *)(iVar7 + 0x56);
      *(int *)(iVar7 + 0x56) = *(int *)(iVar7 + 0x56) + 1;
      uVar16 = (undefined2)((ulong)*(undefined4 *)0x11d0 >> 0x10);
      iVar7 = (int)*(undefined4 *)0x11d0;
      iVar12 = iVar12 * 4;
      *(undefined2 *)(iVar7 + iVar12 + 0x58) = *(undefined2 *)(iVar7 + 2);
      *(undefined2 *)((int)*(undefined4 *)0x11d0 + iVar12 + 0x5a) =
           *(undefined2 *)((int)*(undefined4 *)0x410 + 0x16);
    }
    uVar16 = (undefined2)((ulong)*(undefined4 *)0x11d0 >> 0x10);
    iVar7 = (int)*(undefined4 *)0x11d0;
    if (*(int *)(iVar7 + 10) != 0 || *(int *)(iVar7 + 8) != 0) {
      iVar12 = *(int *)(iVar7 + 0x14);
      *(int *)(iVar7 + 0x14) = *(int *)(iVar7 + 0x14) + 1;
      uVar17 = (undefined2)((ulong)*(undefined4 *)0x11d0 >> 0x10);
      iVar7 = (int)*(undefined4 *)0x11d0;
      uVar16 = *(undefined2 *)(iVar7 + 10);
      iVar12 = iVar12 * 8;
      *(undefined2 *)(iVar7 + iVar12 + 0x16) = *(undefined2 *)(iVar7 + 8);
      *(undefined2 *)(iVar7 + iVar12 + 0x18) = uVar16;
      uVar17 = (undefined2)((ulong)*(undefined4 *)0x410 >> 0x10);
      iVar7 = (int)*(undefined4 *)0x410;
      uVar16 = *(undefined2 *)(iVar7 + 0x1a);
      uVar18 = (undefined2)((ulong)*(undefined4 *)0x11d0 >> 0x10);
      iVar13 = (int)*(undefined4 *)0x11d0;
      *(undefined2 *)(iVar13 + iVar12 + 0x1a) = *(undefined2 *)(iVar7 + 0x18);
      *(undefined2 *)(iVar13 + iVar12 + 0x1c) = uVar16;
    }
    uVar16 = (undefined2)((ulong)*(undefined4 *)0x11d0 >> 0x10);
    iVar7 = (int)*(undefined4 *)0x11d0;
    if (*(int *)(iVar7 + 0xe) != 0 || *(int *)(iVar7 + 0xc) != 0) {
      iVar12 = *(int *)(iVar7 + 0x14);
      *(int *)(iVar7 + 0x14) = *(int *)(iVar7 + 0x14) + 1;
      uVar17 = (undefined2)((ulong)*(undefined4 *)0x11d0 >> 0x10);
      iVar7 = (int)*(undefined4 *)0x11d0;
      uVar16 = *(undefined2 *)(iVar7 + 0xe);
      iVar12 = iVar12 * 8;
      *(undefined2 *)(iVar7 + iVar12 + 0x16) = *(undefined2 *)(iVar7 + 0xc);
      *(undefined2 *)(iVar7 + iVar12 + 0x18) = uVar16;
      uVar17 = (undefined2)((ulong)*(undefined4 *)0x410 >> 0x10);
      iVar7 = (int)*(undefined4 *)0x410;
      uVar16 = *(undefined2 *)(iVar7 + 0x1e);
      uVar18 = (undefined2)((ulong)*(undefined4 *)0x11d0 >> 0x10);
      iVar13 = (int)*(undefined4 *)0x11d0;
      *(undefined2 *)(iVar13 + iVar12 + 0x1a) = *(undefined2 *)(iVar7 + 0x1c);
      *(undefined2 *)(iVar13 + iVar12 + 0x1c) = uVar16;
    }
    local_14 = (int *)*(undefined2 *)((int)*(undefined4 *)0x414 + 0x18);
    iVar7 = 0;
    iVar12 = 0;
    while (piVar6 = local_14, iVar7 < iVar22) {
      iVar13 = *(int *)((int)*(undefined4 *)0x410 + iVar12 * 4 + 0x84);
      iVar10 = iVar13 + *(int *)(iVar13 + 0x14);
      if ((*(uint *)(iVar13 + 4) == uVar23) &&
         (*(int *)(*(int *)0x70 * 6 + iVar10 + 4) != 0 ||
          *(int *)(*(int *)0x70 * 6 + iVar10 + 2) != 0)) {
        piVar15 = (int *)(iVar13 + *(int *)(iVar13 + 0xc));
        local_26 = (int *)CONCAT22(0x1566,piVar15);
        iVar10 = *(int *)(iVar13 + 0x10);
        iVar4 = *(int *)(iVar13 + 0x18);
        iVar5 = *(int *)(iVar13 + 0x1c);
        uVar16 = (undefined2)((ulong)*(undefined4 *)0x414 >> 0x10);
        iVar14 = (int)*(undefined4 *)0x414;
        *(undefined2 *)(iVar14 + iVar7 * 4 + 0x18) = local_14;
        *(int *)(iVar14 + iVar7 * 4 + 0x1a) = (int)local_14 >> 0xf;
        piVar3 = (int *)*(undefined2 *)0x10d6;
        local_1c = (int *)CONCAT22(piVar3,local_14);
        local_14[2] = *(int *)(iVar13 + 4);
        local_14[3] = *(int *)(iVar13 + 6);
        local_14[4] = *(int *)(iVar13 + 8);
        local_14[5] = *(int *)(iVar13 + 10);
        local_14[6] = 0x24;
        local_14[7] = 0;
        uVar8 = (piVar15[1] + *local_26) * 8 + 4;
        func_0x00005420(0x2b4,(int)local_14 + local_14[6],piVar3,piVar15,0x1566,uVar8);
        uVar23 = local_14[6];
        iVar7 = local_14[7];
        local_14[8] = uVar8 + local_14[6];
        local_14[9] = ((int)uVar8 >> 0xf) + iVar7 + (uint)CARRY2(uVar8,uVar23);
        iVar14 = (int)local_14 + local_14[8];
        iVar19 = 0x2b4;
        func_0x00005420(0x2b4,iVar14,piVar3,iVar13 + iVar10,0x1566,0x4e);
        uVar23 = local_14[8];
        iVar7 = local_14[9];
        local_14[10] = uVar23 + 0x4e;
        local_14[0xb] = iVar7 + (uint)(0xffb1 < uVar23);
        if (*(int *)((int)*(undefined4 *)0x414 + 6) == 1) {
          iVar10 = (int)local_14 + local_14[10];
          local_22 = 0x24;
          iVar20 = 0x2b4;
          iVar7 = iVar10;
          func_0x00005420(0x2b4,iVar10,piVar3,*(undefined2 *)(iVar19 + *(int *)0x70 * 6 + 2),0x1566,
                          0x24);
          uVar16 = *(undefined2 *)(*(int *)0x70 * 6 + iVar20);
        }
        else {
          iVar10 = (int)local_14 + local_14[10];
          local_22 = 0x1c;
          iVar20 = 0x2b4;
          iVar7 = iVar10;
          func_0x00005420(0x2b4,iVar10,piVar3,*(undefined2 *)(iVar19 + *(int *)0x70 * 6 + 2),0x1566,
                          0x1c);
          uVar16 = *(undefined2 *)(*(int *)0x70 * 6 + iVar20);
        }
        *(undefined2 *)(iVar10 + 0x16) = uVar16;
        uVar23 = local_14[10];
        iVar7 = local_14[0xb];
        local_14[0xc] = local_22 + local_14[10];
        local_14[0xd] = iVar7 + (uint)CARRY2(local_22,uVar23);
        uVar8 = local_14[3] * 8;
        func_0x00005420(0x2b4,(int)local_14 + local_14[0xc],piVar3,iVar13 + iVar4,0x1566,uVar8);
        uVar23 = local_14[0xc];
        iVar7 = local_14[0xd];
        local_14[0xe] = uVar8 + local_14[0xc];
        local_14[0xf] = ((int)uVar8 >> 0xf) + iVar7 + (uint)CARRY2(uVar8,uVar23);
        uVar9 = local_14[4] * 8;
        iVar7 = 0x1566;
        piVar21 = (int *)CONCAT22(iVar13 + iVar5,piVar3);
        local_14 = (int *)0x156e;
        uVar23 = uVar9;
        func_0x00005420(0x2b4);
        uVar8 = piVar6[0xe];
        iVar13 = piVar6[0xf];
        piVar6[0x10] = uVar9 + piVar6[0xe];
        piVar6[0x11] = ((int)uVar9 >> 0xf) + iVar13 + (uint)CARRY2(uVar9,uVar8);
        uVar8 = *piVar21 - ((int *)piVar21)[0x10];
        if (uVar8 != 0) {
          iVar7 = 0x1566;
          local_14 = (int *)0x15ae;
          uVar23 = uVar8;
          func_0x00005420(0x2b4,(int)piVar6 + piVar6[0x10],piVar3);
        }
        uVar9 = piVar6[0x10];
        iVar10 = uVar8 + piVar6[0x10];
        iVar13 = piVar6[0x11];
        *local_1c = iVar10;
        piVar6[1] = ((int)uVar8 >> 0xf) + iVar13 + (uint)CARRY2(uVar8,uVar9);
        local_14 = (int *)((int)local_14 + iVar10);
        iVar7 = iVar7 + 1;
      }
      iVar12 = iVar12 + 1;
    }
    uVar16 = (undefined2)((ulong)*(undefined4 *)0x414 >> 0x10);
    iVar22 = (int)*(undefined4 *)0x414;
    *(undefined2 *)(iVar22 + 2) = local_14;
    *(int *)(iVar22 + 4) = (int)local_14 >> 0xf;
    return local_14;
  }
  return (int *)*(undefined2 *)((int)*(undefined4 *)0x414 + 0x10);
}


// ---- FUN_1000_15f4 @ 1000:15f4

int __cdecl16far FUN_1000_15f4(int param_1,undefined4 param_2)

{
  byte bVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  undefined2 uVar5;
  undefined2 unaff_DS;
  int iVar6;
  
  func_0x00002e2c(0x1000);
  iVar6 = 1;
  do {
    if (param_1 <= iVar6) {
      return 0;
    }
    pcVar2 = (char *)*(undefined4 *)(iVar6 * 4 + (int)param_2);
    uVar5 = (undefined2)((ulong)pcVar2 >> 0x10);
    pcVar4 = (char *)pcVar2;
    if (*pcVar2 != '/') {
      return iVar6;
    }
    if (pcVar4[2] == '\0') {
      bVar1 = pcVar4[1];
      if (bVar1 == 0x73) {
LAB_1000_16dc:
        uVar5 = 0x5ff;
      }
      else {
        if (bVar1 < 0x74) {
          if (bVar1 != 0x53) {
            if ((char)bVar1 < 'T') {
              if (bVar1 != 0x44) {
                if (bVar1 == 0x48) {
LAB_1000_16d6:
                  FUN_1000_1722();
                }
                else {
                  if (bVar1 != 0x51) goto LAB_1000_16fc;
LAB_1000_16ce:
                  *(undefined2 *)0x418 = 1;
                }
                goto LAB_1000_170c;
              }
            }
            else if (bVar1 != 100) {
              if (bVar1 == 0x68) goto LAB_1000_16d6;
              if (bVar1 == 0x71) goto LAB_1000_16ce;
              goto LAB_1000_16fc;
            }
          }
          goto LAB_1000_16dc;
        }
LAB_1000_16fc:
        uVar5 = 0x621;
      }
LAB_1000_16e5:
      FUN_1000_17f8(uVar5);
    }
    else {
      bVar1 = pcVar4[1];
      if (bVar1 == 0x73) {
LAB_1000_1680:
        iVar3 = func_0x00005302(0x2b4,pcVar4 + 2,uVar5,0x5d2);
        if (iVar3 == 0) {
          *(undefined2 *)0x0 = 0xffff;
        }
      }
      else {
        if (0x73 < bVar1) {
LAB_1000_1646:
          uVar5 = 0x5d5;
          goto LAB_1000_16e5;
        }
        if (bVar1 != 0x44) {
          if (bVar1 == 0x53) goto LAB_1000_1680;
          if (bVar1 != 100) goto LAB_1000_1646;
        }
        iVar3 = func_0x00005302(0x2b4,pcVar4 + 2,uVar5,0x5cf);
        if (iVar3 == 0) {
          *(undefined2 *)0x70 = 0xffff;
        }
      }
    }
LAB_1000_170c:
    iVar6 = iVar6 + 1;
  } while( true );
}


// ---- FUN_1000_1722 @ 1000:1722

void __cdecl16far FUN_1000_1722(void)

{
  func_0x00002e2c(0x1000);
  func_0x000035c0(0x2b4,0x64b);
  func_0x000035c0(0x2b4,0x64d);
  func_0x000035c0(0x2b4,0x672);
  func_0x000035c0(0x2b4,0x69e);
  func_0x000035c0(0x2b4,0x6c1);
  func_0x000035c0(0x2b4,0x6e1);
  func_0x000035c0(0x2b4,0x71c);
  func_0x000035c0(0x2b4,0x757);
  func_0x000035c0(0x2b4,0x78c);
  func_0x000035c0(0x2b4,0x7c0);
  func_0x000035c0(0x2b4,0x7c9);
  func_0x000035c0(0x2b4,0x800);
  func_0x000035c0(0x2b4,0x83e);
  func_0x000035c0(0x2b4,0x848);
  func_0x000035c0(0x2b4,0x87d);
  func_0x00002d41(0x2b4,0);
  return;
}


// ---- FUN_1000_17f8 @ 1000:17f8

void __cdecl16far
FUN_1000_17f8(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  func_0x00002e2c(0x1000);
  FUN_1000_183e();
  func_0x000035c0(0x2b4,0x8bb);
  func_0x000035c0(0x2b4,param_1,param_2,param_3,param_4);
  func_0x000035c0(0x2b4,0x8c9);
  func_0x00002d41(0x2b4,1);
  return;
}


// ---- FUN_1000_183e @ 1000:183e

void __cdecl16far FUN_1000_183e(void)

{
  int iVar1;
  undefined2 uVar2;
  
  func_0x00002e2c(0x1000);
  func_0x00001da6(0x2b4,0);
  func_0x000035c0(0x1da,0x8cd);
  uVar2 = 0xc4;
  iVar1 = func_0x000050e2(0x2b4,0x8f2);
  func_0x00002834(0x2b4,iVar1 + -1,uVar2);
  return;
}


// ---- FUN_1000_187a @ 1000:187a

void __cdecl16far FUN_1000_187a(int param_1)

{
  int unaff_SS;
  undefined1 auStack_374 [800];
  int local_54 [32];
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined1 *puStack_10;
  int iVar1;
  
  func_0x00002e2c();
  for (iVar1 = 0; iVar1 < param_1; iVar1 = iVar1 + 1) {
    uStack_12 = 0x2b4;
    uStack_14 = 0x18b3;
    puStack_10 = auStack_374 + iVar1 * 0x28;
    func_0x00005296();
    local_54[iVar1 * 2] = (int)(auStack_374 + iVar1 * 0x28);
    local_54[iVar1 * 2 + 1] = unaff_SS;
  }
  puStack_10 = (undefined1 *)param_1;
  uStack_12 = 0x2b4;
  uStack_14 = 0x18df;
  FUN_1000_1c32();
  return;
}


// ---- FUN_1000_18ec @ 1000:18ec

void __cdecl16far FUN_1000_18ec(int param_1)

{
  int unaff_SS;
  undefined1 auStack_374 [800];
  int local_54 [32];
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined1 *puStack_10;
  int iVar1;
  
  func_0x00002e2c();
  for (iVar1 = 0; iVar1 < param_1; iVar1 = iVar1 + 1) {
    uStack_12 = 0x2b4;
    uStack_14 = 0x1925;
    puStack_10 = auStack_374 + iVar1 * 0x28;
    func_0x00005296();
    local_54[iVar1 * 2] = (int)(auStack_374 + iVar1 * 0x28);
    local_54[iVar1 * 2 + 1] = unaff_SS;
  }
  puStack_10 = (undefined1 *)param_1;
  uStack_12 = 0x2b4;
  uStack_14 = 0x1951;
  FUN_1000_1c32();
  return;
}


// ---- FUN_1000_195e @ 1000:195e

void __cdecl16far FUN_1000_195e(int param_1)

{
  int unaff_SS;
  undefined1 auStack_374 [800];
  int local_54 [31];
  undefined2 uStack_16;
  undefined2 uStack_14;
  undefined1 *puStack_12;
  int iVar1;
  
  func_0x00002e2c();
  for (iVar1 = 0; iVar1 < param_1; iVar1 = iVar1 + 1) {
    uStack_14 = 0x2b4;
    uStack_16 = 0x199d;
    puStack_12 = auStack_374 + iVar1 * 0x28;
    func_0x00005296();
    local_54[iVar1 * 2] = (int)(auStack_374 + iVar1 * 0x28);
    local_54[iVar1 * 2 + 1] = unaff_SS;
  }
  puStack_12 = (undefined1 *)0x2b4;
  uStack_14 = 0x19c2;
  FUN_1000_1c32();
  return;
}


// ---- FUN_1000_19ce @ 1000:19ce

void __cdecl16far FUN_1000_19ce(int param_1)

{
  int unaff_SS;
  undefined1 auStack_374 [800];
  int local_54 [31];
  undefined2 uStack_16;
  undefined2 uStack_14;
  undefined1 *puStack_12;
  int iVar1;
  
  func_0x00002e2c();
  for (iVar1 = 0; iVar1 < param_1; iVar1 = iVar1 + 1) {
    uStack_14 = 0x2b4;
    uStack_16 = 0x1a0f;
    puStack_12 = auStack_374 + iVar1 * 0x28;
    func_0x00005296();
    local_54[iVar1 * 2] = (int)(auStack_374 + iVar1 * 0x28);
    local_54[iVar1 * 2 + 1] = unaff_SS;
  }
  puStack_12 = (undefined1 *)0x2b4;
  uStack_14 = 0x1a34;
  FUN_1000_1c32();
  return;
}


// ---- FUN_1000_1a40 @ 1000:1a40

void __cdecl16far FUN_1000_1a40(int param_1)

{
  int unaff_SS;
  undefined1 auStack_220 [500];
  int local_2c [12];
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined1 *puStack_10;
  int iVar1;
  
  func_0x00002e2c();
  for (iVar1 = 0; iVar1 < param_1; iVar1 = iVar1 + 1) {
    uStack_12 = 0x2b4;
    uStack_14 = 0x1a79;
    puStack_10 = auStack_220 + iVar1 * 0x32;
    func_0x00005296();
    local_2c[iVar1 * 2] = (int)(auStack_220 + iVar1 * 0x32);
    local_2c[iVar1 * 2 + 1] = unaff_SS;
  }
  puStack_10 = (undefined1 *)param_1;
  uStack_12 = 0x2b4;
  uStack_14 = 0x1aa5;
  FUN_1000_1c32();
  return;
}


// ---- FUN_1000_1ab2 @ 1000:1ab2

void __cdecl16far FUN_1000_1ab2(int param_1,int param_2,int param_3)

{
  undefined2 unaff_SS;
  int local_cc [93];
  undefined2 uStack_12;
  undefined2 uStack_10;
  int iStack_e;
  int *piStack_c;
  int iVar1;
  
  func_0x00002e2c();
  for (iVar1 = 0; iVar1 < param_1; iVar1 = iVar1 + 1) {
    local_cc[iVar1 * 2] = iVar1 * 0x44 + param_2 + 4;
    local_cc[iVar1 * 2 + 1] = param_3;
  }
  piStack_c = local_cc;
  iStack_e = param_1;
  uStack_10 = 0x2b4;
  uStack_12 = 0x1b00;
  FUN_1000_1c32();
  return;
}


// ---- FUN_1000_1b0c @ 1000:1b0c

void __cdecl16far FUN_1000_1b0c(void)

{
  func_0x00002e2c();
  FUN_1000_1c32();
  return;
}


// ---- FUN_1000_1b40 @ 1000:1b40

void __cdecl16far FUN_1000_1b40(int param_1,undefined4 param_2)

{
  int unaff_SS;
  undefined1 auStack_374 [800];
  int local_54;
  int local_52 [32];
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined1 *puStack_e;
  
  func_0x00002e2c();
  for (local_54 = 0; local_54 < param_1; local_54 = local_54 + 1) {
    if (*(int *)(local_54 * 2 + (int)param_2) == 0) {
      puStack_e = (undefined1 *)0x2b4;
      uStack_10 = 0x1b6c;
      func_0x00005296();
    }
    else {
      puStack_e = auStack_374 + local_54 * 0x28;
      uStack_10 = 0x2b4;
      uStack_12 = 0x1bba;
      func_0x00005296();
    }
    local_52[local_54 * 2] = (int)(auStack_374 + local_54 * 0x28);
    local_52[local_54 * 2 + 1] = unaff_SS;
  }
  puStack_e = (undefined1 *)param_1;
  uStack_10 = 0x2b4;
  uStack_12 = 0x1bd1;
  FUN_1000_1c32();
  return;
}


// ---- FUN_1000_1bdc @ 1000:1bdc

void __cdecl16far FUN_1000_1bdc(int param_1,int param_2,int param_3)

{
  undefined2 unaff_SS;
  int local_54 [33];
  undefined2 uStack_12;
  undefined2 uStack_10;
  int iStack_e;
  int *piStack_c;
  int iVar1;
  
  func_0x00002e2c();
  for (iVar1 = 0; iVar1 < param_1; iVar1 = iVar1 + 1) {
    local_54[iVar1 * 2] = iVar1 * 0x42 + param_2 + 2;
    local_54[iVar1 * 2 + 1] = param_3;
  }
  piStack_c = local_54;
  iStack_e = param_1;
  uStack_10 = 0x2b4;
  uStack_12 = 0x1c27;
  FUN_1000_1c32();
  return;
}


// ---- FUN_1000_1c32 @ 1000:1c32

void __cdecl16far FUN_1000_1c32(undefined2 param_1,undefined2 param_2,undefined2 param_3)

{
  int iVar1;
  undefined2 uVar2;
  
  func_0x00002e2c(0x1000);
  func_0x0000183e(0x2b4);
  func_0x000035c0(0,0xb76);
  func_0x00001dee(0x2b4,0,0x16);
  func_0x000035c0(0x1da,0xb80);
  func_0x000035c0(0x2b4,0xbc3);
  func_0x000035c0(0x2b4,0xc07);
  func_0x00001dee(0x2b4,3,4);
  func_0x00002834(0x1da,0x42,0xc4);
  func_0x00001dee(0x1da,3,0x15);
  func_0x00002834(0x1da,0x42,0xc4);
  func_0x00001dee(0x1da,2,4);
  func_0x00001fd0(0x1da,0xda);
  func_0x00001dee(0x1da,0x45,4);
  func_0x00001fd0(0x1da,0xbf);
  iVar1 = 5;
  do {
    func_0x00001dee(0x1da,2,iVar1);
    uVar2 = 0xb3;
    func_0x00001fd0(0x1da,0xb3);
    func_0x00001dee(0x1da,0x45,uVar2);
    iVar1 = 0xb3;
    func_0x00001fd0(0x1da);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x15);
  func_0x00001dee(0x1da,2,0x15);
  func_0x00001fd0(0x1da,0xc0);
  func_0x00001dee(0x1da,0x45,0x15);
  func_0x00001fd0(0x1da,0xd9);
  func_0x00002862(0x1da,4,5,0x10,param_1,param_2,param_3);
  return;
}


// ---- FUN_1000_1da6 @ 1000:1da6

void __cdecl16far FUN_1000_1da6(undefined1 param_1)

{
  undefined2 unaff_DS;
  undefined1 uVar1;
  
  func_0x00002e2c(0x1000);
  FUN_1000_2028(param_1);
  uVar1 = 0x20;
  FUN_1000_20b6(0,0,0x4f,0x18);
  *(undefined1 *)0xc30 = uVar1;
  FUN_1000_1dee(0,0);
  return;
}


// ---- FUN_1000_1dee @ 1000:1dee

void __cdecl16far FUN_1000_1dee(undefined1 param_1,undefined1 param_2)

{
  undefined2 local_10;
  undefined2 uStack_e;
  undefined2 uStack_c;
  undefined2 local_a;
  
  func_0x00002e2c();
  local_10 = CONCAT11(2,(undefined1)local_10);
  local_a = (undefined2 *)CONCAT11(param_2,param_1);
  FUN_1000_2202();
  local_a = &local_10;
  uStack_c = 0x10;
  uStack_e = 0x2b4;
  local_10 = 0x1e20;
  func_0x0000520c();
  return;
}


// ---- FUN_1000_1e24 @ 1000:1e24

void __cdecl16far FUN_1000_1e24(undefined1 *param_1,undefined1 *param_2)

{
  undefined2 local_10;
  undefined2 uStack_e;
  undefined2 uStack_c;
  undefined2 local_a;
  
  func_0x00002e2c();
  local_10 = CONCAT11(3,(undefined1)local_10);
  FUN_1000_2202();
  local_a = &local_10;
  uStack_c = 0x10;
  uStack_e = 0x2b4;
  local_10 = 0x1e4a;
  func_0x0000520c();
  *param_1 = (undefined1)local_a;
  *param_2 = local_a._1_1_;
  return;
}


// ---- FUN_1000_1e60 @ 1000:1e60

uint __cdecl16far FUN_1000_1e60(void)

{
  uint local_10 [3];
  uint *puStack_a;
  
  func_0x00002e2c();
  puStack_a = local_10;
  local_10[2] = 0x10;
  local_10[1] = 0x2b4;
  local_10[0] = 0x1e7f;
  func_0x0000520c();
  return local_10[0] & 0xff;
}


// ---- FUN_1000_1e88 @ 1000:1e88

void __cdecl16far FUN_1000_1e88(void)

{
  undefined2 local_10;
  undefined2 uStack_e;
  undefined2 uStack_c;
  undefined2 *puStack_a;
  
  func_0x00002e2c();
  puStack_a = &local_10;
  uStack_c = 0x10;
  uStack_e = 0x2b4;
  local_10 = 0x1ead;
  func_0x0000520c();
  return;
}


// ---- FUN_1000_1eb2 @ 1000:1eb2

int __cdecl16far FUN_1000_1eb2(void)

{
  int iVar1;
  undefined2 unaff_SS;
  undefined1 local_102 [238];
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined1 *puStack_10;
  
  func_0x00002e2c();
  puStack_10 = local_102;
  uStack_12 = 0x2b4;
  uStack_14 = 0x1ede;
  iVar1 = func_0x0000534e();
  local_102[iVar1] = 0;
  FUN_1000_1efc();
  return iVar1;
}


// ---- FUN_1000_1efc @ 1000:1efc

void __cdecl16far FUN_1000_1efc(char *param_1)

{
  char *pcVar1;
  int unaff_SS;
  undefined2 unaff_DS;
  char local_18;
  char local_16 [2];
  char local_14;
  undefined2 local_12;
  undefined2 local_10;
  undefined2 local_e;
  undefined2 uStack_c;
  char *pcStack_a;
  int iVar2;
  
  func_0x00002e2c();
  pcStack_a = local_16;
  uStack_c = 0x2b4;
  local_e = 0x1f1a;
  FUN_1000_1e24();
  while( true ) {
    pcVar1 = param_1;
    param_1 = (char *)CONCAT22(param_1._2_2_,(char *)param_1 + 1);
    local_14 = *pcVar1;
    if (local_14 == '\0') break;
    if (local_14 == '\n') {
      iVar2 = 1;
    }
    else {
      local_12 = CONCAT11(9,local_14);
      local_10 = CONCAT11(local_10._1_1_,*(undefined1 *)0xc30);
      FUN_1000_2202();
      pcStack_a = (char *)&local_12;
      uStack_c = 0x10;
      local_e = 0x2b4;
      local_10 = 0x1f58;
      func_0x0000520c();
      iVar2 = unaff_SS;
    }
    if ((iVar2 == 0) && ((int)local_16[0] != *(int *)0xc36)) {
      local_16[0] = local_16[0] + '\x01';
    }
    else {
      local_16[0] = *(char *)0xc32;
      local_18 = local_18 + '\x01';
      if (*(int *)0xc38 < (int)local_18) {
        local_18 = *(char *)0xc38;
        pcStack_a = (char *)*(undefined2 *)0xc36;
        uStack_c = *(undefined2 *)0xc34;
        local_e = *(undefined2 *)0xc32;
        local_10 = 0x2b4;
        local_12 = 0x1f9f;
        FUN_1000_2062();
      }
    }
    pcStack_a = (char *)0x1fb5;
    FUN_1000_1dee();
  }
  return;
}


// ---- FUN_1000_1fd0 @ 1000:1fd0

void __cdecl16far FUN_1000_1fd0(undefined1 param_1)

{
  undefined2 unaff_DS;
  undefined2 local_10;
  undefined2 local_e;
  undefined2 local_c;
  undefined2 *puStack_a;
  
  func_0x00002e2c();
  local_10 = CONCAT11(0xe,param_1);
  local_e = CONCAT11(local_e._1_1_,*(undefined1 *)0xc30);
  FUN_1000_2202();
  puStack_a = &local_10;
  local_c = 0x10;
  local_e = 0x2b4;
  local_10 = 0x2007;
  func_0x0000520c();
  return;
}


// ---- FUN_1000_200c @ 1000:200c

void __cdecl16far FUN_1000_200c(byte param_1)

{
  undefined2 unaff_DS;
  
  func_0x00002e2c(0x1000);
  *(byte *)0xc30 = *(byte *)0xc30 & 0xf0;
  *(byte *)0xc30 = *(byte *)0xc30 | param_1 & 0xf;
  return;
}


// ---- FUN_1000_2028 @ 1000:2028

void __cdecl16far FUN_1000_2028(char param_1)

{
  undefined2 unaff_DS;
  
  func_0x00002e2c(0x1000);
  *(byte *)0xc30 = *(byte *)0xc30 & 0xf;
  *(byte *)0xc30 = *(byte *)0xc30 | param_1 << 4;
  return;
}


// ---- FUN_1000_2046 @ 1000:2046

void __cdecl16far FUN_1000_2046(byte param_1,char param_2)

{
  undefined2 unaff_DS;
  
  func_0x00002e2c(0x1000);
  *(byte *)0xc30 = param_2 << 4 | param_1;
  return;
}


// ---- FUN_1000_2062 @ 1000:2062

void __cdecl16far FUN_1000_2062(void)

{
  undefined2 local_10;
  undefined2 uStack_e;
  undefined2 local_c;
  undefined2 *local_a;
  
  func_0x00002e2c();
  local_a = &local_10;
  local_c = 0x10;
  uStack_e = 0x2b4;
  local_10 = 0x20b2;
  func_0x0000520c();
  return;
}


// ---- FUN_1000_20b6 @ 1000:20b6

void __cdecl16far
FUN_1000_20b6(undefined2 param_1,char param_2,undefined2 param_3,char param_4,undefined1 param_5)

{
  int iVar1;
  undefined2 unaff_DS;
  undefined2 local_12;
  undefined2 local_10;
  undefined2 *local_e;
  
  func_0x00002e2c();
  iVar1 = ((int)param_4 - (int)param_2) + 1;
  local_e = &local_12;
  local_10 = 0x2b4;
  local_12 = 0x20eb;
  FUN_1000_1e24();
  do {
    local_e = (undefined2 *)0x20ff;
    FUN_1000_1dee();
    local_10 = CONCAT11(9,param_5);
    local_e = (undefined2 *)CONCAT11(local_e._1_1_,*(undefined1 *)0xc30);
    FUN_1000_2202();
    local_e = &local_10;
    local_10 = 0x10;
    local_12 = 0x2b4;
    func_0x0000520c();
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  local_e = (undefined2 *)0x213c;
  FUN_1000_1dee();
  return;
}


// ---- FUN_1000_2146 @ 1000:2146

void __cdecl16far FUN_1000_2146(void)

{
  undefined2 local_10;
  undefined2 uStack_e;
  undefined2 local_c;
  undefined2 *puStack_a;
  
  func_0x00002e2c();
  puStack_a = &local_10;
  local_c = 0x10;
  uStack_e = 0x2b4;
  local_10 = 0x2171;
  func_0x0000520c();
  return;
}


// ---- FUN_1000_2176 @ 1000:2176

void __cdecl16far FUN_1000_2176(void)

{
  undefined2 local_10;
  undefined2 uStack_e;
  undefined2 uStack_c;
  undefined2 *puStack_a;
  
  func_0x00002e2c();
  local_10 = CONCAT11(3,(undefined1)local_10);
  FUN_1000_2202();
  puStack_a = &local_10;
  uStack_c = 0x10;
  uStack_e = 0x2b4;
  local_10 = 0x219c;
  func_0x0000520c();
  puStack_a = &local_10;
  uStack_c = 0x10;
  uStack_e = 0x2b4;
  local_10 = 0x21b7;
  func_0x0000520c();
  return;
}


// ---- FUN_1000_21bc @ 1000:21bc

void __cdecl16far FUN_1000_21bc(void)

{
  undefined2 local_10;
  undefined2 uStack_e;
  undefined2 uStack_c;
  undefined2 *puStack_a;
  
  func_0x00002e2c();
  local_10 = CONCAT11(3,(undefined1)local_10);
  FUN_1000_2202();
  puStack_a = &local_10;
  uStack_c = 0x10;
  uStack_e = 0x2b4;
  local_10 = 0x21e2;
  func_0x0000520c();
  puStack_a = &local_10;
  uStack_c = 0x10;
  uStack_e = 0x2b4;
  local_10 = 0x21fd;
  func_0x0000520c();
  return;
}


// ---- FUN_1000_2202 @ 1000:2202

uint __cdecl16far FUN_1000_2202(void)

{
  undefined2 local_10;
  uint uStack_e;
  undefined2 uStack_c;
  undefined2 *puStack_a;
  
  func_0x00002e2c();
  puStack_a = &local_10;
  uStack_c = 0x10;
  uStack_e = 0x2b4;
  local_10 = 0x2221;
  func_0x0000520c();
  return uStack_e >> 8;
}


// ---- FUN_1000_222a @ 1000:222a

void __cdecl16far FUN_1000_222a(void)

{
  int iVar1;
  
  func_0x00002e2c(0x1000);
  iVar1 = func_0x000051e4(0x2b4);
  if (iVar1 == 0) {
    func_0x000051e4(0x2b4);
  }
  return;
}


// ---- FUN_1000_224a @ 1000:224a

undefined2 __cdecl16far
FUN_1000_224a(int param_1,int param_2,int param_3,int param_4,undefined2 param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int unaff_DS;
  int local_14;
  int iVar7;
  undefined2 uVar8;
  int iVar9;
  undefined1 uVar10;
  
  func_0x00002e2c(0x1000);
  uVar1 = (uint)*(byte *)0xc30;
  iVar3 = param_3;
  iVar2 = FUN_1000_27bc(param_3,param_4,param_5);
  uVar8 = 0x2b4;
  iVar4 = iVar2;
  FUN_1000_2176();
  if ((param_1 == -1) || (param_2 == -1)) {
    param_1 = (0x50 - iVar4) / 2;
    param_2 = (0x19 - param_3) / 2;
  }
  FUN_1000_2046(iVar3,uVar8);
  iVar9 = 0x20;
  iVar3 = param_3 + param_2;
  iVar4 = iVar4 + param_1;
  local_14 = 0x22ee;
  iVar7 = param_2;
  FUN_1000_20b6(param_1,param_2,iVar4,iVar3,0x20);
  for (iVar6 = 0; iVar6 < param_3; iVar6 = iVar6 + 1) {
    FUN_1000_1dee(param_1,param_2 + iVar6);
    piVar5 = (int *)(iVar6 * 4 + param_4);
    iVar9 = piVar5[1];
    iVar3 = *piVar5;
    local_14 = 0x2323;
    iVar7 = unaff_DS;
    iVar4 = iVar2;
    FUN_1000_1eb2(0xc3a);
  }
  while (uVar10 = (undefined1)uVar1, local_14 == 0) {
    if (iVar3 != iVar7) {
      if (-1 < iVar7) {
        iVar3 = 0x2349;
        FUN_1000_2046(iVar4,iVar9);
        FUN_1000_1dee(param_1,param_2 + iVar3);
        iVar4 = iVar2;
        FUN_1000_1eb2(0xc3f);
      }
      FUN_1000_2046(iVar4);
      iVar3 = param_1;
      FUN_1000_1dee(param_1,iVar4 + param_2);
      iVar7 = *(int *)(iVar3 * 4 + param_4);
      local_14 = 0x23ba;
      iVar4 = iVar2;
      FUN_1000_1eb2(0xc44);
    }
    iVar9 = 0x2b4;
    iVar3 = 0x23c7;
    iVar6 = FUN_1000_222a();
    if (iVar6 == 0xd) {
      local_14 = 1;
    }
    else if (iVar6 == 0x1b) {
      local_14 = 2;
    }
    else if (iVar6 == 0x148) {
      iVar3 = iVar3 + -1;
      if (iVar3 < 0) {
        iVar3 = 0;
      }
    }
    else if (iVar6 == 0x150) {
      iVar3 = iVar3 + 1;
      if (param_3 + -1 < iVar3) {
        iVar3 = param_3 + -1;
      }
    }
  }
  uVar8 = 0x2416;
  FUN_1000_21bc();
  *(undefined1 *)0xc30 = uVar10;
  if (local_14 != 1) {
    return 0xffff;
  }
  return uVar8;
}


// ---- FUN_1000_2436 @ 1000:2436

undefined2 __cdecl16far FUN_1000_2436(undefined1 *param_1,int param_2,byte param_3)

{
  bool bVar1;
  bool bVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *unaff_DI;
  int iVar7;
  undefined2 uVar8;
  undefined1 *unaff_DS;
  undefined4 local_114;
  int local_10e;
  
  func_0x00002e2c();
  local_10e = 0;
  bVar1 = false;
  bVar2 = false;
  uVar8 = (undefined2)((ulong)param_1 >> 0x10);
  puVar5 = (undefined1 *)param_1;
  puVar5[param_2] = 0;
  func_0x00005082();
  puVar6 = puVar5;
  puVar3 = puVar5;
  if ((param_3 & 1) != 0) {
    FUN_1000_1e24();
    FUN_1000_1eb2();
    goto LAB_1000_249c;
  }
  do {
    *puVar6 = 0;
LAB_1000_24a9:
    if ((bVar1) || (puVar3 = (undefined1 *)FUN_1000_222a(), puVar3 == (undefined1 *)0x1b)) {
      if (puVar3 == (undefined1 *)0x1b) {
        func_0x00005082();
        return 0xffff;
      }
      if ((param_3 & 2) != 0) {
        puVar5[local_10e] = 0;
      }
      uVar8 = func_0x000050e2();
      return uVar8;
    }
    if (((int)puVar3 < 0x20) || (0xff < (int)puVar3)) {
      if (puVar3 != (undefined1 *)0x14b) {
        if (0x14b < (int)puVar3) {
          if (puVar3 == (undefined1 *)0x14d) {
            bVar2 = false;
            iVar4 = func_0x000050e2();
            puVar3 = puVar5;
            if (local_10e < iVar4) {
              FUN_1000_1e24();
              FUN_1000_1dee();
              puVar3 = unaff_DI + 1;
              goto LAB_1000_2689;
            }
          }
          else if (puVar3 == (undefined1 *)0x14f) {
            bVar2 = false;
            iVar7 = func_0x000050e2();
            FUN_1000_1e24();
            iVar4 = (iVar7 + -1) - local_10e;
            FUN_1000_1dee();
            local_10e = iVar7 + -1;
            puVar3 = unaff_DI + iVar4;
          }
          else if (puVar3 == (undefined1 *)0x152) {
            bVar2 = true;
          }
          else if (puVar3 == (undefined1 *)0x153) {
            bVar2 = false;
            iVar4 = func_0x000050e2();
            puVar3 = puVar5;
            if (local_10e < iVar4) {
              FUN_1000_1e24();
              for (iVar7 = local_10e; iVar7 < iVar4; iVar7 = iVar7 + 1) {
                puVar5[iVar7] = (puVar5 + iVar7)[1];
              }
              FUN_1000_1eb2();
LAB_1000_249c:
              bVar2 = false;
              puVar3 = unaff_DI;
              goto LAB_1000_24a2;
            }
          }
          goto LAB_1000_24a9;
        }
        if (puVar3 != (undefined1 *)0x8) {
          if (puVar3 == (undefined1 *)0xd) {
            bVar1 = true;
          }
          else if (puVar3 == (undefined1 *)0x147) {
            FUN_1000_1e24();
            iVar4 = -local_10e;
            FUN_1000_1dee();
            bVar2 = false;
            local_10e = 0;
            puVar3 = unaff_DI + iVar4;
          }
          goto LAB_1000_24a9;
        }
      }
      bVar2 = false;
      if (local_10e != 0) {
        FUN_1000_1e24();
        FUN_1000_1dee();
        local_10e = local_10e + -1;
        puVar3 = unaff_DI + -1;
      }
      goto LAB_1000_24a9;
    }
    iVar4 = func_0x000050e2();
    if (puVar5[local_10e] != '\0') {
      if (bVar2) {
        puVar3 = puVar5;
        if ((bVar2) && (iVar4 < param_2)) {
          FUN_1000_1e24();
          for (; local_10e <= iVar4; iVar4 = iVar4 + -1) {
            puVar5[iVar4 + 1] = puVar5[iVar4];
          }
          puVar5[local_10e] = 0xfa;
          local_10e = local_10e + 1;
          FUN_1000_1eb2();
          puVar3 = unaff_DI + 1;
LAB_1000_24a2:
          FUN_1000_1dee();
        }
      }
      else {
        FUN_1000_1eb2();
        puVar5[local_10e] = (char)unaff_DS;
        puVar3 = unaff_DS;
LAB_1000_2689:
        local_10e = local_10e + 1;
      }
      goto LAB_1000_24a9;
    }
    puVar3 = puVar5;
    if (param_2 <= iVar4) goto LAB_1000_24a9;
    local_114 = (char *)CONCAT22(uVar8,puVar5 + local_10e);
    FUN_1000_1eb2();
    *local_114 = (char)unaff_DS;
    local_10e = local_10e + 1;
    puVar6 = puVar5 + local_10e;
    puVar3 = unaff_DS;
  } while( true );
}


// ---- FUN_1000_27bc @ 1000:27bc

int __cdecl16far FUN_1000_27bc(int param_1,int param_2,undefined2 param_3)

{
  int iVar1;
  undefined2 *puVar2;
  int iVar3;
  int iVar4;
  
  func_0x00002e2c(0x1000);
  iVar4 = 0;
  for (iVar3 = 0; iVar3 < param_1; iVar3 = iVar3 + 1) {
    puVar2 = (undefined2 *)(iVar3 * 4 + param_2);
    iVar1 = func_0x000050e2(0x2b4,*puVar2,puVar2[1]);
    if (iVar4 < iVar1) {
      iVar4 = iVar1;
    }
  }
  return iVar4;
}


// ---- FUN_1000_2804 @ 1000:2804

void __cdecl16far FUN_1000_2804(undefined2 *param_1,undefined2 *param_2)

{
  undefined2 uVar1;
  
  func_0x00002e2c(0x1000);
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}


// ---- FUN_1000_2834 @ 1000:2834

void __cdecl16far FUN_1000_2834(int param_1,char param_2)

{
  int iVar1;
  
  func_0x00002e2c(0x1000);
  for (iVar1 = 0; iVar1 < param_1; iVar1 = iVar1 + 1) {
    iVar1 = (int)param_2;
    FUN_1000_1fd0();
  }
  return;
}


// ---- FUN_1000_2862 @ 1000:2862

undefined2 __cdecl16far
FUN_1000_2862(int param_1,int param_2,int param_3,int param_4,int param_5,undefined2 param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int unaff_DS;
  int local_16;
  int local_14;
  int iVar6;
  int iVar7;
  undefined2 uVar8;
  int iVar9;
  undefined1 uVar10;
  
  func_0x00002e2c(0x1000);
  local_16 = 0;
  uVar1 = (uint)*(byte *)0xc30;
  iVar7 = param_4;
  iVar2 = FUN_1000_27bc(param_4,param_5,param_6);
  local_14 = param_4;
  if (param_3 + -1 < param_4) {
    local_14 = param_3 + -1;
  }
  uVar8 = 0x2b4;
  FUN_1000_2176();
  if ((param_1 == -1) || (param_2 == -1)) {
    param_1 = (0x50 - iVar2) / 2;
    param_2 = (0x19 - local_14) / 2;
  }
  FUN_1000_2046(iVar7,uVar8);
  iVar9 = 0x20;
  local_14 = local_14 + param_2;
  iVar3 = iVar2 + param_1;
  iVar7 = param_1;
  iVar4 = param_2;
  FUN_1000_20b6();
  iVar6 = iVar4;
  for (; (iVar4 < param_3 + iVar6 && (iVar4 < param_4)); iVar4 = iVar4 + 1) {
    FUN_1000_1dee(param_1,(param_2 - iVar6) + iVar4);
    piVar5 = (int *)(iVar4 * 4 + param_5);
    iVar9 = piVar5[1];
    local_14 = *piVar5;
    iVar7 = 0xc59;
    iVar6 = unaff_DS;
    iVar3 = iVar2;
    FUN_1000_1eb2();
  }
LAB_1000_295f:
  do {
    do {
      while( true ) {
        while( true ) {
          uVar10 = (undefined1)uVar1;
          if (local_16 != 0) {
            uVar8 = 0x2b24;
            FUN_1000_21bc();
            *(undefined1 *)0xc30 = uVar10;
            if (local_16 != 1) {
              return 0xffff;
            }
            return uVar8;
          }
          if (iVar7 != local_14) {
            if (-1 < iVar7) {
              iVar4 = 0x2983;
              FUN_1000_2046(iVar3,iVar9);
              FUN_1000_1dee(param_1,(param_2 - iVar4) + iVar7);
              iVar3 = iVar2;
              FUN_1000_1eb2(0xc5e);
            }
            iVar9 = 0x29c5;
            FUN_1000_2046(iVar3);
            iVar7 = param_1;
            FUN_1000_1dee(param_1,(param_2 - iVar9) + iVar3);
            iVar7 = *(int *)(iVar7 * 4 + param_5);
            iVar6 = unaff_DS;
            iVar3 = iVar2;
            FUN_1000_1eb2(0xc63);
          }
          iVar9 = 0x2b4;
          local_14 = 0x2a07;
          iVar4 = FUN_1000_222a();
          if (iVar4 != 0xd) break;
          local_16 = 1;
        }
        if (iVar4 != 0x1b) break;
        local_16 = 2;
      }
      if (iVar4 == 0x148) goto LAB_1000_2a32;
    } while (iVar4 != 0x150);
    local_14 = local_14 + 1;
    if (param_4 + -1 < local_14) {
      local_14 = param_4 + -1;
    }
  } while (local_14 - iVar6 < param_3);
  iVar4 = 0x2b4;
  iVar7 = 0x2acf;
  FUN_1000_2046(iVar3,iVar9);
  iVar7 = iVar7 + 1;
  iVar6 = iVar7;
  for (; (local_14 = iVar3, iVar7 < param_3 + iVar6 && (iVar7 < param_4)); iVar7 = iVar7 + 1) {
    FUN_1000_1dee(param_1,(param_2 - iVar6) + iVar7);
    piVar5 = (int *)(iVar7 * 4 + param_5);
    iVar9 = piVar5[1];
    iVar3 = *piVar5;
    iVar6 = unaff_DS;
    iVar4 = iVar2;
    FUN_1000_1eb2(0xc6d);
  }
  goto LAB_1000_2a9f;
LAB_1000_2a32:
  local_14 = local_14 + -1;
  if (local_14 < 0) {
    local_14 = 0;
  }
  if (local_14 < iVar6) {
    iVar4 = 0x2b4;
    iVar7 = 0x2a51;
    FUN_1000_2046(iVar3,iVar9);
    iVar7 = iVar7 + -1;
    iVar6 = iVar7;
    for (; (local_14 = iVar3, iVar7 < param_3 + iVar6 && (iVar7 < param_4)); iVar7 = iVar7 + 1) {
      FUN_1000_1dee(param_1,(param_2 - iVar6) + iVar7);
      piVar5 = (int *)(iVar7 * 4 + param_5);
      iVar9 = piVar5[1];
      iVar3 = *piVar5;
      iVar6 = unaff_DS;
      iVar4 = iVar2;
      FUN_1000_1eb2(0xc68);
    }
LAB_1000_2a9f:
    iVar7 = -1;
    iVar3 = iVar4;
  }
  goto LAB_1000_295f;
}


// ---- FUN_1000_2c4b @ 1000:2c4b

void __cdecl16far FUN_1000_2c4b(void)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  code *pcVar4;
  undefined2 in_AX;
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
  
  FUN_1000_2df8();
  FUN_1000_30e1(in_AX);
  if (*(int *)0x109e == -0x292a) {
    (*(code *)*(undefined2 *)0x10a2)();
  }
  (*(code *)*(undefined2 *)0xc74)(0x1000,0xff);
  pcVar4 = (code *)swi(0x21);
  (*pcVar4)();
  *(undefined2 *)0xc9e = in_BX;
  *(undefined2 *)0xca0 = unaff_ES;
  pcVar4 = (code *)swi(0x21);
  (*pcVar4)();
  if (*(int *)0x10b0 != 0) {
    bVar9 = false;
    (*(code *)*(undefined2 *)0x10ae)();
    if (bVar9) {
      FUN_1000_2e1a();
      return;
    }
    (*(code *)*(undefined2 *)0x10ae)();
  }
  iVar6 = *(int *)0x2c;
  if (iVar6 != 0) {
    pbVar8 = (byte *)0x0;
    do {
      if (*pbVar8 == 0) break;
      iVar5 = 0xd;
      pbVar7 = (byte *)0xc90;
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
        pbVar7 = (byte *)0xcbb;
        goto LAB_1000_2cf2;
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
LAB_1000_2d06:
  iVar6 = 4;
  do {
    bVar9 = false;
    *(byte *)(iVar6 + 0xcbb) = *(byte *)(iVar6 + 0xcbb) & 0xbf;
    pcVar4 = (code *)swi(0x21);
    (*pcVar4)();
    if ((!bVar9) && ((extraout_DX & 0x80) != 0)) {
      *(byte *)(iVar6 + 0xcbb) = *(byte *)(iVar6 + 0xcbb) | 0x40;
    }
    iVar6 = iVar6 + -1;
  } while (-1 < iVar6);
  FUN_1000_2de5();
  FUN_1000_2de5();
  return;
LAB_1000_2cf2:
  pbVar1 = pbVar8;
  pbVar2 = pbVar8 + 1;
  if (*pbVar1 < 0x41) goto LAB_1000_2d06;
  pbVar8 = pbVar8 + 2;
  if (*pbVar2 < 0x41) goto LAB_1000_2d06;
  pbVar3 = pbVar7;
  pbVar7 = pbVar7 + 1;
  *pbVar3 = *pbVar2 + 0xbf | (*pbVar1 + 0xbf) * '\x10';
  goto LAB_1000_2cf2;
}


// ---- FUN_1000_2de5 @ 1000:2de5

void __cdecl16near FUN_1000_2de5(void)

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


// ---- FUN_1000_2df8 @ 1000:2df8

void __cdecl16far FUN_1000_2df8(void)

{
  undefined2 unaff_DS;
  
  FUN_1000_30e1(0xfc);
  if (*(int *)0xce8 != 0) {
    (*(code *)*(undefined2 *)0xce6)(0x1000);
  }
  FUN_1000_30e1(0xff);
  return;
}


// ---- FUN_1000_2e1a @ 1000:2e1a

void FUN_1000_2e1a(void)

{
  FUN_1000_2c4b();
  return;
}


// ---- FUN_1000_2e20 @ 1000:2e20

/* WARNING (jumptable): Unable to track spacebase fully for stack */
/* WARNING: Unable to track spacebase fully for stack */

void __cdecl16far FUN_1000_2e20(void)

{
  int iVar1;
  undefined1 *in_AX;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined2 in_stack_00000000;
  undefined2 in_stack_00000002;
  
  iVar1 = -(int)in_AX;
  if ((in_AX <= &stack0x0004) && ((undefined1 *)*(uint *)0xcee <= &stack0x0004 + iVar1)) {
    *(undefined2 *)(&stack0x0002 + iVar1) = in_stack_00000002;
    *(undefined2 *)(&stack0x0000 + iVar1) = in_stack_00000000;
    return;
  }
  if (*(int *)0xcea == -1) {
    FUN_1000_2c4b();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00012e40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)*(uint *)0xcea)();
  return;
}


// ---- FUN_1000_30b6 @ 1000:30b6

int * __stdcall16far FUN_1000_30b6(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined2 unaff_DS;
  
  piVar3 = (int *)0x10e2;
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


// ---- FUN_1000_30e1 @ 1000:30e1

void __stdcall16far FUN_1000_30e1(undefined2 param_1)

{
  char *pcVar1;
  code *pcVar2;
  char *pcVar3;
  int iVar4;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  
  pcVar3 = (char *)FUN_1000_30b6(param_1);
  if (pcVar3 != (char *)0x0) {
    iVar4 = -1;
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar1 = pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (*pcVar1 != '\0');
    if (*(int *)0x109e == -0x292a) {
      (*(code *)*(undefined2 *)0x10a0)();
    }
    pcVar2 = (code *)swi(0x21);
    (*pcVar2)();
  }
  return;
}


// ---- FUN_1000_313e @ 1000:313e

undefined2 __cdecl16far FUN_1000_313e(void)

{
  bool in_CF;
  
  if (!in_CF) {
    return 0;
  }
  FUN_1000_3166();
  return 0xffff;
}


// ---- FUN_1000_3153 @ 1000:3153

void __cdecl16far FUN_1000_3153(void)

{
  bool in_CF;
  
  if (in_CF) {
    FUN_1000_3166();
  }
  return;
}


// ---- FUN_1000_3166 @ 1000:3166

void __cdecl16near FUN_1000_3166(void)

{
  byte bVar1;
  char cVar2;
  uint in_AX;
  undefined2 unaff_DS;
  
  bVar1 = (byte)in_AX;
  *(byte *)0xcb7 = bVar1;
  cVar2 = (char)(in_AX >> 8);
  if (cVar2 != '\0') goto LAB_1000_318a;
  if (*(byte *)0xcb4 < 3) {
LAB_1000_3180:
    if (0x13 < bVar1) {
LAB_1000_3184:
      in_AX = 0x13;
    }
  }
  else {
    if (0x21 < bVar1) goto LAB_1000_3184;
    if (bVar1 < 0x20) goto LAB_1000_3180;
    in_AX = 5;
  }
  cVar2 = *(char *)(ulong)((in_AX & 0xff) + 0xcf4);
LAB_1000_318a:
  *(int *)0xcac = (int)cVar2;
  return;
}


// ---- FUN_1000_325a @ 1000:325a

undefined2 __cdecl16far
FUN_1000_325a(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5)

{
  undefined2 uVar1;
  long lVar2;
  
  lVar2 = func_0x000047e4(0x1000);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = func_0x00003810(0x2b4,param_1,param_2,param_3,param_4,param_5,lVar2);
  }
  return uVar1;
}


// ---- FUN_1000_328e @ 1000:328e

void __cdecl16far
FUN_1000_328e(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  func_0x00003266(0x1000,param_1,param_2,param_3,param_4,0);
  return;
}


// ---- FUN_1000_32aa @ 1000:32aa

uint __cdecl16far FUN_1000_32aa(uint param_1,undefined2 param_2,uint param_3,uint param_4)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  lVar1 = (ulong)param_3 * (ulong)param_4;
  lVar2 = lVar1;
  if (lVar1 == 0) {
    param_4 = 0;
  }
  else {
    while( true ) {
      iVar7 = (int)((ulong)lVar2 >> 0x10);
      uVar3 = (uint)lVar2;
      if (((iVar7 == 0) && (uVar3 != 0xffff)) && (!CARRY2(param_1,uVar3))) break;
      if (param_1 < 2) {
        uVar4 = 0x8000;
      }
      else {
        uVar4 = -param_1;
      }
      uVar6 = FUN_1000_334b();
      iVar5 = uVar3 - uVar6;
      iVar7 = iVar7 - (uint)(uVar3 < uVar6);
      if ((uVar6 < uVar4) ||
         (param_1 = param_1 + uVar6, lVar2 = CONCAT22(iVar7,iVar5), iVar5 == 0 && iVar7 == 0))
      goto LAB_1000_3329;
    }
    uVar4 = FUN_1000_334b(0,param_1);
    iVar5 = uVar3 - uVar4;
    iVar7 = iVar7 - (uint)(uVar3 < uVar4);
LAB_1000_3329:
    if (iVar5 != 0 || iVar7 != 0) {
      param_4 = (uint)((ulong)(lVar1 - CONCAT22(iVar7,iVar5)) / (ulong)param_3);
    }
  }
  return param_4;
}


// ---- FUN_1000_334b @ 1000:334b

int __cdecl16near FUN_1000_334b(void)

{
  uint uVar1;
  int iVar2;
  uint in_CX;
  uint uVar3;
  uint uVar4;
  undefined1 *in_BX;
  int *unaff_SI;
  uint unaff_ES;
  undefined2 unaff_DS;
  uint local_6;
  
  uVar4 = in_CX;
  if (((*(byte *)(unaff_SI + 5) & 0xc) == 0) && ((*(byte *)(unaff_SI + 0x78) & 1) == 0)) {
    local_6 = 0x200;
  }
  else {
    local_6 = unaff_SI[0x79];
  }
  do {
    if ((((*(byte *)(unaff_SI + 5) & 0xc) == 0) && ((*(byte *)(unaff_SI + 0x78) & 1) == 0)) ||
       (uVar1 = unaff_SI[2], uVar1 == 0)) {
      if (uVar4 < local_6) {
        iVar2 = FUN_1000_35f8();
        if (iVar2 == -1) break;
        *in_BX = (char)iVar2;
        in_BX = in_BX + 1;
        uVar3 = uVar4 - 1;
        local_6 = unaff_SI[0x79];
      }
      else {
        iVar2 = FUN_1000_4af8(0x1000,*(undefined1 *)((int)unaff_SI + 0xb),in_BX,unaff_ES);
        if (iVar2 == 0) {
          *(byte *)(unaff_SI + 5) = *(byte *)(unaff_SI + 5) | 0x10;
          uVar4 = unaff_ES;
          break;
        }
        if (iVar2 == -1) {
          *(byte *)(unaff_SI + 5) = *(byte *)(unaff_SI + 5) | 0x20;
          uVar4 = unaff_ES;
          break;
        }
        uVar3 = unaff_ES - iVar2;
        in_BX = (undefined1 *)(uVar4 + iVar2);
        unaff_ES = uVar4 - uVar4 % local_6;
      }
    }
    else {
      if (uVar4 < uVar1) {
        uVar1 = uVar4;
      }
      FUN_1000_5414(in_BX,unaff_ES,*unaff_SI,unaff_SI[1],uVar1);
      uVar3 = uVar4 - uVar1;
      unaff_SI[2] = unaff_SI[2] - uVar1;
      in_BX = in_BX + uVar1;
      *unaff_SI = *unaff_SI + uVar1;
    }
    uVar4 = uVar3;
  } while (uVar3 != 0);
  return in_CX - uVar4;
}


// ---- FUN_1000_34bd @ 1000:34bd

int __cdecl16near FUN_1000_34bd(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint in_CX;
  uint uVar4;
  undefined1 *in_BX;
  int *unaff_SI;
  byte *pbVar5;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  uint local_6;
  
  pbVar5 = (byte *)(unaff_SI + 0x78);
  uVar4 = in_CX;
  if (((*(byte *)(unaff_SI + 5) & 0xc) == 0) && ((*pbVar5 & 1) == 0)) {
    local_6 = 0x200;
  }
  else {
    local_6 = unaff_SI[0x79];
  }
  do {
    if ((((*(byte *)(unaff_SI + 5) & 8) == 0) && ((*pbVar5 & 1) == 0)) ||
       (uVar1 = unaff_SI[2], uVar1 == 0)) {
      if (uVar4 < local_6) {
        iVar2 = FUN_1000_3694(*in_BX);
        if (iVar2 == -1) goto LAB_1000_35aa;
        in_BX = in_BX + 1;
        uVar4 = uVar4 - 1;
        local_6 = unaff_SI[0x79];
        if (local_6 == 0) {
          local_6 = 1;
        }
      }
      else {
        if ((((*(byte *)(unaff_SI + 5) & 8) != 0) || ((*pbVar5 & 1) != 0)) &&
           (iVar2 = FUN_1000_39c6(), iVar2 != 0)) goto LAB_1000_35aa;
        iVar2 = uVar4 - uVar4 % local_6;
        iVar3 = FUN_1000_4bf6(0x1000,*(undefined1 *)((int)unaff_SI + 0xb),in_BX,unaff_ES,iVar2);
        if ((iVar3 == -1) || (uVar4 = uVar4 - iVar3, iVar3 != iVar2)) {
          *(byte *)(unaff_SI + 5) = *(byte *)(unaff_SI + 5) | 0x20;
          goto LAB_1000_35aa;
        }
        in_BX = in_BX + iVar3;
      }
    }
    else {
      if (uVar4 < uVar1) {
        uVar1 = uVar4;
      }
      FUN_1000_5414(*unaff_SI,unaff_SI[1],in_BX,unaff_ES,uVar1);
      uVar4 = uVar4 - uVar1;
      unaff_SI[2] = unaff_SI[2] - uVar1;
      in_BX = in_BX + uVar1;
      *unaff_SI = *unaff_SI + uVar1;
    }
    if (uVar4 == 0) {
LAB_1000_35aa:
      return in_CX - uVar4;
    }
  } while( true );
}


// ---- FUN_1000_35f8 @ 1000:35f8

uint __cdecl16far FUN_1000_35f8(undefined4 *param_1)

{
  byte *pbVar1;
  byte bVar2;
  undefined2 uVar3;
  int iVar4;
  uint uVar5;
  undefined2 unaff_DS;
  
  bVar2 = *(byte *)((int)param_1 + 10);
  if (((bVar2 & 0x83) != 0) && ((bVar2 & 0x40) == 0)) {
    if ((bVar2 & 2) == 0) {
      *(byte *)((int)param_1 + 10) = bVar2 | 1;
      if (((bVar2 & 0xc) == 0) && ((*(byte *)(param_1 + 0x3c) & 1) == 0)) {
        FUN_1000_37b8(param_1);
      }
      uVar3 = *(undefined2 *)((int)param_1 + 6);
      *(undefined2 *)param_1 = uVar3;
      uVar5 = (uint)*(byte *)((int)param_1 + 0xb);
      iVar4 = FUN_1000_4af8(0x1000,uVar5,uVar3,*(undefined2 *)(param_1 + 2),
                            *(undefined2 *)((int)param_1 + 0xf2));
      if (iVar4 == 0) {
        *(byte *)((int)param_1 + 10) = *(byte *)((int)param_1 + 10) | 0x10;
      }
      else {
        if (iVar4 != -1) {
          if (((*(byte *)(uVar5 + 0xcbb) & 0x82) == 0x82) &&
             ((*(byte *)((int)param_1 + 10) & 0x82) == 0)) {
            pbVar1 = (byte *)(param_1 + 0x3c);
            *pbVar1 = *pbVar1 | 0x20;
          }
          *(int *)(param_1 + 1) = iVar4 + -1;
          bVar2 = *(byte *)*param_1;
          *(byte **)param_1 = (byte *)(byte *)*param_1 + 1;
          return (uint)bVar2;
        }
        *(byte *)((int)param_1 + 10) = *(byte *)((int)param_1 + 10) | 0x20;
      }
      *(undefined2 *)(param_1 + 1) = 0;
    }
    else {
      *(byte *)((int)param_1 + 10) = *(byte *)((int)param_1 + 10) | 0x20;
    }
  }
  return 0xffff;
}


// ---- FUN_1000_3694 @ 1000:3694

uint __cdecl16far FUN_1000_3694(uint param_1,int *param_2)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined2 unaff_DS;
  
  piVar1 = param_2;
  bVar2 = *(byte *)(param_2 + 5);
  if (((bVar2 & 0x82) != 0) && ((bVar2 & 0x40) == 0)) {
    param_2[2] = 0;
    if ((bVar2 & 1) != 0) {
      if ((bVar2 & 0x10) == 0) goto LAB_1000_370d;
      *param_2 = param_2[3];
      bVar2 = bVar2 & 0xfe;
    }
    *(byte *)(param_2 + 5) = bVar2 & 0xef | 2;
    uVar5 = (uint)*(byte *)((int)param_2 + 0xb);
    if (((bVar2 & 8) == 0) &&
       (((bVar2 & 4) != 0 ||
        (((*(byte *)(param_2 + 0x78) & 1) == 0 &&
         (((((param_2 == (int *)0xd1a || (param_2 == (int *)0xd26)) || (param_2 == (int *)0xd3e)) &&
           ((*(byte *)(uVar5 + 0xcbb) & 0x40) != 0)) ||
          (FUN_1000_37b8(param_2), (*(byte *)(piVar1 + 5) & 8) == 0)))))))) {
      iVar3 = FUN_1000_4bf6(0x1000,uVar5,&param_1);
      iVar4 = 1;
    }
    else {
      iVar4 = *piVar1 - piVar1[3];
      *piVar1 = piVar1[3] + 1;
      piVar1[2] = piVar1[0x79] + -1;
      if (iVar4 == 0) {
        iVar3 = 0;
        if ((*(byte *)(uVar5 + 0xcbb) & 0x20) != 0) {
          FUN_1000_48b2(0x1000,uVar5,0,0,2);
          iVar3 = 0;
          iVar4 = 0;
        }
      }
      else {
        iVar3 = FUN_1000_4bf6(0x1000,uVar5,piVar1[3],piVar1[4],iVar4);
      }
      **(undefined1 **)(piVar1 + 3) = (char)param_1;
    }
    if (iVar3 == iVar4) {
      return param_1 & 0xff;
    }
  }
LAB_1000_370d:
  *(byte *)(piVar1 + 5) = *(byte *)(piVar1 + 5) | 0x20;
  return 0xffff;
}


// ---- FUN_1000_37b8 @ 1000:37b8

void __cdecl16near FUN_1000_37b8(int *param_1)

{
  int iVar1;
  int iVar2;
  int unaff_DS;
  undefined4 uVar3;
  
  uVar3 = func_0x00004d76(0x1000,0x200);
  iVar2 = (int)((ulong)uVar3 >> 0x10);
  iVar1 = (int)uVar3;
  if (iVar2 == 0) {
    *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) | 4;
    param_1[0x79] = 1;
    iVar1 = (int)param_1 + 0xf1;
    iVar2 = unaff_DS;
  }
  else {
    *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) | 8;
    param_1[0x79] = 0x200;
  }
  param_1[1] = iVar2;
  *param_1 = iVar1;
  param_1[4] = iVar2;
  param_1[3] = iVar1;
  param_1[2] = 0;
  return;
}


// ---- FUN_1000_38fc @ 1000:38fc

undefined2 __cdecl16near FUN_1000_38fc(undefined2 *param_1)

{
  undefined2 uVar1;
  int iVar2;
  int *piVar3;
  undefined2 unaff_DS;
  undefined4 uVar4;
  
  piVar3 = (int *)0xef2;
  if ((((param_1 == (undefined2 *)0xd1a) || (piVar3 = (int *)0xef6, param_1 == (undefined2 *)0xd26))
      || (piVar3 = (int *)0xefa, param_1 == (undefined2 *)0xd3e)) &&
     (((*(byte *)(param_1 + 5) & 0xc) == 0 && ((*(byte *)(param_1 + 0x78) & 1) == 0)))) {
    uVar4 = CONCAT22(piVar3[1],*piVar3);
    if (*piVar3 == 0 && piVar3[1] == 0) {
      uVar4 = func_0x00004d76(0x1000,0x200);
      iVar2 = (int)((ulong)uVar4 >> 0x10);
      if (iVar2 == 0) goto LAB_1000_3977;
      *piVar3 = (int)uVar4;
      piVar3[1] = iVar2;
    }
    uVar1 = (undefined2)((ulong)uVar4 >> 0x10);
    param_1[3] = (int)uVar4;
    param_1[4] = uVar1;
    *param_1 = (int)uVar4;
    param_1[1] = uVar1;
    param_1[2] = 0x200;
    param_1[0x79] = 0x200;
    *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) | 2;
    *(byte *)(param_1 + 0x78) = 0x11;
    uVar1 = 1;
  }
  else {
LAB_1000_3977:
    uVar1 = 0;
  }
  return uVar1;
}


// ---- FUN_1000_397d @ 1000:397d

void __cdecl16near FUN_1000_397d(int param_1,undefined2 *param_2)

{
  undefined2 unaff_DS;
  
  if (((*(byte *)(param_2 + 0x78) & 0x10) != 0) &&
     ((*(byte *)(*(byte *)((int)param_2 + 0xb) + 0xcbb) & 0x40) != 0)) {
    FUN_1000_39c6(param_2);
    if (param_1 != 0) {
      *(byte *)(param_2 + 0x78) = 0;
      param_2[0x79] = 0;
      *param_2 = 0;
      param_2[1] = 0;
      param_2[3] = 0;
      param_2[4] = 0;
    }
  }
  return;
}


// ---- FUN_1000_39c6 @ 1000:39c6

undefined2 __cdecl16far FUN_1000_39c6(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 unaff_DS;
  
  uVar3 = 0;
  if (param_2 == 0 && param_1 == (int *)0x0) {
    uVar3 = FUN_1000_3a4e(0);
  }
  else {
    if (((*(byte *)(param_1 + 5) & 3) == 2) &&
       (((*(byte *)(param_1 + 5) & 8) != 0 || ((*(byte *)(param_1 + 0x78) & 1) != 0)))) {
      iVar1 = *param_1 - param_1[3];
      if (0 < iVar1) {
        iVar2 = func_0x00004c02(0x1000,*(undefined1 *)((int)param_1 + 0xb),param_1[3],param_1[4],
                                iVar1);
        if (iVar1 != iVar2) {
          *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) | 0x20;
          uVar3 = 0xffff;
        }
      }
    }
    iVar1 = param_1[4];
    *param_1 = param_1[3];
    param_1[1] = iVar1;
    param_1[2] = 0;
  }
  return uVar3;
}


// ---- FUN_1000_3a4e @ 1000:3a4e

int FUN_1000_3a4e(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 unaff_DS;
  int local_4;
  
  iVar3 = 0;
  local_4 = 0;
  uVar4 = 0x1000;
  for (uVar2 = 0xd0e; uVar2 <= *(uint *)0xeee; uVar2 = uVar2 + 0xc) {
    uVar5 = uVar4;
    if ((*(byte *)(uVar2 + 10) & 0x83) != 0) {
      uVar5 = 0x2b4;
      iVar1 = func_0x000039d2(uVar4,uVar2);
      if (iVar1 == -1) {
        local_4 = -1;
      }
      else {
        iVar3 = iVar3 + 1;
      }
    }
    uVar4 = uVar5;
  }
  if (param_1 == 1) {
    local_4 = iVar3;
  }
  return local_4;
}


// ---- FUN_1000_3a9a @ 1000:3a9a

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00010147) overlaps instruction at (ram,0x00010145)
    */
/* WARNING (jumptable): Stack frame is not setup normally: Input value of stackpointer is not used
    */
/* WARNING: Stack frame is not setup normally: Input value of stackpointer is not used */
/* WARNING: Removing unreachable block (ram,0x0001619e) */
/* WARNING: Removing unreachable block (ram,0x00016153) */
/* WARNING: Removing unreachable block (ram,0x0001614b) */
/* WARNING: Removing unreachable block (ram,0x000160fa) */
/* WARNING: Removing unreachable block (ram,0x00016109) */
/* WARNING: Removing unreachable block (ram,0x000160f0) */
/* WARNING: Removing unreachable block (ram,0x00016017) */
/* WARNING: Removing unreachable block (ram,0x00016002) */
/* WARNING: Removing unreachable block (ram,0x00016006) */
/* WARNING: Removing unreachable block (ram,0x00016008) */
/* WARNING: Removing unreachable block (ram,0x0001606d) */
/* WARNING: Removing unreachable block (ram,0x00015fee) */
/* WARNING: Removing unreachable block (ram,0x0001602e) */
/* WARNING: Removing unreachable block (ram,0x00015f64) */
/* WARNING: Removing unreachable block (ram,0x00015f57) */
/* WARNING: Removing unreachable block (ram,0x00015ec8) */
/* WARNING: Removing unreachable block (ram,0x00015eec) */
/* WARNING: Removing unreachable block (ram,0x00015ecc) */
/* WARNING: Removing unreachable block (ram,0x00015eb5) */
/* WARNING: Removing unreachable block (ram,0x00015eb8) */
/* WARNING: Removing unreachable block (ram,0x00015ec2) */
/* WARNING: Removing unreachable block (ram,0x00015e0f) */
/* WARNING: Removing unreachable block (ram,0x00015e11) */
/* WARNING: Removing unreachable block (ram,0x00015e13) */
/* WARNING: Removing unreachable block (ram,0x00015e87) */
/* WARNING: Removing unreachable block (ram,0x00015e1b) */
/* WARNING: Removing unreachable block (ram,0x00015e1d) */
/* WARNING: Removing unreachable block (ram,0x00015e30) */
/* WARNING: Removing unreachable block (ram,0x00015e3d) */
/* WARNING: Removing unreachable block (ram,0x00015d53) */
/* WARNING: Removing unreachable block (ram,0x00015c35) */
/* WARNING: Removing unreachable block (ram,0x00015aa0) */
/* WARNING: Removing unreachable block (ram,0x00015a5c) */
/* WARNING: Removing unreachable block (ram,0x0001583f) */
/* WARNING: Removing unreachable block (ram,0x000157c1) */
/* WARNING: Removing unreachable block (ram,0x00015834) */
/* WARNING: Removing unreachable block (ram,0x000157da) */
/* WARNING: Removing unreachable block (ram,0x00015919) */
/* WARNING: Removing unreachable block (ram,0x0001593d) */
/* WARNING: Removing unreachable block (ram,0x0001591d) */
/* WARNING: Removing unreachable block (ram,0x0001592b) */
/* WARNING: Removing unreachable block (ram,0x00015a7a) */
/* WARNING: Removing unreachable block (ram,0x00015a83) */
/* WARNING: Removing unreachable block (ram,0x00015aa3) */
/* WARNING: Removing unreachable block (ram,0x00015aa9) */
/* WARNING: Removing unreachable block (ram,0x00015ac9) */
/* WARNING: Removing unreachable block (ram,0x00015bcc) */
/* WARNING: Removing unreachable block (ram,0x00015d94) */
/* WARNING: Removing unreachable block (ram,0x00015d96) */
/* WARNING: Removing unreachable block (ram,0x00015dfe) */
/* WARNING: Removing unreachable block (ram,0x00015f1e) */
/* WARNING: Removing unreachable block (ram,0x00015f35) */
/* WARNING: Removing unreachable block (ram,0x00015f38) */
/* WARNING: Removing unreachable block (ram,0x00015f9f) */
/* WARNING: Removing unreachable block (ram,0x00015fdb) */
/* WARNING: Removing unreachable block (ram,0x00015fde) */
/* WARNING: Removing unreachable block (ram,0x00015fe8) */
/* WARNING: Removing unreachable block (ram,0x0001600a) */
/* WARNING: Removing unreachable block (ram,0x0001600d) */
/* WARNING: Removing unreachable block (ram,0x0001601a) */
/* WARNING: Removing unreachable block (ram,0x0001601c) */
/* WARNING: Removing unreachable block (ram,0x0001603e) */
/* WARNING: Removing unreachable block (ram,0x0001601e) */
/* WARNING: Removing unreachable block (ram,0x0001608b) */
/* WARNING: Removing unreachable block (ram,0x00016063) */
/* WARNING: Removing unreachable block (ram,0x0001606f) */
/* WARNING: Removing unreachable block (ram,0x00016070) */
/* WARNING: Removing unreachable block (ram,0x000160e4) */
/* WARNING: Removing unreachable block (ram,0x00016077) */
/* WARNING: Removing unreachable block (ram,0x0001609b) */
/* WARNING: Removing unreachable block (ram,0x0001607b) */
/* WARNING: Removing unreachable block (ram,0x000160e8) */
/* WARNING: Removing unreachable block (ram,0x0001607f) */
/* WARNING: Removing unreachable block (ram,0x00016081) */
/* WARNING: Removing unreachable block (ram,0x000160ce) */
/* WARNING: Removing unreachable block (ram,0x000160d2) */
/* WARNING: Removing unreachable block (ram,0x000160f2) */
/* WARNING: Removing unreachable block (ram,0x00016177) */
/* WARNING: Removing unreachable block (ram,0x00016111) */
/* WARNING: Removing unreachable block (ram,0x0001618e) */
/* WARNING: Removing unreachable block (ram,0x00016197) */
/* WARNING: Removing unreachable block (ram,0x000161a3) */
/* WARNING: Removing unreachable block (ram,0x000164b7) */
/* WARNING: Removing unreachable block (ram,0x000160b7) */
/* WARNING: Removing unreachable block (ram,0x000160b9) */
/* WARNING: Removing unreachable block (ram,0x00016126) */
/* WARNING: Removing unreachable block (ram,0x000160c1) */
/* WARNING: Removing unreachable block (ram,0x00015f6c) */
/* WARNING: Removing unreachable block (ram,0x00015ef3) */
/* WARNING: Removing unreachable block (ram,0x000164bc) */
/* WARNING: Removing unreachable block (ram,0x0001649b) */
/* WARNING: Removing unreachable block (ram,0x00015ed6) */
/* WARNING: Removing unreachable block (ram,0x00015d92) */
/* WARNING: Removing unreachable block (ram,0x00015a5d) */
/* WARNING: Removing unreachable block (ram,0x0001597f) */
/* WARNING: Removing unreachable block (ram,0x0001580d) */
/* WARNING: Removing unreachable block (ram,0x0001580f) */
/* WARNING: Removing unreachable block (ram,0x00015832) */
/* WARNING: Removing unreachable block (ram,0x00015812) */
/* WARNING: Removing unreachable block (ram,0x00015814) */
/* WARNING: Removing unreachable block (ram,0x00015817) */
/* WARNING: Removing unreachable block (ram,0x00015885) */
/* WARNING: Removing unreachable block (ram,0x000158b8) */
/* WARNING: Removing unreachable block (ram,0x000158bf) */
/* WARNING: Removing unreachable block (ram,0x000158db) */
/* WARNING: Removing unreachable block (ram,0x000158fd) */
/* WARNING: Removing unreachable block (ram,0x0001596d) */
/* WARNING: Removing unreachable block (ram,0x00015c78) */
/* WARNING: Removing unreachable block (ram,0x00015c90) */
/* WARNING: Removing unreachable block (ram,0x00015c93) */
/* WARNING: Removing unreachable block (ram,0x00015cb3) */
/* WARNING: Removing unreachable block (ram,0x00015cb8) */
/* WARNING: Removing unreachable block (ram,0x00015cf9) */
/* WARNING: Removing unreachable block (ram,0x00015d65) */
/* WARNING: Removing unreachable block (ram,0x00015d67) */
/* WARNING: Removing unreachable block (ram,0x00015c52) */
/* WARNING: Removing unreachable block (ram,0x00015c54) */
/* WARNING: Removing unreachable block (ram,0x00015fa2) */
/* WARNING: Removing unreachable block (ram,0x00015ed2) */
/* WARNING: Removing unreachable block (ram,0x00015ed5) */
/* WARNING: Removing unreachable block (ram,0x00015ed8) */
/* WARNING: Removing unreachable block (ram,0x00015f48) */
/* WARNING: Removing unreachable block (ram,0x00015f4e) */
/* WARNING: Removing unreachable block (ram,0x00015f56) */
/* WARNING: Removing unreachable block (ram,0x00015f58) */
/* WARNING: Removing unreachable block (ram,0x00015f80) */
/* WARNING: Removing unreachable block (ram,0x00016154) */
/* WARNING: Removing unreachable block (ram,0x000161c3) */
/* WARNING: Removing unreachable block (ram,0x0001615e) */
/* WARNING: Removing unreachable block (ram,0x00016185) */
/* WARNING: Removing unreachable block (ram,0x00016187) */
/* WARNING: Removing unreachable block (ram,0x00016165) */
/* WARNING: Removing unreachable block (ram,0x00016167) */
/* WARNING: Removing unreachable block (ram,0x000161ec) */
/* WARNING: Removing unreachable block (ram,0x00016113) */
/* WARNING: Removing unreachable block (ram,0x0001649a) */
/* WARNING: Removing unreachable block (ram,0x000164a0) */
/* WARNING: Removing unreachable block (ram,0x000164a2) */
/* WARNING: Removing unreachable block (ram,0x00016189) */
/* WARNING: Removing unreachable block (ram,0x00015f33) */
/* WARNING: Removing unreachable block (ram,0x00015da0) */
/* WARNING: Removing unreachable block (ram,0x00015b85) */
/* WARNING: Removing unreachable block (ram,0x00015910) */
/* WARNING: Removing unreachable block (ram,0x0001598c) */
/* WARNING: Removing unreachable block (ram,0x0001598e) */
/* WARNING: Removing unreachable block (ram,0x000159f5) */
/* WARNING: Removing unreachable block (ram,0x000164e5) */
/* WARNING: Removing unreachable block (ram,0x000164fa) */
/* WARNING: Removing unreachable block (ram,0x000164fc) */
/* WARNING: Removing unreachable block (ram,0x0001589c) */
/* WARNING: Removing unreachable block (ram,0x00015bcd) */
/* WARNING: Removing unreachable block (ram,0x00016444) */
/* WARNING: Removing unreachable block (ram,0x00015979) */
/* WARNING: Removing unreachable block (ram,0x000158d2) */
/* WARNING: Removing unreachable block (ram,0x000158d7) */
/* WARNING: Removing unreachable block (ram,0x000157e4) */
/* WARNING: Removing unreachable block (ram,0x00015849) */
/* WARNING: Removing unreachable block (ram,0x00015f26) */
/* WARNING: Removing unreachable block (ram,0x00015f2d) */
/* WARNING: Removing unreachable block (ram,0x00015f3b) */
/* WARNING: Removing unreachable block (ram,0x00015f60) */
/* WARNING: Removing unreachable block (ram,0x00015fb4) */
/* WARNING: Removing unreachable block (ram,0x0001592e) */
/* WARNING: Removing unreachable block (ram,0x00015fac) */
/* WARNING: Removing unreachable block (ram,0x00015ede) */

code * __cdecl16far FUN_1000_3a9a(void)

{
  code cVar1;
  int *piVar2;
  char *pcVar3;
  undefined1 *puVar4;
  undefined1 uVar5;
  byte bVar6;
  char cVar7;
  sqword sVar8;
  undefined1 *puVar9;
  char cVar10;
  code cVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  undefined2 uVar15;
  uint uVar16;
  code *pcVar17;
  code *pcVar18;
  byte *pbVar19;
  code *pcVar20;
  code *pcVar21;
  int iVar22;
  code *pcVar23;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  uint extraout_var_01;
  undefined4 uVar24;
  undefined3 uVar28;
  code *pcVar25;
  ulong uVar26;
  code *pcVar27;
  code *pcVar29;
  code *in_ECX;
  undefined2 uVar31;
  code *pcVar30;
  uint uVar32;
  uint uVar33;
  ulong in_EDX;
  int iVar34;
  int *piVar35;
  undefined2 *puVar36;
  byte *pbVar37;
  char cVar40;
  byte *in_EBX;
  byte *pbVar38;
  byte *pbVar39;
  uint *puVar41;
  uint *puVar42;
  uint *puVar43;
  uint *puVar44;
  undefined1 *puVar45;
  uint *puVar46;
  undefined1 *puVar47;
  uint *puVar48;
  uint *puVar49;
  uint *puVar50;
  undefined1 *puVar51;
  undefined2 *puVar52;
  undefined2 *puVar53;
  uint *puVar54;
  undefined1 *puVar55;
  undefined2 *puVar56;
  undefined2 *puVar57;
  undefined2 *puVar58;
  undefined2 *puVar59;
  undefined2 *puVar60;
  int *piVar61;
  int *piVar62;
  uint *puVar63;
  uint *puVar64;
  undefined1 *puVar65;
  undefined1 *puVar66;
  undefined1 *puVar67;
  undefined1 *puVar68;
  undefined1 *puVar69;
  undefined1 *puVar70;
  uint *puVar71;
  uint *puVar72;
  uint *puVar73;
  undefined1 *puVar74;
  undefined1 *puVar75;
  uint *puVar76;
  uint *puVar77;
  uint *puVar78;
  uint *puVar79;
  undefined1 *puVar80;
  undefined1 *puVar81;
  undefined1 *puVar82;
  uint *puVar83;
  uint *puVar84;
  undefined2 *puVar85;
  int *piVar86;
  int *piVar87;
  undefined2 *puVar88;
  undefined2 *puVar89;
  undefined2 *puVar90;
  uint *puVar91;
  uint *puVar92;
  uint *puVar93;
  uint *puVar94;
  int *piVar95;
  undefined1 *puVar96;
  uint *puVar97;
  uint *puVar98;
  uint *puVar99;
  uint *puVar100;
  undefined1 *puVar101;
  uint *puVar102;
  uint *puVar103;
  undefined2 *puVar104;
  undefined1 *puVar105;
  undefined2 *puVar106;
  uint *puVar107;
  uint *puVar108;
  undefined2 *puVar109;
  undefined2 *puVar110;
  undefined1 *puVar111;
  undefined1 *puVar113;
  uint *puVar114;
  uint *puVar115;
  undefined1 *puVar116;
  uint *puVar117;
  uint *puVar118;
  uint *puVar119;
  uint *puVar120;
  uint *puVar121;
  uint *puVar122;
  uint *puVar123;
  undefined1 *puVar124;
  uint *puVar125;
  uint *puVar126;
  uint *puVar127;
  undefined2 *puVar128;
  undefined1 *puVar129;
  uint *puVar130;
  uint *puVar131;
  undefined2 *puVar132;
  undefined2 *puVar133;
  undefined2 *puVar134;
  undefined2 *puVar135;
  undefined1 *puVar136;
  uint *puVar137;
  uint *puVar138;
  int *piVar139;
  int *piVar140;
  int *piVar141;
  int *piVar142;
  int *piVar143;
  int *piVar144;
  undefined1 *puVar145;
  int *piVar146;
  int *piVar147;
  int *piVar148;
  int *piVar149;
  uint *puVar150;
  undefined2 *puVar151;
  undefined2 *puVar152;
  undefined2 *puVar153;
  undefined2 *puVar154;
  undefined2 *puVar155;
  undefined2 *puVar156;
  undefined2 *puVar157;
  uint *puVar158;
  uint *puVar159;
  undefined2 *puVar160;
  undefined2 *puVar161;
  undefined2 *puVar162;
  undefined2 *puVar163;
  undefined2 *puVar164;
  undefined2 *puVar165;
  undefined2 *puVar166;
  undefined2 *puVar167;
  undefined2 *puVar168;
  undefined2 *puVar169;
  uint *puVar170;
  uint *puVar171;
  uint *puVar172;
  undefined2 *puVar173;
  undefined2 *puVar174;
  undefined2 *puVar175;
  undefined1 *puVar176;
  uint *puVar177;
  uint *puVar178;
  uint *puVar179;
  uint *puVar180;
  uint *puVar181;
  uint *puVar182;
  undefined1 *puVar183;
  undefined1 *puVar184;
  uint *puVar185;
  uint *puVar186;
  uint *puVar187;
  uint *puVar188;
  uint *puVar189;
  uint *puVar190;
  undefined2 *puVar191;
  uint *puVar192;
  uint *puVar193;
  undefined1 *puVar194;
  int *piVar195;
  int *piVar196;
  undefined1 *puVar197;
  undefined1 *puVar198;
  int *piVar199;
  int *piVar200;
  int *piVar201;
  undefined1 *puVar202;
  int *piVar203;
  int *piVar204;
  undefined1 *puVar205;
  uint *puVar206;
  undefined2 *puVar207;
  undefined2 *puVar208;
  undefined1 *puVar209;
  uint *puVar210;
  uint *puVar211;
  uint *puVar212;
  uint *puVar213;
  uint *puVar214;
  uint *puVar215;
  undefined2 *puVar216;
  undefined2 *puVar217;
  uint *puVar218;
  uint *puVar219;
  undefined2 *puVar220;
  undefined1 *puVar221;
  undefined1 *puVar222;
  uint *puVar223;
  uint *puVar224;
  uint *puVar225;
  uint *puVar226;
  undefined1 *puVar227;
  undefined1 *puVar228;
  uint *puVar229;
  uint *puVar230;
  undefined1 *puVar231;
  uint *puVar232;
  uint *puVar233;
  uint *puVar234;
  int iVar235;
  undefined1 *puVar236;
  uint *puVar237;
  uint *puVar238;
  undefined1 *puVar239;
  uint *puVar240;
  uint *puVar241;
  uint *puVar242;
  uint *puVar243;
  uint *puVar244;
  undefined2 *puVar245;
  uint *puVar246;
  uint *puVar247;
  uint *puVar248;
  uint *puVar249;
  uint *puVar250;
  uint *puVar251;
  uint *puVar252;
  uint *puVar253;
  undefined2 *puVar254;
  uint *puVar255;
  uint *puVar256;
  uint *puVar257;
  uint *puVar258;
  uint *puVar259;
  uint *puVar260;
  uint *puVar261;
  int *piVar262;
  uint *puVar264;
  int *piVar265;
  undefined1 *puVar266;
  undefined1 *puVar267;
  uint *puVar268;
  uint *puVar269;
  uint *puVar270;
  undefined1 *puVar271;
  uint *puVar272;
  uint *puVar273;
  uint *puVar274;
  uint *puVar275;
  uint *puVar276;
  uint *puVar277;
  undefined1 *puVar279;
  undefined1 *puVar280;
  undefined2 *puVar281;
  undefined1 *puVar282;
  uint *puVar283;
  uint *puVar284;
  uint *puVar285;
  uint *puVar286;
  uint *puVar288;
  uint *puVar289;
  uint *puVar290;
  uint *puVar291;
  uint *puVar292;
  uint *puVar293;
  int iVar294;
  uint *puVar295;
  uint *puVar296;
  uint *puVar297;
  uint *puVar298;
  uint *puVar299;
  uint *puVar300;
  uint *puVar301;
  uint *puVar302;
  uint *puVar303;
  uint *puVar304;
  uint *puVar305;
  uint *puVar306;
  uint *puVar307;
  uint *puVar308;
  uint *puVar309;
  uint *puVar310;
  uint *puVar311;
  uint *puVar312;
  undefined4 *puVar313;
  uint *puVar314;
  undefined2 *puVar315;
  undefined2 *puVar316;
  undefined2 *puVar317;
  uint *puVar318;
  uint *puVar319;
  uint *puVar320;
  uint *puVar321;
  uint *puVar322;
  uint *puVar323;
  uint *puVar324;
  uint *puVar325;
  uint *puVar326;
  uint *puVar327;
  undefined2 *puVar328;
  undefined2 *puVar331;
  uint *puVar332;
  undefined2 *puVar333;
  undefined2 *puVar334;
  undefined2 *puVar335;
  uint *puVar336;
  int *piVar337;
  undefined4 in_ESP;
  undefined2 uVar342;
  uint *puVar338;
  uint *puVar339;
  undefined4 *puVar340;
  undefined2 unaff_BP;
  uint uVar343;
  int iVar344;
  code *pcVar345;
  code *pcVar346;
  char *pcVar347;
  char *pcVar348;
  code *pcVar349;
  int iVar350;
  char *pcVar351;
  code *in_ESI;
  code *pcVar352;
  char *pcVar353;
  undefined2 unaff_DI;
  undefined2 *puVar354;
  uint *puVar355;
  undefined1 *puVar356;
  undefined2 uVar357;
  undefined2 uVar358;
  int iVar359;
  undefined2 unaff_SS;
  uint unaff_DS;
  undefined2 in_FS;
  undefined2 in_GS;
  long in_GS_OFFSET;
  bool bVar360;
  byte in_AF;
  bool bVar361;
  bool bVar362;
  bool bVar363;
  undefined1 *puVar112;
  uint *puVar263;
  uint *puVar278;
  undefined1 *puVar287;
  uint *puVar329;
  uint *puVar330;
  undefined2 *puVar341;
  
  iVar235 = (int)in_ESP;
  uVar358 = (undefined2)((ulong)in_ESP >> 0x10);
  *(undefined2 *)(iVar235 + -2) = unaff_BP;
  pcVar345 = (code *)(ulong)(iVar235 - 2);
  *(undefined2 *)(iVar235 + -4) = 0x1000;
  puVar236 = (undefined1 *)(iVar235 + -6);
  *(undefined2 *)(iVar235 + -6) = 0x3aa5;
  func_0x00002e2c();
  *(undefined2 *)(puVar236 + -2) = unaff_DI;
  puVar339 = (uint *)CONCAT22(uVar358,puVar236 + -4);
  *(code **)(puVar236 + -4) = (code *)in_ESI;
  pcVar17 = (code *)pcVar345;
  pcVar17[-0x48] = (code)0x0;
  *(undefined2 *)(pcVar17 + -0x18) = 0;
  *(undefined2 *)(pcVar17 + -0x3a) = 0;
LAB_1000_3ab3:
  pcVar17 = (code *)pcVar345;
  pbVar38 = *(byte **)(pcVar17 + 10);
  uVar358 = (undefined2)((ulong)pbVar38 >> 0x10);
  uVar16 = (uint)((ulong)in_EBX >> 0x10);
  if (*pbVar38 != 0) {
    if ((*(byte *)(*pbVar38 + 0xf99) & 8) != 0) {
      *(int *)(pcVar17 + -0x18) = *(int *)(pcVar17 + -0x18) + -1;
      puVar237 = (uint *)puVar339;
      uVar357 = (undefined2)((ulong)puVar339 >> 0x10);
      puVar237[-1] = unaff_SS;
      puVar237[-2] = (uint)(pcVar17 + -0x18);
      puVar237[-3] = *(undefined2 *)(pcVar17 + 8);
      puVar237[-4] = *(undefined2 *)(pcVar17 + 6);
      puVar238 = puVar237 + -5;
      puVar237[-5] = 0x3adc;
      uVar358 = FUN_1000_42ba();
      *(undefined2 *)((int)puVar238 + 8) = uVar358;
      *(undefined2 *)((int)puVar238 + 6) = *(undefined2 *)((code *)pcVar345 + 8);
      *(undefined2 *)((int)puVar238 + 4) = *(undefined2 *)((code *)pcVar345 + 6);
      puVar239 = (undefined1 *)((int)puVar238 + 2);
      *(undefined2 *)((int)puVar238 + 2) = 0x3ae6;
      FUN_1000_429c();
      puVar339 = (uint *)CONCAT22(uVar357,puVar239 + 8);
      do {
        pcVar30 = (code *)pcVar345 + 10;
        *(int *)pcVar30 = *(int *)pcVar30 + 1;
        pbVar38 = *(byte **)((code *)pcVar345 + 10);
        uVar358 = (undefined2)((ulong)pbVar38 >> 0x10);
      } while ((*(byte *)(*pbVar38 + 0xf99) & 8) != 0);
    }
    pcVar17 = (code *)pcVar345;
    puVar240 = (uint *)puVar339;
    uVar357 = (undefined2)((ulong)puVar339 >> 0x10);
    if (**(char **)(pcVar17 + 10) == '%') {
      pcVar17[-0x40] = (code)0x0;
      pcVar17[-4] = (code)0x0;
      pcVar17[-0x4a] = (code)0x0;
      pcVar17[-0xe] = (code)0x0;
      pcVar17[-10] = (code)0x0;
      pcVar17[-0x12] = (code)0x0;
      pcVar17[-0x1ae] = (code)0x0;
      *(undefined2 *)(pcVar17 + -0x16) = 0;
      *(undefined2 *)(pcVar17 + -0x46) = 0;
      *(undefined2 *)(pcVar17 + -2) = 0;
      *(undefined2 *)(pcVar17 + -0x3c) = 0;
      *(undefined2 *)(pcVar17 + -0x3e) = 0;
LAB_1000_3b98:
      do {
        if (pcVar17[-0x1ae] != (code)0x0) goto code_r0x00013b9f;
        *(int *)(pcVar17 + 10) = *(int *)(pcVar17 + 10) + 1;
        bVar13 = **(byte **)(pcVar17 + 10);
        uVar32 = (uint)bVar13;
        if ((*(byte *)(uVar32 + 0xf99) & 4) == 0) {
          if (uVar32 == 0x6c) {
LAB_1000_3b81:
            pcVar17[-10] = (code)((char)pcVar17[-10] + 1);
            goto LAB_1000_3b98;
          }
          if (uVar32 < 0x6d) {
            if (bVar13 == 0x4c) {
              pcVar17[-10] = (code)((char)pcVar17[-10] + 1);
              goto LAB_1000_3b81;
            }
            if ((char)bVar13 < 'M') {
              if (bVar13 == 0x2a) {
                pcVar17[-0x12] = (code)((char)pcVar17[-0x12] + 1);
                goto LAB_1000_3b98;
              }
              if (bVar13 == 0x46) goto LAB_1000_3b98;
            }
            else {
              if (bVar13 == 0x4e) goto LAB_1000_3b98;
              if (bVar13 == 0x68) {
                pcVar17[-4] = (code)((char)pcVar17[-4] + 1);
                goto LAB_1000_3b98;
              }
            }
          }
          pcVar17[-0x1ae] = (code)((char)pcVar17[-0x1ae] + 1);
          goto LAB_1000_3b98;
        }
        *(int *)(pcVar17 + -0x46) = *(int *)(pcVar17 + -0x46) + 1;
        in_ECX = (code *)CONCAT22((int)((ulong)in_ECX >> 0x10),*(code **)(pcVar17 + -2));
        *(uint *)(pcVar17 + -2) = (int)*(code **)(pcVar17 + -2) * 10 + uVar32 + -0x30;
      } while( true );
    }
    *(int *)(pcVar17 + -0x18) = *(int *)(pcVar17 + -0x18) + 1;
    puVar240[-1] = *(undefined2 *)(pcVar17 + 8);
    puVar240[-2] = *(undefined2 *)(pcVar17 + 6);
    puVar256 = puVar240 + -3;
    puVar240[-3] = 0x4212;
    pcVar20 = (code *)FUN_1000_426a();
    puVar339 = (uint *)CONCAT22(uVar357,(uint *)((int)puVar256 + 6));
    in_ESI = (code *)CONCAT22((int)((ulong)in_ESI >> 0x10),pcVar20);
    pcVar17 = (code *)pcVar345;
    pbVar38 = *(byte **)(pcVar17 + 10);
    in_EBX = (byte *)((ulong)uVar16 << 0x10);
    *(int *)(pcVar17 + 10) = *(int *)(pcVar17 + 10) + 1;
    if (pcVar20 == (code *)(uint)*pbVar38) goto LAB_1000_4226;
    goto LAB_1000_419a;
  }
  goto LAB_1000_422e;
code_r0x00013b9f:
  if (pcVar17[-0x12] == (code)0x0) {
    puVar341 = *(undefined2 **)(pcVar17 + 0xe);
    *(int *)(pcVar17 + 0xe) = *(int *)(pcVar17 + 0xe) + 4;
    uVar32 = ((undefined2 *)puVar341)[1];
    in_EDX = (ulong)uVar32;
    *(undefined2 *)(pcVar17 + -8) = *puVar341;
    *(uint *)(pcVar17 + -6) = uVar32;
  }
  pcVar17[-0x1ae] = (code)0x0;
  pbVar38 = *(byte **)(pcVar17 + 10);
  iVar359 = (int)((ulong)pbVar38 >> 0x10);
  pbVar37 = (byte *)pbVar38;
  uVar32 = (uint)(*pbVar38 | 0x20);
  pcVar30 = (code *)(ulong)uVar32;
  if (uVar32 != 0x6e) {
    if ((uVar32 == 99) || (uVar32 == 0x7b)) {
      *(int *)(pcVar17 + -0x18) = *(int *)(pcVar17 + -0x18) + 1;
      puVar240[-1] = *(undefined2 *)(pcVar17 + 8);
      puVar240[-2] = *(undefined2 *)(pcVar17 + 6);
      puVar242 = puVar240 + -3;
      puVar240[-3] = 0x3bf6;
      pcVar17 = (code *)FUN_1000_426a();
      uVar358 = (undefined2)((ulong)in_ESI >> 0x10);
      puVar339 = (uint *)CONCAT22(uVar357,(uint *)((int)puVar242 + 6));
    }
    else {
      puVar240[-1] = unaff_SS;
      puVar240[-2] = (uint)(pcVar17 + -0x18);
      puVar240[-3] = *(undefined2 *)(pcVar17 + 8);
      puVar240[-4] = *(undefined2 *)(pcVar17 + 6);
      puVar241 = puVar240 + -5;
      puVar240[-5] = 0x3be7;
      pcVar17 = (code *)FUN_1000_42ba();
      uVar358 = (undefined2)((ulong)in_ESI >> 0x10);
      puVar339 = (uint *)CONCAT22(uVar357,(uint *)((int)puVar241 + 10));
    }
    in_ESI = (code *)CONCAT22(uVar358,pcVar17);
  }
  pcVar20 = (code *)pcVar30;
  uVar32 = (uint)in_EDX;
  pcVar17 = (code *)pcVar345;
  if ((*(int *)(pcVar17 + -0x46) != 0) && (*(int *)(pcVar17 + -2) == 0)) {
LAB_1000_419a:
    *(int *)(pcVar17 + -0x18) = *(int *)(pcVar17 + -0x18) + -1;
    puVar255 = (uint *)puVar339;
    puVar255[-1] = (uint)(code *)in_ESI;
    puVar255[-2] = *(undefined2 *)(pcVar17 + 8);
    puVar255[-3] = *(undefined2 *)(pcVar17 + 6);
    puVar255[-4] = 0x41a7;
    FUN_1000_429c();
    goto LAB_1000_422e;
  }
  pcVar18 = pcVar20 + -99;
  pcVar346 = (code *)in_ESI;
  if ((code *)0x18 < pcVar18) {
    in_EBX = (byte *)((ulong)uVar16 << 0x10);
    if ((code *)(uint)**(byte **)(pcVar17 + 10) == pcVar346) {
      pcVar17[-0x48] = (code)((char)pcVar17[-0x48] - 1);
      if (pcVar17[-0x12] == (code)0x0) {
        *(int *)(pcVar17 + 0xe) = *(int *)(pcVar17 + 0xe) + -4;
      }
      goto LAB_1000_41fe;
    }
    goto LAB_1000_419a;
  }
  bVar360 = (int)pcVar18 < 0;
  pbVar19 = (byte *)((int)pcVar18 * 2);
  pcVar27 = (code *)ZEXT24(pbVar37);
  pbVar38 = (byte *)CONCAT22(uVar16,pbVar19);
  uVar358 = 0x1000;
  switch(pcVar18) {
  case (code *)0x0:
switchD_1000_41c7_caseD_0:
    uVar358 = 0x1000;
    ((code *)in_ESI)[3] = (code)0x0;
    pcVar17 = (code *)pcVar27;
    *(uint *)((byte *)pbVar38 + (int)pcVar20) =
         *(uint *)((byte *)pbVar38 + (int)pcVar20) | (uint)pcVar17;
    goto LAB_1000_02ba;
  case (code *)0x1:
switchD_1000_41c7_caseD_1:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x2:
code_r0x00010b0e:
    puVar127 = (uint *)puVar339;
    if ((int)pbVar37 < 0) {
      puVar127[-1] = unaff_DS;
      puVar127[-2] = 0x4d0;
      puVar127[-3] = unaff_DS;
      puVar127[-4] = 0x4d1;
      puVar127[-5] = uVar358;
      puVar117 = puVar127 + -6;
      puVar127[-6] = 0xb20;
      FUN_1000_17f8();
      puVar127 = (uint *)((int)puVar117 + 0xc);
    }
LAB_1000_0b23:
    if (*(int *)0x34 < 0) {
      uVar357 = (undefined2)((ulong)*(undefined4 *)0x410 >> 0x10);
      iVar359 = (int)*(undefined4 *)0x410;
      if (*(int *)(iVar359 + 8) == 1) {
        *(undefined2 *)0x34 = 0;
      }
      else {
        *(undefined2 *)((int)puVar127 + -2) = *(undefined2 *)0x11ce;
        *(undefined2 *)((int)puVar127 + -4) = *(undefined2 *)0x11cc;
        *(undefined2 *)((int)puVar127 + -6) = *(undefined2 *)(iVar359 + 8);
        *(undefined2 *)((int)puVar127 + -8) = uVar358;
        uVar358 = 0x187;
        puVar118 = (uint *)((int)puVar127 + -10);
        *(undefined2 *)((int)puVar127 + -10) = 0xb59;
        iVar359 = func_0x0000187a();
        puVar127 = puVar118 + 3;
        *(int *)0x34 = iVar359;
        if (iVar359 < 0) {
          puVar118[2] = unaff_DS;
          puVar118[1] = 0x4f6;
          *puVar118 = unaff_DS;
          puVar118[-1] = 0x4f7;
          puVar118[-2] = 0x187;
          puVar119 = puVar118 + -3;
          puVar118[-3] = 0xb76;
          FUN_1000_17f8();
          puVar127 = (uint *)((int)puVar119 + 0xc);
        }
      }
    }
    if (*(int *)0x72 < 0) {
      uVar357 = (undefined2)((ulong)*(undefined4 *)0x410 >> 0x10);
      iVar359 = (int)*(undefined4 *)0x410;
      if (*(int *)(iVar359 + 0x10) != 0) {
        if (*(int *)(iVar359 + 0x10) == 1) {
          *(undefined2 *)0x72 = 0;
        }
        else {
          *(undefined2 *)((int)puVar127 + -2) = *(undefined2 *)0x11da;
          *(undefined2 *)((int)puVar127 + -4) = *(undefined2 *)0x11d8;
          *(undefined2 *)((int)puVar127 + -6) = *(undefined2 *)(iVar359 + 0x10);
          *(undefined2 *)((int)puVar127 + -8) = uVar358;
          uVar358 = 0x187;
          puVar120 = (uint *)((int)puVar127 + -10);
          *(undefined2 *)((int)puVar127 + -10) = 0xbb5;
          iVar359 = func_0x00001a40();
          puVar127 = puVar120 + 3;
          *(int *)0x72 = iVar359;
          if (iVar359 < 0) {
            puVar120[2] = unaff_DS;
            puVar120[1] = 0x514;
            *puVar120 = unaff_DS;
            puVar120[-1] = 0x515;
            puVar120[-2] = 0x187;
            puVar121 = puVar120 + -3;
            puVar120[-3] = 0xbd2;
            FUN_1000_17f8();
            puVar127 = (uint *)((int)puVar121 + 0xc);
          }
        }
      }
    }
    if (*(int *)0x74 < 0) {
      uVar357 = (undefined2)((ulong)*(undefined4 *)0x410 >> 0x10);
      iVar359 = (int)*(undefined4 *)0x410;
      if (*(int *)(iVar359 + 6) == 1) {
        *(undefined2 *)0x74 = 0;
      }
      else {
        *(undefined2 *)((int)puVar127 + -2) = *(undefined2 *)0x11e6;
        *(undefined2 *)((int)puVar127 + -4) = *(undefined2 *)0x11e4;
        *(undefined2 *)((int)puVar127 + -6) = *(undefined2 *)(iVar359 + 6);
        *(undefined2 *)((int)puVar127 + -8) = uVar358;
        uVar358 = 0x187;
        puVar122 = (uint *)((int)puVar127 + -10);
        *(undefined2 *)((int)puVar127 + -10) = 0xc0b;
        iVar359 = func_0x00001b40();
        puVar127 = puVar122 + 3;
        *(int *)0x74 = iVar359;
        if (iVar359 < 0) {
          puVar122[2] = unaff_DS;
          puVar122[1] = 0x536;
          *puVar122 = unaff_DS;
          puVar122[-1] = 0x537;
          puVar122[-2] = 0x187;
          puVar123 = puVar122 + -3;
          puVar122[-3] = 0xc28;
          FUN_1000_17f8();
          puVar127 = (uint *)((int)puVar123 + 0xc);
        }
      }
    }
    if (-1 < *(int *)0x70) goto LAB_1000_0c81;
    uVar357 = (undefined2)((ulong)*(undefined4 *)0x410 >> 0x10);
    iVar359 = (int)*(undefined4 *)0x410;
    if (*(int *)(iVar359 + 0x12) == 1) {
      *(undefined2 *)0x70 = 0;
      goto LAB_1000_0c81;
    }
    *(undefined2 *)((int)puVar127 + -2) = *(undefined2 *)0x11e2;
    *(undefined2 *)((int)puVar127 + -4) = *(undefined2 *)0x11e0;
    *(undefined2 *)((int)puVar127 + -6) = *(undefined2 *)(iVar359 + 0x12);
    *(undefined2 *)((int)puVar127 + -8) = uVar358;
    uVar358 = 0x187;
    puVar124 = (undefined1 *)((int)puVar127 + -10);
    *(undefined2 *)((int)puVar127 + -10) = 0xc61;
    iVar359 = func_0x00001ab2();
    puVar127 = (uint *)(puVar124 + 6);
    *(int *)0x70 = iVar359;
    if (-1 < iVar359) goto LAB_1000_0c81;
    pcVar27 = (code *)0x54e;
    puVar339 = (uint *)ZEXT24(puVar124 + 4);
    *(uint *)(puVar124 + 4) = unaff_DS;
  case (code *)0x18:
switchD_1000_41c7_caseD_18:
    puVar125 = (uint *)puVar339;
    puVar125[-1] = (uint)(code *)pcVar27;
    puVar125[-2] = unaff_DS;
    puVar125[-3] = 0x54f;
    puVar125[-4] = uVar358;
    puVar126 = puVar125 + -5;
    puVar125[-5] = 0xc7e;
    FUN_1000_17f8();
    puVar127 = (uint *)((int)puVar126 + 0xc);
LAB_1000_0c81:
    if (*(int *)0x0 < 0) {
      *(undefined2 *)((int)puVar127 + -2) = uVar358;
      uVar358 = 0x187;
      puVar128 = (undefined2 *)((int)puVar127 + -4);
      puVar127 = (uint *)((int)puVar127 + -4);
      *puVar128 = 0xc92;
      iVar359 = func_0x00001b0c();
      *(int *)0x0 = iVar359;
      if (iVar359 < 0) {
        *(uint *)((int)puVar127 + -2) = unaff_DS;
        *(undefined2 *)((int)puVar127 + -4) = 0x56a;
        *(uint *)((int)puVar127 + -6) = unaff_DS;
        *(undefined2 *)((int)puVar127 + -8) = 0x56b;
        *(undefined2 *)((int)puVar127 + -10) = 0x187;
        puVar129 = (undefined1 *)((int)puVar127 + -0xc);
        *(undefined2 *)((int)puVar127 + -0xc) = 0xcac;
        FUN_1000_17f8();
        puVar127 = (uint *)(puVar129 + 0xc);
      }
    }
    if (*(int *)0x0 < 0) {
      uVar357 = (undefined2)((ulong)*(undefined4 *)0x410 >> 0x10);
      iVar359 = (int)*(undefined4 *)0x410;
      if (*(int *)(iVar359 + 0x14) == 1) {
        *(undefined2 *)0x0 = 0;
      }
      else {
        *(undefined2 *)((int)puVar127 + -2) = *(undefined2 *)0x11de;
        *(undefined2 *)((int)puVar127 + -4) = *(undefined2 *)0x11dc;
        *(undefined2 *)((int)puVar127 + -6) = *(undefined2 *)(iVar359 + 0x14);
        *(undefined2 *)((int)puVar127 + -8) = uVar358;
        uVar358 = 0x187;
        puVar130 = (uint *)((int)puVar127 + -10);
        *(undefined2 *)((int)puVar127 + -10) = 0xce5;
        iVar359 = func_0x00001bdc();
        puVar127 = puVar130 + 3;
        *(int *)0x0 = iVar359;
        if (iVar359 < 0) {
          puVar130[2] = unaff_DS;
          puVar130[1] = 0x592;
          *puVar130 = unaff_DS;
          puVar130[-1] = 0x593;
          puVar130[-2] = 0x187;
          puVar131 = puVar130 + -3;
          puVar130[-3] = 0xd02;
          FUN_1000_17f8();
          puVar127 = (uint *)((int)puVar131 + 0xc);
        }
      }
    }
    *(undefined2 *)((int)puVar127 + -2) = uVar358;
    puVar132 = (undefined2 *)((int)puVar127 + -4);
    *(undefined2 *)((int)puVar127 + -4) = 0xd09;
    uVar357 = FUN_1000_0d88();
    *(undefined2 *)(pcVar17 + -2) = uVar357;
    puVar132[1] = unaff_DS;
    *puVar132 = 0x5b2;
    puVar132[-1] = 0x55d;
    puVar132[-2] = 2;
    puVar132[-3] = uVar358;
    puVar133 = puVar132 + -4;
    puVar132[-4] = 0xd1e;
    uVar357 = func_0x0000329a();
    puVar135 = puVar133 + 4;
    uVar358 = *(undefined2 *)0x10d4;
    *(undefined2 *)0x36 = uVar357;
    *(uint *)0x38 = uVar32;
    if (uVar32 == 0 && *(int *)0x36 == 0) {
      puVar133[3] = 0x55d;
      puVar133[2] = 2;
      puVar133[1] = unaff_DS;
      *puVar133 = 0x5b5;
      puVar133[-1] = 0x2b4;
      puVar134 = puVar133 + -2;
      puVar133[-2] = 0xd48;
      FUN_1000_17f8();
      puVar135 = (undefined2 *)((int)puVar134 + 0xc);
    }
    uVar358 = *(undefined2 *)0x10d4;
    *(undefined2 *)((int)puVar135 + -2) = *(undefined2 *)0x38;
    *(undefined2 *)((int)puVar135 + -4) = *(undefined2 *)0x36;
    *(undefined2 *)((int)puVar135 + -6) = 1;
    *(undefined2 *)((int)puVar135 + -8) = *(undefined2 *)(pcVar17 + -2);
    *(undefined2 *)((int)puVar135 + -10) = 0x565;
    *(undefined2 *)((int)puVar135 + -0xc) = 0;
    *(undefined2 *)((int)puVar135 + -0xe) = 0x2b4;
    puVar136 = (undefined1 *)((int)puVar135 + -0x10);
    *(undefined2 *)((int)puVar135 + -0x10) = 0xd6d;
    func_0x00003428();
    uVar358 = *(undefined2 *)0x10d4;
    *(undefined2 *)(puVar136 + 10) = *(undefined2 *)0x38;
    *(undefined2 *)(puVar136 + 8) = *(undefined2 *)0x36;
    *(undefined2 *)(puVar136 + 6) = 0x2b4;
    *(undefined2 *)(puVar136 + 4) = 0xd83;
    pcVar17 = (code *)func_0x000031a0();
    return pcVar17;
  case (code *)0x3:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x4:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x5:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x6:
    (pbVar19 + (int)pcVar346)[-0x7939] = (pbVar19 + (int)pcVar346)[-0x7939] + 1;
    pbVar19[(int)pcVar346] =
         pbVar19[(int)pcVar346] + (char)((int)pbVar37 / (int)(char)(in_EDX >> 8));
    do {
      pcVar17 = (code *)pcVar345;
      if (*(int *)(pcVar17 + -0x10c) != 0) {
        puVar192 = (uint *)puVar339;
        puVar192[-1] = unaff_SS;
        puVar192[-2] = (uint)(pcVar17 + -4);
        puVar192[-3] = unaff_SS;
        puVar192[-4] = (uint)(pcVar17 + -2);
        puVar192[-5] = uVar358;
        puVar193 = puVar192 + -6;
        puVar192[-6] = 0x2630;
        FUN_1000_1e24();
        *(undefined2 *)((int)puVar193 + 10) = *(undefined2 *)((code *)pcVar345 + -4);
        *(int *)((int)puVar193 + 8) = *(int *)((code *)pcVar345 + -2) + -1;
        *(undefined2 *)((int)puVar193 + 6) = uVar358;
        puVar194 = (undefined1 *)((int)puVar193 + 4);
        *(undefined2 *)((int)puVar193 + 4) = 0x263f;
        FUN_1000_1dee();
        puVar339 = (uint *)ZEXT24(puVar194 + 8);
        *(int *)((code *)pcVar345 + -0x10c) = *(int *)((code *)pcVar345 + -0x10c) + -1;
      }
LAB_1000_24a9:
      puVar185 = (uint *)puVar339;
      pcVar17 = (code *)pcVar345;
      if (*(int *)(pcVar17 + -0x10e) != 0) {
LAB_1000_24bc:
        if (*(int *)(pcVar17 + -8) == 0x1b) {
          *(undefined2 *)((int)puVar185 + -2) = unaff_SS;
          *(int *)((int)puVar185 + -4) = (int)(pcVar17 + -0x108);
          *(undefined2 *)((int)puVar185 + -6) = *(undefined2 *)(pcVar17 + 8);
          *(undefined2 *)((int)puVar185 + -8) = *(undefined2 *)(pcVar17 + 6);
          *(undefined2 *)((int)puVar185 + -10) = uVar358;
          *(undefined2 *)((int)puVar185 + -0xc) = 0x24d6;
          func_0x00005082();
          return (code *)0xffff;
        }
        if (((byte)pcVar17[0xc] & 2) != 0) {
          *(undefined1 *)((int)*(undefined4 *)(pcVar17 + 6) + *(int *)(pcVar17 + -0x10c)) = 0;
        }
        *(undefined2 *)((int)puVar185 + -2) = *(undefined2 *)(pcVar17 + 8);
        *(undefined2 *)((int)puVar185 + -4) = *(undefined2 *)(pcVar17 + 6);
        *(undefined2 *)((int)puVar185 + -6) = uVar358;
        *(undefined2 *)((int)puVar185 + -8) = 0x27b2;
        pcVar17 = (code *)func_0x000050e2();
        return pcVar17;
      }
      puVar185[-1] = uVar358;
      puVar186 = puVar185 + -2;
      puVar185[-2] = 0x24b4;
      iVar359 = FUN_1000_222a();
      puVar185 = puVar186 + 2;
      puVar339 = (uint *)ZEXT24(puVar186 + 2);
      pcVar17 = (code *)pcVar345;
      *(int *)(pcVar17 + -8) = iVar359;
      if (iVar359 == 0x1b) goto LAB_1000_24bc;
      if ((0x1f < iVar359) && (iVar359 < 0x100)) {
        puVar186[1] = *(undefined2 *)(pcVar17 + 8);
        *puVar186 = *(undefined2 *)(pcVar17 + 6);
        puVar186[-1] = uVar358;
        uVar358 = 0x2b4;
        puVar187 = puVar186 + -2;
        puVar186[-2] = 0x24fd;
        iVar359 = func_0x000050e2();
        puVar339 = (uint *)ZEXT24(puVar187 + 2);
        pcVar17 = (code *)pcVar345;
        *(int *)(pcVar17 + -6) = iVar359;
        uVar357 = (undefined2)((ulong)*(undefined4 *)(pcVar17 + 6) >> 0x10);
        pcVar347 = (char *)((int)*(undefined4 *)(pcVar17 + 6) + *(int *)(pcVar17 + -0x10c));
        if (*pcVar347 == '\0') {
          if (iVar359 < *(int *)(pcVar17 + 10)) {
            puVar187[1] = *(undefined2 *)(pcVar17 + -8);
            *puVar187 = unaff_DS;
            puVar187[-1] = 0xc49;
            *(char **)(pcVar17 + -0x112) = pcVar347;
            *(undefined2 *)(pcVar17 + -0x110) = uVar357;
            puVar187[-2] = 0x2b4;
            puVar188 = puVar187 + -3;
            puVar187[-3] = 0x252b;
            FUN_1000_1eb2();
            puVar339 = (uint *)ZEXT24((undefined1 *)((int)puVar188 + 10));
            pcVar17 = (code *)pcVar345;
            **(code **)(pcVar17 + -0x112) = pcVar17[-8];
            *(int *)(pcVar17 + -0x10c) = *(int *)(pcVar17 + -0x10c) + 1;
            *(undefined1 *)(*(int *)(pcVar17 + -0x10c) + *(int *)(pcVar17 + 6)) = 0;
          }
        }
        else {
          if (*(int *)(pcVar17 + -0x10a) != 0) goto LAB_1000_2570;
          puVar187[1] = *(undefined2 *)(pcVar17 + -8);
          *puVar187 = unaff_DS;
          puVar187[-1] = 0xc4c;
          puVar187[-2] = 0x2b4;
          puVar189 = puVar187 + -3;
          puVar187[-3] = 0x255d;
          FUN_1000_1eb2();
          puVar198 = (undefined1 *)((int)puVar189 + 10);
          pcVar17 = (code *)pcVar345;
          *(code *)((int)*(undefined4 *)(pcVar17 + 6) + *(int *)(pcVar17 + -0x10c)) = pcVar17[-8];
LAB_1000_2689:
          uVar358 = 0x2b4;
          puVar339 = (uint *)ZEXT24(puVar198);
          *(int *)((code *)pcVar345 + -0x10c) = *(int *)((code *)pcVar345 + -0x10c) + 1;
        }
        goto LAB_1000_24a9;
      }
      if (iVar359 != 0x14b) {
        if (iVar359 < 0x14c) {
          if (iVar359 == 8) goto LAB_1000_2612;
          if (iVar359 == 0xd) {
            *(undefined2 *)(pcVar17 + -0x10e) = 1;
          }
          else if (iVar359 == 0x147) {
            puVar186[1] = unaff_SS;
            *puVar186 = (uint)(pcVar17 + -4);
            puVar186[-1] = unaff_SS;
            puVar186[-2] = (uint)(pcVar17 + -2);
            puVar186[-3] = uVar358;
            piVar201 = (int *)(puVar186 + -4);
            puVar186[-4] = 0x2712;
            FUN_1000_1e24();
            pcVar17 = (code *)pcVar345;
            *(undefined2 *)((int)piVar201 + 10) = *(undefined2 *)(pcVar17 + -4);
            *(int *)((int)piVar201 + 8) = *(int *)(pcVar17 + -2) - *(int *)(pcVar17 + -0x10c);
            *(undefined2 *)((int)piVar201 + 6) = uVar358;
            puVar202 = (undefined1 *)((int)piVar201 + 4);
            *(undefined2 *)((int)piVar201 + 4) = 0x2724;
            FUN_1000_1dee();
            puVar339 = (uint *)ZEXT24(puVar202 + 8);
            *(undefined2 *)((code *)pcVar345 + -0x10a) = 0;
            *(undefined2 *)((code *)pcVar345 + -0x10c) = 0;
          }
        }
        else if (iVar359 == 0x14d) {
          *(undefined2 *)(pcVar17 + -0x10a) = 0;
          puVar186[1] = *(undefined2 *)(pcVar17 + 8);
          *puVar186 = *(undefined2 *)(pcVar17 + 6);
          puVar186[-1] = uVar358;
          uVar358 = 0x2b4;
          piVar195 = (int *)(puVar186 + -2);
          puVar186[-2] = 0x265b;
          iVar359 = func_0x000050e2();
          puVar339 = (uint *)ZEXT24(piVar195 + 2);
          pcVar17 = (code *)pcVar345;
          if (*(int *)(pcVar17 + -0x10c) < iVar359) {
            piVar195[1] = unaff_SS;
            *piVar195 = (int)(pcVar17 + -4);
            piVar195[-1] = unaff_SS;
            piVar195[-2] = (int)(pcVar17 + -2);
            piVar195[-3] = 0x2b4;
            piVar196 = piVar195 + -4;
            piVar195[-4] = 0x2677;
            FUN_1000_1e24();
            *(undefined2 *)((int)piVar196 + 10) = *(undefined2 *)((code *)pcVar345 + -4);
            *(int *)((int)piVar196 + 8) = *(int *)((code *)pcVar345 + -2) + 1;
            *(undefined2 *)((int)piVar196 + 6) = 0x2b4;
            puVar197 = (undefined1 *)((int)piVar196 + 4);
            *(undefined2 *)((int)piVar196 + 4) = 0x2686;
            FUN_1000_1dee();
            puVar198 = puVar197 + 8;
            goto LAB_1000_2689;
          }
        }
        else if (iVar359 == 0x14f) {
          *(undefined2 *)(pcVar17 + -0x10a) = 0;
          puVar186[1] = *(undefined2 *)(pcVar17 + 8);
          *puVar186 = *(undefined2 *)(pcVar17 + 6);
          puVar186[-1] = uVar358;
          uVar358 = 0x2b4;
          piVar203 = (int *)(puVar186 + -2);
          puVar186[-2] = 0x2745;
          iVar359 = func_0x000050e2();
          iVar359 = iVar359 + -1;
          piVar203[1] = unaff_SS;
          *piVar203 = (int)((code *)pcVar345 + -4);
          piVar203[-1] = unaff_SS;
          piVar203[-2] = (int)((code *)pcVar345 + -2);
          piVar203[-3] = 0x2b4;
          piVar204 = piVar203 + -4;
          piVar203[-4] = 0x2759;
          FUN_1000_1e24();
          pcVar17 = (code *)pcVar345;
          *(undefined2 *)((int)piVar204 + 10) = *(undefined2 *)(pcVar17 + -4);
          *(int *)((int)piVar204 + 8) =
               (*(int *)(pcVar17 + -2) - *(int *)(pcVar17 + -0x10c)) + iVar359;
          *(undefined2 *)((int)piVar204 + 6) = 0x2b4;
          puVar205 = (undefined1 *)((int)piVar204 + 4);
          *(undefined2 *)((int)piVar204 + 4) = 0x276d;
          FUN_1000_1dee();
          puVar339 = (uint *)ZEXT24(puVar205 + 8);
          *(int *)((code *)pcVar345 + -0x10c) = iVar359;
        }
        else if (iVar359 == 0x152) {
          *(undefined2 *)(pcVar17 + -0x10a) = 1;
        }
        else if (iVar359 == 0x153) {
          *(undefined2 *)(pcVar17 + -0x10a) = 0;
          puVar186[1] = *(undefined2 *)(pcVar17 + 8);
          *puVar186 = *(undefined2 *)(pcVar17 + 6);
          puVar186[-1] = uVar358;
          uVar358 = 0x2b4;
          piVar199 = (int *)(puVar186 + -2);
          puVar186[-2] = 0x26a1;
          iVar359 = func_0x000050e2();
          puVar339 = (uint *)ZEXT24(piVar199 + 2);
          pcVar17 = (code *)pcVar345;
          if (*(int *)(pcVar17 + -0x10c) < iVar359) {
            piVar199[1] = unaff_SS;
            *piVar199 = (int)(pcVar17 + -4);
            piVar199[-1] = unaff_SS;
            piVar199[-2] = (int)(pcVar17 + -2);
            piVar199[-3] = 0x2b4;
            piVar200 = piVar199 + -4;
            piVar199[-4] = 0x26bd;
            FUN_1000_1e24();
            pcVar17 = (code *)pcVar345;
            for (iVar34 = *(int *)(pcVar17 + -0x10c); iVar34 < iVar359; iVar34 = iVar34 + 1) {
              uVar358 = (undefined2)((ulong)*(undefined4 *)(pcVar17 + 6) >> 0x10);
              puVar176 = (undefined1 *)((int)*(undefined4 *)(pcVar17 + 6) + iVar34);
              *puVar176 = puVar176[1];
            }
            iVar34 = *(int *)(pcVar17 + 6);
            iVar22 = *(int *)(pcVar17 + -0x10c);
            piVar200[5] = *(undefined2 *)(pcVar17 + 8);
            piVar200[4] = iVar34 + iVar22;
            piVar200[3] = iVar359 - *(int *)(pcVar17 + -0x10c);
            piVar200[2] = unaff_DS;
            piVar200[1] = 0xc54;
            *piVar200 = 0x2b4;
            puVar191 = piVar200 + -1;
            piVar200[-1] = 0x26f3;
            FUN_1000_1eb2();
            *(undefined2 *)((int)puVar191 + 0xc) = *(undefined2 *)((code *)pcVar345 + -4);
            *(undefined2 *)((int)puVar191 + 10) = *(undefined2 *)((code *)pcVar345 + -2);
            goto LAB_1000_24a2;
          }
        }
        goto LAB_1000_24a9;
      }
LAB_1000_2612:
      *(undefined2 *)(pcVar17 + -0x10a) = 0;
    } while( true );
  case (code *)0x7:
switchD_1000_41c7_caseD_7:
    uVar358 = 0x1000;
    pcVar17 = (code *)pcVar27;
    puVar79 = (uint *)puVar339;
    ((byte *)pbVar38 + (int)(code *)in_ESI)[0x1fc] =
         ((byte *)pbVar38 + (int)(code *)in_ESI)[0x1fc] ^ (byte)((ulong)pbVar38 >> 8);
    goto code_r0x000106cb;
  case (code *)0x9:
switchD_1000_41c7_caseD_9:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0xa:
switchD_1000_41c7_caseD_a:
    ((byte *)pbVar38 + (int)pcVar20)[100] = ((byte *)pbVar38 + (int)pcVar20)[100] & (byte)pcVar27;
    puVar325 = (uint *)puVar339;
    puVar176 = (undefined1 *)*puVar325;
    pcVar346 = (code *)puVar325[1];
    pcVar17 = (code *)puVar325[2];
    pbVar37 = (byte *)puVar325[4];
    uVar16 = puVar325[5];
    in_EDX = (ulong)uVar16;
    pcVar349 = (code *)puVar325[6];
    pcVar27 = (code *)(ulong)puVar325[7];
    puVar270 = puVar325 + 8;
    puVar332 = puVar325 + 8;
    (pcVar17 + (int)puVar176)[0x65] = (code)((char)(pcVar17 + (int)puVar176)[0x65] + (byte)uVar16);
    pcVar18 = (code *)(puVar176 + 1);
    uVar5 = in(uVar16);
    *puVar176 = uVar5;
    pcVar345 = pcVar346 + 0x20;
    iVar34 = ((uint)pcVar346 & 3) - (*(uint *)pcVar345 & 3);
    *(uint *)pcVar345 = *(uint *)pcVar345 + (uint)(0 < iVar34) * iVar34;
    if (0 < iVar34) {
      (pcVar17 + (int)pcVar18)[0x65] = (code)((byte)(pcVar17 + (int)pcVar18)[0x65] & (byte)uVar16);
LAB_1000_6052:
      iVar34 = *(int *)(pcVar17 + (int)pcVar18 + 0x20);
      puVar339 = (uint *)(pbVar37 + 0x6e);
      iVar22 = ((uint)pcVar17 & 3) - (*puVar339 & 3);
      *puVar339 = *puVar339 + (uint)(0 < iVar22) * iVar22;
      puVar355 = (uint *)*puVar332;
      pcVar346 = (code *)puVar332[1];
      pcVar17 = (code *)puVar332[2];
      pbVar37 = (byte *)puVar332[4];
      uVar16 = puVar332[5];
      in_EDX = (ulong)uVar16;
      uVar32 = puVar332[6];
      in_ECX = (code *)(ulong)uVar32;
      pcVar23 = (code *)puVar332[7];
      puVar270 = puVar332 + 8;
      if ((long)(int)((long)iVar34 * 0x6553) == (long)iVar34 * 0x6553) {
        pcVar345 = pcVar346 + 0x69;
        *pcVar345 = (code)((byte)*pcVar345 & (byte)pcVar23);
        if (*pcVar345 != (code)0x0) {
          puVar339 = puVar355;
          iVar34 = ((uint)(puVar332 + 8) & 3) - (*puVar339 & 3);
          *puVar339 = *puVar339 + (uint)(0 < iVar34) * iVar34;
          goto LAB_1000_60d9;
        }
LAB_1000_613f:
        bVar13 = (byte)(in_EDX >> 8);
        (pcVar17 + (int)puVar355)[0x65] = (code)((byte)(pcVar17 + (int)puVar355)[0x65] & bVar13);
        uVar357 = (undefined2)in_EDX;
        uVar5 = in(uVar357);
        *(undefined1 *)puVar355 = uVar5;
        pcVar345 = pcVar346 + 0x69;
        iVar34 = ((uint)pcVar346 & 3) - (*(uint *)pcVar345 & 3);
        *(uint *)pcVar345 = *(uint *)pcVar345 + (uint)(0 < iVar34) * iVar34;
        out(*(undefined2 *)pcVar346,uVar357);
        out(pcVar346[2],uVar357);
        (pbVar37 + (int)puVar355 + 1)[0x74] =
             (pbVar37 + (int)puVar355 + 1)[0x74] & (byte)((ulong)in_ECX >> 8);
        pcVar18 = (code *)((int)puVar355 + 3);
        uVar358 = in(uVar357);
        *(undefined2 *)((int)puVar355 + 1) = uVar358;
        bVar14 = (byte)pcVar23;
        pcVar23 = (code *)CONCAT11((char)((uint)pcVar23 >> 8),bVar14 - 0x20);
        pcVar20 = pcVar346 + 5;
        out(*(undefined2 *)(pcVar346 + 3),uVar357);
        if (bVar14 < 0x20) {
          *(uint **)(undefined1 *)((int)puVar270 + -2) = puVar270;
          pcVar346[0x6d] = (code)((byte)pcVar346[0x6d] & bVar13);
          pcVar345 = pcVar17 + (int)pcVar18 + 0x65;
          *pcVar345 = (code)((byte)*pcVar345 & bVar13);
          if (*pcVar345 == (code)0x0) {
            *(int *)(pbVar37 + (int)pcVar18) = *(int *)(pbVar37 + (int)pcVar18) + 0x701;
          }
          goto code_r0x00016228;
        }
        if (SBORROW1(bVar14,' ')) goto LAB_1000_61f7_1;
      }
      else {
        (pcVar17 + (int)puVar355)[0x65] =
             (code)((char)(pcVar17 + (int)puVar355)[0x65] + (byte)uVar16);
        puVar339 = puVar355;
        puVar355 = (uint *)((int)puVar355 + 1);
        uVar5 = in(uVar16);
        *(undefined1 *)puVar339 = uVar5;
LAB_1000_60d9:
        puVar332[7] = (uint)pbVar37;
        pcVar18 = (code *)((int)puVar355 + 1);
        uVar5 = in(uVar16);
        *(undefined1 *)puVar355 = uVar5;
        pcVar345 = pcVar346 + 0x20;
        iVar359 = ((uint)pcVar346 & 3) - (*(uint *)pcVar345 & 3);
        *(uint *)pcVar345 = *(uint *)pcVar345 + (uint)(0 < iVar359) * iVar359;
        if (0 < iVar359) {
          bVar14 = (byte)pcVar23 | pbVar37[(int)pcVar346];
          bVar13 = (byte)((uint)pcVar23 >> 8);
          pbVar37[(int)pcVar346] = pbVar37[(int)pcVar346] & bVar13;
          pbVar37[(int)pcVar346] = pbVar37[(int)pcVar346] & bVar13;
          puVar332[6] = (uint)pcVar17;
          *pbVar37 = *pbVar37 + bVar14;
          puVar270 = puVar332 + 6;
          pcVar17 = (code *)(*(int *)(pcVar346 + 0x69) * 0x7974);
          *pbVar37 = *pbVar37 + bVar14;
          pbVar37[(int)pcVar346] = pbVar37[(int)pcVar346] + bVar14;
          pbVar37[(int)pcVar346] = pbVar37[(int)pcVar346] + bVar14;
          pbVar38 = pbVar37;
          bVar13 = *pbVar38;
          bVar12 = (byte)uVar32;
          *pbVar38 = *pbVar38 + bVar12;
          pbVar37[(int)pcVar346] = (pbVar37[(int)pcVar346] - bVar14) - CARRY1(bVar13,bVar12);
          pcVar23 = (code *)(bVar14 & 0x21);
          pcVar20 = pcVar346;
        }
        else {
          (pcVar17 + (int)pcVar346)[0x41] =
               (code)((byte)(pcVar17 + (int)pcVar346)[0x41] & (byte)uVar16);
          pcVar17 = pcVar17 + -1;
LAB_1000_60e7:
          (pcVar17 + (int)pcVar18)[0x6f] =
               (code)((byte)(pcVar17 + (int)pcVar18)[0x6f] & (byte)pcVar23);
          out(*pcVar346,uVar16);
          puVar270 = (uint *)((int)*(undefined4 *)(pbVar37 + 0x75) * 0x6172);
          pcVar349 = pcVar346 + 3;
          out(*(undefined2 *)(pcVar346 + 1),uVar16);
LAB_1000_60f4:
          pcVar20 = pcVar349 + 1;
          out(*pcVar349,uVar16);
          (pbVar37 + (int)pcVar18)[0x6e] = (pbVar37 + (int)pcVar18)[0x6e] & (byte)in_ECX;
          bVar13 = (byte)(uVar16 >> 8);
          pcVar349[0x69] = (code)((byte)pcVar349[0x69] & bVar13);
          pcVar349[0x66] = (code)((byte)pcVar349[0x66] & (byte)((uint)pcVar23 >> 8));
          in_EDX = (ulong)(byte)(bVar13 - (char)pcVar17[(int)pcVar18]) << 8;
        }
        pcVar23 = (code *)((uint)pcVar23 & 0x2a2d);
      }
LAB_1000_61fc:
      bVar13 = (byte)pcVar23;
      pbVar37[(int)pcVar20] = pbVar37[(int)pcVar20] + bVar13;
      pcVar17[(int)pcVar20] = (code)((byte)pcVar17[(int)pcVar20] | bVar13);
      pbVar37[(int)pcVar20] = pbVar37[(int)pcVar20] + bVar13;
      pbVar37[(int)pcVar20] = pbVar37[(int)pcVar20] + bVar13;
      in_EDX = in_EDX & 0xffffff00;
      uVar26 = ZEXT24(pcVar23 + ((code *)0xfb29 < pcVar23) + 0xb4d6);
      puVar270 = (uint *)((int)puVar270 + 2);
      pbVar37 = pbVar37 + 1;
    }
    else {
LAB_1000_5fec:
      pcVar17[0x75] = (code)((byte)pcVar17[0x75] & (byte)pcVar349);
      pcVar345 = pcVar18;
      pcVar18 = pcVar18 + 2;
      uVar16 = in((int)in_EDX);
      *(uint *)pcVar345 = uVar16;
      pbVar37[0x66] = pbVar37[0x66] & (byte)((uint)pcVar349 >> 8);
LAB_1000_5ff7:
      pbVar37[0x54] = pbVar37[0x54] & (byte)pcVar27;
      pbVar38 = pbVar37 + (int)pcVar346 + 0x61;
      *pbVar38 = *pbVar38 & (byte)in_EDX;
      bVar13 = *pbVar38;
      in_ECX = (code *)ZEXT24(pcVar349 + 1);
      pcVar345 = pcVar18;
      iVar34 = ((uint)puVar270 & 3) - (*(uint *)pcVar345 & 3);
      *(uint *)pcVar345 = *(uint *)pcVar345 + (uint)(0 < iVar34) * iVar34;
      *(uint **)(undefined1 *)((int)puVar270 + -2) = puVar270;
      puVar332 = (uint *)(*(int *)(pbVar37 + 0x61) * 0x4420);
      if (-1 < (char)bVar13) goto LAB_1000_6052;
      pcVar20 = (code *)(*(int *)(pcVar17 + (int)pcVar18 + 0x20) * 0x7250);
      pcVar17 = (code *)(*(int *)(pcVar18 + 0x61) * 0x7972);
      pcVar345 = pcVar20 + 0x69;
      *pcVar345 = (code)((byte)*pcVar345 & (byte)pcVar27);
      cVar11 = *pcVar345;
      puVar270 = puVar332;
LAB_1000_60b1:
      uVar358 = (undefined2)in_EDX;
      if (cVar11 != (code)0x0) {
LAB_1000_6127:
        pcVar20[0x68] = (code)((byte)pcVar20[0x68] & (byte)((uint)uVar358 >> 8));
        (pcVar17 + (int)pcVar18)[0x75] =
             (code)((byte)(pcVar17 + (int)pcVar18)[0x75] & (byte)((ulong)pcVar27 >> 8));
        out(*(undefined2 *)pcVar20,uVar358);
        puVar355 = (uint *)*puVar270;
        puVar335 = puVar270 + 1;
        pcVar17 = (code *)puVar270[2];
        pbVar37 = (byte *)puVar270[4];
        uVar32 = puVar270[5];
        in_EDX = (ulong)uVar32;
        uVar16 = puVar270[6];
        in_ECX = (code *)(ulong)uVar16;
        pcVar23 = (code *)puVar270[7];
        puVar270 = puVar270 + 8;
        pcVar346 = (code *)((undefined1 *)*puVar335 + 1);
        out(*(undefined1 *)*puVar335,uVar32);
        (pcVar17 + (int)puVar355)[0x65] =
             (code)((byte)(pcVar17 + (int)puVar355)[0x65] & (byte)(uVar32 >> 8));
        *(byte *)((int)puVar355 + 0x6f) = *(byte *)((int)puVar355 + 0x6f) & (byte)(uVar16 >> 8);
        goto LAB_1000_613f;
      }
      pcVar27 = (code *)(ulong)((uint)(code *)pcVar27 & 0x2063);
code_r0x0001611b:
      uVar358 = (undefined2)in_EDX;
      puVar270 = (uint *)(*(int *)(pcVar18 + 0x79) * 0x73);
      pcVar20[0x6f] = (code)((byte)pcVar20[0x6f] & (byte)(in_EDX >> 8));
      pcVar345 = pcVar18 + 0x6f;
      *pcVar345 = (code)((byte)*pcVar345 & (byte)((ulong)in_ECX >> 8));
      if (*pcVar345 != (code)0x0) goto LAB_1000_6127;
      *pcVar18 = (code)((char)*pcVar18 + (char)((ulong)pcVar27 >> 8));
      pcVar23 = (code *)pcVar27 + -0x732a;
      *pcVar18 = (code)((char)*pcVar18 + (char)((uint)pcVar23 >> 8));
LAB_1000_61f7_1:
      cVar10 = (char)(pcVar23 + -0x732a);
      pbVar37[(int)pcVar20] = pbVar37[(int)pcVar20] + cVar10;
      pbVar37[(int)pcVar20] = pbVar37[(int)pcVar20] + (char)in_ECX;
      cVar10 = cVar10 + pbVar37[(int)pcVar20];
      pbVar37[(int)pcVar20] = pbVar37[(int)pcVar20] + cVar10;
      *pcVar18 = (code)((char)*pcVar18 + cVar10);
      uVar26 = (ulong)(byte)((uint)(pcVar23 + -0x732a) >> 8) << 8;
      *pcVar18 = (code)((char)*pcVar18 + (char)in_EDX);
      (pbVar37 + (int)pcVar20)[0x435f] = (pbVar37 + (int)pcVar20)[0x435f] + (char)(in_EDX >> 8);
    }
    pcVar17 = pcVar17 + 1;
    iVar359 = *(int *)((int)puVar270 + 1);
    pcVar20 = pcVar20 + 1;
    bVar13 = (byte)(in_EDX >> 8);
    pbVar37[iVar359 + -0x7e80] = pbVar37[iVar359 + -0x7e80] + 0x14;
    *(int *)(pbVar37 + iVar359 + -1) =
         *(int *)(pbVar37 + iVar359 + -1) + (int)CONCAT31((int3)(uVar26 >> 8),0x14);
code_r0x00016228:
    (pcVar17 + (int)pcVar20)[0x1900] = (code)((char)(pcVar17 + (int)pcVar20)[0x1900] + bVar13);
    (pbVar37 + (int)pcVar20)[0xcdd] = (pbVar37 + (int)pcVar20)[0xcdd] + bVar13;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0xb:
switchD_1000_41c7_caseD_b:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0xc:
switchD_1000_41c7_caseD_c:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0xd:
switchD_1000_41c7_caseD_d:
    uVar358 = 0x1000;
    cVar10 = (char)((int)(code *)pcVar27 / (int)(char)((ulong)pbVar38 >> 8)) * *(char *)0x78a;
    goto code_r0x0001014e;
  case (code *)0xe:
LAB_1000_3d49:
    do {
      uVar357 = (undefined2)((ulong)in_ESI >> 0x10);
      pcVar17 = (code *)pcVar345;
      *(int *)(pcVar17 + -0x18) = *(int *)(pcVar17 + -0x18) + 1;
      puVar243 = (uint *)puVar339;
      uVar358 = (undefined2)((ulong)puVar339 >> 0x10);
      puVar243[-1] = *(undefined2 *)(pcVar17 + 8);
      puVar243[-2] = *(undefined2 *)(pcVar17 + 6);
      puVar244 = puVar243 + -3;
      puVar243[-3] = 0x3da4;
      pcVar17 = (code *)FUN_1000_426a();
      pcVar18 = (code *)pcVar30;
      puVar339 = (uint *)CONCAT22(uVar358,puVar244 + 3);
      in_ESI = (code *)CONCAT22(uVar357,pcVar17);
      pcVar20 = (code *)pcVar345;
      in_EBX = pbVar38;
      if (((*(int *)(pcVar20 + -0x46) != 0) &&
          (iVar359 = *(int *)(pcVar20 + -2), *(int *)(pcVar20 + -2) = *(int *)(pcVar20 + -2) + -1,
          iVar359 == 0)) || (pcVar17 == (code *)0xffff)) goto LAB_1000_3da8;
      in_EBX = (byte *)((ulong)pbVar38 & 0xffff0000);
      in_ECX = (code *)(CONCAT31((int3)((ulong)CONCAT22((int)((ulong)in_ECX >> 0x10),pcVar17) >> 8),
                                 (char)pcVar17) & 0xffffff07);
      if ((1 << (sbyte)in_ECX &
          (int)(char)((byte)pcVar20[((int)pcVar17 >> 3) + -0x38] ^ (byte)pcVar20[-0x4a])) == 0)
      goto LAB_1000_3da8;
      if (pcVar20[-0x12] == (code)0x0) {
        puVar9 = *(undefined1 **)(pcVar20 + -8);
        *(int *)(pcVar20 + -8) = *(int *)(pcVar20 + -8) + 1;
        *puVar9 = (char)pcVar17;
        pbVar38 = (byte *)((ulong)pbVar38 & 0xffff0000);
      }
      else {
        *(int *)(pcVar20 + -0x1ac) = *(int *)(pcVar20 + -0x1ac) + 1;
        pbVar38 = in_EBX;
      }
    } while( true );
  case (code *)0xf:
switchD_1000_41c7_caseD_f:
    uVar358 = 0x1000;
    pcVar17 = (code *)pcVar27 + bVar360 + 0xc483;
    puVar46 = (uint *)puVar339 + -1;
    ((uint *)puVar339)[-1] = iVar359;
    goto code_r0x00010077;
  case (code *)0x10:
switchD_1000_41c7_caseD_10:
    pcVar17 = (code *)pcVar345;
    *(uint *)(pcVar17 + -6) = (uint)(*(byte *)0xc30 >> ((byte)in_ECX & 0x1f));
    puVar171 = (uint *)puVar339;
    puVar171[-1] = *(undefined2 *)(pcVar17 + 0xe);
    puVar171[-2] = *(undefined2 *)(pcVar17 + 0xc);
    puVar171[-3] = *(undefined2 *)(pcVar17 + 10);
    puVar171[-4] = 0x1000;
    puVar172 = puVar171 + -5;
    puVar171[-5] = 0x228b;
    uVar16 = FUN_1000_27bc();
    uVar26 = (ulong)uVar16;
    pcVar17 = (code *)pcVar345;
    *(uint *)(pcVar17 + -0xe) = uVar16;
    *(undefined2 *)(pcVar17 + -0x10) = *(undefined2 *)(pcVar17 + 10);
    *(undefined2 *)((int)puVar172 + 8) = 0x1000;
    puVar173 = (undefined2 *)((int)puVar172 + 6);
    *(undefined2 *)((int)puVar172 + 6) = 0x229d;
    FUN_1000_2176();
    pcVar17 = (code *)pcVar345;
    if ((*(int *)(pcVar17 + 6) == -1) || (*(int *)(pcVar17 + 8) == -1)) {
      *(int *)(pcVar17 + 6) = (0x50 - *(int *)(pcVar17 + -0xe)) / 2;
      *(int *)(pcVar17 + 8) = (0x19 - *(int *)(pcVar17 + -0x10)) / 2;
    }
    puVar173[1] = *(undefined2 *)(pcVar17 + -6);
    *puVar173 = *(undefined2 *)(pcVar17 + -10);
    puVar173[-1] = 0x1000;
    puVar174 = puVar173 + -2;
    puVar173[-2] = 0x22cf;
    FUN_1000_2046();
    puVar174[3] = 0x20;
    pcVar17 = (code *)pcVar345;
    puVar174[2] = *(int *)(pcVar17 + -0x10) + *(int *)(pcVar17 + 8);
    puVar174[1] = *(int *)(pcVar17 + -0xe) + *(int *)(pcVar17 + 6);
    *puVar174 = *(undefined2 *)(pcVar17 + 8);
    puVar174[-1] = *(undefined2 *)(pcVar17 + 6);
    puVar174[-2] = 0x1000;
    puVar175 = puVar174 + -3;
    puVar174[-3] = 0x22ee;
    FUN_1000_20b6();
    puVar176 = (undefined1 *)((int)puVar175 + 0xe);
    for (iVar359 = 0; pcVar17 = (code *)pcVar345, iVar359 < *(int *)(pcVar17 + 10);
        iVar359 = iVar359 + 1) {
      *(int *)(puVar176 + -2) = *(int *)(pcVar17 + 8) + iVar359;
      *(undefined2 *)(puVar176 + -4) = *(undefined2 *)(pcVar17 + 6);
      *(undefined2 *)(puVar176 + -6) = 0x1000;
      puVar177 = (uint *)(puVar176 + -8);
      *(undefined2 *)(puVar176 + -8) = 0x2303;
      FUN_1000_1dee();
      puVar36 = (undefined2 *)(iVar359 * 4 + *(int *)((code *)pcVar345 + 0xc));
      uVar358 = *(undefined2 *)((code *)pcVar345 + 0xe);
      puVar177[3] = puVar36[1];
      puVar177[2] = *puVar36;
      puVar177[1] = (int)uVar26;
      *puVar177 = unaff_DS;
      puVar177[-1] = 0xc3a;
      puVar177[-2] = 0x1000;
      puVar178 = puVar177 + -3;
      puVar177[-3] = 0x2323;
      FUN_1000_1eb2();
      puVar176 = (undefined1 *)((int)puVar178 + 0xe);
    }
    while (pcVar17 = (code *)pcVar345, *(int *)(pcVar17 + -0x12) == 0) {
      if (*(int *)(pcVar17 + -8) != *(int *)(pcVar17 + -0xc)) {
        if (-1 < *(int *)(pcVar17 + -0xc)) {
          *(undefined2 *)(puVar176 + -2) = *(undefined2 *)(pcVar17 + -6);
          *(undefined2 *)(puVar176 + -4) = *(undefined2 *)(pcVar17 + -10);
          *(undefined2 *)(puVar176 + -6) = 0x1000;
          puVar179 = (uint *)(puVar176 + -8);
          *(undefined2 *)(puVar176 + -8) = 0x2349;
          FUN_1000_2046();
          pcVar17 = (code *)pcVar345;
          puVar179[3] = *(int *)(pcVar17 + 8) + *(int *)(pcVar17 + -0xc);
          puVar179[2] = *(undefined2 *)(pcVar17 + 6);
          puVar179[1] = 0x1000;
          *puVar179 = 0x235a;
          FUN_1000_1dee();
          pcVar17 = (code *)pcVar345;
          puVar36 = (undefined2 *)(*(int *)(pcVar17 + -0xc) * 4 + *(int *)(pcVar17 + 0xc));
          uVar358 = *(undefined2 *)(pcVar17 + 0xe);
          puVar179[3] = puVar36[1];
          puVar179[2] = *puVar36;
          puVar179[1] = (int)uVar26;
          *puVar179 = unaff_DS;
          puVar179[-1] = 0xc3f;
          puVar179[-2] = 0x1000;
          puVar180 = puVar179 + -3;
          puVar179[-3] = 0x237b;
          FUN_1000_1eb2();
          puVar176 = (undefined1 *)((int)puVar180 + 0xe);
        }
        *(undefined2 *)(puVar176 + -2) = *(undefined2 *)((code *)pcVar345 + -10);
        *(undefined2 *)(puVar176 + -4) = *(undefined2 *)((code *)pcVar345 + -6);
        *(undefined2 *)(puVar176 + -6) = 0x1000;
        puVar181 = (uint *)(puVar176 + -8);
        *(undefined2 *)(puVar176 + -8) = 0x2388;
        FUN_1000_2046();
        pcVar17 = (code *)pcVar345;
        puVar181[3] = *(int *)(pcVar17 + -8) + *(int *)(pcVar17 + 8);
        puVar181[2] = *(undefined2 *)(pcVar17 + 6);
        puVar181[1] = 0x1000;
        *puVar181 = 0x2399;
        FUN_1000_1dee();
        pcVar17 = (code *)pcVar345;
        puVar36 = (undefined2 *)(*(int *)(pcVar17 + -8) * 4 + *(int *)(pcVar17 + 0xc));
        uVar358 = *(undefined2 *)(pcVar17 + 0xe);
        puVar181[3] = puVar36[1];
        puVar181[2] = *puVar36;
        puVar181[1] = (int)uVar26;
        *puVar181 = unaff_DS;
        puVar181[-1] = 0xc44;
        puVar181[-2] = 0x1000;
        puVar182 = puVar181 + -3;
        puVar181[-3] = 0x23ba;
        FUN_1000_1eb2();
        puVar176 = (undefined1 *)((int)puVar182 + 0xe);
        *(undefined2 *)((code *)pcVar345 + -0xc) = *(undefined2 *)((code *)pcVar345 + -8);
      }
      *(undefined2 *)(puVar176 + -2) = 0x1000;
      puVar183 = puVar176 + -4;
      *(undefined2 *)(puVar176 + -4) = 0x23c7;
      iVar359 = FUN_1000_222a();
      puVar176 = puVar183 + 4;
      pcVar17 = (code *)pcVar345;
      if (iVar359 == 0xd) {
        *(undefined2 *)(pcVar17 + -0x12) = 1;
        puVar176 = puVar183 + 4;
      }
      else if (iVar359 == 0x1b) {
        *(undefined2 *)(pcVar17 + -0x12) = 2;
        puVar176 = puVar183 + 4;
      }
      else if (iVar359 == 0x148) {
        pcVar30 = pcVar17 + -8;
        *(int *)pcVar30 = *(int *)pcVar30 + -1;
        puVar176 = puVar183 + 4;
        if (*(int *)pcVar30 < 0) {
          *(undefined2 *)(pcVar17 + -8) = 0;
          puVar176 = puVar183 + 4;
        }
      }
      else if (iVar359 == 0x150) {
        iVar359 = *(int *)(pcVar17 + 10);
        *(int *)(pcVar17 + -8) = *(int *)(pcVar17 + -8) + 1;
        puVar176 = puVar183 + 4;
        if (iVar359 + -1 < *(int *)(pcVar17 + -8)) {
          *(int *)(pcVar17 + -8) = iVar359 + -1;
          puVar176 = puVar183 + 4;
        }
      }
    }
    *(undefined2 *)(puVar176 + -2) = 0x1000;
    *(undefined2 *)(puVar176 + -4) = 0x2416;
    FUN_1000_21bc();
    *(code *)0xc30 = pcVar17[-4];
    if (*(int *)(pcVar17 + -0x12) != 1) {
      return (code *)0xffff;
    }
    return *(code **)(pcVar17 + -8);
  case (code *)0x11:
switchD_1000_41c7_caseD_11:
    in_EBX = (byte *)((ulong)pbVar38 & 0xffff0000);
    pcVar17 = (code *)pcVar345;
    iVar359 = *(int *)(pcVar17 + -2);
    *(int *)(pcVar17 + -2) = *(int *)(pcVar17 + -2) + -1;
    if (iVar359 != 0) {
      puVar9 = *(undefined1 **)(pcVar17 + -0x44);
      *(int *)(pcVar17 + -0x44) = *(int *)(pcVar17 + -0x44) + 1;
      *puVar9 = 0x2e;
      in_EBX = pbVar38;
      while( true ) {
        in_EBX = (byte *)((ulong)in_EBX & 0xffff0000);
        uVar357 = (undefined2)((ulong)in_ESI >> 0x10);
        pcVar17 = (code *)pcVar345;
        *(int *)(pcVar17 + -0x18) = *(int *)(pcVar17 + -0x18) + 1;
        puVar246 = (uint *)puVar339;
        uVar358 = (undefined2)((ulong)puVar339 >> 0x10);
        puVar246[-1] = *(undefined2 *)(pcVar17 + 8);
        puVar246[-2] = *(undefined2 *)(pcVar17 + 6);
        puVar247 = puVar246 + -3;
        puVar246[-3] = 0x40b2;
        pcVar17 = (code *)FUN_1000_426a();
        puVar339 = (uint *)CONCAT22(uVar358,(uint *)((int)puVar247 + 6));
        in_ESI = (code *)CONCAT22(uVar357,pcVar17);
        if (((byte)pcVar17[0xf99] & 4) == 0) break;
        pcVar20 = (code *)pcVar345;
        iVar359 = *(int *)(pcVar20 + -2);
        *(int *)(pcVar20 + -2) = *(int *)(pcVar20 + -2) + -1;
        if (iVar359 == 0) break;
        *(int *)(pcVar20 + -0x16) = *(int *)(pcVar20 + -0x16) + 1;
        puVar9 = *(undefined1 **)(pcVar20 + -0x44);
        *(int *)(pcVar20 + -0x44) = *(int *)(pcVar20 + -0x44) + 1;
        *puVar9 = (char)pcVar17;
      }
    }
    pcVar17 = (code *)pcVar345;
    if ((*(int *)(pcVar17 + -0x16) != 0) &&
       ((((char)in_ESI == 'e' || ((char)in_ESI == 'E')) &&
        (iVar359 = *(int *)(pcVar17 + -2), *(int *)(pcVar17 + -2) = *(int *)(pcVar17 + -2) + -1,
        iVar359 != 0)))) {
      puVar9 = *(undefined1 **)(pcVar17 + -0x44);
      in_EBX = (byte *)((ulong)in_EBX & 0xffff0000);
      *(int *)(pcVar17 + -0x44) = *(int *)(pcVar17 + -0x44) + 1;
      *puVar9 = 0x65;
      *(int *)(pcVar17 + -0x18) = *(int *)(pcVar17 + -0x18) + 1;
      puVar248 = (uint *)puVar339;
      uVar358 = (undefined2)((ulong)puVar339 >> 0x10);
      puVar248[-1] = *(undefined2 *)(pcVar17 + 8);
      puVar248[-2] = *(undefined2 *)(pcVar17 + 6);
      puVar249 = puVar248 + -3;
      puVar248[-3] = 0x40ee;
      pcVar17 = (code *)FUN_1000_426a();
      puVar339 = (uint *)CONCAT22(uVar358,(uint *)((int)puVar249 + 6));
      in_ESI = (code *)CONCAT22((int)((ulong)in_ESI >> 0x10),pcVar17);
      pcVar20 = (code *)pcVar345;
      if (pcVar17 == (code *)0x2d) {
        puVar9 = *(undefined1 **)(pcVar20 + -0x44);
        in_EBX = (byte *)((ulong)in_EBX & 0xffff0000);
        *(int *)(pcVar20 + -0x44) = *(int *)(pcVar20 + -0x44) + 1;
        *puVar9 = 0x2d;
LAB_1000_4109:
        iVar359 = *(int *)(pcVar20 + -2);
        *(int *)(pcVar20 + -2) = *(int *)(pcVar20 + -2) + -1;
        if (iVar359 != 0) goto LAB_1000_4130;
        *(int *)(pcVar20 + -2) = *(int *)(pcVar20 + -2) + 1;
      }
      else if (pcVar17 == (code *)0x2b) goto LAB_1000_4109;
      while (((byte)((code *)in_ESI)[0xf99] & 4) != 0) {
        pcVar17 = (code *)pcVar345;
        iVar359 = *(int *)(pcVar17 + -2);
        *(int *)(pcVar17 + -2) = *(int *)(pcVar17 + -2) + -1;
        if (iVar359 == 0) break;
        *(int *)(pcVar17 + -0x16) = *(int *)(pcVar17 + -0x16) + 1;
        puVar9 = *(undefined1 **)(pcVar17 + -0x44);
        in_EBX = (byte *)((ulong)in_EBX & 0xffff0000);
        *(int *)(pcVar17 + -0x44) = *(int *)(pcVar17 + -0x44) + 1;
        *puVar9 = (char)in_ESI;
LAB_1000_4130:
        uVar357 = (undefined2)((ulong)in_ESI >> 0x10);
        pcVar17 = (code *)pcVar345;
        *(int *)(pcVar17 + -0x18) = *(int *)(pcVar17 + -0x18) + 1;
        puVar250 = (uint *)puVar339;
        uVar358 = (undefined2)((ulong)puVar339 >> 0x10);
        puVar250[-1] = *(undefined2 *)(pcVar17 + 8);
        puVar250[-2] = *(undefined2 *)(pcVar17 + 6);
        puVar251 = puVar250 + -3;
        puVar250[-3] = 0x413c;
        pcVar17 = (code *)FUN_1000_426a();
        puVar339 = (uint *)CONCAT22(uVar358,(uint *)((int)puVar251 + 6));
        in_ESI = (code *)CONCAT22(uVar357,pcVar17);
      }
    }
    pcVar17 = (code *)pcVar345;
    *(int *)(pcVar17 + -0x18) = *(int *)(pcVar17 + -0x18) + -1;
    puVar252 = (uint *)puVar339;
    uVar358 = (undefined2)((ulong)puVar339 >> 0x10);
    puVar252[-1] = (uint)(code *)in_ESI;
    puVar252[-2] = *(undefined2 *)(pcVar17 + 8);
    puVar252[-3] = *(undefined2 *)(pcVar17 + 6);
    puVar253 = puVar252 + -4;
    puVar252[-4] = 0x4152;
    FUN_1000_429c();
    puVar339 = (uint *)CONCAT22(uVar358,puVar253 + 4);
    pcVar17 = (code *)pcVar345;
    if (*(int *)(pcVar17 + -0x16) == 0) goto LAB_1000_422e;
    if (pcVar17[-0x12] == (code)0x0) {
      *(int *)(pcVar17 + -0x3a) = *(int *)(pcVar17 + -0x3a) + 1;
      in_EBX = (byte *)((ulong)in_EBX & 0xffff0000);
      **(undefined1 **)(pcVar17 + -0x44) = 0;
      puVar253[3] = unaff_SS;
      puVar253[2] = (uint)(pcVar17 + -0x1a8);
      puVar253[1] = *(undefined2 *)(pcVar17 + -6);
      *puVar253 = *(undefined2 *)(pcVar17 + -8);
      puVar253[-1] = (int)(char)pcVar17[-10];
      uVar357 = ((undefined2 *)0xf82)[1];
      pcVar17 = (code *)*(undefined2 *)0xf82;
      puVar253[-2] = 0x1000;
      puVar254 = puVar253 + -3;
      puVar253[-3] = 0x4188;
      (*pcVar17)();
      puVar339 = (uint *)CONCAT22(uVar358,(uint *)((int)puVar254 + 10));
    }
LAB_1000_41fe:
    pcVar30 = (code *)pcVar345 + -0x48;
    *pcVar30 = (code)((char)*pcVar30 + 1);
    pcVar30 = (code *)pcVar345 + 10;
    *(int *)pcVar30 = *(int *)pcVar30 + 1;
LAB_1000_4226:
    pcVar17 = (code *)pcVar345;
    if ((code *)in_ESI == (code *)0xffff) {
LAB_1000_422e:
      if ((((code *)in_ESI == (code *)0xffff) && (*(int *)(pcVar17 + -0x3a) == 0)) &&
         (pcVar17[-0x48] == (code)0x0)) {
        pcVar17 = (code *)0xffff;
      }
      else {
        pcVar17 = *(code **)(pcVar17 + -0x3a);
      }
      return pcVar17;
    }
    goto LAB_1000_3ab3;
  case (code *)0x12:
switchD_1000_41c7_caseD_12:
    return (code *)pcVar27;
  case (code *)0x13:
switchD_1000_41c7_caseD_13:
    puVar150 = (uint *)puVar339;
    puVar150[3] = unaff_DS;
    puVar150[2] = 0xbc3;
    puVar150[1] = 0x1000;
    *puVar150 = 0x1c83;
    func_0x000035c0();
    puVar150[1] = unaff_DS;
    *puVar150 = 0xc07;
    puVar150[-1] = 0x2b4;
    puVar151 = puVar150 + -2;
    puVar150[-2] = 0x1c90;
    func_0x000035c0();
    puVar151[1] = 4;
    *puVar151 = 3;
    puVar151[-1] = 0x2b4;
    puVar152 = puVar151 + -2;
    puVar151[-2] = 0x1ca0;
    func_0x00001dee();
    puVar152[1] = 0xc4;
    *puVar152 = 0x42;
    puVar152[-1] = 0x1da;
    puVar153 = puVar152 + -2;
    puVar152[-2] = 0x1cb0;
    func_0x00002834();
    puVar153[1] = 0x15;
    *puVar153 = 3;
    puVar153[-1] = 0x1da;
    puVar154 = puVar153 + -2;
    puVar153[-2] = 0x1cc0;
    func_0x00001dee();
    puVar154[1] = 0xc4;
    *puVar154 = 0x42;
    puVar154[-1] = 0x1da;
    puVar155 = puVar154 + -2;
    puVar154[-2] = 0x1cd0;
    func_0x00002834();
    puVar155[1] = 4;
    *puVar155 = 2;
    puVar155[-1] = 0x1da;
    puVar156 = puVar155 + -2;
    puVar155[-2] = 0x1ce0;
    func_0x00001dee();
    puVar156[1] = 0xda;
    *puVar156 = 0x1da;
    uVar358 = 0x1da;
    puVar157 = puVar156 + -1;
    puVar156[-1] = 0x1cec;
    func_0x00001fd0();
    puVar339 = (uint *)ZEXT24((undefined1 *)((int)puVar157 + 2));
code_r0x00011cef:
    puVar158 = (uint *)puVar339;
    puVar158[-1] = 4;
    puVar158[-2] = 0x45;
    puVar158[-3] = uVar358;
    puVar159 = puVar158 + -4;
    puVar158[-4] = 0x1cfc;
    func_0x00001dee();
    puVar159[1] = 0xbf;
    *puVar159 = 0x1da;
    puVar160 = puVar159 + -1;
    puVar159[-1] = 0x1d08;
    func_0x00001fd0();
    puVar161 = (undefined2 *)((int)puVar160 + 2);
    *(undefined2 *)((code *)pcVar345 + -2) = 5;
    do {
      *(undefined2 *)((int)puVar161 + -2) = *(undefined2 *)((code *)pcVar345 + -2);
      *(undefined2 *)((int)puVar161 + -4) = 2;
      *(undefined2 *)((int)puVar161 + -6) = 0x1da;
      puVar162 = (undefined2 *)((int)puVar161 + -8);
      *(undefined2 *)((int)puVar161 + -8) = 0x1d1c;
      func_0x00001dee();
      puVar162[1] = 0xb3;
      *puVar162 = 0x1da;
      puVar163 = puVar162 + -1;
      puVar162[-1] = 0x1d28;
      func_0x00001fd0();
      *puVar163 = *(undefined2 *)((code *)pcVar345 + -2);
      puVar163[-1] = 0x45;
      puVar163[-2] = 0x1da;
      puVar164 = puVar163 + -3;
      puVar163[-3] = 0x1d37;
      func_0x00001dee();
      puVar164[1] = 0xb3;
      *puVar164 = 0x1da;
      puVar165 = puVar164 + -1;
      puVar164[-1] = 0x1d43;
      func_0x00001fd0();
      puVar161 = puVar165 + 1;
      pcVar17 = (code *)pcVar345;
      *(int *)(pcVar17 + -2) = *(int *)(pcVar17 + -2) + 1;
    } while (*(int *)(pcVar17 + -2) < 0x15);
    *puVar165 = 0x15;
    puVar165[-1] = 2;
    puVar165[-2] = 0x1da;
    puVar166 = puVar165 + -3;
    puVar165[-3] = 0x1d5c;
    func_0x00001dee();
    puVar166[1] = 0xc0;
    *puVar166 = 0x1da;
    puVar167 = puVar166 + -1;
    puVar166[-1] = 0x1d68;
    func_0x00001fd0();
    *puVar167 = 0x15;
    puVar167[-1] = 0x45;
    puVar167[-2] = 0x1da;
    puVar168 = puVar167 + -3;
    puVar167[-3] = 0x1d78;
    func_0x00001dee();
    puVar168[1] = 0xd9;
    *puVar168 = 0x1da;
    puVar169 = puVar168 + -1;
    puVar168[-1] = 0x1d84;
    func_0x00001fd0();
    *puVar169 = *(undefined2 *)(pcVar17 + 10);
    puVar169[-1] = *(undefined2 *)(pcVar17 + 8);
    puVar169[-2] = *(undefined2 *)(pcVar17 + 6);
    puVar169[-3] = 0x10;
    puVar169[-4] = 5;
    puVar169[-5] = 4;
    puVar169[-6] = 0x1da;
    puVar169[-7] = 0x1da1;
    pcVar17 = (code *)func_0x00002862();
    return pcVar17;
  case (code *)0x14:
switchD_1000_41c7_caseD_14:
    puVar225 = (uint *)puVar339;
    puVar339 = (uint *)ZEXT24(puVar225 + -1);
    puVar225[-1] = iVar359;
code_r0x00012e82:
    uVar358 = *(undefined2 *)0x2c;
    *(undefined2 *)0xcdb = uVar358;
    iVar359 = -0x8000;
    pcVar347 = (char *)0x0;
    goto LAB_1000_2e93;
  case (code *)0x15:
switchD_1000_41c7_caseD_15:
    pcVar25 = in_ECX;
    pcVar20 = (code *)pcVar30;
    uVar358 = (undefined2)in_EDX;
    uVar16 = (uint)((ulong)pbVar38 >> 0x10);
    pcVar352 = (code *)in_ESI;
    *pcVar352 = (code)((char)*pcVar352 + 1);
    pcVar17 = (code *)pcVar345;
    puVar258 = (uint *)puVar339;
    uVar357 = (undefined2)((ulong)puVar339 >> 0x10);
    if ((*pcVar352 == (code)0x0) || (cVar10 = (char)pcVar27, cVar10 == 'i')) {
      pcVar17[-4] = (code)((byte)pcVar17[-4] | 0x40);
    }
    else if (cVar10 != 'u') {
      if (cVar10 == 'X') {
        pcVar17[-1] = (code)0x7;
      }
      else {
        if (cVar10 != 'x') {
          if (cVar10 == 'o') {
            if (((byte)pcVar17[-4] & 0x80) != 0) {
              pcVar17[-3] = (code)((byte)pcVar17[-3] | 2);
            }
            pcVar17[-6] = (code)0x8;
            goto LAB_1000_4607;
          }
          if (cVar10 == 'c') {
            puVar259 = puVar258 + -1;
            puVar258[-1] = 0x4478;
            cVar11 = (code)FUN_1000_4702();
            *puVar259 = unaff_SS;
            iVar359 = *puVar259;
            puVar339 = (uint *)CONCAT22(uVar357,puVar259 + 1);
            ((code *)pcVar345)[-0x171] = cVar11;
            pcVar30 = (code *)ZEXT24((code *)pcVar345 + -0x171);
            in_ECX = (code *)CONCAT22((int)((ulong)pcVar25 >> 0x10),(code *)0x1);
            goto LAB_1000_4677;
          }
          if (cVar10 == 's') {
            puVar260 = puVar258 + -1;
            puVar258[-1] = 0x4489;
            FUN_1000_4719();
            pcVar17 = (code *)pcVar30;
            uVar358 = (undefined2)((ulong)pcVar25 >> 0x10);
            if ((pcVar17 == (code *)0x0) && (iVar359 == 0)) {
              *puVar260 = unaff_DS;
              iVar359 = *puVar260;
              puVar339 = (uint *)CONCAT22(uVar357,puVar260 + 1);
              pcVar30 = (code *)0xf5f;
              in_ECX = (code *)CONCAT22(uVar358,(code *)*(undefined2 *)0xf65);
              goto LAB_1000_4677;
            }
            *puVar260 = (uint)pcVar17;
            iVar34 = *(int *)((code *)pcVar345 + -0xc);
            if (iVar34 == 0) goto LAB_1000_44ac;
            bVar360 = true;
            goto code_r0x000144a7;
          }
          if (cVar10 == 'n') {
            puVar261 = puVar258 + -1;
            puVar258[-1] = 0x44b7;
            FUN_1000_4719();
            uVar15 = (undefined2)((ulong)in_ESI >> 0x10);
            puVar339 = (uint *)CONCAT22(uVar357,(uint *)((int)puVar261 + 2));
            pcVar17 = pcVar20 + 2;
            *(uint *)pcVar20 = *(uint *)((code *)pcVar345 + -8);
            if (((byte)((code *)pcVar345)[-4] & 0x10) != 0) {
              pcVar30 = pcVar17;
              pcVar17 = pcVar20 + 4;
              *(uint *)pcVar30 = 0;
            }
            pcVar30 = (code *)ZEXT24(pcVar17);
            uVar357 = extraout_var;
            goto LAB_1000_4302;
          }
          if (cVar10 == 'p') {
            if (((byte)pcVar17[-4] & 0x30) == 0) {
              puVar263 = puVar258 + -1;
              puVar258[-1] = 0x44d0;
              FUN_1000_4702();
              uVar16 = (uint)((ulong)in_ESI >> 0x10);
              uVar15 = (undefined2)((ulong)pcVar25 >> 0x10);
              piVar262 = (int *)((int)puVar263 + 2);
            }
            else {
              puVar264 = puVar258 + -1;
              puVar258[-1] = 0x44d5;
              FUN_1000_470b();
              uVar16 = (uint)((ulong)in_ESI >> 0x10);
              uVar15 = (undefined2)((ulong)pcVar25 >> 0x10);
              piVar262 = (int *)(puVar264 + 1);
              if (((byte)((code *)pcVar345)[-3] & 0x18) == 0) {
                ((code *)pcVar345)[-1] = (code)0x7;
                *puVar264 = unaff_SS;
                iVar359 = *puVar264;
                *puVar264 = uVar358;
                piVar265 = (int *)(puVar264 + -1);
                puVar264[-1] = 0x44f1;
                FUN_1000_47a1();
                in_EDX = 0;
                in_ESI = (code *)((ulong)uVar16 << 0x10);
                puVar266 = (undefined1 *)((int)piVar265 + 2);
                *(undefined2 *)((int)piVar265 + 2) = 0x4501;
                FUN_1000_47a1();
                puVar339 = (uint *)CONCAT22(uVar357,puVar266 + 2);
                ((code *)pcVar345)[-0x16d] = (code)0x3a;
                in_ECX = (code *)CONCAT22(uVar15,(code *)0x9);
                goto LAB_1000_4523;
              }
            }
            ((code *)pcVar345)[-1] = (code)0x7;
            *(undefined2 *)((int)piVar262 + -2) = unaff_SS;
            iVar359 = *(int *)((int)piVar262 + -2);
            in_EDX = 0;
            in_ESI = (code *)((ulong)uVar16 << 0x10);
            puVar267 = (undefined1 *)((int)piVar262 + -2);
            *(undefined2 *)((int)piVar262 + -2) = 0x4520;
            FUN_1000_47a1();
            puVar339 = (uint *)CONCAT22(uVar357,puVar267 + 2);
            in_ECX = (code *)CONCAT22(uVar15,(code *)0x4);
LAB_1000_4523:
            pcVar30 = (code *)ZEXT24((code *)pcVar345 + -0x171);
            goto LAB_1000_4677;
          }
          if ((cVar10 == 'E') || (cVar10 == 'G')) {
            *(int *)(pcVar17 + -0x12) = *(int *)(pcVar17 + -0x12) + 1;
          }
          pcVar17[-4] = (code)((byte)pcVar17[-4] | 0x40);
          pcVar20 = (code *)(int)(char)((byte)pcVar17[-2] | 0x20);
          in_ESI = (code *)CONCAT22((int)((ulong)in_ESI >> 0x10),pcVar20);
          if (*(int *)(pcVar17 + -0xc) < 1) {
            if (*(int *)(pcVar17 + -0xc) == 0) {
              if (pcVar20 == (code *)0x67) {
                *(undefined2 *)(pcVar17 + -0xc) = 1;
              }
            }
            else {
              *(undefined2 *)(pcVar17 + -0xc) = 6;
            }
          }
          pcVar18 = pcVar17 + -0x171;
          puVar258[-1] = *(undefined2 *)(pcVar17 + -0x12);
          puVar258[-2] = *(undefined2 *)(pcVar17 + -0xc);
          puVar258[-3] = (uint)pcVar20;
          puVar258[-4] = unaff_SS;
          puVar258[-5] = (uint)pcVar18;
          puVar258[-6] = *(undefined2 *)(pcVar17 + 0x10);
          puVar258[-7] = *(undefined2 *)(pcVar17 + 0xe);
          if (((byte)pcVar17[-3] & 4) == 0) {
            uVar358 = ((undefined2 *)0xf7a)[1];
            pcVar17 = (code *)*(undefined2 *)0xf7a;
            puVar258[-8] = 0x1000;
            puVar339 = (uint *)CONCAT22(uVar357,puVar258 + -9);
            puVar258[-9] = 0x4579;
            (*pcVar17)();
            uVar358 = (undefined2)((ulong)pcVar25 >> 0x10);
            *(int *)((code *)pcVar345 + 0xe) = *(int *)((code *)pcVar345 + 0xe) + 8;
          }
          else {
            uVar358 = ((undefined2 *)0xf8e)[1];
            pcVar17 = (code *)*(undefined2 *)0xf8e;
            puVar258[-8] = 0x1000;
            puVar339 = (uint *)CONCAT22(uVar357,puVar258 + -9);
            puVar258[-9] = 0x456f;
            (*pcVar17)();
            uVar358 = (undefined2)((ulong)pcVar25 >> 0x10);
            *(int *)((code *)pcVar345 + 0xe) = *(int *)((code *)pcVar345 + 0xe) + 10;
          }
          puVar268 = (uint *)puVar339;
          uVar357 = (undefined2)((ulong)puVar339 >> 0x10);
          puVar270 = puVar268 + 7;
          if ((((byte)((code *)pcVar345)[-4] & 0x80) != 0) &&
             (puVar270 = puVar268 + 7, *(int *)((code *)pcVar345 + -0xc) == 0)) {
            puVar268[6] = unaff_SS;
            puVar268[5] = (uint)pcVar18;
            uVar15 = ((undefined2 *)0xf86)[1];
            pcVar17 = (code *)*(undefined2 *)0xf86;
            puVar268[4] = 0x1000;
            puVar269 = puVar268 + 3;
            puVar268[3] = 0x4592;
            (*pcVar17)();
            puVar270 = (uint *)((int)puVar269 + 4);
          }
          if (((code *)in_ESI == (code *)0x67) && ((*(uint *)((code *)pcVar345 + -4) & 0x80) == 0))
          {
            *(undefined2 *)((int)puVar270 + -2) = unaff_SS;
            *(int *)((int)puVar270 + -4) = (int)pcVar18;
            uVar15 = ((undefined2 *)0xf7e)[1];
            pcVar17 = (code *)*(undefined2 *)0xf7e;
            *(undefined2 *)((int)puVar270 + -6) = 0x1000;
            puVar271 = (undefined1 *)((int)puVar270 + -8);
            *(undefined2 *)((int)puVar270 + -8) = 0x45a7;
            (*pcVar17)();
            puVar270 = (uint *)(puVar271 + 4);
          }
          puVar270[-1] = unaff_SS;
          iVar359 = puVar270[-1];
          if (*pcVar18 == (code)0x2d) {
            pcVar18 = pcVar18 + 1;
            ((code *)pcVar345)[-3] = (code)((byte)((code *)pcVar345)[-3] | 1);
          }
          iVar34 = -1;
          puVar270[-1] = (uint)pcVar18;
          goto code_r0x000145bd;
        }
        pcVar17[-1] = (code)0x27;
      }
      if (((byte)pcVar17[-4] & 0x80) != 0) {
        *(undefined2 *)(pcVar17 + -0x10) = 2;
        pcVar17[-0xe] = (code)0x30;
        in_EDX = CONCAT31((int3)(in_EDX >> 8),(char)pcVar17[-1] + 0x51U);
        pcVar17[-0xd] = (code)((char)pcVar17[-1] + 0x51U);
      }
      pcVar17[-6] = (code)0x10;
      goto LAB_1000_4607;
    }
    pcVar17[-6] = (code)0xa;
LAB_1000_4607:
    if (((byte)pcVar17[-4] & 0x10) == 0) {
      puVar273 = puVar258 + -1;
      puVar258[-1] = 0x4615;
      uVar16 = FUN_1000_4702();
      pcVar27 = (code *)(ulong)uVar16;
      puVar339 = (uint *)CONCAT22(uVar357,(uint *)((int)puVar273 + 2));
      in_ECX = pcVar25;
      if (((byte)((code *)pcVar345)[-4] & 0x40) == 0) {
        in_EDX = 0;
      }
      else {
        in_EDX = (ulong)(uint)((int)uVar16 >> 0xf);
      }
    }
    else {
      puVar272 = puVar258 + -1;
      puVar258[-1] = 0x4610;
      uVar16 = FUN_1000_470b();
      pcVar27 = (code *)(ulong)uVar16;
      puVar339 = (uint *)CONCAT22(uVar357,(uint *)((int)puVar272 + 2));
      in_ECX = pcVar25;
    }
    pcVar17 = (code *)pcVar345;
    if (((byte)pcVar17[-4] & 0x40) != 0) {
      iVar359 = (int)in_EDX;
      in_EDX = in_EDX & 0xffff;
      if (iVar359 < 0) {
        pcVar17[-3] = (code)((byte)pcVar17[-3] | 1);
        pcVar20 = (code *)pcVar27;
        pcVar27 = (code *)(ulong)(uint)-(int)pcVar20;
        in_EDX = (ulong)-(iVar359 + (uint)(pcVar20 != (code *)0x0));
      }
    }
    bVar362 = *(int *)(pcVar17 + -0xc) < 0;
switchD_1000_4341_caseD_b4:
    pcVar17 = (code *)pcVar345;
    if (bVar362) {
      *(undefined2 *)(pcVar17 + -0xc) = 1;
    }
    else {
      pcVar17[-4] = (code)((byte)pcVar17[-4] & 0xf7);
    }
    pbVar37 = (byte *)((uint)(code *)pcVar27 | (uint)in_EDX);
    pbVar38 = (byte *)CONCAT22((int)((ulong)pbVar38 >> 0x10),pbVar37);
    if (pbVar37 == (byte *)0x0) {
      *(undefined2 *)(pcVar17 + -0x10) = 0;
    }
    pcVar30 = (code *)ZEXT24(pcVar17 + -0x15);
    puVar274 = (uint *)puVar339;
    uVar358 = (undefined2)((ulong)puVar339 >> 0x10);
    puVar274[-1] = unaff_SS;
    iVar359 = puVar274[-1];
    in_ECX = (code *)CONCAT22((int)((ulong)in_ECX >> 0x10),(code *)(uint)(byte)pcVar17[-6]);
    in_ESI = (code *)((ulong)in_ESI & 0xffff0000);
    puVar275 = puVar274 + -1;
    puVar274[-1] = 0x4661;
    FUN_1000_47a1();
    puVar339 = (uint *)CONCAT22(uVar358,(uint *)((int)puVar275 + 2));
    if (((byte)((code *)pcVar345)[-3] & 2) != 0) {
      if (((code *)in_ECX == (code *)0x0) || (*(code *)pcVar30 != (code)0x30)) {
        pcVar17 = (code *)pcVar30 + -1;
        pcVar30 = (code *)ZEXT24(pcVar17);
        *pcVar17 = (code)0x30;
        in_ECX = (code *)CONCAT22((int)((ulong)in_ECX >> 0x10),(code *)in_ECX + 1);
      }
    }
LAB_1000_4677:
    pcVar17 = (code *)pcVar345;
    if (((byte)pcVar17[-4] & 0x40) != 0) {
      if (((byte)pcVar17[-3] & 1) == 0) {
        if (((byte)pcVar17[-4] & 1) != 0) goto code_r0x00014694;
        if (((byte)pcVar17[-4] & 2) != 0) {
          pcVar17[-0xe] = (code)0x20;
          *(undefined2 *)(pcVar17 + -0x10) = 1;
        }
      }
      else {
        pcVar17[-0xe] = (code)0x2d;
        *(undefined2 *)(pcVar17 + -0x10) = 1;
      }
    }
LAB_1000_46ae:
    pcVar17 = (code *)pcVar345;
    iVar34 = *(int *)(pcVar17 + -10) - (int)(code *)in_ECX;
    iVar22 = iVar34 - *(int *)(pcVar17 + -0x10);
    if (iVar34 < *(int *)(pcVar17 + -0x10)) {
      iVar22 = 0;
    }
    puVar276 = (uint *)puVar339;
    uVar358 = (undefined2)((ulong)puVar339 >> 0x10);
    puVar276[-1] = iVar359;
    puVar276[-2] = (uint)(code *)pcVar30;
    puVar277 = puVar276 + -3;
    puVar276[-3] = (uint)(code *)in_ECX;
    if (((byte)pcVar17[-4] & 0xc) == 0) {
      in_ECX = (code *)((ulong)in_ECX & 0xffff0000);
      in_EDX = CONCAT31((int3)(in_EDX >> 8),0x20);
      puVar278 = puVar276 + -4;
      puVar276[-4] = 0x46ca;
      iVar22 = FUN_1000_4785();
      puVar277 = (uint *)((int)puVar278 + 2);
    }
    *(int *)((int)puVar277 + -2) = iVar22;
    *(undefined2 *)((int)puVar277 + -4) = unaff_SS;
    uVar15 = (undefined2)((ulong)in_ECX >> 0x10);
    puVar279 = (undefined1 *)((int)puVar277 + -4);
    *(undefined2 *)((int)puVar277 + -4) = 0x46d6;
    FUN_1000_4767();
    uVar357 = *(undefined2 *)(puVar279 + 2);
    puVar36 = (undefined2 *)(puVar279 + 4);
    if ((((byte)((code *)pcVar345)[-4] & 8) != 0) &&
       (puVar36 = (undefined2 *)(puVar279 + 4), ((byte)((code *)pcVar345)[-4] & 4) == 0)) {
      in_EDX = CONCAT31((int3)(in_EDX >> 8),0x30);
      puVar280 = puVar279 + 2;
      *(undefined2 *)(puVar279 + 2) = 0x46ea;
      uVar357 = FUN_1000_4785();
      puVar36 = (undefined2 *)(puVar280 + 2);
    }
    in_ECX = (code *)CONCAT22(uVar15,(code *)*puVar36);
    pcVar30 = (code *)(ulong)(uint)puVar36[1];
    puVar36[2] = uVar357;
    puVar281 = puVar36 + 1;
    puVar36[1] = 0x46f1;
    FUN_1000_4767();
    puVar339 = (uint *)CONCAT22(uVar358,(uint *)((int)puVar281 + 4));
    pcVar27 = (code *)CONCAT22(extraout_var_00,(code *)*(undefined2 *)((int)puVar281 + 2));
    if (((byte)((code *)pcVar345)[-4] & 4) != 0) {
      in_ECX = (code *)CONCAT22((int)((ulong)in_ECX >> 0x10),
                                (code *)*(undefined2 *)((int)puVar281 + 2));
      in_EDX = CONCAT31((int3)(in_EDX >> 8),0x20);
      puVar282 = (undefined1 *)((int)puVar281 + 2);
      *(undefined2 *)((int)puVar281 + 2) = 0x46ff;
      FUN_1000_4785();
      pcVar27 = (code *)((ulong)extraout_var_01 << 0x10);
      puVar339 = (uint *)CONCAT22(uVar358,puVar282 + 2);
    }
switchD_1000_4341_caseD_b1:
    pcVar25 = in_ECX;
    uVar357 = (undefined2)((ulong)pcVar27 >> 0x10);
    uVar16 = (uint)((ulong)pbVar38 >> 0x10);
    uVar15 = (undefined2)((ulong)in_ESI >> 0x10);
LAB_1000_4302:
    pcVar20 = (code *)pcVar30;
    uVar32 = (uint)in_EDX;
    pcVar17 = (code *)pcVar345;
    pcVar27 = *(code **)(pcVar17 + 10);
    iVar359 = (int)((ulong)pcVar27 >> 0x10);
    pcVar346 = (code *)pcVar27;
    pcVar18 = pcVar346 + 1;
    in_ESI = (code *)CONCAT22(uVar15,pcVar18);
    cVar11 = *pcVar27;
    *(code **)(pcVar17 + 10) = pcVar18;
    pcVar17[-2] = cVar11;
    puVar257 = (uint *)puVar339;
    if ((cVar11 == (code)0x0) || (*(int *)(pcVar17 + -8) < 0)) {
      pcVar17 = (code *)FUN_1000_47d2();
      return pcVar17;
    }
    if ((byte)((char)cVar11 - 0x20U) < 0x59) {
      bVar13 = *(byte *)(ulong)((byte)((char)cVar11 - 0x20U) + 0xf06) & 0xf;
    }
    else {
      bVar13 = 0;
    }
    uVar28 = (undefined3)((ulong)pcVar25 >> 8);
    in_ECX = (code *)CONCAT31(uVar28,4);
    cVar11 = (code)(*(byte *)(ulong)((byte)(bVar13 * '\b' + (char)pcVar17[-5]) + 0xf06) >> 4);
    pcVar17[-5] = cVar11;
    pcVar21 = (code *)(int)(char)cVar11;
    pcVar27 = (code *)CONCAT22(uVar357,pcVar21);
    bVar360 = false;
    pbVar37 = (byte *)((int)pcVar21 * 2);
    pbVar38 = (byte *)CONCAT22(uVar16,pbVar37);
    bVar363 = false;
    bVar362 = false;
    bVar361 = pcVar21 == (code *)0x0;
    uVar358 = 0x1000;
    pcVar29 = (code *)in_ECX;
    bVar13 = (byte)in_EDX;
    bVar14 = (byte)(in_EDX >> 8);
    pcVar23 = pcVar17;
    pcVar349 = pcVar20;
    switch(cVar11) {
    case (code)0x0:
    case (code)0xd:
    case (code)0x1a:
    case (code)0x59:
    case (code)0xcc:
    case (code)0xd9:
    case (code)0xe6:
    case (code)0xf3:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x1:
      goto switchD_1000_4341_caseD_1;
    case (code)0x2:
    case (code)0xf:
    case (code)0x1c:
    case (code)0x3f:
    case (code)0x5d:
    case (code)0x79:
    case (code)0xc1:
    case (code)0xce:
    case (code)0xdb:
    case (code)0xe8:
    case (code)0xf5:
      puVar257[-1] = 0x502b;
      pcVar17 = (code *)FUN_1000_4e3a();
      return pcVar17;
    case (code)0x3:
    case (code)0x10:
    case (code)0x1d:
    case (code)0x3a:
    case (code)0x40:
    case (code)0xc2:
    case (code)0xcf:
    case (code)0xdc:
    case (code)0xe9:
    case (code)0xf6:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x4:
    case (code)0x11:
    case (code)0x1e:
    case (code)0x3b:
    case (code)0x41:
    case (code)0xc3:
    case (code)0xd0:
    case (code)0xdd:
    case (code)0xea:
    case (code)0xf7:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x5:
    case (code)0x12:
    case (code)0x1f:
    case (code)0x60:
    case (code)0xc4:
    case (code)0xd1:
    case (code)0xde:
    case (code)0xeb:
    case (code)0xf8:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x6:
    case (code)0x13:
    case (code)0x20:
    case (code)0x61:
    case (code)0x66:
    case (code)0xc5:
    case (code)0xd2:
    case (code)0xdf:
    case (code)0xec:
    case (code)0xf9:
      *(char *)0x8d50 = *(char *)0x8d50 + (char)pbVar37;
      pcVar346 = pcVar346 + 2;
      goto code_r0x000104bf;
    case (code)0x7:
      puVar46 = puVar257 + -1;
      puVar257[-1] = (uint)pcVar18;
      goto LAB_1000_009a;
    case (code)0x8:
    case (code)0x15:
    case (code)0x2f:
    case (code)0x54:
      goto switchD_1000_4341_caseD_8;
    case (code)0x9:
    case (code)0x16:
    case (code)0x22:
    case (code)0x30:
    case (code)0x45:
    case (code)0x55:
    case (code)0xc8:
    case (code)0xd5:
    case (code)0xe2:
    case (code)0xef:
    case (code)0xfc:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0xa:
    case (code)0x17:
    case (code)0x31:
    case (code)0x56:
    case (code)0xc9:
    case (code)0xd6:
    case (code)0xe3:
    case (code)0xf0:
    case (code)0xfd:
      goto switchD_1000_4341_caseD_a;
    default:
      goto switchD_1000_41c7_caseD_0;
    case (code)0xc:
    case (code)0x19:
    case (code)0x25:
    case (code)0x58:
    case (code)0xcb:
    case (code)0xd8:
    case (code)0xe5:
    case (code)0xf2:
    case (code)0xff:
      goto switchD_1000_41c7_caseD_1;
    case (code)0xe:
      *(undefined1 *)0x72a3 = *(undefined1 *)0x72a3;
      pcVar345 = pcVar17 + -0x33fa;
      cVar11 = *pcVar345;
      *pcVar345 = (code)((char)*pcVar345 + 4);
      *(char *)0x78a3 = *(char *)0x78a3 + (0xfb < (byte)cVar11);
      pcVar345 = pcVar17 + -0x31fa;
      cVar11 = *pcVar345;
      *pcVar345 = (code)((char)*pcVar345 + 4);
      *(char *)0x76a3 = *(char *)0x76a3 + (0xfb < (byte)cVar11);
      pcVar345 = pcVar17 + -0x2ffa;
      cVar11 = *pcVar345;
      *pcVar345 = (code)((char)*pcVar345 + 4);
      *(char *)0x6ea3 = *(char *)0x6ea3 + (0xfb < (byte)cVar11);
      pcVar345 = (code *)ZEXT24(pcVar17 + 1);
      goto switchD_1000_0890_caseD_3;
    case (code)0x14:
      uVar16 = *(uint *)(pcVar17 + 6);
      if (*(uint *)0xcb9 <= uVar16) goto LAB_1000_4929;
      bVar360 = false;
      if ((*(uint *)(pcVar17 + 10) & 0x8000) != 0) {
        if (*(int *)(pcVar17 + 0xc) == 0) goto LAB_1000_4929;
        bVar360 = false;
        uVar343 = 0;
        pcVar345 = (code *)swi(0x21);
        uVar32 = uVar343;
        uVar33 = (*pcVar345)();
        if (bVar360) goto LAB_1000_4929;
        if ((*(uint *)(pcVar17 + 0xc) & 2) == 0) {
          uVar343 = uVar32 + *(uint *)(pcVar17 + 10);
          bVar360 = CARRY2(uVar32,*(uint *)(pcVar17 + 10)) ||
                    CARRY2(uVar343,(uint)CARRY2(uVar33,*(uint *)(pcVar17 + 8)));
          if ((int)(uVar343 + CARRY2(uVar33,*(uint *)(pcVar17 + 8))) < 0) goto LAB_1000_4929;
        }
        else {
          *(uint *)(pcVar17 + -2) = uVar32;
          *(uint *)(pcVar17 + -4) = uVar33;
          pcVar345 = (code *)swi(0x21);
          uVar33 = (*pcVar345)();
          uVar32 = uVar343 + *(uint *)(pcVar17 + 10);
          bVar360 = CARRY2(uVar343,*(uint *)(pcVar17 + 10)) ||
                    CARRY2(uVar32,(uint)CARRY2(uVar33,*(uint *)(pcVar17 + 8)));
          if ((int)(uVar32 + CARRY2(uVar33,*(uint *)(pcVar17 + 8))) < 0) {
            pcVar345 = (code *)swi(0x21);
            (*pcVar345)();
            goto LAB_1000_4929;
          }
        }
      }
      pcVar345 = (code *)swi(0x21);
      (*pcVar345)();
      if (!bVar360) {
        *(byte *)(uVar16 + 0xcbb) = *(byte *)(uVar16 + 0xcbb) & 0xfd;
      }
LAB_1000_4929:
      pcVar17 = (code *)FUN_1000_3153();
      return pcVar17;
    case (code)0x1b:
      *(undefined1 *)0x6c7 = *(undefined1 *)0x6c7;
      pbVar37[(int)pcVar18] = pbVar37[(int)pcVar18] + (char)cVar11;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x21:
    case (code)0xb8:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x23:
    case (code)0x46:
      puVar54 = puVar257 + -1;
      puVar257[-1] = unaff_DS;
      *pcVar18 = (code)((char)*pcVar18 + (char)cVar11 + -0x3c + (0x3b < (byte)cVar11));
      goto LAB_1000_01c6;
    case (code)0x26:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x27:
    case (code)0x68:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x28:
      goto switchD_1000_4341_caseD_28;
    case (code)0x29:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x2a:
      pcVar20[0x10] = pcVar20[0x10];
      goto code_r0x000102ef;
    case (code)0x2c:
    case (code)0x96:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x2d:
      puVar257[-1] = iVar359;
      puVar270 = puVar257 + -2;
      puVar257[-2] = (uint)pcVar17;
      cVar10 = '\x02';
      do {
        pcVar17 = pcVar17 + -2;
        puVar270 = puVar270 + -1;
        *puVar270 = *(undefined2 *)pcVar17;
        cVar10 = cVar10 + -1;
      } while ('\0' < cVar10);
      puVar257[-5] = (uint)(puVar257 + -2);
      pcVar345 = (code *)ZEXT24(puVar257 + -2);
      puVar44 = puVar257 + -0x130d;
      goto code_r0x0001003f;
    case (code)0x2e:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x33:
    case (code)0x48:
    case (code)0xaf:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x34:
    case (code)0x37:
    case (code)0x99:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x35:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x36:
      puVar339 = (uint *)ZEXT24(puVar257 + -1);
      puVar257[-1] = (uint)pcVar21;
      uVar26 = *(ulong *)0x410;
      iVar359 = (int)(uVar26 >> 0x10);
      pbVar38 = (byte *)(uVar26 & 0xffff);
      bVar361 = *(int *)((int)uVar26 + 0xc) == 0;
switchD_1000_4341_caseD_a:
      puVar127 = (uint *)puVar339;
      if (!bVar361) {
        if (*(int *)((byte *)pbVar38 + 0xc) == 1) {
          *(undefined2 *)0x76 = 0;
        }
        else {
          puVar127[-1] = *(undefined2 *)0x11c6;
          puVar127[-2] = *(undefined2 *)0x11c4;
          puVar127[-3] = *(undefined2 *)((byte *)pbVar38 + 0xc);
          puVar127[-4] = 0x1000;
          uVar358 = 0x187;
          puVar114 = puVar127 + -5;
          puVar127[-5] = 0xaa7;
          iVar359 = func_0x0000195e();
          puVar127 = puVar114 + 3;
          *(int *)0x76 = iVar359;
          if (iVar359 < 0) {
            puVar114[2] = unaff_DS;
            puVar114[1] = 0x4aa;
            *puVar114 = unaff_DS;
            puVar114[-1] = 0x4ab;
            puVar114[-2] = 0x187;
            puVar115 = puVar114 + -3;
            puVar114[-3] = 0xac4;
            FUN_1000_17f8();
            puVar127 = (uint *)((int)puVar115 + 0xc);
          }
        }
      }
      if (-1 < *(int *)0x78) goto LAB_1000_0b23;
      uVar357 = (undefined2)((ulong)*(undefined4 *)0x410 >> 0x10);
      iVar359 = (int)*(undefined4 *)0x410;
      if (*(int *)(iVar359 + 0xe) == 0) goto LAB_1000_0b23;
      if (*(int *)(iVar359 + 0xe) != 1) {
        *(undefined2 *)((int)puVar127 + -2) = *(undefined2 *)0x11ca;
        *(undefined2 *)((int)puVar127 + -4) = *(undefined2 *)0x11c8;
        *(undefined2 *)((int)puVar127 + -6) = *(undefined2 *)(iVar359 + 0xe);
        *(undefined2 *)((int)puVar127 + -8) = uVar358;
        uVar358 = 0x187;
        puVar116 = (undefined1 *)((int)puVar127 + -10);
        *(undefined2 *)((int)puVar127 + -10) = 0xb03;
        pbVar37 = (byte *)func_0x000019ce();
        puVar339 = (uint *)ZEXT24(puVar116 + 6);
        *(undefined2 *)0x78 = pbVar37;
        goto code_r0x00010b0e;
      }
      *(undefined2 *)0x78 = 0;
      goto LAB_1000_0b23;
    case (code)0x38:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x39:
      goto switchD_1000_4341_caseD_39;
    case (code)0x3c:
    case (code)0x42:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x3d:
    case (code)0x43:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x3e:
      goto switchD_1000_4341_caseD_3e;
    case (code)0x44:
    case (code)0x94:
      goto switchD_1000_4341_caseD_44;
    case (code)0x49:
    case (code)0xb0:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x4a:
    case (code)0xbc:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x4b:
    case (code)0x6b:
    case (code)0xbd:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x4c:
    case (code)0x6c:
    case (code)0xbe:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x4d:
      goto switchD_1000_4341_caseD_4d;
    case (code)0x4e:
      pcVar29 = (code *)~(uint)pcVar29;
      bVar360 = pcVar20 + 1 < pcVar29;
      pcVar17 = pcVar20 + 1 + -(int)pcVar29;
      bVar362 = pcVar17 == (code *)0x0;
      goto code_r0x000150c5;
    case (code)0x4f:
      goto switchD_1000_4341_caseD_4f;
    case (code)0x50:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x51:
    case (code)0x65:
    case (code)0xa0:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x52:
      pcVar345 = (code *)ZEXT24(pcVar17 + (int)pcVar29);
      pcVar30 = pcVar17 + (int)pcVar29 + -0x39fa;
      cVar11 = *pcVar30;
      *pcVar30 = (code)((char)*pcVar30 + 4);
      pcVar351 = (char *)0x639;
      bVar360 = SCARRY1(*pcVar351,0xfb < (byte)cVar11);
      *pcVar351 = *pcVar351 + (0xfb < (byte)cVar11);
      bVar362 = *pcVar351 < '\0';
      goto code_r0x000102d1;
    case (code)0x53:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x5a:
      goto LAB_1000_00c2;
    case (code)0x5b:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x5c:
      goto LAB_1000_08e6;
    case (code)0x5e:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x5f:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x62:
      uVar16 = 0xffff;
      goto code_r0x0001504b;
    case (code)0x63:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x64:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x67:
    case (code)0xbb:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x69:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x6a:
      *(undefined1 *)0x3e83 = *(undefined1 *)0x3e83;
      pcVar20[0x10] = pcVar20[0x10];
      goto code_r0x0001037b;
    case (code)0x6d:
      pcVar346 = pcVar20 + 1;
      cVar11 = (code)in(uVar32);
      *pcVar20 = cVar11;
      uVar358 = *puVar257;
      uVar342 = (undefined2)((ulong)puVar339 >> 0x10);
      *puVar257 = (uint)(puVar257 + 1);
      uVar31 = (undefined2)((ulong)pcVar25 >> 0x10);
      puVar257[-1] = (uint)puVar257;
      pcVar23 = pcVar17 + -1;
      puVar257[-2] = (uint)pbVar37;
      pcVar18 = (code *)((uint)pcVar18 ^ *(uint *)pcVar18);
      in_ESI = (code *)CONCAT22(uVar15,pcVar18);
      pbVar37[(int)(pcVar20 + 2)] = pbVar37[(int)(pcVar20 + 2)] ^ bVar14;
      pbVar37[(int)pcVar18] = pbVar37[(int)pcVar18] ^ (char)uVar358 - 0x20U;
      puVar338 = (uint *)CONCAT22(uVar342,puVar257 + -1);
      uVar24 = CONCAT31((int3)(CONCAT22(uVar357,puVar257[-2]) >> 8),(char)puVar257[-2] + -0x20);
      in_ECX = (code *)CONCAT22(uVar31,pcVar29 + 1);
      if (pcVar29 + 1 != (code *)0x0) {
LAB_1000_57a4:
        uVar28 = (undefined3)((ulong)uVar24 >> 8);
        bVar12 = (char)uVar24 - 0x20;
        pcVar27 = (code *)CONCAT31(uVar28,bVar12);
        pcVar17 = (code *)in_ECX;
        in_ECX = (code *)CONCAT22((int)((ulong)in_ECX >> 0x10),pcVar17 + 1);
        pcVar21 = pcVar346;
        if (pcVar17 + 1 == (code *)0x0) {
code_r0x000157a9:
          (pcVar23 + (int)pcVar21)[0x65] = (code)((byte)(pcVar23 + (int)pcVar21)[0x65] & bVar13);
          in_ECX[0x74] = (code)((byte)in_ECX[0x74] & (byte)((ulong)pcVar27 >> 8));
          pcVar345 = (code *)((byte *)pbVar38 + (int)(code *)in_ESI);
          *pcVar345 = (code)((byte)*pcVar345 & bVar14);
          cVar11 = *pcVar345;
          pcVar346 = pcVar21;
          if (-1 < (char)*pcVar345) {
            *pcVar21 = (code)((byte)*pcVar21 ^ bVar14);
            pcVar349 = pcVar21 + 1;
            cVar11 = (code)in(uVar32);
            *pcVar21 = cVar11;
            puVar339 = (uint *)CONCAT22((int)((ulong)puVar338 >> 0x10),(uint *)puVar338 + 1);
            pcVar27 = (code *)CONCAT22((int)((ulong)pcVar27 >> 0x10),(code *)*(uint *)puVar338);
            goto switchD_1000_4341_caseD_ed;
          }
          goto LAB_1000_57d9;
        }
        pcVar17 = (code *)in_ESI;
        bVar12 = bVar12 | ((byte *)pbVar38)[(int)pcVar17];
        pcVar27 = (code *)CONCAT31(uVar28,bVar12);
        out(*(uint *)pcVar17,uVar32);
        pcVar345 = (code *)((long)*(int *)((byte *)pbVar38 + 0x6e) * 0x7920);
        pcVar23 = (code *)pcVar345;
        bVar360 = (code *)(long)(int)pcVar23 != pcVar345;
        in_ESI = (code *)CONCAT22((int)((ulong)in_ESI >> 0x10),pcVar17 + 4);
        out(*(uint *)(pcVar17 + 2),uVar32);
        puVar339 = puVar338;
LAB_1000_582f:
        pcVar17 = (code *)in_ESI;
        if (bVar12 == 0) {
          if (bVar360) {
            pcVar17[0x6f] = (code)((byte)pcVar17[0x6f] & bVar14);
            goto LAB_1000_5838;
          }
          goto LAB_1000_589d;
        }
        in_ESI = (code *)CONCAT22((int)((ulong)in_ESI >> 0x10),pcVar17 + 2);
        out(*(uint *)pcVar17,uVar32);
        pcVar17[0x71] = (code)((byte)pcVar17[0x71] & bVar14);
        pcVar345 = pcVar23 + (int)pcVar346 + 0x65;
        *pcVar345 = (code)((byte)*pcVar345 & (byte)((ulong)in_ECX >> 8));
        if (*pcVar345 != (code)0x0) goto code_r0x0001585a;
code_r0x00015996:
        pcVar20 = (code *)in_ESI;
        out(*pcVar20,uVar32);
        pbVar37 = (byte *)pbVar38;
        puVar339 = (uint *)(*(long *)(pbVar37 + 0x75) * 0x69746172);
        out(*(undefined2 *)(pcVar20 + 1),uVar32);
        pcVar17 = pcVar20 + 4;
        in_ESI = (code *)CONCAT22((int)((ulong)in_ESI >> 0x10),pcVar17);
        out(pcVar20[3],uVar32);
        (pbVar37 + (int)pcVar17)[0x61] = (pbVar37 + (int)pcVar17)[0x61] & (byte)((ulong)in_ECX >> 8)
        ;
        pcVar27 = (code *)(ZEXT24((code *)pcVar27 + -0x49) & 0xffff0069);
        pbVar37[(int)pcVar17] = pbVar37[(int)pcVar17] + (char)pcVar27;
LAB_1000_59ce:
        pcVar23[0x15] = (code)((char)pcVar23[0x15] + (char)((ulong)pcVar27 >> 8));
        pbVar37 = (byte *)pbVar38;
        pbVar37[(int)(code *)in_ESI] = pbVar37[(int)(code *)in_ESI] + (char)pcVar27;
        pbVar37[(int)(code *)in_ESI] = pbVar37[(int)(code *)in_ESI] + (char)pcVar27;
        (pbVar37 + (int)pcVar346)[0x6c] = (pbVar37 + (int)pcVar346)[0x6c] + (char)in_ECX;
        cVar11 = (code)in(uVar32);
        *pcVar346 = cVar11;
        puVar176 = (undefined1 *)*puVar339;
        uVar358 = (undefined2)((ulong)in_ESI >> 0x10);
        pcVar17 = (code *)puVar339[1];
        uVar33 = puVar339[2];
        pbVar38 = (byte *)CONCAT22((int)((ulong)pbVar38 >> 0x10),(byte *)puVar339[4]);
        uVar32 = puVar339[5];
        in_EDX = (ulong)uVar32;
        pcVar20 = (code *)puVar339[6];
        uVar16 = puVar339[7];
        puVar339 = puVar339 + 8;
        uVar5 = in(uVar32);
        *puVar176 = uVar5;
        pbVar39 = puVar176 + 1 + uVar33 + 0x4c;
        bVar13 = (byte)uVar16;
        *pbVar39 = *pbVar39 & bVar13;
        *(byte *)(uVar33 + 0x69) = *(byte *)(uVar33 + 0x69) & bVar13;
        pcVar346 = (code *)(puVar176 + 2);
        uVar5 = in(uVar32);
        puVar176[1] = uVar5;
        pcVar27 = (code *)(ulong)CONCAT11((char)(uVar16 >> 8),bVar13 - 0x20);
        pcVar23 = (code *)(uVar33 + 1);
        if (0x1f < bVar13) {
          pcVar345 = pcVar17;
          pcVar17 = pcVar17 + 2;
          out(*(undefined2 *)pcVar345,uVar32);
          goto code_r0x000159f1;
        }
        goto LAB_1000_5a60;
      }
      pcVar23 = pcVar17 + -2;
      pcVar21 = pcVar20 + 3;
      uVar33 = in(uVar32);
      *(uint *)pcVar346 = uVar33;
      *(uint *)pcVar21 = *(uint *)pcVar21 ^ (uint)pcVar21;
      (pbVar37 + (int)pcVar18)[0x25] = (pbVar37 + (int)pcVar18)[0x25];
      *pcVar21 = (code)((byte)*pcVar21 ^ bVar14);
      pcVar349 = pcVar20 + 4;
      cVar11 = (code)in(uVar32);
      *pcVar21 = cVar11;
      in_ECX = (code *)CONCAT22(uVar31,pcVar29 + 2);
      if (pcVar29 + 2 != (code *)0x0) {
        pcVar27 = (code *)(CONCAT31((int3)(CONCAT22(uVar357,puVar257[-1]) >> 8),
                                    (char)puVar257[-1] + -0x20) ^ 0x586c);
        goto switchD_1000_4341_caseD_ed;
      }
      pcVar23 = pcVar17 + -3;
      pcVar346 = pcVar20 + 6;
      uVar33 = in(uVar32);
      *(uint *)pcVar349 = uVar33;
      pbVar37 = (byte *)CONCAT11(*pcVar346,(char)pbVar37);
      pbVar38 = (byte *)CONCAT22(uVar16,pbVar37);
      (pbVar37 + (int)pcVar18)[0x25] = (pbVar37 + (int)pcVar18)[0x25] ^ (byte)*pcVar346;
      *pcVar346 = (code)((byte)*pcVar346 ^ bVar14);
      pcVar21 = pcVar20 + 7;
      cVar11 = (code)in(uVar32);
      *pcVar346 = cVar11;
      pcVar346 = (code *)*puVar257;
      puVar289 = puVar257 + 1;
      (pbVar37 + (int)pcVar21)[0x4f] = (pbVar37 + (int)pcVar21)[0x4f];
      pcVar20[0x68] = (code)0x0;
      (pbVar37 + (int)pcVar21)[0x74] = (pbVar37 + (int)pcVar21)[0x74] & (byte)((uint)pcVar346 >> 8);
      pbVar39 = pbVar37 + (int)pcVar18;
      *pbVar39 = *pbVar39 & bVar14;
      if ((char)*pbVar39 < '\0') {
LAB_1000_577f:
        pcVar27 = (code *)CONCAT22(uVar357,pcVar346);
        puVar338 = (uint *)CONCAT22(uVar342,puVar289);
        bVar12 = (byte)((uint)pcVar346 >> 8);
        (pbVar37 + (int)pcVar21)[0x74] = (pbVar37 + (int)pcVar21)[0x74] & bVar12;
        pcVar17 = (code *)in_ESI;
        pbVar39 = pbVar37 + (int)pcVar17;
        *pbVar39 = *pbVar39 & bVar14;
        if ((char)*pbVar39 < '\0') {
          (pbVar37 + (int)pcVar21)[0x74] = (pbVar37 + (int)pcVar21)[0x74] & bVar12;
          goto code_r0x000157a9;
        }
        pcVar23[(int)pcVar21] = (code)((byte)pcVar23[(int)pcVar21] ^ bVar14);
        puVar339 = (uint *)CONCAT22(uVar342,puVar289 + 1);
        pcVar27 = (code *)CONCAT22(uVar357,(code *)*puVar289);
        pcVar21[0x65] = pcVar21[0x65];
        pcVar346 = pcVar21 + 2;
        uVar16 = in(uVar32);
        *(uint *)pcVar21 = uVar16;
        in_ESI = (code *)CONCAT22((int)((ulong)in_ESI >> 0x10),pcVar17 + 2);
        out(*(uint *)pcVar17,uVar32);
        pcVar21[99] = (code)0x0;
code_r0x00015797:
        bVar12 = (byte)((ulong)pcVar27 >> 8);
        (pbVar37 + (int)pcVar346)[0x74] = (pbVar37 + (int)pcVar346)[0x74] & bVar12;
        pbVar39 = pbVar37 + (int)(code *)in_ESI;
        *pbVar39 = *pbVar39 & bVar14;
        if (-1 < (char)*pbVar39) {
          *pcVar346 = (code)((byte)*pcVar346 ^ bVar14);
          pcVar345 = pcVar346;
          pcVar346 = pcVar346 + 1;
          cVar11 = (code)in(uVar32);
          *pcVar345 = cVar11;
          puVar338 = (uint *)CONCAT22((int)((ulong)puVar339 >> 0x10),(uint *)puVar339 + 1);
          uVar24 = CONCAT22((int)((ulong)pcVar27 >> 0x10),*(uint *)puVar339);
          goto LAB_1000_57a4;
        }
        (pbVar37 + (int)pcVar346)[0x74] = (pbVar37 + (int)pcVar346)[0x74] & bVar12;
        goto code_r0x000157c4;
      }
      pcVar23[(int)pcVar21] = (code)((byte)pcVar23[(int)pcVar21] ^ bVar14);
      uVar358 = puVar257[1];
      puVar339 = (uint *)CONCAT22(uVar342,puVar257 + 2);
      bVar362 = (byte)uVar358 < 0x20;
      pcVar27 = (code *)CONCAT31((int3)(CONCAT22(uVar357,uVar358) >> 8),(byte)uVar358 - 0x20);
      pcVar23 = pcVar17 + -4;
      bVar360 = pcVar23 == (code *)0x0;
      pcVar346 = pcVar20 + 9;
      uVar16 = in(uVar32);
      *(uint *)pcVar21 = uVar16;
      in_ESI = (code *)CONCAT22(uVar15,pcVar18 + 2);
      out(*(uint *)pcVar18,uVar32);
      if (!bVar362) {
        pcVar20[0x6a] = (code)0x0;
        bVar12 = (byte)((uint)uVar358 >> 8);
        (pbVar37 + (int)pcVar346)[0x74] = (pbVar37 + (int)pcVar346)[0x74] & bVar12;
        pbVar39 = pbVar37 + (int)(pcVar18 + 2);
        *pbVar39 = *pbVar39 & bVar14;
        if (-1 < (char)*pbVar39) {
          *pcVar346 = (code)((byte)*pcVar346 ^ bVar14);
          pcVar21 = pcVar20 + 10;
          cVar11 = (code)in(uVar32);
          *pcVar346 = cVar11;
          pcVar346 = (code *)puVar257[2];
          puVar289 = puVar257 + 3;
          (pbVar37 + (int)pcVar21)[0x4f] = (pbVar37 + (int)pcVar21)[0x4f];
          pcVar20[0x6b] = (code)0x0;
          goto LAB_1000_577f;
        }
        (pbVar37 + (int)pcVar346)[0x74] = (pbVar37 + (int)pcVar346)[0x74] & bVar12;
        goto code_r0x00015797;
      }
LAB_1000_57de:
      pcVar17 = (code *)in_ESI;
      in_ESI = (code *)CONCAT22((int)((ulong)in_ESI >> 0x10),pcVar17 + 1);
      out(*pcVar17,uVar32);
      if (bVar362) {
        pcVar17[0x69] = (code)((byte)pcVar17[0x69] & bVar14);
code_r0x0001585a:
        pcVar345 = pcVar23 + (int)pcVar346 + 0x75;
        *pcVar345 = (code)((byte)*pcVar345 & (byte)((ulong)pcVar27 >> 8));
        pcVar17 = (code *)in_ESI;
        in_ESI = (code *)CONCAT22((int)((ulong)in_ESI >> 0x10),pcVar17 + 1);
        out(*pcVar17,uVar32);
        if (*pcVar345 != (code)0x0) goto LAB_1000_5864;
        goto LAB_1000_586e;
      }
LAB_1000_58bc:
      if (bVar360) {
        pbVar37 = (byte *)pbVar38;
        pbVar39 = pbVar37 + 0x69;
        *pbVar39 = *pbVar39 & (byte)uVar32;
        if (*pbVar39 != 0) {
          pcVar20 = (code *)in_ESI;
          bVar13 = (byte)((ulong)pcVar27 >> 8);
          pbVar37[(int)pcVar20] = pbVar37[(int)pcVar20] & bVar13;
          pbVar37[(int)pcVar20] = pbVar37[(int)pcVar20] & bVar13;
          pbVar37[(int)pcVar20] = pbVar37[(int)pcVar20] & bVar13;
          in_ESI = (code *)CONCAT22((int)((ulong)in_ESI >> 0x10),pcVar20 + 2);
          out(*(uint *)pcVar20,uVar32);
          pcVar17 = (code *)in_ECX;
          pcVar345 = pcVar346 + 0x72;
          iVar34 = ((uint)(pcVar20 + 2) & 3) - (*(uint *)pcVar345 & 3);
          *(uint *)pcVar345 = *(uint *)pcVar345 + (uint)(0 < iVar34) * iVar34;
          pcVar20[0x4b] = (code)((char)pcVar20[0x4b] + (byte)uVar32);
LAB_1000_59bd:
          pcVar346 = pcVar346 + 1;
          cVar10 = (char)((uint)(pcVar17 + 1) >> 8);
          *pcVar346 = (code)((char)*pcVar346 + cVar10);
          iVar34 = *(int *)((byte *)pbVar38 + (int)(code *)in_ESI);
          *pcVar346 = (code)((char)*pcVar346 + cVar10);
          in_ECX = (code *)ZEXT24(pcVar17);
          *pcVar346 = (code)((char)*pcVar346 + (char)((uint)(iVar34 * 0x6925) >> 8));
          pcVar27 = (code *)0x0;
          goto LAB_1000_59ce;
        }
        goto code_r0x00015996;
      }
      pcVar345 = pcVar346;
      iVar34 = ((uint)(uint *)puVar339 & 3) - (*(uint *)pcVar345 & 3);
      *(uint *)pcVar345 = *(uint *)pcVar345 + (uint)(0 < iVar34) * iVar34;
code_r0x00015933:
      pbVar37 = (byte *)pbVar38;
      pcVar17 = (code *)in_ESI;
      puVar338 = (uint *)(pbVar37 + (int)pcVar17);
      iVar34 = ((uint)(uint *)puVar339 & 3) - (*puVar338 & 3);
      *puVar338 = *puVar338 + (uint)(0 < iVar34) * iVar34;
      puVar296 = (uint *)(*(int *)(pcVar346 + 0x79) * 0x73);
      uVar358 = (undefined2)((ulong)puVar339 >> 0x10);
      puVar339 = (uint *)CONCAT22(uVar358,puVar296);
      bVar14 = (byte)(uVar32 >> 8);
      pcVar17[0x6f] = (code)((byte)pcVar17[0x6f] & bVar14);
      pcVar345 = pcVar346 + 0x6f;
      *pcVar345 = (code)((byte)*pcVar345 & (byte)((ulong)in_ECX >> 8));
      uVar357 = (undefined2)((ulong)in_ESI >> 0x10);
      bVar13 = (byte)((ulong)pcVar27 >> 8);
      if (*pcVar345 != (code)0x0) {
        pcVar17[0x68] = (code)((byte)pcVar17[0x68] & bVar14);
        (pcVar23 + (int)pcVar346)[0x75] = (code)((byte)(pcVar23 + (int)pcVar346)[0x75] & bVar13);
        out(*(uint *)pcVar17,uVar32);
        (pbVar37 + (int)pcVar346)[0x6e] = (pbVar37 + (int)pcVar346)[0x6e] & bVar13;
        pcVar17[2] = (code)((byte)pcVar17[2] & (byte)((ulong)pbVar38 >> 8));
        pcVar20 = pcVar17 + 1;
        in_ESI = (code *)CONCAT22(uVar357,pcVar20);
        puVar296[-1] = (uint)puVar296;
        pcVar23 = pcVar23 + 2;
        puVar339 = (uint *)CONCAT22(uVar358,puVar296 + -2);
        puVar296[-2] = uVar32;
        pcVar17[0x70] = (code)((byte)pcVar17[0x70] & bVar14);
        (pcVar23 + (int)pcVar346)[0x65] = (code)((byte)(pcVar23 + (int)pcVar346)[0x65] & bVar14);
        pcVar345 = pcVar346;
        pcVar346 = pcVar346 + 1;
        cVar11 = (code)in(uVar32);
        *pcVar345 = cVar11;
        pcVar345 = pcVar17 + 0x21;
        iVar34 = ((uint)pcVar20 & 3) - (*(uint *)pcVar345 & 3);
        *(uint *)pcVar345 = *(uint *)pcVar345 + (uint)(0 < iVar34) * iVar34;
        if (0 >= iVar34) {
          uVar15 = (undefined2)((ulong)pbVar38 >> 0x10);
          if ((char)pcVar27 != '\0' || pbVar37[(int)pcVar20] != 0) {
            (pcVar23 + (int)pcVar346)[0x68] = (code)((byte)(pcVar23 + (int)pcVar346)[0x68] & bVar13)
            ;
            pcVar346 = (code *)puVar296[-2];
            pcVar23 = (code *)*puVar296;
            pbVar38 = (byte *)CONCAT22(uVar15,(byte *)puVar296[2]);
            in_EDX = (ulong)puVar296[3];
            in_ECX = (code *)(ulong)puVar296[4];
            pcVar27 = (code *)CONCAT22((int)((ulong)pcVar27 >> 0x10),(code *)puVar296[5]);
            puVar339 = (uint *)CONCAT22(uVar358,puVar296 + 6);
            in_ESI = (code *)CONCAT22(uVar357,(undefined1 *)puVar296[-1] + 1);
            out(*(undefined1 *)puVar296[-1],puVar296[3]);
            bVar360 = false;
            *pcVar27 = (code)((byte)*pcVar27 & (byte)(puVar296[5] >> 8));
code_r0x0001597a:
            puVar297 = (uint *)puVar339;
            puVar339 = (uint *)CONCAT22((int)((ulong)puVar339 >> 0x10),puVar297 + -1);
            puVar297[-1] = (uint)(code *)pcVar27;
            goto LAB_1000_597b;
          }
          pcVar346 = (code *)puVar296[-2];
          in_ESI = (code *)CONCAT22(uVar357,(code *)puVar296[-1]);
          pcVar23 = (code *)*puVar296;
          pbVar38 = (byte *)CONCAT22(uVar15,(byte *)puVar296[2]);
          uVar32 = puVar296[3];
          in_ECX = (code *)(ulong)puVar296[4];
          pcVar27 = (code *)(ulong)puVar296[5];
          puVar339 = (uint *)CONCAT22(uVar358,puVar296 + 6);
        }
        goto LAB_1000_59ce;
      }
      in_ESI = (code *)CONCAT22(uVar357,pcVar17 + 1);
      out(*pcVar17,uVar32);
      pcVar345 = pcVar23 + (int)pcVar346 + 0x61;
      *pcVar345 = (code)((byte)*pcVar345 & bVar14);
      if (*pcVar345 != (code)0x0) {
        pcVar17[0x70] = (code)((byte)pcVar17[0x70] & bVar14);
        *pbVar37 = *pbVar37 & bVar13;
        puVar339 = (uint *)CONCAT22(uVar358,puVar296 + -1);
        puVar296[-1] = (uint)puVar296;
        pcVar17 = (code *)in_ECX + -1;
        goto LAB_1000_59bd;
      }
LAB_1000_5a14:
      pcVar17 = (code *)in_ESI + 2;
      uVar358 = (undefined2)((ulong)in_ESI >> 0x10);
      out(*(uint *)(code *)in_ESI,uVar32);
      pcVar345 = pcVar17 + *(int *)(pcVar23 + 0x20) * 0x3433;
      *pcVar345 = (code)((byte)*pcVar345 ^ (byte)(uVar32 >> 8));
      ((byte *)pbVar38)[(int)pcVar17] =
           ((byte *)pbVar38)[(int)pcVar17] ^ (byte)((ulong)pcVar27 >> 8);
      puVar298 = (uint *)puVar339;
      puVar176 = (undefined1 *)*(undefined2 *)((int)puVar298 + 1);
      in_ESI = (code *)CONCAT22(uVar358,(code *)*(undefined2 *)((int)puVar298 + 3));
      pcVar23 = (code *)*(undefined2 *)((int)puVar298 + 5);
      uVar357 = (undefined2)((ulong)pbVar38 >> 0x10);
      pbVar38 = (byte *)CONCAT22(uVar357,(byte *)*(undefined2 *)((int)puVar298 + 9));
      uVar32 = *(uint *)((int)puVar298 + 0xb);
      uVar16 = *(uint *)((int)puVar298 + 0xd);
      pcVar27 = (code *)(ulong)*(uint *)((int)puVar298 + 0xf);
      puVar339 = (uint *)CONCAT22((int)((ulong)puVar339 >> 0x10),(uint *)((int)puVar298 + 0x11));
      if (puVar298 == (uint *)0xffff) {
        pcVar346 = (code *)(puVar176 + 1);
        uVar5 = in(uVar32);
        *puVar176 = uVar5;
        goto LAB_1000_5a86;
      }
      pbVar38 = (byte *)*(undefined2 *)((int)puVar298 + 9) + (int)*(undefined2 *)((int)puVar298 + 3)
      ;
      *pbVar38 = *pbVar38 + (char)*(uint *)((int)puVar298 + 0xf);
      uVar5 = in(uVar32);
      *puVar176 = uVar5;
      uVar5 = in(uVar32);
      puVar176[1] = uVar5;
      puVar176 = (undefined1 *)*puVar339;
      pcVar18 = (code *)puVar339[1];
      uVar343 = puVar339[2];
      pbVar37 = (byte *)puVar339[4];
      pbVar38 = (byte *)CONCAT22(uVar357,pbVar37);
      uVar33 = puVar339[5];
      in_EDX = (ulong)uVar33;
      uVar16 = puVar339[6];
      uVar32 = puVar339[7];
      puVar339 = puVar339 + 8;
      uVar5 = in(uVar33);
      *puVar176 = uVar5;
      pbVar39 = puVar176 + 1 + uVar343 + 0x4c;
      bVar14 = (byte)uVar32;
      *pbVar39 = *pbVar39 & bVar14;
      *(byte *)(uVar343 + 0x69) = *(byte *)(uVar343 + 0x69) & bVar14;
      pcVar346 = (code *)(puVar176 + 2);
      uVar5 = in(uVar33);
      puVar176[1] = uVar5;
      bVar13 = (byte)(uVar32 >> 8);
      pcVar27 = (code *)(ulong)CONCAT11(bVar13,bVar14 - 0x20);
      pcVar23 = (code *)(uVar343 + 1);
      if (bVar14 < 0x20) {
LAB_1000_5aac:
        pcVar345 = pcVar18 + 0x69;
        iVar34 = ((uint)pcVar18 & 3) - (*(uint *)pcVar345 & 3);
        *(uint *)pcVar345 = *(uint *)pcVar345 + (uint)(0 < iVar34) * iVar34;
        pcVar17 = pcVar18 + 2;
        out(*(undefined2 *)pcVar18,(int)in_EDX);
        pcVar18 = pcVar18 + 3;
        out(*pcVar17,(int)in_EDX);
        ((byte *)pbVar38)[(int)pcVar18] = ((byte *)pbVar38)[(int)pcVar18] + (char)pcVar27;
        goto LAB_1000_5ab4;
      }
      out(*(undefined2 *)pcVar18,uVar33);
      puVar299 = (uint *)puVar339;
      pbVar37[(int)pcVar346] = pbVar37[(int)pcVar346] ^ (byte)(uVar33 >> 8);
      pbVar37[(int)(pcVar18 + 2)] = pbVar37[(int)(pcVar18 + 2)] ^ bVar13;
      pcVar346 = (code *)*(undefined2 *)((int)puVar299 + 1);
      pcVar18 = (code *)*(undefined2 *)((int)puVar299 + 3);
      pcVar23 = (code *)*(undefined2 *)((int)puVar299 + 5);
      pbVar38 = (byte *)CONCAT22(uVar357,(byte *)*(undefined2 *)((int)puVar299 + 9));
      uVar32 = *(uint *)((int)puVar299 + 0xb);
      in_EDX = (ulong)uVar32;
      uVar16 = *(uint *)((int)puVar299 + 0xd);
      pcVar27 = (code *)(ulong)*(uint *)((int)puVar299 + 0xf);
      puVar339 = (uint *)CONCAT22((int)((ulong)puVar339 >> 0x10),(uint *)((int)puVar299 + 0x11));
      if (puVar299 == (uint *)0xffff) {
        pcVar345 = pcVar346;
        pcVar346 = pcVar346 + 1;
        cVar11 = (code)in(uVar32);
        *pcVar345 = cVar11;
        goto LAB_1000_5aac;
      }
      pbVar39 = (byte *)*(undefined2 *)((int)puVar299 + 9) + (int)pcVar18;
      bVar13 = (byte)*(uint *)((int)puVar299 + 0xf);
      *pbVar39 = *pbVar39 + bVar13;
      pcVar20 = (code *)(uVar16 + 1);
      if (pcVar20 == (code *)0x0) {
        pcVar345 = pcVar18;
        pcVar18 = pcVar18 + 2;
        out(*(undefined2 *)pcVar345,uVar32);
        goto code_r0x00015a6e;
      }
      pcVar345 = (code *)(ulong)(uint)(*(int *)(pcVar23 + 0x20) * 0x4f49);
      pcVar18[*(int *)(pcVar23 + 0x20) * 0x4f49 + 0x61] =
           (code)((byte)pcVar18[*(int *)(pcVar23 + 0x20) * 0x4f49 + 0x61] & bVar13);
LAB_1000_5ac1:
      pcVar23 = (code *)pcVar345;
      ((uint *)puVar339)[-1] = (uint)pcVar346;
      puVar339 = (uint *)CONCAT22((int)((ulong)puVar339 >> 0x10),
                                  (uint *)(*(int *)(pcVar18 + 0x74) * 0x2068 + -2));
      *(undefined2 *)(*(int *)(pcVar18 + 0x74) * 0x2068 + -2) = (byte *)pbVar38;
      pcVar30 = pcVar346;
      pcVar346 = pcVar346 + 1;
      uVar357 = (undefined2)in_EDX;
      cVar11 = (code)in(uVar357);
      *pcVar30 = cVar11;
      pcVar30 = pcVar18 + 0x69;
      iVar34 = ((uint)pcVar18 & 3) - (*(uint *)pcVar30 & 3);
      *(uint *)pcVar30 = *(uint *)pcVar30 + (uint)(0 < iVar34) * iVar34;
      pcVar17 = pcVar18 + 2;
      out(*(undefined2 *)pcVar18,uVar357);
      pcVar18 = pcVar18 + 3;
      out(*pcVar17,uVar357);
      pbVar39 = (byte *)pbVar38 + (int)pcVar18;
      bVar362 = CARRY1(*pbVar39,(byte)pcVar27);
      *pbVar39 = *pbVar39 + (byte)pcVar27;
      pcVar349 = pcVar20 + 1;
      bVar360 = true;
      pcVar17 = (code *)0x0;
      if (pcVar349 != (code *)0x0) {
code_r0x00015ad8:
        pcVar345 = (code *)(ulong)(uint)(*(int *)(pcVar23 + 0x20) * 0x5447);
        pcVar20 = pcVar349 + 1;
        ((byte *)pbVar38 + (int)pcVar18)[0x61] =
             ((byte *)pbVar38 + (int)pcVar18)[0x61] & (byte)in_EDX;
LAB_1000_5ae1:
        pbVar39 = pbVar38 + in_GS_OFFSET + 0x69;
        *pbVar39 = *pbVar39 & (byte)in_EDX;
        pcVar349 = pcVar20;
        if ((POPCOUNT(*pbVar39) & 1U) != 0) {
          ((code *)pcVar345 + (int)pcVar346)[0x65] =
               (code)((byte)((code *)pcVar345 + (int)pcVar346)[0x65] & (byte)in_EDX);
          cVar11 = (code)in((int)in_EDX);
          *pcVar346 = cVar11;
          goto code_r0x00015aec;
        }
LAB_1000_5b4d:
        pcVar352 = (code *)CONCAT22(uVar358,pcVar18 + 1);
        out(*pcVar18,(int)in_EDX);
        goto LAB_1000_5b4e;
      }
LAB_1000_5af8:
      pcVar30 = (code *)ZEXT24(pcVar17);
      pcVar349 = (code *)pcVar345;
      if (!bVar360) {
code_r0x00015afa:
        pcVar349 = (code *)(*(int *)(pcVar349 + 0x20) * 0x5249);
        puVar301 = (uint *)puVar339;
        puVar339 = (uint *)CONCAT22((int)((ulong)puVar339 >> 0x10),puVar301 + -1);
        puVar301[-1] = (uint)pcVar17;
        (pcVar349 + (int)pcVar346)[0x65] =
             (code)((byte)(pcVar349 + (int)pcVar346)[0x65] & (byte)in_EDX);
        pcVar345 = pcVar346;
        pcVar346 = pcVar346 + 1;
        uVar357 = (undefined2)in_EDX;
        cVar11 = (code)in(uVar357);
        *pcVar345 = cVar11;
        pcVar345 = pcVar18 + 0x69;
        iVar34 = ((uint)pcVar18 & 3) - (*(uint *)pcVar345 & 3);
        *(uint *)pcVar345 = *(uint *)pcVar345 + (uint)(0 < iVar34) * iVar34;
        pcVar20 = pcVar18 + 2;
        out(*(undefined2 *)pcVar18,uVar357);
        pcVar18 = pcVar18 + 3;
        out(*pcVar20,uVar357);
        ((byte *)pbVar38)[(int)pcVar18] = ((byte *)pbVar38)[(int)pcVar18] + (char)pcVar27;
        pcVar17 = pcVar17 + 1;
        if (pcVar17 != (code *)0x0) goto code_r0x00015b12;
        pcVar17 = (code *)(code *)((long)*(int *)(pcVar349 + (int)pcVar346 + 0x70) * 0x616c);
        pcVar352 = (code *)CONCAT22(uVar358,pcVar17);
        bVar362 = (code *)(long)(int)pcVar17 !=
                  (code *)((long)*(int *)(pcVar349 + (int)pcVar346 + 0x70) * 0x616c);
        pcVar17 = (code *)0x0;
        uVar16 = 0;
        goto code_r0x00015b37;
      }
      pcVar352 = (code *)CONCAT22(uVar358,pcVar18 + 2);
      out(*(undefined2 *)pcVar18,(int)in_EDX);
      bVar360 = true;
      if (!bVar362) goto code_r0x00015b1d;
code_r0x00015b3d:
      pcVar349 = (code *)pcVar30;
      bVar361 = SCARRY2((int)pcVar20,1);
      bVar13 = 1;
      pcVar25 = pcVar27;
      pcVar20 = pcVar346;
      if (bVar362) goto LAB_1000_5bae;
      pcVar18 = (code *)pcVar352;
      uVar358 = (undefined2)((ulong)pcVar352 >> 0x10);
      uVar357 = (undefined2)in_EDX;
      out(*pcVar18,uVar357);
      pcVar20 = pcVar346 + 2;
      uVar16 = in(uVar357);
      *(uint *)pcVar346 = uVar16;
      pcVar17 = pcVar18 + 2;
      pcVar25 = (code *)CONCAT22(uVar358,pcVar17);
      out(pcVar18[1],uVar357);
      puVar303 = (uint *)puVar339;
      uVar15 = (undefined2)((ulong)puVar339 >> 0x10);
      if (!bVar360) {
        puVar339 = (uint *)CONCAT22(uVar15,puVar303 + -1);
        puVar303[-1] = (uint)(byte *)pbVar38;
        pcVar346 = pcVar346 + 3;
        cVar11 = (code)in(uVar357);
        *pcVar20 = cVar11;
        pcVar30 = pcVar18 + 0x6b;
        iVar34 = ((uint)pcVar17 & 3) - (*(uint *)pcVar30 & 3);
        *(uint *)pcVar30 = *(uint *)pcVar30 + (uint)(0 < iVar34) * iVar34;
        pcVar18 = pcVar18 + 4;
        out(*(undefined2 *)pcVar17,uVar357);
        goto LAB_1000_5b4d;
      }
      puVar339 = (uint *)CONCAT22(uVar15,puVar303 + -1);
      puVar303[-1] = (uint)(byte *)pbVar38;
      cVar11 = (code)in(uVar357);
      *pcVar20 = cVar11;
code_r0x00015b68:
      pcVar20 = pcVar346 + 3;
      pcVar17 = (code *)pcVar25;
      pcVar352 = pcVar17 + 0x69;
      iVar34 = ((uint)pcVar17 & 3) - (*(uint *)pcVar352 & 3);
      *(uint *)pcVar352 = *(uint *)pcVar352 + (uint)(0 < iVar34) * iVar34;
      out(*(undefined2 *)pcVar17,(int)in_EDX);
      pcVar352 = (code *)CONCAT22((int)((ulong)pcVar25 >> 0x10),pcVar17 + 3);
      out(pcVar17[2],(int)in_EDX);
      ((byte *)pbVar38)[0x62] = ((byte *)pbVar38)[0x62] + (char)(in_EDX >> 8);
      pcVar25 = pcVar346 + 0x75;
      bVar360 = CARRY1((byte)*pcVar25,(byte)pcVar27);
      *pcVar25 = (code)((char)*pcVar25 + (byte)pcVar27);
      if (!bVar360) goto LAB_1000_5b76;
LAB_1000_5be5:
      ((code *)pcVar345 + (int)pcVar20)[0x77] =
           (code)((byte)((code *)pcVar345 + (int)pcVar20)[0x77] & (byte)in_EDX);
      uVar26 = (long)*(int *)((code *)pcVar352 + 99) * 0x2068;
      pcVar25 = (code *)(uVar26 & 0xffff);
      bVar360 = (long)(int)uVar26 != uVar26;
code_r0x00015bed:
      bVar13 = (byte)pcVar27;
      in_AF = 9 < (bVar13 & 0xf) | in_AF;
      pcVar346 = (code *)(code *)CONCAT31((int3)((ulong)pcVar27 >> 8),
                                          bVar13 + in_AF * '\x06' + (0x99 < bVar13 | bVar360) * '`')
      ;
      pcVar18 = (code *)pcVar25;
code_r0x00015bee:
      pcVar349 = (code *)pcVar30;
      pcVar17 = (code *)pcVar345;
      *pcVar20 = (code)((byte)*pcVar20 & (byte)((ulong)pcVar30 >> 8));
      uVar16 = ((uint)pcVar346 & 0x2773) + 0xaae0;
      uVar26 = (ulong)uVar16;
      uVar358 = (undefined2)in_EDX;
      if (((uint)pcVar346 & 0x2773) < 0x5520) {
        pbVar39 = (byte *)pbVar38;
        *pbVar39 = *pbVar39 & (byte)(uVar16 >> 8);
        in_AF = 9 < ((byte)uVar16 & 0xf) | in_AF;
        bVar360 = 0x99 < (byte)uVar16;
        uVar26 = uVar26 & 0xffffff00;
        puVar308 = (uint *)puVar339;
        uVar357 = (undefined2)((ulong)puVar339 >> 0x10);
        puVar310 = puVar308 + -1;
        puVar308[-1] = 0x2027;
        pcVar346 = pcVar18 + 4;
        out(*(undefined4 *)pcVar18,uVar358);
        if (!bVar360) {
          puVar339 = (uint *)CONCAT22(uVar357,puVar308 + -2);
          puVar308[-2] = 0x6c65;
          goto code_r0x00015c07;
        }
LAB_1000_5c22:
        puVar339 = (uint *)CONCAT22(uVar357,puVar310 + -1);
        puVar310[-1] = (uint)pcVar346;
        if (!bVar360) {
          pcVar20[0x73] = (code)((char)pcVar20[0x73] + (char)in_EDX);
          pcVar20 = (code *)puVar310[-1];
          uVar32 = *puVar310;
          iVar34 = puVar310[1];
          pbVar37 = (byte *)puVar310[3];
          pbVar38 = (byte *)CONCAT22((int)((ulong)pbVar38 >> 0x10),pbVar37);
          in_EDX = (ulong)puVar310[4];
          pcVar30 = (code *)(ulong)puVar310[5];
          uVar16 = puVar310[6];
          pcVar27 = (code *)(ulong)uVar16;
          puVar310[6] = (uint)pbVar37;
          puVar310[5] = (uint)(puVar310 + 6);
          pcVar25 = (code *)(ulong)uVar32;
          puVar310[4] = iVar34 + 1;
          puVar339 = (uint *)CONCAT22(uVar357,puVar310 + 3);
          puVar310[3] = uVar16;
          pcVar20[iVar34 + 0x70] = (code)((byte)pcVar20[iVar34 + 0x70] & (byte)pbVar37);
code_r0x00015c3e:
          pcVar17 = (code *)pcVar25;
          goto LAB_1000_5c40;
        }
LAB_1000_5c99:
        in_EDX = CONCAT31((int3)(in_EDX >> 8),0x20);
code_r0x00015c9d:
        pcVar17 = (code *)pcVar345;
        pcVar27 = (code *)CONCAT31((int3)(uVar26 >> 8),0x2f);
        puVar312 = (uint *)puVar339;
        uVar358 = (undefined2)((ulong)puVar339 >> 0x10);
        puVar340 = (undefined4 *)CONCAT22(uVar358,(undefined4 *)((int)puVar312 + 1));
        uVar16 = (uint)in_EDX;
        out(*pcVar346,uVar16);
        pcVar18 = pcVar346 + 2;
        out(pcVar346[1],uVar16);
        pbVar37 = (byte *)pbVar38;
        bVar13 = (byte)(uVar26 >> 8);
        pbVar37[(int)pcVar18] = pbVar37[(int)pcVar18] & bVar13;
        pbVar37[(int)pcVar18] = pbVar37[(int)pcVar18] & bVar13;
        pcVar23 = pcVar349 + 1;
        pcVar30 = (code *)ZEXT24(pcVar23);
        bVar362 = (int)pcVar23 < 0;
        bVar360 = false;
        if (pcVar23 != (code *)0x0) goto LAB_1000_5d1f;
        out(*(undefined2 *)pcVar18,uVar16);
        (pcVar17 + (int)pcVar20)[0x65] = (code)((byte)(pcVar17 + (int)pcVar20)[0x65] & (byte)in_EDX)
        ;
        pcVar21 = pcVar20 + 1;
        cVar11 = (code)in(uVar16);
        *pcVar20 = cVar11;
        pcVar30 = pcVar346 + 0x24;
        iVar34 = ((uint)(pcVar346 + 4) & 3) - (*(uint *)pcVar30 & 3);
        *(uint *)pcVar30 = *(uint *)pcVar30 + (uint)(0 < iVar34) * iVar34;
        puVar339 = (uint *)CONCAT22(uVar358,puVar312 + 1);
        pcVar23 = (code *)(code *)((long)*(int *)(pcVar17 + (int)pcVar21 + 0x70) * 0x616c);
        bVar360 = (code *)(long)(int)pcVar23 !=
                  (code *)((long)*(int *)(pcVar17 + (int)pcVar21 + 0x70) * 0x616c);
        pcVar346 = (code *)0x0;
        if (-1 < (int)(puVar312 + 1)) goto LAB_1000_5cdc;
        puVar339 = (uint *)CONCAT22(uVar358,(uint *)((int)puVar312 + 3));
        if (!bVar360 && puVar312 != (uint *)0xfffd) {
          pcVar30 = pcVar20 + 0x21;
          iVar34 = ((uint)((int)puVar312 + 3) & 3) - (*(uint *)pcVar30 & 3);
          *(uint *)pcVar30 = *(uint *)pcVar30 + (uint)(0 < iVar34) * iVar34;
          pcVar30 = (code *)ZEXT24(pcVar349);
          pcVar18 = pcVar23 + 1;
          out(*pcVar23,uVar16);
          pcVar20 = pcVar21;
          if ((int)pcVar349 < 0) goto LAB_1000_5ce6_3;
          goto code_r0x00015cc9;
        }
        cVar10 = (char)(in_EDX >> 8);
        (pcVar17 + (int)pcVar23)[0x1920] = (code)((char)(pcVar17 + (int)pcVar23)[0x1920] + cVar10);
        (pbVar37 + (int)pcVar23)[0x2031] = (pbVar37 + (int)pcVar23)[0x2031] + cVar10;
        uVar16 = 0;
        in_ECX = (code *)0x0;
        if ((code *)pcVar27 + -0x4420 == (code *)0x0) goto code_r0x00015d36;
        pcVar345 = pcVar23 + 0x65;
        *pcVar345 = (code)((byte)*pcVar345 & (byte)((uint)((code *)pcVar27 + -0x4420) >> 8));
        bVar360 = *pcVar345 == (code)0x0;
        pcVar18 = (code *)(code *)*(undefined4 *)((int)puVar312 + 3);
        pcVar346 = (code *)(code *)*(undefined4 *)((int)puVar312 + 7);
        pcVar17 = (code *)(code *)*(undefined4 *)((int)puVar312 + 0xb);
        pbVar38 = (byte *)*(undefined4 *)((int)puVar312 + 0x13);
        in_EDX = *(ulong *)((int)puVar312 + 0x17);
        in_ECX = (code *)*(undefined4 *)((int)puVar312 + 0x1b);
        pcVar27 = (code *)*(undefined4 *)((int)puVar312 + 0x1f);
        puVar339 = (uint *)CONCAT22(uVar358,(uint *)((int)puVar312 + 0x23));
        goto code_r0x00015d9c;
      }
      if (uVar16 != 0) {
        out(*(undefined2 *)pcVar18,uVar358);
        pcVar346 = pcVar18 + 3;
        out(pcVar18[2],uVar358);
        goto code_r0x00015c9d;
      }
      bVar13 = 0;
      *(byte *)pbVar38 = 0;
      pcVar345 = (code *)0x0;
      pcVar346 = pcVar349;
code_r0x00015cca:
      uVar358 = (undefined2)in_EDX;
      out(*pcVar18,uVar358);
      pcVar349 = pcVar18 + 2;
      out(pcVar18[1],uVar358);
      bVar14 = (byte)pcVar345;
      in_AF = 9 < (bVar14 & 0xf) | in_AF;
      pbVar37 = (byte *)pbVar38;
      bVar13 = bVar14 + in_AF * '\x06' + (0x99 < bVar14 | bVar13) * '`' | pbVar37[(int)pcVar349];
      in_AF = 9 < (bVar13 & 0xf) | in_AF;
      pcVar27 = (code *)CONCAT31((int3)((ulong)pcVar345 >> 8),
                                 bVar13 + in_AF * -6 + (0x99 < bVar13) * -0x60);
      cVar10 = (char)(in_EDX >> 8);
      (pcVar17 + (int)pcVar349)[0xc20] = (code)((char)(pcVar17 + (int)pcVar349)[0xc20] + cVar10);
      (pbVar37 + (int)pcVar349)[0x532f] = (pbVar37 + (int)pcVar349)[0x532f] + cVar10;
      out(*pcVar349,uVar358);
      pcVar23 = pcVar18 + 4;
      out(pcVar18[3],uVar358);
      pbVar37[(int)pcVar23] = pbVar37[(int)pcVar23] & (byte)((ulong)pcVar345 >> 8);
      pcVar21 = pcVar20;
LAB_1000_5cdc:
      pcVar20 = pcVar21;
      uVar16 = (uint)in_EDX;
      pbVar37 = (byte *)pbVar38;
      bVar13 = (byte)((ulong)pcVar27 >> 8);
      pbVar37[(int)pcVar23] = pbVar37[(int)pcVar23] & bVar13;
      in_ECX = (code *)ZEXT24(pcVar346 + 1);
      if (pcVar346 + 1 == (code *)0x0) {
        pcVar18 = pcVar23 + 2;
        out(*(undefined2 *)pcVar23,uVar16);
        (pcVar17 + (int)pcVar20)[0x65] = (code)((byte)(pcVar17 + (int)pcVar20)[0x65] & (byte)in_EDX)
        ;
        pcVar345 = pcVar20;
        pcVar20 = pcVar20 + 1;
        cVar11 = (code)in(uVar16);
        *pcVar345 = cVar11;
        pcVar345 = pcVar23 + 0x22;
        iVar34 = ((uint)pcVar18 & 3) - (*(uint *)pcVar345 & 3);
        *(uint *)pcVar345 = *(uint *)pcVar345 + (uint)(0 < iVar34) * iVar34;
        ((uint *)puVar339)[-1] = (uint)pbVar37;
        pcVar30 = (code *)0x0;
LAB_1000_5ceb:
        pcVar345 = pcVar17 + (int)pcVar18 + 0x65;
        iVar34 = ((uint)pcVar18 & 3) - (*(uint *)pcVar345 & 3);
        *(uint *)pcVar345 = *(uint *)pcVar345 + (uint)(0 < iVar34) * iVar34;
        goto code_r0x00015cee;
      }
      uVar32 = (uint)((ulong)puVar339 >> 0x10);
      pbVar37[(int)pcVar23] = pbVar37[(int)pcVar23] & bVar13;
      (pcVar17 + (int)pcVar20)[0x70] = (code)((byte)(pcVar17 + (int)pcVar20)[0x70] & (byte)in_EDX);
      puVar339 = (uint *)(pbVar37 + (int)pcVar20 + 0x66);
      iVar34 = ((uint)pcVar17 & 3) - (*puVar339 & 3);
      bVar360 = 0 < iVar34;
      *puVar339 = *puVar339 + (uint)bVar360 * iVar34;
code_r0x00015d5e:
      puVar315 = (undefined2 *)(undefined2 *)((long)*(int *)(pcVar20 + 0x73) * 0x6920);
      puVar341 = (undefined2 *)CONCAT22(uVar32,puVar315);
      pcVar18 = pcVar23 + 1;
      uVar358 = (undefined2)in_EDX;
      out(*pcVar23,uVar358);
      bVar13 = (byte)((ulong)in_ECX >> 8);
      pbVar37 = (byte *)pbVar38;
      if ((undefined2 *)(long)(int)puVar315 !=
          (undefined2 *)((long)*(int *)(pcVar20 + 0x73) * 0x6920)) {
        in_ESI = (code *)ZEXT24(pcVar18);
        puVar318 = (uint *)(*(int *)(pcVar17 + 0x69) * 0x7365);
        puVar339 = (uint *)CONCAT22(uVar32,puVar318);
        pbVar39 = pbVar37 + 0x75;
        *pbVar39 = *pbVar39 & bVar13;
        bVar361 = *pbVar39 == 0;
        if (!bVar361) goto switchD_1000_4341_caseD_ba;
        pcVar23 = (code *)(code *)CONCAT31((int3)((ulong)pcVar27 >> 8),
                                           (byte)pcVar27 | pbVar37[(int)pcVar18]);
        puVar339 = (uint *)((ulong)uVar32 << 0x10);
        puVar318[-1] = (uint)puVar318;
LAB_1000_5e56_2:
        puVar339 = (uint *)CONCAT22((int)((ulong)puVar339 >> 0x10),
                                    (uint *)(*(int *)((byte *)pbVar38 + 0x61) * 0x3220));
        goto code_r0x00015e5d;
      }
      if (bVar360) {
        uVar26 = (ulong)pcVar27 & 0xffffff00;
code_r0x00015d82:
        bVar13 = (byte)(uVar26 >> 8);
        pcVar17[0x69] = (code)((byte)pcVar17[0x69] & bVar13);
        pcVar346 = pcVar20 + 1;
        cVar11 = (code)in(uVar358);
        *pcVar20 = cVar11;
        pcVar27 = (code *)(uVar26 & 0xffffff00);
        pbVar39 = (byte *)pbVar38 + (int)pcVar18;
        *pbVar39 = *pbVar39 & bVar13;
        pbVar39 = (byte *)pbVar38 + (int)pcVar18;
        *pbVar39 = *pbVar39 & bVar13;
        pcVar20[0x74] = (code)((byte)pcVar20[0x74] & (byte)uVar358);
        pcVar349 = pcVar18 + 1;
        out(*pcVar18,uVar358);
code_r0x00015daf:
        pcVar17[0x69] = (code)((byte)pcVar17[0x69] & (byte)((ulong)pcVar27 >> 8));
        cVar11 = (code)in(uVar358);
        *pcVar346 = cVar11;
        out(*pcVar349,uVar358);
        puVar317 = (undefined2 *)puVar341;
        pcVar346 = (code *)*puVar317;
        pcVar349 = (code *)puVar317[1];
        pcVar17 = (code *)puVar317[2];
        pbVar38 = (byte *)CONCAT22((int)((ulong)pbVar38 >> 0x10),(byte *)puVar317[4]);
        in_EDX = (ulong)(uint)puVar317[5];
        in_ECX = (code *)(ulong)(uint)puVar317[6];
        pcVar27 = (code *)(ulong)(uint)puVar317[7];
        puVar339 = (uint *)((ulong)puVar341 & 0xffff0000);
        goto LAB_1000_5db6;
      }
      uVar24 = *(undefined4 *)(pcVar23 + 0x66);
      pbVar37[0x66] = pbVar37[0x66] & bVar13;
      pcVar345 = pcVar20 + (int)uVar24 * 0x616e + 0x6f;
      *pcVar345 = (code)((byte)*pcVar345 & (byte)((ulong)pcVar27 >> 8));
      cVar11 = *pcVar345;
      bVar360 = *pcVar345 == (code)0x0;
      out(*pcVar18,uVar358);
      sVar8 = (sqword)*(long *)(pbVar37 + 0x20) * 0x7262696c;
      bVar362 = (long)sVar8 != sVar8;
      puVar316 = (undefined2 *)sVar8;
      pcVar20 = (code *)*puVar316;
      uVar15 = (undefined2)((qword)sVar8 >> 0x10);
      pcVar18 = (code *)puVar316[1];
      pcVar17 = (code *)puVar316[2];
      uVar357 = (undefined2)((ulong)pbVar38 >> 0x10);
      pbVar38 = (byte *)CONCAT22(uVar357,(byte *)puVar316[4]);
      uVar358 = puVar316[5];
      uVar26 = (ulong)(uint)puVar316[7];
      puVar341 = (undefined2 *)CONCAT22(uVar15,puVar316 + 8);
      if (!bVar362) goto code_r0x00015d82;
      pcVar20 = (code *)puVar316[8];
      pcVar18 = (code *)puVar316[9];
      in_ESI = (code *)ZEXT24(pcVar18);
      pcVar17 = (code *)puVar316[10];
      pbVar38 = (byte *)CONCAT22(uVar357,(byte *)puVar316[0xc]);
      uVar16 = puVar316[0xd];
      in_EDX = (ulong)uVar16;
      in_ECX = (code *)(ulong)(uint)puVar316[0xe];
      pcVar27 = (code *)(ulong)(uint)puVar316[0xf];
      puVar339 = (uint *)CONCAT22(uVar15,puVar316 + 0x10);
      if (!bVar360) goto code_r0x00015dff;
code_r0x00015e60:
      pcVar349 = (code *)in_ESI;
      puVar323 = (uint *)puVar339;
      uVar358 = (undefined2)((ulong)puVar339 >> 0x10);
      puVar339 = (uint *)CONCAT22(uVar358,puVar323 + -1);
      puVar323[-1] = (uint)(byte *)pbVar38;
      iVar34 = (int)in_EDX;
      pbVar39 = pbVar38;
      if (!bVar360) {
        bVar361 = false;
        bVar360 = true;
        if (!bVar362) {
          puVar338 = (uint *)CONCAT22(uVar358,puVar323 + -2);
          puVar323[-2] = (uint)pcVar17;
          pcVar18 = pcVar20 + 1;
          cVar11 = (code)in(iVar34);
          *pcVar20 = cVar11;
          pcVar20 = pcVar349 + 0x79;
          pcVar349 = (code *)(code *)((long)*(int *)pcVar20 * 0x202c);
          bVar360 = (code *)(long)(int)pcVar349 != (code *)((long)*(int *)pcVar20 * 0x202c);
          goto LAB_1000_5e6f;
        }
        goto LAB_1000_5e86;
      }
      bVar13 = (byte)in_ECX;
      if (bVar362) {
        bVar360 = true;
        goto switchD_1000_4341_caseD_ae;
      }
      pcVar18 = pcVar20 + 1;
      cVar11 = (code)in(iVar34);
      *pcVar20 = cVar11;
      pcVar345 = pcVar349 + 0x20;
      iVar22 = ((uint)pcVar349 & 3) - (*(uint *)pcVar345 & 3);
      *(uint *)pcVar345 = *(uint *)pcVar345 + (uint)(0 < iVar22) * iVar22;
      if (0 >= iVar22) {
        pbVar38 = (byte *)pbVar38 + (int)pcVar349 + 0x72;
        *pbVar38 = *pbVar38 & (byte)in_EDX;
        pcVar17 = (code *)(*(uint *)(pcVar20 + 0x62) * 0x7972);
        goto code_r0x00015f52;
      }
      pcVar18 = (code *)*puVar339;
      pcVar20 = (code *)puVar339[1];
      pcVar17 = (code *)puVar339[2];
      pbVar37 = (byte *)puVar339[4];
      in_EDX = (ulong)puVar339[5];
      in_ECX = (code *)(ulong)puVar339[6];
      pcVar27 = (code *)(ulong)puVar339[7];
      puVar270 = puVar323 + 7;
      pcVar20[0x69] = (code)((byte)pcVar20[0x69] & (byte)puVar339[7]);
      goto code_r0x0001609e;
    case (code)0x6e:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x6f:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x70:
      goto code_r0x00010000;
    case (code)0x71:
      pcVar20[0xb] = pcVar17[-6];
      return pcVar20;
    case (code)0x72:
switchD_1000_4341_caseD_72:
      pcVar349 = (code *)in_ECX;
      iVar34 = (int)in_EDX;
      puVar324 = (uint *)puVar339;
      puVar326 = puVar324 + -1;
      puVar324[-1] = (uint)pcVar17;
      pcVar346 = (code *)in_ESI;
      pbVar37 = (byte *)pbVar38;
      if (bVar361) {
        (pbVar37 + (int)pcVar346)[0x25] =
             (pbVar37 + (int)pcVar346)[0x25] ^ (byte)((ulong)pbVar38 >> 8);
code_r0x00015efa:
        pcVar17[(int)pcVar20] = (code)((byte)pcVar17[(int)pcVar20] ^ (byte)(in_EDX >> 8));
        puVar270 = puVar326 + 1;
        pcVar27 = (code *)(ulong)*puVar326;
        pcVar345 = pcVar17 + (int)pcVar20 + 0x65;
        bVar360 = CARRY1((byte)*pcVar345,(byte)in_EDX);
        *pcVar345 = (code)((char)*pcVar345 + (byte)in_EDX);
        cVar11 = (code)in((int)in_EDX);
        *pcVar20 = cVar11;
        goto code_r0x00015f01;
      }
      pcVar18 = pcVar20 + 1;
      cVar11 = (code)in(iVar34);
      *pcVar20 = cVar11;
      iVar22 = *(int *)(pcVar346 + 0x79);
      pcVar346 = (code *)(code *)((long)iVar22 * 0x202c);
      puVar270 = puVar324 + -2;
      puVar355 = puVar324 + -2;
      puVar324[-2] = (uint)pcVar346;
      bVar360 = false;
      bVar361 = true;
      if ((code *)(long)(int)pcVar346 == (code *)((long)iVar22 * 0x202c)) {
        pcVar17 = (code *)(*(int *)(pbVar37 + 0x6e) * 0x3220);
        in_ECX = (code *)CONCAT31((int3)((ulong)in_ECX >> 8),
                                  (byte)in_ECX ^ (byte)pcVar17[(int)pcVar346]);
        pbVar37[(int)pcVar346] = pbVar37[(int)pcVar346] + (char)pcVar27;
        uVar16 = (uint)(code *)pcVar27 & 0x3230;
        pcVar27 = (code *)(ulong)uVar16;
        pcVar345 = pcVar17 + (int)pcVar346 + 0x69;
        bVar360 = false;
        bVar13 = (byte)uVar16;
        *pcVar345 = (code)((byte)*pcVar345 & bVar13);
        if (*pcVar345 != (code)0x0) goto LAB_1000_5eab;
        (pcVar17 + (int)pcVar346)[0x6f] = (code)((byte)(pcVar17 + (int)pcVar346)[0x6f] & bVar13);
        pcVar20 = (code *)puVar324[-2];
        pcVar346 = (code *)puVar324[-1];
        pcVar17 = (code *)*puVar324;
        pbVar37 = (byte *)puVar324[2];
        pbVar38 = (byte *)CONCAT22((int)((ulong)pbVar38 >> 0x10),pbVar37);
        uVar16 = puVar324[3];
        in_EDX = (ulong)uVar16;
        pcVar349 = (code *)puVar324[4];
        pcVar23 = (code *)puVar324[5];
        puVar326 = puVar324 + 6;
        puVar270 = puVar324 + 6;
        (pcVar17 + (int)pcVar346)[0x75] =
             (code)((byte)(pcVar17 + (int)pcVar346)[0x75] & (byte)pcVar23);
        pbVar39 = pbVar37 + (int)pcVar346;
        *pbVar39 = *pbVar39 & (byte)(uVar16 >> 8);
        if ((char)*pbVar39 < '\0') {
          pcVar21 = pcVar349 + 1;
          in_ECX = (code *)ZEXT24(pcVar21);
          pcVar18 = pcVar20;
          goto code_r0x00015f24;
        }
        goto code_r0x00015efa;
      }
LAB_1000_5f0b:
      puVar270 = puVar355;
      if (!bVar361) goto LAB_1000_5f7d;
      cVar11 = (code)in((int)in_EDX);
      *pcVar18 = cVar11;
      pcVar18 = (code *)*puVar355;
      pcVar349 = (code *)puVar355[1];
      pcVar17 = (code *)puVar355[2];
      pbVar37 = (byte *)puVar355[4];
      uVar33 = puVar355[5];
      uVar32 = puVar355[6];
      uVar16 = puVar355[7];
      puVar270 = puVar355 + 8;
      if (bVar362) {
        out(*(uint *)pcVar349,uVar33 + 1);
        pcVar18 = (code *)puVar355[8];
        pcVar346 = (code *)puVar355[9];
        pcVar17 = (code *)puVar355[10];
        pbVar38 = (byte *)(ulong)puVar355[0xc];
        in_EDX = (ulong)puVar355[0xd];
        pcVar349 = (code *)puVar355[0xe];
        pcVar27 = (code *)(ulong)puVar355[0xf];
        puVar270 = puVar355 + 0x10;
        pcVar18[puVar355[0xc] + 0x74] =
             (code)((byte)pcVar18[puVar355[0xc] + 0x74] & (byte)(puVar355[0xf] >> 8));
        goto LAB_1000_5f7d;
      }
      bVar362 = true;
code_r0x00015f98:
      pbVar38 = (byte *)ZEXT24(pbVar37);
      in_EDX = (ulong)uVar33;
      pcVar27 = (code *)(ulong)uVar16;
      in_ECX = (code *)(ulong)uVar32;
      if (!bVar362) goto code_r0x00015f9a;
      break;
    case (code)0x73:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x74:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x75:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x76:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x77:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x78:
      return pcVar21;
    case (code)0x7a:
      if ((int)pcVar29 < (int)pcVar21) {
        *(code **)(pcVar17 + -0x12) = pcVar29;
      }
      puVar257[-1] = 0x1000;
      puVar206 = puVar257 + -2;
      puVar257[-2] = 0x28c3;
      FUN_1000_2176();
      pcVar17 = (code *)pcVar345;
      if ((*(int *)(pcVar17 + 6) == -1) || (*(int *)(pcVar17 + 8) == -1)) {
        *(int *)(pcVar17 + 6) = (0x50 - *(int *)(pcVar17 + -0x10)) / 2;
        *(int *)(pcVar17 + 8) = (0x19 - *(int *)(pcVar17 + -0x12)) / 2;
      }
      puVar206[1] = *(undefined2 *)(pcVar17 + -6);
      *puVar206 = *(undefined2 *)(pcVar17 + -10);
      puVar206[-1] = 0x1000;
      puVar207 = puVar206 + -2;
      puVar206[-2] = 0x28f5;
      FUN_1000_2046();
      puVar207[3] = 0x20;
      pcVar17 = (code *)pcVar345;
      puVar207[2] = *(int *)(pcVar17 + -0x12) + *(int *)(pcVar17 + 8);
      puVar207[1] = *(int *)(pcVar17 + -0x10) + *(int *)(pcVar17 + 6);
      *puVar207 = *(undefined2 *)(pcVar17 + 8);
      puVar207[-1] = *(undefined2 *)(pcVar17 + 6);
      puVar207[-2] = 0x1000;
      puVar208 = puVar207 + -3;
      puVar207[-3] = 0x2914;
      FUN_1000_20b6();
      puVar209 = (undefined1 *)((int)puVar208 + 0xe);
      iVar359 = *(int *)((code *)pcVar345 + -0xc);
      do {
        pcVar17 = (code *)pcVar345;
        puVar36 = (undefined2 *)puVar209;
        if (*(int *)(pcVar17 + 10) + *(int *)(pcVar17 + -0xc) <= iVar359) goto LAB_1000_295f;
        if (*(int *)(pcVar17 + 0xc) <= iVar359) goto LAB_1000_295f;
        *(int *)(puVar209 + -2) = (*(int *)(pcVar17 + 8) - *(int *)(pcVar17 + -0xc)) + iVar359;
        *(undefined2 *)(puVar209 + -4) = *(undefined2 *)(pcVar17 + 6);
        *(undefined2 *)(puVar209 + -6) = 0x1000;
        puVar210 = (uint *)(puVar209 + -8);
        *(undefined2 *)(puVar209 + -8) = 0x2931;
        FUN_1000_1dee();
        puVar36 = (undefined2 *)(iVar359 * 4 + *(int *)((code *)pcVar345 + 0xe));
        uVar358 = *(undefined2 *)((code *)pcVar345 + 0x10);
        puVar210[3] = puVar36[1];
        puVar210[2] = *puVar36;
        puVar210[1] = (uint)(code *)pcVar30;
        *puVar210 = unaff_DS;
        puVar210[-1] = 0xc59;
        puVar210[-2] = 0x1000;
        puVar211 = puVar210 + -3;
        puVar210[-3] = 0x2951;
        FUN_1000_1eb2();
        puVar209 = (undefined1 *)((int)puVar211 + 0xe);
        iVar359 = iVar359 + 1;
      } while( true );
    case (code)0x7b:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x7c:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x7d:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x7e:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x7f:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x80:
      goto switchD_1000_41c7_caseD_9;
    case (code)0x81:
      goto switchD_1000_41c7_caseD_a;
    case (code)0x82:
      goto switchD_1000_41c7_caseD_b;
    case (code)0x83:
      goto switchD_1000_41c7_caseD_c;
    case (code)0x84:
      goto switchD_1000_41c7_caseD_d;
    case (code)0x85:
      goto LAB_1000_3d49;
    case (code)0x86:
      goto switchD_1000_41c7_caseD_f;
    case (code)0x87:
      goto switchD_1000_41c7_caseD_10;
    case (code)0x88:
      goto switchD_1000_41c7_caseD_11;
    case (code)0x89:
      goto switchD_1000_41c7_caseD_12;
    case (code)0x8a:
      goto switchD_1000_41c7_caseD_13;
    case (code)0x8b:
      goto switchD_1000_41c7_caseD_14;
    case (code)0x8c:
      goto switchD_1000_41c7_caseD_15;
    case (code)0x8d:
      goto switchD_1000_41c7_caseD_16;
    case (code)0x8e:
    case (code)0xa5:
      goto switchD_1000_41c7_caseD_17;
    case (code)0x8f:
      goto switchD_1000_41c7_caseD_18;
    case (code)0x90:
    case (code)0xa7:
      goto switchD_1000_4341_caseD_90;
    case (code)0x91:
      uVar16 = 1;
      if (cVar11 == (code)0x2) goto LAB_1000_2ea7;
      iVar359 = *(int *)0xcb2;
      goto code_r0x00012e82;
    case (code)0x92:
      goto switchD_1000_41c7_caseD_7;
    case (code)0x93:
      goto LAB_1000_03c3;
    case (code)0x95:
      *(char *)0x750d = *(char *)0x750d + '\x01';
      if ((pbVar37[0xcbb] & 0x40) == 0) {
        puVar257[-1] = (uint)pbVar37;
        puVar257[-2] = unaff_DS;
        puVar257[-3] = (uint)pcVar18;
        puVar233 = puVar257 + -4;
        puVar257[-4] = 0x371c;
        FUN_1000_37b8();
        uVar16 = puVar233[3];
        puVar339 = (uint *)ZEXT24(puVar233 + 4);
        pbVar38 = (byte *)(ulong)uVar16;
        pcVar18 = (code *)in_ESI;
        if (((byte)pcVar18[10] & 8) != 0) {
          iVar359 = *(uint *)pcVar18 - *(uint *)(pcVar18 + 6);
          *(uint *)pcVar18 = *(uint *)(pcVar18 + 6) + 1;
          *(uint *)(pcVar18 + 4) = *(uint *)(pcVar20 + 2) - 1;
          if (iVar359 == 0) {
            iVar34 = 0;
            iVar359 = 0;
            if ((*(byte *)(uVar16 + 0xcbb) & 0x20) != 0) {
              puVar233[3] = 2;
              puVar233[2] = 0;
              puVar233[1] = 0;
              *puVar233 = uVar16;
              puVar233[-1] = 0x1000;
              puVar233[-2] = 0x3772;
              FUN_1000_48b2();
              iVar34 = 0;
              iVar359 = iVar34;
            }
          }
          else {
            puVar233[3] = iVar359;
            puVar233[2] = iVar359;
            puVar233[1] = *(uint *)(pcVar18 + 8);
            *puVar233 = *(uint *)(pcVar18 + 6);
            puVar233[-1] = uVar16;
            puVar233[-2] = 0x1000;
            puVar234 = puVar233 + -3;
            puVar233[-3] = 0x3746;
            iVar34 = FUN_1000_4bf6();
            iVar359 = *(int *)((int)puVar234 + 8);
          }
          **(undefined1 **)(pcVar18 + 6) = (char)*(undefined2 *)(pcVar17 + 6);
          goto LAB_1000_3753;
        }
      }
      pcVar18 = (code *)in_ESI;
      puVar232 = (uint *)puVar339;
      puVar232[-1] = 1;
      puVar232[-2] = unaff_SS;
      puVar232[-3] = (uint)(pcVar17 + 6);
      puVar232[-4] = (uint)(byte *)pbVar38;
      puVar232[-5] = 0x1000;
      puVar232[-6] = 0x3705;
      iVar34 = FUN_1000_4bf6();
      iVar359 = 1;
LAB_1000_3753:
      if (iVar34 == iVar359) {
        pcVar17 = (code *)(uint)(byte)pcVar17[6];
      }
      else {
        pcVar17 = (code *)0xffff;
        pcVar18[10] = (code)((byte)pcVar18[10] | 0x20);
      }
      return pcVar17;
    case (code)0x97:
      puVar257[-1] = iVar359;
      pcVar345 = (code *)swi(3);
      pcVar17 = (code *)(*pcVar345)();
      return pcVar17;
    case (code)0x98:
      *(int *)(pcVar17 + (int)pcVar20) = *(int *)(pcVar17 + (int)pcVar20) + -1;
      pcVar346[0x21] = (code)0x0;
      pcVar351 = (char *)(in_EDX & 0xffff);
      iVar34 = -1;
      goto code_r0x000130f8;
    case (code)0x9a:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x9b:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x9c:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x9d:
      (pbVar37 + (int)pcVar18)[-0x6ba] = (pbVar37 + (int)pcVar18)[-0x6ba] | 4;
      goto code_r0x00011e09;
    case (code)0x9e:
      puVar339 = (uint *)ZEXT24(puVar257 + -1);
      puVar257[-1] = unaff_DS;
      goto code_r0x00010e20;
    case (code)0x9f:
      goto switchD_1000_4341_caseD_9f;
    case (code)0xa1:
      goto switchD_1000_4341_caseD_a1;
    case (code)0xa2:
      *(code **)(pcVar17 + (int)pcVar20 + 0x2c4) =
           pcVar21 + *(int *)(pcVar17 + (int)pcVar20 + 0x2c4);
      goto code_r0x00011cef;
    case (code)0xa3:
      pcVar349 = pcVar346 + 2;
      out(*pcVar18,uVar32);
      if (!bVar361) {
        out(*pcVar349,uVar32);
        uVar16 = in(uVar32);
        *(uint *)pcVar20 = uVar16;
        pcVar18 = pcVar346 + 4;
        out(pcVar346[3],uVar32);
        bVar12 = pbVar37[(int)pcVar18];
        pcVar345 = pcVar20 + 2;
        *pcVar345 = (code)((char)*pcVar345 + 4);
        bVar6 = pbVar37[(int)pcVar18];
        *(int *)(pbVar37 + (int)pcVar18) = *(int *)(pbVar37 + (int)pcVar18) + 1;
        pcVar346 = pcVar346 + 5;
        out(*pcVar18,uVar32);
        iVar34 = (byte)((byte)cVar11 | bVar12 | bVar6) + 0x968c;
        uVar16 = in(uVar32);
        *(uint *)(pcVar20 + 2) = uVar16;
        bVar12 = (byte)((uint)iVar34 >> 8);
        pcVar20[0x76] = (code)((byte)pcVar20[0x76] & bVar12);
        pcVar17[(int)pcVar346] = (code)((char)pcVar17[(int)pcVar346] + (char)iVar34);
        (pcVar17 + (int)pcVar346)[0x36] = (code)((char)(pcVar17 + (int)pcVar346)[0x36] + bVar13);
        pbVar37[(int)pcVar346] = pbVar37[(int)pcVar346] ^ bVar14;
        pcVar345 = pcVar17 + 0x6c;
        *pcVar345 = (code)((byte)*pcVar345 & bVar12);
        out(*(undefined2 *)pcVar346,uVar32);
        puVar270 = (uint *)*puVar257;
        iVar34 = puVar257[4];
        uVar358 = puVar257[5];
        if (*pcVar345 == (code)0x0) {
          puVar257[7] = 0x1000;
          uVar358 = puVar257[7];
          *(int *)0x4 = iVar359 + 0x10;
          iVar22 = iVar359 + 0x10 + *(int *)0xc;
          iVar359 = *(int *)0x6;
          puVar356 = (undefined1 *)(iVar359 + -1);
          puVar176 = puVar356;
          for (; iVar359 != 0; iVar359 = iVar359 + -1) {
            puVar4 = puVar356;
            puVar356 = puVar356 + -1;
            puVar9 = puVar176;
            puVar176 = puVar176 + -1;
            *puVar4 = *puVar9;
          }
        }
        else {
          puVar36 = (undefined2 *)((undefined1 *)puVar257[1] + 1);
          out(*(undefined1 *)puVar257[1],uVar358);
          iVar22 = puVar257[7] + -0x6f70;
          iVar344 = (int)((long)*(int *)(puVar257[2] + 0x74) * 0x7320);
          if (iVar22 == 0) {
            if ((long)iVar344 == (long)*(int *)(puVar257[2] + 0x74) * 0x7320) {
              bVar13 = 0;
              pbVar38 = (byte *)(iVar344 + 0x6f);
              *pbVar38 = *pbVar38 & (byte)(puVar257[6] >> 8);
              if (*pbVar38 != 0) {
                uVar5 = in(uVar358);
                *(undefined1 *)puVar270 = uVar5;
                out(*puVar36,uVar358);
                puVar355 = (uint *)puVar257[8];
                iVar344 = puVar257[9];
                iVar22 = puVar257[10];
                iVar34 = puVar257[0xc];
                uVar358 = puVar257[0xd];
                uVar16 = puVar257[0xe];
                bVar13 = (byte)(puVar257[0xf] >> 8);
                *(int *)(iVar34 + iVar344) = *(int *)(iVar34 + iVar344) + (puVar257[0xf] | 10);
                puVar257[0xf] = uVar358;
                bVar14 = (byte)((uint)uVar358 >> 8);
                *(byte *)(iVar34 + iVar344) = *(byte *)(iVar34 + iVar344) ^ bVar14;
                *puVar355 = *puVar355 ^ uVar16;
                *(byte *)(iVar22 + 0x75) =
                     *(byte *)(iVar22 + 0x75) & ((byte)(uVar16 >> 8) | (byte)*puVar355);
                uVar5 = in(uVar358);
                *(undefined1 *)puVar355 = uVar5;
                puVar270 = puVar355 + 1;
                uVar5 = in(uVar358);
                *(undefined1 *)((int)puVar355 + 1) = uVar5;
                pbVar38 = (byte *)(iVar34 + iVar344 + 0x6f);
                *pbVar38 = *pbVar38 & bVar14;
              }
              pbVar38 = (byte *)((int)puVar270 + iVar34 + 0x73);
              *pbVar38 = *pbVar38 & bVar13;
              *(char *)(iVar34 + 0xf) = *(char *)(iVar34 + 0xf) >> 0x11;
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
          }
          else {
            *(undefined1 *)puVar270 = *(undefined1 *)puVar36;
          }
        }
        puVar257[7] = iVar22;
        puVar257[6] = 0x38;
        return (code *)0x38;
      }
      puVar336 = puVar257 + -1;
      puVar257[-1] = 0x6512;
      uVar16 = func_0x00016e86();
      do {
        unaff_DS = unaff_DS - uVar16;
        pcVar349 = (code *)((uint)pcVar349 | 0xfff0);
        bVar360 = pcVar349 == (code *)0x0;
        do {
          uVar16 = ~(uint)(code *)pcVar30 >> ((byte)in_ECX & 0x1f);
          bVar362 = ((ulong)in_ECX & 0x1f) != 0;
          if (!(bool)(!bVar362 & bVar360 | (bVar362 && uVar16 == 0))) {
            iVar359 = iVar359 - uVar16;
            pcVar30 = (code *)(ulong)((uint)(code *)pcVar30 | 0xfff0);
          }
          cVar11 = *pcVar349;
          iVar34 = *(int *)pcVar349;
          pcVar17 = pcVar349 + 3;
          bVar13 = (byte)cVar11 & 0xfe;
          if (bVar13 == 0xb0) {
            pcVar349 = pcVar349 + 4;
            cVar1 = *pcVar17;
            for (; iVar34 != 0; iVar34 = iVar34 + -1) {
              pcVar17 = (code *)pcVar30;
              pcVar30 = (code *)ZEXT24(pcVar17 + 1);
              *pcVar17 = cVar1;
            }
          }
          else {
            if (bVar13 != 0xb2) {
              pcVar345 = (code *)swi(0x21);
              (*pcVar345)();
              pcVar345 = (code *)swi(0x21);
              uVar358 = (*pcVar345)();
              puVar336[-1] = uVar358;
              puVar176 = (undefined1 *)puVar336[-1];
              iVar350 = *puVar336;
              uVar33 = puVar336[1];
              iVar344 = puVar336[3];
              iVar22 = puVar336[4];
              uVar32 = puVar336[5];
              uVar16 = puVar336[6];
              piVar337 = (int *)(puVar336 + 7);
              puVar339 = (uint *)(puVar176 + uVar33 + 0x65);
              iVar34 = (uVar33 & 3) - (*puVar339 & 3);
              *puVar339 = *puVar339 + (uint)(0 < iVar34) * iVar34;
              bVar14 = (byte)(uVar16 >> 8);
              *(byte *)(uVar33 + 0x69) = *(byte *)(uVar33 + 0x69) & bVar14;
              puVar36 = (undefined2 *)(puVar176 + 1);
              uVar5 = in(iVar22);
              *puVar176 = uVar5;
              pbVar38 = (byte *)((int)puVar36 + iVar344 + 0x73);
              bVar12 = (byte)(uVar32 >> 8);
              *pbVar38 = *pbVar38 & bVar12;
              pbVar38 = (byte *)((int)puVar36 + uVar33 + 0x6f);
              *pbVar38 = *pbVar38 & bVar14;
              bVar13 = *pbVar38;
              if (bVar13 == 0) {
                iVar359 = CONCAT11(bVar14,(byte)uVar16 - *(byte *)(uVar33 + iVar350));
                *(int *)(uVar33 + iVar350) =
                     *(int *)(uVar33 + iVar350) + iVar359 +
                     (uint)((byte)uVar16 < *(byte *)(uVar33 + iVar350));
                *(int *)(uVar33 + 0x9502) = *(int *)(uVar33 + 0x9502) + uVar33;
                cVar40 = (char)((uint)iVar344 >> 8) + *(char *)(uVar33 + 2);
                iVar34 = CONCAT11(cVar40,(char)iVar344);
                puVar336[6] = 0x6102;
                cVar10 = *(char *)(iVar34 + (int)puVar36);
                cVar7 = *(char *)(iVar34 + (int)puVar36);
                iVar344 = CONCAT11(cVar40 + bVar12 + *(char *)(uVar33 + iVar350),(char)iVar344);
                puVar36 = (undefined2 *)((int)puVar36 + (int)(puVar336 + 6));
                puVar176 = (undefined1 *)((int)puVar336 + iVar359 + 0xc);
                *(int *)(uVar33 + 0x9701) = *(int *)(uVar33 + 0x9701) + iVar350;
                piVar2 = (int *)(iVar344 + iVar350 + -0x7dff);
                *piVar2 = *piVar2 + CONCAT11((char)((uint)iVar22 >> 8) + cVar10,(char)iVar22 + cVar7
                                            );
                piVar2 = (int *)((int)puVar36 + uVar33 + 1);
                *piVar2 = (int)(*piVar2 + (int)puVar36);
                puVar336[5] = unaff_SS;
                pcVar351 = (char *)((int)puVar36 + uVar33 + iVar350 + -0x7200);
                cVar10 = (char)((uint)puVar176 >> 8);
                *pcVar351 = *pcVar351 + cVar10;
                bVar14 = (byte)puVar176;
                *(char *)(iVar344 + 0x900) = *(char *)(iVar344 + 0x900) + bVar14;
                pcVar351 = (char *)((int)puVar36 + iVar344 + iVar350 + 7);
                *pcVar351 = *pcVar351 + cVar10;
                puVar336[4] = iVar344;
                uVar358 = puVar336[5];
                puVar336[5] = uVar358;
                iVar22 = puVar336[5];
                puVar336[5] = uVar358;
                bVar14 = bVar14 ^ bRam000105e9;
                puVar176 = (undefined1 *)((int)puVar36 + iVar350 + 1);
                iVar22 = iVar22 + uVar33;
                iVar359 = *(int *)(iVar344 + (int)puVar36);
                uVar16 = puVar36[0x2485];
                uVar32 = (uint)(byte)((byte)uVar32 | *(byte *)((int)puVar36 + uVar33 + 0x7709));
                puVar339 = (uint *)((int)puVar36 + iVar350 + 10);
                *puVar339 = *puVar339 | uVar33;
                uRam00011a09 = uRam00011a09 | (uint)puVar176;
                piVar337 = (int *)(*(uint *)((uint)((int)puVar336 + uVar33 + 10) | uVar16) |
                                  (uint)puVar176);
                uVar16 = (uint)(byte)(bVar14 + 0x4d) + iVar359 & 0xff;
              }
              bVar14 = (byte)((uint)iVar344 >> 8) | (byte)uVar16;
              pbVar38 = (byte *)((int)puVar36 + uVar33 + 0xd08);
              *pbVar38 = *pbVar38 | bVar14;
              pbVar38 = (byte *)CONCAT11(bVar14,(char)iVar344);
              bVar14 = (byte)uVar32 & 7;
              *pbVar38 = *pbVar38 << bVar14 | *pbVar38 >> 8 - bVar14;
              piVar337[1] = 0x1000;
              *piVar337 = 0x6662;
              func_0x00088d77();
              uVar358 = in(iVar22);
              *puVar36 = uVar358;
              puVar36[(uint)(bVar13 == 0) * -2 + 1] = puVar36[(uint)(bVar13 == 0) * -2 + 1] | 0xd6b;
              piVar337[1] = 0x6680;
              pcVar17 = (code *)func_0x0001378f();
              smm_restore_state();
              return pcVar17;
            }
            for (; pcVar349 = pcVar17, iVar34 != 0; iVar34 = iVar34 + -1) {
              pcVar20 = (code *)pcVar30;
              pcVar30 = (code *)ZEXT24(pcVar20 + 1);
              pcVar345 = pcVar17;
              pcVar17 = pcVar17 + 1;
              *pcVar20 = *pcVar345;
            }
          }
          if (((byte)cVar11 & 1) != 0) {
            piVar35 = (int *)0x12d;
            *(undefined2 *)((int)puVar336 + -2) = 0x1000;
            uVar358 = *(undefined2 *)((int)puVar336 + -2);
            iVar359 = *(int *)0x4;
            iVar34 = 0;
            while( true ) {
              piVar2 = piVar35;
              piVar35 = piVar35 + 1;
              iVar22 = *piVar2;
              if (iVar22 != 0) {
                do {
                  piVar2 = piVar35;
                  piVar35 = piVar35 + 1;
                  if ((int *)*piVar2 == (int *)0xffff) {
                    *(int *)0xffef = *(int *)0xffef + iVar359;
                  }
                  else {
                    piVar2 = (int *)*piVar2;
                    *piVar2 = *piVar2 + iVar359;
                  }
                  iVar22 = iVar22 + -1;
                } while (iVar22 != 0);
              }
              if (iVar34 == -0x1000) break;
              iVar34 = iVar34 + 0x1000;
            }
            *(int *)0x2 = *(int *)0x2 + iVar359;
                    /* WARNING: Could not recover jumptable at 0x000165ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            pcVar17 = (code *)(*(code *)(ulong)uRam00010000)();
            return pcVar17;
          }
          in_ECX = (code *)0x4;
          uVar16 = ~(uint)pcVar349 >> 4;
          bVar360 = true;
        } while (uVar16 == 0);
      } while( true );
    case (code)0xa4:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0xa6:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0xa8:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0xa9:
      puVar257[-1] = (uint)pcVar18;
      (pcVar17 + (int)pcVar20)[0x219a] = (pcVar17 + (int)pcVar20)[0x219a];
      *(uint *)0x219c = uVar32;
      *(undefined2 *)0x2194 = pcVar21;
      *(uint *)0x2196 = uVar32;
      puVar257[-2] = uVar32;
      puVar257[-3] = (uint)pcVar21;
      puVar257[-4] = 0x1000;
      puVar288 = puVar257 + -5;
      puVar257[-5] = 0x531e;
      uVar358 = func_0x000050e2();
      *(undefined2 *)0x2198 = uVar358;
      puVar288[1] = unaff_SS;
      *puVar288 = (uint)(pcVar17 + 0xe);
      puVar288[-1] = *(undefined2 *)(pcVar17 + 0xc);
      puVar288[-2] = *(undefined2 *)(pcVar17 + 10);
      puVar288[-3] = unaff_DS;
      puVar288[-4] = 0x2194;
      puVar288[-5] = 0x2b4;
      puVar288[-6] = 0x5339;
      uVar16 = func_0x00003aa6();
      pcVar27 = (code *)(ulong)uVar16;
      goto switchD_1000_41c7_caseD_12;
    case (code)0xaa:
      pcVar17 = (code *)in(0x5d);
      return pcVar17;
    case (code)0xab:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0xac:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0xad:
      goto switchD_1000_4341_caseD_ad;
    case (code)0xae:
switchD_1000_4341_caseD_ae:
      pcVar349 = (code *)in_ECX;
      pcVar346 = (code *)in_ESI;
      puVar270 = (uint *)puVar339 + -1;
      ((uint *)puVar339)[-1] = (uint)(byte *)pbVar38;
      cVar11 = (code)in((int)in_EDX);
      *pcVar20 = cVar11;
code_r0x00015f01:
      pbVar37 = (byte *)pbVar38;
      pcVar18 = pcVar20 + 1;
      pcVar345 = pcVar346 + 0x20;
      iVar34 = ((uint)pcVar346 & 3) - (*(uint *)pcVar345 & 3);
      *(uint *)pcVar345 = *(uint *)pcVar345 + (uint)(0 < iVar34) * iVar34;
      if (0 >= iVar34) {
        pcVar345 = pcVar346 + 0x69;
        bVar361 = false;
        *pcVar345 = (code)((byte)*pcVar345 & (byte)pcVar27);
        bVar362 = (char)*pcVar345 < '\0';
        bVar360 = *pcVar345 == (code)0x0;
        puVar355 = puVar270;
        goto LAB_1000_5f0b;
      }
      pcVar345 = pcVar18;
      pcVar18 = pcVar20 + 3;
      uVar16 = in((int)in_EDX);
      *(uint *)pcVar345 = uVar16;
      pcVar345 = pcVar346;
      pcVar346 = pcVar346 + 2;
      out(*(uint *)pcVar345,(int)in_EDX);
      if (bVar360) goto LAB_1000_5fec;
      pcVar20[100] = (code)((byte)pcVar20[100] & (byte)pcVar349);
      (pbVar37 + (int)pcVar18)[0x74] = (pbVar37 + (int)pcVar18)[0x74] & (byte)((ulong)pcVar27 >> 8);
LAB_1000_5f7d:
      iVar34 = (int)in_EDX;
      pbVar39 = (byte *)pbVar38 + (int)pcVar346;
      bVar13 = (byte)(in_EDX >> 8);
      *pbVar39 = *pbVar39 & bVar13;
      if (-1 < (char)*pbVar39) {
        *pcVar18 = (code)((byte)*pcVar18 ^ bVar13);
LAB_1000_5f83:
        pcVar20 = pcVar18 + 1;
        cVar11 = (code)in((int)in_EDX);
        *pcVar18 = cVar11;
        puVar339 = puVar270;
        puVar270 = puVar270 + 1;
        pcVar27 = (code *)(ulong)*puVar339;
        (pcVar17 + (int)pcVar20)[0x65] = (code)((char)(pcVar17 + (int)pcVar20)[0x65] + (char)in_EDX)
        ;
        pcVar18 = pcVar18 + 2;
        cVar11 = (code)in((int)in_EDX);
        *pcVar20 = cVar11;
LAB_1000_5f89:
        pbVar37 = (byte *)pbVar38;
        pcVar345 = pcVar346 + 0x20;
        iVar34 = ((uint)pcVar346 & 3) - (*(uint *)pcVar345 & 3);
        *(uint *)pcVar345 = *(uint *)pcVar345 + (uint)(0 < iVar34) * iVar34;
        if (0 >= iVar34) {
          bVar362 = false;
          (pcVar17 + (int)pcVar18)[0x65] =
               (code)((byte)(pcVar17 + (int)pcVar18)[0x65] & (byte)in_EDX);
          puVar339 = (uint *)(pbVar37 + 0x6e);
          iVar34 = ((uint)pcVar17 & 3) - (*puVar339 & 3);
          bVar360 = 0 < iVar34;
          *puVar339 = *puVar339 + (uint)bVar360 * iVar34;
          pcVar18 = (code *)*puVar270;
          pcVar349 = (code *)puVar270[1];
          pcVar17 = (code *)puVar270[2];
          pbVar37 = (byte *)puVar270[4];
          uVar33 = puVar270[5];
          uVar32 = puVar270[6];
          uVar16 = puVar270[7];
          puVar270 = puVar270 + 8;
          goto code_r0x00015f98;
        }
        goto LAB_1000_5ff7;
      }
      bVar14 = (byte)((ulong)pcVar27 >> 8);
      if (*pbVar39 == 0) {
        pbVar38 = (byte *)pbVar38 + (int)pcVar346;
        *(int *)pbVar38 = *(int *)pbVar38 - (int)puVar270;
        pcVar20 = pcVar346 + 4;
        out(*(undefined4 *)pcVar346,iVar34);
        goto LAB_1000_5fc9;
      }
      bVar360 = iVar34 == -1;
      pcVar18 = (code *)*puVar270;
      puVar328 = puVar270 + 1;
      pcVar17 = (code *)puVar270[2];
      pbVar37 = (byte *)puVar270[4];
      puVar329 = puVar270 + 5;
      in_EDX = (ulong)*puVar329;
      pcVar27 = (code *)(ulong)puVar270[7];
      puVar330 = puVar270 + 8;
      puVar270 = puVar270 + 9;
      in_ECX = (code *)(ulong)*puVar330;
      pcVar349 = (code *)((undefined2 *)*puVar328 + 1);
      out(*(undefined2 *)*puVar328,*puVar329);
      break;
    case (code)0xb1:
      goto switchD_1000_4341_caseD_b1;
    case (code)0xb2:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0xb3:
      goto code_r0x00010649;
    case (code)0xb4:
      goto switchD_1000_4341_caseD_b4;
    case (code)0xb5:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0xb6:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0xb7:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0xb9:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0xba:
switchD_1000_4341_caseD_ba:
      pcVar23 = (code *)pcVar27;
      if (!bVar361) {
LAB_1000_5e5b:
        pcVar17[(int)(code *)in_ESI] =
             (code)((byte)pcVar17[(int)(code *)in_ESI] & (byte)(in_EDX >> 8));
code_r0x00015e5d:
        bVar362 = false;
        cVar11 = (code)((byte)((uint)pcVar23 >> 8) ^ ((byte *)pbVar38)[(int)(code *)in_ESI]);
        pcVar27 = (code *)(ulong)CONCAT11(cVar11,(char)pcVar23);
        bVar360 = cVar11 == (code)0x0;
        goto code_r0x00015e60;
      }
      pcVar17[0x69] = (code)((byte)pcVar17[0x69] & (byte)((ulong)pcVar27 >> 8));
      cVar11 = (code)in((int)in_EDX);
      *pcVar20 = cVar11;
      out(*(code *)in_ESI,(int)in_EDX);
      puVar320 = (uint *)puVar339;
      pcVar346 = (code *)puVar320[1];
      pcVar17 = (code *)puVar320[2];
      pbVar37 = (byte *)puVar320[4];
      pbVar38 = (byte *)CONCAT22((int)((ulong)pbVar38 >> 0x10),pbVar37);
      uVar16 = puVar320[5];
      uVar357 = puVar320[6];
      pcVar27 = (code *)(ulong)puVar320[7];
      pcVar20 = (code *)((undefined2 *)*puVar320 + 1);
      uVar358 = in(uVar16);
      *(undefined2 *)*puVar320 = uVar358;
      pbVar39 = pbVar37 + 0x66;
      *pbVar39 = *pbVar39 & (byte)((uint)uVar357 >> 8);
code_r0x00015df3:
      (pcVar17 + (int)pcVar20)[0x6f] =
           (code)((byte)(pcVar17 + (int)pcVar20)[0x6f] & (byte)((ulong)pcVar27 >> 8));
      pcVar18 = pcVar346 + 1;
      out(*pcVar346,uVar16);
code_r0x00015df7:
      puVar339 = (uint *)(*(long *)((byte *)pbVar38 + 0x20) * 0x61746164);
code_r0x00015dff:
      bVar13 = (byte)((ulong)pcVar27 >> 8);
      pcVar17[0x69] = (code)((byte)pcVar17[0x69] & bVar13);
      cVar11 = (code)in(uVar16);
      *pcVar20 = cVar11;
      pbVar39 = (byte *)pbVar38 + (int)pcVar18;
      *pbVar39 = *pbVar39 & bVar13;
      pbVar39 = (byte *)pbVar38 + (int)pcVar18;
      *pbVar39 = *pbVar39 & bVar13;
      pcVar20[0x74] = (code)((byte)pcVar20[0x74] & (byte)uVar16);
      out(*pcVar18,uVar16);
      puVar322 = (uint *)puVar339;
      puVar354 = (undefined2 *)*puVar322;
      pcVar349 = (code *)puVar322[1];
      pcVar17 = (code *)puVar322[2];
      pbVar37 = (byte *)puVar322[4];
      pbVar38 = (byte *)CONCAT22((int)((ulong)pbVar38 >> 0x10),pbVar37);
      uVar16 = puVar322[5];
      in_EDX = (ulong)uVar16;
      pcVar20 = (code *)puVar322[6];
      pcVar27 = (code *)(ulong)puVar322[7];
      uVar358 = (undefined2)((ulong)puVar339 >> 0x10);
      puVar36 = puVar354 + 1;
      uVar357 = in(uVar16);
      *puVar354 = uVar357;
      pbVar39 = pbVar37 + (int)puVar36 + 0x73;
      *pbVar39 = *pbVar39 & (byte)((uint)pcVar20 >> 8);
      (pcVar17 + (int)puVar36)[0x75] =
           (code)((byte)(pcVar17 + (int)puVar36)[0x75] & (byte)(uVar16 >> 8));
      pcVar18 = (code *)((int)puVar354 + 3);
      uVar5 = in(uVar16);
      *(undefined1 *)puVar36 = uVar5;
LAB_1000_5e3f:
      puVar338 = (uint *)CONCAT22(uVar358,(uint *)(*(uint *)(pcVar18 + 100) * 0xa2e));
      pcVar17[(int)pcVar349] = (code)((char)pcVar17[(int)pcVar349] + (char)pcVar20);
      bVar360 = false;
      bVar13 = (byte)pbVar38 | (byte)(pcVar17 + (int)pcVar18)[0x20];
      pbVar39 = (byte *)CONCAT31((int3)((ulong)pbVar38 >> 8),bVar13);
      in_ECX = (code *)ZEXT24(pcVar20 + 1);
      if (pcVar20 + 1 != (code *)0x0) {
        pcVar17[(int)pcVar349] = (code)((byte)pcVar17[(int)pcVar349] & (byte)((ulong)pbVar38 >> 8));
        pbVar39 = (byte *)pbVar39 + (int)pcVar349;
        *pbVar39 = *pbVar39 & (byte)pcVar27;
        pcVar18[10] = (code)((byte)pcVar18[10] & bVar13);
        pcVar349[0x69] = (code)((char)pcVar349[0x69] + (char)in_EDX);
        pcVar20 = (code *)*puVar338;
        in_ESI = (code *)(ulong)puVar338[1];
        pcVar17 = (code *)puVar338[2];
        pbVar38 = (byte *)CONCAT22((int)((ulong)pbVar38 >> 0x10),(byte *)puVar338[4]);
        in_EDX = (ulong)puVar338[5];
        in_ECX = (code *)(ulong)puVar338[6];
        pcVar23 = (code *)puVar338[7];
        puVar339 = puVar338 + 8;
        goto LAB_1000_5e5b;
      }
LAB_1000_5e6f:
      iVar34 = (int)in_EDX;
      bVar13 = (byte)in_ECX;
      puVar339 = (uint *)CONCAT22((int)((ulong)puVar338 >> 0x10),(uint *)puVar338 + -1);
      ((uint *)puVar338)[-1] = (uint)pcVar349;
      if (!bVar360) goto code_r0x00015e73;
      (pcVar17 + (int)pcVar349)[0x61] =
           (code)((byte)(pcVar17 + (int)pcVar349)[0x61] & (byte)pcVar27);
code_r0x00015f52:
      puVar270 = (uint *)puVar339;
      bVar14 = (byte)((ulong)pcVar27 >> 8);
      ((byte *)pbVar39 + (int)pcVar349)[0x6f] = ((byte *)pbVar39 + (int)pcVar349)[0x6f] & bVar13;
      pcVar20 = pcVar349 + 2;
      out(*(uint *)pcVar349,iVar34);
LAB_1000_5fc9:
      pcVar17[0x6f] = (code)((byte)pcVar17[0x6f] & bVar14);
      cVar11 = (code)in(iVar34);
      pcVar18[1] = cVar11;
      out(*(uint *)pcVar20,iVar34);
      pcVar345 = pcVar20 + 0x74;
      *pcVar345 = (code)((byte)*pcVar345 & (byte)iVar34);
      cVar11 = *pcVar345;
      out(*(undefined1 *)puVar270[1],puVar270[5]);
      uVar5 = in(puVar270[5]);
      *(undefined1 *)*puVar270 = uVar5;
      pcVar18 = (code *)puVar270[8];
      pcVar17 = (code *)puVar270[10];
      pbVar37 = (byte *)puVar270[0xc];
      uVar16 = puVar270[0xd];
      in_ECX = (code *)(ulong)puVar270[0xe];
      pcVar23 = (code *)puVar270[0xf];
      puVar270[0xf] = (uint)(puVar270 + 0x10);
      puVar332 = (uint *)(*(int *)(pbVar37 + 0x61) * 0x4420);
      pcVar346 = (code *)(*(int *)(pcVar17 + (int)pcVar18 + 0x70) * 0x616c);
      if ((char)cVar11 < '\0') goto LAB_1000_6052;
      pcVar346[0x69] = (code)((byte)pcVar346[0x69] & (byte)pcVar23);
      goto LAB_1000_60e7;
    case (code)0xbf:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0xc0:
      (pbVar37 + (int)pcVar18)[0x1bb] = (pbVar37 + (int)pcVar18)[0x1bb];
      goto code_r0x0001064f;
    case (code)0xc6:
      goto code_r0x00014db9;
    case (code)0xc7:
    case (code)0xd4:
    case (code)0xe1:
      pcVar17[-7] = cVar11;
      goto code_r0x00011e09;
    case (code)0xcd:
      bVar360 = 0xfb < bVar13;
      bVar363 = SCARRY1(bVar13,'\x04');
      in_ECX = (code *)CONCAT31(uVar28,bVar13 + 4);
      if ((code *)in_ECX == (code *)0x0) goto code_r0x00010649;
switchD_1000_4341_caseD_39:
      if ((code *)in_ECX == (code *)0x0) {
        pbVar37[(int)pcVar18] = pbVar37[(int)pcVar18] << 1 | bVar360;
        goto LAB_1000_063a;
      }
      puVar270 = puVar257 + -1;
      puVar257[-1] = (uint)pcVar17;
      cVar10 = '\x1e';
      do {
        pcVar17 = pcVar17 + -2;
        puVar270 = puVar270 + -1;
        *puVar270 = *(undefined2 *)pcVar17;
        cVar10 = cVar10 + -1;
      } while ('\0' < cVar10);
      puVar257[-0x20] = (uint)(puVar257 + -1);
      pcVar345 = (code *)ZEXT24(puVar257 + -1);
      puVar74 = (undefined1 *)((int)puVar257 + -0x2651);
      puVar75 = (undefined1 *)((int)puVar257 + -0x2651);
      if (!bVar363) goto code_r0x0001067f;
      *(byte *)(puVar257 + -0x18fe) = (byte)puVar257[-0x18fe] ^ (byte)in_ECX;
      *(undefined1 *)0x1e8b = *(undefined1 *)0x1e8b;
      goto code_r0x0001068b;
    case (code)0xd3:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0xda:
      goto switchD_1000_4341_caseD_da;
    case (code)0xe0:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0xe7:
      goto switchD_1000_4341_caseD_e7;
    case (code)0xed:
switchD_1000_4341_caseD_ed:
      pcVar345 = pcVar349 + 0x65;
      cVar11 = *pcVar345;
      bVar13 = (byte)in_ECX;
      *pcVar345 = (code)((char)*pcVar345 + bVar13);
      pcVar346 = pcVar349 + 2;
      uVar16 = in(uVar32);
      *(uint *)pcVar349 = uVar16;
      pcVar17 = (code *)in_ESI;
      in_ESI = (code *)CONCAT22((int)((ulong)in_ESI >> 0x10),pcVar17 + 2);
      out(*(uint *)pcVar17,uVar32);
      if (!CARRY1((byte)cVar11,bVar13)) {
        pcVar349[99] = (code)((byte)pcVar349[99] & bVar13);
code_r0x000157c4:
        pbVar37 = (byte *)pbVar38;
        (pbVar37 + (int)pcVar346)[0x74] =
             (pbVar37 + (int)pcVar346)[0x74] & (byte)((ulong)pcVar27 >> 8);
        pcVar17 = (code *)in_ESI;
        pbVar39 = pbVar37 + (int)pcVar17;
        *pbVar39 = *pbVar39 & bVar14;
        if ((char)*pbVar39 < '\0') {
          in_ESI = (code *)CONCAT22((int)((ulong)in_ESI >> 0x10),pcVar17 + 1);
          out(*pcVar17,uVar32);
          puVar338 = (uint *)(*(long *)(pbVar37 + 0x75) * 0x69746172);
        }
        else {
          *pcVar346 = (code)((byte)*pcVar346 ^ bVar14);
          cVar11 = (code)in(uVar32);
          *pcVar346 = cVar11;
          pcVar20 = (code *)*(uint *)puVar339;
          puVar338 = (uint *)CONCAT22((int)((ulong)puVar339 >> 0x10),(uint *)puVar339 + 1);
          pcVar27 = (code *)CONCAT22((int)((ulong)pcVar27 >> 0x10),pcVar20);
          pcVar345 = pcVar346 + 1;
          *pcVar345 = (code)((char)*pcVar345 + (char)((uint)pcVar20 >> 8));
          pcVar23[(int)pcVar17] = (code)((byte)pcVar23[(int)pcVar17] ^ bVar14);
          pcVar345 = pcVar23 + (int)pcVar17 + 0x69;
          *pcVar345 = (code)((byte)*pcVar345 & (byte)pcVar20);
          cVar11 = *pcVar345;
          pcVar346 = pcVar346 + 1;
LAB_1000_57d9:
          bVar362 = false;
          if (cVar11 != (code)0x0) {
            puVar290 = (uint *)puVar338;
            puVar339 = (uint *)CONCAT22((int)((ulong)puVar338 >> 0x10),puVar290 + -1);
            puVar290[-1] = (uint)puVar290;
            bVar360 = false;
            goto LAB_1000_57de;
          }
        }
        pcVar17 = (code *)in_ESI;
        uVar358 = (undefined2)((ulong)in_ESI >> 0x10);
        out(*(uint *)pcVar17,uVar32);
        out(pcVar17[2],uVar32);
        pbVar39 = (byte *)pbVar38 + (int)pcVar346 + 0x73;
        *pbVar39 = *pbVar39 & (byte)((ulong)in_ECX >> 8);
        pcVar345 = pcVar23 + (int)pcVar346 + 0x75;
        *pcVar345 = (code)((byte)*pcVar345 & (byte)((ulong)pcVar27 >> 8));
        bVar360 = (char)*pcVar345 < '\0';
        in_ESI = (code *)CONCAT22(uVar358,pcVar17 + 4);
        out(pcVar17[3],uVar32);
        if (*pcVar345 != (code)0x0) {
          if (!bVar360) {
            in_ESI = (code *)CONCAT22(uVar358,pcVar17 + 5);
            out(pcVar17[4],uVar32);
            pbVar39 = (byte *)pbVar38 + (int)pcVar346 + 0x6f;
            bVar360 = false;
            *pbVar39 = *pbVar39 & (byte)((ulong)pbVar38 >> 8);
            bVar12 = *pbVar39;
            puVar339 = puVar338;
            goto LAB_1000_582f;
          }
          goto LAB_1000_5872;
        }
        bVar362 = false;
        puVar293 = (uint *)puVar338;
        pcVar346 = (code *)*puVar293;
        uVar357 = (undefined2)((ulong)puVar338 >> 0x10);
        in_ESI = (code *)CONCAT22(uVar358,(code *)puVar293[1]);
        pcVar23 = (code *)puVar293[2];
        pbVar38 = (byte *)CONCAT22((int)((ulong)pbVar38 >> 0x10),(byte *)puVar293[4]);
        uVar32 = puVar293[5];
        in_ECX = (code *)(ulong)puVar293[6];
        pcVar27 = (code *)CONCAT22((int)((ulong)pcVar27 >> 0x10),(code *)puVar293[7]);
        puVar292 = puVar293 + 8;
LAB_1000_5878:
        if (!bVar360) {
LAB_1000_589a:
          pcVar346[0x6f] = (code)((char)pcVar346[0x6f] + (char)in_ECX);
LAB_1000_589d:
          out(*(code *)in_ESI,uVar32);
          puVar36 = (undefined2 *)(*(uint *)((code *)in_ESI + 0x70) * 0x2072);
          pbVar37 = (byte *)pbVar38;
          out(*puVar36,uVar32);
          out(*(undefined1 *)(puVar36 + 1),uVar32);
          pcVar27 = (code *)((ulong)pcVar27 & 0xffff2073);
          pbVar19 = pbVar37 + 2;
          pbVar38 = (byte *)CONCAT22((int)((ulong)pbVar38 >> 0x10),pbVar19);
          bVar360 = pbVar19 == (byte *)0x0;
          out(*(undefined2 *)((int)puVar36 + 3),uVar32);
          in_ESI = (code *)CONCAT22((int)((ulong)in_ESI >> 0x10),puVar36 + 3);
          out(*(undefined1 *)((int)puVar36 + 5),uVar32);
          puVar339 = (uint *)(*(long *)(pbVar37 + 0x3c) * 0x42000a20);
          goto LAB_1000_58bc;
        }
        uVar358 = (undefined2)((ulong)in_ESI >> 0x10);
        out(*(uint *)(code *)in_ESI,uVar32 + 1);
        pcVar346 = (code *)*puVar292;
        pcVar20 = (code *)puVar292[1];
        in_ESI = (code *)CONCAT22(uVar358,pcVar20);
        pcVar23 = (code *)puVar292[2];
        pbVar37 = (byte *)puVar292[4];
        pbVar38 = (byte *)CONCAT22((int)((ulong)pbVar38 >> 0x10),pbVar37);
        uVar32 = puVar292[5];
        in_EDX = (ulong)uVar32;
        uVar16 = puVar292[6];
        in_ECX = (code *)(ulong)uVar16;
        uVar15 = (undefined2)((ulong)pcVar27 >> 0x10);
        pcVar17 = (code *)puVar292[7];
        pcVar27 = (code *)CONCAT22(uVar15,pcVar17);
        if (bVar362) {
          pcVar345 = pcVar346;
          pcVar346 = pcVar346 + 2;
          uVar16 = in(uVar32);
          *(uint *)pcVar345 = uVar16;
          goto code_r0x000158df;
        }
        pbVar37[(int)pcVar20] = pbVar37[(int)pcVar20] & (byte)((uint)pcVar17 >> 8);
        uVar26 = (ulong)CONCAT22(uVar15,pcVar17) & 0xffff0a73;
        pcVar27 = (code *)CONCAT31((int3)(uVar26 >> 8),(byte)uVar26 | pbVar37[(int)pcVar20]);
        pcVar23 = pcVar23 + -1;
        bVar362 = pcVar23 != (code *)0x0;
        out(*(uint *)pcVar20,uVar32);
        out(pcVar20[2],uVar32);
        pcVar17 = (code *)(*(uint *)(pcVar20 + 0x72) * 0x2072);
        in_ESI = (code *)CONCAT22(uVar358,pcVar17);
        puVar339 = (uint *)CONCAT22(uVar357,puVar292 + 7);
        puVar292[7] = (uint)(puVar292 + 8);
        if ((int)pcVar23 < 0) {
          pbVar37[(int)pcVar17] = pbVar37[(int)pcVar17] & (byte)(uVar26 >> 8);
          pcVar23[(int)pcVar17] = (code)((byte)pcVar23[(int)pcVar17] & (byte)((uint)pbVar37 >> 8));
          pcVar23[(int)pcVar17] = (code)((byte)pcVar23[(int)pcVar17] & (byte)uVar16);
          goto LAB_1000_589a;
        }
        pcVar23 = (code *)(code *)((long)*(int *)(pbVar37 + 0x6e) * 0x7320);
        bVar360 = (code *)(long)(int)pcVar23 != (code *)((long)*(int *)(pbVar37 + 0x6e) * 0x7320);
        if (bVar362) goto code_r0x0001597a;
        if (!bVar360) goto code_r0x0001590c;
LAB_1000_597b:
        pcVar20 = (code *)in_ECX;
        uVar32 = (uint)in_EDX;
        if (bVar360) {
          pbVar38 = (byte *)CONCAT22((int)((ulong)pbVar38 >> 0x10),(byte *)pbVar38 + 1);
          puVar339 = (uint *)CONCAT22((int)((ulong)puVar339 >> 0x10),
                                      (uint *)((int)(uint *)puVar339 + -1));
          goto LAB_1000_59ce;
        }
        pcVar17 = (code *)in_ESI + 1;
        uVar358 = (undefined2)((ulong)in_ESI >> 0x10);
        out(*(code *)in_ESI,uVar32);
        pcVar346[0x69] = (code)((byte)pcVar346[0x69] & (byte)in_ECX);
code_r0x000159f1:
        pcVar18 = pcVar23 + 0x20;
        pcVar23 = (code *)(code *)((long)*(int *)pcVar18 * 0x694d);
        uVar357 = (undefined2)in_EDX;
        if ((code *)(long)(int)pcVar23 == (code *)((long)*(int *)pcVar18 * 0x694d)) {
          (pcVar23 + (int)pcVar346)[0x65] =
               (code)((byte)(pcVar23 + (int)pcVar346)[0x65] & (byte)in_EDX);
        }
        else {
          pcVar345 = pcVar17 + 0x61;
          *pcVar345 = (code)((byte)*pcVar345 & (byte)pcVar27);
          if (*pcVar345 != (code)0x0) goto code_r0x000159fe;
        }
        pcVar345 = pcVar346;
        pcVar346 = pcVar346 + 1;
        cVar11 = (code)in(uVar357);
        *pcVar345 = cVar11;
LAB_1000_5a60:
        pcVar345 = pcVar17 + 0x69;
        iVar34 = ((uint)pcVar17 & 3) - (*(uint *)pcVar345 & 3);
        *(uint *)pcVar345 = *(uint *)pcVar345 + (uint)(0 < iVar34) * iVar34;
        out(*(undefined2 *)pcVar17,(int)in_EDX);
        pcVar18 = pcVar17 + 3;
        out(pcVar17[2],(int)in_EDX);
        ((byte *)pbVar38)[(int)pcVar18] = ((byte *)pbVar38)[(int)pcVar18] + (char)pcVar27;
        pcVar20 = pcVar20 + 1;
        uVar16 = 0;
        if (pcVar20 == (code *)0x0) goto LAB_1000_5a8e;
code_r0x00015a6e:
        uVar26 = (long)*(int *)(pcVar23 + 0x20) * 0x6f48;
        pcVar345 = (code *)(uVar26 & 0xffff);
        puVar300 = (uint *)puVar339;
        uVar357 = (undefined2)((ulong)puVar339 >> 0x10);
        if ((long)(int)uVar26 != uVar26) {
          pcVar18[(int)uVar26 + 0x61] = (code)((byte)pcVar18[(int)uVar26 + 0x61] & (byte)pcVar27);
          puVar300[-1] = (uint)(code *)pcVar27;
          pcVar346 = (code *)puVar300[-1];
          pcVar18 = (code *)*puVar300;
          pcVar345 = (code *)(ulong)puVar300[1];
          pbVar38 = (byte *)CONCAT22((int)((ulong)pbVar38 >> 0x10),(byte *)puVar300[3]);
          in_EDX = (ulong)puVar300[4];
          pcVar20 = (code *)puVar300[5];
          pcVar27 = (code *)(ulong)puVar300[6];
          puVar339 = (uint *)CONCAT22(uVar357,puVar300 + 7);
          goto LAB_1000_5ae1;
        }
        puVar339 = (uint *)CONCAT22(uVar357,puVar300 + -1);
        puVar300[-1] = (uint)(byte *)pbVar38;
        cVar11 = (code)in((int)in_EDX);
        *pcVar346 = cVar11;
code_r0x00015aec:
        pcVar346 = pcVar346 + 1;
        pcVar30 = pcVar18 + 0x69;
        iVar34 = ((uint)pcVar18 & 3) - (*(uint *)pcVar30 & 3);
        *(uint *)pcVar30 = *(uint *)pcVar30 + (uint)(0 < iVar34) * iVar34;
        pcVar17 = pcVar18 + 2;
        out(*(undefined2 *)pcVar18,(int)in_EDX);
        pcVar18 = pcVar18 + 3;
        out(*pcVar17,(int)in_EDX);
        pbVar39 = (byte *)pbVar38 + (int)pcVar18;
        bVar362 = CARRY1(*pbVar39,(byte)pcVar27);
        *pbVar39 = *pbVar39 + (byte)pcVar27;
        pcVar17 = pcVar20 + 1;
        bVar360 = pcVar17 == (code *)0x0;
        goto LAB_1000_5af8;
      }
LAB_1000_5838:
      pcVar345 = pcVar346 + 0x6f;
      *pcVar345 = (code)((byte)*pcVar345 & (byte)((ulong)in_ECX >> 8));
      bVar360 = *pcVar345 == (code)0x0;
      puVar291 = (uint *)(uint *)((long)*(int *)(pcVar23 + 0x79) * 0x202c);
      puVar339 = (uint *)CONCAT22((int)((ulong)puVar339 >> 0x10),puVar291);
      pcVar17 = (code *)in_ESI;
      in_ESI = (code *)CONCAT22((int)((ulong)in_ESI >> 0x10),pcVar17 + 2);
      out(*(uint *)pcVar17,uVar32);
      if ((uint *)(long)(int)puVar291 == (uint *)((long)*(int *)(pcVar23 + 0x79) * 0x202c))
      goto LAB_1000_58bc;
LAB_1000_5864:
      pcVar345 = pcVar23 + (int)pcVar346 + 0x65;
      *pcVar345 = (code)((char)*pcVar345 + bVar14);
      if (*pcVar345 != (code)0x0) {
        pcVar23 = (code *)(*(int *)(pcVar23 + 0x67) * 0x2e73);
LAB_1000_586e:
        in_ECX = (code *)CONCAT31((int3)((ulong)in_ECX >> 8),
                                  (byte)in_ECX | (byte)pcVar23[(int)(code *)in_ESI]);
        pcVar27 = (code *)CONCAT31((int3)((ulong)pcVar27 >> 8),
                                   (byte)pcVar27 | ((byte *)pbVar38)[(int)(code *)in_ESI]);
        puVar338 = puVar339;
LAB_1000_5872:
        uVar357 = (undefined2)((ulong)puVar338 >> 0x10);
        puVar292 = (uint *)((int)(uint *)puVar338 + 1);
        bVar360 = (int)((int)(uint *)puVar338 + 1) < 0;
        pcVar17 = (code *)(code *)((long)*(int *)(pcVar23 + (int)pcVar346 + 0x70) * 0x616c);
        in_ESI = (code *)CONCAT22((int)((ulong)in_ESI >> 0x10),pcVar17);
        bVar362 = (code *)(long)(int)pcVar17 !=
                  (code *)((long)*(int *)(pcVar23 + (int)pcVar346 + 0x70) * 0x616c);
        goto LAB_1000_5878;
      }
code_r0x000158df:
      pbVar37 = (byte *)pbVar38;
      pcVar17 = (code *)in_ESI;
      bVar13 = (byte)pcVar27 | pbVar37[(int)pcVar17];
      pcVar23 = pcVar23 + -1;
      pcVar345 = pcVar346;
      pcVar346 = pcVar346 + 2;
      uVar16 = in(uVar32);
      *(uint *)pcVar345 = uVar16;
      out(*(uint *)pcVar17,uVar32);
      (pcVar23 + (int)pcVar346)[0x6f] = (code)((byte)(pcVar23 + (int)pcVar346)[0x6f] & bVar13);
      out(pcVar17[2],uVar32);
      iVar294 = (int)*(undefined4 *)(pbVar37 + 0x20) * 0x3a20;
      pcVar27 = (code *)CONCAT31((int3)((ulong)pcVar27 >> 8),bVar13 | pbVar37[(int)(pcVar17 + 3)]);
      *(int *)(iVar294 + -2) = iVar294;
      *(undefined2 *)(iVar294 + -4) = 0x2065;
      puVar339 = (uint *)(pbVar37 + 0x6e);
      iVar34 = ((uint)pcVar23 & 3) - (*puVar339 & 3);
      *puVar339 = *puVar339 + (uint)(0 < iVar34) * iVar34;
      puVar339 = (uint *)(*(long *)(pbVar37 + 0x75) * 0x69746172);
      out(*(undefined2 *)(pcVar17 + 3),uVar32);
      out(pcVar17[5],uVar32);
      bVar360 = false;
      (pcVar23 + (int)pcVar346)[0x75] =
           (code)((byte)(pcVar23 + (int)pcVar346)[0x75] & (byte)(uVar32 >> 8));
      in_ESI = (code *)CONCAT22((int)((ulong)in_ESI >> 0x10),pcVar17 + 8);
      out(*(uint *)(pcVar17 + 6),uVar32);
code_r0x0001590c:
      uVar358 = (undefined2)((ulong)in_ESI >> 0x10);
      puVar295 = (uint *)puVar339;
      if (!bVar360) {
        pcVar27 = (code *)((ulong)pcVar27 & 0xffff2563);
        goto code_r0x00015933;
      }
      pcVar345 = (code *)in_ESI + 0x6f;
      *pcVar345 = (code)((byte)*pcVar345 & (byte)(uVar32 >> 8));
      pcVar345 = pcVar346 + 0x78;
      bVar13 = (byte)((ulong)pcVar27 >> 8);
      *pcVar345 = (code)((byte)*pcVar345 & bVar13);
      puVar36 = (undefined2 *)(*(uint *)((code *)in_ESI + 0x2e) * 0x5900);
      in_ESI = (code *)CONCAT22(uVar358,puVar36 + 1);
      out(*puVar36,uVar32);
      if (*pcVar345 == (code)0x0) {
        (pcVar23 + (int)pcVar346)[0x6f] = (code)((byte)(pcVar23 + (int)pcVar346)[0x6f] & bVar13);
        goto code_r0x00015996;
      }
      pcVar346 = (code *)*puVar295;
      pcVar17 = (code *)puVar295[1];
      pbVar38 = (byte *)CONCAT22((int)((ulong)pbVar38 >> 0x10),(byte *)puVar295[4]);
      uVar357 = puVar295[5];
      pcVar27 = (code *)(ulong)puVar295[7];
      puVar339 = (uint *)CONCAT22((int)((ulong)puVar339 >> 0x10),puVar295 + 8);
code_r0x000159fe:
      ((byte *)pbVar38)[(int)pcVar17] = ((byte *)pbVar38)[(int)pcVar17] + (char)pcVar27;
      cVar11 = (code)in(uVar357);
      *pcVar346 = cVar11;
      cVar11 = (code)in(uVar357);
      pcVar346[1] = cVar11;
      puVar176 = (undefined1 *)*puVar339;
      in_ESI = (code *)CONCAT22(uVar358,(code *)puVar339[1]);
      uVar343 = puVar339[2];
      pbVar38 = (byte *)CONCAT22((int)((ulong)pbVar38 >> 0x10),(byte *)puVar339[4]);
      uVar32 = puVar339[5];
      uVar16 = puVar339[6];
      uVar33 = puVar339[7];
      puVar339 = puVar339 + 8;
      uVar5 = in(uVar32);
      *puVar176 = uVar5;
      pbVar39 = puVar176 + 1 + uVar343 + 0x4c;
      bVar13 = (byte)uVar33;
      *pbVar39 = *pbVar39 & bVar13;
      *(byte *)(uVar343 + 0x69) = *(byte *)(uVar343 + 0x69) & bVar13;
      pcVar346 = (code *)(puVar176 + 2);
      uVar5 = in(uVar32);
      puVar176[1] = uVar5;
      pcVar27 = (code *)(ulong)CONCAT11((char)(uVar33 >> 8),bVar13 - 0x20);
      pcVar23 = (code *)(uVar343 + 1);
      if (0x1f < bVar13) goto LAB_1000_5a14;
LAB_1000_5a86:
      in_EDX = (ulong)uVar32;
      pcVar17 = (code *)in_ESI;
      pcVar345 = pcVar17 + 0x69;
      iVar34 = ((uint)pcVar17 & 3) - (*(uint *)pcVar345 & 3);
      *(uint *)pcVar345 = *(uint *)pcVar345 + (uint)(0 < iVar34) * iVar34;
      uVar358 = (undefined2)((ulong)in_ESI >> 0x10);
      out(*(uint *)pcVar17,uVar32);
      pcVar18 = pcVar17 + 3;
      out(pcVar17[2],uVar32);
      ((byte *)pbVar38)[(int)pcVar18] = ((byte *)pbVar38)[(int)pcVar18] + (char)pcVar27;
LAB_1000_5a8e:
      pcVar17 = (code *)(uVar16 + 1);
      uVar16 = 0;
      if (pcVar17 == (code *)0x0) {
LAB_1000_5ab4:
        pcVar20 = (code *)(uVar16 + 1);
        if (pcVar20 != (code *)0x0) {
          uVar26 = (long)*(int *)(pcVar23 + 0x20) * 0x7542;
          pcVar345 = (code *)(uVar26 & 0xffff);
          if ((long)(int)uVar26 == uVar26) goto LAB_1000_5ae1;
          goto LAB_1000_5ac1;
        }
        ((byte *)pbVar38)[0x54] = ((byte *)pbVar38)[0x54] & (byte)pcVar27;
        pcVar349 = (code *)0x0;
        goto code_r0x00015ad8;
      }
      pcVar349 = (code *)(code *)((long)*(int *)(pcVar23 + 0x20) * 0x6f48);
      if ((code *)(long)(int)pcVar349 != (code *)((long)*(int *)(pcVar23 + 0x20) * 0x6f48)) {
        (pcVar349 + (int)pcVar18)[0x61] =
             (code)((byte)(pcVar349 + (int)pcVar18)[0x61] & (byte)pcVar27);
        pcVar345 = pcVar18 + 0x69;
        iVar34 = ((uint)pcVar18 & 3) - (*(uint *)pcVar345 & 3);
        *(uint *)pcVar345 = *(uint *)pcVar345 + (uint)(0 < iVar34) * iVar34;
        goto code_r0x00015afa;
      }
      ((byte *)pbVar38 + (int)pcVar346)[0x6e] =
           ((byte *)pbVar38 + (int)pcVar346)[0x6e] & (byte)((uint)pcVar17 >> 8);
      pcVar346[0x6f] = (code)((byte)pcVar346[0x6f] & (byte)pcVar17);
code_r0x00015b12:
      pcVar345 = (code *)(ulong)(uint)(*(int *)(pcVar349 + 0x20) * 0x6f4d);
      out(*pcVar18,(int)in_EDX);
      pcVar352 = (code *)CONCAT22(uVar358,(code *)(*(int *)(pcVar18 + 0x70) * 0x2072));
code_r0x00015b1d:
      pcVar18 = (code *)pcVar27;
      puVar302 = (uint *)puVar339;
      uVar357 = (undefined2)((ulong)puVar339 >> 0x10);
      puVar339 = (uint *)CONCAT22(uVar357,puVar302 + -1);
      puVar302[-1] = (uint)(byte *)pbVar38;
      pcVar30 = pcVar346;
      pcVar346 = pcVar346 + 1;
      uVar358 = (undefined2)in_EDX;
      cVar11 = (code)in(uVar358);
      *pcVar30 = cVar11;
      pcVar20 = (code *)pcVar352;
      pcVar30 = pcVar20 + 0x69;
      iVar34 = ((uint)pcVar20 & 3) - (*(uint *)pcVar30 & 3);
      *(uint *)pcVar30 = *(uint *)pcVar30 + (uint)(0 < iVar34) * iVar34;
      uVar15 = (undefined2)((ulong)pcVar352 >> 0x10);
      out(*(undefined2 *)pcVar20,uVar358);
      pcVar352 = (code *)CONCAT22(uVar15,pcVar20 + 3);
      out(pcVar20[2],uVar358);
      pbVar39 = (byte *)pbVar38 + (int)(pcVar20 + 3);
      *pbVar39 = *pbVar39 + (char)pcVar27;
      pcVar17 = pcVar17 + 1;
      pcVar30 = (code *)ZEXT24(pcVar17);
      pcVar349 = (code *)0x0;
      if (pcVar17 != (code *)0x0) {
        uVar26 = (long)*(int *)((code *)pcVar345 + 0x20) * 0x6944;
        pcVar345 = (code *)(uVar26 & 0xffff);
        pcVar20 = pcVar346;
        if ((long)(int)uVar26 != uVar26) {
          cVar11 = (code)in(uVar358);
          *pcVar346 = cVar11;
          pcVar346 = (code *)puVar302[-1];
          pcVar352 = (code *)CONCAT22(uVar15,(code *)*puVar302);
          pcVar349 = (code *)puVar302[1];
          pbVar38 = (byte *)CONCAT22((int)((ulong)pbVar38 >> 0x10),(byte *)puVar302[3]);
          in_EDX = (ulong)puVar302[4];
          uVar16 = puVar302[5];
          pcVar27 = (code *)(ulong)puVar302[6];
          puVar339 = (uint *)CONCAT22(uVar357,puVar302 + 7);
          bVar362 = true;
code_r0x00015b37:
          pcVar30 = (code *)(ulong)uVar16;
          if (-1 < (int)pcVar17) {
            pcVar345 = (code *)ZEXT24(pcVar349 + -1);
            uVar16 = in((int)in_EDX);
            *(uint *)pcVar346 = uVar16;
            goto code_r0x00015b5c;
          }
          pcVar17 = pcVar349 + 1;
          pcVar345 = (code *)ZEXT24(pcVar17);
          bVar360 = pcVar17 == (code *)0x0;
          pcVar20 = (code *)pcVar352;
          pcVar352 = (code *)CONCAT22((int)((ulong)pcVar352 >> 0x10),pcVar20 + 1);
          out(*pcVar20,(int)in_EDX);
          pcVar20 = pcVar349;
          if (!bVar362 && !bVar360) goto code_r0x00015b3d;
          pcVar18 = (code *)pcVar27 + -0x202d;
          puVar305 = (uint *)puVar339;
          puVar339 = (uint *)CONCAT22((int)((ulong)puVar339 >> 0x10),puVar305 + -1);
          puVar305[-1] = (uint)pcVar17;
          pcVar20 = pcVar346;
        }
LAB_1000_5ba5:
        pcVar346 = (code *)pcVar352;
        pcVar17 = (code *)pcVar345;
        *pcVar20 = (code)((byte)*pcVar20 & (byte)((ulong)pcVar30 >> 8));
        pcVar25 = (code *)ZEXT24(pcVar18 + -0x5520);
        if (pcVar18 < (code *)0x5520) {
          bVar13 = 0;
          bVar361 = false;
          *(byte *)pbVar38 = *(byte *)pbVar38 & (byte)((uint)(pcVar18 + -0x5520) >> 8);
LAB_1000_5bae:
          bVar14 = (byte)pcVar25;
          in_AF = 9 < (bVar14 & 0xf) | in_AF;
          uVar28 = (undefined3)((ulong)pcVar25 >> 8);
          bVar362 = (bool)(0x99 < bVar14 | bVar13);
          bVar13 = bVar14 + in_AF * -6 + bVar362 * -0x60;
          pcVar27 = (code *)CONCAT31(uVar28,bVar13);
          bVar360 = bVar13 == 0;
          puVar306 = (uint *)puVar339;
          uVar357 = (undefined2)((ulong)puVar339 >> 0x10);
          puVar339 = (uint *)CONCAT22(uVar357,puVar306 + -1);
          puVar306[-1] = 0x2027;
          pcVar18 = (code *)pcVar352;
          pcVar17 = pcVar18 + 4;
          uVar358 = (undefined2)in_EDX;
          out(*(undefined4 *)pcVar18,uVar358);
          bVar14 = (byte)((ulong)pcVar30 >> 8);
          if (!bVar362) {
            puVar339 = (uint *)CONCAT22(uVar357,puVar306 + -2);
            puVar306[-2] = 0x6c65;
            if (bVar361) goto LAB_1000_5be8_1;
            ((code *)pcVar345 + (int)pcVar20)[0x77] =
                 (code)((char)((code *)pcVar345 + (int)pcVar20)[0x77] + (char)in_EDX);
            pcVar17 = (code *)(code *)((long)*(int *)(pcVar18 + 0x67) * 0x2068);
            in_AF = 9 < (bVar13 & 0xf) | in_AF;
            pcVar27 = (code *)(CONCAT31(uVar28,bVar13 + in_AF * '\x06' +
                                               (0x99 < bVar13 ||
                                               (code *)(long)(int)pcVar17 !=
                                               (code *)((long)*(int *)(pcVar18 + 0x67) * 0x2068)) *
                                               '`') & 0x2773);
            pcVar20[0x75] = (code)((byte)pcVar20[0x75] & bVar14);
            goto LAB_1000_5c40;
          }
          out(*pcVar17,uVar358);
          pbVar39 = (byte *)pbVar38 + (int)pcVar20 + 0x6e;
          *pbVar39 = *pbVar39 & (byte)((ulong)pcVar25 >> 8);
          pbVar39 = (byte *)pbVar38 + (int)pcVar20 + 0x6e;
          *pbVar39 = *pbVar39 & bVar14;
          pcVar345 = pcVar20;
          pcVar20 = pcVar20 + 1;
          cVar11 = (code)in(uVar358);
          *pcVar345 = cVar11;
code_r0x00015be0:
          cVar11 = (code)in(uVar358);
          *pcVar20 = cVar11;
          puVar176 = (undefined1 *)*puVar339;
          pcVar352 = (code *)(ulong)puVar339[1];
          pcVar345 = (code *)(ulong)puVar339[2];
          pbVar38 = (byte *)CONCAT22((int)((ulong)pbVar38 >> 0x10),(byte *)puVar339[4]);
          puVar338 = puVar339 + 5;
          in_EDX = (ulong)*puVar338;
          pcVar30 = (code *)(ulong)puVar339[6];
          pcVar27 = (code *)(ulong)puVar339[7];
          puVar339 = puVar339 + 8;
          pcVar20 = (code *)(puVar176 + 1);
          uVar5 = in(*puVar338);
          *puVar176 = uVar5;
          goto LAB_1000_5be5;
        }
code_r0x00015c07:
        pcVar17[(int)pcVar346] = (code)((char)pcVar17[(int)pcVar346] + (char)pcVar30);
        pcVar346[0x69] = (code)((char)pcVar346[0x69] + (char)in_EDX);
        pcVar20 = (code *)*puVar339;
        puVar36 = (undefined2 *)puVar339[1];
        uVar33 = puVar339[2];
        pcVar345 = (code *)(ulong)uVar33;
        pbVar37 = (byte *)puVar339[4];
        pbVar38 = (byte *)CONCAT22((int)((ulong)pbVar38 >> 0x10),pbVar37);
        uVar32 = puVar339[5];
        in_EDX = (ulong)uVar32;
        pcVar349 = (code *)puVar339[6];
        uVar16 = puVar339[7];
        *(byte *)(uVar33 + (int)puVar36) = *(byte *)(uVar33 + (int)puVar36) & (byte)(uVar32 >> 8);
        bVar13 = (byte)(uVar16 >> 8) ^ pbVar37[(int)puVar36];
        uVar26 = (ulong)bVar13 << 8;
        puVar309 = (uint *)(puVar339 + 8);
        uVar357 = (undefined2)((ulong)(puVar339 + 8) >> 0x10);
        puVar309[-1] = (uint)pbVar37;
        if (bVar13 != 0) {
          puVar310 = puVar309 + -2;
          puVar309[-2] = uVar33;
          pcVar30 = pcVar20;
          pcVar20 = pcVar20 + 1;
          cVar11 = (code)in(uVar32);
          *pcVar30 = cVar11;
          pcVar30 = (code *)((long)*(int *)((int)puVar36 + 0x79) * 0x202c);
          pcVar346 = (code *)pcVar30;
          bVar360 = (code *)(long)(int)pcVar346 != pcVar30;
          goto LAB_1000_5c22;
        }
        (pbVar37 + (int)pcVar20)[0x75] = (pbVar37 + (int)pcVar20)[0x75] & (byte)uVar32;
        puVar339 = (uint *)CONCAT22(uVar357,(uint *)(*(uint *)(pcVar20 + 0x74) * 0x4d20));
        pcVar346 = (code *)(puVar36 + 1);
        out(*puVar36,uVar32);
        goto LAB_1000_5c99;
      }
LAB_1000_5b4e:
      pbVar39 = (byte *)pbVar38 + (int)(code *)pcVar352;
      bVar360 = CARRY1(*pbVar39,(byte)pcVar27);
      *pbVar39 = *pbVar39 + (byte)pcVar27;
      pcVar30 = (code *)ZEXT24(pcVar349 + 1);
      pcVar20 = pcVar346;
      if (pcVar349 + 1 != (code *)0x0) {
        uVar26 = (long)*(int *)((code *)pcVar345 + 0x20) * 0x654d;
        pcVar345 = (code *)(uVar26 & 0xffff);
        bVar362 = (long)(int)uVar26 != uVar26;
        uVar16 = in((int)in_EDX);
        *(uint *)pcVar346 = uVar16;
code_r0x00015b5c:
        pcVar20 = pcVar346 + 2;
        pcVar25 = (code *)CONCAT22((int)((ulong)pcVar352 >> 0x10),(code *)pcVar352 + 2);
        uVar358 = (undefined2)in_EDX;
        out(*(undefined2 *)(code *)pcVar352,uVar358);
        if (bVar362) {
          ((byte *)pbVar38 + (int)pcVar20)[0x6c] =
               ((byte *)pbVar38 + (int)pcVar20)[0x6c] + (char)pcVar30;
          goto code_r0x00015be0;
        }
        pcVar352 = (code *)pcVar345 + (int)pcVar20 + 0x69;
        bVar360 = false;
        *pcVar352 = (code)((byte)*pcVar352 & (byte)in_EDX);
        if ((POPCOUNT(*pcVar352) & 1U) != 0) {
          pcVar352 = (code *)pcVar345 + (int)pcVar20 + 0x65;
          *pcVar352 = (code)((byte)*pcVar352 & (byte)in_EDX);
          cVar11 = (code)in(uVar358);
          *pcVar20 = cVar11;
          goto code_r0x00015b68;
        }
        if (*pcVar352 == (code)0x0) goto code_r0x00015bed;
        goto code_r0x00015c3e;
      }
LAB_1000_5b76:
      if (bVar360) {
LAB_1000_5b98:
        cVar11 = (code)in((int)in_EDX);
        *pcVar20 = cVar11;
        ((code *)pcVar345 + (int)(pcVar20 + 1))[0x77] =
             (code)((byte)((code *)pcVar345 + (int)(pcVar20 + 1))[0x77] & (byte)in_EDX);
        uVar26 = (long)*(int *)((code *)pcVar352 + 99) * 0x2068;
        pcVar352 = (code *)(uVar26 & 0xffff);
        bVar13 = (byte)pcVar27;
        in_AF = 9 < (bVar13 & 0xf) | in_AF;
        pcVar18 = (code *)((uint)CONCAT31((int3)((ulong)pcVar27 >> 8),
                                          bVar13 + in_AF * '\x06' +
                                          (0x99 < bVar13 || (long)(int)uVar26 != uVar26) * '`') &
                          0x2773);
        pcVar20 = pcVar20 + 1;
        goto LAB_1000_5ba5;
      }
      pcVar345 = (code *)pcVar345 + (int)(code *)pcVar352 + 0x65;
      iVar34 = ((uint)(code *)pcVar352 & 3) - (*(uint *)pcVar345 & 3);
      bVar360 = 0 < iVar34;
      *(uint *)pcVar345 = *(uint *)pcVar345 + (uint)bVar360 * iVar34;
      puVar304 = (uint *)puVar339;
      pcVar20 = (code *)*puVar304;
      pcVar17 = (code *)puVar304[1];
      pcVar345 = (code *)(ulong)puVar304[2];
      uVar358 = (undefined2)((ulong)pbVar38 >> 0x10);
      pbVar37 = (byte *)puVar304[4];
      pbVar38 = (byte *)CONCAT22(uVar358,pbVar37);
      uVar32 = puVar304[5];
      in_EDX = (ulong)uVar32;
      uVar16 = puVar304[6];
      pcVar30 = (code *)(ulong)uVar16;
      pcVar27 = (code *)(ulong)puVar304[7];
      puVar339 = (uint *)CONCAT22((int)((ulong)puVar339 >> 0x10),puVar304 + 8);
      if (!bVar360) {
        out(*pcVar17,uVar32);
        pcVar345 = (code *)CONCAT22((int)((ulong)pcVar352 >> 0x10),pcVar17 + 1) + 0x69;
        bVar13 = (byte)(puVar304[7] >> 8);
        *pcVar345 = (code)((byte)*pcVar345 & bVar13);
        pcVar17 = pcVar20 + 1;
        cVar11 = (code)in(uVar32);
        *pcVar20 = cVar11;
        *pbVar37 = *pbVar37 & bVar13;
        *pcVar17 = (code)((char)*pcVar17 + (bVar13 & 0x27));
        *pcVar17 = (code)((char)*pcVar17 + (bVar13 & 0x27));
        (pbVar37 + (int)pcVar17)[0x6c] = (pbVar37 + (int)pcVar17)[0x6c] + (char)uVar16;
        cVar11 = (code)in(uVar32);
        *pcVar17 = cVar11;
        pcVar20 = (code *)*puVar339;
        pcVar352 = (code *)(ulong)puVar339[1];
        pcVar345 = (code *)(ulong)puVar339[2];
        pbVar38 = (byte *)CONCAT22(uVar358,(byte *)puVar339[4]);
        in_EDX = (ulong)puVar339[5];
        pcVar30 = (code *)(ulong)puVar339[6];
        pcVar27 = (code *)(ulong)puVar339[7];
        puVar339 = puVar339 + 8;
        goto LAB_1000_5b98;
      }
LAB_1000_5be8_1:
      pcVar346 = (code *)pcVar27;
      if (!bVar360) {
        puVar307 = (uint *)puVar339;
        puVar339 = (uint *)CONCAT22((int)((ulong)puVar339 >> 0x10),puVar307 + -1);
        puVar307[-1] = 0x2720;
        pcVar18 = pcVar17;
        goto code_r0x00015bee;
      }
      ((code *)pcVar345 + (int)pcVar20)[0x6f] =
           (code)((byte)((code *)pcVar345 + (int)pcVar20)[0x6f] & (byte)pbVar38);
LAB_1000_5c40:
      pcVar349 = (code *)pcVar30;
      pbVar37 = (byte *)pbVar38;
      pcVar352 = pcVar20 + *(int *)(pbVar37 + 0x6e) * 0x5d73 + 0x69;
      *pcVar352 = (code)((byte)*pcVar352 & (byte)pbVar38);
      pcVar18 = pcVar17 + 1;
      uVar16 = (uint)in_EDX;
      out(*pcVar17,uVar16);
      pcVar345 = (code *)((sqword)*(long *)(pcVar17 + 0x66) * 0x6f5b205d);
      bVar360 = (sqword)(long)pcVar345 != (sqword)*(long *)(pcVar17 + 0x66) * 0x6f5b205d;
      if (*pcVar352 == (code)0x0) {
        pcVar17 = (code *)((int)*(undefined4 *)(pcVar17 + 0x66) * 0xa5d);
        if (SBORROW2((int)pcVar20,1)) {
          bVar13 = 0;
          *pcVar18 = (code)((byte)*pcVar18 & (byte)pcVar30);
          pcVar345 = pcVar27;
          pcVar346 = pcVar349;
          pcVar20 = pcVar20 + -1;
          goto code_r0x00015cca;
        }
        pcVar17 = (code *)(*(int *)(pbVar37 + 0x6e) * 0x3a73);
        bVar13 = (byte)((ulong)pcVar27 >> 8);
        pbVar37[(int)pcVar18] = pbVar37[(int)pcVar18] & bVar13;
        pbVar37[(int)pcVar18] = pbVar37[(int)pcVar18] & bVar13;
        bVar13 = (byte)pcVar27;
        in_AF = 9 < (bVar13 & 0xf) | in_AF;
        uVar32 = (int)CONCAT31((int3)((ulong)pcVar27 >> 8),
                               bVar13 + in_AF * -6 + (0x99 < bVar13) * -0x60) - 1;
        pcVar27 = (code *)(ulong)uVar32;
        bVar13 = (byte)(uVar32 >> 8);
        pbVar37[(int)pcVar18] = pbVar37[(int)pcVar18] & bVar13;
        pbVar37[(int)pcVar18] = pbVar37[(int)pcVar18] & bVar13;
        pbVar37[(int)pcVar18] = pbVar37[(int)pcVar18] & bVar13;
        puVar311 = (uint *)puVar339;
        puVar311[-1] = (uint)puVar311;
        puVar311[-2] = 0x7369;
        pcVar20[100] = (code)((byte)pcVar20[100] & (byte)((ulong)pcVar30 >> 8));
        pcVar20 = pcVar20 + -1;
        goto LAB_1000_5ceb;
      }
      if (-1 < (char)*pcVar352) {
code_r0x00015cc9:
        pcVar17 = (code *)pcVar345;
        bVar14 = (byte)pcVar27;
        in_AF = 9 < (bVar14 & 0xf) | in_AF;
        bVar13 = 0x99 < bVar14 | bVar360;
        pcVar345 = (code *)CONCAT31((int3)((ulong)pcVar27 >> 8),
                                    bVar14 + in_AF * '\x06' + bVar13 * '`');
        pcVar346 = pcVar349;
        goto code_r0x00015cca;
      }
LAB_1000_5ce6_3:
      pcVar17 = (code *)pcVar345;
      (pcVar17 + (int)pcVar20)[99] = (code)((byte)(pcVar17 + (int)pcVar20)[99] & (byte)uVar16);
code_r0x00015cee:
      out(*pcVar18,uVar16);
      bVar13 = (byte)pcVar27;
      (pcVar17 + (int)pcVar20)[0x6f] = (code)((byte)(pcVar17 + (int)pcVar20)[0x6f] & bVar13);
      out(pcVar18[1],uVar16);
      pbVar37 = (byte *)pbVar38;
      puVar340 = (undefined4 *)(*(long *)(pbVar37 + 0x75) * 0x69746172);
      out(*(undefined2 *)(pcVar18 + 2),uVar16);
      out(pcVar18[4],uVar16);
      *pbVar37 = *pbVar37 & (byte)((ulong)pcVar27 >> 8);
      out(pcVar18[5],uVar16);
      pcVar346 = pcVar18 + 7;
      out(pcVar18[6],uVar16);
      in_AF = 9 < (bVar13 & 0xf) | in_AF;
      bVar13 = bVar13 + in_AF * '\x06' + (0x99 < bVar13) * '`' | pbVar37[(int)pcVar346];
      cVar10 = (char)(uVar16 >> 8);
      (pcVar17 + (int)pcVar346)[0x1920] = (code)((char)(pcVar17 + (int)pcVar346)[0x1920] + cVar10);
      (pbVar37 + (int)pcVar346)[0x2030] = (pbVar37 + (int)pcVar346)[0x2030] + cVar10;
      pcVar27 = (code *)(ulong)((int)CONCAT31((int3)((ulong)pcVar27 >> 8),
                                              bVar13 + (9 < (bVar13 & 0xf) | in_AF) * -6 +
                                              (0x99 < bVar13) * -0x60) + 0xace0);
      pcVar17 = (code *)(*(int *)(pcVar17 + 0x67) * 0x656c);
      pcVar345 = pcVar20 + 0x6f;
      *pcVar345 = (code)((byte)*pcVar345 & (byte)pcVar30);
      bVar362 = (char)*pcVar345 < '\0';
      bVar360 = *pcVar345 == (code)0x0;
      out(*pcVar346,uVar16);
      pcVar18 = (code *)(*(int *)(pcVar18 + 0x77) * 0x2072);
LAB_1000_5d1f:
      pbVar37 = (byte *)pbVar38;
      puVar313 = (undefined4 *)puVar340;
      uVar358 = (undefined2)((ulong)puVar340 >> 0x10);
      *(undefined2 *)((int)puVar313 + -2) = pbVar37;
      if (bVar362) {
        if (!bVar360) {
          uVar16 = in(uVar16);
          *(uint *)pcVar20 = uVar16;
          *(int *)(pbVar37 + (int)pcVar18) =
               *(int *)(pbVar37 + (int)pcVar18) -
               (int)CONCAT31((int3)((ulong)pcVar27 >> 8),(byte)pcVar27 | pbVar37[(int)pcVar18]);
          pcVar20[2] = (code)((byte)pcVar20[2] & (byte)((ulong)pcVar30 >> 8));
          pcVar18[0x75] = (code)((byte)pcVar18[0x75] & 0x31);
          pcVar21 = (code *)*(undefined2 *)((int)puVar313 + -2);
          pcVar23 = *(code **)puVar313;
          pcVar17 = (code *)*(undefined2 *)((int)puVar313 + 2);
          pbVar38 = (byte *)CONCAT22((int)((ulong)pbVar38 >> 0x10),
                                     (byte *)*(undefined2 *)((int)puVar313 + 6));
          in_EDX = (ulong)*(uint *)(puVar313 + 2);
          in_ECX = (code *)(ulong)*(uint *)((int)puVar313 + 10);
          uVar16 = *(uint *)(puVar313 + 3);
          puVar339 = (uint *)CONCAT22(uVar358,(uint *)((int)puVar313 + 0xe));
code_r0x00015d36:
          pcVar27 = (code *)(ulong)uVar16;
          pcVar346 = pcVar21 + 1;
          uVar358 = (undefined2)in_EDX;
          cVar11 = (code)in(uVar358);
          *pcVar21 = cVar11;
          pcVar345 = pcVar21 + 0x70;
          *pcVar345 = (code)((byte)*pcVar345 & (byte)in_ECX);
          cVar11 = *pcVar345;
          cVar1 = *pcVar345;
          out(*pcVar23,uVar358);
          pcVar349 = (code *)(*(int *)(pcVar23 + 0x70) * 0x2072);
          pbVar37 = (byte *)pbVar38;
          puVar314 = (uint *)puVar339;
          uVar32 = (uint)((ulong)puVar339 >> 0x10);
          puVar339 = (uint *)((ulong)uVar32 << 0x10);
          puVar314[-1] = (uint)pbVar37;
          if ((char)cVar11 < '\0') {
            if (cVar1 != (code)0x0) {
              pcVar20 = pcVar21 + 3;
              uVar358 = in(uVar358);
              *(undefined2 *)pcVar346 = uVar358;
              bVar13 = (byte)in_ECX | (byte)pcVar17[(int)pcVar349];
              in_ECX = (code *)CONCAT31((int3)((ulong)in_ECX >> 8),bVar13);
              (pbVar37 + (int)pcVar20)[0x6e] = (pbVar37 + (int)pcVar20)[0x6e] + bVar13;
              pcVar23 = pcVar349 + 1;
              pcVar17 = (code *)(*(uint *)(pcVar349 + 0x66) * 0xa3a);
              bVar13 = (byte)(uVar16 >> 8);
              pbVar37[(int)pcVar23] = pbVar37[(int)pcVar23] + bVar13;
              pbVar37[(int)pcVar23] = pbVar37[(int)pcVar23] & bVar13;
              pbVar37[(int)pcVar23] = pbVar37[(int)pcVar23] & bVar13;
              puVar314[-2] = (uint)pbVar37;
              puVar339 = (uint *)(pbVar37 + (int)pcVar20 + 0x66);
              iVar34 = ((uint)pcVar17 & 3) - (*puVar339 & 3);
              bVar360 = 0 < iVar34;
              *puVar339 = *puVar339 + (uint)bVar360 * iVar34;
              goto code_r0x00015d5e;
            }
            puVar341 = (undefined2 *)
                       CONCAT22(uVar32,(undefined2 *)(*(int *)(pcVar17 + 0x20) * 0x6f6e));
            goto code_r0x00015daf;
          }
LAB_1000_5db6:
          pcVar18 = pcVar346 + 2;
          uVar358 = in((int)in_EDX);
          *(undefined2 *)pcVar346 = uVar358;
          ((byte *)pbVar38 + (int)pcVar18)[0x73] =
               ((byte *)pbVar38 + (int)pcVar18)[0x73] & (byte)((ulong)in_ECX >> 8);
          (pcVar17 + (int)pcVar18)[0x75] =
               (code)((byte)(pcVar17 + (int)pcVar18)[0x75] & (byte)(in_EDX >> 8));
          pcVar345 = pcVar27;
          goto LAB_1000_5dc0;
        }
        bVar13 = (byte)((ulong)pcVar27 >> 8);
        pbVar37[(int)pcVar18] = pbVar37[(int)pcVar18] + bVar13;
        pbVar37[(int)pcVar18] = pbVar37[(int)pcVar18] & bVar13;
        pbVar37[(int)pcVar18] = pbVar37[(int)pcVar18] & bVar13;
        *(code **)(puVar313 + -1) = pcVar17;
        goto code_r0x00015df7;
      }
      *(undefined2 *)(puVar313 + -1) = 0x2065;
      pcVar18 = (code *)(code *)puVar313[-1];
      pcVar346 = (code *)(code *)*puVar313;
      pcVar17 = (code *)(code *)puVar313[1];
      pbVar38 = (byte *)puVar313[3];
      in_EDX = puVar313[4];
      in_ECX = (code *)puVar313[5];
      pcVar27 = (code *)puVar313[6];
      puVar339 = (uint *)CONCAT22(uVar358,puVar313 + 7);
code_r0x00015d9c:
      pcVar345 = pcVar27;
      pbVar39 = pbVar38;
      pcVar349 = pcVar346;
      if (bVar360) {
LAB_1000_5dc0:
        pcVar20 = (code *)in_ECX;
        uVar16 = (uint)in_EDX;
        cVar11 = (code)in(uVar16);
        *pcVar18 = cVar11;
        iVar34 = *(int *)(pcVar18 + 0x65);
        uVar358 = (undefined2)((ulong)puVar339 >> 0x10);
        pbVar37 = (byte *)pbVar38;
        pcVar27 = (code *)CONCAT31((int3)((ulong)pcVar345 >> 8),
                                   (byte)pcVar345 | pbVar37[(int)pcVar349]);
        pcVar23 = (code *)pcVar27;
        if (pcVar18 != (code *)0x0) goto LAB_1000_5e3f;
        pcVar346 = pcVar349 + 1;
        in_ESI = (code *)ZEXT24(pcVar346);
        pcVar17 = (code *)(*(uint *)(pcVar349 + 0x66) * 0xa3a);
        bVar13 = (byte)((ulong)pcVar345 >> 8);
        pbVar37[(int)pcVar346] = pbVar37[(int)pcVar346] + bVar13;
        pbVar37[(int)pcVar346] = pbVar37[(int)pcVar346] & bVar13;
        pbVar37[(int)pcVar346] = pbVar37[(int)pcVar346] & bVar13;
        *(undefined2 *)(iVar34 * 0xa2e + -2) = pbVar37;
        puVar339 = (uint *)(pbVar37 + 0x66);
        iVar34 = ((uint)pcVar17 & 3) - (*puVar339 & 3);
        bVar360 = 0 < iVar34;
        *puVar339 = *puVar339 + (uint)bVar360 * iVar34;
        puVar319 = (uint *)(uint *)((long)*(int *)0x73 * 0x6f20);
        puVar339 = (uint *)CONCAT22(uVar358,puVar319);
        pcVar20 = (code *)0x0;
        if (!bVar360) goto LAB_1000_5e56_2;
        pcVar20 = (code *)0x0;
        if ((uint *)(long)(int)puVar319 != (uint *)((long)*(int *)0x73 * 0x6f20))
        goto LAB_1000_5e5b;
        if (!bVar360) {
          pcVar17 = (code *)((int)*(undefined4 *)(pcVar349 + 0x66) * 0x616e);
          pbVar37[0x66] = pbVar37[0x66] & (byte)((ulong)in_ECX >> 8);
          pcVar20 = (code *)0x0;
          goto code_r0x00015df3;
        }
        pbVar37[(int)pcVar346] = pbVar37[(int)pcVar346] & bVar13;
        pbVar39 = pbVar38;
      }
      ((byte *)pbVar39)[(int)pcVar346] =
           ((byte *)pbVar39)[(int)pcVar346] & (byte)((ulong)pcVar27 >> 8);
      puVar321 = (uint *)puVar339;
      puVar339 = (uint *)CONCAT22((int)((ulong)puVar339 >> 0x10),puVar321 + -1);
      puVar321[-1] = (uint)pcVar17;
      out(*(uint *)pcVar346,(int)in_EDX);
      pcVar349 = pcVar346 + 3;
      out(pcVar346[2],(int)in_EDX);
      pcVar17[(int)pcVar349] = (code)((byte)pcVar17[(int)pcVar349] & (byte)(in_EDX >> 8));
code_r0x00015e73:
      pcVar349[0x69] = (code)((char)pcVar349[0x69] + (char)in_EDX);
      pcVar20 = (code *)*puVar339;
      uVar32 = puVar339[1];
      in_ESI = (code *)(ulong)uVar32;
      pcVar17 = (code *)puVar339[2];
      pbVar37 = (byte *)puVar339[4];
      pbVar38 = (byte *)CONCAT22((int)((ulong)pbVar39 >> 0x10),pbVar37);
      in_EDX = (ulong)puVar339[5];
      in_ECX = (code *)(ulong)puVar339[6];
      uVar16 = puVar339[7];
      puVar338 = puVar339 + 8;
      pcVar17[uVar32] = (code)((byte)pcVar17[uVar32] & (byte)(puVar339[5] >> 8));
      bVar360 = false;
      cVar11 = (code)((byte)(uVar16 >> 8) ^ pbVar37[uVar32]);
      pcVar27 = (code *)(ulong)CONCAT11(cVar11,(char)uVar16);
      bVar361 = cVar11 == (code)0x0;
      puVar339 = (uint *)ZEXT24((uint *)puVar338 + -1);
      ((uint *)puVar338)[-1] = (uint)pbVar37;
LAB_1000_5e86:
      puVar270 = (uint *)puVar339;
      if (bVar361) goto switchD_1000_4341_caseD_ae;
      pcVar346 = (code *)in_ESI;
      iVar34 = (int)in_EDX;
      bVar362 = (char)cVar11 < '\0';
      bVar361 = false;
      pcVar18 = pcVar20;
      if (!bVar360) goto switchD_1000_4341_caseD_72;
LAB_1000_5eab:
      pcVar23 = (code *)pcVar27;
      pcVar21 = (code *)(iVar34 + 1);
      in_EDX = ZEXT24(pcVar21);
      if (pcVar21 == (code *)0x0) {
        pcVar346[0x72] = (code)0x0;
        out(*(undefined1 *)*(undefined2 *)((int)puVar270 + 2),*(undefined2 *)((int)puVar270 + 10));
        pcVar18 = (code *)*(undefined2 *)((int)puVar270 + 0x10);
        pcVar346 = (code *)*(undefined2 *)((int)puVar270 + 0x12);
        pcVar17 = (code *)*(undefined2 *)((int)puVar270 + 0x14);
        puVar327 = (uint *)((int)puVar270 + 0x18);
        pbVar38 = (byte *)(ulong)*puVar327;
        in_EDX = (ulong)*(uint *)((int)puVar270 + 0x1a);
        pcVar349 = (code *)*(undefined2 *)((int)puVar270 + 0x1c);
        uVar358 = *(undefined2 *)((int)puVar270 + 0x1e);
        puVar270 = (uint *)((int)puVar270 + 0x20);
        pcVar18[*puVar327 + 0x4f] = (code)((byte)pcVar18[*puVar327 + 0x4f] & (byte)pcVar349);
        (pcVar17 + (int)pcVar346)[0x61] =
             (code)((byte)(pcVar17 + (int)pcVar346)[0x61] & (byte)uVar358);
        goto LAB_1000_5f83;
      }
      pcVar349 = (code *)in_ECX;
      if (bVar360) goto LAB_1000_5f89;
code_r0x00015f24:
      if (-1 < (int)pcVar21) {
        pbVar37 = (byte *)*puVar270;
        iVar22 = puVar270[1];
        iVar34 = puVar270[2];
        uVar15 = puVar270[5];
        uVar357 = puVar270[6];
        uVar358 = puVar270[7];
        pbVar39 = pbVar37;
        *pbVar39 = *pbVar39 & (byte)((uint)uVar358 >> 8);
        *(byte *)(iVar34 + iVar22) = *(byte *)(iVar34 + iVar22) ^ (byte)((uint)uVar15 >> 8);
        pbVar39 = pbVar37 + 0x61;
        *pbVar39 = *pbVar39 & (byte)uVar357;
        puVar270[7] = uVar358;
        pcVar18 = (code *)puVar270[7];
        pcVar20 = (code *)puVar270[8];
        pcVar17 = (code *)puVar270[9];
        puVar331 = puVar270 + 0xb;
        iVar34 = puVar270[0xc];
        bVar14 = (byte)(puVar270[0xe] >> 8);
        puVar270 = puVar270 + 0xf;
        pcVar351 = (char *)(in_GS_OFFSET + CONCAT22((int)((ulong)pbVar38 >> 0x10),*puVar331) + 0x29)
        ;
        *pcVar351 = *pcVar351 - (char)((uint)iVar34 >> 8);
        goto LAB_1000_5fc9;
      }
      pcVar27 = (code *)ZEXT24(pcVar23 + -1);
      pcVar349 = pcVar346 + 2;
      out(*(uint *)pcVar346,(int)in_EDX);
code_r0x00015f9a:
      pbVar37 = (byte *)pbVar38;
      pbVar38 = pbVar37 + (int)pcVar349 + 0x6f;
      *pbVar38 = *pbVar38 & (byte)in_ECX;
      bVar360 = *pbVar38 == 0;
      break;
    case (code)0xee:
    case (code)0xfb:
switchD_1000_4341_caseD_8:
code_r0x00011e09:
      puVar257[-1] = 0x1000;
      puVar170 = puVar257 + -2;
      puVar257[-2] = 0x1e0d;
      cVar11 = (code)FUN_1000_2202();
      pcVar17[-0xb] = cVar11;
      puVar170[1] = unaff_SS;
      *puVar170 = (uint)(pcVar17 + -0xe);
      puVar170[-1] = unaff_SS;
      puVar170[-2] = (uint)(pcVar17 + -0xe);
      puVar170[-3] = 0x10;
      puVar170[-4] = 0x1000;
      puVar170[-5] = 0x1e20;
      pcVar17 = (code *)func_0x0000520c();
      return pcVar17;
    case (code)0xf4:
      pcVar27 = (code *)(*(ulong *)pcVar18 & 0xffff);
      goto switchD_1000_4341_caseD_e7;
    case (code)0xfa:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    pcVar23 = (code *)pcVar27;
    pcVar20 = (code *)in_ECX;
    uVar16 = (uint)in_EDX;
    if (bVar360) {
      pcVar349[0x69] = (code)((byte)pcVar349[0x69] & (byte)pcVar27);
    }
    else {
      in_ECX = (code *)ZEXT24(pcVar20 + -1);
      *(uint *)((int)puVar270 + -2) = uVar16;
      puVar333 = (undefined2 *)((int)puVar270 + -4);
      puVar270 = (uint *)((int)puVar270 + -4);
      *puVar333 = pcVar20 + -1;
    }
    pcVar345 = pcVar349 + 0x65;
    *pcVar345 = (code)((byte)*pcVar345 & (byte)in_ECX);
    if (*pcVar345 == (code)0x0) goto LAB_1000_60f4;
    pcVar346 = pcVar18 + 1;
    cVar11 = (code)in(uVar16);
    *pcVar18 = cVar11;
    *pcVar346 = (code)((byte)*pcVar346 & (byte)((ulong)pcVar27 >> 8));
    pcVar17[(int)pcVar349] = (code)((byte)pcVar17[(int)pcVar349] ^ (byte)(in_EDX >> 8));
    pcVar17[0x6f] = (code)((char)pcVar17[0x6f] + (byte)in_ECX);
    pcVar20 = pcVar349 + 1;
    out(*pcVar349,uVar16);
    (pcVar17 + (int)pcVar346)[0x65] = (code)((char)(pcVar17 + (int)pcVar346)[0x65] + (char)in_EDX);
    pcVar18 = pcVar18 + 2;
    cVar11 = (code)in(uVar16);
    *pcVar346 = cVar11;
code_r0x0001609e:
    pcVar23 = (code *)pcVar27;
    pcVar345 = pcVar20 + 0x20;
    iVar34 = ((uint)pcVar20 & 3) - (*(uint *)pcVar345 & 3);
    *(uint *)pcVar345 = *(uint *)pcVar345 + (uint)(0 < iVar34) * iVar34;
    bVar14 = (byte)(in_EDX >> 8);
    bVar13 = (byte)((ulong)pcVar27 >> 8);
    if (0 < iVar34) {
      pbVar37[(int)pcVar20] = pbVar37[(int)pcVar20] & bVar13;
      puVar334 = (undefined2 *)((int)puVar270 + -2);
      puVar270 = (uint *)((int)puVar270 + -2);
      *puVar334 = pcVar17;
      pcVar20 = (code *)(*(int *)(*(int *)(pcVar17 + (int)pcVar20 + 0x65) * 0x2064 + 0x65) * 0x2c6d)
      ;
      pbVar37[0x72] = pbVar37[0x72] & (byte)((ulong)in_ECX >> 8);
      (pbVar37 + (int)pcVar20)[0x72] = (pbVar37 + (int)pcVar20)[0x72] & bVar14;
      goto LAB_1000_61fc;
    }
    pbVar38 = pbVar37 + (int)pcVar20 + 0x61;
    *pbVar38 = *pbVar38 & (byte)in_ECX;
    if (*pbVar38 == 0) {
      pcVar345 = (code *)(pbVar37 + (int)pcVar18 + 0x6e);
      *pcVar345 = (code)((byte)*pcVar345 & (byte)in_ECX);
      cVar11 = *pcVar345;
      goto LAB_1000_60b1;
    }
    pcVar18[0x73] = (code)((byte)pcVar18[0x73] & (byte)in_EDX);
    pcVar20[0x68] = (code)((byte)pcVar20[0x68] & bVar14);
    *pcVar18 = (code)((byte)*pcVar18 & bVar13);
    pcVar345 = pcVar18;
    iVar34 = ((uint)puVar270 & 3) - (*(uint *)pcVar345 & 3);
    *(uint *)pcVar345 = *(uint *)pcVar345 + (uint)(0 < iVar34) * iVar34;
    puVar339 = (uint *)(pbVar37 + (int)pcVar20);
    iVar34 = ((uint)puVar270 & 3) - (*puVar339 & 3);
    *puVar339 = *puVar339 + (uint)(0 < iVar34) * iVar34;
    goto code_r0x0001611b;
  case (code *)0x16:
switchD_1000_41c7_caseD_16:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x17:
    goto switchD_1000_41c7_caseD_17;
  }
code_r0x00010000:
  puVar41 = (uint *)puVar339;
  puVar339 = (uint *)ZEXT24(puVar41 + -1);
  puVar41[-1] = (uint)pcVar17;
switchD_1000_4341_caseD_44:
  pcVar17 = (code *)in_ESI;
  puVar42 = (uint *)puVar339;
  pcVar345 = (code *)((ulong)puVar339 & 0xffff);
  puVar42[-1] = 0x1000;
  uVar358 = 0x2b4;
  puVar43 = puVar42 + -2;
  puVar42[-2] = 0xb;
  func_0x00002e2c();
  puVar44 = (uint *)((int)puVar43 + -2);
  *(undefined2 *)((int)puVar43 + -2) = pcVar17;
  pcVar27 = (code *)0xffff;
  *(undefined2 *)0x3a = 0xffff;
  *(undefined2 *)0x0 = 0xffff;
  *(undefined2 *)0x2 = 0xffff;
  *(undefined2 *)0x0 = 0xffff;
  *(undefined2 *)0x70 = 0xffff;
  *(undefined2 *)0x74 = 0xffff;
code_r0x0001003f:
  pcVar17 = (code *)pcVar27;
  *(undefined2 *)0x72 = pcVar17;
  *(undefined2 *)0x78 = pcVar17;
  *(undefined2 *)0x76 = pcVar17;
  *(undefined2 *)0x6e = pcVar17;
  *(undefined2 *)0x34 = pcVar17;
  pcVar17 = (code *)pcVar345;
  *(undefined2 *)((int)puVar44 + -2) = *(undefined2 *)(pcVar17 + 10);
  *(undefined2 *)((int)puVar44 + -4) = *(undefined2 *)(pcVar17 + 8);
  *(undefined2 *)((int)puVar44 + -6) = *(undefined2 *)(pcVar17 + 6);
  *(undefined2 *)((int)puVar44 + -8) = uVar358;
  puVar45 = (undefined1 *)((int)puVar44 + -10);
  *(undefined2 *)((int)puVar44 + -10) = 0x74;
  pcVar17 = (code *)FUN_1000_15f4();
  puVar46 = (uint *)(puVar45 + 10);
code_r0x00010077:
  *(code **)((code *)pcVar345 + -2) = pcVar17;
  pcVar27 = (code *)ZEXT24(pcVar17);
  if (pcVar17 == (code *)0x0) {
    *(uint *)((int)puVar46 + -2) = unaff_DS;
    *(undefined2 *)((int)puVar46 + -4) = 0x42;
    *(undefined2 *)((int)puVar46 + -6) = 0x55d;
    *(undefined2 *)((int)puVar46 + -8) = 0x3c;
    *(undefined2 *)((int)puVar46 + -10) = uVar358;
    uVar358 = 0x2b4;
    puVar47 = (undefined1 *)((int)puVar46 + -0xc);
    *(undefined2 *)((int)puVar46 + -0xc) = 0x90;
    func_0x00005082();
    puVar48 = (uint *)(puVar47 + 8);
    uVar357 = 0x4a;
LAB_1000_0175:
    *(uint *)((int)puVar48 + -2) = unaff_DS;
    *(undefined2 *)((int)puVar48 + -4) = uVar357;
    *(undefined2 *)((int)puVar48 + -6) = 0x55d;
    *(undefined2 *)((int)puVar48 + -8) = 2;
  }
  else {
LAB_1000_009a:
    puVar339 = (uint *)ZEXT24(puVar46);
    pcVar17 = (code *)pcVar345;
    *(undefined2 *)(pcVar17 + -6) = 0x3c;
    *(undefined2 *)(pcVar17 + -4) = 0x55d;
    iVar34 = (int)(code *)pcVar27 * 4;
    uVar357 = (undefined2)((ulong)*(undefined4 *)(pcVar17 + 8) >> 0x10);
    iVar359 = (int)*(undefined4 *)(pcVar17 + 8);
    uVar16 = *(uint *)(iVar34 + iVar359 + 2);
    in_EDX = (ulong)uVar16;
    *(undefined2 *)(pcVar17 + -10) = *(undefined2 *)(iVar34 + iVar359);
    *(uint *)(pcVar17 + -8) = uVar16;
    *(undefined2 *)(pcVar17 + -0xc) = 0;
    while( true ) {
      pcVar17 = (code *)pcVar345;
      pcVar351 = *(char **)(pcVar17 + -10);
      *(int *)(pcVar17 + -10) = *(int *)(pcVar17 + -10) + 1;
      cVar10 = *pcVar351;
      pcVar351 = *(char **)(pcVar17 + -6);
      *(int *)(pcVar17 + -6) = *(int *)(pcVar17 + -6) + 1;
      *pcVar351 = cVar10;
      if (cVar10 == '\0') break;
LAB_1000_00c2:
      uVar24 = *(undefined4 *)((code *)pcVar345 + -6);
      if (*(char *)((int)uVar24 + -1) == '.') {
        *(undefined2 *)((code *)pcVar345 + -0xc) = 1;
      }
    }
    if (*(int *)(pcVar17 + -0xc) == 0) {
      puVar49 = (uint *)puVar339;
      puVar49[-1] = unaff_DS;
      puVar49[-2] = 0x53;
      *(int *)(pcVar17 + -6) = *(int *)(pcVar17 + -6) + -1;
      puVar49[-3] = *(undefined2 *)(pcVar17 + -4);
      puVar49[-4] = *(undefined2 *)(pcVar17 + -6);
      puVar49[-5] = uVar358;
      uVar358 = 0x2b4;
      puVar50 = puVar49 + -6;
      puVar49[-6] = 0x100;
      func_0x00005082();
      puVar339 = (uint *)ZEXT24((undefined1 *)((int)puVar50 + 8));
    }
    puVar48 = (uint *)puVar339;
    pcVar17 = (code *)pcVar345;
    *(int *)(pcVar17 + -2) = *(int *)(pcVar17 + -2) + 1;
    if (*(int *)(pcVar17 + 6) <= *(int *)(pcVar17 + -2)) {
      uVar357 = 0x5c;
      goto LAB_1000_0175;
    }
    *(undefined2 *)(pcVar17 + -6) = 2;
    *(undefined2 *)(pcVar17 + -4) = 0x55d;
    uVar357 = (undefined2)((ulong)*(undefined4 *)(pcVar17 + 8) >> 0x10);
    iVar359 = (int)*(undefined4 *)(pcVar17 + 8);
    uVar16 = *(uint *)(*(int *)(pcVar17 + -2) * 4 + iVar359 + 2);
    in_EDX = (ulong)uVar16;
    *(undefined2 *)(pcVar17 + -10) = *(undefined2 *)(*(int *)(pcVar17 + -2) * 4 + iVar359);
    *(uint *)(pcVar17 + -8) = uVar16;
    *(undefined2 *)(pcVar17 + -0xc) = 0;
    while( true ) {
      pcVar351 = *(char **)((code *)pcVar345 + -10);
      pcVar30 = (code *)pcVar345 + -10;
      *(int *)pcVar30 = *(int *)pcVar30 + 1;
      cVar10 = *pcVar351;
code_r0x0001014e:
      puVar48 = (uint *)puVar339;
      pcVar17 = (code *)pcVar345;
      pcVar351 = *(char **)(pcVar17 + -6);
      *(int *)(pcVar17 + -6) = *(int *)(pcVar17 + -6) + 1;
      *pcVar351 = cVar10;
      if (cVar10 == '\0') break;
      if (*(char *)((int)*(undefined4 *)(pcVar17 + -6) + -1) == '.') {
        *(undefined2 *)(pcVar17 + -0xc) = 1;
      }
    }
    if (*(int *)(pcVar17 + -0xc) != 0) goto LAB_1000_0187;
    puVar48[-1] = unaff_DS;
    puVar48[-2] = 0x57;
    *(int *)(pcVar17 + -6) = *(int *)(pcVar17 + -6) + -1;
    puVar48[-3] = *(undefined2 *)(pcVar17 + -4);
    puVar48[-4] = *(undefined2 *)(pcVar17 + -6);
  }
  *(undefined2 *)((int)puVar48 + -10) = uVar358;
  uVar358 = 0x2b4;
  puVar51 = (undefined1 *)((int)puVar48 + -0xc);
  *(undefined2 *)((int)puVar48 + -0xc) = 0x184;
  func_0x00005082();
  puVar48 = (uint *)(puVar51 + 8);
LAB_1000_0187:
  *(uint *)((int)puVar48 + -2) = unaff_DS;
  *(undefined2 *)((int)puVar48 + -4) = 0x65;
  *(undefined2 *)((int)puVar48 + -6) = 0x55d;
  *(undefined2 *)((int)puVar48 + -8) = 0x3c;
  *(undefined2 *)((int)puVar48 + -10) = uVar358;
  uVar358 = 0x2b4;
  puVar52 = (undefined2 *)((int)puVar48 + -0xc);
  *(undefined2 *)((int)puVar48 + -0xc) = 0x199;
  uVar15 = func_0x0000329a();
  puVar54 = puVar52 + 4;
  uVar357 = *(undefined2 *)0x10d4;
  *(undefined2 *)0x36 = uVar15;
  *(int *)0x38 = (int)in_EDX;
  if ((int)in_EDX == 0 && *(int *)0x36 == 0) {
    puVar52[3] = 0x55d;
    puVar52[2] = 0x3c;
    puVar52[1] = unaff_DS;
    *puVar52 = 0x68;
    puVar52[-1] = 0x2b4;
    puVar53 = puVar52 + -2;
    puVar52[-2] = 0x1c3;
    FUN_1000_17f8();
    puVar54 = (uint *)((int)puVar53 + 0xc);
  }
LAB_1000_01c6:
  uVar357 = *(undefined2 *)0x10d4;
  *(undefined2 *)((int)puVar54 + -2) = *(undefined2 *)0x38;
  *(undefined2 *)((int)puVar54 + -4) = *(undefined2 *)0x36;
  *(undefined2 *)((int)puVar54 + -6) = 0xffff;
  *(undefined2 *)((int)puVar54 + -8) = 1;
  *(undefined2 *)((int)puVar54 + -10) = 0x1566;
  *(undefined2 *)((int)puVar54 + -0xc) = 0;
  *(undefined2 *)((int)puVar54 + -0xe) = uVar358;
  puVar55 = (undefined1 *)((int)puVar54 + -0x10);
  *(undefined2 *)((int)puVar54 + -0x10) = 0x1e9;
  func_0x000032b6();
  uVar358 = *(undefined2 *)0x10d4;
  *(undefined2 *)(puVar55 + 10) = *(undefined2 *)0x38;
  *(undefined2 *)(puVar55 + 8) = *(undefined2 *)0x36;
  *(undefined2 *)(puVar55 + 6) = 0x2b4;
  puVar56 = (undefined2 *)(puVar55 + 4);
  *(undefined2 *)(puVar55 + 4) = 0x1ff;
  func_0x000031a0();
  puVar58 = puVar56 + 2;
  if (*(int *)*(undefined4 *)0x410 != -0x7dec) {
    puVar56[1] = 0x55d;
    *puVar56 = 0x3c;
    puVar56[-1] = unaff_DS;
    puVar56[-2] = 0x7e;
    puVar56[-3] = 0x2b4;
    puVar57 = puVar56 + -4;
    puVar56[-4] = 0x21e;
    FUN_1000_17f8();
    puVar58 = (undefined2 *)((int)puVar57 + 0xc);
  }
  *(uint *)((int)puVar58 + -2) = unaff_DS;
  *(undefined2 *)((int)puVar58 + -4) = 0xb9;
  *(undefined2 *)((int)puVar58 + -6) = 0x55d;
  *(undefined2 *)((int)puVar58 + -8) = 2;
  *(undefined2 *)((int)puVar58 + -10) = 0x2b4;
  uVar358 = 0x2b4;
  puVar59 = (undefined2 *)((int)puVar58 + -0xc);
  *(undefined2 *)((int)puVar58 + -0xc) = 0x233;
  uVar15 = func_0x0000329a();
  puVar339 = (uint *)ZEXT24(puVar59 + 4);
  uVar357 = *(undefined2 *)0x10d4;
  *(undefined2 *)0x36 = uVar15;
  iVar359 = (int)in_EDX;
  *(int *)0x38 = iVar359;
  if (iVar359 != 0 || *(int *)0x36 != 0) {
    puVar59[3] = iVar359;
    puVar59[2] = *(undefined2 *)0x36;
    puVar59[1] = 0xffff;
    *puVar59 = 1;
    puVar59[-1] = 0x565;
    puVar59[-2] = 0;
    puVar59[-3] = 0x2b4;
    puVar60 = puVar59 + -4;
    puVar59[-4] = 0x26a;
    func_0x000032b6();
    uVar358 = *(undefined2 *)0x10d4;
    *(undefined2 *)((int)puVar60 + 10) = *(undefined2 *)0x38;
    *(undefined2 *)((int)puVar60 + 8) = *(undefined2 *)0x36;
    *(undefined2 *)((int)puVar60 + 6) = 0x2b4;
    piVar61 = (int *)((int)puVar60 + 4);
    *(undefined2 *)((int)puVar60 + 4) = 0x280;
    func_0x000031a0();
    *(undefined2 *)0x11c0 = *(undefined2 *)((int)*(undefined4 *)0x414 + 0xc);
    *(undefined2 *)0x11c2 = 0x565;
    iVar359 = *(int *)0x410;
    in_EDX = (ulong)*(uint *)0x412;
    piVar61[1] = *(uint *)0x412;
    *piVar61 = iVar359 + 0x20;
    piVar61[-1] = *(undefined2 *)0x11c2;
    piVar61[-2] = *(undefined2 *)0x11c0;
    piVar61[-3] = 0x2b4;
    uVar358 = 0x2b4;
    piVar62 = piVar61 + -4;
    piVar61[-4] = 0x2b0;
    iVar359 = func_0x000050b8();
    puVar339 = (uint *)ZEXT24((undefined1 *)((int)piVar62 + 8));
    pcVar17 = (code *)0x0;
    if (iVar359 == 0) {
LAB_1000_02ba:
      if (*(int *)*(undefined4 *)0x414 == -0x7dec) {
        bVar360 = SBORROW2(*(int *)0x70,(int)pcVar17);
        bVar362 = *(int *)0x70 - (int)pcVar17 < 0;
code_r0x000102d1:
        if (bVar360 != bVar362) {
          *(undefined2 *)0x70 = *(undefined2 *)((int)*(undefined4 *)0x11c0 + 0x40);
        }
        if (*(int *)0x0 < 0) {
code_r0x000102ef:
          *(undefined2 *)0x0 = *(undefined2 *)((int)*(undefined4 *)0x11c0 + 0x42);
        }
        if (*(int *)0x74 < 0) {
          *(undefined2 *)0x74 = *(undefined2 *)((int)*(undefined4 *)0x11c0 + 0x44);
        }
        if (*(int *)0x34 < 0) {
          *(undefined2 *)0x34 = *(undefined2 *)((int)*(undefined4 *)0x11c0 + 0x46);
        }
        if (*(int *)0x6e < 0) {
          *(undefined2 *)0x6e = *(undefined2 *)((int)*(undefined4 *)0x11c0 + 0x48);
        }
        if (*(int *)0x76 < 0) {
          *(undefined2 *)0x76 = *(undefined2 *)((int)*(undefined4 *)0x11c0 + 0x4a);
        }
        if (*(int *)0x78 < 0) {
code_r0x0001037b:
          *(undefined2 *)0x78 = *(undefined2 *)((int)*(undefined4 *)0x11c0 + 0x4c);
        }
        if (*(int *)0x72 < 0) {
          *(undefined2 *)0x72 = *(undefined2 *)((int)*(undefined4 *)0x11c0 + 0x4e);
        }
        if (*(int *)0x0 < 0) {
          *(undefined2 *)0x0 = *(undefined2 *)((int)*(undefined4 *)0x11c0 + 0x50);
        }
      }
    }
  }
LAB_1000_03c3:
  uVar26 = *(ulong *)0x410;
  iVar359 = (int)(uVar26 >> 0x10);
  iVar34 = (int)uVar26;
  pbVar38 = (byte *)(uVar26 & 0xffff);
  *(undefined2 *)0x11e4 = *(undefined2 *)(iVar34 + 0x60);
  *(undefined2 *)0x11e6 = 0x1566;
  *(undefined2 *)0x11cc = *(undefined2 *)(iVar34 + 100);
  *(undefined2 *)0x11ce = 0x1566;
  *(undefined2 *)0x11d4 = *(undefined2 *)(iVar34 + 0x68);
  *(undefined2 *)0x11d6 = 0x1566;
  *(undefined2 *)0x11c4 = *(undefined2 *)(iVar34 + 0x6c);
  *(undefined2 *)0x11c6 = 0x1566;
  *(undefined2 *)0x11c8 = *(undefined2 *)(iVar34 + 0x70);
  *(undefined2 *)0x11ca = 0x1566;
  *(undefined2 *)0x11d8 = *(undefined2 *)(iVar34 + 0x74);
  *(undefined2 *)0x11da = 0x1566;
  pcVar27 = (code *)(ulong)*(uint *)(iVar34 + 0x80);
switchD_1000_41c7_caseD_17:
  *(undefined2 *)0x11dc = (code *)pcVar27;
  *(undefined2 *)0x11de = 0x1566;
  *(undefined2 *)0x11e0 = *(undefined2 *)((byte *)pbVar38 + 0x7c);
  *(undefined2 *)0x11e2 = 0x1566;
switchD_1000_0890_default:
  puVar98 = (uint *)puVar339;
  puVar98[-1] = uVar358;
  puVar99 = puVar98 + -2;
  puVar98[-2] = 0x8a6;
  FUN_1000_0982();
  puVar97 = (uint *)((int)puVar99 + 4);
  do {
    pcVar17 = (code *)pcVar345;
    uVar32 = (uint)in_EDX;
    puVar339 = (uint *)ZEXT24(puVar97);
    if ((*(int *)0x418 != 0) || (*(int *)0x41a != 0)) {
      if (*(int *)0x418 == 0) {
        *(undefined2 *)((int)puVar97 + -2) = 0x55d;
        *(undefined2 *)((int)puVar97 + -4) = 2;
        *(uint *)((int)puVar97 + -6) = unaff_DS;
        puVar339 = (uint *)ZEXT24((undefined1 *)((int)puVar97 + -8));
        *(undefined2 *)((int)puVar97 + -8) = 0x3d2;
switchD_1000_4341_caseD_a1:
        puVar100 = (uint *)puVar339;
        puVar100[-1] = uVar358;
        uVar358 = 0x2b4;
        puVar339 = (uint *)ZEXT24(puVar100 + -2);
        puVar100[-2] = 0x8c9;
        func_0x000035c0();
switchD_1000_4341_caseD_3e:
        puVar97 = (uint *)puVar339 + 4;
      }
      *(uint *)((int)puVar97 + -2) = unaff_DS;
      *(undefined2 *)((int)puVar97 + -4) = 0x3fe;
      *(undefined2 *)((int)puVar97 + -6) = uVar358;
      uVar358 = 0x2b4;
      puVar101 = (undefined1 *)((int)puVar97 + -8);
      *(undefined2 *)((int)puVar97 + -8) = 0x8d6;
      uVar16 = func_0x00005152();
      puVar113 = puVar101 + 4;
      puVar339 = (uint *)ZEXT24(puVar101 + 4);
      *(uint *)(pcVar17 + -6) = uVar16;
      *(uint *)(pcVar17 + -4) = uVar32;
      uVar32 = uVar32 | uVar16;
      if (uVar32 == 0) goto LAB_1000_0971;
LAB_1000_08e6:
      puVar102 = (uint *)puVar339;
      puVar102[-1] = unaff_DS;
      puVar102[-2] = 0x403;
      puVar102[-3] = *(undefined2 *)(pcVar17 + -4);
      puVar102[-4] = *(undefined2 *)(pcVar17 + -6);
      puVar102[-5] = uVar358;
      puVar103 = puVar102 + -6;
      puVar102[-6] = 0x8f6;
      iVar359 = func_0x000053b8();
      puVar106 = puVar103 + 4;
      *(int *)(pcVar17 + -10) = iVar359;
      *(uint *)(pcVar17 + -8) = uVar32;
      bVar360 = uVar32 == 0;
      uVar32 = 0;
      if (bVar360 && iVar359 == 0) {
LAB_1000_0928:
        uVar358 = 0x2b4;
        pcVar27 = (code *)0x409;
        puVar339 = (uint *)ZEXT24((undefined1 *)((int)puVar106 + -2));
        *(uint *)((int)puVar106 + -2) = unaff_DS;
switchD_1000_4341_caseD_90:
        puVar107 = (uint *)puVar339;
        puVar107[-1] = (uint)(code *)pcVar27;
        puVar107[-2] = *(undefined2 *)(pcVar17 + -4);
        puVar107[-3] = *(undefined2 *)(pcVar17 + -6);
        puVar107[-4] = uVar358;
        puVar108 = puVar107 + -5;
        puVar107[-5] = 0x938;
        iVar359 = func_0x000053b8();
        puVar110 = puVar108 + 4;
        *(int *)(pcVar17 + -10) = iVar359;
        *(uint *)(pcVar17 + -8) = uVar32;
        if (uVar32 != 0 || iVar359 != 0) {
          puVar108[3] = unaff_SS;
          puVar108[2] = (uint)(pcVar17 + -2);
          puVar108[1] = unaff_DS;
          *puVar108 = 0x40c;
          iVar359 = *(int *)(pcVar17 + -10);
          puVar108[-1] = *(undefined2 *)(pcVar17 + -8);
          puVar108[-2] = iVar359 + 2;
          puVar108[-3] = 0x2b4;
          puVar109 = puVar108 + -4;
          puVar108[-4] = 0x95e;
          iVar359 = func_0x00005302();
          puVar105 = (undefined1 *)((int)puVar109 + 0xc);
          puVar110 = (undefined2 *)((int)puVar109 + 0xc);
          if (iVar359 != 0) goto LAB_1000_0923;
        }
        puVar111 = (undefined1 *)((int)puVar110 + -2);
        *(undefined2 *)((int)puVar110 + -2) = 0x7f;
      }
      else {
        puVar103[3] = unaff_SS;
        puVar103[2] = (uint)(pcVar17 + -2);
        puVar103[1] = unaff_DS;
        *puVar103 = 0x406;
        iVar359 = *(int *)(pcVar17 + -10);
        uVar32 = *(uint *)(pcVar17 + -8);
        puVar103[-1] = uVar32;
        puVar103[-2] = iVar359 + 2;
        puVar103[-3] = 0x2b4;
        puVar104 = puVar103 + -4;
        puVar103[-4] = 0x91c;
        iVar359 = func_0x00005302();
        puVar105 = (undefined1 *)((int)puVar104 + 0xc);
        puVar106 = (undefined2 *)((int)puVar104 + 0xc);
        if (iVar359 == 0) goto LAB_1000_0928;
LAB_1000_0923:
        puVar111 = puVar105 + -2;
        *(undefined2 *)(puVar105 + -2) = *(undefined2 *)(pcVar17 + -2);
      }
      *(undefined2 *)(puVar111 + -2) = 0x2b4;
      puVar112 = puVar111 + -4;
      *(undefined2 *)(puVar111 + -4) = 0x96e;
      func_0x00002b54();
      puVar113 = puVar112 + 2;
LAB_1000_0971:
      *(undefined2 *)(puVar113 + -2) = 0;
      *(undefined2 *)(puVar113 + -4) = 0x2b4;
      *(undefined2 *)(puVar113 + -6) = 0x979;
      pcVar17 = (code *)func_0x00002d41();
      return pcVar17;
    }
    uVar357 = *(undefined2 *)0x11e2;
    *(int *)(pcVar17 + -0x28) = *(int *)0x70 * 0x44 + *(int *)0x11e0 + 4;
    *(undefined2 *)(pcVar17 + -0x26) = uVar357;
    uVar357 = *(undefined2 *)0x11de;
    *(int *)(pcVar17 + -0x14) = *(int *)0x0 * 0x42 + *(int *)0x11dc + 2;
    *(undefined2 *)(pcVar17 + -0x12) = uVar357;
    if (*(int *)0x0 == 0) {
      *(undefined2 *)(pcVar17 + -0x24) = 0xde;
    }
    else {
      *(undefined2 *)(pcVar17 + -0x24) = 0xbc;
    }
    *(uint *)(pcVar17 + -0x22) = unaff_DS;
    pbVar38 = (byte *)(ulong)(uint)(*(int *)0x74 * 2);
    iVar359 = (int)((ulong)*(undefined4 *)0x11e4 >> 0x10);
    pcVar346 = (code *)(code *)*(undefined4 *)0x11e4;
    if (*(int *)(pcVar346 + *(int *)0x74 * 2) == 0) {
      *(uint *)((int)puVar97 + -2) = unaff_DS;
      *(undefined2 *)((int)puVar97 + -4) = 0x11a;
      *(undefined2 *)((int)puVar97 + -6) = unaff_SS;
      *(int *)((int)puVar97 + -8) = (int)(pcVar17 + -0x68);
      *(undefined2 *)((int)puVar97 + -10) = uVar358;
      puVar66 = (undefined1 *)((int)puVar97 + -0xc);
      *(undefined2 *)((int)puVar97 + -0xc) = 0x4e5;
      func_0x00005082();
      puVar65 = puVar66 + 8;
    }
    else {
code_r0x000104bf:
      puVar63 = (uint *)puVar339;
      puVar63[-1] = *(undefined2 *)((byte *)pbVar38 + (int)pcVar346);
      puVar63[-2] = unaff_DS;
      puVar63[-3] = 0xfe;
      puVar63[-4] = unaff_SS;
      puVar63[-5] = (uint)((code *)pcVar345 + -0x68);
      puVar63[-6] = uVar358;
      puVar64 = puVar63 + -7;
      puVar63[-7] = 0x4d1;
      func_0x00005296();
      puVar65 = (undefined1 *)((int)puVar64 + 10);
    }
    uVar358 = 0x2b4;
    puVar339 = (uint *)ZEXT24(puVar65);
    pcVar17 = (code *)pcVar345;
    *(code **)(pcVar17 + -0x18) = pcVar17 + -0x68;
    *(undefined2 *)(pcVar17 + -0x16) = unaff_SS;
    if (*(int *)((int)*(undefined4 *)0x410 + 2) == 1) {
      *(undefined2 *)(pcVar17 + -0x10) = 0x11f;
      *(uint *)(pcVar17 + -0xe) = unaff_DS;
      *(undefined2 *)(puVar65 + -2) = *(undefined2 *)(*(int *)0x72 * 2 + (int)*(undefined4 *)0x11d8)
      ;
      iVar359 = *(int *)0x78;
      uVar358 = (undefined2)((ulong)*(undefined4 *)0x11c8 >> 0x10);
      iVar34 = (int)*(undefined4 *)0x11c8;
      *(undefined2 *)(puVar65 + -4) = *(undefined2 *)(iVar359 * 4 + iVar34 + 2);
      *(undefined2 *)(puVar65 + -6) = *(undefined2 *)(iVar359 * 4 + iVar34);
      iVar359 = *(int *)0x76;
      uVar358 = (undefined2)((ulong)*(undefined4 *)0x11c4 >> 0x10);
      iVar34 = (int)*(undefined4 *)0x11c4;
      *(undefined2 *)(puVar65 + -8) = *(undefined2 *)(iVar359 * 4 + iVar34 + 2);
      *(undefined2 *)(puVar65 + -10) = *(undefined2 *)(iVar359 * 4 + iVar34);
      *(undefined2 *)(puVar65 + -0xc) =
           *(undefined2 *)(*(int *)0x6e * 2 + (int)*(undefined4 *)0x11d4);
      *(uint *)(puVar65 + -0xe) = unaff_DS;
      *(undefined2 *)(puVar65 + -0x10) = 0x128;
      *(undefined2 *)(puVar65 + -0x12) = unaff_SS;
      *(code **)(puVar65 + -0x14) = pcVar17 + -0xa8;
      *(undefined2 *)(puVar65 + -0x16) = 0x2b4;
      puVar67 = puVar65 + -0x18;
      *(undefined2 *)(puVar65 + -0x18) = 0x568;
      func_0x00005296();
      puVar68 = puVar67 + 0x14;
    }
    else {
      *(undefined2 *)(pcVar17 + -0x10) = 0x158;
      *(uint *)(pcVar17 + -0xe) = unaff_DS;
      if (*(int *)0x6e < 0) {
        if (*(int *)0x78 < 0) {
          pbVar38 = (byte *)(ulong)(uint)(*(int *)0x76 << 2);
          iVar359 = (int)(*(ulong *)0x11c4 >> 0x10);
          in_ESI = (code *)(*(ulong *)0x11c4 & 0xffff);
switchD_1000_4341_caseD_da:
          puVar78 = (uint *)puVar339;
          puVar78[-1] = *(undefined2 *)((byte *)pbVar38 + (int)(code *)in_ESI + 2);
          puVar79 = puVar78 + -2;
          puVar78[-2] = *(undefined2 *)((byte *)pbVar38 + (int)(code *)in_ESI);
          pcVar17 = (code *)0x1fc;
code_r0x000106cb:
          *(uint *)((int)puVar79 + -2) = unaff_DS;
          *(undefined2 *)((int)puVar79 + -4) = pcVar17;
          *(undefined2 *)((int)puVar79 + -6) = unaff_SS;
          *(int *)((int)puVar79 + -8) = (int)((code *)pcVar345 + -0xa8);
          *(undefined2 *)((int)puVar79 + -10) = uVar358;
          puVar80 = (undefined1 *)((int)puVar79 + -0xc);
          *(undefined2 *)((int)puVar79 + -0xc) = 0x6d8;
          func_0x00005296();
          puVar68 = puVar80 + 0xc;
        }
        else {
          pbVar38 = (byte *)(ulong)(uint)(*(int *)0x78 * 4);
          uVar26 = *(ulong *)0x11c8;
          iVar359 = (int)(uVar26 >> 0x10);
          in_ESI = (code *)(uVar26 & 0xffff);
          puVar74 = puVar65 + -2;
          *(undefined2 *)(puVar65 + -2) = *(undefined2 *)(*(int *)0x78 * 4 + (int)uVar26 + 2);
code_r0x0001067f:
          puVar75 = puVar74 + -2;
          *(undefined2 *)(puVar74 + -2) = *(undefined2 *)((byte *)pbVar38 + (int)(code *)in_ESI);
          pbVar38 = (byte *)(ulong)*(uint *)0x76;
code_r0x0001068b:
          iVar34 = (int)(byte *)pbVar38 * 4;
          uVar357 = (undefined2)((ulong)*(undefined4 *)0x11c4 >> 0x10);
          iVar359 = (int)*(undefined4 *)0x11c4;
          *(undefined2 *)(puVar75 + -2) = *(undefined2 *)(iVar34 + iVar359 + 2);
          puVar339 = (uint *)ZEXT24(puVar75 + -4);
          *(undefined2 *)(puVar75 + -4) = *(undefined2 *)(iVar34 + iVar359);
switchD_1000_4341_caseD_4f:
          puVar76 = (uint *)puVar339;
          puVar76[-1] = unaff_DS;
          puVar76[-2] = 0x1cf;
          puVar76[-3] = unaff_SS;
          puVar76[-4] = (uint)((code *)pcVar345 + -0xa8);
          puVar76[-5] = uVar358;
          puVar77 = puVar76 + -6;
          puVar76[-6] = 0x6aa;
          func_0x00005296();
          puVar68 = (undefined1 *)((int)puVar77 + 0x10);
        }
      }
      else if ((*(int *)0x76 < 0) || (*(int *)0x78 < 0)) {
        if (*(int *)0x76 < 0) {
LAB_1000_063a:
          pbVar38 = (byte *)(ulong)(uint)(*(int *)0x6e << 1);
          iVar359 = (int)(*(ulong *)0x11d4 >> 0x10);
          in_ESI = (code *)(*(ulong *)0x11d4 & 0xffff);
code_r0x00010649:
          puVar71 = (uint *)puVar339;
          puVar339 = (uint *)ZEXT24(puVar71 + -1);
          puVar71[-1] = *(undefined2 *)((byte *)pbVar38 + (int)(code *)in_ESI);
          pcVar27 = (code *)0x1bb;
code_r0x0001064f:
          puVar72 = (uint *)puVar339;
          puVar72[-1] = unaff_DS;
          puVar72[-2] = (uint)(code *)pcVar27;
          puVar72[-3] = unaff_SS;
          puVar72[-4] = (uint)((code *)pcVar345 + -0xa8);
          puVar72[-5] = uVar358;
          puVar73 = puVar72 + -6;
          puVar72[-6] = 0x65c;
          func_0x00005296();
          puVar68 = (undefined1 *)((int)puVar73 + 10);
        }
        else {
          iVar359 = *(int *)0x76;
          uVar358 = (undefined2)((ulong)*(undefined4 *)0x11c4 >> 0x10);
          iVar34 = (int)*(undefined4 *)0x11c4;
          *(undefined2 *)(puVar65 + -2) = *(undefined2 *)(iVar359 * 4 + iVar34 + 2);
          *(undefined2 *)(puVar65 + -4) = *(undefined2 *)(iVar359 * 4 + iVar34);
          *(undefined2 *)(puVar65 + -6) =
               *(undefined2 *)(*(int *)0x6e * 2 + (int)*(undefined4 *)0x11d4);
          *(uint *)(puVar65 + -8) = unaff_DS;
          *(undefined2 *)(puVar65 + -10) = 0x18d;
          *(undefined2 *)(puVar65 + -0xc) = unaff_SS;
          *(code **)(puVar65 + -0xe) = pcVar17 + -0xa8;
          *(undefined2 *)(puVar65 + -0x10) = 0x2b4;
          puVar70 = puVar65 + -0x12;
          *(undefined2 *)(puVar65 + -0x12) = 0x634;
          func_0x00005296();
          puVar68 = puVar70 + 0xe;
        }
      }
      else {
        iVar359 = *(int *)0x78;
        uVar358 = (undefined2)((ulong)*(undefined4 *)0x11c8 >> 0x10);
        iVar34 = (int)*(undefined4 *)0x11c8;
        *(undefined2 *)(puVar65 + -2) = *(undefined2 *)(iVar359 * 4 + iVar34 + 2);
        *(undefined2 *)(puVar65 + -4) = *(undefined2 *)(iVar359 * 4 + iVar34);
        iVar359 = *(int *)0x76;
        uVar358 = (undefined2)((ulong)*(undefined4 *)0x11c4 >> 0x10);
        iVar34 = (int)*(undefined4 *)0x11c4;
        *(undefined2 *)(puVar65 + -6) = *(undefined2 *)(iVar359 * 4 + iVar34 + 2);
        *(undefined2 *)(puVar65 + -8) = *(undefined2 *)(iVar359 * 4 + iVar34);
        *(undefined2 *)(puVar65 + -10) =
             *(undefined2 *)(*(int *)0x6e * 2 + (int)*(undefined4 *)0x11d4);
        *(uint *)(puVar65 + -0xc) = unaff_DS;
        *(undefined2 *)(puVar65 + -0xe) = 0x161;
        *(undefined2 *)(puVar65 + -0x10) = unaff_SS;
        *(code **)(puVar65 + -0x12) = pcVar17 + -0xa8;
        *(undefined2 *)(puVar65 + -0x14) = 0x2b4;
        puVar69 = puVar65 + -0x16;
        *(undefined2 *)(puVar65 + -0x16) = 0x5eb;
        func_0x00005296();
        puVar68 = puVar69 + 0x12;
      }
    }
    pcVar17 = (code *)pcVar345;
    *(code **)(pcVar17 + -0x20) = pcVar17 + -0xa8;
    *(undefined2 *)(pcVar17 + -0x1e) = unaff_SS;
    *(undefined2 *)(puVar68 + -2) = *(undefined2 *)(*(int *)0x34 * 2 + (int)*(undefined4 *)0x11cc);
    *(uint *)(puVar68 + -4) = unaff_DS;
    *(undefined2 *)(puVar68 + -6) = 0x215;
    *(undefined2 *)(puVar68 + -8) = unaff_SS;
    *(code **)(puVar68 + -10) = pcVar17 + -0xe8;
    *(undefined2 *)(puVar68 + -0xc) = 0x2b4;
    uVar358 = 0x2b4;
    puVar81 = puVar68 + -0xe;
    *(undefined2 *)(puVar68 + -0xe) = 0x707;
    func_0x00005296();
    pcVar17 = (code *)pcVar345;
    *(code **)(pcVar17 + -0x1c) = pcVar17 + -0xe8;
    *(undefined2 *)(pcVar17 + -0x1a) = unaff_SS;
    *(undefined2 *)(puVar81 + 8) = 0x2b4;
    puVar82 = puVar81 + 6;
    *(undefined2 *)(puVar81 + 6) = 0x718;
    FUN_1000_183e();
    pcVar27 = (code *)0x228;
    puVar339 = (uint *)ZEXT24(puVar82 + 2);
    *(uint *)(puVar82 + 2) = unaff_DS;
switchD_1000_4341_caseD_e7:
    puVar83 = (uint *)puVar339;
    puVar83[-1] = (uint)(code *)pcVar27;
    puVar83[-2] = uVar358;
    puVar84 = puVar83 + -3;
    puVar83[-3] = 0x722;
    func_0x000035c0();
    puVar84[1] = unaff_DS;
    *puVar84 = 0x269;
    puVar84[-1] = 0x2b4;
    puVar85 = puVar84 + -2;
    puVar84[-2] = 0x72f;
    func_0x000035c0();
    puVar85[1] = unaff_DS;
    *puVar85 = 0x2a8;
    puVar85[-1] = 0x2b4;
    piVar86 = puVar85 + -2;
    puVar85[-2] = 0x73c;
    func_0x000035c0();
    iVar359 = *(int *)0x410;
    in_EDX = (ulong)*(uint *)0x412;
    piVar86[1] = *(uint *)0x412;
    *piVar86 = iVar359 + 0x20;
    piVar86[-1] = unaff_DS;
    piVar86[-2] = 0x2b5;
    piVar86[-3] = 0x2b4;
    piVar87 = piVar86 + -4;
    piVar86[-4] = 0x755;
    func_0x000035c0();
    piVar87[3] = unaff_DS;
    piVar87[2] = 0x2cb;
    piVar87[1] = 0x2b4;
    *piVar87 = 0x762;
    func_0x000035c0();
    piVar87[1] = unaff_DS;
    *piVar87 = 0x2de;
    piVar87[-1] = 0x2b4;
    puVar88 = piVar87 + -2;
    piVar87[-2] = 0x76f;
    func_0x000035c0();
    puVar88[1] = *(undefined2 *)((code *)pcVar345 + -0xe);
    *puVar88 = *(undefined2 *)((code *)pcVar345 + -0x10);
    puVar88[-1] = unaff_DS;
    puVar88[-2] = 0x2f1;
    puVar88[-3] = 0x2b4;
    puVar89 = puVar88 + -4;
    puVar88[-4] = 0x782;
    func_0x000035c0();
    puVar89[3] = unaff_DS;
    puVar89[2] = 0x2fe;
    puVar89[1] = 0x2b4;
    *puVar89 = 0x78f;
    func_0x000035c0();
    puVar89[1] = unaff_DS;
    *puVar89 = 0x311;
    puVar89[-1] = 0x2b4;
    puVar90 = puVar89 + -2;
    puVar89[-2] = 0x79c;
    func_0x000035c0();
    puVar90[1] = unaff_DS;
    *puVar90 = 0x324;
    puVar90[-1] = 0x2b4;
    puVar91 = puVar90 + -2;
    puVar90[-2] = 0x7a9;
    func_0x000035c0();
    puVar91[1] = *(undefined2 *)0x3a;
    *puVar91 = unaff_DS;
    puVar91[-1] = 0x338;
    puVar91[-2] = 0x2b4;
    uVar358 = 0x2b4;
    puVar92 = puVar91 + -3;
    puVar91[-3] = 0x7bf;
    func_0x000035c0();
    puVar339 = (uint *)ZEXT24((undefined1 *)((int)puVar92 + 4));
    *(undefined2 *)((int)puVar92 + 4) = 0x19;
    pcVar27 = (code *)0x18;
switchD_1000_4341_caseD_1:
    puVar93 = (uint *)puVar339;
    puVar93[-1] = (uint)(code *)pcVar27;
    puVar93[-2] = unaff_DS;
    puVar93[-3] = 0x36b;
    puVar93[-4] = uVar358;
    puVar94 = puVar93 + -5;
    puVar93[-5] = 0x7d4;
    func_0x000035c0();
    puVar94[3] = unaff_DS;
    puVar94[2] = 0x3ac;
    puVar94[1] = 0x2b4;
    *puVar94 = 0x7e1;
    func_0x000035c0();
    puVar94[1] = unaff_SS;
    *puVar94 = (uint)((code *)pcVar345 + -0x28);
    puVar94[-1] = 6;
    puVar94[-2] = 10;
    puVar94[-3] = 0x11;
    puVar94[-4] = 0x2b4;
    piVar95 = (int *)(puVar94 + -5);
    puVar94[-5] = 0x7fa;
    iVar359 = func_0x0000224a();
    puVar339 = (uint *)ZEXT24((undefined1 *)((int)piVar95 + 10));
    *(int *)((code *)pcVar345 + -2) = iVar359;
    if (-1 < iVar359) goto code_r0x0001088d;
    *(undefined2 *)((int)piVar95 + 8) = 0;
    *(undefined2 *)((int)piVar95 + 6) = 0x1da;
    uVar358 = 0x1da;
    puVar96 = (undefined1 *)((int)piVar95 + 4);
    *(undefined2 *)((int)piVar95 + 4) = 0x80f;
    func_0x00001da6();
    puVar97 = (uint *)(puVar96 + 2);
    *(undefined2 *)0x41a = 1;
  } while( true );
  while( true ) {
    iVar34 = iVar34 + -1;
    pcVar27 = pcVar17;
    pcVar17 = pcVar17 + 1;
    pcVar30 = (code *)ZEXT24(pcVar17);
    bVar360 = *pcVar27 == (code)0x0;
    if (bVar360) break;
code_r0x000144a7:
    pcVar17 = (code *)pcVar30;
    if (iVar34 == 0) break;
  }
  if (bVar360) {
    pcVar17 = pcVar17 + -1;
  }
LAB_1000_44ac:
  puVar339 = (uint *)CONCAT22(uVar357,puVar260 + 1);
  pcVar30 = (code *)(ulong)*puVar260;
  in_ECX = (code *)CONCAT22(uVar358,pcVar17 + -*puVar260);
  goto LAB_1000_4677;
  while( true ) {
    iVar34 = iVar34 + -1;
    pcVar30 = pcVar18;
    pcVar18 = pcVar18 + 1;
    if (*pcVar30 == (code)0x0) break;
code_r0x000145bd:
    if (iVar34 == 0) break;
  }
  puVar339 = (uint *)CONCAT22(uVar357,puVar270);
  pcVar30 = (code *)(ulong)puVar270[-1];
  in_ECX = (code *)CONCAT22(uVar358,pcVar18 + (-1 - puVar270[-1]));
  goto LAB_1000_4677;
code_r0x00014db9:
  pbVar37 = (byte *)pbVar38;
  uVar16 = (uint)in_EDX;
  pcVar20 = (code *)pcVar30;
  pcVar17 = (code *)in_ESI;
  puVar284 = (uint *)puVar339;
  if (bVar361) {
    uVar32 = *puVar284;
    uVar358 = puVar284[1];
    puVar284[1] = uVar358;
    pcVar17 = (code *)*(undefined2 *)((int)*(undefined4 *)0xf6e + 0x12);
    pbVar38 = (byte *)*(undefined4 *)0xf6a;
    uVar16 = (uint)((ulong)pbVar38 >> 0x10);
    pbVar37 = (byte *)pbVar38;
    bVar360 = uVar16 < uVar32;
    unaff_DS = uVar16;
    if (uVar16 == uVar32) {
      uVar358 = puVar284[1];
      puVar284[1] = uVar358;
      bVar360 = pcVar20 < (code *)0x23b8;
      if (pcVar20 == (code *)0x23b8) {
        puVar284[1] = puVar284[1];
        *puVar284 = 0x4dee;
        FUN_1000_4fec();
        puVar285 = (uint *)((int)puVar284 + 2);
        if (bVar360) {
          return (code *)0x0;
        }
        goto LAB_1000_4df0;
      }
      pcVar20 = (code *)0x23b8;
      pcVar17 = (code *)*(undefined2 *)0xf74;
      pbVar38 = (byte *)*(undefined4 *)0xf6e;
      unaff_DS = (uint)((ulong)pbVar38 >> 0x10);
    }
    pbVar37 = (byte *)pbVar38;
    *puVar284 = unaff_DS;
  }
  puVar284[-1] = (uint)pcVar17;
  puVar284[-2] = (uint)pcVar20;
  puVar283 = puVar284 + -3;
  puVar284[-3] = 0x4dae;
  pcVar17 = (code *)(*pcVar20)();
  pcVar30 = (code *)(ulong)*puVar283;
  uVar32 = puVar283[1];
  puVar339 = (uint *)ZEXT24(puVar283 + 2);
  in_ESI = (code *)(ulong)uVar32;
  if (!bVar360) {
    puVar285 = puVar283 + 3;
    puVar286 = puVar283 + 3;
    if (*puVar283 != 0x233c) {
LAB_1000_4df0:
      puVar287 = (undefined1 *)((int)puVar285 + -2);
      *(undefined2 *)((int)puVar285 + -2) = 0x4df3;
      pcVar17 = (code *)FUN_1000_4e70();
      puVar286 = (uint *)(puVar287 + 2);
    }
    uVar358 = *puVar286;
    *(uint *)0xf70 = uVar16;
    *(undefined2 *)0xf6e = pbVar37;
    return pcVar17;
  }
  in_EDX = (ulong)unaff_DS;
  pbVar38 = (byte *)(*(ulong *)(pbVar37 + 0xc) & 0xffff);
  bVar360 = unaff_DS < uVar32;
  bVar361 = unaff_DS == uVar32;
  unaff_DS = (uint)(*(ulong *)(pbVar37 + 0xc) >> 0x10);
  goto code_r0x00014db9;
switchD_1000_4341_caseD_ad:
  pbVar38 = (byte *)((ulong)uVar16 << 0x10);
  in_EDX = in_EDX & 0xffff;
  in_ESI = (code *)CONCAT22(uVar15,pcVar346 + 2);
  *(code **)(pcVar346 + 0xd) = pcVar346 + 2 + *(int *)(pcVar346 + 0xd);
code_r0x00014694:
  ((code *)pcVar345)[-0xe] = (code)0x2b;
  *(undefined2 *)((code *)pcVar345 + -0x10) = 1;
  goto LAB_1000_46ae;
switchD_1000_4341_caseD_4d:
  pcVar17 = (code *)in_ESI;
  puVar223 = (uint *)puVar339;
  puVar223[-1] = *(undefined2 *)(byte *)pbVar38;
  puVar223[-2] = (uint)(code *)pcVar30;
  puVar223[-3] = unaff_DS;
  puVar223[-4] = 0xc6d;
  puVar223[-5] = 0x1000;
  puVar224 = puVar223 + -6;
  puVar223[-6] = 0x2b0f;
  FUN_1000_1eb2();
  puVar221 = (undefined1 *)((int)puVar224 + 0xe);
  pcVar17 = pcVar17 + 1;
LAB_1000_2b13:
  in_ESI = (code *)ZEXT24(pcVar17);
  pcVar20 = (code *)pcVar345;
  if ((*(int *)(pcVar20 + 10) + *(int *)(pcVar20 + -0xc) <= (int)pcVar17) ||
     (*(int *)(pcVar20 + 0xc) <= (int)pcVar17)) {
    do {
      *(undefined2 *)((code *)pcVar345 + -0xe) = 0xffff;
      puVar36 = (undefined2 *)puVar221;
LAB_1000_295f:
      do {
        while( true ) {
          while( true ) {
            while( true ) {
              pcVar17 = (code *)pcVar345;
              if (*(int *)(pcVar17 + -0x14) != 0) {
                *(undefined2 *)((int)puVar36 + -2) = 0x1000;
                *(undefined2 *)((int)puVar36 + -4) = 0x2b24;
                FUN_1000_21bc();
                *(code *)0xc30 = pcVar17[-4];
                if (*(int *)(pcVar17 + -0x14) != 1) {
                  return (code *)0xffff;
                }
                return *(code **)(pcVar17 + -8);
              }
              if (*(int *)(pcVar17 + -0xe) != *(int *)(pcVar17 + -8)) {
                if (-1 < *(int *)(pcVar17 + -0xe)) {
                  *(undefined2 *)((int)puVar36 + -2) = *(undefined2 *)(pcVar17 + -6);
                  *(undefined2 *)((int)puVar36 + -4) = *(undefined2 *)(pcVar17 + -10);
                  *(undefined2 *)((int)puVar36 + -6) = 0x1000;
                  puVar212 = (uint *)((int)puVar36 + -8);
                  *(undefined2 *)((int)puVar36 + -8) = 0x2983;
                  FUN_1000_2046();
                  pcVar17 = (code *)pcVar345;
                  puVar212[3] = (*(int *)(pcVar17 + 8) - *(int *)(pcVar17 + -0xc)) +
                                *(int *)(pcVar17 + -0xe);
                  puVar212[2] = *(undefined2 *)(pcVar17 + 6);
                  puVar212[1] = 0x1000;
                  *puVar212 = 0x2997;
                  FUN_1000_1dee();
                  pcVar17 = (code *)pcVar345;
                  puVar36 = (undefined2 *)(*(int *)(pcVar17 + -0xe) * 4 + *(int *)(pcVar17 + 0xe));
                  uVar358 = *(undefined2 *)(pcVar17 + 0x10);
                  puVar212[3] = puVar36[1];
                  puVar212[2] = *puVar36;
                  puVar212[1] = (uint)(code *)pcVar30;
                  *puVar212 = unaff_DS;
                  puVar212[-1] = 0xc5e;
                  puVar212[-2] = 0x1000;
                  puVar213 = puVar212 + -3;
                  puVar212[-3] = 0x29b8;
                  FUN_1000_1eb2();
                  puVar36 = (undefined2 *)((int)puVar213 + 0xe);
                }
                *(undefined2 *)((int)puVar36 + -2) = *(undefined2 *)((code *)pcVar345 + -10);
                *(undefined2 *)((int)puVar36 + -4) = *(undefined2 *)((code *)pcVar345 + -6);
                *(undefined2 *)((int)puVar36 + -6) = 0x1000;
                puVar214 = (uint *)((int)puVar36 + -8);
                *(undefined2 *)((int)puVar36 + -8) = 0x29c5;
                FUN_1000_2046();
                pcVar17 = (code *)pcVar345;
                puVar214[3] = (*(int *)(pcVar17 + 8) - *(int *)(pcVar17 + -0xc)) +
                              *(int *)(pcVar17 + -8);
                puVar214[2] = *(undefined2 *)(pcVar17 + 6);
                puVar214[1] = 0x1000;
                *puVar214 = 0x29d9;
                FUN_1000_1dee();
                pcVar17 = (code *)pcVar345;
                puVar36 = (undefined2 *)(*(int *)(pcVar17 + -8) * 4 + *(int *)(pcVar17 + 0xe));
                uVar358 = *(undefined2 *)(pcVar17 + 0x10);
                puVar214[3] = puVar36[1];
                puVar214[2] = *puVar36;
                puVar214[1] = (uint)(code *)pcVar30;
                *puVar214 = unaff_DS;
                puVar214[-1] = 0xc63;
                puVar214[-2] = 0x1000;
                puVar215 = puVar214 + -3;
                puVar214[-3] = 0x29fa;
                FUN_1000_1eb2();
                puVar36 = (undefined2 *)((int)puVar215 + 0xe);
                *(undefined2 *)((code *)pcVar345 + -0xe) = *(undefined2 *)((code *)pcVar345 + -8);
              }
              *(undefined2 *)((int)puVar36 + -2) = 0x1000;
              puVar216 = (undefined2 *)((int)puVar36 + -4);
              *(undefined2 *)((int)puVar36 + -4) = 0x2a07;
              iVar359 = FUN_1000_222a();
              pcVar17 = (code *)pcVar345;
              if (iVar359 != 0xd) break;
              *(undefined2 *)(pcVar17 + -0x14) = 1;
              puVar36 = puVar216 + 2;
            }
            if (iVar359 != 0x1b) break;
            *(undefined2 *)(pcVar17 + -0x14) = 2;
            puVar36 = puVar216 + 2;
          }
          if (iVar359 == 0x148) break;
          puVar36 = puVar216 + 2;
          if (iVar359 == 0x150) {
            iVar359 = *(int *)(pcVar17 + 0xc);
            *(int *)(pcVar17 + -8) = *(int *)(pcVar17 + -8) + 1;
            if (iVar359 + -1 < *(int *)(pcVar17 + -8)) {
              *(int *)(pcVar17 + -8) = iVar359 + -1;
            }
            puVar36 = puVar216 + 2;
            if (*(int *)(pcVar17 + 10) <= *(int *)(pcVar17 + -8) - *(int *)(pcVar17 + -0xc)) {
              puVar216[1] = *(undefined2 *)(pcVar17 + -6);
              *puVar216 = *(undefined2 *)(pcVar17 + -10);
              puVar216[-1] = 0x1000;
              puVar220 = puVar216 + -2;
              puVar216[-2] = 0x2acf;
              FUN_1000_2046();
              puVar221 = (undefined1 *)((int)puVar220 + 8);
              pcVar27 = (code *)pcVar345 + -0xc;
              *(int *)pcVar27 = *(int *)pcVar27 + 1;
              pcVar17 = *(code **)((code *)pcVar345 + -0xc);
              goto LAB_1000_2b13;
            }
          }
        }
        pcVar27 = pcVar17 + -8;
        *(int *)pcVar27 = *(int *)pcVar27 + -1;
        if (*(int *)pcVar27 < 0) {
          *(undefined2 *)(pcVar17 + -8) = 0;
        }
        puVar36 = puVar216 + 2;
      } while (*(int *)(pcVar17 + -0xc) <= *(int *)(pcVar17 + -8));
      puVar216[1] = *(undefined2 *)(pcVar17 + -6);
      *puVar216 = *(undefined2 *)(pcVar17 + -10);
      puVar216[-1] = 0x1000;
      puVar217 = puVar216 + -2;
      puVar216[-2] = 0x2a51;
      FUN_1000_2046();
      puVar221 = (undefined1 *)((int)puVar217 + 8);
      pcVar27 = (code *)pcVar345 + -0xc;
      *(int *)pcVar27 = *(int *)pcVar27 + -1;
      for (iVar359 = *(int *)((code *)pcVar345 + -0xc);
          (pcVar17 = (code *)pcVar345, iVar359 < *(int *)(pcVar17 + 10) + *(int *)(pcVar17 + -0xc)
          && (iVar359 < *(int *)(pcVar17 + 0xc))); iVar359 = iVar359 + 1) {
        *(int *)(puVar221 + -2) = (*(int *)(pcVar17 + 8) - *(int *)(pcVar17 + -0xc)) + iVar359;
        *(undefined2 *)(puVar221 + -4) = *(undefined2 *)(pcVar17 + 6);
        *(undefined2 *)(puVar221 + -6) = 0x1000;
        puVar218 = (uint *)(puVar221 + -8);
        *(undefined2 *)(puVar221 + -8) = 0x2a71;
        FUN_1000_1dee();
        puVar36 = (undefined2 *)(iVar359 * 4 + *(int *)((code *)pcVar345 + 0xe));
        uVar358 = *(undefined2 *)((code *)pcVar345 + 0x10);
        puVar218[3] = puVar36[1];
        puVar218[2] = *puVar36;
        puVar218[1] = (uint)(code *)pcVar30;
        *puVar218 = unaff_DS;
        puVar218[-1] = 0xc68;
        puVar218[-2] = 0x1000;
        puVar219 = puVar218 + -3;
        puVar218[-3] = 0x2a91;
        FUN_1000_1eb2();
        puVar221 = (undefined1 *)((int)puVar219 + 0xe);
      }
    } while( true );
  }
  *(code **)(puVar221 + -2) = pcVar17 + (*(int *)(pcVar20 + 8) - *(int *)(pcVar20 + -0xc));
  *(undefined2 *)(puVar221 + -4) = *(undefined2 *)(pcVar20 + 6);
  *(undefined2 *)(puVar221 + -6) = 0x1000;
  puVar222 = puVar221 + -8;
  *(undefined2 *)(puVar221 + -8) = 0x2aef;
  FUN_1000_1dee();
  uVar16 = (int)(code *)in_ESI * 4 + *(int *)((code *)pcVar345 + 0xe);
  pbVar38 = (byte *)(ulong)uVar16;
  iVar359 = *(int *)((code *)pcVar345 + 0x10);
  puVar339 = (uint *)ZEXT24(puVar222 + 6);
  *(undefined2 *)(puVar222 + 6) = *(undefined2 *)(uVar16 + 2);
  goto switchD_1000_4341_caseD_4d;
switchD_1000_4341_caseD_28:
  puVar229 = (uint *)puVar339;
  puVar229[-1] = 0x1000;
  puVar230 = puVar229 + -2;
  puVar229[-2] = 0x33f0;
  iVar34 = FUN_1000_35f8();
  pcVar17 = (code *)pcVar345;
  uVar358 = *(undefined2 *)((int)puVar230 + 8);
  iVar359 = *(int *)((int)puVar230 + 10);
  puVar176 = (undefined1 *)*(int *)((int)puVar230 + 0xc);
  puVar231 = (undefined1 *)((int)puVar230 + 0xe);
  if (iVar34 == -1) {
LAB_1000_3412:
    return (code *)(*(int *)(pcVar17 + -2) - iVar359);
  }
  *puVar176 = (char)iVar34;
  puVar176 = puVar176 + 1;
  uVar16 = iVar359 - 1;
  *(uint *)(pcVar17 + -4) = *(uint *)((code *)pcVar30 + 2);
  while( true ) {
    while( true ) {
      pcVar17 = (code *)pcVar345;
      iVar359 = 0;
      if (uVar16 == 0) goto LAB_1000_3412;
      pcVar20 = (code *)in_ESI;
      if (((((byte)pcVar20[10] & 0xc) == 0) && (((byte)*(code *)pcVar30 & 1) == 0)) ||
         (uVar32 = *(uint *)(pcVar20 + 4), uVar32 == 0)) break;
      if (uVar16 < uVar32) {
        uVar32 = uVar16;
      }
      *(uint *)(puVar231 + -2) = uVar32;
      *(undefined1 **)(puVar231 + -4) = puVar176;
      *(uint *)(puVar231 + -6) = uVar16;
      *(undefined2 *)(puVar231 + -8) = uVar358;
      *(uint *)(puVar231 + -10) = uVar32;
      *(uint *)(puVar231 + -0xc) = *(uint *)(pcVar20 + 2);
      *(uint *)(puVar231 + -0xe) = *(uint *)pcVar20;
      *(undefined2 *)(puVar231 + -0x10) = uVar358;
      *(undefined1 **)(puVar231 + -0x12) = puVar176;
      *(undefined2 *)(puVar231 + -0x14) = 0x1000;
      puVar227 = puVar231 + -0x16;
      *(undefined2 *)(puVar231 + -0x16) = 0x339c;
      FUN_1000_5414();
      uVar358 = *(undefined2 *)(puVar227 + 0xe);
      iVar359 = *(int *)(puVar227 + 0x12);
      iVar34 = *(int *)(puVar227 + 0x14);
      puVar231 = puVar227 + 0x16;
      uVar16 = *(int *)(puVar227 + 0x10) - iVar34;
      pcVar27 = (code *)in_ESI + 4;
      *(uint *)pcVar27 = *(uint *)pcVar27 - iVar34;
      puVar176 = (undefined1 *)(iVar359 + iVar34);
      pcVar27 = (code *)in_ESI;
      *(uint *)pcVar27 = *(uint *)pcVar27 + iVar34;
    }
    if (uVar16 < *(uint *)(pcVar17 + -4)) break;
    uVar32 = *(uint *)(pcVar17 + -4);
    *(undefined1 **)(puVar231 + -2) = puVar176;
    *(uint *)(puVar231 + -4) = uVar16;
    *(undefined2 *)(puVar231 + -6) = uVar358;
    *(uint *)(puVar231 + -8) = uVar16 - uVar16 % uVar32;
    *(undefined2 *)(puVar231 + -10) = uVar358;
    *(undefined1 **)(puVar231 + -0xc) = puVar176;
    *(uint *)(puVar231 + -0xe) = (uint)(byte)pcVar20[0xb];
    *(undefined2 *)(puVar231 + -0x10) = 0x1000;
    puVar228 = puVar231 + -0x12;
    *(undefined2 *)(puVar231 + -0x12) = 0x33d2;
    iVar34 = FUN_1000_4af8();
    pcVar17 = (code *)pcVar345;
    uVar358 = *(undefined2 *)(puVar228 + 10);
    iVar359 = *(int *)(puVar228 + 0xc);
    puVar231 = puVar228 + 0x10;
    if (iVar34 == 0) {
      pcVar345 = (code *)in_ESI + 10;
      *pcVar345 = (code)((byte)*pcVar345 | 0x10);
      goto LAB_1000_3412;
    }
    if (iVar34 == -1) {
      pcVar345 = (code *)in_ESI + 10;
      *pcVar345 = (code)((byte)*pcVar345 | 0x20);
      goto LAB_1000_3412;
    }
    uVar16 = iVar359 - iVar34;
    puVar176 = (undefined1 *)(*(int *)(puVar228 + 0xe) + iVar34);
  }
  *(undefined1 **)(puVar231 + -2) = puVar176;
  *(uint *)(puVar231 + -4) = uVar16;
  *(undefined2 *)(puVar231 + -6) = uVar358;
  *(uint *)(puVar231 + -8) = unaff_DS;
  puVar339 = (uint *)ZEXT24(puVar231 + -10);
  *(code **)(puVar231 + -10) = pcVar20;
  goto switchD_1000_4341_caseD_28;
LAB_1000_2e93:
  do {
    pcVar353 = pcVar347;
    if (iVar359 != 0) {
      iVar359 = iVar359 + -1;
      pcVar351 = pcVar347;
      pcVar347 = pcVar347 + 1;
      pcVar353 = pcVar347;
      if (*pcVar351 != '\0') goto LAB_1000_2e93;
    }
    pcVar347 = pcVar353 + 1;
  } while (*pcVar353 != '\0');
  pcVar353 = pcVar353 + 3;
  *(undefined2 *)0xcd9 = pcVar353;
  uVar16 = 0xffff;
  do {
    if (uVar16 == 0) break;
    uVar16 = uVar16 - 1;
    pcVar351 = pcVar353;
    pcVar353 = pcVar353 + 1;
  } while (*pcVar351 != '\0');
  uVar16 = ~uVar16;
LAB_1000_2ea7:
  iVar359 = 1;
  pcVar347 = (char *)0x81;
  uVar358 = *(undefined2 *)0xcb2;
LAB_1000_2eb1:
  do {
    do {
      pcVar351 = pcVar347;
      pcVar347 = pcVar347 + 1;
      cVar10 = *pcVar351;
    } while (cVar10 == ' ');
  } while (cVar10 == '\t');
  if ((cVar10 != '\r') && (cVar10 != '\0')) {
    iVar359 = iVar359 + 1;
    do {
      pcVar347 = pcVar347 + -1;
LAB_1000_2ec4:
      pcVar351 = pcVar347;
      pcVar347 = pcVar347 + 1;
      cVar10 = *pcVar351;
      if ((cVar10 == ' ') || (cVar10 == '\t')) goto LAB_1000_2eb1;
      if ((cVar10 == '\r') || (cVar10 == '\0')) break;
      if (cVar10 == '\"') {
LAB_1000_2efd:
        do {
          while( true ) {
            while( true ) {
              pcVar351 = pcVar347;
              pcVar347 = pcVar347 + 1;
              cVar10 = *pcVar351;
              if ((cVar10 == '\r') || (cVar10 == '\0')) goto LAB_1000_2f2d;
              if (cVar10 == '\"') goto LAB_1000_2ec4;
              if (cVar10 == '\\') break;
              uVar16 = uVar16 + 1;
            }
            uVar32 = 0;
            do {
              pcVar353 = pcVar347;
              uVar32 = uVar32 + 1;
              pcVar347 = pcVar353 + 1;
            } while (*pcVar353 == '\\');
            if (*pcVar353 == '\"') break;
            uVar16 = uVar16 + uVar32;
            pcVar347 = pcVar353;
          }
          uVar16 = uVar16 + (uVar32 >> 1) + (uint)((uVar32 & 1) != 0);
        } while ((uVar32 & 1) != 0);
        goto LAB_1000_2ec4;
      }
      if (cVar10 != '\\') {
        uVar16 = uVar16 + 1;
        goto LAB_1000_2ec4;
      }
      uVar32 = 0;
      do {
        uVar32 = uVar32 + 1;
        pcVar351 = pcVar347;
        pcVar347 = pcVar347 + 1;
      } while (*pcVar351 == '\\');
      if (*pcVar351 == '\"') {
        uVar16 = uVar16 + (uVar32 >> 1) + (uint)((uVar32 & 1) != 0);
        if ((uVar32 & 1) == 0) goto LAB_1000_2efd;
        goto LAB_1000_2ec4;
      }
      uVar16 = uVar16 + uVar32;
    } while( true );
  }
LAB_1000_2f2d:
  puVar226 = (uint *)puVar339;
  puVar226[-1] = unaff_SS;
  uVar357 = puVar226[-1];
  *(int *)0xccf = iVar359;
  iVar34 = (iVar359 + 1) * 4;
  iVar359 = -(uVar16 + iVar359 + iVar34 + 1 & 0xfffe);
  *(int *)0xcd1 = (int)puVar226 + iVar359;
  *(undefined2 *)0xcd3 = unaff_SS;
  pcVar347 = (char *)((int)puVar226 + iVar34 + iVar359);
  *(undefined2 *)((int)puVar226 + iVar359 + -2) = unaff_SS;
  uVar358 = *(undefined2 *)((int)puVar226 + iVar359 + -2);
  *(undefined2 *)((int)puVar226 + iVar359) = pcVar347;
  *(undefined2 *)((int)puVar226 + iVar359 + 2) = unaff_SS;
  puVar36 = (undefined2 *)((int)puVar226 + iVar359 + 4);
  uVar26 = *(ulong *)0xcd9;
  pcVar351 = (char *)(uVar26 & 0xffff);
  do {
    pcVar353 = (char *)pcVar351;
    pcVar351 = (char *)ZEXT24(pcVar353 + 1);
    cVar10 = *pcVar353;
    pcVar3 = pcVar347;
    pcVar347 = pcVar347 + 1;
    *pcVar3 = cVar10;
  } while (cVar10 != '\0');
  uVar357 = *(undefined2 *)0xcb2;
  pcVar353 = (char *)0x81;
LAB_1000_2f72:
  do {
    do {
      pcVar351 = pcVar353;
      pcVar353 = pcVar353 + 1;
      cVar10 = *pcVar351;
    } while (cVar10 == ' ');
  } while (cVar10 == '\t');
  if ((cVar10 == '\r') || (cVar10 == '\0')) {
LAB_1000_3006:
    *(undefined2 *)((int)puVar226 + iVar359 + -2) = unaff_SS;
    uVar358 = *(undefined2 *)((int)puVar226 + iVar359 + -2);
    *puVar36 = 0;
    puVar36[1] = 0;
                    /* WARNING: Could not recover jumptable at 0x00013011. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar17 = (code *)(*(code *)(ulong)*(uint *)0xcf0)();
    return pcVar17;
  }
  *puVar36 = pcVar347;
  puVar36[1] = unaff_SS;
  puVar36 = puVar36 + 2;
  do {
    pcVar353 = pcVar353 + -1;
LAB_1000_2f94:
    pcVar351 = pcVar353;
    pcVar353 = pcVar353 + 1;
    cVar10 = *pcVar351;
    if ((cVar10 == ' ') || (cVar10 == '\t')) {
      pcVar351 = pcVar347;
      pcVar347 = pcVar347 + 1;
      *pcVar351 = '\0';
      goto LAB_1000_2f72;
    }
    if ((cVar10 == '\r') || (cVar10 == '\0')) {
LAB_1000_3003:
      *pcVar347 = '\0';
      goto LAB_1000_3006;
    }
    pcVar348 = pcVar353;
    if (cVar10 == '\"') {
LAB_1000_2fd0:
      while( true ) {
        pcVar353 = pcVar348 + 1;
        cVar10 = *pcVar348;
        if ((cVar10 == '\r') || (cVar10 == '\0')) goto LAB_1000_3003;
        if (cVar10 == '\"') break;
        if (cVar10 == '\\') {
          uVar16 = 0;
          do {
            pcVar348 = pcVar353;
            uVar16 = uVar16 + 1;
            pcVar353 = pcVar348 + 1;
          } while (*pcVar348 == '\\');
          if (*pcVar348 == '\"') {
            for (uVar32 = uVar16 >> 1; uVar32 != 0; uVar32 = uVar32 - 1) {
              pcVar351 = pcVar347;
              pcVar347 = pcVar347 + 1;
              *pcVar351 = '\\';
            }
            if ((uVar16 & 1) == 0) break;
            pcVar351 = pcVar347;
            pcVar347 = pcVar347 + 1;
            *pcVar351 = '\"';
            pcVar348 = pcVar353;
          }
          else {
            for (; uVar16 != 0; uVar16 = uVar16 - 1) {
              pcVar351 = pcVar347;
              pcVar347 = pcVar347 + 1;
              *pcVar351 = '\\';
            }
          }
        }
        else {
          pcVar351 = pcVar347;
          pcVar347 = pcVar347 + 1;
          *pcVar351 = cVar10;
          pcVar348 = pcVar353;
        }
      }
      goto LAB_1000_2f94;
    }
    if (cVar10 != '\\') {
      pcVar351 = pcVar347;
      pcVar347 = pcVar347 + 1;
      *pcVar351 = cVar10;
      goto LAB_1000_2f94;
    }
    uVar16 = 0;
    do {
      uVar16 = uVar16 + 1;
      pcVar351 = pcVar353;
      pcVar353 = pcVar353 + 1;
    } while (*pcVar351 == '\\');
    if (*pcVar351 == '\"') {
      for (uVar32 = uVar16 >> 1; uVar32 != 0; uVar32 = uVar32 - 1) {
        pcVar351 = pcVar347;
        pcVar347 = pcVar347 + 1;
        *pcVar351 = '\\';
      }
      pcVar348 = pcVar353;
      if ((uVar16 & 1) == 0) goto LAB_1000_2fd0;
      pcVar351 = pcVar347;
      pcVar347 = pcVar347 + 1;
      *pcVar351 = '\"';
      goto LAB_1000_2f94;
    }
    for (; uVar16 != 0; uVar16 = uVar16 - 1) {
      pcVar351 = pcVar347;
      pcVar347 = pcVar347 + 1;
      *pcVar351 = '\\';
    }
  } while( true );
LAB_1000_3da8:
  *(int *)(pcVar20 + -0x18) = *(int *)(pcVar20 + -0x18) + -1;
  puVar244[2] = (uint)pcVar17;
  puVar244[1] = *(undefined2 *)(pcVar20 + 8);
  *puVar244 = *(undefined2 *)(pcVar20 + 6);
  puVar245 = puVar244 + -1;
  puVar244[-1] = 0x3db5;
  FUN_1000_429c();
  puVar339 = (uint *)CONCAT22(uVar358,(uint *)((int)puVar245 + 8));
  pcVar17 = (code *)pcVar345;
  pbVar37 = *(byte **)(pcVar17 + -8);
  uVar16 = *(uint *)(pcVar17 + -6);
  in_EDX = (ulong)uVar16;
  if ((*(byte **)(pcVar17 + -0x1ac) == pbVar37) && (*(uint *)(pcVar17 + -0x1aa) == uVar16))
  goto LAB_1000_422e;
  if ((pcVar17[-0x12] == (code)0x0) &&
     (*(int *)(pcVar17 + -0x3a) = *(int *)(pcVar17 + -0x3a) + 1, pcVar18 != (code *)0x63)) {
    in_EBX = (byte *)CONCAT22((int)((ulong)in_EBX >> 0x10),pbVar37);
    *pbVar37 = 0;
  }
  goto LAB_1000_41fe;
LAB_1000_2570:
  if ((*(int *)(pcVar17 + -0x10a) != 0) && (iVar359 < *(int *)(pcVar17 + 10))) {
    puVar187[1] = unaff_SS;
    *puVar187 = (uint)(pcVar17 + -4);
    puVar187[-1] = unaff_SS;
    puVar187[-2] = (uint)(pcVar17 + -2);
    puVar187[-3] = 0x2b4;
    puVar190 = puVar187 + -4;
    puVar187[-4] = 0x2590;
    FUN_1000_1e24();
    for (iVar34 = iVar359; pcVar17 = (code *)pcVar345, *(int *)(pcVar17 + -0x10c) <= iVar34;
        iVar34 = iVar34 + -1) {
      uVar358 = (undefined2)((ulong)*(undefined4 *)(pcVar17 + 6) >> 0x10);
      iVar22 = (int)*(undefined4 *)(pcVar17 + 6);
      *(undefined1 *)(iVar22 + iVar34 + 1) = *(undefined1 *)(iVar22 + iVar34);
    }
    *(code *)((int)*(undefined4 *)(pcVar17 + 6) + *(int *)(pcVar17 + -0x10c)) = pcVar17[-8];
    *(int *)(pcVar17 + -0x10c) = *(int *)(pcVar17 + -0x10c) + 1;
    iVar34 = *(int *)(pcVar17 + 6);
    iVar22 = *(int *)(pcVar17 + -0x10c);
    puVar190[5] = *(undefined2 *)(pcVar17 + 8);
    puVar190[4] = iVar34 + iVar22 + -1;
    puVar190[3] = (iVar359 - *(int *)(pcVar17 + -0x10c)) + 1;
    puVar190[2] = unaff_DS;
    puVar190[1] = 0xc4f;
    *puVar190 = 0x2b4;
    puVar191 = puVar190 + -1;
    puVar190[-1] = 0x25da;
    FUN_1000_1eb2();
    *(undefined2 *)((int)puVar191 + 0xc) = *(undefined2 *)((code *)pcVar345 + -4);
    *(int *)((int)puVar191 + 10) = *(int *)((code *)pcVar345 + -2) + 1;
LAB_1000_24a2:
    uVar358 = 0x2b4;
    *(undefined2 *)((int)puVar191 + 8) = 0x2b4;
    puVar184 = (undefined1 *)((int)puVar191 + 6);
    *(undefined2 *)((int)puVar191 + 6) = 0x24a6;
    FUN_1000_1dee();
    puVar339 = (uint *)ZEXT24(puVar184 + 8);
  }
  goto LAB_1000_24a9;
code_r0x0001088d:
  uVar357 = 0x1000;
  uVar358 = 0x1da;
  switch(iVar359) {
  case 0:
    *(undefined2 *)0x70 = 0xffff;
    uVar358 = 0x1000;
    break;
  case 1:
    *(undefined2 *)0x0 = 0xffff;
    uVar358 = 0x1000;
    break;
  case 2:
    *(undefined2 *)0x72 = 0xffff;
    *(undefined2 *)0x78 = 0xffff;
    *(undefined2 *)0x76 = 0xffff;
    *(undefined2 *)0x6e = 0xffff;
    uVar358 = uVar357;
    break;
  case 3:
switchD_1000_0890_caseD_3:
    *(undefined2 *)0x34 = 0xffff;
    uVar358 = 0x1000;
    break;
  case 4:
    *(undefined2 *)0x74 = 0xffff;
    uVar358 = uVar357;
    break;
  case 5:
    *(undefined2 *)0x0 = 0xffff;
    uVar358 = uVar357;
  }
  goto switchD_1000_0890_default;
switchD_1000_4341_caseD_9f:
  while( true ) {
    if ((*(code **)((byte *)pbVar38 + 4) == (code *)pcVar30) &&
       (*(int *)((code *)in_ECX + *(int *)0x70 * 6 + 4) != 0 ||
        *(int *)((code *)in_ECX + *(int *)0x70 * 6 + 2) != 0)) {
      *(int *)(pcVar17 + -4) = *(int *)(pcVar17 + -4) + 1;
    }
    *(int *)(pcVar17 + -2) = *(int *)(pcVar17 + -2) + 1;
    uVar26 = *(ulong *)0x410;
    uVar358 = (undefined2)(uVar26 >> 0x10);
    pbVar38 = (byte *)(uVar26 & 0xffff);
    if (*(uint *)((int)uVar26 + 4) <= *(uint *)(pcVar17 + -2)) break;
    uVar16 = *(uint *)((int)uVar26 + *(uint *)(pcVar17 + -2) * 4 + 0x84);
    in_EDX = 0x1566;
    *(uint *)(pcVar17 + -0xc) = uVar16;
    iVar359 = 0x1566;
    *(undefined2 *)(pcVar17 + -10) = 0x1566;
    pbVar38 = (byte *)(ulong)uVar16;
    uVar16 = uVar16 + *(int *)(uVar16 + 0x14);
    in_ECX = (code *)(ulong)uVar16;
    *(uint *)(pcVar17 + -0x10) = uVar16;
    *(undefined2 *)(pcVar17 + -0xe) = 0x1566;
    pcVar30 = (code *)(ulong)*(uint *)(pcVar17 + -6);
  }
code_r0x00010e20:
  iVar359 = *(int *)(pcVar17 + -4);
  *(int *)0x3a = iVar359;
  *(undefined2 *)*(undefined4 *)0x414 = *(undefined2 *)(byte *)pbVar38;
  *(undefined2 *)((int)*(undefined4 *)0x414 + 6) = *(undefined2 *)((int)*(undefined4 *)0x410 + 2);
  *(int *)((int)*(undefined4 *)0x414 + 8) = iVar359;
  *(undefined2 *)((int)*(undefined4 *)0x414 + 10) = 0;
  iVar34 = (iVar359 + 6) * 4;
  uVar358 = (undefined2)((ulong)*(undefined4 *)0x414 >> 0x10);
  iVar359 = (int)*(undefined4 *)0x414;
  *(int *)(iVar359 + 0xc) = iVar34;
  *(int *)(iVar359 + 0xe) = iVar34 >> 0xf;
  uVar358 = (undefined2)((ulong)*(undefined4 *)0x414 >> 0x10);
  iVar34 = (int)*(undefined4 *)0x414;
  uVar16 = *(uint *)(iVar34 + 0xc);
  iVar359 = *(int *)(iVar34 + 0xe);
  *(int *)(iVar34 + 0x10) = uVar16 + 0x52;
  *(int *)(iVar34 + 0x12) = iVar359 + (uint)(0xffad < uVar16);
  uVar358 = (undefined2)((ulong)*(undefined4 *)0x414 >> 0x10);
  iVar34 = (int)*(undefined4 *)0x414;
  uVar16 = *(uint *)(iVar34 + 0x10);
  iVar359 = *(int *)(iVar34 + 0x12);
  *(int *)(iVar34 + 0x14) = uVar16 + 4;
  *(int *)(iVar34 + 0x16) = iVar359 + (uint)(0xfffb < uVar16);
  uVar358 = (undefined2)((ulong)*(undefined4 *)0x414 >> 0x10);
  iVar34 = (int)*(undefined4 *)0x414;
  uVar16 = *(uint *)(iVar34 + 0x14);
  iVar359 = *(int *)(iVar34 + 0x16);
  *(int *)(iVar34 + 0x18) = uVar16 + 0x78;
  *(int *)(iVar34 + 0x1a) = iVar359 + (uint)(0xff87 < uVar16);
  *(undefined2 *)0x11c0 = *(undefined2 *)((int)*(undefined4 *)0x414 + 0xc);
  *(undefined2 *)0x11c2 = 0x565;
  iVar359 = *(int *)0x410;
  puVar137 = (uint *)puVar339;
  puVar137[-1] = *(undefined2 *)0x412;
  puVar137[-2] = iVar359 + 0x20;
  puVar137[-3] = *(undefined2 *)0x11c2;
  puVar137[-4] = *(undefined2 *)0x11c0;
  puVar137[-5] = 0x1000;
  puVar138 = puVar137 + -6;
  puVar137[-6] = 0xeea;
  func_0x00005082();
  *(undefined2 *)((int)*(undefined4 *)0x11c0 + 0x40) = *(undefined2 *)0x70;
  *(undefined2 *)((int)*(undefined4 *)0x11c0 + 0x42) = *(undefined2 *)0x0;
  *(undefined2 *)((int)*(undefined4 *)0x11c0 + 0x44) = *(undefined2 *)0x74;
  *(undefined2 *)((int)*(undefined4 *)0x11c0 + 0x46) = *(undefined2 *)0x34;
  *(undefined2 *)((int)*(undefined4 *)0x11c0 + 0x48) = *(undefined2 *)0x6e;
  *(undefined2 *)((int)*(undefined4 *)0x11c0 + 0x4a) = *(undefined2 *)0x76;
  *(undefined2 *)((int)*(undefined4 *)0x11c0 + 0x4c) = *(undefined2 *)0x78;
  *(undefined2 *)((int)*(undefined4 *)0x11c0 + 0x4e) = *(undefined2 *)0x72;
  *(undefined2 *)((int)*(undefined4 *)0x11c0 + 0x50) = *(undefined2 *)0x0;
  if (*(int *)0x3a != 0) {
    *(undefined2 *)0x11bc = *(undefined2 *)((int)*(undefined4 *)0x414 + 0x10);
    *(undefined2 *)0x11be = 0x565;
    puVar138[3] = 4;
    iVar359 = *(int *)0x70;
    iVar34 = *(int *)0x11e0;
    puVar138[2] = *(undefined2 *)0x11e2;
    puVar138[1] = iVar359 * 0x44 + iVar34;
    *puVar138 = *(undefined2 *)0x11be;
    puVar138[-1] = *(undefined2 *)0x11bc;
    puVar138[-2] = 0x2b4;
    piVar139 = (int *)(puVar138 + -3);
    puVar138[-3] = 0xfd3;
    func_0x00005420();
    *(undefined2 *)0x11d0 = *(undefined2 *)((int)*(undefined4 *)0x414 + 0x14);
    *(undefined2 *)0x11d2 = 0x565;
    *(undefined2 *)*(undefined4 *)0x11d0 =
         *(undefined2 *)(*(int *)0x74 * 2 + (int)*(undefined4 *)0x11e4);
    *(undefined2 *)((int)*(undefined4 *)0x11d0 + 4) =
         *(undefined2 *)(*(int *)0x34 * 2 + (int)*(undefined4 *)0x11cc);
    if (*(int *)((int)*(undefined4 *)0x410 + 2) == 1) {
      *(undefined2 *)((int)*(undefined4 *)0x11d0 + 2) =
           *(undefined2 *)(*(int *)0x6e * 2 + (int)*(undefined4 *)0x11d4);
      *(undefined2 *)((int)*(undefined4 *)0x11d0 + 6) =
           *(undefined2 *)(*(int *)0x72 * 2 + (int)*(undefined4 *)0x11d8);
      uVar357 = (undefined2)((ulong)*(undefined4 *)0x11c4 >> 0x10);
      iVar359 = (int)*(undefined4 *)0x11c4;
      uVar358 = *(undefined2 *)(*(int *)0x76 * 4 + iVar359 + 2);
      uVar15 = (undefined2)((ulong)*(undefined4 *)0x11d0 >> 0x10);
      iVar34 = (int)*(undefined4 *)0x11d0;
      *(undefined2 *)(iVar34 + 8) = *(undefined2 *)(*(int *)0x76 * 4 + iVar359);
      *(undefined2 *)(iVar34 + 10) = uVar358;
      uVar357 = (undefined2)((ulong)*(undefined4 *)0x11c8 >> 0x10);
      iVar359 = (int)*(undefined4 *)0x11c8;
      uVar358 = *(undefined2 *)(*(int *)0x78 * 4 + iVar359 + 2);
      uVar15 = (undefined2)((ulong)*(undefined4 *)0x11d0 >> 0x10);
      iVar34 = (int)*(undefined4 *)0x11d0;
      *(undefined2 *)(iVar34 + 0xc) = *(undefined2 *)(*(int *)0x78 * 4 + iVar359);
      *(undefined2 *)(iVar34 + 0xe) = uVar358;
    }
    else {
      if (*(int *)0x6e < 0) {
        *(undefined2 *)((int)*(undefined4 *)0x11d0 + 2) = 0;
      }
      else {
        *(undefined2 *)((int)*(undefined4 *)0x11d0 + 2) =
             *(undefined2 *)(*(int *)0x6e * 2 + (int)*(undefined4 *)0x11d4);
      }
      if (*(int *)0x76 < 0) {
        uVar358 = (undefined2)((ulong)*(undefined4 *)0x11d0 >> 0x10);
        iVar359 = (int)*(undefined4 *)0x11d0;
        *(undefined2 *)(iVar359 + 10) = 0;
        *(undefined2 *)(iVar359 + 8) = 0;
      }
      else {
        uVar357 = (undefined2)((ulong)*(undefined4 *)0x11c4 >> 0x10);
        iVar359 = (int)*(undefined4 *)0x11c4;
        uVar358 = *(undefined2 *)(*(int *)0x76 * 4 + iVar359 + 2);
        uVar15 = (undefined2)((ulong)*(undefined4 *)0x11d0 >> 0x10);
        iVar34 = (int)*(undefined4 *)0x11d0;
        *(undefined2 *)(iVar34 + 8) = *(undefined2 *)(*(int *)0x76 * 4 + iVar359);
        *(undefined2 *)(iVar34 + 10) = uVar358;
      }
      if (*(int *)0x78 < 0) {
        uVar358 = (undefined2)((ulong)*(undefined4 *)0x11d0 >> 0x10);
        iVar359 = (int)*(undefined4 *)0x11d0;
        *(undefined2 *)(iVar359 + 0xe) = 0;
        *(undefined2 *)(iVar359 + 0xc) = 0;
      }
      else {
        uVar357 = (undefined2)((ulong)*(undefined4 *)0x11c8 >> 0x10);
        iVar359 = (int)*(undefined4 *)0x11c8;
        uVar358 = *(undefined2 *)(*(int *)0x76 * 4 + iVar359 + 2);
        uVar15 = (undefined2)((ulong)*(undefined4 *)0x11d0 >> 0x10);
        iVar34 = (int)*(undefined4 *)0x11d0;
        *(undefined2 *)(iVar34 + 0xc) = *(undefined2 *)(*(int *)0x76 * 4 + iVar359);
        *(undefined2 *)(iVar34 + 0xe) = uVar358;
      }
      *(undefined2 *)((int)*(undefined4 *)0x11d0 + 6) = 0;
    }
    piVar139[4] = 0x68;
    uVar358 = *(undefined2 *)((int)*(undefined4 *)0x410 + 0x78);
    piVar139[3] = 0x1566;
    piVar139[2] = uVar358;
    iVar359 = *(int *)0x11d0;
    piVar139[1] = *(undefined2 *)0x11d2;
    *piVar139 = iVar359 + 0x10;
    piVar139[-1] = 0x2b4;
    piVar140 = piVar139 + -2;
    piVar139[-2] = 0x1185;
    func_0x00005420();
    piVar141 = (int *)((int)piVar140 + 10);
    pbVar38 = (byte *)((int)*(undefined4 *)0x11d0 + 0x11);
    *pbVar38 = *pbVar38 & 0x3f;
    puVar339 = (uint *)((int)*(undefined4 *)0x11d0 + 0x10);
    *puVar339 = *puVar339 | (uint)*(byte *)0x0 << 0xe;
    uVar358 = (undefined2)((ulong)*(undefined4 *)0x11d0 >> 0x10);
    iVar359 = (int)*(undefined4 *)0x11d0;
    pcVar17 = (code *)pcVar345;
    if (*(int *)(iVar359 + 2) != 0) {
      uVar357 = *(undefined2 *)(iVar359 + 0x56);
      *(int *)(iVar359 + 0x56) = *(int *)(iVar359 + 0x56) + 1;
      *(undefined2 *)(pcVar17 + -2) = uVar357;
      uVar358 = (undefined2)((ulong)*(undefined4 *)0x11d0 >> 0x10);
      iVar34 = (int)*(undefined4 *)0x11d0;
      iVar359 = *(int *)(pcVar17 + -2);
      *(undefined2 *)(iVar34 + iVar359 * 4 + 0x58) = *(undefined2 *)(iVar34 + 2);
      *(undefined2 *)((int)*(undefined4 *)0x11d0 + iVar359 * 4 + 0x5a) =
           *(undefined2 *)((int)*(undefined4 *)0x410 + 0x16);
    }
    uVar358 = (undefined2)((ulong)*(undefined4 *)0x11d0 >> 0x10);
    iVar359 = (int)*(undefined4 *)0x11d0;
    if (*(int *)(iVar359 + 10) != 0 || *(int *)(iVar359 + 8) != 0) {
      uVar357 = *(undefined2 *)(iVar359 + 0x14);
      *(int *)(iVar359 + 0x14) = *(int *)(iVar359 + 0x14) + 1;
      *(undefined2 *)(pcVar17 + -2) = uVar357;
      uVar357 = (undefined2)((ulong)*(undefined4 *)0x11d0 >> 0x10);
      iVar359 = (int)*(undefined4 *)0x11d0;
      uVar358 = *(undefined2 *)(iVar359 + 10);
      iVar22 = *(int *)(pcVar17 + -2) * 8;
      *(undefined2 *)(iVar359 + iVar22 + 0x16) = *(undefined2 *)(iVar359 + 8);
      *(undefined2 *)(iVar359 + iVar22 + 0x18) = uVar358;
      uVar357 = (undefined2)((ulong)*(undefined4 *)0x410 >> 0x10);
      iVar359 = (int)*(undefined4 *)0x410;
      uVar358 = *(undefined2 *)(iVar359 + 0x1a);
      uVar15 = (undefined2)((ulong)*(undefined4 *)0x11d0 >> 0x10);
      iVar34 = (int)*(undefined4 *)0x11d0;
      *(undefined2 *)(iVar34 + iVar22 + 0x1a) = *(undefined2 *)(iVar359 + 0x18);
      *(undefined2 *)(iVar34 + iVar22 + 0x1c) = uVar358;
    }
    uVar358 = (undefined2)((ulong)*(undefined4 *)0x11d0 >> 0x10);
    iVar359 = (int)*(undefined4 *)0x11d0;
    if (*(int *)(iVar359 + 0xe) != 0 || *(int *)(iVar359 + 0xc) != 0) {
      uVar357 = *(undefined2 *)(iVar359 + 0x14);
      *(int *)(iVar359 + 0x14) = *(int *)(iVar359 + 0x14) + 1;
      *(undefined2 *)(pcVar17 + -2) = uVar357;
      uVar357 = (undefined2)((ulong)*(undefined4 *)0x11d0 >> 0x10);
      iVar359 = (int)*(undefined4 *)0x11d0;
      uVar358 = *(undefined2 *)(iVar359 + 0xe);
      iVar22 = *(int *)(pcVar17 + -2) * 8;
      *(undefined2 *)(iVar359 + iVar22 + 0x16) = *(undefined2 *)(iVar359 + 0xc);
      *(undefined2 *)(iVar359 + iVar22 + 0x18) = uVar358;
      uVar357 = (undefined2)((ulong)*(undefined4 *)0x410 >> 0x10);
      iVar359 = (int)*(undefined4 *)0x410;
      uVar358 = *(undefined2 *)(iVar359 + 0x1e);
      uVar15 = (undefined2)((ulong)*(undefined4 *)0x11d0 >> 0x10);
      iVar34 = (int)*(undefined4 *)0x11d0;
      *(undefined2 *)(iVar34 + iVar22 + 0x1a) = *(undefined2 *)(iVar359 + 0x1c);
      *(undefined2 *)(iVar34 + iVar22 + 0x1c) = uVar358;
    }
    *(undefined2 *)(pcVar17 + -0x12) = *(undefined2 *)((int)*(undefined4 *)0x414 + 0x18);
    *(undefined2 *)(pcVar17 + -8) = 0;
    *(undefined2 *)(pcVar17 + -2) = 0;
    while (pcVar17 = (code *)pcVar345, *(int *)(pcVar17 + -8) < *(int *)(pcVar17 + -4)) {
      iVar359 = *(int *)((int)*(undefined4 *)0x410 + *(int *)(pcVar17 + -2) * 4 + 0x84);
      *(int *)(pcVar17 + -0xc) = iVar359;
      *(undefined2 *)(pcVar17 + -10) = 0x1566;
      iVar34 = iVar359 + *(int *)(iVar359 + 0x14);
      *(int *)(pcVar17 + -0x10) = iVar34;
      *(undefined2 *)(pcVar17 + -0xe) = 0x1566;
      if (*(int *)(iVar359 + 4) == *(int *)(pcVar17 + -6)) {
        iVar22 = *(int *)0x70;
        *(int *)(pcVar17 + -0x34) = iVar359;
        *(undefined2 *)(pcVar17 + -0x32) = 0x1566;
        if (*(int *)(iVar22 * 6 + iVar34 + 4) != 0 || *(int *)(iVar22 * 6 + iVar34 + 2) != 0) {
          uVar358 = (undefined2)((ulong)*(undefined4 *)(pcVar17 + -0x34) >> 0x10);
          iVar34 = (int)*(undefined4 *)(pcVar17 + -0x34);
          *(int *)(pcVar17 + -0x24) = iVar359 + *(int *)(iVar34 + 0xc);
          *(undefined2 *)(pcVar17 + -0x22) = 0x1566;
          *(int *)(pcVar17 + -0x16) = iVar359 + *(int *)(iVar34 + 0x10);
          *(undefined2 *)(pcVar17 + -0x14) = 0x1566;
          *(int *)(pcVar17 + -0x1e) = iVar359 + *(int *)(iVar34 + 0x18);
          *(undefined2 *)(pcVar17 + -0x1c) = 0x1566;
          *(int *)(pcVar17 + -0x2c) = iVar359 + *(int *)(iVar34 + 0x1c);
          *(undefined2 *)(pcVar17 + -0x2a) = 0x1566;
          *(int *)(pcVar17 + -0x28) = iVar359 + *(int *)(iVar34 + 0x20);
          *(undefined2 *)(pcVar17 + -0x26) = 0x1566;
          iVar359 = *(int *)(pcVar17 + -0x12);
          iVar34 = *(int *)(pcVar17 + -8);
          uVar358 = (undefined2)((ulong)*(undefined4 *)0x414 >> 0x10);
          iVar22 = (int)*(undefined4 *)0x414;
          *(int *)(iVar22 + iVar34 * 4 + 0x18) = iVar359;
          *(int *)(iVar22 + iVar34 * 4 + 0x1a) = iVar359 >> 0xf;
          uVar357 = *(undefined2 *)((int)*(undefined4 *)(pcVar17 + -0xc) + 4);
          iVar359 = *(int *)(pcVar17 + -0x12);
          uVar358 = *(undefined2 *)0x10d6;
          *(int *)(pcVar17 + -0x1a) = iVar359;
          *(undefined2 *)(pcVar17 + -0x18) = uVar358;
          *(undefined2 *)(iVar359 + 4) = uVar357;
          *(undefined2 *)((int)*(undefined4 *)(pcVar17 + -0x1a) + 6) =
               *(undefined2 *)((int)*(undefined4 *)(pcVar17 + -0xc) + 6);
          *(undefined2 *)((int)*(undefined4 *)(pcVar17 + -0x1a) + 8) =
               *(undefined2 *)((int)*(undefined4 *)(pcVar17 + -0xc) + 8);
          uVar358 = (undefined2)((ulong)*(undefined4 *)(pcVar17 + -0x1a) >> 0x10);
          iVar359 = (int)*(undefined4 *)(pcVar17 + -0x1a);
          *(undefined2 *)(iVar359 + 10) = *(undefined2 *)((int)*(undefined4 *)(pcVar17 + -0xc) + 10)
          ;
          *(undefined2 *)(iVar359 + 0xc) = 0x24;
          *(undefined2 *)(iVar359 + 0xe) = 0;
          piVar2 = *(int **)(pcVar17 + -0x24);
          uVar358 = (undefined2)((ulong)piVar2 >> 0x10);
          iVar359 = (((int *)piVar2)[1] + *piVar2) * 8 + 4;
          *(int *)(pcVar17 + -0x20) = iVar359;
          *(int *)((int)piVar141 + -2) = iVar359;
          *(undefined2 *)((int)piVar141 + -4) = uVar358;
          *(undefined2 *)((int)piVar141 + -6) = (int *)piVar2;
          uVar358 = (undefined2)((ulong)*(undefined4 *)(pcVar17 + -0x1a) >> 0x10);
          iVar34 = (int)*(undefined4 *)(pcVar17 + -0x1a);
          iVar359 = *(int *)(iVar34 + 0xc);
          *(undefined2 *)((int)piVar141 + -8) = uVar358;
          *(int *)((int)piVar141 + -10) = iVar34 + iVar359;
          *(undefined2 *)((int)piVar141 + -0xc) = 0x2b4;
          piVar142 = (int *)((int)piVar141 + -0xe);
          *(undefined2 *)((int)piVar141 + -0xe) = 0x13e3;
          func_0x00005420();
          pcVar17 = (code *)pcVar345;
          uVar16 = *(uint *)(pcVar17 + -0x20);
          uVar358 = (undefined2)((ulong)*(undefined4 *)(pcVar17 + -0x1a) >> 0x10);
          iVar34 = (int)*(undefined4 *)(pcVar17 + -0x1a);
          uVar32 = *(uint *)(iVar34 + 0xc);
          iVar359 = *(int *)(iVar34 + 0xe);
          *(int *)(iVar34 + 0x10) = uVar16 + *(uint *)(iVar34 + 0xc);
          *(int *)(iVar34 + 0x12) = ((int)uVar16 >> 0xf) + iVar359 + (uint)CARRY2(uVar16,uVar32);
          *(undefined2 *)(pcVar17 + -0x20) = 0x4e;
          piVar142[4] = 0x4e;
          piVar142[3] = *(undefined2 *)(pcVar17 + -0x14);
          piVar142[2] = *(undefined2 *)(pcVar17 + -0x16);
          iVar359 = *(int *)(iVar34 + 0x10);
          piVar142[1] = uVar358;
          *piVar142 = iVar34 + iVar359;
          piVar142[-1] = 0x2b4;
          piVar143 = piVar142 + -2;
          piVar142[-2] = 0x1417;
          func_0x00005420();
          pcVar17 = (code *)pcVar345;
          uVar358 = (undefined2)((ulong)*(undefined4 *)(pcVar17 + -0x1a) >> 0x10);
          iVar34 = (int)*(undefined4 *)(pcVar17 + -0x1a);
          uVar16 = *(uint *)(iVar34 + 0x10);
          iVar359 = *(int *)(iVar34 + 0x12);
          *(int *)(iVar34 + 0x14) = uVar16 + 0x4e;
          *(int *)(iVar34 + 0x16) = iVar359 + (uint)(0xffb1 < uVar16);
          if (*(int *)((int)*(undefined4 *)0x414 + 6) == 1) {
            uVar357 = (undefined2)((ulong)*(undefined4 *)(pcVar17 + -0x1a) >> 0x10);
            iVar359 = (int)*(undefined4 *)(pcVar17 + -0x1a);
            iVar359 = iVar359 + *(int *)(iVar359 + 0x14);
            *(int *)(pcVar17 + -0x30) = iVar359;
            *(undefined2 *)(pcVar17 + -0x2e) = uVar357;
            *(undefined2 *)(pcVar17 + -0x20) = 0x24;
            piVar143[4] = 0x24;
            uVar358 = *(undefined2 *)((int)*(undefined4 *)(pcVar17 + -0x10) + *(int *)0x70 * 6 + 2);
            piVar143[3] = 0x1566;
            piVar143[2] = uVar358;
            piVar143[1] = uVar357;
            *piVar143 = iVar359;
            piVar143[-1] = 0x2b4;
            piVar144 = piVar143 + -2;
            piVar143[-2] = 0x1480;
            func_0x00005420();
            puVar145 = (undefined1 *)((int)piVar144 + 10);
            uVar24 = *(undefined4 *)((code *)pcVar345 + -0x10);
            uVar358 = *(undefined2 *)(*(int *)0x70 * 6 + (int)uVar24);
            uVar24 = *(undefined4 *)((code *)pcVar345 + -0x30);
            uVar357 = (undefined2)((ulong)uVar24 >> 0x10);
            iVar359 = (int)uVar24;
          }
          else {
            uVar357 = (undefined2)((ulong)*(undefined4 *)(pcVar17 + -0x1a) >> 0x10);
            iVar359 = (int)*(undefined4 *)(pcVar17 + -0x1a);
            iVar359 = iVar359 + *(int *)(iVar359 + 0x14);
            *(int *)(pcVar17 + -0x34) = iVar359;
            *(undefined2 *)(pcVar17 + -0x32) = uVar357;
            *(undefined2 *)(pcVar17 + -0x20) = 0x1c;
            piVar143[4] = 0x1c;
            uVar358 = *(undefined2 *)((int)*(undefined4 *)(pcVar17 + -0x10) + *(int *)0x70 * 6 + 2);
            piVar143[3] = 0x1566;
            piVar143[2] = uVar358;
            piVar143[1] = uVar357;
            *piVar143 = iVar359;
            piVar143[-1] = 0x2b4;
            piVar146 = piVar143 + -2;
            piVar143[-2] = 0x14e2;
            func_0x00005420();
            puVar145 = (undefined1 *)((int)piVar146 + 10);
            uVar24 = *(undefined4 *)((code *)pcVar345 + -0x10);
            uVar358 = *(undefined2 *)(*(int *)0x70 * 6 + (int)uVar24);
            uVar24 = *(undefined4 *)((code *)pcVar345 + -0x34);
            uVar357 = (undefined2)((ulong)uVar24 >> 0x10);
            iVar359 = (int)uVar24;
          }
          *(undefined2 *)(iVar359 + 0x16) = uVar358;
          pcVar17 = (code *)pcVar345;
          uVar16 = *(uint *)(pcVar17 + -0x20);
          uVar358 = (undefined2)((ulong)*(undefined4 *)(pcVar17 + -0x1a) >> 0x10);
          iVar34 = (int)*(undefined4 *)(pcVar17 + -0x1a);
          uVar32 = *(uint *)(iVar34 + 0x14);
          iVar359 = *(int *)(iVar34 + 0x16);
          *(int *)(iVar34 + 0x18) = uVar16 + *(uint *)(iVar34 + 0x14);
          *(int *)(iVar34 + 0x1a) = ((int)uVar16 >> 0xf) + iVar359 + (uint)CARRY2(uVar16,uVar32);
          iVar359 = *(int *)(iVar34 + 6) << 3;
          *(int *)(pcVar17 + -0x20) = iVar359;
          *(int *)(puVar145 + -2) = iVar359;
          *(undefined2 *)(puVar145 + -4) = *(undefined2 *)(pcVar17 + -0x1c);
          *(undefined2 *)(puVar145 + -6) = *(undefined2 *)(pcVar17 + -0x1e);
          iVar359 = *(int *)(iVar34 + 0x18);
          *(undefined2 *)(puVar145 + -8) = uVar358;
          *(int *)(puVar145 + -10) = iVar34 + iVar359;
          *(undefined2 *)(puVar145 + -0xc) = 0x2b4;
          piVar147 = (int *)(puVar145 + -0xe);
          *(undefined2 *)(puVar145 + -0xe) = 0x1537;
          func_0x00005420();
          pcVar17 = (code *)pcVar345;
          uVar16 = *(uint *)(pcVar17 + -0x20);
          uVar358 = (undefined2)((ulong)*(undefined4 *)(pcVar17 + -0x1a) >> 0x10);
          iVar34 = (int)*(undefined4 *)(pcVar17 + -0x1a);
          uVar32 = *(uint *)(iVar34 + 0x18);
          iVar359 = *(int *)(iVar34 + 0x1a);
          *(int *)(iVar34 + 0x1c) = uVar16 + *(uint *)(iVar34 + 0x18);
          *(int *)(iVar34 + 0x1e) = ((int)uVar16 >> 0xf) + iVar359 + (uint)CARRY2(uVar16,uVar32);
          iVar359 = *(int *)(iVar34 + 8) << 3;
          *(int *)(pcVar17 + -0x20) = iVar359;
          piVar147[4] = iVar359;
          piVar147[3] = *(undefined2 *)(pcVar17 + -0x2a);
          piVar147[2] = *(undefined2 *)(pcVar17 + -0x2c);
          iVar359 = *(int *)(iVar34 + 0x1c);
          piVar147[1] = uVar358;
          *piVar147 = iVar34 + iVar359;
          piVar147[-1] = 0x2b4;
          piVar148 = piVar147 + -2;
          piVar147[-2] = 0x156e;
          func_0x00005420();
          piVar141 = piVar148 + 5;
          pcVar17 = (code *)pcVar345;
          uVar16 = *(uint *)(pcVar17 + -0x20);
          uVar358 = (undefined2)((ulong)*(undefined4 *)(pcVar17 + -0x1a) >> 0x10);
          iVar34 = (int)*(undefined4 *)(pcVar17 + -0x1a);
          uVar32 = *(uint *)(iVar34 + 0x1c);
          iVar359 = *(int *)(iVar34 + 0x1e);
          *(int *)(iVar34 + 0x20) = uVar16 + *(uint *)(iVar34 + 0x1c);
          *(int *)(iVar34 + 0x22) = ((int)uVar16 >> 0xf) + iVar359 + (uint)CARRY2(uVar16,uVar32);
          piVar2 = *(int **)(pcVar17 + -0xc);
          iVar359 = *piVar2 - ((int *)piVar2)[0x10];
          *(int *)(pcVar17 + -0x20) = iVar359;
          if (iVar359 != 0) {
            piVar148[4] = iVar359;
            piVar148[3] = *(undefined2 *)(pcVar17 + -0x26);
            piVar148[2] = *(undefined2 *)(pcVar17 + -0x28);
            uVar358 = (undefined2)((ulong)*(undefined4 *)(pcVar17 + -0x1a) >> 0x10);
            iVar34 = (int)*(undefined4 *)(pcVar17 + -0x1a);
            iVar359 = *(int *)(iVar34 + 0x20);
            piVar148[1] = uVar358;
            *piVar148 = iVar34 + iVar359;
            piVar148[-1] = 0x2b4;
            piVar149 = piVar148 + -2;
            piVar148[-2] = 0x15ae;
            func_0x00005420();
            piVar141 = (int *)((int)piVar149 + 10);
          }
          pcVar17 = (code *)pcVar345;
          uVar16 = *(uint *)(pcVar17 + -0x20);
          piVar2 = *(int **)(pcVar17 + -0x1a);
          uVar358 = (undefined2)((ulong)piVar2 >> 0x10);
          piVar35 = (int *)piVar2;
          uVar32 = piVar35[0x10];
          iVar34 = uVar16 + piVar35[0x10];
          iVar359 = piVar35[0x11];
          *piVar2 = iVar34;
          piVar35[1] = ((int)uVar16 >> 0xf) + iVar359 + (uint)CARRY2(uVar16,uVar32);
          *(int *)(pcVar17 + -0x12) = *(int *)(pcVar17 + -0x12) + iVar34;
          *(int *)(pcVar17 + -8) = *(int *)(pcVar17 + -8) + 1;
        }
      }
      *(int *)((code *)pcVar345 + -2) = *(int *)((code *)pcVar345 + -2) + 1;
    }
    iVar359 = *(int *)(pcVar17 + -0x12);
    uVar358 = (undefined2)((ulong)*(undefined4 *)0x414 >> 0x10);
    iVar34 = (int)*(undefined4 *)0x414;
    *(int *)(iVar34 + 2) = iVar359;
    *(int *)(iVar34 + 4) = iVar359 >> 0xf;
    return *(code **)(pcVar17 + -0x12);
  }
  return (code *)*(undefined2 *)((int)*(undefined4 *)0x414 + 0x10);
  while( true ) {
    iVar34 = iVar34 + -1;
    pcVar347 = (char *)pcVar351;
    pcVar351 = (char *)ZEXT24(pcVar347 + 1);
    if (*pcVar347 == '\0') break;
code_r0x000130f8:
    if (iVar34 == 0) break;
  }
  if (*(int *)0x109e == -0x292a) {
    pcVar17 = (code *)*(undefined2 *)0x10a0;
    puVar257[-1] = 0x310c;
    (*pcVar17)();
  }
  pcVar345 = (code *)swi(0x21);
  pcVar17 = (code *)(*pcVar345)();
  return pcVar17;
  while( true ) {
    uVar16 = uVar16 - 1;
    pcVar345 = pcVar20;
    pcVar20 = pcVar20 + 1;
    pcVar30 = (code *)ZEXT24(pcVar20);
    if (cVar11 == *pcVar345) break;
code_r0x0001504b:
    pcVar20 = (code *)pcVar30;
    if (uVar16 == 0) break;
  }
  uVar16 = ~uVar16;
  pcVar20 = pcVar20 + -uVar16;
  uVar358 = *(undefined2 *)(pcVar17 + 8);
  pcVar17 = *(code **)(pcVar17 + 6);
  if (((uint)pcVar20 & 1) != 0) {
    pcVar30 = pcVar18;
    pcVar18 = pcVar346 + 2;
    pcVar345 = pcVar20;
    pcVar20 = pcVar20 + 1;
    *pcVar30 = *pcVar345;
    uVar16 = uVar16 - 1;
  }
  for (uVar32 = uVar16 >> 1; uVar32 != 0; uVar32 = uVar32 - 1) {
    pcVar30 = pcVar18;
    pcVar18 = pcVar18 + 2;
    pcVar345 = pcVar20;
    pcVar20 = pcVar20 + 2;
    *(uint *)pcVar30 = *(uint *)pcVar345;
  }
  for (uVar16 = (uint)((uVar16 & 1) != 0); uVar16 != 0; uVar16 = uVar16 - 1) {
    pcVar30 = pcVar18;
    pcVar18 = pcVar18 + 1;
    pcVar345 = pcVar20;
    pcVar20 = pcVar20 + 1;
    *pcVar30 = *pcVar345;
  }
  return pcVar17;
  while( true ) {
    pcVar29 = pcVar29 + -1;
    pcVar345 = pcVar17;
    pcVar17 = pcVar17 + 1;
    pcVar20 = (code *)in_ESI;
    in_ESI = (code *)ZEXT24(pcVar20 + 1);
    cVar11 = *pcVar20;
    bVar360 = (byte)cVar11 < (byte)*pcVar345;
    bVar362 = cVar11 == *pcVar345;
    if (!bVar362) break;
code_r0x000150c5:
    if (pcVar29 == (code *)0x0) break;
  }
  if (!bVar362) {
    pcVar27 = (code *)(ulong)((1 - (uint)bVar360) - (uint)(bVar360 != 0));
  }
  return (code *)pcVar27;
}


// ---- FUN_1000_424c @ 1000:424c

uint FUN_1000_424c(uint param_1)

{
  undefined2 unaff_DS;
  
  if ((*(byte *)(param_1 + 0xf99) & 4) == 0) {
    param_1 = (param_1 & 0xffdf) - 7;
  }
  return param_1;
}


// ---- FUN_1000_426a @ 1000:426a

uint FUN_1000_426a(int *param_1)

{
  int *piVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  undefined2 uVar6;
  
  uVar6 = (undefined2)((ulong)param_1 >> 0x10);
  piVar5 = (int *)param_1;
  piVar1 = piVar5 + 2;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 < 0) {
    uVar4 = func_0x00003604(0x1000,piVar5,uVar6);
  }
  else {
    pbVar2 = (byte *)*param_1;
    iVar3 = piVar5[1];
    *param_1 = *param_1 + 1;
    uVar4 = (uint)*pbVar2;
  }
  return uVar4;
}


// ---- FUN_1000_429c @ 1000:429c

void FUN_1000_429c(undefined2 param_1,undefined2 param_2,int param_3)

{
  if (param_3 != -1) {
    func_0x00004832(0x1000,param_3,param_1,param_2);
  }
  return;
}


// ---- FUN_1000_42ba @ 1000:42ba

void FUN_1000_42ba(undefined2 param_1,undefined2 param_2,int *param_3)

{
  int iVar1;
  undefined2 unaff_DS;
  
  do {
    *param_3 = *param_3 + 1;
    iVar1 = FUN_1000_426a(param_1,param_2);
  } while ((*(byte *)(iVar1 + 0xf99) & 8) != 0);
  return;
}


// ---- FUN_1000_4702 @ 1000:4702

undefined2 __cdecl16near FUN_1000_4702(void)

{
  undefined2 uVar1;
  int unaff_BP;
  undefined2 unaff_SS;
  
  uVar1 = *(undefined2 *)*(undefined4 *)(unaff_BP + 0xe);
  *(int *)(unaff_BP + 0xe) = (int)((undefined2 *)(undefined2 *)*(undefined4 *)(unaff_BP + 0xe) + 1);
  return uVar1;
}


// ---- FUN_1000_470b @ 1000:470b

undefined4 __cdecl16near FUN_1000_470b(void)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 *puVar3;
  int unaff_BP;
  undefined2 unaff_SS;
  
  puVar3 = (undefined2 *)*(undefined4 *)(unaff_BP + 0xe);
  uVar1 = *puVar3;
  uVar2 = ((undefined2 *)puVar3)[1];
  *(int *)(unaff_BP + 0xe) = (int)((undefined2 *)puVar3 + 2);
  return CONCAT22(uVar2,uVar1);
}


// ---- FUN_1000_4719 @ 1000:4719

void __cdecl16near FUN_1000_4719(void)

{
  int iVar1;
  int unaff_BP;
  undefined2 unaff_SS;
  
  if ((*(byte *)(unaff_BP + -4) & 0x20) != 0) {
    FUN_1000_470b();
    return;
  }
  iVar1 = FUN_1000_4702();
  if (iVar1 == 0) {
    return;
  }
  return;
}


// ---- FUN_1000_4736 @ 1000:4736

undefined2 __cdecl16near FUN_1000_4736(void)

{
  int *piVar1;
  char *pcVar2;
  int *piVar3;
  char in_AL;
  int iVar4;
  int *piVar5;
  int unaff_BP;
  undefined2 uVar6;
  undefined2 unaff_SS;
  
  piVar3 = (int *)*(undefined4 *)(unaff_BP + 6);
  uVar6 = (undefined2)((ulong)piVar3 >> 0x10);
  piVar5 = (int *)piVar3;
  piVar1 = piVar5 + 2;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 < 0) {
    iVar4 = FUN_1000_3694((int)in_AL,piVar5,uVar6);
    if (iVar4 == -1) {
      return 0xffff;
    }
  }
  else {
    pcVar2 = (char *)*piVar3;
    *piVar3 = *piVar3 + 1;
    *pcVar2 = in_AL;
  }
  return 0;
}


// ---- FUN_1000_4767 @ 1000:4767

void __cdecl16near FUN_1000_4767(void)

{
  uint uVar1;
  int in_CX;
  int unaff_BP;
  uint uVar2;
  undefined2 unaff_SS;
  
  if (in_CX != 0) {
    *(int *)(unaff_BP + -8) = *(int *)(unaff_BP + -8) + in_CX;
    uVar2 = 0;
    do {
      uVar1 = FUN_1000_4736();
      uVar2 = uVar2 | uVar1;
      in_CX = in_CX + -1;
    } while (in_CX != 0);
    if (uVar2 != 0) {
      *(undefined2 *)(unaff_BP + -8) = 0xffff;
    }
  }
  return;
}


// ---- FUN_1000_4785 @ 1000:4785

void __cdecl16near FUN_1000_4785(void)

{
  uint uVar1;
  int in_CX;
  int unaff_BP;
  uint uVar2;
  undefined2 unaff_SS;
  
  if (in_CX != 0) {
    *(int *)(unaff_BP + -8) = *(int *)(unaff_BP + -8) + in_CX;
    uVar2 = 0;
    do {
      uVar1 = FUN_1000_4736();
      uVar2 = uVar2 | uVar1;
      in_CX = in_CX + -1;
    } while (in_CX != 0);
    if (uVar2 != 0) {
      *(undefined2 *)(unaff_BP + -8) = 0xffff;
    }
  }
  return;
}


// ---- FUN_1000_47a1 @ 1000:47a1

void __cdecl16near FUN_1000_47a1(void)

{
  byte *pbVar1;
  ulong uVar2;
  byte bVar3;
  uint in_AX;
  uint in_CX;
  uint in_DX;
  int unaff_BP;
  int unaff_SI;
  byte *unaff_DI;
  undefined2 unaff_ES;
  undefined2 unaff_SS;
  
  while (((0 < unaff_SI || (in_AX != 0)) || (in_DX != 0))) {
    uVar2 = (ulong)in_DX;
    in_DX = in_DX / in_CX;
    uVar2 = uVar2 % (ulong)in_CX << 0x10 | (ulong)in_AX;
    in_AX = (uint)(uVar2 / in_CX);
    bVar3 = (char)(uVar2 % (ulong)in_CX) + 0x30;
    if (0x39 < bVar3) {
      bVar3 = bVar3 + *(char *)(unaff_BP + -1);
    }
    pbVar1 = unaff_DI;
    unaff_DI = unaff_DI + -1;
    *pbVar1 = bVar3;
    unaff_SI = unaff_SI + -1;
  }
  return;
}


// ---- FUN_1000_47d2 @ 1000:47d2

void __cdecl16far FUN_1000_47d2(void)

{
  return;
}


// ---- FUN_1000_47d8 @ 1000:47d8

undefined2 * __cdecl16far FUN_1000_47d8(void)

{
  undefined2 *puVar1;
  undefined2 unaff_DS;
  
  puVar1 = (undefined2 *)0xd0e;
  while( true ) {
    if ((undefined2 *)*(undefined2 *)0xeee < puVar1) {
      return (undefined2 *)0x0;
    }
    if ((*(byte *)(puVar1 + 5) & 0x83) == 0) break;
    puVar1 = puVar1 + 6;
  }
  puVar1[2] = 0;
  *(undefined1 *)(puVar1 + 5) = 0;
  puVar1[4] = 0;
  puVar1[3] = 0;
  puVar1[1] = 0;
  *puVar1 = 0;
  *(undefined1 *)((int)puVar1 + 0xb) = 0xff;
  return puVar1;
}


// ---- FUN_1000_4826 @ 1000:4826

uint __cdecl16far FUN_1000_4826(uint param_1,int *param_2)

{
  undefined2 unaff_DS;
  
  if ((param_1 == 0xffff) ||
     (((*(byte *)(param_2 + 5) & 1) == 0 &&
      (((*(byte *)(param_2 + 5) & 0x80) == 0 || ((*(byte *)(param_2 + 5) & 2) != 0)))))) {
LAB_1000_4848:
    param_1 = 0xffff;
  }
  else {
    if (param_2[4] == 0 && param_2[3] == 0) {
      FUN_1000_37b8(param_2);
    }
    if ((param_2[3] == *param_2) && (param_2[4] == param_2[1])) {
      if (param_2[2] != 0) goto LAB_1000_4848;
      *param_2 = *param_2 + 1;
    }
    param_2[2] = param_2[2] + 1;
    *param_2 = *param_2 + -1;
    **(undefined1 **)param_2 = (char)param_1;
    *(byte *)(param_2 + 5) = *(byte *)(param_2 + 5) & 0xef;
    *(byte *)(param_2 + 5) = *(byte *)(param_2 + 5) | 1;
    param_1 = param_1 & 0xff;
  }
  return param_1;
}


// ---- FUN_1000_4892 @ 1000:4892

void FUN_1000_4892(undefined2 param_1,uint param_2)

{
  code *pcVar1;
  undefined2 unaff_DS;
  bool bVar2;
  
  bVar2 = param_2 < *(uint *)0xcb9;
  if (bVar2) {
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
    if (!bVar2) {
      *(undefined1 *)(param_2 + 0xcbb) = 0;
    }
  }
  FUN_1000_313e();
  return;
}


// ---- FUN_1000_48b2 @ 1000:48b2

void FUN_1000_48b2(undefined2 param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  uint uVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  undefined2 unaff_DS;
  bool bVar5;
  undefined4 uVar6;
  
  if (*(uint *)0xcb9 <= param_2) goto LAB_1000_4929;
  bVar5 = false;
  if ((param_4 & 0x8000) != 0) {
    if (param_5 == 0) goto LAB_1000_4929;
    bVar5 = false;
    pcVar2 = (code *)swi(0x21);
    uVar6 = (*pcVar2)();
    uVar3 = (uint)((ulong)uVar6 >> 0x10);
    if (bVar5) goto LAB_1000_4929;
    if ((param_5 & 2) == 0) {
      uVar1 = (uint)CARRY2((uint)uVar6,param_3);
      bVar5 = CARRY2(uVar3,param_4) || CARRY2(uVar3 + param_4,uVar1);
      if ((int)(uVar3 + param_4 + uVar1) < 0) goto LAB_1000_4929;
    }
    else {
      pcVar2 = (code *)swi(0x21);
      uVar6 = (*pcVar2)(uVar3);
      uVar4 = (uint)((ulong)uVar6 >> 0x10);
      uVar3 = (uint)CARRY2((uint)uVar6,param_3);
      uVar1 = uVar4 + param_4;
      bVar5 = CARRY2(uVar4,param_4) || CARRY2(uVar1,uVar3);
      if ((int)(uVar1 + uVar3) < 0) {
        pcVar2 = (code *)swi(0x21);
        (*pcVar2)();
        goto LAB_1000_4929;
      }
    }
  }
  pcVar2 = (code *)swi(0x21);
  (*pcVar2)();
  if (!bVar5) {
    *(byte *)(param_2 + 0xcbb) = *(byte *)(param_2 + 0xcbb) & 0xfd;
  }
LAB_1000_4929:
  FUN_1000_3153();
  return;
}


// ---- FUN_1000_4af8 @ 1000:4af8

/* WARNING: Removing unreachable block (ram,0x00014bf4) */
/* WARNING: Removing unreachable block (ram,0x00014be9) */

void FUN_1000_4af8(undefined2 param_1,uint param_2,undefined4 param_3,int param_4)

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
  
  if (((*(uint *)0xcb9 <= param_2) || (param_4 == 0)) || ((*(byte *)(param_2 + 0xcbb) & 2) != 0)) {
LAB_1000_4b80:
    FUN_1000_3153();
    return;
  }
  uVar10 = *(uint *)0x109e < 0xd6d6;
  if (*(uint *)0x109e == 0xd6d6) {
    (*(code *)*(undefined2 *)0x10a0)();
  }
  pcVar3 = (code *)swi(0x21);
  uVar12 = (*pcVar3)();
  pcVar9 = (char *)((ulong)uVar12 >> 0x10);
  if (((bool)uVar10) || ((*(byte *)(param_2 + 0xcbb) & 0x80) == 0)) goto LAB_1000_4b80;
  *(byte *)(param_2 + 0xcbb) = *(byte *)(param_2 + 0xcbb) & 0xfb;
  if ((int)uVar12 == 0) goto LAB_1000_4b80;
  uVar4 = 0xd00;
  if (*pcVar9 == '\n') {
    *(byte *)(param_2 + 0xcbb) = *(byte *)(param_2 + 0xcbb) | 4;
  }
LAB_1000_4b62:
  pcVar8 = (char *)((ulong)uVar12 >> 0x10);
  iVar7 = (int)uVar12;
  pcVar1 = pcVar8 + 1;
  cVar2 = *pcVar8;
  cVar6 = (char)((uint)uVar4 >> 8);
  uVar4 = CONCAT11(cVar6,cVar2);
  if (cVar2 == cVar6) {
    if (iVar7 != 1) {
      if (*pcVar1 != '\n') goto LAB_1000_4b73;
      goto LAB_1000_4b76;
    }
    bVar11 = false;
    if ((*(byte *)(param_2 + 0xcbb) & 0x40) == 0) {
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
        goto LAB_1000_4b73;
      }
      goto LAB_1000_4b80;
    }
    pcVar3 = (code *)swi(0x21);
    (*pcVar3)();
    bVar11 = false;
    uVar10 = extraout_AH;
    if ((extraout_DX & 0x20) == 0) {
      pcVar3 = (code *)swi(0x21);
      (*pcVar3)();
      uVar10 = extraout_AH_00;
      if (bVar11) goto LAB_1000_4b80;
    }
    uVar4 = CONCAT11(uVar10,10);
  }
  else if (cVar2 == '\x1a') {
    *(byte *)(param_2 + 0xcbb) = *(byte *)(param_2 + 0xcbb) | 2;
    goto LAB_1000_4b80;
  }
LAB_1000_4b73:
  *pcVar9 = (char)uVar4;
  pcVar9 = pcVar9 + 1;
LAB_1000_4b76:
  uVar12 = CONCAT22(pcVar1,iVar7 + -1);
  if (iVar7 + -1 == 0) goto LAB_1000_4b80;
  goto LAB_1000_4b62;
}


// ---- FUN_1000_4bf6 @ 1000:4bf6

/* WARNING: Unable to track spacebase fully for stack */

undefined2 FUN_1000_4bf6(undefined2 param_1,uint param_2,char *param_3,int param_4)

{
  char *pcVar1;
  code *pcVar2;
  char cVar3;
  undefined2 uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  bool bVar11;
  undefined4 uVar12;
  
  if (*(uint *)0xcb9 <= param_2) {
LAB_1000_4c09:
    uVar4 = FUN_1000_3153();
    return uVar4;
  }
  if (*(int *)0x109e == -0x292a) {
    (*(code *)*(undefined2 *)0x10a0)();
  }
  if ((*(byte *)(param_2 + 0xcbb) & 0x20) != 0) {
    bVar11 = false;
    pcVar2 = (code *)swi(0x21);
    (*pcVar2)();
    if (bVar11) goto LAB_1000_4c09;
  }
  if ((*(byte *)(param_2 + 0xcbb) & 0x80) != 0) {
    pcVar7 = (char *)param_3;
    bVar11 = true;
    iVar6 = param_4;
    pcVar10 = pcVar7;
    if (param_4 != 0) {
      do {
        if (iVar6 == 0) break;
        pcVar1 = pcVar10;
        pcVar10 = pcVar10 + 1;
        bVar11 = *pcVar1 == '\n';
        iVar6 = iVar6 + -1;
      } while (!bVar11);
      if (!bVar11) goto LAB_1000_4cad;
      pcVar9 = &stack0xfff0;
      uVar12 = func_0x00004d62(0x1000);
      pcVar8 = (char *)((ulong)uVar12 >> 0x10);
      if ((uint)uVar12 < 0xa9) {
        uVar4 = FUN_1000_2e20();
        bVar11 = pcVar10 < pcVar8;
        if (pcVar10 != pcVar8) {
          pcVar2 = (code *)swi(0x21);
          uVar5 = (*pcVar2)();
          if ((bVar11) || (uVar5 < (uint)((int)pcVar10 - (int)pcVar8))) {
            uVar4 = FUN_1000_3153();
            return uVar4;
          }
        }
        return uVar4;
      }
      pcVar10 = &stack0xfff2;
      do {
        pcVar1 = pcVar7;
        pcVar7 = pcVar7 + 1;
        cVar3 = *pcVar1;
        if (cVar3 == '\n') {
          cVar3 = '\r';
          if (pcVar10 == pcVar9) {
            cVar3 = FUN_1000_4cb6();
          }
          pcVar1 = pcVar10;
          pcVar10 = pcVar10 + 1;
          *pcVar1 = cVar3;
          cVar3 = '\n';
        }
        if (pcVar10 == pcVar9) {
          cVar3 = FUN_1000_4cb6();
        }
        pcVar1 = pcVar10;
        pcVar10 = pcVar10 + 1;
        *pcVar1 = cVar3;
        param_4 = param_4 + -1;
      } while (param_4 != 0);
      FUN_1000_4cb6();
    }
    uVar4 = FUN_1000_4d0b();
    return uVar4;
  }
LAB_1000_4cad:
  uVar4 = FUN_1000_4d1c();
  return uVar4;
}


// ---- FUN_1000_4cb6 @ 1000:4cb6

/* WARNING: Unable to track spacebase fully for stack */

undefined2 __cdecl16near FUN_1000_4cb6(void)

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
      uVar3 = FUN_1000_3153();
      return uVar3;
    }
  }
  return in_AX;
}


// ---- FUN_1000_4d0b @ 1000:4d0b

/* WARNING: Stack frame is not setup normally: Input value of stackpointer is not used */

void FUN_1000_4d0b(void)

{
  FUN_1000_3153();
  return;
}


// ---- FUN_1000_4d1c @ 1000:4d1c

void FUN_1000_4d1c(void)

{
  code *pcVar1;
  int unaff_BP;
  undefined2 unaff_SS;
  
  if (*(int *)(unaff_BP + 0xc) != 0) {
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
    FUN_1000_3153();
    return;
  }
  FUN_1000_3153();
  return;
}


// ---- FUN_1000_4d89 @ 1000:4d89

undefined2 __cdecl16far FUN_1000_4d89(uint param_1)

{
  undefined4 *puVar1;
  int in_BX;
  uint uVar2;
  code *pcVar3;
  undefined2 unaff_DS;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  undefined4 uVar8;
  
  if (param_1 < 0xffe9) {
    bVar6 = false;
    if (*(int *)0xf6c != 0) {
      pcVar3 = (code *)0x233c;
      while( true ) {
        uVar2 = *(uint *)0xf74;
        uVar4 = (uint)((ulong)*(undefined4 *)0xf6e >> 0x10);
        in_BX = (int)*(undefined4 *)0xf6e;
        uVar5 = uVar4;
        do {
          do {
            uVar8 = (*pcVar3)();
            if (!bVar6) {
              if (pcVar3 == (code *)0x233c) goto LAB_1000_4df3;
              goto LAB_1000_4df0;
            }
            puVar1 = (undefined4 *)(in_BX + 0xc);
            in_BX = (int)*puVar1;
            bVar6 = uVar4 < uVar2;
            bVar7 = uVar4 != uVar2;
            uVar4 = (uint)((ulong)*puVar1 >> 0x10);
          } while (bVar7);
          uVar2 = *(uint *)((int)*(undefined4 *)0xf6e + 0x12);
          uVar4 = (uint)((ulong)*(undefined4 *)0xf6a >> 0x10);
          in_BX = (int)*(undefined4 *)0xf6a;
          bVar6 = uVar4 < uVar5;
          bVar7 = uVar4 != uVar5;
          uVar5 = uVar4;
        } while (bVar7);
        bVar6 = pcVar3 < (code *)0x23b8;
        if (pcVar3 == (code *)0x23b8) break;
        pcVar3 = (code *)0x23b8;
      }
    }
    FUN_1000_4fec();
    if (!bVar6) {
LAB_1000_4df0:
      uVar8 = FUN_1000_4e70();
LAB_1000_4df3:
      *(undefined2 *)0xf70 = (int)((ulong)uVar8 >> 0x10);
      *(int *)0xf6e = in_BX;
      return (int)uVar8;
    }
  }
  return 0;
}


// ---- FUN_1000_4e06 @ 1000:4e06

void __cdecl16near FUN_1000_4e06(void)

{
  int *piVar1;
  int in_AX;
  undefined2 *in_BX;
  undefined2 *puVar2;
  undefined2 unaff_DS;
  
  in_BX[2] = in_AX + (int)in_BX;
  puVar2 = (undefined2 *)(in_AX + (int)in_BX + -2);
  piVar1 = in_BX + 10;
  *puVar2 = 0xfffe;
  in_BX[5] = puVar2;
  *piVar1 = in_AX + -0x17;
  *in_BX = unaff_DS;
  in_BX[3] = piVar1;
  in_BX[4] = piVar1;
  in_BX[6] = 0;
  in_BX[7] = 0;
  in_BX[8] = 0;
  in_BX[9] = 0;
  return;
}


// ---- FUN_1000_4e3a @ 1000:4e3a

void __cdecl16near FUN_1000_4e3a(void)

{
  int in_BX;
  int iVar1;
  int *unaff_DI;
  undefined2 unaff_ES;
  undefined2 uVar2;
  int unaff_DS;
  
  if (unaff_DI[1] == 0) {
    unaff_DI[1] = unaff_DS;
    *unaff_DI = in_BX;
  }
  else {
    uVar2 = (undefined2)((ulong)*(undefined4 *)(unaff_DI + 4) >> 0x10);
    iVar1 = (int)*(undefined4 *)(unaff_DI + 4);
    *(int *)(iVar1 + 0xe) = unaff_DS;
    *(int *)(iVar1 + 0xc) = in_BX;
    *(undefined2 *)(in_BX + 0x12) = uVar2;
    *(int *)(in_BX + 0x10) = iVar1;
  }
  unaff_DI[5] = unaff_DS;
  unaff_DI[4] = in_BX;
  unaff_DI[3] = unaff_DS;
  unaff_DI[2] = in_BX;
  return;
}


// ---- FUN_1000_4e70 @ 1000:4e70

uint * __cdecl16near FUN_1000_4e70(void)

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
          if (CARRY2((uint)puVar1,uVar2)) goto LAB_1000_4ec9;
          puVar6 = (uint *)((int)puVar1 + uVar2) + 1;
          uVar3 = *(uint *)((int)puVar1 + uVar2);
          if ((uVar3 & 1) == 0) break;
          uVar3 = uVar3 + uVar2 + 2;
          *puVar7 = uVar3;
        }
      }
      if (puVar6 + -1 < puVar5) break;
      if (((uint)puVar5 & 1) != 0) goto LAB_1000_4ec9;
      puVar7 = (uint *)*(undefined2 *)(in_BX + 6);
      if ((uint *)*(undefined2 *)(in_BX + 8) == puVar7) goto LAB_1000_4ec9;
      puVar5 = (uint *)((int)*(undefined2 *)(in_BX + 8) + -1);
    }
    puVar7 = (uint *)((int)puVar6 + uVar3);
  } while (!CARRY2((uint)puVar6,uVar3));
LAB_1000_4ec9:
  puVar7 = (uint *)*(undefined2 *)(in_BX + 6);
  *(undefined2 *)(in_BX + 8) = puVar7;
  return puVar7;
}


// ---- FUN_1000_4fec @ 1000:4fec

void __cdecl16near FUN_1000_4fec(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_DI;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  bool bVar3;
  
  bVar3 = false;
  do {
    pcVar1 = (code *)swi(0x21);
    uVar2 = (*pcVar1)();
    if (bVar3) {
      return;
    }
    bVar3 = uVar2 < *(uint *)0xc8e;
  } while (uVar2 <= *(uint *)0xc8e);
  if (*(uint *)0xc8c < uVar2) {
    *(uint *)0xc8c = uVar2;
  }
  *(undefined2 *)0x2 = *(undefined2 *)(unaff_DI + 0xc);
  FUN_1000_4e06();
  FUN_1000_4e3a();
  return;
}


// ---- FUN_1000_5030 @ 1000:5030

char * __cdecl16far FUN_1000_5030(char *param_1,char *param_2)

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
  
  uVar9 = (undefined2)((ulong)param_1 >> 0x10);
  iVar3 = -1;
  pcVar6 = (char *)param_1;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    pcVar1 = pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (*pcVar1 != '\0');
  uVar10 = (undefined2)((ulong)param_2 >> 0x10);
  pcVar7 = (char *)param_2;
  uVar4 = 0xffff;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar1 = pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (*pcVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar7 = pcVar7 + -uVar4;
  pcVar8 = pcVar6 + -1;
  if (((uint)pcVar7 & 1) != 0) {
    pcVar1 = pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar6[-1] = *pcVar1;
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


// ---- FUN_1000_5076 @ 1000:5076

void __cdecl16far FUN_1000_5076(char *param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  
  uVar8 = (undefined2)((ulong)param_2 >> 0x10);
  pcVar5 = (char *)param_2;
  uVar3 = 0xffff;
  pcVar6 = pcVar5;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar1 = pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (*pcVar1 != '\0');
  uVar3 = ~uVar3;
  uVar7 = (undefined2)((ulong)param_1 >> 0x10);
  pcVar6 = (char *)param_1;
  if (((ulong)param_1 & 1) != 0) {
    pcVar6 = pcVar6 + 1;
    pcVar5 = pcVar5 + 1;
    *param_1 = *param_2;
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


// ---- FUN_1000_50ac @ 1000:50ac

int __cdecl16far FUN_1000_50ac(byte *param_1,char *param_2)

{
  byte *pbVar1;
  char *pcVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  byte *pbVar7;
  char *pcVar8;
  byte *pbVar9;
  undefined2 uVar10;
  bool bVar11;
  bool bVar12;
  
  pbVar7 = (byte *)param_1;
  uVar10 = (undefined2)((ulong)param_2 >> 0x10);
  pcVar8 = (char *)param_2;
  iVar4 = 0;
  uVar5 = 0xffff;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar2 = pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (*pcVar2 != '\0');
  pcVar6 = (char *)~uVar5;
  bVar11 = pcVar8 < pcVar6;
  pbVar9 = (byte *)(pcVar8 + -(int)pcVar6);
  bVar12 = pbVar9 == (byte *)0x0;
  do {
    if (pcVar6 == (char *)0x0) break;
    pcVar6 = pcVar6 + -1;
    pbVar3 = pbVar9;
    pbVar9 = pbVar9 + 1;
    pbVar1 = pbVar7;
    pbVar7 = pbVar7 + 1;
    bVar11 = *pbVar1 < *pbVar3;
    bVar12 = *pbVar1 == *pbVar3;
  } while (bVar12);
  if (!bVar12) {
    iVar4 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
  }
  return iVar4;
}


// ---- FUN_1000_52f6 @ 1000:52f6

void __cdecl16far FUN_1000_52f6(undefined2 param_1,undefined2 param_2)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  
  *(undefined1 *)0x219e = 0x49;
  *(undefined2 *)0x219a = param_1;
  *(undefined2 *)0x219c = param_2;
  *(undefined2 *)0x2194 = param_1;
  *(undefined2 *)0x2196 = param_2;
  uVar1 = func_0x000050e2(0x1000,param_1,param_2);
  *(undefined2 *)0x2198 = uVar1;
  func_0x00003aa6(0x2b4,0x2194);
  return;
}


// ---- FUN_1000_5342 @ 1000:5342

undefined2 __cdecl16far FUN_1000_5342(undefined2 param_1,undefined2 param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined2 uVar3;
  undefined2 unaff_DS;
  
  *(undefined1 *)0x21aa = 0x42;
  *(undefined2 *)0x21a6 = param_1;
  *(undefined2 *)0x21a8 = param_2;
  *(undefined2 *)0x21a0 = param_1;
  *(undefined2 *)0x21a2 = param_2;
  *(undefined2 *)0x21a4 = 0x7fff;
  uVar3 = func_0x000042fa(0x1000,0x21a0);
  piVar1 = (int *)0x21a4;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 < 0) {
    func_0x000036a0(0x2b4,0,0x21a0);
  }
  else {
    puVar2 = (undefined1 *)*(undefined4 *)0x21a0;
    *(int *)0x21a0 = *(int *)0x21a0 + 1;
    *puVar2 = 0;
  }
  return uVar3;
}


// ---- FUN_1000_53ac @ 1000:53ac

char * __cdecl16far FUN_1000_53ac(char *param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  bool bVar10;
  
  uVar8 = (undefined2)((ulong)param_2 >> 0x10);
  uVar3 = 0xffff;
  pcVar2 = (char *)param_2;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar1 = pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (*pcVar1 != '\0');
  pcVar2 = (char *)param_1;
  if (~uVar3 != 1) {
    uVar3 = ~uVar3 - 2;
    uVar9 = (undefined2)((ulong)param_1 >> 0x10);
    uVar4 = 0xffff;
    pcVar6 = pcVar2;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar1 = pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (*pcVar1 != '\0');
    iVar5 = (~uVar4 - 1) - uVar3;
    bVar10 = iVar5 == 0;
    if (~uVar4 - 1 < uVar3 || bVar10) {
LAB_1000_5409:
      pcVar2 = (char *)0x0;
    }
    else {
      do {
        do {
          if (iVar5 == 0) break;
          iVar5 = iVar5 + -1;
          pcVar1 = pcVar2;
          pcVar2 = pcVar2 + 1;
          bVar10 = *param_2 == *pcVar1;
        } while (!bVar10);
        if (!bVar10) goto LAB_1000_5409;
        uVar4 = uVar3;
        pcVar7 = pcVar2;
        pcVar6 = (char *)param_2;
        if (uVar3 == 0) break;
        do {
          pcVar6 = pcVar6 + 1;
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          pcVar1 = pcVar7;
          pcVar7 = pcVar7 + 1;
          bVar10 = *pcVar6 == *pcVar1;
        } while (bVar10);
      } while (!bVar10);
      pcVar2 = pcVar2 + -1;
    }
  }
  return pcVar2;
}


// ---- FUN_1000_5414 @ 1000:5414

undefined2 * __cdecl16far FUN_1000_5414(undefined2 *param_1,undefined2 *param_2,int param_3)

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
        iVar8 = iVar8 + 0x1000;
      }
      if (puVar6 == (undefined2 *)0x0) {
        iVar7 = iVar7 + 0x1000;
      }
    }
  }
  return (undefined2 *)param_1;
}


// ---- FUN_1000_5472 @ 1000:5472

undefined2 * __cdecl16far FUN_1000_5472(undefined2 *param_1,undefined1 param_2,uint param_3)

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


// ---- FUN_1000_5550 @ 1000:5550

void __stdcall16far FUN_1000_5550(undefined2 *param_1)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 *puVar3;
  undefined2 uVar4;
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  puVar3 = (undefined2 *)param_1;
  uVar2 = puVar3[1];
  uVar1 = FUN_1000_55a2();
  *puVar3 = uVar1;
  puVar3[1] = uVar2;
  return;
}


// ---- FUN_1000_55a2 @ 1000:55a2

void __cdecl16far FUN_1000_55a2(void)

{
  uint in_CX;
  uint uVar1;
  
  for (uVar1 = in_CX & 0xff; uVar1 != 0; uVar1 = uVar1 - 1) {
  }
  return;
}


// ---- entry @ 164b:0012

void __cdecl16far entry(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  int unaff_ES;
  
  iRam000164b4 = unaff_ES + 0x10;
  DAT_3000_6c3e = iRam000164b4 + iRam000164bc;
  puVar4 = (undefined1 *)(iRam000164b6 + -1);
  puVar5 = puVar4;
  for (iVar3 = iRam000164b6; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + -1;
    puVar1 = puVar4;
    puVar4 = puVar4 + -1;
    *puVar2 = *puVar1;
  }
  DAT_3000_6c3c = 0x38;
  return;
}


