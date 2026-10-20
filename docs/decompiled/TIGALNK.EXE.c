// Decompiled with Ghidra from TIGALNK.EXE
// Format: Old-style DOS Executable (MZ), image base 0000:0000

// ---- FUN_1000_013e @ 1000:013e

bool __cdecl16near FUN_1000_013e(void)

{
  long lVar1;
  
  lVar1 = FUN_1000_4522(1);
  return lVar1 == 0;
}


// ---- FUN_1000_0156 @ 1000:0156

void __cdecl16near FUN_1000_0156(void)

{
  FUN_1000_44f2();
  return;
}


// ---- FUN_1000_015c @ 1000:015c

void __cdecl16near FUN_1000_015c(void)

{
  FUN_1000_4522(0);
  return;
}


// ---- FUN_1000_0166 @ 1000:0166

void __cdecl16near FUN_1000_0166(void)

{
  return;
}


// ---- FUN_1000_0168 @ 1000:0168

undefined2 __cdecl16near FUN_1000_0168(void)

{
  int iVar1;
  undefined2 unaff_DS;
  
  iVar1 = FUN_1000_01ca();
  if (iVar1 != 0) {
    iVar1 = FUN_1000_0c0a();
    if (iVar1 != 0) {
      iVar1 = FUN_1000_05b2();
      if (iVar1 != 0) {
        if (*(int *)0x120 != 0 || *(int *)0x11e != 0) {
          FUN_1000_1c64(*(undefined2 *)0x11e,*(undefined2 *)0x120);
        }
        if (*(int *)0x118 != 0 || *(int *)0x116 != 0) {
          FUN_1000_1c64(*(undefined2 *)0x116,*(undefined2 *)0x118);
        }
        if (*(int *)0x114 != 0 || *(int *)0x112 != 0) {
          FUN_1000_1c64(*(undefined2 *)0x112,*(undefined2 *)0x114);
        }
        return 1;
      }
    }
  }
  return 0;
}


// ---- FUN_1000_01ca @ 1000:01ca

undefined2 __cdecl16near FUN_1000_01ca(void)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 unaff_DS;
  undefined4 uVar6;
  int local_4;
  
  *(undefined2 *)0x18a6 = 0;
  iVar1 = FUN_1000_24b6(0x144c);
  if (iVar1 == 0) {
    return 0;
  }
  if (*(int *)0x144c != 0x90) {
    FUN_1000_1ae6(0x144c);
    if (*(int *)0x144c != 0x90) {
      return 0;
    }
    *(undefined2 *)0x18a6 = 1;
    FUN_1000_1ae6(0x144e);
    FUN_1000_1a64(0x1450);
    FUN_1000_1a64(0x1454);
    FUN_1000_1a64(0x1458);
    FUN_1000_1ae6(0x145c);
    FUN_1000_1ae6(0x145e);
  }
  *(int *)0x1220 = (*(byte *)0x145f & 2) << 8;
  if (*(int *)0x145c == 0x1c) {
    iVar1 = FUN_1000_24b6(0x185e);
    if (iVar1 != 1) {
      return 0;
    }
    if (*(int *)0x18a6 != 0) {
      FUN_1000_1ae6(0x185e);
      FUN_1000_1ae6(0x1860);
      FUN_1000_1a64(0x1862);
      FUN_1000_1a64(0x1866);
      FUN_1000_1a64(0x186a);
      FUN_1000_1a64(0x186e);
      FUN_1000_1a64(0x1872);
      FUN_1000_1a64(0x1876);
    }
    uVar3 = *(undefined2 *)0x1870;
    *(undefined2 *)0x11a4 = *(undefined2 *)0x186e;
    *(undefined2 *)0x11a6 = uVar3;
  }
  else if ((*(int *)0x145c != 0) &&
          (iVar1 = FUN_1000_244a(*(undefined2 *)0x1222,*(undefined2 *)0x1224,*(undefined2 *)0x145c,0
                                 ,1), iVar1 == -1)) {
    return 0;
  }
  iVar1 = *(int *)0x144e;
  *(int *)0x1460 = iVar1;
  iVar1 = iVar1 * 0x28;
  uVar6 = FUN_1000_1c2e(iVar1,iVar1 >> 0xf);
  iVar1 = (int)((ulong)uVar6 >> 0x10);
  *(undefined2 *)0x112 = (int)uVar6;
  *(int *)0x114 = iVar1;
  if (iVar1 == 0 && *(int *)0x112 == 0) {
    return 0;
  }
  local_4 = 0;
  while( true ) {
    if (*(int *)0x1460 <= local_4) {
      *(undefined2 *)0x10e = 0xffff;
      *(undefined2 *)0x110 = 0xffff;
      *(undefined2 *)0x11a = 0;
      for (local_4 = 0; local_4 < *(int *)0x1460; local_4 = local_4 + 1) {
        iVar1 = local_4 * 0x28;
        uVar6 = FUN_1000_1cea(*(undefined2 *)0x112,*(undefined2 *)0x114,iVar1,iVar1 >> 0xf,0x28,
                              0x11ea);
        uVar3 = (undefined2)((ulong)uVar6 >> 0x10);
        iVar2 = (int)uVar6;
        if (*(int *)0x18a6 != 0) {
          FUN_1000_1a64(iVar2 + 8,uVar3);
          FUN_1000_1a64(iVar2 + 0xc,uVar3);
          FUN_1000_1a64(iVar2 + 0x10,uVar3);
          FUN_1000_1a64(iVar2 + 0x14,uVar3);
          FUN_1000_1a64(iVar2 + 0x18,uVar3);
          FUN_1000_1a64(iVar2 + 0x1c,uVar3);
          FUN_1000_1ae6(iVar2 + 0x20,uVar3);
          FUN_1000_1ae6(iVar2 + 0x22,uVar3);
          FUN_1000_1ae6(iVar2 + 0x24,uVar3);
          FUN_1000_1d6a(*(undefined2 *)0x112,*(undefined2 *)0x114,iVar1,iVar1 >> 0xf,0x28,0x11ea);
        }
        *(undefined2 *)(local_4 * 4 + 0x1464) = 0;
        *(undefined2 *)(local_4 * 4 + 0x1462) = 0;
        if (((*(byte *)(iVar2 + 0x24) & 0x10) != 0) &&
           (iVar1 = FUN_1000_4094(uVar6,0x122), iVar1 == 0)) {
          *(int *)0x110 = local_4;
        }
        if (((*(byte *)(iVar2 + 0x24) & 0x80) != 0) &&
           (iVar1 = FUN_1000_4094(uVar6,0x129), iVar1 == 0)) {
          *(int *)0x10e = local_4;
        }
      }
      FUN_1000_1b06();
      *(undefined2 *)0x11c = 0;
      for (local_4 = 0; local_4 < *(int *)0x1460; local_4 = local_4 + 1) {
        *(uint *)0x11c =
             *(uint *)0x11c |
             (uint)(*(int *)(local_4 * 4 + 0x1464) != 0 || *(int *)(local_4 * 4 + 0x1462) != 0);
      }
      if (*(int *)0x108 == 0) {
        *(undefined2 *)0x11c = 0;
      }
      if (1 < *(int *)0x106) {
        if (*(int *)0x11c == 0) {
          uVar3 = 0x13f;
        }
        else {
          uVar3 = 0x12e;
        }
        if (*(int *)0x1220 == 0) {
          uVar4 = 0x14e;
        }
        else {
          uVar4 = 0x148;
        }
        if (*(int *)0x18a6 == 0) {
          uVar5 = 0x15f;
        }
        else {
          uVar5 = 0x157;
        }
        FUN_1000_1bfc(0x169,*(undefined2 *)0x1460,uVar5,uVar4,uVar3);
      }
      return 1;
    }
    iVar1 = FUN_1000_24b6(0x11ea);
    if (iVar1 == 0) break;
    FUN_1000_1d6a(*(undefined2 *)0x112,*(undefined2 *)0x114,local_4 * 0x28,local_4 * 0x28 >> 0xf,
                  0x28,0x11ea);
    local_4 = local_4 + 1;
  }
  return 0;
}


// ---- FUN_1000_05b2 @ 1000:05b2

int __cdecl16near FUN_1000_05b2(void)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined2 uVar6;
  undefined2 unaff_DS;
  undefined4 uVar7;
  int local_6;
  int local_4;
  
  local_6 = 1;
  if (*(int *)0x108 != 0) {
    local_4 = 0;
    while ((local_4 < *(int *)0x1460 && (local_6 != 0))) {
      uVar7 = FUN_1000_1cea(*(undefined2 *)0x112,*(undefined2 *)0x114,local_4 * 0x28,
                            local_4 * 0x28 >> 0xf,0x28,0x11ea);
      uVar6 = (undefined2)((ulong)uVar7 >> 0x10);
      iVar4 = (int)uVar7;
      if (((*(byte *)(iVar4 + 0x24) & 0x20) != 0) &&
         (iVar5 = FUN_1000_4094(uVar7,0x193), iVar5 == 0)) {
        uVar3 = *(uint *)(local_4 * 4 + 0x1462);
        iVar5 = *(int *)(local_4 * 4 + 0x1464);
        puVar1 = (uint *)0x11a4;
        uVar2 = *puVar1;
        *puVar1 = *puVar1 + uVar3;
        *(int *)0x11a6 = *(int *)0x11a6 + iVar5 + (uint)CARRY2(uVar2,uVar3);
      }
      if ((((*(int *)(iVar4 + 0x16) != 0 || *(int *)(iVar4 + 0x14) != 0) ||
           ((local_4 == *(int *)0x10e && (*(int *)0x10c != 0)))) &&
          (*(int *)(iVar4 + 0x12) != 0 || *(int *)(iVar4 + 0x10) != 0)) &&
         ((((*(uint *)(iVar4 + 0x24) & 1) == 0 && (local_4 != *(int *)0x110)) &&
          ((*(uint *)(iVar4 + 0x24) & 2) == 0)))) {
        if (1 < *(int *)0x106) {
          uVar2 = *(uint *)(local_4 * 4 + 0x1462);
          FUN_1000_1bfc(0x199,iVar4,uVar2 + *(uint *)(iVar4 + 0xc),
                        *(int *)(local_4 * 4 + 0x1464) + *(int *)(iVar4 + 0xe) +
                        (uint)CARRY2(uVar2,*(uint *)(iVar4 + 0xc)),*(undefined2 *)(iVar4 + 0x10),
                        *(undefined2 *)(iVar4 + 0x12));
        }
        local_6 = FUN_1000_0738(local_4);
        if (1 < *(int *)0x106) {
          FUN_1000_1bfc(0x1c3);
        }
      }
      local_4 = local_4 + 1;
    }
    if (*(int *)0x110 != -1) {
      if (1 < *(int *)0x106) {
        uVar7 = FUN_1000_1cea(*(undefined2 *)0x112,*(undefined2 *)0x114,*(int *)0x110 * 0x28,
                              *(int *)0x110 * 0x28 >> 0xf,0x28,0x11ea);
        FUN_1000_1bfc(0x1c5,uVar7);
      }
      local_6 = FUN_1000_0738(*(undefined2 *)0x110);
      if (1 < *(int *)0x106) {
        FUN_1000_1bfc(0x1e7);
      }
    }
    return local_6;
  }
  return 1;
}


// ---- FUN_1000_0738 @ 1000:0738

undefined2 __cdecl16near FUN_1000_0738(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined2 uVar6;
  undefined2 unaff_DS;
  bool bVar7;
  undefined4 uVar8;
  int local_22;
  uint local_1e;
  int local_1c;
  uint local_1a;
  uint local_14;
  uint local_12;
  uint local_10;
  uint local_e;
  undefined2 local_8;
  uint local_6;
  uint local_4;
  
  uVar8 = FUN_1000_1cea(*(undefined2 *)0x112,*(undefined2 *)0x114,param_1 * 0x28,
                        param_1 * 0x28 >> 0xf,0x28,0x11ea);
  uVar6 = (undefined2)((ulong)uVar8 >> 0x10);
  iVar2 = (int)uVar8;
  local_1e = *(uint *)(iVar2 + 0xc);
  local_1c = *(int *)(iVar2 + 0xe);
  local_1a = 0;
  local_4 = 0;
  if (((*(int *)0x11c != 0) && (*(int *)(iVar2 + 0x20) != 0)) &&
     ((iVar3 = FUN_1000_244a(*(undefined2 *)0x1222,*(undefined2 *)0x1224,
                             *(undefined2 *)(iVar2 + 0x18),*(undefined2 *)(iVar2 + 0x1a),0),
      iVar3 == -1 || (iVar3 = FUN_1000_1552(&local_10), iVar3 == 0)))) {
    return 0;
  }
  if (param_1 == *(int *)0x10e) {
    bVar7 = false;
    for (local_14 = 0; (!bVar7 && (local_14 < 0x400)); local_14 = local_14 + 1) {
      *(undefined1 *)(local_14 + 0x18ba) = 0;
      bVar7 = 0xfffe < local_14;
    }
  }
  local_12 = 0;
  local_14 = 0;
  do {
    uVar4 = *(uint *)(iVar2 + 0x12);
    if (((uint)((int)uVar4 >> 3) < local_12) ||
       (((uint)((int)uVar4 >> 3) <= local_12 &&
        ((uint)(((ulong)(((int)uVar4 >> 2 & 1U) != 0) << 0x10 |
                ((ulong)(((int)uVar4 >> 1 & 1U) != 0) << 0x10 |
                (ulong)(CONCAT12((uVar4 & 1) != 0,*(undefined2 *)(iVar2 + 0x10)) >> 1)) >> 1) >> 1)
         <= local_14)))) {
      return 1;
    }
    for (local_22 = 0; local_22 < (int)local_1a; local_22 = local_22 + 1) {
      *(undefined1 *)(local_22 + 0x18ba) = *(undefined1 *)(local_6 + local_22 + 0x18ba);
    }
    uVar4 = *(uint *)(iVar2 + 0x12);
    uVar1 = (uint)(((ulong)(((int)uVar4 >> 2 & 1U) != 0) << 0x10 |
                   ((ulong)(((int)uVar4 >> 1 & 1U) != 0) << 0x10 |
                   (ulong)(CONCAT12((uVar4 & 1) != 0,*(undefined2 *)(iVar2 + 0x10)) >> 1)) >> 1) >>
                  1);
    local_6 = uVar1 - local_14;
    if ((((int)uVar4 >> 3) - local_12 != (uint)(uVar1 < local_14)) || (0x400 < local_6)) {
      local_6 = 0x400;
    }
    if ((param_1 != *(int *)0x10e) &&
       ((uVar4 = local_1a + *(uint *)(iVar2 + 0x14),
        iVar3 = FUN_1000_244a(*(undefined2 *)0x1222,*(undefined2 *)0x1224,uVar4 + local_14,
                              ((int)local_1a >> 0xf) + *(int *)(iVar2 + 0x16) +
                              (uint)CARRY2(local_1a,*(uint *)(iVar2 + 0x14)) + local_12 +
                              (uint)CARRY2(uVar4,local_14),0), iVar3 == -1 ||
        (iVar3 = FUN_1000_24b6(local_1a + 0x18ba), iVar3 != 1)))) {
      return 0;
    }
    local_1a = 0;
    if (*(int *)0x11c != 0) {
      while (local_4 < *(uint *)(iVar2 + 0x20)) {
        uVar4 = (((((int)local_6 >> 0xf) << 1 | (uint)((int)local_6 < 0)) << 1 |
                 (uint)((int)(local_6 << 1) < 0)) << 1 | (uint)((int)(local_6 << 2) < 0)) + local_1c
                + (uint)CARRY2(local_6 * 8,local_1e);
        if ((uVar4 < local_e) || ((uVar4 <= local_e && (local_6 * 8 + local_1e <= local_10))))
        break;
        uVar4 = (local_e - local_1c) - (uint)(local_10 < local_1e);
        iVar3 = (int)(((ulong)((uVar4 >> 2 & 1) != 0) << 0x10 |
                      ((ulong)((uVar4 >> 1 & 1) != 0) << 0x10 |
                      (ulong)(CONCAT12((uVar4 & 1) != 0,local_10 - local_1e) >> 1)) >> 1) >> 1);
        iVar5 = FUN_1000_15cc(local_8);
        if (iVar5 < 2) {
          iVar5 = 2;
        }
        else {
          iVar5 = FUN_1000_15cc(local_8);
        }
        if ((int)local_6 < iVar3 + iVar5) {
          uVar4 = iVar3 - iVar3 % 2;
          local_1a = local_6 - uVar4;
          local_6 = uVar4;
          break;
        }
        FUN_1000_12b2(&local_10);
        uVar4 = local_4 + 1;
        bVar7 = local_4 < *(uint *)(iVar2 + 0x20);
        local_4 = uVar4;
        if ((bVar7) &&
           ((iVar3 = FUN_1000_244a(*(undefined2 *)0x1222,*(undefined2 *)0x1224,
                                   uVar4 * 10 + *(uint *)(iVar2 + 0x18),
                                   ((((uint)((int)uVar4 < 0) << 1 | (uint)((int)(uVar4 * 2) < 0)) +
                                    (uint)CARRY2(uVar4 * 4,uVar4)) * 2 |
                                   (uint)((int)(uVar4 * 5) < 0)) + *(int *)(iVar2 + 0x1a) +
                                   (uint)CARRY2(uVar4 * 10,*(uint *)(iVar2 + 0x18)),0), iVar3 == -1
            || (iVar3 = FUN_1000_1552(&local_10), iVar3 == 0)))) {
          return 0;
        }
      }
    }
    if (param_1 == *(int *)0x110) {
      iVar3 = FUN_1000_0a90(uVar8,&local_6);
    }
    else {
      iVar3 = FUN_1000_1b0c(0x18ba);
    }
    if (iVar3 == 0) {
      return 0;
    }
    bVar7 = CARRY2(local_1e,local_6 * 8);
    local_1e = local_1e + local_6 * 8;
    local_1c = local_1c +
               (((((int)local_6 >> 0xf) << 1 | (uint)((int)local_6 < 0)) << 1 |
                (uint)((int)(local_6 << 1) < 0)) << 1 | (uint)((int)(local_6 << 2) < 0)) +
               (uint)bVar7;
    if (1 < *(int *)0x106) {
      FUN_1000_1bfc(0x1e9);
    }
    bVar7 = CARRY2(local_14,local_6);
    local_14 = local_14 + local_6;
    local_12 = local_12 + ((int)local_6 >> 0xf) + (uint)bVar7;
  } while( true );
}


// ---- FUN_1000_0a90 @ 1000:0a90

undefined2 __cdecl16near
FUN_1000_0a90(undefined2 param_1,undefined2 param_2,int *param_3,int *param_4)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined2 unaff_DS;
  undefined4 uVar5;
  int local_6;
  
  local_6 = 0;
  do {
    if (*param_3 <= local_6) {
      return 1;
    }
    if (*(int *)0x11a == 0) {
      if (local_6 % 1 != 0) {
        local_6 = local_6 + (1 - local_6 % 1);
      }
      if (*param_3 < local_6 + 2) {
        *param_4 = *param_4 + (*param_3 - local_6);
        *param_3 = local_6;
        return 1;
      }
      iVar2 = FUN_1000_16cc(local_6 + 0x18ba);
      if (iVar2 == 0) {
        return 1;
      }
      if (*param_3 < local_6 + 6) {
        *param_4 = *param_4 + (*param_3 - local_6);
        *param_3 = local_6;
        return 1;
      }
      *(int *)0x11a = iVar2;
      uVar5 = FUN_1000_16cc(local_6 + 0x18bc);
      *(undefined2 *)0x123a = (int)uVar5;
      *(undefined2 *)0x123c = (int)((ulong)uVar5 >> 0x10);
      local_6 = local_6 + 6;
    }
    uVar4 = *(int *)0x11a * 2;
    iVar2 = ((*param_3 - local_6) + *(int *)0x11a * -2 & -(uint)((uint)(*param_3 - local_6) < uVar4)
            ) + uVar4;
    if (iVar2 != 0) {
      FUN_1000_1cea(*(undefined2 *)0x112,*(undefined2 *)0x114,*(int *)0x10e * 0x28,
                    *(int *)0x10e * 0x28 >> 0xf,0x28,0x187a);
      iVar3 = FUN_1000_1b0c(local_6 + 0x18ba);
      if (iVar3 == 0) {
        return 0;
      }
      puVar1 = (uint *)0x123a;
      uVar4 = *puVar1;
      *puVar1 = *puVar1 + iVar2 * 8;
      *(int *)0x123c =
           *(int *)0x123c +
           ((((iVar2 >> 0xf) << 1 | (uint)(iVar2 < 0)) << 1 | (uint)(iVar2 * 2 < 0)) << 1 |
           (uint)(iVar2 * 4 < 0)) + (uint)CARRY2(uVar4,iVar2 * 8);
      *(int *)0x11a = *(int *)0x11a - iVar2 / 2;
    }
    local_6 = local_6 + iVar2;
  } while( true );
}


// ---- FUN_1000_0c0a @ 1000:0c0a

undefined2 __cdecl16near FUN_1000_0c0a(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined2 unaff_DS;
  undefined4 uVar4;
  undefined2 uVar5;
  undefined1 local_20 [2];
  undefined1 local_1e [16];
  char local_e;
  uint local_c;
  uint local_a;
  int local_8;
  uint local_6;
  int local_4;
  
  if ((*(int *)0x10a == 0) && (*(int *)0x11c == 0)) {
    return 1;
  }
  uVar5 = 0;
  uVar4 = FUN_1000_43c2(*(undefined2 *)0x1458,*(undefined2 *)0x145a,0x12,0);
  iVar1 = FUN_1000_244a(*(undefined2 *)0x1222,*(undefined2 *)0x1224,(uint)uVar4 + *(uint *)0x1454,
                        (int)((ulong)uVar4 >> 0x10) + *(int *)0x1456 +
                        (uint)CARRY2((uint)uVar4,*(uint *)0x1454),uVar5);
  if ((iVar1 == -1) || (iVar1 = FUN_1000_24b6(&local_6), iVar1 != 1)) {
    local_4 = 0;
    local_6 = 0;
    *(undefined2 *)0x118 = 0;
    *(undefined2 *)0x116 = 0;
  }
  else {
    if (*(int *)0x18a6 != 0) {
      FUN_1000_1a64(&local_6);
    }
    uVar4 = FUN_1000_1c2e(local_6,local_4);
    iVar1 = (int)((ulong)uVar4 >> 0x10);
    *(undefined2 *)0x116 = (int)uVar4;
    *(int *)0x118 = iVar1;
    if (iVar1 == 0 && *(int *)0x116 == 0) {
      return 0;
    }
    FUN_1000_1d6a(*(undefined2 *)0x116,*(undefined2 *)0x118,0,0,4,&local_6);
    local_8 = 0;
    for (local_a = 4; (local_8 <= local_4 && ((local_8 < local_4 || (local_a < local_6))));
        local_a = local_a + 1) {
      iVar1 = FUN_1000_24b6(local_20);
      if (iVar1 == 0) {
        return 0;
      }
      FUN_1000_1d6a(*(undefined2 *)0x116,*(undefined2 *)0x118,local_a,local_8,1,local_20);
      local_8 = local_8 + (uint)(0xfffe < local_a);
    }
  }
  if (*(int *)0x11c != 0) {
    uVar2 = *(uint *)0x1458;
    if ((-1 < *(int *)0x145a) && ((0 < *(int *)0x145a || (0x80 < uVar2)))) {
      uVar2 = 0x80;
    }
    *(uint *)0x18a8 = uVar2;
    uVar4 = FUN_1000_1c2e(uVar2 << 3,(int)(uVar2 << 3) >> 0xf);
    iVar1 = (int)((ulong)uVar4 >> 0x10);
    *(undefined2 *)0x11e = (int)uVar4;
    *(int *)0x120 = iVar1;
    if (iVar1 == 0 && *(int *)0x11e == 0) {
      return 0;
    }
    *(undefined2 *)0x1226 = 0;
  }
  if (1 < *(int *)0x106) {
    if (local_4 == 0 && local_6 == 0) {
      iVar1 = 0;
      iVar3 = 0;
    }
    else {
      iVar1 = local_6 - 4;
      iVar3 = local_4 - (uint)(local_6 < 4);
    }
    FUN_1000_1bfc(0x1eb,*(undefined2 *)0x1458,*(undefined2 *)0x145a,iVar1,iVar3);
  }
  if (*(int *)0x10a != 0) {
    uVar5 = FUN_1000_1b48(*(undefined2 *)0x11c);
    return uVar5;
  }
  local_c = 0;
  uVar2 = local_c;
  while( true ) {
    local_c = uVar2;
    if (*(uint *)0x1458 <= local_c) {
      return 1;
    }
    uVar2 = FUN_1000_0e4a(local_c,local_1e);
    if (uVar2 == 0) break;
    if (((((local_e == '\x02') || (local_e == '\x05')) || (local_e == '\x03')) ||
        (((local_e == '\x06' || (local_e == 'd')) || (local_e == 'e')))) &&
       (iVar1 = FUN_1000_120e(local_c,local_1e), iVar1 == 0)) {
      return 0;
    }
  }
  return 0;
}


// ---- FUN_1000_0e4a @ 1000:0e4a

int __cdecl16near FUN_1000_0e4a(uint param_1,int *param_2,int param_3,undefined2 param_4)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined2 unaff_DS;
  
  uVar4 = (uint)((ulong)param_1 * 0x12);
  iVar5 = FUN_1000_244a(*(undefined2 *)0x1222,*(undefined2 *)0x1224,uVar4 + *(uint *)0x1454,
                        (int)((ulong)param_1 * 0x12 >> 0x10) + *(int *)0x1456 +
                        (uint)CARRY2(uVar4,*(uint *)0x1454),0);
  if (iVar5 == -1) {
    return 0;
  }
  iVar5 = FUN_1000_24b6((int *)param_2,param_2._2_2_,0x12,1,*(undefined2 *)0x1222,
                        *(undefined2 *)0x1224);
  if (iVar5 != 1) {
    return 0;
  }
  if ((*(char *)((int)(int *)param_2 + 0x11) != '\0') &&
     (iVar5 = FUN_1000_24b6(param_3,param_4,0x12,1,*(undefined2 *)0x1222,*(undefined2 *)0x1224),
     iVar5 != 1)) {
    return 0;
  }
  if (*(int *)0x18a6 == 0) goto LAB_1000_1134;
  if (((int *)param_2)[1] == 0 && *param_2 == 0) {
    FUN_1000_1a64((int *)param_2 + 1,param_2._2_2_);
  }
  FUN_1000_1a64((int *)param_2 + 4,param_2._2_2_);
  FUN_1000_1ae6((int *)param_2 + 6,param_2._2_2_);
  FUN_1000_1ae6((int *)param_2 + 7,param_2._2_2_);
  if ((*(char *)((int)(int *)param_2 + 0x11) == '\0') ||
     (bVar2 = *(byte *)((int *)param_2 + 8), bVar2 == 0x67)) goto LAB_1000_1134;
  if (bVar2 < 0x68) {
    if (bVar2 != 0xf) {
      if ('\x0f' < (char)bVar2) {
        if (bVar2 != 100) {
          if (bVar2 != 0x65) {
            if (bVar2 == 0x66) {
              FUN_1000_1a64(param_3 + 4,param_4);
              FUN_1000_1a64(param_3,param_4);
              goto LAB_1000_1134;
            }
            goto LAB_1000_0fde;
          }
          iVar5 = FUN_1000_4094((int *)param_2,param_2._2_2_,0x213);
          if (iVar5 == 0) {
            FUN_1000_1ae6(param_3 + 6,param_4);
            FUN_1000_1a64(param_3,param_4);
            FUN_1000_1a64(param_3 + 8,param_4);
          }
        }
        FUN_1000_1ae6(param_3 + 4,param_4);
        FUN_1000_1a64(param_3 + 0xc,param_4);
        goto LAB_1000_1134;
      }
      if ((bVar2 != 10) && (bVar2 != 0xc)) goto LAB_1000_0fde;
    }
    FUN_1000_1a64(param_3 + 4,param_4);
    FUN_1000_1a64(param_3 + 0xc,param_4);
  }
  else {
LAB_1000_0fde:
    if ((*(byte *)((int *)param_2 + 7) & 0x30) == 0x20) {
      FUN_1000_1a64(param_3,param_4);
      FUN_1000_1a64(param_3 + 4,param_4);
      FUN_1000_1a64(param_3 + 8,param_4);
      FUN_1000_1a64(param_3 + 0xc,param_4);
    }
    else if ((*(byte *)((int *)param_2 + 7) & 0x30) == 0x30) {
      FUN_1000_1a64(param_3,param_4);
      FUN_1000_1a64(param_3 + 4,param_4);
      FUN_1000_1ae6(param_3 + 8,param_4);
      FUN_1000_1ae6(param_3 + 10,param_4);
      FUN_1000_1ae6(param_3 + 0xc,param_4);
      FUN_1000_1ae6(param_3 + 0xe,param_4);
    }
    else if (((int *)param_2)[7] == 0) {
      FUN_1000_1a64(param_3,param_4);
      FUN_1000_1ae6(param_3 + 4,param_4);
      FUN_1000_1ae6(param_3 + 6,param_4);
    }
    else {
      FUN_1000_1a64(param_3 + 4,param_4);
      FUN_1000_1a64(param_3,param_4);
    }
  }
LAB_1000_1134:
  iVar5 = (int)(char)((int *)param_2)[8];
  if ((0 < iVar5 + -1) &&
     ((iVar5 == 3 || iVar5 + -2 < 1 ||
      ((0 < iVar5 + -4 &&
       ((iVar5 == 6 || iVar5 + -5 < 1 || ((0x5d < iVar5 + -6 && (iVar5 + -100 < 2)))))))))) {
    if (((int *)param_2)[6] == 0) {
      FUN_1000_1b2e(param_1,(int *)param_2,param_2._2_2_,param_3,param_4);
    }
    else if (0 < ((int *)param_2)[6]) {
      uVar3 = *(uint *)(((int *)param_2)[6] * 4 + 0x145e);
      iVar5 = *(int *)(((int *)param_2)[6] * 4 + 0x1460);
      puVar1 = (uint *)((int *)param_2 + 4);
      uVar4 = *puVar1;
      *puVar1 = *puVar1 + uVar3;
      ((int *)param_2)[5] = ((int *)param_2)[5] + iVar5 + (uint)CARRY2(uVar4,uVar3);
    }
  }
  return (int)*(char *)((int)(int *)param_2 + 0x11) + param_1 + 1;
}


// ---- FUN_1000_11ac @ 1000:11ac

undefined2 __cdecl16near FUN_1000_11ac(int *param_1)

{
  int *piVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  piVar1 = (int *)param_1;
  if (piVar1[1] == 0 && *param_1 == 0) {
    if (*(int *)0x18a6 != 0) {
      FUN_1000_1a64(piVar1 + 2,uVar2);
    }
    uVar2 = FUN_1000_1d28(*(undefined2 *)0x116,*(undefined2 *)0x118,piVar1[2],piVar1[3]);
    return uVar2;
  }
  FUN_1000_4118(0x1214);
  *(undefined1 *)0x121c = 0;
  return 0x1214;
}


// ---- FUN_1000_120e @ 1000:120e

undefined2 __cdecl16near FUN_1000_120e(undefined2 param_1,undefined4 param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  undefined4 uVar3;
  undefined2 local_a;
  undefined2 local_8;
  undefined2 local_6;
  undefined2 local_4;
  
  if (*(int *)0x11c == 0) {
    return 1;
  }
  if (*(int *)0x18a8 <= *(int *)0x1226) {
    *(int *)0x18a8 = *(int *)0x18a8 + 0x80;
    uVar3 = FUN_1000_1c46(*(undefined2 *)0x11e,*(undefined2 *)0x120,*(int *)0x18a8 << 3,
                          (*(int *)0x18a8 << 3) >> 0xf);
    *(undefined2 *)0x11e = (int)uVar3;
    *(undefined2 *)0x120 = (int)((ulong)uVar3 >> 0x10);
  }
  if (*(int *)0x120 != 0 || *(int *)0x11e != 0) {
    local_a = param_1;
    uVar2 = (undefined2)((ulong)param_2 >> 0x10);
    iVar1 = (int)param_2;
    local_8 = *(undefined2 *)(iVar1 + 0xc);
    local_6 = *(undefined2 *)(iVar1 + 8);
    local_4 = *(undefined2 *)(iVar1 + 10);
    FUN_1000_1d6a(*(undefined2 *)0x11e,*(undefined2 *)0x120,*(int *)0x1226 << 3,
                  (*(int *)0x1226 << 3) >> 0xf,8,&local_a);
    *(int *)0x1226 = *(int *)0x1226 + 1;
    return 1;
  }
  return 0;
}


// ---- FUN_1000_12b2 @ 1000:12b2

/* WARNING: Control flow encountered bad instruction data */

uint __cdecl16near
FUN_1000_12b2(undefined4 param_1,undefined2 param_2,undefined2 param_3,int param_4)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  byte in_CL;
  int iVar7;
  uint uVar8;
  int unaff_SI;
  undefined2 uVar9;
  uint unaff_SS;
  undefined2 unaff_DS;
  bool bVar10;
  long lVar11;
  char acStack_bb4 [2952];
  undefined2 uStack_2c;
  undefined2 uStack_2a;
  int iStack_28;
  int iVar12;
  int local_1a;
  uint local_18;
  undefined2 local_16;
  uint local_14;
  uint local_12;
  uint local_10;
  undefined2 local_e;
  undefined2 local_c;
  uint local_8;
  uint local_6;
  uint local_4;
  
  uVar9 = (undefined2)((ulong)param_1 >> 0x10);
  uVar8 = (uint)param_1;
  local_4 = FUN_1000_15cc();
  uVar5 = local_4;
  if ((int)local_4 < 2) {
    uVar5 = 2;
  }
  if (*(int *)(uVar8 + 8) == 0) {
    return uVar5;
  }
  if (*(int *)(uVar8 + 4) == -1) {
    local_8 = *(uint *)(param_4 * 4 + 0x1462);
    local_6 = *(uint *)(param_4 * 4 + 0x1464);
  }
  else {
    local_1a = FUN_1000_165c();
    in_CL = 3;
    iStack_28 = *(undefined2 *)0x120;
    uStack_2a = *(undefined2 *)0x11e;
    uStack_2c = 0x132d;
    FUN_1000_1cea();
    _local_18 = CONCAT22(local_16,local_14);
    local_8 = local_12;
    local_6 = local_10;
    if (local_14 != 0) {
      if ((int)local_14 < 1) {
        local_8 = 0;
        local_6 = 0;
      }
      else {
        local_8 = *(uint *)(local_14 * 4 + 0x145e);
        local_6 = *(uint *)(local_14 * 4 + 0x1460);
      }
    }
  }
  iStack_28 = 0x137c;
  lVar11 = FUN_1000_16cc();
  iVar7 = (int)((ulong)lVar11 >> 0x10);
  uVar5 = (uint)lVar11;
  uVar6 = *(int *)(uVar8 + 8) - 5;
  lVar2 = CONCAT22(uVar5,iVar7);
  if (uVar6 < 0x26) {
    uVar4 = uVar8;
    lVar2 = CONCAT22(uVar5,iVar7);
    switch(uVar6) {
    case 4:
    case 5:
    case 6:
    case 0x15:
      lVar2 = CONCAT22(uVar5,iVar7);
      break;
    case 7:
    case 8:
    case 9:
    case 0xe:
      do {
      } while( true );
    case 0xd:
      lVar2 = CONCAT22(uVar5,iVar7);
      break;
    case 0xf:
      lVar2 = lVar11 + CONCAT22(local_6,local_8);
      break;
    case 0x16:
      iVar7 = iVar7 + local_6 + (uint)((int)uVar6 < 0);
      lVar2 = CONCAT22(iVar7,iVar7 >> 0xf);
      break;
    case 0x1d:
      acStack_bb4[unaff_SI] = acStack_bb4[unaff_SI] + in_CL;
      lVar2 = (ulong)CONCAT11((char)((ulong)param_1 >> 8),(byte)param_1 | in_CL & 0x80) << 0x10;
      break;
    case 0x1e:
      lVar2 = (ulong)(uVar8 >> (in_CL & 0x1f) | (uVar5 >> 8 & 0xfe) << 8) << 0x10;
      break;
    case 0x1f:
      lVar2 = (ulong)(uVar8 ^ uVar5) << 0x10;
      break;
    case 0x20:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x21:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x22:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x23:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x24:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x25:
      do {
        FUN_1000_1bfc();
        do {
          bVar10 = CARRY2(local_14,local_6);
          local_14 = local_14 + local_6;
          local_12 = local_12 + ((int)local_6 >> 0xf) + (uint)bVar10;
          uVar9 = (undefined2)((ulong)_local_18 >> 0x10);
          iVar7 = (int)_local_18;
          uVar6 = *(uint *)(iVar7 + 0x12);
          if (((uint)((int)uVar6 >> 3) < local_12) ||
             (((uint)((int)uVar6 >> 3) <= local_12 &&
              ((uint)(((ulong)(((int)uVar6 >> 2 & 1U) != 0) << 0x10 |
                      ((ulong)(((int)uVar6 >> 1 & 1U) != 0) << 0x10 |
                      (ulong)(CONCAT12((uVar6 & 1) != 0,*(undefined2 *)(iVar7 + 0x10)) >> 1)) >> 1)
                     >> 1) <= local_14)))) {
            return 1;
          }
          for (iVar12 = 0; iVar12 < local_1a; iVar12 = iVar12 + 1) {
            *(undefined1 *)(iVar12 + 0x18ba) = *(undefined1 *)(local_6 + iVar12 + 0x18ba);
          }
          uVar6 = *(uint *)(iVar7 + 0x12);
          uVar1 = (uint)(((ulong)(((int)uVar6 >> 2 & 1U) != 0) << 0x10 |
                         ((ulong)(((int)uVar6 >> 1 & 1U) != 0) << 0x10 |
                         (ulong)(CONCAT12((uVar6 & 1) != 0,*(undefined2 *)(iVar7 + 0x10)) >> 1)) >>
                         1) >> 1);
          local_6 = uVar1 - local_14;
          if ((((int)uVar6 >> 3) - local_12 != (uint)(uVar1 < local_14)) || (0x400 < local_6)) {
            local_6 = 0x400;
          }
          if (uVar8 != *(uint *)0x10e) {
            iStack_28 = 0x8aa;
            iVar12 = FUN_1000_244a();
            if (iVar12 == -1) {
              return 0;
            }
            uVar4 = *(uint *)0x1224;
            iStack_28 = local_1a + 0x18ba;
            uStack_2a = 0x8cf;
            iVar12 = FUN_1000_24b6();
            if (iVar12 != 1) {
              return 0;
            }
          }
          local_1a = 0;
          if (*(int *)0x11c != 0) {
            while (local_4 < *(uint *)(iVar7 + 0x20)) {
              uVar6 = (((((int)local_6 >> 0xf) << 1 | (uint)((int)local_6 < 0)) << 1 |
                       (uint)((int)(local_6 << 1) < 0)) << 1 | (uint)((int)(local_6 << 2) < 0)) +
                      unaff_SI + (uint)CARRY2(local_6 * 8,uVar4);
              if ((uVar6 < uVar5) || ((uVar6 <= uVar5 && (local_6 * 8 + uVar4 <= local_10)))) break;
              uVar6 = (uVar5 - unaff_SI) - (uint)(local_10 < uVar4);
              iVar12 = (int)(((ulong)((uVar6 >> 2 & 1) != 0) << 0x10 |
                             ((ulong)((uVar6 >> 1 & 1) != 0) << 0x10 |
                             (ulong)(CONCAT12((uVar6 & 1) != 0,local_10 - uVar4) >> 1)) >> 1) >> 1);
              iVar3 = FUN_1000_15cc();
              if (iVar3 < 2) {
                iVar3 = 2;
              }
              else {
                iVar3 = FUN_1000_15cc();
              }
              if ((int)local_6 < iVar12 + iVar3) {
                uVar6 = iVar12 - iVar12 % 2;
                local_1a = local_6 - uVar6;
                local_6 = uVar6;
                break;
              }
              iStack_28 = 0x997;
              FUN_1000_12b2();
              uVar6 = local_4 + 1;
              bVar10 = local_4 < *(uint *)(iVar7 + 0x20);
              uVar4 = uVar8;
              local_4 = uVar6;
              if (bVar10) {
                iStack_28 = 0x9da;
                iVar12 = FUN_1000_244a();
                if ((iVar12 == -1) || (iVar12 = FUN_1000_1552(), uVar4 = unaff_SS, iVar12 == 0)) {
                  return 0;
                }
              }
            }
          }
          if (uVar8 == *(uint *)0x110) {
            uStack_2a = 0xa17;
            iStack_28 = iVar7;
            iVar7 = FUN_1000_0a90();
            uVar6 = unaff_SS;
          }
          else {
            uVar6 = CONCAT11((char)(*(uint *)0x110 >> 8),*(undefined1 *)(iVar7 + 0x27));
            iStack_28 = 0x18ba;
            uStack_2a = 0xa46;
            iVar7 = FUN_1000_1b0c();
          }
          if (iVar7 == 0) {
            return 0;
          }
          uVar4 = uVar6 + local_6 * 8;
          unaff_SI = unaff_SI +
                     (((((int)local_6 >> 0xf) << 1 | (uint)((int)local_6 < 0)) << 1 |
                      (uint)((int)(local_6 << 1) < 0)) << 1 | (uint)((int)(local_6 << 2) < 0)) +
                     (uint)CARRY2(uVar6,local_6 * 8);
        } while (*(int *)0x106 < 2);
        uVar4 = 0x1e9;
      } while( true );
    }
  }
  local_e = (undefined2)((ulong)lVar2 >> 0x10);
  local_c = (undefined2)lVar2;
  iStack_28 = local_c;
  uStack_2a = local_e;
  uStack_2c = 0x154a;
  uVar5 = FUN_1000_1860();
  return uVar5;
}


// ---- FUN_1000_1552 @ 1000:1552

undefined2 __cdecl16near FUN_1000_1552(int param_1,undefined2 param_2)

{
  int iVar1;
  undefined2 unaff_DS;
  
  iVar1 = FUN_1000_24b6(param_1,param_2,10,1,*(undefined2 *)0x1222,*(undefined2 *)0x1224);
  if (iVar1 != 1) {
    return 0;
  }
  if (*(int *)0x18a6 != 0) {
    FUN_1000_1a64(param_1,param_2);
    FUN_1000_1ae6(param_1 + 4,param_2);
    FUN_1000_1ae6(param_1 + 6,param_2);
    FUN_1000_1ae6(param_1 + 8,param_2);
  }
  return 1;
}


// ---- FUN_1000_15cc @ 1000:15cc

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00011600) overlaps instruction at (ram,0x000115ff)
    */

int __cdecl16near FUN_1000_15cc(int param_1,undefined4 param_2,int param_3,undefined2 param_4)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  int in_BX;
  undefined2 unaff_DS;
  
  switch(param_1) {
  case 5:
  case 6:
  case 7:
  case 8:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x21:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 9:
  case 0xc:
  case 0x1b:
  case 0x22:
    iVar5 = in(0x5d);
    return iVar5;
  case 10:
  case 0xd:
  case 0x13:
  case 0x1a:
  case 0x23:
  case 0x24:
    iVar5 = in(0x5d);
    return iVar5;
  case 0xb:
  case 0xe:
  case 0x12:
  case 0x14:
    return in_BX;
  case 0x25:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x26:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x27:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x28:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x29:
    break;
  case 0x2a:
                    /* WARNING: Could not recover jumptable at 0x000146cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar5 = (*(code *)(ulong)*(uint *)((int)*(undefined4 *)0x4544 + 0xac))();
    return iVar5;
  default:
    return 0;
  }
  FUN_1000_1a64();
  FUN_1000_1ae6((int)param_2 + 0xc,param_2._2_2_);
  FUN_1000_1ae6((int)param_2 + 0xe,param_2._2_2_);
  if ((*(char *)((int)param_2 + 0x11) == '\0') ||
     (bVar3 = *(byte *)((int)param_2 + 0x10), bVar3 == 0x67)) goto LAB_1000_1134;
  if (bVar3 < 0x68) {
    if (bVar3 != 0xf) {
      if ('\x0f' < (char)bVar3) {
        if (bVar3 != 100) {
          if (bVar3 != 0x65) {
            if (bVar3 == 0x66) {
              FUN_1000_1a64(param_3 + 4,param_4);
              FUN_1000_1a64(param_3,param_4);
              goto LAB_1000_1134;
            }
            goto LAB_1000_0fde;
          }
          iVar5 = FUN_1000_4094((int)param_2,param_2._2_2_,0x213);
          if (iVar5 == 0) {
            FUN_1000_1ae6(param_3 + 6,param_4);
            FUN_1000_1a64(param_3,param_4);
            FUN_1000_1a64(param_3 + 8,param_4);
          }
        }
        FUN_1000_1ae6(param_3 + 4,param_4);
        FUN_1000_1a64(param_3 + 0xc,param_4);
        goto LAB_1000_1134;
      }
      if ((bVar3 != 10) && (bVar3 != 0xc)) goto LAB_1000_0fde;
    }
    FUN_1000_1a64(param_3 + 4,param_4);
    FUN_1000_1a64(param_3 + 0xc,param_4);
  }
  else {
LAB_1000_0fde:
    if ((*(byte *)((int)param_2 + 0xe) & 0x30) == 0x20) {
      FUN_1000_1a64(param_3,param_4);
      FUN_1000_1a64(param_3 + 4,param_4);
      FUN_1000_1a64(param_3 + 8,param_4);
      FUN_1000_1a64(param_3 + 0xc,param_4);
    }
    else if ((*(byte *)((int)param_2 + 0xe) & 0x30) == 0x30) {
      FUN_1000_1a64(param_3,param_4);
      FUN_1000_1a64(param_3 + 4,param_4);
      FUN_1000_1ae6(param_3 + 8,param_4);
      FUN_1000_1ae6(param_3 + 10,param_4);
      FUN_1000_1ae6(param_3 + 0xc,param_4);
      FUN_1000_1ae6(param_3 + 0xe,param_4);
    }
    else if (*(int *)((int)param_2 + 0xe) == 0) {
      FUN_1000_1a64(param_3,param_4);
      FUN_1000_1ae6(param_3 + 4,param_4);
      FUN_1000_1ae6(param_3 + 6,param_4);
    }
    else {
      FUN_1000_1a64(param_3 + 4,param_4);
      FUN_1000_1a64(param_3,param_4);
    }
  }
LAB_1000_1134:
  iVar5 = (int)*(char *)((int)param_2 + 0x10);
  if ((0 < iVar5 + -1) &&
     ((iVar5 == 3 || iVar5 + -2 < 1 ||
      ((0 < iVar5 + -4 &&
       ((iVar5 == 6 || iVar5 + -5 < 1 || ((0x5d < iVar5 + -6 && (iVar5 + -100 < 2)))))))))) {
    if (*(int *)((int)param_2 + 0xc) == 0) {
      FUN_1000_1b2e(param_1,(int)param_2,param_2._2_2_,param_3,param_4);
    }
    else if (0 < *(int *)((int)param_2 + 0xc)) {
      iVar5 = *(int *)((int)param_2 + 0xc) * 4;
      uVar4 = *(uint *)(iVar5 + 0x145e);
      iVar5 = *(int *)(iVar5 + 0x1460);
      puVar1 = (uint *)((int)param_2 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 + uVar4;
      *(int *)((int)param_2 + 10) = *(int *)((int)param_2 + 10) + iVar5 + (uint)CARRY2(uVar2,uVar4);
    }
  }
  return *(char *)((int)param_2 + 0x11) + param_1 + 1;
}


// ---- FUN_1000_165c @ 1000:165c

int __cdecl16near FUN_1000_165c(int param_1)

{
  int iVar1;
  undefined2 unaff_DS;
  int local_e [4];
  int local_6;
  int local_4;
  
  local_4 = 0;
  local_6 = *(int *)0x1226 + -1;
  while( true ) {
    while( true ) {
      if (local_6 < local_4) {
        return local_4;
      }
      iVar1 = (local_4 + local_6) / 2;
      FUN_1000_1cea(*(undefined2 *)0x11e,*(undefined2 *)0x120,iVar1 << 3,(iVar1 << 3) >> 0xf,8,
                    local_e);
      if (param_1 <= local_e[0]) break;
      local_4 = iVar1 + 1;
    }
    if (local_e[0] <= param_1) break;
    local_6 = iVar1 + -1;
  }
  return iVar1;
}


// ---- FUN_1000_16cc @ 1000:16cc

undefined4 __cdecl16near FUN_1000_16cc(byte *param_1,int param_2,int param_3,int param_4)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 unaff_DS;
  uint local_a;
  uint local_8;
  byte local_6;
  
  bVar1 = (byte)param_4;
  local_6 = -(bVar1 - 8);
  local_8 = 0;
  local_a = 0;
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  if (*(int *)0x1220 == 0) {
    iVar4 = param_2;
    if (param_4 == 0) {
      while (param_2 = param_2 + -1, -1 < param_2) {
        local_8 = CONCAT11((char)local_8,(char)(local_a >> 8));
        local_a = (uint)((byte *)param_1)[param_2] | local_a << 8;
      }
    }
    else {
      for (; 0 < iVar4; iVar4 = iVar4 + -1) {
        uVar2 = local_a >> 8;
        uVar3 = (uint)((byte *)param_1)[iVar4] << (local_6 & 0x1f) |
                (uint)(((byte *)param_1)[iVar4 + -1] >> (bVar1 & 0x1f));
        local_a = local_a << 8 | uVar3;
        local_8 = CONCAT11((char)local_8,(char)uVar2) | (int)uVar3 >> 0xf;
      }
      *param_1 = (byte)((int)((uint)*param_1 << (local_6 & 0x1f)) >> (local_6 & 0x1f));
      ((byte *)param_1)[param_2] = (((byte *)param_1)[param_2] >> (bVar1 & 0x1f)) << (bVar1 & 0x1f);
    }
  }
  else if (param_4 == 0) {
    for (param_2 = param_3 - param_2; param_2 < param_3; param_2 = param_2 + 1) {
      local_8 = CONCAT11((char)local_8,(char)(local_a >> 8));
      local_a = (uint)((byte *)param_1)[param_2] | local_a << 8;
    }
  }
  else {
    param_2 = param_3 - param_2;
    for (iVar4 = param_2; iVar4 < param_3; iVar4 = iVar4 + 1) {
      uVar2 = local_a >> 8;
      uVar3 = (uint)((byte *)param_1)[iVar4] << (bVar1 & 0x1f) |
              (uint)(((byte *)param_1 + iVar4)[1] >> (local_6 & 0x1f));
      local_a = local_a << 8 | uVar3;
      local_8 = CONCAT11((char)local_8,(char)uVar2) | (int)uVar3 >> 0xf;
    }
    ((byte *)param_1)[param_2] =
         (((byte *)param_1)[param_2] >> (local_6 & 0x1f)) << (local_6 & 0x1f);
    ((byte *)param_1)[param_3] =
         (byte)((int)((uint)((byte *)param_1)[param_3] << (bVar1 & 0x1f)) >> (bVar1 & 0x1f));
  }
  return CONCAT22(local_8,local_a);
}


// ---- FUN_1000_1860 @ 1000:1860

void __cdecl16near
FUN_1000_1860(byte param_1,undefined2 param_2,byte *param_3,int param_4,int param_5,int param_6)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 unaff_DS;
  byte local_6;
  
  iVar3 = param_5;
  local_6 = -((byte)param_6 - 8);
  if (*(int *)0x1220 == 0) {
    if (param_6 == 0) {
      for (iVar3 = 0; iVar3 < param_4; iVar3 = iVar3 + 1) {
        ((byte *)param_3)[iVar3] = param_1;
        FUN_1000_439d(&param_1);
      }
    }
    else {
      *param_3 = *param_3 | param_1 << ((byte)param_6 & 0x1f);
      FUN_1000_439d(&param_1);
      iVar3 = 1;
      while( true ) {
        uVar4 = (undefined2)((ulong)param_3 >> 0x10);
        if (param_4 <= iVar3) break;
        ((byte *)param_3)[iVar3] = param_1;
        iVar3 = iVar3 + 1;
        FUN_1000_439d(&param_1);
      }
      pbVar1 = (byte *)param_3 + param_4;
      *pbVar1 = *pbVar1 | param_1;
    }
    return;
  }
  if (param_6 != 0) {
    iVar2 = param_5 - param_4;
    ((byte *)param_3)[param_5] = ((byte *)param_3)[param_5] | param_1 << (local_6 & 0x1f);
    FUN_1000_439d(&param_1);
    while( true ) {
      iVar3 = iVar3 + -1;
      uVar4 = (undefined2)((ulong)param_3 >> 0x10);
      if (iVar3 <= iVar2) break;
      ((byte *)param_3)[iVar3] = param_1;
      FUN_1000_439d(&param_1);
    }
    pbVar1 = (byte *)param_3 + iVar2;
    *pbVar1 = *pbVar1 | param_1;
    return;
  }
  while (iVar3 = iVar3 + -1, param_5 - param_4 <= iVar3) {
    ((byte *)param_3)[iVar3] = param_1;
    FUN_1000_439d(&param_1);
  }
  return;
}


// ---- FUN_1000_1998 @ 1000:1998

undefined2 __cdecl16near
FUN_1000_1998(undefined2 param_1,undefined2 param_2,int param_3,uint *param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined2 unaff_DS;
  int local_4;
  
  iVar3 = FUN_1000_244a(*(undefined2 *)0x1222,*(undefined2 *)0x1224,param_1,param_2,0);
  if (iVar3 != -1) {
    iVar3 = FUN_1000_24b6((uint *)param_4,param_4._2_2_,param_3,6,*(undefined2 *)0x1222,
                          *(undefined2 *)0x1224);
    if (iVar3 == 6) {
      if ((*(int *)0x18a6 != 0) ||
         (*(int *)(param_5 * 4 + 0x1460) != 0 || *(int *)(param_5 * 4 + 0x145e) != 0)) {
        for (local_4 = 0; local_4 < param_3; local_4 = local_4 + 1) {
          if (*(int *)0x18a6 != 0) {
            FUN_1000_1ae6((uint *)param_4 + 2,param_4._2_2_);
            FUN_1000_1a64((uint *)param_4,param_4._2_2_);
          }
          if (((uint *)param_4)[2] != 0) {
            uVar2 = *(uint *)(param_5 * 4 + 0x145e);
            iVar3 = *(int *)(param_5 * 4 + 0x1460);
            uVar1 = *param_4;
            *param_4 = *param_4 + uVar2;
            ((uint *)param_4)[1] = ((uint *)param_4)[1] + iVar3 + (uint)CARRY2(uVar1,uVar2);
          }
          param_4 = (uint *)CONCAT22(param_4._2_2_,(uint *)param_4 + 3);
        }
      }
      return 1;
    }
  }
  return 0;
}


// ---- FUN_1000_1a64 @ 1000:1a64

void __cdecl16near FUN_1000_1a64(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  uVar1 = *param_1;
  uVar2 = ((uint *)param_1)[1];
  *param_1 = uVar2 << 8 | uVar2 >> 8;
  ((uint *)param_1)[1] = uVar1 << 8 | uVar1 >> 8;
  return;
}


// ---- FUN_1000_1ae6 @ 1000:1ae6

void __cdecl16near FUN_1000_1ae6(undefined2 *param_1)

{
  undefined1 local_6;
  
  local_6 = (undefined1)*param_1;
  *param_1 = CONCAT11(local_6,(char)((uint)*param_1 >> 8));
  return;
}


// ---- FUN_1000_1b06 @ 1000:1b06

void __cdecl16near FUN_1000_1b06(void)

{
  undefined2 unaff_DS;
  
  (*(code *)*(undefined2 *)0x11a0)();
  return;
}


// ---- FUN_1000_1b0c @ 1000:1b0c

void __cdecl16near
FUN_1000_1b0c(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5)

{
  undefined2 unaff_DS;
  
  (*(code *)*(undefined2 *)0x11a2)(param_1,param_2,param_3,param_4,param_5);
  return;
}


// ---- FUN_1000_1b2e @ 1000:1b2e

void __cdecl16near
FUN_1000_1b2e(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5)

{
  undefined2 unaff_DS;
  
  (*(code *)*(undefined2 *)0x121e)(param_1,param_2,param_3,param_4,param_5);
  return;
}


// ---- FUN_1000_1b48 @ 1000:1b48

undefined2 __cdecl16near FUN_1000_1b48(int param_1)

{
  int iVar1;
  undefined2 unaff_DS;
  undefined1 local_18 [16];
  char local_8;
  uint local_6;
  uint local_4;
  
  local_4 = 0;
  while (local_4 < *(uint *)0x1458) {
    local_6 = FUN_1000_0e4a(local_4,local_18);
    iVar1 = (*(code *)*(undefined2 *)0x18aa)(local_4,local_18);
    if (iVar1 == 0) {
      FUN_1000_2250(0xfff1,*(undefined2 *)0xd5a);
    }
    if ((param_1 != 0) &&
       ((((local_8 == '\x02' || (local_8 == '\x05')) || (local_8 == '\x03')) ||
        (((local_8 == '\x06' || (local_8 == 'd')) || (local_8 == 'e')))))) {
      iVar1 = FUN_1000_120e(local_4,local_18);
      if (iVar1 == 0) {
        FUN_1000_2250(0xfff1,*(undefined2 *)0xd5a);
      }
    }
    local_4 = local_6;
  }
  return 1;
}


// ---- FUN_1000_1bfc @ 1000:1bfc

void __cdecl16near
FUN_1000_1bfc(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5,undefined2 param_6,undefined2 param_7,undefined2 param_8,
             undefined2 param_9,undefined2 param_10,undefined2 param_11,undefined2 param_12,
             undefined2 param_13)

{
  FUN_1000_222c(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                param_11,param_12,param_13);
  return;
}


// ---- FUN_1000_1c2e @ 1000:1c2e

void __cdecl16near FUN_1000_1c2e(undefined2 param_1,undefined2 param_2)

{
  undefined2 unaff_DS;
  
  (*(code *)*(undefined2 *)0x11a8)(param_1,param_2);
  return;
}


// ---- FUN_1000_1c46 @ 1000:1c46

void __cdecl16near
FUN_1000_1c46(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  undefined2 unaff_DS;
  
  (*(code *)*(undefined2 *)0x18ac)(param_1,param_2,param_3,param_4);
  return;
}


// ---- FUN_1000_1c64 @ 1000:1c64

void __cdecl16near FUN_1000_1c64(undefined2 param_1,undefined2 param_2)

{
  undefined2 unaff_DS;
  
  (*(code *)*(undefined2 *)0x1238)(param_1,param_2);
  return;
}


// ---- FUN_1000_1c76 @ 1000:1c76

void __cdecl16near FUN_1000_1c76(undefined2 param_1,undefined2 param_2)

{
  FUN_1000_44e0(0x7e0f,1,0,4,param_1,param_2);
  return;
}


// ---- FUN_1000_1c9c @ 1000:1c9c

void __cdecl16near
FUN_1000_1c9c(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  FUN_1000_44e0(0x7e11,2,0,4,param_1,param_2,0,4,param_3,param_4);
  return;
}


// ---- FUN_1000_1cca @ 1000:1cca

void __cdecl16near FUN_1000_1cca(undefined2 param_1,undefined2 param_2)

{
  FUN_1000_44e0(0x7e0e,1,0,4,param_1,param_2);
  return;
}


// ---- FUN_1000_1cea @ 1000:1cea

undefined4 __cdecl16near
FUN_1000_1cea(uint param_1,int param_2,int param_3,int param_4,undefined2 param_5,undefined2 param_6
             ,undefined2 param_7)

{
  FUN_1000_44f8(param_3 * 8 + param_1,
                (((param_4 << 1 | (uint)(param_3 < 0)) << 1 | (uint)(param_3 << 1 < 0)) << 1 |
                (uint)(param_3 << 2 < 0)) + param_2 + (uint)CARRY2(param_3 * 8,param_1),param_6,
                param_7,param_5,0);
  return CONCAT22(param_7,param_6);
}


// ---- FUN_1000_1d28 @ 1000:1d28

undefined2 __cdecl16near FUN_1000_1d28(uint param_1,int param_2,int param_3,int param_4)

{
  undefined2 unaff_DS;
  
  FUN_1000_44f8(param_3 * 8 + param_1,
                (((param_4 << 1 | (uint)(param_3 < 0)) << 1 | (uint)(param_3 << 1 < 0)) << 1 |
                (uint)(param_3 << 2 < 0)) + param_2 + (uint)CARRY2(param_3 * 8,param_1),0x11c4);
  *(undefined1 *)0x11e4 = 0;
  return 0x11c4;
}


// ---- FUN_1000_1d6a @ 1000:1d6a

void __cdecl16near
FUN_1000_1d6a(uint param_1,int param_2,int param_3,int param_4,undefined2 param_5,undefined2 param_6
             ,undefined2 param_7)

{
  FUN_1000_450a(param_6,param_7,param_3 * 8 + param_1,
                (((param_4 << 1 | (uint)(param_3 < 0)) << 1 | (uint)(param_3 << 1 < 0)) << 1 |
                (uint)(param_3 << 2 < 0)) + param_2 + (uint)CARRY2(param_3 * 8,param_1),param_5,0);
  return;
}


// ---- FUN_1000_1d9a @ 1000:1d9a

void __cdecl16near FUN_1000_1d9a(uint param_1,int param_2,int param_3,int param_4)

{
  undefined2 unaff_DS;
  uint local_a;
  uint local_8;
  undefined1 local_6 [4];
  
  *(int *)0x1cba = param_3 * 8 + param_1;
  *(int *)0x1cbc =
       (((param_4 << 1 | (uint)(param_3 < 0)) << 1 | (uint)(param_3 << 1 < 0)) << 1 |
       (uint)(param_3 << 2 < 0)) + param_2 + (uint)CARRY2(param_3 * 8,param_1);
  FUN_1000_44ec(local_6);
  if ((*(uint *)0x1cbc <= local_8) && ((*(uint *)0x1cbc < local_8 || (*(uint *)0x1cba < local_a))))
  {
    *(uint *)0x18b2 = local_a;
    *(uint *)0x18b4 = local_8;
    return;
  }
  *(undefined2 *)0x18b2 = 0xdfe0;
  *(undefined2 *)0x18b4 = 0xffff;
  return;
}


// ---- FUN_1000_1dfe @ 1000:1dfe

undefined4 __cdecl16near FUN_1000_1dfe(int param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  undefined2 unaff_DS;
  undefined2 local_a;
  undefined2 local_8;
  
  uVar2 = (((param_2 << 1 | (uint)(param_1 < 0)) << 1 | (uint)(param_1 << 1 < 0)) << 1 |
          (uint)(param_1 << 2 < 0)) + *(int *)0x1cbc + (uint)CARRY2(param_1 * 8,*(uint *)0x1cba);
  if ((uVar2 < *(uint *)0x18b4) ||
     ((uVar2 <= *(uint *)0x18b4 && (param_1 * 8 + *(uint *)0x1cba <= *(uint *)0x18b2)))) {
    local_a = *(undefined2 *)0x1cba;
    local_8 = *(undefined2 *)0x1cbc;
    puVar1 = (uint *)0x1cba;
    uVar2 = *puVar1;
    *puVar1 = *puVar1 + param_1 * 8;
    *(int *)0x1cbc =
         *(int *)0x1cbc +
         (((param_2 << 1 | (uint)(param_1 < 0)) << 1 | (uint)(param_1 << 1 < 0)) << 1 |
         (uint)(param_1 << 2 < 0)) + (uint)CARRY2(uVar2,param_1 * 8);
  }
  else {
    local_8 = 0;
    local_a = 0;
  }
  return CONCAT22(local_8,local_a);
}


// ---- FUN_1000_1e72 @ 1000:1e72

undefined4 __cdecl16near
FUN_1000_1e72(undefined2 param_1,undefined2 param_2,int param_3,int param_4)

{
  uint *puVar1;
  uint uVar2;
  undefined2 unaff_DS;
  undefined2 local_a;
  undefined2 local_8;
  
  uVar2 = (((param_4 << 1 | (uint)(param_3 < 0)) << 1 | (uint)(param_3 << 1 < 0)) << 1 |
          (uint)(param_3 << 2 < 0)) + *(int *)0x1cbc + (uint)CARRY2(param_3 * 8,*(uint *)0x1cba);
  if ((uVar2 < *(uint *)0x18b4) ||
     ((uVar2 <= *(uint *)0x18b4 && (param_3 * 8 + *(uint *)0x1cba <= *(uint *)0x18b2)))) {
    local_a = param_1;
    local_8 = param_2;
    puVar1 = (uint *)0x1cba;
    uVar2 = *puVar1;
    *puVar1 = *puVar1 + param_3 * 8;
    *(int *)0x1cbc =
         *(int *)0x1cbc +
         (((param_4 << 1 | (uint)(param_3 < 0)) << 1 | (uint)(param_3 << 1 < 0)) << 1 |
         (uint)(param_3 << 2 < 0)) + (uint)CARRY2(uVar2,param_3 * 8);
  }
  else {
    local_8 = 0;
    local_a = 0;
  }
  return CONCAT22(local_8,local_a);
}


// ---- FUN_1000_1ee6 @ 1000:1ee6

undefined2 __cdecl16near FUN_1000_1ee6(uint *param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 unaff_DS;
  bool bVar5;
  uint local_66;
  uint local_64;
  int local_62;
  uint local_60 [7];
  int local_52 [2];
  undefined1 local_4e [28];
  uint local_32;
  uint local_30;
  uint local_2e;
  int local_2c;
  undefined1 local_2a [12];
  uint local_1e;
  uint local_1c;
  uint local_1a;
  int local_18;
  undefined1 local_16 [16];
  byte local_6 [4];
  
  local_66 = 0xffff;
  local_64 = 0xffff;
  local_30 = 0;
  local_32 = 0;
  local_2c = 0;
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  ((uint *)param_1)[1] = 0;
  *param_1 = 0;
  uVar4 = (undefined2)((ulong)param_2 >> 0x10);
  ((uint *)param_2)[1] = 0;
  *param_2 = 0;
  iVar1 = FUN_1000_24b6(&local_62);
  if (iVar1 == 0) {
    return 0;
  }
  if (local_62 != 0x90) {
    FUN_1000_1ae6(&local_62);
    if (local_62 != 0x90) {
      return 0;
    }
    local_2c = 1;
    FUN_1000_1ae6(local_60);
    FUN_1000_1ae6(local_52);
  }
  if (local_52[0] == 0x1c) {
    iVar1 = FUN_1000_24b6(local_4e);
    if (iVar1 != 1) {
      return 0;
    }
    for (local_2e = 0; local_2e < local_60[0]; local_2e = local_2e + 1) {
      iVar1 = FUN_1000_24b6(local_2a);
      if (iVar1 != 0) {
        if (local_2c != 0) {
          FUN_1000_1ae6(local_6);
          FUN_1000_1a64(&local_1e);
          FUN_1000_1a64(&local_1a);
          FUN_1000_1a64(local_16);
        }
        if (((local_18 != 0 || local_1a != 0) && ((local_6[0] & 3) == 0)) &&
           (((local_6[0] & 0x10) == 0 || (iVar1 = FUN_1000_4094(local_2a), iVar1 != 0)))) {
          if ((local_1c <= local_64) && ((local_1c < local_64 || (local_1e < local_66)))) {
            local_66 = local_1e;
            local_64 = local_1c;
          }
          if ((local_30 <= local_1c) && ((local_1c != local_30 || (local_32 < local_1e)))) {
            local_32 = local_1e;
            local_30 = local_1c;
          }
          bVar5 = CARRY2(local_32,local_1a);
          local_32 = local_32 + local_1a;
          local_30 = local_30 + local_18 + (uint)bVar5;
        }
      }
    }
  }
  FUN_1000_4362(*(undefined2 *)0x1222,*(undefined2 *)0x1224);
  if (local_30 != 0 || local_32 != 0) {
    uVar2 = local_30 + (0xfc00 < local_32);
    local_30 = uVar2 >> 3;
    local_32 = (uint)(((ulong)((uVar2 >> 2 & 1) != 0) << 0x10 |
                      ((ulong)((uVar2 >> 1 & 1) != 0) << 0x10 |
                      (ulong)((CONCAT12((uVar2 & 1) != 0,local_32 + 0x3ff) & 0xffffe7) >> 1)) >> 1)
                     >> 1);
  }
  *param_1 = local_66;
  ((uint *)param_1)[1] = local_64;
  *param_2 = local_32;
  ((uint *)param_2)[1] = local_30;
  return 1;
}


// ---- FUN_1000_20e0 @ 1000:20e0

void __cdecl16near FUN_1000_20e0(int param_1)

{
  undefined1 local_42 [64];
  
  if (param_1 == 0) {
    return;
  }
  if (param_1 != 1) {
    if (param_1 != 2) {
      return;
    }
    return;
  }
  FUN_1000_40e0(local_42);
  return;
}


// ---- FUN_1000_212c @ 1000:212c

void __cdecl16near
FUN_1000_212c(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5,uint param_6,uint param_7,undefined2 param_8,undefined2 param_9)

{
  uint uVar1;
  long lVar2;
  
  FUN_1000_40e0(param_3,param_4,param_1,param_2,0,0);
  if ((param_7 | param_6) != 0) {
    lVar2 = FUN_1000_4168(param_3,param_4,CONCAT11((char)((param_7 | param_6) >> 8),0x2e));
    if (lVar2 != 0) {
      uVar1 = FUN_1000_4168(param_3,param_4,0x5c);
      if (uVar1 <= (uint)lVar2) goto LAB_1000_2193;
    }
    FUN_1000_404a(param_3,param_4,param_6,param_7);
  }
LAB_1000_2193:
  lVar2 = FUN_1000_2366(param_3,param_4,param_8,param_9);
  if (lVar2 == 0) {
    FUN_1000_4516(param_1,param_2,param_3,param_4,param_5,param_6,param_7,0);
    FUN_1000_2366(param_3,param_4,param_8,param_9);
  }
  return;
}


// ---- FUN_1000_21ee @ 1000:21ee

void __cdecl16near FUN_1000_21ee(undefined2 param_1,undefined2 param_2)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)FUN_1000_4168(param_1,param_2,0x2e);
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = 0;
    return;
  }
  FUN_1000_4168(param_1,param_2,0x5c);
  return;
}


// ---- FUN_1000_222c @ 1000:222c

void __cdecl16near FUN_1000_222c(undefined2 param_1)

{
  undefined2 unaff_DS;
  
  if (*(int *)0x106 != 0) {
    FUN_1000_5df8(param_1,&stack0x0004,&stack0x0004);
  }
  return;
}


// ---- FUN_1000_2250 @ 1000:2250

void __cdecl16near FUN_1000_2250(undefined2 param_1,char *param_2)

{
  undefined2 unaff_DS;
  
  if (*(int *)0x106 != 0) {
    FUN_1000_222c(0x21f,param_1,&stack0x0006);
    if (*param_2 != '\0') {
      FUN_1000_222c(0x22f);
      FUN_1000_5df8(param_2,&stack0x0006);
    }
    FUN_1000_222c(0x233);
  }
  FUN_1000_20e0(2,0,0);
  FUN_1000_44b6(*(undefined2 *)0xbe,*(undefined2 *)0xc0,param_1);
  return;
}


// ---- FUN_1000_22be @ 1000:22be

void __cdecl16near FUN_1000_22be(void)

{
  undefined2 unaff_DS;
  
  FUN_1000_222c(*(undefined2 *)0xd24);
  FUN_1000_222c(*(undefined2 *)0xd26);
  FUN_1000_222c(*(undefined2 *)0xd24);
  FUN_1000_222c(*(undefined2 *)0xd28);
  FUN_1000_222c(*(undefined2 *)0xd2a);
  FUN_1000_222c(*(undefined2 *)0xd2c);
  FUN_1000_222c(*(undefined2 *)0xd2e);
  FUN_1000_222c(*(undefined2 *)0xd30);
  FUN_1000_222c(*(undefined2 *)0xd24);
  FUN_1000_2250(0xfffe,0x237);
  return;
}


// ---- FUN_1000_2328 @ 1000:2328

undefined2 __cdecl16near FUN_1000_2328(undefined2 param_1,undefined2 param_2)

{
  long lVar1;
  
  lVar1 = FUN_1000_2366(param_1,param_2,0x238);
  if (lVar1 == 0) {
    return 0;
  }
  FUN_1000_240a(lVar1,(int)lVar1);
  return 1;
}


// ---- FUN_1000_2366 @ 1000:2366

undefined2 * __cdecl16near FUN_1000_2366(undefined2 param_1,undefined2 param_2,char *param_3)

{
  code *pcVar1;
  undefined2 *puVar2;
  int iVar3;
  uint *puVar4;
  undefined2 unaff_SI;
  int iVar5;
  undefined2 uVar6;
  bool bVar7;
  
  uVar6 = (undefined2)((ulong)param_3 >> 0x10);
  if (*param_3 == 'r') {
    iVar5 = 0;
  }
  else {
    if (*param_3 != 'w') goto LAB_1000_2401;
    iVar5 = 1;
  }
  if ((((char *)param_3)[1] == 'b') && (((char *)param_3)[2] == '\0')) {
    iVar3 = 3;
    puVar4 = (uint *)0x23c;
    do {
      puVar2 = (undefined2 *)*puVar4;
      if (puVar2[1] == -1) {
        bVar7 = iVar5 == 0;
        if (iVar5 == 1) {
          pcVar1 = (code *)swi(0x21);
          uVar6 = (*pcVar1)();
          if (!bVar7) {
            *puVar2 = uVar6;
            puVar2[1] = 1;
            puVar2[2] = 0x100;
            puVar2[3] = puVar2 + 4;
            goto LAB_1000_2405;
          }
        }
        else {
          pcVar1 = (code *)swi(0x21);
          uVar6 = (*pcVar1)();
          if (!bVar7) {
            *puVar2 = uVar6;
            puVar2[1] = iVar5;
            bVar7 = (undefined2 *)0xfff7 < puVar2;
            pcVar1 = (code *)swi(0x21);
            uVar6 = (*pcVar1)();
            if (!bVar7) {
              puVar2[2] = uVar6;
              puVar2[3] = puVar2 + 4;
              goto LAB_1000_2405;
            }
          }
        }
        break;
      }
      puVar4 = puVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
LAB_1000_2401:
  puVar2 = (undefined2 *)0x0;
  unaff_SI = 0;
LAB_1000_2405:
  return (undefined2 *)CONCAT22(unaff_SI,puVar2);
}


// ---- FUN_1000_240a @ 1000:240a

undefined2 __cdecl16near FUN_1000_240a(undefined4 param_1)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  undefined2 uVar4;
  undefined1 uVar5;
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar3 = (int)param_1;
  uVar5 = *(int *)(iVar3 + 2) == 0;
  if (*(int *)(iVar3 + 2) == 1) {
    uVar1 = *(uint *)(iVar3 + 4);
    uVar5 = uVar1 < 0x100;
    if (uVar1 != 0x100) {
      uVar5 = 0x100 < uVar1;
      pcVar2 = (code *)swi(0x21);
      (*pcVar2)();
    }
  }
  *(undefined2 *)(iVar3 + 2) = 0xffff;
  pcVar2 = (code *)swi(0x21);
  (*pcVar2)();
  if ((bool)uVar5) {
    uVar4 = 0xffff;
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}


// ---- FUN_1000_244a @ 1000:244a

undefined2 __cdecl16near
FUN_1000_244a(undefined4 param_1,undefined2 param_2,undefined2 param_3,uint param_4)

{
  code *pcVar1;
  int iVar2;
  undefined2 uVar3;
  bool bVar4;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  if (*(int *)(iVar2 + 2) == 0) {
    *(undefined2 *)(iVar2 + 4) = 0;
  }
  else {
    if (*(int *)(iVar2 + 2) != 1) {
      return 0xffff;
    }
    if (*(int *)(iVar2 + 4) != 0x100) {
      pcVar1 = (code *)swi(0x21);
      (*pcVar1)();
      *(undefined2 *)(iVar2 + 4) = 0x100;
      *(int *)(iVar2 + 6) = iVar2 + 8;
    }
  }
  if ((-1 < (int)param_4) && (bVar4 = param_4 < 2, (int)param_4 < 3)) {
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
    if (!bVar4) {
      return 0;
    }
  }
  return 0xffff;
}


// ---- FUN_1000_24b6 @ 1000:24b6

int __cdecl16near FUN_1000_24b6(undefined1 *param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  bool bVar12;
  
  uVar11 = (undefined2)((ulong)param_4 >> 0x10);
  uVar7 = (uint)param_4;
  puVar8 = (undefined1 *)*(undefined2 *)(uVar7 + 6);
  uVar10 = (undefined2)((ulong)param_1 >> 0x10);
  puVar9 = (undefined1 *)param_1;
  iVar5 = param_3;
  do {
    if (*(int *)(uVar7 + 4) < param_2) {
      uVar6 = param_2 - *(int *)(uVar7 + 4);
      iVar4 = *(int *)(uVar7 + 4);
      if (iVar4 != 0) {
        for (; iVar4 != 0; iVar4 = iVar4 + -1) {
          puVar2 = puVar9;
          puVar9 = puVar9 + 1;
          puVar1 = puVar8;
          puVar8 = puVar8 + 1;
          *puVar2 = *puVar1;
        }
      }
      bVar12 = uVar6 < 0x100;
      if ((int)uVar6 < 0x101) {
        bVar12 = 0xfff7 < uVar7;
        pcVar3 = (code *)swi(0x21);
        iVar4 = (*pcVar3)();
        if ((bVar12) || (iVar4 < (int)uVar6)) goto LAB_1000_2540;
        *(int *)(uVar7 + 4) = iVar4;
        puVar8 = (undefined1 *)(uVar7 + 8);
        if (uVar6 != 0) {
          *(int *)(uVar7 + 4) = *(int *)(uVar7 + 4) - uVar6;
          for (; uVar6 != 0; uVar6 = uVar6 - 1) {
            puVar2 = puVar9;
            puVar9 = puVar9 + 1;
            puVar1 = puVar8;
            puVar8 = puVar8 + 1;
            *puVar2 = *puVar1;
          }
        }
      }
      else {
        pcVar3 = (code *)swi(0x21);
        iVar4 = (*pcVar3)();
        if ((bVar12) || (iVar4 < (int)uVar6)) goto LAB_1000_2540;
        puVar9 = puVar9 + iVar4;
        *(undefined2 *)(uVar7 + 4) = 0;
        puVar8 = (undefined1 *)(uVar7 + 8);
      }
    }
    else {
      *(int *)(uVar7 + 4) = *(int *)(uVar7 + 4) - param_2;
      for (iVar4 = param_2; iVar4 != 0; iVar4 = iVar4 + -1) {
        puVar2 = puVar9;
        puVar9 = puVar9 + 1;
        puVar1 = puVar8;
        puVar8 = puVar8 + 1;
        *puVar2 = *puVar1;
      }
    }
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  *(undefined2 *)(uVar7 + 6) = puVar8;
LAB_1000_2540:
  return param_3 - iVar5;
}


// ---- FUN_1000_254a @ 1000:254a

int __cdecl16near FUN_1000_254a(undefined1 *param_1,int param_2,int param_3,undefined2 *param_4)

{
  undefined1 *puVar1;
  undefined2 *puVar2;
  code *pcVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  undefined1 *puVar10;
  undefined2 *puVar11;
  undefined2 uVar12;
  undefined2 uVar13;
  bool bVar14;
  
  uVar12 = (undefined2)((ulong)param_4 >> 0x10);
  puVar11 = (undefined2 *)((undefined2 *)param_4)[3];
  uVar13 = (undefined2)((ulong)param_1 >> 0x10);
  puVar10 = (undefined1 *)param_1;
  iVar6 = param_3;
  puVar8 = (undefined2 *)param_4;
  do {
    puVar9 = puVar8;
    if ((int)puVar8[2] < param_2) {
      uVar7 = param_2 - puVar8[2];
      iVar5 = puVar8[2];
      if (iVar5 != 0) {
        for (; iVar5 != 0; iVar5 = iVar5 + -1) {
          puVar2 = puVar11;
          puVar11 = (undefined2 *)((int)puVar11 + 1);
          puVar1 = puVar10;
          puVar10 = puVar10 + 1;
          *(undefined1 *)puVar2 = *puVar1;
        }
      }
      bVar14 = (undefined2 *)0xfff7 < puVar8;
      pcVar3 = (code *)swi(0x21);
      iVar5 = (*pcVar3)();
      if ((bVar14) || (iVar5 != 0x100)) goto LAB_1000_25d1;
      puVar8[2] = 0x100;
      puVar11 = puVar8 + 4;
      if (uVar7 != 0) {
        bVar14 = uVar7 < 0x100;
        if ((int)uVar7 < 0x101) {
          puVar8[2] = puVar8[2] - uVar7;
          for (; uVar7 != 0; uVar7 = uVar7 - 1) {
            puVar2 = puVar11;
            puVar11 = (undefined2 *)((int)puVar11 + 1);
            puVar1 = puVar10;
            puVar10 = puVar10 + 1;
            *(undefined1 *)puVar2 = *puVar1;
          }
        }
        else {
          puVar9 = (undefined2 *)*puVar8;
          pcVar3 = (code *)swi(0x21);
          uVar4 = (*pcVar3)();
          if ((bVar14) || (uVar4 != uVar7)) goto LAB_1000_25d1;
          puVar10 = puVar10 + uVar4;
          puVar11 = puVar8;
        }
      }
    }
    else {
      puVar8[2] = puVar8[2] - param_2;
      for (iVar5 = param_2; iVar5 != 0; iVar5 = iVar5 + -1) {
        puVar2 = puVar11;
        puVar11 = (undefined2 *)((int)puVar11 + 1);
        puVar1 = puVar10;
        puVar10 = puVar10 + 1;
        *(undefined1 *)puVar2 = *puVar1;
      }
    }
    iVar6 = iVar6 + -1;
    puVar8 = puVar9;
  } while (iVar6 != 0);
  puVar9[3] = puVar11;
LAB_1000_25d1:
  return param_3 - iVar6;
}


// ---- FUN_1000_25db @ 1000:25db

undefined2 __cdecl16far FUN_1000_25db(void)

{
  code *pcVar1;
  undefined2 uVar2;
  bool bVar3;
  
  bVar3 = false;
  pcVar1 = (code *)swi(0x21);
  uVar2 = (*pcVar1)();
  if (bVar3) {
    uVar2 = 0;
  }
  return uVar2;
}


// ---- FUN_1000_25f4 @ 1000:25f4

undefined2 __cdecl16far FUN_1000_25f4(void)

{
  code *pcVar1;
  undefined2 uVar2;
  undefined1 in_CF;
  
  pcVar1 = (code *)swi(0x21);
  uVar2 = (*pcVar1)();
  if ((bool)in_CF) {
    uVar2 = 0xffff;
  }
  return uVar2;
}


// ---- FUN_1000_2605 @ 1000:2605

undefined2 __cdecl16far FUN_1000_2605(void)

{
  code *pcVar1;
  undefined2 unaff_BP;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  return unaff_BP;
}


// ---- FUN_1000_261c @ 1000:261c

undefined2 __cdecl16far FUN_1000_261c(void)

{
  code *pcVar1;
  undefined2 uVar2;
  undefined1 in_CF;
  
  pcVar1 = (code *)swi(0x21);
  uVar2 = (*pcVar1)();
  if ((bool)in_CF) {
    uVar2 = 0;
  }
  return uVar2;
}


// ---- FUN_1000_2634 @ 1000:2634

undefined2 __cdecl16far FUN_1000_2634(void)

{
  code *pcVar1;
  undefined2 uVar2;
  undefined1 in_CF;
  
  pcVar1 = (code *)swi(0x21);
  uVar2 = (*pcVar1)();
  if ((bool)in_CF) {
    uVar2 = 0xffff;
  }
  return uVar2;
}


// ---- FUN_1000_2652 @ 1000:2652

undefined2 __cdecl16far FUN_1000_2652(void)

{
  code *pcVar1;
  undefined2 uVar2;
  bool bVar3;
  
  bVar3 = false;
  pcVar1 = (code *)swi(0x21);
  uVar2 = (*pcVar1)();
  if (bVar3) {
    uVar2 = 0;
  }
  return uVar2;
}


// ---- FUN_1000_266a @ 1000:266a

undefined2 __cdecl16far FUN_1000_266a(void)

{
  code *pcVar1;
  undefined2 uVar2;
  undefined1 in_CF;
  
  pcVar1 = (code *)swi(0x21);
  uVar2 = (*pcVar1)();
  if ((bool)in_CF) {
    uVar2 = 0;
  }
  return uVar2;
}


// ---- FUN_1000_2682 @ 1000:2682

undefined2 __cdecl16near FUN_1000_2682(int param_1,int *param_2)

{
  undefined2 *puVar1;
  int iVar2;
  int *piVar3;
  undefined2 uVar4;
  undefined2 unaff_DS;
  undefined4 uVar5;
  
  *(undefined2 *)0x11a0 = 0x2924;
  *(undefined2 *)0x121e = 0x291c;
  *(undefined2 *)0x18aa = 0x281e;
  *(undefined2 *)0x11a2 = 0x291e;
  *(undefined2 *)0x11a8 = 0x1c82;
  *(undefined2 *)0x18ac = 0x1ca8;
  *(undefined2 *)0x1238 = 0x1cd6;
  *(undefined2 *)0x10a = 1;
  iVar2 = FUN_1000_013e();
  if (iVar2 == 0) {
    FUN_1000_2250(0xfffc,*(undefined2 *)0xd4a);
  }
  iVar2 = FUN_1000_0156();
  if (iVar2 == 0) {
    FUN_1000_2250(0xfffb,*(undefined2 *)0xd4c);
  }
  piVar3 = (int *)param_2;
  uVar4 = (undefined2)((ulong)param_2 >> 0x10);
  if (param_1 == 0) {
LAB_1000_2710:
    FUN_1000_4516(0x564);
  }
  else {
    if (piVar3[1] == 0 && *param_2 == 0) goto LAB_1000_2710;
    FUN_1000_4516(*param_2,piVar3[1],&stack0xffbe);
  }
  uVar5 = FUN_1000_2366(&stack0xffbe);
  iVar2 = (int)((ulong)uVar5 >> 0x10);
  *(undefined2 *)0x1222 = (int)uVar5;
  *(int *)0x1224 = iVar2;
  if (iVar2 == 0 && *(int *)0x1222 == 0) {
    FUN_1000_2250(0xfff7,*(undefined2 *)0xd34);
  }
  if (1 < param_1) {
    if (piVar3[3] != 0 || piVar3[2] != 0) {
      puVar1 = *(undefined2 **)(piVar3 + 2);
      uVar4 = ((undefined2 *)puVar1)[1];
      *(undefined2 *)0x118a = *puVar1;
      *(undefined2 *)0x118c = uVar4;
      goto LAB_1000_2788;
    }
  }
  *(undefined2 *)0x118c = 0;
  *(undefined2 *)0x118a = 0;
LAB_1000_2788:
  FUN_1000_222c();
  FUN_1000_44da(0x7e60);
  FUN_1000_44e0(0x7e5a,1,2);
  iVar2 = FUN_1000_0168();
  if (iVar2 == 0) {
    FUN_1000_2250();
  }
  FUN_1000_44da();
  if (*(int *)0x1224 != 0 || *(int *)0x1222 != 0) {
    FUN_1000_240a();
  }
  FUN_1000_015c();
  if (1 < *(int *)0x106) {
    FUN_1000_222c();
  }
  return 0;
}


// ---- FUN_1000_2812 @ 1000:2812

undefined2 __cdecl16near FUN_1000_2812(undefined2 param_1,undefined4 param_2)

{
  int iVar1;
  undefined2 uVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 unaff_DS;
  undefined4 uVar5;
  long lVar6;
  undefined2 uVar7;
  
  uVar4 = (undefined2)((ulong)param_2 >> 0x10);
  iVar3 = (int)param_2;
  if (*(char *)(iVar3 + 0x10) != '\x02') {
    return 1;
  }
  if (*(int *)(iVar3 + 0xc) == 0) {
    return 1;
  }
  uVar5 = FUN_1000_11ac(iVar3,uVar4,0x572);
  uVar2 = (undefined2)((ulong)uVar5 >> 0x10);
  uVar7 = (undefined2)uVar5;
  iVar1 = FUN_1000_4094(uVar5);
  if (iVar1 == 0) {
    return 1;
  }
  iVar1 = FUN_1000_4094(uVar7,uVar2,0x578);
  if (iVar1 == 0) {
    return 1;
  }
  iVar1 = FUN_1000_4094(uVar7,uVar2,0x57e);
  if (iVar1 == 0) {
    return 1;
  }
  iVar1 = FUN_1000_4094(uVar7,uVar2,0x584);
  if (iVar1 == 0) {
    uVar4 = 1;
  }
  else {
    iVar1 = FUN_1000_4094(uVar7,uVar2,0x58a);
    if (iVar1 == 0) {
      uVar4 = 1;
    }
    else {
      lVar6 = FUN_1000_44e0(0x7e5c,2,0x41,0,uVar7,uVar2,0,4,*(undefined2 *)(iVar3 + 8),
                            *(undefined2 *)(iVar3 + 10));
      if (lVar6 == 0) {
        uVar4 = FUN_1000_2250(0xfff1,*(undefined2 *)0xd5a);
      }
      else {
        uVar4 = 1;
      }
    }
  }
  return uVar4;
}


// ---- FUN_1000_2918 @ 1000:2918

void __cdecl16near FUN_1000_2918(void)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  undefined2 local_4;
  
  for (local_4 = 0; local_4 < *(int *)0x1460; local_4 = local_4 + 1) {
    uVar1 = *(undefined2 *)0x118c;
    *(undefined2 *)(local_4 * 4 + 0x1462) = *(undefined2 *)0x118a;
    *(undefined2 *)(local_4 * 4 + 0x1464) = uVar1;
  }
  return;
}


// ---- FUN_1000_294e @ 1000:294e

undefined2 __cdecl16near FUN_1000_294e(int param_1,undefined2 *param_2)

{
  int iVar1;
  undefined2 unaff_DS;
  undefined4 uVar2;
  undefined1 local_48 [66];
  undefined1 local_6 [4];
  
  *(undefined2 *)0x11a0 = 0x2a8c;
  *(undefined2 *)0x121e = 0x2b9c;
  *(undefined2 *)0x18aa = 0x2c2c;
  *(undefined2 *)0x11a2 = 0x2c34;
  *(undefined2 *)0x11a8 = 0x1c82;
  *(undefined2 *)0x18ac = 0x1ca8;
  *(undefined2 *)0x1238 = 0x1cd6;
  *(undefined2 *)0x10a = 1;
  *(undefined2 *)0x106 = 2;
  iVar1 = FUN_1000_013e();
  if (iVar1 == 0) {
    FUN_1000_2250(0xfffc,0x590);
  }
  iVar1 = FUN_1000_0156();
  if (iVar1 == 0) {
    FUN_1000_2250(0xfffb,0x5af);
  }
  if (param_1 < 1) {
    FUN_1000_22be();
  }
  uVar2 = FUN_1000_212c(*param_2,((undefined2 *)param_2)[1],local_48);
  iVar1 = (int)((ulong)uVar2 >> 0x10);
  *(undefined2 *)0x1222 = (int)uVar2;
  *(int *)0x1224 = iVar1;
  if (iVar1 == 0 && *(int *)0x1222 == 0) {
    FUN_1000_2250(0xfffa,0x5ca,local_48);
  }
  FUN_1000_1ee6(local_6);
  FUN_1000_44e0(0x7e5a,1,2,2,0xfffe);
  *(undefined2 *)0x143e = 0;
  iVar1 = FUN_1000_0168();
  if (iVar1 == 0) {
    FUN_1000_2250(0xfff2,0x5e4,local_48);
  }
  if (*(int *)0x1224 != 0 || *(int *)0x1222 != 0) {
    FUN_1000_240a(*(undefined2 *)0x1222,*(undefined2 *)0x1224);
  }
  if (*(int *)0x143e != 0) {
    FUN_1000_2250(0xfff6,0x5ff);
  }
  FUN_1000_015c();
  return 0;
}


// ---- FUN_1000_2a80 @ 1000:2a80

void __cdecl16near FUN_1000_2a80(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 unaff_DS;
  undefined4 uVar5;
  int local_30;
  undefined1 local_2a [40];
  
  bVar1 = false;
  if (1 < *(int *)0x106) {
    FUN_1000_222c(0x619,*(undefined2 *)0x18a2,*(undefined2 *)0x18a4);
    uVar5 = FUN_1000_44e0(0x7e06,0);
    FUN_1000_222c(0x639,uVar5);
  }
  for (local_30 = 0; local_30 < *(int *)0x1460; local_30 = local_30 + 1) {
    uVar5 = FUN_1000_1cea(*(undefined2 *)0x112,*(undefined2 *)0x114,local_30 * 0x28,
                          local_30 * 0x28 >> 0xf,0x28,local_2a);
    uVar4 = (undefined2)((ulong)uVar5 >> 0x10);
    iVar2 = (int)uVar5;
    iVar3 = FUN_1000_4232(0x655);
    if (iVar3 == 0) {
      uVar4 = FUN_1000_43f6(*(undefined2 *)(iVar2 + 0x10),*(undefined2 *)(iVar2 + 0x12),0x20,0);
      bVar1 = true;
      FUN_1000_222c(0x65e,uVar4);
    }
    else {
      iVar3 = FUN_1000_4232(0x68f);
      if (iVar3 == 0) {
        bVar1 = true;
        uVar4 = FUN_1000_43f6(*(undefined2 *)(iVar2 + 0x10),*(undefined2 *)(iVar2 + 0x12),0x30,0);
        FUN_1000_222c(0x698,uVar4);
      }
    }
  }
  if (!bVar1) {
    FUN_1000_222c(0x6c4);
  }
  *(undefined2 *)0x106 = 1;
  return;
}


// ---- FUN_1000_2b90 @ 1000:2b90

void __cdecl16near FUN_1000_2b90(undefined2 param_1,undefined4 param_2)

{
  int iVar1;
  undefined2 unaff_DS;
  undefined4 uVar2;
  
  uVar2 = FUN_1000_11ac((int)param_2,param_2._2_2_);
  uVar2 = FUN_1000_44e0(0x7e5d,1,0x41,0,uVar2);
  iVar1 = (int)((ulong)uVar2 >> 0x10);
  *(undefined2 *)((int)param_2 + 8) = (int)uVar2;
  *(int *)((int)param_2 + 10) = iVar1;
  if ((*(int *)((int)param_2 + 8) == -1) && (iVar1 == -1)) {
    uVar2 = FUN_1000_11ac((int)param_2,param_2._2_2_,0x6f0);
    iVar1 = FUN_1000_4094(uVar2);
    if (iVar1 != 0) {
      if (*(int *)0x143e == 0) {
        *(undefined2 *)0x143e = 1;
        FUN_1000_222c(0x6f6);
        FUN_1000_222c(0x714);
      }
      uVar2 = FUN_1000_11ac((int)param_2,param_2._2_2_);
      FUN_1000_222c(0x731,uVar2);
    }
  }
  return;
}


// ---- FUN_1000_2c2e @ 1000:2c2e

undefined2 __cdecl16near FUN_1000_2c2e(void)

{
  int iVar1;
  undefined2 unaff_DS;
  
  iVar1 = FUN_1000_013e();
  if (iVar1 == 0) {
    FUN_1000_2250(0xfffc,*(undefined2 *)0xd4a);
  }
  iVar1 = FUN_1000_0156();
  if (iVar1 == 0) {
    FUN_1000_2250(0xfffb,*(undefined2 *)0xd4c);
  }
  for (iVar1 = 0; iVar1 < 0x1f; iVar1 = iVar1 + 1) {
    FUN_1000_44e0(0x7e31,1,0,2,iVar1);
  }
  FUN_1000_44da(0x7e5e,1,2,2,0xffff);
  FUN_1000_222c(*(undefined2 *)0xd38);
  FUN_1000_015c();
  return 0;
}


// ---- FUN_1000_2cb8 @ 1000:2cb8

undefined2 __cdecl16near FUN_1000_2cb8(int param_1,undefined2 *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  undefined2 uVar8;
  char cVar9;
  int extraout_DX;
  undefined2 *puVar10;
  int unaff_DI;
  undefined2 unaff_DS;
  undefined4 uVar11;
  long lVar12;
  int iVar13;
  int local_78;
  undefined1 local_76 [64];
  undefined4 local_36;
  int local_32;
  undefined2 local_30;
  undefined1 local_2e [4];
  undefined1 local_2a [40];
  
  local_32 = 0;
  *(undefined2 *)0x11a0 = 0x30a8;
  *(undefined2 *)0x121e = 0x3148;
  *(undefined2 *)0x18aa = 0x31c8;
  *(undefined2 *)0x11a2 = 0x32c6;
  *(undefined2 *)0x11a8 = 0x1c82;
  *(undefined2 *)0x18ac = 0x1ca8;
  *(undefined2 *)0x1238 = 0x1cd6;
  iVar6 = FUN_1000_013e();
  if (iVar6 == 0) {
    FUN_1000_2250(0xfffc,*(undefined2 *)0xd4a);
  }
  iVar6 = FUN_1000_0156();
  if (iVar6 == 0) {
    FUN_1000_2250(0xfffb,*(undefined2 *)0xd4c);
  }
  if (param_1 < 1) {
    FUN_1000_22be();
  }
  puVar10 = (undefined2 *)param_2;
  uVar8 = (undefined2)((ulong)param_2 >> 0x10);
  if (param_1 < 2) {
    iVar6 = -1;
  }
  else {
    iVar6 = FUN_1000_3fa4(puVar10[2],puVar10[3]);
  }
  *(int *)0x1212 = iVar6;
  if (0x1f < iVar6) {
    *(undefined2 *)0x1212 = 0xffff;
  }
  local_36 = (undefined1 *)FUN_1000_4168(*param_2,puVar10[1],0x25);
  if (local_36 != (undefined1 *)0x0) {
    *local_36 = 0;
  }
  uVar11 = FUN_1000_212c(*param_2,puVar10[1],local_76);
  iVar6 = (int)((ulong)uVar11 >> 0x10);
  *(undefined2 *)0x1222 = (int)uVar11;
  *(int *)0x1224 = iVar6;
  if (iVar6 == 0 && *(int *)0x1222 == 0) {
    FUN_1000_2250(0xfffa,*(undefined2 *)0xd34,local_76);
  }
  if (local_36._2_2_ != 0 || (undefined1 *)local_36 != (undefined1 *)0x0) {
    *local_36 = 0x25;
  }
  *(uint *)0x10a = (uint)(local_36._2_2_ == 0 && (undefined1 *)local_36 == (undefined1 *)0x0);
  FUN_1000_222c(*(undefined2 *)0xd42,local_76);
  iVar6 = FUN_1000_1ee6(local_2e);
  if (iVar6 == 0) {
    FUN_1000_2250(0xfff2,*(undefined2 *)0xd1e,local_76);
  }
  lVar12 = FUN_1000_44e0(0x7e0f,1,0,4,*(undefined2 *)0x18a2,*(undefined2 *)0x18a4);
  *(undefined2 *)0x18ae = (int)lVar12;
  *(undefined2 *)0x18b0 = (int)((ulong)lVar12 >> 0x10);
  uVar5 = lVar12 + 0x3ff;
  iVar6 = (int)(uVar5 >> 0x10);
  *(uint *)0x18b6 = (uint)uVar5 & 0xfc00;
  *(int *)0x18b8 = iVar6;
  if (iVar6 == 0 && (uVar5 & 0xfc00) == 0) {
    FUN_1000_2250(0xfffd,*(undefined2 *)0xd50,*(undefined2 *)0x18a2,*(undefined2 *)0x18a4);
  }
  lVar12 = FUN_1000_44e0(0x7e5a,1,2,2,*(undefined2 *)0x1212);
  if (lVar12 == 0) {
    FUN_1000_2250(0xfffd,*(undefined2 *)0xd52);
  }
  iVar6 = FUN_1000_0168();
  if (iVar6 == 0) {
    FUN_1000_44da(0x7e5b,0);
    FUN_1000_2250(0xfff2,*(undefined2 *)0xd1e,local_76);
  }
  if (*(int *)0x1224 != 0 || *(int *)0x1222 != 0) {
    FUN_1000_240a(*(undefined2 *)0x1222,*(undefined2 *)0x1224);
  }
  FUN_1000_44da(0x7e5b,0);
  *(undefined2 *)0x1236 = 0;
  for (local_78 = 0; local_78 < *(int *)0x1460; local_78 = local_78 + 1) {
    FUN_1000_1cea(*(undefined2 *)0x112,*(undefined2 *)0x114,local_78 * 0x28,local_78 * 0x28 >> 0xf,
                  0x28,local_2a);
    iVar6 = extraout_DX;
    iVar13 = extraout_DX;
    iVar7 = FUN_1000_4232(0x740);
    if (iVar7 == 0) {
      uVar2 = *(uint *)(iVar6 + 8);
      iVar7 = *(int *)(iVar6 + 10);
      puVar1 = (uint *)(local_78 * 4 + 0x1462);
      uVar3 = *puVar1;
      iVar4 = *(int *)(local_78 * 4 + 0x1464);
      *(int *)0x1228 = uVar2 + *puVar1;
      *(int *)0x122a = iVar7 + iVar4 + (uint)CARRY2(uVar2,uVar3);
      uVar8 = FUN_1000_43f6(*(undefined2 *)(iVar6 + 0x10),*(undefined2 *)(iVar6 + 0x12),0x20,0);
      *(undefined2 *)0x1234 = uVar8;
      local_32 = 1;
      iVar6 = FUN_1000_44e0(0x7e30,2,2,2,*(undefined2 *)0x1212,1,0x10,0x1228);
      *(int *)0x1212 = iVar6;
      if (iVar6 == -1) {
        FUN_1000_2250(0xfffd);
      }
    }
    else {
      iVar6 = FUN_1000_4232(0x749);
      if (iVar6 == 0) {
        uVar8 = 0;
        iVar6 = 0x30;
        local_30 = FUN_1000_43f6(uRam00000040,uRam00000042,0x30,0);
        cVar9 = '\0';
        lVar12 = FUN_1000_44e0(0x7e00,2,0,2,local_30,0,4,
                               *(int *)(local_78 * 4 + 0x1462) + *(int *)(iVar6 + 8));
        if (lVar12 == 0) {
          *(char *)(unaff_DI + -0xe) = *(char *)(unaff_DI + -0xe) + cVar9;
        }
      }
    }
  }
  if (local_32 == 0) {
    *(undefined2 *)0x122a = 0;
    *(undefined2 *)0x1228 = 0;
    *(undefined2 *)0x1234 = 0;
    iVar6 = FUN_1000_44e0(0x7e30,2,2,2,*(undefined2 *)0x1212,1,0x10,0x1228);
    *(int *)0x1212 = iVar6;
    if (iVar6 == -1) {
      FUN_1000_2250(0xfffd,*(undefined2 *)0xd52);
    }
  }
  if (*(int *)0xc2 != 0) {
    FUN_1000_0166(0,*(undefined2 *)0x1212,*(undefined2 *)0x1460,*(undefined2 *)0x18b6,
                  *(undefined2 *)0x18b8,local_76);
  }
  if (1 < *(int *)0x106) {
    FUN_1000_222c(*(undefined2 *)0xd22,*(undefined2 *)0x1212);
  }
  FUN_1000_015c();
  return *(undefined2 *)0x1212;
}


// ---- FUN_1000_309c @ 1000:309c

void __cdecl16near FUN_1000_309c(void)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  undefined4 uVar3;
  int iVar4;
  
  for (iVar4 = 0; iVar4 < *(int *)0x1460; iVar4 = iVar4 + 1) {
    uVar1 = *(undefined2 *)0x18b8;
    *(undefined2 *)(iVar4 * 4 + 0x1462) = *(undefined2 *)0x18b6;
    *(undefined2 *)(iVar4 * 4 + 0x1464) = uVar1;
  }
  uVar1 = *(undefined2 *)0x18b0;
  *(undefined2 *)0x122c = *(undefined2 *)0x18ae;
  *(undefined2 *)0x122e = uVar1;
  uVar1 = *(undefined2 *)0x18a2;
  uVar2 = *(undefined2 *)0x18a4;
  *(undefined2 *)0x1230 = uVar1;
  *(undefined2 *)0x1232 = uVar2;
  if (1 < *(int *)0x106) {
    FUN_1000_222c(*(undefined2 *)0xd3a,uVar1,uVar2);
    uVar3 = FUN_1000_44e0(0x7e06,0);
    FUN_1000_222c(*(undefined2 *)0xd3c,uVar3);
    FUN_1000_222c(*(undefined2 *)0xd40,*(undefined2 *)0x18ae,*(undefined2 *)0x18b0);
    FUN_1000_222c(*(undefined2 *)0xd3e,*(undefined2 *)0x18b6,*(undefined2 *)0x18b8);
  }
  return;
}


// ---- FUN_1000_313c @ 1000:313c

void __cdecl16near FUN_1000_313c(undefined2 param_1,undefined4 param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  undefined4 uVar3;
  
  uVar3 = FUN_1000_11ac((int)param_2,param_2._2_2_);
  uVar3 = FUN_1000_44e0(0x7e5d,1,0x41,0,uVar3);
  iVar1 = (int)((ulong)uVar3 >> 0x10);
  *(undefined2 *)((int)param_2 + 8) = (int)uVar3;
  *(int *)((int)param_2 + 10) = iVar1;
  if ((*(int *)((int)param_2 + 8) == -1) && (iVar1 == -1)) {
    uVar3 = FUN_1000_11ac((int)param_2,param_2._2_2_,0x754);
    iVar1 = FUN_1000_4094(uVar3);
    if (iVar1 != 0) {
      FUN_1000_44da(0x7e5b,0);
      uVar2 = FUN_1000_11ac((int)param_2);
      FUN_1000_2250(0xfff6,*(undefined2 *)0xd58,uVar2);
    }
  }
  return;
}


// ---- FUN_1000_31bc @ 1000:31bc

undefined2 __cdecl16near FUN_1000_31bc(undefined2 param_1,undefined4 param_2)

{
  int iVar1;
  undefined2 uVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 unaff_DS;
  undefined4 uVar5;
  long lVar6;
  undefined2 uVar7;
  
  uVar4 = (undefined2)((ulong)param_2 >> 0x10);
  iVar3 = (int)param_2;
  if (*(char *)(iVar3 + 0x10) != '\x02') {
    return 1;
  }
  if (*(int *)(iVar3 + 0xc) == 0) {
    return 1;
  }
  uVar5 = FUN_1000_11ac(iVar3,uVar4,0x75a);
  uVar2 = (undefined2)((ulong)uVar5 >> 0x10);
  uVar7 = (undefined2)uVar5;
  iVar1 = FUN_1000_4094(uVar5);
  if (iVar1 == 0) {
    return 1;
  }
  iVar1 = FUN_1000_4094(uVar7,uVar2,0x760);
  if (iVar1 == 0) {
    return 1;
  }
  iVar1 = FUN_1000_4094(uVar7,uVar2,0x766);
  if (iVar1 == 0) {
    return 1;
  }
  iVar1 = FUN_1000_4094(uVar7,uVar2,0x76c);
  if (iVar1 == 0) {
    uVar4 = 1;
  }
  else {
    iVar1 = FUN_1000_4094(uVar7,uVar2,0x772);
    if (iVar1 == 0) {
      uVar4 = 1;
    }
    else {
      lVar6 = FUN_1000_44e0(0x7e5c,2,0x41,0,uVar7,uVar2,0,4,*(undefined2 *)(iVar3 + 8),
                            *(undefined2 *)(iVar3 + 10));
      if (lVar6 == 0) {
        uVar4 = FUN_1000_2250(0xfff1,*(undefined2 *)0xd5a);
      }
      else {
        uVar4 = 1;
      }
    }
  }
  return uVar4;
}


// ---- FUN_1000_32ba @ 1000:32ba

undefined2 __cdecl16near
FUN_1000_32ba(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5)

{
  FUN_1000_450a(param_1,param_2,param_4,param_5,param_3,0);
  return 1;
}


// ---- FUN_1000_32e0 @ 1000:32e0

undefined2 __cdecl16near FUN_1000_32e0(int param_1,undefined2 *param_2)

{
  uint *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  int iVar7;
  undefined2 uVar8;
  int iVar9;
  int iVar10;
  undefined2 uVar11;
  undefined2 *puVar12;
  undefined2 *puVar13;
  int unaff_DS;
  undefined4 uVar14;
  long lVar15;
  int local_70;
  undefined1 local_6e [64];
  undefined1 local_2e [44];
  
  *(undefined2 *)0x11a0 = 0x36d0;
  *(undefined2 *)0x121e = 0x3770;
  *(undefined2 *)0x18aa = 0x37f0;
  *(undefined2 *)0x11a2 = 0x38ee;
  *(undefined2 *)0x11a8 = 0x1c82;
  *(undefined2 *)0x18ac = 0x1ca8;
  *(undefined2 *)0x1238 = 0x1cd6;
  *(undefined2 *)0x10a = 1;
  *(undefined2 *)0x11aa = 0xc000;
  *(undefined2 *)0x11c2 = 0;
  iVar7 = FUN_1000_013e();
  if (iVar7 == 0) {
    FUN_1000_2250(0xfffc,*(undefined2 *)0xd4a);
  }
  iVar7 = FUN_1000_0156();
  if (iVar7 == 0) {
    FUN_1000_2250(0xfffb,*(undefined2 *)0xd4c);
  }
  if (param_1 < 1) {
    FUN_1000_22be();
  }
  if (param_1 < 2) {
    FUN_1000_40e0(&stack0xff50);
    FUN_1000_21ee(&stack0xff50);
  }
  else {
    FUN_1000_40e0(&stack0xff50);
  }
  FUN_1000_4516(&stack0xff50);
  iVar7 = FUN_1000_2328(local_6e);
  if (iVar7 != 0) {
    FUN_1000_222c(*(undefined2 *)0xd44,local_6e);
    return 0;
  }
  FUN_1000_40e0(&stack0xff50);
  uVar14 = FUN_1000_2366(local_6e);
  iVar7 = (int)((ulong)uVar14 >> 0x10);
  *(undefined2 *)0x11e6 = (int)uVar14;
  *(int *)0x11e8 = iVar7;
  if (iVar7 == 0 && *(int *)0x11e6 == 0) {
    FUN_1000_2250(0xfff8,*(undefined2 *)0xd32,local_6e);
  }
  FUN_1000_20e0(1,local_6e);
  uVar14 = FUN_1000_212c(*param_2,((undefined2 *)param_2)[1],local_6e);
  iVar7 = (int)((ulong)uVar14 >> 0x10);
  *(undefined2 *)0x1222 = (int)uVar14;
  *(int *)0x1224 = iVar7;
  if (iVar7 == 0 && *(int *)0x1222 == 0) {
    FUN_1000_2250(0xfffa,*(undefined2 *)0xd34,local_6e);
  }
  FUN_1000_222c(*(undefined2 *)0xd46,&stack0xff50);
  FUN_1000_39a0(*(undefined2 *)0x11e6,*(undefined2 *)0x11e8,0x11aa);
  iVar7 = FUN_1000_1ee6(local_2e);
  if (iVar7 == 0) {
    FUN_1000_2250(0xfff2,*(undefined2 *)0xd1e,local_6e);
  }
  lVar15 = FUN_1000_44e0(0x7e0f,1,0,4,*(undefined2 *)0x18a2,*(undefined2 *)0x18a4);
  *(undefined2 *)0x18ae = (int)lVar15;
  *(undefined2 *)0x18b0 = (int)((ulong)lVar15 >> 0x10);
  uVar6 = lVar15 + 0x3ff;
  iVar7 = (int)(uVar6 >> 0x10);
  *(uint *)0x18b6 = (uint)uVar6 & 0xfc00;
  *(int *)0x18b8 = iVar7;
  if (iVar7 == 0 && (uVar6 & 0xfc00) == 0) {
    FUN_1000_2250(0xfffd,*(undefined2 *)0xd50,*(undefined2 *)0x18a2,*(undefined2 *)0x18a4);
  }
  FUN_1000_44e0(0x7e0e,1,0,4,*(undefined2 *)0x18ae,*(undefined2 *)0x18b0);
  FUN_1000_44e0(0x7e5a,1,2,2,0);
  iVar7 = FUN_1000_0168();
  if (iVar7 == 0) {
    FUN_1000_44da(0x7e5b);
    FUN_1000_2250(0xfff2,*(undefined2 *)0xd1e);
  }
  if (*(int *)0x1224 != 0 || *(int *)0x1222 != 0) {
    FUN_1000_240a(*(undefined2 *)0x1222);
  }
  FUN_1000_44da(0x7e5b);
  FUN_1000_44da(0x7e5e,1,2);
  for (local_70 = 0; local_70 < *(int *)0x1460; local_70 = local_70 + 1) {
    uVar8 = FUN_1000_1cea(*(undefined2 *)0x112,*(undefined2 *)0x114,local_70 * 0x28,
                          local_70 * 0x28 >> 0xf,0x28);
    iVar7 = unaff_DS;
    iVar9 = FUN_1000_4232(0x788);
    if (iVar9 == 0) {
      uVar4 = *(uint *)(iVar7 + 8);
      iVar9 = *(int *)(iVar7 + 10);
      puVar1 = (uint *)(local_70 * 4 + 0x1462);
      uVar5 = *puVar1;
      iVar10 = *(int *)(local_70 * 4 + 0x1464);
      *(int *)0x1228 = uVar4 + *puVar1;
      *(int *)0x122a = iVar9 + iVar10 + (uint)CARRY2(uVar4,uVar5);
      uVar8 = FUN_1000_43f6(*(undefined2 *)(iVar7 + 0x10),*(undefined2 *)(iVar7 + 0x12));
      *(undefined2 *)0x1234 = uVar8;
    }
    else {
      iVar9 = unaff_DS;
      iVar10 = FUN_1000_4232(0x791);
      if (iVar10 == 0) {
        uVar8 = *(undefined2 *)(iVar9 + 0x12);
        iVar7 = *(int *)(iVar9 + 0x10);
        uVar11 = FUN_1000_43f6(iVar7,uVar8);
        *(undefined2 *)0x11bc = uVar11;
        uVar4 = *(uint *)(local_70 * 4 + 0x1462);
        iVar9 = *(int *)(local_70 * 4 + 0x1464);
        uVar5 = *(uint *)(iVar7 + 8);
        iVar10 = *(int *)(iVar7 + 10);
        *(int *)0x11be = uVar4 + *(uint *)(iVar7 + 8);
        *(int *)0x11c0 = iVar9 + iVar10 + (uint)CARRY2(uVar4,uVar5);
      }
    }
  }
  puVar12 = (undefined2 *)*(undefined2 *)0x752;
  puVar13 = (undefined2 *)0x11ac;
  for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
    puVar3 = puVar13;
    puVar13 = puVar13 + 1;
    puVar2 = puVar12;
    puVar12 = puVar12 + 1;
    *puVar3 = *puVar2;
  }
  FUN_1000_39a0(*(undefined2 *)0x11e6,*(undefined2 *)0x11e8);
  if (*(int *)0x11e8 != 0 || *(int *)0x11e6 != 0) {
    FUN_1000_240a();
  }
  FUN_1000_015c();
  return 0;
}


// ---- FUN_1000_36c4 @ 1000:36c4

void __cdecl16near FUN_1000_36c4(void)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  undefined4 uVar3;
  int iVar4;
  
  for (iVar4 = 0; iVar4 < *(int *)0x1460; iVar4 = iVar4 + 1) {
    uVar1 = *(undefined2 *)0x18b8;
    *(undefined2 *)(iVar4 * 4 + 0x1462) = *(undefined2 *)0x18b6;
    *(undefined2 *)(iVar4 * 4 + 0x1464) = uVar1;
  }
  uVar1 = *(undefined2 *)0x18b0;
  *(undefined2 *)0x122c = *(undefined2 *)0x18ae;
  *(undefined2 *)0x122e = uVar1;
  uVar1 = *(undefined2 *)0x18a2;
  uVar2 = *(undefined2 *)0x18a4;
  *(undefined2 *)0x1230 = uVar1;
  *(undefined2 *)0x1232 = uVar2;
  if (1 < *(int *)0x106) {
    FUN_1000_222c(*(undefined2 *)0xd3a,uVar1,uVar2);
    uVar3 = FUN_1000_44e0(0x7e06,0);
    FUN_1000_222c(*(undefined2 *)0xd3c,uVar3);
    FUN_1000_222c(*(undefined2 *)0xd40,*(undefined2 *)0x18ae,*(undefined2 *)0x18b0);
    FUN_1000_222c(*(undefined2 *)0xd3e,*(undefined2 *)0x18b6,*(undefined2 *)0x18b8);
  }
  return;
}


// ---- FUN_1000_3764 @ 1000:3764

void __cdecl16near FUN_1000_3764(undefined2 param_1,undefined4 param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  undefined4 uVar3;
  
  uVar3 = FUN_1000_11ac((int)param_2,param_2._2_2_);
  uVar3 = FUN_1000_44e0(0x7e5d,1,0x41,0,uVar3);
  iVar1 = (int)((ulong)uVar3 >> 0x10);
  *(undefined2 *)((int)param_2 + 8) = (int)uVar3;
  *(int *)((int)param_2 + 10) = iVar1;
  if ((*(int *)((int)param_2 + 8) == -1) && (iVar1 == -1)) {
    uVar3 = FUN_1000_11ac((int)param_2,param_2._2_2_,0x79a);
    iVar1 = FUN_1000_4094(uVar3);
    if (iVar1 != 0) {
      FUN_1000_44da(0x7e5b,0);
      uVar2 = FUN_1000_11ac((int)param_2);
      FUN_1000_2250(0xfff6,*(undefined2 *)0xd58,uVar2);
    }
  }
  return;
}


// ---- FUN_1000_37e4 @ 1000:37e4

undefined2 __cdecl16near FUN_1000_37e4(undefined2 param_1,undefined4 param_2)

{
  int iVar1;
  undefined2 uVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 unaff_DS;
  undefined4 uVar5;
  long lVar6;
  undefined2 uVar7;
  
  uVar4 = (undefined2)((ulong)param_2 >> 0x10);
  iVar3 = (int)param_2;
  if (*(char *)(iVar3 + 0x10) != '\x02') {
    return 1;
  }
  if (*(int *)(iVar3 + 0xc) == 0) {
    return 1;
  }
  uVar5 = FUN_1000_11ac(iVar3,uVar4,0x7a0);
  uVar2 = (undefined2)((ulong)uVar5 >> 0x10);
  uVar7 = (undefined2)uVar5;
  iVar1 = FUN_1000_4094(uVar5);
  if (iVar1 == 0) {
    return 1;
  }
  iVar1 = FUN_1000_4094(uVar7,uVar2,0x7a6);
  if (iVar1 == 0) {
    return 1;
  }
  iVar1 = FUN_1000_4094(uVar7,uVar2,0x7ac);
  if (iVar1 == 0) {
    return 1;
  }
  iVar1 = FUN_1000_4094(uVar7,uVar2,0x7b2);
  if (iVar1 == 0) {
    uVar4 = 1;
  }
  else {
    iVar1 = FUN_1000_4094(uVar7,uVar2,0x7b8);
    if (iVar1 == 0) {
      uVar4 = 1;
    }
    else {
      lVar6 = FUN_1000_44e0(0x7e5c,2,0x41,0,uVar7,uVar2,0,4,*(undefined2 *)(iVar3 + 8),
                            *(undefined2 *)(iVar3 + 10));
      if (lVar6 == 0) {
        uVar4 = FUN_1000_2250(0xfff1,*(undefined2 *)0xd5a);
      }
      else {
        uVar4 = 1;
      }
    }
  }
  return uVar4;
}


// ---- FUN_1000_38e2 @ 1000:38e2

undefined2 __cdecl16near FUN_1000_38e2(int *param_1,int param_2)

{
  int iVar1;
  undefined2 unaff_DS;
  int *local_8;
  int local_4;
  
  iVar1 = *param_1;
  param_2 = param_2 / 2;
  local_8 = param_1;
  local_4 = param_2;
  while (local_8 = (int *)CONCAT22(local_8._2_2_,(int *)local_8 + 1), *local_8 == iVar1) {
    local_4 = local_4 + -1;
  }
  FUN_1000_254a(&stack0x0008);
  if (local_4 == 0) {
    FUN_1000_432a(-param_2,*(undefined2 *)0x11e6,*(undefined2 *)0x11e8);
    FUN_1000_432a(iVar1,*(undefined2 *)0x11e6,*(undefined2 *)0x11e8);
  }
  else {
    FUN_1000_432a(param_2,*(undefined2 *)0x11e6,*(undefined2 *)0x11e8);
    FUN_1000_254a((int *)param_1,(int)((ulong)param_1 >> 0x10),2,param_2,*(undefined2 *)0x11e6,
                  *(undefined2 *)0x11e8);
  }
  *(int *)0x11c2 = *(int *)0x11c2 + 1;
  return 1;
}


// ---- FUN_1000_39a0 @ 1000:39a0

undefined2 __cdecl16near
FUN_1000_39a0(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  int iVar1;
  
  FUN_1000_4362(param_1,param_2);
  iVar1 = FUN_1000_254a(param_3,param_4,0x1a,1,param_1,param_2);
  if (iVar1 == 0) {
    return 0;
  }
  return 1;
}


// ---- FUN_1000_39e2 @ 1000:39e2

undefined2 __cdecl16near FUN_1000_39e2(int param_1,undefined2 *param_2)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 *puVar4;
  undefined2 unaff_DS;
  long lVar5;
  int local_6a;
  uint local_66;
  undefined1 local_60 [64];
  long local_20;
  int local_1c;
  undefined1 local_1a [4];
  undefined2 local_16;
  undefined2 local_14;
  undefined2 local_12;
  undefined2 local_10;
  int local_a;
  undefined2 local_8;
  undefined2 local_6;
  uint local_4;
  
  iVar1 = FUN_1000_013e();
  if (iVar1 == 0) {
    FUN_1000_2250(0xfffc,*(undefined2 *)0xd4a);
  }
  iVar1 = FUN_1000_0156();
  if (iVar1 == 0) {
    FUN_1000_2250(0xfffb,*(undefined2 *)0xd4c);
  }
  if (param_1 < 1) {
    FUN_1000_22be();
  }
  puVar4 = (undefined2 *)param_2;
  uVar3 = (undefined2)((ulong)param_2 >> 0x10);
  if (param_1 < 2) {
    iVar1 = -1;
  }
  else {
    iVar1 = FUN_1000_3fa4(puVar4[2],puVar4[3]);
  }
  if (0x1f < iVar1) {
    iVar1 = -1;
  }
  lVar5 = FUN_1000_212c(*param_2,puVar4[1],local_60);
  if (lVar5 == 0) {
    FUN_1000_2250(0xfff8,*(undefined2 *)0xd34,local_60);
  }
  FUN_1000_222c(*(undefined2 *)0xd48,local_60);
  iVar2 = FUN_1000_24b6(&local_1c);
  if (iVar2 == 0) {
    FUN_1000_2250(0xfff8,*(undefined2 *)0xd56);
  }
  if (local_1c != -0x4000) {
    FUN_1000_2250(0xfff8,*(undefined2 *)0xd56);
  }
  local_20 = FUN_1000_44e0(0x7e0f,1,0,4,local_12,local_10);
  if (local_20 == 0) {
    FUN_1000_2250(0xfffd,*(undefined2 *)0xd50,local_12,local_10);
  }
  else if (local_20 != CONCAT22(local_14,local_16)) {
    FUN_1000_44e0(0x7e0e,1,0,4,local_20);
    FUN_1000_2250(0xfffd,*(undefined2 *)0xd1c);
  }
  for (local_66 = 0; local_66 < local_4; local_66 = local_66 + 1) {
    FUN_1000_24b6(&local_20);
    local_6a = FUN_1000_42f0(lVar5);
    if (local_6a < 0) {
      uVar3 = FUN_1000_42f0(lVar5);
      local_6a = -local_6a;
      while (local_6a != 0) {
        FUN_1000_44e6(local_20,0x10,uVar3,0);
        local_20 = local_20 + 0x10;
        local_6a = local_6a + -1;
      }
    }
    else {
      while (local_6a != 0) {
        iVar2 = FUN_1000_42f0(lVar5);
        FUN_1000_44e6(local_20,0x10,iVar2,iVar2 >> 0xf);
        local_20 = local_20 + 0x10;
        local_6a = local_6a + -1;
      }
    }
  }
  if (lVar5 != 0) {
    FUN_1000_240a(lVar5);
  }
  uVar3 = FUN_1000_44e0(0x7e30,2,2,2,iVar1,1,0x10,local_1a);
  if (local_a != 0) {
    FUN_1000_44e0(0x7e00,2,0,2,local_a,0,4,local_8,local_6);
    uVar3 = local_6;
  }
  if (1 < *(int *)0x106) {
    FUN_1000_222c(*(undefined2 *)0xd22,uVar3);
  }
  uVar3 = 0x3c7a;
  FUN_1000_015c();
  return uVar3;
}


// ---- FUN_1000_3c86 @ 1000:3c86

void __cdecl16near FUN_1000_3c86(int param_1,undefined2 *param_2)

{
  int iVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  undefined2 unaff_DS;
  undefined4 uVar4;
  
  iVar1 = FUN_1000_013e();
  if (iVar1 == 0) {
    FUN_1000_2250(0xfffc,0x7c6);
  }
  if (param_1 == 0) {
    FUN_1000_222c(0x81c);
    iVar1 = FUN_1000_4528(0x4007);
    if (iVar1 == 0) {
      FUN_1000_222c(0x843);
    }
    else {
      FUN_1000_4528(0x4000);
    }
  }
  else {
    uVar3 = (undefined2)((ulong)param_2 >> 0x10);
    puVar2 = (undefined2 *)param_2;
    uVar4 = FUN_1000_4510(*param_2,puVar2[1]);
    iVar1 = (int)((ulong)uVar4 >> 0x10);
    *(undefined2 *)0x11a4 = (int)uVar4;
    *(int *)0x11a6 = iVar1;
    if (iVar1 == 0 && *(int *)0x11a4 == 0) {
      FUN_1000_2250(0xfff7,0x804,*param_2,puVar2[1]);
    }
    else {
      FUN_1000_222c(0x7e5,*param_2,puVar2[1]);
      FUN_1000_44fe(*(undefined2 *)0x11a4,*(undefined2 *)0x11a6);
    }
  }
  FUN_1000_015c();
  return;
}


// ---- FUN_1000_3d3e @ 1000:3d3e

void __cdecl16near FUN_1000_3d3e(int param_1,undefined2 *param_2)

{
  int iVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  undefined2 unaff_DS;
  undefined4 uVar4;
  
  iVar1 = FUN_1000_013e();
  if (iVar1 == 0) {
    FUN_1000_2250(0xfffc,0x85e);
  }
  if (param_1 == 0) {
    FUN_1000_222c(0x8b4);
    iVar1 = FUN_1000_3ddc();
    if (iVar1 == 0) {
      FUN_1000_222c(0x8db);
    }
  }
  else {
    uVar3 = (undefined2)((ulong)param_2 >> 0x10);
    puVar2 = (undefined2 *)param_2;
    uVar4 = FUN_1000_4510(*param_2,puVar2[1]);
    iVar1 = (int)((ulong)uVar4 >> 0x10);
    *(undefined2 *)0x11a4 = (int)uVar4;
    *(int *)0x11a6 = iVar1;
    if (iVar1 == 0 && *(int *)0x11a4 == 0) {
      FUN_1000_2250(0xfff7,0x89c,*param_2,puVar2[1]);
    }
    else {
      FUN_1000_222c(0x87d,*param_2,puVar2[1]);
      FUN_1000_44fe(*(undefined2 *)0x11a4,*(undefined2 *)0x11a6);
    }
  }
  FUN_1000_015c();
  return;
}


// ---- FUN_1000_3ddc @ 1000:3ddc

undefined2 __cdecl16near FUN_1000_3ddc(void)

{
  int iVar1;
  undefined2 unaff_DS;
  undefined4 uVar2;
  undefined2 uVar3;
  undefined2 local_52;
  undefined2 local_50;
  undefined1 local_e [4];
  undefined2 local_a;
  undefined2 local_8;
  undefined2 local_6;
  
  *(undefined2 *)0x11a0 = 0x3f4c;
  *(undefined2 *)0x121e = 0x3f82;
  *(undefined2 *)0x18aa = 0x3f84;
  *(undefined2 *)0x11a2 = 0x3f8a;
  *(undefined2 *)0x11a8 = 0x1e0a;
  *(undefined2 *)0x18ac = 0x1e7e;
  *(undefined2 *)0x1238 = 0x1ef0;
  *(undefined2 *)0x10a = 0;
  *(undefined2 *)0x106 = 0;
  FUN_1000_4516(0x8fb);
  uVar2 = FUN_1000_2366(&stack0xffb2);
  iVar1 = (int)((ulong)uVar2 >> 0x10);
  *(undefined2 *)0x1222 = (int)uVar2;
  *(int *)0x1224 = iVar1;
  if (iVar1 == 0 && *(int *)0x1222 == 0) {
    return 0;
  }
  iVar1 = FUN_1000_1ee6(local_e);
  if (iVar1 != 0) {
    uVar2 = FUN_1000_451c(local_52,local_50);
    *(undefined2 *)0x118e = (int)uVar2;
    *(undefined2 *)0x1190 = (int)((ulong)uVar2 >> 0x10);
    FUN_1000_1d9a(uVar2,local_50);
    iVar1 = FUN_1000_0168();
    if (iVar1 != 0) {
      if (*(int *)0x1224 != 0 || *(int *)0x1222 != 0) {
        FUN_1000_240a(*(undefined2 *)0x1222);
      }
      if (*(int *)0x11a6 == 0 && *(int *)0x11a4 == 0) {
        uVar3 = 0;
      }
      else {
        FUN_1000_44fe(*(undefined2 *)0x11a4);
        iVar1 = FUN_1000_4504();
        uVar3 = 0;
        if (iVar1 != 0) {
          local_8 = 0;
          local_a = 0;
          local_6 = 0x118e;
          uVar3 = 0x3f04;
          FUN_1000_2682();
          if (*(int *)0xc2 != 0) {
            uVar3 = *(undefined2 *)0x118e;
            FUN_1000_0166(1,0x1f,*(undefined2 *)0x1460);
          }
        }
      }
      return uVar3;
    }
    if (*(int *)0x1224 != 0 || *(int *)0x1222 != 0) {
      FUN_1000_240a(*(undefined2 *)0x1222);
    }
    return 0;
  }
  return 0;
}


// ---- FUN_1000_3f40 @ 1000:3f40

void __cdecl16near FUN_1000_3f40(void)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  undefined2 local_4;
  
  for (local_4 = 0; local_4 < *(int *)0x1460; local_4 = local_4 + 1) {
    uVar1 = *(undefined2 *)0x1190;
    *(undefined2 *)(local_4 * 4 + 0x1462) = *(undefined2 *)0x118e;
    *(undefined2 *)(local_4 * 4 + 0x1464) = uVar1;
  }
  return;
}


// ---- FUN_1000_3f7e @ 1000:3f7e

undefined2 __cdecl16near
FUN_1000_3f7e(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5)

{
  FUN_1000_450a(param_1,param_2,param_4,param_5,param_3,0);
  return 1;
}


// ---- FUN_1000_3fa4 @ 1000:3fa4

undefined4 __cdecl16near FUN_1000_3fa4(char *param_1,undefined2 param_2)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  bool bVar2;
  int local_c;
  undefined4 local_a;
  char local_6;
  
  local_c = 0;
  local_a = (char *)CONCAT22(param_2,param_1);
  while( true ) {
    uVar1 = (undefined2)((ulong)local_a >> 0x10);
    if ((*(byte *)(*local_a + 0xd5d) & 8) == 0) break;
    local_a = (char *)CONCAT22(uVar1,(char *)local_a + 1);
  }
  local_6 = *local_a;
  bVar2 = local_6 == '-';
  if (bVar2) {
    local_a._0_2_ = (char *)local_a + 1;
    local_a = (char *)CONCAT22(uVar1,(char *)local_a);
    local_6 = *(char *)local_a;
  }
  else if (local_6 == '+') {
    local_a._0_2_ = (char *)local_a + 1;
    local_a = (char *)CONCAT22(uVar1,(char *)local_a);
    local_6 = *(char *)local_a;
  }
  while ((*(byte *)(local_6 + 0xd5d) & 4) != 0) {
    param_2 = (undefined2)((ulong)((long)local_c * 10) >> 0x10);
    local_c = (int)((long)local_c * 10) + local_6 + -0x30;
    local_a = (char *)CONCAT22(local_a._2_2_,(char *)local_a + 1);
    local_6 = *local_a;
  }
  if (bVar2) {
    local_c = -local_c;
  }
  return CONCAT22(param_2,local_c);
}


// ---- FUN_1000_404a @ 1000:404a

char * __cdecl16near FUN_1000_404a(char *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  
  pcVar2 = param_1;
  do {
    pcVar4 = param_1;
    param_1 = (char *)CONCAT22(param_1._2_2_,(char *)param_1 + 1);
  } while (*pcVar4 != '\0');
  do {
    param_1 = pcVar4;
    pcVar3 = param_2;
    pcVar4 = param_1;
    param_2 = (char *)CONCAT22(param_2._2_2_,(char *)param_2 + 1);
    cVar1 = *pcVar3;
    param_1 = (char *)CONCAT22(param_1._2_2_,(char *)param_1 + 1);
    *pcVar4 = cVar1;
    pcVar4 = param_1;
  } while (cVar1 != '\0');
  return pcVar2;
}


// ---- FUN_1000_4094 @ 1000:4094

int __cdecl16near FUN_1000_4094(char *param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  
  do {
    pcVar2 = param_2;
    pcVar1 = param_1;
    param_1 = (char *)CONCAT22(param_1._2_2_,(char *)param_1 + 1);
    param_2 = (char *)CONCAT22(param_2._2_2_,(char *)param_2 + 1);
    if ((*pcVar2 != *pcVar1) || (*param_1 == '\0')) break;
  } while (*param_2 != '\0');
  return (int)*pcVar1 - (int)*pcVar2;
}


// ---- FUN_1000_40e0 @ 1000:40e0

char * __cdecl16near FUN_1000_40e0(char *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  
  pcVar2 = param_1;
  do {
    pcVar4 = param_2;
    pcVar3 = param_1;
    param_2 = (char *)CONCAT22(param_2._2_2_,(char *)param_2 + 1);
    cVar1 = *pcVar4;
    param_1 = (char *)CONCAT22(param_1._2_2_,(char *)param_1 + 1);
    *pcVar3 = cVar1;
  } while (cVar1 != '\0');
  return pcVar2;
}


// ---- FUN_1000_4118 @ 1000:4118

char * __cdecl16near FUN_1000_4118(char *param_1,char *param_2,int param_3)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  
  pcVar2 = param_1;
  do {
    pcVar4 = param_2;
    pcVar3 = param_1;
    param_3 = param_3 + -1;
    if (param_3 < 0) break;
    param_2 = (char *)CONCAT22(param_2._2_2_,(char *)param_2 + 1);
    cVar1 = *pcVar4;
    param_1 = (char *)CONCAT22(param_1._2_2_,(char *)param_1 + 1);
    *pcVar3 = cVar1;
  } while (cVar1 != '\0');
  while (pcVar3 = param_1, param_3 = param_3 + -1, -1 < param_3) {
    param_1 = (char *)CONCAT22(param_1._2_2_,(char *)param_1 + 1);
    *pcVar3 = '\0';
  }
  return pcVar2;
}


// ---- FUN_1000_4168 @ 1000:4168

char * __cdecl16near FUN_1000_4168(char *param_1,char param_2)

{
  char *pcVar1;
  undefined2 uVar2;
  char *local_6;
  undefined2 local_4;
  
  local_6 = (char *)0x1;
  local_4 = 0;
  do {
    pcVar1 = param_1;
    uVar2 = (undefined2)((ulong)param_1 >> 0x10);
    param_1._0_2_ = (char *)param_1 + 1;
    param_1 = (char *)CONCAT22(uVar2,(char *)param_1);
    if (*pcVar1 == param_2) {
      local_6 = (char *)param_1;
      local_4 = uVar2;
    }
  } while (*pcVar1 != '\0');
  return (char *)CONCAT22(local_4,local_6 + -1);
}


// ---- FUN_1000_41ae @ 1000:41ae

int __cdecl16near FUN_1000_41ae(char *param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  undefined2 unaff_DS;
  
  do {
    if ((*(byte *)(*param_1 + 0xd5d) & 1) == 0) {
      cVar1 = *param_1;
    }
    else {
      cVar1 = *param_1 + ' ';
    }
    if ((*(byte *)(*param_2 + 0xd5d) & 1) == 0) {
      cVar2 = *param_2;
    }
    else {
      cVar2 = *param_2 + ' ';
    }
  } while (((cVar2 == cVar1) &&
           (param_1 = (char *)CONCAT22((int)((ulong)param_1 >> 0x10),(char *)param_1 + 1),
           *param_1 != '\0')) &&
          (param_2 = (char *)CONCAT22((int)((ulong)param_2 >> 0x10),(char *)param_2 + 1),
          *param_2 != '\0'));
  return (int)cVar1 - (int)cVar2;
}


// ---- FUN_1000_4232 @ 1000:4232

int __cdecl16near FUN_1000_4232(char *param_1,char *param_2,int param_3)

{
  undefined2 unaff_DS;
  char local_6;
  char local_4;
  
  if (param_3 < 1) {
    return 0;
  }
  while (param_3 = param_3 + -1, -1 < param_3) {
    if ((*(byte *)(*param_1 + 0xd5d) & 1) == 0) {
      local_4 = *param_1;
    }
    else {
      local_4 = *param_1 + ' ';
    }
    if ((*(byte *)(*param_2 + 0xd5d) & 1) == 0) {
      local_6 = *param_2;
    }
    else {
      local_6 = *param_2 + ' ';
    }
    if (((local_6 != local_4) ||
        (param_1 = (char *)CONCAT22((int)((ulong)param_1 >> 0x10),(char *)param_1 + 1),
        *param_1 == '\0')) ||
       (param_2 = (char *)CONCAT22((int)((ulong)param_2 >> 0x10),(char *)param_2 + 1),
       *param_2 == '\0')) break;
  }
  return (int)local_4 - (int)local_6;
}


// ---- FUN_1000_42c8 @ 1000:42c8

int __cdecl16near FUN_1000_42c8(char *param_1)

{
  char *pcVar1;
  int local_4;
  
  local_4 = 0;
  while (pcVar1 = param_1, param_1 = (char *)CONCAT22(param_1._2_2_,(char *)param_1 + 1),
        *pcVar1 != '\0') {
    local_4 = local_4 + 1;
  }
  return local_4;
}


// ---- FUN_1000_42f0 @ 1000:42f0

undefined2 __cdecl16near FUN_1000_42f0(void)

{
  int iVar1;
  undefined2 local_4;
  
  iVar1 = FUN_1000_24b6(&local_4);
  if (iVar1 != 0) {
    return local_4;
  }
  return 0xffff;
}


// ---- FUN_1000_432a @ 1000:432a

undefined2 __cdecl16near FUN_1000_432a(undefined2 param_1,undefined2 param_2,undefined2 param_3)

{
  int iVar1;
  
  iVar1 = FUN_1000_254a(&param_1);
  if (iVar1 != 0) {
    return param_1;
  }
  return 0xffff;
}


// ---- FUN_1000_4362 @ 1000:4362

void __cdecl16near FUN_1000_4362(undefined2 param_1,undefined2 param_2)

{
  FUN_1000_244a(param_1,param_2,0,0,0);
  return;
}


// ---- FUN_1000_4378 @ 1000:4378

void __cdecl16near FUN_1000_4378(undefined2 *param_1,uint param_2)

{
  uint uVar1;
  undefined2 uVar2;
  uint uVar3;
  undefined2 uVar4;
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  uVar2 = *param_1;
  uVar3 = ((undefined2 *)param_1)[1];
  param_2 = param_2 & 0xff;
  if (param_2 != 0) {
    do {
      uVar1 = uVar3 & 1;
      uVar3 = (int)uVar3 >> 1;
      uVar2 = (undefined2)(CONCAT12(uVar1 != 0,uVar2) >> 1);
      param_2 = param_2 - 1;
    } while (param_2 != 0);
    *param_1 = uVar2;
    ((undefined2 *)param_1)[1] = uVar3;
  }
  return;
}


// ---- FUN_1000_439d @ 1000:439d

void __cdecl16near FUN_1000_439d(undefined2 *param_1,uint param_2)

{
  uint uVar1;
  undefined2 uVar2;
  uint uVar3;
  undefined2 uVar4;
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  uVar2 = *param_1;
  uVar3 = ((undefined2 *)param_1)[1];
  param_2 = param_2 & 0xff;
  if (param_2 != 0) {
    do {
      uVar1 = uVar3 & 1;
      uVar3 = uVar3 >> 1;
      uVar2 = (undefined2)(CONCAT12(uVar1 != 0,uVar2) >> 1);
      param_2 = param_2 - 1;
    } while (param_2 != 0);
    *param_1 = uVar2;
    ((undefined2 *)param_1)[1] = uVar3;
  }
  return;
}


// ---- FUN_1000_43c2 @ 1000:43c2

long FUN_1000_43c2(uint param_1,int param_2,uint param_3,int param_4)

{
  if (param_4 == 0 && param_2 == 0) {
    return (ulong)param_1 * (ulong)param_3;
  }
  return CONCAT22((int)((ulong)param_1 * (ulong)param_3 >> 0x10) +
                  param_2 * param_3 + param_1 * param_4,(int)((ulong)param_1 * (ulong)param_3));
}


// ---- FUN_1000_43f6 @ 1000:43f6

undefined4 FUN_1000_43f6(uint param_1,uint param_2,uint param_3,uint param_4)

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


// ---- FUN_1000_44b6 @ 1000:44b6

int __cdecl16near FUN_1000_44b6(undefined4 param_1,int param_2)

{
  undefined2 unaff_SS;
  undefined2 uVar1;
  
  if (param_2 == 0) {
    param_2 = 1;
  }
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  *(undefined2 *)*(undefined2 *)((int)param_1 + 6) = *(undefined2 *)((int)param_1 + 8);
  return param_2;
}


// ---- FUN_1000_44da @ 1000:44da

void FUN_1000_44da(void)

{
  FUN_1000_4583();
  return;
}


// ---- FUN_1000_44e0 @ 1000:44e0

void FUN_1000_44e0(void)

{
  FUN_1000_458c();
  return;
}


// ---- FUN_1000_44e6 @ 1000:44e6

void FUN_1000_44e6(void)

{
  FUN_1000_45de();
  return;
}


// ---- FUN_1000_44ec @ 1000:44ec

void FUN_1000_44ec(void)

{
  FUN_1000_46d3();
  return;
}


// ---- FUN_1000_44f2 @ 1000:44f2

void FUN_1000_44f2(void)

{
  FUN_1000_4665();
  return;
}


// ---- FUN_1000_44f8 @ 1000:44f8

void FUN_1000_44f8(void)

{
  FUN_1000_45c2();
  return;
}


// ---- FUN_1000_44fe @ 1000:44fe

void FUN_1000_44fe(void)

{
  FUN_1000_466f();
  return;
}


// ---- FUN_1000_4504 @ 1000:4504

void FUN_1000_4504(void)

{
  FUN_1000_462f();
  return;
}


// ---- FUN_1000_450a @ 1000:450a

void FUN_1000_450a(void)

{
  FUN_1000_45b9();
  return;
}


// ---- FUN_1000_4510 @ 1000:4510

void FUN_1000_4510(void)

{
  FUN_1000_46b5();
  return;
}


// ---- FUN_1000_4516 @ 1000:4516

void FUN_1000_4516(void)

{
  FUN_1000_46c9();
  return;
}


// ---- FUN_1000_451c @ 1000:451c

void FUN_1000_451c(void)

{
  FUN_1000_4737();
  return;
}


// ---- FUN_1000_4522 @ 1000:4522

void FUN_1000_4522(void)

{
  FUN_1000_4831();
  return;
}


// ---- FUN_1000_4528 @ 1000:4528

undefined2 __cdecl16far FUN_1000_4528(void)

{
  undefined2 uVar1;
  int unaff_BP;
  undefined2 unaff_SS;
  
  if ((DAT_1000_453a & 1) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = func_0x0000464d(0x1000,*(undefined2 *)(unaff_BP + 6),*(undefined2 *)(unaff_BP + 8));
  }
  return uVar1;
}


// ---- FUN_1000_4583 @ 1000:4583

void FUN_1000_4583(void)

{
  int in_BX;
  undefined2 unaff_ES;
  
                    /* WARNING: Could not recover jumptable at 0x00014585. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)*(uint *)(in_BX + 0x2c))();
  return;
}


// ---- FUN_1000_458c @ 1000:458c

void FUN_1000_458c(void)

{
  int in_BX;
  undefined2 unaff_ES;
  
                    /* WARNING: Could not recover jumptable at 0x0001458e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)*(uint *)(in_BX + 0x30))();
  return;
}


// ---- FUN_1000_45b9 @ 1000:45b9

void FUN_1000_45b9(void)

{
  int in_BX;
  undefined2 unaff_ES;
  
                    /* WARNING: Could not recover jumptable at 0x000145bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)*(uint *)(in_BX + 0x44))();
  return;
}


// ---- FUN_1000_45c2 @ 1000:45c2

void FUN_1000_45c2(void)

{
  int in_BX;
  undefined2 unaff_ES;
  
                    /* WARNING: Could not recover jumptable at 0x000145c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)*(uint *)(in_BX + 0x48))();
  return;
}


// ---- FUN_1000_45de @ 1000:45de

void FUN_1000_45de(void)

{
  int in_BX;
  undefined2 unaff_ES;
  
                    /* WARNING: Could not recover jumptable at 0x000145e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)*(uint *)(in_BX + 0x4c))();
  return;
}


// ---- FUN_1000_462f @ 1000:462f

void FUN_1000_462f(void)

{
  int in_BX;
  undefined2 unaff_ES;
  
                    /* WARNING: Could not recover jumptable at 0x00014631. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)*(uint *)(in_BX + 100))();
  return;
}


// ---- FUN_1000_4665 @ 1000:4665

void FUN_1000_4665(void)

{
  int in_BX;
  undefined2 unaff_ES;
  
                    /* WARNING: Could not recover jumptable at 0x00014667. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)*(uint *)(in_BX + 0x84))();
  return;
}


// ---- FUN_1000_466f @ 1000:466f

void FUN_1000_466f(void)

{
  int in_BX;
  undefined2 unaff_ES;
  
                    /* WARNING: Could not recover jumptable at 0x00014671. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)*(uint *)(in_BX + 0x88))();
  return;
}


// ---- FUN_1000_46b5 @ 1000:46b5

void FUN_1000_46b5(void)

{
  int in_BX;
  undefined2 unaff_ES;
  
                    /* WARNING: Could not recover jumptable at 0x000146b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)*(uint *)(in_BX + 0xa4))();
  return;
}


// ---- FUN_1000_46c9 @ 1000:46c9

void FUN_1000_46c9(void)

{
  int in_BX;
  undefined2 unaff_ES;
  
                    /* WARNING: Could not recover jumptable at 0x000146cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)*(uint *)(in_BX + 0xac))();
  return;
}


// ---- FUN_1000_46d3 @ 1000:46d3

void FUN_1000_46d3(void)

{
  int in_BX;
  undefined2 unaff_ES;
  
                    /* WARNING: Could not recover jumptable at 0x000146d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)*(uint *)(in_BX + 0xb0))();
  return;
}


// ---- FUN_1000_4737 @ 1000:4737

void FUN_1000_4737(void)

{
  int in_BX;
  undefined2 unaff_ES;
  
                    /* WARNING: Could not recover jumptable at 0x00014739. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)*(uint *)(in_BX + 0xd8))();
  return;
}


// ---- FUN_1000_4831 @ 1000:4831

uint __cdecl16far FUN_1000_4831(void)

{
  int iVar1;
  uint uVar2;
  int unaff_BP;
  undefined2 unaff_SS;
  undefined4 uVar3;
  long lVar4;
  
  iVar1 = *(int *)(unaff_BP + 6);
  if (iVar1 == 1) {
    if (DAT_1000_453a == 0) {
      uVar3 = func_0x00004943(0x1000);
      if (((int)uVar3 == (int)((ulong)uVar3 >> 0x10)) && ((int)uVar3 == 0)) {
        uVar2 = 0xfffc;
      }
      else {
        FUN_1000_4b16();
        func_0x000047e3(0,0,0,0,0);
        iVar1 = func_0x000047cf(0);
        if (iVar1 == 0) {
          uVar2 = 0xffe7;
        }
        else {
          func_0x00004829(0,0x214);
          DAT_1000_453a = 1;
          lVar4 = func_0x000047d9(0x1000);
          if (lVar4 != 0) {
            DAT_1000_453a = DAT_1000_453a | 4;
          }
          uVar2 = 0;
        }
      }
    }
    else {
      uVar2 = 0;
    }
  }
  else if (iVar1 == 0) {
    if (DAT_1000_453a == 0) {
      uVar2 = 0xffe6;
    }
    else {
      func_0x000047e3(0x1000,0,0,0,0);
      func_0x00004829(0,0);
      DAT_1000_453a = 0;
      uVar2 = 0;
    }
  }
  else {
    uVar2 = DAT_1000_453a;
    if (iVar1 != 2) {
      uVar2 = 0;
    }
  }
  return uVar2;
}


// ---- FUN_1000_48f8 @ 1000:48f8

undefined2 __cdecl16far FUN_1000_48f8(undefined2 param_1,undefined2 param_2)

{
  undefined2 uVar1;
  
  if ((DAT_1000_453a & 1) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = func_0x0000464d(0x1000,param_1,param_2);
  }
  return uVar1;
}


// ---- FUN_1000_491c @ 1000:491c

undefined2 __cdecl16far FUN_1000_491c(void)

{
  undefined2 uVar1;
  
  if ((DAT_1000_453a & 1) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = func_0x00004656(0x1000);
  }
  return uVar1;
}


// ---- FUN_1000_4b16 @ 1000:4b16

void __cdecl16near FUN_1000_4b16(void)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  undefined2 *puVar3;
  
  puVar3 = (undefined2 *)func_0x000047bb(0x1000);
  uVar2 = (undefined2)((ulong)puVar3 >> 0x10);
  puVar1 = (undefined2 *)puVar3;
  puVar1[0xb] = puVar1[1];
  puVar1[0xc] = puVar1[3];
  puVar1[0xd] = puVar1[5];
  puVar1[0xe] = puVar1[6];
  *puVar3 = 0;
  return;
}


// ---- FUN_1000_4b49 @ 1000:4b49

char * __cdecl16far FUN_1000_4b49(char *param_1,undefined2 param_2)

{
  char *pcVar1;
  char *pcVar2;
  undefined2 uVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  undefined2 in_BX;
  char *pcVar7;
  char *pcVar8;
  bool bVar9;
  
  pcVar4 = (code *)swi(0x21);
  (*pcVar4)();
  uVar3 = *(undefined2 *)0x2c;
  pcVar7 = (char *)0x0;
  uVar5 = 0xffff;
  pcVar8 = param_1;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar1 = pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (*pcVar1 != '\0');
  do {
    if (*pcVar7 == '\0') {
      return (char *)0x0;
    }
    bVar9 = false;
    pcVar8 = param_1;
    uVar6 = ~uVar5;
    do {
      uVar6 = uVar6 - 1;
      if (uVar6 == 0) break;
      pcVar2 = pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar1 = pcVar7;
      pcVar7 = pcVar7 + 1;
      bVar9 = *pcVar1 == *pcVar2;
    } while (bVar9);
    if ((bVar9) && (*pcVar7 == '=')) {
      return pcVar7 + 1;
    }
    for (; *pcVar7 != '\0'; pcVar7 = pcVar7 + 1) {
    }
    pcVar7 = pcVar7 + 1;
  } while( true );
}


// ---- FUN_1000_4ba8 @ 1000:4ba8

undefined2 __cdecl16far FUN_1000_4ba8(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined2 uVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  
  pcVar7 = (char *)func_0x00004b58(0x1000,0xd9e,0x5e9);
  if ((pcVar7 == (char *)0x0) &&
     (pcVar7 = (char *)func_0x00004b58(0,0xda3,0x5e9), pcVar7 == (char *)0x0)) {
    return 0;
  }
  uVar4 = (undefined2)((ulong)pcVar7 >> 0x10);
  pcVar6 = (char *)pcVar7;
  uVar2 = 0xffff;
  pcVar5 = pcVar6;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar7 = pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (*pcVar7 != '\0');
  iVar3 = ~uVar2 - 1;
code_r0x00014bfc:
  do {
    if (iVar3 != 0) {
      iVar3 = iVar3 + -1;
      pcVar7 = pcVar6;
      pcVar6 = pcVar6 + 1;
      if (*pcVar7 != '-') goto code_r0x00014bfc;
    }
    if (iVar3 == 0) {
      return 0;
    }
    if ((*pcVar6 == *(char *)(param_1 + 0xda9)) ||
       (*pcVar6 == (char)(*(char *)(param_1 + 0xda9) + -0x20))) {
      iVar3 = 0;
      while( true ) {
        pcVar6 = pcVar6 + 1;
        cVar1 = *pcVar6;
        if ((cVar1 == '\0') || (cVar1 == '-')) break;
        if (cVar1 != ' ') {
          *(char *)(iVar3 + 0xdac) = cVar1;
          iVar3 = iVar3 + 1;
        }
      }
      if (iVar3 == 0) {
        return 0;
      }
      *(undefined1 *)(iVar3 + 0xdac) = 0;
      return 0xdac;
    }
  } while( true );
}


// ---- FUN_1000_4c42 @ 1000:4c42

int __cdecl16far FUN_1000_4c42(char *param_1,undefined2 param_2)

{
  char *pcVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  byte *pbVar6;
  
  uVar3 = 0xffff;
  pcVar5 = param_1;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar1 = pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (*pcVar1 != '\0');
  iVar4 = ~uVar3 - 1;
  if (iVar4 == 0) {
    iVar4 = 0;
  }
  else {
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar1 = param_1;
      param_1 = param_1 + 1;
    } while (*pcVar1 == ' ');
    pbVar6 = (byte *)(param_1 + -1);
    if (iVar4 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = 0;
      if ((*pbVar6 == 0x30) && ((*param_1 == 'x' || (*param_1 == 'X')))) {
        pbVar6 = (byte *)(param_1 + 1);
        while( true ) {
          while( true ) {
            for (; (bVar2 = *pbVar6, 0x2f < bVar2 && (bVar2 < 0x3a)); pbVar6 = pbVar6 + 1) {
              iVar4 = iVar4 * 0x10 + (uint)(byte)(bVar2 - 0x30);
            }
            if ((bVar2 < 0x41) || (0x46 < bVar2)) break;
            iVar4 = iVar4 * 0x10 + (uint)(byte)(bVar2 - 0x37);
            pbVar6 = pbVar6 + 1;
          }
          if ((bVar2 < 0x61) || (0x66 < bVar2)) break;
          iVar4 = iVar4 * 0x10 + (uint)(byte)(bVar2 + 0xa9);
          pbVar6 = pbVar6 + 1;
        }
      }
      else {
        for (; (bVar2 = *pbVar6, 0x2f < bVar2 && (bVar2 < 0x3a)); pbVar6 = pbVar6 + 1) {
          iVar4 = iVar4 * 10 + (uint)(byte)(bVar2 - 0x30);
        }
      }
    }
  }
  return iVar4;
}


// ---- FUN_1000_4de1 @ 1000:4de1

void __cdecl16near FUN_1000_4de1(void)

{
  char *pcVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  code *pcVar5;
  int iVar6;
  uint extraout_DX;
  int in_BX;
  int iVar7;
  int unaff_SI;
  byte *pbVar8;
  byte *pbVar9;
  undefined2 unaff_ES;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  bool bVar10;
  
  FUN_1000_4fa1();
  FUN_1000_5238();
  if (*(int *)0x108a == -0x292a) {
    (*(code *)*(undefined2 *)0x108e)();
  }
  (*(code *)*(undefined2 *)0xe3e)(0xff);
  in(5);
  pcVar1 = (char *)(in_BX + unaff_SI + 0x3500);
  *pcVar1 = *pcVar1 + (char)((uint)in_BX >> 8);
  pcVar5 = (code *)swi(0x21);
  (*pcVar5)();
  *(int *)0xe68 = in_BX;
  *(undefined2 *)0xe6a = unaff_ES;
  pcVar5 = (code *)swi(0x21);
  (*pcVar5)();
  if (*(int *)0x109a != 0) {
    *(undefined2 *)0x109c = 0x1000;
    *(undefined2 *)0x10a4 = 0x1000;
    bVar10 = false;
    (*(code *)*(undefined2 *)0x109a)();
    if (bVar10) {
      FUN_1000_4fc1();
      return;
    }
    (*(code *)*(undefined2 *)0x109a)();
  }
  iVar7 = *(int *)0x2c;
  if (iVar7 != 0) {
    pbVar9 = (byte *)0x0;
    do {
      if (*pbVar9 == 0) break;
      iVar6 = 0xd;
      pbVar8 = (byte *)0xe5a;
      bVar10 = false;
      do {
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pbVar4 = pbVar9;
        pbVar9 = pbVar9 + 1;
        pbVar2 = pbVar8;
        pbVar8 = pbVar8 + 1;
        bVar10 = *pbVar2 == *pbVar4;
      } while (bVar10);
      if (bVar10) {
        pbVar8 = (byte *)0xe85;
        goto LAB_1000_4e8e;
      }
      iVar6 = 0x7fff;
      bVar10 = true;
      do {
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pbVar2 = pbVar9;
        pbVar9 = pbVar9 + 1;
        bVar10 = *pbVar2 == 0;
      } while (!bVar10);
    } while (bVar10);
  }
LAB_1000_4ea2:
  iVar7 = 4;
  do {
    bVar10 = false;
    *(byte *)(iVar7 + 0xe85) = *(byte *)(iVar7 + 0xe85) & 0xbf;
    pcVar5 = (code *)swi(0x21);
    (*pcVar5)();
    if ((!bVar10) && ((extraout_DX & 0x80) != 0)) {
      *(byte *)(iVar7 + 0xe85) = *(byte *)(iVar7 + 0xe85) | 0x40;
    }
    iVar7 = iVar7 + -1;
  } while (-1 < iVar7);
  FUN_1000_4f8e();
  FUN_1000_4f7f();
  return;
LAB_1000_4e8e:
  pbVar2 = pbVar9;
  pbVar3 = pbVar9 + 1;
  if (*pbVar2 < 0x41) goto LAB_1000_4ea2;
  pbVar9 = pbVar9 + 2;
  if (*pbVar3 < 0x41) goto LAB_1000_4ea2;
  pbVar4 = pbVar8;
  pbVar8 = pbVar8 + 1;
  *pbVar4 = *pbVar3 + 0xbf | (*pbVar2 + 0xbf) * '\x10';
  goto LAB_1000_4e8e;
}


// ---- FUN_1000_4ed1 @ 1000:4ed1

void __cdecl16near FUN_1000_4ed1(void)

{
  code *pcVar1;
  undefined2 unaff_DS;
  
  FUN_1000_4f7f();
  FUN_1000_4f7f();
  if (*(int *)0x108a == -0x292a) {
    (*(code *)*(undefined2 *)0x1090)();
  }
  FUN_1000_4f7f();
  FUN_1000_4f8e();
  FUN_1000_4fdf();
  FUN_1000_4f52();
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  return;
}


// ---- FUN_1000_4f52 @ 1000:4f52

void __cdecl16near FUN_1000_4f52(undefined2 param_1)

{
  code *pcVar1;
  undefined2 unaff_DS;
  
  if (*(int *)0x109c != 0) {
    (*(code *)*(undefined2 *)0x109a)(0x1000);
  }
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  if (*(char *)0xea6 != '\0') {
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
  }
  return;
}


// ---- FUN_1000_4f7f @ 1000:4f7f

void __cdecl16near FUN_1000_4f7f(void)

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


// ---- FUN_1000_4f8e @ 1000:4f8e

void __cdecl16near FUN_1000_4f8e(void)

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


// ---- FUN_1000_4fa1 @ 1000:4fa1

void __cdecl16near FUN_1000_4fa1(void)

{
  undefined2 unaff_DS;
  
  FUN_1000_5238(0xfc);
  if (*(int *)0xeac != 0) {
    (*(code *)*(undefined2 *)0xeac)();
  }
  FUN_1000_5238(0xff);
  return;
}


// ---- FUN_1000_4fc1 @ 1000:4fc1

void FUN_1000_4fc1(void)

{
  FUN_1000_4de1();
  return;
}


// ---- FUN_1000_4fc7 @ 1000:4fc7

void FUN_1000_4fc7(void)

{
  undefined1 *in_AX;
  undefined2 unaff_DS;
  code *in_stack_00000000;
  
  if ((in_AX <= &stack0x0002) && ((undefined1 *)*(uint *)0xeb0 <= &stack0x0002 + -(int)in_AX)) {
                    /* WARNING: Could not recover jumptable at 0x00014fd6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*in_stack_00000000)();
    return;
  }
  FUN_1000_4de1();
  return;
}


// ---- FUN_1000_4fdf @ 1000:4fdf

uint __cdecl16near FUN_1000_4fdf(void)

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
    FUN_1000_4fa1();
    FUN_1000_5238(1);
    uVar2 = 1;
  }
  return uVar2;
}


// ---- FUN_1000_520d @ 1000:520d

int * FUN_1000_520d(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined2 unaff_DS;
  
  piVar3 = (int *)0x10b0;
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


// ---- FUN_1000_5238 @ 1000:5238

void FUN_1000_5238(undefined2 param_1)

{
  char *pcVar1;
  code *pcVar2;
  char *pcVar3;
  int iVar4;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  
  pcVar3 = (char *)FUN_1000_520d(param_1);
  if (pcVar3 != (char *)0x0) {
    iVar4 = -1;
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar1 = pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (*pcVar1 != '\0');
    if (*(int *)0x108a == -0x292a) {
      (*(code *)*(undefined2 *)0x108c)();
    }
    pcVar2 = (code *)swi(0x21);
    (*pcVar2)();
  }
  return;
}


// ---- FUN_1000_52a6 @ 1000:52a6

void __cdecl16near FUN_1000_52a6(void)

{
  bool in_CF;
  
  if (in_CF) {
    FUN_1000_52b9();
  }
  return;
}


// ---- FUN_1000_52b9 @ 1000:52b9

void __cdecl16near FUN_1000_52b9(void)

{
  byte bVar1;
  char cVar2;
  uint in_AX;
  undefined2 unaff_DS;
  
  bVar1 = (byte)in_AX;
  *(byte *)0xe81 = bVar1;
  cVar2 = (char)(in_AX >> 8);
  if (cVar2 != '\0') goto LAB_1000_52dd;
  if (*(byte *)0xe7e < 3) {
LAB_1000_52d3:
    if (0x13 < bVar1) {
LAB_1000_52d7:
      in_AX = 0x13;
    }
  }
  else {
    if (0x21 < bVar1) goto LAB_1000_52d7;
    if (bVar1 < 0x20) goto LAB_1000_52d3;
    in_AX = 5;
  }
  cVar2 = *(char *)(ulong)((in_AX & 0xff) + 0xeb4);
LAB_1000_52dd:
  *(int *)0xe76 = (int)cVar2;
  return;
}


// ---- FUN_1000_53c7 @ 1000:53c7

void __cdecl16near FUN_1000_53c7(int *param_1)

{
  int iVar1;
  undefined2 unaff_DS;
  
  iVar1 = thunk_FUN_1000_5c52(0x200);
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


// ---- FUN_1000_5409 @ 1000:5409

undefined2 __cdecl16near FUN_1000_5409(int *param_1)

{
  undefined2 uVar1;
  int iVar2;
  int *piVar3;
  undefined2 unaff_DS;
  
  piVar3 = (int *)0x100c;
  if ((((param_1 == (int *)0xed2) || (piVar3 = (int *)0x100e, param_1 == (int *)0xeda)) ||
      (piVar3 = (int *)0x1010, param_1 == (int *)0xeea)) &&
     (((*(byte *)(param_1 + 3) & 0xc) == 0 && ((*(byte *)(param_1 + 0x50) & 1) == 0)))) {
    iVar2 = *piVar3;
    if (iVar2 == 0) {
      iVar2 = thunk_FUN_1000_5c52(0x200);
      if (iVar2 == 0) goto LAB_1000_5474;
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
LAB_1000_5474:
    uVar1 = 0;
  }
  return uVar1;
}


// ---- FUN_1000_547a @ 1000:547a

void __cdecl16near FUN_1000_547a(int param_1,undefined2 *param_2)

{
  undefined2 unaff_DS;
  
  if (((*(byte *)(param_2 + 0x50) & 0x10) != 0) &&
     ((*(byte *)(*(byte *)((int)param_2 + 7) + 0xe85) & 0x40) != 0)) {
    FUN_1000_54b9(param_2);
    if (param_1 != 0) {
      *(byte *)(param_2 + 0x50) = 0;
      param_2[0x51] = 0;
      *param_2 = 0;
      param_2[2] = 0;
    }
  }
  return;
}


// ---- FUN_1000_54b9 @ 1000:54b9

undefined2 __cdecl16near FUN_1000_54b9(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 unaff_DS;
  
  uVar3 = 0;
  if (param_1 == (int *)0x0) {
    uVar3 = FUN_1000_5533(0);
  }
  else {
    if (((*(byte *)(param_1 + 3) & 3) == 2) &&
       (((*(byte *)(param_1 + 3) & 8) != 0 || ((*(byte *)(param_1 + 0x50) & 1) != 0)))) {
      iVar1 = *param_1 - param_1[2];
      if (0 < iVar1) {
        iVar2 = FUN_1000_5add(*(undefined1 *)((int)param_1 + 7),param_1[2],iVar1);
        if (iVar1 != iVar2) {
          *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) | 0x20;
          uVar3 = 0xffff;
        }
      }
    }
    *param_1 = param_1[2];
    param_1[1] = 0;
  }
  return uVar3;
}


// ---- FUN_1000_5533 @ 1000:5533

int FUN_1000_5533(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined2 unaff_DS;
  int local_4;
  
  iVar3 = 0;
  local_4 = 0;
  for (uVar2 = 0xeca; uVar2 <= *(uint *)0x100a; uVar2 = uVar2 + 8) {
    if ((*(byte *)(uVar2 + 6) & 0x83) != 0) {
      iVar1 = FUN_1000_54b9(uVar2);
      if (iVar1 == -1) {
        local_4 = -1;
      }
      else {
        iVar3 = iVar3 + 1;
      }
    }
  }
  if (param_1 == 1) {
    local_4 = iVar3;
  }
  return local_4;
}


// ---- FUN_1000_558d @ 1000:558d

undefined2 __cdecl16near FUN_1000_558d(undefined2 param_1,char *param_2)

{
  char cVar1;
  byte bVar2;
  undefined2 uVar3;
  undefined2 unaff_DS;
  
  FUN_1000_4fc7();
  cVar1 = *param_2;
  if (cVar1 == '\0') {
    return 0;
  }
  if ((byte)(cVar1 - 0x20U) < 0x59) {
    bVar2 = *(byte *)(ulong)((byte)(cVar1 - 0x20U) + 0x1012) & 0xf;
  }
  else {
    bVar2 = 0;
  }
                    /* WARNING: Could not emulate address calculation at 0x000155d1 */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (*(code *)*(undefined2 *)
                     ((char)(*(byte *)(ulong)((byte)(bVar2 * '\b') + 0x1012) >> 4) * 2 + 0x558c))
                    (cVar1);
  return uVar3;
}


// ---- FUN_1000_5add @ 1000:5add

/* WARNING: Unable to track spacebase fully for stack */

undefined2 FUN_1000_5add(uint param_1,char *param_2,int param_3)

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
  
  if (*(uint *)0xe83 <= param_1) {
LAB_1000_5af0:
    uVar4 = FUN_1000_52a6();
    return uVar4;
  }
  if (*(int *)0x108a == -0x292a) {
    (*(code *)*(undefined2 *)0x108c)();
  }
  if ((*(byte *)(param_1 + 0xe85) & 0x20) != 0) {
    bVar9 = false;
    pcVar2 = (code *)swi(0x21);
    (*pcVar2)();
    if (bVar9) goto LAB_1000_5af0;
  }
  if ((*(byte *)(param_1 + 0xe85) & 0x80) != 0) {
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
      if (!bVar9) goto LAB_1000_5b86;
      uVar5 = FUN_1000_5c1b();
      if (uVar5 < 0xa9) {
        uVar10 = FUN_1000_4fc7();
        pcVar7 = (char *)((ulong)uVar10 >> 0x10);
        bVar9 = pcVar8 < pcVar7;
        if (pcVar8 != pcVar7) {
          pcVar2 = (code *)swi(0x21);
          uVar5 = (*pcVar2)(iVar6,param_1);
          if ((bVar9) || (uVar5 < (uint)((int)pcVar8 - (int)pcVar7))) {
            uVar4 = FUN_1000_52a6();
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
            cVar3 = FUN_1000_5b8e();
          }
          pcVar1 = pcVar8;
          pcVar8 = pcVar8 + 1;
          *pcVar1 = cVar3;
          cVar3 = '\n';
        }
        if (pcVar8 == pcVar7) {
          cVar3 = FUN_1000_5b8e();
        }
        pcVar1 = pcVar8;
        pcVar8 = pcVar8 + 1;
        *pcVar1 = cVar3;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
      FUN_1000_5b8e();
    }
    uVar4 = FUN_1000_5bd8();
    return uVar4;
  }
LAB_1000_5b86:
  uVar4 = FUN_1000_5be6();
  return uVar4;
}


// ---- FUN_1000_5b8e @ 1000:5b8e

/* WARNING: Unable to track spacebase fully for stack */

undefined2 __cdecl16near FUN_1000_5b8e(void)

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
      uVar3 = FUN_1000_52a6();
      return uVar3;
    }
  }
  return in_AX;
}


// ---- FUN_1000_5bd8 @ 1000:5bd8

/* WARNING: Stack frame is not setup normally: Input value of stackpointer is not used */

void FUN_1000_5bd8(void)

{
  FUN_1000_52a6();
  return;
}


// ---- FUN_1000_5be6 @ 1000:5be6

void FUN_1000_5be6(void)

{
  code *pcVar1;
  int unaff_BP;
  undefined2 unaff_SS;
  
  if (*(int *)(unaff_BP + 8) != 0) {
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
    FUN_1000_52a6();
    return;
  }
  FUN_1000_52a6();
  return;
}


// ---- FUN_1000_5c1b @ 1000:5c1b

void FUN_1000_5c1b(void)

{
  code *in_stack_00000000;
  
                    /* WARNING: Could not recover jumptable at 0x00015c27. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*in_stack_00000000)();
  return;
}


// ---- thunk_FUN_1000_5c52 @ 1000:5c2d

void __cdecl16near thunk_FUN_1000_5c52(uint param_1)

{
  bool bVar1;
  
  bVar1 = param_1 < 0xffe8;
  if (((param_1 < 0xffe9) && (FUN_1000_5c7b(), bVar1)) && (FUN_1000_5cf7(), !bVar1)) {
    FUN_1000_5c7b();
  }
  return;
}


// ---- FUN_1000_5c52 @ 1000:5c52

void __cdecl16near FUN_1000_5c52(uint param_1)

{
  bool bVar1;
  
  bVar1 = param_1 < 0xffe8;
  if (((param_1 < 0xffe9) && (FUN_1000_5c7b(), bVar1)) && (FUN_1000_5cf7(), !bVar1)) {
    FUN_1000_5c7b();
  }
  return;
}


// ---- FUN_1000_5c7b @ 1000:5c7b

uint * __cdecl16near FUN_1000_5c7b(void)

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
          if (CARRY2((uint)puVar1,uVar2)) goto LAB_1000_5cd4;
          puVar6 = (uint *)((int)puVar1 + uVar2) + 1;
          uVar3 = *(uint *)((int)puVar1 + uVar2);
          if ((uVar3 & 1) == 0) break;
          uVar3 = uVar3 + uVar2 + 2;
          *puVar7 = uVar3;
        }
      }
      if (puVar6 + -1 < puVar5) break;
      if (((uint)puVar5 & 1) != 0) goto LAB_1000_5cd4;
      puVar7 = (uint *)*(undefined2 *)(in_BX + 6);
      if ((uint *)*(undefined2 *)(in_BX + 8) == puVar7) goto LAB_1000_5cd4;
      puVar5 = (uint *)((int)*(undefined2 *)(in_BX + 8) + -1);
    }
    puVar7 = (uint *)((int)puVar6 + uVar3);
  } while (!CARRY2((uint)puVar6,uVar3));
LAB_1000_5cd4:
  puVar7 = (uint *)*(undefined2 *)(in_BX + 6);
  *(undefined2 *)(in_BX + 8) = puVar7;
  return puVar7;
}


// ---- FUN_1000_5cf7 @ 1000:5cf7

void __cdecl16near FUN_1000_5cf7(void)

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
    FUN_1000_5dd4();
    if ((*unaff_SI & 1) != 0) {
      in_CX = (in_CX - *unaff_SI) + -1;
    }
    uVar3 = *(uint *)(in_BX + 4);
    if (uVar3 != 0) {
      if (!CARRY2(in_CX + 2U,uVar3)) {
        uVar3 = *(uint *)0x1074;
        if (uVar3 == 0x2000) goto LAB_1000_5d44;
        uVar4 = 0x8000;
        while (uVar3 <= uVar4) {
          uVar4 = uVar4 >> 1;
          if (uVar4 == 0) goto LAB_1000_5d5d;
        }
        if (uVar4 < 8) goto LAB_1000_5d5d;
        uVar3 = uVar4 << 1;
        goto LAB_1000_5d44;
      }
      uVar4 = 0xfff0;
      if (in_CX + 2U + uVar3 == 0) {
        while( true ) {
          bVar7 = false;
          iVar2 = FUN_1000_5d83();
          if (!bVar7) break;
          if (uVar4 == 0xfff0) {
            return;
          }
LAB_1000_5d5d:
          uVar3 = 0x10;
LAB_1000_5d44:
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


// ---- FUN_1000_5d83 @ 1000:5d83

void __cdecl16near FUN_1000_5d83(int param_1)

{
  code *pcVar1;
  uint in_AX;
  uint uVar2;
  int extraout_DX;
  int in_BX;
  int unaff_DS;
  bool bVar3;
  
  if ((((*(byte *)(in_BX + 2) & 4) == 0) || (in_AX - 1 < *(int *)(in_BX + 4) - 1U)) ||
     (*(uint *)(in_BX + -2) < in_AX - 1)) {
    uVar2 = in_AX >> 4;
    if (uVar2 == 0) {
      uVar2 = 0x1000;
    }
    bVar3 = false;
    if ((*(byte *)(in_BX + 2) & 4) != 0) {
      bVar3 = uVar2 + unaff_DS < *(uint *)0xe7c;
    }
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
    if ((!bVar3) && ((*(byte *)(param_1 + 2) & 4) != 0)) {
      *(int *)(param_1 + -2) = extraout_DX + -1;
    }
  }
  return;
}


// ---- FUN_1000_5dd4 @ 1000:5dd4

void __cdecl16near FUN_1000_5dd4(void)

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


// ---- FUN_1000_5df8 @ 1000:5df8

undefined2 __cdecl16near FUN_1000_5df8(void)

{
  undefined2 uVar1;
  undefined2 uVar2;
  int unaff_BP;
  undefined2 unaff_SS;
  
  uVar1 = FUN_1000_5409(0xed2);
  uVar2 = FUN_1000_558d(0xed2,*(undefined2 *)(unaff_BP + 4),*(undefined2 *)(unaff_BP + 6));
  *(undefined2 *)(unaff_BP + -2) = uVar2;
  FUN_1000_547a(uVar1,0xed2);
  return *(undefined2 *)(unaff_BP + -2);
}


// ---- entry @ 16ac:0012

void __cdecl16far entry(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  int unaff_ES;
  
  DAT_16ac_0004 = unaff_ES + 0x10;
  DAT_16ac_07be = DAT_16ac_0004 + DAT_16ac_000c;
  puVar4 = (undefined1 *)(DAT_16ac_0006 + -1);
  puVar5 = puVar4;
  for (iVar3 = DAT_16ac_0006; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + -1;
    puVar1 = puVar4;
    puVar4 = puVar4 + -1;
    *puVar2 = *puVar1;
  }
  DAT_16ac_07bc = 0x38;
  return;
}


