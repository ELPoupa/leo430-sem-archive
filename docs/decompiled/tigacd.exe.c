// Decompiled with Ghidra from tigacd.exe
// Format: Old-style DOS Executable (MZ), image base 0000:0000

// ---- FUN_1000_0142 @ 1000:0142

void __cdecl16near FUN_1000_0142(void)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined4 uVar10;
  uint uVar11;
  
  uVar9 = (undefined2)((ulong)*(undefined4 *)0x0 >> 0x10);
  iVar6 = (int)*(undefined4 *)0x0;
  uVar8 = DAT_1000_2a29;
  FUN_1000_796c(*(undefined2 *)0x4,*(undefined2 *)0x6,iVar6,uVar9,8,0);
  if (*(int *)(iVar6 + 6) != 0) {
    FUN_1000_796c(*(uint *)0x4 + 0x40,*(int *)0x6 + (uint)(0xffbf < *(uint *)0x4),iVar6 + 8,uVar9,
                  *(int *)(iVar6 + 6),0);
  }
  uVar10 = (*(code *)*(undefined2 *)0x10)(0x1000);
  iVar5 = *(int *)(iVar6 + 4);
  if (iVar5 != 0) {
    puVar7 = (uint *)(iVar6 + 8);
    do {
      puVar1 = puVar7 + 1;
      uVar11 = *puVar7;
      if ((uVar11 & 1) == 0) {
        puVar7 = puVar7 + 4;
      }
      else if ((uVar11 & 0x80) == 0) {
        puVar7 = (uint *)((int)puVar7 + *puVar1 + 8);
      }
      else if ((uVar11 & 0x20) == 0) {
        uVar11 = *puVar1;
        FUN_1000_77e4(puVar7 + 4,uVar9,puVar7[2],puVar7[3],uVar11,0);
        puVar7 = (uint *)((int)(puVar7 + 4) + uVar11);
      }
      else {
        puVar2 = puVar7 + 2;
        puVar3 = puVar7 + 3;
        puVar4 = puVar7 + 4;
        puVar7 = puVar7 + 5;
        FUN_1000_77e4(*puVar4,uVar9,*puVar2,*puVar3,*puVar1,0);
      }
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  FUN_1000_7459(*(uint *)0x4 + 0x10,*(int *)0x6 + (uint)(0xffef < *(uint *)0x4),0x20,uVar10);
  FUN_1000_7459(*(undefined2 *)0x4,*(undefined2 *)0x6,0x10,0,0);
  return;
}


// ---- FUN_1000_024a @ 1000:024a

undefined2 __cdecl16near FUN_1000_024a(void)

{
  int iVar1;
  undefined2 unaff_DS;
  
  iVar1 = FUN_1000_02ac();
  if (iVar1 != 0) {
    iVar1 = FUN_1000_0cec();
    if (iVar1 != 0) {
      iVar1 = FUN_1000_0694();
      if (iVar1 != 0) {
        if (*(int *)0x2e != 0 || *(int *)0x2c != 0) {
          FUN_1000_1d46(*(undefined2 *)0x2c,*(undefined2 *)0x2e);
        }
        if (*(int *)0x26 != 0 || *(int *)0x24 != 0) {
          FUN_1000_1d46(*(undefined2 *)0x24,*(undefined2 *)0x26);
        }
        if (*(int *)0x22 != 0 || *(int *)0x20 != 0) {
          FUN_1000_1d46(*(undefined2 *)0x20,*(undefined2 *)0x22);
        }
        return 1;
      }
    }
  }
  return 0;
}


// ---- FUN_1000_02ac @ 1000:02ac

undefined2 __cdecl16near FUN_1000_02ac(void)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 unaff_DS;
  undefined4 uVar6;
  int local_4;
  
  *(undefined2 *)0x1a3c = 0;
  iVar1 = FUN_1000_326e(0x1a8e);
  if (iVar1 == 0) {
    return 0;
  }
  if (*(int *)0x1a8e != 0x90) {
    FUN_1000_1bc8(0x1a8e);
    if (*(int *)0x1a8e != 0x90) {
      return 0;
    }
    *(undefined2 *)0x1a3c = 1;
    FUN_1000_1bc8(0x1a90);
    FUN_1000_1b46(0x1a92);
    FUN_1000_1b46(0x1a96);
    FUN_1000_1b46(0x1a9a);
    FUN_1000_1bc8(0x1a9e);
    FUN_1000_1bc8(0x1aa0);
  }
  *(int *)0x11fc = (*(byte *)0x1aa1 & 2) << 8;
  if (*(int *)0x1a9e == 0x1c) {
    iVar1 = FUN_1000_326e(0x11e0);
    if (iVar1 != 1) {
      return 0;
    }
    if (*(int *)0x1a3c != 0) {
      FUN_1000_1bc8(0x11e0);
      FUN_1000_1bc8(0x11e2);
      FUN_1000_1b46(0x11e4);
      FUN_1000_1b46(0x11e8);
      FUN_1000_1b46(0x11ec);
      FUN_1000_1b46(0x11f0);
      FUN_1000_1b46(0x11f4);
      FUN_1000_1b46(0x11f8);
    }
    uVar3 = *(undefined2 *)0x11f2;
    *(undefined2 *)0x1214 = *(undefined2 *)0x11f0;
    *(undefined2 *)0x1216 = uVar3;
  }
  else if ((*(int *)0x1a9e != 0) &&
          (iVar1 = FUN_1000_3202(*(undefined2 *)0x11dc,*(undefined2 *)0x11de,*(undefined2 *)0x1a9e,0
                                 ,1), iVar1 == -1)) {
    return 0;
  }
  iVar1 = *(int *)0x1a90;
  *(int *)0x1a3a = iVar1;
  iVar1 = iVar1 * 0x28;
  uVar6 = FUN_1000_1d10(iVar1,iVar1 >> 0xf);
  iVar1 = (int)((ulong)uVar6 >> 0x10);
  *(undefined2 *)0x20 = (int)uVar6;
  *(int *)0x22 = iVar1;
  if (iVar1 == 0 && *(int *)0x20 == 0) {
    return 0;
  }
  local_4 = 0;
  while( true ) {
    if (*(int *)0x1a3a <= local_4) {
      *(undefined2 *)0x1c = 0xffff;
      *(undefined2 *)0x1e = 0xffff;
      *(undefined2 *)0x28 = 0;
      for (local_4 = 0; local_4 < *(int *)0x1a3a; local_4 = local_4 + 1) {
        iVar1 = local_4 * 0x28;
        uVar6 = FUN_1000_1dcc(*(undefined2 *)0x20,*(undefined2 *)0x22,iVar1,iVar1 >> 0xf,0x28,0x1aa4
                             );
        uVar3 = (undefined2)((ulong)uVar6 >> 0x10);
        iVar2 = (int)uVar6;
        if (*(int *)0x1a3c != 0) {
          FUN_1000_1b46(iVar2 + 8,uVar3);
          FUN_1000_1b46(iVar2 + 0xc,uVar3);
          FUN_1000_1b46(iVar2 + 0x10,uVar3);
          FUN_1000_1b46(iVar2 + 0x14,uVar3);
          FUN_1000_1b46(iVar2 + 0x18,uVar3);
          FUN_1000_1b46(iVar2 + 0x1c,uVar3);
          FUN_1000_1bc8(iVar2 + 0x20,uVar3);
          FUN_1000_1bc8(iVar2 + 0x22,uVar3);
          FUN_1000_1bc8(iVar2 + 0x24,uVar3);
          FUN_1000_1e4c(*(undefined2 *)0x20,*(undefined2 *)0x22,iVar1,iVar1 >> 0xf,0x28,0x1aa4);
        }
        *(undefined2 *)(local_4 * 4 + 0x161e) = 0;
        *(undefined2 *)(local_4 * 4 + 0x161c) = 0;
        if (((*(byte *)(iVar2 + 0x24) & 0x10) != 0) &&
           (iVar1 = FUN_1000_5556(uVar6,0x30), iVar1 == 0)) {
          *(int *)0x1e = local_4;
        }
        if (((*(byte *)(iVar2 + 0x24) & 0x80) != 0) &&
           (iVar1 = FUN_1000_5556(uVar6,0x37), iVar1 == 0)) {
          *(int *)0x1c = local_4;
        }
      }
      FUN_1000_1be8();
      *(undefined2 *)0x2a = 0;
      for (local_4 = 0; local_4 < *(int *)0x1a3a; local_4 = local_4 + 1) {
        *(uint *)0x2a =
             *(uint *)0x2a |
             (uint)(*(int *)(local_4 * 4 + 0x161e) != 0 || *(int *)(local_4 * 4 + 0x161c) != 0);
      }
      if (*(int *)0x16 == 0) {
        *(undefined2 *)0x2a = 0;
      }
      if (1 < *(int *)0x14) {
        if (*(int *)0x2a == 0) {
          uVar3 = 0x4d;
        }
        else {
          uVar3 = 0x3c;
        }
        if (*(int *)0x11fc == 0) {
          uVar4 = 0x5c;
        }
        else {
          uVar4 = 0x56;
        }
        if (*(int *)0x1a3c == 0) {
          uVar5 = 0x6d;
        }
        else {
          uVar5 = 0x65;
        }
        FUN_1000_1cde(0x77,*(undefined2 *)0x1a3a,uVar5,uVar4,uVar3);
      }
      return 1;
    }
    iVar1 = FUN_1000_326e(0x1aa4);
    if (iVar1 == 0) break;
    FUN_1000_1e4c(*(undefined2 *)0x20,*(undefined2 *)0x22,local_4 * 0x28,local_4 * 0x28 >> 0xf,0x28,
                  0x1aa4);
    local_4 = local_4 + 1;
  }
  return 0;
}


// ---- FUN_1000_0694 @ 1000:0694

int __cdecl16near FUN_1000_0694(void)

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
  if (*(int *)0x16 != 0) {
    local_4 = 0;
    while ((local_4 < *(int *)0x1a3a && (local_6 != 0))) {
      uVar7 = FUN_1000_1dcc(*(undefined2 *)0x20,*(undefined2 *)0x22,local_4 * 0x28,
                            local_4 * 0x28 >> 0xf,0x28,0x1aa4);
      uVar6 = (undefined2)((ulong)uVar7 >> 0x10);
      iVar4 = (int)uVar7;
      if (((*(byte *)(iVar4 + 0x24) & 0x20) != 0) && (iVar5 = FUN_1000_5556(uVar7,0xa1), iVar5 == 0)
         ) {
        uVar3 = *(uint *)(local_4 * 4 + 0x161c);
        iVar5 = *(int *)(local_4 * 4 + 0x161e);
        puVar1 = (uint *)0x1214;
        uVar2 = *puVar1;
        *puVar1 = *puVar1 + uVar3;
        *(int *)0x1216 = *(int *)0x1216 + iVar5 + (uint)CARRY2(uVar2,uVar3);
      }
      if ((((*(int *)(iVar4 + 0x16) != 0 || *(int *)(iVar4 + 0x14) != 0) ||
           ((local_4 == *(int *)0x1c && (*(int *)0x1a != 0)))) &&
          (*(int *)(iVar4 + 0x12) != 0 || *(int *)(iVar4 + 0x10) != 0)) &&
         ((((*(uint *)(iVar4 + 0x24) & 1) == 0 && (local_4 != *(int *)0x1e)) &&
          ((*(uint *)(iVar4 + 0x24) & 2) == 0)))) {
        if (1 < *(int *)0x14) {
          uVar2 = *(uint *)(local_4 * 4 + 0x161c);
          FUN_1000_1cde(0xa7,iVar4,uVar2 + *(uint *)(iVar4 + 0xc),
                        *(int *)(local_4 * 4 + 0x161e) + *(int *)(iVar4 + 0xe) +
                        (uint)CARRY2(uVar2,*(uint *)(iVar4 + 0xc)),*(undefined2 *)(iVar4 + 0x10),
                        *(undefined2 *)(iVar4 + 0x12));
        }
        local_6 = FUN_1000_081a(local_4);
        if (1 < *(int *)0x14) {
          FUN_1000_1cde(0xd1);
        }
      }
      local_4 = local_4 + 1;
    }
    if (*(int *)0x1e != -1) {
      if (1 < *(int *)0x14) {
        uVar7 = FUN_1000_1dcc(*(undefined2 *)0x20,*(undefined2 *)0x22,*(int *)0x1e * 0x28,
                              *(int *)0x1e * 0x28 >> 0xf,0x28,0x1aa4);
        FUN_1000_1cde(0xd3,uVar7);
      }
      local_6 = FUN_1000_081a(*(undefined2 *)0x1e);
      if (1 < *(int *)0x14) {
        FUN_1000_1cde(0xf5);
      }
    }
    return local_6;
  }
  return 1;
}


// ---- FUN_1000_081a @ 1000:081a

undefined2 __cdecl16near FUN_1000_081a(int param_1)

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
  
  uVar8 = FUN_1000_1dcc(*(undefined2 *)0x20,*(undefined2 *)0x22,param_1 * 0x28,param_1 * 0x28 >> 0xf
                        ,0x28,0x1aa4);
  uVar6 = (undefined2)((ulong)uVar8 >> 0x10);
  iVar2 = (int)uVar8;
  local_1e = *(uint *)(iVar2 + 0xc);
  local_1c = *(int *)(iVar2 + 0xe);
  local_1a = 0;
  local_4 = 0;
  if (((*(int *)0x2a != 0) && (*(int *)(iVar2 + 0x20) != 0)) &&
     ((iVar3 = FUN_1000_3202(*(undefined2 *)0x11dc,*(undefined2 *)0x11de,
                             *(undefined2 *)(iVar2 + 0x18),*(undefined2 *)(iVar2 + 0x1a),0),
      iVar3 == -1 || (iVar3 = FUN_1000_1634(&local_10), iVar3 == 0)))) {
    return 0;
  }
  if (param_1 == *(int *)0x1c) {
    bVar7 = false;
    for (local_14 = 0; (!bVar7 && (local_14 < 0x400)); local_14 = local_14 + 1) {
      *(undefined1 *)(local_14 + 0x1218) = 0;
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
      *(undefined1 *)(local_22 + 0x1218) = *(undefined1 *)(local_6 + local_22 + 0x1218);
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
    if ((param_1 != *(int *)0x1c) &&
       ((uVar4 = local_1a + *(uint *)(iVar2 + 0x14),
        iVar3 = FUN_1000_3202(*(undefined2 *)0x11dc,*(undefined2 *)0x11de,uVar4 + local_14,
                              ((int)local_1a >> 0xf) + *(int *)(iVar2 + 0x16) +
                              (uint)CARRY2(local_1a,*(uint *)(iVar2 + 0x14)) + local_12 +
                              (uint)CARRY2(uVar4,local_14),0), iVar3 == -1 ||
        (iVar3 = FUN_1000_326e(local_1a + 0x1218), iVar3 != 1)))) {
      return 0;
    }
    local_1a = 0;
    if (*(int *)0x2a != 0) {
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
        iVar5 = FUN_1000_16ae(local_8);
        if (iVar5 < 2) {
          iVar5 = 2;
        }
        else {
          iVar5 = FUN_1000_16ae(local_8);
        }
        if ((int)local_6 < iVar3 + iVar5) {
          uVar4 = iVar3 - iVar3 % 2;
          local_1a = local_6 - uVar4;
          local_6 = uVar4;
          break;
        }
        FUN_1000_1394(&local_10);
        uVar4 = local_4 + 1;
        bVar7 = local_4 < *(uint *)(iVar2 + 0x20);
        local_4 = uVar4;
        if ((bVar7) &&
           ((iVar3 = FUN_1000_3202(*(undefined2 *)0x11dc,*(undefined2 *)0x11de,
                                   uVar4 * 10 + *(uint *)(iVar2 + 0x18),
                                   ((((uint)((int)uVar4 < 0) << 1 | (uint)((int)(uVar4 * 2) < 0)) +
                                    (uint)CARRY2(uVar4 * 4,uVar4)) * 2 |
                                   (uint)((int)(uVar4 * 5) < 0)) + *(int *)(iVar2 + 0x1a) +
                                   (uint)CARRY2(uVar4 * 10,*(uint *)(iVar2 + 0x18)),0), iVar3 == -1
            || (iVar3 = FUN_1000_1634(&local_10), iVar3 == 0)))) {
          return 0;
        }
      }
    }
    if (param_1 == *(int *)0x1e) {
      iVar3 = FUN_1000_0b72(uVar8,&local_6);
    }
    else {
      iVar3 = FUN_1000_1bee(0x1218);
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
    if (1 < *(int *)0x14) {
      FUN_1000_1cde(0xf7);
    }
    bVar7 = CARRY2(local_14,local_6);
    local_14 = local_14 + local_6;
    local_12 = local_12 + ((int)local_6 >> 0xf) + (uint)bVar7;
  } while( true );
}


// ---- FUN_1000_0b72 @ 1000:0b72

undefined2 __cdecl16near
FUN_1000_0b72(undefined2 param_1,undefined2 param_2,int *param_3,int *param_4)

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
    if (*(int *)0x28 == 0) {
      if (local_6 % 1 != 0) {
        local_6 = local_6 + (1 - local_6 % 1);
      }
      if (*param_3 < local_6 + 2) {
        *param_4 = *param_4 + (*param_3 - local_6);
        *param_3 = local_6;
        return 1;
      }
      iVar2 = FUN_1000_17ae(local_6 + 0x1218);
      if (iVar2 == 0) {
        return 1;
      }
      if (*param_3 < local_6 + 6) {
        *param_4 = *param_4 + (*param_3 - local_6);
        *param_3 = local_6;
        return 1;
      }
      *(int *)0x28 = iVar2;
      uVar5 = FUN_1000_17ae(local_6 + 0x121a);
      *(undefined2 *)0x11b6 = (int)uVar5;
      *(undefined2 *)0x11b8 = (int)((ulong)uVar5 >> 0x10);
      local_6 = local_6 + 6;
    }
    uVar4 = *(int *)0x28 * 2;
    iVar2 = ((*param_3 - local_6) + *(int *)0x28 * -2 & -(uint)((uint)(*param_3 - local_6) < uVar4))
            + uVar4;
    if (iVar2 != 0) {
      FUN_1000_1dcc(*(undefined2 *)0x20,*(undefined2 *)0x22,*(int *)0x1c * 0x28,
                    *(int *)0x1c * 0x28 >> 0xf,0x28,0x1a66);
      iVar3 = FUN_1000_1bee(local_6 + 0x1218);
      if (iVar3 == 0) {
        return 0;
      }
      puVar1 = (uint *)0x11b6;
      uVar4 = *puVar1;
      *puVar1 = *puVar1 + iVar2 * 8;
      *(int *)0x11b8 =
           *(int *)0x11b8 +
           ((((iVar2 >> 0xf) << 1 | (uint)(iVar2 < 0)) << 1 | (uint)(iVar2 * 2 < 0)) << 1 |
           (uint)(iVar2 * 4 < 0)) + (uint)CARRY2(uVar4,iVar2 * 8);
      *(int *)0x28 = *(int *)0x28 - iVar2 / 2;
    }
    local_6 = local_6 + iVar2;
  } while( true );
}


// ---- FUN_1000_0cec @ 1000:0cec

undefined2 __cdecl16near FUN_1000_0cec(void)

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
  
  if ((*(int *)0x18 == 0) && (*(int *)0x2a == 0)) {
    return 1;
  }
  uVar5 = 0;
  uVar4 = FUN_1000_52fc(*(undefined2 *)0x1a9a,*(undefined2 *)0x1a9c,0x12,0);
  iVar1 = FUN_1000_3202(*(undefined2 *)0x11dc,*(undefined2 *)0x11de,(uint)uVar4 + *(uint *)0x1a96,
                        (int)((ulong)uVar4 >> 0x10) + *(int *)0x1a98 +
                        (uint)CARRY2((uint)uVar4,*(uint *)0x1a96),uVar5);
  if ((iVar1 == -1) || (iVar1 = FUN_1000_326e(&local_6), iVar1 != 1)) {
    local_4 = 0;
    local_6 = 0;
    *(undefined2 *)0x26 = 0;
    *(undefined2 *)0x24 = 0;
  }
  else {
    if (*(int *)0x1a3c != 0) {
      FUN_1000_1b46(&local_6);
    }
    uVar4 = FUN_1000_1d10(local_6,local_4);
    iVar1 = (int)((ulong)uVar4 >> 0x10);
    *(undefined2 *)0x24 = (int)uVar4;
    *(int *)0x26 = iVar1;
    if (iVar1 == 0 && *(int *)0x24 == 0) {
      return 0;
    }
    FUN_1000_1e4c(*(undefined2 *)0x24,*(undefined2 *)0x26,0,0,4,&local_6);
    local_8 = 0;
    for (local_a = 4; (local_8 <= local_4 && ((local_8 < local_4 || (local_a < local_6))));
        local_a = local_a + 1) {
      iVar1 = FUN_1000_326e(local_20);
      if (iVar1 == 0) {
        return 0;
      }
      FUN_1000_1e4c(*(undefined2 *)0x24,*(undefined2 *)0x26,local_a,local_8,1,local_20);
      local_8 = local_8 + (uint)(0xfffe < local_a);
    }
  }
  if (*(int *)0x2a != 0) {
    uVar2 = *(uint *)0x1a9a;
    if ((-1 < *(int *)0x1a9c) && ((0 < *(int *)0x1a9c || (0x80 < uVar2)))) {
      uVar2 = 0x80;
    }
    *(uint *)0x1a64 = uVar2;
    uVar4 = FUN_1000_1d10(uVar2 << 3,(int)(uVar2 << 3) >> 0xf);
    iVar1 = (int)((ulong)uVar4 >> 0x10);
    *(undefined2 *)0x2c = (int)uVar4;
    *(int *)0x2e = iVar1;
    if (iVar1 == 0 && *(int *)0x2c == 0) {
      return 0;
    }
    *(undefined2 *)0x1a4e = 0;
  }
  if (1 < *(int *)0x14) {
    if (local_4 == 0 && local_6 == 0) {
      iVar1 = 0;
      iVar3 = 0;
    }
    else {
      iVar1 = local_6 - 4;
      iVar3 = local_4 - (uint)(local_6 < 4);
    }
    FUN_1000_1cde(0xf9,*(undefined2 *)0x1a9a,*(undefined2 *)0x1a9c,iVar1,iVar3);
  }
  if (*(int *)0x18 != 0) {
    uVar5 = FUN_1000_1c2a(*(undefined2 *)0x2a);
    return uVar5;
  }
  local_c = 0;
  uVar2 = local_c;
  while( true ) {
    local_c = uVar2;
    if (*(uint *)0x1a9a <= local_c) {
      return 1;
    }
    uVar2 = FUN_1000_0f2c(local_c,local_1e);
    if (uVar2 == 0) break;
    if (((((local_e == '\x02') || (local_e == '\x05')) || (local_e == '\x03')) ||
        (((local_e == '\x06' || (local_e == 'd')) || (local_e == 'e')))) &&
       (iVar1 = FUN_1000_12f0(local_c,local_1e), iVar1 == 0)) {
      return 0;
    }
  }
  return 0;
}


// ---- FUN_1000_0f2c @ 1000:0f2c

int __cdecl16near FUN_1000_0f2c(uint param_1,int *param_2,int param_3,undefined2 param_4)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined2 unaff_DS;
  
  uVar4 = (uint)((ulong)param_1 * 0x12);
  iVar5 = FUN_1000_3202(*(undefined2 *)0x11dc,*(undefined2 *)0x11de,uVar4 + *(uint *)0x1a96,
                        (int)((ulong)param_1 * 0x12 >> 0x10) + *(int *)0x1a98 +
                        (uint)CARRY2(uVar4,*(uint *)0x1a96),0);
  if (iVar5 == -1) {
    return 0;
  }
  iVar5 = FUN_1000_326e((int *)param_2,param_2._2_2_,0x12,1,*(undefined2 *)0x11dc,
                        *(undefined2 *)0x11de);
  if (iVar5 != 1) {
    return 0;
  }
  if ((*(char *)((int)(int *)param_2 + 0x11) != '\0') &&
     (iVar5 = FUN_1000_326e(param_3,param_4,0x12,1,*(undefined2 *)0x11dc,*(undefined2 *)0x11de),
     iVar5 != 1)) {
    return 0;
  }
  if (*(int *)0x1a3c == 0) goto LAB_1000_1216;
  if (((int *)param_2)[1] == 0 && *param_2 == 0) {
    FUN_1000_1b46((int *)param_2 + 1,param_2._2_2_);
  }
  FUN_1000_1b46((int *)param_2 + 4,param_2._2_2_);
  FUN_1000_1bc8((int *)param_2 + 6,param_2._2_2_);
  FUN_1000_1bc8((int *)param_2 + 7,param_2._2_2_);
  if ((*(char *)((int)(int *)param_2 + 0x11) == '\0') ||
     (bVar2 = *(byte *)((int *)param_2 + 8), bVar2 == 0x67)) goto LAB_1000_1216;
  if (bVar2 < 0x68) {
    if (bVar2 != 0xf) {
      if ('\x0f' < (char)bVar2) {
        if (bVar2 != 100) {
          if (bVar2 != 0x65) {
            if (bVar2 == 0x66) {
              FUN_1000_1b46(param_3 + 4,param_4);
              FUN_1000_1b46(param_3,param_4);
              goto LAB_1000_1216;
            }
            goto LAB_1000_10c0;
          }
          iVar5 = FUN_1000_5556((int *)param_2,param_2._2_2_,0x121);
          if (iVar5 == 0) {
            FUN_1000_1bc8(param_3 + 6,param_4);
            FUN_1000_1b46(param_3,param_4);
            FUN_1000_1b46(param_3 + 8,param_4);
          }
        }
        FUN_1000_1bc8(param_3 + 4,param_4);
        FUN_1000_1b46(param_3 + 0xc,param_4);
        goto LAB_1000_1216;
      }
      if ((bVar2 != 10) && (bVar2 != 0xc)) goto LAB_1000_10c0;
    }
    FUN_1000_1b46(param_3 + 4,param_4);
    FUN_1000_1b46(param_3 + 0xc,param_4);
  }
  else {
LAB_1000_10c0:
    if ((*(byte *)((int *)param_2 + 7) & 0x30) == 0x20) {
      FUN_1000_1b46(param_3,param_4);
      FUN_1000_1b46(param_3 + 4,param_4);
      FUN_1000_1b46(param_3 + 8,param_4);
      FUN_1000_1b46(param_3 + 0xc,param_4);
    }
    else if ((*(byte *)((int *)param_2 + 7) & 0x30) == 0x30) {
      FUN_1000_1b46(param_3,param_4);
      FUN_1000_1b46(param_3 + 4,param_4);
      FUN_1000_1bc8(param_3 + 8,param_4);
      FUN_1000_1bc8(param_3 + 10,param_4);
      FUN_1000_1bc8(param_3 + 0xc,param_4);
      FUN_1000_1bc8(param_3 + 0xe,param_4);
    }
    else if (((int *)param_2)[7] == 0) {
      FUN_1000_1b46(param_3,param_4);
      FUN_1000_1bc8(param_3 + 4,param_4);
      FUN_1000_1bc8(param_3 + 6,param_4);
    }
    else {
      FUN_1000_1b46(param_3 + 4,param_4);
      FUN_1000_1b46(param_3,param_4);
    }
  }
LAB_1000_1216:
  iVar5 = (int)(char)((int *)param_2)[8];
  if ((0 < iVar5 + -1) &&
     ((iVar5 == 3 || iVar5 + -2 < 1 ||
      ((0 < iVar5 + -4 &&
       ((iVar5 == 6 || iVar5 + -5 < 1 || ((0x5d < iVar5 + -6 && (iVar5 + -100 < 2)))))))))) {
    if (((int *)param_2)[6] == 0) {
      FUN_1000_1c10(param_1,(int *)param_2,param_2._2_2_,param_3,param_4);
    }
    else if (0 < ((int *)param_2)[6]) {
      uVar3 = *(uint *)(((int *)param_2)[6] * 4 + 0x1618);
      iVar5 = *(int *)(((int *)param_2)[6] * 4 + 0x161a);
      puVar1 = (uint *)((int *)param_2 + 4);
      uVar4 = *puVar1;
      *puVar1 = *puVar1 + uVar3;
      ((int *)param_2)[5] = ((int *)param_2)[5] + iVar5 + (uint)CARRY2(uVar4,uVar3);
    }
  }
  return (int)*(char *)((int)(int *)param_2 + 0x11) + param_1 + 1;
}


// ---- FUN_1000_128e @ 1000:128e

undefined2 __cdecl16near FUN_1000_128e(int *param_1)

{
  int *piVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  piVar1 = (int *)param_1;
  if (piVar1[1] == 0 && *param_1 == 0) {
    if (*(int *)0x1a3c != 0) {
      FUN_1000_1b46(piVar1 + 2,uVar2);
    }
    uVar2 = FUN_1000_1e0a(*(undefined2 *)0x24,*(undefined2 *)0x26,piVar1[2],piVar1[3]);
    return uVar2;
  }
  FUN_1000_55da(0x1200);
  *(undefined1 *)0x1208 = 0;
  return 0x1200;
}


// ---- FUN_1000_12f0 @ 1000:12f0

undefined2 __cdecl16near FUN_1000_12f0(undefined2 param_1,undefined4 param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  undefined4 uVar3;
  undefined2 local_a;
  undefined2 local_8;
  undefined2 local_6;
  undefined2 local_4;
  
  if (*(int *)0x2a == 0) {
    return 1;
  }
  if (*(int *)0x1a64 <= *(int *)0x1a4e) {
    *(int *)0x1a64 = *(int *)0x1a64 + 0x80;
    uVar3 = FUN_1000_1d28(*(undefined2 *)0x2c,*(undefined2 *)0x2e,*(int *)0x1a64 << 3,
                          (*(int *)0x1a64 << 3) >> 0xf);
    *(undefined2 *)0x2c = (int)uVar3;
    *(undefined2 *)0x2e = (int)((ulong)uVar3 >> 0x10);
  }
  if (*(int *)0x2e != 0 || *(int *)0x2c != 0) {
    local_a = param_1;
    uVar2 = (undefined2)((ulong)param_2 >> 0x10);
    iVar1 = (int)param_2;
    local_8 = *(undefined2 *)(iVar1 + 0xc);
    local_6 = *(undefined2 *)(iVar1 + 8);
    local_4 = *(undefined2 *)(iVar1 + 10);
    FUN_1000_1e4c(*(undefined2 *)0x2c,*(undefined2 *)0x2e,*(int *)0x1a4e << 3,
                  (*(int *)0x1a4e << 3) >> 0xf,8,&local_a);
    *(int *)0x1a4e = *(int *)0x1a4e + 1;
    return 1;
  }
  return 0;
}


// ---- FUN_1000_1394 @ 1000:1394

void __cdecl16near FUN_1000_1394(byte *param_1,undefined2 param_2,undefined2 param_3,int param_4)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  undefined2 uVar7;
  undefined2 unaff_DS;
  bool bVar8;
  undefined1 local_16 [2];
  int local_14;
  uint local_12;
  int local_10;
  ulong local_e;
  int local_a;
  uint local_8;
  int local_6;
  int local_4;
  
  uVar7 = (undefined2)((ulong)param_1 >> 0x10);
  pbVar5 = (byte *)param_1;
  local_4 = FUN_1000_16ae(*(undefined2 *)(pbVar5 + 8));
  local_a = local_4;
  if (local_4 < 2) {
    local_a = 2;
  }
  if (*(int *)(pbVar5 + 8) == 0) {
    return;
  }
  if (*(int *)(pbVar5 + 4) == -1) {
    local_8 = *(uint *)(param_4 * 4 + 0x161c);
    local_6 = *(int *)(param_4 * 4 + 0x161e);
  }
  else {
    iVar1 = FUN_1000_173e(*(undefined2 *)(pbVar5 + 4));
    FUN_1000_1dcc(*(undefined2 *)0x2c,*(undefined2 *)0x2e,iVar1 << 3,(iVar1 << 3) >> 0xf,8,local_16)
    ;
    local_8 = local_12;
    local_6 = local_10;
    if (local_14 != 0) {
      if (local_14 < 1) {
        local_8 = 0;
        local_6 = 0;
      }
      else {
        local_8 = *(uint *)(local_14 * 4 + 0x1618);
        local_6 = *(int *)(local_14 * 4 + 0x161a);
      }
    }
  }
  local_e = FUN_1000_17ae(param_2,param_3,local_4,local_a,*param_1 & 7);
  uVar4 = (uint)(local_e >> 0x10);
  uVar6 = (uint)local_e;
  switch(*(undefined2 *)(pbVar5 + 8)) {
  case 5:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x20:
    local_e = local_e + CONCAT22(local_6,local_8);
    break;
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x19:
    if (*(int *)(pbVar5 + 4) != -1) {
      uVar6 = (4 - local_4) * 8;
      bVar3 = (byte)uVar6;
      uVar6 = uVar6 & 0xff;
      bVar2 = bVar3;
      while (bVar2 != 0) {
        local_e = CONCAT22((int)(local_e >> 0x10) << 1 | (uint)((int)local_e < 0),(int)local_e << 1)
        ;
        bVar2 = (char)uVar6 - 1;
        uVar6 = (uint)bVar2;
      }
      for (; bVar3 != 0; bVar3 = bVar3 - 1) {
        local_e = CONCAT22((int)((long)local_e >> 0x11),
                           (int)(CONCAT12((local_e & 0x10000) != 0,(int)local_e) >> 1));
      }
      uVar6 = *(uint *)(param_4 * 4 + 0x161c);
      bVar8 = local_8 < uVar6;
      local_8 = local_8 - uVar6;
      local_6 = (local_6 - *(int *)(param_4 * 4 + 0x161e)) - (uint)bVar8;
      if (*(int *)(pbVar5 + 8) == 0x19) {
        FUN_1000_52b2(&local_8);
      }
      local_e = local_e + CONCAT22(local_6,local_8);
    }
    break;
  case 0x18:
    local_e = local_e - CONCAT22(local_6,local_8);
    break;
  case 0x1a:
    local_e = CONCAT22(uVar4 + local_8,uVar6 + local_6 + (uint)CARRY2(uVar4,local_8));
    break;
  case 0x21:
    local_e = (ulong)(int)(uVar6 + local_6 + (uint)CARRY2(*(uint *)(pbVar5 + 6),local_8));
    break;
  case 0x28:
    local_e = (ulong)(pbVar5[6] + (char)local_8 & 0x7f | (byte)local_e & 0x80);
    break;
  case 0x29:
    local_e = (ulong)(*(int *)(pbVar5 + 6) + local_8 >> 7 | (uVar6 >> 8 & 0xfe) << 8);
    break;
  case 0x2a:
    local_e = (ulong)((local_8 + uVar6 ^ uVar6) & 0x1fff ^ uVar6);
  }
  FUN_1000_1942(local_e,param_2,param_3,local_4,local_a,0);
  return;
}


// ---- FUN_1000_1634 @ 1000:1634

undefined2 __cdecl16near FUN_1000_1634(int param_1,undefined2 param_2)

{
  int iVar1;
  undefined2 unaff_DS;
  
  iVar1 = FUN_1000_326e(param_1,param_2,10,1,*(undefined2 *)0x11dc,*(undefined2 *)0x11de);
  if (iVar1 != 1) {
    return 0;
  }
  if (*(int *)0x1a3c != 0) {
    FUN_1000_1b46(param_1,param_2);
    FUN_1000_1bc8(param_1 + 4,param_2);
    FUN_1000_1bc8(param_1 + 6,param_2);
    FUN_1000_1bc8(param_1 + 8,param_2);
  }
  return 1;
}


// ---- FUN_1000_16ae @ 1000:16ae

undefined2 __cdecl16near FUN_1000_16ae(undefined2 param_1)

{
  switch(param_1) {
  case 5:
    return 3;
  default:
    return 0;
  case 0xf:
  case 0x12:
  case 0x21:
  case 0x28:
    return 1;
  case 0x10:
  case 0x13:
  case 0x19:
  case 0x20:
  case 0x29:
  case 0x2a:
    return 2;
  case 0x11:
  case 0x14:
  case 0x18:
  case 0x1a:
    return 4;
  }
}


// ---- FUN_1000_173e @ 1000:173e

int __cdecl16near FUN_1000_173e(int param_1)

{
  int iVar1;
  undefined2 unaff_DS;
  int local_e [4];
  int local_6;
  int local_4;
  
  local_4 = 0;
  local_6 = *(int *)0x1a4e + -1;
  while( true ) {
    while( true ) {
      if (local_6 < local_4) {
        return local_4;
      }
      iVar1 = (local_4 + local_6) / 2;
      FUN_1000_1dcc(*(undefined2 *)0x2c,*(undefined2 *)0x2e,iVar1 << 3,(iVar1 << 3) >> 0xf,8,local_e
                   );
      if (param_1 <= local_e[0]) break;
      local_4 = iVar1 + 1;
    }
    if (local_e[0] <= param_1) break;
    local_6 = iVar1 + -1;
  }
  return iVar1;
}


// ---- FUN_1000_17ae @ 1000:17ae

undefined4 __cdecl16near FUN_1000_17ae(byte *param_1,int param_2,int param_3,int param_4)

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
  if (*(int *)0x11fc == 0) {
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


// ---- FUN_1000_1942 @ 1000:1942

void __cdecl16near
FUN_1000_1942(byte param_1,undefined2 param_2,byte *param_3,int param_4,int param_5,int param_6)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 unaff_DS;
  byte local_6;
  
  iVar3 = param_5;
  local_6 = -((byte)param_6 - 8);
  if (*(int *)0x11fc == 0) {
    if (param_6 == 0) {
      for (iVar3 = 0; iVar3 < param_4; iVar3 = iVar3 + 1) {
        ((byte *)param_3)[iVar3] = param_1;
        FUN_1000_52d7(&param_1);
      }
    }
    else {
      *param_3 = *param_3 | param_1 << ((byte)param_6 & 0x1f);
      FUN_1000_52d7(&param_1);
      iVar3 = 1;
      while( true ) {
        uVar4 = (undefined2)((ulong)param_3 >> 0x10);
        if (param_4 <= iVar3) break;
        ((byte *)param_3)[iVar3] = param_1;
        iVar3 = iVar3 + 1;
        FUN_1000_52d7(&param_1);
      }
      pbVar1 = (byte *)param_3 + param_4;
      *pbVar1 = *pbVar1 | param_1;
    }
    return;
  }
  if (param_6 != 0) {
    iVar2 = param_5 - param_4;
    ((byte *)param_3)[param_5] = ((byte *)param_3)[param_5] | param_1 << (local_6 & 0x1f);
    FUN_1000_52d7(&param_1);
    while( true ) {
      iVar3 = iVar3 + -1;
      uVar4 = (undefined2)((ulong)param_3 >> 0x10);
      if (iVar3 <= iVar2) break;
      ((byte *)param_3)[iVar3] = param_1;
      FUN_1000_52d7(&param_1);
    }
    pbVar1 = (byte *)param_3 + iVar2;
    *pbVar1 = *pbVar1 | param_1;
    return;
  }
  while (iVar3 = iVar3 + -1, param_5 - param_4 <= iVar3) {
    ((byte *)param_3)[iVar3] = param_1;
    FUN_1000_52d7(&param_1);
  }
  return;
}


// ---- FUN_1000_1a7a @ 1000:1a7a

undefined2 __cdecl16near
FUN_1000_1a7a(undefined2 param_1,undefined2 param_2,int param_3,uint *param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined2 unaff_DS;
  int local_4;
  
  iVar3 = FUN_1000_3202(*(undefined2 *)0x11dc,*(undefined2 *)0x11de,param_1,param_2,0);
  if (iVar3 != -1) {
    iVar3 = FUN_1000_326e((uint *)param_4,param_4._2_2_,param_3,6,*(undefined2 *)0x11dc,
                          *(undefined2 *)0x11de);
    if (iVar3 == 6) {
      if ((*(int *)0x1a3c != 0) ||
         (*(int *)(param_5 * 4 + 0x161a) != 0 || *(int *)(param_5 * 4 + 0x1618) != 0)) {
        for (local_4 = 0; local_4 < param_3; local_4 = local_4 + 1) {
          if (*(int *)0x1a3c != 0) {
            FUN_1000_1bc8((uint *)param_4 + 2,param_4._2_2_);
            FUN_1000_1b46((uint *)param_4,param_4._2_2_);
          }
          if (((uint *)param_4)[2] != 0) {
            uVar2 = *(uint *)(param_5 * 4 + 0x1618);
            iVar3 = *(int *)(param_5 * 4 + 0x161a);
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


// ---- FUN_1000_1b46 @ 1000:1b46

void __cdecl16near FUN_1000_1b46(uint *param_1)

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


// ---- FUN_1000_1bc8 @ 1000:1bc8

void __cdecl16near FUN_1000_1bc8(undefined2 *param_1)

{
  undefined1 local_6;
  
  local_6 = (undefined1)*param_1;
  *param_1 = CONCAT11(local_6,(char)((uint)*param_1 >> 8));
  return;
}


// ---- FUN_1000_1be8 @ 1000:1be8

void __cdecl16near FUN_1000_1be8(void)

{
  undefined2 unaff_DS;
  
  (*(code *)*(undefined2 *)0x1aa2)();
  return;
}


// ---- FUN_1000_1bee @ 1000:1bee

void __cdecl16near
FUN_1000_1bee(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5)

{
  undefined2 unaff_DS;
  
  (*(code *)*(undefined2 *)0x120e)(param_1,param_2,param_3,param_4,param_5);
  return;
}


// ---- FUN_1000_1c10 @ 1000:1c10

void __cdecl16near
FUN_1000_1c10(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5)

{
  undefined2 unaff_DS;
  
  (*(code *)*(undefined2 *)0x120c)(param_1,param_2,param_3,param_4,param_5);
  return;
}


// ---- FUN_1000_1c2a @ 1000:1c2a

undefined2 __cdecl16near FUN_1000_1c2a(int param_1)

{
  int iVar1;
  undefined2 unaff_DS;
  undefined1 local_18 [16];
  char local_8;
  uint local_6;
  uint local_4;
  
  local_4 = 0;
  while (local_4 < *(uint *)0x1a9a) {
    local_6 = FUN_1000_0f2c(local_4,local_18);
    iVar1 = (*(code *)*(undefined2 *)0x11b2)(local_4,local_18);
    if (iVar1 == 0) {
      FUN_1000_2332(0xfff1,*(undefined2 *)0x1116);
    }
    if ((param_1 != 0) &&
       ((((local_8 == '\x02' || (local_8 == '\x05')) || (local_8 == '\x03')) ||
        (((local_8 == '\x06' || (local_8 == 'd')) || (local_8 == 'e')))))) {
      iVar1 = FUN_1000_12f0(local_4,local_18);
      if (iVar1 == 0) {
        FUN_1000_2332(0xfff1,*(undefined2 *)0x1116);
      }
    }
    local_4 = local_6;
  }
  return 1;
}


// ---- FUN_1000_1cde @ 1000:1cde

void __cdecl16near
FUN_1000_1cde(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5,undefined2 param_6,undefined2 param_7,undefined2 param_8,
             undefined2 param_9,undefined2 param_10,undefined2 param_11,undefined2 param_12,
             undefined2 param_13)

{
  FUN_1000_230e(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                param_11,param_12,param_13);
  return;
}


// ---- FUN_1000_1d10 @ 1000:1d10

void __cdecl16near FUN_1000_1d10(undefined2 param_1,undefined2 param_2)

{
  undefined2 unaff_DS;
  
  (*(code *)*(undefined2 *)0x11b0)(param_1,param_2);
  return;
}


// ---- FUN_1000_1d28 @ 1000:1d28

void __cdecl16near
FUN_1000_1d28(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  undefined2 unaff_DS;
  
  (*(code *)*(undefined2 *)0x11b4)(param_1,param_2,param_3,param_4);
  return;
}


// ---- FUN_1000_1d46 @ 1000:1d46

void __cdecl16near FUN_1000_1d46(undefined2 param_1,undefined2 param_2)

{
  undefined2 unaff_DS;
  
  (*(code *)*(undefined2 *)0x11fe)(param_1,param_2);
  return;
}


// ---- FUN_1000_1d58 @ 1000:1d58

void __cdecl16near FUN_1000_1d58(undefined2 param_1,undefined2 param_2)

{
  FUN_1000_541a(0x7e0f,1,0,4,param_1,param_2);
  return;
}


// ---- FUN_1000_1d7e @ 1000:1d7e

void __cdecl16near
FUN_1000_1d7e(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  FUN_1000_541a(0x7e11,2,0,4,param_1,param_2,0,4,param_3,param_4);
  return;
}


// ---- FUN_1000_1dac @ 1000:1dac

void __cdecl16near FUN_1000_1dac(undefined2 param_1,undefined2 param_2)

{
  FUN_1000_541a(0x7e0e,1,0,4,param_1,param_2);
  return;
}


// ---- FUN_1000_1dcc @ 1000:1dcc

undefined4 __cdecl16near
FUN_1000_1dcc(uint param_1,int param_2,int param_3,int param_4,undefined2 param_5,undefined2 param_6
             ,undefined2 param_7)

{
  FUN_1000_5438(param_3 * 8 + param_1,
                (((param_4 << 1 | (uint)(param_3 < 0)) << 1 | (uint)(param_3 << 1 < 0)) << 1 |
                (uint)(param_3 << 2 < 0)) + param_2 + (uint)CARRY2(param_3 * 8,param_1),param_6,
                param_7,param_5,0);
  return CONCAT22(param_7,param_6);
}


// ---- FUN_1000_1e0a @ 1000:1e0a

undefined2 __cdecl16near FUN_1000_1e0a(uint param_1,int param_2,int param_3,int param_4)

{
  undefined2 unaff_DS;
  
  FUN_1000_5438(param_3 * 8 + param_1,
                (((param_4 << 1 | (uint)(param_3 < 0)) << 1 | (uint)(param_3 << 1 < 0)) << 1 |
                (uint)(param_3 << 2 < 0)) + param_2 + (uint)CARRY2(param_3 * 8,param_1),0x11ba);
  *(undefined1 *)0x11da = 0;
  return 0x11ba;
}


// ---- FUN_1000_1e4c @ 1000:1e4c

void __cdecl16near
FUN_1000_1e4c(uint param_1,int param_2,int param_3,int param_4,undefined2 param_5,undefined2 param_6
             ,undefined2 param_7)

{
  FUN_1000_544a(param_6,param_7,param_3 * 8 + param_1,
                (((param_4 << 1 | (uint)(param_3 < 0)) << 1 | (uint)(param_3 << 1 < 0)) << 1 |
                (uint)(param_3 << 2 < 0)) + param_2 + (uint)CARRY2(param_3 * 8,param_1),param_5,0);
  return;
}


// ---- FUN_1000_1e7c @ 1000:1e7c

void __cdecl16near FUN_1000_1e7c(uint param_1,int param_2,int param_3,int param_4)

{
  undefined2 unaff_DS;
  uint local_a;
  uint local_8;
  undefined1 local_6 [4];
  
  *(int *)0x1a1c = param_3 * 8 + param_1;
  *(int *)0x1a1e =
       (((param_4 << 1 | (uint)(param_3 < 0)) << 1 | (uint)(param_3 << 1 < 0)) << 1 |
       (uint)(param_3 << 2 < 0)) + param_2 + (uint)CARRY2(param_3 * 8,param_1);
  FUN_1000_5426(local_6);
  if ((*(uint *)0x1a1e <= local_8) && ((*(uint *)0x1a1e < local_8 || (*(uint *)0x1a1c < local_a))))
  {
    *(uint *)0x1a4a = local_a;
    *(uint *)0x1a4c = local_8;
    return;
  }
  *(undefined2 *)0x1a4a = 0xdfe0;
  *(undefined2 *)0x1a4c = 0xffff;
  return;
}


// ---- FUN_1000_1ee0 @ 1000:1ee0

undefined4 __cdecl16near FUN_1000_1ee0(int param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  undefined2 unaff_DS;
  undefined2 local_a;
  undefined2 local_8;
  
  uVar2 = (((param_2 << 1 | (uint)(param_1 < 0)) << 1 | (uint)(param_1 << 1 < 0)) << 1 |
          (uint)(param_1 << 2 < 0)) + *(int *)0x1a1e + (uint)CARRY2(param_1 * 8,*(uint *)0x1a1c);
  if ((uVar2 < *(uint *)0x1a4c) ||
     ((uVar2 <= *(uint *)0x1a4c && (param_1 * 8 + *(uint *)0x1a1c <= *(uint *)0x1a4a)))) {
    local_a = *(undefined2 *)0x1a1c;
    local_8 = *(undefined2 *)0x1a1e;
    puVar1 = (uint *)0x1a1c;
    uVar2 = *puVar1;
    *puVar1 = *puVar1 + param_1 * 8;
    *(int *)0x1a1e =
         *(int *)0x1a1e +
         (((param_2 << 1 | (uint)(param_1 < 0)) << 1 | (uint)(param_1 << 1 < 0)) << 1 |
         (uint)(param_1 << 2 < 0)) + (uint)CARRY2(uVar2,param_1 * 8);
  }
  else {
    local_8 = 0;
    local_a = 0;
  }
  return CONCAT22(local_8,local_a);
}


// ---- FUN_1000_1f54 @ 1000:1f54

undefined4 __cdecl16near
FUN_1000_1f54(undefined2 param_1,undefined2 param_2,int param_3,int param_4)

{
  uint *puVar1;
  uint uVar2;
  undefined2 unaff_DS;
  undefined2 local_a;
  undefined2 local_8;
  
  uVar2 = (((param_4 << 1 | (uint)(param_3 < 0)) << 1 | (uint)(param_3 << 1 < 0)) << 1 |
          (uint)(param_3 << 2 < 0)) + *(int *)0x1a1e + (uint)CARRY2(param_3 * 8,*(uint *)0x1a1c);
  if ((uVar2 < *(uint *)0x1a4c) ||
     ((uVar2 <= *(uint *)0x1a4c && (param_3 * 8 + *(uint *)0x1a1c <= *(uint *)0x1a4a)))) {
    local_a = param_1;
    local_8 = param_2;
    puVar1 = (uint *)0x1a1c;
    uVar2 = *puVar1;
    *puVar1 = *puVar1 + param_3 * 8;
    *(int *)0x1a1e =
         *(int *)0x1a1e +
         (((param_4 << 1 | (uint)(param_3 < 0)) << 1 | (uint)(param_3 << 1 < 0)) << 1 |
         (uint)(param_3 << 2 < 0)) + (uint)CARRY2(uVar2,param_3 * 8);
  }
  else {
    local_8 = 0;
    local_a = 0;
  }
  return CONCAT22(local_8,local_a);
}


// ---- FUN_1000_1fc8 @ 1000:1fc8

undefined2 __cdecl16near FUN_1000_1fc8(uint *param_1,uint *param_2)

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
  iVar1 = FUN_1000_326e(&local_62);
  if (iVar1 == 0) {
    return 0;
  }
  if (local_62 != 0x90) {
    FUN_1000_1bc8(&local_62);
    if (local_62 != 0x90) {
      return 0;
    }
    local_2c = 1;
    FUN_1000_1bc8(local_60);
    FUN_1000_1bc8(local_52);
  }
  if (local_52[0] == 0x1c) {
    iVar1 = FUN_1000_326e(local_4e);
    if (iVar1 != 1) {
      return 0;
    }
    for (local_2e = 0; local_2e < local_60[0]; local_2e = local_2e + 1) {
      iVar1 = FUN_1000_326e(local_2a);
      if (iVar1 != 0) {
        if (local_2c != 0) {
          FUN_1000_1bc8(local_6);
          FUN_1000_1b46(&local_1e);
          FUN_1000_1b46(&local_1a);
          FUN_1000_1b46(local_16);
        }
        if (((local_18 != 0 || local_1a != 0) && ((local_6[0] & 3) == 0)) &&
           (((local_6[0] & 0x10) == 0 || (iVar1 = FUN_1000_5556(local_2a), iVar1 != 0)))) {
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
  FUN_1000_5824(*(undefined2 *)0x11dc,*(undefined2 *)0x11de);
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


// ---- FUN_1000_21c2 @ 1000:21c2

void __cdecl16near FUN_1000_21c2(int param_1)

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
  FUN_1000_55a2(local_42);
  return;
}


// ---- FUN_1000_220e @ 1000:220e

void __cdecl16near
FUN_1000_220e(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5,uint param_6,uint param_7,undefined2 param_8,undefined2 param_9)

{
  uint uVar1;
  long lVar2;
  
  FUN_1000_55a2(param_3,param_4,param_1,param_2,0,0);
  if ((param_7 | param_6) != 0) {
    lVar2 = FUN_1000_562a(param_3,param_4,CONCAT11((char)((param_7 | param_6) >> 8),0x2e));
    if (lVar2 != 0) {
      uVar1 = FUN_1000_562a(param_3,param_4,0x5c);
      if (uVar1 <= (uint)lVar2) goto LAB_1000_2275;
    }
    FUN_1000_550c(param_3,param_4,param_6,param_7);
  }
LAB_1000_2275:
  lVar2 = FUN_1000_311e(param_3,param_4,param_8,param_9);
  if (lVar2 == 0) {
    FUN_1000_5450(param_1,param_2,param_3,param_4,param_5,param_6,param_7,0);
    FUN_1000_311e(param_3,param_4,param_8,param_9);
  }
  return;
}


// ---- FUN_1000_22d0 @ 1000:22d0

void __cdecl16near FUN_1000_22d0(undefined2 param_1,undefined2 param_2)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)FUN_1000_562a(param_1,param_2,0x2e);
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = 0;
    return;
  }
  FUN_1000_562a(param_1,param_2,0x5c);
  return;
}


// ---- FUN_1000_230e @ 1000:230e

void __cdecl16near FUN_1000_230e(undefined2 param_1)

{
  undefined2 unaff_DS;
  
  if (*(int *)0x14 != 0) {
    FUN_1000_5465(param_1,&stack0x0004,&stack0x0004);
  }
  return;
}


// ---- FUN_1000_2332 @ 1000:2332

void __cdecl16near FUN_1000_2332(undefined2 param_1,char *param_2)

{
  undefined2 unaff_DS;
  
  if (*(int *)0x14 != 0) {
    FUN_1000_230e(0x12d,param_1,&stack0x0006);
    if (*param_2 != '\0') {
      FUN_1000_230e(0x13d);
      FUN_1000_5465(param_2,&stack0x0006);
    }
    FUN_1000_230e(0x141);
  }
  FUN_1000_21c2(2,0,0);
  FUN_1000_53f0(*(undefined2 *)0x1618,*(undefined2 *)0x161a,param_1);
  return;
}


// ---- FUN_1000_23a0 @ 1000:23a0

void __cdecl16near FUN_1000_23a0(void)

{
  undefined2 unaff_DS;
  
  FUN_1000_230e(*(undefined2 *)0x10e0);
  FUN_1000_230e(*(undefined2 *)0x10e2);
  FUN_1000_230e(*(undefined2 *)0x10e0);
  FUN_1000_230e(*(undefined2 *)0x10e4);
  FUN_1000_230e(*(undefined2 *)0x10e6);
  FUN_1000_230e(*(undefined2 *)0x10e8);
  FUN_1000_230e(*(undefined2 *)0x10ea);
  FUN_1000_230e(*(undefined2 *)0x10ec);
  FUN_1000_230e(*(undefined2 *)0x10e0);
  FUN_1000_2332(0xfffe,0x145);
  return;
}


// ---- FUN_1000_240a @ 1000:240a

undefined2 __cdecl16near FUN_1000_240a(undefined2 param_1,undefined2 param_2)

{
  long lVar1;
  
  lVar1 = FUN_1000_311e(param_1,param_2,0x146);
  if (lVar1 == 0) {
    return 0;
  }
  FUN_1000_31c2(lVar1,(int)lVar1);
  return 1;
}


// ---- FUN_1000_2448 @ 1000:2448

uint __cdecl16far FUN_1000_2448(int param_1,undefined2 param_2)

{
  undefined2 uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = DAT_1000_2a29;
  if (param_1 == -1) {
    param_1 = *(int *)0x53e;
  }
  if (param_1 < *(int *)0x53c) {
    *(int *)0x53e = param_1;
    FUN_1000_4f20();
    uVar2 = FUN_1000_7e4b();
    if (uVar2 != 0) {
      FUN_1000_2684(0x7e14,4,0,2,param_1,0,2,param_2,0,2,*(undefined2 *)0x53c,1,*(undefined2 *)0x46e
                    ,0x462,uVar1);
      FUN_1000_519e(0x8a6,uVar1,0x6a4,uVar1,0,0,0);
      iVar3 = FUN_1000_3393(0x6a4,uVar1,2);
      if (iVar3 != 0) {
        *(int *)0x8a4 = iVar3;
        FUN_1000_33ec(*(undefined2 *)0x8a4,10,0,0);
        FUN_1000_3422(*(undefined2 *)0x8a4,0x53e,uVar1,2);
        FUN_1000_33ac(*(undefined2 *)0x8a4);
        return uVar2 | 1;
      }
    }
  }
  return 0;
}


// ---- FUN_1000_25d4 @ 1000:25d4

undefined2 __cdecl16far FUN_1000_25d4(undefined2 param_1)

{
  *(undefined2 *)0x158 = param_1;
  FUN_1000_5922();
  FUN_1000_5ade();
  FUN_1000_58c0();
  return 0;
}


// ---- FUN_1000_2684 @ 1000:2684

void __cdecl16far FUN_1000_2684(undefined2 param_1)

{
  *(undefined2 *)0x158 = param_1;
  FUN_1000_5922();
  FUN_1000_5ade();
  FUN_1000_58c0();
  FUN_1000_58c9();
  FUN_1000_6194();
  return;
}


// ---- FUN_1000_2738 @ 1000:2738

void __cdecl16far FUN_1000_2738(undefined2 param_1,undefined2 param_2)

{
  undefined2 uVar1;
  int iVar2;
  int in_DX;
  
  uVar1 = DAT_1000_2a29;
  iVar2 = FUN_1000_812d();
  if (iVar2 != 0 || in_DX != 0) {
    FUN_1000_7459(*(undefined2 *)0x16a,*(undefined2 *)0x16c,0x20,param_1,param_2);
    FUN_1000_8179();
  }
  return;
}


// ---- FUN_1000_276f @ 1000:276f

void __cdecl16far FUN_1000_276f(undefined2 param_1,undefined2 param_2)

{
  FUN_1000_2b1c(0x3e35,2,param_1,param_2);
  return;
}


// ---- FUN_1000_2b1c @ 1000:2b1c

undefined2 __cdecl16far FUN_1000_2b1c(undefined2 param_1)

{
  *(undefined2 *)0x158 = param_1;
  FUN_1000_5922();
  FUN_1000_6126();
  FUN_1000_58c0();
  return 0;
}


// ---- FUN_1000_2b72 @ 1000:2b72

undefined2 __cdecl16far FUN_1000_2b72(undefined2 param_1)

{
  *(undefined2 *)0x158 = param_1;
  FUN_1000_5922();
  FUN_1000_6126();
  FUN_1000_6145();
  FUN_1000_58c0();
  return 0;
}


// ---- FUN_1000_2b9a @ 1000:2b9a

void __cdecl16far FUN_1000_2b9a(undefined2 param_1)

{
  *(undefined2 *)0x158 = param_1;
  FUN_1000_5922();
  FUN_1000_61c9();
  FUN_1000_58c0();
  FUN_1000_58c9();
  FUN_1000_61da();
  FUN_1000_6194();
  return;
}


// ---- FUN_1000_2bd0 @ 1000:2bd0

void __cdecl16far FUN_1000_2bd0(undefined2 param_1)

{
  *(undefined2 *)0x158 = param_1;
  FUN_1000_5922();
  FUN_1000_6126();
  FUN_1000_6145();
  FUN_1000_58c0();
  FUN_1000_58c9();
  FUN_1000_6194();
  return;
}


// ---- FUN_1000_2bfa @ 1000:2bfa

undefined2 __cdecl16far FUN_1000_2bfa(undefined2 param_1)

{
  *(undefined2 *)0x158 = param_1;
  FUN_1000_5922();
  FUN_1000_61a2();
  FUN_1000_58c0();
  return 0;
}


// ---- FUN_1000_2c7c @ 1000:2c7c

void __cdecl16far FUN_1000_2c7c(undefined2 param_1)

{
  *(undefined2 *)0x158 = param_1;
  FUN_1000_5922();
  FUN_1000_6126();
  FUN_1000_58c0();
  FUN_1000_58c9();
  FUN_1000_6194();
  return;
}


// ---- FUN_1000_2ca4 @ 1000:2ca4

char * __cdecl16far FUN_1000_2ca4(char *param_1,undefined2 param_2)

{
  char *pcVar1;
  char *pcVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  undefined2 in_BX;
  char *pcVar6;
  char *pcVar7;
  undefined2 uVar8;
  bool bVar9;
  
  if ((DAT_1000_2a0f & 1) == 0) {
    pcVar3 = (code *)swi(0x21);
    (*pcVar3)();
    uVar8 = *(undefined2 *)0x2c;
    pcVar6 = (char *)0x0;
  }
  else {
    uVar8 = (undefined2)((ulong)DAT_1000_2a2d >> 0x10);
    pcVar6 = (char *)DAT_1000_2a2d;
  }
  uVar4 = 0xffff;
  pcVar7 = param_1;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar1 = pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (*pcVar1 != '\0');
  do {
    if (*pcVar6 == '\0') {
      return (char *)0x0;
    }
    bVar9 = false;
    pcVar7 = param_1;
    uVar5 = ~uVar4;
    do {
      uVar5 = uVar5 - 1;
      if (uVar5 == 0) break;
      pcVar2 = pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar1 = pcVar6;
      pcVar6 = pcVar6 + 1;
      bVar9 = *pcVar1 == *pcVar2;
    } while (bVar9);
    if ((bVar9) && (*pcVar6 == '=')) {
      return pcVar6 + 1;
    }
    for (; *pcVar6 != '\0'; pcVar6 = pcVar6 + 1) {
    }
    pcVar6 = pcVar6 + 1;
  } while( true );
}


// ---- FUN_1000_2d13 @ 1000:2d13

undefined2 __cdecl16far FUN_1000_2d13(int param_1)

{
  char *pcVar1;
  char cVar2;
  undefined2 uVar3;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  int in_DX;
  char *pcVar7;
  
  pcVar4 = (char *)FUN_1000_2ca4(0x646,DAT_1000_2a29);
  if ((pcVar4 == (char *)0x0 && in_DX == 0) &&
     (pcVar4 = (char *)FUN_1000_2ca4(0x64b,DAT_1000_2a29), pcVar4 == (char *)0x0 && in_DX == 0)) {
    return 0;
  }
  uVar3 = DAT_1000_2a29;
  uVar5 = 0xffff;
  pcVar7 = pcVar4;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar1 = pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (*pcVar1 != '\0');
  iVar6 = ~uVar5 - 1;
code_r0x00012d71:
  do {
    if (iVar6 != 0) {
      iVar6 = iVar6 + -1;
      pcVar1 = pcVar4;
      pcVar4 = pcVar4 + 1;
      if (*pcVar1 != '-') goto code_r0x00012d71;
    }
    if (iVar6 == 0) {
      return 0;
    }
    if ((*pcVar4 == *(char *)(param_1 + 0x651)) ||
       (*pcVar4 == (char)(*(char *)(param_1 + 0x651) + -0x20))) {
      iVar6 = 0;
      while( true ) {
        pcVar4 = pcVar4 + 1;
        cVar2 = *pcVar4;
        if ((cVar2 == '\0') || (cVar2 == '-')) break;
        if (cVar2 != ' ') {
          *(char *)(iVar6 + 0x654) = cVar2;
          iVar6 = iVar6 + 1;
        }
      }
      if (iVar6 == 0) {
        return 0;
      }
      *(undefined1 *)(iVar6 + 0x654) = 0;
      return 0x654;
    }
  } while( true );
}


// ---- FUN_1000_2db7 @ 1000:2db7

int __cdecl16far FUN_1000_2db7(char *param_1,undefined2 param_2)

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


// ---- FUN_1000_2eab @ 1000:2eab

void __cdecl16far FUN_1000_2eab(void)

{
  undefined2 uVar1;
  
  uVar1 = DAT_1000_2a29;
  *(undefined2 *)0x15a = 0x2ed2;
  *(undefined2 *)0x15c = 0x1000;
  return;
}


// ---- FUN_1000_2ebf @ 1000:2ebf

void __cdecl16far FUN_1000_2ebf(undefined2 param_1)

{
  *(undefined2 *)0x168 = param_1;
  return;
}


// ---- FUN_1000_2ed2 @ 1000:2ed2

undefined2 __cdecl16far FUN_1000_2ed2(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  FUN_1000_2f06();
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  return 1;
}


// ---- FUN_1000_2f06 @ 1000:2f06

void __cdecl16near FUN_1000_2f06(void)

{
  FUN_1000_2f11();
  FUN_1000_2f11();
  return;
}


// ---- FUN_1000_2f11 @ 1000:2f11

void __cdecl16near FUN_1000_2f11(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  return;
}


// ---- FUN_1000_2f4b @ 1000:2f4b

undefined2 __cdecl16far FUN_1000_2f4b(void)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  uVar3 = DAT_1000_2a29;
  uVar4 = 0;
  if (*(int *)0x154 != 0 || *(int *)0x156 != 0) {
    *(undefined2 *)0x150 = 1;
    uVar4 = *(undefined2 *)0x168;
    uVar1 = *(undefined2 *)0x15a;
    uVar2 = *(undefined2 *)0x15c;
    *(undefined2 *)0x168 = 2000;
    *(undefined2 *)0x15a = 0x2f3a;
    *(undefined2 *)0x15c = 0x1000;
    FUN_1000_2684(0x7e37,0);
    *(undefined2 *)0x168 = uVar4;
    *(undefined2 *)0x15a = uVar1;
    *(undefined2 *)0x15c = uVar2;
    uVar4 = *(undefined2 *)0x150;
  }
  return uVar4;
}


// ---- FUN_1000_2fc0 @ 1000:2fc0

uint __cdecl16far FUN_1000_2fc0(void)

{
  undefined2 uVar1;
  int iVar2;
  uint uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  
  uVar1 = DAT_1000_2a29;
  FUN_1000_519e(0x8a6,DAT_1000_2a29,0x6a4,DAT_1000_2a29,0,0,0);
  iVar2 = FUN_1000_3393(0x6a4,uVar1,0);
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    *(int *)0x8a4 = iVar2;
    FUN_1000_33d4(*(undefined2 *)0x8a4,0x6a4,uVar1,0x18);
    iVar2 = *(int *)0x6a4;
    if (iVar2 == -0x7dec) {
      *(undefined2 *)0x53c = *(undefined2 *)0x6ac;
      *(undefined2 *)0x53e = *(undefined2 *)0x6ae;
      FUN_1000_33ec(*(undefined2 *)0x8a4,*(undefined2 *)0x6b4,*(undefined2 *)0x6b6,0);
      uVar4 = FUN_1000_33bd(*(undefined2 *)0x8a4);
      *(undefined2 *)0x478 = uVar4;
      uVar4 = FUN_1000_33bd(*(undefined2 *)0x8a4);
      *(undefined2 *)0x47a = uVar4;
      FUN_1000_33ec(*(undefined2 *)0x8a4,*(undefined2 *)0x6b8,*(undefined2 *)0x6ba,0);
      uVar4 = FUN_1000_33bd(*(undefined2 *)0x8a4);
      *(undefined2 *)0x460 = uVar4;
      uVar4 = FUN_1000_33bd(*(undefined2 *)0x8a4);
      *(undefined2 *)0x5da = uVar4;
      uVar4 = DAT_1000_2a2b;
      uVar5 = FUN_1000_33bd(*(undefined2 *)0x8a4);
      *(undefined2 *)0x5dc = uVar5;
      uVar5 = FUN_1000_33bd(*(undefined2 *)0x8a4);
      *(undefined2 *)0x5de = uVar5;
      uVar5 = FUN_1000_33bd(*(undefined2 *)0x8a4);
      *(undefined2 *)0x2a11 = uVar5;
      *(undefined2 *)0x2a25 = uVar5;
      uVar5 = FUN_1000_33bd(*(undefined2 *)0x8a4);
      *(undefined2 *)0x2a13 = uVar5;
      uVar5 = FUN_1000_33bd(*(undefined2 *)0x8a4);
      *(undefined2 *)0x2a15 = uVar5;
      *(undefined2 *)0x2a27 = uVar5;
      uVar5 = FUN_1000_33bd(*(undefined2 *)0x8a4);
      *(undefined2 *)0x2a17 = uVar5;
      FUN_1000_33d4(*(undefined2 *)0x8a4,0x2a31,uVar4,0x68);
    }
    uVar3 = (uint)(iVar2 == -0x7dec);
    FUN_1000_33ac(*(undefined2 *)0x8a4);
  }
  return uVar3;
}


// ---- FUN_1000_311e @ 1000:311e

undefined2 * __cdecl16near FUN_1000_311e(undefined2 param_1,undefined2 param_2,char *param_3)

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
    if (*param_3 != 'w') goto LAB_1000_31b9;
    iVar5 = 1;
  }
  if ((((char *)param_3)[1] == 'b') && (((char *)param_3)[2] == '\0')) {
    iVar3 = 3;
    puVar4 = (uint *)0x8b0;
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
            goto LAB_1000_31bd;
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
              goto LAB_1000_31bd;
            }
          }
        }
        break;
      }
      puVar4 = puVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
LAB_1000_31b9:
  puVar2 = (undefined2 *)0x0;
  unaff_SI = 0;
LAB_1000_31bd:
  return (undefined2 *)CONCAT22(unaff_SI,puVar2);
}


// ---- FUN_1000_31c2 @ 1000:31c2

undefined2 __cdecl16near FUN_1000_31c2(undefined4 param_1)

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


// ---- FUN_1000_3202 @ 1000:3202

undefined2 __cdecl16near
FUN_1000_3202(undefined4 param_1,undefined2 param_2,undefined2 param_3,uint param_4)

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


// ---- FUN_1000_326e @ 1000:326e

int __cdecl16near FUN_1000_326e(undefined1 *param_1,int param_2,int param_3,undefined4 param_4)

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
        if ((bVar12) || (iVar4 < (int)uVar6)) goto LAB_1000_32f8;
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
        if ((bVar12) || (iVar4 < (int)uVar6)) goto LAB_1000_32f8;
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
LAB_1000_32f8:
  return param_3 - iVar5;
}


// ---- FUN_1000_3302 @ 1000:3302

int __cdecl16near FUN_1000_3302(undefined1 *param_1,int param_2,int param_3,undefined2 *param_4)

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
      if ((bVar14) || (iVar5 != 0x100)) goto LAB_1000_3389;
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
          if ((bVar14) || (uVar4 != uVar7)) goto LAB_1000_3389;
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
LAB_1000_3389:
  return param_3 - iVar6;
}


// ---- FUN_1000_3393 @ 1000:3393

undefined2 __cdecl16far FUN_1000_3393(void)

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


// ---- FUN_1000_33ac @ 1000:33ac

undefined2 __cdecl16far FUN_1000_33ac(void)

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


// ---- FUN_1000_33bd @ 1000:33bd

undefined2 __cdecl16far FUN_1000_33bd(void)

{
  code *pcVar1;
  undefined2 unaff_BP;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  return unaff_BP;
}


// ---- FUN_1000_33d4 @ 1000:33d4

undefined2 __cdecl16far FUN_1000_33d4(void)

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


// ---- FUN_1000_33ec @ 1000:33ec

undefined2 __cdecl16far FUN_1000_33ec(void)

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


// ---- FUN_1000_340a @ 1000:340a

undefined2 __cdecl16far FUN_1000_340a(void)

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


// ---- FUN_1000_3422 @ 1000:3422

undefined2 __cdecl16far FUN_1000_3422(void)

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


// ---- FUN_1000_343a @ 1000:343a

void __cdecl16near
FUN_1000_343a(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5,undefined2 param_6,undefined2 param_7)

{
  FUN_1000_2684(0x7e64,6,0,2,*(undefined2 *)0x14e,0,2,param_1,0,2,param_2,0,2,param_3,0,4,param_4,
                param_5,1,0x42,param_6,param_7);
  return;
}


// ---- FUN_1000_3707 @ 1000:3707

void __cdecl16far FUN_1000_3707(void)

{
  undefined2 uVar1;
  int iVar2;
  
  uVar1 = DAT_1000_2a29;
  *(undefined2 *)0x14 = 0;
  *(undefined2 *)0x1618 = 0x1a3e;
  *(undefined2 *)0x161a = uVar1;
  iVar2 = FUN_1000_53cc(0x1a3e,uVar1);
  if (iVar2 == 0) {
    FUN_1000_38e8(0,0,0);
  }
  return;
}


// ---- FUN_1000_3740 @ 1000:3740

void __cdecl16far FUN_1000_3740(void)

{
  undefined2 uVar1;
  int iVar2;
  
  uVar1 = DAT_1000_2a29;
  *(undefined2 *)0x14 = 0;
  *(undefined2 *)0x1618 = 0x1a3e;
  *(undefined2 *)0x161a = uVar1;
  iVar2 = FUN_1000_53cc(0x1a3e,uVar1);
  if (iVar2 == 0) {
    FUN_1000_3bb4(0,0,0);
  }
  return;
}


// ---- FUN_1000_3779 @ 1000:3779

int __cdecl16far FUN_1000_3779(undefined2 param_1,undefined2 param_2)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 local_6;
  undefined2 local_4;
  
  uVar1 = DAT_1000_2a29;
  *(undefined2 *)0x14 = 0;
  local_6 = param_1;
  local_4 = param_2;
  *(undefined2 *)0x1618 = 0x1a3e;
  *(undefined2 *)0x161a = uVar1;
  iVar2 = FUN_1000_53cc(0x1a3e,uVar1);
  if (iVar2 == 0) {
    iVar2 = FUN_1000_4968(1,&local_6);
    if (0 < iVar2) {
      iVar2 = iVar2 << 9;
    }
  }
  return iVar2;
}


// ---- FUN_1000_37ce @ 1000:37ce

int __cdecl16far FUN_1000_37ce(void)

{
  undefined2 uVar1;
  int iVar2;
  uint extraout_DX;
  undefined1 local_5a [80];
  undefined1 *local_a;
  
  uVar1 = DAT_1000_2a29;
  FUN_1000_541a(0x7e1a,0);
  if ((extraout_DX & 0x4000) == 0) {
    *(undefined2 *)0x14 = 0;
    FUN_1000_5450(0xbd9,uVar1,local_5a);
    local_a = local_5a;
    *(undefined2 *)0x1618 = 0x1a3e;
    *(undefined2 *)0x161a = uVar1;
    iVar2 = FUN_1000_53cc(0x1a3e,uVar1);
    if (iVar2 == 0) {
      iVar2 = FUN_1000_3c3e(2,&local_a);
      if (0 < iVar2) {
        iVar2 = iVar2 << 9;
      }
    }
  }
  else {
    iVar2 = 1;
  }
  return iVar2;
}


// ---- FUN_1000_3856 @ 1000:3856

int __cdecl16far FUN_1000_3856(undefined2 param_1,undefined2 param_2)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 local_6;
  undefined2 local_4;
  
  uVar1 = DAT_1000_2a29;
  *(undefined2 *)0x14 = 0;
  local_6 = param_1;
  local_4 = param_2;
  *(undefined2 *)0x1618 = 0x1a3e;
  *(undefined2 *)0x161a = uVar1;
  iVar2 = FUN_1000_53cc(0x1a3e,uVar1);
  if (iVar2 == 0) {
    iVar2 = FUN_1000_3c3e(1,&local_6);
    if (0 < iVar2) {
      iVar2 = iVar2 << 9;
    }
  }
  return iVar2;
}


// ---- FUN_1000_38ab @ 1000:38ab

undefined2 __cdecl16far FUN_1000_38ab(undefined2 param_1,undefined2 param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = DAT_1000_2a29;
  *(undefined2 *)0x14 = 0;
  *(undefined2 *)0x1618 = 0x1a3e;
  *(undefined2 *)0x161a = uVar2;
  iVar1 = FUN_1000_53cc(0x1a3e,uVar2);
  if (iVar1 == 0) {
    uVar2 = FUN_1000_4c0c(param_1,param_2);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


// ---- FUN_1000_38e8 @ 1000:38e8

undefined2 __cdecl16near FUN_1000_38e8(int param_1,int *param_2)

{
  undefined2 *puVar1;
  int iVar2;
  int *piVar3;
  undefined2 uVar4;
  undefined2 unaff_DS;
  undefined4 uVar5;
  undefined1 local_42 [64];
  
  *(undefined2 *)0x1aa2 = 0x3b7e;
  *(undefined2 *)0x120c = 0x3b76;
  *(undefined2 *)0x11b2 = 0x3a78;
  *(undefined2 *)0x120e = 0x3b78;
  *(undefined2 *)0x11b0 = 0x1d58;
  *(undefined2 *)0x11b4 = 0x1d7e;
  *(undefined2 *)0x11fe = 0x1dac;
  *(undefined2 *)0x18 = 1;
  iVar2 = FUN_1000_545c();
  if (iVar2 == 0) {
    FUN_1000_2332(0xfffc,*(undefined2 *)0x1106);
  }
  iVar2 = FUN_1000_5460();
  if (iVar2 == 0) {
    FUN_1000_2332(0xfffb,*(undefined2 *)0x1108);
  }
  piVar3 = (int *)param_2;
  uVar4 = (undefined2)((ulong)param_2 >> 0x10);
  if (param_1 == 0) {
LAB_1000_3976:
    FUN_1000_5450(0xbf0);
  }
  else {
    if (piVar3[1] == 0 && *param_2 == 0) goto LAB_1000_3976;
    FUN_1000_5450(*param_2,piVar3[1],local_42);
  }
  uVar5 = FUN_1000_311e(local_42);
  iVar2 = (int)((ulong)uVar5 >> 0x10);
  *(undefined2 *)0x11dc = (int)uVar5;
  *(int *)0x11de = iVar2;
  if (iVar2 == 0 && *(int *)0x11dc == 0) {
    FUN_1000_2332(0xfff7,*(undefined2 *)0x10f0,local_42);
  }
  if (1 < param_1) {
    if (piVar3[3] != 0 || piVar3[2] != 0) {
      puVar1 = *(undefined2 **)(piVar3 + 2);
      uVar4 = ((undefined2 *)puVar1)[1];
      *(undefined2 *)0x119a = *puVar1;
      *(undefined2 *)0x119c = uVar4;
      goto LAB_1000_39ee;
    }
  }
  *(undefined2 *)0x119c = 0;
  *(undefined2 *)0x119a = 0;
LAB_1000_39ee:
  FUN_1000_230e(*(undefined2 *)0x10f2);
  FUN_1000_5414(0x7e60,0);
  FUN_1000_541a(0x7e5a,1,2,2,0x1f);
  iVar2 = FUN_1000_024a();
  if (iVar2 == 0) {
    FUN_1000_2332(0xfff2,*(undefined2 *)0x10da,local_42);
  }
  FUN_1000_5414(0x7e5b,0);
  if (*(int *)0x11de != 0 || *(int *)0x11dc != 0) {
    FUN_1000_31c2(*(undefined2 *)0x11dc,*(undefined2 *)0x11de);
  }
  FUN_1000_5464();
  if (1 < *(int *)0x14) {
    FUN_1000_230e(*(undefined2 *)0x10dc);
  }
  return 0;
}


// ---- FUN_1000_3a78 @ 1000:3a78

undefined2 __cdecl16near FUN_1000_3a78(undefined2 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 unaff_DS;
  undefined4 uVar4;
  long lVar5;
  
  uVar3 = (undefined2)((ulong)param_2 >> 0x10);
  iVar2 = (int)param_2;
  if (*(char *)(iVar2 + 0x10) != '\x02') {
    return 1;
  }
  if (*(int *)(iVar2 + 0xc) == 0) {
    return 1;
  }
  uVar4 = FUN_1000_128e(iVar2,uVar3,0xbfe);
  iVar1 = FUN_1000_5556(uVar4);
  if (iVar1 == 0) {
    return 1;
  }
  iVar1 = FUN_1000_5556(uVar4,0xc04);
  if (iVar1 == 0) {
    return 1;
  }
  iVar1 = FUN_1000_5556(uVar4,0xc0a);
  if (iVar1 == 0) {
    return 1;
  }
  iVar1 = FUN_1000_5556(uVar4,0xc10);
  if (iVar1 == 0) {
    uVar3 = 1;
  }
  else {
    iVar1 = FUN_1000_5556(uVar4,0xc16);
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    else {
      lVar5 = FUN_1000_541a(0x7e5c,2,0x41,0,uVar4,0,4,*(undefined2 *)(iVar2 + 8),
                            *(undefined2 *)(iVar2 + 10));
      if (lVar5 == 0) {
        uVar3 = FUN_1000_2332(0xfff1,*(undefined2 *)0x1116);
      }
      else {
        uVar3 = 1;
      }
    }
  }
  return uVar3;
}


// ---- FUN_1000_3b7e @ 1000:3b7e

void __cdecl16near FUN_1000_3b7e(void)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  undefined2 local_4;
  
  for (local_4 = 0; local_4 < *(int *)0x1a3a; local_4 = local_4 + 1) {
    uVar1 = *(undefined2 *)0x119c;
    *(undefined2 *)(local_4 * 4 + 0x161c) = *(undefined2 *)0x119a;
    *(undefined2 *)(local_4 * 4 + 0x161e) = uVar1;
  }
  return;
}


// ---- FUN_1000_3bb4 @ 1000:3bb4

undefined2 __cdecl16near FUN_1000_3bb4(void)

{
  int iVar1;
  undefined2 unaff_DS;
  undefined2 local_4;
  
  iVar1 = FUN_1000_545c();
  if (iVar1 == 0) {
    FUN_1000_2332(0xfffc,*(undefined2 *)0x1106);
  }
  iVar1 = FUN_1000_5460();
  if (iVar1 == 0) {
    FUN_1000_2332(0xfffb,*(undefined2 *)0x1108);
  }
  for (local_4 = 0; local_4 < 0x1f; local_4 = local_4 + 1) {
    FUN_1000_541a(0x7e31,1,0,2,local_4);
  }
  FUN_1000_5414(0x7e5e,1,2,2,0xffff);
  FUN_1000_230e(*(undefined2 *)0x10f4);
  FUN_1000_5464();
  return 0;
}


// ---- FUN_1000_3c3e @ 1000:3c3e

undefined2 __cdecl16near FUN_1000_3c3e(int param_1,undefined2 *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  undefined2 uVar8;
  undefined2 *puVar9;
  undefined2 unaff_DS;
  undefined4 uVar10;
  long lVar11;
  int local_78;
  undefined1 local_76 [64];
  undefined4 local_36;
  int local_32;
  undefined2 local_30;
  undefined1 local_2e [4];
  undefined1 local_2a [40];
  
  local_32 = 0;
  *(undefined2 *)0x1aa2 = 0x4022;
  *(undefined2 *)0x120c = 0x40c2;
  *(undefined2 *)0x11b2 = 0x4142;
  *(undefined2 *)0x120e = 0x4240;
  *(undefined2 *)0x11b0 = 0x1d58;
  *(undefined2 *)0x11b4 = 0x1d7e;
  *(undefined2 *)0x11fe = 0x1dac;
  iVar6 = FUN_1000_545c();
  if (iVar6 == 0) {
    FUN_1000_2332(0xfffc,*(undefined2 *)0x1106);
  }
  iVar6 = FUN_1000_5460();
  if (iVar6 == 0) {
    FUN_1000_2332(0xfffb,*(undefined2 *)0x1108);
  }
  if (param_1 < 1) {
    FUN_1000_23a0();
  }
  puVar9 = (undefined2 *)param_2;
  uVar8 = (undefined2)((ulong)param_2 >> 0x10);
  if (param_1 < 2) {
    iVar6 = -1;
  }
  else {
    iVar6 = FUN_1000_5466(puVar9[2],puVar9[3]);
  }
  *(int *)0x120a = iVar6;
  if (0x1f < iVar6) {
    *(undefined2 *)0x120a = 0xffff;
  }
  local_36 = (undefined1 *)FUN_1000_562a(*param_2,puVar9[1],0x25);
  if (local_36 != (undefined1 *)0x0) {
    *local_36 = 0;
  }
  uVar10 = FUN_1000_220e(*param_2,puVar9[1],local_76);
  iVar6 = (int)((ulong)uVar10 >> 0x10);
  *(undefined2 *)0x11dc = (int)uVar10;
  *(int *)0x11de = iVar6;
  if (iVar6 == 0 && *(int *)0x11dc == 0) {
    FUN_1000_2332(0xfffa,*(undefined2 *)0x10f0,local_76);
  }
  if (local_36._2_2_ != 0 || (undefined1 *)local_36 != (undefined1 *)0x0) {
    *local_36 = 0x25;
  }
  *(uint *)0x18 = (uint)(local_36._2_2_ == 0 && (undefined1 *)local_36 == (undefined1 *)0x0);
  FUN_1000_230e(*(undefined2 *)0x10fe,local_76);
  iVar6 = FUN_1000_1fc8(local_2e);
  if (iVar6 == 0) {
    FUN_1000_2332(0xfff2,*(undefined2 *)0x10da,local_76);
  }
  lVar11 = FUN_1000_541a(0x7e0f,1,0,4,*(undefined2 *)0x1acc,*(undefined2 *)0x1ace);
  *(undefined2 *)0x1a18 = (int)lVar11;
  *(undefined2 *)0x1a1a = (int)((ulong)lVar11 >> 0x10);
  uVar5 = lVar11 + 0x3ff;
  iVar6 = (int)(uVar5 >> 0x10);
  *(uint *)0x1a50 = (uint)uVar5 & 0xfc00;
  *(int *)0x1a52 = iVar6;
  if (iVar6 == 0 && (uVar5 & 0xfc00) == 0) {
    FUN_1000_2332(0xfffd,*(undefined2 *)0x110c,*(undefined2 *)0x1acc,*(undefined2 *)0x1ace);
  }
  lVar11 = FUN_1000_541a(0x7e5a,1,2,2,*(undefined2 *)0x120a);
  if (lVar11 == 0) {
    FUN_1000_2332(0xfffd,*(undefined2 *)0x110e);
  }
  iVar6 = FUN_1000_024a();
  if (iVar6 == 0) {
    FUN_1000_5414(0x7e5b,0);
    FUN_1000_2332(0xfff2,*(undefined2 *)0x10da,local_76);
  }
  if (*(int *)0x11de != 0 || *(int *)0x11dc != 0) {
    FUN_1000_31c2(*(undefined2 *)0x11dc,*(undefined2 *)0x11de);
  }
  FUN_1000_5414(0x7e5b,0);
  *(undefined2 *)0x1a62 = 0;
  for (local_78 = 0; local_78 < *(int *)0x1a3a; local_78 = local_78 + 1) {
    uVar10 = FUN_1000_1dcc(*(undefined2 *)0x20,*(undefined2 *)0x22,local_78 * 0x28,
                           local_78 * 0x28 >> 0xf,0x28,local_2a);
    uVar8 = (undefined2)((ulong)uVar10 >> 0x10);
    iVar6 = (int)uVar10;
    iVar7 = FUN_1000_56f4(0xc24);
    if (iVar7 == 0) {
      uVar2 = *(uint *)(iVar6 + 8);
      iVar7 = *(int *)(iVar6 + 10);
      puVar1 = (uint *)(local_78 * 4 + 0x161c);
      uVar3 = *puVar1;
      iVar4 = *(int *)(local_78 * 4 + 0x161e);
      *(int *)0x1a54 = uVar2 + *puVar1;
      *(int *)0x1a56 = iVar7 + iVar4 + (uint)CARRY2(uVar2,uVar3);
      uVar8 = FUN_1000_5330(*(undefined2 *)(iVar6 + 0x10),*(undefined2 *)(iVar6 + 0x12),0x20,0);
      *(undefined2 *)0x1a60 = uVar8;
      local_32 = 1;
      iVar6 = FUN_1000_541a(0x7e30,2,2,2,*(undefined2 *)0x120a,1,0x10,0x1a54);
      *(int *)0x120a = iVar6;
      if (iVar6 == -1) {
        FUN_1000_2332(0xfffd,*(undefined2 *)0x110e);
      }
    }
    else {
      iVar7 = FUN_1000_56f4(0xc2d);
      if (iVar7 == 0) {
        local_30 = FUN_1000_5330(*(undefined2 *)(iVar6 + 0x10),*(undefined2 *)(iVar6 + 0x12),0x30,0)
        ;
        uVar2 = *(uint *)(local_78 * 4 + 0x161c);
        lVar11 = FUN_1000_541a(0x7e00,2,0,2,local_30,0,4,uVar2 + *(uint *)(iVar6 + 8),
                               *(int *)(local_78 * 4 + 0x161e) + *(int *)(iVar6 + 10) +
                               (uint)CARRY2(uVar2,*(uint *)(iVar6 + 8)));
        if (lVar11 == 0) {
          FUN_1000_2332(0xfffd,*(undefined2 *)0x110a);
        }
      }
    }
  }
  if (local_32 == 0) {
    *(undefined2 *)0x1a56 = 0;
    *(undefined2 *)0x1a54 = 0;
    *(undefined2 *)0x1a60 = 0;
    iVar6 = FUN_1000_541a(0x7e30,2,2,2,*(undefined2 *)0x120a,1,0x10,0x1a54);
    *(int *)0x120a = iVar6;
    if (iVar6 == -1) {
      FUN_1000_2332(0xfffd,*(undefined2 *)0x110e);
    }
  }
  if (*(int *)0x14e != 0) {
    FUN_1000_343a(0,*(undefined2 *)0x120a,*(undefined2 *)0x1a3a,*(undefined2 *)0x1a50,
                  *(undefined2 *)0x1a52,local_76);
  }
  if (1 < *(int *)0x14) {
    FUN_1000_230e(*(undefined2 *)0x10de,*(undefined2 *)0x120a);
  }
  FUN_1000_5464();
  return *(undefined2 *)0x120a;
}


// ---- FUN_1000_4022 @ 1000:4022

void __cdecl16near FUN_1000_4022(void)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  undefined4 uVar3;
  int local_4;
  
  for (local_4 = 0; local_4 < *(int *)0x1a3a; local_4 = local_4 + 1) {
    uVar1 = *(undefined2 *)0x1a52;
    *(undefined2 *)(local_4 * 4 + 0x161c) = *(undefined2 *)0x1a50;
    *(undefined2 *)(local_4 * 4 + 0x161e) = uVar1;
  }
  uVar1 = *(undefined2 *)0x1a1a;
  *(undefined2 *)0x1a58 = *(undefined2 *)0x1a18;
  *(undefined2 *)0x1a5a = uVar1;
  uVar1 = *(undefined2 *)0x1acc;
  uVar2 = *(undefined2 *)0x1ace;
  *(undefined2 *)0x1a5c = uVar1;
  *(undefined2 *)0x1a5e = uVar2;
  if (1 < *(int *)0x14) {
    FUN_1000_230e(*(undefined2 *)0x10f6,uVar1,uVar2);
    uVar3 = FUN_1000_541a(0x7e06,0);
    FUN_1000_230e(*(undefined2 *)0x10f8,uVar3);
    FUN_1000_230e(*(undefined2 *)0x10fc,*(undefined2 *)0x1a18,*(undefined2 *)0x1a1a);
    FUN_1000_230e(*(undefined2 *)0x10fa,*(undefined2 *)0x1a50,*(undefined2 *)0x1a52);
  }
  return;
}


// ---- FUN_1000_40c2 @ 1000:40c2

void __cdecl16near FUN_1000_40c2(undefined2 param_1,undefined4 param_2)

{
  int iVar1;
  undefined2 unaff_DS;
  undefined4 uVar2;
  
  uVar2 = FUN_1000_128e((int)param_2,param_2._2_2_);
  uVar2 = FUN_1000_541a(0x7e5d,1,0x41,0,uVar2);
  iVar1 = (int)((ulong)uVar2 >> 0x10);
  *(undefined2 *)((int)param_2 + 8) = (int)uVar2;
  *(int *)((int)param_2 + 10) = iVar1;
  if ((*(int *)((int)param_2 + 8) == -1) && (iVar1 == -1)) {
    uVar2 = FUN_1000_128e((int)param_2,param_2._2_2_,0xc38);
    iVar1 = FUN_1000_5556(uVar2);
    if (iVar1 != 0) {
      FUN_1000_5414(0x7e5b,0);
      uVar2 = FUN_1000_128e((int)param_2,param_2._2_2_);
      FUN_1000_2332(0xfff6,*(undefined2 *)0x1114,uVar2);
    }
  }
  return;
}


// ---- FUN_1000_4142 @ 1000:4142

undefined2 __cdecl16near FUN_1000_4142(undefined2 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 unaff_DS;
  undefined4 uVar4;
  long lVar5;
  
  uVar3 = (undefined2)((ulong)param_2 >> 0x10);
  iVar2 = (int)param_2;
  if (*(char *)(iVar2 + 0x10) != '\x02') {
    return 1;
  }
  if (*(int *)(iVar2 + 0xc) == 0) {
    return 1;
  }
  uVar4 = FUN_1000_128e(iVar2,uVar3,0xc3e);
  iVar1 = FUN_1000_5556(uVar4);
  if (iVar1 == 0) {
    return 1;
  }
  iVar1 = FUN_1000_5556(uVar4,0xc44);
  if (iVar1 == 0) {
    return 1;
  }
  iVar1 = FUN_1000_5556(uVar4,0xc4a);
  if (iVar1 == 0) {
    return 1;
  }
  iVar1 = FUN_1000_5556(uVar4,0xc50);
  if (iVar1 == 0) {
    uVar3 = 1;
  }
  else {
    iVar1 = FUN_1000_5556(uVar4,0xc56);
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    else {
      lVar5 = FUN_1000_541a(0x7e5c,2,0x41,0,uVar4,0,4,*(undefined2 *)(iVar2 + 8),
                            *(undefined2 *)(iVar2 + 10));
      if (lVar5 == 0) {
        uVar3 = FUN_1000_2332(0xfff1,*(undefined2 *)0x1116);
      }
      else {
        uVar3 = 1;
      }
    }
  }
  return uVar3;
}


// ---- FUN_1000_4240 @ 1000:4240

undefined2 __cdecl16near
FUN_1000_4240(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5)

{
  FUN_1000_544a(param_1,param_2,param_4,param_5,param_3,0);
  return 1;
}


// ---- FUN_1000_4266 @ 1000:4266

undefined2 __cdecl16near FUN_1000_4266(int param_1,undefined2 *param_2)

{
  uint *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  int iVar8;
  int iVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  undefined2 *puVar12;
  undefined2 *puVar13;
  undefined2 unaff_DS;
  undefined4 uVar14;
  long lVar15;
  undefined1 local_b0 [64];
  int local_70;
  undefined1 local_6e [64];
  undefined1 local_2e [4];
  undefined1 local_2a [40];
  
  *(undefined2 *)0x1aa2 = 0x464a;
  *(undefined2 *)0x120c = 0x46ea;
  *(undefined2 *)0x11b2 = 0x476a;
  *(undefined2 *)0x120e = 0x4868;
  *(undefined2 *)0x11b0 = 0x1d58;
  *(undefined2 *)0x11b4 = 0x1d7e;
  *(undefined2 *)0x11fe = 0x1dac;
  *(undefined2 *)0x18 = 1;
  *(undefined2 *)0x1a20 = 0xc000;
  *(undefined2 *)0x1a38 = 0;
  iVar8 = FUN_1000_545c();
  if (iVar8 == 0) {
    FUN_1000_2332(0xfffc,*(undefined2 *)0x1106);
  }
  iVar8 = FUN_1000_5460();
  if (iVar8 == 0) {
    FUN_1000_2332(0xfffb,*(undefined2 *)0x1108);
  }
  if (param_1 < 1) {
    FUN_1000_23a0();
  }
  if (param_1 < 2) {
    FUN_1000_55a2(local_b0);
    FUN_1000_22d0(local_b0);
  }
  else {
    FUN_1000_55a2(local_b0);
  }
  FUN_1000_5450(local_b0);
  iVar8 = FUN_1000_240a(local_6e);
  if (iVar8 != 0) {
    FUN_1000_230e(*(undefined2 *)0x1100,local_6e);
    return 0;
  }
  FUN_1000_55a2(local_b0);
  uVar14 = FUN_1000_311e(local_6e);
  iVar8 = (int)((ulong)uVar14 >> 0x10);
  *(undefined2 *)0x1210 = (int)uVar14;
  *(int *)0x1212 = iVar8;
  if (iVar8 == 0 && *(int *)0x1210 == 0) {
    FUN_1000_2332(0xfff8,*(undefined2 *)0x10ee,local_6e);
  }
  FUN_1000_21c2(1,local_6e);
  uVar14 = FUN_1000_220e(*param_2,((undefined2 *)param_2)[1],local_6e);
  iVar8 = (int)((ulong)uVar14 >> 0x10);
  *(undefined2 *)0x11dc = (int)uVar14;
  *(int *)0x11de = iVar8;
  if (iVar8 == 0 && *(int *)0x11dc == 0) {
    FUN_1000_2332(0xfffa,*(undefined2 *)0x10f0,local_6e);
  }
  FUN_1000_230e(*(undefined2 *)0x1102,local_b0);
  FUN_1000_4926(*(undefined2 *)0x1210,*(undefined2 *)0x1212,0x1a20);
  iVar8 = FUN_1000_1fc8(local_2e);
  if (iVar8 == 0) {
    FUN_1000_2332(0xfff2,*(undefined2 *)0x10da,local_6e);
  }
  lVar15 = FUN_1000_541a(0x7e0f,1,0,4,*(undefined2 *)0x1acc,*(undefined2 *)0x1ace);
  *(undefined2 *)0x1a18 = (int)lVar15;
  *(undefined2 *)0x1a1a = (int)((ulong)lVar15 >> 0x10);
  uVar7 = lVar15 + 0x3ff;
  iVar8 = (int)(uVar7 >> 0x10);
  *(uint *)0x1a50 = (uint)uVar7 & 0xfc00;
  *(int *)0x1a52 = iVar8;
  if (iVar8 == 0 && (uVar7 & 0xfc00) == 0) {
    FUN_1000_2332(0xfffd,*(undefined2 *)0x110c,*(undefined2 *)0x1acc,*(undefined2 *)0x1ace);
  }
  FUN_1000_541a(0x7e0e,1,0,4,*(undefined2 *)0x1a18,*(undefined2 *)0x1a1a);
  FUN_1000_541a(0x7e5a,1,2,2,0);
  iVar8 = FUN_1000_024a();
  if (iVar8 == 0) {
    FUN_1000_5414(0x7e5b,0);
    FUN_1000_2332(0xfff2,*(undefined2 *)0x10da,local_6e);
  }
  if (*(int *)0x11de != 0 || *(int *)0x11dc != 0) {
    FUN_1000_31c2(*(undefined2 *)0x11dc,*(undefined2 *)0x11de);
  }
  FUN_1000_5414(0x7e5b,0);
  FUN_1000_5414(0x7e5e,1,2,2,0);
  for (local_70 = 0; local_70 < *(int *)0x1a3a; local_70 = local_70 + 1) {
    uVar14 = FUN_1000_1dcc(*(undefined2 *)0x20,*(undefined2 *)0x22,local_70 * 0x28,
                           local_70 * 0x28 >> 0xf,0x28,local_2a);
    uVar10 = (undefined2)((ulong)uVar14 >> 0x10);
    iVar8 = (int)uVar14;
    iVar9 = FUN_1000_56f4(0xc6c);
    if (iVar9 == 0) {
      uVar4 = *(uint *)(iVar8 + 8);
      iVar9 = *(int *)(iVar8 + 10);
      puVar1 = (uint *)(local_70 * 4 + 0x161c);
      uVar5 = *puVar1;
      iVar6 = *(int *)(local_70 * 4 + 0x161e);
      *(int *)0x1a54 = uVar4 + *puVar1;
      *(int *)0x1a56 = iVar9 + iVar6 + (uint)CARRY2(uVar4,uVar5);
      uVar10 = FUN_1000_5330(*(undefined2 *)(iVar8 + 0x10),*(undefined2 *)(iVar8 + 0x12),0x20,0);
      *(undefined2 *)0x1a60 = uVar10;
    }
    else {
      iVar9 = FUN_1000_56f4(0xc75);
      if (iVar9 == 0) {
        uVar11 = FUN_1000_5330(*(undefined2 *)(iVar8 + 0x10),*(undefined2 *)(iVar8 + 0x12),0x30,0);
        *(undefined2 *)0x1a32 = uVar11;
        uVar4 = *(uint *)(local_70 * 4 + 0x161c);
        iVar9 = *(int *)(local_70 * 4 + 0x161e);
        uVar5 = *(uint *)(iVar8 + 8);
        iVar6 = *(int *)(iVar8 + 10);
        *(int *)0x1a34 = uVar4 + *(uint *)(iVar8 + 8);
        *(int *)0x1a36 = iVar9 + iVar6 + (uint)CARRY2(uVar4,uVar5);
      }
    }
  }
  puVar12 = (undefined2 *)*(undefined2 *)0xc36;
  puVar13 = (undefined2 *)0x1a22;
  for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
    puVar3 = puVar13;
    puVar13 = puVar13 + 1;
    puVar2 = puVar12;
    puVar12 = puVar12 + 1;
    *puVar3 = *puVar2;
  }
  FUN_1000_4926(*(undefined2 *)0x1210,*(undefined2 *)0x1212,0x1a20);
  if (*(int *)0x1212 != 0 || *(int *)0x1210 != 0) {
    FUN_1000_31c2(*(undefined2 *)0x1210,*(undefined2 *)0x1212);
  }
  FUN_1000_5464();
  return 0;
}


// ---- FUN_1000_464a @ 1000:464a

void __cdecl16near FUN_1000_464a(void)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  undefined4 uVar3;
  int local_4;
  
  for (local_4 = 0; local_4 < *(int *)0x1a3a; local_4 = local_4 + 1) {
    uVar1 = *(undefined2 *)0x1a52;
    *(undefined2 *)(local_4 * 4 + 0x161c) = *(undefined2 *)0x1a50;
    *(undefined2 *)(local_4 * 4 + 0x161e) = uVar1;
  }
  uVar1 = *(undefined2 *)0x1a1a;
  *(undefined2 *)0x1a58 = *(undefined2 *)0x1a18;
  *(undefined2 *)0x1a5a = uVar1;
  uVar1 = *(undefined2 *)0x1acc;
  uVar2 = *(undefined2 *)0x1ace;
  *(undefined2 *)0x1a5c = uVar1;
  *(undefined2 *)0x1a5e = uVar2;
  if (1 < *(int *)0x14) {
    FUN_1000_230e(*(undefined2 *)0x10f6,uVar1,uVar2);
    uVar3 = FUN_1000_541a(0x7e06,0);
    FUN_1000_230e(*(undefined2 *)0x10f8,uVar3);
    FUN_1000_230e(*(undefined2 *)0x10fc,*(undefined2 *)0x1a18,*(undefined2 *)0x1a1a);
    FUN_1000_230e(*(undefined2 *)0x10fa,*(undefined2 *)0x1a50,*(undefined2 *)0x1a52);
  }
  return;
}


// ---- FUN_1000_46ea @ 1000:46ea

void __cdecl16near FUN_1000_46ea(undefined2 param_1,undefined4 param_2)

{
  int iVar1;
  undefined2 unaff_DS;
  undefined4 uVar2;
  
  uVar2 = FUN_1000_128e((int)param_2,param_2._2_2_);
  uVar2 = FUN_1000_541a(0x7e5d,1,0x41,0,uVar2);
  iVar1 = (int)((ulong)uVar2 >> 0x10);
  *(undefined2 *)((int)param_2 + 8) = (int)uVar2;
  *(int *)((int)param_2 + 10) = iVar1;
  if ((*(int *)((int)param_2 + 8) == -1) && (iVar1 == -1)) {
    uVar2 = FUN_1000_128e((int)param_2,param_2._2_2_,0xc7e);
    iVar1 = FUN_1000_5556(uVar2);
    if (iVar1 != 0) {
      FUN_1000_5414(0x7e5b,0);
      uVar2 = FUN_1000_128e((int)param_2,param_2._2_2_);
      FUN_1000_2332(0xfff6,*(undefined2 *)0x1114,uVar2);
    }
  }
  return;
}


// ---- FUN_1000_476a @ 1000:476a

undefined2 __cdecl16near FUN_1000_476a(undefined2 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 unaff_DS;
  undefined4 uVar4;
  long lVar5;
  
  uVar3 = (undefined2)((ulong)param_2 >> 0x10);
  iVar2 = (int)param_2;
  if (*(char *)(iVar2 + 0x10) != '\x02') {
    return 1;
  }
  if (*(int *)(iVar2 + 0xc) == 0) {
    return 1;
  }
  uVar4 = FUN_1000_128e(iVar2,uVar3,0xc84);
  iVar1 = FUN_1000_5556(uVar4);
  if (iVar1 == 0) {
    return 1;
  }
  iVar1 = FUN_1000_5556(uVar4,0xc8a);
  if (iVar1 == 0) {
    return 1;
  }
  iVar1 = FUN_1000_5556(uVar4,0xc90);
  if (iVar1 == 0) {
    return 1;
  }
  iVar1 = FUN_1000_5556(uVar4,0xc96);
  if (iVar1 == 0) {
    uVar3 = 1;
  }
  else {
    iVar1 = FUN_1000_5556(uVar4,0xc9c);
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    else {
      lVar5 = FUN_1000_541a(0x7e5c,2,0x41,0,uVar4,0,4,*(undefined2 *)(iVar2 + 8),
                            *(undefined2 *)(iVar2 + 10));
      if (lVar5 == 0) {
        uVar3 = FUN_1000_2332(0xfff1,*(undefined2 *)0x1116);
      }
      else {
        uVar3 = 1;
      }
    }
  }
  return uVar3;
}


// ---- FUN_1000_4868 @ 1000:4868

undefined2 __cdecl16near FUN_1000_4868(int *param_1,int param_2)

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
  FUN_1000_3302(&stack0x0008);
  if (local_4 == 0) {
    FUN_1000_57ec(-param_2,*(undefined2 *)0x1210,*(undefined2 *)0x1212);
    FUN_1000_57ec(iVar1,*(undefined2 *)0x1210,*(undefined2 *)0x1212);
  }
  else {
    FUN_1000_57ec(param_2,*(undefined2 *)0x1210,*(undefined2 *)0x1212);
    FUN_1000_3302((int *)param_1,(int)((ulong)param_1 >> 0x10),2,param_2,*(undefined2 *)0x1210,
                  *(undefined2 *)0x1212);
  }
  *(int *)0x1a38 = *(int *)0x1a38 + 1;
  return 1;
}


// ---- FUN_1000_4926 @ 1000:4926

undefined2 __cdecl16near
FUN_1000_4926(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  int iVar1;
  
  FUN_1000_5824(param_1,param_2);
  iVar1 = FUN_1000_3302(param_3,param_4,0x1a,1,param_1,param_2);
  if (iVar1 == 0) {
    return 0;
  }
  return 1;
}


// ---- FUN_1000_4968 @ 1000:4968

undefined2 __cdecl16near FUN_1000_4968(int param_1,undefined2 *param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 *puVar3;
  undefined2 unaff_DS;
  long lVar4;
  int local_6c;
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
  
  iVar1 = FUN_1000_545c();
  if (iVar1 == 0) {
    FUN_1000_2332(0xfffc,*(undefined2 *)0x1106);
  }
  iVar1 = FUN_1000_5460();
  if (iVar1 == 0) {
    FUN_1000_2332(0xfffb,*(undefined2 *)0x1108);
  }
  if (param_1 < 1) {
    FUN_1000_23a0();
  }
  puVar3 = (undefined2 *)param_2;
  uVar2 = (undefined2)((ulong)param_2 >> 0x10);
  if (param_1 < 2) {
    local_6c = -1;
  }
  else {
    local_6c = FUN_1000_5466(puVar3[2],puVar3[3]);
  }
  if (0x1f < local_6c) {
    local_6c = -1;
  }
  lVar4 = FUN_1000_220e(*param_2,puVar3[1],local_60);
  if (lVar4 == 0) {
    FUN_1000_2332(0xfff8,*(undefined2 *)0x10f0,local_60);
  }
  FUN_1000_230e(*(undefined2 *)0x1104,local_60);
  iVar1 = FUN_1000_326e(&local_1c);
  if (iVar1 == 0) {
    FUN_1000_2332(0xfff8,*(undefined2 *)0x1112);
  }
  if (local_1c != -0x4000) {
    FUN_1000_2332(0xfff8,*(undefined2 *)0x1112);
  }
  local_20 = FUN_1000_541a(0x7e0f,1,0,4,local_12,local_10);
  if (local_20 == 0) {
    FUN_1000_2332(0xfffd,*(undefined2 *)0x110c,local_12,local_10);
  }
  else if (local_20 != CONCAT22(local_14,local_16)) {
    FUN_1000_541a(0x7e0e,1,0,4,local_20);
    FUN_1000_2332(0xfffd,*(undefined2 *)0x10d8);
  }
  for (local_66 = 0; local_66 < local_4; local_66 = local_66 + 1) {
    FUN_1000_326e(&local_20);
    local_6a = FUN_1000_57b2(lVar4);
    if (local_6a < 0) {
      uVar2 = FUN_1000_57b2(lVar4);
      local_6a = -local_6a;
      while (local_6a != 0) {
        FUN_1000_5420(local_20,0x10,uVar2,0);
        local_20 = local_20 + 0x10;
        local_6a = local_6a + -1;
      }
    }
    else {
      while (local_6a != 0) {
        iVar1 = FUN_1000_57b2(lVar4);
        FUN_1000_5420(local_20,0x10,iVar1,iVar1 >> 0xf);
        local_20 = local_20 + 0x10;
        local_6a = local_6a + -1;
      }
    }
  }
  if (lVar4 != 0) {
    FUN_1000_31c2(lVar4);
  }
  uVar2 = FUN_1000_541a(0x7e30,2,2,2,local_6c,1,0x10,local_1a);
  if (local_a != 0) {
    FUN_1000_541a(0x7e00,2,0,2,local_a,0,4,local_8,local_6);
  }
  if (1 < *(int *)0x14) {
    FUN_1000_230e(*(undefined2 *)0x10de,uVar2);
  }
  FUN_1000_5464();
  return uVar2;
}


// ---- FUN_1000_4c0c @ 1000:4c0c

undefined4 __cdecl16near FUN_1000_4c0c(undefined2 param_1,undefined2 param_2)

{
  int iVar1;
  undefined2 unaff_DS;
  undefined4 uVar2;
  undefined2 local_a;
  undefined2 local_8;
  undefined2 local_6;
  undefined2 local_4;
  
  *(undefined2 *)0x1aa2 = 0x4cee;
  *(undefined2 *)0x120c = 0x4d1e;
  *(undefined2 *)0x11b2 = 0x4d20;
  *(undefined2 *)0x120e = 0x4d26;
  *(undefined2 *)0x11b0 = 0x1ee0;
  *(undefined2 *)0x11b4 = 0x1f54;
  *(undefined2 *)0x11fe = 0x1fc6;
  *(undefined2 *)0x18 = 0;
  uVar2 = FUN_1000_311e(param_1,param_2,0xcaa);
  iVar1 = (int)((ulong)uVar2 >> 0x10);
  *(undefined2 *)0x11dc = (int)uVar2;
  *(int *)0x11de = iVar1;
  if (iVar1 == 0 && *(int *)0x11dc == 0) {
    return 0;
  }
  iVar1 = FUN_1000_1fc8(&local_a);
  if (iVar1 == 0) {
    return 0;
  }
  FUN_1000_5456(local_6,local_4);
  local_a = local_4;
  FUN_1000_1e7c(local_4,local_8,local_6);
  local_a = 0x4ca5;
  iVar1 = FUN_1000_024a();
  if (iVar1 == 0) {
    if (*(int *)0x11de != 0 || *(int *)0x11dc != 0) {
      local_a = *(undefined2 *)0x11de;
      FUN_1000_31c2(*(undefined2 *)0x11dc);
    }
    return 0;
  }
  if (*(int *)0x11de != 0 || *(int *)0x11dc != 0) {
    local_a = *(undefined2 *)0x11de;
    FUN_1000_31c2(*(undefined2 *)0x11dc);
  }
  return CONCAT22(*(undefined2 *)0x1216,*(undefined2 *)0x1214);
}


// ---- FUN_1000_4cee @ 1000:4cee

void __cdecl16near FUN_1000_4cee(void)

{
  undefined2 unaff_DS;
  undefined2 local_4;
  
  for (local_4 = 0; local_4 < *(int *)0x1a3a; local_4 = local_4 + 1) {
    *(undefined2 *)(local_4 * 4 + 0x161e) = 0;
    *(undefined2 *)(local_4 * 4 + 0x161c) = 0;
  }
  return;
}


// ---- FUN_1000_4d26 @ 1000:4d26

undefined2 __cdecl16near
FUN_1000_4d26(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5)

{
  FUN_1000_544a(param_1,param_2,param_4,param_5,param_3,0);
  return 1;
}


// ---- FUN_1000_4d4c @ 1000:4d4c

undefined2 __cdecl16near FUN_1000_4d4c(void)

{
  int iVar1;
  undefined2 unaff_DS;
  undefined4 uVar2;
  undefined2 uVar3;
  undefined2 local_52;
  undefined2 in_stack_0000ffb0;
  undefined1 local_4e [64];
  undefined1 local_e [4];
  undefined2 local_a;
  undefined2 local_8;
  undefined2 local_6;
  
  *(undefined2 *)0x1aa2 = 0x4eb0;
  *(undefined2 *)0x120c = 0x4ee6;
  *(undefined2 *)0x11b2 = 0x4ee8;
  *(undefined2 *)0x120e = 0x4eee;
  *(undefined2 *)0x11b0 = 0x1ee0;
  *(undefined2 *)0x11b4 = 0x1f54;
  *(undefined2 *)0x11fe = 0x1fc6;
  *(undefined2 *)0x18 = 0;
  *(undefined2 *)0x14 = 0;
  FUN_1000_5450(0xcb3);
  uVar2 = FUN_1000_311e(local_4e);
  iVar1 = (int)((ulong)uVar2 >> 0x10);
  *(undefined2 *)0x11dc = (int)uVar2;
  *(int *)0x11de = iVar1;
  if (iVar1 == 0 && *(int *)0x11dc == 0) {
    return 0;
  }
  iVar1 = FUN_1000_1fc8(local_e);
  if (iVar1 != 0) {
    uVar2 = FUN_1000_5456(local_52,in_stack_0000ffb0);
    *(undefined2 *)0x119e = (int)uVar2;
    *(undefined2 *)0x11a0 = (int)((ulong)uVar2 >> 0x10);
    FUN_1000_1e7c(uVar2,local_52,in_stack_0000ffb0);
    iVar1 = FUN_1000_024a();
    if (iVar1 != 0) {
      if (*(int *)0x11de != 0 || *(int *)0x11dc != 0) {
        FUN_1000_31c2(*(undefined2 *)0x11dc,*(undefined2 *)0x11de);
      }
      if (*(int *)0x1216 == 0 && *(int *)0x1214 == 0) {
        uVar3 = 0;
      }
      else {
        FUN_1000_543e(*(undefined2 *)0x1214,*(undefined2 *)0x1216);
        iVar1 = FUN_1000_5444();
        uVar3 = 0;
        if (iVar1 != 0) {
          local_8 = 0;
          local_a = 0;
          local_6 = 0x119e;
          uVar3 = 2;
          FUN_1000_38e8();
          if (*(int *)0x14e != 0) {
            uVar3 = *(undefined2 *)0x11a0;
            FUN_1000_343a(1,0x1f,*(undefined2 *)0x1a3a,*(undefined2 *)0x119e);
          }
        }
      }
      return uVar3;
    }
    if (*(int *)0x11de != 0 || *(int *)0x11dc != 0) {
      FUN_1000_31c2(*(undefined2 *)0x11dc,*(undefined2 *)0x11de);
    }
    return 0;
  }
  return 0;
}


// ---- FUN_1000_4eb0 @ 1000:4eb0

void __cdecl16near FUN_1000_4eb0(void)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  undefined2 local_4;
  
  for (local_4 = 0; local_4 < *(int *)0x1a3a; local_4 = local_4 + 1) {
    uVar1 = *(undefined2 *)0x11a0;
    *(undefined2 *)(local_4 * 4 + 0x161c) = *(undefined2 *)0x119e;
    *(undefined2 *)(local_4 * 4 + 0x161e) = uVar1;
  }
  return;
}


// ---- FUN_1000_4eee @ 1000:4eee

undefined2 __cdecl16near
FUN_1000_4eee(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5)

{
  FUN_1000_544a(param_1,param_2,param_4,param_5,param_3,0);
  return 1;
}


// ---- FUN_1000_4f20 @ 1000:4f20

void __cdecl16far FUN_1000_4f20(void)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined2 uVar5;
  int iVar6;
  undefined2 uVar7;
  
  uVar5 = DAT_1000_2a29;
  iVar4 = *(int *)0x53e;
  FUN_1000_519e(0x8a6,DAT_1000_2a29,0x6a4,DAT_1000_2a29,0,0,0);
  iVar6 = FUN_1000_3393(0x6a4,uVar5,0);
  if (iVar6 != 0) {
    *(int *)0x8a4 = iVar6;
    FUN_1000_33d4(*(undefined2 *)0x8a4,0x6a4,uVar5,0x18);
    FUN_1000_33ec(*(undefined2 *)0x8a4,iVar4 * 4 + 0x18,0,0);
    uVar7 = FUN_1000_33bd(*(undefined2 *)0x8a4);
    *(undefined2 *)0xcc1 = uVar7;
    uVar7 = FUN_1000_33bd(*(undefined2 *)0x8a4);
    *(undefined2 *)0xcc3 = uVar7;
    FUN_1000_33ec(*(undefined2 *)0x8a4,*(undefined2 *)0xcc1,*(undefined2 *)0xcc3,0);
    FUN_1000_33d4(*(undefined2 *)0x8a4,0x6a4,uVar5,0x24);
    *(undefined2 *)0x48a = *(undefined2 *)0x6aa;
    *(undefined2 *)0x48c = *(undefined2 *)0x6ac;
    *(undefined2 *)0x4ac = *(undefined2 *)0x6ae;
    uVar3 = *(uint *)0xcc1;
    iVar4 = *(int *)0xcc3;
    puVar1 = (uint *)0x6b0;
    uVar2 = *puVar1;
    *puVar1 = *puVar1 + uVar3;
    *(int *)0x6b2 = *(int *)0x6b2 + iVar4 + (uint)CARRY2(uVar2,uVar3);
    puVar1 = (uint *)0x6b4;
    uVar2 = *puVar1;
    *puVar1 = *puVar1 + uVar3;
    *(int *)0x6b6 = *(int *)0x6b6 + iVar4 + (uint)CARRY2(uVar2,uVar3);
    puVar1 = (uint *)0x6b8;
    uVar2 = *puVar1;
    *puVar1 = *puVar1 + uVar3;
    *(int *)0x6ba = *(int *)0x6ba + iVar4 + (uint)CARRY2(uVar2,uVar3);
    puVar1 = (uint *)0x6bc;
    uVar2 = *puVar1;
    *puVar1 = *puVar1 + uVar3;
    *(int *)0x6be = *(int *)0x6be + iVar4 + (uint)CARRY2(uVar2,uVar3);
    puVar1 = (uint *)0x6c0;
    uVar2 = *puVar1;
    *puVar1 = *puVar1 + uVar3;
    *(int *)0x6c2 = *(int *)0x6c2 + iVar4 + (uint)CARRY2(uVar2,uVar3);
    puVar1 = (uint *)0x6c4;
    uVar2 = *puVar1;
    *puVar1 = *puVar1 + uVar3;
    *(int *)0x6c6 = *(int *)0x6c6 + iVar4 + (uint)CARRY2(uVar2,uVar3);
    FUN_1000_33ec(*(undefined2 *)0x8a4,*(undefined2 *)0x6b4,*(undefined2 *)0x6b6,0);
    uVar7 = FUN_1000_33bd(*(undefined2 *)0x8a4);
    *(undefined2 *)0x470 = uVar7;
    uVar7 = FUN_1000_33bd(*(undefined2 *)0x8a4);
    *(undefined2 *)0x472 = uVar7;
    uVar7 = FUN_1000_33bd(*(undefined2 *)0x8a4);
    *(undefined2 *)0x476 = uVar7;
    uVar7 = FUN_1000_33bd(*(undefined2 *)0x8a4);
    *(undefined2 *)0x474 = uVar7;
    FUN_1000_33d4(*(undefined2 *)0x8a4,0x47c,uVar5,0xe);
    FUN_1000_33d4(*(undefined2 *)0x8a4,0x496,uVar5,0x10);
    FUN_1000_33d4(*(undefined2 *)0x8a4,0x48e,uVar5,8);
    FUN_1000_33d4(*(undefined2 *)0x8a4,0x4ae,uVar5,0x20);
    FUN_1000_33ec(*(undefined2 *)0x8a4,*(undefined2 *)0x6b8,*(undefined2 *)0x6ba,0);
    FUN_1000_33d4(*(undefined2 *)0x8a4,0x4a6,uVar5,6);
    FUN_1000_33d4(*(undefined2 *)0x8a4,0x4ce,uVar5,0x1e);
    FUN_1000_33ec(*(undefined2 *)0x8a4,*(undefined2 *)0x6bc,*(undefined2 *)0x6be,0);
    FUN_1000_33d4(*(undefined2 *)0x8a4,0x4ec,uVar5,8);
    FUN_1000_33ec(*(undefined2 *)0x8a4,*(undefined2 *)0x6c0,*(undefined2 *)0x6c2,0);
    FUN_1000_33d4(*(undefined2 *)0x8a4,0x4f4,uVar5,8);
    FUN_1000_33ec(*(undefined2 *)0x8a4,*(undefined2 *)0x6b0,*(undefined2 *)0x6b2,0);
    FUN_1000_33d4(*(undefined2 *)0x8a4,0x4fe,uVar5,0x14);
    FUN_1000_33ec(*(undefined2 *)0x8a4,*(undefined2 *)0x6c4,*(undefined2 *)0x6c6,0);
    FUN_1000_33d4(*(undefined2 *)0x8a4,0x4fc,uVar5,2);
    FUN_1000_33ac(*(undefined2 *)0x8a4);
  }
  return;
}


// ---- FUN_1000_519e @ 1000:519e

void __cdecl16far
FUN_1000_519e(undefined2 param_1,undefined2 param_2,undefined1 *param_3,undefined2 param_4,
             uint param_5,uint param_6)

{
  int iVar1;
  undefined1 *puVar2;
  uint uVar3;
  long lVar4;
  
  *param_3 = 0;
  lVar4 = FUN_1000_562a(param_1,param_2,0x5c);
  if ((lVar4 == 0) && (lVar4 = FUN_1000_562a(param_1,param_2,0x3a), lVar4 == 0)) {
    lVar4 = FUN_1000_542c(param_4);
    if (lVar4 != 0) {
      FUN_1000_55a2((undefined1 *)param_3,param_3._2_2_,lVar4);
      iVar1 = FUN_1000_578a((undefined1 *)param_3,param_3._2_2_);
      puVar2 = (undefined1 *)param_3 + iVar1;
      if (puVar2[-1] != '\\') {
        *puVar2 = 0x5c;
        puVar2[1] = 0;
      }
    }
    FUN_1000_550c((undefined1 *)param_3,param_3._2_2_,param_1,param_2);
  }
  else {
    FUN_1000_550c((undefined1 *)param_3,param_3._2_2_,param_1,param_2);
  }
  if ((param_6 | param_5) != 0) {
    lVar4 = FUN_1000_562a((undefined1 *)param_3,param_3._2_2_,
                          CONCAT11((char)((param_6 | param_5) >> 8),0x2e));
    if ((lVar4 == 0) ||
       (uVar3 = FUN_1000_562a((undefined1 *)param_3,param_3._2_2_,0x5c), (uint)lVar4 < uVar3)) {
      FUN_1000_550c((undefined1 *)param_3,param_3._2_2_,param_5,param_6);
    }
  }
  return;
}


// ---- FUN_1000_52b2 @ 1000:52b2

void __cdecl16near FUN_1000_52b2(undefined2 *param_1,uint param_2)

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


// ---- FUN_1000_52d7 @ 1000:52d7

void __cdecl16near FUN_1000_52d7(undefined2 *param_1,uint param_2)

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


// ---- FUN_1000_52fc @ 1000:52fc

long FUN_1000_52fc(uint param_1,int param_2,uint param_3,int param_4)

{
  if (param_4 == 0 && param_2 == 0) {
    return (ulong)param_1 * (ulong)param_3;
  }
  return CONCAT22((int)((ulong)param_1 * (ulong)param_3 >> 0x10) +
                  param_2 * param_3 + param_1 * param_4,(int)((ulong)param_1 * (ulong)param_3));
}


// ---- FUN_1000_5330 @ 1000:5330

undefined4 FUN_1000_5330(uint param_1,uint param_2,uint param_3,uint param_4)

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


// ---- FUN_1000_53cc @ 1000:53cc

undefined2 __cdecl16near FUN_1000_53cc(undefined2 *param_1)

{
  undefined2 *puVar1;
  undefined2 unaff_BP;
  undefined2 unaff_SI;
  undefined2 unaff_DI;
  undefined2 unaff_DS;
  undefined2 uVar2;
  undefined2 in_stack_00000000;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  puVar1 = (undefined2 *)param_1;
  *param_1 = unaff_BP;
  puVar1[1] = unaff_DI;
  puVar1[2] = unaff_SI;
  puVar1[3] = register0x00000010;
  puVar1[4] = in_stack_00000000;
  puVar1[5] = unaff_DS;
  return 0;
}


// ---- FUN_1000_53f0 @ 1000:53f0

int __cdecl16near FUN_1000_53f0(undefined4 param_1,int param_2)

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


// ---- FUN_1000_5414 @ 1000:5414

void FUN_1000_5414(void)

{
  FUN_1000_25d4();
  return;
}


// ---- FUN_1000_541a @ 1000:541a

void FUN_1000_541a(void)

{
  FUN_1000_2684();
  return;
}


// ---- FUN_1000_5420 @ 1000:5420

void FUN_1000_5420(void)

{
  FUN_1000_7459();
  return;
}


// ---- FUN_1000_5426 @ 1000:5426

void FUN_1000_5426(void)

{
  FUN_1000_7c44();
  return;
}


// ---- FUN_1000_542c @ 1000:542c

void FUN_1000_542c(void)

{
  FUN_1000_2d13();
  return;
}


// ---- FUN_1000_5438 @ 1000:5438

void FUN_1000_5438(void)

{
  FUN_1000_796c();
  return;
}


// ---- FUN_1000_543e @ 1000:543e

void FUN_1000_543e(void)

{
  FUN_1000_7fdc();
  return;
}


// ---- FUN_1000_5444 @ 1000:5444

void FUN_1000_5444(void)

{
  FUN_1000_717e();
  return;
}


// ---- FUN_1000_544a @ 1000:544a

void FUN_1000_544a(void)

{
  FUN_1000_77e4();
  return;
}


// ---- FUN_1000_5450 @ 1000:5450

void FUN_1000_5450(void)

{
  FUN_1000_519e();
  return;
}


// ---- FUN_1000_5456 @ 1000:5456

void FUN_1000_5456(void)

{
  FUN_1000_7f05();
  return;
}


// ---- FUN_1000_545c @ 1000:545c

undefined2 __cdecl16near FUN_1000_545c(void)

{
  return 1;
}


// ---- FUN_1000_5460 @ 1000:5460

undefined2 __cdecl16near FUN_1000_5460(void)

{
  return 1;
}


// ---- FUN_1000_5464 @ 1000:5464

void __cdecl16near FUN_1000_5464(void)

{
  return;
}


// ---- FUN_1000_5465 @ 1000:5465

void __cdecl16near FUN_1000_5465(void)

{
  return;
}


// ---- FUN_1000_5466 @ 1000:5466

undefined4 __cdecl16near FUN_1000_5466(char *param_1,undefined2 param_2)

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
    if ((*(byte *)(*local_a + 0x1119) & 8) == 0) break;
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
  while ((*(byte *)(local_6 + 0x1119) & 4) != 0) {
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


// ---- FUN_1000_550c @ 1000:550c

char * __cdecl16near FUN_1000_550c(char *param_1,char *param_2)

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


// ---- FUN_1000_5556 @ 1000:5556

int __cdecl16near FUN_1000_5556(char *param_1,char *param_2)

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


// ---- FUN_1000_55a2 @ 1000:55a2

char * __cdecl16near FUN_1000_55a2(char *param_1,char *param_2)

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


// ---- FUN_1000_55da @ 1000:55da

char * __cdecl16near FUN_1000_55da(char *param_1,char *param_2,int param_3)

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


// ---- FUN_1000_562a @ 1000:562a

char * __cdecl16near FUN_1000_562a(char *param_1,char param_2)

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


// ---- FUN_1000_5670 @ 1000:5670

int __cdecl16near FUN_1000_5670(char *param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  undefined2 unaff_DS;
  
  do {
    if ((*(byte *)(*param_1 + 0x1119) & 1) == 0) {
      cVar1 = *param_1;
    }
    else {
      cVar1 = *param_1 + ' ';
    }
    if ((*(byte *)(*param_2 + 0x1119) & 1) == 0) {
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


// ---- FUN_1000_56f4 @ 1000:56f4

int __cdecl16near FUN_1000_56f4(char *param_1,char *param_2,int param_3)

{
  undefined2 unaff_DS;
  char local_6;
  char local_4;
  
  if (param_3 < 1) {
    return 0;
  }
  while (param_3 = param_3 + -1, -1 < param_3) {
    if ((*(byte *)(*param_1 + 0x1119) & 1) == 0) {
      local_4 = *param_1;
    }
    else {
      local_4 = *param_1 + ' ';
    }
    if ((*(byte *)(*param_2 + 0x1119) & 1) == 0) {
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


// ---- FUN_1000_578a @ 1000:578a

int __cdecl16near FUN_1000_578a(char *param_1)

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


// ---- FUN_1000_57b2 @ 1000:57b2

undefined2 __cdecl16near FUN_1000_57b2(void)

{
  int iVar1;
  undefined2 local_4;
  
  iVar1 = FUN_1000_326e(&local_4);
  if (iVar1 != 0) {
    return local_4;
  }
  return 0xffff;
}


// ---- FUN_1000_57ec @ 1000:57ec

undefined2 __cdecl16near FUN_1000_57ec(undefined2 param_1,undefined2 param_2,undefined2 param_3)

{
  int iVar1;
  
  iVar1 = FUN_1000_3302(&param_1);
  if (iVar1 != 0) {
    return param_1;
  }
  return 0xffff;
}


// ---- FUN_1000_5824 @ 1000:5824

void __cdecl16near FUN_1000_5824(undefined2 param_1,undefined2 param_2)

{
  FUN_1000_3202(param_1,param_2,0,0,0);
  return;
}


// ---- FUN_1000_583a @ 1000:583a

undefined4 __cdecl16near FUN_1000_583a(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined2 in_AX;
  int in_CX;
  undefined2 in_DX;
  
  do {
    out(0x43,0);
    uVar1 = in(0x40);
    uVar2 = in(0x40);
    do {
      out(0x43,0);
      uVar3 = in(0x40);
      uVar4 = in(0x40);
    } while ((uint)(CONCAT11(uVar2,uVar1) - CONCAT11(uVar4,uVar3)) < 0x952);
    in_CX = in_CX + -1;
  } while (in_CX != 0);
  return CONCAT22(in_DX,in_AX);
}


// ---- FUN_1000_5871 @ 1000:5871

undefined2 __cdecl16near FUN_1000_5871(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined2 in_AX;
  undefined2 unaff_DS;
  
  out(0x43,0);
  uVar1 = in(0x40);
  uVar2 = in(0x40);
  *(undefined2 *)0x19d = CONCAT11(uVar2,uVar1);
  return in_AX;
}


// ---- FUN_1000_5887 @ 1000:5887

undefined2 __cdecl16near FUN_1000_5887(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined2 in_AX;
  undefined2 unaff_DS;
  
  out(0x43,0);
  uVar1 = in(0x40);
  uVar2 = in(0x40);
  if (0x951 < (uint)(*(int *)0x19d - CONCAT11(uVar2,uVar1))) {
    *(int *)0x19f = *(int *)0x19f + -1;
    out(0x43,0);
    uVar1 = in(0x40);
    uVar2 = in(0x40);
    *(undefined2 *)0x19d = CONCAT11(uVar2,uVar1);
  }
  return in_AX;
}


// ---- FUN_1000_58c0 @ 1000:58c0

void __cdecl16near FUN_1000_58c0(void)

{
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  
  *(undefined2 *)*(undefined2 *)0x5ee = 2;
  return;
}


// ---- FUN_1000_58c9 @ 1000:58c9

void __cdecl16near FUN_1000_58c9(void)

{
  int iVar1;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  undefined1 in_CF;
  
code_r0x000158c9:
  do {
    FUN_1000_59e6();
    if (!(bool)in_CF) {
      return;
    }
    *(undefined2 *)0x19f = *(undefined2 *)0x168;
    FUN_1000_5871();
    do {
      FUN_1000_80d8();
      if (!(bool)in_CF) goto code_r0x000158c9;
      FUN_1000_5887();
      in_CF = 0;
    } while (*(int *)0x19f != 0);
    if (*(int *)0x15c == 0x1000) {
      iVar1 = (*(code *)*(undefined2 *)0x15a)(0x1000);
    }
    else {
      iVar1 = (*(code *)*(undefined2 *)0x15a)(0x1000,*(undefined2 *)0x158,2,unaff_ES);
    }
    in_CF = 0;
    unaff_DS = DAT_1000_2a29;
    if (iVar1 == 0) {
      return;
    }
  } while( true );
}


// ---- FUN_1000_5922 @ 1000:5922

void __cdecl16near FUN_1000_5922(void)

{
  int iVar1;
  uint uVar2;
  undefined2 uVar3;
  undefined2 unaff_DS;
  undefined1 uVar4;
  
  *(int *)0x152 = *(int *)0x152 + 1;
  if (*(int *)0x152 < *(int *)0x160) {
    iVar1 = *(uint *)0x5e0 + *(uint *)0x164;
    uVar2 = *(int *)0x5e2 + *(int *)0x166 + (uint)CARRY2(*(uint *)0x5e0,*(uint *)0x164);
  }
  else {
    *(undefined2 *)0x152 = 0;
    iVar1 = *(int *)0x154;
    uVar2 = *(uint *)0x156;
  }
  *(int *)0x5e0 = iVar1;
  *(uint *)0x5e2 = uVar2;
  uVar3 = DAT_1000_2a25;
  out(*(int *)0x5f6,(byte)uVar2);
  out(*(int *)0x5f6 + 1,(char)(uVar2 >> 8));
  uVar2 = (uint)(((ulong)(((byte)uVar2 >> 1 & 1) != 0) << 0x10 |
                 (ulong)(CONCAT12((uVar2 & 1) != 0,iVar1) >> 1)) >> 1) >> 1;
  *(uint *)0x5ec = uVar2;
  *(int *)0x5ee = uVar2 + 2;
  *(uint *)0x5f0 = uVar2 + 4;
  uVar4 = 0xfffd < uVar2 + 4;
  *(int *)0x5f2 = uVar2 + 6;
LAB_1000_598d:
  do {
    FUN_1000_59e6();
    if (!(bool)uVar4) {
      return;
    }
    *(undefined2 *)0x19f = *(undefined2 *)0x168;
    FUN_1000_5871();
    do {
      FUN_1000_80d8();
      if (!(bool)uVar4) goto LAB_1000_598d;
      FUN_1000_5887();
      uVar4 = 0;
    } while (*(int *)0x19f != 0);
    if (*(int *)0x15c == 0x1000) {
      iVar1 = (*(code *)*(undefined2 *)0x15a)(0x1000);
    }
    else {
      iVar1 = (*(code *)*(undefined2 *)0x15a)(0x1000,*(undefined2 *)0x158,1,uVar3);
    }
    uVar4 = 0;
    unaff_DS = DAT_1000_2a29;
    if (iVar1 == 0) {
      return;
    }
  } while( true );
}


// ---- FUN_1000_59e6 @ 1000:59e6

void __cdecl16near FUN_1000_59e6(void)

{
  uint uVar1;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  
  *(undefined2 *)*(undefined2 *)0x5ec = 2;
  if ((char)*(undefined2 *)*(undefined2 *)0x5ee == '\x01') {
    *(undefined2 *)*(undefined2 *)0x5ec = 1;
    return;
  }
  *(undefined2 *)*(undefined2 *)0x5ec = 3;
  if (*(int *)0x8 != 0) {
    uVar1 = *(uint *)0x6;
    out(*(int *)0x5f4,(byte)uVar1);
    out(*(int *)0x5f4 + 1,(char)(uVar1 >> 8));
    if (*(int *)((uint)(((ulong)(((byte)uVar1 >> 1 & 1) != 0) << 0x10 |
                        (ulong)(CONCAT12((uVar1 & 1) != 0,*(undefined2 *)0x4) >> 1)) >> 1) >> 1) !=
        0) {
      FUN_1000_0142();
    }
  }
  return;
}


// ---- FUN_1000_5ade @ 1000:5ade

void __cdecl16near FUN_1000_5ade(void)

{
  char *pcVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int unaff_BP;
  uint *puVar9;
  uint *puVar10;
  char *pcVar11;
  uint *puVar12;
  uint *puVar13;
  uint *puVar14;
  undefined2 unaff_ES;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  
  *(undefined2 *)*(undefined2 *)0x5f0 = *(undefined2 *)(unaff_BP + 0x12);
  piVar5 = (int *)*(int *)0x5f2;
  iVar8 = *(int *)(unaff_BP + 0x14);
  *piVar5 = iVar8;
  if (iVar8 != 0) {
    puVar9 = (uint *)(unaff_BP + 0x16);
    puVar13 = (uint *)(piVar5 + 1);
    do {
      uVar6 = *puVar9;
      puVar14 = puVar13 + 1;
      *puVar13 = uVar6;
      if ((uVar6 & 1) == 0) {
        puVar10 = puVar9 + 2;
        uVar6 = puVar9[1] + 1;
        *puVar14 = uVar6 & 0xfffe;
        puVar14 = puVar13 + 2;
        uVar6 = uVar6 >> 1;
        if ((*puVar9 & 4) == 0) {
          for (; uVar6 != 0; uVar6 = uVar6 - 1) {
            puVar3 = puVar14;
            puVar14 = puVar14 + 1;
            puVar2 = puVar10;
            puVar10 = puVar10 + 1;
            *puVar3 = *puVar2;
          }
        }
        else {
          FUN_1000_5c95();
        }
      }
      else {
        if ((uVar6 & 0x40) == 0) {
          uVar6 = puVar9[1];
        }
        else {
          iVar7 = -1;
          pcVar11 = (char *)*(char **)(puVar9 + 2);
          do {
            pcVar1 = pcVar11;
            pcVar11 = pcVar11 + 1;
            if (*pcVar1 == '\0') break;
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
          uVar6 = -iVar7;
        }
        puVar2 = *(uint **)(puVar9 + 2);
        puVar12 = (uint *)puVar2;
        puVar10 = puVar9 + 4;
        if ((*puVar9 & 4) == 0) {
          *puVar14 = uVar6 + 1 & 0xfffe;
          puVar14 = puVar13 + 2;
          uVar6 = uVar6 + 1 >> 1;
          if (uVar6 != 0) {
            for (; uVar6 != 0; uVar6 = uVar6 - 1) {
              puVar4 = puVar14;
              puVar14 = puVar14 + 1;
              puVar3 = puVar12;
              puVar12 = puVar12 + 1;
              *puVar4 = *puVar3;
            }
          }
        }
        else {
          FUN_1000_5c6c();
        }
      }
      iVar8 = iVar8 + -1;
      puVar9 = puVar10;
      puVar13 = puVar14;
    } while (iVar8 != 0);
  }
  return;
}


// ---- FUN_1000_5c6c @ 1000:5c6c

void FUN_1000_5c6c(void)

{
  uint in_CX;
  uint *unaff_DI;
  undefined2 unaff_ES;
  
  if (((uint)unaff_DI & 2) == 0) {
    *unaff_DI = in_CX + 2;
    unaff_DI = unaff_DI + 1;
  }
  *unaff_DI = in_CX;
  if (in_CX >> 1 != 0) {
    FUN_1000_5c95();
    return;
  }
  return;
}


// ---- FUN_1000_5c95 @ 1000:5c95

void __cdecl16near FUN_1000_5c95(void)

{
  uint in_CX;
  uint uVar1;
  undefined2 *unaff_SI;
  undefined2 *unaff_DI;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  
  uVar1 = in_CX >> 2;
  do {
    *unaff_DI = unaff_SI[2];
    unaff_DI[1] = unaff_SI[3];
    unaff_DI[2] = *unaff_SI;
    unaff_DI[3] = unaff_SI[1];
    unaff_SI = unaff_SI + 4;
    unaff_DI = unaff_DI + 4;
    uVar1 = uVar1 - 1;
  } while (uVar1 != 0);
  return;
}


// ---- FUN_1000_6126 @ 1000:6126

void __cdecl16near FUN_1000_6126(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  int unaff_BP;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 unaff_ES;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  
  *(undefined2 *)*(undefined2 *)0x5f0 = *(undefined2 *)(unaff_BP + 6);
  puVar5 = (undefined2 *)*(undefined2 *)0x5f2;
  puVar4 = (undefined2 *)(unaff_BP + 10);
  iVar3 = *(int *)(unaff_BP + 8);
  if (iVar3 != 0) {
    for (; iVar3 != 0; iVar3 = iVar3 + -1) {
      puVar2 = puVar5;
      puVar5 = puVar5 + 1;
      puVar1 = puVar4;
      puVar4 = puVar4 + 1;
      *puVar2 = *puVar1;
    }
  }
  return;
}


// ---- FUN_1000_6145 @ 1000:6145

void __cdecl16near FUN_1000_6145(void)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint *puVar4;
  uint in_AX;
  uint uVar5;
  int iVar6;
  int *unaff_BP;
  uint *puVar7;
  uint *puVar8;
  uint *unaff_DI;
  undefined2 unaff_ES;
  undefined2 unaff_SS;
  undefined2 uVar9;
  
  iVar6 = *unaff_BP;
  puVar4 = (uint *)(unaff_BP + 1);
  do {
    if (iVar6 == 0) {
      return;
    }
    uVar3 = *puVar4;
    puVar7 = puVar4 + 1;
    *unaff_DI = uVar3;
    unaff_DI = unaff_DI + 1;
    if (uVar3 != 0) {
      uVar9 = (undefined2)((ulong)*(uint **)puVar7 >> 0x10);
      puVar8 = (uint *)*(uint **)puVar7;
      puVar7 = puVar4 + 3;
      uVar5 = uVar3 >> 1;
      if (uVar5 != 0) {
        for (; uVar5 != 0; uVar5 = uVar5 - 1) {
          puVar2 = unaff_DI;
          unaff_DI = unaff_DI + 1;
          puVar1 = puVar8;
          puVar8 = puVar8 + 1;
          *puVar2 = *puVar1;
        }
        if ((uVar3 & 1) == 0) goto LAB_1000_616e;
      }
      in_AX = CONCAT11((char)(in_AX >> 8),(char)*puVar8);
      puVar1 = unaff_DI;
      unaff_DI = unaff_DI + 1;
      *puVar1 = in_AX;
    }
LAB_1000_616e:
    iVar6 = iVar6 + -1;
    puVar4 = puVar7;
  } while( true );
}


// ---- FUN_1000_6194 @ 1000:6194

undefined4 __cdecl16near FUN_1000_6194(void)

{
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  
  return CONCAT22(((undefined2 *)*(int *)0x5f0)[1],*(undefined2 *)*(int *)0x5f0);
}


// ---- FUN_1000_61a2 @ 1000:61a2

void __cdecl16near FUN_1000_61a2(void)

{
  uint *puVar1;
  uint *puVar2;
  undefined2 uVar3;
  uint uVar4;
  uint uVar5;
  int unaff_BP;
  uint *puVar6;
  uint *puVar7;
  undefined2 unaff_ES;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined2 uVar8;
  
  uVar3 = *(undefined2 *)(unaff_BP + 6);
  *(undefined2 *)*(undefined2 *)0x5f0 = uVar3;
  puVar7 = (uint *)*(int *)0x5f2;
  uVar4 = *(uint *)(unaff_BP + 8);
  *puVar7 = uVar4;
  puVar7 = puVar7 + 1;
  if (uVar4 != 0) {
    uVar8 = (undefined2)((ulong)*(undefined4 *)(unaff_BP + 10) >> 0x10);
    puVar6 = (uint *)(uint *)*(undefined4 *)(unaff_BP + 10);
    uVar5 = uVar4 >> 1;
    if (uVar5 != 0) {
      for (; uVar5 != 0; uVar5 = uVar5 - 1) {
        puVar2 = puVar7;
        puVar7 = puVar7 + 1;
        puVar1 = puVar6;
        puVar6 = puVar6 + 1;
        *puVar2 = *puVar1;
      }
      if ((uVar4 & 1) == 0) {
        return;
      }
    }
    *puVar7 = CONCAT11((char)((uint)uVar3 >> 8),(char)*puVar6);
  }
  return;
}


// ---- FUN_1000_61c9 @ 1000:61c9

void __cdecl16near FUN_1000_61c9(void)

{
  int unaff_BP;
  undefined2 unaff_ES;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  
  *(undefined2 *)*(undefined2 *)0x5f0 = *(undefined2 *)(unaff_BP + 6);
  *(undefined2 *)*(undefined2 *)0x5f2 = *(undefined2 *)(unaff_BP + 8);
  return;
}


// ---- FUN_1000_61da @ 1000:61da

void __cdecl16near FUN_1000_61da(void)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  uint in_CX;
  uint uVar3;
  undefined2 *puVar4;
  undefined2 *unaff_DI;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  
  uVar2 = DAT_1000_2a25;
  if (in_CX != 0) {
    puVar4 = (undefined2 *)*(undefined2 *)0x5f2;
    for (uVar3 = in_CX >> 1; puVar4 = puVar4 + 1, uVar3 != 0; uVar3 = uVar3 - 1) {
      puVar1 = unaff_DI;
      unaff_DI = unaff_DI + 1;
      *puVar1 = *puVar4;
    }
    if ((in_CX & 1) != 0) {
      *(undefined1 *)unaff_DI = *(undefined1 *)puVar4;
    }
  }
  return;
}


// ---- FUN_1000_717e @ 1000:717e

undefined2 __cdecl16far FUN_1000_717e(void)

{
  undefined2 uVar1;
  char cVar2;
  undefined2 uVar3;
  int iVar4;
  uint in_DX;
  uint extraout_DX;
  uint extraout_DX_00;
  uint extraout_DX_01;
  undefined2 extraout_DX_02;
  undefined2 uVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  
  uVar1 = DAT_1000_2a29;
  FUN_1000_7c15(0);
  iVar6 = 2000;
  do {
    cVar2 = FUN_1000_7be3();
    if (cVar2 == '\x03') {
      FUN_1000_7c15(3);
      iVar6 = 10;
      do {
        cVar2 = FUN_1000_7be3();
        if (cVar2 == '\x01') {
          FUN_1000_7c15(0);
          iVar6 = 10;
          do {
            cVar2 = FUN_1000_7be3();
            if (cVar2 == '\0') {
              uVar3 = FUN_1000_763f(0xd0,0xc000,0x20);
              *(undefined2 *)0x154 = uVar3;
              *(uint *)0x156 = in_DX;
              *(undefined2 *)0x5e0 = uVar3;
              *(uint *)0x5e2 = in_DX;
              uVar5 = DAT_1000_2a25;
              out(*(int *)0x5f6,(byte)in_DX);
              out(*(int *)0x5f6 + 1,(char)(in_DX >> 8));
              uVar7 = (uint)(((ulong)(((byte)in_DX >> 1 & 1) != 0) << 0x10 |
                             (ulong)(CONCAT12((in_DX & 1) != 0,uVar3) >> 1)) >> 1) >> 1;
              *(undefined2 *)0x152 = 0;
              *(uint *)0x5ec = uVar7;
              *(int *)0x5ee = uVar7 + 2;
              *(int *)0x5f0 = uVar7 + 4;
              *(undefined2 *)0x5f2 = (undefined2 *)(uVar7 + 6);
              *(undefined2 *)0x160 = *(undefined2 *)(uVar7 + 6);
              iVar6 = *(int *)(uVar7 + 8);
              *(int *)0x162 = iVar6;
              uVar7 = 0;
              iVar6 = iVar6 + 3;
              iVar4 = 4;
              do {
                bVar8 = iVar6 < 0;
                iVar6 = iVar6 << 1;
                uVar7 = uVar7 << 1 | (uint)bVar8;
                iVar4 = iVar4 + -1;
              } while (iVar4 != 0);
              *(int *)0x164 = iVar6;
              *(uint *)0x166 = uVar7;
              iVar6 = *(int *)0x160 + -1;
              do {
                FUN_1000_5922();
                iVar6 = iVar6 + -1;
              } while (iVar6 != 0);
              uVar5 = extraout_DX_02;
              uVar3 = FUN_1000_2684(0x7e12,0);
              *(undefined2 *)0x16a = uVar3;
              *(undefined2 *)0x16c = uVar5;
              FUN_1000_2448(0xffff,1);
              return 1;
            }
            FUN_1000_583a();
            iVar6 = iVar6 + -1;
            in_DX = extraout_DX_01;
          } while (iVar6 != 0);
          return 0;
        }
        FUN_1000_583a();
        iVar6 = iVar6 + -1;
        in_DX = extraout_DX_00;
      } while (iVar6 != 0);
      return 0;
    }
    FUN_1000_583a();
    iVar6 = iVar6 + -1;
    in_DX = extraout_DX;
  } while (iVar6 != 0);
  return 0;
}


// ---- FUN_1000_73e0 @ 1000:73e0

ulong __cdecl16near FUN_1000_73e0(void)

{
  uint in_AX;
  int in_DX;
  undefined2 in_BX;
  undefined2 unaff_DI;
  undefined2 unaff_ES;
  
  out(in_DX,(char)in_AX);
  out(in_DX + 1,(char)(in_AX >> 8));
  *(undefined2 *)
   ((uint)(((ulong)((in_AX & 2) != 0) << 0x10 | (ulong)(CONCAT12((in_AX & 1) != 0,unaff_DI) >> 1))
          >> 1) >> 1) = in_BX;
  return CONCAT22(in_DX,in_AX) & 0xfffffffc;
}


// ---- FUN_1000_73fc @ 1000:73fc

ulong __cdecl16near FUN_1000_73fc(void)

{
  uint in_AX;
  int in_DX;
  undefined2 in_BX;
  undefined2 unaff_SI;
  undefined2 unaff_DI;
  undefined2 *puVar1;
  undefined2 unaff_ES;
  
  out(in_DX,(char)in_AX);
  out(in_DX + 1,(char)(in_AX >> 8));
  puVar1 = (undefined2 *)
           ((uint)(((ulong)((in_AX & 2) != 0) << 0x10 |
                   (ulong)(CONCAT12((in_AX & 1) != 0,unaff_DI) >> 1)) >> 1) >> 1);
  *puVar1 = in_BX;
  puVar1[1] = unaff_SI;
  return CONCAT22(in_DX,in_AX) & 0xfffffffc;
}


// ---- FUN_1000_741e @ 1000:741e

undefined4 __cdecl16near FUN_1000_741e(void)

{
  uint in_AX;
  int in_DX;
  undefined2 unaff_SI;
  undefined2 unaff_DS;
  
  out(in_DX,(byte)in_AX);
  out(in_DX + 1,(char)(in_AX >> 8));
  return CONCAT22(in_DX,*(undefined2 *)
                         ((uint)(((ulong)(((byte)in_AX >> 1 & 1) != 0) << 0x10 |
                                 (ulong)(CONCAT12((in_AX & 1) != 0,unaff_SI) >> 1)) >> 1) >> 1));
}


// ---- FUN_1000_7459 @ 1000:7459

void __cdecl16far FUN_1000_7459(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  int iVar1;
  undefined2 uVar2;
  uint uVar3;
  sbyte sVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  bool bVar9;
  
  uVar2 = DAT_1000_2a27;
  if ((0 < (int)param_3) && ((int)param_3 < 0x21)) {
    iVar1 = *(int *)0x5f4;
    out(iVar1,(char)param_2);
    iVar5 = iVar1 + 1;
    out(iVar5,(char)(param_2 >> 8));
    puVar6 = (uint *)((uint)(((ulong)((param_2 & 2) != 0) << 0x10 |
                             (ulong)((CONCAT12((param_2 & 1) != 0,param_1) & 0xfffff0) >> 1)) >> 1)
                     >> 1);
    param_2 = param_2 & 0xfffc;
    param_1 = param_1 & 0xf;
    if (param_1 == 0) {
      if (param_3 == 0x20) {
        puVar8 = puVar6 + 1;
        *puVar6 = param_4;
        if (puVar6 == (uint *)0x7ffe) {
          out(iVar1,(char)(param_2 + 4));
          out(iVar5,(char)(param_2 + 4 >> 8));
          puVar8 = (uint *)0x0;
        }
        *puVar8 = param_5;
      }
      else if (param_3 == 0x10) {
        *puVar6 = param_4;
      }
      else {
        if (0x10 < param_3) {
          puVar8 = puVar6 + 1;
          *puVar6 = param_4;
          if (puVar6 == (uint *)0x7ffe) {
            out(iVar1,(char)(param_2 + 4));
            out(iVar5,(char)(param_2 + 4 >> 8));
            puVar8 = (uint *)0x0;
          }
          param_3 = param_3 - 0x10;
          param_4 = param_5;
          puVar6 = puVar8;
        }
        uVar3 = *(uint *)(param_3 * 2 + 0x29c6);
        *puVar6 = param_4 & uVar3 | *puVar6 & ~uVar3;
      }
    }
    else {
      param_3 = param_1 + param_3;
      sVar4 = (sbyte)param_1;
      if (param_3 < 0x20) {
        if (param_3 < 0x11) {
          uVar3 = *(uint *)((param_3 - param_1) * 2 + 0x29c6);
          uVar3 = param_4 & uVar3 | (*puVar6 >> sVar4 | *puVar6 << 0x10 - sVar4) & ~uVar3;
          *puVar6 = uVar3 << sVar4 | uVar3 >> 0x10 - sVar4;
        }
        else {
          uVar3 = *(uint *)((0x10 - param_1) * 2 + 0x29c6);
          uVar3 = param_4 & uVar3 | (*puVar6 >> sVar4 | *puVar6 << 0x10 - sVar4) & ~uVar3;
          puVar8 = puVar6 + 1;
          *puVar6 = uVar3 << sVar4 | uVar3 >> 0x10 - sVar4;
          if (puVar6 == (uint *)0x7ffe) {
            out(iVar1,(char)(param_2 + 4));
            out(iVar5,(char)(param_2 + 4 >> 8));
            puVar8 = (uint *)0x0;
          }
          do {
            bVar9 = (int)param_4 < 0;
            param_4 = param_4 << 1;
            param_5 = param_5 << 1 | (uint)bVar9;
            param_1 = param_1 - 1;
          } while (param_1 != 0);
          uVar3 = *(uint *)((param_3 - 0x10) * 2 + 0x29c6);
          *puVar8 = param_5 & uVar3 | *puVar8 & ~uVar3;
        }
      }
      else {
        uVar3 = *(uint *)((0x10 - param_1) * 2 + 0x29c6);
        uVar3 = param_4 & uVar3 | (*puVar6 >> sVar4 | *puVar6 << 0x10 - sVar4) & ~uVar3;
        puVar8 = puVar6 + 1;
        *puVar6 = uVar3 << sVar4 | uVar3 >> 0x10 - sVar4;
        if (puVar6 == (uint *)0x7ffe) {
          out(iVar1,(char)(param_2 + 4));
          out(iVar5,(char)(param_2 + 4 >> 8));
          puVar8 = (uint *)0x0;
        }
        iVar5 = 0x10 - param_1;
        do {
          uVar3 = param_5 & 1;
          param_5 = param_5 >> 1;
          param_4 = (uint)(CONCAT12(uVar3 != 0,param_4) >> 1);
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        puVar7 = puVar8 + 1;
        *puVar8 = param_4;
        if (puVar6 == (uint *)0x7ffc) {
          out(iVar1,(char)(param_2 + 4));
          out(iVar1 + 1,(char)(param_2 + 4 >> 8));
          puVar7 = (uint *)0x0;
        }
        uVar3 = *(uint *)((param_3 - 0x20) * 2 + 0x29c6);
        *puVar7 = param_5 & uVar3 | *puVar7 & ~uVar3;
      }
    }
  }
  return;
}


// ---- FUN_1000_763f @ 1000:763f

void __cdecl16far FUN_1000_763f(uint param_1,uint param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if ((0 < (int)param_3) && ((int)param_3 < 0x21)) {
    iVar1 = *(int *)0x5f4;
    out(iVar1,(char)param_2);
    iVar2 = iVar1 + 1;
    out(iVar2,(char)(param_2 >> 8));
    uVar3 = (uint)(((ulong)((param_2 & 2) != 0) << 0x10 |
                   (ulong)((CONCAT12((param_2 & 1) != 0,param_1) & 0xfffff0) >> 1)) >> 1) >> 1;
    param_2 = param_2 & 0xfffc;
    param_1 = param_1 & 0xf;
    if (param_1 == 0) {
      if (param_3 == 0x20) {
        if (uVar3 == 0x7ffe) {
          out(iVar1,(char)(param_2 + 4));
          out(iVar2,(char)(param_2 + 4 >> 8));
        }
      }
      else if (((param_3 != 0x10) && (0x10 < param_3)) && (uVar3 == 0x7ffe)) {
        out(iVar1,(char)(param_2 + 4));
        out(iVar2,(char)(param_2 + 4 >> 8));
      }
    }
    else if (param_1 + param_3 < 0x20) {
      if (0x10 < param_1 + param_3) {
        if (uVar3 == 0x7ffe) {
          out(iVar1,(char)(param_2 + 4));
          out(iVar2,(char)(param_2 + 4 >> 8));
        }
        do {
          param_1 = param_1 - 1;
        } while (param_1 != 0);
      }
    }
    else {
      if (uVar3 == 0x7ffe) {
        out(iVar1,(char)(param_2 + 4));
        out(iVar2,(char)(param_2 + 4 >> 8));
      }
      if (uVar3 == 0x7ffc) {
        out(iVar1,(char)(param_2 + 4));
        out(iVar1 + 1,(char)(param_2 + 4 >> 8));
      }
      do {
        param_1 = param_1 - 1;
      } while (param_1 != 0);
    }
  }
  return;
}


// ---- FUN_1000_77e4 @ 1000:77e4

/* WARNING: Removing unreachable block (ram,0x00017811) */

void __cdecl16far
FUN_1000_77e4(uint *param_1,undefined2 param_2,uint param_3,uint param_4,int param_5)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  undefined2 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  undefined2 *puVar10;
  undefined2 uVar11;
  uint local_4;
  
  uVar4 = DAT_1000_2a27;
  iVar3 = *(int *)0x5f4;
  uVar5 = *(int *)0x5de * -0x8000;
  out(iVar3,(char)param_3);
  out(iVar3 + 1,(char)(param_3 >> 8));
  puVar9 = (uint *)((uint)(((ulong)((param_3 & 2) != 0) << 0x10 |
                           (ulong)(CONCAT12((param_3 & 1) != 0,param_2) >> 1)) >> 1) >> 1);
  local_4 = param_3 & 0xfffc;
  if (param_4 != 0) {
    uVar11 = (undefined2)((ulong)param_1 >> 0x10);
    puVar8 = (uint *)param_1;
    uVar6 = uVar5 - (int)puVar9;
    if (param_5 == 0) {
      while ((uVar6 != 0 && (uVar6 < param_4))) {
        param_4 = param_4 - uVar6;
        if (((uint)puVar9 & 1) == 0) {
LAB_1000_7895:
          if (uVar6 != 1) {
            for (uVar7 = uVar6 >> 1; uVar7 != 0; uVar7 = uVar7 - 1) {
              puVar2 = puVar9;
              puVar9 = puVar9 + 1;
              puVar1 = puVar8;
              puVar8 = puVar8 + 1;
              *puVar2 = *puVar1;
            }
            if ((uVar6 & 1) == 0) goto LAB_1000_78aa;
          }
          puVar1 = puVar8;
          puVar8 = (uint *)((int)puVar8 + 1);
          *puVar9 = CONCAT11((char)(*puVar9 >> 8),(byte)*puVar1);
        }
        else {
          puVar10 = (undefined2 *)((int)puVar9 + -1);
          puVar1 = puVar8;
          puVar8 = (uint *)((int)puVar8 + 1);
          puVar9 = (uint *)((int)puVar9 + 1);
          *puVar10 = CONCAT11((byte)*puVar1,(char)*puVar10);
          uVar6 = uVar6 - 1;
          if (uVar6 != 0) goto LAB_1000_7895;
        }
LAB_1000_78aa:
        local_4 = local_4 + 4;
        out(iVar3,(char)local_4);
        out(iVar3 + 1,(char)(local_4 >> 8));
        puVar9 = (uint *)0x0;
        uVar6 = uVar5;
      }
      if (((uint)puVar9 & 1) != 0) {
        puVar10 = (undefined2 *)((int)puVar9 + -1);
        puVar1 = puVar8;
        puVar8 = (uint *)((int)puVar8 + 1);
        puVar9 = (uint *)((int)puVar9 + 1);
        *puVar10 = CONCAT11((byte)*puVar1,(char)*puVar10);
        param_4 = param_4 - 1;
        if (param_4 == 0) {
          return;
        }
      }
      if (param_4 != 1) {
        for (uVar5 = param_4 >> 1; uVar5 != 0; uVar5 = uVar5 - 1) {
          puVar2 = puVar9;
          puVar9 = puVar9 + 1;
          puVar1 = puVar8;
          puVar8 = puVar8 + 1;
          *puVar2 = *puVar1;
        }
        if ((param_4 & 1) == 0) {
          return;
        }
      }
      *puVar9 = CONCAT11((char)(*puVar9 >> 8),(byte)*puVar8);
    }
    else {
      while ((uVar6 != 0 && (uVar6 < param_4))) {
        param_4 = param_4 - uVar6;
        if (((uint)puVar9 & 1) == 0) {
LAB_1000_7927:
          if (uVar6 != 1) {
            uVar7 = uVar6 >> 1;
            do {
              puVar1 = puVar8;
              puVar8 = puVar8 + 1;
              puVar2 = puVar9;
              puVar9 = puVar9 + 1;
              *puVar2 = CONCAT11(*(undefined1 *)(ulong)((*puVar1 >> 8) + 0x28c6),
                                 *(undefined1 *)(ulong)((*puVar1 & 0xff) + 0x28c6));
              uVar7 = uVar7 - 1;
            } while (uVar7 != 0);
            if ((uVar6 & 1) == 0) goto LAB_1000_7948;
          }
          puVar1 = puVar8;
          puVar8 = (uint *)((int)puVar8 + 1);
          *puVar9 = CONCAT11((char)(*puVar9 >> 8),*(undefined1 *)(ulong)((byte)*puVar1 + 0x28c6));
        }
        else {
          puVar10 = (undefined2 *)((int)puVar9 + -1);
          puVar1 = puVar8;
          puVar8 = (uint *)((int)puVar8 + 1);
          puVar9 = (uint *)((int)puVar9 + 1);
          *puVar10 = CONCAT11(*(undefined1 *)(ulong)((byte)*puVar1 + 0x28c6),(char)*puVar10);
          uVar6 = uVar6 - 1;
          if (uVar6 != 0) goto LAB_1000_7927;
        }
LAB_1000_7948:
        local_4 = local_4 + 4;
        out(iVar3,(char)local_4);
        out(iVar3 + 1,(char)(local_4 >> 8));
        puVar9 = (uint *)0x0;
        uVar6 = uVar5;
      }
      if (((uint)puVar9 & 1) != 0) {
        puVar10 = (undefined2 *)((int)puVar9 + -1);
        puVar1 = puVar8;
        puVar8 = (uint *)((int)puVar8 + 1);
        puVar9 = (uint *)((int)puVar9 + 1);
        *puVar10 = CONCAT11(*(undefined1 *)(ulong)((byte)*puVar1 + 0x28c6),(char)*puVar10);
        param_4 = param_4 - 1;
        if (param_4 == 0) {
          return;
        }
      }
      if (param_4 != 1) {
        uVar5 = param_4 >> 1;
        do {
          puVar1 = puVar8;
          puVar8 = puVar8 + 1;
          puVar2 = puVar9;
          puVar9 = puVar9 + 1;
          *puVar2 = CONCAT11(*(undefined1 *)(ulong)((*puVar1 >> 8) + 0x28c6),
                             *(undefined1 *)(ulong)((*puVar1 & 0xff) + 0x28c6));
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
        if ((param_4 & 1) == 0) {
          return;
        }
      }
      *puVar9 = CONCAT11((char)(*puVar9 >> 8),*(undefined1 *)(ulong)((byte)*puVar8 + 0x28c6));
    }
  }
  return;
}


// ---- FUN_1000_796c @ 1000:796c

/* WARNING: Removing unreachable block (ram,0x00017999) */

void __cdecl16far
FUN_1000_796c(undefined2 param_1,uint param_2,uint *param_3,uint param_4,int param_5)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  undefined2 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  undefined2 *puVar9;
  uint *puVar10;
  uint *puVar11;
  undefined2 uVar12;
  uint local_4;
  
  uVar4 = DAT_1000_2a27;
  iVar3 = *(int *)0x5f4;
  uVar5 = *(int *)0x5de * -0x8000;
  out(iVar3,(char)param_2);
  out(iVar3 + 1,(char)(param_2 >> 8));
  puVar8 = (uint *)((uint)(((ulong)((param_2 & 2) != 0) << 0x10 |
                           (ulong)(CONCAT12((param_2 & 1) != 0,param_1) >> 1)) >> 1) >> 1);
  local_4 = param_2 & 0xfffc;
  if (param_4 != 0) {
    uVar12 = (undefined2)((ulong)param_3 >> 0x10);
    puVar11 = (uint *)param_3;
    uVar6 = uVar5 - (int)puVar8;
    if (param_5 == 0) {
      while ((uVar6 != 0 && (uVar6 < param_4))) {
        param_4 = param_4 - uVar6;
        if (((uint)puVar8 & 1) == 0) {
LAB_1000_7a16:
          if (uVar6 != 1) {
            for (uVar7 = uVar6 >> 1; uVar7 != 0; uVar7 = uVar7 - 1) {
              puVar2 = puVar11;
              puVar11 = puVar11 + 1;
              puVar1 = puVar8;
              puVar8 = puVar8 + 1;
              *puVar2 = *puVar1;
            }
            if ((uVar6 & 1) == 0) goto LAB_1000_7a28;
          }
          puVar1 = puVar11;
          puVar11 = (uint *)((int)puVar11 + 1);
          *(char *)puVar1 = (char)*puVar8;
        }
        else {
          puVar9 = (undefined2 *)((int)puVar8 + -1);
          puVar8 = (uint *)((int)puVar8 + 1);
          *(char *)puVar11 = (char)((uint)*puVar9 >> 8);
          puVar11 = (uint *)((int)puVar11 + 1);
          uVar6 = uVar6 - 1;
          if (uVar6 != 0) goto LAB_1000_7a16;
        }
LAB_1000_7a28:
        local_4 = local_4 + 4;
        out(iVar3,(char)local_4);
        out(iVar3 + 1,(char)(local_4 >> 8));
        puVar8 = (uint *)0x0;
        uVar6 = uVar5;
      }
      if (((uint)puVar8 & 1) != 0) {
        puVar9 = (undefined2 *)((int)puVar8 + -1);
        puVar8 = (uint *)((int)puVar8 + 1);
        *(char *)puVar11 = (char)((uint)*puVar9 >> 8);
        puVar11 = (uint *)((int)puVar11 + 1);
        param_4 = param_4 - 1;
        if (param_4 == 0) {
          return;
        }
      }
      if (param_4 != 1) {
        for (uVar5 = param_4 >> 1; uVar5 != 0; uVar5 = uVar5 - 1) {
          puVar2 = puVar11;
          puVar11 = puVar11 + 1;
          puVar1 = puVar8;
          puVar8 = puVar8 + 1;
          *puVar2 = *puVar1;
        }
        if ((param_4 & 1) == 0) {
          return;
        }
      }
      *(char *)puVar11 = (char)*puVar8;
    }
    else {
      while ((uVar6 != 0 && (uVar6 < param_4))) {
        param_4 = param_4 - uVar6;
        if (((uint)puVar8 & 1) == 0) {
LAB_1000_7a9e:
          if (uVar6 != 1) {
            uVar7 = uVar6 >> 1;
            do {
              puVar1 = puVar8;
              puVar8 = puVar8 + 1;
              puVar2 = puVar11;
              puVar11 = puVar11 + 1;
              *puVar2 = CONCAT11(*(undefined1 *)(ulong)((*puVar1 >> 8) + 0x28c6),
                                 *(undefined1 *)(ulong)((*puVar1 & 0xff) + 0x28c6));
              uVar7 = uVar7 - 1;
            } while (uVar7 != 0);
            if ((uVar6 & 1) == 0) goto LAB_1000_7abc;
          }
          puVar1 = puVar11;
          puVar11 = (uint *)((int)puVar11 + 1);
          *(undefined1 *)puVar1 = *(undefined1 *)(ulong)((*puVar8 & 0xff) + 0x28c6);
        }
        else {
          puVar10 = (uint *)((int)puVar8 + -1);
          puVar8 = (uint *)((int)puVar8 + 1);
          *(undefined1 *)puVar11 = *(undefined1 *)(ulong)((*puVar10 >> 8) + 0x28c6);
          puVar11 = (uint *)((int)puVar11 + 1);
          uVar6 = uVar6 - 1;
          if (uVar6 != 0) goto LAB_1000_7a9e;
        }
LAB_1000_7abc:
        local_4 = local_4 + 4;
        out(iVar3,(char)local_4);
        out(iVar3 + 1,(char)(local_4 >> 8));
        puVar8 = (uint *)0x0;
        uVar6 = uVar5;
      }
      if (((uint)puVar8 & 1) != 0) {
        puVar10 = (uint *)((int)puVar8 + -1);
        puVar8 = (uint *)((int)puVar8 + 1);
        *(undefined1 *)puVar11 = *(undefined1 *)(ulong)((*puVar10 >> 8) + 0x28c6);
        puVar11 = (uint *)((int)puVar11 + 1);
        param_4 = param_4 - 1;
        if (param_4 == 0) {
          return;
        }
      }
      if (param_4 != 1) {
        uVar5 = param_4 >> 1;
        do {
          puVar1 = puVar8;
          puVar8 = puVar8 + 1;
          puVar2 = puVar11;
          puVar11 = puVar11 + 1;
          *puVar2 = CONCAT11(*(undefined1 *)(ulong)((*puVar1 >> 8) + 0x28c6),
                             *(undefined1 *)(ulong)((*puVar1 & 0xff) + 0x28c6));
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
        if ((param_4 & 1) == 0) {
          return;
        }
      }
      *(undefined1 *)puVar11 = *(undefined1 *)(ulong)((*puVar8 & 0xff) + 0x28c6);
    }
  }
  return;
}


// ---- FUN_1000_7be3 @ 1000:7be3

uint __cdecl16far FUN_1000_7be3(void)

{
  uint uVar1;
  
  uVar1 = FUN_1000_741e();
  return (uVar1 & 0xf0) >> 4;
}


// ---- FUN_1000_7c15 @ 1000:7c15

void __cdecl16far FUN_1000_7c15(uint param_1)

{
  undefined2 uVar1;
  uint uVar2;
  
  uVar1 = DAT_1000_2a27;
  uVar2 = FUN_1000_741e();
  *(uint *)0xf0 = uVar2 & 0xfff0 | param_1;
  return;
}


// ---- FUN_1000_7c44 @ 1000:7c44

void __cdecl16far FUN_1000_7c44(uint *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined2 uVar5;
  uint uVar6;
  
  uVar5 = DAT_1000_2a29;
  uVar1 = *(uint *)0x52a;
  uVar2 = *(uint *)0x52c;
  *param_1 = uVar1;
  ((uint *)param_1)[1] = uVar2;
  uVar3 = *(uint *)0x52e;
  uVar6 = uVar1 + *(uint *)0x52e;
  iVar4 = *(int *)0x530;
  *param_2 = uVar6 - 0x20;
  ((int *)param_2)[1] = (uVar2 + iVar4 + (uint)CARRY2(uVar1,uVar3)) - (uint)(uVar6 < 0x20);
  return;
}


// ---- FUN_1000_7c7b @ 1000:7c7b

void __cdecl16far FUN_1000_7c7b(uint param_1,int param_2,uint param_3,int param_4)

{
  undefined2 uVar1;
  
  uVar1 = DAT_1000_2a29;
  *(uint *)0x52a = param_1;
  *(int *)0x52c = param_2;
  *(int *)0x52e = (param_3 - param_1) + 0x20;
  *(int *)0x530 =
       ((param_4 - param_2) - (uint)(param_3 < param_1)) + (uint)(0xffdf < param_3 - param_1);
  return;
}


// ---- FUN_1000_7d45 @ 1000:7d45

void __cdecl16far FUN_1000_7d45(undefined2 param_1)

{
  *(undefined2 *)0x640 = param_1;
  return;
}


// ---- FUN_1000_7d66 @ 1000:7d66

void __cdecl16far FUN_1000_7d66(undefined2 param_1)

{
  *(undefined2 *)0x642 = param_1;
  return;
}


// ---- FUN_1000_7d89 @ 1000:7d89

void __cdecl16far FUN_1000_7d89(undefined2 param_1,undefined2 param_2)

{
  undefined2 uVar1;
  
  uVar1 = DAT_1000_2a29;
  *(undefined2 *)0x640 = param_1;
  *(undefined2 *)0x642 = param_2;
  return;
}


// ---- FUN_1000_7e22 @ 1000:7e22

void __cdecl16far FUN_1000_7e22(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined2 uVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  
  uVar3 = DAT_1000_2a29;
  puVar5 = (undefined1 *)0x4fe;
  puVar6 = (undefined1 *)0x512;
  for (iVar4 = 0x14; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar2 = puVar6;
    puVar6 = puVar6 + 1;
    puVar1 = puVar5;
    puVar5 = puVar5 + 1;
    *puVar2 = *puVar1;
  }
  puVar5 = (undefined1 *)0x4fe;
  puVar6 = (undefined1 *)0x526;
  for (iVar4 = 0x14; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar2 = puVar6;
    puVar6 = puVar6 + 1;
    puVar1 = puVar5;
    puVar5 = puVar5 + 1;
    *puVar2 = *puVar1;
  }
  return;
}


// ---- FUN_1000_7e4b @ 1000:7e4b

undefined2 __cdecl16far FUN_1000_7e4b(void)

{
  char *pcVar1;
  undefined1 *puVar2;
  char *pcVar3;
  undefined1 *puVar4;
  undefined2 uVar5;
  int iVar6;
  char *pcVar7;
  undefined1 *puVar8;
  char *pcVar9;
  undefined1 *puVar10;
  
  uVar5 = DAT_1000_2a29;
  if (*(int *)0x4fe == *(int *)0x512) {
    iVar6 = *(int *)0x4fe << 3;
    pcVar9 = (char *)0x516;
    pcVar7 = (char *)0x502;
    do {
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar3 = pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar1 = pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (*pcVar1 == *pcVar3);
    if (iVar6 == 0) {
      return 1;
    }
  }
  puVar8 = (undefined1 *)0x4fe;
  puVar10 = (undefined1 *)0x512;
  for (iVar6 = 0x14; iVar6 != 0; iVar6 = iVar6 + -1) {
    puVar4 = puVar10;
    puVar10 = puVar10 + 1;
    puVar2 = puVar8;
    puVar8 = puVar8 + 1;
    *puVar4 = *puVar2;
  }
  puVar8 = (undefined1 *)0x4fe;
  puVar10 = (undefined1 *)0x526;
  for (iVar6 = 0x14; iVar6 != 0; iVar6 = iVar6 + -1) {
    puVar4 = puVar10;
    puVar10 = puVar10 + 1;
    puVar2 = puVar8;
    puVar8 = puVar8 + 1;
    *puVar4 = *puVar2;
  }
  FUN_1000_4d4c();
  return 2;
}


// ---- FUN_1000_7eae @ 1000:7eae

bool __cdecl16far FUN_1000_7eae(void)

{
  undefined2 uVar1;
  int iVar2;
  
  uVar1 = DAT_1000_2a29;
  *(undefined2 *)0x5f6 = *(undefined2 *)0x5da;
  *(int *)0x5f4 = *(int *)0x5da + 2;
  *(undefined2 *)0x5de = 1;
  uVar1 = DAT_1000_2a27;
  iVar2 = 0x40a;
  FUN_1000_73e0();
  *(int *)0x1a0 = iVar2;
  return *(int *)0x1a0 == iVar2;
}


// ---- FUN_1000_7f05 @ 1000:7f05

undefined2 __cdecl16far FUN_1000_7f05(void)

{
  undefined2 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  FUN_1000_7eae();
  uVar1 = DAT_1000_2a29;
  FUN_1000_73e0();
  FUN_1000_73e0();
  uVar3 = *(uint *)0x52a + *(uint *)0x52e;
  iVar4 = (*(int *)0x52c + *(int *)0x530 + (uint)CARRY2(*(uint *)0x52a,*(uint *)0x52e)) -
          (uint)(uVar3 < 0xc0);
  uVar3 = uVar3 - 0xc0 & 0xffe0;
  FUN_1000_73fc();
  iVar2 = 3;
  do {
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  FUN_1000_73fc(uVar3,iVar4);
  FUN_1000_77e4(0x526,uVar1,uVar3 + 0x20,iVar4 + (uint)(0xffdf < uVar3),0x14,0);
  return *(undefined2 *)0x52a;
}


// ---- FUN_1000_7faf @ 1000:7faf

void __cdecl16near FUN_1000_7faf(undefined2 param_1)

{
  FUN_1000_25d4(0x7e19,1,0,2,param_1);
  return;
}


// ---- FUN_1000_7fdc @ 1000:7fdc

void __cdecl16far FUN_1000_7fdc(void)

{
  undefined2 uVar1;
  uint uVar2;
  
  uVar1 = DAT_1000_2a27;
  FUN_1000_73fc();
  uVar2 = FUN_1000_741e();
  *(uint *)0x100 = uVar2 & 0x3fff | 0x300;
  return;
}


// ---- FUN_1000_80d8 @ 1000:80d8

undefined4 __cdecl16near FUN_1000_80d8(void)

{
  byte bVar1;
  undefined2 in_AX;
  undefined2 in_DX;
  undefined2 unaff_DS;
  
  bVar1 = in(*(undefined2 *)0x5da);
  if ((bVar1 & 1) == 0) {
    out(*(int *)0x5f4,0);
    out(*(int *)0x5f4 + 1,0xc0);
    *(uint *)0x1e = *(uint *)0x1e & 0xff7f;
    do {
      bVar1 = in(*(undefined2 *)0x5da);
    } while ((bVar1 & 1) == 0);
  }
  return CONCAT22(in_DX,in_AX);
}


// ---- FUN_1000_812d @ 1000:812d

undefined2 __cdecl16far FUN_1000_812d(void)

{
  uint uVar1;
  undefined2 *puVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  int iVar6;
  int iVar7;
  undefined2 *puVar8;
  
  uVar5 = DAT_1000_2a29;
  uVar1 = *(uint *)0x18b;
  if ((int)uVar1 < 0x10) {
    *(int *)0x18b = *(int *)0x18b + 1;
    iVar6 = 2;
    puVar8 = (undefined2 *)((uVar1 & 0xff) * 4 + 0x600);
    iVar7 = *(int *)0x5f6;
    do {
      uVar3 = in(iVar7);
      uVar4 = in(iVar7 + 1);
      puVar2 = puVar8;
      puVar8 = puVar8 + 1;
      *puVar2 = CONCAT11(uVar4,uVar3);
      iVar7 = iVar7 + 2;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    uVar5 = 1;
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}


// ---- FUN_1000_8179 @ 1000:8179

undefined2 __cdecl16far FUN_1000_8179(void)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  undefined2 *puVar5;
  
  uVar2 = DAT_1000_2a29;
  if (*(int *)0x18b == 0) {
    uVar2 = 0;
  }
  else {
    *(int *)0x18b = *(int *)0x18b + -1;
    iVar3 = 2;
    puVar5 = (undefined2 *)((*(uint *)0x18b & 0xff) * 4 + 0x600);
    iVar4 = *(int *)0x5f6;
    do {
      puVar1 = puVar5;
      puVar5 = puVar5 + 1;
      out(iVar4,(char)*puVar1);
      out(iVar4 + 1,(char)((uint)*puVar1 >> 8));
      iVar4 = iVar4 + 2;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    uVar2 = 1;
  }
  return uVar2;
}


// ---- FUN_1000_81ee @ 1000:81ee

undefined2 __cdecl16far FUN_1000_81ee(int param_1,uint param_2)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  undefined2 uVar4;
  
  uVar4 = DAT_1000_2a29;
  if ((param_1 == -1) || ((param_1 == 0 && (*(int *)0x542 == -1)))) {
    if ((param_2 & 4) == 0) {
      iVar3 = FUN_1000_2f4b();
      if (iVar3 != 0) goto LAB_1000_8228;
      if ((param_2 & 3) != 0) goto LAB_1000_821e;
    }
    else {
LAB_1000_821e:
      iVar3 = FUN_1000_4d4c();
      if (iVar3 != 0) {
LAB_1000_8228:
        if ((param_2 & 1) != 0) {
          FUN_1000_2eab();
          FUN_1000_2ebf(5000);
        }
        if ((param_2 & 2) != 0) {
          FUN_1000_25d4(0x7e10,1,0,4,0xffff,0xffff);
        }
        if ((param_2 & 0x8000) != 0) {
          FUN_1000_2b1c(0x3e3b,2,0,0);
        }
        if (((param_2 & 7) == 0) || (iVar3 = FUN_1000_2448(0xffff,0), iVar3 != 0)) {
          if ((param_2 & 0x8000) != 0) {
            FUN_1000_2b1c(0x3e1b,2,0,0);
          }
          if ((param_2 & 0x4000) == 0) {
            FUN_1000_7faf(1);
          }
          if ((param_2 & 1) != 0) {
            FUN_1000_25d4(0x7e65,0);
          }
          goto LAB_1000_831a;
        }
      }
    }
    uVar4 = 0;
  }
  else {
    if (((DAT_1000_2a31 & 0x4000) == 0) && (FUN_1000_7faf(0), (param_2 & 0x4000) == 0)) {
      pcVar2 = (code *)swi(0x10);
      (*pcVar2)();
      pcVar2 = (code *)swi(0x10);
      (*pcVar2)();
    }
LAB_1000_831a:
    if (param_1 == -1) {
      FUN_1000_8361();
    }
    iVar3 = *(int *)0x540;
    if (iVar3 != param_1) {
      LOCK();
      iVar1 = *(int *)0x542;
      *(int *)0x542 = iVar3;
      UNLOCK();
      iVar3 = iVar1;
      if (param_1 != 0) {
        iVar3 = param_1;
      }
    }
    *(int *)0x540 = iVar3;
    uVar4 = 1;
  }
  return uVar4;
}


// ---- FUN_1000_8361 @ 1000:8361

void __cdecl16far FUN_1000_8361(void)

{
  FUN_1000_2b1c(0x3e59,1,*(undefined2 *)0x53a);
  return;
}


// ---- entry @ 19e5:0000

/* WARNING: Instruction at (ram,0x0001a074) overlaps instruction at (ram,0x0001a073)
    */
/* WARNING: Stack frame is not setup normally: Input value of stackpointer is not used */
/* WARNING: This function may have set the stack pointer */

undefined4 __cdecl16near entry(void)

{
  byte *pbVar1;
  uint *puVar2;
  char *pcVar3;
  code *pcVar4;
  code *pcVar5;
  byte bVar6;
  char cVar7;
  uint uVar8;
  undefined2 *puVar9;
  int iVar10;
  undefined1 extraout_AH;
  uint uVar11;
  int iVar12;
  int iVar13;
  byte bVar14;
  uint extraout_DX;
  int extraout_DX_00;
  uint uVar15;
  undefined2 extraout_DX_01;
  undefined2 *puVar16;
  int *piVar17;
  int *piVar18;
  undefined2 *puVar19;
  undefined1 *puVar20;
  undefined2 *puVar21;
  undefined1 *puVar22;
  undefined1 *puVar23;
  undefined1 *puVar24;
  undefined2 *puVar25;
  undefined2 *puVar26;
  undefined2 *puVar27;
  int iVar28;
  byte *pbVar29;
  byte *pbVar30;
  uint *unaff_DI;
  char *pcVar31;
  byte *pbVar32;
  undefined2 uVar33;
  int unaff_DS;
  undefined2 uVar34;
  undefined2 in_GS;
  bool bVar35;
  byte in_AF;
  bool bVar36;
  bool bVar37;
  undefined1 uVar38;
  bool bVar39;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  undefined4 uVar40;
  
  DAT_1000_2a29 = DAT_1000_2a19;
  uVar34 = 0x1a5f;
                    /* WARNING: Call to offcut address within same function */
  piVar17 = (int *)0x3fe;
  DAT_1a5f_06ce = 0x9e78;
  DAT_1838_0187 = unaff_DS;
  func_0x0001a0c3();
  *(undefined2 *)((int)piVar17 + -2) = 2;
  *(undefined2 *)((int)piVar17 + -4) = 0x19e5;
  *(undefined2 *)((int)piVar17 + -6) = 0x9e81;
  uVar15 = extraout_DX;
  uVar8 = FUN_1000_2d13();
  uVar11 = uVar15 | uVar8;
  if (uVar11 != 0) {
    *(uint *)((int)piVar17 + -2) = uVar15;
    *(uint *)((int)piVar17 + -4) = uVar8;
    *(undefined2 *)((int)piVar17 + -6) = 0x1000;
    *(undefined2 *)((int)piVar17 + -8) = 0x9e91;
    puVar9 = (undefined2 *)FUN_1000_2db7();
    if (puVar9 != (undefined2 *)0x0) goto LAB_19e5_004d;
  }
  puVar9 = (undefined2 *)0x7f;
LAB_19e5_004d:
  iVar28 = 1;
  DAT_1a5f_0005 = puVar9;
LAB_19e5_0054:
  do {
    do {
      iVar10 = iVar28;
      if (*(char *)0x80 < (char)iVar10) {
        iVar28 = 0xbc;
        pcVar5 = (code *)swi(0x21);
        (*pcVar5)();
        if (unaff_DS == 0 && iVar10 == 0) {
LAB_19e5_011d:
          unaff_DS = 0x1838;
          DAT_1838_0189 = puVar9;
          *(undefined2 *)((int)piVar17 + -2) = 0x1000;
          *(undefined2 *)((int)piVar17 + -4) = 0x9f7c;
          iVar10 = FUN_1000_2fc0();
          uVar38 = 0;
          if (iVar10 == 0) {
            iVar28 = 0x1ee;
            DAT_1a5f_0007 = 0;
          }
          else {
            *(undefined2 *)((int)piVar17 + -2) = 0x1000;
            *(undefined2 *)((int)piVar17 + -4) = 0x9f94;
            FUN_1000_4f20();
            *(undefined2 *)((int)piVar17 + -2) = 0x1000;
            *(undefined2 *)((int)piVar17 + -4) = 0x9f99;
            FUN_1000_7e22();
            if (!(bool)uVar38) {
              iVar10 = 3;
              puVar20 = (undefined1 *)((int)piVar17 + -2);
                    /* WARNING: Call to offcut address within same function */
              *(undefined2 *)((int)piVar17 + -2) = 0x9fb4;
              func_0x0001a0c3();
              uVar34 = 0x1000;
              pcVar5 = (code *)swi(0x21);
              (*pcVar5)();
              uVar11 = 0x9e5;
              uVar15 = 0;
              iVar12 = 4;
              do {
                bVar35 = (int)uVar11 < 0;
                uVar11 = uVar11 * 2;
                uVar15 = uVar15 << 1 | (uint)bVar35;
                iVar12 = iVar12 + -1;
              } while (iVar12 != 0);
              iVar12 = uVar11 + 0x10f;
              uVar15 = uVar15 + (0xfef0 < uVar11);
              iVar13 = 4;
              do {
                uVar11 = uVar15 & 1;
                uVar15 = uVar15 >> 1;
                iVar12 = (int)(CONCAT12(uVar11 != 0,iVar12) >> 1);
                iVar13 = iVar13 + -1;
              } while (iVar13 != 0);
              uVar33 = 0x3100;
              uVar11 = 0;
              goto LAB_19e5_01dd;
            }
            iVar28 = 0x159;
            DAT_1a5f_0007 = 0;
          }
        }
        else {
          bVar35 = (int)puVar9 << 1 < 0;
          puVar16 = (undefined2 *)((int)puVar9 << 2);
          *(uint *)((int)piVar17 + -2) =
               (uint)(in_NT & 1) * 0x4000 | (uint)(bVar35 != (int)puVar16 < 0) * 0x800 |
               (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 |
               (uint)((int)puVar16 < 0) * 0x80 | (uint)(puVar16 == (undefined2 *)0x0) * 0x40 |
               (uint)(in_AF & 1) * 0x10 | (uint)((POPCOUNT((uint)puVar16 & 0xff) & 1U) == 0) * 4 |
               (uint)bVar35;
          uVar33 = puVar16[1];
          pcVar4 = (code *)*puVar16;
          *(undefined2 *)((int)piVar17 + -4) = 0x1000;
          puVar19 = (undefined2 *)((int)piVar17 + -6);
          piVar17 = (int *)((int)piVar17 + -6);
          *puVar19 = 0x9f48;
          iVar10 = (*pcVar4)();
          iVar28 = 0x84;
          unaff_DS = 0;
          if (iVar10 != 0) {
            iVar28 = 0x125;
            DAT_1a5f_0007 = 0;
          }
        }
        goto LAB_19e5_010e;
      }
      uVar33 = *(undefined2 *)(iVar10 + 0x80);
      iVar28 = iVar10 + 1;
      bVar6 = (byte)uVar33;
    } while (((bVar6 == 0x2d) || (bVar6 == 0x2f)) || (bVar6 == 0x20));
    if (bVar6 < 0x61) {
      uVar33 = CONCAT11((char)((uint)uVar33 >> 8),bVar6 + 0x20);
    }
    cVar7 = (char)uVar33;
    if (cVar7 == 'd') {
      cVar7 = (char)((uint)uVar33 >> 8);
      if (cVar7 == '0') {
        DAT_1a5f_0009 = 0;
      }
      else if (cVar7 == '1') {
        DAT_1a5f_0009 = 1;
      }
      else {
        iVar28 = iVar10 + 2;
        if (cVar7 != '2') goto LAB_19e5_0054;
        DAT_1a5f_0009 = 2;
      }
      DAT_1a5f_0007 = 1;
      *(int *)((int)piVar17 + -2) = iVar10 + 2;
      *(int *)((int)piVar17 + -4) = unaff_DS;
      piVar18 = (int *)((int)piVar17 + -6);
                    /* WARNING: Call to offcut address within same function */
      *(undefined2 *)((int)piVar17 + -6) = 0x9f12;
      func_0x0001a0c3();
      unaff_DS = *piVar18;
      piVar17 = piVar18 + 2;
      iVar28 = piVar18[1];
      goto LAB_19e5_0054;
    }
    if (cVar7 == 'i') {
      iVar28 = 0xed;
      goto LAB_19e5_011d;
    }
  } while (cVar7 != 'u');
  pcVar5 = (code *)swi(0x21);
  (*pcVar5)();
  if (unaff_DS != 0 || iVar28 != 0) goto LAB_19e5_01ae;
  iVar28 = 0x182;
LAB_19e5_010e:
  iVar10 = 3;
  puVar20 = (undefined1 *)((int)piVar17 + -2);
                    /* WARNING: Call to offcut address within same function */
  *(undefined2 *)((int)piVar17 + -2) = 0x9f66;
  func_0x0001a0c3();
  uVar33 = CONCAT11(0x4c,extraout_AH);
  iVar12 = extraout_DX_00;
LAB_19e5_01dd:
  *(undefined2 *)(puVar20 + -2) = uVar34;
  *(undefined2 *)(puVar20 + -4) = uVar33;
  puVar22 = puVar20 + -6;
  *(int *)(puVar20 + -6) = iVar12;
  iVar12 = DAT_1a5f_0009;
  if (DAT_1a5f_0007 == 1) {
    uVar11 = 0;
    unaff_DS = 0;
    bVar35 = (int)puVar9 << 1 < 0;
    puVar9 = (undefined2 *)((int)puVar9 * 4);
    *(uint *)(puVar20 + -8) =
         (uint)(in_NT & 1) * 0x4000 | (uint)(bVar35 != (int)puVar9 < 0) * 0x800 |
         (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 | (uint)((int)puVar9 < 0) * 0x80 |
         (uint)(puVar9 == (undefined2 *)0x0) * 0x40 | (uint)(in_AF & 1) * 0x10 |
         (uint)((POPCOUNT((uint)puVar9 & 0xff) & 1U) == 0) * 4 | (uint)bVar35;
    uVar34 = puVar9[1];
    pcVar4 = (code *)*puVar9;
    *(undefined2 *)(puVar20 + -10) = 0x1000;
    puVar22 = puVar20 + -0xc;
    *(undefined2 *)(puVar20 + -0xc) = 0xa050;
    (*pcVar4)();
    iVar10 = iVar12;
  }
  uVar34 = *(undefined2 *)(puVar22 + 4);
  puVar23 = puVar22 + 6;
  pcVar5 = (code *)swi(0x21);
  uVar40 = (*pcVar5)();
  uVar33 = (undefined2)((ulong)uVar40 >> 0x10);
  uVar15 = (uint)uVar40;
  cVar7 = (char)uVar40;
  *(char *)(iVar10 + iVar28) = *(char *)(iVar10 + iVar28) + cVar7;
  *(char *)(iVar10 + iVar28) = *(char *)(iVar10 + iVar28) + cVar7;
  *(char *)(iVar10 + iVar28) = *(char *)(iVar10 + iVar28) + cVar7;
  *(char *)(iVar10 + iVar28) = *(char *)(iVar10 + iVar28) + cVar7;
  *(char *)(iVar10 + iVar28) = *(char *)(iVar10 + iVar28) + cVar7;
  bVar14 = (byte)(uVar11 >> 8);
  *(byte *)unaff_DI = (byte)*unaff_DI + bVar14;
  uVar8 = iVar28 - *(int *)(iVar28 + 0x54);
  puVar2 = unaff_DI;
  unaff_DI = (uint *)((int)unaff_DI + 1);
  bVar6 = in(uVar33);
  *(byte *)puVar2 = bVar6;
  piVar17 = (int *)((uint)(puVar23 + -1) & *(uint *)(iVar10 + uVar8 + 3));
  puVar2 = (uint *)((int)puVar9 + uVar8 + 3);
  pbVar29 = (byte *)(uVar8 + *puVar2);
  if (CARRY2(uVar8,*puVar2)) {
    bVar35 = CARRY2((uint)unaff_DI,*(uint *)(pbVar29 + 3));
    unaff_DI = (uint *)((int)unaff_DI + *(uint *)(pbVar29 + 3));
    bVar39 = (int)unaff_DI < 0;
    bVar36 = unaff_DI == (uint *)0x0;
code_r0x0001a075:
    pbVar1 = pbVar29;
    pbVar29 = pbVar29 + 1;
    out(*pbVar1,uVar33);
    bVar37 = true;
    if (bVar36) goto LAB_19e5_029e;
  }
  else if (pbVar29 == (byte *)0x0) {
    bVar35 = false;
    bVar36 = true;
    bVar39 = false;
    if (!SCARRY2(uVar8,*puVar2)) goto code_r0x0001a075;
  }
  else {
    bVar35 = CARRY2((uint)puVar9,puVar9[0x3a]);
    puVar9 = (undefined2 *)((int)puVar9 + puVar9[0x3a]);
    bVar39 = (int)puVar9 < 0;
    pbVar30 = pbVar29;
    if (bVar35 || puVar9 == (undefined2 *)0x0) goto code_r0x0001a0db;
    if (bVar35) {
      pbVar1 = pbVar29 + 0x70e;
      bVar35 = CARRY1(*pbVar1,bVar14);
      *pbVar1 = *pbVar1 + bVar14;
      bVar37 = *pbVar1 == 0;
      goto code_r0x0001a0e5;
    }
  }
  if (bVar39) {
LAB_19e5_01ae:
    unaff_DS = 0;
    bVar35 = (int)puVar9 << 1 < 0;
    puVar16 = (undefined2 *)((int)puVar9 << 2);
    *(uint *)((int)piVar17 + -2) =
         (uint)(in_NT & 1) * 0x4000 | (uint)(bVar35 != (int)puVar16 < 0) * 0x800 |
         (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 | (uint)((int)puVar16 < 0) * 0x80 |
         (uint)(puVar16 == (undefined2 *)0x0) * 0x40 | (uint)(in_AF & 1) * 0x10 |
         (uint)((POPCOUNT((uint)puVar16 & 0xff) & 1U) == 0) * 4 | (uint)bVar35;
    uVar33 = puVar16[1];
    pcVar4 = (code *)*puVar16;
    *(undefined2 *)((int)piVar17 + -4) = 0x1000;
    puVar21 = (undefined2 *)((int)piVar17 + -6);
    piVar17 = (int *)((int)piVar17 + -6);
    *puVar21 = 0xa00f;
    (*pcVar4)();
    if (bVar35) {
      iVar28 = 0x1a2;
      *(undefined2 *)0x7 = 0;
      unaff_DS = 0;
    }
    else {
      iVar28 = 0x1ca;
      *(undefined2 *)0x7 = 0;
    }
    goto LAB_19e5_010e;
  }
  uVar11 = uVar11 + *(int *)(pbVar29 + -0x6dfd);
  iVar28 = *(int *)(pbVar29 + iVar10 + -0x61fd);
  iVar12 = *(int *)(pbVar29 + -0x55fd);
  bVar35 = CARRY2((uint)((int)piVar17 + iVar12),*unaff_DI);
  uVar8 = *unaff_DI;
  puVar2 = (uint *)((byte *)((int)puVar9 + (int)unaff_DI) + 0x73);
  iVar13 = (uVar15 & 3) - (*puVar2 & 3);
  bVar37 = 0 < iVar13;
  *puVar2 = *puVar2 + (uint)bVar37 * iVar13;
  *(int *)((int)piVar17 + uVar8 + iVar12 + -2) = iVar10 + iVar28;
  puVar24 = (undefined1 *)((int)piVar17 + uVar8 + iVar12 + -2);
  if ((int)((int)piVar17 + uVar8 + iVar12) < 0) goto LAB_19e5_0299;
  *(undefined2 *)((int)piVar17 + uVar8 + iVar12 + -4) = 0x6448;
  puVar24 = (undefined1 *)((int)piVar17 + uVar8 + iVar12 + -3);
  bVar37 = (undefined1 *)((int)piVar17 + uVar8 + iVar12) == (undefined1 *)0x3;
  if (!bVar37) goto LAB_19e5_029c;
  out(*(undefined2 *)pbVar29,uVar33);
  pbVar29 = pbVar29 + 3;
  puVar2 = (uint *)((int)unaff_DI + -1);
  *puVar2 = *puVar2 | uVar15;
  puVar9 = puVar9 + 0x3903;
  iVar12 = *(int *)0x2204;
  *(int *)(iVar12 + -2) = iVar10 + iVar28;
  *(undefined2 *)(iVar12 + -4) = 0xb903;
  *(undefined2 *)(iVar12 + -6) = uVar33;
  *(undefined2 *)(iVar12 + -8) = pbVar29;
  *(undefined2 *)(iVar12 + -10) = (uint *)((int)unaff_DI + -1);
  *(undefined2 *)(iVar12 + -0xc) = puVar9;
  *(undefined2 *)(iVar12 + -0xe) = uVar34;
  piVar17 = (int *)(iVar12 + -0x10);
  *(int *)(iVar12 + -0x10) = unaff_DS;
LAB_19e5_027f:
  *(undefined2 *)((int)piVar17 + -2) = 0xa0d2;
  FUN_19e5_0501();
  pbVar30 = pbVar29 + 1;
  bVar6 = *pbVar29;
  uVar15 = (uint)bVar6;
  uVar38 = 1;
  if (bVar6 == 0x25) {
LAB_19e5_02e3:
    pbVar29 = pbVar30 + 1;
    bVar6 = *pbVar30;
    *(undefined2 *)((int)piVar17 + -2) = 0x1000;
    uVar33 = *(undefined2 *)((int)piVar17 + -2);
    pbVar32 = (byte *)0x210;
    iVar28 = 7;
    do {
      if (iVar28 == 0) break;
      iVar28 = iVar28 + -1;
      pbVar1 = pbVar32;
      pbVar32 = pbVar32 + 1;
      uVar38 = bVar6 == *pbVar1;
    } while (!(bool)uVar38);
    if ((bool)uVar38) {
      iVar28 = (6 - iVar28) * 2;
      uVar38 = iVar28 == 0;
      pcVar4 = (code *)*(undefined2 *)(iVar28 + 0x217);
      puVar27 = (undefined2 *)((int)piVar17 + -2);
      piVar17 = (int *)((int)piVar17 + -2);
      *puVar27 = 0xa1a4;
      (*pcVar4)();
      pbVar30 = pbVar29;
      goto LAB_19e5_02e3;
    }
    if (bVar6 != 0x2e) {
      bVar35 = bVar6 < 0x2a;
      uVar38 = bVar6 == 0x2a;
      if ((bool)uVar38) {
        puVar9 = (undefined2 *)((uint)puVar9 | 0x10);
        pbVar30 = pbVar29;
      }
      else {
        *(undefined2 *)((int)piVar17 + -2) = 0xa15c;
        cVar7 = FUN_19e5_050f();
        if (bVar35) goto LAB_19e5_02c9;
        if (cVar7 == '\0') {
          puVar9 = (undefined2 *)((uint)puVar9 | 0x104);
        }
        *(undefined2 *)((int)piVar17 + -2) = 0xa16d;
        FUN_19e5_0552();
        if (*pbVar30 == 0x2a) {
          puVar9 = (undefined2 *)((uint)puVar9 | 0x10);
          pbVar30 = pbVar29;
        }
      }
    }
    uVar38 = 0;
    if (*pbVar30 == 0x2e) {
      uVar38 = pbVar30[1] == 0x2a;
      if ((bool)uVar38) {
        uVar38 = (undefined2 *)((uint)puVar9 | 0x28) == (undefined2 *)0x0;
        puVar9 = (undefined2 *)((uint)puVar9 | 0x28);
        pbVar30 = pbVar30 + 2;
      }
      else {
        *(undefined2 *)((int)piVar17 + -2) = 0xa195;
        FUN_19e5_0552();
        puVar9 = (undefined2 *)((uint)puVar9 | 0x20);
        pbVar30 = pbVar30 + 1;
      }
    }
    goto LAB_19e5_02e3;
  }
  if (bVar6 == 0x5c) {
    pbVar29 = pbVar29 + 2;
    uVar15 = (uint)*pbVar30;
    *(undefined2 *)((int)piVar17 + -2) = 0x1000;
    unaff_DS = *(int *)((int)piVar17 + -2);
    bVar37 = true;
    bVar35 = false;
code_r0x0001a0e5:
    unaff_DI = (uint *)0x225;
    puVar24 = (undefined1 *)piVar17;
LAB_19e5_0299:
    uVar11 = 7;
LAB_19e5_029c:
    do {
      piVar17 = (int *)puVar24;
      if (uVar11 == 0) break;
      uVar11 = uVar11 - 1;
      puVar2 = unaff_DI;
      unaff_DI = (uint *)((int)unaff_DI + 1);
      bVar35 = (byte)uVar15 < (byte)*puVar2;
      bVar37 = (byte)uVar15 == (byte)*puVar2;
    } while (!bVar37);
LAB_19e5_029e:
    if (bVar37) {
      pcVar4 = (code *)*(undefined2 *)((6 - uVar11) * 2 + 0x22c);
      puVar25 = (undefined2 *)((int)piVar17 + -2);
      piVar17 = (int *)((int)piVar17 + -2);
      *puVar25 = 0xa112;
      (*pcVar4)();
      goto LAB_19e5_027f;
    }
    *(undefined2 *)((int)piVar17 + -2) = 0xa0f7;
    FUN_19e5_050f();
    if (!bVar35) {
      pbVar29 = pbVar29 + -1;
      *(undefined2 *)((int)piVar17 + -2) = extraout_DX_01;
      *(undefined2 *)((int)piVar17 + -4) = 0xa100;
      FUN_19e5_0552();
    }
  }
  else {
code_r0x0001a0db:
    pbVar29 = pbVar30;
    if ((char)uVar15 == '\0') {
      return CONCAT22(*(undefined2 *)((int)piVar17 + 10),*(undefined2 *)((int)piVar17 + 0x10));
    }
  }
  *(undefined2 *)((int)piVar17 + -2) = 0xa117;
  FUN_19e5_0537();
  goto LAB_19e5_027f;
LAB_19e5_02c9:
  pcVar31 = (char *)0x23a;
  iVar28 = 0x13;
  do {
    if (iVar28 == 0) break;
    iVar28 = iVar28 + -1;
    pcVar3 = pcVar31;
    pcVar31 = pcVar31 + 1;
    uVar38 = cVar7 == *pcVar3;
  } while (!(bool)uVar38);
  if ((bool)uVar38) {
    pcVar4 = (code *)*(undefined2 *)((0x12 - iVar28) * 2 + 0x24d);
    puVar26 = (undefined2 *)((int)piVar17 + -2);
    piVar17 = (int *)((int)piVar17 + -2);
    *puVar26 = 0xa131;
    (*pcVar4)();
  }
  goto LAB_19e5_027f;
}


// ---- FUN_19e5_0501 @ 19e5:0501

void __cdecl16near FUN_19e5_0501(void)

{
  return;
}


// ---- FUN_19e5_050f @ 19e5:050f

byte __cdecl16near FUN_19e5_050f(void)

{
  byte in_AL;
  byte bVar1;
  byte in_CH;
  undefined1 in_CF;
  
  bVar1 = FUN_19e5_0522();
  if ((!(bool)in_CF) && (bVar1 < in_CH)) {
    in_AL = bVar1;
  }
  return in_AL;
}


// ---- FUN_19e5_0522 @ 19e5:0522

void __cdecl16near FUN_19e5_0522(void)

{
  return;
}


// ---- FUN_19e5_0537 @ 19e5:0537

undefined4 __cdecl16near FUN_19e5_0537(void)

{
  code *pcVar1;
  undefined2 in_DX;
  undefined2 in_BX;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  return CONCAT22(in_BX,in_DX);
}


// ---- FUN_19e5_0552 @ 19e5:0552

undefined3 __cdecl16near FUN_19e5_0552(void)

{
  char cVar1;
  undefined2 in_AX;
  uint uVar2;
  char in_CL;
  byte in_CH;
  undefined1 uVar3;
  bool bVar4;
  
  bVar4 = false;
  uVar2 = 0;
  do {
    cVar1 = FUN_19e5_050f();
    uVar3 = (undefined1)uVar2;
    if (bVar4) break;
    uVar2 = (uVar2 & 0xff) * (uint)in_CH;
    bVar4 = CARRY2(uVar2,(int)cVar1);
    uVar2 = uVar2 + (int)cVar1;
    uVar3 = (undefined1)uVar2;
    in_CL = in_CL + -1;
  } while (in_CL != '\0');
  return CONCAT12(uVar3,in_AX);
}


