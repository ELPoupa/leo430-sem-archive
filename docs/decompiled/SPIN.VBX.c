// Decompiled with Ghidra from SPIN.VBX
// Format: New Executable (NE), image base 0000:0000

// ---- WEP @ 1000:0000

/* Title:  Visual Basic Spin Custom Control
   Format: New Executable (NE) Windows
   CRC:    00000000
   
   Program Entry Point (CS:IP):   0004:05c6
   Initial Stack Pointer (SS:SP): 0000:0000
   Auto Data Segment Index:       0006
   Initial Heap Size:             0800
   Initial Stack Size:            0000
   Minimum Code Swap Size:        0000
   
   Linker Version:  5.30
   Target OS:       Windows
   Windows Version: 3.0
   
   Program Flags:     01
           Single Data
   Application Flags: 83
           Windows P.M. API
           Library Module
   Other Flags:       08
    */

undefined2 __stdcall16far WEP(undefined2 param_1)

{
  undefined2 uVar1;
  int unaff_BP;
  int iVar2;
  undefined2 uVar3;
  
                    /* Segment:    1
                       Offset:     00000600
                       Length:     0054
                       Min Alloc:  0054
                       Flags:      0d40
                           Code
                           Fixed
                           Preload
                           Impure (Non-shareable)
                        */
  iVar2 = unaff_BP + 1;
  uVar3 = 0x1028;
  if (DAT_1028_0576 == '\0') {
    uVar1 = 1;
  }
  else {
    uVar1 = FUN_1008_1280(param_1);
    FUN_1018_074e(uVar1,uVar3,iVar2);
  }
  return uVar1;
}


// ---- FUN_1000_003c @ 1000:003c

undefined2 __stdcall16far FUN_1000_003c(void)

{
  return 1;
}


// ---- FUN_1008_0080 @ 1008:0080

undefined2 __stdcall16far FUN_1008_0080(int *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  
  uVar3 = FUN_1018_02b2();
  uVar2 = (undefined2)((ulong)uVar3 >> 0x10);
  iVar1 = (int)uVar3;
  *param_1 = *(int *)(iVar1 + 0x18);
  param_1[2] = *(int *)(iVar1 + 0x1c);
  param_1[1] = *(int *)(iVar1 + 0x1a);
  param_1[3] = *(int *)(iVar1 + 0x1e);
  if (*(int *)(iVar1 + 0x62) == 0) {
    *param_1 = *param_1 + 1;
    if (param_3 < *(int *)(iVar1 + 0x2c)) {
      param_1[3] = *(int *)(iVar1 + 0x2c);
      return 0;
    }
    param_1[1] = *(int *)(iVar1 + 0x2c) + 1;
  }
  else {
    if (*(int *)(iVar1 + 0x62) != 1) {
      return 0xffff;
    }
    if (*(int *)(iVar1 + 0x2a) <= param_2) {
      *param_1 = *(int *)(iVar1 + 0x2a) + 1;
      return 0;
    }
    *param_1 = *param_1 + 1;
    param_1[2] = *(int *)(iVar1 + 0x2a);
  }
  return 1;
}


// ---- FUN_1008_0116 @ 1008:0116

void __stdcall16far FUN_1008_0116(void)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 *puVar5;
  
  puVar5 = (undefined2 *)FUN_1018_02b2();
  uVar4 = (undefined2)((ulong)puVar5 >> 0x10);
  puVar2 = (undefined2 *)puVar5;
  GETCLIENTRECT(0x1018,puVar5);
  puVar2[4] = *puVar5;
  puVar2[5] = puVar2[1];
  puVar2[6] = puVar2[2];
  puVar2[7] = puVar2[3];
  puVar2[6] = puVar2[6] - puVar2[0x2c];
  puVar2[7] = puVar2[7] - puVar2[0x2c];
  puVar2[8] = *puVar5;
  puVar2[9] = puVar2[1];
  puVar2[10] = puVar2[2];
  puVar2[0xb] = puVar2[3];
  uVar1 = puVar2[0x2c];
  puVar2[9] = uVar1;
  puVar2[8] = uVar1;
  puVar2[0x12] = -puVar2[0x2c] - ((puVar2[0x23] + puVar2[0x28]) * 2 - puVar2[2]);
  puVar2[0x13] = -puVar2[0x2c] - ((puVar2[0x23] + puVar2[0x28]) * 2 - puVar2[3]);
  iVar3 = puVar2[0x23] + puVar2[0x28];
  puVar2[0x11] = iVar3;
  puVar2[0x10] = iVar3;
  puVar2[0xc] = iVar3;
  puVar2[0xe] = iVar3 + puVar2[0x12];
  iVar3 = puVar2[0x11];
  puVar2[0xd] = iVar3;
  puVar2[0xf] = iVar3 + puVar2[0x13];
  puVar2[0x15] = ((int)puVar2[0x12] >> 1) + puVar2[0xc];
  puVar2[0x16] = ((int)puVar2[0x13] >> 1) + puVar2[0xd];
  return;
}


// ---- SPINCTLPROC @ 1008:0200

/* WARNING: Removing unreachable block (ram,0x100805ef) */
/* WARNING: Removing unreachable block (ram,0x10080647) */

undefined2 __stdcall16far
SPINCTLPROC(undefined2 *param_1,int param_2,uint param_3,int param_4,undefined2 param_5,
           undefined2 param_6,undefined2 param_7)

{
  int iVar1;
  uint uVar2;
  char cVar4;
  undefined2 uVar3;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  long lVar5;
  ulong uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  undefined2 in_stack_0000ffb0;
  undefined2 uVar11;
  undefined2 local_3e [16];
  undefined1 local_1e [2];
  int local_1c;
  undefined2 local_18;
  undefined2 local_16;
  undefined1 local_c [2];
  undefined2 *local_a;
  int local_8;
  undefined4 local_6;
  
  if (param_4 == 1) {
    unaff_CS = 0x1018;
    DAT_1028_06b6 = FUN_1018_02b2();
    *(undefined2 *)((int)DAT_1028_06b6 + 0x28) = 0;
    *(undefined2 *)((int)DAT_1028_06b6 + 0x2e) = 0xffff;
    *(undefined2 *)((int)DAT_1028_06b6 + 0x46) = 0;
    uVar3 = (undefined2)((ulong)DAT_1028_06b6 >> 0x10);
    iVar1 = (int)DAT_1028_06b6;
    *(undefined2 *)(iVar1 + 0x48) = 0xffff;
    *(undefined2 *)(iVar1 + 0x4a) = 0xff;
    uVar3 = (undefined2)((ulong)DAT_1028_06b6 >> 0x10);
    iVar1 = (int)DAT_1028_06b6;
    *(undefined2 *)(iVar1 + 0x4c) = 0x8080;
    *(undefined2 *)(iVar1 + 0x4e) = 0x80;
    *(undefined2 *)((int)DAT_1028_06b6 + 0x50) = 1;
    uVar3 = (undefined2)((ulong)DAT_1028_06b6 >> 0x10);
    iVar1 = (int)DAT_1028_06b6;
    *(undefined2 *)(iVar1 + 0x54) = 0;
    *(undefined2 *)(iVar1 + 0x52) = 0;
    *(undefined2 *)((int)DAT_1028_06b6 + 0x56) = 0xfa;
    *(undefined2 *)((int)DAT_1028_06b6 + 0x58) = 0;
    uVar3 = (undefined2)((ulong)DAT_1028_06b6 >> 0x10);
    iVar1 = (int)DAT_1028_06b6;
    *(undefined2 *)(iVar1 + 0x5a) = 0x8080;
    *(undefined2 *)(iVar1 + 0x5c) = 0x80;
    uVar3 = (undefined2)((ulong)DAT_1028_06b6 >> 0x10);
    iVar1 = (int)DAT_1028_06b6;
    *(undefined2 *)(iVar1 + 0x5e) = 0xffff;
    *(undefined2 *)(iVar1 + 0x60) = 0xff;
    *(undefined2 *)((int)DAT_1028_06b6 + 0x62) = 0;
    uVar3 = (undefined2)((ulong)DAT_1028_06b6 >> 0x10);
    iVar1 = (int)DAT_1028_06b6;
    *(undefined2 *)(iVar1 + 0x66) = 0;
    *(undefined2 *)(iVar1 + 100) = 0;
    uVar3 = (undefined2)((ulong)DAT_1028_06b6 >> 0x10);
    iVar1 = (int)DAT_1028_06b6;
    *(undefined2 *)(iVar1 + 0x68) = 0xc0c0;
    *(undefined2 *)(iVar1 + 0x6a) = 0xc0;
    local_6 = CONCAT22(local_6._2_2_,(undefined2)local_6);
    goto switchD_1008_08ae_caseD_f;
  }
  if (param_4 == 5) {
    local_6 = CONCAT22(local_6._2_2_,(undefined2)local_6);
    if (param_2 != 0 || param_1 != (undefined2 *)0x0) {
      FUN_1008_0116(param_5,param_6,param_7);
      unaff_CS = 0x1008;
      local_6 = CONCAT22(local_6._2_2_,(undefined2)local_6);
    }
    goto switchD_1008_08ae_caseD_f;
  }
  if (param_4 == 0xf) {
LAB_1008_0375:
    if (param_3 == 0) {
      BEGINPAINT(unaff_CS,local_3e,unaff_SS,param_5);
      FUN_1008_0a60(local_3e[0],param_5,param_6,param_7);
      ENDPAINT(0x1008,local_3e,unaff_SS);
      unaff_CS = 0x1078;
      local_6 = CONCAT22(local_6._2_2_,(undefined2)local_6);
    }
    else {
      FUN_1008_0a60(param_3,param_5,param_6,param_7);
      unaff_CS = 0x1008;
      local_6 = CONCAT22(local_6._2_2_,(undefined2)local_6);
    }
    goto switchD_1008_08ae_caseD_f;
  }
  if (param_4 == 0x14) {
    if ((param_1 != (undefined2 *)0x1234) || (param_2 != 0)) {
      return 1;
    }
    INVALIDATERECT(unaff_CS,1,0,0,param_5);
    unaff_CS = 0x1078;
    goto LAB_1008_0375;
  }
  if (param_4 == 0x1f) {
    local_6 = CONCAT22(local_6._2_2_,(undefined2)local_6);
    if (DAT_1028_06bc == 0) goto switchD_1008_08ae_caseD_f;
    DAT_1028_06ba = 1;
    uVar9 = 3;
    uVar3 = 0x1078;
    PEEKMESSAGE(unaff_CS,3,0x402,0x401,param_5,local_1e,unaff_SS);
    uVar11 = 0;
    uVar10 = 0x1234;
LAB_1008_03c7:
    POSTMESSAGE(uVar3,uVar9,uVar10,0,uVar11);
    unaff_CS = 0x1078;
    local_6 = CONCAT22(local_6._2_2_,(undefined2)local_6);
    goto switchD_1008_08ae_caseD_f;
  }
  if (param_4 == 0x201) {
    local_6._0_2_ = 0x6be;
    local_6._2_2_ = 0x1028;
    DAT_1028_06b6 = FUN_1018_02b2();
    local_a = param_1;
    local_8 = param_2;
    unaff_CS = 0x1078;
    iVar1 = PTINRECT(0x1018,param_1,param_2,(int)DAT_1028_06b6 + 0x18);
    local_6 = CONCAT22(local_6._2_2_,(undefined2)local_6);
    if (iVar1 == 0) goto switchD_1008_08ae_caseD_f;
    unaff_CS = 0x1008;
    uVar3 = FUN_1008_0080(0x6be,local_a,local_8,param_6,param_7);
    *(undefined2 *)((int)DAT_1028_06b6 + 0x2e) = uVar3;
    *(undefined2 *)((int)DAT_1028_06b6 + 0x28) = 1;
    iVar1 = *(int *)((int)DAT_1028_06b6 + 0x2e);
    if ((iVar1 != 0) && (local_6 = CONCAT22(local_6._2_2_,(undefined2)local_6), iVar1 != 1))
    goto switchD_1008_08ae_caseD_f;
    uVar3 = 0x1008;
    uVar9 = FUN_1008_0080(0x6be,local_a,local_8,param_6,param_7);
    *(undefined2 *)((int)DAT_1028_06b6 + 0x2e) = uVar9;
    if (*(int *)((int)DAT_1028_06b6 + 0x2e) == 0) {
      uVar11 = 0x401;
    }
    else {
      uVar11 = 0x402;
    }
    uVar10 = 0x1028;
    uVar9 = 0x6be;
    goto LAB_1008_03c7;
  }
  if (param_4 == 0x202) {
    PEEKMESSAGE(unaff_CS,3,0x402,0x401,param_5,local_1e,unaff_SS);
    unaff_CS = 0x1078;
    local_6 = CONCAT22(local_6._2_2_,(undefined2)local_6);
    goto switchD_1008_08ae_caseD_f;
  }
  local_6 = CONCAT22(local_6._2_2_,(undefined2)local_6);
  if (param_4 - 0x202U < 0x1ff) goto switchD_1008_08ae_caseD_f;
  if (param_4 == 0x401 || param_4 == 0x402) {
    iVar1 = PEEKMESSAGE(unaff_CS,0,0x202,0x202,param_5,local_1e,unaff_SS);
    if (((iVar1 == 0) || (local_1c != 0x202)) && (DAT_1028_06ba == 0)) {
      iVar1 = PEEKMESSAGE(0x1078,0,0x200,0x200,param_5,local_1e,unaff_SS);
      if ((iVar1 != 0) && (local_1c == 0x200)) {
        local_6._0_2_ = local_18;
        local_6._2_2_ = local_16;
        iVar1 = PTINRECT(0x1078,local_18,local_16,(int)DAT_1028_06b6 + 0x18);
        if (iVar1 == 0) goto LAB_1008_050c;
      }
      DAT_1028_06b6 = FUN_1018_02b2(0x1078,param_6,param_7);
      iVar1 = GETDC(0x1018,param_5);
      local_8 = iVar1;
      INVERTRECT(0x1078,param_1,0x1028);
      lVar5 = GETTICKCOUNT(0x1078,iVar1);
      local_6 = lVar5 + (ulong)(*(uint *)((int)DAT_1028_06b6 + 0x56) >> 1);
      DAT_1028_06bc = 1;
      SETCAPTURE(0x1078,param_5);
      iVar1 = FUN_1018_02c2(0x1078,local_c);
      if (iVar1 != 0) {
        DAT_1028_06bc = 0;
        RELEASEDC(0x1018,local_8);
        RELEASECAPTURE(0x1078,param_5);
        return 0;
      }
      DAT_1028_06bc = 0;
      uVar3 = 0x1018;
      do {
        uVar6 = GETTICKCOUNT(uVar3);
        iVar1 = local_8;
        uVar3 = 0x1078;
      } while (uVar6 < local_6);
      iVar8 = local_8;
      INVERTRECT(0x1078,param_1,0x1028);
      uVar9 = param_5;
      RELEASEDC(0x1078,iVar1);
      uVar3 = param_5;
      POSTMESSAGE(0x1078,param_1,param_2,param_3,param_4);
      lVar5 = GETTICKCOUNT(0x1078,uVar3,uVar9,iVar8);
      local_6 = lVar5 + (ulong)(*(uint *)((int)DAT_1028_06b6 + 0x56) >> 1);
      do {
        unaff_CS = 0x1078;
        uVar6 = GETTICKCOUNT(0x1078);
      } while (uVar6 < local_6);
    }
    else {
LAB_1008_050c:
      DAT_1028_06bc = 0;
      RELEASECAPTURE(0x1078);
      PEEKMESSAGE(0x1078,3,0x402,0x401,param_5,local_1e,unaff_SS);
      DAT_1028_06ba = 0;
      uVar3 = GETDC(0x1078,param_5);
      INVALIDATERECT(0x1078,1,0,0,param_5);
      UPDATEWINDOW(0x1078,param_5);
      unaff_CS = 0x1078;
      RELEASEDC(0x1078,uVar3);
      local_6 = CONCAT22(local_6._2_2_,(undefined2)local_6);
    }
    goto switchD_1008_08ae_caseD_f;
  }
  if (param_4 == 0x1003) {
    local_6 = CONCAT22(local_6._2_2_,(undefined2)local_6);
    if (param_3 == 0x1b) {
LAB_1008_065c:
      uVar3 = FUN_1018_0128(DAT_1028_002e,param_1,param_2,param_4,in_stack_0000ffb0,param_6);
      return uVar3;
    }
    goto switchD_1008_08ae_caseD_f;
  }
  if (param_4 == 0x1004) {
    local_6 = CONCAT22(local_6._2_2_,(undefined2)local_6);
    if (param_3 == 0x18) {
      if ((-1 < (int)param_1) && ((int)param_1 < 2)) {
        return 0;
      }
      return 0x17c;
    }
    goto switchD_1008_08ae_caseD_f;
  }
  if (param_4 == 0x1005) {
    uVar3 = param_6;
    uVar9 = param_7;
    DAT_1028_06b6 = FUN_1018_02b2();
    _WSPRINTF(0x1018,0,0x1020,0x452,0x1028,uVar3,uVar9);
    iVar1 = (int)DAT_1028_06b6;
    uVar3 = (undefined2)((ulong)DAT_1028_06b6 >> 0x10);
    switch(param_3) {
    case 0xd:
    case 0xe:
      FUN_1008_1014(param_3,param_6,param_7);
      break;
    case 0xf:
      if ((int)param_1 < 0) {
LAB_1008_0703:
        uVar3 = FUN_1018_03d2(0x1008,0,0x1020,30000);
        return uVar3;
      }
      *(undefined2 *)(iVar1 + 0x46) = param_1;
      break;
    case 0x10:
      *(undefined2 *)(iVar1 + 0x48) = param_1;
      *(int *)(iVar1 + 0x4a) = param_2;
      break;
    case 0x11:
      *(undefined2 *)(iVar1 + 0x4c) = param_1;
      *(int *)(iVar1 + 0x4e) = param_2;
      break;
    case 0x12:
      if ((int)param_1 < 0) goto LAB_1008_0703;
      *(undefined2 *)(iVar1 + 0x50) = param_1;
      break;
    case 0x13:
      *(undefined2 *)(iVar1 + 0x52) = param_1;
      *(int *)(iVar1 + 0x54) = param_2;
      break;
    case 0x14:
      if ((int)param_1 < 0) goto LAB_1008_0703;
      *(undefined2 *)(iVar1 + 0x56) = param_1;
      break;
    case 0x15:
      if ((int)param_1 < 0) goto LAB_1008_0703;
      *(undefined2 *)(iVar1 + 0x58) = param_1;
      break;
    case 0x16:
      *(undefined2 *)(iVar1 + 0x5a) = param_1;
      *(int *)(iVar1 + 0x5c) = param_2;
      break;
    case 0x17:
      *(undefined2 *)(iVar1 + 0x5e) = param_1;
      *(int *)(iVar1 + 0x60) = param_2;
      break;
    case 0x19:
      *(undefined2 *)(iVar1 + 100) = param_1;
      *(int *)(iVar1 + 0x66) = param_2;
      break;
    case 0x1a:
      *(undefined2 *)(iVar1 + 0x68) = param_1;
      *(int *)(iVar1 + 0x6a) = param_2;
    }
    iVar1 = FUN_1018_033a(0x1008);
    if (iVar1 == 2) {
      if (param_3 == 0xe) {
        uVar3 = (undefined2)((ulong)DAT_1028_06b6 >> 0x10);
        iVar1 = (int)DAT_1028_06b6;
        *(undefined2 *)(iVar1 + 100) = param_1;
        *(int *)(iVar1 + 0x66) = param_2;
      }
      if (param_3 == 0xd) {
        uVar3 = (undefined2)((ulong)DAT_1028_06b6 >> 0x10);
        iVar1 = (int)DAT_1028_06b6;
        *(undefined2 *)(iVar1 + 0x68) = param_1;
        *(int *)(iVar1 + 0x6a) = param_2;
      }
    }
    FUN_1008_0116(param_5,param_6,param_7);
    unaff_CS = 0x1078;
    INVALIDATERECT(0x1008,0,(int)DAT_1028_06b6,DAT_1028_06b6._2_2_,param_5);
    local_6 = CONCAT22(local_6._2_2_,(undefined2)local_6);
    if (0xe < param_3) {
      return 0;
    }
    goto switchD_1008_08ae_caseD_f;
  }
  if (param_4 == 0x1008) {
    local_6 = CONCAT22(local_6._2_2_,(undefined2)local_6);
    if (param_3 == 0x1b) {
      uVar7 = FUN_1018_02da();
      *param_1 = (int)uVar7;
      param_1[1] = (int)((ulong)uVar7 >> 0x10);
      return 0;
    }
    goto switchD_1008_08ae_caseD_f;
  }
  if (param_4 != 0x1009) {
    local_6 = CONCAT22(local_6._2_2_,(undefined2)local_6);
    if (param_4 == 0x1022) {
      cVar4 = (char)(param_3 >> 8);
      uVar2 = param_3 & 0xff;
      if (uVar2 == 1) {
        local_6 = CONCAT22(local_6._2_2_,(undefined2)local_6);
        switch(cVar4) {
        case '\x0f':
          uVar9 = 0x50;
          uVar3 = 0x2de;
          break;
        case '\x10':
          uVar9 = 0x50;
          uVar3 = 0x2f4;
          break;
        case '\x11':
          uVar9 = 0x50;
          uVar3 = 0x309;
          break;
        case '\x12':
          uVar9 = 0x50;
          uVar3 = 0x31e;
          break;
        case '\x13':
          uVar9 = 0x50;
          uVar3 = 0x338;
          break;
        case '\x14':
          uVar9 = 0x50;
          uVar3 = 0x34e;
          break;
        case '\x15':
          uVar9 = 0x50;
          uVar3 = 0x35e;
          break;
        case '\x16':
          uVar9 = 0x50;
          uVar3 = 0x378;
          break;
        case '\x17':
          uVar9 = 0x50;
          uVar3 = 0x392;
          break;
        case '\x18':
          uVar9 = 0x50;
          uVar3 = 0x3ac;
          break;
        case '\x19':
          uVar9 = 0x50;
          uVar3 = 0x3c6;
          break;
        case '\x1a':
          uVar9 = 0x50;
          uVar3 = 0x3de;
          break;
        case '\x1b':
          uVar9 = 0x50;
          uVar3 = 0x3f6;
          break;
        default:
          goto switchD_1008_08ae_caseD_f;
        }
      }
      else if (uVar2 == 2) {
        if (cVar4 == '\x02') {
          uVar9 = 0x56;
          uVar3 = 0x406;
        }
        else {
          local_6 = CONCAT22(local_6._2_2_,(undefined2)local_6);
          if (cVar4 != '\x03') goto switchD_1008_08ae_caseD_f;
          uVar9 = 0x56;
          uVar3 = 0x419;
        }
      }
      else {
        local_6 = CONCAT22(local_6._2_2_,(undefined2)local_6);
        if (uVar2 != 3) goto switchD_1008_08ae_caseD_f;
        uVar9 = 0x43;
        uVar3 = 0x42a;
      }
      FUN_1008_11c2(uVar3,0x1028,uVar9);
      return 0;
    }
    goto switchD_1008_08ae_caseD_f;
  }
  local_6 = CONCAT22(local_6._2_2_,(undefined2)local_6);
  if (DAT_1028_06e0 != 0) goto switchD_1008_08ae_caseD_f;
  uVar3 = param_7;
  DAT_1028_06b6 = FUN_1018_02b2();
  *(uint *)((int)DAT_1028_06b6 + 0x36) = param_3;
  unaff_CS = 0x1008;
  uVar9 = (undefined2)((ulong)DAT_1028_06b6 >> 0x10);
  local_6 = CONCAT22(local_6._2_2_,(undefined2)local_6);
  switch(param_3) {
  case 0xd:
    *(undefined2 *)((int)DAT_1028_06b6 + 0x36) = 0x1a;
    uVar3 = 2;
    break;
  case 0xe:
    *(undefined2 *)((int)DAT_1028_06b6 + 0x36) = 0x19;
    uVar3 = 1;
    break;
  default:
    goto switchD_1008_08ae_caseD_f;
  case 0x10:
  case 0x13:
  case 0x16:
    unaff_CS = 0x1018;
    uVar2 = FUN_1018_0572(uVar3);
    local_6 = CONCAT22(local_6._2_2_,(undefined2)local_6);
    if (0x1ff < uVar2) goto switchD_1008_08ae_caseD_f;
    uVar3 = 1;
    goto LAB_1008_090d;
  case 0x11:
  case 0x17:
    unaff_CS = 0x1018;
    uVar2 = FUN_1018_0572(uVar3);
    local_6 = CONCAT22(local_6._2_2_,(undefined2)local_6);
    if (0x1ff < uVar2) goto switchD_1008_08ae_caseD_f;
    uVar3 = 2;
LAB_1008_090d:
    FUN_1010_0004(uVar3);
    unaff_CS = 0x1078;
    iVar1 = ISWINDOW(0x1010,DAT_1028_06e2);
    local_6 = CONCAT22(local_6._2_2_,(undefined2)local_6);
    if (iVar1 != 0) {
      return DAT_1028_06e2;
    }
    goto switchD_1008_08ae_caseD_f;
  case 0x1b:
    in_stack_0000ffb0 = param_6;
    param_6 = param_7;
    goto LAB_1008_065c;
  }
  unaff_CS = 0x1010;
  FUN_1010_0004(uVar3);
  local_6 = CONCAT22(local_6._2_2_,(undefined2)local_6);
switchD_1008_08ae_caseD_f:
  uVar3 = FUN_1018_02ba(unaff_CS,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar3;
}


// ---- FUN_1008_0a60 @ 1008:0a60

/* WARNING: Restarted to delay deadcode elimination for space: ram */

void __stdcall16far
FUN_1008_0a60(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  undefined2 uVar1;
  int *piVar2;
  undefined2 uVar3;
  undefined2 unaff_SS;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_2e;
  int local_2c;
  int local_2a;
  int local_28;
  int local_26;
  int local_24;
  int local_22;
  int local_20;
  int local_1e;
  int local_1c;
  int local_1a;
  int local_18;
  int local_16;
  int local_14;
  int local_12;
  int local_10;
  int local_e;
  undefined2 local_c;
  undefined2 local_a;
  undefined2 local_8;
  undefined2 local_6;
  int local_4;
  
  DAT_1028_06b6 = (int *)FUN_1018_02b2();
  uVar1 = (undefined2)((ulong)DAT_1028_06b6 >> 0x10);
  uVar3 = param_1;
  local_e = CREATECOMPATIBLEBITMAP(0x1018,((int *)DAT_1028_06b6)[3],((int *)DAT_1028_06b6)[2]);
  if (local_e != 0) {
    local_4 = CREATECOMPATIBLEDC(0x1078,param_1,uVar3,param_3,param_4);
    if (local_4 != 0) {
      SELECTOBJECT(0x1078,local_e);
      uVar3 = (undefined2)((ulong)DAT_1028_06b6 >> 0x10);
      iVar4 = ((int *)DAT_1028_06b6)[0x30];
      iVar7 = local_4;
      uVar3 = CREATESOLIDBRUSH(0x1078,((int *)DAT_1028_06b6)[0x2f]);
      uVar1 = SELECTOBJECT(0x1078,uVar3);
      iVar6 = local_4;
      FILLRECT(0x1078,uVar3,(int *)DAT_1028_06b6,DAT_1028_06b6._2_2_);
      iVar5 = local_4;
      uVar3 = SELECTOBJECT(0x1078,uVar1);
      DELETEOBJECT(0x1078,uVar3,iVar5,iVar6,iVar4,iVar7);
      uVar3 = (undefined2)((ulong)DAT_1028_06b6 >> 0x10);
      piVar2 = (int *)DAT_1028_06b6;
      if (0 < piVar2[0x2c]) {
        iVar4 = piVar2[0x2e];
        iVar7 = local_4;
        uVar3 = CREATESOLIDBRUSH(0x1078,piVar2[0x2d]);
        uVar1 = SELECTOBJECT(0x1078,uVar3);
        iVar6 = local_4;
        FILLRECT(0x1078,uVar3,(int *)DAT_1028_06b6 + 8,DAT_1028_06b6._2_2_);
        iVar5 = local_4;
        uVar3 = SELECTOBJECT(0x1078,uVar1);
        DELETEOBJECT(0x1078,uVar3,iVar5,iVar6,iVar4,iVar7);
      }
      uVar3 = (undefined2)((ulong)DAT_1028_06b6 >> 0x10);
      iVar4 = ((int *)DAT_1028_06b6)[0x2a];
      iVar7 = local_4;
      uVar3 = CREATESOLIDBRUSH(0x1078,((int *)DAT_1028_06b6)[0x29]);
      uVar1 = SELECTOBJECT(0x1078,uVar3);
      iVar6 = local_4;
      FILLRECT(0x1078,uVar3,(int *)DAT_1028_06b6 + 4,DAT_1028_06b6._2_2_);
      iVar5 = local_4;
      uVar3 = SELECTOBJECT(0x1078,uVar1);
      DELETEOBJECT(0x1078,uVar3,iVar5,iVar6,iVar4,iVar7);
      uVar3 = (undefined2)((ulong)DAT_1028_06b6 >> 0x10);
      if (0 < ((int *)DAT_1028_06b6)[0x23]) {
        local_6 = CREATESOLIDBRUSH(0x1078,((int *)DAT_1028_06b6)[0x24]);
        uVar3 = (undefined2)((ulong)DAT_1028_06b6 >> 0x10);
        local_c = CREATEPEN(0x1078,((int *)DAT_1028_06b6)[0x24],((int *)DAT_1028_06b6)[0x25],1);
        iVar7 = local_4;
        local_8 = SELECTOBJECT(0x1078,local_6);
        iVar6 = local_4;
        local_a = SELECTOBJECT(0x1078,local_c);
        local_16 = *DAT_1028_06b6;
        local_14 = ((int *)DAT_1028_06b6)[1];
        local_12 = ((int *)DAT_1028_06b6)[2];
        local_10 = ((int *)DAT_1028_06b6)[3];
        local_2e = ((int *)DAT_1028_06b6)[0x28];
        local_28 = ((((int *)DAT_1028_06b6)[3] - ((int *)DAT_1028_06b6)[0x28]) -
                   ((int *)DAT_1028_06b6)[0x2c]) + -1;
        local_26 = local_2e + ((int *)DAT_1028_06b6)[0x23] + -1;
        local_24 = (local_28 - ((int *)DAT_1028_06b6)[0x23]) + 1;
        local_20 = ((int *)DAT_1028_06b6)[0x23] + local_2e + -1;
        local_1e = ((((int *)DAT_1028_06b6)[2] - ((int *)DAT_1028_06b6)[0x23]) -
                   ((int *)DAT_1028_06b6)[0x28]) - ((int *)DAT_1028_06b6)[0x2c];
        local_1a = ((int *)DAT_1028_06b6)[0x23] + local_1e + -1;
        iVar5 = local_4;
        local_2c = local_2e;
        local_2a = local_2e;
        local_22 = local_26;
        local_1c = local_20;
        local_18 = local_2e;
        POLYGON(0x1078,6,&local_2e,unaff_SS);
        iVar4 = local_4;
        uVar3 = SELECTOBJECT(0x1078,local_8);
        DELETEOBJECT(0x1078,uVar3,iVar4,iVar5,iVar6,iVar7);
        iVar4 = local_4;
        uVar3 = SELECTOBJECT(0x1078,local_a);
        DELETEOBJECT(0x1078,uVar3,iVar4);
      }
      uVar3 = (undefined2)((ulong)DAT_1028_06b6 >> 0x10);
      if (0 < ((int *)DAT_1028_06b6)[0x23]) {
        local_6 = CREATESOLIDBRUSH(0x1078,((int *)DAT_1028_06b6)[0x26]);
        uVar3 = (undefined2)((ulong)DAT_1028_06b6 >> 0x10);
        local_c = CREATEPEN(0x1078,((int *)DAT_1028_06b6)[0x26],((int *)DAT_1028_06b6)[0x27],1);
        iVar7 = local_4;
        local_8 = SELECTOBJECT(0x1078,local_6);
        iVar6 = local_4;
        local_a = SELECTOBJECT(0x1078,local_c);
        local_16 = *DAT_1028_06b6;
        local_14 = ((int *)DAT_1028_06b6)[1];
        local_12 = ((int *)DAT_1028_06b6)[2];
        local_10 = ((int *)DAT_1028_06b6)[3];
        local_2e = ((int *)DAT_1028_06b6)[0x28];
        local_2c = ((((int *)DAT_1028_06b6)[3] - ((int *)DAT_1028_06b6)[0x28]) -
                   ((int *)DAT_1028_06b6)[0x2c]) + -1;
        local_2a = ((int *)DAT_1028_06b6)[0x23] + local_2e + -1;
        local_28 = (local_2c - ((int *)DAT_1028_06b6)[0x23]) + 1;
        local_26 = ((((int *)DAT_1028_06b6)[2] - ((int *)DAT_1028_06b6)[0x23]) -
                   ((int *)DAT_1028_06b6)[0x28]) - ((int *)DAT_1028_06b6)[0x2c];
        local_20 = ((int *)DAT_1028_06b6)[0x23] + ((int *)DAT_1028_06b6)[0x28] + -1;
        local_1e = local_26 + ((int *)DAT_1028_06b6)[0x23] + -1;
        local_1c = ((int *)DAT_1028_06b6)[0x28];
        iVar5 = local_4;
        local_24 = local_28;
        local_22 = local_26;
        local_1a = local_1e;
        local_18 = local_2c;
        POLYGON(0x1078,6,&local_2e,unaff_SS);
        iVar4 = local_4;
        uVar3 = SELECTOBJECT(0x1078,local_8);
        DELETEOBJECT(0x1078,uVar3,iVar4,iVar5,iVar6,iVar7);
        iVar4 = local_4;
        uVar3 = SELECTOBJECT(0x1078,local_a);
        DELETEOBJECT(0x1078,uVar3,iVar4);
      }
      uVar3 = (undefined2)((ulong)DAT_1028_06b6 >> 0x10);
      iVar4 = ((int *)DAT_1028_06b6)[0x35];
      iVar7 = local_4;
      local_6 = CREATESOLIDBRUSH(0x1078,((int *)DAT_1028_06b6)[0x34]);
      local_8 = SELECTOBJECT(0x1078,local_6);
      iVar6 = local_4;
      FILLRECT(0x1078,local_6,(int *)DAT_1028_06b6 + 0xc,DAT_1028_06b6._2_2_);
      iVar5 = local_4;
      uVar3 = SELECTOBJECT(0x1078,local_8);
      DELETEOBJECT(0x1078,uVar3,iVar5,iVar6,iVar4,iVar7);
      uVar3 = (undefined2)((ulong)DAT_1028_06b6 >> 0x10);
      iVar4 = ((int *)DAT_1028_06b6)[0x35];
      local_6 = CREATESOLIDBRUSH(0x1078,((int *)DAT_1028_06b6)[0x34]);
      iVar5 = local_4;
      FILLRECT(0x1078,local_6,(int *)DAT_1028_06b6 + 0xc,DAT_1028_06b6._2_2_);
      DELETEOBJECT(0x1078,local_6,iVar5,iVar4);
      uVar3 = (undefined2)((ulong)DAT_1028_06b6 >> 0x10);
      uVar3 = CREATEPEN(0x1078,((int *)DAT_1028_06b6)[0x29],((int *)DAT_1028_06b6)[0x2a],1);
      local_a = SELECTOBJECT(0x1078,uVar3);
      uVar3 = CREATESOLIDBRUSH(0x1078,((int *)DAT_1028_06b6)[0x32]);
      local_8 = SELECTOBJECT(0x1078,uVar3);
      local_16 = ((int *)DAT_1028_06b6)[0xc];
      local_14 = ((int *)DAT_1028_06b6)[0xd];
      local_12 = ((int *)DAT_1028_06b6)[0xe];
      local_10 = ((int *)DAT_1028_06b6)[0xf];
      if (((int *)DAT_1028_06b6)[0x31] == 0) {
        MOVETO(0x1078,((int *)DAT_1028_06b6)[0x16],local_16);
        LINETO(0x1078,((int *)DAT_1028_06b6)[0x16],local_12);
        local_2e = local_16 + 1;
        uVar3 = (undefined2)((ulong)DAT_1028_06b6 >> 0x10);
        local_2c = ((int *)DAT_1028_06b6)[0x16] + -2;
        local_2a = ((int *)DAT_1028_06b6)[0x15];
        local_28 = local_14 + 1;
        local_26 = local_12 + -2;
        iVar4 = local_4;
        local_24 = local_2c;
        POLYGON(0x1078,3,&local_2e,unaff_SS);
        local_2e = local_16 + 1;
        uVar3 = (undefined2)((ulong)DAT_1028_06b6 >> 0x10);
        local_24 = ((int *)DAT_1028_06b6)[0x16] + 2;
        local_2a = ((int *)DAT_1028_06b6)[0x15];
        local_26 = local_12 + -2;
        local_2c = local_24;
      }
      else {
        MOVETO(0x1078,local_14,((int *)DAT_1028_06b6)[0x15]);
        LINETO(0x1078,local_10,((int *)DAT_1028_06b6)[0x15]);
        local_2e = local_16 + 1;
        uVar3 = (undefined2)((ulong)DAT_1028_06b6 >> 0x10);
        local_2c = ((int *)DAT_1028_06b6)[0x16];
        local_2a = ((int *)DAT_1028_06b6)[0x15] + -2;
        local_28 = local_14 + 1;
        local_24 = local_10 + -2;
        iVar4 = local_4;
        local_26 = local_2a;
        POLYGON(0x1078,3,&local_2e,unaff_SS);
        local_2e = local_12 + -2;
        uVar3 = (undefined2)((ulong)DAT_1028_06b6 >> 0x10);
        local_2a = ((int *)DAT_1028_06b6)[0x15] + 2;
        local_24 = local_14 + 1;
        local_2c = ((int *)DAT_1028_06b6)[0x16];
        local_26 = local_2a;
      }
      local_28 = local_10 + -2;
      iVar6 = local_4;
      POLYGON(0x1078,3,&local_2e,unaff_SS);
      iVar5 = local_4;
      uVar3 = SELECTOBJECT(0x1078,local_8);
      DELETEOBJECT(0x1078,uVar3,iVar5,iVar6,iVar4);
      iVar4 = local_4;
      uVar3 = SELECTOBJECT(0x1078,local_a);
      DELETEOBJECT(0x1078,uVar3,iVar4);
      uVar3 = (undefined2)((ulong)DAT_1028_06b6 >> 0x10);
      piVar2 = (int *)DAT_1028_06b6;
      if (piVar2[0x14] == 2) {
        iVar4 = piVar2[0xc];
      }
      else {
        iVar4 = piVar2[2];
      }
      BITBLT(0x1078,0x20,0xcc,0,0,local_4,piVar2[3],iVar4,0,0);
      DELETEDC(0x1078,local_4,param_1);
    }
    DELETEOBJECT(0x1078,local_e);
  }
  return;
}


// ---- FUN_1008_1014 @ 1008:1014

int FUN_1008_1014(int param_1,undefined2 param_2,undefined2 param_3)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  undefined2 local_a;
  undefined2 local_8;
  undefined2 local_4;
  
  uVar3 = 0x1010;
  iVar1 = FUN_1010_0000();
  if (param_1 == 0xd) {
    if (iVar1 == 1) {
      return 0;
    }
LAB_1008_104a:
    uVar3 = 0x1018;
    FUN_1018_02d2(0x1010,&local_a);
  }
  else if (param_1 == 0xe) {
    if (iVar1 == 2) {
      return 0;
    }
    goto LAB_1008_104a;
  }
  uVar5 = FUN_1018_02b2(uVar3,param_2,param_3);
  local_4 = (undefined2)((ulong)uVar5 >> 0x10);
  iVar2 = (int)uVar5;
  switch(*(int *)(iVar2 + 0x36) + -0x10) {
  case 0:
  case 1:
    iVar2 = FUN_1010_0078();
    if (iVar2 == 1) {
      uVar4 = 0x1018;
      FUN_1018_031a(0x1010,0xffff,0xff,0x10,0x1005,param_2,param_3);
      uVar3 = 0x11;
      local_8 = 0x80;
      local_a = 0x8080;
    }
    else {
      if (iVar1 == 1) {
        uVar3 = 0x10;
      }
      else {
        uVar3 = 0x11;
      }
LAB_1008_11ae:
      uVar4 = 0x1010;
    }
    break;
  default:
    goto switchD_1008_107a_caseD_2;
  case 3:
    uVar4 = 0x1010;
    iVar1 = FUN_1010_0078();
    if (iVar1 != 1) {
      uVar3 = *(undefined2 *)(iVar2 + 0x36);
      goto LAB_1008_11ae;
    }
    uVar3 = *(undefined2 *)(iVar2 + 0x36);
    local_8 = 0;
    local_a = 0;
    break;
  case 6:
  case 7:
    iVar2 = FUN_1010_0078();
    if (iVar2 != 1) {
      if (iVar1 == 1) {
        uVar3 = 0x16;
      }
      else {
        uVar3 = 0x17;
      }
      goto LAB_1008_11ae;
    }
    uVar4 = 0x1018;
    FUN_1018_031a(0x1010,0x8080,0x80,0x16,0x1005,param_2,param_3);
    uVar3 = 0x17;
    local_8 = 0xff;
    local_a = 0xffff;
    break;
  case 9:
  case 10:
    iVar2 = FUN_1010_0078();
    if (iVar2 != 1) {
      if (iVar1 == 1) {
        uVar3 = 0x19;
      }
      else {
        uVar3 = 0x1a;
      }
      goto LAB_1008_11ae;
    }
    uVar4 = 0x1018;
    FUN_1018_031a(0x1010,0,0,0x19,0x1005,param_2,param_3);
    uVar3 = 0x1a;
    local_8 = 0xc0;
    local_a = 0xc0c0;
  }
  iVar2 = FUN_1018_031a(uVar4,local_a,local_8,uVar3,0x1005,param_2,param_3);
switchD_1008_107a_caseD_2:
  return iVar2;
}


// ---- FUN_1008_11c2 @ 1008:11c2

void FUN_1008_11c2(undefined2 param_1,undefined2 param_2,undefined1 param_3)

{
  int iVar1;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  uint local_46;
  undefined1 local_44;
  undefined1 local_43 [61];
  uint *local_6;
  
  iVar1 = LSTRLEN(unaff_CS,param_1);
  local_46 = iVar1 + 4;
  local_6 = &local_46;
  if (local_46 < 0x41) {
    local_44 = param_3;
    LSTRCPY(0x1078,param_1,param_2,local_43);
    GETACTIVEWINDOW(0x1078);
    WINHELP(0x1078,&local_46,unaff_SS,0x201,0x480,0x1028);
  }
  return;
}


// ---- VBINITCC @ 1008:121e

void __stdcall16far VBINITCC(int param_1,uint param_2)

{
  int iVar1;
  undefined2 unaff_CS;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1028;
  if (param_1 == 0) {
    unaff_CS = 0x1018;
    iVar1 = FUN_1018_0010(0x48c,0x1028,0x100);
    if (iVar1 == 0) {
      return;
    }
  }
  DAT_1028_06e0 = param_1;
  if (param_2 < 0x200) {
    if (param_1 == 0) {
      unaff_CS = 0x1010;
      FUN_1010_008c(DAT_1028_002e);
    }
    uVar2 = 0x1d6;
  }
  else {
    uVar2 = 0x162;
  }
  FUN_1018_02aa(unaff_CS,uVar2,0x1028,DAT_1028_002e,uVar3);
  return;
}


// ---- VBTERMCC @ 1008:1274

undefined2 __cdecl16far VBTERMCC(void)

{
  return 0x1028;
}


// ---- FUN_1008_1280 @ 1008:1280

undefined2 __stdcall16far FUN_1008_1280(void)

{
  FUN_1010_022c();
  return 1;
}


// ---- VBGETMODELINFO @ 1008:128c

undefined4 __stdcall16far VBGETMODELINFO(uint param_1)

{
  undefined2 uVar1;
  
  if (param_1 < 0x200) {
    uVar1 = 0x200;
  }
  else {
    uVar1 = 0x18c;
  }
  return CONCAT22(0x1028,uVar1);
}


// ---- FUN_1008_12ac @ 1008:12ac

undefined2 __stdcall16far FUN_1008_12ac(void)

{
  undefined2 in_stack_0000000c;
  
  DAT_1028_06e2 = 0;
  DAT_1028_002e = in_stack_0000000c;
  return 1;
}


// ---- FUN_1010_0000 @ 1010:0000

undefined2 __cdecl16far FUN_1010_0000(void)

{
                    /* Segment:    3
                       Offset:     00001c00
                       Length:     0398
                       Min Alloc:  0398
                       Flags:      1d50
                           Code
                           Discardable
                           Moveable
                           Preload
                           Impure (Non-shareable)
                        */
  return DAT_1028_06d2;
}


// ---- FUN_1010_0004 @ 1010:0004

undefined2 __stdcall16far FUN_1010_0004(int param_1)

{
  int iVar1;
  int iVar2;
  
  DAT_1028_06d2 = param_1;
  iVar1 = ISWINDOW();
  if (iVar1 != 0) {
    iVar1 = ISWINDOWVISIBLE(0x1078,DAT_1028_06e2);
    if (iVar1 != 0) {
      iVar2 = DAT_1028_06e4;
      iVar1 = DAT_1028_06e6;
      if ((param_1 == 1) || (iVar2 = DAT_1028_06ec, iVar1 = DAT_1028_06ee, param_1 == 2)) {
        POSTMESSAGE(0x1078,iVar2 + 4,iVar1 + 4,1,0x201);
      }
      return 1;
    }
    DAT_1028_06d2 = param_1;
    DAT_1028_06d6 = param_1;
  }
  return 0;
}


// ---- FUN_1010_0078 @ 1010:0078

undefined2 __cdecl16far FUN_1010_0078(void)

{
  if (DAT_1028_06d4 == 1) {
    DAT_1028_06d4 = 0;
    return 1;
  }
  return 0;
}


// ---- FUN_1010_008c @ 1010:008c

undefined2 __stdcall16far FUN_1010_008c(undefined2 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  
  iVar1 = ISWINDOW();
  if (iVar1 == 0) {
    uVar6 = 0x1010;
    uVar3 = MAKEPROCINSTANCE(0x1078,param_1,0x25a);
    DAT_1028_06c8 = (undefined2)((ulong)uVar3 >> 0x10);
    DAT_1028_06c6 = (undefined2)uVar3;
    uVar5 = DAT_1028_06c8;
    ENUMWINDOWS(0x1078,0x6e2,0x1028,DAT_1028_06c6);
    uVar4 = DAT_1028_06c8;
    FREEPROCINSTANCE(0x1078,DAT_1028_06c6);
    iVar1 = ISWINDOW(0x1078,DAT_1028_06e2,uVar4,uVar5,uVar6);
    if (iVar1 == 0) {
      return 0;
    }
    uVar5 = DAT_1028_06e2;
    uVar3 = GETWINDOWLONG(0x1078,0xfffc);
    DAT_1028_06d0 = (undefined2)((ulong)uVar3 >> 0x10);
    DAT_1028_06ce = (undefined2)uVar3;
    uVar6 = 0x1010;
    uVar3 = MAKEPROCINSTANCE(0x1078,param_1,0x29a);
    DAT_1028_06cc = (undefined2)((ulong)uVar3 >> 0x10);
    DAT_1028_06ca = (undefined2)uVar3;
    uVar4 = DAT_1028_06e2;
    SETWINDOWLONG(0x1078,uVar3,0xfffc);
    iVar1 = GETSYSTEMMETRICS(0x1078,0,uVar4,uVar6,uVar5);
    iVar2 = GETSYSTEMMETRICS(0x1078,1);
    DAT_1028_06ec = 9;
    DAT_1028_06ee = 7;
    if ((iVar1 == 0x400) || (iVar1 == 800)) {
      DAT_1028_06f0 = 0x40;
      DAT_1028_06f2 = 0x3c;
      DAT_1028_06e4 = 0x1a;
      DAT_1028_06e6 = 0x18;
      DAT_1028_06e8 = 0x2d;
      DAT_1028_06ea = 0x2b;
    }
    else {
      if (iVar1 == 0x2d0) {
        DAT_1028_06f2 = 0x2a;
      }
      else {
        if ((iVar1 == 0x280) && (iVar2 == 0x1e0)) {
          DAT_1028_06e4 = 0x19;
          DAT_1028_06e6 = 0x16;
          DAT_1028_06e8 = 0x2b;
          DAT_1028_06ea = 0x27;
          DAT_1028_06ec = 9;
          DAT_1028_06ee = 7;
          DAT_1028_06f0 = 0x3c;
          DAT_1028_06f2 = 0x36;
          return 1;
        }
        if ((iVar1 != 0x280) || (iVar2 != 0x15e)) {
          if (iVar1 != 0x280) {
            DAT_1028_06ec = 9;
            DAT_1028_06ee = 7;
            return 1;
          }
          if (iVar2 != 200) {
            DAT_1028_06ec = 9;
            DAT_1028_06ee = 7;
            return 1;
          }
          DAT_1028_06e4 = 0x1b;
          DAT_1028_06e6 = 10;
          DAT_1028_06e8 = 0x2b;
          DAT_1028_06ea = 0xf;
          DAT_1028_06ec = 0xd;
          DAT_1028_06ee = 7;
          DAT_1028_06f0 = 0x3a;
          DAT_1028_06f2 = 0x12;
          return 1;
        }
        DAT_1028_06f2 = 0x2c;
      }
      DAT_1028_06f0 = 0x3c;
      DAT_1028_06e4 = 0x19;
      DAT_1028_06e6 = 0x12;
      DAT_1028_06e8 = 0x2b;
      DAT_1028_06ea = 0x1f;
    }
  }
  return 1;
}


// ---- FUN_1010_022c @ 1010:022c

void __cdecl16far FUN_1010_022c(void)

{
  int iVar1;
  
  iVar1 = ISWINDOW();
  if (iVar1 != 0) {
    SETWINDOWLONG(0x1078,DAT_1028_06ce,DAT_1028_06d0,0xfffc);
    FREEPROCINSTANCE(0x1078,DAT_1028_06ca);
  }
  return;
}


// ---- CPALENUMPROC @ 1010:025a

bool __stdcall16far CPALENUMPROC(undefined2 *param_1,undefined2 param_2,undefined2 param_3)

{
  int iVar1;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined1 local_2a [40];
  
  GETCLASSNAME(unaff_CS,0x26,local_2a,unaff_SS);
  iVar1 = FUN_1018_0668(local_2a);
  if (iVar1 == 0) {
    *param_1 = param_3;
  }
  return iVar1 != 0;
}


// ---- CPALSUBCLASS @ 1010:029a

void __stdcall16far CPALSUBCLASS(int param_1,int param_2,int param_3,int param_4,undefined2 param_5)

{
  undefined2 unaff_CS;
  
  if (param_4 == 0xf) {
    if (DAT_1028_06d6 != 0) {
      unaff_CS = 0x1010;
      FUN_1010_0004(DAT_1028_06d6);
      DAT_1028_06d6 = 0;
    }
  }
  else if (param_4 == 0x111) {
    if (param_3 == 2) {
      DAT_1028_06d4 = 1;
    }
  }
  else if (param_4 == 0x201) {
    if ((((param_3 == 1) && (DAT_1028_06ec <= param_1)) && (param_1 <= DAT_1028_06f0)) &&
       ((DAT_1028_06ee <= param_2 && (param_2 <= DAT_1028_06f2)))) {
      DAT_1028_06d4 = 0;
      if (((param_1 < DAT_1028_06e4) || ((DAT_1028_06e8 < param_1 || (param_2 < DAT_1028_06e6)))) ||
         (DAT_1028_06ea < param_2)) {
        DAT_1028_06d2 = 2;
        param_1 = DAT_1028_06ec;
        param_2 = DAT_1028_06ee;
      }
      else {
        DAT_1028_06d2 = 1;
        param_1 = DAT_1028_06e4;
        param_2 = DAT_1028_06e6;
      }
      param_2 = param_2 + 4;
      param_1 = param_1 + 4;
    }
  }
  else if (param_4 == 0x220) {
    DAT_1028_06d4 = 0;
  }
  else if (param_4 == 0x30f) {
    DAT_1028_06d6 = DAT_1028_06d2;
  }
  CALLWINDOWPROC(unaff_CS,param_1,param_2,param_3,param_4,param_5,DAT_1028_06ce);
  return;
}


// ---- FUN_1018_0010 @ 1018:0010

undefined2 __stdcall16far FUN_1018_0010(undefined2 param_1,undefined2 param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined2 unaff_SS;
  int iVar6;
  undefined2 uVar7;
  char *pcVar8;
  undefined1 local_10c [135];
  char acStack_85 [121];
  uint local_c;
  uint local_a;
  
  local_a = 0;
  local_c = 0;
  FUN_1018_0342();
  pcVar8 = (char *)0x78;
  iVar1 = GETMODULEFILENAME(0x1018,0x78,acStack_85 + 1,unaff_SS);
  if (iVar1 == 0) {
    iVar1 = -1;
  }
  else {
    for (pcVar8 = acStack_85 + iVar1; *pcVar8 != '\\'; pcVar8 = pcVar8 + -1) {
    }
    LSTRCPY(0x1078,0x530,0x1028,pcVar8 + 1);
    local_10c[0] = 0x88;
    pcVar8 = acStack_85 + 1;
    iVar1 = OPENFILE(0x1078,0,local_10c,unaff_SS,pcVar8);
    if (iVar1 == -1) {
      pcVar8 = (char *)0x1028;
      iVar1 = OPENFILE(0x1078,0,local_10c,unaff_SS,0x530);
    }
    uVar5 = local_a;
    if (iVar1 != -1) {
      while ((iVar6 = iVar1, iVar2 = _LREAD(0x1078,1,&local_c,unaff_SS), iVar2 == 1 &&
             (local_c != 0x1a))) {
        uVar5 = uVar5 + local_c;
      }
      iVar2 = iVar1;
      iVar3 = _LREAD(0x1078,2,&local_c,unaff_SS);
      if ((iVar3 == 2) && (local_c == uVar5)) {
        iVar3 = iVar1;
        iVar4 = _LREAD(0x1078,2,&local_c,unaff_SS);
        if (iVar4 != 2) {
          local_c = 0x100;
        }
        _LCLOSE(0x1078,iVar1,iVar3,iVar2,iVar6);
        if (param_3 <= local_c) {
          return 1;
        }
      }
    }
  }
  uVar7 = 0;
  MESSAGEBOX(0x1078,0x2030,param_1,param_2,0x4a6,0x1028);
  if (iVar1 != -1) {
    _LCLOSE(0x1078,iVar1,uVar7,pcVar8);
  }
  return 0;
}


// ---- FUN_1018_0128 @ 1018:0128

void __stdcall16far FUN_1018_0128(undefined2 param_1,undefined2 *param_2,int param_3)

{
  int iVar1;
  undefined2 unaff_SS;
  undefined4 uVar2;
  undefined1 local_50 [2];
  undefined2 local_4e;
  undefined2 local_4c;
  undefined2 local_48;
  undefined2 local_46;
  undefined2 local_42;
  undefined2 local_40;
  undefined2 local_3a;
  undefined2 local_38;
  
  if (param_3 == 0x1003) {
    uVar2 = FUN_1018_02da();
    *param_2 = (int)uVar2;
    ((undefined2 *)param_2)[1] = (int)((ulong)uVar2 >> 0x10);
  }
  else if (param_3 == 0x1009) {
    DAT_1028_06d8 = param_1;
    FUN_1018_0692(local_50);
    local_4e = 0x1da;
    local_4c = 0x1018;
    local_48 = 0;
    local_46 = DAT_1028_06d8;
    local_42 = 0;
    local_40 = 0;
    local_3a = 0x538;
    local_38 = 0x1028;
    iVar1 = REGISTERCLASS(0x1018,local_50);
    if (iVar1 != 0) {
      CREATEWINDOW(0x1078,0,0,DAT_1028_06d8,0,0,0,0,0,0,0,0x8000,0,0,0x538,0x1028,unaff_SS);
    }
  }
  return;
}


// ---- ABOUTPOPUPWNDPROC @ 1018:01da

undefined2 __stdcall16far
ABOUTPOPUPWNDPROC(undefined2 param_1,undefined2 param_2,int param_3,int param_4)

{
  undefined2 uVar1;
  undefined2 unaff_CS;
  
  if (param_4 == 0x10) {
    uVar1 = DEFWINDOWPROC(unaff_CS,param_1,param_2,param_3,0x10);
    UNREGISTERCLASS(0x1078,DAT_1028_06d8,0x538);
    return uVar1;
  }
  if (param_4 == 0x18) {
    if (param_3 != 0) {
      POSTMESSAGE(unaff_CS,0,0,0,0x400);
      return 0;
    }
  }
  else if (param_4 == 0x400) {
    FUN_1018_03e2();
    return 0;
  }
  uVar1 = DEFWINDOWPROC(unaff_CS,param_1,param_2,param_3,param_4);
  return uVar1;
}


// ---- ABOUTDLGPROC @ 1018:0276

undefined2 __stdcall16far
ABOUTDLGPROC(undefined2 param_1,undefined2 param_2,int param_3,int param_4)

{
  undefined2 uVar1;
  undefined2 unaff_CS;
  
  if (((param_4 == 0x111) && (param_3 != 0)) && (param_3 - 1U < 2)) {
    ENDDIALOG(unaff_CS,1);
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


// ---- FUN_1018_02aa @ 1018:02aa

void FUN_1018_02aa(void)

{
  undefined2 unaff_SS;
  
                    /* WARNING: Could not recover jumptable at 0x101802ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)*(uint *)((char *)s_1___Horizontal_1028_001d + 3))();
  return;
}


// ---- FUN_1018_02b2 @ 1018:02b2

void FUN_1018_02b2(void)

{
  undefined2 unaff_SS;
  
                    /* WARNING: Could not recover jumptable at 0x101802b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)*(uint *)((char *)s_1___Horizontal_1028_001d + 3))();
  return;
}


// ---- FUN_1018_02ba @ 1018:02ba

void FUN_1018_02ba(void)

{
  undefined2 unaff_SS;
  
                    /* WARNING: Could not recover jumptable at 0x101802bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)*(uint *)((char *)s_1___Horizontal_1028_001d + 3))();
  return;
}


// ---- FUN_1018_02c2 @ 1018:02c2

void FUN_1018_02c2(void)

{
  undefined2 unaff_SS;
  
                    /* WARNING: Could not recover jumptable at 0x101802c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)*(uint *)((char *)s_1___Horizontal_1028_001d + 3))();
  return;
}


// ---- FUN_1018_02d2 @ 1018:02d2

void FUN_1018_02d2(void)

{
  undefined2 unaff_SS;
  
                    /* WARNING: Could not recover jumptable at 0x101802d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)*(uint *)((char *)s_1___Horizontal_1028_001d + 3))();
  return;
}


// ---- FUN_1018_02da @ 1018:02da

void FUN_1018_02da(void)

{
  undefined2 unaff_SS;
  
                    /* WARNING: Could not recover jumptable at 0x101802dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)*(uint *)((char *)s_1___Horizontal_1028_001d + 3))();
  return;
}


// ---- FUN_1018_031a @ 1018:031a

void FUN_1018_031a(void)

{
  undefined2 unaff_SS;
  
                    /* WARNING: Could not recover jumptable at 0x1018031d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)*(uint *)((char *)s_1___Horizontal_1028_001d + 3))();
  return;
}


// ---- FUN_1018_033a @ 1018:033a

void FUN_1018_033a(void)

{
  undefined2 unaff_SS;
  
                    /* WARNING: Could not recover jumptable at 0x1018033d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)*(uint *)((char *)s_1___Horizontal_1028_001d + 3))();
  return;
}


// ---- FUN_1018_0342 @ 1018:0342

void FUN_1018_0342(void)

{
  undefined2 unaff_SS;
  
                    /* WARNING: Could not recover jumptable at 0x10180345. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)*(uint *)((char *)s_1___Horizontal_1028_001d + 3))();
  return;
}


// ---- FUN_1018_03d2 @ 1018:03d2

void FUN_1018_03d2(void)

{
  undefined2 unaff_SS;
  
                    /* WARNING: Could not recover jumptable at 0x101803d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)*(uint *)((char *)s_1___Horizontal_1028_001d + 3))();
  return;
}


// ---- FUN_1018_03e2 @ 1018:03e2

void FUN_1018_03e2(void)

{
  undefined2 unaff_SS;
  
                    /* WARNING: Could not recover jumptable at 0x101803e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)*(uint *)((char *)s_1___Horizontal_1028_001d + 3))();
  return;
}


// ---- FUN_1018_0422 @ 1018:0422

void FUN_1018_0422(void)

{
  undefined2 unaff_SS;
  
                    /* WARNING: Could not recover jumptable at 0x10180425. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)*(uint *)((char *)s_1___Horizontal_1028_001d + 3))();
  return;
}


// ---- FUN_1018_0572 @ 1018:0572

undefined2 __cdecl16far FUN_1018_0572(void)

{
  undefined2 uVar1;
  undefined2 unaff_SS;
  
  if (*(int *)((char *)s_1___Horizontal_1028_001d + 3) != 0xbc) {
    uVar1 = FUN_1018_0422();
    return uVar1;
  }
  return 0x100;
}


// ---- entry @ 1018:05c6

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
  
  DAT_1028_056e = 0x1028;
  uVar3 = unaff_CS;
  DAT_1028_056c = unaff_DI;
  DAT_1028_0570 = in_CX;
  DAT_1028_0572 = in_BX;
  DAT_1028_0574 = unaff_SI;
  if (in_CX != 0) {
    uVar3 = 0x1078;
    iVar2 = LOCALINIT(unaff_CS,in_CX,0);
    if (iVar2 == 0) {
      return;
    }
  }
  uVar4 = 0x5fb;
  DAT_1028_0592 = GETVERSION(uVar3);
  if ((DAT_1018_0582 & 1) == 0) {
    pcVar1 = (code *)swi(0x21);
    DAT_1028_0594 = (*pcVar1)();
  }
  else {
    uVar4 = 0x1018;
    DAT_1028_0594 = DOS3CALL(0x1018);
  }
  if ((DAT_1018_0582 & 1) == 0) {
    DAT_1028_0597 = 0;
  }
  FUN_1018_0706(uVar4);
  FUN_1018_07f6();
  DAT_1028_0576 = DAT_1028_0576 + '\x01';
  FUN_1018_06da(DAT_1028_05b0,DAT_1028_05b2,DAT_1028_05b4);
  return;
}


// ---- FUN_1018_0650 @ 1018:0650

undefined2 __stdcall16far FUN_1018_0650(void)

{
  return 1;
}


// ---- FUN_1018_0668 @ 1018:0668

int __cdecl16far FUN_1018_0668(byte *param_1,char *param_2)

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


// ---- FUN_1018_0692 @ 1018:0692

undefined2 * __cdecl16far FUN_1018_0692(undefined2 *param_1,undefined1 param_2,uint param_3)

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


// ---- FUN_1018_06da @ 1018:06da

void __cdecl16far FUN_1018_06da(void)

{
  FUN_1008_12ac(DAT_1028_0572,DAT_1028_0574,DAT_1028_0570,DAT_1028_056e,DAT_1028_056c);
  return;
}


// ---- FUN_1018_0706 @ 1018:0706

void __cdecl16far FUN_1018_0706(void)

{
  int unaff_BP;
  int iVar1;
  bool bVar2;
  undefined2 uVar3;
  
  iVar1 = unaff_BP + 1;
  uVar3 = 0x1028;
  if (DAT_1028_05cc != 0) {
    bVar2 = false;
    (*DAT_1028_05ca)();
    if (bVar2) {
      FUN_1018_08ba();
      return;
    }
  }
  FUN_1018_07be(uVar3,iVar1);
  FUN_1018_07be();
  FUN_1018_07be();
  return;
}


// ---- FUN_1018_074e @ 1018:074e

undefined2 __cdecl16far FUN_1018_074e(void)

{
  DAT_1028_05bd = 1;
  FUN_1018_07be();
  FUN_1018_07be();
  FUN_1018_07be();
  FUN_1018_07be();
  FUN_1018_07b0();
  FUN_1018_08ee();
  FUN_1018_08ee();
  return 0x100;
}


// ---- FUN_1018_07b0 @ 1018:07b0

void __cdecl16near FUN_1018_07b0(void)

{
  if (DAT_1028_05cc != 0) {
    (*DAT_1028_05ca)();
  }
  return;
}


// ---- FUN_1018_07be @ 1018:07be

void __cdecl16near FUN_1018_07be(void)

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


// ---- FUN_1018_07d2 @ 1018:07d2

void __cdecl16far FUN_1018_07d2(void)

{
  FUN_1018_08a3(0xfc);
  FUN_1018_08a3(0xff);
  return;
}


// ---- FUN_1018_07f6 @ 1018:07f6

void __cdecl16far FUN_1018_07f6(void)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  undefined2 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  undefined4 uVar9;
  
  uVar9 = GETDOSENVIRONMENT();
  iVar6 = (int)((ulong)uVar9 >> 0x10);
  if ((int)uVar9 != 0) {
    iVar6 = (int)uVar9;
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
  pcVar3 = (char *)FUN_1018_08c0();
  puVar4 = (undefined2 *)FUN_1018_08c0();
  pcVar8 = (char *)0x0;
  DAT_1028_05b4 = puVar4;
  for (; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar4 = pcVar3;
    puVar4 = puVar4 + 1;
    do {
      pcVar1 = pcVar8;
      pcVar8 = pcVar8 + 1;
      cVar2 = *pcVar1;
      pcVar1 = pcVar3;
      pcVar3 = pcVar3 + 1;
      *pcVar1 = cVar2;
    } while (cVar2 != '\0');
  }
  *puVar4 = 0;
  return;
}


// ---- FUN_1018_086c @ 1018:086c

int * __stdcall16far FUN_1018_086c(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  piVar3 = (int *)&DAT_1028_05de;
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


// ---- FUN_1018_08a3 @ 1018:08a3

undefined2 __stdcall16far FUN_1018_08a3(void)

{
  return 0x1028;
}


// ---- FUN_1018_08ba @ 1018:08ba

void FUN_1018_08ba(void)

{
  FUN_1018_08fa();
  return;
}


// ---- FUN_1018_08c0 @ 1018:08c0

void __cdecl16near FUN_1018_08c0(void)

{
  undefined2 uVar1;
  int iVar2;
  
  uVar1 = DAT_1028_05c2;
  LOCK();
  DAT_1028_05c2 = 0x1000;
  UNLOCK();
  iVar2 = FUN_1018_0a64();
  DAT_1028_05c2 = uVar1;
  if (iVar2 != 0) {
    return;
  }
  FUN_1018_08fa();
  return;
}


// ---- FUN_1018_08ee @ 1018:08ee

void __cdecl16near FUN_1018_08ee(void)

{
  return;
}


// ---- FUN_1018_08fa @ 1018:08fa

uint __cdecl16near FUN_1018_08fa(void)

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
  FUN_1018_07d2();
  FUN_1018_08a3(in_AX);
  pcVar3 = (char *)FUN_1018_086c(uVar11);
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
  FATALAPPEXIT(unaff_CS,pcVar3,0x1028);
  uVar5 = FATALEXIT(0x1078,0xff,uVar11);
  if ((*(byte *)(iVar8 + 2) & 1) != 0) {
    FUN_1018_0a33(unaff_DI,in_CX);
    uVar5 = *unaff_SI;
    if ((uVar5 & 1) != 0) {
      in_CX = (in_CX - uVar5) + -1;
    }
    uVar7 = *(uint *)(iVar8 + 4);
    if (uVar7 != 0) {
      if (!CARRY2(in_CX + 2U,uVar7)) {
        uVar11 = FUN_1018_0a54();
        uVar5 = *(uint *)&DAT_1028_05c2;
        if (uVar5 == 0x1000) goto LAB_1018_098e;
        uVar7 = 0x8000;
        while (uVar5 <= uVar7) {
          uVar7 = uVar7 >> 1;
          if (uVar7 == 0) goto LAB_1018_09a7;
        }
        if (uVar7 < 8) goto LAB_1018_09a7;
        uVar5 = uVar7 << 1;
        goto LAB_1018_098e;
      }
      uVar5 = 0;
      uVar6 = 0xfff0;
      if (in_CX + 2U + uVar7 == 0) {
        while( true ) {
          bVar10 = false;
          uVar5 = FUN_1018_09cd();
          if (!bVar10) break;
          if (uVar6 == 0xfff0) {
            return uVar5;
          }
LAB_1018_09a7:
          uVar5 = 0x10;
LAB_1018_098e:
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


// ---- FUN_1018_09cd @ 1018:09cd

void __cdecl16near FUN_1018_09cd(void)

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
LAB_1018_0a28:
    FUN_1018_08fa();
    return;
  }
  iVar5 = *(int *)(in_BX + 6);
  uVar3 = 0;
  if (in_AX == 0) {
    if ((DAT_1018_0582 & 0x10) != 0) {
      return;
    }
    uVar3 = 1;
  }
  uVar1 = 0x2002;
  if ((DAT_1018_0582 & 1) == 0) {
    uVar1 = 0x2020;
  }
  iVar6 = iVar5;
  iVar2 = GLOBALREALLOC(0x1018,uVar1,in_AX,uVar3);
  if (iVar2 != 0) {
    if ((iVar2 != iVar5) || (lVar4 = GLOBALSIZE(0x1078,iVar5,iVar6), lVar4 == 0))
    goto LAB_1018_0a28;
    if ((*(byte *)(iVar5 + 2) & 4) != 0) {
      *(int *)(iVar5 + -2) = in_BX + -1;
    }
  }
  return;
}


// ---- FUN_1018_0a33 @ 1018:0a33

void __cdecl16near FUN_1018_0a33(void)

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


// ---- FUN_1018_0a54 @ 1018:0a54

undefined2 __cdecl16far FUN_1018_0a54(void)

{
  undefined2 unaff_SS;
  
  if (___EXPORTEDSTUB != (code)0xb8) {
    return unaff_SS;
  }
  return uRam10180b5d;
}


// ---- FUN_1018_0a64 @ 1018:0a64

int __cdecl16far FUN_1018_0a64(int param_1)

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
    iVar1 = LOCALALLOC(0x1078,param_1);
    unaff_CS = 0x1078;
    UNLOCKSEGMENT(0x1078,0xffff,uVar2);
    if (iVar1 != 0) {
      return iVar1;
    }
    if (DAT_1028_05c6 == 0 && DAT_1028_05c4 == (code *)0x0) break;
    iVar1 = (*DAT_1028_05c4)(0x1078,param_1);
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 0;
}


// ---- ___EXPORTEDSTUB @ 1018:0b5c

undefined2 __cdecl16far ___EXPORTEDSTUB(void)

{
  return 0;
}


// ---- FATALEXIT @ 1078:0000

/* WARNING: Control flow encountered bad instruction data */

void FATALEXIT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GETVERSION @ 1078:0004

/* WARNING: Control flow encountered bad instruction data */

void GETVERSION(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- LOCALINIT @ 1078:0008

/* WARNING: Control flow encountered bad instruction data */

void LOCALINIT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- LOCALALLOC @ 1078:000c

/* WARNING: Control flow encountered bad instruction data */

void LOCALALLOC(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- LOCALREALLOC @ 1078:0010

/* WARNING: Control flow encountered bad instruction data */

void LOCALREALLOC(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- LOCALFREE @ 1078:0014

/* WARNING: Control flow encountered bad instruction data */

void LOCALFREE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- LOCALSIZE @ 1078:0018

/* WARNING: Control flow encountered bad instruction data */

void LOCALSIZE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GLOBALREALLOC @ 1078:001c

/* WARNING: Control flow encountered bad instruction data */

void GLOBALREALLOC(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GLOBALSIZE @ 1078:0020

/* WARNING: Control flow encountered bad instruction data */

void GLOBALSIZE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- LOCKSEGMENT @ 1078:0024

/* WARNING: Control flow encountered bad instruction data */

void LOCKSEGMENT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- UNLOCKSEGMENT @ 1078:0028

/* WARNING: Control flow encountered bad instruction data */

void UNLOCKSEGMENT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GETMODULEUSAGE @ 1078:002c

/* WARNING: Control flow encountered bad instruction data */

void GETMODULEUSAGE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GETMODULEFILENAME @ 1078:0030

/* WARNING: Control flow encountered bad instruction data */

void GETMODULEFILENAME(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- MAKEPROCINSTANCE @ 1078:0034

/* WARNING: Control flow encountered bad instruction data */

void MAKEPROCINSTANCE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- FREEPROCINSTANCE @ 1078:0038

/* WARNING: Control flow encountered bad instruction data */

void FREEPROCINSTANCE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- OPENFILE @ 1078:003c

/* WARNING: Control flow encountered bad instruction data */

void OPENFILE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- _LCLOSE @ 1078:0040

/* WARNING: Control flow encountered bad instruction data */

void _LCLOSE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- _LREAD @ 1078:0044

/* WARNING: Control flow encountered bad instruction data */

void _LREAD(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- LSTRCPY @ 1078:0048

/* WARNING: Control flow encountered bad instruction data */

void LSTRCPY(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- LSTRLEN @ 1078:004c

/* WARNING: Control flow encountered bad instruction data */

void LSTRLEN(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- INITTASK @ 1078:0050

/* WARNING: Control flow encountered bad instruction data */

void INITTASK(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- DOS3CALL @ 1078:0054

/* WARNING: Control flow encountered bad instruction data */

void DOS3CALL(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GETDOSENVIRONMENT @ 1078:0058

/* WARNING: Control flow encountered bad instruction data */

void GETDOSENVIRONMENT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- FATALAPPEXIT @ 1078:005c

/* WARNING: Control flow encountered bad instruction data */

void FATALAPPEXIT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- __WINFLAGS @ 1078:0060

/* WARNING: Control flow encountered bad instruction data */

void __WINFLAGS(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- LINETO @ 1078:0064

/* WARNING: Control flow encountered bad instruction data */

void LINETO(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- MOVETO @ 1078:0068

/* WARNING: Control flow encountered bad instruction data */

void MOVETO(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- BITBLT @ 1078:006c

/* WARNING: Control flow encountered bad instruction data */

void BITBLT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- POLYGON @ 1078:0070

/* WARNING: Control flow encountered bad instruction data */

void POLYGON(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- SELECTOBJECT @ 1078:0074

/* WARNING: Control flow encountered bad instruction data */

void SELECTOBJECT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- CREATECOMPATIBLEBITMAP @ 1078:0078

/* WARNING: Control flow encountered bad instruction data */

void CREATECOMPATIBLEBITMAP(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- CREATECOMPATIBLEDC @ 1078:007c

/* WARNING: Control flow encountered bad instruction data */

void CREATECOMPATIBLEDC(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- CREATEPEN @ 1078:0080

/* WARNING: Control flow encountered bad instruction data */

void CREATEPEN(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- CREATESOLIDBRUSH @ 1078:0084

/* WARNING: Control flow encountered bad instruction data */

void CREATESOLIDBRUSH(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- DELETEDC @ 1078:0088

/* WARNING: Control flow encountered bad instruction data */

void DELETEDC(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- DELETEOBJECT @ 1078:008c

/* WARNING: Control flow encountered bad instruction data */

void DELETEOBJECT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- MESSAGEBOX @ 1078:0090

/* WARNING: Control flow encountered bad instruction data */

void MESSAGEBOX(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GETTICKCOUNT @ 1078:0094

/* WARNING: Control flow encountered bad instruction data */

void GETTICKCOUNT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- SETCAPTURE @ 1078:0098

/* WARNING: Control flow encountered bad instruction data */

void SETCAPTURE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- RELEASECAPTURE @ 1078:009c

/* WARNING: Control flow encountered bad instruction data */

void RELEASECAPTURE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GETCLIENTRECT @ 1078:00a0

/* WARNING: Control flow encountered bad instruction data */

void GETCLIENTRECT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- BEGINPAINT @ 1078:00a4

/* WARNING: Control flow encountered bad instruction data */

void BEGINPAINT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- ENDPAINT @ 1078:00a8

/* WARNING: Control flow encountered bad instruction data */

void ENDPAINT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- CREATEWINDOW @ 1078:00ac

/* WARNING: Control flow encountered bad instruction data */

void CREATEWINDOW(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- ISWINDOW @ 1078:00b0

/* WARNING: Control flow encountered bad instruction data */

void ISWINDOW(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- ISWINDOWVISIBLE @ 1078:00b4

/* WARNING: Control flow encountered bad instruction data */

void ISWINDOWVISIBLE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- ENUMWINDOWS @ 1078:00b8

/* WARNING: Control flow encountered bad instruction data */

void ENUMWINDOWS(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- REGISTERCLASS @ 1078:00bc

/* WARNING: Control flow encountered bad instruction data */

void REGISTERCLASS(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GETCLASSNAME @ 1078:00c0

/* WARNING: Control flow encountered bad instruction data */

void GETCLASSNAME(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GETACTIVEWINDOW @ 1078:00c4

/* WARNING: Control flow encountered bad instruction data */

void GETACTIVEWINDOW(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GETDC @ 1078:00c8

/* WARNING: Control flow encountered bad instruction data */

void GETDC(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- RELEASEDC @ 1078:00cc

/* WARNING: Control flow encountered bad instruction data */

void RELEASEDC(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- PTINRECT @ 1078:00d0

/* WARNING: Control flow encountered bad instruction data */

void PTINRECT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- FILLRECT @ 1078:00d4

/* WARNING: Control flow encountered bad instruction data */

void FILLRECT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- INVERTRECT @ 1078:00d8

/* WARNING: Control flow encountered bad instruction data */

void INVERTRECT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- ENDDIALOG @ 1078:00dc

/* WARNING: Control flow encountered bad instruction data */

void ENDDIALOG(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- DEFWINDOWPROC @ 1078:00e0

/* WARNING: Control flow encountered bad instruction data */

void DEFWINDOWPROC(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- PEEKMESSAGE @ 1078:00e4

/* WARNING: Control flow encountered bad instruction data */

void PEEKMESSAGE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- POSTMESSAGE @ 1078:00e8

/* WARNING: Control flow encountered bad instruction data */

void POSTMESSAGE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- CALLWINDOWPROC @ 1078:00ec

/* WARNING: Control flow encountered bad instruction data */

void CALLWINDOWPROC(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- UPDATEWINDOW @ 1078:00f0

/* WARNING: Control flow encountered bad instruction data */

void UPDATEWINDOW(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- INVALIDATERECT @ 1078:00f4

/* WARNING: Control flow encountered bad instruction data */

void INVALIDATERECT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GETWINDOWLONG @ 1078:00f8

/* WARNING: Control flow encountered bad instruction data */

void GETWINDOWLONG(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- SETWINDOWLONG @ 1078:00fc

/* WARNING: Control flow encountered bad instruction data */

void SETWINDOWLONG(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- WINHELP @ 1078:0100

/* WARNING: Control flow encountered bad instruction data */

void WINHELP(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GETSYSTEMMETRICS @ 1078:0104

/* WARNING: Control flow encountered bad instruction data */

void GETSYSTEMMETRICS(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- UNREGISTERCLASS @ 1078:0108

/* WARNING: Control flow encountered bad instruction data */

void UNREGISTERCLASS(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- _WSPRINTF @ 1078:010c

/* WARNING: Control flow encountered bad instruction data */

void _WSPRINTF(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


