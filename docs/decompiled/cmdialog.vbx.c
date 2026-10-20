// Decompiled with Ghidra from cmdialog.vbx
// Format: New Executable (NE), image base 0000:0000

// ---- WEP @ 1000:0000

/* WARNING: Removing unreachable block (ram,0x10000016) */
/* WARNING: Removing unreachable block (ram,0x1000001d) */
/* Title:  Windows Common Dialog Custom Control for Visual Basic
   Format: New Executable (NE) Windows
   CRC:    00000000
   
   Program Entry Point (CS:IP):   0001:182c
   Initial Stack Pointer (SS:SP): 0000:0000
   Auto Data Segment Index:       0002
   Initial Heap Size:             4000
   Initial Stack Size:            0000
   Minimum Code Swap Size:        0000
   
   Linker Version:  5.50
   Target OS:       Windows
   Windows Version: 3.0
   
   Program Flags:     01
           Single Data
   Application Flags: 83
           Windows P.M. API
           Library Module
   Other Flags:       08
    */

undefined2 __stdcall16far WEP(void)

{
                    /* Segment:    1
                       Offset:     00000300
                       Length:     1f26
                       Min Alloc:  1f26
                       Flags:      0d40
                           Code
                           Fixed
                           Preload
                           Impure (Non-shareable)
                        */
  return 1;
}


// ---- FUN_1000_003c @ 1000:003c

undefined2 __stdcall16far FUN_1000_003c(void)

{
  return 1;
}


// ---- VBINITCC @ 1000:0060

void __stdcall16far VBINITCC(void)

{
  FUN_1000_1508();
  return;
}


// ---- VBGETMODELINFO @ 1000:007c

undefined4 __stdcall16far VBGETMODELINFO(void)

{
  return 0x1008045c;
}


// ---- FUN_1000_0090 @ 1000:0090

undefined2 __stdcall16far FUN_1000_0090(void)

{
  undefined2 unaff_CS;
  undefined2 in_stack_0000000c;
  
  DAT_1008_0b96 = in_stack_0000000c;
  DAT_1008_0b98 = LOADICON(unaff_CS,0x462,0x1008);
  FUN_1000_00b8(in_stack_0000000c);
  UNLOCKSEGMENT(0x1088,0xffff);
  return 1;
}


// ---- FUN_1000_00b8 @ 1000:00b8

void __cdecl16near FUN_1000_00b8(void)

{
  int iVar1;
  undefined2 *puVar2;
  
  puVar2 = (undefined2 *)&DAT_1008_06a0;
  iVar1 = 0x7f;
  do {
    *puVar2 = 0;
    puVar2 = puVar2 + 5;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}


// ---- FUN_1000_00ca @ 1000:00ca

void __stdcall16far FUN_1000_00ca(undefined2 param_1,undefined2 *param_2,int param_3)

{
  undefined2 *puVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined4 uVar4;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined2 local_18;
  undefined2 local_14;
  undefined2 local_12;
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_6;
  undefined2 local_4;
  
  if (param_3 == 0x1003) {
    uVar4 = FUN_1000_1538();
    *param_2 = (int)uVar4;
    ((undefined2 *)param_2)[1] = (int)((ulong)uVar4 >> 0x10);
  }
  else {
    if (param_3 != 0x1009) {
      return;
    }
    DAT_1008_0670 = param_1;
    puVar3 = &local_1c;
    for (iVar2 = 0xd; iVar2 != 0; iVar2 = iVar2 + -1) {
      puVar1 = puVar3;
      puVar3 = puVar3 + 1;
      *puVar1 = 0;
    }
    local_1a = 0x17e;
    local_18 = 0x1000;
    local_14 = 0;
    local_12 = param_1;
    local_e = 0;
    local_c = 0;
    local_6 = 0x10;
    local_4 = 0x1008;
    iVar2 = REGISTERCLASS(unaff_CS,&local_1c);
    if (iVar2 != 0) {
      CREATEWINDOW(0x1088,0,0,DAT_1008_0670,0,0,0,0,0,0,0,0x8000,0,0,0x10,0x1008,unaff_SS);
      return;
    }
  }
  return;
}


// ---- ABOUTPOPUPWNDPROC @ 1000:017e

undefined2 __stdcall16far
ABOUTPOPUPWNDPROC(undefined2 param_1,undefined2 param_2,int param_3,int param_4)

{
  undefined2 uVar1;
  undefined2 unaff_CS;
  
  if (param_4 == 0x10) {
    uVar1 = DEFWINDOWPROC(unaff_CS,param_1,param_2,param_3,0x10);
    UNREGISTERCLASS(0x1088,DAT_1008_0670,0x10);
    return uVar1;
  }
  if (param_4 == 0x18) {
    if (param_3 != 0) {
      POSTMESSAGE(unaff_CS,0,0,0,0x400);
      return 0;
    }
  }
  else if (param_4 == 0x400) {
    FUN_1000_1640();
    return 0;
  }
  uVar1 = DEFWINDOWPROC(unaff_CS,param_1,param_2,param_3,param_4);
  return uVar1;
}


// ---- ABOUTDLGPROC @ 1000:0222

undefined2 __stdcall16far
ABOUTDLGPROC(undefined2 param_1,undefined2 param_2,int param_3,int param_4)

{
  undefined2 unaff_CS;
  
  if (((param_4 == 0x111) && (param_3 != 0)) && (param_3 - 1U < 2)) {
    ENDDIALOG(unaff_CS,1);
    return 1;
  }
  return 0;
}


// ---- CMDLGCTLPROC @ 1000:025a

int __stdcall16far
CMDLGCTLPROC(int param_1,undefined2 param_2,int param_3,uint param_4,uint param_5,int param_6,
            int param_7)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  undefined2 *puVar8;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  int *piVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined2 *puVar12;
  ulong uVar13;
  long lVar14;
  undefined2 uVar15;
  undefined2 uVar16;
  undefined1 *puVar17;
  char *pcVar18;
  uint uVar19;
  undefined4 local_1d2;
  uint uStack_1ce;
  undefined2 local_d2;
  undefined2 local_d0;
  undefined2 local_ce;
  undefined4 local_ca;
  undefined2 local_c6;
  undefined2 local_c4;
  undefined2 local_c2;
  undefined2 local_c0;
  undefined2 local_be;
  undefined2 local_bc;
  undefined4 local_ba;
  int local_b6;
  int local_b4;
  char *local_b2;
  int local_8a [4];
  int local_82;
  byte local_80;
  byte local_7f;
  byte local_7e;
  undefined1 local_78 [26];
  undefined2 local_5e;
  undefined2 local_5c;
  undefined2 local_5a;
  uint local_58;
  int local_56;
  undefined2 local_54;
  uint local_52;
  int *local_50;
  uint local_4a;
  undefined2 local_48;
  undefined4 local_46;
  undefined4 local_42;
  undefined2 local_3e;
  undefined2 local_3c;
  uint local_3a;
  undefined2 local_38;
  undefined2 local_34;
  undefined2 local_32;
  undefined2 local_30;
  undefined2 local_2e;
  undefined2 local_2c;
  char local_2a;
  undefined2 local_29 [7];
  uint local_1a;
  int local_18;
  int local_16;
  undefined4 local_14;
  undefined4 local_10;
  uint local_c;
  undefined4 local_a;
  undefined4 local_6;
  
  uVar19 = 0x1008;
  local_2a = '\0';
  puVar8 = local_29;
  for (iVar6 = 7; iVar6 != 0; iVar6 = iVar6 + -1) {
    puVar12 = puVar8;
    puVar8 = puVar8 + 1;
    *puVar12 = 0;
  }
  piVar9 = (int *)0x0;
  local_6 = (undefined2 *)((ulong)local_6 & 0xffff);
  if ((param_6 != 0) || (param_7 != 0)) {
    unaff_CS = 0x1000;
    piVar9 = (int *)FUN_1000_1510();
    local_6 = (undefined2 *)CONCAT22((int)((ulong)piVar9 >> 0x10),(int *)local_6);
  }
  uVar3 = (undefined2)((ulong)piVar9 >> 0x10);
  piVar7 = (int *)piVar9;
  if (param_4 == 0x1004) {
    if (param_3 == 0x1d) {
      if (0 < param_1) {
        return 0;
      }
      return 0x17c;
    }
    goto LAB_1000_0d1d;
  }
  if (param_4 < 0x1005) {
    if (param_4 == 0x81) {
      *(undefined2 *)((int)piVar7 + 0x4b) = 0x100;
      *(undefined2 *)((int)piVar7 + 0x29) = 8;
      *(undefined2 *)((int)piVar7 + 0x59) = 0xffff;
      *(undefined2 *)((int)piVar7 + 99) = 0;
      DAT_1008_0b9a = REGISTERWINDOWMESSAGE(unaff_CS,0x4b2);
      unaff_CS = 0x1088;
      goto LAB_1000_0d1d;
    }
    if (0x81 < param_4) {
      if (param_4 == 0x1000) {
        uVar1 = 0x1000;
        iVar6 = FUN_1000_1598(unaff_CS);
        if (iVar6 == 1) {
LAB_1000_03b7:
          SHOWWINDOW(uVar1,5);
        }
      }
      else {
        if (param_4 != 0x1001) {
          if (param_4 != 0x1003) goto LAB_1000_0d1d;
          if (param_3 == 0x1e) goto LAB_1000_0440;
          goto LAB_1000_0432;
        }
        iVar6 = FUN_1000_1598(unaff_CS);
        if (iVar6 == 1) {
          uVar1 = 0x1000;
          uVar10 = FUN_1000_1510(0x1000,param_6,param_7);
          uVar3 = (undefined2)((ulong)uVar10 >> 0x10);
          iVar6 = (int)uVar10;
          local_6 = (undefined2 *)CONCAT22(uVar3,(int *)local_6);
          if (*(int *)(iVar6 + 99) != 0) {
            uVar3 = FUN_1000_15e8(0x1000,*(undefined2 *)(iVar6 + 0x5b),*(undefined2 *)(iVar6 + 0x5d)
                                  ,0,param_5);
            uVar3 = FUN_1000_15f0(0x1000,*(undefined2 *)(iVar6 + 0x5f),*(undefined2 *)(iVar6 + 0x61)
                                  ,uVar3);
            uVar15 = 0x1000;
            iVar6 = GETSYSTEMMETRICS(0x1000,0xb,uVar3);
            iVar6 = iVar6 + 1;
            uVar2 = 0xc;
            uVar3 = 0x1088;
            iVar4 = GETSYSTEMMETRICS(0x1088,0xc,iVar6);
            uVar1 = 0x1088;
            SETWINDOWPOS(0x1088,0x14,iVar4 + 1,uVar3,uVar2,iVar6,uVar15);
          }
          goto LAB_1000_03b7;
        }
      }
      goto switchD_1000_04a2_default;
    }
    if (param_4 == 5) {
      uVar1 = GETSYSTEMMETRICS(unaff_CS,0xb,0,0,0,param_5);
      uVar16 = 0xc;
      uVar15 = 0x1088;
      uVar3 = unaff_CS;
      uVar2 = GETSYSTEMMETRICS(0x1088,0xc,uVar1);
      unaff_CS = 0x1088;
      SETWINDOWPOS(0x1088,6,uVar2,uVar15,uVar16,uVar1,uVar3);
      goto LAB_1000_0d1d;
    }
    if (param_4 != 0xf) goto LAB_1000_0d1d;
    iVar6 = FUN_1000_1598(unaff_CS);
    unaff_CS = 0x1000;
    if (iVar6 == 1) {
      if (param_3 == 0) {
        BEGINPAINT(0x1000,&local_4a,unaff_SS,param_5);
        DRAWICON(0x1088,DAT_1008_0b98,0,0);
        unaff_CS = 0x1088;
        uVar19 = param_5;
        ENDPAINT(0x1088,&local_4a,unaff_SS);
      }
      else {
        uVar19 = 0;
        unaff_CS = 0x1088;
        DRAWICON(0x1000,DAT_1008_0b98,0,0);
      }
      goto LAB_1000_0d1d;
    }
LAB_1000_0d12:
    if (param_3 == 0x1e) {
LAB_1000_0440:
      iVar6 = FUN_1000_00ca(DAT_1008_0b96,param_1,param_2,param_4,param_6,param_7);
      return iVar6;
    }
LAB_1000_0d1d:
    iVar6 = FUN_1000_1518(unaff_CS,param_1,param_2,param_3,param_4,param_5,param_6,param_7,uVar19);
    return iVar6;
  }
  if (param_4 == 0x1009) goto LAB_1000_0d12;
  if (0x1009 < param_4) {
    if (param_4 == 0x1011) {
      return 0x1a5;
    }
    if (param_4 != 0x1022) {
      if (param_4 == 0x1023) {
        GETSYSTEMMETRICS(unaff_CS,0xc,uVar19);
        iVar6 = GETSYSTEMMETRICS(0x1088,0xb);
        return iVar6 + 1;
      }
      goto LAB_1000_0d1d;
    }
    unaff_CS = 0x1000;
    iVar6 = FUN_1000_13bc(param_1,param_2,param_3);
    if (iVar6 != 0) goto LAB_1000_0d1d;
    FUN_1000_141c(param_1,param_2,param_3);
    goto switchD_1000_04a2_default;
  }
  if (param_4 != 0x1005) {
    if (param_4 == 0x1006) {
LAB_1000_0432:
      if (param_3 == 0x1c) {
        lVar14 = FUN_1000_1650(unaff_CS,0xffff,0xffff,param_1);
        if (lVar14 != -1) {
          return 0;
        }
        return 5;
      }
      goto LAB_1000_0d1d;
    }
    if ((param_4 != 0x1007) || (param_3 != 0x1c)) goto LAB_1000_0d1d;
    iVar6 = FUN_1000_1580(unaff_CS,8,(int)piVar7 + 0x5b,uVar3,param_1);
    if (iVar6 != 0) {
      return iVar6;
    }
    uVar10 = FUN_1000_1510(0x1000,param_6,param_7);
    *(undefined2 *)((int)uVar10 + 99) = 1;
    goto switchD_1000_04a2_default;
  }
  if (param_3 != 7) goto LAB_1000_0d1d;
  if ((char)piVar7[0xc] == '\0') goto switchD_1000_04a2_default;
  uVar1 = 0x1000;
  switch((char)piVar7[0xc]) {
  case '\x01':
  case '\x02':
    uVar10 = FUN_1000_1510(0x1000,param_6,param_7);
    uVar3 = (undefined2)((ulong)uVar10 >> 0x10);
    iVar6 = (int)uVar10;
    local_6 = (undefined2 *)CONCAT22(uVar3,(int *)local_6);
    if (*(int *)(iVar6 + 6) == 0 && *(int *)(iVar6 + 4) == 0) {
      local_b2 = &local_2a;
    }
    else {
      pcVar18 = &local_2a;
      uVar1 = unaff_SS;
      uVar10 = FUN_1000_1548(0x1000,*(undefined2 *)(iVar6 + 4),*(undefined2 *)(iVar6 + 6),pcVar18);
      local_b2 = (char *)FUN_1000_105c(0xf,uVar10,pcVar18,uVar1);
    }
    local_6 = (undefined2 *)FUN_1000_1510(0x1000,param_6,param_7);
    uVar3 = (undefined2)((ulong)local_6 >> 0x10);
    local_ba = FUN_1000_0dde(*(undefined2 *)((int)(undefined2 *)local_6 + 0x4b),&local_18,unaff_SS,
                             *local_6,((undefined2 *)local_6)[1]);
    local_6 = (undefined2 *)FUN_1000_1510(0x1000,param_6,param_7);
    uVar3 = (undefined2)((ulong)local_6 >> 0x10);
    local_ca = FUN_1000_0e28(&local_1a,unaff_SS,*(undefined2 *)((int)local_6 + 0xc),
                             *(undefined2 *)((int)local_6 + 0xe));
    uVar1 = 0x1000;
    local_6 = (undefined2 *)FUN_1000_1510(0x1000,param_6,param_7);
    uVar3 = (undefined2)((ulong)local_6 >> 0x10);
    if ((local_18 != 0) && (local_1a != 0)) {
      local_c4 = 0;
      local_c6 = 0;
      FUN_1000_1550(0x1000,*(undefined2 *)((int)local_6 + 8),*(undefined2 *)((int)local_6 + 10));
      uVar3 = (undefined2)((ulong)local_6 >> 0x10);
      FUN_1000_1550(0x1000,*(undefined2 *)((int)local_6 + 0x10),*(undefined2 *)((int)local_6 + 0x12)
                   );
      uVar3 = (undefined2)((ulong)local_6 >> 0x10);
      FUN_1000_1550(0x1000,*(undefined2 *)((int)local_6 + 0x14),*(undefined2 *)((int)local_6 + 0x16)
                   );
      local_d2 = 0x48;
      local_d0 = 0;
      local_ce = FUN_1000_10f2(param_5);
      local_c0 = 0;
      local_c2 = 0;
      uVar1 = (undefined2)((ulong)local_6 >> 0x10);
      iVar6 = (int)local_6;
      local_b6 = *(int *)(iVar6 + 0x4b);
      local_b4 = local_b6 >> 0xf;
      uVar19 = *(uint *)(iVar6 + 0x1d);
      uVar3 = *(undefined2 *)(iVar6 + 0x1f);
      local_be = *(undefined2 *)(iVar6 + 0x25);
      local_bc = *(undefined2 *)(iVar6 + 0x27);
      local_16 = FUN_1000_0e9e(uVar19 & 0x10,&local_d2,unaff_SS,param_6,param_7);
      local_6 = (undefined2 *)FUN_1000_1510(0x1000,param_6,param_7);
      uVar1 = (undefined2)((ulong)local_6 >> 0x10);
      iVar6 = (int)local_6;
      *(uint *)(iVar6 + 0x1d) = uVar19 & 0xff1f;
      *(undefined2 *)(iVar6 + 0x1f) = uVar3;
      FUN_1000_1558(0x1000,*(undefined2 *)(iVar6 + 8),*(undefined2 *)(iVar6 + 10));
      FUN_1000_1558(0x1000,*(undefined2 *)((int)(int *)local_6 + 0x10),
                    *(undefined2 *)((int)(int *)local_6 + 0x12));
      FUN_1000_1558(0x1000,*(undefined2 *)((int)(int *)local_6 + 0x14),
                    *(undefined2 *)((int)(int *)local_6 + 0x16));
      uVar10 = FUN_1000_1510(0x1000,param_6,param_7);
      uVar3 = (undefined2)((ulong)uVar10 >> 0x10);
      iVar6 = (int)uVar10;
      local_6 = (undefined2 *)uVar10;
      if (*(int *)(iVar6 + 6) != 0 || *(int *)(iVar6 + 4) != 0) {
        FUN_1000_1540(0x1000,*(undefined2 *)(iVar6 + 4),*(undefined2 *)(iVar6 + 6));
      }
      FUN_1000_1510(0x1000,param_6,param_7);
      if (local_2a != '\0') {
        uVar10 = FUN_1000_1538(0x1000,&local_2a);
        local_a._2_2_ = (undefined2)((ulong)uVar10 >> 0x10);
        uVar11 = FUN_1000_1510(0x1000,param_6,param_7);
        uVar3 = (undefined2)((ulong)uVar11 >> 0x10);
        *(undefined2 *)((int)uVar11 + 4) = (int)uVar10;
        *(undefined2 *)((int)uVar11 + 6) = local_a._2_2_;
      }
      piVar9 = (int *)FUN_1000_1510(0x1000,param_6,param_7);
      uVar3 = (undefined2)((ulong)piVar9 >> 0x10);
      piVar7 = (int *)piVar9;
      local_6 = (undefined2 *)CONCAT22(uVar3,(int *)local_6);
      if (piVar7[1] != 0 || *piVar9 != 0) {
        FUN_1000_1540(0x1000,*piVar9,piVar7[1]);
      }
      local_a = FUN_1000_1538(0x1000,local_ba,param_7);
      puVar12 = (undefined2 *)FUN_1000_1510(0x1000,param_6,param_7);
      *puVar12 = (uint)local_a;
      ((undefined2 *)puVar12)[1] = local_a._2_2_;
      local_1d2._0_2_ = local_18;
      GLOBALUNLOCK(0x1000);
      GLOBALUNLOCK(0x1088,local_1a);
      GLOBALFREE(0x1088,local_18);
      uVar16 = 0x1088;
      GLOBALFREE(0x1088,local_1a);
      iVar6 = local_16;
      break;
    }
    local_a._0_2_ = 0xf;
LAB_1000_0c6a:
    uVar13 = (ulong)(uint)local_a;
    goto LAB_1000_0c02;
  case '\x03':
    local_4a = 0x20;
    local_48 = 0;
    local_46._0_2_ = FUN_1000_10f2(param_5);
    local_42 = FUN_1000_120c(*(undefined2 *)((int)piVar7 + 0x19),*(undefined2 *)((int)piVar7 + 0x1b)
                            );
    local_3e = 0x46e;
    local_3c = 0x1008;
    local_38 = *(undefined2 *)((int)piVar7 + 0x1f);
    local_3a = *(uint *)((int)piVar7 + 0x1d) & 0xff8f;
    iVar6 = FUN_1000_0e9e(*(uint *)((int)piVar7 + 0x1d) & 8,&local_4a,unaff_SS,param_6,param_7);
    *(undefined2 *)((int)piVar7 + 0x19) = (undefined2)local_42;
    *(undefined2 *)((int)piVar7 + 0x1b) = local_42._2_2_;
    uVar16 = uVar1;
    local_1a = uVar19;
    break;
  case '\x04':
    local_6._0_2_ = piVar7;
    uVar2 = GETDC(0x1000,0);
    uVar3 = *(undefined2 *)((int)(int *)local_6 + 0x29);
    uVar1 = uVar2;
    uVar15 = GETDEVICECAPS(0x1088,0x5a);
    local_8a[0] = MULDIV(0x1088,0x48,uVar15);
    local_8a[0] = -local_8a[0];
    uVar15 = 0;
    RELEASEDC(0x1088,uVar2);
    if ((*(byte *)((int)(int *)local_6 + 0x1d) & 2) == 0) {
      uVar3 = FUN_1000_10f2(param_5,uVar15,uVar1,uVar3);
      uVar19 = GETDC(0x1088,uVar3);
    }
    else {
      uVar3 = 0x1088;
      uVar19 = FUN_1000_122e();
    }
    uVar1 = 0x1088;
    local_80 = *(byte *)((int)(int *)local_6 + 0x31);
    local_7f = *(byte *)((int)(int *)local_6 + 0x35);
    local_7e = *(byte *)((int)(int *)local_6 + 0x33);
    local_8a[1] = 0;
    if (*(int *)((int)(int *)local_6 + 0x2f) == 0) {
      local_82 = 400;
    }
    else {
      local_82 = 700;
    }
    if (*(int *)((int)(int *)local_6 + 0x2d) != 0 || *(int *)((int)(int *)local_6 + 0x2b) != 0) {
      puVar17 = local_78;
      uVar1 = 0x1000;
      uVar2 = unaff_SS;
      uVar10 = FUN_1000_1548(0x1088,*(undefined2 *)((int)(int *)local_6 + 0x2b),
                             *(undefined2 *)((int)(int *)local_6 + 0x2d),puVar17);
      FUN_1000_105c(0x18,uVar10,puVar17,uVar2);
    }
    local_58 = 0x2e;
    local_56 = 0;
    local_54 = FUN_1000_10f2(param_5,uVar3);
    local_50 = local_8a;
    local_32 = 0;
    local_34 = 0;
    local_30 = 0x8000;
    local_2e = *(undefined2 *)((int)(int *)local_6 + 0x3b);
    local_2c = *(undefined2 *)((int)(int *)local_6 + 0x3d);
    local_48 = *(undefined2 *)((int)(int *)local_6 + 0x1f);
    local_4a = *(uint *)((int)(int *)local_6 + 0x1d) & 0xfd47 | 0x40;
    local_52 = uVar19;
    local_46 = FUN_1000_120c(*(undefined2 *)((int)(int *)local_6 + 0x19),
                             *(undefined2 *)((int)(int *)local_6 + 0x1b));
    iVar6 = *(int *)((int)(int *)local_6 + 0x29);
    local_16 = FUN_1000_0e9e(local_4a & 4,&local_58,unaff_SS,param_6,param_7);
    *(int *)((int)(int *)local_6 + 0x29) = (iVar6 * 10) / 10;
    *(undefined2 *)((int)(int *)local_6 + 0x19) = (undefined2)local_46;
    *(undefined2 *)((int)(int *)local_6 + 0x1b) = local_46._2_2_;
    local_6 = (undefined2 *)FUN_1000_1510(uVar1,param_6,param_7);
    uVar3 = (undefined2)((ulong)local_6 >> 0x10);
    iVar6 = (int)local_6;
    if (*(int *)(iVar6 + 0x2d) != 0 || *(int *)(iVar6 + 0x2b) != 0) {
      FUN_1000_1540(0x1000,*(undefined2 *)(iVar6 + 0x2b),*(undefined2 *)(iVar6 + 0x2d));
    }
    FUN_1000_1510(0x1000,param_6,param_7);
    local_a = FUN_1000_1538(0x1000,local_78);
    uVar10 = FUN_1000_1510(0x1000,param_6,param_7);
    uVar3 = (undefined2)((ulong)uVar10 >> 0x10);
    *(undefined2 *)((int)uVar10 + 0x2b) = (uint)local_a;
    *(undefined2 *)((int)uVar10 + 0x2d) = local_a._2_2_;
    piVar9 = (int *)FUN_1000_1510(0x1000,param_6,param_7);
    uVar3 = (undefined2)((ulong)piVar9 >> 0x10);
    piVar7 = (int *)piVar9;
    local_6 = (undefined2 *)CONCAT22(uVar3,(int *)local_6);
    *(uint *)((int)piVar7 + 0x31) = (uint)local_80;
    *(uint *)((int)piVar7 + 0x35) = (uint)local_7f;
    *(uint *)((int)piVar7 + 0x33) = (uint)local_7e;
    if (local_82 == 400) {
      *(undefined2 *)((int)piVar7 + 0x2f) = 0;
    }
    else if (local_82 == 700) {
      *(undefined2 *)((int)piVar7 + 0x2f) = 1;
    }
    if ((*(byte *)((int)piVar7 + 0x1d) & 2) == 0) {
      uVar5 = FUN_1000_10f2(param_5);
      uVar16 = 0x1088;
      RELEASEDC(0x1000,uVar19);
      iVar6 = local_16;
      local_1a = uVar5;
    }
    else {
      uVar16 = 0x1088;
      DELETEDC(0x1000,uVar19);
      iVar6 = local_16;
      local_1a = uVar19;
    }
    break;
  case '\x05':
    local_5e = 0x34;
    local_5c = 0;
    local_5a = FUN_1000_10f2(param_5);
    local_58 = 0;
    local_56 = 0;
    local_52 = *(uint *)((int)piVar7 + 0x1d) & 0xfff;
    local_50 = (int *)(*(uint *)((int)piVar7 + 0x1f) & 0xfffc);
    uVar3 = *(undefined2 *)((int)piVar7 + 0x37);
    uVar2 = *(undefined2 *)((int)piVar7 + 0x39);
    local_4a = *(uint *)((int)piVar7 + 0x3b);
    local_48 = *(undefined2 *)((int)piVar7 + 0x3d);
    local_46._0_2_ = *(undefined2 *)((int)piVar7 + 0x3f);
    local_46._2_2_ = 0;
    local_16 = FUN_1000_0e9e((local_52 >> 8 & 8) << 8,&local_5e,unaff_SS,param_6,param_7);
    if ((*(int *)((int)piVar7 + 0x59) != 0) &&
       (local_14 = CONCAT22(local_14._2_2_,(undefined2)local_14),
       local_10 = (code *)CONCAT22(local_10._2_2_,(code *)local_10), local_56 != 0)) {
      uVar10 = GLOBALLOCK(0x1000,local_56);
      local_a._2_2_ = (undefined2)((ulong)uVar10 >> 0x10);
      iVar6 = (int)uVar10;
      local_14 = GLOBALLOCK(0x1088,local_58);
      _WSPRINTF(0x1088,&local_1d2);
      uVar1 = 0x1088;
      uVar19 = LOADLIBRARY(0x1088,&local_1d2);
      local_c = uVar19;
      if (uVar19 < 0x21) {
        local_a._0_2_ = 0x1004;
      }
      else {
        uVar1 = 0x1088;
        local_10 = (code *)GETPROCADDRESS(0x1088,0x4c6,0x1008);
        if (local_10 != (code *)0x0) {
          (*(code *)local_10)(0x1088,9,0,0,local_14,*(int *)(iVar6 + 4) + iVar6,local_a._2_2_,
                              *(int *)(iVar6 + 2) + iVar6,local_a._2_2_,0,0,local_c,0,uVar19);
          uStack_1ce = local_c;
          local_1d2._2_2_ = 0x1088;
          local_1d2._0_2_ = 0xb29;
          FREELIBRARY();
          local_1d2._0_2_ = *(int *)(iVar6 + 4) + iVar6;
          local_1d2._2_2_ = local_a._2_2_;
          local_1d2 = FUN_1000_1374();
          _WSPRINTF(0x1088,&local_1d2);
          local_1d2._0_2_ = 0x1008;
          WRITEPROFILESTRING(0x1088,&local_1d2,unaff_SS,0x4dd,0x1008,0x4e4);
          uVar1 = 0xffff;
          SENDMESSAGE(0x1088,0x4ec,0x1008,0,0x1a);
          GLOBALUNLOCK(0x1088,local_56,uVar1);
          uVar1 = 0x1088;
          uVar19 = local_58;
          GLOBALUNLOCK(0x1088,local_58);
          goto LAB_1000_0b8f;
        }
        local_a._0_2_ = 0x1005;
      }
      goto LAB_1000_0c6a;
    }
LAB_1000_0b8f:
    uVar15 = uVar1;
    if (local_58 != 0) {
      uVar15 = 0x1088;
      GLOBALFREE(uVar1,local_58);
    }
    uVar16 = uVar15;
    if (local_56 != 0) {
      uVar16 = 0x1088;
      GLOBALFREE(uVar15,local_56);
    }
    *(uint *)((int)piVar7 + 0x1d) = local_52;
    *(uint *)((int)piVar7 + 0x1f) = (uint)local_50;
    *(undefined2 *)((int)piVar7 + 0x37) = uVar3;
    *(undefined2 *)((int)piVar7 + 0x39) = uVar2;
    *(uint *)((int)piVar7 + 0x3b) = local_4a;
    *(undefined2 *)((int)piVar7 + 0x3d) = local_48;
    *(undefined2 *)((int)piVar7 + 0x3f) = (undefined2)local_46;
    *(undefined2 *)((int)piVar7 + 0x41) = local_54;
    iVar6 = local_16;
    local_1a = uVar19;
    break;
  case '\x06':
    iVar6 = FUN_1000_0d3e(piVar9);
    if (iVar6 == 0) {
      local_a._0_2_ = 0x10;
      goto LAB_1000_0c6a;
    }
  default:
    goto switchD_1000_04a2_default;
  }
  if (iVar6 == 0) {
    uVar1 = 0x1088;
    uVar13 = COMMDLGEXTENDEDERROR(uVar16,local_1a);
    if (uVar13 == 0) {
      if (*(int *)((int)piVar7 + 0x43) == 0) goto switchD_1000_04a2_default;
      local_a = uVar13;
      LOADSTRING(0x1088,0xff,&local_1d2,unaff_SS,0xc);
    }
    else {
LAB_1000_0c02:
      local_a._0_2_ = (uint)uVar13;
      LOADSTRING(uVar1,0xff,&local_1d2,unaff_SS,(uint)local_a);
      local_a = uVar13;
    }
    iVar6 = FUN_1000_1630(0x1088,&local_1d2);
  }
  else {
switchD_1000_04a2_default:
    iVar6 = 0;
  }
  return iVar6;
}


// ---- FUN_1000_0d3e @ 1000:0d3e

undefined2 FUN_1000_0d3e(undefined4 param_1)

{
  uint uVar1;
  bool bVar2;
  undefined2 uVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 unaff_CS;
  ulong uVar6;
  undefined4 uVar7;
  
  bVar2 = false;
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  iVar4 = (int)param_1;
  uVar1 = *(uint *)(iVar4 + 0x51);
  if (uVar1 == 8) {
LAB_1000_0d78:
    uVar6 = (ulong)*(uint *)(iVar4 + 0x53);
  }
  else {
    if (uVar1 < 9) {
      if ((uVar1 == 1) || (uVar1 == 5)) goto LAB_1000_0d78;
    }
    else if ((0x100 < uVar1) && ((uVar1 == 0x101 || uVar1 == 0x102 || (uVar1 == 0x105)))) {
      unaff_CS = 0x1000;
      uVar6 = FUN_1000_1550();
      bVar2 = true;
      goto LAB_1000_0d9a;
    }
    uVar6 = 0;
  }
LAB_1000_0d9a:
  uVar7 = FUN_1000_1548(unaff_CS,*(undefined2 *)(iVar4 + 0x4d),*(undefined2 *)(iVar4 + 0x4f),0);
  uVar3 = WINHELP(0x1000,uVar6,*(undefined2 *)(iVar4 + 0x51),uVar7);
  if (bVar2) {
    FUN_1000_1558(0x1088,*(undefined2 *)(iVar4 + 0x55),*(undefined2 *)(iVar4 + 0x57));
  }
  return uVar3;
}


// ---- FUN_1000_0dde @ 1000:0dde

void FUN_1000_0dde(int param_1,int *param_2,undefined2 param_3,undefined2 param_4)

{
  int iVar1;
  undefined2 unaff_CS;
  undefined4 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x60;
  iVar1 = GLOBALALLOC(unaff_CS,param_1 + 1,param_1 + 1 >> 0xf);
  *param_2 = iVar1;
  if (iVar1 != 0) {
    uVar2 = GLOBALLOCK(0x1088,*param_2,uVar3);
    uVar2 = FUN_1000_1548(0x1088,param_3,param_4,uVar2);
    FUN_1000_105c(param_1,uVar2,param_3,param_4);
    return;
  }
  return;
}


// ---- FUN_1000_0e28 @ 1000:0e28

undefined4 FUN_1000_0e28(int *param_1,undefined2 param_2,undefined2 param_3)

{
  int iVar1;
  undefined2 unaff_CS;
  undefined4 uVar2;
  char *pcVar3;
  undefined2 uVar4;
  
  uVar4 = 0x60;
  iVar1 = GLOBALALLOC(unaff_CS,0x802,0);
  *param_1 = iVar1;
  if (iVar1 != 0) {
    uVar2 = GLOBALLOCK(0x1088,*param_1,uVar4);
    pcVar3 = (char *)FUN_1000_1548(0x1088,param_2,param_3);
    if (*pcVar3 != '\0') {
      FUN_1000_105c(0x800,pcVar3,uVar2);
      FUN_1000_109e(uVar2);
      return uVar2;
    }
  }
  return 0;
}


// ---- FUN_1000_0e9e @ 1000:0e9e

int FUN_1000_0e9e(int param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
                 undefined2 param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  int *piVar6;
  undefined2 unaff_SS;
  undefined4 uVar7;
  undefined2 uVar8;
  int iVar9;
  int local_10e [127];
  undefined4 local_10;
  int local_c;
  int local_a;
  int local_8;
  int local_6;
  int local_4;
  
  local_a = 0;
  uVar8 = param_4;
  uVar5 = param_5;
  local_10 = FUN_1000_1510();
  local_4 = FUN_1000_15a0(0x1000,uVar8,uVar5);
  local_c = GETACTIVEWINDOW(0x1000);
  iVar2 = GETDESKTOPWINDOW(0x1088);
  iVar3 = GETWINDOW(0x1088,5);
  if (iVar3 != 0) {
    piVar6 = local_10e;
    do {
      uVar8 = 0x1088;
      iVar9 = iVar3;
      iVar4 = GETWINDOWWORD(0x1088,0xfffa);
      if (((iVar4 == local_4) &&
          (iVar2 = ISWINDOWENABLED(uVar8,iVar3,iVar9,iVar2,0x1088), iVar2 != 0)) &&
         (local_c != iVar3)) {
        *piVar6 = iVar3;
        piVar6 = piVar6 + 1;
        local_a = local_a + 1;
        ENABLEWINDOW(0x1088,0);
      }
      iVar2 = iVar3;
      iVar3 = GETWINDOW(0x1088,2);
    } while (iVar3 != 0);
  }
  uVar8 = 0x1088;
  if (param_1 != 0) {
    uVar8 = 0x1000;
    uVar5 = FUN_1000_1560(0x1088,param_4,param_5);
    local_8 = FUN_1000_10f2(uVar5);
    if (local_8 != 0) {
      local_6 = FUN_1000_1180(local_4);
      if (local_6 == -1) {
        return 0;
      }
      iVar2 = local_6 * 10;
      *(undefined2 *)(iVar2 + 0x6a2) = param_4;
      *(undefined2 *)(iVar2 + 0x6a4) = param_5;
      *(int *)(iVar2 + 0x6a0) = local_4;
      uVar7 = GETWINDOWLONG(0x1000,0xfffc);
      *(undefined2 *)(iVar2 + 0x6a6) = (int)uVar7;
      *(undefined2 *)(iVar2 + 0x6a8) = (int)((ulong)uVar7 >> 0x10);
      uVar8 = 0x1088;
      SETWINDOWLONG(0x1088,0x11a2,0x1000,0xfffc);
    }
  }
  cVar1 = *(char *)((int)local_10 + 0x18);
  if (cVar1 == '\x01') {
    iVar2 = GETOPENFILENAME(uVar8,param_2);
  }
  else if (cVar1 == '\x02') {
    iVar2 = GETSAVEFILENAME(uVar8,param_2);
  }
  else if (cVar1 == '\x03') {
    iVar2 = CHOOSECOLOR(uVar8,param_2);
  }
  else if (cVar1 == '\x04') {
    iVar2 = CHOOSEFONT(uVar8,param_2);
  }
  else {
    iVar2 = local_4;
    if (cVar1 != '\x05') goto LAB_1000_0ff5;
    iVar2 = PRINTDLG(uVar8,param_2);
  }
  uVar8 = 0x1088;
LAB_1000_0ff5:
  uVar5 = uVar8;
  if (param_1 != 0) {
    iVar3 = local_6 * 10;
    uVar5 = 0x1088;
    SETWINDOWLONG(uVar8,*(undefined2 *)(iVar3 + 0x6a6),*(undefined2 *)(iVar3 + 0x6a8),0xfffc);
    *(undefined2 *)(iVar3 + 0x6a0) = 0;
  }
  if (local_a != 0) {
    local_4 = iVar2;
    iVar3 = local_a;
    uVar8 = uVar5;
    do {
      iVar3 = iVar3 + -1;
      uVar5 = 0x1088;
      ENABLEWINDOW(uVar8,1);
      iVar2 = local_4;
      uVar8 = uVar5;
    } while (iVar3 != 0);
  }
  SETFOCUS(uVar5,local_c);
  return iVar2;
}


// ---- FUN_1000_105c @ 1000:105c

undefined4 FUN_1000_105c(int param_1,char *param_2,undefined2 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  undefined2 uVar3;
  
  iVar2 = 0;
  cVar1 = *param_2;
  uVar3 = (undefined2)((ulong)param_4 >> 0x10);
  while ((cVar1 != '\0' && (iVar2 < param_1))) {
    *(char *)((int)param_4 + iVar2) = param_2[iVar2];
    iVar2 = iVar2 + 1;
    cVar1 = param_2[iVar2];
  }
  *(undefined1 *)((int)param_4 + iVar2) = 0;
  return param_4;
}


// ---- FUN_1000_109e @ 1000:109e

void FUN_1000_109e(char *param_1,undefined2 param_2)

{
  char cVar1;
  int iVar2;
  undefined2 unaff_CS;
  
  iVar2 = LSTRLEN(unaff_CS,param_1);
  if (param_1[iVar2 + -1] != '|') {
    LSTRCAT(0x1088,0x4f4,0x1008,param_1);
  }
  cVar1 = *param_1;
  while (cVar1 != '\0') {
    if (*param_1 == '|') {
      *param_1 = '\0';
    }
    param_1 = param_1 + 1;
    cVar1 = *param_1;
  }
  return;
}


// ---- FUN_1000_10f2 @ 1000:10f2

int FUN_1000_10f2(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  int iVar5;
  
  iVar1 = FUN_1000_15a0();
  iVar2 = GETACTIVEWINDOW(0x1000);
  iVar5 = iVar2;
  iVar3 = GETWINDOWWORD(0x1088,0xfffa);
  if (iVar3 != iVar1) {
    uVar4 = GETDESKTOPWINDOW(0x1088,iVar5);
    iVar2 = GETWINDOW(0x1088,5);
    while( true ) {
      if (iVar2 == 0) {
        return 0;
      }
      iVar5 = iVar2;
      iVar3 = GETWINDOWWORD(0x1088,0xfffa);
      if ((iVar3 == iVar1) && (iVar5 = ISWINDOWENABLED(0x1088,iVar2,iVar5,uVar4), iVar5 != 0))
      break;
      iVar2 = GETWINDOW(0x1088,2);
    }
  }
  return iVar2;
}


// ---- FUN_1000_1154 @ 1000:1154

int FUN_1000_1154(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = (int *)&DAT_1008_06a0;
  do {
    if (*piVar2 == param_1) {
      return iVar1;
    }
    piVar2 = piVar2 + 5;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x7f);
  return -1;
}


// ---- FUN_1000_1180 @ 1000:1180

int FUN_1000_1180(void)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = (int *)&DAT_1008_06a0;
  do {
    if (*piVar2 == 0) {
      return iVar1;
    }
    piVar2 = piVar2 + 5;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x7f);
  return -1;
}


// ---- HELPFORMPROC @ 1000:11a2

void __stdcall16far
HELPFORMPROC(undefined2 param_1,undefined2 param_2,undefined2 param_3,int param_4,undefined2 param_5
            )

{
  undefined2 *puVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined2 uVar5;
  
  uVar5 = 0x1008;
  uVar2 = FUN_1000_15a0();
  iVar3 = FUN_1000_1154(uVar2,uVar5);
  if (param_4 == DAT_1008_0b9a) {
    uVar4 = FUN_1000_1510(0x1000,*(undefined2 *)(iVar3 * 10 + 0x6a2),
                          *(undefined2 *)(iVar3 * 10 + 0x6a4));
    FUN_1000_0d3e(uVar4);
    return;
  }
  puVar1 = (undefined2 *)(iVar3 * 10 + 0x6a6);
  (*(code *)*puVar1)(0x1000,param_1,param_2,param_3,param_4,param_5);
  return;
}


// ---- FUN_1000_120c @ 1000:120c

undefined2 FUN_1000_120c(undefined2 param_1,uint param_2)

{
  undefined2 uVar1;
  
  if ((param_2 & 0x8000) != 0) {
    uVar1 = GETSYSCOLOR();
    return uVar1;
  }
  return param_1;
}


// ---- FUN_1000_122e @ 1000:122e

void __cdecl16far FUN_1000_122e(void)

{
  char cVar1;
  int iVar2;
  undefined2 uVar3;
  char *pcVar4;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  char *pcVar5;
  char local_8e [128];
  char *local_e;
  char *local_a;
  undefined2 local_8;
  char *local_6;
  
  iVar2 = GETPROFILESTRING(unaff_CS,0x80,local_8e,unaff_SS,0x4f6,0x1008,0x4f7,0x1008,0x4fe);
  if (iVar2 != 0) {
    pcVar4 = local_8e;
    uVar3 = unaff_SS;
    while ((local_8e[0] != '\0' && (*pcVar4 != ','))) {
      pcVar5 = (char *)ANSINEXT(0x1088,pcVar4);
      pcVar4 = (char *)pcVar5;
      local_8e[0] = *pcVar5;
      uVar3 = (undefined2)((ulong)pcVar5 >> 0x10);
    }
    if (*pcVar4 != '\0') {
      *pcVar4 = '\0';
      pcVar4 = pcVar4 + 1;
    }
    pcVar5 = (char *)CONCAT22(uVar3,pcVar4);
    cVar1 = *pcVar4;
    while ((cVar1 != '\0' && (*pcVar5 < '!'))) {
      pcVar5 = (char *)ANSINEXT(0x1088,(char *)pcVar5);
      cVar1 = *pcVar5;
    }
    local_e = pcVar5;
    cVar1 = *pcVar5;
    while( true ) {
      uVar3 = (undefined2)((ulong)pcVar5 >> 0x10);
      pcVar4 = (char *)pcVar5;
      if (((cVar1 == '\0') || (*pcVar5 == ',')) || (*pcVar5 < '!')) break;
      pcVar5 = (char *)ANSINEXT(0x1088,pcVar4);
      cVar1 = *pcVar5;
    }
    if (*pcVar5 != '\0') {
      *pcVar5 = '\0';
      pcVar4 = pcVar4 + 1;
    }
    pcVar5 = (char *)CONCAT22(uVar3,pcVar4);
    cVar1 = *pcVar4;
    while( true ) {
      pcVar4 = (char *)pcVar5;
      if ((cVar1 == '\0') || ((' ' < *pcVar5 && (*pcVar5 != ',')))) break;
      pcVar5 = (char *)ANSINEXT(0x1088,pcVar4);
      cVar1 = *pcVar5;
    }
    local_8 = (int)((ulong)pcVar5 >> 0x10);
    _local_6 = pcVar5;
    cVar1 = *pcVar5;
    while (cVar1 != '\0') {
      local_a = (char *)pcVar5;
      if (*local_6 < '!') break;
      _local_6 = (char *)ANSINEXT(0x1088,local_6);
      pcVar5 = (char *)CONCAT22((int)((ulong)_local_6 >> 0x10),local_a);
      cVar1 = *_local_6;
    }
    *_local_6 = '\0';
    CREATEDC(0x1088,0,0,pcVar4,local_8,local_8e,unaff_SS,(char *)local_e);
  }
  return;
}


// ---- FUN_1000_1374 @ 1000:1374

int FUN_1000_1374(int param_1,undefined2 param_2)

{
  int iVar1;
  undefined2 unaff_CS;
  
  iVar1 = LSTRLEN(unaff_CS,param_1);
  if (*(char *)(param_1 + iVar1 + -1) != ':') {
    LSTRCPY(0x1088,param_1,param_2,0x672);
    iVar1 = LSTRCAT(0x1088,0x506,0x1008,0x672);
    return iVar1;
  }
  return param_1;
}


// ---- FUN_1000_13bc @ 1000:13bc

bool __stdcall16far FUN_1000_13bc(int param_1,undefined2 param_2,uint param_3)

{
  int iVar1;
  
  if ((param_3 & 0xff) == 1) {
    iVar1 = *(int *)(param_1 + 0x1a);
  }
  else {
    if ((param_3 & 0xff) != 2) {
      return false;
    }
    iVar1 = *(int *)(param_1 + 0x1c);
  }
  return 0xefff < *(uint *)(iVar1 + (param_3 >> 8) * 2);
}


// ---- FUN_1000_141c @ 1000:141c

void __stdcall16far FUN_1000_141c(int param_1,undefined2 param_2,undefined2 param_3)

{
  int iVar1;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  uint local_10a;
  undefined1 local_108;
  undefined1 local_107 [125];
  undefined1 local_8a [128];
  uint *local_a;
  undefined2 uVar2;
  
  local_a = &local_10a;
  LSTRCPY(unaff_CS,*(undefined2 *)(param_1 + 0x16),0x1008,local_8a);
  if ((char)param_3 == '\x01') {
    LSTRCAT(0x1088,*(undefined2 *)
                    *(undefined2 *)((uint)param_3._1_1_ * 2 + *(int *)(param_1 + 0x1a)),0x1008,
            local_8a);
    uVar2 = 0x5000;
  }
  else if ((char)param_3 == '\x02') {
    LSTRCAT(0x1088,*(undefined2 *)
                    *(undefined2 *)((uint)param_3._1_1_ * 2 + *(int *)(param_1 + 0x1c)),0x1008,
            local_8a);
    uVar2 = 0x5600;
  }
  else {
    uVar2 = unaff_SS;
    if ((char)param_3 == '\x03') {
      uVar2 = 0x4300;
    }
  }
  iVar1 = LSTRLEN(0x1088,local_8a);
  local_10a = iVar1 + 4;
  if (local_10a < 0x81) {
    local_108 = (undefined1)((uint)uVar2 >> 8);
    LSTRCPY(0x1088,local_8a,unaff_SS,local_107);
    GETACTIVEWINDOW(0x1088);
    WINHELP(0x1088,&local_10a,unaff_SS,0x201,0x508,0x1008);
  }
  return;
}


// ---- FUN_1000_1508 @ 1000:1508

void FUN_1000_1508(void)

{
  undefined2 unaff_SS;
  
                    /* WARNING: Could not recover jumptable at 0x1000150b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)*(uint *)((char *)s_Click_on_______for_About_Box_1008_001c + 4))();
  return;
}


// ---- FUN_1000_1510 @ 1000:1510

void FUN_1000_1510(void)

{
  undefined2 unaff_SS;
  
                    /* WARNING: Could not recover jumptable at 0x10001513. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)*(uint *)((char *)s_Click_on_______for_About_Box_1008_001c + 4))();
  return;
}


// ---- FUN_1000_1518 @ 1000:1518

void FUN_1000_1518(void)

{
  undefined2 unaff_SS;
  
                    /* WARNING: Could not recover jumptable at 0x1000151b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)*(uint *)((char *)s_Click_on_______for_About_Box_1008_001c + 4))();
  return;
}


// ---- FUN_1000_1538 @ 1000:1538

void FUN_1000_1538(void)

{
  undefined2 unaff_SS;
  
                    /* WARNING: Could not recover jumptable at 0x1000153b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)*(uint *)((char *)s_Click_on_______for_About_Box_1008_001c + 4))();
  return;
}


// ---- FUN_1000_1540 @ 1000:1540

void FUN_1000_1540(void)

{
  undefined2 unaff_SS;
  
                    /* WARNING: Could not recover jumptable at 0x10001543. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)*(uint *)((char *)s_Click_on_______for_About_Box_1008_001c + 4))();
  return;
}


// ---- FUN_1000_1548 @ 1000:1548

void FUN_1000_1548(void)

{
  undefined2 unaff_SS;
  
                    /* WARNING: Could not recover jumptable at 0x1000154b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)*(uint *)((char *)s_Click_on_______for_About_Box_1008_001c + 4))();
  return;
}


// ---- FUN_1000_1550 @ 1000:1550

void FUN_1000_1550(void)

{
  undefined2 unaff_SS;
  
                    /* WARNING: Could not recover jumptable at 0x10001553. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)*(uint *)((char *)s_Click_on_______for_About_Box_1008_001c + 4))();
  return;
}


// ---- FUN_1000_1558 @ 1000:1558

void FUN_1000_1558(void)

{
  undefined2 unaff_SS;
  
                    /* WARNING: Could not recover jumptable at 0x1000155b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)*(uint *)((char *)s_Click_on_______for_About_Box_1008_001c + 4))();
  return;
}


// ---- FUN_1000_1560 @ 1000:1560

void FUN_1000_1560(void)

{
  undefined2 unaff_SS;
  
                    /* WARNING: Could not recover jumptable at 0x10001563. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)*(uint *)((char *)s_Click_on_______for_About_Box_1008_001c + 4))();
  return;
}


// ---- FUN_1000_1580 @ 1000:1580

void FUN_1000_1580(void)

{
  undefined2 unaff_SS;
  
                    /* WARNING: Could not recover jumptable at 0x10001583. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)*(uint *)((char *)s_Click_on_______for_About_Box_1008_001c + 4))();
  return;
}


// ---- FUN_1000_1598 @ 1000:1598

void FUN_1000_1598(void)

{
  undefined2 unaff_SS;
  
                    /* WARNING: Could not recover jumptable at 0x1000159b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)*(uint *)((char *)s_Click_on_______for_About_Box_1008_001c + 4))();
  return;
}


// ---- FUN_1000_15a0 @ 1000:15a0

void FUN_1000_15a0(void)

{
  undefined2 unaff_SS;
  
                    /* WARNING: Could not recover jumptable at 0x100015a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)*(uint *)((char *)s_Click_on_______for_About_Box_1008_001c + 4))();
  return;
}


// ---- FUN_1000_15e8 @ 1000:15e8

void FUN_1000_15e8(void)

{
  undefined2 unaff_SS;
  
                    /* WARNING: Could not recover jumptable at 0x100015eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)*(uint *)((char *)s_Click_on_______for_About_Box_1008_001c + 4))();
  return;
}


// ---- FUN_1000_15f0 @ 1000:15f0

void FUN_1000_15f0(void)

{
  undefined2 unaff_SS;
  
                    /* WARNING: Could not recover jumptable at 0x100015f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)*(uint *)((char *)s_Click_on_______for_About_Box_1008_001c + 4))();
  return;
}


// ---- FUN_1000_1630 @ 1000:1630

void FUN_1000_1630(void)

{
  undefined2 unaff_SS;
  
                    /* WARNING: Could not recover jumptable at 0x10001633. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)*(uint *)((char *)s_Click_on_______for_About_Box_1008_001c + 4))();
  return;
}


// ---- FUN_1000_1640 @ 1000:1640

void FUN_1000_1640(void)

{
  undefined2 unaff_SS;
  
                    /* WARNING: Could not recover jumptable at 0x10001643. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)*(uint *)((char *)s_Click_on_______for_About_Box_1008_001c + 4))();
  return;
}


// ---- FUN_1000_1650 @ 1000:1650

void FUN_1000_1650(void)

{
  undefined2 unaff_SS;
  
                    /* WARNING: Could not recover jumptable at 0x10001653. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)*(uint *)((char *)s_Click_on_______for_About_Box_1008_001c + 4))();
  return;
}


// ---- entry @ 1000:182c

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
  
  DAT_1008_0514 = 0x1008;
  uVar3 = unaff_CS;
  DAT_1008_0512 = unaff_DI;
  DAT_1008_0516 = in_CX;
  DAT_1008_0518 = in_BX;
  DAT_1008_051a = unaff_SI;
  if (in_CX != 0) {
    uVar3 = 0x1088;
    iVar2 = LOCALINIT(unaff_CS,in_CX,0);
    if (iVar2 == 0) {
      return;
    }
  }
  LOCKSEGMENT(uVar3,0xffff);
  uVar4 = 0x186a;
  uVar3 = GETVERSION(0x1088);
  DAT_1008_0538 = CONCAT11((char)uVar3,(char)((uint)uVar3 >> 8));
  if ((DAT_1000_17e8 & 1) == 0) {
    pcVar1 = (code *)swi(0x21);
    DAT_1008_053c = (*pcVar1)();
  }
  else {
    uVar4 = 0x1000;
    DAT_1008_053c = DOS3CALL(0x1000);
  }
  DAT_1008_053a = CONCAT11((char)DAT_1008_053c,(char)((uint)DAT_1008_053c >> 8));
  if ((DAT_1000_17e8 & 1) == 0) {
    DAT_1008_053f = 0;
  }
  FUN_1000_1912(uVar4);
  FUN_1000_1a1a();
  DAT_1008_051c = DAT_1008_051c + '\x01';
  FUN_1000_18e6(DAT_1008_0558,DAT_1008_055a,DAT_1008_055c,DAT_1008_055e,DAT_1008_0560);
  return;
}


// ---- FUN_1000_18ce @ 1000:18ce

undefined2 __stdcall16far FUN_1000_18ce(void)

{
  return 1;
}


// ---- FUN_1000_18e6 @ 1000:18e6

void __cdecl16far FUN_1000_18e6(void)

{
  FUN_1000_0090(DAT_1008_0518,DAT_1008_051a,DAT_1008_0516,DAT_1008_0514,DAT_1008_0512);
  return;
}


// ---- FUN_1000_1912 @ 1000:1912

void __cdecl16far FUN_1000_1912(void)

{
  int unaff_BP;
  int iVar1;
  bool bVar2;
  undefined2 uVar3;
  
  iVar1 = unaff_BP + 1;
  uVar3 = 0x1008;
  if (DAT_1008_0586 != 0) {
    bVar2 = false;
    (*DAT_1008_0584)();
    if (bVar2) {
      FUN_1000_1b00();
      return;
    }
  }
  FUN_1000_19e2(uVar3,iVar1);
  FUN_1000_19e2();
  FUN_1000_19e2();
  return;
}


// ---- FUN_1000_195a @ 1000:195a

undefined2 __cdecl16far FUN_1000_195a(void)

{
  DAT_1008_0569 = 1;
  FUN_1000_19e2();
  FUN_1000_19e2();
  FUN_1000_19e2();
  FUN_1000_19e2();
  FUN_1000_1e08();
  FUN_1000_1b44();
  return 0x100;
}


// ---- FUN_1000_19e2 @ 1000:19e2

void __cdecl16near FUN_1000_19e2(void)

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


// ---- FUN_1000_19f6 @ 1000:19f6

void __cdecl16far FUN_1000_19f6(void)

{
  FUN_1000_1ae9(0xfc);
  FUN_1000_1ae9(0xff);
  return;
}


// ---- FUN_1000_1a1a @ 1000:1a1a

void __cdecl16far FUN_1000_1a1a(void)

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
  pcVar11 = (char *)FUN_1000_1b06();
  uVar5 = (undefined2)((ulong)pcVar11 >> 0x10);
  pcVar9 = (char *)pcVar11;
  puVar12 = (undefined2 *)FUN_1000_1b06();
  uVar6 = (undefined2)((ulong)puVar12 >> 0x10);
  DAT_1008_055e = (undefined2 *)puVar12;
  pcVar8 = (char *)0x0;
  for (; DAT_1008_0560 = (undefined2)((ulong)puVar12 >> 0x10), puVar2 = (undefined2 *)puVar12,
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
      puVar12 = (undefined2 *)CONCAT22(DAT_1008_0560,puVar2 + 2);
    } while (cVar1 != '\0');
  }
  *puVar2 = 0;
  puVar2[1] = 0;
  return;
}


// ---- FUN_1000_1ab2 @ 1000:1ab2

int * __stdcall16far FUN_1000_1ab2(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  piVar3 = (int *)&DAT_1008_0598;
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


// ---- FUN_1000_1ae9 @ 1000:1ae9

undefined2 __stdcall16far FUN_1000_1ae9(void)

{
  return 0x1008;
}


// ---- FUN_1000_1b00 @ 1000:1b00

void FUN_1000_1b00(void)

{
  FUN_1000_1b50();
  return;
}


// ---- FUN_1000_1b06 @ 1000:1b06

void __cdecl16near FUN_1000_1b06(void)

{
  undefined2 uVar1;
  int iVar2;
  int in_DX;
  
  uVar1 = DAT_1008_056e;
  LOCK();
  DAT_1008_056e = 0x1000;
  UNLOCK();
  iVar2 = FUN_1000_1cdf();
  DAT_1008_056e = uVar1;
  if (in_DX != 0 || iVar2 != 0) {
    return;
  }
  FUN_1000_1b50();
  return;
}


// ---- FUN_1000_1b34 @ 1000:1b34

undefined2 __cdecl16far FUN_1000_1b34(void)

{
  undefined2 unaff_SS;
  
  if (___EXPORTEDSTUB != (code)0xb8) {
    return unaff_SS;
  }
  return uRam10001cab;
}


// ---- FUN_1000_1b44 @ 1000:1b44

void __cdecl16near FUN_1000_1b44(void)

{
  return;
}


// ---- FUN_1000_1b50 @ 1000:1b50

uint __cdecl16near FUN_1000_1b50(void)

{
  char *pcVar1;
  int *piVar2;
  undefined2 in_AX;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  int in_CX;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint *unaff_SI;
  undefined2 *puVar9;
  char *unaff_DI;
  undefined2 unaff_CS;
  bool bVar10;
  undefined2 uVar11;
  
  uVar11 = in_AX;
  FUN_1000_19f6();
  FUN_1000_1ae9(in_AX);
  pcVar3 = (char *)FUN_1000_1ab2(uVar11);
  iVar8 = 0;
  if (pcVar3 != (char *)0x0) {
    iVar4 = 9;
    if (*pcVar3 == 'M') {
      iVar4 = 0xf;
    }
    pcVar3 = pcVar3 + iVar4;
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
  uVar11 = 0;
  FATALAPPEXIT(unaff_CS,pcVar3,0x1008);
  uVar5 = FATALEXIT(0x1088,0xff,uVar11);
  if ((*(byte *)(iVar8 + 2) & 1) != 0) {
    FUN_1000_1c89(unaff_DI,in_CX);
    uVar5 = *unaff_SI;
    if ((uVar5 & 1) != 0) {
      in_CX = (in_CX - uVar5) + -1;
    }
    uVar7 = *(uint *)(iVar8 + 4);
    if (uVar7 != 0) {
      if (!CARRY2(in_CX + 2U,uVar7)) {
        uVar11 = FUN_1000_1b34();
        uVar5 = *(uint *)&DAT_1008_056e;
        if (uVar5 == 0x1000) goto LAB_1000_1be4;
        uVar7 = 0x8000;
        while (uVar5 <= uVar7) {
          uVar7 = uVar7 >> 1;
          if (uVar7 == 0) goto LAB_1000_1bfd;
        }
        if (uVar7 < 8) goto LAB_1000_1bfd;
        uVar5 = uVar7 << 1;
        goto LAB_1000_1be4;
      }
      uVar5 = 0;
      uVar6 = 0xfff0;
      if (in_CX + 2U + uVar7 == 0) {
        while( true ) {
          bVar10 = false;
          uVar5 = FUN_1000_1c23();
          if (!bVar10) break;
          if (uVar6 == 0xfff0) {
            return uVar5;
          }
LAB_1000_1bfd:
          uVar5 = 0x10;
LAB_1000_1be4:
          uVar6 = ~(uVar5 - 1);
        }
        iVar4 = uVar5 - *(int *)(iVar8 + 4);
        *(uint *)(iVar8 + 4) = uVar5;
        *(undefined2 *)(iVar8 + 10) = unaff_SI;
        piVar2 = (int *)*(int *)(iVar8 + 0xc);
        *piVar2 = iVar4 + -1;
        puVar9 = (undefined2 *)((int)piVar2 + iVar4);
        *puVar9 = 0xfffe;
        *(undefined2 *)(iVar8 + 0xc) = puVar9;
      }
    }
  }
  return uVar5;
}


// ---- FUN_1000_1b92 @ 1000:1b92

void __cdecl16near FUN_1000_1b92(void)

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
    FUN_1000_1c89();
    if ((*unaff_SI & 1) != 0) {
      in_CX = (in_CX - *unaff_SI) + -1;
    }
    uVar4 = *(uint *)(in_BX + 4);
    if (uVar4 != 0) {
      if (!CARRY2(in_CX + 2U,uVar4)) {
        uVar2 = FUN_1000_1b34();
        uVar4 = *(uint *)&DAT_1008_056e;
        if (uVar4 == 0x1000) goto LAB_1000_1be4;
        uVar5 = 0x8000;
        while (uVar4 <= uVar5) {
          uVar5 = uVar5 >> 1;
          if (uVar5 == 0) goto LAB_1000_1bfd;
        }
        if (uVar5 < 8) goto LAB_1000_1bfd;
        uVar4 = uVar5 << 1;
        goto LAB_1000_1be4;
      }
      uVar5 = 0xfff0;
      if (in_CX + 2U + uVar4 == 0) {
        while( true ) {
          bVar8 = false;
          iVar3 = FUN_1000_1c23();
          if (!bVar8) break;
          if (uVar5 == 0xfff0) {
            return;
          }
LAB_1000_1bfd:
          uVar4 = 0x10;
LAB_1000_1be4:
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


// ---- FUN_1000_1c23 @ 1000:1c23

void __cdecl16near FUN_1000_1c23(void)

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
LAB_1000_1c7e:
    FUN_1000_1b50();
    return;
  }
  iVar5 = *(int *)(in_BX + 6);
  uVar3 = 0;
  if (in_AX == 0) {
    if ((DAT_1000_17e8 & 0x10) != 0) {
      return;
    }
    uVar3 = 1;
  }
  uVar1 = 0x2002;
  if ((DAT_1000_17e8 & 1) == 0) {
    uVar1 = 0x2020;
  }
  iVar6 = iVar5;
  iVar2 = GLOBALREALLOC(0x1000,uVar1,in_AX,uVar3);
  if (iVar2 != 0) {
    if ((iVar2 != iVar5) || (lVar4 = GLOBALSIZE(0x1088,iVar5,iVar6), lVar4 == 0))
    goto LAB_1000_1c7e;
    if ((*(byte *)(iVar5 + 2) & 4) != 0) {
      *(int *)(iVar5 + -2) = in_BX + -1;
    }
  }
  return;
}


// ---- FUN_1000_1c89 @ 1000:1c89

void __cdecl16near FUN_1000_1c89(void)

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


// ---- ___EXPORTEDSTUB @ 1000:1caa

undefined2 __cdecl16far ___EXPORTEDSTUB(void)

{
  return 0;
}


// ---- FUN_1000_1cbe @ 1000:1cbe

undefined2 __cdecl16far FUN_1000_1cbe(undefined4 param_1)

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


// ---- FUN_1000_1cdf @ 1000:1cdf

undefined2 __cdecl16far FUN_1000_1cdf(uint param_1)

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
      if (*(int *)((int)(undefined4 *)&DAT_1008_0574 + 2) != 0) {
        pcVar4 = (code *)0x1e16;
        while( true ) {
          uVar3 = *(uint *)&DAT_1008_057e;
          uVar6 = (uint)((ulong)*(undefined4 *)&DAT_1008_0578 >> 0x10);
          in_BX = (int)*(undefined4 *)&DAT_1008_0578;
          uVar10 = uVar6;
          do {
            do {
              unaff_CS = 0x1000;
              uVar9 = (*pcVar4)();
              if (!bVar7) {
                if (pcVar4 == (code *)0x1e16) goto LAB_1000_1d50;
                goto LAB_1000_1d4d;
              }
              puVar1 = (undefined4 *)(in_BX + 0xe);
              in_BX = (int)*puVar1;
              bVar7 = uVar6 < uVar3;
              bVar8 = uVar6 != uVar3;
              uVar6 = (uint)((ulong)*puVar1 >> 0x10);
            } while (bVar8);
            uVar3 = *(uint *)((int)*(undefined4 *)&DAT_1008_0578 + 0x14);
            uVar6 = (uint)((ulong)*(undefined4 *)&DAT_1008_0574 >> 0x10);
            in_BX = (int)*(undefined4 *)&DAT_1008_0574;
            bVar7 = uVar6 < uVar10;
            bVar8 = uVar6 != uVar10;
            uVar10 = uVar6;
          } while (bVar8);
          bVar7 = pcVar4 < (code *)0x1b92;
          if (pcVar4 == (code *)0x1b92) break;
          pcVar4 = (code *)0x1b92;
        }
      }
      FUN_1000_1d86();
      if (!bVar7) {
LAB_1000_1d4d:
        uVar9 = FUN_1000_1e16();
LAB_1000_1d50:
        *(undefined2 *)((int)(undefined4 *)&DAT_1008_0578 + 2) = (int)((ulong)uVar9 >> 0x10);
        *(int *)&DAT_1008_0578 = in_BX;
        return (int)uVar9;
      }
    }
    if (*(int *)&DAT_1008_0572 == 0 && *(int *)&DAT_1008_0570 == 0) {
      return 0;
    }
    iVar2 = (*(code *)*(undefined2 *)&DAT_1008_0570)(unaff_CS,param_1);
    if (iVar2 == 0) {
      return 0;
    }
  } while( true );
}


// ---- FUN_1000_1d86 @ 1000:1d86

void __cdecl16near FUN_1000_1d86(void)

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
    if ((DAT_1000_17e8 & 0x10) != 0) {
      return;
    }
    iVar2 = 1;
  }
  uVar6 = 0;
  uVar7 = DAT_1000_17e8;
  iVar1 = GLOBALALLOC(0x1000,uVar3,iVar2);
  if (iVar1 != 0) {
    if ((uVar6 & 1) != 0) {
      iVar2 = iVar1;
      uVar4 = GLOBALLOCK(0x1088,iVar1,iVar1,uVar7);
      iVar1 = (int)((ulong)uVar4 >> 0x10);
      if (((int)uVar4 != 0) || (iVar1 == 0)) goto LAB_1000_1dfd;
    }
    lVar5 = GLOBALSIZE(0x1088,iVar1);
    if (lVar5 == 0) {
LAB_1000_1dfd:
      FUN_1000_1b50();
      return;
    }
    *(int *)0x6 = iVar2;
    *(undefined2 *)&DAT_1008_0002 = *(undefined2 *)(unaff_DI + 0xc);
    FUN_1000_1ebc();
    FUN_1000_1ef0();
  }
  return;
}


// ---- FUN_1000_1e08 @ 1000:1e08

void __cdecl16near FUN_1000_1e08(void)

{
  FUN_1000_1e92();
  return;
}


// ---- FUN_1000_1e16 @ 1000:1e16

uint * __cdecl16near FUN_1000_1e16(void)

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
          if (CARRY2((uint)puVar1,uVar2)) goto LAB_1000_1e6f;
          puVar6 = (uint *)((int)puVar1 + uVar2) + 1;
          uVar3 = *(uint *)((int)puVar1 + uVar2);
          if ((uVar3 & 1) == 0) break;
          uVar3 = uVar3 + uVar2 + 2;
          *puVar7 = uVar3;
        }
      }
      if (puVar6 + -1 < puVar5) break;
      if (((uint)puVar5 & 1) != 0) goto LAB_1000_1e6f;
      puVar7 = (uint *)*(undefined2 *)(in_BX + 8);
      if ((uint *)*(undefined2 *)(in_BX + 10) == puVar7) goto LAB_1000_1e6f;
      puVar5 = (uint *)((int)*(undefined2 *)(in_BX + 10) + -1);
    }
    puVar7 = (uint *)((int)puVar6 + uVar3);
  } while (!CARRY2((uint)puVar6,uVar3));
LAB_1000_1e6f:
  puVar7 = (uint *)*(undefined2 *)(in_BX + 8);
  *(undefined2 *)(in_BX + 10) = puVar7;
  return puVar7;
}


// ---- FUN_1000_1e92 @ 1000:1e92

void __cdecl16near FUN_1000_1e92(void)

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
    unaff_CS = 0x1088;
    iVar3 = iVar4;
    GLOBALFREE(0x1088);
  }
  return;
}


// ---- FUN_1000_1ebc @ 1000:1ebc

void __cdecl16near FUN_1000_1ebc(void)

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


// ---- FUN_1000_1ef0 @ 1000:1ef0

void __cdecl16near FUN_1000_1ef0(void)

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


// ---- FATALEXIT @ 1088:0000

/* WARNING: Control flow encountered bad instruction data */

void FATALEXIT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GETVERSION @ 1088:0004

/* WARNING: Control flow encountered bad instruction data */

void GETVERSION(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- LOCALINIT @ 1088:0008

/* WARNING: Control flow encountered bad instruction data */

void LOCALINIT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GLOBALALLOC @ 1088:000c

/* WARNING: Control flow encountered bad instruction data */

void GLOBALALLOC(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GLOBALREALLOC @ 1088:0010

/* WARNING: Control flow encountered bad instruction data */

void GLOBALREALLOC(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GLOBALFREE @ 1088:0014

/* WARNING: Control flow encountered bad instruction data */

void GLOBALFREE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GLOBALLOCK @ 1088:0018

/* WARNING: Control flow encountered bad instruction data */

void GLOBALLOCK(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GLOBALUNLOCK @ 1088:001c

/* WARNING: Control flow encountered bad instruction data */

void GLOBALUNLOCK(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GLOBALSIZE @ 1088:0020

/* WARNING: Control flow encountered bad instruction data */

void GLOBALSIZE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- LOCKSEGMENT @ 1088:0024

/* WARNING: Control flow encountered bad instruction data */

void LOCKSEGMENT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- UNLOCKSEGMENT @ 1088:0028

/* WARNING: Control flow encountered bad instruction data */

void UNLOCKSEGMENT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GETMODULEUSAGE @ 1088:002c

/* WARNING: Control flow encountered bad instruction data */

void GETMODULEUSAGE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GETPROCADDRESS @ 1088:0030

/* WARNING: Control flow encountered bad instruction data */

void GETPROCADDRESS(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GETPROFILESTRING @ 1088:0034

/* WARNING: Control flow encountered bad instruction data */

void GETPROFILESTRING(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- WRITEPROFILESTRING @ 1088:0038

/* WARNING: Control flow encountered bad instruction data */

void WRITEPROFILESTRING(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- LSTRCPY @ 1088:003c

/* WARNING: Control flow encountered bad instruction data */

void LSTRCPY(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- LSTRCAT @ 1088:0040

/* WARNING: Control flow encountered bad instruction data */

void LSTRCAT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- LSTRLEN @ 1088:0044

/* WARNING: Control flow encountered bad instruction data */

void LSTRLEN(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- INITTASK @ 1088:0048

/* WARNING: Control flow encountered bad instruction data */

void INITTASK(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- LOADLIBRARY @ 1088:004c

/* WARNING: Control flow encountered bad instruction data */

void LOADLIBRARY(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- FREELIBRARY @ 1088:0050

/* WARNING: Control flow encountered bad instruction data */

void FREELIBRARY(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- DOS3CALL @ 1088:0054

/* WARNING: Control flow encountered bad instruction data */

void DOS3CALL(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GETDOSENVIRONMENT @ 1088:0058

/* WARNING: Control flow encountered bad instruction data */

void GETDOSENVIRONMENT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- FATALAPPEXIT @ 1088:005c

/* WARNING: Control flow encountered bad instruction data */

void FATALAPPEXIT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- __WINFLAGS @ 1088:0060

/* WARNING: Control flow encountered bad instruction data */

void __WINFLAGS(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- CREATEDC @ 1088:0064

/* WARNING: Control flow encountered bad instruction data */

void CREATEDC(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- DELETEDC @ 1088:0068

/* WARNING: Control flow encountered bad instruction data */

void DELETEDC(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GETDEVICECAPS @ 1088:006c

/* WARNING: Control flow encountered bad instruction data */

void GETDEVICECAPS(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- MULDIV @ 1088:0070

/* WARNING: Control flow encountered bad instruction data */

void MULDIV(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- SETFOCUS @ 1088:0074

/* WARNING: Control flow encountered bad instruction data */

void SETFOCUS(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- ENABLEWINDOW @ 1088:0078

/* WARNING: Control flow encountered bad instruction data */

void ENABLEWINDOW(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- ISWINDOWENABLED @ 1088:007c

/* WARNING: Control flow encountered bad instruction data */

void ISWINDOWENABLED(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- BEGINPAINT @ 1088:0080

/* WARNING: Control flow encountered bad instruction data */

void BEGINPAINT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- ENDPAINT @ 1088:0084

/* WARNING: Control flow encountered bad instruction data */

void ENDPAINT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- CREATEWINDOW @ 1088:0088

/* WARNING: Control flow encountered bad instruction data */

void CREATEWINDOW(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- SHOWWINDOW @ 1088:008c

/* WARNING: Control flow encountered bad instruction data */

void SHOWWINDOW(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- REGISTERCLASS @ 1088:0090

/* WARNING: Control flow encountered bad instruction data */

void REGISTERCLASS(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GETACTIVEWINDOW @ 1088:0094

/* WARNING: Control flow encountered bad instruction data */

void GETACTIVEWINDOW(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GETDC @ 1088:0098

/* WARNING: Control flow encountered bad instruction data */

void GETDC(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- RELEASEDC @ 1088:009c

/* WARNING: Control flow encountered bad instruction data */

void RELEASEDC(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- DRAWICON @ 1088:00a0

/* WARNING: Control flow encountered bad instruction data */

void DRAWICON(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- ENDDIALOG @ 1088:00a4

/* WARNING: Control flow encountered bad instruction data */

void ENDDIALOG(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- DEFWINDOWPROC @ 1088:00a8

/* WARNING: Control flow encountered bad instruction data */

void DEFWINDOWPROC(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- POSTMESSAGE @ 1088:00ac

/* WARNING: Control flow encountered bad instruction data */

void POSTMESSAGE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- SENDMESSAGE @ 1088:00b0

/* WARNING: Control flow encountered bad instruction data */

void SENDMESSAGE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- REGISTERWINDOWMESSAGE @ 1088:00b4

/* WARNING: Control flow encountered bad instruction data */

void REGISTERWINDOWMESSAGE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GETWINDOWWORD @ 1088:00b8

/* WARNING: Control flow encountered bad instruction data */

void GETWINDOWWORD(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GETWINDOWLONG @ 1088:00bc

/* WARNING: Control flow encountered bad instruction data */

void GETWINDOWLONG(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- SETWINDOWLONG @ 1088:00c0

/* WARNING: Control flow encountered bad instruction data */

void SETWINDOWLONG(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- WINHELP @ 1088:00c4

/* WARNING: Control flow encountered bad instruction data */

void WINHELP(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- LOADICON @ 1088:00c8

/* WARNING: Control flow encountered bad instruction data */

void LOADICON(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- LOADSTRING @ 1088:00cc

/* WARNING: Control flow encountered bad instruction data */

void LOADSTRING(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GETSYSTEMMETRICS @ 1088:00d0

/* WARNING: Control flow encountered bad instruction data */

void GETSYSTEMMETRICS(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GETSYSCOLOR @ 1088:00d4

/* WARNING: Control flow encountered bad instruction data */

void GETSYSCOLOR(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- SETWINDOWPOS @ 1088:00d8

/* WARNING: Control flow encountered bad instruction data */

void SETWINDOWPOS(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GETWINDOW @ 1088:00dc

/* WARNING: Control flow encountered bad instruction data */

void GETWINDOW(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GETDESKTOPWINDOW @ 1088:00e0

/* WARNING: Control flow encountered bad instruction data */

void GETDESKTOPWINDOW(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- UNREGISTERCLASS @ 1088:00e4

/* WARNING: Control flow encountered bad instruction data */

void UNREGISTERCLASS(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- _WSPRINTF @ 1088:00e8

/* WARNING: Control flow encountered bad instruction data */

void _WSPRINTF(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- ANSINEXT @ 1088:00ec

/* WARNING: Control flow encountered bad instruction data */

void ANSINEXT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GETOPENFILENAME @ 1088:00f0

/* WARNING: Control flow encountered bad instruction data */

void GETOPENFILENAME(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GETSAVEFILENAME @ 1088:00f4

/* WARNING: Control flow encountered bad instruction data */

void GETSAVEFILENAME(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- CHOOSECOLOR @ 1088:00f8

/* WARNING: Control flow encountered bad instruction data */

void CHOOSECOLOR(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- CHOOSEFONT @ 1088:00fc

/* WARNING: Control flow encountered bad instruction data */

void CHOOSEFONT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- PRINTDLG @ 1088:0100

/* WARNING: Control flow encountered bad instruction data */

void PRINTDLG(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- COMMDLGEXTENDEDERROR @ 1088:0104

/* WARNING: Control flow encountered bad instruction data */

void COMMDLGEXTENDEDERROR(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


