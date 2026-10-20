// Decompiled with Ghidra from leoimg.dll
// Format: Portable Executable (PE), image base 10000000

// ---- FUN_10001000 @ 10001000

void __cdecl FUN_10001000(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x30);
  puVar1[6] = param_1;
  *puVar1 = &LAB_10001030;
  puVar1[2] = &DAT_100018d0;
  return;
}


// ---- FUN_10001620 @ 10001620

int __cdecl FUN_10001620(int param_1)

{
  int iVar1;
  
  iVar1 = getc(*(FILE **)(param_1 + 0xc));
  if (iVar1 == -1) {
    *(undefined4 *)(**(int **)(param_1 + 0x18) + 0x14) = 0x2a;
    (**(code **)**(undefined4 **)(param_1 + 0x18))(*(undefined4 **)(param_1 + 0x18));
  }
  return iVar1;
}


// ---- FUN_10001660 @ 10001660

void __cdecl FUN_10001660(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_3 == 3) {
    iVar2 = 0;
    if (0 < param_2) {
      do {
        iVar1 = FUN_10001620(param_1);
        *(char *)(*(int *)(*(int *)(param_1 + 0x1c) + 8) + iVar2) = (char)iVar1;
        iVar1 = FUN_10001620(param_1);
        *(char *)(*(int *)(*(int *)(param_1 + 0x1c) + 4) + iVar2) = (char)iVar1;
        iVar1 = FUN_10001620(param_1);
        iVar2 = iVar2 + 1;
        *(char *)(**(int **)(param_1 + 0x1c) + -1 + iVar2) = (char)iVar1;
      } while (iVar2 < param_2);
    }
  }
  else {
    if (param_3 != 4) {
      *(undefined4 *)(**(int **)(param_1 + 0x18) + 0x14) = 0x3e9;
      (**(code **)**(undefined4 **)(param_1 + 0x18))(*(undefined4 **)(param_1 + 0x18));
      return;
    }
    iVar2 = 0;
    if (0 < param_2) {
      do {
        iVar1 = FUN_10001620(param_1);
        *(char *)(*(int *)(*(int *)(param_1 + 0x1c) + 8) + iVar2) = (char)iVar1;
        iVar1 = FUN_10001620(param_1);
        *(char *)(*(int *)(*(int *)(param_1 + 0x1c) + 4) + iVar2) = (char)iVar1;
        iVar1 = FUN_10001620(param_1);
        *(char *)(**(int **)(param_1 + 0x1c) + iVar2) = (char)iVar1;
        FUN_10001620(param_1);
        iVar2 = iVar2 + 1;
      } while (iVar2 < param_2);
      return;
    }
  }
  return;
}


// ---- FUN_10001800 @ 10001800

undefined4 __cdecl FUN_10001800(int param_1,int param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  
  piVar1 = *(int **)(param_2 + 0x1c);
  iVar5 = *(int *)(param_2 + 0x24) + -1;
  *(int *)(param_2 + 0x24) = iVar5;
  puVar3 = (undefined4 *)
           (**(code **)(*(int *)(param_1 + 4) + 0x1c))
                     (param_1,*(undefined4 *)(param_2 + 0x20),iVar5,1,0);
  pbVar6 = (byte *)*puVar3;
  puVar2 = (undefined1 *)**(undefined4 **)(param_2 + 0x10);
  for (iVar5 = *(int *)(param_1 + 0x18); iVar5 != 0; iVar5 = iVar5 + -1) {
    uVar4 = (uint)*pbVar6;
    pbVar6 = pbVar6 + 1;
    *puVar2 = *(undefined1 *)(*piVar1 + uVar4);
    puVar2[1] = *(undefined1 *)(piVar1[1] + uVar4);
    puVar2[2] = *(undefined1 *)(uVar4 + piVar1[2]);
    puVar2 = puVar2 + 3;
  }
  return 1;
}


// ---- FUN_10001870 @ 10001870

undefined4 __cdecl FUN_10001870(int param_1,int param_2)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_2 + 0x24) + -1;
  *(int *)(param_2 + 0x24) = iVar5;
  puVar2 = (undefined4 *)
           (**(code **)(*(int *)(param_1 + 4) + 0x1c))
                     (param_1,*(undefined4 *)(param_2 + 0x20),iVar5,1,0);
  puVar4 = (undefined1 *)*puVar2;
  puVar1 = (undefined1 *)**(undefined4 **)(param_2 + 0x10);
  for (iVar5 = *(int *)(param_1 + 0x18); iVar5 != 0; iVar5 = iVar5 + -1) {
    puVar1[2] = *puVar4;
    puVar3 = puVar4 + 2;
    puVar1[1] = puVar4[1];
    puVar4 = puVar4 + 3;
    *puVar1 = *puVar3;
    puVar1 = puVar1 + 3;
  }
  return 1;
}


// ---- FUN_10004730 @ 10004730

undefined4 * __fastcall FUN_10004730(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1002865e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_LAB_1002a31c;
  local_4 = 0;
  CString::CString((CString *)(param_1 + 1));
  local_4._0_1_ = 1;
  CString::CString((CString *)(param_1 + 2));
  local_4 = CONCAT31(local_4._1_3_,2);
  CString::CString((CString *)(param_1 + 0xb));
  *param_1 = &PTR_LAB_1002a308;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined2 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  *(undefined2 *)(param_1 + 0x2b) = 0;
  param_1[0x86] = 0;
  param_1[0x16] = 1;
  ExceptionList = local_c;
  return param_1;
}


// ---- FUN_10004860 @ 10004860

void __fastcall FUN_10004860(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_1002a31c;
  return;
}


// ---- FUN_10004890 @ 10004890

undefined4 * __thiscall FUN_10004890(void *this,byte param_1)

{
  FUN_100048b0(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- FUN_100048b0 @ 100048b0

void __fastcall FUN_100048b0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_1002868e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_LAB_1002a308;
  local_4 = 2;
  CString::~CString((CString *)(param_1 + 0xb));
  local_4._0_1_ = 1;
  CString::~CString((CString *)(param_1 + 2));
  local_4 = (uint)local_4._1_3_ << 8;
  CString::~CString((CString *)(param_1 + 1));
  *param_1 = &PTR_LAB_1002a31c;
  ExceptionList = local_c;
  return;
}


// ---- FUN_10004920 @ 10004920

undefined4 __thiscall
FUN_10004920(void *this,int *param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  char cVar1;
  short sVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  CString *pCVar6;
  CString *pCVar7;
  LPVOID pvVar8;
  undefined4 uVar9;
  HGLOBAL hMem;
  uint uVar10;
  uint uVar11;
  int unaff_EBX;
  char *pcVar12;
  char *pcVar13;
  CString CVar14;
  CString local_18 [4];
  undefined1 *local_14;
  void *local_10;
  void *local_c;
  undefined1 *local_8;
  undefined4 local_4;
  
  piVar3 = param_1;
  local_8 = &LAB_100286c8;
  local_c = ExceptionList;
  pCVar7 = (CString *)((int)this + 4);
  local_4 = 1;
  ExceptionList = &local_c;
  CString::operator=(pCVar7,(char *)(param_1 + 0xf));
  iVar5 = CString::Find(pCVar7,':');
  if (iVar5 == -1) {
    pCVar6 = (CString *)operator+((CString *)&param_1,(char *)&param_2);
    local_8._0_1_ = 2;
    CString::operator=(pCVar7,pCVar6);
    local_8 = (undefined1 *)CONCAT31(local_8._1_3_,1);
    CString::~CString((CString *)&stack0x00000000);
  }
  CString::CString((CString *)&stack0xffffffe4,(char *)(piVar3 + 0xbe));
  local_8 = (undefined1 *)CONCAT31(local_8._1_3_,3);
  if (*(int *)(unaff_EBX + -8) == 0) {
    CString::operator=((CString *)((int)this + 8),&DAT_10039fec);
  }
  else {
    pCVar7 = (CString *)operator+(local_18,(CString *)&param_2);
    local_c._0_1_ = 4;
    CString::operator=((CString *)((int)this + 8),pCVar7);
    local_c = (void *)CONCAT31(local_c._1_3_,3);
    CString::~CString((CString *)&stack0xffffffe4);
  }
  pvVar8 = GlobalLock((HGLOBAL)*param_4);
  *(LPVOID *)((int)this + 0xa0) = pvVar8;
  if (pvVar8 == (LPVOID)0x0) {
    local_8._0_1_ = 1;
    CString::~CString((CString *)&stack0xffffffe4);
    local_8 = (undefined1 *)((uint)local_8._1_3_ << 8);
    CString::~CString((CString *)&param_1);
    local_8 = (undefined1 *)0xffffffff;
    CString::~CString((CString *)&param_2);
    uVar9 = 0x1d2;
  }
  else {
    *(undefined2 *)((int)this + 0xac) = 0;
    if (*(int *)((int)pvVar8 + 0x20) == 0) {
      sVar2 = *(short *)((int)pvVar8 + 0xe);
      if (sVar2 == 1) {
        *(undefined2 *)((int)this + 0xac) = 2;
      }
      else if (sVar2 == 4) {
        *(undefined2 *)((int)this + 0xac) = 0x10;
      }
      else if (sVar2 == 8) {
        *(undefined2 *)((int)this + 0xac) = 0x100;
      }
    }
    else {
      *(undefined2 *)((int)this + 0xac) = *(undefined2 *)((int)pvVar8 + 0x20);
    }
    if (*(short *)((int)this + 0xac) == 0x100) {
      *(int *)((int)this + 0xa8) = (int)pvVar8 + 0x28;
      *(int *)((int)this + 0xa4) = (int)pvVar8 + 0x428;
      *(undefined4 *)((int)this + 0x210) = *(undefined4 *)((int)pvVar8 + 4);
      iVar5 = *(int *)((int)pvVar8 + 8);
      *(int *)((int)this + 0x20c) = iVar5;
      if (iVar5 < 0) {
        *(int *)((int)this + 0x20c) = -iVar5;
      }
      *(int *)((int)this + 0x214) = *(int *)((int)this + 0x210) * *(int *)((int)this + 0x20c);
      CVar14 = *(CString *)(piVar3 + 9);
      param_4 = (undefined4 *)(uint)(*piVar3 == 1);
      if (piVar3[0xe] != 0) {
        CVar14 = (CString)0x1;
      }
      *(int *)((int)this + 0x60) = piVar3[10];
      uVar10 = 0xffffffff;
      pcVar12 = (char *)((int)piVar3 + 0x19a);
      do {
        pcVar13 = pcVar12;
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        pcVar13 = pcVar12 + 1;
        cVar1 = *pcVar12;
        pcVar12 = pcVar13;
      } while (cVar1 != '\0');
      uVar10 = ~uVar10;
      pcVar12 = pcVar13 + -uVar10;
      pcVar13 = (char *)((int)this + 0xae);
      for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar12;
        pcVar12 = pcVar12 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pcVar13 = *pcVar12;
        pcVar12 = pcVar12 + 1;
        pcVar13 = pcVar13 + 1;
      }
      local_14 = &stack0xffffffd0;
      CString::CString((CString *)&stack0xffffffd0,(char *)((int)this + 0xae));
      PMSetStringValue(4);
      hMem = GlobalAlloc(2,0x911);
      *(HGLOBAL *)((int)this + 0x4c) = hMem;
      if (hMem == (HGLOBAL)0x0) {
        local_8._0_1_ = 1;
        CString::~CString((CString *)&stack0xffffffe4);
        local_8 = (undefined1 *)((uint)local_8._1_3_ << 8);
        CString::~CString((CString *)&param_1);
        local_8 = (undefined1 *)0xffffffff;
        CString::~CString((CString *)&param_2);
        uVar9 = 1;
      }
      else {
        pvVar8 = GlobalLock(hMem);
        *(LPVOID *)((int)this + 0x94) = pvVar8;
        if (pvVar8 == (LPVOID)0x0) {
          GlobalFree(*(HGLOBAL *)((int)this + 0x4c));
        }
        else {
          iVar5 = FUN_10007fc0(this,piVar3,param_3);
          if (iVar5 == 0) {
            iVar5 = FUN_10005da0(this);
            puVar4 = param_4;
            if (iVar5 != 0) {
              FUN_10005cb0((int)this);
              FUN_10008700((int)this);
              FUN_10007760((int)this);
              local_8._0_1_ = 1;
              CString::~CString((CString *)&stack0xffffffe4);
              local_8 = (undefined1 *)((uint)local_8._1_3_ << 8);
              CString::~CString((CString *)&param_1);
              local_8 = (undefined1 *)0xffffffff;
              CString::~CString((CString *)&param_2);
              ExceptionList = local_10;
              return 0x1c9;
            }
            iVar5 = FUN_10005e20(this,0,0,1,0,(int)(char)CVar14,0,(int)param_4);
            if (iVar5 != 0) {
              FUN_10005cb0((int)this);
              FUN_10008700((int)this);
              FUN_10007760((int)this);
              local_8._0_1_ = 1;
              CString::~CString((CString *)&stack0xffffffe4);
              local_8 = (undefined1 *)((uint)local_8._1_3_ << 8);
              CString::~CString((CString *)&param_1);
              local_8 = (undefined1 *)0xffffffff;
              CString::~CString((CString *)&param_2);
              ExceptionList = local_10;
              return 0x1ca;
            }
            iVar5 = FUN_10006750(this,(int)puVar4);
            if (iVar5 != 0) {
              FUN_10005cb0((int)this);
              FUN_10008700((int)this);
              FUN_10007760((int)this);
              local_8._0_1_ = 1;
              CString::~CString((CString *)&stack0xffffffe4);
              local_8 = (undefined1 *)((uint)local_8._1_3_ << 8);
              CString::~CString((CString *)&param_1);
              local_8 = (undefined1 *)0xffffffff;
              CString::~CString((CString *)&param_2);
              ExceptionList = local_10;
              return 0x1cb;
            }
            FUN_10005cb0((int)this);
            FUN_10008700((int)this);
            FUN_10007760((int)this);
            local_8._0_1_ = 1;
            CString::~CString((CString *)&stack0xffffffe4);
            local_8 = (undefined1 *)((uint)local_8._1_3_ << 8);
            CString::~CString((CString *)&param_1);
            local_8 = (undefined1 *)0xffffffff;
            CString::~CString((CString *)&param_2);
            ExceptionList = local_10;
            return 0;
          }
          FUN_10008700((int)this);
          FUN_10007760((int)this);
        }
        local_8._0_1_ = 1;
        CString::~CString((CString *)&stack0xffffffe4);
        local_8 = (undefined1 *)((uint)local_8._1_3_ << 8);
        CString::~CString((CString *)&param_1);
        local_8 = (undefined1 *)0xffffffff;
        CString::~CString((CString *)&param_2);
        uVar9 = 0x1d1;
      }
    }
    else {
      local_8._0_1_ = 1;
      CString::~CString((CString *)&stack0xffffffe4);
      local_8 = (undefined1 *)((uint)local_8._1_3_ << 8);
      CString::~CString((CString *)&param_1);
      local_8 = (undefined1 *)0xffffffff;
      CString::~CString((CString *)&param_2);
      uVar9 = 0x241;
    }
  }
  ExceptionList = local_10;
  return uVar9;
}


// ---- FUN_10004db0 @ 10004db0

undefined4 __thiscall FUN_10004db0(void *this,int param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  bool bVar2;
  int iVar3;
  CString *pCVar4;
  HGLOBAL hMem;
  LPVOID pvVar5;
  int iVar6;
  undefined3 extraout_var;
  undefined4 uVar7;
  undefined3 extraout_var_00;
  int iVar8;
  int in_stack_00000018;
  CString local_60 [4];
  CString local_5c [4];
  CString local_58 [4];
  SIZE_T local_54;
  undefined2 uStack_50;
  SIZE_T local_4e;
  undefined2 local_4a;
  undefined2 uStack_48;
  int iStack_46;
  int local_3c;
  int iStack_38;
  char local_28 [4];
  uint local_24;
  uint local_20;
  char local_1c;
  char local_1b;
  char cStack_18;
  char cStack_17;
  char cStack_16;
  char cStack_11;
  void *local_c;
  undefined1 *local_8;
  int local_4;
  
  local_8 = &LAB_10028718;
  local_c = ExceptionList;
  local_4 = 2;
  ExceptionList = &local_c;
  CString::operator=((CString *)((int)this + 0x2c),(CString *)&stack0x00000010);
  CString::CString(local_60,(char *)(param_1 + 0x3c));
  local_4 = CONCAT31(local_4._1_3_,3);
  iVar3 = CString::Find(local_60,&DAT_100386dc);
  if (iVar3 == -1) {
    pCVar4 = (CString *)operator+(local_58,(CString *)&stack0x0000000c);
    local_8._0_1_ = 4;
    CString::operator=((CString *)((int)this + 4),pCVar4);
    local_8 = (undefined1 *)CONCAT31(local_8._1_3_,3);
    CString::~CString(local_5c);
  }
  else {
    CString::operator=((CString *)((int)this + 4),local_60);
  }
  CString::CString(local_5c,(char *)(param_1 + 0x2f8));
  local_4 = CONCAT31(local_4._1_3_,5);
  if (in_stack_00000018 == 0) {
    pCVar4 = (CString *)operator+(local_58,(CString *)&stack0x00000014);
    local_8._0_1_ = 6;
    CString::operator=((CString *)((int)this + 8),pCVar4);
    local_8 = (undefined1 *)CONCAT31(local_8._1_3_,5);
    CString::~CString(local_5c);
    *(undefined4 *)((int)this + 0x218) = 0;
  }
  else {
    CString::operator=((CString *)((int)this + 8),&DAT_10039fec);
    *(undefined4 *)((int)this + 0x218) = 1;
  }
  *(int *)((int)this + 0x58) = *(int *)(param_1 + 0x10) + 1;
  iVar3 = FUN_100068f0(this);
  if (iVar3 != 0) {
    local_4._0_1_ = 3;
    CString::~CString(local_5c);
    local_4._0_1_ = 2;
    CString::~CString(local_60);
    local_4._0_1_ = 1;
    CString::~CString((CString *)&stack0x0000000c);
    local_4 = (uint)local_4._1_3_ << 8;
    CString::~CString((CString *)&stack0x00000010);
    local_4 = 0xffffffff;
    CString::~CString((CString *)&stack0x00000014);
    ExceptionList = local_c;
    return 0x1cc;
  }
  iVar3 = FUN_10006d30(this,local_28);
  if (iVar3 != 0) {
    FUN_10005cb0((int)this);
    local_4._0_1_ = 3;
    CString::~CString(local_5c);
    local_4._0_1_ = 2;
    CString::~CString(local_60);
    local_4._0_1_ = 1;
    CString::~CString((CString *)&stack0x0000000c);
    local_4 = (uint)local_4._1_3_ << 8;
    CString::~CString((CString *)&stack0x00000010);
    local_4 = 0xffffffff;
    CString::~CString((CString *)&stack0x00000014);
    ExceptionList = local_c;
    return 0x1cd;
  }
  if ((((cStack_16 == '\0') || (local_1c == '\x01')) || (local_1c != '\0')) ||
     ((local_24 == 0 || (local_20 == 0)))) {
LAB_10004f99:
    FUN_10005cb0((int)this);
    local_4._0_1_ = 3;
    CString::~CString(local_5c);
    local_4._0_1_ = 2;
    CString::~CString(local_60);
    local_4._0_1_ = 1;
    CString::~CString((CString *)&stack0x0000000c);
    local_4 = (uint)local_4._1_3_ << 8;
    CString::~CString((CString *)&stack0x00000010);
LAB_10005374:
    local_4 = 0xffffffff;
    CString::~CString((CString *)&stack0x00000014);
    uVar7 = 0x1cf;
  }
  else {
    if (cStack_11 == '\x01') {
      iVar3 = FUN_10007580(this,(LPSTR)(param_1 + 0x19a));
      if (iVar3 != 0) goto LAB_10004f99;
    }
    else {
      *(undefined1 *)(param_1 + 0x19a) = 0;
    }
    *(uint *)((int)this + 0x210) = local_24 & 0xffff;
    local_3c = (int)((longlong)(ulonglong)(local_24 & 0xffff) / (longlong)*(int *)((int)this + 0x58)
                    );
    *(uint *)((int)this + 0x20c) = local_20 & 0xffff;
    if (local_3c == 0) {
      local_3c = 1;
    }
    iStack_38 = (int)((longlong)(ulonglong)(local_20 & 0xffff) /
                     (longlong)*(int *)((int)this + 0x58));
    if (iStack_38 == 0) {
      iStack_38 = 1;
    }
    iVar3 = local_3c * 8 + 0x1f;
    iVar8 = 0x100;
    if ((cStack_17 != '\x01') && (iVar8 = 0, *(int *)((int)this + 0x218) != 0)) {
      iVar8 = 0x100;
    }
    uStack_50 = 0x4d42;
    iVar3 = ((int)(iVar3 + (iVar3 >> 0x1f & 0x1fU)) >> 5) * 4 * iStack_38;
    iStack_46 = iVar8 * 4 + 0x36;
    local_4a = 0;
    local_54 = iVar3 + 0x28 + iVar8 * 4;
    uStack_48 = 0;
    local_4e = local_54;
    hMem = GlobalAlloc(2,local_54);
    *(HGLOBAL *)((int)this + 0x54) = hMem;
    if (hMem != (HGLOBAL)0x0) {
      pvVar5 = GlobalLock(hMem);
      *(LPVOID *)((int)this + 0xa0) = pvVar5;
      if (pvVar5 != (LPVOID)0x0) {
        *(int *)((int)this + 0xa8) = (int)pvVar5 + 0x28;
        if ((cStack_17 != '\x01') && (*(int *)((int)this + 0x218) != 0)) {
          iVar6 = 0;
          do {
            uVar1 = (undefined1)iVar6;
            *(undefined1 *)(*(int *)((int)this + 0xa8) + 2 + iVar6 * 4) = uVar1;
            *(undefined1 *)(*(int *)((int)this + 0xa8) + 1 + iVar6 * 4) = uVar1;
            *(undefined1 *)(*(int *)((int)this + 0xa8) + iVar6 * 4) = uVar1;
            iVar6 = iVar6 + 1;
          } while (iVar6 < 0x100);
        }
        *(int *)((int)this + 0xa4) = *(int *)((int)this + 0xa0) + 0x28 + iVar8 * 4;
        *(int *)(*(int *)((int)this + 0xa0) + 4) = local_3c;
        *(int *)(*(int *)((int)this + 0xa0) + 8) = iStack_38;
        **(undefined4 **)((int)this + 0xa0) = 0x28;
        *(undefined2 *)(*(int *)((int)this + 0xa0) + 0xc) = 1;
        *(undefined2 *)(*(int *)((int)this + 0xa0) + 0xe) = 8;
        *(undefined4 *)(*(int *)((int)this + 0xa0) + 0x10) = 0;
        *(int *)(*(int *)((int)this + 0xa0) + 0x20) = iVar8;
        *(int *)(*(int *)((int)this + 0xa0) + 0x24) = iVar8;
        *(int *)(*(int *)((int)this + 0xa0) + 0x14) = iVar3;
        *(undefined4 *)((int)this + 0x5c) = *(undefined4 *)(param_1 + 0xc);
        if ((cStack_17 == '\x01') && (iVar3 = FUN_10007800(this), iVar3 != 0)) {
          FUN_10005cb0((int)this);
          local_4._0_1_ = 3;
          CString::~CString(local_5c);
          local_4._0_1_ = 2;
          CString::~CString(local_60);
          local_4._0_1_ = 1;
          CString::~CString((CString *)&stack0x0000000c);
          local_4 = (uint)local_4._1_3_ << 8;
          CString::~CString((CString *)&stack0x00000010);
          local_4 = 0xffffffff;
          CString::~CString((CString *)&stack0x00000014);
          ExceptionList = local_c;
          return 0x1cf;
        }
        if (local_1b == '\x01') {
          *(undefined4 *)((int)this + 0x58) = 1;
        }
        bVar2 = FUN_100078e0(this,(int)local_1b,0);
        if (CONCAT31(extraout_var,bVar2) != 0) {
          FUN_10005cb0((int)this);
          local_4._0_1_ = 3;
          CString::~CString(local_5c);
          local_4._0_1_ = 2;
          CString::~CString(local_60);
          local_4._0_1_ = 1;
          CString::~CString((CString *)&stack0x0000000c);
          local_4 = (uint)local_4._1_3_ << 8;
          CString::~CString((CString *)&stack0x00000010);
          local_4 = 0xffffffff;
          CString::~CString((CString *)&stack0x00000014);
          ExceptionList = local_c;
          return 0x1ce;
        }
        if (((cStack_18 != '\x01') ||
            (iVar3 = _mbscmp(*(uchar **)((int)this + 8),&DAT_10039fec), iVar3 == 0)) ||
           (iVar3 = FUN_10007600(this,'\0'), iVar3 == 0)) {
          FUN_10005cb0((int)this);
          bVar2 = FUN_10007c80((int)this);
          if (((CONCAT31(extraout_var_00,bVar2) == 0) &&
              (iVar3 = FUN_10007cd0(this,&uStack_50), iVar3 == 0)) &&
             ((iVar3 = FUN_10007d10(this,*(LPCVOID *)((int)this + 0xa0),local_54), iVar3 == 0 &&
              (iVar3 = FUN_10007d50((int)this), iVar3 == 0)))) {
            GlobalUnlock(*(HGLOBAL *)((int)this + 0x54));
            GlobalFree(*(HGLOBAL *)((int)this + 0x54));
            GetLastError();
            if ((cStack_18 == '\x01') && (in_stack_00000018 == 0)) {
              uVar7 = FUN_100089f0(this,param_2);
              local_4._0_1_ = 3;
              CString::~CString(local_5c);
              local_4._0_1_ = 2;
              CString::~CString(local_60);
              local_4._0_1_ = 1;
              CString::~CString((CString *)&stack0x0000000c);
              local_4 = (uint)local_4._1_3_ << 8;
              CString::~CString((CString *)&stack0x00000010);
              local_4 = 0xffffffff;
              CString::~CString((CString *)&stack0x00000014);
              ExceptionList = local_c;
              return uVar7;
            }
            local_4._0_1_ = 3;
            CString::~CString(local_5c);
            local_4._0_1_ = 2;
            CString::~CString(local_60);
            local_4._0_1_ = 1;
            CString::~CString((CString *)&stack0x0000000c);
            local_4 = (uint)local_4._1_3_ << 8;
            CString::~CString((CString *)&stack0x00000010);
            local_4 = 0xffffffff;
            CString::~CString((CString *)&stack0x00000014);
            ExceptionList = local_c;
            return 0;
          }
          GlobalUnlock(*(HGLOBAL *)((int)this + 0x54));
          GlobalFree(*(HGLOBAL *)((int)this + 0x54));
          local_4._0_1_ = 3;
          CString::~CString(local_5c);
          local_4._0_1_ = 2;
          CString::~CString(local_60);
          local_4._0_1_ = 1;
          CString::~CString((CString *)&stack0x0000000c);
          local_4 = (uint)local_4._1_3_ << 8;
          CString::~CString((CString *)&stack0x00000010);
          local_4 = 0xffffffff;
          CString::~CString((CString *)&stack0x00000014);
          ExceptionList = local_c;
          return 0x23f;
        }
        FUN_10005cb0((int)this);
        FUN_10007730((int)this);
        FUN_10007760((int)this);
        local_4._0_1_ = 3;
        CString::~CString(local_5c);
        local_4._0_1_ = 2;
        CString::~CString(local_60);
        local_4._0_1_ = 1;
        CString::~CString((CString *)&stack0x0000000c);
        local_4 = (uint)local_4._1_3_ << 8;
        CString::~CString((CString *)&stack0x00000010);
        goto LAB_10005374;
      }
    }
    local_4._0_1_ = 3;
    CString::~CString(local_5c);
    local_4._0_1_ = 2;
    CString::~CString(local_60);
    local_4._0_1_ = 1;
    CString::~CString((CString *)&stack0x0000000c);
    local_4 = (uint)local_4._1_3_ << 8;
    CString::~CString((CString *)&stack0x00000010);
    local_4 = 0xffffffff;
    CString::~CString((CString *)&stack0x00000014);
    uVar7 = 0x1d3;
  }
  ExceptionList = local_c;
  return uVar7;
}


// ---- FUN_10005530 @ 10005530

undefined4 __thiscall FUN_10005530(void *this,int param_1)

{
  bool bVar1;
  int iVar2;
  CString *pCVar3;
  undefined4 uVar4;
  int iVar5;
  CString local_30 [4];
  CString local_2c [4];
  char local_28 [4];
  undefined4 local_24;
  undefined4 local_20;
  char local_1c;
  char cStack_1a;
  char cStack_18;
  char cStack_11;
  char local_10;
  void *local_c;
  undefined1 *local_8;
  int local_4;
  
  iVar5 = param_1;
  local_8 = &LAB_10028760;
  local_c = ExceptionList;
  bVar1 = true;
  local_4 = 1;
  ExceptionList = &local_c;
  CString::CString(local_30,(char *)(param_1 + 0x2e0));
  local_4._0_1_ = 2;
  CString::CString((CString *)&param_1,(char *)(iVar5 + 0x182));
  local_4 = CONCAT31(local_4._1_3_,3);
  iVar2 = CString::FindOneOf(local_30,&DAT_100386e0);
  if (iVar2 == -1) {
    pCVar3 = (CString *)operator+(local_2c,(CString *)&stack0x00000008);
    local_8._0_1_ = 4;
    CString::operator=((CString *)((int)this + 4),pCVar3);
    local_8 = (undefined1 *)CONCAT31(local_8._1_3_,3);
    CString::~CString(local_30);
  }
  else {
    CString::operator=((CString *)((int)this + 4),local_30);
  }
  if (*(int *)(param_1 + -8) == 0) {
    bVar1 = false;
  }
  else {
    iVar2 = CString::FindOneOf((CString *)&param_1,&DAT_100386e0);
    if (iVar2 == -1) {
      pCVar3 = (CString *)operator+(local_2c,(CString *)&stack0x0000000c);
      local_8._0_1_ = 5;
      CString::operator=((CString *)((int)this + 8),pCVar3);
      local_8 = (undefined1 *)CONCAT31(local_8._1_3_,3);
      CString::~CString(local_30);
    }
    else {
      CString::operator=((CString *)((int)this + 8),(CString *)&param_1);
    }
  }
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  iVar2 = FUN_100068f0(this);
  if (iVar2 != 0) {
    local_4._0_1_ = 2;
    CString::~CString((CString *)&param_1);
    local_4._0_1_ = 1;
    CString::~CString(local_30);
    local_4 = (uint)local_4._1_3_ << 8;
    CString::~CString((CString *)&stack0x00000008);
    local_4 = 0xffffffff;
    CString::~CString((CString *)&stack0x0000000c);
    ExceptionList = local_c;
    return 0x1cc;
  }
  iVar2 = FUN_10006d30(this,local_28);
  if (iVar2 == 0) {
    *(undefined4 *)(iVar5 + 8) = local_24;
    *(undefined4 *)(iVar5 + 0xc) = local_20;
    if (local_1c == '\x02') {
      *(undefined4 *)(iVar5 + 0x18) = 2;
    }
    else if (local_1c == '\0') {
      if (cStack_1a == '\x03') {
        *(undefined4 *)(iVar5 + 0x18) = 3;
      }
      else {
        *(undefined4 *)(iVar5 + 0x18) = 0;
      }
    }
    else if (local_1c == '\x01') {
      *(undefined4 *)(iVar5 + 0x18) = 1;
    }
    if (cStack_11 == '\x01') {
      iVar2 = FUN_10007580(this,(LPSTR)(iVar5 + 0x24));
      if (iVar2 == 0) goto LAB_10005707;
      FUN_10005cb0((int)this);
    }
    else {
      *(undefined1 *)(iVar5 + 0x24) = 0;
LAB_10005707:
      if (((bVar1) && (cStack_18 == '\x01')) && (iVar2 = FUN_10007600(this,'\0'), iVar2 != 0)) {
        FUN_10005cb0((int)this);
        FUN_10007730((int)this);
      }
      else {
        *(int *)(iVar5 + 4) = (int)local_28[0];
        *(int *)(iVar5 + 0x1c) = (int)local_10;
        if (local_28[0] != 1) {
          *(undefined4 *)(iVar5 + 0x10) = 0;
          *(undefined4 *)(iVar5 + 0x14) = 0;
          *(undefined4 *)(iVar5 + 0x20) = 0;
LAB_10005834:
          FUN_10005cb0((int)this);
          if (*(int *)(param_1 + -8) != 0) {
            FUN_10008730(this);
          }
          FUN_10007760((int)this);
          local_4._0_1_ = 2;
          CString::~CString((CString *)&param_1);
          local_4._0_1_ = 1;
          CString::~CString(local_30);
          local_4 = (uint)local_4._1_3_ << 8;
          CString::~CString((CString *)&stack0x00000008);
          local_4 = 0xffffffff;
          CString::~CString((CString *)&stack0x0000000c);
          ExceptionList = local_c;
          return 0;
        }
        iVar2 = FUN_10006d30(this,local_28);
        if (iVar2 != 0) {
          FUN_10005cb0((int)this);
          FUN_10007760((int)this);
          goto LAB_10005769;
        }
        *(undefined4 *)(iVar5 + 0x10) = local_24;
        *(undefined4 *)(iVar5 + 0x14) = local_20;
        *(int *)(iVar5 + 0x20) = (int)local_10;
        if (((!bVar1) || (cStack_18 != '\x01')) || (iVar5 = FUN_10007600(this,'\x01'), iVar5 == 0))
        goto LAB_10005834;
        FUN_10005cb0((int)this);
      }
      FUN_10007760((int)this);
    }
    local_4._0_1_ = 2;
    CString::~CString((CString *)&param_1);
    local_4._0_1_ = 1;
    CString::~CString(local_30);
    local_4 = (uint)local_4._1_3_ << 8;
    CString::~CString((CString *)&stack0x00000008);
    local_4 = 0xffffffff;
    CString::~CString((CString *)&stack0x0000000c);
    uVar4 = 0x1cf;
  }
  else {
    FUN_10005cb0((int)this);
LAB_10005769:
    local_4._0_1_ = 2;
    CString::~CString((CString *)&param_1);
    local_4._0_1_ = 1;
    CString::~CString(local_30);
    local_4 = (uint)local_4._1_3_ << 8;
    CString::~CString((CString *)&stack0x00000008);
    local_4 = 0xffffffff;
    CString::~CString((CString *)&stack0x0000000c);
    uVar4 = 0x1cd;
  }
  ExceptionList = local_c;
  return uVar4;
}


// ---- FUN_100058b0 @ 100058b0

bool __fastcall FUN_100058b0(int param_1)

{
  HANDLE pvVar1;
  _SECURITY_ATTRIBUTES local_c;
  
  local_c.nLength = 0xc;
  local_c.lpSecurityDescriptor = (LPVOID)0x0;
  local_c.bInheritHandle = 1;
  pvVar1 = CreateFileA(*(LPCSTR *)(param_1 + 4),0x40000000,1,&local_c,2,0x80000080,(HANDLE)0x0);
  *(HANDLE *)(param_1 + 0xc) = pvVar1;
  return pvVar1 == (HANDLE)0xffffffff;
}


// ---- FUN_10005900 @ 10005900

undefined4 __thiscall FUN_10005900(void *this,undefined4 param_1)

{
  BOOL BVar1;
  void *local_4;
  
  local_4 = this;
  BVar1 = WriteFile(*(HANDLE *)((int)this + 0xc),&param_1,2,(LPDWORD)&local_4,(LPOVERLAPPED)0x0);
  if ((BVar1 == 1) && (local_4 == (void *)0x2)) {
    return 0;
  }
  return 1;
}


// ---- FUN_10005950 @ 10005950

undefined4 __fastcall FUN_10005950(DWORD param_1)

{
  BOOL BVar1;
  DWORD local_4;
  
  local_4 = param_1;
  BVar1 = WriteFile(*(HANDLE *)(param_1 + 0xc),&stack0x00000004,1,&local_4,(LPOVERLAPPED)0x0);
  if ((BVar1 == 1) && (local_4 == 1)) {
    return 0;
  }
  return 1;
}


// ---- FUN_10005990 @ 10005990

undefined4 __thiscall FUN_10005990(void *this,undefined4 param_1)

{
  BOOL BVar1;
  void *local_4;
  
  local_4 = this;
  BVar1 = WriteFile(*(HANDLE *)((int)this + 0xc),&param_1,4,(LPDWORD)&local_4,(LPOVERLAPPED)0x0);
  if ((BVar1 == 1) && (local_4 == (void *)0x4)) {
    return 0;
  }
  return 1;
}


// ---- FUN_100059f0 @ 100059f0

undefined4 __thiscall FUN_100059f0(void *this,undefined1 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  BOOL BVar3;
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
  undefined1 local_2;
  undefined1 local_1;
  
  local_c = *param_1;
  local_b = param_1[1];
  local_a = param_1[2];
  local_9 = param_1[3];
  uVar1 = *(undefined4 *)(param_1 + 4);
  local_5 = (undefined1)((uint)uVar1 >> 0x18);
  local_7 = (undefined1)((uint)uVar1 >> 8);
  local_8 = param_1[4];
  uVar2 = *(undefined4 *)(param_1 + 8);
  local_6 = (undefined1)((uint)uVar1 >> 0x10);
  local_1 = (undefined1)((uint)uVar2 >> 0x18);
  local_3 = (undefined1)((uint)uVar2 >> 8);
  local_4 = param_1[8];
  local_2 = (undefined1)((uint)uVar2 >> 0x10);
  BVar3 = WriteFile(*(HANDLE *)((int)this + 0xc),&local_c,0xc,(LPDWORD)&param_1,(LPOVERLAPPED)0x0);
  if ((BVar3 == 1) && (param_1 == (undefined1 *)0xc)) {
    return 0;
  }
  return 1;
}


// ---- FUN_10005aa0 @ 10005aa0

bool __fastcall FUN_10005aa0(void *param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 *puVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 local_200 [512];
  
  uVar4 = (uint)*(ushort *)((int)param_1 + 0xac);
  puVar5 = *(undefined1 **)((int)param_1 + 0xa8);
  if (uVar4 != 0) {
    puVar6 = puVar5 + 2;
    puVar3 = local_200;
    do {
      uVar1 = *puVar6;
      puVar6 = puVar6 + 4;
      puVar3[1] = uVar1;
      *puVar3 = 0;
      uVar4 = uVar4 - 1;
      puVar3 = puVar3 + 2;
    } while (uVar4 != 0);
  }
  iVar2 = FUN_10005bb0(param_1,local_200,0x200);
  if (iVar2 != 0) {
    return true;
  }
  uVar4 = (uint)*(ushort *)((int)param_1 + 0xac);
  if (uVar4 != 0) {
    puVar6 = puVar5 + 1;
    puVar3 = local_200;
    do {
      uVar1 = *puVar6;
      puVar6 = puVar6 + 4;
      puVar3[1] = uVar1;
      *puVar3 = 0;
      uVar4 = uVar4 - 1;
      puVar3 = puVar3 + 2;
    } while (uVar4 != 0);
  }
  iVar2 = FUN_10005bb0(param_1,local_200,0x200);
  if (iVar2 != 0) {
    return true;
  }
  uVar4 = (uint)*(ushort *)((int)param_1 + 0xac);
  if (uVar4 != 0) {
    puVar6 = local_200;
    do {
      uVar1 = *puVar5;
      puVar5 = puVar5 + 4;
      puVar6[1] = uVar1;
      *puVar6 = 0;
      uVar4 = uVar4 - 1;
      puVar6 = puVar6 + 2;
    } while (uVar4 != 0);
  }
  iVar2 = FUN_10005bb0(param_1,local_200,0x200);
  return iVar2 != 0;
}


// ---- FUN_10005bb0 @ 10005bb0

undefined4 __thiscall FUN_10005bb0(void *this,LPCVOID param_1,DWORD param_2)

{
  DWORD DVar1;
  BOOL BVar2;
  
  DVar1 = param_2;
  BVar2 = WriteFile(*(HANDLE *)((int)this + 0xc),param_1,param_2,&param_2,(LPOVERLAPPED)0x0);
  if ((BVar2 == 1) && (param_2 == DVar1)) {
    return 0;
  }
  return 1;
}


// ---- FUN_10005bf0 @ 10005bf0

undefined4 __thiscall FUN_10005bf0(void *this,char param_1,int param_2)

{
  LPCVOID pvVar1;
  int iVar2;
  DWORD DVar3;
  
  if (param_2 == 0) {
    pvVar1 = *(LPCVOID *)((int)this + 0x8c);
    DVar3 = *(DWORD *)((int)this + 0x78);
  }
  else {
    pvVar1 = *(LPCVOID *)((int)this + 0x90);
    DVar3 = *(DWORD *)((int)this + 0x7c);
  }
  iVar2 = FUN_10005bb0(this,pvVar1,DVar3);
  if (iVar2 == 0) {
    if ('\0' < param_1) {
      iVar2 = (int)param_1;
      do {
        FUN_10005950((DWORD)this);
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    return 0;
  }
  return 1;
}


// ---- FUN_10005c50 @ 10005c50

undefined4 __thiscall FUN_10005c50(void *this,char param_1,int param_2)

{
  LPCVOID pvVar1;
  int iVar2;
  DWORD DVar3;
  
  if (param_2 == 0) {
    pvVar1 = *(LPCVOID *)((int)this + 0x94);
    DVar3 = *(DWORD *)((int)this + 0x84);
  }
  else {
    pvVar1 = *(LPCVOID *)((int)this + 0x9c);
    DVar3 = *(DWORD *)((int)this + 0x88);
  }
  iVar2 = FUN_10005bb0(this,pvVar1,DVar3);
  if (iVar2 == 0) {
    if ('\0' < param_1) {
      iVar2 = (int)param_1;
      do {
        FUN_10005950((DWORD)this);
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    return 0;
  }
  return 1;
}


// ---- FUN_10005cb0 @ 10005cb0

void __fastcall FUN_10005cb0(int param_1)

{
  if (*(HANDLE *)(param_1 + 0xc) != (HANDLE)0x0) {
    CloseHandle(*(HANDLE *)(param_1 + 0xc));
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  FUN_100077d0(param_1);
  return;
}


// ---- FUN_10005ce0 @ 10005ce0

bool __thiscall FUN_10005ce0(void *this,DWORD *param_1)

{
  DWORD DVar1;
  
  DVar1 = SetFilePointer(*(HANDLE *)((int)this + 0xc),0,(PLONG)0x0,1);
  *param_1 = DVar1;
  return DVar1 == 0xffffffff;
}


// ---- FUN_10005d10 @ 10005d10

bool __thiscall FUN_10005d10(void *this,DWORD param_1)

{
  DWORD DVar1;
  
  DVar1 = SetFilePointer(*(HANDLE *)((int)this + 0xc),param_1,(PLONG)0x0,0);
  return DVar1 != param_1;
}


// ---- FUN_10005d40 @ 10005d40

bool __fastcall FUN_10005d40(void *param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int iVar2;
  undefined3 extraout_var_01;
  void *local_4;
  
  local_4 = param_1;
  bVar1 = FUN_10005ce0(param_1,(DWORD *)&local_4);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    return true;
  }
  bVar1 = FUN_10005d10(param_1,*(DWORD *)((int)param_1 + 0x14));
  if (CONCAT31(extraout_var_00,bVar1) != 0) {
    return true;
  }
  iVar2 = FUN_10005990(param_1,local_4);
  if (iVar2 != 0) {
    return true;
  }
  bVar1 = FUN_10005d10(param_1,(DWORD)local_4);
  return CONCAT31(extraout_var_01,bVar1) != 0;
}


// ---- FUN_10005da0 @ 10005da0

undefined4 __fastcall FUN_10005da0(void *param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  
  bVar1 = FUN_100058b0((int)param_1);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    return 1;
  }
  iVar2 = FUN_10005900(param_1,0x4949);
  if (iVar2 != 0) {
    FUN_10005cb0((int)param_1);
    return 1;
  }
  iVar2 = FUN_10005900(param_1,0x2a);
  if (iVar2 != 0) {
    FUN_10005cb0((int)param_1);
    return 1;
  }
  *(undefined4 *)((int)param_1 + 0x10) = 4;
  iVar2 = FUN_10005990(param_1,0);
  if (iVar2 != 0) {
    FUN_10005cb0((int)param_1);
    return 1;
  }
  return 0;
}


// ---- FUN_10005e20 @ 10005e20

undefined4 __thiscall
FUN_10005e20(void *this,int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
            int param_7)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int iVar2;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  uint uVar3;
  uint uVar4;
  int iVar5;
  DWORD local_18;
  uint local_14;
  uint local_10;
  undefined2 local_c;
  undefined2 local_a;
  int local_8;
  int local_4;
  
  iVar5 = 0xd;
  bVar1 = FUN_10005ce0(this,&local_18);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    return 1;
  }
  bVar1 = FUN_10005d10(this,*(DWORD *)((int)this + 0x10));
  if (CONCAT31(extraout_var_00,bVar1) != 0) {
    return 1;
  }
  iVar2 = FUN_10005990(this,local_18);
  if (iVar2 != 0) {
    return 1;
  }
  bVar1 = FUN_10005d10(this,local_18);
  if (CONCAT31(extraout_var_01,bVar1) != 0) {
    return 1;
  }
  if (param_2 != 0) {
    iVar5 = 0xe;
    if (param_1 == 0) {
      uVar4 = *(uint *)((int)this + 0x78);
      if ((int)uVar4 < 5) {
        local_14 = 6 - uVar4;
      }
      else {
joined_r0x10005ef2:
        uVar3 = uVar4 & 0x80000001;
        if ((int)uVar3 < 0) {
          uVar3 = (uVar3 - 1 | 0xfffffffe) + 1;
        }
        local_14 = (uint)(uVar3 != 0);
      }
    }
    else {
      uVar4 = *(uint *)((int)this + 0x7c);
      if (4 < (int)uVar4) goto joined_r0x10005ef2;
      local_14 = 6 - uVar4;
    }
    *(uint *)((int)this + 0x70) = uVar4 + local_14;
  }
  if (param_3 == 0) goto LAB_10005f6a;
  iVar5 = iVar5 + 1;
  if (param_1 == 0) {
    uVar4 = *(uint *)((int)this + 0x84);
    if ((int)uVar4 < 5) {
      local_10 = 6 - uVar4;
    }
    else {
joined_r0x10005f51:
      uVar3 = uVar4 & 0x80000001;
      if ((int)uVar3 < 0) {
        uVar3 = (uVar3 - 1 | 0xfffffffe) + 1;
      }
      local_10 = (uint)(uVar3 != 0);
    }
  }
  else {
    uVar4 = *(uint *)((int)this + 0x88);
    if (4 < (int)uVar4) goto joined_r0x10005f51;
    local_10 = 6 - uVar4;
  }
  *(uint *)((int)this + 0x80) = uVar4 + local_10;
LAB_10005f6a:
  if (param_5 != 0) {
    iVar5 = iVar5 + 1;
  }
  if (param_6 != 0) {
    iVar5 = iVar5 + 1;
  }
  if (param_7 == 1) {
    iVar5 = iVar5 + 1;
  }
  if (*(char *)((int)this + 0xae) != '\0') {
    iVar5 = iVar5 + 1;
    iVar2 = lstrlenA((LPCSTR)((int)this + 0xae));
    *(uint *)((int)this + 0x74) = iVar2 + 1U;
    uVar4 = iVar2 + 1U & 0x80000001;
    bVar1 = uVar4 == 0;
    if ((int)uVar4 < 0) {
      bVar1 = (uVar4 - 1 | 0xfffffffe) == 0xffffffff;
    }
    if (!bVar1) {
      *(int *)((int)this + 0x74) = iVar2 + 2;
    }
    if (*(int *)((int)this + 0x74) < 5) {
      *(undefined4 *)((int)this + 0x74) = 6;
    }
  }
  iVar2 = local_18 + 6 + iVar5 * 0xc;
  iVar5 = FUN_10005900(this,iVar5);
  if (iVar5 != 0) {
    return 1;
  }
  local_18 = local_18 + 2;
  local_c = 0xfe;
  local_a = 4;
  local_8 = 1;
  local_4 = param_6;
  iVar5 = FUN_100059f0(this,(undefined1 *)&local_c);
  if (iVar5 != 0) {
    return 1;
  }
  local_4 = *(undefined4 *)((int)this + 0x210);
  local_18 = local_18 + 0xc;
  local_c = 0x100;
  local_a = 3;
  local_8 = 1;
  iVar5 = FUN_100059f0(this,(undefined1 *)&local_c);
  if (iVar5 != 0) {
    return 1;
  }
  local_18 = local_18 + 0xc;
  local_4 = *(undefined4 *)((int)this + 0x20c);
  local_c = 0x101;
  local_a = 3;
  local_8 = 1;
  iVar5 = FUN_100059f0(this,(undefined1 *)&local_c);
  if (iVar5 != 0) {
    return 1;
  }
  local_18 = local_18 + 0xc;
  local_c = 0x102;
  local_a = 3;
  if (param_7 == 1) {
    local_8 = 3;
    iVar5 = iVar2 + 6;
    local_4 = iVar2;
  }
  else {
    local_8 = 1;
    local_4 = 8;
    iVar5 = iVar2;
    if (param_7 != 0) {
      local_4 = 1;
    }
  }
  iVar2 = FUN_100059f0(this,(undefined1 *)&local_c);
  if (iVar2 != 0) {
    return 1;
  }
  local_18 = local_18 + 0xc;
  local_c = 0x103;
  local_a = 3;
  local_8 = 1;
  if ((param_7 != 2) || (local_4 = param_7, param_4 == 0)) {
    local_4 = 1;
  }
  iVar2 = FUN_100059f0(this,(undefined1 *)&local_c);
  if (iVar2 != 0) {
    return 1;
  }
  local_c = 0x106;
  local_18 = local_18 + 0xc;
  local_a = 3;
  local_8 = 1;
  if (param_7 == 1) {
    local_4 = 2;
  }
  else {
    local_4 = (-(uint)(param_5 != 0) & 2) + 1;
  }
  iVar2 = FUN_100059f0(this,(undefined1 *)&local_c);
  if (iVar2 != 0) {
    return 1;
  }
  local_18 = local_18 + 0xc;
  iVar2 = iVar5;
  if (*(char *)((int)this + 0xae) != '\0') {
    local_8 = *(int *)((int)this + 0x74);
    local_c = 0x10e;
    local_a = 2;
    iVar2 = iVar5 + local_8;
    local_4 = iVar5;
    iVar5 = FUN_100059f0(this,(undefined1 *)&local_c);
    if (iVar5 != 0) {
      return 1;
    }
    local_18 = local_18 + 0xc;
  }
  local_c = 0x111;
  local_a = 4;
  local_8 = 1;
  local_4 = 0;
  *(DWORD *)((int)this + 0x14) = local_18 + 8;
  iVar5 = FUN_100059f0(this,(undefined1 *)&local_c);
  if (iVar5 != 0) {
    return 1;
  }
  local_18 = local_18 + 0xc;
  local_c = 0x115;
  local_a = 3;
  local_8 = 1;
  local_4 = (-(uint)(param_7 != 1) & 0xfffffffe) + 3;
  iVar5 = FUN_100059f0(this,(undefined1 *)&local_c);
  if (iVar5 != 0) {
    return 1;
  }
  local_18 = local_18 + 0xc;
  local_c = 0x116;
  local_a = 4;
  local_8 = 1;
  local_4 = 10000;
  iVar5 = FUN_100059f0(this,(undefined1 *)&local_c);
  if (iVar5 != 0) {
    return 1;
  }
  local_c = 0x117;
  local_18 = local_18 + 0xc;
  local_a = 4;
  local_8 = 1;
  if (param_7 == 1) {
    local_4 = *(int *)((int)this + 0x214) * 3;
  }
  else {
    local_4 = *(int *)((int)this + 0x214);
  }
  iVar5 = FUN_100059f0(this,(undefined1 *)&local_c);
  if (iVar5 != 0) {
    return 1;
  }
  local_18 = local_18 + 0xc;
  local_c = 0x11a;
  local_a = 5;
  local_8 = 1;
  local_4 = iVar2;
  iVar5 = FUN_100059f0(this,(undefined1 *)&local_c);
  if (iVar5 != 0) {
    return 1;
  }
  local_18 = local_18 + 0xc;
  local_c = 0x11b;
  local_a = 5;
  local_8 = 1;
  iVar5 = iVar2 + 0x10;
  local_4 = iVar2 + 8;
  iVar2 = FUN_100059f0(this,(undefined1 *)&local_c);
  if (iVar2 != 0) {
    return 1;
  }
  local_18 = local_18 + 0xc;
  if (param_7 == 1) {
    local_c = 0x11c;
    local_a = 3;
    local_8 = 1;
    local_4 = 1;
    iVar2 = FUN_100059f0(this,(undefined1 *)&local_c);
    if (iVar2 != 0) {
      return 1;
    }
    local_18 = local_18 + 0xc;
  }
  local_c = 0x128;
  local_a = 3;
  local_8 = 1;
  local_4 = 1;
  iVar2 = FUN_100059f0(this,(undefined1 *)&local_c);
  if (iVar2 != 0) {
    return 1;
  }
  local_18 = local_18 + 0xc;
  if (param_6 != 0) {
    local_4 = param_1 + 0x20000;
    local_c = 0x129;
    local_a = 3;
    local_8 = 2;
    iVar2 = FUN_100059f0(this,(undefined1 *)&local_c);
    if (iVar2 != 0) {
      return 1;
    }
    local_18 = local_18 + 0xc;
  }
  if (param_5 != 0) {
    local_c = 0x140;
    local_a = 3;
    local_8 = 0x300;
    local_4 = iVar5;
    iVar2 = FUN_100059f0(this,(undefined1 *)&local_c);
    if (iVar2 != 0) {
      return 1;
    }
    local_18 = local_18 + 0xc;
    iVar5 = iVar5 + local_8 * 2;
  }
  iVar2 = iVar5;
  if (param_2 != 0) {
    local_8 = *(int *)((int)this + 0x70);
    iVar2 = iVar5 + local_8;
    local_c = 0x8545;
    local_a = 2;
    local_4 = iVar5;
    iVar5 = FUN_100059f0(this,(undefined1 *)&local_c);
    if (iVar5 != 0) {
      return 1;
    }
    local_18 = local_18 + 0xc;
  }
  if (param_3 != 0) {
    local_8 = *(int *)((int)this + 0x80);
    local_c = 0x8546;
    local_a = 2;
    local_4 = iVar2;
    iVar5 = FUN_100059f0(this,(undefined1 *)&local_c);
    if (iVar5 != 0) {
      return 1;
    }
    local_18 = local_18 + 0xc;
  }
  *(DWORD *)((int)this + 0x10) = local_18;
  iVar5 = FUN_10005990(this,0);
  if (iVar5 == 0) {
    if (param_7 == 1) {
      iVar5 = FUN_10005900(this,8);
      if (iVar5 != 0) {
        return 1;
      }
      iVar5 = FUN_10005900(this,8);
      if (iVar5 != 0) {
        return 1;
      }
      iVar5 = FUN_10005900(this,8);
      if (iVar5 != 0) {
        return 1;
      }
    }
    if ((*(char *)((int)this + 0xae) != '\0') &&
       (iVar5 = FUN_10005bb0(this,(LPCVOID)((int)this + 0xae),*(DWORD *)((int)this + 0x74)),
       iVar5 != 0)) {
      return 1;
    }
    iVar5 = FUN_10005990(this,1);
    if (iVar5 != 0) {
      return 1;
    }
    iVar5 = FUN_10005990(this,1);
    if (iVar5 != 0) {
      return 1;
    }
    iVar5 = FUN_10005990(this,1);
    if (iVar5 != 0) {
      return 1;
    }
    iVar5 = FUN_10005990(this,1);
    if (iVar5 != 0) {
      return 1;
    }
    if ((param_5 != 0) && (bVar1 = FUN_10005aa0(this), CONCAT31(extraout_var_02,bVar1) != 0)) {
      return 1;
    }
    if ((param_2 != 0) && (iVar5 = FUN_10005bf0(this,(char)local_14,param_1), iVar5 != 0)) {
      return 1;
    }
    if ((param_3 != 0) && (iVar5 = FUN_10005c50(this,(char)local_10,param_1), iVar5 != 0)) {
      return 1;
    }
    return 0;
  }
  return 1;
}


// ---- FUN_10006750 @ 10006750

undefined4 __thiscall FUN_10006750(void *this,int param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined4 uVar2;
  
  bVar1 = FUN_10005d40(this);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    if (param_1 == 0) {
      uVar2 = FUN_10006790(this);
      return uVar2;
    }
    if (param_1 == 1) {
      uVar2 = FUN_10007d80(this);
      return uVar2;
    }
  }
  return 1;
}


// ---- FUN_10006790 @ 10006790

undefined4 __fastcall FUN_10006790(void *param_1)

{
  HGLOBAL hMem;
  undefined1 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined1 *puVar9;
  int local_c;
  
  hMem = GlobalAlloc(2,*(int *)((int)param_1 + 0x20c) * *(int *)((int)param_1 + 0x210));
  puVar1 = GlobalLock(hMem);
  if (puVar1 == (undefined1 *)0x0) {
    GlobalFree(hMem);
    return 0x1d2;
  }
  uVar3 = *(uint *)((int)param_1 + 0x210);
  uVar4 = uVar3 & 0x80000003;
  if ((int)uVar4 < 0) {
    uVar4 = (uVar4 - 1 | 0xfffffffc) + 1;
  }
  uVar2 = uVar3;
  if (uVar4 != 0) {
    uVar2 = uVar3 + (4 - uVar4);
  }
  iVar7 = 0;
  if (*(int *)(*(int *)((int)param_1 + 0xa0) + 8) < 1) {
    local_c = 0;
    puVar9 = puVar1;
    if (0 < *(int *)((int)param_1 + 0x20c)) {
      do {
        iVar8 = 0;
        puVar5 = (undefined1 *)(*(int *)((int)param_1 + 0xa4) + iVar7);
        if (0 < (int)uVar3) {
          do {
            *puVar9 = *puVar5;
            uVar3 = *(uint *)((int)param_1 + 0x210);
            puVar9 = puVar9 + 1;
            puVar5 = puVar5 + 1;
            iVar8 = iVar8 + 1;
          } while (iVar8 < (int)uVar3);
        }
        local_c = local_c + 1;
        iVar7 = iVar7 + uVar2;
      } while (local_c < *(int *)((int)param_1 + 0x20c));
    }
  }
  else {
    iVar7 = *(int *)((int)param_1 + 0x20c);
    if (-1 < iVar7 + -1) {
      iVar8 = (iVar7 + -1) * uVar2;
      puVar9 = puVar1;
      do {
        iVar6 = 0;
        puVar5 = (undefined1 *)(*(int *)((int)param_1 + 0xa4) + iVar8);
        if (0 < (int)uVar3) {
          do {
            *puVar9 = *puVar5;
            uVar3 = *(uint *)((int)param_1 + 0x210);
            puVar9 = puVar9 + 1;
            puVar5 = puVar5 + 1;
            iVar6 = iVar6 + 1;
          } while (iVar6 < (int)uVar3);
        }
        iVar8 = iVar8 - uVar2;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
  }
  iVar7 = FUN_10005bb0(param_1,puVar1,
                       *(int *)((int)param_1 + 0x20c) * *(int *)((int)param_1 + 0x210));
  if (iVar7 == 0) {
    GlobalUnlock(hMem);
    GlobalFree(hMem);
    GetLastError();
    return 0;
  }
  GlobalUnlock(hMem);
  GlobalFree(hMem);
  return 1;
}


// ---- FUN_100068f0 @ 100068f0

undefined4 __fastcall FUN_100068f0(void *param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  int local_8;
  int local_4;
  
  bVar1 = FUN_10006970((int)param_1);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    return 1;
  }
  iVar2 = FUN_100069c0(param_1,&local_8);
  if (iVar2 == 0) {
    if (local_8 == 0x4949) {
      *(undefined4 *)((int)param_1 + 0x6c) = 0x4949;
    }
    else {
      if (local_8 != 0x4d4d) goto LAB_1000695e;
      *(undefined4 *)((int)param_1 + 0x6c) = 0x4d4d;
    }
    iVar2 = FUN_100069c0(param_1,&local_8);
    if (((iVar2 == 0) && (local_8 == 0x2a)) && (iVar2 = FUN_10006a40(param_1,&local_4), iVar2 == 0))
    {
      *(int *)((int)param_1 + 0x10) = local_4;
      return 0;
    }
  }
LAB_1000695e:
  FUN_10005cb0((int)param_1);
  return 1;
}


// ---- FUN_10006970 @ 10006970

bool __fastcall FUN_10006970(int param_1)

{
  HANDLE pvVar1;
  _SECURITY_ATTRIBUTES local_c;
  
  local_c.nLength = 0xc;
  local_c.lpSecurityDescriptor = (LPVOID)0x0;
  local_c.bInheritHandle = 1;
  pvVar1 = CreateFileA(*(LPCSTR *)(param_1 + 4),0x80000000,0,&local_c,3,0x10000000,(HANDLE)0x0);
  *(HANDLE *)(param_1 + 0xc) = pvVar1;
  return pvVar1 == (HANDLE)0xffffffff;
}


// ---- FUN_100069c0 @ 100069c0

undefined4 __thiscall FUN_100069c0(void *this,int *param_1)

{
  uint uVar1;
  BOOL BVar2;
  uint uVar3;
  DWORD local_c;
  uint local_8 [2];
  
  BVar2 = ReadFile(*(HANDLE *)((int)this + 0xc),local_8,2,&local_c,(LPOVERLAPPED)0x0);
  if ((BVar2 == 1) && (local_c == 2)) {
    if (*(int *)((int)this + 0x6c) == 0x4d4d) {
      uVar3 = local_8[0] >> 8;
      uVar1 = local_8[0];
    }
    else {
      uVar1 = local_8[0] >> 8;
      uVar3 = local_8[0];
    }
    *param_1 = (uVar1 & 0xff) * 0x100 + (uVar3 & 0xff);
    return 0;
  }
  return 1;
}


// ---- FUN_10006a40 @ 10006a40

undefined4 __thiscall FUN_10006a40(void *this,int *param_1)

{
  BOOL BVar1;
  int iVar2;
  uint uVar3;
  DWORD local_c;
  undefined1 local_8;
  undefined1 uStack_7;
  undefined1 uStack_6;
  byte bStack_5;
  
  BVar1 = ReadFile(*(HANDLE *)((int)this + 0xc),&local_8,4,&local_c,(LPOVERLAPPED)0x0);
  if ((BVar1 == 1) && (local_c == 4)) {
    if (*(int *)((int)this + 0x6c) == 0x4d4d) {
      uVar3 = (uint)bStack_5;
      iVar2 = ((CONCAT12(uStack_6,CONCAT11(uStack_7,local_8)) & 0xff) * 0x100 +
              (CONCAT12(bStack_5,CONCAT11(uStack_6,uStack_7)) & 0xff)) * 0x100 +
              (CONCAT11(bStack_5,uStack_6) & 0xff);
    }
    else {
      uVar3 = CONCAT13(bStack_5,CONCAT12(uStack_6,CONCAT11(uStack_7,local_8)));
      iVar2 = ((uint)bStack_5 * 0x100 + (CONCAT11(bStack_5,uStack_6) & 0xff)) * 0x100 +
              (CONCAT12(bStack_5,CONCAT11(uStack_6,uStack_7)) & 0xff);
    }
    *param_1 = iVar2 * 0x100 + (uVar3 & 0xff);
    return 0;
  }
  return 1;
}


// ---- FUN_10006b00 @ 10006b00

undefined4 __thiscall FUN_10006b00(void *this,short *param_1)

{
  uint3 uVar1;
  uint3 uVar2;
  uint uVar3;
  uint uVar4;
  BOOL BVar5;
  uint uVar6;
  short sVar7;
  DWORD local_18;
  void *local_14;
  byte local_10;
  byte local_f;
  byte local_e;
  byte local_d;
  undefined1 local_c;
  undefined1 uStack_b;
  byte bStack_a;
  undefined1 uStack_9;
  undefined1 local_8;
  undefined1 uStack_7;
  byte bStack_6;
  byte bStack_5;
  
  local_14 = this;
  BVar5 = ReadFile(*(HANDLE *)((int)this + 0xc),&local_10,0xc,&local_18,(LPOVERLAPPED)0x0);
  if ((BVar5 != 1) || (local_18 != 0xc)) {
    return 1;
  }
  uVar2 = CONCAT12(bStack_6,CONCAT11(uStack_7,local_8));
  uVar4 = (uint)bStack_5;
  uVar3 = (uint)CONCAT12(bStack_5,CONCAT11(bStack_6,uStack_7));
  uVar1 = CONCAT12(uStack_7,CONCAT11(local_8,uStack_9));
  if (*(int *)((int)this + 0x6c) == 0x4d4d) {
    *param_1 = (ushort)local_10 * 0x100 + (ushort)local_f;
    param_1[1] = (ushort)local_e * 0x100 + (ushort)local_d;
    *(uint *)(param_1 + 2) =
         (((CONCAT12(bStack_a,CONCAT11(uStack_b,local_c)) & 0xff) * 0x100 +
          (CONCAT12(uStack_9,CONCAT11(bStack_a,uStack_b)) & 0xff)) * 0x100 +
         (CONCAT12(local_8,CONCAT11(uStack_9,bStack_a)) & 0xff)) * 0x100 + (uVar1 & 0xff);
    *(uint *)(param_1 + 4) =
         (((uVar2 & 0xff) * 0x100 + (uVar3 & 0xff)) * 0x100 + (CONCAT11(bStack_5,bStack_6) & 0xff))
         * 0x100 + uVar4;
    this = local_14;
  }
  if (*(int *)((int)this + 0x6c) == 0x4949) {
    *param_1 = (ushort)local_f * 0x100 + (ushort)local_10;
    sVar7 = (ushort)local_d * 0x100 + (ushort)local_e;
    param_1[1] = sVar7;
    uVar6 = (((uVar1 & 0xff) * 0x100 + (uint)bStack_a) * 0x100 +
            (CONCAT11(bStack_a,uStack_b) & 0xff)) * 0x100 +
            (CONCAT12(bStack_a,CONCAT11(uStack_b,local_c)) & 0xff);
    *(uint *)(param_1 + 2) = uVar6;
    if (sVar7 == 3) {
      if (uVar6 < 3) {
        *(uint *)(param_1 + 4) =
             (((uVar3 & 0xff) * 0x100 + (uVar2 & 0xff)) * 0x100 + uVar4) * 0x100 + (uint)bStack_6;
        return 0;
      }
    }
    else if ((sVar7 == 2) && (uVar6 < 5)) {
      *(uint *)(param_1 + 4) =
           (((uVar2 & 0xff) * 0x100 + (uVar3 & 0xff)) * 0x100 + (uint)bStack_6) * 0x100 + uVar4;
      return 0;
    }
    *(uint *)(param_1 + 4) =
         ((uVar4 * 0x100 + (uint)bStack_6) * 0x100 + (uVar3 & 0xff)) * 0x100 + (uVar2 & 0xff);
  }
  return 0;
}


// ---- FUN_10006d30 @ 10006d30

undefined4 __thiscall FUN_10006d30(void *this,char *param_1)

{
  char *pcVar1;
  bool bVar2;
  char cVar3;
  undefined3 extraout_var;
  int iVar4;
  uint uVar5;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  int iVar6;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  undefined3 extraout_var_04;
  undefined3 extraout_var_05;
  undefined3 extraout_var_06;
  HGLOBAL hMem;
  uint *puVar7;
  undefined3 extraout_var_07;
  undefined3 extraout_var_08;
  ushort uVar8;
  short sVar9;
  uint uVar10;
  char local_35;
  DWORD local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  int local_1c;
  uint local_18;
  uint local_14;
  int local_10;
  undefined4 local_c;
  uint local_8;
  uint local_4;
  
  pcVar1 = param_1;
  bVar2 = FUN_10005d10(this,*(DWORD *)((int)this + 0x10));
  if (CONCAT31(extraout_var,bVar2) != 0) {
    return 1;
  }
  iVar4 = FUN_100069c0(this,(int *)&local_30);
  if (iVar4 != 0) {
    return 1;
  }
  *param_1 = '\0';
  param_1[4] = '\0';
  param_1[5] = '\0';
  param_1[6] = '\0';
  param_1[7] = '\0';
  param_1[8] = '\0';
  param_1[9] = '\0';
  param_1[10] = '\0';
  param_1[0xb] = '\0';
  param_1[0xc] = '\x02';
  param_1[0xd] = '\0';
  param_1[0xe] = '\0';
  param_1[0xf] = '\0';
  param_1[0x10] = '\0';
  param_1[0x11] = '\0';
  param_1[0x12] = '\0';
  param_1[0x13] = '\x01';
  param_1[0x14] = '\x01';
  param_1[0x15] = '\0';
  param_1[0x16] = '\0';
  param_1[0x17] = '\0';
  param_1[0x18] = '\0';
  local_14 = local_30;
  local_1c = 0;
  uVar10 = local_2c;
  if ((short)local_30 != 0) {
    do {
      iVar4 = FUN_10006b00(this,(short *)&local_c);
      if (iVar4 != 0) {
        return 1;
      }
      uVar5 = local_c & 0xffff;
      cVar3 = (char)(local_4 >> 0x10);
      if (uVar5 < 0x11d) {
        if (uVar5 == 0x11c) {
          if (local_c._2_2_ != 3) {
            return 1;
          }
          if (local_8 != 1) {
            return 1;
          }
          if ((local_4 & 0xffff0000) != 0x10000) {
            return 1;
          }
          if (pcVar1[0xc] == '\x01') {
            pcVar1[0x14] = '\x01';
          }
        }
        else {
          switch(uVar5) {
          case 0xfe:
            if (local_c._2_2_ != 4) {
              return 1;
            }
            if (local_8 != 1) {
              return 1;
            }
            if ((local_4 & 2) != 0) {
              *pcVar1 = '\x01';
            }
            if ((local_4 & 1) != 0) {
              pcVar1[0x18] = '\x01';
            }
            break;
          case 0x100:
            if (local_c._2_2_ == 4) {
              if (local_8 != 1) {
                return 1;
              }
              *(uint *)(pcVar1 + 4) = local_4;
            }
            else {
              if (local_c._2_2_ != 3) {
                return 1;
              }
              if (local_8 != 1) {
                return 1;
              }
              *(uint *)(pcVar1 + 4) = local_4 >> 0x10;
            }
            break;
          case 0x101:
            if (local_c._2_2_ == 4) {
              if (local_8 != 1) {
                return 1;
              }
              *(uint *)(pcVar1 + 8) = local_4;
            }
            else {
              if (local_c._2_2_ != 3) {
                return 1;
              }
              if (local_8 != 1) {
                return 1;
              }
              *(uint *)(pcVar1 + 8) = local_4 >> 0x10;
            }
            break;
          case 0x102:
            if (local_c._2_2_ != 3) {
              return 1;
            }
            if (local_8 == 1) {
              if (local_4 >> 0x10 == 1) {
                pcVar1[0xc] = '\x02';
              }
              else {
                if (local_4 >> 0x10 != 8) {
                  return 1;
                }
                pcVar1[0xc] = '\0';
              }
            }
            else {
              if (local_8 != 3) {
                return 1;
              }
              bVar2 = FUN_10005ce0(this,&local_34);
              if (CONCAT31(extraout_var_00,bVar2) != 0) {
                return 1;
              }
              bVar2 = FUN_10005d10(this,local_4);
              if (CONCAT31(extraout_var_01,bVar2) != 0) {
                return 1;
              }
              iVar4 = 0;
              do {
                iVar6 = FUN_100069c0(this,(int *)&local_30);
                if (iVar6 != 0) {
                  return 1;
                }
                if (local_30 != 8) {
                  return 1;
                }
                iVar4 = iVar4 + 1;
              } while (iVar4 < 3);
              bVar2 = FUN_10005d10(this,local_34);
              if (CONCAT31(extraout_var_02,bVar2) != 0) {
                return 1;
              }
              pcVar1[0xc] = '\x01';
              uVar10 = local_2c;
            }
            break;
          case 0x103:
            if (local_c._2_2_ != 3) {
              return 1;
            }
            if (local_8 != 1) {
              return 1;
            }
            if (local_4 >> 0x10 == 1) {
              pcVar1[0xd] = '\0';
            }
            else {
              if (local_4 >> 0x10 != 2) {
                return 1;
              }
              if (pcVar1[0xc] != '\x02') {
                return 1;
              }
              pcVar1[0xd] = '\x01';
            }
            break;
          case 0x106:
            if (local_c._2_2_ != 3) {
              return 1;
            }
            if (local_8 != 1) {
              return 1;
            }
            uVar5 = local_4 >> 0x10;
            if (uVar5 == 0) {
              if (pcVar1[0xd] != '\x01') {
                return 1;
              }
              pcVar1[0xe] = '\x01';
            }
            else if (uVar5 == 1) {
              if ((pcVar1[0xc] != '\0') && (pcVar1[0xc] != '\x02')) {
                return 1;
              }
              pcVar1[0xe] = '\0';
            }
            else if (uVar5 == 2) {
              if (pcVar1[0xc] == '\x01') {
                pcVar1[0xe] = '\x01';
              }
              else {
                if (pcVar1[0xc] != '\0') {
                  return 1;
                }
                pcVar1[0xe] = '\x01';
                pcVar1[0xc] = '\x01';
              }
            }
            else {
              if (uVar5 != 3) {
                return 1;
              }
              if (pcVar1[0xc] != '\0') {
                return 1;
              }
              pcVar1[0xe] = '\x03';
            }
            break;
          case 0x10e:
            if (local_c._2_2_ != 2) {
              return 1;
            }
            *(uint *)((int)this + 0x74) = local_8;
            if (local_8 < 5) {
              bVar2 = FUN_10005ce0(this,&local_34);
              if (CONCAT31(extraout_var_03,bVar2) != 0) {
                return 1;
              }
              *(DWORD *)((int)this + 0x20) = local_34 - 4;
              pcVar1[0x17] = '\x01';
            }
            else {
              *(uint *)((int)this + 0x20) = local_4;
              pcVar1[0x17] = '\x01';
            }
            break;
          case 0x111:
            uVar10 = local_8;
            if (local_c._2_2_ == 4) {
              local_2c = local_8;
              local_35 = '\x04';
              local_28 = local_4;
            }
            else {
              if (local_c._2_2_ != 3) {
                return 1;
              }
              local_28 = local_4 >> 0x10;
              local_2c = local_8;
              local_35 = '\x03';
            }
            break;
          case 0x115:
            if (local_c._2_2_ != 3) {
              return 1;
            }
            if (local_8 != 1) {
              return 1;
            }
            if (local_4 >> 0x10 == 1) {
              pcVar1[0x13] = cVar3;
            }
            else {
              if (local_4 >> 0x10 != 3) {
                return 1;
              }
              if (pcVar1[0xc] != '\x01') {
                return 1;
              }
              pcVar1[0x13] = '\x03';
            }
            break;
          case 0x117:
            if (local_c._2_2_ == 3) {
              local_24 = local_4 >> 0x10;
              local_18 = local_8;
              param_1 = (char *)0x3;
            }
            else {
              if (local_c._2_2_ != 4) {
                return 1;
              }
              local_18 = local_8;
              param_1 = (char *)0x4;
              local_24 = local_4;
            }
          }
        }
      }
      else if (uVar5 < 0x8546) {
        if (uVar5 == 0x8545) {
          if (local_c._2_2_ != 2) {
            return 1;
          }
          *(uint *)((int)this + 0x70) = local_8;
          if (local_8 < 5) {
            bVar2 = FUN_10005ce0(this,&local_34);
            if (CONCAT31(extraout_var_05,bVar2) != 0) {
              return 1;
            }
            *(DWORD *)((int)this + 0x18) = local_34 - 4;
            pcVar1[0xf] = '\x01';
          }
          else {
            *(uint *)((int)this + 0x18) = local_4;
            pcVar1[0xf] = '\x01';
          }
        }
        else if (uVar5 == 0x129) {
          if (local_c._2_2_ != 3) {
            return 1;
          }
          if (local_8 != 2) {
            return 1;
          }
          if (*pcVar1 != '\x01') {
            return 1;
          }
          pcVar1[0x16] = (char)local_4;
          pcVar1[0x15] = cVar3;
        }
        else if (uVar5 == 0x140) {
          if (local_c._2_2_ != 3) {
            return 1;
          }
          *(uint *)((int)this + 0x28) = local_8;
          if (local_8 < 5) {
            bVar2 = FUN_10005ce0(this,&local_34);
            if (CONCAT31(extraout_var_04,bVar2) != 0) {
              return 1;
            }
            *(DWORD *)((int)this + 0x24) = local_34 - 4;
            pcVar1[0x11] = '\x01';
          }
          else {
            *(uint *)((int)this + 0x24) = local_4;
            pcVar1[0x11] = '\x01';
          }
        }
      }
      else if (uVar5 == 0x8546) {
        if (local_c._2_2_ != 2) {
          return 1;
        }
        *(uint *)((int)this + 0x80) = local_8;
        if (local_8 < 5) {
          bVar2 = FUN_10005ce0(this,&local_34);
          if (CONCAT31(extraout_var_06,bVar2) != 0) {
            return 1;
          }
          *(DWORD *)((int)this + 0x1c) = local_34 - 4;
        }
        else {
          *(uint *)((int)this + 0x1c) = local_4;
        }
        pcVar1[0x10] = '\x01';
      }
      local_1c = local_1c + 1;
    } while ((ushort)local_1c < (ushort)local_14);
  }
  iVar4 = FUN_10006a40(this,&local_10);
  if ((iVar4 != 0) && (*pcVar1 == '\x01')) {
    return 1;
  }
  sVar9 = (short)uVar10;
  *(int *)((int)this + 0x10) = local_10;
  if (sVar9 == 1) {
    *(uint *)((int)this + 0x14) = local_28;
    pcVar1[0x12] = '\x01';
    return 0;
  }
  if (sVar9 == (short)local_18) {
    *(short *)((int)this + 0x38) = sVar9;
    hMem = GlobalAlloc(2,(uVar10 & 0xffff) << 3);
    *(HGLOBAL *)((int)this + 0x34) = hMem;
    if (hMem == (HGLOBAL)0x0) {
      return 1;
    }
    puVar7 = GlobalLock(hMem);
    *(uint **)((int)this + 0x3c) = puVar7;
    if (puVar7 != (uint *)0x0) {
      *(undefined4 *)((int)this + 0x40) = 1;
      if ((*(short *)((int)this + 0x38) == 2) && (local_35 == '\x03')) {
        *puVar7 = local_28 >> 0x10;
        puVar7[1] = local_28 & 0xffff;
      }
      else {
        bVar2 = FUN_10005d10(this,local_28);
        if (CONCAT31(extraout_var_07,bVar2) != 0) {
          return 1;
        }
        if ((char)param_1 == '\x03') {
          uVar8 = 0;
          if (*(short *)((int)this + 0x38) != 0) {
            do {
              iVar4 = FUN_100069c0(this,(int *)&local_30);
              if (iVar4 != 0) {
                return 1;
              }
              *puVar7 = local_30;
              puVar7 = puVar7 + 1;
              uVar8 = uVar8 + 1;
            } while (uVar8 < *(ushort *)((int)this + 0x38));
          }
        }
        else {
          uVar8 = 0;
          if (*(short *)((int)this + 0x38) != 0) {
            do {
              iVar4 = FUN_10006a40(this,(int *)&local_20);
              if (iVar4 != 0) {
                return 1;
              }
              *puVar7 = local_20;
              puVar7 = puVar7 + 1;
              uVar8 = uVar8 + 1;
            } while (uVar8 < *(ushort *)((int)this + 0x38));
          }
        }
      }
      puVar7 = (uint *)(*(int *)((int)this + 0x3c) + (uint)*(ushort *)((int)this + 0x38) * 4);
      if ((*(ushort *)((int)this + 0x38) == 2) && ((char)param_1 == '\x03')) {
        *puVar7 = local_24 >> 0x10;
        puVar7[1] = local_24 & 0xffff;
      }
      else {
        bVar2 = FUN_10005d10(this,local_24);
        if (CONCAT31(extraout_var_08,bVar2) != 0) {
          return 1;
        }
        if (local_35 == '\x03') {
          uVar8 = 0;
          if (*(short *)((int)this + 0x38) != 0) {
            do {
              iVar4 = FUN_100069c0(this,(int *)&local_30);
              if (iVar4 != 0) {
                return 1;
              }
              *puVar7 = local_30;
              puVar7 = puVar7 + 1;
              uVar8 = uVar8 + 1;
            } while (uVar8 < *(ushort *)((int)this + 0x38));
          }
        }
        else {
          uVar8 = 0;
          if (*(short *)((int)this + 0x38) != 0) {
            do {
              iVar4 = FUN_10006a40(this,(int *)&local_20);
              if (iVar4 != 0) {
                return 1;
              }
              *puVar7 = local_20;
              puVar7 = puVar7 + 1;
              uVar8 = uVar8 + 1;
            } while (uVar8 < *(ushort *)((int)this + 0x38));
          }
        }
      }
      *(undefined4 *)((int)this + 0x14) = **(undefined4 **)((int)this + 0x3c);
      pcVar1[0x12] = '\x01';
      return 0;
    }
    GlobalFree(*(HGLOBAL *)((int)this + 0x34));
    return 1;
  }
  return 1;
}


// ---- FUN_10007580 @ 10007580

undefined4 __thiscall FUN_10007580(void *this,LPSTR param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  
  if (*(int *)((int)this + 0x74) == 0) {
    lstrcpyA(param_1,&DAT_10039fec);
    return 0;
  }
  bVar1 = FUN_10005d10(this,*(DWORD *)((int)this + 0x20));
  if (CONCAT31(extraout_var,bVar1) != 0) {
    return 1;
  }
  if (0xff < *(int *)((int)this + 0x74)) {
    *(undefined4 *)((int)this + 0x74) = 0xff;
  }
  iVar2 = FUN_10007790(this,*(DWORD *)((int)this + 0x74),param_1);
  if (iVar2 != 0) {
    return 1;
  }
  param_1[*(int *)((int)this + 0x74)] = '\0';
  return 0;
}


// ---- FUN_10007600 @ 10007600

undefined4 __thiscall FUN_10007600(void *this,char param_1)

{
  bool bVar1;
  int iVar2;
  undefined3 extraout_var;
  
  iVar2 = FUN_100076b0(this,param_1);
  if (iVar2 != 0) {
    return 1;
  }
  bVar1 = FUN_10005d10(this,*(DWORD *)((int)this + 0x1c));
  if (CONCAT31(extraout_var,bVar1) != 0) {
    return 1;
  }
  if (param_1 != '\0') {
    iVar2 = FUN_10007790(this,*(DWORD *)((int)this + 0x80),*(LPVOID *)((int)this + 0x9c));
    if (iVar2 != 0) {
      return 1;
    }
    GlobalUnlock(*(HGLOBAL *)((int)this + 0x50));
    return 0;
  }
  iVar2 = FUN_10007790(this,*(DWORD *)((int)this + 0x80),*(LPVOID *)((int)this + 0x94));
  if (iVar2 != 0) {
    return 1;
  }
  GlobalUnlock(*(HGLOBAL *)((int)this + 0x4c));
  return 0;
}


// ---- FUN_100076b0 @ 100076b0

undefined4 __thiscall FUN_100076b0(void *this,char param_1)

{
  HGLOBAL pvVar1;
  LPVOID pvVar2;
  
  if (param_1 == '\0') {
    pvVar1 = GlobalAlloc(2,*(SIZE_T *)((int)this + 0x80));
    *(HGLOBAL *)((int)this + 0x4c) = pvVar1;
    if (pvVar1 != (HGLOBAL)0x0) {
      pvVar2 = GlobalLock(pvVar1);
      *(LPVOID *)((int)this + 0x94) = pvVar2;
      if (pvVar2 != (LPVOID)0x0) {
        return 0;
      }
    }
  }
  else if (param_1 == '\x01') {
    pvVar1 = GlobalAlloc(2,*(SIZE_T *)((int)this + 0x80));
    *(HGLOBAL *)((int)this + 0x50) = pvVar1;
    if (pvVar1 != (HGLOBAL)0x0) {
      pvVar2 = GlobalLock(pvVar1);
      *(LPVOID *)((int)this + 0x9c) = pvVar2;
      if (pvVar2 != (LPVOID)0x0) {
        return 0;
      }
    }
  }
  return 1;
}


// ---- FUN_10007730 @ 10007730

void __fastcall FUN_10007730(int param_1)

{
  if (*(HGLOBAL *)(param_1 + 0x44) != (HGLOBAL)0x0) {
    GlobalFree(*(HGLOBAL *)(param_1 + 0x44));
  }
  if (*(HGLOBAL *)(param_1 + 0x48) != (HGLOBAL)0x0) {
    GlobalFree(*(HGLOBAL *)(param_1 + 0x48));
  }
  return;
}


// ---- FUN_10007760 @ 10007760

void __fastcall FUN_10007760(int param_1)

{
  if (*(HGLOBAL *)(param_1 + 0x4c) != (HGLOBAL)0x0) {
    GlobalFree(*(HGLOBAL *)(param_1 + 0x4c));
  }
  if (*(HGLOBAL *)(param_1 + 0x50) != (HGLOBAL)0x0) {
    GlobalFree(*(HGLOBAL *)(param_1 + 0x50));
  }
  return;
}


// ---- FUN_10007790 @ 10007790

undefined4 __thiscall FUN_10007790(void *this,DWORD param_1,LPVOID param_2)

{
  DWORD DVar1;
  BOOL BVar2;
  
  DVar1 = param_1;
  BVar2 = ReadFile(*(HANDLE *)((int)this + 0xc),param_2,param_1,&param_1,(LPOVERLAPPED)0x0);
  if ((BVar2 == 1) && (param_1 == DVar1)) {
    return 0;
  }
  return 1;
}


// ---- FUN_100077d0 @ 100077d0

void __fastcall FUN_100077d0(int param_1)

{
  if (*(int *)(param_1 + 0x40) != 0) {
    GlobalUnlock(*(HGLOBAL *)(param_1 + 0x34));
    GlobalFree(*(HGLOBAL *)(param_1 + 0x34));
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  return;
}


// ---- FUN_10007800 @ 10007800

undefined4 __fastcall FUN_10007800(void *param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  uint uVar3;
  ushort uVar4;
  ushort uVar5;
  undefined4 local_4;
  
  uVar5 = (ushort)(*(uint *)((int)param_1 + 0x28) / 3);
  if (0x100 < uVar5) {
    uVar5 = 0x100;
  }
  local_4 = param_1;
  bVar1 = FUN_10005d10(param_1,*(DWORD *)((int)param_1 + 0x24));
  if (CONCAT31(extraout_var,bVar1) == 0) {
    uVar4 = 0;
    if (uVar5 != 0) {
      do {
        iVar2 = FUN_100069c0(param_1,&local_4);
        if (iVar2 != 0) {
          return 1;
        }
        uVar3 = (uint)uVar4;
        uVar4 = uVar4 + 1;
        *(undefined1 *)(*(int *)((int)param_1 + 0xa8) + 2 + uVar3 * 4) = local_4._1_1_;
      } while (uVar4 < uVar5);
    }
    uVar4 = 0;
    if (uVar5 != 0) {
      do {
        iVar2 = FUN_100069c0(param_1,&local_4);
        if (iVar2 != 0) {
          return 1;
        }
        uVar3 = (uint)uVar4;
        uVar4 = uVar4 + 1;
        *(undefined1 *)(*(int *)((int)param_1 + 0xa8) + 1 + uVar3 * 4) = local_4._1_1_;
      } while (uVar4 < uVar5);
    }
    uVar4 = 0;
    if (uVar5 != 0) {
      do {
        iVar2 = FUN_100069c0(param_1,&local_4);
        if (iVar2 != 0) {
          return 1;
        }
        uVar3 = (uint)uVar4;
        uVar4 = uVar4 + 1;
        *(undefined1 *)(*(int *)((int)param_1 + 0xa8) + uVar3 * 4) = local_4._1_1_;
      } while (uVar4 < uVar5);
    }
    return 0;
  }
  return 1;
}


// ---- FUN_100078e0 @ 100078e0

bool __thiscall FUN_100078e0(void *this,undefined4 param_1,int param_2)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  
  bVar1 = FUN_10007920(this);
  if (((CONCAT31(extraout_var,bVar1) == 0) && (param_2 != 2)) && (param_2 == 0)) {
    iVar2 = FUN_10007930(this);
    return iVar2 != 0;
  }
  return true;
}


// ---- FUN_10007920 @ 10007920

bool __fastcall FUN_10007920(void *param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  
  bVar1 = FUN_10005d10(param_1,*(DWORD *)((int)param_1 + 0x14));
  return CONCAT31(extraout_var,bVar1) != 0;
}


// ---- FUN_10007930 @ 10007930

/* WARNING: Removing unreachable block (ram,0x100079dc) */

undefined4 __fastcall FUN_10007930(void *param_1)

{
  HGLOBAL hMem;
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined1 *puVar5;
  int iVar6;
  uint uVar7;
  uint local_c;
  
  hMem = GlobalAlloc(2,*(int *)((int)param_1 + 0x20c) * *(int *)((int)param_1 + 0x210));
  if (hMem == (HGLOBAL)0x0) {
    return 1;
  }
  puVar1 = GlobalLock(hMem);
  if (puVar1 != (undefined1 *)0x0) {
    iVar2 = FUN_10007a90(param_1,puVar1,
                         *(int *)((int)param_1 + 0x20c) * *(int *)((int)param_1 + 0x210),0);
    if (iVar2 == 0) {
      iVar2 = *(int *)((int)param_1 + 0x58);
      local_c = *(int *)((int)param_1 + 0x20c) / iVar2;
      uVar3 = *(int *)((int)param_1 + 0x210) / iVar2;
      iVar6 = 0;
      if ((uVar3 & 3) != 0) {
        iVar6 = 4 - (uVar3 & 3);
      }
      if (iVar2 != 1) {
        FUN_10007bb0(puVar1,uVar3 & 0xffff,local_c & 0xffff,
                     CONCAT22((short)((uint)*(int *)((int)param_1 + 0x210) >> 0x10),
                              *(undefined2 *)((int)param_1 + 0x58)),*(int *)((int)param_1 + 0x210));
      }
      local_c = local_c & 0xffff;
      if (-1 < (int)(local_c - 1)) {
        uVar4 = iVar6 + uVar3 & 0xffff;
        iVar2 = uVar4 * (local_c - 1);
        do {
          puVar5 = (undefined1 *)(iVar2 + *(int *)((int)param_1 + 0xa4));
          for (uVar7 = uVar3 & 0xffff; uVar7 != 0; uVar7 = uVar7 - 1) {
            *puVar5 = *puVar1;
            puVar5 = puVar5 + 1;
            puVar1 = puVar1 + 1;
          }
          iVar2 = iVar2 - uVar4;
          local_c = local_c - 1;
        } while (local_c != 0);
      }
      GlobalUnlock(hMem);
      GlobalFree(hMem);
      GetLastError();
      return 0;
    }
    GlobalUnlock(hMem);
    GlobalFree(hMem);
    return 1;
  }
  return 1;
}


// ---- FUN_10007a90 @ 10007a90

undefined4 __thiscall FUN_10007a90(void *this,LPVOID param_1,uint param_2,uint param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  uVar6 = 0;
  if (*(int *)((int)this + 0x40) == 0) {
    bVar1 = FUN_10005d10(this,*(int *)((int)this + 0x14) + param_3);
    if (CONCAT31(extraout_var_00,bVar1) == 0) {
      uVar4 = FUN_10007c40(this,param_1,param_2);
      return uVar4;
    }
  }
  else {
    uVar5 = 0;
    if (*(short *)((int)this + 0x38) != 0) {
      while( true ) {
        iVar2 = FUN_10007b90(this,uVar5);
        uVar6 = uVar6 + iVar2;
        if (param_3 < uVar6) break;
        uVar5 = uVar5 + 1;
        if (*(ushort *)((int)this + 0x38) <= (ushort)uVar5) {
          return 1;
        }
      }
      iVar7 = (iVar2 - uVar6) + param_3;
      if (param_2 == 0) {
        return 0;
      }
      do {
        iVar3 = FUN_10007c20(this,uVar5);
        bVar1 = FUN_10005d10(this,iVar3 + iVar7);
        if (CONCAT31(extraout_var,bVar1) != 0) {
          return 1;
        }
        uVar6 = iVar2 - iVar7;
        if (param_2 < (uint)(iVar2 - iVar7)) {
          uVar6 = param_2;
        }
        iVar7 = FUN_10007c40(this,param_1,uVar6);
        if (iVar7 == 1) {
          return 1;
        }
        param_2 = param_2 - uVar6;
        param_1 = (LPVOID)((int)param_1 + uVar6);
        if (param_2 == 0) {
          return 0;
        }
        iVar7 = 0;
        uVar5 = uVar5 + 1;
      } while ((short)uVar5 != *(short *)((int)this + 0x38));
    }
  }
  return 1;
}


// ---- FUN_10007b90 @ 10007b90

undefined4 __thiscall FUN_10007b90(void *this,uint param_1)

{
  return *(undefined4 *)
          (*(int *)((int)this + 0x3c) +
          ((uint)*(ushort *)((int)this + 0x38) + (param_1 & 0xffff)) * 4);
}


// ---- FUN_10007bb0 @ 10007bb0

void FUN_10007bb0(undefined1 *param_1,uint param_2,uint param_3,uint param_4,int param_5)

{
  undefined1 uVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  uint uVar5;
  
  uVar5 = param_4 & 0xffff;
  uVar2 = 0;
  param_4 = 0;
  puVar4 = param_1;
  if (param_3 != 0) {
    do {
      puVar3 = param_1 + uVar2 * uVar5 * param_5;
      uVar2 = 0;
      if (param_2 != 0) {
        do {
          uVar1 = *puVar3;
          puVar3 = puVar3 + uVar5;
          *puVar4 = uVar1;
          puVar4 = puVar4 + 1;
          uVar2 = uVar2 + 1;
        } while ((uVar2 & 0xffff) < param_2);
      }
      param_4 = param_4 + 1;
      uVar2 = param_4 & 0xffff;
    } while (uVar2 < param_3);
  }
  return;
}


// ---- FUN_10007c20 @ 10007c20

undefined4 __thiscall FUN_10007c20(void *this,uint param_1)

{
  return *(undefined4 *)(*(int *)((int)this + 0x3c) + (param_1 & 0xffff) * 4);
}


// ---- FUN_10007c40 @ 10007c40

undefined4 __thiscall FUN_10007c40(void *this,LPVOID param_1,DWORD param_2)

{
  DWORD DVar1;
  BOOL BVar2;
  
  DVar1 = param_2;
  BVar2 = ReadFile(*(HANDLE *)((int)this + 0xc),param_1,param_2,&param_2,(LPOVERLAPPED)0x0);
  if ((BVar2 == 1) && (param_2 == DVar1)) {
    return 0;
  }
  return 1;
}


// ---- FUN_10007c80 @ 10007c80

bool __fastcall FUN_10007c80(int param_1)

{
  HANDLE pvVar1;
  _SECURITY_ATTRIBUTES local_c;
  
  local_c.nLength = 0xc;
  local_c.lpSecurityDescriptor = (LPVOID)0x0;
  local_c.bInheritHandle = 1;
  pvVar1 = CreateFileA(*(LPCSTR *)(param_1 + 0x2c),0x40000000,1,&local_c,2,0x80000080,(HANDLE)0x0);
  *(HANDLE *)(param_1 + 0x30) = pvVar1;
  return pvVar1 == (HANDLE)0xffffffff;
}


// ---- FUN_10007cd0 @ 10007cd0

undefined4 __thiscall FUN_10007cd0(void *this,LPCVOID param_1)

{
  BOOL BVar1;
  
  BVar1 = WriteFile(*(HANDLE *)((int)this + 0x30),param_1,0xe,(LPDWORD)&param_1,(LPOVERLAPPED)0x0);
  if ((BVar1 == 1) && (param_1 == (LPCVOID)0xe)) {
    return 0;
  }
  return 1;
}


// ---- FUN_10007d10 @ 10007d10

undefined4 __thiscall FUN_10007d10(void *this,LPCVOID param_1,DWORD param_2)

{
  DWORD DVar1;
  BOOL BVar2;
  
  DVar1 = param_2;
  BVar2 = WriteFile(*(HANDLE *)((int)this + 0x30),param_1,param_2,&param_2,(LPOVERLAPPED)0x0);
  if ((BVar2 == 1) && (param_2 == DVar1)) {
    return 0;
  }
  return 1;
}


// ---- FUN_10007d50 @ 10007d50

undefined4 __fastcall FUN_10007d50(int param_1)

{
  BOOL BVar1;
  
  if (*(HANDLE *)(param_1 + 0x30) != (HANDLE)0x0) {
    BVar1 = CloseHandle(*(HANDLE *)(param_1 + 0x30));
    if (BVar1 == 0) {
      return 1;
    }
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  return 0;
}


// ---- FUN_10007d80 @ 10007d80

undefined4 __fastcall FUN_10007d80(void *param_1)

{
  byte bVar1;
  SIZE_T dwBytes;
  ushort uVar2;
  byte *pbVar3;
  HGLOBAL hMem;
  undefined1 *puVar4;
  uint uVar5;
  int iVar6;
  undefined1 *puVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int local_618;
  int local_614;
  ushort auStack_600 [256];
  ushort auStack_400 [256];
  ushort auStack_200 [256];
  
  iVar8 = 0x100;
  pbVar3 = *(byte **)((int)param_1 + 0xa8);
  iVar6 = 0;
  do {
    *(ushort *)((int)auStack_600 + iVar6) = (ushort)pbVar3[2];
    *(ushort *)((int)auStack_400 + iVar6) = (ushort)pbVar3[1];
    *(ushort *)((int)auStack_200 + iVar6) = (ushort)*pbVar3;
    pbVar3 = pbVar3 + 4;
    iVar8 = iVar8 + -1;
    iVar6 = iVar6 + 2;
  } while (iVar8 != 0);
  dwBytes = *(int *)((int)param_1 + 0x210) * *(int *)((int)param_1 + 0x20c) * 3;
  hMem = GlobalAlloc(2,dwBytes);
  if (hMem == (HGLOBAL)0x0) {
    return 1;
  }
  puVar4 = GlobalLock(hMem);
  if (puVar4 == (undefined1 *)0x0) {
    GlobalFree(hMem);
    return 1;
  }
  uVar9 = *(uint *)((int)param_1 + 0x210);
  uVar5 = uVar9 & 0x80000003;
  if ((int)uVar5 < 0) {
    uVar5 = (uVar5 - 1 | 0xfffffffc) + 1;
  }
  uVar10 = uVar9;
  if (uVar5 != 0) {
    uVar10 = uVar9 + (4 - uVar5);
  }
  if (*(int *)(*(int *)((int)param_1 + 0xa0) + 8) < 1) {
    local_614 = 0;
    if (0 < *(int *)((int)param_1 + 0x20c)) {
      local_618 = 0;
      puVar7 = puVar4;
      do {
        pbVar3 = (byte *)(*(int *)((int)param_1 + 0xa4) + local_618);
        uVar5 = 0;
        if (0 < (int)uVar9) {
          do {
            bVar1 = *pbVar3;
            pbVar3 = pbVar3 + 1;
            *puVar7 = (char)auStack_600[bVar1];
            uVar2 = auStack_200[bVar1];
            puVar7[1] = (char)auStack_400[bVar1];
            puVar7[2] = (char)uVar2;
            uVar9 = *(uint *)((int)param_1 + 0x210);
            puVar7 = puVar7 + 3;
            uVar5 = uVar5 + 1;
          } while ((int)(uVar5 & 0xffff) < (int)uVar9);
        }
        local_614 = local_614 + 1;
        local_618 = local_618 + uVar10;
      } while (local_614 < *(int *)((int)param_1 + 0x20c));
    }
  }
  else {
    local_618 = *(int *)((int)param_1 + 0x20c);
    if (-1 < local_618 + -1) {
      iVar6 = (local_618 + -1) * uVar10;
      puVar7 = puVar4;
      do {
        uVar5 = 0;
        pbVar3 = (byte *)(*(int *)((int)param_1 + 0xa4) + iVar6);
        if (0 < (int)uVar9) {
          do {
            bVar1 = *pbVar3;
            pbVar3 = pbVar3 + 1;
            *puVar7 = (char)auStack_600[bVar1];
            uVar2 = auStack_200[bVar1];
            puVar7[1] = (char)auStack_400[bVar1];
            puVar7[2] = (char)uVar2;
            uVar9 = *(uint *)((int)param_1 + 0x210);
            puVar7 = puVar7 + 3;
            uVar5 = uVar5 + 1;
          } while ((int)(uVar5 & 0xffff) < (int)uVar9);
        }
        iVar6 = iVar6 - uVar10;
        local_618 = local_618 + -1;
      } while (local_618 != 0);
    }
  }
  iVar6 = FUN_10005bb0(param_1,puVar4,dwBytes);
  if (iVar6 == 0) {
    GlobalUnlock(hMem);
    GlobalFree(hMem);
    return 0;
  }
  GlobalUnlock(hMem);
  GlobalFree(hMem);
  return 1;
}


// ---- FUN_10007fc0 @ 10007fc0

undefined4 __thiscall FUN_10007fc0(void *this,undefined4 param_1,undefined4 *param_2)

{
  char cVar1;
  HANDLE hFile;
  BOOL BVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  char *pcVar6;
  undefined4 *puVar7;
  char *pcVar8;
  int iVar9;
  undefined4 uVar10;
  DWORD local_e38;
  int local_e34;
  CString local_e30 [4];
  undefined1 *local_e2c;
  _SECURITY_ATTRIBUTES local_e28;
  undefined4 local_e1c [900];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10028786;
  local_c = ExceptionList;
  uVar4 = 0xffffffff;
  ExceptionList = &local_c;
  *(char **)((int)this + 0x98) = *(char **)((int)this + 0x94);
  local_e34 = 0;
  pcVar6 = &DAT_100386e4;
  do {
    pcVar8 = pcVar6;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar8 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar8;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar6 = pcVar8 + -uVar4;
  pcVar8 = *(char **)((int)this + 0x94);
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar8 = pcVar8 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar8 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar8 = pcVar8 + 1;
  }
  *(int *)((int)this + 0x98) = *(int *)((int)this + 0x98) + 3;
  *(int *)((int)this + 0x84) = *(int *)((int)this + 0x84) + 3;
  FUN_10008570(this,*param_2);
  FUN_10008570(this,param_2[1]);
  FUN_10008610((int)this);
  FUN_10008610((int)this);
  FUN_10008570(this,param_2[3]);
  FUN_10008610((int)this);
  FUN_10008610((int)this);
  FUN_10008610((int)this);
  FUN_10008610((int)this);
  FUN_10008570(this,param_2[0x11]);
  FUN_10008610((int)this);
  FUN_10008610((int)this);
  FUN_10008570(this,param_2[0x13]);
  FUN_10008610((int)this);
  FUN_10008610((int)this);
  FUN_10008610((int)this);
  FUN_10008610((int)this);
  FUN_10008570(this,param_2[0x21]);
  FUN_10008610((int)this);
  FUN_10008610((int)this);
  FUN_10008570(this,param_2[0x23]);
  FUN_10008610((int)this);
  FUN_10008610((int)this);
  FUN_10008610((int)this);
  FUN_10008610((int)this);
  FUN_10008570(this,param_2[0x31]);
  FUN_10008610((int)this);
  FUN_10008610((int)this);
  FUN_10008570(this,param_2[0x33]);
  FUN_10008610((int)this);
  FUN_10008610((int)this);
  FUN_10008610((int)this);
  FUN_10008610((int)this);
  if (*(int *)(*(LPCSTR *)((int)this + 8) + -8) != 0) {
    local_e28.nLength = 0xc;
    local_e28.lpSecurityDescriptor = (LPVOID)0x0;
    local_e28.bInheritHandle = 1;
    hFile = CreateFileA(*(LPCSTR *)((int)this + 8),0x80000000,0,&local_e28,3,0x10000000,(HANDLE)0x0)
    ;
    if (hFile != (HANDLE)0xffffffff) {
      BVar2 = ReadFile(hFile,&local_e34,4,&local_e38,(LPOVERLAPPED)0x0);
      if (((BVar2 != 1) || (local_e38 != 4)) ||
         ((local_e34 != 0 &&
          ((BVar2 = ReadFile(hFile,local_e1c,local_e34 * 4,&local_e38,(LPOVERLAPPED)0x0), BVar2 != 1
           || (local_e38 != local_e34 * 4)))))) {
        local_e34 = 0;
      }
      CloseHandle(hFile);
    }
  }
  FUN_10008570(this,local_e34);
  if ((local_e34 != 0) && (iVar9 = 0, 0 < local_e34)) {
    puVar7 = local_e1c;
    do {
      CString::CString((CString *)&local_e38);
      local_4 = 0;
      CString::CString(local_e30);
      local_4._0_1_ = 1;
      iVar3 = FUN_100083c0(*puVar7,(CString *)&local_e38);
      if ((iVar3 == 0) || (iVar3 = FUN_10008420(*puVar7,local_e30), iVar3 == 0)) {
LAB_10008387:
        local_4 = (uint)local_4._1_3_ << 8;
        CString::~CString(local_e30);
        local_4 = 0xffffffff;
        CString::~CString((CString *)&local_e38);
        ExceptionList = local_c;
        return 1;
      }
      local_e2c = &stack0xfffff1b4;
      uVar10 = extraout_ECX;
      CString::CString((CString *)&stack0xfffff1b4,(CString *)&local_e38);
      iVar3 = FUN_10008480(this,uVar10);
      if (iVar3 == 1) goto LAB_10008387;
      local_e2c = &stack0xfffff1b4;
      uVar10 = extraout_ECX_00;
      CString::CString((CString *)&stack0xfffff1b4,local_e30);
      iVar3 = FUN_10008480(this,uVar10);
      if (iVar3 == 1) goto LAB_10008387;
      local_4 = (uint)local_4._1_3_ << 8;
      CString::~CString(local_e30);
      local_4 = 0xffffffff;
      CString::~CString((CString *)&local_e38);
      iVar9 = iVar9 + 1;
      puVar7 = puVar7 + 1;
    } while (iVar9 < local_e34);
  }
  *(int *)((int)this + 0x84) = *(int *)((int)this + 0x84) + 1;
  ExceptionList = local_c;
  return 0;
}


// ---- FUN_100083c0 @ 100083c0

int FUN_100083c0(undefined4 param_1,CString *param_2)

{
  int iVar1;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 *local_168;
  undefined4 local_164;
  char local_160 [352];
  
  local_164 = param_1;
  local_168 = &local_164;
  local_170 = DAT_10039d2c;
  local_16c = 0x164;
  iVar1 = PMGetMnemonic(0,&local_170);
  if (iVar1 == 1) {
    CString::operator=(param_2,local_160);
  }
  return iVar1;
}


// ---- FUN_10008420 @ 10008420

int FUN_10008420(undefined4 param_1,CString *param_2)

{
  int iVar1;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 *local_168;
  undefined4 local_164;
  char local_160 [352];
  
  local_164 = param_1;
  local_168 = &local_164;
  local_170 = DAT_10039cb4;
  local_16c = 0x164;
  iVar1 = PMGetString(0,&local_170);
  if (iVar1 == 1) {
    CString::operator=(param_2,local_160);
  }
  return iVar1;
}


// ---- FUN_10008480 @ 10008480

undefined4 __thiscall FUN_10008480(void *this,undefined4 param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  CHAR local_5c [80];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10028798;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  wsprintfA(local_5c,&DAT_100386e8,param_1);
  uVar2 = 0xffffffff;
  pcVar5 = local_5c;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  iVar3 = ~uVar2 - 1;
  if (0x911 < (int)(~uVar2 + *(int *)((int)this + 0x84))) {
    local_4 = 0xffffffff;
    CString::~CString((CString *)&param_1);
    ExceptionList = local_c;
    return 1;
  }
  uVar2 = 0xffffffff;
  pcVar5 = local_5c;
  do {
    pcVar6 = pcVar5;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar6 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar6;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  local_4 = 0xffffffff;
  pcVar5 = pcVar6 + -uVar2;
  pcVar6 = *(char **)((int)this + 0x98);
  for (uVar4 = uVar2 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar6 = pcVar6 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar6 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar6 = pcVar6 + 1;
  }
  *(int *)((int)this + 0x98) = *(int *)((int)this + 0x98) + iVar3;
  *(int *)((int)this + 0x84) = *(int *)((int)this + 0x84) + iVar3;
  CString::~CString((CString *)&param_1);
  ExceptionList = local_c;
  return 0;
}


// ---- FUN_10008570 @ 10008570

undefined4 __thiscall FUN_10008570(void *this,undefined4 param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  CHAR local_20 [32];
  
  wsprintfA(local_20,&DAT_100386f0,param_1);
  uVar2 = 0xffffffff;
  pcVar5 = local_20;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  iVar3 = ~uVar2 - 1;
  if (0x911 < (int)(~uVar2 + *(int *)((int)this + 0x84))) {
    return 1;
  }
  uVar2 = 0xffffffff;
  pcVar5 = local_20;
  do {
    pcVar6 = pcVar5;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar6 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar6;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar5 = pcVar6 + -uVar2;
  pcVar6 = *(char **)((int)this + 0x98);
  for (uVar4 = uVar2 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar6 = pcVar6 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar6 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar6 = pcVar6 + 1;
  }
  *(int *)((int)this + 0x98) = *(int *)((int)this + 0x98) + iVar3;
  *(int *)((int)this + 0x84) = *(int *)((int)this + 0x84) + iVar3;
  return 0;
}


// ---- FUN_10008610 @ 10008610

undefined4 __fastcall FUN_10008610(int param_1)

{
  char cVar1;
  int iVar2;
  CString *this;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  int local_10;
  char *local_c;
  undefined1 *local_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  local_8 = &LAB_100287b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_10 = param_1;
  CString::CString((CString *)&local_10);
  local_4 = 0;
  CString::Format(this,(char *)&local_10);
  iVar2 = *(int *)(local_c + -8);
  if (0x911 < iVar2 + 1 + *(int *)(param_1 + 0x84)) {
    CString::~CString((CString *)&local_c);
    ExceptionList = local_8;
    return 1;
  }
  uVar3 = 0xffffffff;
  pcVar5 = local_c;
  do {
    pcVar6 = pcVar5;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar6 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar6;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  pcVar5 = pcVar6 + -uVar3;
  pcVar6 = *(char **)(param_1 + 0x98);
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar6 = pcVar6 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar6 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar6 = pcVar6 + 1;
  }
  *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + iVar2;
  *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + iVar2;
  CString::~CString((CString *)&local_c);
  ExceptionList = local_8;
  return 0;
}


// ---- FUN_10008700 @ 10008700

void __fastcall FUN_10008700(int param_1)

{
  if (*(HGLOBAL *)(param_1 + 0x4c) != (HGLOBAL)0x0) {
    GlobalUnlock(*(HGLOBAL *)(param_1 + 0x4c));
  }
  if (*(HGLOBAL *)(param_1 + 0x50) != (HGLOBAL)0x0) {
    GlobalUnlock(*(HGLOBAL *)(param_1 + 0x50));
  }
  return;
}


// ---- FUN_10008730 @ 10008730

undefined4 __fastcall FUN_10008730(void *param_1)

{
  char cVar1;
  bool bVar2;
  LPVOID pvVar3;
  int iVar4;
  undefined3 extraout_var;
  HANDLE hFile;
  BOOL BVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  char *pcVar9;
  char *local_3f4;
  DWORD local_3f0;
  char *local_3ec;
  void *local_3e8;
  int local_3e4;
  int local_3e0;
  _SECURITY_ATTRIBUTES local_3dc;
  undefined4 local_3d0;
  undefined4 local_3cc [65];
  char local_2c8 [350];
  char local_16a [350];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_100287e6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_3e8 = param_1;
  pvVar3 = GlobalLock(*(HGLOBAL *)((int)param_1 + 0x4c));
  *(LPVOID *)((int)param_1 + 0x94) = pvVar3;
  if (pvVar3 != (LPVOID)0x0) {
    *(LPVOID *)((int)param_1 + 0x98) = pvVar3;
    iVar4 = FUN_10009120(param_1,&local_3d0);
    if ((iVar4 == 0) && (bVar2 = FUN_10008bc0(param_1,local_3cc), CONCAT31(extraout_var,bVar2) == 0)
       ) {
      local_3dc.nLength = 0xc;
      local_3dc.lpSecurityDescriptor = (LPVOID)0x0;
      local_3dc.bInheritHandle = 1;
      hFile = CreateFileA(*(LPCSTR *)((int)param_1 + 8),0x40000000,1,&local_3dc,2,0x80000080,
                          (HANDLE)0x0);
      if (hFile != (HANDLE)0xffffffff) {
        BVar5 = WriteFile(hFile,local_3cc,0x104,&local_3f0,(LPOVERLAPPED)0x0);
        if ((BVar5 == 1) && (local_3f0 == 0x104)) {
          iVar4 = FUN_10009120(param_1,&local_3e4);
          if (iVar4 != 0) {
            ExceptionList = local_c;
            return 1;
          }
          BVar5 = WriteFile(hFile,&local_3e4,4,&local_3f0,(LPOVERLAPPED)0x0);
          if ((BVar5 == 1) && (local_3f0 == 4)) {
            local_3e0 = 0;
            if (0 < local_3e4) {
              do {
                CString::CString((CString *)&local_3ec);
                local_4 = 0;
                CString::CString((CString *)&local_3f4);
                local_4 = CONCAT31(local_4._1_3_,1);
                iVar4 = FUN_10008f90(param_1,(CString *)&local_3ec);
                if ((iVar4 != 0) ||
                   (iVar4 = FUN_10008f90(param_1,(CString *)&local_3f4), iVar4 != 0)) {
                  local_4 = local_4 & 0xffffff00;
                  CString::~CString((CString *)&local_3f4);
                  local_4 = 0xffffffff;
                  CString::~CString((CString *)&local_3ec);
                  goto LAB_10008993;
                }
                uVar6 = 0xffffffff;
                pcVar8 = local_3ec;
                do {
                  pcVar9 = pcVar8;
                  if (uVar6 == 0) break;
                  uVar6 = uVar6 - 1;
                  pcVar9 = pcVar8 + 1;
                  cVar1 = *pcVar8;
                  pcVar8 = pcVar9;
                } while (cVar1 != '\0');
                uVar6 = ~uVar6;
                pcVar8 = pcVar9 + -uVar6;
                pcVar9 = local_2c8;
                for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
                  *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
                  pcVar8 = pcVar8 + 4;
                  pcVar9 = pcVar9 + 4;
                }
                for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
                  *pcVar9 = *pcVar8;
                  pcVar8 = pcVar8 + 1;
                  pcVar9 = pcVar9 + 1;
                }
                uVar6 = 0xffffffff;
                pcVar8 = local_3f4;
                do {
                  pcVar9 = pcVar8;
                  if (uVar6 == 0) break;
                  uVar6 = uVar6 - 1;
                  pcVar9 = pcVar8 + 1;
                  cVar1 = *pcVar8;
                  pcVar8 = pcVar9;
                } while (cVar1 != '\0');
                uVar6 = ~uVar6;
                pcVar8 = pcVar9 + -uVar6;
                pcVar9 = local_16a;
                for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
                  *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
                  pcVar8 = pcVar8 + 4;
                  pcVar9 = pcVar9 + 4;
                }
                for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
                  *pcVar9 = *pcVar8;
                  pcVar8 = pcVar8 + 1;
                  pcVar9 = pcVar9 + 1;
                }
                BVar5 = WriteFile(hFile,local_2c8,700,&local_3f0,(LPOVERLAPPED)0x0);
                if ((BVar5 != 1) || (local_3f0 != 700)) {
                  local_4 = (uint)local_4._1_3_ << 8;
                  CString::~CString((CString *)&local_3f4);
                  local_4 = 0xffffffff;
                  CString::~CString((CString *)&local_3ec);
                  param_1 = local_3e8;
                  goto LAB_10008993;
                }
                local_4 = (uint)local_4._1_3_ << 8;
                CString::~CString((CString *)&local_3f4);
                local_4 = 0xffffffff;
                CString::~CString((CString *)&local_3ec);
                local_3e0 = local_3e0 + 1;
                param_1 = local_3e8;
              } while (local_3e0 < local_3e4);
            }
            CloseHandle(hFile);
            GlobalUnlock(*(HGLOBAL *)((int)param_1 + 0x4c));
            ExceptionList = local_c;
            return 0;
          }
        }
LAB_10008993:
        CloseHandle(hFile);
      }
    }
    GlobalUnlock(*(HGLOBAL *)((int)param_1 + 0x4c));
  }
  ExceptionList = local_c;
  return 1;
}


// ---- FUN_100089f0 @ 100089f0

undefined4 __thiscall FUN_100089f0(void *this,undefined4 *param_1)

{
  bool bVar1;
  LPVOID pvVar2;
  int iVar3;
  undefined3 extraout_var;
  int iVar4;
  char *_Str2;
  uchar *local_1c;
  undefined4 local_18;
  int local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10028800;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CString::CString((CString *)&local_1c);
  local_4 = 0;
  CString::CString((CString *)&local_18);
  local_4 = CONCAT31(local_4._1_3_,1);
  pvVar2 = GlobalLock(*(HGLOBAL *)((int)this + 0x4c));
  *(LPVOID *)((int)this + 0x94) = pvVar2;
  if (pvVar2 != (LPVOID)0x0) {
    *(LPVOID *)((int)this + 0x98) = pvVar2;
    iVar3 = FUN_10009120(this,&local_10);
    if ((iVar3 == 0) && (bVar1 = FUN_10008bc0(this,param_1), CONCAT31(extraout_var,bVar1) == 0)) {
      PMNotifyTIFFReset();
      iVar3 = FUN_10009120(this,&local_14);
      if (iVar3 == 0) {
        param_1 = (undefined4 *)0x0;
        if (0 < local_14) {
          do {
            iVar3 = FUN_10008f90(this,(CString *)&local_1c);
            if ((iVar3 != 0) || (iVar3 = FUN_10008f90(this,(CString *)&local_18), iVar3 != 0))
            goto LAB_10008b83;
            CString::MakeUpper((CString *)&local_1c);
            CString::MakeUpper((CString *)&local_18);
            iVar3 = 0;
            if (0 < DAT_10037298) {
              _Str2 = s_CLOCK_1002eb20;
              do {
                iVar4 = _mbscmp(local_1c,(uchar *)_Str2);
                if (iVar4 == 0) {
                  CString::operator=((CString *)&local_1c,s_AP_TIME_1002eb3e + iVar3 * 0x3c);
                  break;
                }
                iVar3 = iVar3 + 1;
                _Str2 = _Str2 + 0x3c;
              } while (iVar3 < DAT_10037298);
            }
            PMNotifyTIFFParameter(local_1c,local_18);
            param_1 = (undefined4 *)((int)param_1 + 1);
          } while ((int)param_1 < local_14);
        }
        GlobalUnlock(*(HGLOBAL *)((int)this + 0x4c));
        local_4 = local_4 & 0xffffff00;
        CString::~CString((CString *)&local_18);
        local_4 = 0xffffffff;
        CString::~CString((CString *)&local_1c);
        ExceptionList = local_c;
        return 0;
      }
    }
    else {
LAB_10008b83:
      GlobalUnlock(*(HGLOBAL *)((int)this + 0x4c));
    }
  }
  local_4 = local_4 & 0xffffff00;
  CString::~CString((CString *)&local_18);
  local_4 = 0xffffffff;
  CString::~CString((CString *)&local_1c);
  ExceptionList = local_c;
  return 1;
}


// ---- FUN_10008bc0 @ 10008bc0

bool __thiscall FUN_10008bc0(void *this,undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = FUN_10009120(this,param_1);
  if (iVar1 != 0) {
    return true;
  }
  iVar1 = FUN_10009120(this,param_1 + 1);
  if (iVar1 != 0) {
    return true;
  }
  if (param_1[1] != 0) {
    return true;
  }
  iVar1 = FUN_10009070(this,(float *)(param_1 + 4));
  if (iVar1 != 0) {
    return true;
  }
  iVar1 = FUN_10009070(this,(float *)(param_1 + 5));
  if (iVar1 != 0) {
    return true;
  }
  iVar1 = FUN_10009120(this,param_1 + 3);
  if (iVar1 != 0) {
    return true;
  }
  iVar1 = FUN_10009070(this,(float *)(param_1 + 0xc));
  if (iVar1 != 0) {
    return true;
  }
  iVar1 = FUN_10009070(this,(float *)(param_1 + 0xd));
  if (iVar1 != 0) {
    return true;
  }
  iVar1 = FUN_10009070(this,(float *)(param_1 + 0xe));
  if (iVar1 != 0) {
    return true;
  }
  iVar1 = FUN_10009070(this,(float *)(param_1 + 0xf));
  if (iVar1 != 0) {
    return true;
  }
  iVar1 = FUN_10009120(this,param_1 + 0x11);
  if (iVar1 != 0) {
    return true;
  }
  if (param_1[0x11] != 1) {
    return true;
  }
  iVar1 = FUN_10009070(this,(float *)(param_1 + 0x14));
  if (iVar1 != 0) {
    return true;
  }
  iVar1 = FUN_10009070(this,(float *)(param_1 + 0x15));
  if (iVar1 != 0) {
    return true;
  }
  iVar1 = FUN_10009120(this,param_1 + 0x13);
  if (iVar1 != 0) {
    return true;
  }
  iVar1 = FUN_10009070(this,(float *)(param_1 + 0x1c));
  if (iVar1 != 0) {
    return true;
  }
  iVar1 = FUN_10009070(this,(float *)(param_1 + 0x1d));
  if (iVar1 != 0) {
    return true;
  }
  iVar1 = FUN_10009070(this,(float *)(param_1 + 0x1e));
  if (iVar1 != 0) {
    return true;
  }
  iVar1 = FUN_10009070(this,(float *)(param_1 + 0x1f));
  if (iVar1 != 0) {
    return true;
  }
  iVar1 = FUN_10009120(this,param_1 + 0x21);
  if (iVar1 != 0) {
    return true;
  }
  if (param_1[0x21] != 2) {
    return true;
  }
  iVar1 = FUN_10009070(this,(float *)(param_1 + 0x24));
  if (iVar1 != 0) {
    return true;
  }
  iVar1 = FUN_10009070(this,(float *)(param_1 + 0x25));
  if (iVar1 != 0) {
    return true;
  }
  iVar1 = FUN_10009120(this,param_1 + 0x23);
  if (iVar1 != 0) {
    return true;
  }
  iVar1 = FUN_10009070(this,(float *)(param_1 + 0x2c));
  if (iVar1 != 0) {
    return true;
  }
  iVar1 = FUN_10009070(this,(float *)(param_1 + 0x2d));
  if (iVar1 != 0) {
    return true;
  }
  iVar1 = FUN_10009070(this,(float *)(param_1 + 0x2e));
  if (iVar1 != 0) {
    return true;
  }
  iVar1 = FUN_10009070(this,(float *)(param_1 + 0x2f));
  if (iVar1 != 0) {
    return true;
  }
  iVar1 = FUN_10009120(this,param_1 + 0x31);
  if (iVar1 != 0) {
    return true;
  }
  if (param_1[0x31] != 3) {
    return true;
  }
  iVar1 = FUN_10009070(this,(float *)(param_1 + 0x34));
  if (iVar1 != 0) {
    return true;
  }
  iVar1 = FUN_10009070(this,(float *)(param_1 + 0x35));
  if (iVar1 != 0) {
    return true;
  }
  iVar1 = FUN_10009120(this,param_1 + 0x33);
  if (iVar1 != 0) {
    return true;
  }
  iVar1 = FUN_10009070(this,(float *)(param_1 + 0x3c));
  if (iVar1 != 0) {
    return true;
  }
  iVar1 = FUN_10009070(this,(float *)(param_1 + 0x3d));
  if (iVar1 != 0) {
    return true;
  }
  iVar1 = FUN_10009070(this,(float *)(param_1 + 0x3e));
  if (iVar1 != 0) {
    return true;
  }
  iVar1 = FUN_10009070(this,(float *)(param_1 + 0x3f));
  return iVar1 != 0;
}


// ---- FUN_10008f90 @ 10008f90

undefined4 __thiscall FUN_10008f90(void *this,CString *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uchar *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10028818;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_10 = this;
  CString::CString((CString *)&local_10);
  local_4 = 0;
  CString::Empty(param_1);
  iVar3 = (*(int *)((int)this + 0x94) + *(int *)((int)this + 0x80)) - *(int *)((int)this + 0x98);
  while( true ) {
    if (iVar3 == 0) {
      local_4 = 0xffffffff;
      CString::~CString((CString *)&local_10);
      ExceptionList = local_c;
      return 1;
    }
    cVar1 = **(char **)((int)this + 0x98);
    *(char **)((int)this + 0x98) = *(char **)((int)this + 0x98) + 1;
    CString::operator=((CString *)&local_10,cVar1);
    iVar3 = iVar3 + -1;
    iVar2 = _mbscmp(local_10,&DAT_10038700);
    if (iVar2 == 0) break;
    CString::operator+=(param_1,(CString *)&local_10);
  }
  local_4 = 0xffffffff;
  *(int *)((int)this + 0x98) = *(int *)((int)this + 0x98) + 1;
  CString::~CString((CString *)&local_10);
  ExceptionList = local_c;
  return 0;
}


// ---- FUN_10009070 @ 10009070

undefined4 __thiscall FUN_10009070(void *this,float *param_1)

{
  int iVar1;
  double dVar2;
  char *local_14;
  char *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10028838;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CString::CString((CString *)&local_14);
  local_4 = 0;
  iVar1 = FUN_10008f90(this,(CString *)&local_14);
  if (iVar1 != 0) {
    local_4 = 0xffffffff;
    CString::~CString((CString *)&local_14);
    ExceptionList = local_c;
    return 1;
  }
  dVar2 = strtod(local_14,&local_10);
  local_4 = 0xffffffff;
  *param_1 = (float)dVar2;
  CString::~CString((CString *)&local_14);
  ExceptionList = local_c;
  return 0;
}


// ---- FUN_10009120 @ 10009120

undefined4 __thiscall FUN_10009120(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *local_14;
  char *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10028858;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CString::CString((CString *)&local_14);
  local_4 = 0;
  iVar1 = FUN_10008f90(this,(CString *)&local_14);
  if (iVar1 != 0) {
    local_4 = 0xffffffff;
    CString::~CString((CString *)&local_14);
    ExceptionList = local_c;
    return 1;
  }
  strtod(local_14,&local_10);
  uVar2 = ftol();
  local_4 = 0xffffffff;
  *param_1 = uVar2;
  CString::~CString((CString *)&local_14);
  ExceptionList = local_c;
  return 0;
}


// ---- FUN_1000c020 @ 1000c020

undefined4 __thiscall FUN_1000c020(void *this,int param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  BOOL BVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int in_stack_ffffff84;
  undefined4 in_stack_ffffff88;
  undefined4 in_stack_ffffff8c;
  undefined4 in_stack_ffffff90;
  undefined4 in_stack_ffffff94;
  undefined4 in_stack_ffffff98;
  undefined4 in_stack_ffffff9c;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  LPCSTR local_48;
  HGLOBAL local_44;
  tagRECT local_40;
  int local_30 [4];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10028878;
  local_c = ExceptionList;
  local_44 = (HGLOBAL)0x0;
  ExceptionList = &local_c;
  FUN_10017030(0x118);
  uVar7 = 0x1000c05a;
  FUN_100170d0((CString *)&local_48);
  local_4 = 0;
  if (*(int *)(local_48 + -8) == 0) {
    uVar6 = 0x23e;
LAB_1000c21a:
    FUN_10017c20(this,uVar6,0,0x1000);
  }
  else {
    uVar8 = 0x1000c07e;
    FUN_10017000();
    local_30[0] = *(int *)(param_1 + 8);
    local_30[1] = *(undefined4 *)(param_1 + 0xc);
    local_14 = 1;
    local_30[2] = *(int *)(param_1 + 0x10) + 1;
    local_30[3] = *(undefined4 *)(param_1 + 0x14);
    local_20 = *(undefined4 *)(param_1 + 0x18);
    local_1c = *(undefined4 *)(param_1 + 0x1c);
    local_18 = *(undefined4 *)(param_1 + 0x20);
    piVar4 = local_30;
    piVar5 = (int *)&stack0xffffff84;
    for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar5 = *piVar4;
      piVar4 = piVar4 + 1;
      piVar5 = piVar5 + 1;
    }
    bVar1 = FUN_100171e0(local_48,in_stack_ffffff84,in_stack_ffffff88,in_stack_ffffff8c,
                         in_stack_ffffff90,in_stack_ffffff94,in_stack_ffffff98,in_stack_ffffff9c,
                         uVar7,uVar8);
    if (CONCAT31(extraout_var,bVar1) == 0) {
      DeleteFileA(local_48);
      goto LAB_1000c221;
    }
    if (*(int *)(param_1 + 4) == 0) {
LAB_1000c160:
      uVar6 = FUN_10017700(&local_48,&local_44);
      if (uVar6 != 0) {
        DeleteFileA(local_48);
        BVar2 = OpenClipboard(*(HWND *)((int)this + 0xd0));
        if (BVar2 != 0) {
          GlobalUnlock(local_44);
          EmptyClipboard();
          SetClipboardData(8,local_44);
          CloseClipboard();
          PMNotifyImexDone();
          local_4 = 0xffffffff;
          CString::~CString((CString *)&local_48);
          ExceptionList = local_c;
          return 1;
        }
        GlobalUnlock(local_44);
        GlobalFree(local_44);
        uVar6 = 0x1d4;
        goto LAB_1000c21a;
      }
      uVar6 = 0x240;
    }
    else {
      CopyRect(&local_40,(RECT *)(param_1 + 0x14));
      FUN_10017090();
      iVar3 = PMNotifyAnnotationToFile();
      if (iVar3 != 0) goto LAB_1000c160;
      uVar6 = 0x23f;
    }
    FUN_10017c20(this,uVar6,0,0x1000);
    DeleteFileA(local_48);
  }
LAB_1000c221:
  PMNotifyImexDone();
  local_4 = 0xffffffff;
  CString::~CString((CString *)&local_48);
  ExceptionList = local_c;
  return 0;
}


// ---- FUN_1000c260 @ 1000c260

undefined4 __thiscall FUN_1000c260(void *this,int param_1)

{
  bool bVar1;
  int iVar2;
  BOOL BVar3;
  HANDLE pvVar4;
  CString *pCVar5;
  undefined3 extraout_var;
  LPCSTR extraout_ECX;
  int *piVar6;
  int *piVar7;
  int in_stack_ffffff94;
  undefined4 in_stack_ffffff98;
  undefined4 in_stack_ffffff9c;
  undefined4 in_stack_ffffffa0;
  undefined4 in_stack_ffffffa4;
  undefined4 in_stack_ffffffa8;
  undefined4 uVar8;
  LPCSTR pCVar9;
  LPCSTR local_3c;
  CString aCStack_38 [4];
  undefined1 *puStack_34;
  int aiStack_30 [4];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_100288a0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  CString::CString((CString *)&local_3c);
  local_4 = 0;
  FUN_10017030(0x118);
  iVar2 = FUN_10017030(0x21);
  if (iVar2 == 1) {
    SRV_Set_State();
  }
  iVar2 = FUN_10017030(0x22);
  if (iVar2 == 1) {
    SRV_Set_State();
  }
  iVar2 = FUN_10017030(199);
  if (iVar2 == 1) {
    SRV_Set_State();
  }
  FUN_10017000();
  BVar3 = OpenClipboard(*(HWND *)((int)this + 0xd0));
  if (BVar3 == 0) {
    FUN_10017c20(this,0x1d4,0,0x1000);
  }
  else {
    BVar3 = IsClipboardFormatAvailable(8);
    if (BVar3 == 0) {
      CloseClipboard();
      FUN_10017c20(this,0x1d5,0,0x1000);
    }
    else {
      pvVar4 = GetClipboardData(8);
      if (pvVar4 == (HANDLE)0x0) {
        CloseClipboard();
        FUN_10017c20(this,0x1d6,0,0x1000);
      }
      else {
        pCVar5 = FUN_100170d0(aCStack_38);
        local_4._0_1_ = 1;
        CString::operator=((CString *)&local_3c,pCVar5);
        local_4 = (uint)local_4._1_3_ << 8;
        CString::~CString(aCStack_38);
        if (*(int *)(local_3c + -8) == 0) {
          CloseClipboard();
          FUN_10017c20(this,0x23e,0,0x1000);
        }
        else {
          puStack_34 = &stack0xffffffb4;
          pCVar9 = extraout_ECX;
          CString::CString((CString *)&stack0xffffffb4,(CString *)&local_3c);
          uVar8 = 0x1000c3d4;
          iVar2 = FUN_1000c5a0(pvVar4,pCVar9);
          if (iVar2 == 0) {
            CloseClipboard();
            FUN_10017c20(this,0x23f,0,0x1000);
          }
          else {
            CloseClipboard();
            aiStack_30[1] = *(undefined4 *)(param_1 + 0xc);
            aiStack_30[0] = *(int *)(param_1 + 8);
            uStack_14 = 1;
            aiStack_30[2] = *(int *)(param_1 + 0x10) + 1;
            aiStack_30[3] = *(undefined4 *)(param_1 + 0x14);
            uStack_20 = *(undefined4 *)(param_1 + 0x18);
            uStack_1c = *(undefined4 *)(param_1 + 0x1c);
            uStack_18 = *(undefined4 *)(param_1 + 0x20);
            piVar6 = aiStack_30;
            piVar7 = (int *)&stack0xffffff94;
            for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
              *piVar7 = *piVar6;
              piVar6 = piVar6 + 1;
              piVar7 = piVar7 + 1;
            }
            bVar1 = FUN_10017260(local_3c,in_stack_ffffff94,in_stack_ffffff98,in_stack_ffffff9c,
                                 in_stack_ffffffa0,in_stack_ffffffa4,in_stack_ffffffa8,uVar8,pvVar4)
            ;
            if (CONCAT31(extraout_var,bVar1) != 0) {
              DeleteFileA(local_3c);
              local_4 = 0xffffffff;
              CString::~CString((CString *)&local_3c);
              ExceptionList = pvStack_c;
              return 1;
            }
            DeleteFileA(local_3c);
          }
        }
      }
    }
  }
  local_4 = 0xffffffff;
  CString::~CString((CString *)&local_3c);
  ExceptionList = pvStack_c;
  return 0;
}


// ---- FUN_1000c4c0 @ 1000c4c0

undefined4 __thiscall FUN_1000c4c0(void *this,uint *param_1)

{
  BOOL BVar1;
  HANDLE hMem;
  LPVOID pvVar2;
  
  BVar1 = OpenClipboard(*(HWND *)((int)this + 0xd0));
  if (BVar1 == 0) {
    FUN_10017c20(this,0x1d4,0,0x1000);
    return 0;
  }
  BVar1 = IsClipboardFormatAvailable(8);
  if (BVar1 == 0) {
    CloseClipboard();
    FUN_10017c20(this,0x1d5,0,0x1000);
    return 0;
  }
  hMem = GetClipboardData(8);
  CloseClipboard();
  if (hMem == (HANDLE)0x0) {
    FUN_10017c20(this,0x1d6,0,0x1000);
    return 0;
  }
  pvVar2 = GlobalLock(hMem);
  if (pvVar2 == (LPVOID)0x0) {
    GlobalUnlock(hMem);
    FUN_10017c20(this,0x1d2,0,0x1000);
    return 0;
  }
  *param_1 = (uint)*(ushort *)((int)pvVar2 + 0xe);
  param_1[1] = *(uint *)((int)pvVar2 + 4);
  param_1[2] = *(uint *)((int)pvVar2 + 8);
  GlobalUnlock(hMem);
  return 1;
}


// ---- FUN_1000c5a0 @ 1000c5a0

undefined4 FUN_1000c5a0(HGLOBAL param_1,LPCSTR param_2)

{
  short sVar1;
  HANDLE hFile;
  int *lpBuffer;
  uint uVar2;
  int iVar3;
  DWORD nNumberOfBytesToWrite;
  DWORD local_20;
  undefined2 local_1c;
  int local_1a;
  undefined2 local_16;
  undefined2 local_14;
  int local_12;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_100288b8;
  local_c = ExceptionList;
  if (param_1 == (HGLOBAL)0x0) {
    local_4 = 0xffffffff;
    ExceptionList = &local_c;
    CString::~CString((CString *)&param_2);
  }
  else {
    ExceptionList = &local_c;
    hFile = CreateFileA(param_2,0x40000000,1,(LPSECURITY_ATTRIBUTES)0x0,2,0x8000080,(HANDLE)0x0);
    if (hFile != (HANDLE)0xffffffff) {
      lpBuffer = GlobalLock(param_1);
      if (lpBuffer != (int *)0x0) {
        local_1c = 0x4d42;
        uVar2 = 0;
        if (lpBuffer[8] == 0) {
          sVar1 = *(short *)((int)lpBuffer + 0xe);
          if (sVar1 == 1) {
            uVar2 = 2;
          }
          else if (sVar1 == 4) {
            uVar2 = 0x10;
          }
          else if (sVar1 == 8) {
            uVar2 = 0x100;
          }
        }
        else {
          uVar2 = (uint)*(ushort *)(lpBuffer + 8);
        }
        if ((lpBuffer[4] == 1) || (lpBuffer[4] == 2)) {
          iVar3 = lpBuffer[5];
        }
        else {
          iVar3 = lpBuffer[2] *
                  ((uint)*(ushort *)((int)lpBuffer + 0xe) * lpBuffer[1] + 0x1f >> 5) * 4;
          lpBuffer[5] = iVar3;
        }
        nNumberOfBytesToWrite = *lpBuffer + uVar2 * 4 + iVar3;
        local_1a = nNumberOfBytesToWrite + 0xe;
        local_16 = 0;
        local_14 = 0;
        local_12 = *lpBuffer + 0xe + uVar2 * 4;
        WriteFile(hFile,&local_1c,0xe,&local_20,(LPOVERLAPPED)0x0);
        WriteFile(hFile,lpBuffer,nNumberOfBytesToWrite,&local_20,(LPOVERLAPPED)0x0);
        GlobalUnlock(param_1);
        CloseHandle(hFile);
        local_4 = 0xffffffff;
        if (local_20 == 0) {
          CString::~CString((CString *)&param_2);
          ExceptionList = local_c;
          return 0;
        }
        CString::~CString((CString *)&param_2);
        ExceptionList = local_c;
        return 1;
      }
      CloseHandle(hFile);
    }
    local_4 = 0xffffffff;
    CString::~CString((CString *)&param_2);
  }
  ExceptionList = local_c;
  return 0;
}


// ---- FUN_1000f580 @ 1000f580

undefined4 __thiscall FUN_1000f580(void *this,int *param_1)

{
  int *piVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  CString *pCVar6;
  undefined3 extraout_var;
  LPCSTR extraout_ECX;
  LPCSTR extraout_ECX_00;
  LPCSTR pCVar7;
  LPCSTR extraout_ECX_01;
  LPCSTR extraout_ECX_02;
  LPCSTR extraout_ECX_03;
  LPCSTR extraout_ECX_04;
  LPCSTR unaff_EBX;
  int *piVar8;
  int in_stack_ffffff94;
  undefined4 in_stack_ffffff98;
  undefined4 in_stack_ffffff9c;
  undefined4 in_stack_ffffffa0;
  undefined4 uVar9;
  undefined4 uVar10;
  char *pcVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  LPCSTR local_38;
  undefined1 *puStack_34;
  int aiStack_30 [9];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_100288f2;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  CString::CString((CString *)&local_38);
  local_4 = 0;
  FUN_10017030(0x118);
  piVar1 = param_1;
  FUN_1001fd90(*(void **)((int)this + 0xdc),&DAT_10038758,s_IMAGE_10038760);
  FUN_1001fd90(*(void **)((int)this + 0xdc),&DAT_10038758,s_OVERLAY_10038750);
  FUN_1001fd90(*(void **)((int)this + 0xdc),&DAT_10038758,s_ANNOTATION_10038744);
  FUN_1001fd90(*(void **)((int)this + 0xdc),&DAT_10038758,s_TRANSFORM_10038738);
  FUN_10017000();
  param_1 = operator_new(0x14);
  local_4._0_1_ = 1;
  if (param_1 == (int *)0x0) {
    piVar3 = (int *)0x0;
    pCVar7 = extraout_ECX;
  }
  else {
    piVar3 = FUN_1001f9f0(param_1,s_LEO_Server_1003872c);
    pCVar7 = extraout_ECX_00;
  }
  pcVar11 = s_Write_10038724;
  param_1 = (int *)&stack0xffffffac;
  local_4 = (uint)local_4._1_3_ << 8;
  CString::CString((CString *)&stack0xffffffac,s_Accounting_10038718);
  iVar4 = FUN_10020490(piVar3,pCVar7,pcVar11);
  pcVar11 = s_PHOTO_10038710;
  if (iVar4 == 0) {
    FUN_1001fe60(piVar3,0x10038718,s_PHOTO_10038710);
  }
  else {
    param_1 = (int *)&stack0xffffffac;
    pCVar7 = extraout_ECX_01;
    CString::CString((CString *)&stack0xffffffac,s_Accounting_10038718);
    FUN_10020490(piVar3,pCVar7,pcVar11);
  }
  FUN_1001fd90(piVar3,s_Accounting_10038718,s_PHOTO_10038710);
  param_1 = (int *)&stack0xffffffac;
  uVar9 = 0x1000f6d3;
  pCVar7 = extraout_ECX_02;
  CString::CString((CString *)&stack0xffffffac,s_Accounting_10038718);
  uVar10 = 0x1000f6da;
  FUN_100203f0(piVar3,pCVar7);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 4))();
  }
  FUN_10017050(6.1517e-43);
  iVar4 = ftol();
  param_1 = (int *)(iVar4 + 1);
  if (9999999 < (int)param_1) {
    param_1 = (int *)0x0;
  }
  iVar4 = 0x1000f71e;
  FUN_10017070(0x1b7,(float)(int)param_1);
  if (*piVar1 == 0) {
    puStack_34 = &stack0xffffffb4;
    pCVar7 = extraout_ECX_03;
    CString::CString((CString *)&stack0xffffffb4,&DAT_10039fec);
    uVar9 = FUN_100172c0(piVar1[1],(void *)piVar1[3],pCVar7);
    PMNotifyImexDone();
    PMGeneralNotifyMessage();
LAB_1000f995:
    local_4 = 0xffffffff;
    CString::~CString((CString *)&local_38);
  }
  else {
    iVar5 = FUN_10017030(0x8c);
    if (((iVar5 == 0) || (iVar5 == 1)) || (iVar5 == 3)) {
      pcVar11 = s_HRRU_TMP_10038704;
      pCVar6 = (CString *)operator+((CString *)&param_1,(char *)((int)this + 0xcc));
      puStack_8._0_1_ = 2;
      CString::operator=((CString *)&stack0xffffffc4,pCVar6);
      puStack_8 = (undefined1 *)((uint)puStack_8._1_3_ << 8);
      CString::~CString((CString *)&stack0x00000000);
      FUN_10017090();
      FUN_10017090();
      iVar4 = PMNotifyAnnotationToFile();
      if (iVar4 != 0) {
        local_38 = &stack0xffffffb0;
        pCVar7 = extraout_ECX_04;
        CString::CString((CString *)&stack0xffffffb0,(CString *)&stack0xffffffc4);
        uVar9 = FUN_100172c0(piVar1[1],(void *)piVar1[3],pCVar7);
        PMNotifyImexDone();
        DeleteFileA(unaff_EBX);
        goto LAB_1000f995;
      }
      FUN_10017c20(this,0x23f,0,0x1000);
      local_38 = pcVar11;
    }
    else {
      pCVar6 = FUN_100170d0((CString *)&param_1);
      local_4._0_1_ = 3;
      uVar12 = 0x1000f7a6;
      CString::operator=((CString *)&local_38,pCVar6);
      local_4 = (uint)local_4._1_3_ << 8;
      uVar13 = 0x1000f7b4;
      CString::~CString((CString *)&param_1);
      aiStack_30[1] = piVar1[2];
      aiStack_30[7] = 1;
      aiStack_30[2] = 1;
      aiStack_30[4] = 0;
      aiStack_30[3] = 0;
      aiStack_30[0] = piVar1[1];
      aiStack_30[6] = 0x300;
      aiStack_30[5] = 0x400;
      aiStack_30[8] = piVar1[3];
      piVar3 = aiStack_30;
      piVar8 = (int *)&stack0xffffff94;
      for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
        *piVar8 = *piVar3;
        piVar3 = piVar3 + 1;
        piVar8 = piVar8 + 1;
      }
      bVar2 = FUN_100171e0(local_38,in_stack_ffffff94,in_stack_ffffff98,in_stack_ffffff9c,
                           in_stack_ffffffa0,uVar9,uVar10,iVar4,uVar12,uVar13);
      if (CONCAT31(extraout_var,bVar2) != 0) {
        FUN_10017090();
        FUN_10017090();
        iVar4 = PMNotifyAnnotationToFile();
        if (iVar4 != 0) {
          FUN_10017360(local_38,piVar1[1]);
          DeleteFileA(local_38);
          PMNotifyImexDone();
          local_4 = 0xffffffff;
          CString::~CString((CString *)&local_38);
          ExceptionList = pvStack_c;
          return 1;
        }
        FUN_10017c20(this,0x23f,0,0x1000);
      }
    }
    DeleteFileA(local_38);
    PMNotifyImexDone();
    local_4 = 0xffffffff;
    CString::~CString((CString *)&local_38);
    uVar9 = 0;
  }
  ExceptionList = pvStack_c;
  return uVar9;
}


// ---- FUN_1000f9c0 @ 1000f9c0

void FUN_1000f9c0(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ---- FUN_10012820 @ 10012820

undefined4 __thiscall FUN_10012820(void *this,int *param_1)

{
  int *piVar1;
  bool bVar2;
  HDC hdc;
  void *this_00;
  int *piVar3;
  int iVar4;
  UINT UVar5;
  undefined3 extraout_var;
  LPCSTR extraout_ECX;
  LPCSTR extraout_ECX_00;
  LPCSTR pCVar6;
  LPCSTR extraout_ECX_01;
  LPCSTR extraout_ECX_02;
  int iVar7;
  int *piVar8;
  int in_stack_ffffff90;
  undefined4 in_stack_ffffff94;
  undefined4 in_stack_ffffff98;
  undefined4 in_stack_ffffff9c;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  char *pcVar12;
  int local_3c;
  HGLOBAL pvStack_34;
  int local_30 [9];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  piVar1 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10028912;
  local_c = ExceptionList;
  if (param_1[0xb8] != 0) {
    ExceptionList = &local_c;
    FUN_1001fd90(*(void **)((int)this + 0xdc),s_PRINT_IMAGE_100387bc,s_IMAGE_10038760);
    FUN_1001fd90(*(void **)((int)this + 0xdc),s_PRINT_IMAGE_100387bc,s_OVERLAY_10038750);
    FUN_1001fd90(*(void **)((int)this + 0xdc),s_PRINT_IMAGE_100387bc,s_ANNOTATION_10038744);
    FUN_1001fd90(*(void **)((int)this + 0xdc),s_PRINT_IMAGE_100387bc,s_POSITION_100387b0);
    FUN_1001fd90(*(void **)((int)this + 0xdc),s_PRINT_IMAGE_100387bc,s_ORIENTATION_100387a4);
    FUN_1001fd90(*(void **)((int)this + 0xdc),s_PRINT_IMAGE_100387bc,&DAT_1003879c);
    FUN_1001fd90(*(void **)((int)this + 0xdc),s_PRINT_IMAGE_100387bc,s_COLOUR_10038794);
    FUN_1001fd90(*(void **)((int)this + 0xdc),s_PRINT_IMAGE_100387bc,s_COLOURMERGE_10038788);
    FUN_1001fcc0(*(void **)((int)this + 0xdc),(BYTE *)s_PRINT_IMAGE_100387bc,s_DRIVERNAME_1003877c);
    FUN_1001fcc0(*(void **)((int)this + 0xdc),(BYTE *)s_PRINT_IMAGE_100387bc,s_DEVICENAME_10038770);
    ExceptionList = local_c;
    return 0;
  }
  ExceptionList = &local_c;
  FUN_100170d0((CString *)&param_1);
  local_4 = 0;
  if (param_1[-2] == 0) {
    FUN_10017c20(this,0x23e,0,0x1000);
    local_4 = 0xffffffff;
    CString::~CString((CString *)&param_1);
    ExceptionList = local_c;
    return 0;
  }
  FUN_10017030(0x118);
  hdc = FUN_10012e90(this,(int)piVar1);
  if (hdc == (HDC)0x0) {
    FUN_10017c20(this,0x1d9,0,0x1000);
    goto LAB_10012cc4;
  }
  FUN_1001fd90(*(void **)((int)this + 0xdc),s_PRINT_IMAGE_100387bc,s_IMAGE_10038760);
  FUN_1001fd90(*(void **)((int)this + 0xdc),s_PRINT_IMAGE_100387bc,s_OVERLAY_10038750);
  FUN_1001fd90(*(void **)((int)this + 0xdc),s_PRINT_IMAGE_100387bc,s_ANNOTATION_10038744);
  FUN_1001fd90(*(void **)((int)this + 0xdc),s_PRINT_IMAGE_100387bc,s_POSITION_100387b0);
  FUN_1001fd90(*(void **)((int)this + 0xdc),s_PRINT_IMAGE_100387bc,s_ORIENTATION_100387a4);
  FUN_1001fd90(*(void **)((int)this + 0xdc),s_PRINT_IMAGE_100387bc,&DAT_1003879c);
  FUN_1001fd90(*(void **)((int)this + 0xdc),s_PRINT_IMAGE_100387bc,s_COLOUR_10038794);
  FUN_1001fd90(*(void **)((int)this + 0xdc),s_PRINT_IMAGE_100387bc,s_COLOURMERGE_10038788);
  FUN_1001fcc0(*(void **)((int)this + 0xdc),(BYTE *)s_PRINT_IMAGE_100387bc,s_DRIVERNAME_1003877c);
  FUN_1001fcc0(*(void **)((int)this + 0xdc),(BYTE *)s_PRINT_IMAGE_100387bc,s_DEVICENAME_10038770);
  FUN_10017000();
  this_00 = operator_new(0x14);
  local_4._0_1_ = 1;
  if (this_00 == (void *)0x0) {
    piVar3 = (int *)0x0;
    pCVar6 = extraout_ECX;
  }
  else {
    piVar3 = FUN_1001f9f0(this_00,s_LEO_Server_1003872c);
    pCVar6 = extraout_ECX_00;
  }
  pcVar12 = s_Write_10038724;
  local_4 = (uint)local_4._1_3_ << 8;
  CString::CString((CString *)&stack0xffffffa8,s_Accounting_10038718);
  iVar4 = FUN_10020490(piVar3,pCVar6,pcVar12);
  pcVar12 = s_PRINT_10038768;
  if (iVar4 == 0) {
    UVar5 = FUN_1001fe60(piVar3,0x10038718,s_PRINT_10038768);
  }
  else {
    pCVar6 = extraout_ECX_01;
    CString::CString((CString *)&stack0xffffffa8,s_Accounting_10038718);
    UVar5 = FUN_10020490(piVar3,pCVar6,pcVar12);
  }
  iVar4 = UVar5 + 1;
  FUN_1001fd90(piVar3,s_Accounting_10038718,s_PRINT_10038768);
  pcVar12 = s_PRINT_10038768;
  uVar9 = 0x10012b7d;
  pCVar6 = extraout_ECX_02;
  CString::CString((CString *)&stack0xffffffa8,s_Accounting_10038718);
  uVar10 = 0x10012b84;
  FUN_100203f0(piVar3,pCVar6);
  if (piVar3 != (int *)0x0) {
    iVar4 = 1;
    pcVar12 = (char *)0x10012b93;
    (**(code **)(*piVar3 + 4))();
  }
  local_30[1] = piVar1[4];
  local_30[4] = 0;
  local_30[3] = 0;
  local_30[8] = 0;
  local_30[0] = piVar1[5];
  local_30[7] = 1;
  local_30[2] = 1;
  local_30[6] = 0x300;
  local_30[5] = 0x400;
  piVar3 = local_30;
  piVar8 = (int *)&stack0xffffff90;
  for (iVar7 = 9; iVar7 != 0; iVar7 = iVar7 + -1) {
    *piVar8 = *piVar3;
    piVar3 = piVar3 + 1;
    piVar8 = piVar8 + 1;
  }
  bVar2 = FUN_100171e0((LPCSTR)param_1,in_stack_ffffff90,in_stack_ffffff94,in_stack_ffffff98,
                       in_stack_ffffff9c,uVar9,uVar10,pCVar6,pcVar12,iVar4);
  if (CONCAT31(extraout_var,bVar2) == 0) {
LAB_10012c77:
    DeleteFileA((LPCSTR)param_1);
  }
  else {
    if (piVar1[6] != 0) {
      FUN_10017090();
      FUN_10017090();
      iVar4 = PMNotifyAnnotationToFile();
      if (iVar4 != 0) goto LAB_10012c50;
      uVar11 = 0x23f;
LAB_10012c70:
      FUN_10017c20(this,uVar11,0,0x1000);
      goto LAB_10012c77;
    }
LAB_10012c50:
    uVar11 = FUN_10017700(&param_1,&pvStack_34);
    if (uVar11 == 0) {
      uVar11 = 0x240;
      goto LAB_10012c70;
    }
    DeleteFileA((LPCSTR)param_1);
    iVar4 = FUN_100178d0(pvStack_34,piVar1,hdc);
    if (iVar4 != 0) {
      if (*(int *)((int)this + 0xd4) != 0) {
        DeleteDC(hdc);
        *(undefined4 *)((int)this + 0xd4) = 0;
      }
      FUN_10016c50();
      FUN_10017050(6.13769e-43);
      local_3c = ftol();
      local_3c = local_3c + 1;
      if (9999999 < local_3c) {
        local_3c = 0;
      }
      FUN_10017070(0x1b6,(float)local_3c);
      PMNotifyImexDone();
      PMGeneralNotifyMessage();
      local_4 = 0xffffffff;
      CString::~CString((CString *)&param_1);
      ExceptionList = local_c;
      return 1;
    }
  }
  if (*(int *)((int)this + 0xd4) != 0) {
    DeleteDC(hdc);
    *(undefined4 *)((int)this + 0xd4) = 0;
  }
LAB_10012cc4:
  PMNotifyImexDone();
  local_4 = 0xffffffff;
  CString::~CString((CString *)&param_1);
  ExceptionList = local_c;
  return 0;
}


// ---- FUN_10012d80 @ 10012d80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_10012d80(void *this,int param_1)

{
  float fVar1;
  HDC hdc;
  int iVar2;
  float10 fVar3;
  float local_10;
  undefined4 local_c;
  undefined4 local_8;
  float *local_4;
  
  hdc = FUN_10012e90(this,param_1);
  if (hdc != (HDC)0x0) {
    if (0 < *(int *)(param_1 + 8)) {
      iVar2 = GetDeviceCaps(hdc,8);
      fVar3 = FUN_10017090();
      for (fVar1 = _DAT_1002a338;
          _DAT_1002a338 <=
          (float)(fVar3 * (float10)((int)(iVar2 + (iVar2 >> 0x1f & 0x3ffU)) >> 10)) - fVar1;
          fVar1 = fVar1 + _DAT_1002a338) {
      }
      iVar2 = ftol();
      if (iVar2 < *(int *)(param_1 + 8)) {
        *(int *)(param_1 + 8) = iVar2;
      }
    }
    fVar3 = FUN_10017b90(hdc,(float)*(int *)(param_1 + 8) * (float)_DAT_1002a330);
    local_c = DAT_1003ab08;
    local_4 = &local_10;
    local_10 = (float)fVar3;
    local_8 = 4;
    SendMessageA(*(HWND *)((int)this + 0xd0),0x4a,(WPARAM)*(HWND *)((int)this + 0xd0),
                 (LPARAM)&local_c);
    if (*(int *)((int)this + 0xd4) != 0) {
      DeleteDC(hdc);
      *(undefined4 *)((int)this + 0xd4) = 0;
    }
    return 1;
  }
  return 0;
}


// ---- FUN_10012e90 @ 10012e90

HDC __thiscall FUN_10012e90(void *this,int param_1)

{
  byte *pwszDevice;
  byte bVar1;
  HDC pHVar2;
  CString *pCVar3;
  HANDLE hFile;
  DWORD dwBytes;
  DEVMODEA *pdm;
  BOOL BVar4;
  byte *pbVar5;
  int iVar6;
  LPCSTR unaff_EBX;
  DEVMODEA *pDVar7;
  bool bVar8;
  DWORD local_20;
  HDC local_1c;
  int local_18;
  void *local_14;
  void *local_10;
  void *local_c;
  undefined1 *local_8;
  int local_4;
  
  local_4 = 0xffffffff;
  local_8 = &LAB_10028938;
  local_c = ExceptionList;
  local_14 = (void *)0x0;
  ExceptionList = &local_c;
  local_10 = this;
  CString::CString((CString *)&local_20,&DAT_10039fec);
  local_4 = 0;
  pwszDevice = (byte *)(param_1 + 0x17e);
  CString::operator=((CString *)&local_20,(char *)pwszDevice);
  CString::MakeReverse((CString *)&local_20);
  pCVar3 = (CString *)CString::SpanExcluding((CString *)&local_20,(char *)&local_18);
  local_8._0_1_ = 1;
  CString::operator=((CString *)&stack0xffffffdc,pCVar3);
  local_8 = (undefined1 *)((uint)local_8._1_3_ << 8);
  CString::~CString((CString *)&local_1c);
  CString::MakeReverse((CString *)&stack0xffffffdc);
  CString::operator+=((CString *)&stack0xffffffdc,&DAT_100387c8);
  operator+((CString *)&local_20,(CString *)((int)this + 0xcc));
  hFile = CreateFileA(unaff_EBX,0x80000000,0,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  if (hFile != (HANDLE)0xffffffff) {
    dwBytes = GetFileSize(hFile,(LPDWORD)0x0);
    if (((dwBytes != 0) && (dwBytes != 0xffffffff)) &&
       (pdm = GlobalAlloc(0x40,dwBytes), pdm != (DEVMODEA *)0x0)) {
      local_20 = 0;
      BVar4 = ReadFile(hFile,pdm,dwBytes,&local_20,(LPOVERLAPPED)0x0);
      if ((BVar4 != 0) && (pbVar5 = pwszDevice, pDVar7 = pdm, dwBytes == local_20)) {
        do {
          bVar1 = *pbVar5;
          bVar8 = bVar1 < pDVar7->dmDeviceName[0];
          if (bVar1 != pDVar7->dmDeviceName[0]) {
LAB_10012fd8:
            iVar6 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
            goto LAB_10012fdd;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar5[1];
          bVar8 = bVar1 < pDVar7->dmDeviceName[1];
          if (bVar1 != pDVar7->dmDeviceName[1]) goto LAB_10012fd8;
          pbVar5 = pbVar5 + 2;
          pDVar7 = (DEVMODEA *)(pDVar7->dmDeviceName + 2);
        } while (bVar1 != 0);
        iVar6 = 0;
LAB_10012fdd:
        if (iVar6 == 0) {
          local_1c = CreateDCA((LPCSTR)(local_4 + 0x20),(LPCSTR)pwszDevice,(LPCSTR)0x0,pdm);
        }
      }
      GlobalFree(pdm);
    }
    CloseHandle(hFile);
    pHVar2 = local_1c;
    if (local_1c != (HDC)0x0) {
      local_c = (void *)((uint)local_c & 0xffffff00);
      *(undefined4 *)(local_18 + 0xd4) = 1;
      CString::~CString((CString *)&stack0xffffffdc);
      local_c = (void *)0xffffffff;
      CString::~CString((CString *)&stack0xffffffd8);
      ExceptionList = local_14;
      return pHVar2;
    }
  }
  local_c = (void *)((uint)local_c & 0xffffff00);
  CString::~CString((CString *)&stack0xffffffdc);
  local_c = (void *)0xffffffff;
  CString::~CString((CString *)&stack0xffffffd8);
  ExceptionList = local_14;
  return (HDC)0x0;
}


// ---- FUN_10015ed0 @ 10015ed0

undefined4 __thiscall
FUN_10015ed0(void *this,undefined4 param_1,char *param_2,char *param_3,char *param_4)

{
  CString::operator=((CString *)((int)this + 200),param_3);
  CString::operator=((CString *)((int)this + 0xcc),param_4);
  CString::operator=((CString *)((int)this + 0xc4),param_2);
  *(undefined4 *)((int)this + 0xd0) = param_1;
  FUN_1001fb30(*(void **)((int)this + 0xdc),param_2);
  return 1;
}


// ---- FUN_10015f30 @ 10015f30

undefined4 __fastcall FUN_10015f30(void *param_1)

{
  char cVar1;
  int iVar2;
  CString *pCVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  char *local_2fc;
  CString local_2f8 [4];
  CString local_2f4 [4];
  UINT local_2f0;
  UINT local_2ec;
  UINT local_2e8;
  UINT local_2e4;
  UINT local_2e0;
  UINT local_2dc;
  UINT local_2d8;
  UINT local_2d4;
  char local_2d0 [350];
  char local_172 [350];
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10028971;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CString::CString((CString *)&local_2fc);
  local_4 = 0;
  iVar2 = FUN_10017030(0xb5);
  if ((iVar2 == 1) || (iVar2 == 2)) {
    local_4 = 0xffffffff;
    CString::~CString((CString *)&local_2fc);
    ExceptionList = local_c;
    return 1;
  }
  if (iVar2 != 3) {
    local_4 = 0xffffffff;
    CString::~CString((CString *)&local_2fc);
    ExceptionList = local_c;
    return 0;
  }
  local_2e0 = FUN_1001fe60(*(void **)((int)param_1 + 0xdc),0x100387bc,s_IMAGE_10038760);
  local_2dc = FUN_1001fe60(*(void **)((int)param_1 + 0xdc),0x100387bc,s_OVERLAY_10038750);
  local_2d8 = FUN_1001fe60(*(void **)((int)param_1 + 0xdc),0x100387bc,s_ANNOTATION_10038744);
  local_2f0 = FUN_1001fe60(*(void **)((int)param_1 + 0xdc),0x100387bc,s_POSITION_100387b0);
  local_2ec = FUN_1001fe60(*(void **)((int)param_1 + 0xdc),0x100387bc,s_ORIENTATION_100387a4);
  local_2e8 = FUN_1001fe60(*(void **)((int)param_1 + 0xdc),0x100387bc,&DAT_1003879c);
  local_2e4 = FUN_1001fe60(*(void **)((int)param_1 + 0xdc),0x100387bc,s_COLOUR_10038794);
  local_2d4 = FUN_1001fe60(*(void **)((int)param_1 + 0xdc),0x100387bc,s_COLOURMERGE_10038788);
  pCVar3 = (CString *)
           FUN_1001fbe0(*(void **)((int)param_1 + 0xdc),local_2f8,s_PRINT_IMAGE_100387bc,
                        s_DRIVERNAME_1003877c);
  local_4._0_1_ = 1;
  CString::operator=((CString *)&local_2fc,pCVar3);
  local_4 = (uint)local_4._1_3_ << 8;
  CString::~CString(local_2f8);
  uVar5 = 0xffffffff;
  pcVar7 = local_2fc;
  do {
    pcVar8 = pcVar7;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar8 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar8;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  pcVar7 = pcVar8 + -uVar5;
  pcVar8 = local_2d0;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar8 = pcVar8 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar8 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar8 = pcVar8 + 1;
  }
  pCVar3 = (CString *)
           FUN_1001fbe0(*(void **)((int)param_1 + 0xdc),local_2f4,s_PRINT_IMAGE_100387bc,
                        s_DEVICENAME_10038770);
  local_4._0_1_ = 2;
  CString::operator=((CString *)&local_2fc,pCVar3);
  local_4 = (uint)local_4._1_3_ << 8;
  CString::~CString(local_2f4);
  uVar5 = 0xffffffff;
  do {
    pcVar7 = local_2fc;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar7 = local_2fc + 1;
    cVar1 = *local_2fc;
    local_2fc = pcVar7;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  pcVar7 = pcVar7 + -uVar5;
  pcVar8 = local_172;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar8 = pcVar8 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar8 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar8 = pcVar8 + 1;
  }
  local_14 = 0;
  local_10 = 0;
  uVar4 = FUN_10012d80(param_1,(int)&local_2f0);
  local_4 = 0xffffffff;
  CString::~CString((CString *)&local_2fc);
  ExceptionList = local_c;
  return uVar4;
}


// ---- FUN_100161d0 @ 100161d0

uint __thiscall FUN_100161d0(void *this,undefined4 *param_1)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  CString *pCVar4;
  uint uVar5;
  uint uVar6;
  char *unaff_EBX;
  char *pcVar7;
  char *pcVar8;
  char *local_8f4;
  LPCSTR local_8f0;
  CString *local_8ec;
  CString local_8e8 [4];
  CString local_8e4 [4];
  CString local_8e0 [4];
  CString local_8dc [4];
  CFile local_8d8 [16];
  CString local_8c8 [4];
  CString local_8c4 [4];
  CString local_8c0 [4];
  UINT local_8bc;
  UINT local_8b8;
  UINT local_8b4;
  UINT local_8b0;
  UINT local_8ac;
  UINT local_8a8;
  UINT local_8a4;
  UINT local_8a0;
  UINT local_89c;
  UINT local_898;
  UINT local_894;
  UINT local_890;
  char local_88c [350];
  char local_72e [350];
  undefined4 local_5d0;
  undefined4 local_5cc;
  UINT local_5c8;
  UINT local_5c4;
  UINT local_5c0;
  UINT local_5bc;
  UINT local_5b8;
  UINT local_5b4;
  UINT local_5b0;
  UINT local_5ac;
  UINT local_5a8;
  UINT local_5a4;
  UINT local_5a0;
  UINT local_59c;
  UINT local_598;
  UINT local_594;
  char local_42e [350];
  char local_2d0 [350];
  char local_172 [350];
  UINT local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 local_8;
  undefined3 uStack_7;
  int local_4;
  
  local_4 = 0xffffffff;
  local_8 = 0xf9;
  uStack_7 = 0x100289;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CString::CString((CString *)&local_8f4);
  local_4 = 0;
  CFile::CFile(local_8d8);
  local_4._0_1_ = 1;
  iVar3 = FUN_10017030(0xb5);
  if (iVar3 == 1) {
    local_8b4 = FUN_1001fe60(*(void **)((int)this + 0xdc),0x10038758,s_IMAGE_10038760);
    local_8b8 = FUN_1001fe60(*(void **)((int)this + 0xdc),0x10038758,s_OVERLAY_10038750);
    local_8bc = FUN_1001fe60(*(void **)((int)this + 0xdc),0x10038758,s_ANNOTATION_10038744);
    local_8b0 = FUN_1001fe60(*(void **)((int)this + 0xdc),0x10038758,s_TRANSFORM_10038738);
    uVar5 = FUN_1000f580(this,(int *)&local_8bc);
  }
  else if (iVar3 == 2) {
    local_5c8 = FUN_1001fe60(*(void **)((int)this + 0xdc),0x10038870,s_IMAGE_TYPE_1003887c);
    local_5bc = FUN_1001fe60(*(void **)((int)this + 0xdc),0x10038870,s_IMAGE_10038760);
    local_5c0 = FUN_1001fe60(*(void **)((int)this + 0xdc),0x10038870,s_OVERLAY_10038750);
    local_5c4 = FUN_1001fe60(*(void **)((int)this + 0xdc),0x10038870,s_ANNOTATION_10038744);
    local_5b8 = FUN_1001fe60(*(void **)((int)this + 0xdc),0x10038870,s_REDUCTION_10038864);
    local_5b0 = FUN_1001fe60(*(void **)((int)this + 0xdc),0x10038870,&DAT_10038860);
    local_5a8 = FUN_1001fe60(*(void **)((int)this + 0xdc),0x10038870,s_BOTTOM_10038858);
    local_5b4 = FUN_1001fe60(*(void **)((int)this + 0xdc),0x10038870,&DAT_10038850);
    local_5ac = FUN_1001fe60(*(void **)((int)this + 0xdc),0x10038870,s_RIGHT_10038848);
    local_5a4 = FUN_1001fe60(*(void **)((int)this + 0xdc),0x10038870,s_PALLETTE_1003883c);
    local_5a0 = FUN_1001fe60(*(void **)((int)this + 0xdc),0x10038870,s_TRANSFORM_10038738);
    local_59c = FUN_1001fe60(*(void **)((int)this + 0xdc),0x10038870,s_NAME_FORMAT_10038830);
    local_598 = FUN_1001fe60(*(void **)((int)this + 0xdc),0x10038870,s_DIGITS_10038828);
    local_594 = FUN_1001fe60(*(void **)((int)this + 0xdc),0x10038870,s_NUMERIC_10038820);
    pCVar4 = (CString *)
             FUN_1001fbe0(*(void **)((int)this + 0xdc),local_8e4,s_TIFF_EXPORT_10038870,
                          s_USER_TEXT_100387f8);
    local_4._0_1_ = 4;
    CString::operator=((CString *)&local_8f4,pCVar4);
    local_4 = CONCAT31(local_4._1_3_,1);
    CString::~CString(local_8e4);
    uVar5 = 0xffffffff;
    pcVar7 = local_8f4;
    do {
      pcVar8 = pcVar7;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar8 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar8;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    pcVar7 = pcVar8 + -uVar5;
    pcVar8 = local_42e;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar8 = pcVar8 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar8 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar8 = pcVar8 + 1;
    }
    pCVar4 = (CString *)
             FUN_1001fbe0(*(void **)((int)this + 0xdc),local_8c8,s_TIFF_EXPORT_10038870,
                          s_DATAFILE_100387ec);
    local_4._0_1_ = 5;
    CString::operator=((CString *)&local_8f4,pCVar4);
    local_4 = CONCAT31(local_4._1_3_,1);
    CString::~CString(local_8c8);
    uVar5 = 0xffffffff;
    pcVar7 = local_8f4;
    do {
      pcVar8 = pcVar7;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar8 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar8;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    pcVar7 = pcVar8 + -uVar5;
    pcVar8 = local_2d0;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar8 = pcVar8 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar8 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar8 = pcVar8 + 1;
    }
    pCVar4 = (CString *)
             FUN_1001fbe0(*(void **)((int)this + 0xdc),local_8c0,s_TIFF_EXPORT_10038870,
                          s_BASENAME_100387e0);
    local_4._0_1_ = 6;
    CString::operator=((CString *)&local_8f4,pCVar4);
    local_4._0_1_ = 1;
    CString::~CString(local_8c0);
    uVar5 = 0xffffffff;
    do {
      pcVar7 = local_8f4;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar7 = local_8f4 + 1;
      cVar1 = *local_8f4;
      local_8f4 = pcVar7;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    pcVar7 = pcVar7 + -uVar5;
    pcVar8 = local_172;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar8 = pcVar8 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar8 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar8 = pcVar8 + 1;
    }
    local_14 = FUN_1001fe60(*(void **)((int)this + 0xdc),0x10038870,s_QUALITY_100387d8);
    local_10 = 0;
    FUN_10016990((int *)&local_5c8);
    pCVar4 = (CString *)operator+(local_8e0,(char *)((int)this + 200));
    local_8 = 7;
    CString::operator=((CString *)&stack0xfffff708,pCVar4);
    local_8 = 1;
    CString::~CString(local_8e4);
    iVar3 = CFile::Open((CFile *)local_8dc,unaff_EBX,0,(CFileException *)0x0);
    if (iVar3 != 0) {
      CFile::Close((CFile *)local_8dc);
      CString::CString((CString *)&local_8ec);
      local_8 = 8;
      CString::CString((CString *)&local_8f0);
      local_8 = 9;
      CString::CString((CString *)&local_8f4);
      local_8 = 10;
      CString::LoadStringA((CString *)&local_8ec,2);
      CString::LoadStringA((CString *)&local_8f0,1);
      CString::Format(local_8ec,(char *)&local_8f4);
      MessageBeep(0x30);
      iVar3 = MessageBoxA((HWND)0x0,local_8f0,(LPCSTR)local_8ec,0x1134);
      local_4._0_1_ = 9;
      uVar2 = (undefined1)local_4;
      local_4._0_1_ = 9;
      if (iVar3 == 7) {
        CString::~CString((CString *)&local_8f0);
        local_4._0_1_ = 8;
        CString::~CString((CString *)&local_8ec);
        local_4._0_1_ = 1;
        CString::~CString(local_8e8);
        goto LAB_10016237;
      }
      local_4._0_1_ = uVar2;
      CString::~CString((CString *)&local_8f0);
      local_4._0_1_ = 8;
      CString::~CString((CString *)&local_8ec);
      local_4._0_1_ = 1;
      CString::~CString(local_8e8);
    }
    uVar5 = FUN_1001aab0(this,(int *)&local_5c8,param_1);
    iVar3 = FUN_10016e90((int)&local_5c8);
    FUN_1001fd90(*(void **)((int)this + 0xdc),s_TIFF_EXPORT_10038870,s_NUMERIC_10038820);
    PMNotifyImexDone(2,iVar3);
  }
  else {
    if (iVar3 != 3) {
LAB_10016237:
      local_4 = (uint)local_4._1_3_ << 8;
      CFile::~CFile(local_8d8);
      local_4 = 0xffffffff;
      CString::~CString((CString *)&local_8f4);
      ExceptionList = local_c;
      return 0;
    }
    local_89c = FUN_1001fe60(*(void **)((int)this + 0xdc),0x100387bc,s_IMAGE_10038760);
    local_898 = FUN_1001fe60(*(void **)((int)this + 0xdc),0x100387bc,s_OVERLAY_10038750);
    local_894 = FUN_1001fe60(*(void **)((int)this + 0xdc),0x100387bc,s_ANNOTATION_10038744);
    local_8ac = FUN_1001fe60(*(void **)((int)this + 0xdc),0x100387bc,s_POSITION_100387b0);
    local_8a8 = FUN_1001fe60(*(void **)((int)this + 0xdc),0x100387bc,s_ORIENTATION_100387a4);
    local_8a4 = FUN_1001fe60(*(void **)((int)this + 0xdc),0x100387bc,&DAT_1003879c);
    local_8a0 = FUN_1001fe60(*(void **)((int)this + 0xdc),0x100387bc,s_COLOUR_10038794);
    local_890 = FUN_1001fe60(*(void **)((int)this + 0xdc),0x100387bc,s_COLOURMERGE_10038788);
    pCVar4 = (CString *)
             FUN_1001fbe0(*(void **)((int)this + 0xdc),local_8c4,s_PRINT_IMAGE_100387bc,
                          s_DRIVERNAME_1003877c);
    local_4._0_1_ = 2;
    CString::operator=((CString *)&local_8f4,pCVar4);
    local_4 = CONCAT31(local_4._1_3_,1);
    CString::~CString(local_8c4);
    uVar5 = 0xffffffff;
    pcVar7 = local_8f4;
    do {
      pcVar8 = pcVar7;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar8 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar8;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    pcVar7 = pcVar8 + -uVar5;
    pcVar8 = local_88c;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar8 = pcVar8 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar8 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar8 = pcVar8 + 1;
    }
    pCVar4 = (CString *)
             FUN_1001fbe0(*(void **)((int)this + 0xdc),local_8dc,s_PRINT_IMAGE_100387bc,
                          s_DEVICENAME_10038770);
    local_4._0_1_ = 3;
    CString::operator=((CString *)&local_8f4,pCVar4);
    local_4._0_1_ = 1;
    CString::~CString(local_8dc);
    uVar5 = 0xffffffff;
    do {
      pcVar7 = local_8f4;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar7 = local_8f4 + 1;
      cVar1 = *local_8f4;
      local_8f4 = pcVar7;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    pcVar7 = pcVar7 + -uVar5;
    pcVar8 = local_72e;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar8 = pcVar8 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar8 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar8 = pcVar8 + 1;
    }
    local_5d0 = 0;
    local_5cc = 0;
    uVar5 = FUN_10012820(this,(int *)&local_8ac);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  CFile::~CFile(local_8d8);
  local_4 = 0xffffffff;
  CString::~CString((CString *)&local_8f4);
  ExceptionList = local_c;
  return uVar5;
}


// ---- FUN_10016990 @ 10016990

void FUN_10016990(int *param_1)

{
  char cVar1;
  CString *this;
  CString *pCVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  int unaff_EDI;
  int iVar6;
  int *piVar7;
  char *pcVar8;
  CString *local_30;
  CString local_2c [4];
  char *local_28;
  int local_24;
  CString local_20 [4];
  CString local_1c [4];
  CString local_18 [4];
  CString local_14 [4];
  CString local_10 [4];
  void *local_c;
  undefined1 *local_8;
  int local_4;
  
  local_4 = 0xffffffff;
  local_8 = &LAB_10028a70;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CString::CString(local_10);
  local_4 = 0;
  CString::CString((CString *)&local_30);
  local_4._0_1_ = 1;
  CString::CString(local_14);
  local_4._0_1_ = 2;
  CString::CString(local_18);
  local_4._0_1_ = 3;
  CString::CString(local_1c);
  local_4._0_1_ = 4;
  CString::CString((CString *)&local_28);
  local_4._0_1_ = 5;
  CString::CString(local_20);
  local_4._0_1_ = 6;
  CString::CString(local_2c);
  piVar7 = param_1;
  local_4._0_1_ = 7;
  CString::CString((CString *)&local_24,(char *)((int)param_1 + 0x456));
  local_4._0_1_ = 8;
  if (*piVar7 == 4) {
    pcVar8 = &DAT_100388b0;
  }
  else if (*piVar7 == 5) {
    pcVar8 = &DAT_100388a8;
  }
  else {
    pcVar8 = &DAT_100388a0;
  }
  CString::operator=((CString *)&local_30,pcVar8);
  iVar6 = piVar7[0xb];
  pCVar2 = (CString *)piVar7[0xc];
  if (iVar6 == 0) {
    FUN_10016cd0(&param_1,pCVar2,unaff_EDI);
    local_4._0_1_ = 9;
    CString::Format((CString *)&local_28,(char *)&local_28);
    CString::~CString((CString *)&stack0x00000008);
  }
  else if (iVar6 < 0) {
    FUN_10016db0(&param_1,pCVar2,unaff_EDI);
    local_4._0_1_ = 10;
    CString::Format(local_30,(char *)&local_28);
    CString::~CString((CString *)&stack0x00000008);
  }
  else {
    this = *(CString **)(local_24 + -8);
    if ((this == (CString *)0x0) || (iVar6 - (int)pCVar2 < (int)this)) {
      CString::operator=((CString *)&local_28,&DAT_10039fec);
    }
    else {
      CString::Format(this,(char *)local_2c);
      if ((*(int *)(local_28 + -8) < (int)pCVar2) &&
         (iVar6 = (int)pCVar2 - *(int *)(local_28 + -8), 0 < iVar6)) {
        do {
          pCVar2 = (CString *)operator+((char *)&param_1,(CString *)&DAT_10038890);
          local_8._0_1_ = 0xb;
          CString::operator=((CString *)&local_30,pCVar2);
          local_8 = (undefined1 *)CONCAT31(local_8._1_3_,8);
          CString::~CString((CString *)&stack0x00000000);
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      CString::Format(local_2c,(char *)local_2c);
    }
  }
  uVar3 = 0xffffffff;
  do {
    pcVar8 = local_28;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar8 = local_28 + 1;
    cVar1 = *local_28;
    local_28 = pcVar8;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  local_4._0_1_ = 7;
  piVar5 = (int *)(pcVar8 + -uVar3);
  piVar7 = piVar7 + 0xf;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *piVar7 = *piVar5;
    piVar5 = piVar5 + 1;
    piVar7 = piVar7 + 1;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(char *)piVar7 = (char)*piVar5;
    piVar5 = (int *)((int)piVar5 + 1);
    piVar7 = (int *)((int)piVar7 + 1);
  }
  CString::~CString((CString *)&local_24);
  local_4._0_1_ = 6;
  CString::~CString(local_2c);
  local_4._0_1_ = 5;
  CString::~CString(local_20);
  local_4._0_1_ = 4;
  CString::~CString((CString *)&local_28);
  local_4._0_1_ = 3;
  CString::~CString(local_1c);
  local_4._0_1_ = 2;
  CString::~CString(local_18);
  local_4._0_1_ = 1;
  CString::~CString(local_14);
  local_4 = (uint)local_4._1_3_ << 8;
  CString::~CString((CString *)&local_30);
  local_4 = 0xffffffff;
  CString::~CString(local_10);
  ExceptionList = local_c;
  return;
}


// ---- FUN_10016c50 @ 10016c50

void FUN_10016c50(void)

{
  undefined4 local_4;
  
  FUN_10017050(3.16693e-43);
  local_4 = ftol();
  local_4 = local_4 + 1;
  if (9999 < local_4) {
    local_4 = 0;
  }
  FUN_10017070(0xe2,(float)local_4);
  return;
}


// ---- FUN_10016c90 @ 10016c90

void FUN_10016c90(void)

{
  undefined4 local_4;
  
  FUN_10017050(6.12367e-43);
  local_4 = ftol();
  local_4 = local_4 + 1;
  if (9999999 < local_4) {
    local_4 = 0;
  }
  FUN_10017070(0x1b5,(float)local_4);
  return;
}


// ---- FUN_10016cd0 @ 10016cd0

CString * FUN_10016cd0(undefined4 param_1,CString *param_2,int param_3)

{
  CString *pCVar1;
  CString *this;
  int iVar2;
  CString local_14 [4];
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10028aa7;
  local_c = ExceptionList;
  local_10 = 0;
  ExceptionList = &local_c;
  FUN_10017050(3.16693e-43);
  ftol();
  CString::CString(local_14);
  local_4 = 1;
  CString::Format(this,(char *)local_14);
  if ((*(int *)(local_10 + -8) < param_3) && (iVar2 = param_3 - *(int *)(local_10 + -8), 0 < iVar2))
  {
    do {
      pCVar1 = (CString *)operator+((char *)&param_3,(CString *)&DAT_10038890);
      local_4._0_1_ = 2;
      CString::operator=(local_14,pCVar1);
      local_4 = CONCAT31(local_4._1_3_,1);
      CString::~CString((CString *)&param_2);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  pCVar1 = param_2;
  CString::CString(param_2,(CString *)&local_10);
  local_c = (void *)0x1;
  CString::~CString((CString *)&local_10);
  ExceptionList = puStack_8;
  return pCVar1;
}


// ---- FUN_10016db0 @ 10016db0

CString * FUN_10016db0(undefined4 param_1,CString *param_2,int param_3)

{
  CString *pCVar1;
  CString *this;
  int iVar2;
  CString local_14 [4];
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10028ae7;
  local_c = ExceptionList;
  local_10 = 0;
  ExceptionList = &local_c;
  FUN_10017050(6.12367e-43);
  ftol();
  CString::CString(local_14);
  local_4 = 1;
  CString::Format(this,(char *)local_14);
  if ((*(int *)(local_10 + -8) < param_3) && (iVar2 = param_3 - *(int *)(local_10 + -8), 0 < iVar2))
  {
    do {
      pCVar1 = (CString *)operator+((char *)&param_3,(CString *)&DAT_10038890);
      local_4._0_1_ = 2;
      CString::operator=(local_14,pCVar1);
      local_4 = CONCAT31(local_4._1_3_,1);
      CString::~CString((CString *)&param_2);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  pCVar1 = param_2;
  CString::CString(param_2,(CString *)&local_10);
  local_c = (void *)0x1;
  CString::~CString((CString *)&local_10);
  ExceptionList = puStack_8;
  return pCVar1;
}


// ---- FUN_10016e90 @ 10016e90

int FUN_10016e90(int param_1)

{
  int iVar1;
  int iVar2;
  CString *pCVar3;
  int local_1c;
  CHAR local_18 [12];
  void *local_c;
  undefined1 *local_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  local_8 = &LAB_10028b10;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CString::CString((CString *)&local_1c);
  local_4 = 0;
  if (0 < *(int *)(param_1 + 0x2c)) {
    iVar2 = *(int *)(param_1 + 0x30);
    iVar1 = 0;
    switch(iVar2) {
    case 0:
    case 1:
      iVar1 = 9;
      break;
    case 2:
      iVar1 = 99;
      break;
    case 3:
      iVar1 = 999;
      break;
    case 4:
      iVar1 = 9999;
      break;
    case 5:
      iVar1 = 99999;
      break;
    case 6:
      iVar1 = 999999;
      break;
    case 7:
      iVar1 = 9999999;
      break;
    case 8:
      iVar1 = 99999999;
    }
    if (*(int *)(param_1 + 0x34) < iVar1) {
      iVar1 = *(int *)(param_1 + 0x34) + 1;
    }
    else {
      iVar1 = 0;
    }
    *(int *)(param_1 + 0x34) = iVar1;
    wsprintfA(local_18,&DAT_10038894,iVar1);
    CString::operator=((CString *)&local_1c,local_18);
    if ((*(int *)(local_1c + -8) < iVar2) && (iVar2 = iVar2 - *(int *)(local_1c + -8), 0 < iVar2)) {
      do {
        pCVar3 = (CString *)operator+((char *)&param_1,(CString *)&DAT_10038890);
        local_8._0_1_ = 1;
        CString::operator=((CString *)&stack0xffffffe0,pCVar3);
        local_8 = (undefined1 *)((uint)local_8._1_3_ << 8);
        CString::~CString((CString *)&stack0x00000000);
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    local_4 = 0xffffffff;
    CString::~CString((CString *)&local_1c);
    ExceptionList = local_c;
    return iVar1;
  }
  local_4 = 0xffffffff;
  CString::~CString((CString *)&local_1c);
  ExceptionList = local_c;
  return -1;
}


// ---- FUN_10017000 @ 10017000

void FUN_10017000(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_10017030(0x76);
  SRV_Set_State(0x76,2);
  SRV_Execute_Command(0x4b);
  SRV_Set_State(0x76,uVar1);
  return;
}


// ---- FUN_10017030 @ 10017030

undefined4 FUN_10017030(undefined4 param_1)

{
  undefined4 local_18 [6];
  
  local_18[0] = param_1;
  SRV_Get_State(local_18);
  return local_18[0];
}


// ---- FUN_10017050 @ 10017050

float10 FUN_10017050(float param_1)

{
  float local_c [3];
  
  local_c[0] = param_1;
  SRV_Get_Value(local_c);
  return (float10)local_c[0];
}


// ---- FUN_10017070 @ 10017070

void FUN_10017070(undefined4 param_1,float param_2)

{
  double local_8;
  
  local_8 = (double)param_2;
  SRV_Set_Value(param_1,&local_8);
  return;
}


// ---- FUN_10017090 @ 10017090

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_10017090(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_10017030(99);
  switch(uVar1) {
  default:
    return (float10)_DAT_1002a33c;
  case 1:
    return (float10)_DAT_1002a338;
  case 2:
    return (float10)_DAT_1002a344;
  case 3:
    return (float10)_DAT_1002a340;
  }
}


// ---- FUN_100170d0 @ 100170d0

CString * FUN_100170d0(CString *param_1)

{
  DWORD DVar1;
  UINT UVar2;
  CString local_11c [4];
  LPCSTR local_118;
  undefined4 local_114;
  CHAR local_110 [260];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10028b50;
  local_c = ExceptionList;
  local_114 = 0;
  ExceptionList = &local_c;
  CString::CString(local_11c);
  local_4 = 1;
  DVar1 = GetTempPathA(0x104,local_110);
  if ((DVar1 == 0) || (0x104 < DVar1)) {
    CString::CString(param_1,local_11c);
    local_114 = 1;
  }
  else {
    CString::CString((CString *)&local_118,local_110);
    local_4 = CONCAT31(local_4._1_3_,2);
    UVar2 = GetTempFileNameA(local_118,&DAT_100388b8,0,local_110);
    if (UVar2 != 0) {
      CString::operator=(local_11c,local_110);
    }
    CString::CString(param_1,local_11c);
    local_114 = 1;
    local_4 = CONCAT31(local_4._1_3_,1);
    CString::~CString((CString *)&local_118);
  }
  local_4 = local_4 & 0xffffff00;
  CString::~CString(local_11c);
  ExceptionList = local_c;
  return param_1;
}


// ---- FUN_100171e0 @ 100171e0

bool FUN_100171e0(LPCSTR param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10)

{
  int iVar1;
  undefined4 local_30 [2];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  ATOM local_8;
  undefined4 local_4;
  
  local_20 = param_4;
  local_28 = param_2;
  local_24 = param_3;
  local_14 = param_7;
  local_1c = param_5;
  local_18 = param_6;
  local_30[0] = 0;
  local_10 = param_8;
  local_c = param_9;
  local_8 = GlobalAddAtomA(param_1);
  local_4 = param_10;
  iVar1 = SRV_Import_Export(local_30);
  return (bool)('\x01' - (iVar1 != 0));
}


// ---- FUN_10017260 @ 10017260

bool FUN_10017260(LPCSTR param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9)

{
  int iVar1;
  undefined4 local_30 [4];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  ATOM local_8;
  
  local_20 = param_4;
  local_1c = param_5;
  local_14 = param_7;
  local_18 = param_6;
  local_30[0] = 1;
  local_10 = param_8;
  local_c = param_9;
  local_8 = GlobalAddAtomA(param_1);
  iVar1 = SRV_Import_Export(local_30);
  return (bool)('\x01' - (iVar1 != 0));
}


// ---- FUN_100172c0 @ 100172c0

undefined4 FUN_100172c0(undefined4 param_1,void *param_2,LPCSTR param_3)

{
  int iVar1;
  undefined4 local_3c [2];
  undefined4 local_34;
  ATOM local_14;
  void *local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_10028b68;
  pvStack_c = ExceptionList;
  local_34 = param_1;
  local_3c[0] = 2;
  local_10 = param_2;
  if (*(int *)(param_3 + -8) == 0) {
    local_14 = 0;
    ExceptionList = &pvStack_c;
  }
  else {
    ExceptionList = &pvStack_c;
    local_14 = GlobalAddAtomA(param_3);
  }
  iVar1 = SRV_Import_Export(local_3c);
  puStack_8 = (undefined1 *)0xffffffff;
  if (iVar1 == 0) {
    CString::~CString((CString *)&param_2);
    ExceptionList = local_10;
    return 1;
  }
  CString::~CString((CString *)&param_2);
  ExceptionList = local_10;
  return 0;
}


// ---- FUN_10017360 @ 10017360

bool FUN_10017360(LPCSTR param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 local_30 [2];
  undefined4 local_28;
  ATOM local_8;
  undefined4 local_4;
  
  local_30[0] = 3;
  local_28 = param_2;
  local_8 = GlobalAddAtomA(param_1);
  local_4 = 0;
  iVar1 = SRV_Import_Export(local_30);
  return (bool)('\x01' - (iVar1 != 0));
}


// ---- FUN_100173a0 @ 100173a0

undefined4 FUN_100173a0(undefined4 param_1,uint param_2,LPCSTR param_3)

{
  HGLOBAL pvVar1;
  SIZE_T SVar2;
  undefined1 uVar3;
  uint uVar4;
  LPVOID pvVar5;
  undefined4 *lpBuffer;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  HANDLE hFile;
  BOOL BVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined4 *puVar12;
  int iVar13;
  HGLOBAL local_50;
  uint local_4c;
  undefined4 local_48;
  HGLOBAL local_44;
  int local_40;
  int local_3c;
  SIZE_T local_38;
  DWORD local_34;
  _SECURITY_ATTRIBUTES local_30;
  uint local_20;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_10028b90;
  local_c = ExceptionList;
  local_4 = 1;
  local_48 = 1;
  ExceptionList = &local_c;
  uVar4 = FUN_10017700(&param_1,&local_50);
  if ((uVar4 != 0) && (pvVar5 = GlobalLock(local_50), pvVar5 != (LPVOID)0x0)) {
    if (*(short *)((int)pvVar5 + 0xe) == 8) {
      local_20 = *(uint *)((int)pvVar5 + 4) / param_2;
      if (local_20 == 0) {
        local_20 = 1;
      }
      uVar4 = *(uint *)((int)pvVar5 + 8) / param_2;
      if (uVar4 == 0) {
        uVar4 = 1;
      }
      iVar13 = local_20 * 8 + 0x1f;
      local_40 = *(int *)((int)pvVar5 + 0x20) * 4 + 0x28;
      iVar13 = ((int)(iVar13 + (iVar13 >> 0x1f & 0x1fU)) >> 5) * 4 * uVar4;
      local_38 = iVar13 + 0x428;
      local_44 = GlobalAlloc(2,local_38);
      if (local_44 == (HGLOBAL)0x0) {
        GlobalUnlock(local_50);
      }
      else {
        lpBuffer = GlobalLock(local_44);
        if (lpBuffer != (undefined4 *)0x0) {
          puVar12 = lpBuffer + 10;
          if (*(int *)((int)pvVar5 + 0x20) == 0) {
            iVar6 = 0;
            puVar10 = (undefined1 *)((int)lpBuffer + 0x29);
            do {
              uVar3 = (undefined1)iVar6;
              puVar10[1] = uVar3;
              *puVar10 = uVar3;
              puVar10[-1] = uVar3;
              iVar6 = iVar6 + 1;
              puVar10 = puVar10 + 4;
            } while (iVar6 < 0x100);
          }
          else {
            iVar6 = 0x28 - (int)puVar12;
            local_4c = 0x100;
            do {
              *puVar12 = *(undefined4 *)((int)pvVar5 + iVar6 + (int)puVar12);
              puVar12 = puVar12 + 1;
              local_4c = local_4c + -1;
            } while (local_4c != 0);
          }
          lpBuffer[8] = 0x100;
          lpBuffer[9] = 0x100;
          lpBuffer[5] = iVar13;
          lpBuffer[1] = local_20;
          lpBuffer[2] = uVar4;
          *lpBuffer = 0x28;
          *(undefined2 *)(lpBuffer + 3) = 1;
          *(undefined2 *)((int)lpBuffer + 0xe) = 8;
          lpBuffer[4] = 0;
          puVar10 = (undefined1 *)(local_40 + (int)pvVar5);
          if ((int)uVar4 < 0) {
            uVar4 = -uVar4;
          }
          uVar7 = local_20 & 0x80000003;
          if ((int)uVar7 < 0) {
            uVar7 = (uVar7 - 1 | 0xfffffffc) + 1;
          }
          local_3c = 0;
          if (uVar7 != 0) {
            local_3c = 4 - uVar7;
          }
          local_3c = local_3c + local_20;
          uVar7 = *(uint *)((int)pvVar5 + 4) & 0x80000003;
          if ((int)uVar7 < 0) {
            uVar7 = (uVar7 - 1 | 0xfffffffc) + 1;
          }
          iVar13 = 0;
          if (uVar7 != 0) {
            iVar13 = 4 - uVar7;
          }
          local_4c = uVar4;
          if (0 < (int)uVar4) {
            local_40 = (*(uint *)((int)pvVar5 + 4) + iVar13) * param_2;
            puVar12 = lpBuffer + 0x10a;
            do {
              puVar8 = puVar12;
              puVar11 = puVar10;
              uVar4 = local_20;
              if (0 < (int)local_20) {
                do {
                  *(undefined1 *)puVar8 = *puVar11;
                  uVar4 = uVar4 - 1;
                  puVar8 = (undefined4 *)((int)puVar8 + 1);
                  puVar11 = puVar11 + param_2;
                } while (uVar4 != 0);
              }
              puVar10 = puVar10 + local_40;
              puVar12 = (undefined4 *)((int)puVar12 + local_3c);
              local_4c = local_4c - 1;
            } while (local_4c != 0);
          }
          local_30.nLength = 0xc;
          local_30.lpSecurityDescriptor = (LPVOID)0x0;
          local_30.bInheritHandle = 1;
          hFile = CreateFileA(param_3,0x40000000,1,&local_30,2,0x80000080,(HANDLE)0x0);
          SVar2 = local_38;
          pvVar1 = local_44;
          if (hFile == (HANDLE)0xffffffff) {
            GlobalUnlock(local_44);
            GlobalFree(pvVar1);
            GlobalUnlock(local_50);
            GlobalFree(local_50);
            local_4 = local_4 & 0xffffff00;
            CString::~CString((CString *)&param_1);
            local_4 = 0xffffffff;
            CString::~CString((CString *)&param_3);
            ExceptionList = local_c;
            return 0;
          }
          BVar9 = WriteFile(hFile,lpBuffer,local_38,&local_34,(LPOVERLAPPED)0x0);
          if ((BVar9 != 1) || (local_34 != SVar2)) {
            local_48 = 0;
          }
          BVar9 = CloseHandle(hFile);
          pvVar1 = local_44;
          if (BVar9 == 0) {
            local_48 = 0;
          }
          GlobalUnlock(local_44);
          GlobalFree(pvVar1);
          GlobalUnlock(local_50);
          GlobalFree(local_50);
          local_4 = local_4 & 0xffffff00;
          CString::~CString((CString *)&param_1);
          local_4 = 0xffffffff;
          CString::~CString((CString *)&param_3);
          ExceptionList = local_c;
          return local_48;
        }
        GlobalUnlock(local_50);
      }
    }
    else {
      GlobalUnlock(local_50);
    }
    GlobalFree(local_50);
  }
  local_4 = local_4 & 0xffffff00;
  CString::~CString((CString *)&param_1);
  local_4 = 0xffffffff;
  CString::~CString((CString *)&param_3);
  ExceptionList = local_c;
  return 0;
}


// ---- FUN_10017700 @ 10017700

uint FUN_10017700(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  HANDLE hFile;
  HGLOBAL pvVar3;
  int *piVar4;
  BOOL BVar5;
  uint uVar6;
  DWORD nNumberOfBytesToRead;
  uint local_20;
  _SECURITY_ATTRIBUTES local_1c;
  short local_10 [5];
  int local_6;
  
  local_20 = 0;
  local_1c.nLength = 0xc;
  local_1c.lpSecurityDescriptor = (LPVOID)0x0;
  local_1c.bInheritHandle = 1;
  hFile = CreateFileA((LPCSTR)*param_1,0x80000000,0,&local_1c,3,0x8000080,(HANDLE)0x0);
  if (hFile == (HANDLE)0xffffffff) {
    return 0;
  }
  pvVar3 = GlobalAlloc(0x2002,0x428);
  *param_2 = pvVar3;
  piVar4 = GlobalLock(pvVar3);
  BVar5 = ReadFile(hFile,local_10,0xe,(LPDWORD)&param_1,(LPOVERLAPPED)0x0);
  if ((BVar5 != 0) && (local_10[0] == 0x4d42)) {
    BVar5 = ReadFile(hFile,piVar4,0x28,(LPDWORD)&param_1,(LPOVERLAPPED)0x0);
    if ((BVar5 != 0) && (*piVar4 != 0xc)) {
      uVar6 = (uint)*(ushort *)(piVar4 + 8);
      if ((*(ushort *)(piVar4 + 8) == 0) && (*(short *)((int)piVar4 + 0xe) != 0x18)) {
        uVar6 = 1 << ((byte)*(short *)((int)piVar4 + 0xe) & 0x1f);
      }
      if (piVar4[8] == 0) {
        piVar4[8] = uVar6 & 0xffff;
      }
      if (piVar4[5] == 0) {
        piVar4[5] = ((uint)*(ushort *)((int)piVar4 + 0xe) * piVar4[1] + 0x1f >> 3 & 0x1ffffffc) *
                    piVar4[2];
      }
      GlobalUnlock((HGLOBAL)*param_2);
      puVar2 = param_2;
      nNumberOfBytesToRead = (uVar6 & 0xffff) * 4;
      pvVar3 = GlobalReAlloc((HGLOBAL)*param_2,*piVar4 + nNumberOfBytesToRead + piVar4[5],0);
      *puVar2 = pvVar3;
      if (pvVar3 == (HGLOBAL)0x0) goto LAB_100178b1;
      piVar4 = GlobalLock(pvVar3);
      BVar5 = ReadFile(hFile,(LPVOID)(*piVar4 + (int)piVar4),nNumberOfBytesToRead,(LPDWORD)&param_1,
                       (LPOVERLAPPED)0x0);
      if (BVar5 != 0) {
        iVar1 = *piVar4;
        if (local_6 != 0) {
          SetFilePointer(hFile,local_6,(PLONG)0x0,0);
        }
        local_20 = ReadFile(hFile,(LPVOID)((uint)(ushort)((short)uVar6 * 4 + (short)iVar1) +
                                          (int)piVar4),piVar4[5],(LPDWORD)&param_1,(LPOVERLAPPED)0x0
                           );
      }
    }
  }
  CloseHandle(hFile);
  GlobalUnlock((HGLOBAL)*param_2);
LAB_100178b1:
  return local_20 & 0xffff;
}


// ---- FUN_100178d0 @ 100178d0

undefined4 FUN_100178d0(HGLOBAL param_1,int *param_2,HDC__ *param_3)

{
  WORD WVar1;
  int SrcHeight;
  BITMAPINFO *lpbmi;
  uint uVar2;
  HDC__ *pHVar3;
  int iVar4;
  int DestHeight;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  CDC local_30 [4];
  HDC local_2c;
  DOCINFOA local_20;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10028ba8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  lpbmi = GlobalLock(param_1);
  if ((lpbmi != (BITMAPINFO *)0x0) && (param_3 != (HDC__ *)0x0)) {
    uVar2 = 0;
    if ((lpbmi->bmiHeader).biClrUsed == 0) {
      WVar1 = (lpbmi->bmiHeader).biBitCount;
      if (WVar1 == 1) {
        uVar2 = 2;
      }
      else if (WVar1 == 4) {
        uVar2 = 0x10;
      }
      else if (WVar1 == 8) {
        uVar2 = 0x100;
      }
    }
    else {
      uVar2 = (uint)(ushort)(lpbmi->bmiHeader).biClrUsed;
    }
    CDC::CDC(local_30);
    local_4 = 0;
    CDC::Attach(local_30,param_3);
    pHVar3 = (HDC__ *)GetDeviceCaps(param_3,8);
    iVar4 = GetDeviceCaps(param_3,10);
    iVar8 = (lpbmi->bmiHeader).biWidth;
    SrcHeight = (lpbmi->bmiHeader).biHeight;
    if (param_2[2] == 0) {
      DestHeight = ftol();
      param_3 = pHVar3;
      if (iVar4 < DestHeight) {
        param_3 = (HDC__ *)ftol();
        DestHeight = iVar4;
      }
    }
    else {
      param_3 = (HDC__ *)ftol();
      DestHeight = ftol();
    }
    uVar5 = ((int)pHVar3 - (int)param_3) / 2;
    uVar9 = (int)uVar5 >> 0x1f;
    iVar7 = *param_2;
    if (iVar7 == 0) {
      iVar4 = 0;
    }
    else if (iVar7 == 1) {
      uVar6 = (iVar4 - DestHeight) / 2;
      uVar10 = (int)uVar6 >> 0x1f;
      iVar4 = (uVar6 ^ uVar10) - uVar10;
    }
    else if (iVar7 == 2) {
      uVar6 = iVar4 - DestHeight >> 0x1f;
      iVar4 = (iVar4 - DestHeight ^ uVar6) - uVar6;
    }
    else {
      uVar6 = (iVar4 - DestHeight) / 2;
      uVar10 = (int)uVar6 >> 0x1f;
      iVar4 = (uVar6 ^ uVar10) - uVar10;
    }
    local_20.lpszDatatype = (LPCSTR)0x0;
    local_20.cbSize = 0x14;
    local_20.fwType = 0;
    local_20.lpszDocName = s_LEO_SEM_Image_100388bc;
    local_20.lpszOutput = (LPCSTR)0x0;
    iVar7 = StartDocA(local_2c,&local_20);
    if (0 < iVar7) {
      StartPage(local_2c);
      StretchDIBits((HDC)(-(uint)(&stack0x00000000 != (undefined1 *)0x30) & (uint)local_2c),
                    (uVar5 ^ uVar9) - uVar9,iVar4,(int)param_3,DestHeight,0,0,iVar8,SrcHeight,
                    lpbmi->bmiColors + uVar2,lpbmi,0,0xcc0020);
      iVar8 = EndPage(local_2c);
      if (iVar8 < 1) {
        AbortDoc(local_2c);
      }
      else {
        EndDoc(local_2c);
      }
    }
    CDC::Detach(local_30);
    operator_delete((void *)(-(uint)(&stack0x00000000 != (undefined1 *)0x30) & (uint)local_2c));
    GlobalUnlock(param_1);
    GlobalFree(param_1);
    local_4 = 0xffffffff;
    CDC::~CDC(local_30);
    ExceptionList = local_c;
    return 1;
  }
  GlobalUnlock(param_1);
  GlobalFree(param_1);
  ExceptionList = local_c;
  return 0;
}


// ---- FUN_10017b90 @ 10017b90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_10017b90(HDC param_1,float param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  
  iVar1 = GetDeviceCaps(param_1,8);
  iVar2 = GetDeviceCaps(param_1,10);
  GetDeviceCaps(param_1,0x58);
  iVar3 = GetDeviceCaps(param_1,0x5a);
  if (param_2 == _DAT_1002a358) {
    fVar4 = (float10)iVar1 * (float10)_DAT_1002a354;
    if ((float10)iVar2 < fVar4) {
      fVar4 = (float10)iVar2;
    }
  }
  else {
    fVar4 = (float10)param_2 * (float10)_DAT_1002a350;
  }
  return ((float10)_DAT_1002a34c / (float10)iVar3) * fVar4 * (float10)_DAT_1002a348;
}


// ---- FUN_10017c20 @ 10017c20

void __thiscall FUN_10017c20(void *this,uint param_1,LPARAM param_2,uint param_3)

{
  SendMessageA(*(HWND *)((int)this + 0xd0),0x4d3,param_1 & 0x3ff ^ param_3 & 0xfc00,param_2);
  return;
}


// ---- FUN_1001aab0 @ 1001aab0

uint __thiscall FUN_1001aab0(void *this,int *param_1,undefined4 *param_2)

{
  void *this_00;
  undefined1 *puVar1;
  undefined1 uVar2;
  bool bVar3;
  int iVar4;
  UINT UVar5;
  int iVar6;
  CString *pCVar7;
  undefined3 extraout_var;
  int *piVar8;
  undefined3 extraout_var_00;
  LPCSTR extraout_ECX;
  LPCSTR extraout_ECX_00;
  LPCSTR pCVar9;
  LPCSTR extraout_ECX_01;
  LPCSTR extraout_ECX_02;
  int extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  int *piVar10;
  float10 fVar11;
  int in_stack_fffffd50;
  undefined4 in_stack_fffffd54;
  undefined4 in_stack_fffffd58;
  undefined4 in_stack_fffffd5c;
  undefined4 in_stack_fffffd60;
  undefined4 in_stack_fffffd64;
  int *piVar12;
  uint uVar13;
  HGLOBAL *ppvVar14;
  char *pcVar15;
  undefined *puVar16;
  undefined4 uVar17;
  undefined4 *puVar18;
  int *piVar19;
  undefined4 local_280 [136];
  int local_60 [4];
  int local_50;
  int local_4c;
  int local_48;
  undefined4 local_44;
  int local_40;
  undefined1 local_3c [16];
  void *local_2c;
  undefined1 *local_28;
  HGLOBAL local_24;
  int *local_20;
  CString local_1c [4];
  LPCSTR local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10028c17;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffd74;
  ExceptionList = &local_10;
  local_2c = this;
  FUN_100170d0((CString *)&local_18);
  local_8 = 0;
  FUN_10004730(local_280);
  local_8._0_1_ = 1;
  local_28 = (undefined1 *)0x0;
  CString::CString(local_1c);
  piVar12 = param_1;
  local_8._0_1_ = 2;
  if (*(int *)(local_18 + -8) == 0) {
    FUN_10017c20(this,0x23e,0,0x1000);
    goto LAB_1001b1a6;
  }
  piVar8 = param_1 + 0xf;
  local_20 = piVar8;
  CString::operator=(local_1c,(char *)piVar8);
  iVar4 = CString::Find(local_1c,&DAT_100386dc);
  if (iVar4 == -1) {
    FUN_1001fd90(*(void **)((int)this + 0xdc),s_TIFF_EXPORT_10038870,s_IMAGE_TYPE_1003887c);
    FUN_1001fd90(*(void **)((int)this + 0xdc),s_TIFF_EXPORT_10038870,s_IMAGE_10038760);
    FUN_1001fd90(*(void **)((int)this + 0xdc),s_TIFF_EXPORT_10038870,s_OVERLAY_10038750);
    FUN_1001fd90(*(void **)((int)this + 0xdc),s_TIFF_EXPORT_10038870,s_ANNOTATION_10038744);
    FUN_1001fd90(*(void **)((int)this + 0xdc),s_TIFF_EXPORT_10038870,s_REDUCTION_10038864);
    FUN_1001fd90(*(void **)((int)this + 0xdc),s_TIFF_EXPORT_10038870,&DAT_10038860);
    FUN_1001fd90(*(void **)((int)this + 0xdc),s_TIFF_EXPORT_10038870,s_BOTTOM_10038858);
    FUN_1001fd90(*(void **)((int)this + 0xdc),s_TIFF_EXPORT_10038870,&DAT_10038850);
    FUN_1001fd90(*(void **)((int)this + 0xdc),s_TIFF_EXPORT_10038870,s_RIGHT_10038848);
    FUN_1001fd90(*(void **)((int)this + 0xdc),s_TIFF_EXPORT_10038870,s_PALLETTE_1003883c);
    FUN_1001fd90(*(void **)((int)this + 0xdc),s_TIFF_EXPORT_10038870,s_TRANSFORM_10038738);
    FUN_1001fd90(*(void **)((int)this + 0xdc),s_TIFF_EXPORT_10038870,s_NAME_FORMAT_10038830);
    FUN_1001fd90(*(void **)((int)this + 0xdc),s_TIFF_EXPORT_10038870,s_DIGITS_10038828);
    FUN_1001fd90(*(void **)((int)this + 0xdc),s_TIFF_EXPORT_10038870,s_NUMERIC_10038820);
    FUN_1001fd90(*(void **)((int)this + 0xdc),s_TIFF_EXPORT_10038870,s_COLOURMERGE_10038788);
    FUN_1001fcc0(*(void **)((int)this + 0xdc),(BYTE *)s_TIFF_EXPORT_10038870,s_FILENAME_100388f4);
    FUN_1001fcc0(*(void **)((int)this + 0xdc),(BYTE *)s_TIFF_EXPORT_10038870,s_USER_TEXT_100387f8);
    FUN_1001fcc0(*(void **)((int)this + 0xdc),(BYTE *)s_TIFF_EXPORT_10038870,s_BASENAME_100387e0);
    FUN_1001fd90(*(void **)((int)this + 0xdc),s_TIFF_EXPORT_10038870,s_QUALITY_100387d8);
    if (piVar12[0x16e] != 0) {
      DeleteFileA(local_18);
      goto LAB_1001b135;
    }
    FUN_10017030(0x118);
    param_1 = operator_new(0x14);
    local_8._0_1_ = 3;
    if (param_1 == (int *)0x0) {
      piVar19 = (int *)0x0;
      pCVar9 = extraout_ECX;
    }
    else {
      piVar19 = FUN_1001f9f0(param_1,s_LEO_Server_1003872c);
      pCVar9 = extraout_ECX_00;
    }
    pcVar15 = s_Write_10038724;
    param_1 = (int *)&stack0xfffffd68;
    local_8._0_1_ = 2;
    CString::CString((CString *)&stack0xfffffd68,s_Accounting_10038718);
    iVar4 = FUN_10020490(piVar19,pCVar9,pcVar15);
    puVar16 = &DAT_100388ec;
    if (iVar4 == 0) {
      UVar5 = FUN_1001fe60(piVar19,0x10038718,&DAT_100388ec);
    }
    else {
      param_1 = (int *)&stack0xfffffd68;
      pCVar9 = extraout_ECX_01;
      CString::CString((CString *)&stack0xfffffd68,s_Accounting_10038718);
      UVar5 = FUN_10020490(piVar19,pCVar9,puVar16);
    }
    param_1 = (int *)(UVar5 + 1);
    FUN_1001fd90(piVar19,s_Accounting_10038718,&DAT_100388ec);
    param_1 = (int *)&stack0xfffffd68;
    in_stack_fffffd60 = 0x1001ae04;
    pCVar9 = extraout_ECX_02;
    CString::CString((CString *)&stack0xfffffd68,s_Accounting_10038718);
    in_stack_fffffd64 = 0x1001ae0b;
    FUN_100203f0(piVar19,pCVar9);
    piVar8 = local_20;
    if (piVar19 != (int *)0x0) {
      (**(code **)(*piVar19 + 4))();
      piVar8 = local_20;
    }
  }
  else {
    local_28 = (undefined1 *)0x1;
  }
  param_1 = (int *)&stack0xfffffd70;
  CString::CString((CString *)&stack0xfffffd70,(char *)piVar8);
  uVar17 = 1;
  iVar4 = 0x1001ae2e;
  PMSetStringValue();
  piVar19 = (int *)0x1001ae35;
  FUN_10017000();
  local_60[1] = piVar12[3];
  local_60[0] = piVar12[2];
  local_50 = piVar12[6];
  local_4c = piVar12[7];
  local_60[2] = piVar12[4] + 1;
  local_60[3] = piVar12[5];
  local_44 = 1;
  local_48 = piVar12[8];
  local_40 = piVar12[10];
  if (*piVar12 == 4) {
    CString::operator=((CString *)&local_18,(char *)piVar8);
    piVar19 = (int *)0x3a;
    uVar17 = 0x1001ae87;
    iVar6 = CString::Find((CString *)&local_18,':');
    if (iVar6 == -1) {
      in_stack_fffffd64 = 0x1001ae9d;
      pCVar7 = (CString *)operator+((CString *)&param_1,(char *)((int)this + 200));
      local_8._0_1_ = 4;
      iVar4 = 0x1001aeaa;
      CString::operator=((CString *)&local_18,pCVar7);
      local_8._0_1_ = 2;
      uVar17 = 0x1001aeb6;
      CString::~CString((CString *)&param_1);
      piVar19 = piVar8;
    }
  }
  pCVar9 = local_18;
  piVar8 = local_60;
  piVar10 = (int *)&stack0xfffffd50;
  for (iVar6 = 9; this_00 = local_2c, iVar6 != 0; iVar6 = iVar6 + -1) {
    *piVar10 = *piVar8;
    piVar8 = piVar8 + 1;
    piVar10 = piVar10 + 1;
  }
  bVar3 = FUN_100171e0(pCVar9,in_stack_fffffd50,in_stack_fffffd54,in_stack_fffffd58,
                       in_stack_fffffd5c,in_stack_fffffd60,in_stack_fffffd64,iVar4,uVar17,piVar19);
  if (CONCAT31(extraout_var,bVar3) != 0) {
    if (piVar12[1] == 0) {
LAB_1001af46:
      if (*piVar12 == 4) {
        FUN_10016c50();
        FUN_10016c90();
        PMNotifyImexDone();
        PMGeneralNotifyMessage();
        local_8._0_1_ = 1;
        CString::~CString(local_1c);
        local_8 = (uint)local_8._1_3_ << 8;
        FUN_100048b0(local_280);
        local_8 = 0xffffffff;
        CString::~CString((CString *)&local_18);
        ExceptionList = local_10;
        return 1;
      }
      if (*piVar12 == 5) {
        AFX_EXCEPTION_LINK::AFX_EXCEPTION_LINK((AFX_EXCEPTION_LINK *)(local_3c + 8));
        local_8._0_1_ = 6;
        piVar8 = operator_new(0x200);
        local_8._0_1_ = 7;
        param_1 = piVar8;
        if (piVar8 == (int *)0x0) {
          param_2 = (undefined4 *)0x0;
        }
        else {
          iVar6 = (int)(short)piVar12[0x16d];
          param_2 = (undefined4 *)&stack0xfffffd68;
          piVar12 = local_20;
          iVar4 = extraout_ECX_03;
          operator+((CString *)&stack0xfffffd68,(char *)((int)this_00 + 200));
          local_28 = &stack0xfffffd60;
          local_8._0_1_ = 8;
          uVar17 = extraout_ECX_04;
          CString::CString((CString *)&stack0xfffffd60,(CString *)&local_18);
          local_8._0_1_ = 7;
          param_2 = FUN_1001bc10(piVar8,uVar17,piVar12,iVar4,iVar6);
        }
        local_8._0_1_ = 6;
        uVar2 = (undefined1)local_8;
        local_8._0_1_ = 6;
        if (param_2[1] == 0) {
          FUN_10017c20(this_00,0x255,0,0x1000);
          local_8._0_1_ = 2;
          AfxTryCleanup();
          local_8._0_1_ = 2;
        }
        else {
          local_8._0_1_ = uVar2;
          bVar3 = thunk_FUN_1001bed0((int)param_2);
          if (CONCAT31(extraout_var_00,bVar3) == 0) {
            FUN_10017c20(this_00,0x256,0,0x1000);
            local_8._0_1_ = 2;
            AfxTryCleanup();
            local_8._0_1_ = 2;
          }
          else {
            local_8._0_1_ = 2;
            local_8._1_3_ = 0;
            AfxTryCleanup();
            if (param_1 != (int *)0x1) {
              DeleteFileA(local_18);
              FUN_10016c90();
              FUN_10016c50();
              PMNotifyImexDone();
              PMGeneralNotifyMessage();
LAB_1001b135:
              local_8._0_1_ = 1;
              CString::~CString(local_1c);
              local_8 = (uint)local_8._1_3_ << 8;
              FUN_100048b0(local_280);
              local_8 = 0xffffffff;
              CString::~CString((CString *)&local_18);
              ExceptionList = local_10;
              return 1;
            }
            FUN_10017c20(this_00,599,0,0x1000);
            CString::CString((CString *)&param_1);
            local_8._0_1_ = 10;
            CString::LoadStringA((CString *)&param_1,3);
            MessageBoxA((HWND)0x0,(LPCSTR)param_2[2],(LPCSTR)param_1,0x40030);
            local_8._0_1_ = 2;
            CString::~CString((CString *)&param_1);
          }
        }
        goto LAB_1001b19c;
      }
      uVar13 = FUN_10017700(&local_18,&local_24);
      if (uVar13 != 0) {
        DeleteFileA(local_18);
        puVar1 = local_28;
        if (local_28 == (undefined1 *)0x0) {
          CString::operator=(local_1c,(CString *)((int)this_00 + 200));
        }
        else {
          CString::operator=(local_1c,&DAT_10039fec);
        }
        ppvVar14 = &local_24;
        param_1 = (int *)&stack0xfffffd68;
        puVar18 = param_2;
        CString::CString((CString *)&stack0xfffffd68,(CString *)((int)this_00 + 0xcc));
        param_2 = (undefined4 *)&stack0xfffffd64;
        local_8._0_1_ = 0xb;
        uVar17 = extraout_ECX_05;
        CString::CString((CString *)&stack0xfffffd64,local_1c);
        local_8 = CONCAT31(local_8._1_3_,2);
        uVar13 = FUN_10004920(local_280,piVar12,uVar17,ppvVar14,puVar18);
        GlobalUnlock(local_24);
        GlobalFree(local_24);
        if (uVar13 != 0) {
          FUN_10017c20(this_00,uVar13,0,0x1000);
        }
        if (puVar1 == (undefined1 *)0x0) {
          FUN_10016c50();
          FUN_10016c90();
          PMGeneralNotifyMessage();
        }
        PMNotifyImexDone();
        local_8._0_1_ = 1;
        CString::~CString(local_1c);
        local_8 = (uint)local_8._1_3_ << 8;
        FUN_100048b0(local_280);
        local_8 = 0xffffffff;
        CString::~CString((CString *)&local_18);
        ExceptionList = local_10;
        return uVar13;
      }
      uVar13 = 0x240;
    }
    else {
      CopyRect((LPRECT)local_3c,(RECT *)(piVar12 + 5));
      fVar11 = FUN_10017090();
      param_1 = (int *)(float)(fVar11 / (float10)(piVar12[4] + 1));
      iVar4 = PMNotifyAnnotationToFile();
      if (iVar4 != 0) goto LAB_1001af46;
      uVar13 = 0x23f;
    }
    FUN_10017c20(this_00,uVar13,0,0x1000);
  }
LAB_1001b19c:
  DeleteFileA(local_18);
LAB_1001b1a6:
  PMNotifyImexDone();
  local_8._0_1_ = 1;
  CString::~CString(local_1c);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_100048b0(local_280);
  local_8 = 0xffffffff;
  CString::~CString((CString *)&local_18);
  ExceptionList = local_10;
  return 0;
}


// ---- Catch@1001b08a @ 1001b08a

undefined * Catch_1001b08a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 8) = 1;
  *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(unaff_EBP + -0x60);
  return &DAT_1001b09d;
}


// ---- AfxTryCleanup @ 1001b2f0

void AfxTryCleanup(void)

{
  AfxTryCleanup();
  return;
}


// ---- FUN_1001b300 @ 1001b300

undefined4 __thiscall FUN_1001b300(void *this,int *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 extraout_ECX;
  LPCSTR unaff_EBX;
  code *pcVar3;
  int *piVar4;
  int *piVar5;
  int in_stack_fffffd64;
  undefined4 in_stack_fffffd68;
  undefined4 in_stack_fffffd6c;
  int *in_stack_fffffd70;
  int *in_stack_fffffd74;
  undefined4 in_stack_fffffd78;
  undefined4 uVar6;
  undefined4 uVar7;
  uchar *puStack_264;
  CString aCStack_260 [4];
  undefined1 *puStack_25c;
  int aiStack_258 [4];
  int iStack_248;
  int iStack_244;
  int iStack_240;
  int iStack_23c;
  int iStack_238;
  undefined1 *puStack_234;
  undefined1 *puStack_230;
  undefined4 uStack_22c;
  undefined4 auStack_228 [134];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_10028c72;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar1 = FUN_10017030(0x21);
  if (iVar1 == 1) {
    SRV_Set_State();
  }
  iVar1 = FUN_10017030(0x22);
  if (iVar1 == 1) {
    SRV_Set_State();
  }
  iVar1 = FUN_10017030(199);
  if (iVar1 == 1) {
    SRV_Set_State();
  }
  FUN_10017000();
  FUN_100170d0((CString *)&puStack_264);
  uStack_4 = 0;
  FUN_10004730(auStack_228);
  uStack_4._0_1_ = 1;
  FUN_10017030(0x118);
  CString::CString((CString *)&puStack_25c,(char *)(param_1 + 0xf));
  uStack_4 = CONCAT31(uStack_4._1_3_,2);
  CString::Find((CString *)&puStack_25c,&DAT_10038908);
  CString::Mid((CString *)&puStack_25c,(int)aCStack_260);
  puStack_8._0_1_ = 3;
  CString::MakeUpper((CString *)&puStack_264);
  pcVar3 = _mbscmp_exref;
  iVar1 = _mbscmp(puStack_264,&DAT_10038904);
  if (iVar1 == 0) {
    CString::operator=((CString *)&stack0xfffffd98,aCStack_260);
    iStack_23c = param_1[9];
    iStack_238 = param_1[10];
    aiStack_258[2] = param_1[4] + 1;
  }
  else {
    iVar1 = _mbscmp(puStack_264,&DAT_10038900);
    if (iVar1 == 0) {
      iStack_23c = param_1[9];
      iStack_238 = param_1[10];
      aiStack_258[2] = param_1[4] + 1;
    }
    else {
      puStack_234 = &stack0xfffffd80;
      CString::CString((CString *)&stack0xfffffd80,(CString *)((int)this + 0xcc));
      puStack_230 = &stack0xfffffd7c;
      puStack_8._0_1_ = 4;
      CString::CString((CString *)&stack0xfffffd7c,(CString *)&stack0xfffffd98);
      puStack_25c = &stack0xfffffd78;
      puStack_8._0_1_ = 5;
      in_stack_fffffd78 = extraout_ECX;
      CString::CString((CString *)&stack0xfffffd78,(CString *)((int)this + 200));
      puStack_8._0_1_ = 3;
      in_stack_fffffd6c = 0x1001b4c3;
      in_stack_fffffd70 = param_1;
      in_stack_fffffd74 = param_1;
      uVar2 = FUN_10004db0(&uStack_22c,(int)param_1,param_1);
      aiStack_258[2] = 1;
      if (*param_1 == 0) {
        iStack_23c = 0;
        iStack_238 = 0;
      }
      else {
        iStack_23c = param_1[9];
        iStack_238 = param_1[10];
      }
      if (uVar2 != 0) {
        DeleteFileA(unaff_EBX);
        FUN_10017c20(this,uVar2,0,0x1000);
        PMNotifyImexDone();
        puStack_8._0_1_ = 2;
        CString::~CString((CString *)&puStack_264);
        puStack_8._0_1_ = 1;
        CString::~CString(aCStack_260);
        puStack_8 = (undefined1 *)((uint)puStack_8._1_3_ << 8);
        FUN_100048b0(&uStack_22c);
        puStack_8 = (undefined1 *)0xffffffff;
        CString::~CString((CString *)&stack0xfffffd98);
        ExceptionList = pvStack_10;
        return 0;
      }
      puStack_25c = &stack0xfffffd84;
      CString::CString((CString *)&stack0xfffffd84,(char *)((int)param_1 + 0x19a));
      PMSetStringValue();
      pcVar3 = _mbscmp_exref;
    }
  }
  puStack_25c = &stack0xfffffd84;
  CString::CString((CString *)&stack0xfffffd84,(char *)(param_1 + 0xf));
  uVar7 = 1;
  uVar6 = 0x1001b596;
  PMSetStringValue();
  aiStack_258[3] = param_1[5];
  iStack_248 = param_1[6];
  iStack_244 = param_1[7];
  iStack_240 = param_1[8];
  piVar4 = aiStack_258;
  piVar5 = (int *)&stack0xfffffd64;
  for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar5 = *piVar4;
    piVar4 = piVar4 + 1;
    piVar5 = piVar5 + 1;
  }
  FUN_10017260(unaff_EBX,in_stack_fffffd64,in_stack_fffffd68,in_stack_fffffd6c,in_stack_fffffd70,
               in_stack_fffffd74,in_stack_fffffd78,uVar6,uVar7);
  iVar1 = (*pcVar3)();
  if (iVar1 != 0) {
    DeleteFileA(unaff_EBX);
  }
  PMNotifyImexDone();
  puStack_8._0_1_ = 2;
  CString::~CString((CString *)&puStack_264);
  puStack_8._0_1_ = 1;
  CString::~CString(aCStack_260);
  puStack_8 = (undefined1 *)((uint)puStack_8._1_3_ << 8);
  FUN_100048b0(&uStack_22c);
  puStack_8 = (undefined1 *)0xffffffff;
  CString::~CString((CString *)&stack0xfffffd98);
  ExceptionList = pvStack_10;
  return 1;
}


// ---- FUN_1001b660 @ 1001b660

undefined4 __thiscall FUN_1001b660(void *this,int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  LPCSTR extraout_ECX;
  uint uVar5;
  LPCSTR extraout_ECX_00;
  undefined4 extraout_ECX_01;
  char *pcVar6;
  char *pcVar7;
  LPCSTR pCVar8;
  uchar *local_240;
  CString local_23c [4];
  undefined1 *local_238;
  undefined1 *local_234;
  undefined1 *local_230;
  undefined4 local_22c;
  undefined4 local_228 [134];
  void *local_10;
  void *pvStack_c;
  undefined1 *local_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  local_8 = &LAB_10028cd8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_10004730(local_228);
  local_4 = 0;
  CString::CString((CString *)&local_240,(char *)(param_1 + 0x2f8));
  local_4._0_1_ = 1;
  CString::CString((CString *)&local_238,(char *)(param_1 + 0x3c));
  local_4 = CONCAT31(local_4._1_3_,2);
  CString::Find((CString *)&local_238,&DAT_10038908);
  CString::Mid((CString *)&local_238,(int)local_23c);
  local_8._0_1_ = 3;
  CString::MakeUpper((CString *)&local_240);
  iVar2 = _mbscmp(local_240,&DAT_10038904);
  if (iVar2 == 0) {
    local_238 = &stack0xfffffda8;
    pCVar8 = extraout_ECX;
    CString::CString((CString *)&stack0xfffffda8,(CString *)&stack0xfffffdbc);
    uVar5 = *(int *)(param_1 + 0x10) + 1;
    local_8._0_1_ = 4;
    local_234 = &stack0xfffffda0;
    uVar4 = uVar5;
    CString::CString((CString *)&stack0xfffffda0,local_23c);
    local_8._0_1_ = 3;
    uVar3 = FUN_100173a0(uVar5,uVar4,pCVar8);
    local_8._0_1_ = 2;
    CString::~CString((CString *)&local_240);
    local_8._0_1_ = 1;
    CString::~CString(local_23c);
    local_8 = (undefined1 *)((uint)local_8._1_3_ << 8);
    CString::~CString((CString *)&stack0xfffffdbc);
    local_8 = (undefined1 *)0xffffffff;
    FUN_100048b0(&local_22c);
  }
  else {
    iVar2 = _mbscmp(local_240,&DAT_10038900);
    if (iVar2 == 0) {
      local_234 = &stack0xfffffda8;
      pCVar8 = extraout_ECX_00;
      CString::CString((CString *)&stack0xfffffda8,(CString *)&stack0xfffffdbc);
      uVar4 = *(int *)(param_1 + 0x10) + 1;
      local_8._0_1_ = 5;
      local_238 = &stack0xfffffda0;
      uVar3 = extraout_ECX_01;
      CString::CString((CString *)&stack0xfffffda0,(CString *)&stack0xfffffdbc);
      local_8._0_1_ = 3;
      uVar3 = FUN_100173a0(uVar3,uVar4,pCVar8);
      local_8._0_1_ = 2;
      CString::~CString((CString *)&local_240);
      local_8._0_1_ = 1;
      CString::~CString(local_23c);
      local_8 = (undefined1 *)((uint)local_8._1_3_ << 8);
      CString::~CString((CString *)&stack0xfffffdbc);
      local_8 = (undefined1 *)0xffffffff;
      FUN_100048b0(&local_22c);
    }
    else {
      uVar4 = 0xffffffff;
      pcVar6 = &DAT_10039fec;
      do {
        pcVar7 = pcVar6;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        pcVar7 = pcVar6 + 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar7;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4;
      pcVar6 = pcVar7 + -uVar4;
      pcVar7 = (char *)(param_1 + 0x2f8);
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
        pcVar6 = pcVar6 + 4;
        pcVar7 = pcVar7 + 4;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar7 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        pcVar7 = pcVar7 + 1;
      }
      local_234 = &stack0xfffffda4;
      *(undefined4 *)(param_1 + 0x24) = 1;
      *(undefined4 *)(param_1 + 0x28) = 0;
      CString::CString((CString *)&stack0xfffffda4,(CString *)((int)this + 0xcc));
      local_238 = &stack0xfffffda0;
      local_8._0_1_ = 6;
      CString::CString((CString *)&stack0xfffffda0,(CString *)&stack0xfffffdbc);
      local_230 = &stack0xfffffd9c;
      local_8._0_1_ = 7;
      CString::CString((CString *)&stack0xfffffd9c,(CString *)((int)this + 200));
      local_8._0_1_ = 3;
      uVar4 = FUN_10004db0(&local_22c,param_1,(undefined4 *)param_1);
      if (uVar4 == 0) {
        local_8._0_1_ = 2;
        CString::~CString((CString *)&local_240);
        local_8._0_1_ = 1;
        CString::~CString(local_23c);
        local_8 = (undefined1 *)((uint)local_8._1_3_ << 8);
        CString::~CString((CString *)&stack0xfffffdbc);
        local_8 = (undefined1 *)0xffffffff;
        FUN_100048b0(&local_22c);
        uVar3 = 1;
      }
      else {
        FUN_10017c20(this,uVar4,0,0x1000);
        local_8._0_1_ = 2;
        CString::~CString((CString *)&local_240);
        local_8._0_1_ = 1;
        CString::~CString(local_23c);
        local_8 = (undefined1 *)((uint)local_8._1_3_ << 8);
        CString::~CString((CString *)&stack0xfffffdbc);
        local_8 = (undefined1 *)0xffffffff;
        FUN_100048b0(&local_22c);
        uVar3 = 0;
      }
    }
  }
  ExceptionList = local_10;
  return uVar3;
}


// ---- FUN_1001b9b0 @ 1001b9b0

bool __thiscall FUN_1001b9b0(void *this,int *param_1)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  LPVOID pvVar4;
  uint uVar5;
  uint uVar6;
  uchar *unaff_EBX;
  int *piVar7;
  char *pcVar8;
  char *pcVar9;
  int *piVar10;
  CString local_238 [4];
  undefined1 *local_234;
  undefined1 *local_230;
  undefined4 local_22c;
  undefined4 local_228 [134];
  void *local_10;
  void *pvStack_c;
  undefined1 *local_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  local_8 = &LAB_10028d1c;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_10004730(local_228);
  local_4 = 0;
  CString::CString((CString *)&local_234,(char *)(param_1 + 0xb8));
  local_4 = CONCAT31(local_4._1_3_,1);
  CString::Find((CString *)&local_234,&DAT_10038908);
  CString::Mid((CString *)&local_234,(int)local_238);
  local_8._0_1_ = 2;
  CString::MakeUpper((CString *)&stack0xfffffdc4);
  iVar3 = _mbscmp(unaff_EBX,&DAT_10038904);
  if (iVar3 == 0) {
    uVar5 = 0xffffffff;
    pcVar8 = &DAT_10039fec;
    do {
      pcVar9 = pcVar8;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar9 = pcVar8 + 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar9;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    piVar7 = (int *)(pcVar9 + -uVar5);
    piVar10 = param_1 + 9;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *piVar10 = *piVar7;
      piVar7 = piVar7 + 1;
      piVar10 = piVar10 + 1;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(char *)piVar10 = (char)*piVar7;
      piVar7 = (int *)((int)piVar7 + 1);
      piVar10 = (int *)((int)piVar10 + 1);
    }
    param_1[6] = 4;
    uVar5 = FUN_10017700((undefined4 *)local_238,&local_234);
    if (uVar5 == 0) {
      iVar3 = 0x240;
    }
    else {
      pvVar4 = GlobalLock(local_234);
      if (pvVar4 == (LPVOID)0x0) {
        iVar3 = 0x1d2;
      }
      else {
        iVar3 = 0;
        param_1[2] = *(int *)((int)pvVar4 + 4);
        param_1[3] = *(int *)((int)pvVar4 + 8);
      }
    }
    GlobalUnlock(local_234);
    GlobalFree(local_234);
  }
  else {
    iVar3 = _mbscmp(unaff_EBX,&DAT_10038900);
    if (iVar3 == 0) {
      uVar5 = 0xffffffff;
      pcVar8 = &DAT_10039fec;
      do {
        pcVar9 = pcVar8;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar9 = pcVar8 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar9;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5;
      piVar7 = (int *)(pcVar9 + -uVar5);
      piVar10 = param_1 + 9;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *piVar10 = *piVar7;
        piVar7 = piVar7 + 1;
        piVar10 = piVar10 + 1;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(char *)piVar10 = (char)*piVar7;
        piVar7 = (int *)((int)piVar7 + 1);
        piVar10 = (int *)((int)piVar10 + 1);
      }
      param_1[6] = 5;
      iVar3 = 0;
    }
    else {
      local_234 = &stack0xfffffdb0;
      CString::CString((CString *)&stack0xfffffdb0,(CString *)((int)this + 0xcc));
      local_230 = &stack0xfffffdac;
      local_8._0_1_ = 3;
      CString::CString((CString *)&stack0xfffffdac,(CString *)((int)this + 200));
      local_8._0_1_ = 2;
      iVar3 = FUN_10005530(&local_22c,(int)param_1);
    }
  }
  *param_1 = iVar3;
  local_8._0_1_ = 1;
  uVar2 = local_8._0_1_;
  local_8._0_1_ = 1;
  if (iVar3 == 0) {
    local_8._0_1_ = uVar2;
    CString::~CString((CString *)&stack0xfffffdc4);
    local_8 = (undefined1 *)((uint)local_8._1_3_ << 8);
    CString::~CString(local_238);
    local_8 = (undefined1 *)0xffffffff;
    FUN_100048b0(&local_22c);
  }
  else {
    CString::~CString((CString *)&stack0xfffffdc4);
    local_8 = (undefined1 *)((uint)local_8._1_3_ << 8);
    CString::~CString(local_238);
    local_8 = (undefined1 *)0xffffffff;
    FUN_100048b0(&local_22c);
  }
  ExceptionList = local_10;
  return iVar3 == 0;
}


// ---- FUN_1001bc10 @ 1001bc10

undefined4 * __thiscall
FUN_1001bc10(void *this,undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  CString *this_00;
  int *piVar1;
  void *pvVar2;
  int iVar3;
  AFX_EXCEPTION_LINK local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_10028d71;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = &PTR_LAB_1002a31c;
  this_00 = (CString *)((int)this + 8);
  local_4._0_1_ = 2;
  local_4._1_3_ = 0;
  CString::CString(this_00);
  local_4._0_1_ = 3;
  CString::CString((CString *)((int)this + 0xc));
  local_4._0_1_ = 4;
  CString::CString((CString *)((int)this + 0x10));
  local_4 = CONCAT31(local_4._1_3_,5);
  *(undefined ***)this = &PTR_LAB_1002a35c;
  *(undefined4 *)((int)this + 4) = 0;
  pvVar2 = operator_new(200);
  *(void **)((int)this + 0x1f8) = pvVar2;
  CString::operator=((CString *)((int)this + 0xc),(CString *)&param_1);
  CString::operator=((CString *)((int)this + 0x10),(CString *)&param_2);
  *(int *)((int)this + 0x14) = param_3;
  if (param_4 == 1) {
    *(undefined4 *)((int)this + 0x18) = 1;
  }
  else {
    *(undefined4 *)((int)this + 0x18) = 0;
  }
  piVar1 = (int *)((int)this + 0xa0);
  iVar3 = FUN_100211e0((undefined4 *)((int)this + 0x1c));
  *piVar1 = iVar3;
  *(undefined4 *)((int)this + 0x1c) = &LAB_1001bbf0;
  CString::operator=(this_00,s_Probable_Structure_Alignment_Err_1003891c);
  FUN_10020fa0(piVar1,0x3d,0x158);
  CString::operator=(this_00,s_Unknown_Error_1003890c);
  AFX_EXCEPTION_LINK::AFX_EXCEPTION_LINK(local_18);
  *(undefined4 *)((int)this + 0xc4) = 2;
  FUN_10020780(piVar1);
  *(undefined4 *)(*piVar1 + 0x68) = 0;
  FUN_10020750(piVar1,param_3,'\0');
  if (param_4 == 1) {
    FUN_10020d00(piVar1);
  }
  *(undefined4 *)((int)this + 0x150) = 2;
  local_4 = 5;
  AfxTryCleanup();
  *(undefined4 *)((int)this + 4) = 1;
  local_4 = local_4 & 0xffffff00;
  CString::~CString((CString *)&param_1);
  local_4 = 0xffffffff;
  CString::~CString((CString *)&param_2);
  ExceptionList = local_c;
  return this;
}


// ---- FUN_1001bdb0 @ 1001bdb0

undefined4 * __thiscall FUN_1001bdb0(void *this,byte param_1)

{
  FUN_1001bdd0(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- FUN_1001bdd0 @ 1001bdd0

void __fastcall FUN_1001bdd0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_10028da9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_LAB_1002a35c;
  local_4 = 3;
  operator_delete((void *)param_1[0x7e]);
  FUN_10021070((int)(param_1 + 0x28));
  local_4._0_1_ = 2;
  CString::~CString((CString *)(param_1 + 4));
  local_4._0_1_ = 1;
  CString::~CString((CString *)(param_1 + 3));
  local_4 = (uint)local_4._1_3_ << 8;
  CString::~CString((CString *)(param_1 + 2));
  *param_1 = &PTR_LAB_1002a31c;
  ExceptionList = local_c;
  return;
}


// ---- thunk_FUN_1001bed0 @ 1001be60

bool __fastcall thunk_FUN_1001bed0(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  AFX_EXCEPTION_LINK aAStack_30 [12];
  int iStack_24;
  int iStack_20;
  FILE *pFStack_1c;
  FILE *pFStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_10028de8;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffc4;
  ExceptionList = &pvStack_10;
  iStack_24 = param_1;
  pFStack_18 = fopen(*(char **)(param_1 + 0xc),&DAT_100389bc);
  if (pFStack_18 == (FILE *)0x0) {
    CString::operator=((CString *)(param_1 + 8),s_Unable_to_open_input_file_100389a0);
    ExceptionList = pvStack_10;
    return false;
  }
  pFStack_1c = fopen(*(char **)(param_1 + 0x10),&DAT_1003899c);
  if (pFStack_1c == (FILE *)0x0) {
    CString::operator=((CString *)(param_1 + 8),s_Unable_to_open_output_file_10038980);
    ExceptionList = pvStack_10;
    return false;
  }
  iStack_20 = 0;
  AFX_EXCEPTION_LINK::AFX_EXCEPTION_LINK(aAStack_30);
  piVar1 = (int *)(param_1 + 0xa0);
  uStack_8 = 1;
  puVar2 = (undefined4 *)FUN_10001000((int)piVar1);
  puVar2[3] = pFStack_18;
  (*(code *)*puVar2)(piVar1,puVar2);
  FUN_10020950(piVar1);
  FUN_100214d0((int)piVar1,pFStack_1c);
  FUN_10021390(piVar1,'\x01');
  while( true ) {
    if (*(uint *)(param_1 + 0xbc) <= *(uint *)(param_1 + 0x164)) break;
    uVar3 = (*(code *)puVar2[1])();
    FUN_10021410(piVar1,puVar2[4],uVar3);
  }
  (*(code *)puVar2[2])(piVar1,puVar2);
  FUN_100210d0(piVar1);
  uStack_8 = 0xffffffff;
  AfxTryCleanup();
  fclose(pFStack_18);
  fclose(pFStack_1c);
  ExceptionList = pvStack_10;
  return iStack_20 == 0;
}


// ---- FUN_1001be70 @ 1001be70

void FUN_1001be70(void)

{
  undefined4 local_14;
  CException *local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10028dca;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_10 = operator_new(8);
  local_4 = 0;
  if (local_10 == (CException *)0x0) {
    local_14 = 0;
  }
  else {
    local_14 = CException::CException(local_10);
  }
  local_4 = 0xffffffff;
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(&local_14,(ThrowInfo *)&DAT_1002b668);
}


// ---- FUN_1001bed0 @ 1001bed0

bool __fastcall FUN_1001bed0(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  AFX_EXCEPTION_LINK local_30 [12];
  int local_24;
  int local_20;
  FILE *local_1c;
  FILE *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10028de8;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc4;
  ExceptionList = &local_10;
  local_24 = param_1;
  local_18 = fopen(*(char **)(param_1 + 0xc),&DAT_100389bc);
  if (local_18 == (FILE *)0x0) {
    CString::operator=((CString *)(param_1 + 8),s_Unable_to_open_input_file_100389a0);
    ExceptionList = local_10;
    return false;
  }
  local_1c = fopen(*(char **)(param_1 + 0x10),&DAT_1003899c);
  if (local_1c == (FILE *)0x0) {
    CString::operator=((CString *)(param_1 + 8),s_Unable_to_open_output_file_10038980);
    ExceptionList = local_10;
    return false;
  }
  local_20 = 0;
  AFX_EXCEPTION_LINK::AFX_EXCEPTION_LINK(local_30);
  piVar1 = (int *)(param_1 + 0xa0);
  local_8 = 1;
  puVar2 = (undefined4 *)FUN_10001000((int)piVar1);
  puVar2[3] = local_18;
  (*(code *)*puVar2)(piVar1,puVar2);
  FUN_10020950(piVar1);
  FUN_100214d0((int)piVar1,local_1c);
  FUN_10021390(piVar1,'\x01');
  while( true ) {
    if (*(uint *)(param_1 + 0xbc) <= *(uint *)(param_1 + 0x164)) break;
    uVar3 = (*(code *)puVar2[1])();
    FUN_10021410(piVar1,puVar2[4],uVar3);
  }
  (*(code *)puVar2[2])(piVar1,puVar2);
  FUN_100210d0(piVar1);
  local_8 = 0xffffffff;
  AfxTryCleanup();
  fclose(local_18);
  fclose(local_1c);
  ExceptionList = local_10;
  return local_20 == 0;
}


// ---- Catch@1001c023 @ 1001c023

undefined4 Catch_1001c023(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x20);
  *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(unaff_EBP + -0x24);
  (**(code **)(*(int *)(iVar1 + 0xa0) + 0xc))(iVar1 + 0xa0,*(undefined4 *)(iVar1 + 0x1f8));
  CString::operator=((CString *)(iVar1 + 8),*(char **)(iVar1 + 0x1f8));
  *(undefined4 *)(unaff_EBP + -0x1c) = 1;
  return 0x1001bfe7;
}


// ---- FUN_1001eee0 @ 1001eee0

CWinApp * __fastcall FUN_1001eee0(CWinApp *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10028e24;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CWinApp::CWinApp(param_1,(char *)0x0);
  local_4 = 0;
  CString::CString((CString *)(param_1 + 0xc4));
  local_4._0_1_ = 1;
  CString::CString((CString *)(param_1 + 200));
  local_4 = CONCAT31(local_4._1_3_,2);
  CString::CString((CString *)(param_1 + 0xcc));
  *(undefined ***)param_1 = &PTR_LAB_1002a390;
  *(undefined4 *)(param_1 + 0xd4) = 0;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  ExceptionList = local_c;
  return param_1;
}


// ---- FUN_1001ef70 @ 1001ef70

CWinApp * __thiscall FUN_1001ef70(void *this,byte param_1)

{
  FUN_1001ef90(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- FUN_1001ef90 @ 1001ef90

void __fastcall FUN_1001ef90(CWinApp *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_10028e54;
  local_c = ExceptionList;
  local_4 = 2;
  ExceptionList = &local_c;
  CString::~CString((CString *)(param_1 + 0xcc));
  local_4._0_1_ = 1;
  CString::~CString((CString *)(param_1 + 200));
  local_4 = (uint)local_4._1_3_ << 8;
  CString::~CString((CString *)(param_1 + 0xc4));
  local_4 = 0xffffffff;
  CWinApp::~CWinApp(param_1);
  ExceptionList = local_c;
  return;
}


// ---- FUN_1001f010 @ 1001f010

void FUN_1001f010(void)

{
  FUN_1001eee0((CWinApp *)&DAT_1003b398);
  return;
}


// ---- FUN_1001f020 @ 1001f020

void FUN_1001f020(void)

{
  FUN_10028434((_onexit_t)&LAB_1001f030);
  return;
}


// ---- FUN_1001f040 @ 1001f040

void __fastcall FUN_1001f040(CWinApp *param_1)

{
  void *this;
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10028e6a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this = operator_new(0x14);
  local_4 = 0;
  if (this == (void *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_1001f9f0(this,s_Image_DLL_100389c0);
  }
  local_4 = 0xffffffff;
  *(undefined4 **)(param_1 + 0xdc) = puVar1;
  CWinApp::InitInstance(param_1);
  ExceptionList = local_c;
  return;
}


// ---- FUN_1001f0b0 @ 1001f0b0

void __fastcall FUN_1001f0b0(CWinApp *param_1)

{
  if (*(int **)(param_1 + 0xdc) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xdc) + 4))(1);
  }
  CWinApp::ExitInstance(param_1);
  return;
}


// ---- IMGInfo @ 1001f0e0

undefined4 IMGInfo(undefined4 param_1,char *param_2,char *param_3,char *param_4)

{
  AFX_MODULE_STATE *pAVar1;
  undefined4 uVar2;
  AFX_EXCEPTION_LINK local_28 [8];
  undefined4 local_20;
  int local_1c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0x1f0e0  1  IMGInfo */
  local_8 = 0xffffffff;
  puStack_c = &LAB_10028e90;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffcc;
  ExceptionList = &local_10;
  pAVar1 = (AFX_MODULE_STATE *)FUN_1002824d();
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2((AFX_MAINTAIN_STATE2 *)&local_20,pAVar1);
  local_8 = 0;
  AFX_EXCEPTION_LINK::AFX_EXCEPTION_LINK(local_28);
  local_8._0_1_ = 2;
  uVar2 = FUN_10015ed0(&DAT_1003b398,param_1,param_2,param_3,param_4);
  local_8 = (uint)local_8._1_3_ << 8;
  AfxTryCleanup();
  *(undefined4 *)(local_1c + 4) = local_20;
  ExceptionList = local_10;
  return uVar2;
}


// ---- Catch@1001f162 @ 1001f162

undefined1 * Catch_1001f162(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x14);
  return &LAB_1001f16e;
}


// ---- IMGSaveTiff @ 1001f1a0

uint IMGSaveTiff(int *param_1,undefined4 *param_2)

{
  AFX_MODULE_STATE *pAVar1;
  uint uVar2;
  AFX_EXCEPTION_LINK local_28 [8];
  undefined4 local_20;
  int local_1c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0x1f1a0  2  IMGSaveTiff */
  local_8 = 0xffffffff;
  puStack_c = &LAB_10028eb0;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffcc;
  ExceptionList = &local_10;
  pAVar1 = (AFX_MODULE_STATE *)FUN_1002824d();
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2((AFX_MAINTAIN_STATE2 *)&local_20,pAVar1);
  local_8 = 0;
  AFX_EXCEPTION_LINK::AFX_EXCEPTION_LINK(local_28);
  local_8._0_1_ = 2;
  uVar2 = FUN_1001aab0(&DAT_1003b398,param_1,param_2);
  local_8 = (uint)local_8._1_3_ << 8;
  AfxTryCleanup();
  *(undefined4 *)(local_1c + 4) = local_20;
  ExceptionList = local_10;
  return uVar2;
}


// ---- Catch@1001f21a @ 1001f21a

undefined1 * Catch_1001f21a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x14);
  return &LAB_1001f226;
}


// ---- IMGLoadTiff @ 1001f250

undefined4 IMGLoadTiff(int *param_1)

{
  AFX_MODULE_STATE *pAVar1;
  undefined4 uVar2;
  AFX_EXCEPTION_LINK local_28 [8];
  undefined4 local_20;
  int local_1c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0x1f250  3  IMGLoadTiff */
  local_8 = 0xffffffff;
  puStack_c = &LAB_10028ed0;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffcc;
  ExceptionList = &local_10;
  pAVar1 = (AFX_MODULE_STATE *)FUN_1002824d();
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2((AFX_MAINTAIN_STATE2 *)&local_20,pAVar1);
  local_8 = 0;
  AFX_EXCEPTION_LINK::AFX_EXCEPTION_LINK(local_28);
  local_8._0_1_ = 2;
  uVar2 = FUN_1001b300(&DAT_1003b398,param_1);
  local_8 = (uint)local_8._1_3_ << 8;
  AfxTryCleanup();
  *(undefined4 *)(local_1c + 4) = local_20;
  ExceptionList = local_10;
  return uVar2;
}


// ---- Catch@1001f2ca @ 1001f2ca

undefined1 * Catch_1001f2ca(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x14);
  return &LAB_1001f2d6;
}


// ---- IMGLoadTiffToBMP @ 1001f300

undefined4 IMGLoadTiffToBMP(int param_1)

{
  AFX_MODULE_STATE *pAVar1;
  undefined4 uVar2;
  AFX_EXCEPTION_LINK local_28 [8];
  undefined4 local_20;
  int local_1c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0x1f300  13  IMGLoadTiffToBMP */
  local_8 = 0xffffffff;
  puStack_c = &LAB_10028ef0;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffcc;
  ExceptionList = &local_10;
  pAVar1 = (AFX_MODULE_STATE *)FUN_1002824d();
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2((AFX_MAINTAIN_STATE2 *)&local_20,pAVar1);
  local_8 = 0;
  AFX_EXCEPTION_LINK::AFX_EXCEPTION_LINK(local_28);
  local_8._0_1_ = 2;
  uVar2 = FUN_1001b660(&DAT_1003b398,param_1);
  local_8 = (uint)local_8._1_3_ << 8;
  AfxTryCleanup();
  *(undefined4 *)(local_1c + 4) = local_20;
  ExceptionList = local_10;
  return uVar2;
}


// ---- Catch@1001f37a @ 1001f37a

undefined1 * Catch_1001f37a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x14);
  return &LAB_1001f386;
}


// ---- IMGGetTiffHeader @ 1001f3b0

bool IMGGetTiffHeader(int *param_1)

{
  bool bVar1;
  AFX_MODULE_STATE *pAVar2;
  AFX_EXCEPTION_LINK local_28 [8];
  undefined4 local_20;
  int local_1c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0x1f3b0  4  IMGGetTiffHeader */
  local_8 = 0xffffffff;
  puStack_c = &LAB_10028f10;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffcc;
  ExceptionList = &local_10;
  pAVar2 = (AFX_MODULE_STATE *)FUN_1002824d();
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2((AFX_MAINTAIN_STATE2 *)&local_20,pAVar2);
  local_8 = 0;
  AFX_EXCEPTION_LINK::AFX_EXCEPTION_LINK(local_28);
  local_8._0_1_ = 2;
  bVar1 = FUN_1001b9b0(&DAT_1003b398,param_1);
  local_8 = (uint)local_8._1_3_ << 8;
  AfxTryCleanup();
  *(undefined4 *)(local_1c + 4) = local_20;
  ExceptionList = local_10;
  return bVar1;
}


// ---- Catch@1001f426 @ 1001f426

undefined1 * Catch_1001f426(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x14);
  return &LAB_1001f432;
}


// ---- IMGPrintImage @ 1001f460

undefined4 IMGPrintImage(int *param_1)

{
  AFX_MODULE_STATE *pAVar1;
  undefined4 uVar2;
  AFX_EXCEPTION_LINK local_28 [8];
  undefined4 local_20;
  int local_1c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0x1f460  5  IMGPrintImage */
  local_8 = 0xffffffff;
  puStack_c = &LAB_10028f30;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffcc;
  ExceptionList = &local_10;
  pAVar1 = (AFX_MODULE_STATE *)FUN_1002824d();
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2((AFX_MAINTAIN_STATE2 *)&local_20,pAVar1);
  local_8 = 0;
  AFX_EXCEPTION_LINK::AFX_EXCEPTION_LINK(local_28);
  local_8._0_1_ = 2;
  uVar2 = FUN_10012820(&DAT_1003b398,param_1);
  local_8 = (uint)local_8._1_3_ << 8;
  AfxTryCleanup();
  *(undefined4 *)(local_1c + 4) = local_20;
  ExceptionList = local_10;
  return uVar2;
}


// ---- Catch@1001f4d6 @ 1001f4d6

undefined1 * Catch_1001f4d6(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x14);
  return &LAB_1001f4e2;
}


// ---- IMGPrintImageCheckMag @ 1001f510

undefined4 IMGPrintImageCheckMag(int param_1)

{
  AFX_MODULE_STATE *pAVar1;
  undefined4 uVar2;
  AFX_EXCEPTION_LINK local_28 [8];
  undefined4 local_20;
  int local_1c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0x1f510  11  IMGPrintImageCheckMag */
  local_8 = 0xffffffff;
  puStack_c = &LAB_10028f50;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffcc;
  ExceptionList = &local_10;
  pAVar1 = (AFX_MODULE_STATE *)FUN_1002824d();
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2((AFX_MAINTAIN_STATE2 *)&local_20,pAVar1);
  local_8 = 0;
  AFX_EXCEPTION_LINK::AFX_EXCEPTION_LINK(local_28);
  local_8._0_1_ = 2;
  uVar2 = FUN_10012d80(&DAT_1003b398,param_1);
  local_8 = (uint)local_8._1_3_ << 8;
  AfxTryCleanup();
  *(undefined4 *)(local_1c + 4) = local_20;
  ExceptionList = local_10;
  return uVar2;
}


// ---- Catch@1001f586 @ 1001f586

undefined1 * Catch_1001f586(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x14);
  return &LAB_1001f592;
}


// ---- IMGClipCopy @ 1001f5c0

undefined4 IMGClipCopy(int param_1)

{
  AFX_MODULE_STATE *pAVar1;
  undefined4 uVar2;
  AFX_EXCEPTION_LINK local_28 [8];
  undefined4 local_20;
  int local_1c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0x1f5c0  6  IMGClipCopy */
  local_8 = 0xffffffff;
  puStack_c = &LAB_10028f70;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffcc;
  ExceptionList = &local_10;
  pAVar1 = (AFX_MODULE_STATE *)FUN_1002824d();
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2((AFX_MAINTAIN_STATE2 *)&local_20,pAVar1);
  local_8 = 0;
  AFX_EXCEPTION_LINK::AFX_EXCEPTION_LINK(local_28);
  local_8._0_1_ = 2;
  uVar2 = FUN_1000c020(&DAT_1003b398,param_1);
  local_8 = (uint)local_8._1_3_ << 8;
  AfxTryCleanup();
  *(undefined4 *)(local_1c + 4) = local_20;
  ExceptionList = local_10;
  return uVar2;
}


// ---- Catch@1001f636 @ 1001f636

undefined1 * Catch_1001f636(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x14);
  return &LAB_1001f642;
}


// ---- IMGClipPaste @ 1001f670

undefined4 IMGClipPaste(int param_1)

{
  AFX_MODULE_STATE *pAVar1;
  undefined4 uVar2;
  AFX_EXCEPTION_LINK local_28 [8];
  undefined4 local_20;
  int local_1c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0x1f670  7  IMGClipPaste */
  local_8 = 0xffffffff;
  puStack_c = &LAB_10028f90;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffcc;
  ExceptionList = &local_10;
  pAVar1 = (AFX_MODULE_STATE *)FUN_1002824d();
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2((AFX_MAINTAIN_STATE2 *)&local_20,pAVar1);
  local_8 = 0;
  AFX_EXCEPTION_LINK::AFX_EXCEPTION_LINK(local_28);
  local_8._0_1_ = 2;
  uVar2 = FUN_1000c260(&DAT_1003b398,param_1);
  local_8 = (uint)local_8._1_3_ << 8;
  AfxTryCleanup();
  *(undefined4 *)(local_1c + 4) = local_20;
  ExceptionList = local_10;
  return uVar2;
}


// ---- Catch@1001f6e6 @ 1001f6e6

undefined1 * Catch_1001f6e6(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x14);
  return &LAB_1001f6f2;
}


// ---- IMGGetClipInfo @ 1001f720

undefined4 IMGGetClipInfo(uint *param_1)

{
  AFX_MODULE_STATE *pAVar1;
  undefined4 uVar2;
  AFX_EXCEPTION_LINK local_28 [8];
  undefined4 local_20;
  int local_1c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0x1f720  8  IMGGetClipInfo */
  local_8 = 0xffffffff;
  puStack_c = &LAB_10028fb0;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffcc;
  ExceptionList = &local_10;
  pAVar1 = (AFX_MODULE_STATE *)FUN_1002824d();
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2((AFX_MAINTAIN_STATE2 *)&local_20,pAVar1);
  local_8 = 0;
  AFX_EXCEPTION_LINK::AFX_EXCEPTION_LINK(local_28);
  local_8._0_1_ = 2;
  uVar2 = FUN_1000c4c0(&DAT_1003b398,param_1);
  local_8 = (uint)local_8._1_3_ << 8;
  AfxTryCleanup();
  *(undefined4 *)(local_1c + 4) = local_20;
  ExceptionList = local_10;
  return uVar2;
}


// ---- Catch@1001f796 @ 1001f796

undefined1 * Catch_1001f796(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x14);
  return &LAB_1001f7a2;
}


// ---- IMGHrruPhoto @ 1001f7d0

undefined4 IMGHrruPhoto(int *param_1)

{
  AFX_MODULE_STATE *pAVar1;
  undefined4 uVar2;
  AFX_EXCEPTION_LINK local_28 [8];
  undefined4 local_20;
  int local_1c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0x1f7d0  9  IMGHrruPhoto */
  local_8 = 0xffffffff;
  puStack_c = &LAB_10028fd0;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffcc;
  ExceptionList = &local_10;
  pAVar1 = (AFX_MODULE_STATE *)FUN_1002824d();
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2((AFX_MAINTAIN_STATE2 *)&local_20,pAVar1);
  local_8 = 0;
  AFX_EXCEPTION_LINK::AFX_EXCEPTION_LINK(local_28);
  local_8._0_1_ = 2;
  uVar2 = FUN_1000f580(&DAT_1003b398,param_1);
  local_8 = (uint)local_8._1_3_ << 8;
  AfxTryCleanup();
  *(undefined4 *)(local_1c + 4) = local_20;
  ExceptionList = local_10;
  return uVar2;
}


// ---- Catch@1001f846 @ 1001f846

undefined1 * Catch_1001f846(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x14);
  return &LAB_1001f852;
}


// ---- IMGPhotoCommand @ 1001f880

uint IMGPhotoCommand(undefined4 *param_1)

{
  AFX_MODULE_STATE *pAVar1;
  uint uVar2;
  AFX_EXCEPTION_LINK local_28 [8];
  undefined4 local_20;
  int local_1c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0x1f880  10  IMGPhotoCommand */
  local_8 = 0xffffffff;
  puStack_c = &LAB_10028ff0;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffcc;
  ExceptionList = &local_10;
  pAVar1 = (AFX_MODULE_STATE *)FUN_1002824d();
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2((AFX_MAINTAIN_STATE2 *)&local_20,pAVar1);
  local_8 = 0;
  AFX_EXCEPTION_LINK::AFX_EXCEPTION_LINK(local_28);
  local_8._0_1_ = 2;
  uVar2 = FUN_100161d0(&DAT_1003b398,param_1);
  local_8 = (uint)local_8._1_3_ << 8;
  AfxTryCleanup();
  *(undefined4 *)(local_1c + 4) = local_20;
  ExceptionList = local_10;
  return uVar2;
}


// ---- Catch@1001f8f6 @ 1001f8f6

undefined1 * Catch_1001f8f6(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x14);
  return &LAB_1001f902;
}


// ---- IMGPhotoCommandCheckMag @ 1001f930

undefined4 IMGPhotoCommandCheckMag(void)

{
  AFX_MODULE_STATE *pAVar1;
  undefined4 uVar2;
  AFX_EXCEPTION_LINK local_28 [8];
  undefined4 local_20;
  int local_1c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0x1f930  12  IMGPhotoCommandCheckMag */
  local_8 = 0xffffffff;
  puStack_c = &LAB_10029010;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffcc;
  ExceptionList = &local_10;
  pAVar1 = (AFX_MODULE_STATE *)FUN_1002824d();
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2((AFX_MAINTAIN_STATE2 *)&local_20,pAVar1);
  local_8 = 0;
  AFX_EXCEPTION_LINK::AFX_EXCEPTION_LINK(local_28);
  local_8._0_1_ = 2;
  uVar2 = FUN_10015f30(&DAT_1003b398);
  local_8 = (uint)local_8._1_3_ << 8;
  AfxTryCleanup();
  *(undefined4 *)(local_1c + 4) = local_20;
  ExceptionList = local_10;
  return uVar2;
}


// ---- Catch@1001f9a0 @ 1001f9a0

undefined1 * Catch_1001f9a0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x14);
  return &LAB_1001f9ac;
}


// ---- FUN_1001f9e0 @ 1001f9e0

void __fastcall FUN_1001f9e0(undefined4 *param_1)

{
  *(undefined4 *)(param_1[1] + 4) = *param_1;
  return;
}


// ---- FUN_1001f9f0 @ 1001f9f0

undefined4 * __thiscall FUN_1001f9f0(void *this,char *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10029054;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = &PTR_LAB_1002a31c;
  local_4 = 0;
  CString::CString((CString *)((int)this + 4));
  local_4._0_1_ = 1;
  CString::CString((CString *)((int)this + 8));
  local_4._0_1_ = 2;
  CString::CString((CString *)((int)this + 0xc));
  local_4._0_1_ = 3;
  CString::CString((CString *)((int)this + 0x10));
  local_4 = CONCAT31(local_4._1_3_,4);
  *(undefined ***)this = &PTR_LAB_1002a468;
  CString::operator=((CString *)((int)this + 4),s_LEO_32_100389d0);
  CString::operator=((CString *)((int)this + 0xc),&DAT_100389cc);
  CString::operator=((CString *)((int)this + 0x10),param_1);
  ExceptionList = local_c;
  return this;
}


// ---- FUN_1001faa0 @ 1001faa0

undefined4 * __thiscall FUN_1001faa0(void *this,byte param_1)

{
  FUN_1001fac0(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- FUN_1001fac0 @ 1001fac0

void __fastcall FUN_1001fac0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_10029089;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_LAB_1002a468;
  local_4 = 3;
  CString::~CString((CString *)(param_1 + 4));
  local_4._0_1_ = 2;
  CString::~CString((CString *)(param_1 + 3));
  local_4._0_1_ = 1;
  CString::~CString((CString *)(param_1 + 2));
  local_4 = (uint)local_4._1_3_ << 8;
  CString::~CString((CString *)(param_1 + 1));
  *param_1 = &PTR_LAB_1002a31c;
  ExceptionList = local_c;
  return;
}


// ---- FUN_1001fb30 @ 1001fb30

void __thiscall FUN_1001fb30(void *this,char *param_1)

{
  CString::operator=((CString *)((int)this + 8),param_1);
  return;
}


// ---- FUN_1001fb40 @ 1001fb40

undefined4 FUN_1001fb40(LPCSTR param_1,undefined4 param_2)

{
  HKEY hKey;
  LSTATUS LVar1;
  DWORD local_c;
  undefined4 local_8;
  DWORD local_4;
  
  hKey = (HKEY)FUN_1001ff30();
  if (hKey != (HKEY)0x0) {
    local_c = 4;
    LVar1 = RegQueryValueExA(hKey,param_1,(LPDWORD)0x0,&local_4,(LPBYTE)&local_8,&local_c);
    RegCloseKey(hKey);
    if (LVar1 == 0) {
      return local_8;
    }
  }
  return param_2;
}


// ---- FUN_1001fba0 @ 1001fba0

bool FUN_1001fba0(LPCSTR param_1)

{
  HKEY hKey;
  LSTATUS LVar1;
  
  hKey = (HKEY)FUN_1001ff30();
  if (hKey == (HKEY)0x0) {
    return false;
  }
  LVar1 = RegSetValueExA(hKey,param_1,0,4,&stack0x00000008,4);
  RegCloseKey(hKey);
  return LVar1 == 0;
}


// ---- FUN_1001fbe0 @ 1001fbe0

undefined4 __thiscall FUN_1001fbe0(void *this,undefined4 param_1,undefined4 param_2,char *param_3)

{
  undefined4 uVar1;
  CString *pCVar2;
  void *local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *local_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  local_8 = &LAB_100290cf;
  local_c = ExceptionList;
  local_10 = 0;
  ExceptionList = &local_c;
  CString::CString((CString *)&param_3,param_3);
  local_4 = 1;
  if (*(int *)(*(int *)((int)this + 8) + -8) != 0) {
    pCVar2 = (CString *)operator+((CString *)&local_14,(char *)((int)this + 8));
    local_8 = (undefined1 *)CONCAT31(local_8._1_3_,2);
    pCVar2 = (CString *)operator+((CString *)&stack0xffffffe4,pCVar2);
    local_c._0_1_ = 3;
    CString::operator=((CString *)&param_1,pCVar2);
    local_c._0_1_ = 2;
    CString::~CString((CString *)&stack0xffffffe0);
    local_c = (void *)CONCAT31(local_c._1_3_,1);
    CString::~CString((CString *)&stack0xffffffe4);
  }
  uVar1 = local_4;
  FUN_10020120();
  local_c = (void *)((uint)local_c & 0xffffff00);
  CString::~CString((CString *)&param_1);
  ExceptionList = local_14;
  return uVar1;
}


// ---- FUN_1001fcc0 @ 1001fcc0

uint __thiscall FUN_1001fcc0(void *this,BYTE *param_1,char *param_2)

{
  CString *pCVar1;
  uint uVar2;
  LPCSTR unaff_retaddr;
  void *local_14;
  CString local_10 [4];
  void *local_c;
  undefined1 *local_8;
  LPCSTR local_4;
  
  local_4 = (LPCSTR)0xffffffff;
  local_8 = &LAB_100290f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CString::CString((CString *)&param_2,param_2);
  local_4 = (LPCSTR)0x0;
  if (*(int *)(*(int *)((int)this + 8) + -8) != 0) {
    pCVar1 = (CString *)operator+(local_10,(char *)((int)this + 8));
    local_8 = (undefined1 *)CONCAT31(local_8._1_3_,1);
    pCVar1 = (CString *)operator+((CString *)&stack0xffffffe8,pCVar1);
    local_c._0_1_ = 2;
    CString::operator=((CString *)&stack0x00000000,pCVar1);
    local_c._0_1_ = 1;
    CString::~CString((CString *)&stack0xffffffe4);
    local_c = (void *)((uint)local_c._1_3_ << 8);
    CString::~CString((CString *)&stack0xffffffe8);
  }
  uVar2 = FUN_10020330(this,local_4,unaff_retaddr,param_1);
  local_c = (void *)0xffffffff;
  CString::~CString((CString *)&stack0x00000000);
  ExceptionList = local_14;
  return uVar2;
}


// ---- FUN_1001fd90 @ 1001fd90

uint __thiscall FUN_1001fd90(void *this,undefined4 param_1,char *param_2)

{
  CString *pCVar1;
  uint uVar2;
  LPCSTR unaff_retaddr;
  void *local_14;
  CString local_10 [4];
  void *local_c;
  undefined1 *local_8;
  LPCSTR local_4;
  
  local_4 = (LPCSTR)0xffffffff;
  local_8 = &LAB_10029128;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CString::CString((CString *)&param_2,param_2);
  local_4 = (LPCSTR)0x0;
  if (*(int *)(*(int *)((int)this + 8) + -8) != 0) {
    pCVar1 = (CString *)operator+(local_10,(char *)((int)this + 8));
    local_8 = (undefined1 *)CONCAT31(local_8._1_3_,1);
    pCVar1 = (CString *)operator+((CString *)&stack0xffffffe8,pCVar1);
    local_c._0_1_ = 2;
    CString::operator=((CString *)&stack0x00000000,pCVar1);
    local_c._0_1_ = 1;
    CString::~CString((CString *)&stack0xffffffe4);
    local_c = (void *)((uint)local_c._1_3_ << 8);
    CString::~CString((CString *)&stack0xffffffe8);
  }
  uVar2 = FUN_100202a0(this,local_4,unaff_retaddr,param_1);
  local_c = (void *)0xffffffff;
  CString::~CString((CString *)&stack0x00000000);
  ExceptionList = local_14;
  return uVar2;
}


// ---- FUN_1001fe60 @ 1001fe60

UINT __thiscall FUN_1001fe60(void *this,UINT param_1,char *param_2)

{
  CString *pCVar1;
  UINT UVar2;
  LPCSTR unaff_retaddr;
  void *local_14;
  CString local_10 [4];
  void *local_c;
  undefined1 *local_8;
  LPCSTR local_4;
  
  local_4 = (LPCSTR)0xffffffff;
  local_8 = &LAB_10029158;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CString::CString((CString *)&param_2,param_2);
  local_4 = (LPCSTR)0x0;
  if (*(int *)(*(int *)((int)this + 8) + -8) != 0) {
    pCVar1 = (CString *)operator+(local_10,(char *)((int)this + 8));
    local_8 = (undefined1 *)CONCAT31(local_8._1_3_,1);
    pCVar1 = (CString *)operator+((CString *)&stack0xffffffe8,pCVar1);
    local_c._0_1_ = 2;
    CString::operator=((CString *)&stack0x00000000,pCVar1);
    local_c._0_1_ = 1;
    CString::~CString((CString *)&stack0xffffffe4);
    local_c = (void *)((uint)local_c._1_3_ << 8);
    CString::~CString((CString *)&stack0xffffffe8);
  }
  UVar2 = FUN_10020090(this,local_4,unaff_retaddr,param_1);
  local_c = (void *)0xffffffff;
  CString::~CString((CString *)&stack0x00000000);
  ExceptionList = local_14;
  return UVar2;
}


// ---- FUN_1001ff30 @ 1001ff30

undefined4 FUN_1001ff30(void)

{
  undefined4 unaff_ESI;
  LPCSTR local_8;
  char local_4 [4];
  
  local_8 = (LPCSTR)0x0;
  operator+(local_4,(CString *)"Software\\Leo Electron Microscopy Ltd\\");
  RegOpenKeyExA((HKEY)0x80000002,local_8,0,0x2001f,(PHKEY)&stack0xfffffff4);
  CString::~CString((CString *)&local_8);
  return unaff_ESI;
}


// ---- FUN_1001ff80 @ 1001ff80

HKEY __fastcall FUN_1001ff80(int param_1)

{
  LSTATUS LVar1;
  HKEY local_10;
  HKEY local_c;
  HKEY local_8;
  DWORD local_4;
  
  local_8 = (HKEY)0x0;
  local_10 = (HKEY)0x0;
  local_c = (HKEY)0x0;
  LVar1 = RegOpenKeyExA((HKEY)0x80000001,"Software",0,0x2001f,&local_10);
  if (LVar1 == 0) {
    LVar1 = RegCreateKeyExA(local_10,*(LPCSTR *)(param_1 + 0xc),0,(LPSTR)0x0,0,0x2001f,
                            (LPSECURITY_ATTRIBUTES)0x0,&local_c,&local_4);
    if (LVar1 == 0) {
      RegCreateKeyExA(local_c,*(LPCSTR *)(param_1 + 0x10),0,(LPSTR)0x0,0,0x2001f,
                      (LPSECURITY_ATTRIBUTES)0x0,&local_8,&local_4);
    }
  }
  if (local_10 != (HKEY)0x0) {
    RegCloseKey(local_10);
  }
  if (local_c != (HKEY)0x0) {
    RegCloseKey(local_c);
  }
  return local_8;
}


// ---- FUN_10020030 @ 10020030

undefined4 __thiscall FUN_10020030(void *this,LPCSTR param_1)

{
  HKEY hKey;
  HKEY local_8;
  DWORD local_4;
  
  local_8 = (HKEY)0x0;
  hKey = FUN_1001ff80((int)this);
  if (hKey == (HKEY)0x0) {
    return 0;
  }
  RegCreateKeyExA(hKey,param_1,0,(LPSTR)0x0,0,0x2001f,(LPSECURITY_ATTRIBUTES)0x0,&local_8,&local_4);
  RegCloseKey(hKey);
  return local_8;
}


// ---- FUN_10020090 @ 10020090

UINT __thiscall FUN_10020090(void *this,LPCSTR param_1,LPCSTR param_2,UINT param_3)

{
  HKEY hKey;
  LSTATUS LVar1;
  UINT UVar2;
  UINT local_8;
  DWORD local_4;
  
  if (*(int *)(*(int *)((int)this + 0xc) + -8) == 0) {
    UVar2 = GetPrivateProfileIntA(param_1,param_2,param_3,*(LPCSTR *)((int)this + 0x10));
    return UVar2;
  }
  hKey = (HKEY)FUN_10020030(this,param_1);
  if (hKey != (HKEY)0x0) {
    param_1 = (LPCSTR)0x4;
    LVar1 = RegQueryValueExA(hKey,param_2,(LPDWORD)0x0,&local_4,(LPBYTE)&local_8,(LPDWORD)&param_1);
    RegCloseKey(hKey);
    if (LVar1 == 0) {
      return local_8;
    }
  }
  return param_3;
}


// ---- FUN_10020120 @ 10020120

CString * FUN_10020120(void)

{
  HKEY hKey;
  LSTATUS LVar1;
  LPBYTE lpData;
  void *this;
  void *in_stack_00001000;
  CString *in_stack_00001010;
  LPCSTR in_stack_00001014;
  LPCSTR in_stack_00001018;
  code *in_stack_0000101c;
  undefined1 **lpcbData;
  void *local_c;
  undefined1 *local_8;
  DWORD local_4;
  
  local_4 = 0xffffffff;
  local_8 = &LAB_1002917b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_10028450();
  local_4 = 0;
  if (*(int *)((int)this + 0xc) == 0) {
    if (in_stack_0000101c == (code *)0x0) {
      in_stack_0000101c = afxChNil_exref;
    }
    GetPrivateProfileStringA
              (in_stack_00001014,in_stack_00001018,(LPCSTR)in_stack_0000101c,&stack0x00000000,0x1000
               ,*(LPCSTR *)((int)this + 0x10));
    in_stack_0000101c = (code *)register0x00000010;
  }
  else {
    hKey = (HKEY)FUN_10020030(this,in_stack_00001014);
    if (hKey != (HKEY)0x0) {
      CString::CString((CString *)&local_c);
      LVar1 = RegQueryValueExA(hKey,in_stack_00001018,(LPDWORD)0x0,&local_4,(LPBYTE)0x0,
                               (LPDWORD)&local_8);
      if (LVar1 == 0) {
        lpcbData = &local_8;
        lpData = (LPBYTE)CString::GetBuffer((CString *)&local_c,(int)local_8);
        LVar1 = RegQueryValueExA(hKey,in_stack_00001018,(LPDWORD)0x0,&local_4,lpData,
                                 (LPDWORD)lpcbData);
        CString::ReleaseBuffer((CString *)&local_c,-1);
      }
      RegCloseKey(hKey);
      if (LVar1 == 0) {
        CString::CString(in_stack_00001010,(CString *)&local_c);
        CString::~CString((CString *)&local_c);
        ExceptionList = in_stack_00001000;
        return in_stack_00001010;
      }
      CString::CString(in_stack_00001010,(char *)in_stack_0000101c);
      CString::~CString((CString *)&local_c);
      ExceptionList = in_stack_00001000;
      return in_stack_00001010;
    }
  }
  CString::CString(in_stack_00001010,(char *)in_stack_0000101c);
  ExceptionList = in_stack_00001000;
  return in_stack_00001010;
}


// ---- FUN_100202a0 @ 100202a0

uint __thiscall FUN_100202a0(void *this,LPCSTR param_1,LPCSTR param_2,undefined4 param_3)

{
  HKEY hKey;
  LSTATUS LVar1;
  uint uVar2;
  CHAR local_10 [16];
  
  if (*(int *)((int)this + 0xc) == 0) {
    wsprintfA(local_10,&DAT_10038894,param_3);
    uVar2 = WritePrivateProfileStringA(param_1,param_2,local_10,*(LPCSTR *)((int)this + 0x10));
    return uVar2;
  }
  hKey = (HKEY)FUN_10020030(this,param_1);
  if (hKey == (HKEY)0x0) {
    return 0;
  }
  LVar1 = RegSetValueExA(hKey,param_2,0,4,(BYTE *)&param_3,4);
  RegCloseKey(hKey);
  return (uint)(LVar1 == 0);
}


// ---- FUN_10020330 @ 10020330

uint __thiscall FUN_10020330(void *this,LPCSTR param_1,LPCSTR param_2,BYTE *param_3)

{
  HKEY hKey;
  int iVar1;
  uint uVar2;
  
  if (*(int *)((int)this + 0xc) == 0) {
    uVar2 = WritePrivateProfileStringA
                      (param_1,param_2,(LPCSTR)param_3,*(LPCSTR *)((int)this + 0x10));
    return uVar2;
  }
  if (param_2 == (LPCSTR)0x0) {
    hKey = FUN_1001ff80((int)this);
    if (hKey == (HKEY)0x0) {
      return 0;
    }
    iVar1 = RegDeleteKeyA(hKey,param_1);
  }
  else if (param_3 == (BYTE *)0x0) {
    hKey = (HKEY)FUN_10020030(this,param_1);
    if (hKey == (HKEY)0x0) {
      return 0;
    }
    iVar1 = RegDeleteValueA(hKey,param_2);
  }
  else {
    hKey = (HKEY)FUN_10020030(this,param_1);
    if (hKey == (HKEY)0x0) {
      return 0;
    }
    iVar1 = lstrlenA((LPCSTR)param_3);
    iVar1 = RegSetValueExA(hKey,param_2,0,1,param_3,iVar1 + 1);
  }
  RegCloseKey(hKey);
  return (uint)(iVar1 == 0);
}


// ---- FUN_100203f0 @ 100203f0

bool __thiscall FUN_100203f0(void *this,LPCSTR param_1)

{
  bool bVar1;
  CString *pCVar2;
  void *local_10;
  void *pvStack_c;
  undefined1 *local_8;
  undefined4 local_4;
  
  local_8 = &LAB_100291a0;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  local_10 = this;
  pCVar2 = (CString *)operator+((char *)&local_10,(CString *)s_LEO_32__100389dc);
  local_8._0_1_ = 1;
  CString::operator=((CString *)((int)this + 4),pCVar2);
  local_8 = (undefined1 *)((uint)local_8._1_3_ << 8);
  CString::~CString((CString *)&stack0xffffffec);
  bVar1 = FUN_1001fba0(param_1);
  CString::operator=((CString *)((int)this + 4),s_LEO_32_100389d0);
  local_8 = (undefined1 *)0xffffffff;
  CString::~CString((CString *)&stack0x00000000);
  ExceptionList = local_10;
  return bVar1;
}


// ---- FUN_10020490 @ 10020490

undefined4 __thiscall FUN_10020490(void *this,LPCSTR param_1,undefined4 param_2)

{
  CString *pCVar1;
  undefined4 uVar2;
  void *local_10;
  void *pvStack_c;
  undefined1 *local_8;
  undefined4 local_4;
  
  local_8 = &LAB_100291c0;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  local_10 = this;
  pCVar1 = (CString *)operator+((char *)&local_10,(CString *)s_LEO_32__100389dc);
  local_8._0_1_ = 1;
  CString::operator=((CString *)((int)this + 4),pCVar1);
  local_8 = (undefined1 *)((uint)local_8._1_3_ << 8);
  CString::~CString((CString *)&stack0xffffffec);
  uVar2 = FUN_1001fb40(param_1,param_2);
  CString::operator=((CString *)((int)this + 4),s_LEO_32_100389d0);
  local_8 = (undefined1 *)0xffffffff;
  CString::~CString((CString *)&stack0x00000000);
  ExceptionList = local_10;
  return uVar2;
}


// ---- SRV_Set_State @ 10020530

void SRV_Set_State(void)

{
                    /* WARNING: Could not recover jumptable at 0x10020530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SRV_Set_State();
  return;
}


// ---- SRV_Execute_Command @ 10020536

void SRV_Execute_Command(void)

{
                    /* WARNING: Could not recover jumptable at 0x10020536. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SRV_Execute_Command();
  return;
}


// ---- SRV_Get_State @ 1002053c

void SRV_Get_State(void)

{
                    /* WARNING: Could not recover jumptable at 0x1002053c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SRV_Get_State();
  return;
}


// ---- SRV_Get_Value @ 10020542

void SRV_Get_Value(void)

{
                    /* WARNING: Could not recover jumptable at 0x10020542. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SRV_Get_Value();
  return;
}


// ---- SRV_Set_Value @ 10020548

void SRV_Set_Value(void)

{
                    /* WARNING: Could not recover jumptable at 0x10020548. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SRV_Set_Value();
  return;
}


// ---- SRV_Import_Export @ 1002054e

void SRV_Import_Export(void)

{
                    /* WARNING: Could not recover jumptable at 0x1002054e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SRV_Import_Export();
  return;
}


// ---- PMSetStringValue @ 10020554

void PMSetStringValue(void)

{
                    /* WARNING: Could not recover jumptable at 0x10020554. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  PMSetStringValue();
  return;
}


// ---- PMGetMnemonic @ 1002055a

void PMGetMnemonic(void)

{
                    /* WARNING: Could not recover jumptable at 0x1002055a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  PMGetMnemonic();
  return;
}


// ---- PMGetString @ 10020560

void PMGetString(void)

{
                    /* WARNING: Could not recover jumptable at 0x10020560. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  PMGetString();
  return;
}


// ---- PMNotifyTIFFParameter @ 10020566

void PMNotifyTIFFParameter(void)

{
                    /* WARNING: Could not recover jumptable at 0x10020566. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  PMNotifyTIFFParameter();
  return;
}


// ---- PMNotifyTIFFReset @ 1002056c

void PMNotifyTIFFReset(void)

{
                    /* WARNING: Could not recover jumptable at 0x1002056c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  PMNotifyTIFFReset();
  return;
}


// ---- PMNotifyImexDone @ 10020572

void PMNotifyImexDone(void)

{
                    /* WARNING: Could not recover jumptable at 0x10020572. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  PMNotifyImexDone();
  return;
}


// ---- PMNotifyAnnotationToFile @ 10020578

void PMNotifyAnnotationToFile(void)

{
                    /* WARNING: Could not recover jumptable at 0x10020578. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  PMNotifyAnnotationToFile();
  return;
}


// ---- PMGeneralNotifyMessage @ 1002057e

void PMGeneralNotifyMessage(void)

{
                    /* WARNING: Could not recover jumptable at 0x1002057e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  PMGeneralNotifyMessage();
  return;
}


// ---- FUN_10020590 @ 10020590

void __cdecl FUN_10020590(int param_1)

{
  int iVar1;
  
  iVar1 = 1;
  do {
    (**(code **)(*(int *)(param_1 + 4) + 0x24))(param_1,iVar1);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  *(uint *)(param_1 + 0x10) = (-(uint)(*(char *)(param_1 + 0xc) == '\0') & 0xffffff9c) + 200;
  return;
}


// ---- FUN_100205c0 @ 100205c0

void __cdecl FUN_100205c0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    (**(code **)(*(int *)(param_1 + 4) + 0x28))(param_1);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}


// ---- FUN_100205f0 @ 100205f0

void __cdecl FUN_100205f0(int param_1)

{
  int iVar1;
  
  iVar1 = (*(code *)**(undefined4 **)(param_1 + 4))(param_1,0,0x82);
  *(undefined1 *)(iVar1 + 0x80) = 0;
  return;
}


// ---- FUN_10020610 @ 10020610

void __cdecl FUN_10020610(int param_1)

{
  int iVar1;
  
  iVar1 = (*(code *)**(undefined4 **)(param_1 + 4))(param_1,0,0x112);
  *(undefined1 *)(iVar1 + 0x111) = 0;
  return;
}


// ---- FUN_10020630 @ 10020630

void __cdecl FUN_10020630(int *param_1,int param_2,int *param_3,int param_4,char param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = param_1 + param_2 + 0x10;
  if (param_1[4] != 100) {
    *(undefined4 *)(*param_1 + 0x14) = 0x12;
    *(int *)(*param_1 + 0x18) = param_1[4];
    (**(code **)*param_1)(param_1);
  }
  if (*piVar1 == 0) {
    iVar2 = FUN_100205f0((int)param_1);
    *piVar1 = iVar2;
  }
  iVar2 = 0;
  do {
    iVar3 = (*param_3 * param_4 + 0x32) / 100;
    if (iVar3 < 1) {
      iVar3 = 1;
    }
    if (0x7fff < iVar3) {
      iVar3 = 0x7fff;
    }
    if ((param_5 != '\0') && (0xff < iVar3)) {
      iVar3 = 0xff;
    }
    iVar2 = iVar2 + 2;
    *(short *)(*piVar1 + -2 + iVar2) = (short)iVar3;
    param_3 = param_3 + 1;
  } while (iVar2 < 0x80);
  *(undefined1 *)(*piVar1 + 0x80) = 0;
  return;
}


// ---- FUN_100206e0 @ 100206e0

void __cdecl FUN_100206e0(int *param_1,int param_2,char param_3)

{
  FUN_10020630(param_1,0,(int *)&DAT_1002a480,param_2,param_3);
  FUN_10020630(param_1,1,(int *)&DAT_1002a580,param_2,param_3);
  return;
}


// ---- FUN_10020720 @ 10020720

int __cdecl FUN_10020720(int param_1)

{
  if (param_1 < 1) {
    param_1 = 1;
  }
  if (100 < param_1) {
    param_1 = 100;
  }
  if (param_1 < 0x32) {
    return (int)(5000 / (longlong)param_1);
  }
  return (100 - param_1) * 2;
}


// ---- FUN_10020750 @ 10020750

void __cdecl FUN_10020750(int *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = FUN_10020720(param_2);
  FUN_100206e0(param_1,iVar1,param_3);
  return;
}


// ---- FUN_10020780 @ 10020780

void __cdecl FUN_10020780(int *param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1[4] != 100) {
    *(undefined4 *)(*param_1 + 0x14) = 0x12;
    *(int *)(*param_1 + 0x18) = param_1[4];
    (**(code **)*param_1)(param_1);
  }
  if (param_1[0xf] == 0) {
    iVar1 = (**(code **)param_1[1])(param_1,0,0x348);
    param_1[0xf] = iVar1;
  }
  param_1[0xc] = 8;
  FUN_10020750(param_1,0x4b,'\x01');
  FUN_10020880((int)param_1);
  iVar1 = 0;
  do {
    *(undefined1 *)((int)param_1 + iVar1 + 0x70) = 0;
    iVar2 = iVar1 + 1;
    *(undefined1 *)((int)param_1 + iVar1 + 0x80) = 1;
    *(undefined1 *)((int)param_1 + iVar1 + 0x90) = 5;
    iVar1 = iVar2;
  } while (iVar2 < 0x10);
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  *(undefined1 *)(param_1 + 0x2a) = 0;
  *(undefined1 *)((int)param_1 + 0xa9) = 0;
  *(undefined1 *)((int)param_1 + 0xaa) = 0;
  if (8 < param_1[0xc]) {
    *(undefined1 *)((int)param_1 + 0xaa) = 1;
  }
  *(undefined1 *)((int)param_1 + 0xab) = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  *(undefined1 *)((int)param_1 + 0xbd) = 0;
  *(undefined2 *)((int)param_1 + 0xbe) = 1;
  *(undefined2 *)(param_1 + 0x30) = 1;
  FUN_10020950(param_1);
  return;
}


// ---- FUN_10020880 @ 10020880

void __cdecl FUN_10020880(int param_1)

{
  FUN_100208f0(param_1,(int *)(param_1 + 0x50),(undefined4 *)&DAT_1002a680,
               (undefined4 *)&DAT_1002a698);
  FUN_100208f0(param_1,(int *)(param_1 + 0x60),(undefined4 *)&DAT_1002a6d0,
               (undefined4 *)&DAT_1002a6e8);
  FUN_100208f0(param_1,(int *)(param_1 + 0x54),(undefined4 *)&DAT_1002a6a8,
               (undefined4 *)&DAT_1002a6c0);
  FUN_100208f0(param_1,(int *)(param_1 + 100),(undefined4 *)&DAT_1002a790,
               (undefined4 *)&DAT_1002a7a8);
  return;
}


// ---- FUN_100208f0 @ 100208f0

void __cdecl FUN_100208f0(int param_1,int *param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (*param_2 == 0) {
    iVar1 = FUN_10020610(param_1);
    *param_2 = iVar1;
  }
  puVar2 = (undefined4 *)*param_2;
  *puVar2 = *param_3;
  puVar2[1] = param_3[1];
  puVar2[2] = param_3[2];
  puVar2[3] = param_3[3];
  *(undefined1 *)(puVar2 + 4) = *(undefined1 *)(param_3 + 4);
  puVar2 = (undefined4 *)(*param_2 + 0x11);
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_4;
    param_4 = param_4 + 1;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)(*param_2 + 0x111) = 0;
  return;
}


// ---- FUN_10020950 @ 10020950

void __cdecl FUN_10020950(int *param_1)

{
  switch(param_1[9]) {
  case 0:
    FUN_100209e0(param_1,0);
    return;
  case 1:
    FUN_100209e0(param_1,1);
    return;
  case 2:
    FUN_100209e0(param_1,3);
    return;
  case 3:
    FUN_100209e0(param_1,3);
    return;
  case 4:
    FUN_100209e0(param_1,4);
    return;
  case 5:
    FUN_100209e0(param_1,5);
    return;
  default:
    *(undefined4 *)(*param_1 + 0x14) = 7;
    (**(code **)*param_1)(param_1);
    return;
  }
}


// ---- FUN_100209e0 @ 100209e0

int * __cdecl FUN_100209e0(int *param_1,int param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  if (param_1[4] != 100) {
    *(undefined4 *)(*param_1 + 0x14) = 0x12;
    *(int *)(*param_1 + 0x18) = param_1[4];
    (**(code **)*param_1)(param_1);
  }
  *(undefined1 *)(param_1 + 0x2f) = 0;
  *(undefined1 *)((int)param_1 + 0xc2) = 0;
  param_1[0xe] = param_2;
  switch(param_2) {
  case 0:
    piVar2 = (int *)param_1[8];
    param_1[0xd] = (int)piVar2;
    if (((int)piVar2 < 1) || (10 < (int)piVar2)) {
      *(undefined4 *)(*param_1 + 0x14) = 0x18;
      *(int *)(*param_1 + 0x18) = param_1[0xd];
      *(undefined4 *)(*param_1 + 0x1c) = 10;
      piVar2 = (int *)(**(code **)*param_1)(param_1);
    }
    iVar4 = 0;
    if (0 < param_1[0xd]) {
      iVar3 = 0;
      do {
        piVar2 = (int *)(param_1[0xf] + iVar3);
        iVar3 = iVar3 + 0x54;
        *piVar2 = iVar4;
        iVar4 = iVar4 + 1;
        piVar2[2] = 1;
        piVar2[3] = 1;
        piVar2[4] = 0;
        piVar2[5] = 0;
        piVar2[6] = 0;
      } while (iVar4 < param_1[0xd]);
      return piVar2;
    }
    break;
  case 1:
    puVar1 = (undefined4 *)param_1[0xf];
    *(undefined1 *)(param_1 + 0x2f) = 1;
    param_1[0xd] = 1;
    *puVar1 = 1;
    puVar1[2] = 1;
    puVar1[3] = 1;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    return (int *)0x0;
  case 2:
    puVar1 = (undefined4 *)param_1[0xf];
    *(undefined1 *)((int)param_1 + 0xc2) = 1;
    param_1[0xd] = 3;
    *puVar1 = 0x52;
    puVar1[2] = 1;
    puVar1[3] = 1;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    iVar4 = param_1[0xf];
    *(undefined4 *)(iVar4 + 0x54) = 0x47;
    *(undefined4 *)(iVar4 + 0x5c) = 1;
    *(undefined4 *)(iVar4 + 0x60) = 1;
    *(undefined4 *)(iVar4 + 100) = 0;
    *(undefined4 *)(iVar4 + 0x68) = 0;
    *(undefined4 *)(iVar4 + 0x6c) = 0;
    iVar4 = param_1[0xf];
    *(int *)(iVar4 + 0xa8) = 0x42;
    *(undefined4 *)(iVar4 + 0xb0) = 1;
    *(undefined4 *)(iVar4 + 0xb4) = 1;
    *(undefined4 *)(iVar4 + 0xb8) = 0;
    *(undefined4 *)(iVar4 + 0xbc) = 0;
    *(undefined4 *)(iVar4 + 0xc0) = 0;
    return (int *)(iVar4 + 0xa8);
  case 3:
    puVar1 = (undefined4 *)param_1[0xf];
    param_1[0xd] = 3;
    *(undefined1 *)(param_1 + 0x2f) = 1;
    *puVar1 = 1;
    puVar1[2] = 2;
    puVar1[3] = 2;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    iVar4 = param_1[0xf];
    *(undefined4 *)(iVar4 + 0x54) = 2;
    *(undefined4 *)(iVar4 + 0x5c) = 1;
    *(undefined4 *)(iVar4 + 0x60) = 1;
    *(undefined4 *)(iVar4 + 100) = 1;
    *(undefined4 *)(iVar4 + 0x68) = 1;
    *(undefined4 *)(iVar4 + 0x6c) = 1;
    iVar4 = param_1[0xf];
    *(int *)(iVar4 + 0xa8) = 3;
    *(undefined4 *)(iVar4 + 0xb0) = 1;
    *(undefined4 *)(iVar4 + 0xb4) = 1;
    *(undefined4 *)(iVar4 + 0xb8) = 1;
    *(undefined4 *)(iVar4 + 0xbc) = 1;
    *(undefined4 *)(iVar4 + 0xc0) = 1;
    return (int *)(iVar4 + 0xa8);
  case 4:
    puVar1 = (undefined4 *)param_1[0xf];
    *(undefined1 *)((int)param_1 + 0xc2) = 1;
    param_1[0xd] = 4;
    *puVar1 = 0x43;
    puVar1[2] = 1;
    puVar1[3] = 1;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    iVar4 = param_1[0xf];
    *(undefined4 *)(iVar4 + 0x54) = 0x4d;
    *(undefined4 *)(iVar4 + 0x5c) = 1;
    *(undefined4 *)(iVar4 + 0x60) = 1;
    *(undefined4 *)(iVar4 + 100) = 0;
    *(undefined4 *)(iVar4 + 0x68) = 0;
    *(undefined4 *)(iVar4 + 0x6c) = 0;
    iVar4 = param_1[0xf];
    *(undefined4 *)(iVar4 + 0xa8) = 0x59;
    *(undefined4 *)(iVar4 + 0xb0) = 1;
    *(undefined4 *)(iVar4 + 0xb4) = 1;
    *(undefined4 *)(iVar4 + 0xb8) = 0;
    *(undefined4 *)(iVar4 + 0xbc) = 0;
    *(undefined4 *)(iVar4 + 0xc0) = 0;
    iVar4 = param_1[0xf];
    *(int *)(iVar4 + 0xfc) = 0x4b;
    *(undefined4 *)(iVar4 + 0x104) = 1;
    *(undefined4 *)(iVar4 + 0x108) = 1;
    *(undefined4 *)(iVar4 + 0x10c) = 0;
    *(undefined4 *)(iVar4 + 0x110) = 0;
    *(undefined4 *)(iVar4 + 0x114) = 0;
    return (int *)(iVar4 + 0xfc);
  case 5:
    puVar1 = (undefined4 *)param_1[0xf];
    param_1[0xd] = 4;
    *(undefined1 *)((int)param_1 + 0xc2) = 1;
    *puVar1 = 1;
    puVar1[2] = 2;
    puVar1[3] = 2;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    iVar4 = param_1[0xf];
    *(undefined4 *)(iVar4 + 0x54) = 2;
    *(undefined4 *)(iVar4 + 0x5c) = 1;
    *(undefined4 *)(iVar4 + 0x60) = 1;
    *(undefined4 *)(iVar4 + 100) = 1;
    *(undefined4 *)(iVar4 + 0x68) = 1;
    *(undefined4 *)(iVar4 + 0x6c) = 1;
    iVar4 = param_1[0xf];
    *(undefined4 *)(iVar4 + 0xa8) = 3;
    *(undefined4 *)(iVar4 + 0xb0) = 1;
    *(undefined4 *)(iVar4 + 0xb4) = 1;
    *(undefined4 *)(iVar4 + 0xb8) = 1;
    *(undefined4 *)(iVar4 + 0xbc) = 1;
    *(undefined4 *)(iVar4 + 0xc0) = 1;
    iVar4 = param_1[0xf];
    *(undefined4 *)(iVar4 + 0xfc) = 4;
    *(undefined4 *)(iVar4 + 0x104) = 2;
    *(undefined4 *)(iVar4 + 0x108) = 2;
    *(undefined4 *)(iVar4 + 0x10c) = 0;
    *(undefined4 *)(iVar4 + 0x110) = 0;
    *(undefined4 *)(iVar4 + 0x114) = 0;
    piVar2 = (int *)(iVar4 + 0xfc);
    break;
  default:
    *(undefined4 *)(*param_1 + 0x14) = 8;
    piVar2 = (int *)(**(code **)*param_1)(param_1);
    return piVar2;
  }
  return piVar2;
}


// ---- FUN_10020d00 @ 10020d00

void __cdecl FUN_10020d00(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  
  iVar1 = param_1[0xd];
  if (param_1[4] != 100) {
    *(undefined4 *)(*param_1 + 0x14) = 0x12;
    *(int *)(*param_1 + 0x18) = param_1[4];
    (**(code **)*param_1)(param_1);
  }
  if ((iVar1 == 3) && (param_1[0xe] == 3)) {
    iVar4 = 10;
  }
  else {
    iVar4 = iVar1 * 4 + 2;
    if (4 < iVar1) {
      iVar4 = iVar1 * 6;
    }
  }
  piVar2 = (int *)(**(code **)param_1[1])(param_1,0,iVar4 * 0x24);
  param_1[0x29] = (int)piVar2;
  param_1[0x28] = iVar4;
  if ((iVar1 == 3) && (param_1[0xe] == 3)) {
    puVar3 = (undefined4 *)FUN_10020f40(piVar2,3,0,1);
    puVar3 = (undefined4 *)FUN_10020eb0(puVar3,0,1,5,0,2);
    puVar3 = (undefined4 *)FUN_10020eb0(puVar3,2,1,0x3f,0,1);
    puVar3 = (undefined4 *)FUN_10020eb0(puVar3,1,1,0x3f,0,1);
    puVar3 = (undefined4 *)FUN_10020eb0(puVar3,0,6,0x3f,0,2);
    piVar2 = (int *)FUN_10020eb0(puVar3,0,1,0x3f,2,1);
    puVar3 = (undefined4 *)FUN_10020f40(piVar2,3,1,0);
    puVar3 = (undefined4 *)FUN_10020eb0(puVar3,2,1,0x3f,1,0);
    puVar3 = (undefined4 *)FUN_10020eb0(puVar3,1,1,0x3f,1,0);
    FUN_10020eb0(puVar3,0,1,0x3f,1,0);
    return;
  }
  puVar3 = (undefined4 *)FUN_10020f40(piVar2,iVar1,0,1);
  puVar3 = (undefined4 *)FUN_10020ef0(puVar3,iVar1,1,5,0,2);
  puVar3 = (undefined4 *)FUN_10020ef0(puVar3,iVar1,6,0x3f,0,2);
  piVar2 = (int *)FUN_10020ef0(puVar3,iVar1,1,0x3f,2,1);
  puVar3 = (undefined4 *)FUN_10020f40(piVar2,iVar1,1,0);
  FUN_10020ef0(puVar3,iVar1,1,0x3f,1,0);
  return;
}


// ---- FUN_10020eb0 @ 10020eb0

void __cdecl
FUN_10020eb0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  *param_1 = 1;
  param_1[1] = param_2;
  param_1[5] = param_3;
  param_1[6] = param_4;
  param_1[7] = param_5;
  param_1[8] = param_6;
  return;
}


// ---- FUN_10020ef0 @ 10020ef0

void __cdecl
FUN_10020ef0(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_2 < 1) {
    return;
  }
  do {
    *param_1 = 1;
    param_1[1] = iVar1;
    iVar1 = iVar1 + 1;
    param_1[5] = param_3;
    param_1[6] = param_4;
    param_1[7] = param_5;
    param_1[8] = param_6;
    param_1 = param_1 + 9;
  } while (iVar1 < param_2);
  return;
}


// ---- FUN_10020f40 @ 10020f40

void __cdecl FUN_10020f40(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  
  if (param_2 < 5) {
    iVar1 = 0;
    *param_1 = param_2;
    if (0 < param_2) {
      do {
        param_1[iVar1 + 1] = iVar1;
        iVar1 = iVar1 + 1;
      } while (iVar1 < param_2);
    }
    param_1[6] = 0;
    param_1[5] = 0;
    param_1[7] = param_3;
    param_1[8] = param_4;
    return;
  }
  FUN_10020ef0(param_1,param_2,0,0,param_3,param_4);
  return;
}


// ---- FUN_10020fa0 @ 10020fa0

void __cdecl FUN_10020fa0(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  param_1[1] = 0;
  if (param_2 != 0x3d) {
    *(undefined4 *)(*param_1 + 0x14) = 10;
    *(undefined4 *)(*param_1 + 0x18) = 0x3d;
    *(int *)(*param_1 + 0x1c) = param_2;
    (**(code **)*param_1)(param_1);
  }
  if (param_3 != 0x158) {
    *(undefined4 *)(*param_1 + 0x14) = 0x13;
    *(undefined4 *)(*param_1 + 0x18) = 0x158;
    *(int *)(*param_1 + 0x1c) = param_3;
    (**(code **)*param_1)(param_1);
  }
  iVar1 = *param_1;
  piVar3 = param_1;
  for (iVar2 = 0x56; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar3 = 0;
    piVar3 = piVar3 + 1;
  }
  *param_1 = iVar1;
  *(undefined1 *)(param_1 + 3) = 0;
  FUN_10021600(param_1);
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  iVar1 = 4;
  piVar3 = param_1 + 0x14;
  do {
    *piVar3 = 0;
    iVar1 = iVar1 + -1;
    piVar3[4] = 0;
    piVar3 = piVar3 + 1;
  } while (iVar1 != 0);
  param_1[10] = 0;
  param_1[0xb] = 0x3ff00000;
  param_1[4] = 100;
  return;
}


// ---- FUN_10021070 @ 10021070

void __cdecl FUN_10021070(int param_1)

{
  FUN_100205c0(param_1);
  return;
}


// ---- FUN_10021080 @ 10021080

void __cdecl FUN_10021080(int param_1,undefined1 param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 4;
  piVar2 = (int *)(param_1 + 0x40);
  do {
    if (*piVar2 != 0) {
      *(undefined1 *)(*piVar2 + 0x80) = param_2;
    }
    piVar2 = piVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  piVar2 = (int *)(param_1 + 0x50);
  iVar1 = 4;
  do {
    if (*piVar2 != 0) {
      *(undefined1 *)(*piVar2 + 0x111) = param_2;
    }
    if (piVar2[4] != 0) {
      *(undefined1 *)(piVar2[4] + 0x111) = param_2;
    }
    piVar2 = piVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}


// ---- FUN_100210d0 @ 100210d0

void __cdecl FUN_100210d0(int *param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  
  iVar1 = param_1[4];
  if ((iVar1 == 0x65) || (iVar1 == 0x66)) {
    if ((uint)param_1[0x31] < (uint)param_1[7]) {
      *(undefined4 *)(*param_1 + 0x14) = 0x42;
      (**(code **)*param_1)(param_1);
    }
    (**(code **)(param_1[0x4c] + 8))(param_1);
  }
  else if (iVar1 != 0x67) {
    *(undefined4 *)(*param_1 + 0x14) = 0x12;
    *(int *)(*param_1 + 0x18) = param_1[4];
    (**(code **)*param_1)(param_1);
  }
  cVar2 = *(char *)(param_1[0x4c] + 0xd);
  while (cVar2 == '\0') {
    uVar3 = 0;
    (**(code **)param_1[0x4c])(param_1);
    if (param_1[0x35] != 0) {
      do {
        if (param_1[2] != 0) {
          *(uint *)(param_1[2] + 4) = uVar3;
          *(int *)(param_1[2] + 8) = param_1[0x35];
          (**(code **)param_1[2])(param_1);
        }
        cVar2 = (**(code **)(param_1[0x4f] + 4))(param_1,0);
        if (cVar2 == '\0') {
          *(undefined4 *)(*param_1 + 0x14) = 0x16;
          (**(code **)*param_1)(param_1);
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < (uint)param_1[0x35]);
    }
    (**(code **)(param_1[0x4c] + 8))(param_1);
    cVar2 = *(char *)(param_1[0x4c] + 0xd);
  }
  (**(code **)(param_1[0x50] + 0x10))(param_1);
  (**(code **)(param_1[5] + 0x10))(param_1);
  FUN_10020590((int)param_1);
  return;
}


// ---- FUN_100211e0 @ 100211e0

void __cdecl FUN_100211e0(undefined4 *param_1)

{
  param_1[1] = &LAB_10021280;
  *param_1 = FUN_10021230;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[5] = 0;
  param_1[2] = &LAB_10021260;
  param_1[3] = &LAB_100212c0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[4] = &LAB_10021370;
  param_1[0x1c] = &PTR_s_Bogus_message_code__d_1002a858;
  param_1[0x1d] = 0x77;
  param_1[0x20] = 0;
  return;
}


// ---- FUN_10021230 @ 10021230

void __cdecl FUN_10021230(int *param_1)

{
  (**(code **)(*param_1 + 8))(param_1);
  FUN_100205c0((int)param_1);
                    /* WARNING: Subroutine does not return */
  exit(1);
}


// ---- FUN_10021390 @ 10021390

void __cdecl FUN_10021390(int *param_1,char param_2)

{
  if (param_1[4] != 100) {
    *(undefined4 *)(*param_1 + 0x14) = 0x12;
    *(int *)(*param_1 + 0x18) = param_1[4];
    (**(code **)*param_1)(param_1);
  }
  if (param_2 != '\0') {
    FUN_10021080((int)param_1,0);
  }
  (**(code **)(*param_1 + 0x10))(param_1);
  (**(code **)(param_1[5] + 8))(param_1);
  FUN_10022ae0(param_1);
  (**(code **)param_1[0x4c])(param_1);
  param_1[0x31] = 0;
  param_1[4] = 0x66 - (uint)((char)param_1[0x2a] == '\0');
  return;
}


// ---- FUN_10021410 @ 10021410

int __cdecl FUN_10021410(int *param_1,undefined4 param_2,uint param_3)

{
  int iStack_4;
  
  if (param_1[4] != 0x65) {
    *(undefined4 *)(*param_1 + 0x14) = 0x12;
    *(int *)(*param_1 + 0x18) = param_1[4];
    (**(code **)*param_1)(param_1);
  }
  if ((uint)param_1[7] <= (uint)param_1[0x31]) {
    *(undefined4 *)(*param_1 + 0x14) = 0x77;
    (**(code **)(*param_1 + 4))(param_1,0xffffffff);
  }
  if (param_1[2] != 0) {
    *(int *)(param_1[2] + 4) = param_1[0x31];
    *(int *)(param_1[2] + 8) = param_1[7];
    (**(code **)param_1[2])(param_1);
  }
  if (*(char *)(param_1[0x4c] + 0xc) != '\0') {
    (**(code **)(param_1[0x4c] + 4))(param_1);
  }
  if ((uint)(param_1[7] - param_1[0x31]) < param_3) {
    param_3 = param_1[7] - param_1[0x31];
  }
  iStack_4 = 0;
  (**(code **)(param_1[0x4d] + 4))(param_1,param_2,&iStack_4,param_3);
  param_1[0x31] = param_1[0x31] + iStack_4;
  return iStack_4;
}


// ---- FUN_100214d0 @ 100214d0

void __cdecl FUN_100214d0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x14) == 0) {
    uVar2 = (*(code *)**(undefined4 **)(param_1 + 4))(param_1,0,0x1c);
    *(undefined4 *)(param_1 + 0x14) = uVar2;
  }
  iVar1 = *(int *)(param_1 + 0x14);
  *(undefined1 **)(iVar1 + 8) = &LAB_10021510;
  *(undefined1 **)(iVar1 + 0xc) = &LAB_10021540;
  *(undefined1 **)(iVar1 + 0x10) = &LAB_10021590;
  *(undefined4 *)(iVar1 + 0x14) = param_2;
  return;
}


// ---- FUN_10021600 @ 10021600

void __cdecl FUN_10021600(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  char *_Src;
  int iVar3;
  char cStack_5;
  int local_4;
  
  param_1[1] = 0;
  local_4 = FUN_10022d40();
  puVar1 = (undefined4 *)FUN_10022bc0(param_1,0x50);
  if (puVar1 == (undefined4 *)0x0) {
    FUN_10022d50();
    *(undefined4 *)(*param_1 + 0x14) = 0x35;
    *(undefined4 *)(*param_1 + 0x18) = 0;
    (**(code **)*param_1)(param_1);
  }
  *puVar1 = FUN_10021740;
  puVar1[1] = FUN_10021880;
  puVar1[2] = FUN_10021920;
  puVar1[3] = FUN_100219d0;
  puVar1[4] = &LAB_10021a90;
  puVar1[5] = &LAB_10021b00;
  puVar1[6] = FUN_10021b70;
  puVar1[7] = &LAB_10021d10;
  puVar1[8] = &LAB_10021ee0;
  iVar3 = 1;
  puVar1[9] = FUN_100220b0;
  puVar1[10] = &LAB_100221b0;
  puVar1[0xb] = local_4;
  puVar2 = puVar1 + 0xd;
  do {
    *puVar2 = 0;
    iVar3 = iVar3 + -1;
    puVar2[2] = 0;
    puVar2 = puVar2 + -1;
  } while (-1 < iVar3);
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0x50;
  param_1[1] = (int)puVar1;
  _Src = getenv(s_JPEGMEM_10039b78);
  if (_Src != (char *)0x0) {
    cStack_5 = 'x';
    iVar3 = sscanf(_Src,s__ld_c_10039b70,&local_4,&cStack_5);
    if (0 < iVar3) {
      if ((cStack_5 == 'm') || (cStack_5 == 'M')) {
        local_4 = local_4 * 1000;
      }
      puVar1[0xb] = local_4 * 1000;
    }
  }
  return;
}


// ---- FUN_10021740 @ 10021740

int __cdecl FUN_10021740(int *param_1,int param_2,uint param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 *local_c;
  
  iVar5 = param_1[1];
  if (0xffe0 < param_3) {
    FUN_10021860(param_1,1);
  }
  if ((param_3 & 7) != 0) {
    param_3 = (param_3 - (param_3 & 7)) + 8;
  }
  if ((param_2 < 0) || (1 < param_2)) {
    *(undefined4 *)(*param_1 + 0x14) = 0xc;
    *(int *)(*param_1 + 0x18) = param_2;
    (**(code **)*param_1)(param_1);
  }
  iVar3 = param_2 * 4;
  local_c = (undefined4 *)0x0;
  puVar4 = (undefined4 *)(iVar3 + 0x30 + iVar5);
  puVar7 = (undefined4 *)*puVar4;
  if (puVar7 != (undefined4 *)0x0) {
    do {
      puVar6 = puVar7;
      puVar7 = puVar6;
      if (param_3 <= (uint)puVar6[2]) break;
      puVar7 = (undefined4 *)*puVar6;
      local_c = puVar6;
    } while (puVar7 != (undefined4 *)0x0);
    if (puVar7 != (undefined4 *)0x0) goto LAB_10021846;
  }
  iVar1 = param_3 + 0x10;
  if (local_c == (undefined4 *)0x0) {
    uVar8 = *(uint *)(&DAT_1002aa40 + iVar3);
  }
  else {
    uVar8 = *(uint *)(&DAT_1002aa48 + iVar3);
  }
  if (0xfff0U - iVar1 < uVar8) {
    uVar8 = 0xfff0U - iVar1;
  }
  while (puVar7 = (undefined4 *)FUN_10022bc0(param_1,uVar8 + iVar1), puVar7 == (undefined4 *)0x0) {
    uVar8 = uVar8 >> 1;
    if (uVar8 < 0x32) {
      FUN_10021860(param_1,2);
    }
  }
  piVar2 = (int *)(iVar5 + 0x48);
  *piVar2 = *piVar2 + uVar8 + iVar1;
  *puVar7 = 0;
  puVar7[1] = 0;
  puVar7[2] = uVar8 + param_3;
  if (local_c == (undefined4 *)0x0) {
    local_c = puVar4;
  }
  *local_c = puVar7;
LAB_10021846:
  iVar5 = puVar7[1];
  puVar7[1] = iVar5 + param_3;
  puVar7[2] = puVar7[2] - param_3;
  return iVar5 + 0x10 + (int)puVar7;
}


// ---- FUN_10021860 @ 10021860

void __cdecl FUN_10021860(int *param_1,undefined4 param_2)

{
  *(undefined4 *)(*param_1 + 0x14) = 0x35;
  *(undefined4 *)(*param_1 + 0x18) = param_2;
  (**(code **)*param_1)(param_1);
  return;
}


// ---- FUN_10021880 @ 10021880

undefined4 * __cdecl FUN_10021880(int *param_1,int param_2,uint param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar3 = param_1[1];
  if (0xffe0 < param_3) {
    FUN_10021860(param_1,3);
  }
  if ((param_3 & 7) != 0) {
    param_3 = (param_3 - (param_3 & 7)) + 8;
  }
  if ((param_2 < 0) || (1 < param_2)) {
    *(undefined4 *)(*param_1 + 0x14) = 0xc;
    *(int *)(*param_1 + 0x18) = param_2;
    (**(code **)*param_1)(param_1);
  }
  puVar4 = (undefined4 *)FUN_10022bc0(param_1,param_3 + 0x10);
  if (puVar4 == (undefined4 *)0x0) {
    FUN_10021860(param_1,4);
  }
  piVar1 = (int *)(iVar3 + 0x48);
  *piVar1 = *piVar1 + param_3 + 0x10;
  puVar2 = (undefined4 *)(iVar3 + 0x38 + param_2 * 4);
  *puVar4 = *puVar2;
  puVar4[1] = param_3;
  puVar4[2] = 0;
  *puVar2 = puVar4;
  return puVar4 + 4;
}


// ---- FUN_10021920 @ 10021920

int __cdecl FUN_10021920(int *param_1,int param_2,uint param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  
  iVar2 = param_1[1];
  uVar1 = (uint)(0xffe0 / (ulonglong)param_3);
  if (uVar1 == 0) {
    *(undefined4 *)(*param_1 + 0x14) = 0x45;
    (**(code **)*param_1)(param_1);
  }
  if ((int)param_4 <= (int)uVar1) {
    uVar1 = param_4;
  }
  *(uint *)(iVar2 + 0x4c) = uVar1;
  uVar6 = 0;
  iVar2 = FUN_10021740(param_1,param_2,param_4 << 2);
  if (param_4 != 0) {
    do {
      uVar3 = param_4 - uVar6;
      if (uVar1 <= param_4 - uVar6) {
        uVar3 = uVar1;
      }
      puVar4 = FUN_10021880(param_1,param_2,uVar3 * param_3);
      if (uVar3 != 0) {
        puVar5 = (undefined4 *)(iVar2 + uVar6 * 4);
        uVar6 = uVar6 + uVar3;
        uVar1 = uVar3;
        do {
          *puVar5 = puVar4;
          puVar5 = puVar5 + 1;
          puVar4 = (undefined4 *)((int)puVar4 + param_3);
          uVar1 = uVar1 - 1;
        } while (uVar1 != 0);
      }
      uVar1 = uVar3;
    } while (uVar6 < param_4);
  }
  return iVar2;
}


// ---- FUN_100219d0 @ 100219d0

int __cdecl FUN_100219d0(int *param_1,int param_2,int param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  
  iVar2 = param_1[1];
  uVar1 = (uint)(0xffe0 / (ulonglong)(uint)(param_3 * 0x80));
  if (uVar1 == 0) {
    *(undefined4 *)(*param_1 + 0x14) = 0x45;
    (**(code **)*param_1)(param_1);
  }
  if ((int)param_4 <= (int)uVar1) {
    uVar1 = param_4;
  }
  *(uint *)(iVar2 + 0x4c) = uVar1;
  uVar6 = 0;
  iVar2 = FUN_10021740(param_1,param_2,param_4 << 2);
  if (param_4 != 0) {
    do {
      uVar3 = param_4 - uVar6;
      if (uVar1 <= param_4 - uVar6) {
        uVar3 = uVar1;
      }
      puVar4 = FUN_10021880(param_1,param_2,uVar3 * param_3 * 0x80);
      if (uVar3 != 0) {
        puVar5 = (undefined4 *)(iVar2 + uVar6 * 4);
        uVar6 = uVar6 + uVar3;
        uVar1 = uVar3;
        do {
          *puVar5 = puVar4;
          puVar5 = puVar5 + 1;
          puVar4 = puVar4 + param_3 * 0x20;
          uVar1 = uVar1 - 1;
        } while (uVar1 != 0);
      }
      uVar1 = uVar3;
    } while (uVar6 < param_4);
  }
  return iVar2;
}


// ---- FUN_10021b70 @ 10021b70

void __cdecl FUN_10021b70(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  iVar1 = param_1[1];
  iVar5 = 0;
  for (piVar2 = *(int **)(iVar1 + 0x40); piVar2 != (int *)0x0; piVar2 = (int *)piVar2[9]) {
    if (*piVar2 == 0) {
      iVar4 = iVar4 + piVar2[3] * piVar2[2];
      iVar5 = iVar5 + piVar2[1] * piVar2[2];
    }
  }
  for (piVar2 = *(int **)(iVar1 + 0x44); piVar2 != (int *)0x0; piVar2 = (int *)piVar2[9]) {
    if (*piVar2 == 0) {
      iVar4 = iVar4 + piVar2[3] * piVar2[2] * 0x80;
      iVar5 = iVar5 + piVar2[1] * piVar2[2] * 0x80;
    }
  }
  if (0 < iVar4) {
    iVar3 = FUN_10022bd0((int)param_1,iVar4,iVar5,*(int *)(iVar1 + 0x48));
    if (iVar3 < iVar5) {
      iVar3 = iVar3 / iVar4;
      if (iVar3 < 1) {
        iVar3 = 1;
      }
    }
    else {
      iVar3 = 1000000000;
    }
    for (piVar2 = *(int **)(iVar1 + 0x40); piVar2 != (int *)0x0; piVar2 = (int *)piVar2[9]) {
      if (*piVar2 == 0) {
        if (iVar3 < (int)((piVar2[1] - 1U) / (uint)piVar2[3] + 1)) {
          piVar2[4] = iVar3 * piVar2[3];
          FUN_10022be0(param_1,piVar2 + 10);
          *(undefined1 *)((int)piVar2 + 0x22) = 1;
        }
        else {
          piVar2[4] = piVar2[1];
        }
        iVar4 = FUN_10021920(param_1,1,piVar2[2],piVar2[4]);
        *piVar2 = iVar4;
        piVar2[5] = *(int *)(iVar1 + 0x4c);
        piVar2[6] = 0;
        piVar2[7] = 0;
        *(undefined1 *)((int)piVar2 + 0x21) = 0;
      }
    }
    for (piVar2 = *(int **)(iVar1 + 0x44); piVar2 != (int *)0x0; piVar2 = (int *)piVar2[9]) {
      if (*piVar2 == 0) {
        if (iVar3 < (int)((piVar2[1] - 1U) / (uint)piVar2[3] + 1)) {
          piVar2[4] = iVar3 * piVar2[3];
          FUN_10022be0(param_1,piVar2 + 10);
          *(undefined1 *)((int)piVar2 + 0x22) = 1;
        }
        else {
          piVar2[4] = piVar2[1];
        }
        iVar4 = FUN_100219d0(param_1,1,piVar2[2],piVar2[4]);
        *piVar2 = iVar4;
        piVar2[5] = *(int *)(iVar1 + 0x4c);
        piVar2[6] = 0;
        piVar2[7] = 0;
        *(undefined1 *)((int)piVar2 + 0x21) = 0;
      }
    }
  }
  return;
}


// ---- FUN_10021e50 @ 10021e50

void __cdecl FUN_10021e50(undefined4 param_1,int *param_2,char param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = 0;
  iVar1 = param_2[2];
  iVar5 = param_2[6] * iVar1;
  if (0 < param_2[4]) {
    do {
      iVar4 = param_2[4] - iVar3;
      if (param_2[5] <= param_2[4] - iVar3) {
        iVar4 = param_2[5];
      }
      iVar2 = param_2[7] - (param_2[6] + iVar3);
      if (iVar2 <= iVar4) {
        iVar4 = iVar2;
      }
      iVar2 = param_2[1] - (param_2[6] + iVar3);
      if (iVar2 <= iVar4) {
        iVar4 = iVar2;
      }
      if (iVar4 < 1) {
        return;
      }
      iVar4 = iVar4 * iVar1;
      if (param_3 == '\0') {
        (*(code *)param_2[10])
                  (param_1,param_2 + 10,*(undefined4 *)(*param_2 + iVar3 * 4),iVar5,iVar4);
      }
      else {
        (*(code *)param_2[0xb])(param_1);
      }
      iVar5 = iVar5 + iVar4;
      iVar3 = iVar3 + param_2[5];
    } while (iVar3 < param_2[4]);
  }
  return;
}


// ---- FUN_10022020 @ 10022020

void __cdecl FUN_10022020(undefined4 param_1,int *param_2,char param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = 0;
  iVar1 = param_2[2];
  iVar5 = param_2[6] * iVar1 * 0x80;
  if (0 < param_2[4]) {
    do {
      iVar4 = param_2[4] - iVar3;
      if (param_2[5] <= param_2[4] - iVar3) {
        iVar4 = param_2[5];
      }
      iVar2 = param_2[7] - (param_2[6] + iVar3);
      if (iVar2 <= iVar4) {
        iVar4 = iVar2;
      }
      iVar2 = param_2[1] - (param_2[6] + iVar3);
      if (iVar2 <= iVar4) {
        iVar4 = iVar2;
      }
      if (iVar4 < 1) {
        return;
      }
      iVar4 = iVar4 * iVar1 * 0x80;
      if (param_3 == '\0') {
        (*(code *)param_2[10])
                  (param_1,param_2 + 10,*(undefined4 *)(*param_2 + iVar3 * 4),iVar5,iVar4);
      }
      else {
        (*(code *)param_2[0xb])(param_1);
      }
      iVar5 = iVar5 + iVar4;
      iVar3 = iVar3 + param_2[5];
    } while (iVar3 < param_2[4]);
  }
  return;
}


// ---- FUN_100220b0 @ 100220b0

void __cdecl FUN_100220b0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  
  iVar1 = param_1[1];
  if ((param_2 < 0) || (1 < param_2)) {
    *(undefined4 *)(*param_1 + 0x14) = 0xc;
    *(int *)(*param_1 + 0x18) = param_2;
    (**(code **)*param_1)(param_1);
  }
  if (param_2 == 1) {
    for (iVar2 = *(int *)(iVar1 + 0x40); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x24)) {
      if (*(char *)(iVar2 + 0x22) != '\0') {
        *(undefined1 *)(iVar2 + 0x22) = 0;
        (**(code **)(iVar2 + 0x30))(param_1,iVar2 + 0x28);
      }
    }
    *(undefined4 *)(iVar1 + 0x40) = 0;
    for (iVar2 = *(int *)(iVar1 + 0x44); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x24)) {
      if (*(char *)(iVar2 + 0x22) != '\0') {
        *(undefined1 *)(iVar2 + 0x22) = 0;
        (**(code **)(iVar2 + 0x30))(param_1,iVar2 + 0x28);
      }
    }
    *(undefined4 *)(iVar1 + 0x44) = 0;
  }
  puVar3 = *(undefined4 **)(iVar1 + 0x38 + param_2 * 4);
  *(undefined4 *)(iVar1 + 0x38 + param_2 * 4) = 0;
  while (puVar3 != (undefined4 *)0x0) {
    iVar2 = puVar3[2];
    puVar4 = (undefined4 *)*puVar3;
    iVar5 = puVar3[1];
    FUN_10022bb0(param_1,puVar3);
    *(int *)(iVar1 + 0x48) = *(int *)(iVar1 + 0x48) - (iVar5 + 0x10 + iVar2);
    puVar3 = puVar4;
  }
  puVar3 = *(undefined4 **)(iVar1 + 0x30 + param_2 * 4);
  *(undefined4 *)(iVar1 + 0x30 + param_2 * 4) = 0;
  while (puVar3 != (undefined4 *)0x0) {
    iVar2 = puVar3[2];
    puVar4 = (undefined4 *)*puVar3;
    iVar5 = puVar3[1];
    FUN_10022bb0(param_1,puVar3);
    *(int *)(iVar1 + 0x48) = *(int *)(iVar1 + 0x48) - (iVar5 + 0x10 + iVar2);
    puVar3 = puVar4;
  }
  return;
}


// ---- FUN_100221f0 @ 100221f0

void __cdecl FUN_100221f0(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x18);
  *(undefined4 **)(param_1 + 0x140) = puVar1;
  *puVar1 = &LAB_10022260;
  *(undefined1 **)(*(int *)(param_1 + 0x140) + 4) = &LAB_10022360;
  *(code **)(*(int *)(param_1 + 0x140) + 8) = FUN_10022510;
  *(undefined1 **)(*(int *)(param_1 + 0x140) + 0xc) = &LAB_100227c0;
  *(undefined1 **)(*(int *)(param_1 + 0x140) + 0x10) = &LAB_10022a40;
  *(code **)(*(int *)(param_1 + 0x140) + 0x14) = FUN_10022a60;
  return;
}


// ---- FUN_100222c0 @ 100222c0

void __cdecl FUN_100222c0(int *param_1,undefined1 param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  
  piVar1 = (int *)param_1[5];
  *(undefined1 *)*piVar1 = param_2;
  *piVar1 = *piVar1 + 1;
  iVar2 = piVar1[1];
  piVar1[1] = iVar2 + -1;
  if (iVar2 + -1 == 0) {
    cVar3 = (*(code *)piVar1[3])(param_1);
    if (cVar3 == '\0') {
      *(undefined4 *)(*param_1 + 0x14) = 0x16;
      (**(code **)*param_1)(param_1);
    }
  }
  return;
}


// ---- FUN_10022300 @ 10022300

void __cdecl FUN_10022300(int *param_1,undefined1 param_2)

{
  FUN_100222c0(param_1,0xff);
  FUN_100222c0(param_1,param_2);
  return;
}


// ---- FUN_10022330 @ 10022330

void __cdecl FUN_10022330(int *param_1,undefined4 param_2)

{
  FUN_100222c0(param_1,(char)((uint)param_2 >> 8));
  FUN_100222c0(param_1,(char)param_2);
  return;
}


// ---- FUN_100223a0 @ 100223a0

void __cdecl FUN_100223a0(int *param_1)

{
  FUN_10022300(param_1,0xe0);
  FUN_10022330(param_1,0x10);
  FUN_100222c0(param_1,0x4a);
  FUN_100222c0(param_1,0x46);
  FUN_100222c0(param_1,0x49);
  FUN_100222c0(param_1,0x46);
  FUN_100222c0(param_1,0);
  FUN_100222c0(param_1,1);
  FUN_100222c0(param_1,1);
  FUN_100222c0(param_1,*(undefined1 *)((int)param_1 + 0xbd));
  FUN_10022330(param_1,(uint)*(ushort *)((int)param_1 + 0xbe));
  FUN_10022330(param_1,(uint)*(ushort *)(param_1 + 0x30));
  FUN_100222c0(param_1,0);
  FUN_100222c0(param_1,0);
  return;
}


// ---- FUN_10022460 @ 10022460

void __cdecl FUN_10022460(int *param_1)

{
  FUN_10022300(param_1,0xee);
  FUN_10022330(param_1,0xe);
  FUN_100222c0(param_1,0x41);
  FUN_100222c0(param_1,100);
  FUN_100222c0(param_1,0x6f);
  FUN_100222c0(param_1,0x62);
  FUN_100222c0(param_1,0x65);
  FUN_10022330(param_1,100);
  FUN_10022330(param_1,0);
  FUN_10022330(param_1,0);
  if (param_1[0xe] == 3) {
    FUN_100222c0(param_1,1);
    return;
  }
  if (param_1[0xe] != 5) {
    FUN_100222c0(param_1,0);
    return;
  }
  FUN_100222c0(param_1,2);
  return;
}


// ---- FUN_10022510 @ 10022510

void __cdecl FUN_10022510(int *param_1)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  undefined3 extraout_var;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar4 = 0;
  iVar6 = 0;
  iVar5 = param_1[0xf];
  if (0 < param_1[0xd]) {
    do {
      piVar1 = (int *)(iVar5 + 0x10);
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 0x54;
      cVar3 = FUN_10022600(param_1,*piVar1);
      iVar6 = iVar6 + CONCAT31(extraout_var,cVar3);
    } while (iVar4 < param_1[0xd]);
  }
  if (((*(char *)((int)param_1 + 0xa9) == '\0') && ((char)param_1[0x32] == '\0')) &&
     (param_1[0xc] == 8)) {
    iVar5 = param_1[0xf];
    bVar2 = true;
    iVar4 = param_1[0xd];
    if (0 < iVar4) {
      do {
        if ((1 < *(int *)(iVar5 + 0x14)) || (1 < *(int *)(iVar5 + 0x18))) {
          bVar2 = false;
        }
        iVar5 = iVar5 + 0x54;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    if ((iVar6 != 0) && (bVar2)) {
      bVar2 = false;
      *(undefined4 *)(*param_1 + 0x14) = 0x4a;
      (**(code **)(*param_1 + 4))(param_1,0);
    }
  }
  else {
    bVar2 = false;
  }
  if (*(char *)((int)param_1 + 0xa9) != '\0') {
    FUN_100226f0(param_1,0xc9);
    return;
  }
  if ((char)param_1[0x32] != '\0') {
    FUN_100226f0(param_1,0xc2);
    return;
  }
  if (bVar2) {
    FUN_100226f0(param_1,0xc0);
    return;
  }
  FUN_100226f0(param_1,0xc1);
  return;
}


// ---- FUN_10022600 @ 10022600

char __cdecl FUN_10022600(int *param_1,int param_2)

{
  ushort uVar1;
  ushort *puVar2;
  bool bVar3;
  int iVar4;
  ushort *puVar5;
  int *piVar6;
  
  puVar2 = (ushort *)param_1[param_2 + 0x10];
  if (puVar2 == (ushort *)0x0) {
    *(undefined4 *)(*param_1 + 0x14) = 0x33;
    *(int *)(*param_1 + 0x18) = param_2;
    (**(code **)*param_1)(param_1);
  }
  bVar3 = false;
  iVar4 = 0x40;
  puVar5 = puVar2;
  do {
    if (0xff < *puVar5) {
      bVar3 = true;
    }
    puVar5 = puVar5 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  if ((char)puVar2[0x40] == '\0') {
    FUN_10022300(param_1,0xdb);
    FUN_10022330(param_1,(-(uint)!bVar3 & 0xffffffc0) + 0x83);
    piVar6 = &DAT_1002aa50;
    FUN_100222c0(param_1,bVar3 * '\x10' + (char)param_2);
    do {
      uVar1 = puVar2[*piVar6];
      if (bVar3) {
        FUN_100222c0(param_1,(char)(uVar1 >> 8));
      }
      piVar6 = piVar6 + 1;
      FUN_100222c0(param_1,(char)uVar1);
    } while (piVar6 < &DAT_1002ab50);
    *(undefined1 *)(puVar2 + 0x40) = 1;
  }
  return bVar3;
}


// ---- FUN_100226f0 @ 100226f0

void __cdecl FUN_100226f0(int *param_1,undefined1 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  FUN_10022300(param_1,param_2);
  FUN_10022330(param_1,param_1[0xd] * 3 + 8);
  if ((0xffff < param_1[7]) || (0xffff < param_1[6])) {
    *(undefined4 *)(*param_1 + 0x14) = 0x28;
    *(undefined4 *)(*param_1 + 0x18) = 0xffff;
    (**(code **)*param_1)(param_1);
  }
  FUN_100222c0(param_1,(char)param_1[0xc]);
  FUN_10022330(param_1,param_1[7]);
  FUN_10022330(param_1,param_1[6]);
  iVar2 = 0;
  FUN_100222c0(param_1,(char)param_1[0xd]);
  puVar1 = (undefined4 *)param_1[0xf];
  if (0 < param_1[0xd]) {
    do {
      iVar2 = iVar2 + 1;
      FUN_100222c0(param_1,(char)*puVar1);
      FUN_100222c0(param_1,(char)puVar1[2] * '\x10' + (char)puVar1[3]);
      FUN_100222c0(param_1,(char)puVar1[4]);
      puVar1 = puVar1 + 0x15;
    } while (iVar2 < param_1[0xd]);
  }
  return;
}


// ---- FUN_10022860 @ 10022860

void __cdecl FUN_10022860(int *param_1,int param_2,char param_3)

{
  byte *pbVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (param_3 == '\0') {
    iVar5 = param_1[param_2 + 0x14];
  }
  else {
    iVar5 = param_1[param_2 + 0x18];
    param_2 = param_2 + 0x10;
  }
  if (iVar5 == 0) {
    *(undefined4 *)(*param_1 + 0x14) = 0x31;
    *(int *)(*param_1 + 0x18) = param_2;
    (**(code **)*param_1)(param_1);
  }
  if (*(char *)(iVar5 + 0x111) == '\0') {
    iVar4 = 0;
    FUN_10022300(param_1,0xc4);
    iVar3 = 1;
    do {
      pbVar1 = (byte *)(iVar5 + iVar3);
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + (uint)*pbVar1;
    } while (iVar3 < 0x11);
    FUN_10022330(param_1,iVar4 + 0x13);
    iVar3 = 1;
    FUN_100222c0(param_1,(char)param_2);
    do {
      puVar2 = (undefined1 *)(iVar5 + iVar3);
      iVar3 = iVar3 + 1;
      FUN_100222c0(param_1,*puVar2);
    } while (iVar3 < 0x11);
    iVar3 = 0;
    if (0 < iVar4) {
      do {
        puVar2 = (undefined1 *)(iVar5 + 0x11 + iVar3);
        iVar3 = iVar3 + 1;
        FUN_100222c0(param_1,*puVar2);
      } while (iVar3 < iVar4);
    }
    *(undefined1 *)(iVar5 + 0x111) = 1;
  }
  return;
}


// ---- FUN_10022920 @ 10022920

void __cdecl FUN_10022920(int *param_1)

{
  FUN_10022300(param_1,0xdd);
  FUN_10022330(param_1,4);
  FUN_10022330(param_1,param_1[0x2d]);
  return;
}


// ---- FUN_10022950 @ 10022950

void __cdecl FUN_10022950(int *param_1)

{
  undefined4 *puVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  int *piVar6;
  
  FUN_10022300(param_1,0xda);
  FUN_10022330(param_1,param_1[0x36] * 2 + 6);
  iVar5 = 0;
  FUN_100222c0(param_1,(char)param_1[0x36]);
  if (0 < param_1[0x36]) {
    piVar6 = param_1 + 0x37;
    do {
      puVar1 = (undefined4 *)*piVar6;
      FUN_100222c0(param_1,(char)*puVar1);
      cVar4 = (char)puVar1[5];
      cVar3 = (char)puVar1[6];
      if (((char)param_1[0x32] != '\0') &&
         ((cVar2 = cVar3, param_1[0x48] != 0 ||
          ((cVar3 = '\0', param_1[0x4a] != 0 &&
           (cVar2 = '\0', *(char *)((int)param_1 + 0xa9) == '\0')))))) {
        cVar3 = cVar2;
        cVar4 = '\0';
      }
      piVar6 = piVar6 + 1;
      iVar5 = iVar5 + 1;
      FUN_100222c0(param_1,cVar4 * '\x10' + cVar3);
    } while (iVar5 < param_1[0x36]);
  }
  FUN_100222c0(param_1,(char)param_1[0x48]);
  FUN_100222c0(param_1,(char)param_1[0x49]);
  FUN_100222c0(param_1,(char)param_1[0x4a] * '\x10' + (char)param_1[0x4b]);
  return;
}


// ---- FUN_10022a60 @ 10022a60

void __cdecl FUN_10022a60(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  FUN_10022300(param_1,0xd8);
  do {
    if (param_1[iVar2 + 0x10] != 0) {
      FUN_10022600(param_1,iVar2);
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 4);
  if (*(char *)((int)param_1 + 0xa9) == '\0') {
    iVar2 = 0;
    piVar1 = param_1 + 0x14;
    do {
      if (*piVar1 != 0) {
        FUN_10022860(param_1,iVar2,'\0');
      }
      if (piVar1[4] != 0) {
        FUN_10022860(param_1,iVar2,'\x01');
      }
      piVar1 = piVar1 + 1;
      iVar2 = iVar2 + 1;
    } while (iVar2 < 4);
  }
  FUN_10022300(param_1,0xd9);
  return;
}


// ---- FUN_10022ae0 @ 10022ae0

void __cdecl FUN_10022ae0(int *param_1)

{
  char cVar1;
  
  FUN_10026b10(param_1,'\0');
  if ((char)param_1[0x2a] == '\0') {
    FUN_10026430(param_1);
    FUN_10025a50(param_1);
    FUN_100254f0(param_1,'\0');
  }
  FUN_10024f30(param_1);
  if (*(char *)((int)param_1 + 0xa9) == '\0') {
    if ((char)param_1[0x32] == '\0') {
      FUN_10023ab0((int)param_1);
    }
    else {
      FUN_100243b0((int)param_1);
    }
  }
  else {
    *(undefined4 *)(*param_1 + 0x14) = 1;
    (**(code **)*param_1)(param_1);
  }
  if ((1 < param_1[0x28]) || (cVar1 = '\0', *(char *)((int)param_1 + 0xaa) != '\0')) {
    cVar1 = '\x01';
  }
  FUN_10022f80((int)param_1,cVar1);
  FUN_10022e00(param_1,'\0');
  FUN_100221f0((int)param_1);
  (**(code **)(param_1[1] + 0x18))(param_1);
  (**(code **)(param_1[0x50] + 4))(param_1);
  return;
}


// ---- FUN_10022bb0 @ 10022bb0

void __cdecl FUN_10022bb0(undefined4 param_1,void *param_2)

{
  free(param_2);
  return;
}


// ---- FUN_10022bc0 @ 10022bc0

void __cdecl FUN_10022bc0(undefined4 param_1,size_t param_2)

{
  malloc(param_2);
  return;
}


// ---- FUN_10022bd0 @ 10022bd0

int __cdecl FUN_10022bd0(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  return *(int *)(*(int *)(param_1 + 4) + 0x2c) - param_4;
}


// ---- FUN_10022be0 @ 10022be0

void __cdecl FUN_10022be0(int *param_1,undefined4 *param_2)

{
  FILE *pFVar1;
  
  pFVar1 = tmpfile();
  param_2[3] = pFVar1;
  if (pFVar1 == (FILE *)0x0) {
    *(undefined4 *)(*param_1 + 0x14) = 0x3e;
    strncpy((char *)(*param_1 + 0x18),&DAT_10039fec,0x50);
    (**(code **)*param_1)(param_1);
  }
  *param_2 = &LAB_10022c40;
  param_2[1] = &LAB_10022cb0;
  param_2[2] = &LAB_10022d20;
  return;
}


// ---- FUN_10022d40 @ 10022d40

undefined4 FUN_10022d40(void)

{
  return 1000000;
}


// ---- FUN_10022d50 @ 10022d50

void FUN_10022d50(void)

{
  return;
}


// ---- FUN_10022d60 @ 10022d60

int __cdecl FUN_10022d60(int param_1,int param_2)

{
  return (param_1 + -1 + param_2) / param_2;
}


// ---- FUN_10022d70 @ 10022d70

int __cdecl FUN_10022d70(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_2 + -1 + param_1;
  return iVar1 - iVar1 % param_2;
}


// ---- FUN_10022d90 @ 10022d90

void __cdecl FUN_10022d90(int param_1,int param_2,int param_3,int param_4,int param_5,uint param_6)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar2 = (undefined4 *)(param_1 + param_2 * 4);
  puVar3 = (undefined4 *)(param_3 + param_4 * 4);
  if (0 < param_5) {
    do {
      puVar4 = (undefined4 *)*puVar2;
      puVar5 = (undefined4 *)*puVar3;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
      for (uVar1 = param_6 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      for (uVar1 = param_6 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
        *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
        puVar4 = (undefined4 *)((int)puVar4 + 1);
        puVar5 = (undefined4 *)((int)puVar5 + 1);
      }
      param_5 = param_5 + -1;
    } while (param_5 != 0);
  }
  return;
}


// ---- FUN_10022de0 @ 10022de0

void __cdecl FUN_10022de0(undefined4 *param_1,uint param_2)

{
  uint uVar1;
  
  for (uVar1 = param_2 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *param_1 = 0;
    param_1 = param_1 + 1;
  }
  for (uVar1 = param_2 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined1 *)param_1 = 0;
    param_1 = (undefined4 *)((int)param_1 + 1);
  }
  return;
}


// ---- FUN_10022e00 @ 10022e00

void __cdecl FUN_10022e00(int *param_1,char param_2)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  
  puVar3 = (undefined4 *)(**(code **)param_1[1])(param_1,1,0x40);
  param_1[0x4d] = (int)puVar3;
  *puVar3 = &LAB_10022e90;
  if ((char)param_1[0x2a] == '\0') {
    if (param_2 != '\0') {
      *(undefined4 *)(*param_1 + 0x14) = 4;
      (**(code **)*param_1)(param_1);
      return;
    }
    iVar5 = 0;
    iVar6 = param_1[0xf];
    if (0 < param_1[0xd]) {
      puVar3 = puVar3 + 6;
      do {
        piVar1 = (int *)(iVar6 + 0xc);
        iVar5 = iVar5 + 1;
        piVar2 = (int *)(iVar6 + 0x1c);
        iVar6 = iVar6 + 0x54;
        uVar4 = (**(code **)(param_1[1] + 8))(param_1,1,*piVar2 << 3,*piVar1 << 3);
        *puVar3 = uVar4;
        puVar3 = puVar3 + 1;
      } while (iVar5 < param_1[0xd]);
    }
  }
  return;
}


// ---- FUN_10022ee0 @ 10022ee0

void __cdecl FUN_10022ee0(int param_1,undefined4 param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  
  iVar1 = *(int *)(param_1 + 0x134);
  if (*(uint *)(iVar1 + 8) < *(uint *)(param_1 + 0xd4)) {
    while( true ) {
      uVar3 = *(uint *)(iVar1 + 0xc);
      if (uVar3 < 8) {
        (**(code **)(*(int *)(param_1 + 0x138) + 4))
                  (param_1,param_2,param_3,param_4,iVar1 + 0x18,iVar1 + 0xc,8);
        uVar3 = *(uint *)(iVar1 + 0xc);
      }
      if (uVar3 != 8) {
        return;
      }
      cVar2 = (**(code **)(*(int *)(param_1 + 0x13c) + 4))(param_1,iVar1 + 0x18);
      if (cVar2 == '\0') break;
      if (*(char *)(iVar1 + 0x10) != '\0') {
        *param_3 = *param_3 + 1;
        *(undefined1 *)(iVar1 + 0x10) = 0;
      }
      *(undefined4 *)(iVar1 + 0xc) = 0;
      uVar3 = *(int *)(iVar1 + 8) + 1;
      *(uint *)(iVar1 + 8) = uVar3;
      if (*(uint *)(param_1 + 0xd4) <= uVar3) {
        return;
      }
    }
    if (*(char *)(iVar1 + 0x10) == '\0') {
      *param_3 = *param_3 + -1;
      *(undefined1 *)(iVar1 + 0x10) = 1;
    }
  }
  return;
}


// ---- FUN_10022f80 @ 10022f80

void __cdecl FUN_10022f80(int param_1,char param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  
  puVar1 = (undefined4 *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x68);
  *(undefined4 **)(param_1 + 0x13c) = puVar1;
  *puVar1 = &LAB_10023030;
  if (param_2 == '\0') {
    iVar7 = (**(code **)(*(int *)(param_1 + 4) + 4))(param_1,1,0x500);
    piVar6 = puVar1 + 6;
    iVar5 = 10;
    do {
      *piVar6 = iVar7;
      piVar6 = piVar6 + 1;
      iVar7 = iVar7 + 0x80;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    puVar1[0x10] = 0;
  }
  else {
    iVar7 = 0;
    if (0 < *(int *)(param_1 + 0x34)) {
      iVar5 = *(int *)(param_1 + 0x3c);
      puVar1 = puVar1 + 0x10;
      do {
        iVar8 = *(int *)(iVar5 + 0xc);
        iVar7 = iVar7 + 1;
        iVar2 = FUN_10022d70(*(int *)(iVar5 + 0x20),iVar8);
        iVar3 = FUN_10022d70(*(int *)(iVar5 + 0x1c),*(int *)(iVar5 + 8));
        uVar4 = (**(code **)(*(int *)(param_1 + 4) + 0x14))(param_1,1,0,iVar3,iVar2,iVar8);
        *puVar1 = uVar4;
        iVar5 = iVar5 + 0x54;
        puVar1 = puVar1 + 1;
      } while (iVar7 < *(int *)(param_1 + 0x34));
      return;
    }
  }
  return;
}


// ---- FUN_100230e0 @ 100230e0

void __cdecl FUN_100230e0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x13c);
  if (1 < *(int *)(param_1 + 0xd8)) {
    *(undefined4 *)(iVar1 + 0x14) = 1;
    *(undefined4 *)(iVar1 + 0xc) = 0;
    *(undefined4 *)(iVar1 + 0x10) = 0;
    return;
  }
  if (*(uint *)(iVar1 + 8) < *(int *)(param_1 + 0xd4) - 1U) {
    *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)(*(int *)(param_1 + 0xdc) + 0xc);
    *(undefined4 *)(iVar1 + 0xc) = 0;
    *(undefined4 *)(iVar1 + 0x10) = 0;
    return;
  }
  *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)(*(int *)(param_1 + 0xdc) + 0x48);
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(undefined4 *)(iVar1 + 0x10) = 0;
  return;
}


// ---- FUN_100235e0 @ 100235e0

undefined4 __cdecl FUN_100235e0(int param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  uint local_34;
  uint local_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int *piStack_20;
  int iStack_1c;
  int local_18;
  int local_10 [4];
  
  iVar1 = *(int *)(param_1 + 0x13c);
  iVar7 = 0;
  if (0 < *(int *)(param_1 + 0xd8)) {
    piVar6 = (int *)(param_1 + 0xdc);
    piVar8 = local_10;
    do {
      iVar3 = *piVar6;
      iVar9 = *(int *)(iVar3 + 0xc);
      piVar6 = piVar6 + 1;
      iVar7 = iVar7 + 1;
      iVar3 = (**(code **)(*(int *)(param_1 + 4) + 0x20))
                        (param_1,*(undefined4 *)(iVar1 + 0x40 + *(int *)(iVar3 + 4) * 4),
                         *(int *)(iVar1 + 8) * iVar9,iVar9,0);
      *piVar8 = iVar3;
      piVar8 = piVar8 + 1;
    } while (iVar7 < *(int *)(param_1 + 0xd8));
  }
  local_34 = *(uint *)(iVar1 + 0x10);
  if ((int)local_34 < *(int *)(iVar1 + 0x14)) {
    local_18 = local_34 << 2;
    do {
      local_30 = *(uint *)(iVar1 + 0xc);
      if (local_30 < *(uint *)(param_1 + 0xec)) {
        do {
          iStack_2c = 0;
          iStack_1c = 0;
          if (0 < *(int *)(param_1 + 0xd8)) {
            piStack_20 = local_10;
            piVar6 = (int *)(param_1 + 0xdc);
            do {
              iVar7 = *piVar6;
              iStack_24 = 0;
              iVar3 = *(int *)(iVar7 + 0x34);
              if (0 < *(int *)(iVar7 + 0x38)) {
                piVar8 = (int *)(*piStack_20 + local_18);
                do {
                  iStack_28 = 0;
                  iVar9 = *piVar8 + iVar3 * local_30 * 0x80;
                  if (0 < *(int *)(iVar7 + 0x34)) {
                    piVar5 = (int *)(iVar1 + 0x18 + iStack_2c * 4);
                    do {
                      *piVar5 = iVar9;
                      piVar5 = piVar5 + 1;
                      iVar9 = iVar9 + 0x80;
                      iStack_2c = iStack_2c + 1;
                      iStack_28 = iStack_28 + 1;
                    } while (iStack_28 < *(int *)(iVar7 + 0x34));
                  }
                  piVar8 = piVar8 + 1;
                  iStack_24 = iStack_24 + 1;
                } while (iStack_24 < *(int *)(iVar7 + 0x38));
              }
              piVar6 = piVar6 + 1;
              piStack_20 = piStack_20 + 1;
              iStack_1c = iStack_1c + 1;
            } while (iStack_1c < *(int *)(param_1 + 0xd8));
          }
          cVar2 = (**(code **)(*(int *)(param_1 + 0x150) + 4))(param_1,iVar1 + 0x18);
          if (cVar2 == '\0') {
            *(uint *)(iVar1 + 0x10) = local_34;
            *(uint *)(iVar1 + 0xc) = local_30;
            return local_34 & 0xffffff00;
          }
          local_30 = local_30 + 1;
        } while (local_30 < *(uint *)(param_1 + 0xec));
      }
      local_34 = local_34 + 1;
      local_18 = local_18 + 4;
      *(undefined4 *)(iVar1 + 0xc) = 0;
    } while ((int)local_34 < *(int *)(iVar1 + 0x14));
  }
  *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
  uVar4 = FUN_100230e0(param_1);
  return CONCAT31((int3)((uint)uVar4 >> 8),1);
}


// ---- FUN_100237d0 @ 100237d0

void __cdecl FUN_100237d0(int param_1,int param_2,int *param_3)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  char cVar10;
  int iVar11;
  int iVar12;
  char *pcVar13;
  undefined4 *puVar14;
  char local_508 [260];
  int aiStack_404 [257];
  
  if (*param_3 == 0) {
    iVar4 = (*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x500);
    *param_3 = iVar4;
  }
  iVar4 = *param_3;
  iVar11 = 1;
  iVar12 = 0;
  do {
    bVar2 = *(byte *)(param_2 + iVar11);
    if (bVar2 != 0) {
      cVar10 = (char)iVar11;
      pcVar13 = local_508 + iVar12;
      for (uVar6 = (uint)(bVar2 >> 2); uVar6 != 0; uVar6 = uVar6 - 1) {
        *(uint *)pcVar13 = CONCAT22(CONCAT11(cVar10,cVar10),CONCAT11(cVar10,cVar10));
        pcVar13 = pcVar13 + 4;
      }
      for (uVar6 = bVar2 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar13 = cVar10;
        pcVar13 = pcVar13 + 1;
      }
      iVar12 = iVar12 + (uint)bVar2;
    }
    iVar11 = iVar11 + 1;
  } while (iVar11 < 0x11);
  iVar7 = 0;
  iVar11 = 0;
  local_508[iVar12] = '\0';
  iVar9 = (int)local_508[0];
  while (local_508[iVar7] != '\0') {
    if (local_508[iVar7] == iVar9) {
      piVar5 = aiStack_404 + iVar7;
      iVar8 = iVar7;
      do {
        *piVar5 = iVar11;
        piVar5 = piVar5 + 1;
        iVar7 = iVar8 + 1;
        iVar11 = iVar11 + 1;
        iVar3 = iVar8 + 1;
        iVar8 = iVar7;
      } while (local_508[iVar3] == iVar9);
    }
    iVar11 = iVar11 * 2;
    iVar9 = iVar9 + 1;
  }
  puVar14 = (undefined4 *)(iVar4 + 0x400);
  for (iVar11 = 0x40; iVar11 != 0; iVar11 = iVar11 + -1) {
    *puVar14 = 0;
    puVar14 = puVar14 + 1;
  }
  iVar11 = 0;
  if (0 < iVar12) {
    do {
      pbVar1 = (byte *)(param_2 + 0x11 + iVar11);
      iVar7 = iVar11 + 1;
      *(int *)(iVar4 + (uint)*pbVar1 * 4) = aiStack_404[iVar11];
      *(char *)(*pbVar1 + 0x400 + iVar4) = local_508[iVar11];
      iVar11 = iVar7;
    } while (iVar7 < iVar12);
  }
  return;
}


// ---- FUN_100238d0 @ 100238d0

void __cdecl FUN_100238d0(int *param_1,undefined4 *param_2,int param_3)

{
  int *piVar1;
  char *pcVar2;
  char *pcVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  undefined4 *puVar11;
  undefined4 local_82c;
  undefined4 uStack_828;
  undefined4 uStack_824;
  undefined4 uStack_820;
  char acStack_81c [20];
  int local_808 [257];
  int local_404 [256];
  int iStack_4;
  
  puVar11 = &local_82c;
  for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar11 = 0;
    puVar11 = puVar11 + 1;
  }
  *(undefined1 *)puVar11 = 0;
  piVar10 = local_404;
  for (iVar6 = 0x101; iVar6 != 0; iVar6 = iVar6 + -1) {
    *piVar10 = 0;
    piVar10 = piVar10 + 1;
  }
  piVar10 = local_808;
  for (iVar6 = 0x101; iVar6 != 0; iVar6 = iVar6 + -1) {
    *piVar10 = -1;
    piVar10 = piVar10 + 1;
  }
  *(undefined4 *)(param_3 + 0x400) = 1;
  while( true ) {
    iVar6 = -1;
    iVar9 = 1000000000;
    iVar7 = 0;
    do {
      iVar8 = *(int *)(param_3 + iVar7 * 4);
      if ((iVar8 != 0) && (iVar8 <= iVar9)) {
        iVar9 = iVar8;
        iVar6 = iVar7;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < 0x101);
    iVar9 = -1;
    iVar7 = 1000000000;
    iVar8 = 0;
    do {
      iVar5 = *(int *)(param_3 + iVar8 * 4);
      if (((iVar5 != 0) && (iVar5 <= iVar7)) && (iVar8 != iVar6)) {
        iVar9 = iVar8;
        iVar7 = iVar5;
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < 0x101);
    if (iVar9 < 0) break;
    piVar10 = (int *)(param_3 + iVar9 * 4);
    local_404[iVar6] = local_404[iVar6] + 1;
    piVar1 = (int *)(param_3 + iVar6 * 4);
    *piVar1 = *piVar1 + *piVar10;
    *piVar10 = 0;
    iVar7 = local_808[iVar6];
    while (-1 < iVar7) {
      iVar6 = local_808[iVar6];
      local_404[iVar6] = local_404[iVar6] + 1;
      iVar7 = local_808[iVar6];
    }
    local_808[iVar6] = iVar9;
    local_404[iVar9] = local_404[iVar9] + 1;
    iVar6 = local_808[iVar9];
    while (-1 < iVar6) {
      iVar9 = local_808[iVar9];
      local_404[iVar9] = local_404[iVar9] + 1;
      iVar6 = local_808[iVar9];
    }
  }
  piVar10 = local_404;
  do {
    if (*piVar10 != 0) {
      if (0x20 < *piVar10) {
        *(undefined4 *)(*param_1 + 0x14) = 0x26;
        (**(code **)*param_1)(param_1);
      }
      *(char *)((int)&local_82c + *piVar10) = *(char *)((int)&local_82c + *piVar10) + '\x01';
    }
    piVar10 = piVar10 + 1;
  } while (piVar10 <= &iStack_4);
  iVar6 = 0x20;
  do {
    iVar9 = iVar6;
    pcVar2 = (char *)((int)&local_82c + iVar9);
    if (*pcVar2 != '\0') {
      do {
        cVar4 = acStack_81c[iVar9 + -0x12];
        iVar6 = iVar9 + -2;
        while (cVar4 == '\0') {
          cVar4 = acStack_81c[iVar6 + -0x11];
          iVar6 = iVar6 + -1;
        }
        *pcVar2 = *pcVar2 + -2;
        acStack_81c[iVar9 + -0x11] = acStack_81c[iVar9 + -0x11] + '\x01';
        pcVar3 = (char *)((int)&local_82c + iVar6 + 1);
        *pcVar3 = *pcVar3 + '\x02';
        *(char *)((int)&local_82c + iVar6) = *(char *)((int)&local_82c + iVar6) + -1;
      } while (*pcVar2 != '\0');
    }
    iVar6 = iVar9 + -1;
  } while (0x10 < iVar6);
  cVar4 = acStack_81c[iVar9 + -0x11];
  while (cVar4 == '\0') {
    cVar4 = acStack_81c[iVar6 + -0x11];
    iVar6 = iVar6 + -1;
  }
  *(char *)((int)&local_82c + iVar6) = *(char *)((int)&local_82c + iVar6) + -1;
  *param_2 = local_82c;
  param_2[1] = uStack_828;
  param_2[2] = uStack_824;
  param_2[3] = uStack_820;
  iVar6 = 0;
  *(char *)(param_2 + 4) = acStack_81c[0];
  iVar9 = 1;
  do {
    iVar7 = 0;
    do {
      if (local_404[iVar7] == iVar9) {
        *(char *)(iVar6 + 0x11 + (int)param_2) = (char)iVar7;
        iVar6 = iVar6 + 1;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < 0x100);
    iVar9 = iVar9 + 1;
  } while (iVar9 < 0x21);
  *(undefined1 *)((int)param_2 + 0x111) = 0;
  return;
}


// ---- FUN_10023ab0 @ 10023ab0

void __cdecl FUN_10023ab0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x6c);
  iVar2 = 4;
  *(undefined4 **)(param_1 + 0x150) = puVar1;
  *puVar1 = FUN_10023af0;
  puVar1 = puVar1 + 0xf;
  do {
    *puVar1 = 0;
    iVar2 = iVar2 + -1;
    puVar1[-4] = 0;
    puVar1[8] = 0;
    puVar1[4] = 0;
    puVar1 = puVar1 + 1;
  } while (iVar2 != 0);
  return;
}


// ---- FUN_10023af0 @ 10023af0

void __cdecl FUN_10023af0(int *param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *local_c;
  int *local_8;
  int local_4;
  
  iVar2 = param_1[0x54];
  if (param_2 == '\0') {
    *(code **)(iVar2 + 4) = FUN_10023c80;
    *(code **)(iVar2 + 8) = FUN_100240f0;
  }
  else {
    *(code **)(iVar2 + 4) = FUN_10024180;
    *(code **)(iVar2 + 8) = FUN_100242e0;
  }
  local_4 = 0;
  if (0 < param_1[0x36]) {
    local_8 = param_1 + 0x37;
    local_c = (undefined4 *)(iVar2 + 0x14);
    do {
      iVar4 = *(int *)(*local_8 + 0x14);
      iVar3 = *(int *)(*local_8 + 0x18);
      if (((iVar4 < 0) || (3 < iVar4)) || ((param_1[iVar4 + 0x14] == 0 && (param_2 == '\0')))) {
        *(undefined4 *)(*param_1 + 0x14) = 0x31;
        *(int *)(*param_1 + 0x18) = iVar4;
        (**(code **)*param_1)(param_1);
      }
      if ((iVar3 < 0) || (3 < iVar3)) {
LAB_10023b9c:
        *(undefined4 *)(*param_1 + 0x14) = 0x31;
        *(int *)(*param_1 + 0x18) = iVar3;
        (**(code **)*param_1)(param_1);
LAB_10023bb2:
        if (param_2 != '\0') goto LAB_10023bb9;
        FUN_100237d0((int)param_1,param_1[iVar4 + 0x14],(int *)(iVar2 + iVar4 * 4 + 0x2c));
        FUN_100237d0((int)param_1,param_1[iVar3 + 0x18],(int *)(iVar2 + iVar3 * 4 + 0x3c));
      }
      else {
        if (param_1[iVar3 + 0x18] != 0) goto LAB_10023bb2;
        if (param_2 == '\0') goto LAB_10023b9c;
LAB_10023bb9:
        piVar1 = (int *)(iVar2 + 0x4c + iVar4 * 4);
        if (*piVar1 == 0) {
          iVar4 = (**(code **)param_1[1])(param_1,1,0x404);
          *piVar1 = iVar4;
        }
        puVar5 = (undefined4 *)*piVar1;
        for (iVar4 = 0x101; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar5 = 0;
          puVar5 = puVar5 + 1;
        }
        piVar1 = (int *)(iVar2 + 0x5c + iVar3 * 4);
        if (*piVar1 == 0) {
          iVar4 = (**(code **)param_1[1])(param_1,1,0x404);
          *piVar1 = iVar4;
        }
        puVar5 = (undefined4 *)*piVar1;
        for (iVar4 = 0x101; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar5 = 0;
          puVar5 = puVar5 + 1;
        }
      }
      local_4 = local_4 + 1;
      *local_c = 0;
      local_8 = local_8 + 1;
      local_c = local_c + 1;
    } while (local_4 < param_1[0x36]);
  }
  *(undefined4 *)(iVar2 + 0xc) = 0;
  *(undefined4 *)(iVar2 + 0x10) = 0;
  *(int *)(iVar2 + 0x24) = param_1[0x2d];
  *(undefined4 *)(iVar2 + 0x28) = 0;
  return;
}


// ---- FUN_10023c80 @ 10023c80

uint __cdecl FUN_10023c80(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  short *psVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int *local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c [6];
  int local_4;
  
  iVar1 = *(int *)(param_1 + 0x150);
  local_24 = **(int **)(param_1 + 0x14);
  local_20 = (*(int **)(param_1 + 0x14))[1];
  piVar6 = (int *)(iVar1 + 0xc);
  piVar7 = local_1c;
  for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
    *piVar7 = *piVar6;
    piVar6 = piVar6 + 1;
    piVar7 = piVar7 + 1;
  }
  local_4 = param_1;
  if ((*(int *)(param_1 + 0xb4) != 0) && (*(int *)(iVar1 + 0x24) == 0)) {
    uVar4 = FUN_10024040(&local_24,(char)*(undefined4 *)(iVar1 + 0x28));
    if ((char)uVar4 == '\0') {
      return uVar4 & 0xffffff00;
    }
  }
  local_28 = 0;
  if (0 < *(int *)(param_1 + 0xf4)) {
    local_2c = (int *)(param_1 + 0xf8);
    do {
      iVar5 = *local_2c;
      iVar2 = *(int *)(param_1 + 0xdc + iVar5 * 4);
      uVar4 = FUN_10023db0(&local_24,(short *)*param_2,local_1c[iVar5 + 2],
                           *(int *)(iVar1 + 0x2c + *(int *)(iVar2 + 0x14) * 4),
                           *(uint **)(iVar1 + 0x3c + *(int *)(iVar2 + 0x18) * 4));
      if ((char)uVar4 == '\0') {
        return uVar4 & 0xffffff00;
      }
      psVar3 = (short *)*param_2;
      param_2 = param_2 + 1;
      local_2c = local_2c + 1;
      local_1c[iVar5 + 2] = (int)*psVar3;
      local_28 = local_28 + 1;
    } while (local_28 < *(int *)(param_1 + 0xf4));
  }
  **(int **)(param_1 + 0x14) = local_24;
  *(int *)(*(int *)(param_1 + 0x14) + 4) = local_20;
  piVar6 = local_1c;
  piVar7 = (int *)(iVar1 + 0xc);
  for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
    *piVar7 = *piVar6;
    piVar6 = piVar6 + 1;
    piVar7 = piVar7 + 1;
  }
  uVar4 = *(uint *)(param_1 + 0xb4);
  if (uVar4 != 0) {
    if (*(int *)(iVar1 + 0x24) == 0) {
      *(uint *)(iVar1 + 0x24) = uVar4;
      uVar4 = *(int *)(iVar1 + 0x28) + 1;
      *(uint *)(iVar1 + 0x28) = uVar4;
      uVar4 = uVar4 & 7;
      *(uint *)(iVar1 + 0x28) = uVar4;
    }
    *(int *)(iVar1 + 0x24) = *(int *)(iVar1 + 0x24) + -1;
  }
  return CONCAT31((int3)(uVar4 >> 8),1);
}


// ---- FUN_10023db0 @ 10023db0

uint __cdecl FUN_10023db0(int *param_1,short *param_2,int param_3,int param_4,uint *param_5)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *local_8;
  uint local_4;
  
  uVar4 = *param_2 - param_3;
  uVar1 = uVar4;
  if ((int)uVar4 < 0) {
    uVar1 = -uVar4;
    uVar4 = uVar4 - 1;
  }
  iVar5 = 0;
  for (; uVar1 != 0; uVar1 = (int)uVar1 >> 1) {
    iVar5 = iVar5 + 1;
  }
  uVar1 = FUN_10023f40(param_1,*(uint *)(param_4 + iVar5 * 4),
                       (int)*(char *)(param_4 + 0x400 + iVar5));
  if ((char)uVar1 == '\0') {
    return uVar1 & 0xffffff00;
  }
  if ((iVar5 != 0) && (uVar1 = FUN_10023f40(param_1,uVar4,iVar5), (char)uVar1 == '\0')) {
    return uVar1 & 0xffffff00;
  }
  iVar5 = 0;
  local_8 = &DAT_1002aa54;
  do {
    local_4 = (uint)param_2[*local_8];
    if (local_4 == 0) {
      iVar5 = iVar5 + 1;
      piVar2 = local_8;
    }
    else {
      for (; 0xf < iVar5; iVar5 = iVar5 + -0x10) {
        uVar1 = FUN_10023f40(param_1,param_5[0xf0],(int)(char)param_5[0x13c]);
        if ((char)uVar1 == '\0') {
          return uVar1 & 0xffffff00;
        }
      }
      uVar1 = local_4;
      if ((int)local_4 < 0) {
        uVar1 = -local_4;
        local_4 = local_4 - 1;
      }
      iVar3 = 1;
      while (uVar1 = (int)uVar1 >> 1, uVar1 != 0) {
        iVar3 = iVar3 + 1;
      }
      iVar5 = iVar5 * 0x10 + iVar3;
      uVar1 = FUN_10023f40(param_1,param_5[iVar5],(int)*(char *)((int)param_5 + iVar5 + 0x400));
      if ((char)uVar1 == '\0') {
        return uVar1 & 0xffffff00;
      }
      piVar2 = (int *)FUN_10023f40(param_1,local_4,iVar3);
      if ((char)piVar2 == '\0') {
        return (uint)piVar2 & 0xffffff00;
      }
      iVar5 = 0;
    }
    local_8 = local_8 + 1;
    if (&UNK_1002ab4f < local_8) {
      if ((0 < iVar5) &&
         (piVar2 = (int *)FUN_10023f40(param_1,*param_5,(int)(char)param_5[0x100]),
         (char)piVar2 == '\0')) {
        return (uint)piVar2 & 0xffffff00;
      }
      return CONCAT31((int3)((uint)piVar2 >> 8),1);
    }
  } while( true );
}


// ---- FUN_10023f40 @ 10023f40

uint __cdecl FUN_10023f40(int *param_1,uint param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char local_4;
  
  iVar2 = param_1[3];
  if (param_3 == 0) {
    *(undefined4 *)(*(int *)param_1[8] + 0x14) = 0x27;
    (*(code *)**(undefined4 **)param_1[8])((undefined4 *)param_1[8]);
  }
  iVar2 = iVar2 + param_3;
  local_4 = (char)iVar2;
  uVar4 = (param_2 & (1 << ((byte)param_3 & 0x1f)) - 1U) << (0x18U - local_4 & 0x1f) | param_1[2];
  while( true ) {
    if (iVar2 < 8) {
      param_1[2] = uVar4;
      param_1[3] = iVar2;
      return CONCAT31((int3)((uint)iVar2 >> 8),1);
    }
    *(char *)*param_1 = (char)((uVar4 & 0xff0000) >> 0x10);
    *param_1 = *param_1 + 1;
    piVar1 = param_1 + 1;
    *piVar1 = *piVar1 + -1;
    if ((*piVar1 == 0) && (uVar3 = FUN_10024010(param_1), (char)uVar3 == '\0')) break;
    if ((uVar4 & 0xff0000) == 0xff0000) {
      *(undefined1 *)*param_1 = 0;
      *param_1 = *param_1 + 1;
      piVar1 = param_1 + 1;
      *piVar1 = *piVar1 + -1;
      if ((*piVar1 == 0) && (uVar3 = FUN_10024010(param_1), (char)uVar3 == '\0')) {
        return uVar3 & 0xffffff00;
      }
    }
    iVar2 = iVar2 + -8;
    uVar4 = uVar4 << 8;
  }
  return uVar3 & 0xffffff00;
}


// ---- FUN_10024010 @ 10024010

uint __cdecl FUN_10024010(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  
  puVar1 = *(undefined4 **)(param_1[8] + 0x14);
  uVar3 = (*(code *)puVar1[3])(param_1[8]);
  if ((char)uVar3 == '\0') {
    return uVar3 & 0xffffff00;
  }
  uVar2 = *puVar1;
  *param_1 = uVar2;
  param_1[1] = puVar1[1];
  return CONCAT31((int3)((uint)uVar2 >> 8),1);
}


// ---- FUN_10024040 @ 10024040

uint __cdecl FUN_10024040(int *param_1,char param_2)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  
  uVar1 = FUN_100240c0(param_1);
  if ((char)uVar1 == '\0') {
    return uVar1 & 0xffffff00;
  }
  *(undefined1 *)*param_1 = 0xff;
  *param_1 = *param_1 + 1;
  piVar2 = param_1 + 1;
  *piVar2 = *piVar2 + -1;
  if (*piVar2 == 0) {
    uVar1 = FUN_10024010(param_1);
    if ((char)uVar1 == '\0') {
      return uVar1 & 0xffffff00;
    }
  }
  *(char *)*param_1 = param_2 + -0x30;
  *param_1 = *param_1 + 1;
  piVar2 = param_1 + 1;
  *piVar2 = *piVar2 + -1;
  if (*piVar2 == 0) {
    uVar1 = FUN_10024010(param_1);
    if ((char)uVar1 == '\0') {
      return uVar1 & 0xffffff00;
    }
  }
  iVar3 = 0;
  piVar2 = (int *)param_1[8];
  if (0 < piVar2[0x36]) {
    piVar2 = param_1 + 4;
    do {
      *piVar2 = 0;
      piVar2 = piVar2 + 1;
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1[8] + 0xd8));
  }
  return CONCAT31((int3)((uint)piVar2 >> 8),1);
}


// ---- FUN_100240c0 @ 100240c0

uint __cdecl FUN_100240c0(int *param_1)

{
  uint uVar1;
  
  uVar1 = FUN_10023f40(param_1,0x7f,7);
  if ((char)uVar1 == '\0') {
    return uVar1 & 0xffffff00;
  }
  param_1[2] = 0;
  param_1[3] = 0;
  return 1;
}


// ---- FUN_100240f0 @ 100240f0

void __cdecl FUN_100240f0(int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int local_24;
  int local_20;
  undefined4 local_1c [6];
  int *local_4;
  
  iVar1 = param_1[0x54];
  local_24 = *(int *)param_1[5];
  local_20 = ((int *)param_1[5])[1];
  puVar4 = (undefined4 *)(iVar1 + 0xc);
  puVar5 = local_1c;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  local_4 = param_1;
  uVar2 = FUN_100240c0(&local_24);
  if ((char)uVar2 == '\0') {
    *(undefined4 *)(*param_1 + 0x14) = 0x16;
    (**(code **)*param_1)(param_1);
  }
  *(int *)param_1[5] = local_24;
  *(int *)(param_1[5] + 4) = local_20;
  puVar4 = local_1c;
  puVar5 = (undefined4 *)(iVar1 + 0xc);
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  return;
}


// ---- FUN_10024180 @ 10024180

undefined4 __cdecl FUN_10024180(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int in_EAX;
  undefined4 *puVar3;
  int iVar4;
  int *local_8;
  int local_4;
  
  iVar1 = *(int *)(param_1 + 0x150);
  if (*(int *)(param_1 + 0xb4) != 0) {
    if (*(int *)(iVar1 + 0x24) == 0) {
      iVar4 = 0;
      if (0 < *(int *)(param_1 + 0xd8)) {
        puVar3 = (undefined4 *)(iVar1 + 0x14);
        do {
          *puVar3 = 0;
          puVar3 = puVar3 + 1;
          iVar4 = iVar4 + 1;
        } while (iVar4 < *(int *)(param_1 + 0xd8));
      }
      in_EAX = *(int *)(param_1 + 0xb4);
      *(int *)(iVar1 + 0x24) = in_EAX;
    }
    *(int *)(iVar1 + 0x24) = *(int *)(iVar1 + 0x24) + -1;
  }
  local_4 = 0;
  if (0 < *(int *)(param_1 + 0xf4)) {
    local_8 = (int *)(param_1 + 0xf8);
    do {
      iVar4 = *local_8;
      iVar2 = *(int *)(param_1 + 0xdc + iVar4 * 4);
      FUN_10024250((short *)*param_2,*(int *)(iVar1 + 0x14 + iVar4 * 4),
                   *(int *)(iVar1 + 0x4c + *(int *)(iVar2 + 0x14) * 4),
                   *(int **)(iVar1 + 0x5c + *(int *)(iVar2 + 0x18) * 4));
      in_EAX = local_4 + 1;
      local_8 = local_8 + 1;
      *(int *)(iVar1 + 0x14 + iVar4 * 4) = (int)*(short *)*param_2;
      param_2 = param_2 + 1;
      local_4 = in_EAX;
    } while (in_EAX < *(int *)(param_1 + 0xf4));
  }
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// ---- FUN_10024250 @ 10024250

void __cdecl FUN_10024250(short *param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  
  iVar1 = *param_1 - param_2;
  if (iVar1 < 0) {
    iVar1 = -iVar1;
  }
  iVar2 = 0;
  for (; iVar1 != 0; iVar1 = iVar1 >> 1) {
    iVar2 = iVar2 + 1;
  }
  uVar4 = 0;
  piVar3 = (int *)(param_3 + iVar2 * 4);
  *piVar3 = *piVar3 + 1;
  piVar3 = &DAT_1002aa54;
  do {
    iVar1 = (int)param_1[*piVar3];
    if (iVar1 == 0) {
      uVar4 = uVar4 + 1;
    }
    else {
      if (0xf < (int)uVar4) {
        param_4[0xf0] = param_4[0xf0] + (uVar4 >> 4);
        uVar4 = uVar4 + (uVar4 >> 4) * -0x10;
      }
      if (iVar1 < 0) {
        iVar1 = -iVar1;
      }
      iVar2 = 1;
      while (iVar1 = iVar1 >> 1, iVar1 != 0) {
        iVar2 = iVar2 + 1;
      }
      param_4[uVar4 * 0x10 + iVar2] = param_4[uVar4 * 0x10 + iVar2] + 1;
      uVar4 = 0;
    }
    piVar3 = piVar3 + 1;
  } while (piVar3 < &DAT_1002ab50);
  if (0 < (int)uVar4) {
    *param_4 = *param_4 + 1;
  }
  return;
}


// ---- FUN_100242e0 @ 100242e0

void __cdecl FUN_100242e0(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char local_14 [4];
  int local_10;
  int *local_c;
  int local_8;
  char local_4 [4];
  
  local_10 = param_1[0x54];
  local_14[0] = '\0';
  local_14[1] = '\0';
  local_14[2] = '\0';
  local_14[3] = '\0';
  local_4[0] = '\0';
  local_4[1] = '\0';
  local_4[2] = '\0';
  local_4[3] = '\0';
  local_8 = 0;
  if (0 < param_1[0x36]) {
    local_c = param_1 + 0x37;
    do {
      iVar4 = *(int *)(*local_c + 0x14);
      iVar2 = *(int *)(*local_c + 0x18);
      if (local_14[iVar4] == '\0') {
        piVar1 = param_1 + iVar4 + 0x14;
        if (*piVar1 == 0) {
          iVar3 = FUN_10020610((int)param_1);
          *piVar1 = iVar3;
        }
        FUN_100238d0(param_1,(undefined4 *)*piVar1,*(int *)(local_10 + 0x4c + iVar4 * 4));
        local_14[iVar4] = '\x01';
      }
      if (local_4[iVar2] == '\0') {
        piVar1 = param_1 + iVar2 + 0x18;
        if (*piVar1 == 0) {
          iVar4 = FUN_10020610((int)param_1);
          *piVar1 = iVar4;
        }
        FUN_100238d0(param_1,(undefined4 *)*piVar1,*(int *)(local_10 + 0x5c + iVar2 * 4));
        local_4[iVar2] = '\x01';
      }
      local_c = local_c + 1;
      local_8 = local_8 + 1;
    } while (local_8 < param_1[0x36]);
  }
  return;
}


// ---- FUN_100243b0 @ 100243b0

void __cdecl FUN_100243b0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar1 = (undefined4 *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x6c);
  iVar2 = 4;
  *(undefined4 **)(param_1 + 0x150) = puVar1;
  *puVar1 = FUN_100243f0;
  puVar3 = puVar1 + 0x13;
  do {
    *puVar3 = 0;
    iVar2 = iVar2 + -1;
    puVar3[4] = 0;
    puVar3 = puVar3 + 1;
  } while (iVar2 != 0);
  puVar1[0x10] = 0;
  return;
}


// ---- FUN_100243f0 @ 100243f0

void __cdecl FUN_100243f0(int *param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  bool bVar8;
  undefined4 *local_8;
  int local_4;
  
  iVar2 = param_1[0x54];
  *(int **)(iVar2 + 0x20) = param_1;
  *(char *)(iVar2 + 0xc) = param_2;
  bVar8 = param_1[0x48] != 0;
  if (param_1[0x4a] == 0) {
    if (bVar8) {
      *(undefined1 **)(iVar2 + 4) = &LAB_10024990;
    }
    else {
      *(code **)(iVar2 + 4) = FUN_100245b0;
    }
  }
  else if (bVar8) {
    *(undefined1 **)(iVar2 + 4) = &LAB_10024bf0;
    if (*(int *)(iVar2 + 0x40) == 0) {
      uVar3 = (**(code **)param_1[1])(param_1,1,1000);
      *(undefined4 *)(iVar2 + 0x40) = uVar3;
    }
  }
  else {
    *(code **)(iVar2 + 4) = FUN_10024b30;
  }
  *(code **)(iVar2 + 8) = FUN_10024e60;
  if (param_2 == '\0') {
    *(undefined1 **)(iVar2 + 8) = &LAB_10024e10;
  }
  local_4 = 0;
  if (0 < param_1[0x36]) {
    local_8 = (undefined4 *)(iVar2 + 0x24);
    piVar6 = param_1 + 0x37;
    do {
      iVar4 = *piVar6;
      *local_8 = 0;
      if (bVar8) {
        iVar4 = *(int *)(iVar4 + 0x18);
        *(int *)(iVar2 + 0x34) = iVar4;
        if ((iVar4 < 0) || (3 < iVar4)) goto LAB_100244fa;
        if (param_1[iVar4 + 0x18] != 0) goto LAB_10024510;
        if (param_2 == '\0') goto LAB_100244fa;
LAB_10024517:
        piVar1 = (int *)(iVar2 + 0x5c + iVar4 * 4);
        if (*piVar1 == 0) {
          iVar4 = (**(code **)param_1[1])(param_1,1,0x404);
          *piVar1 = iVar4;
        }
        puVar7 = (undefined4 *)*piVar1;
        for (iVar4 = 0x101; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar7 = 0;
          puVar7 = puVar7 + 1;
        }
      }
      else if (param_1[0x4a] == 0) {
        iVar4 = *(int *)(iVar4 + 0x14);
        if ((-1 < iVar4) && (iVar4 < 4)) {
          if (param_1[iVar4 + 0x14] != 0) goto LAB_10024510;
          if (param_2 != '\0') goto LAB_10024517;
        }
LAB_100244fa:
        *(undefined4 *)(*param_1 + 0x14) = 0x31;
        *(int *)(*param_1 + 0x18) = iVar4;
        (**(code **)*param_1)(param_1);
LAB_10024510:
        if (param_2 != '\0') goto LAB_10024517;
        if (bVar8) {
          iVar5 = param_1[iVar4 + 0x18];
        }
        else {
          iVar5 = param_1[iVar4 + 0x14];
        }
        FUN_100237d0((int)param_1,iVar5,(int *)(iVar2 + iVar4 * 4 + 0x4c));
      }
      piVar6 = piVar6 + 1;
      local_4 = local_4 + 1;
      local_8 = local_8 + 1;
    } while (local_4 < param_1[0x36]);
  }
  *(undefined4 *)(iVar2 + 0x38) = 0;
  *(undefined4 *)(iVar2 + 0x3c) = 0;
  *(undefined4 *)(iVar2 + 0x18) = 0;
  *(undefined4 *)(iVar2 + 0x1c) = 0;
  *(int *)(iVar2 + 0x44) = param_1[0x2d];
  *(undefined4 *)(iVar2 + 0x48) = 0;
  return;
}


// ---- FUN_100245b0 @ 100245b0

undefined4 __cdecl FUN_100245b0(int param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  uint local_14;
  undefined4 *local_10;
  int local_c;
  byte local_8;
  
  iVar2 = *(int *)(param_1 + 0x150);
  uVar3 = *(undefined4 *)(param_1 + 300);
  *(undefined4 *)(iVar2 + 0x10) = **(undefined4 **)(param_1 + 0x14);
  *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)(*(int *)(param_1 + 0x14) + 4);
  if ((*(int *)(param_1 + 0xb4) != 0) && (*(int *)(iVar2 + 0x44) == 0)) {
    FUN_10024830(iVar2,(char)*(undefined4 *)(iVar2 + 0x48));
  }
  local_c = 0;
  if (0 < *(int *)(param_1 + 0xf4)) {
    piVar6 = (int *)(param_1 + 0xf8);
    local_10 = param_2;
    do {
      iVar4 = *(int *)(param_1 + 0xdc + *piVar6 * 4);
      local_8 = (byte)uVar3;
      iVar7 = (int)(*(short *)*local_10 >> (local_8 & 0x1f));
      piVar1 = (int *)(iVar2 + 0x24 + *piVar6 * 4);
      local_14 = iVar7 - *piVar1;
      *piVar1 = iVar7;
      uVar5 = local_14;
      if ((int)local_14 < 0) {
        uVar5 = -local_14;
        local_14 = local_14 - 1;
      }
      iVar7 = 0;
      for (; uVar5 != 0; uVar5 = (int)uVar5 >> 1) {
        iVar7 = iVar7 + 1;
      }
      FUN_100247f0(iVar2,*(int *)(iVar4 + 0x14),iVar7);
      if (iVar7 != 0) {
        FUN_100246e0(iVar2,local_14,iVar7);
      }
      piVar6 = piVar6 + 1;
      local_c = local_c + 1;
      local_10 = local_10 + 1;
    } while (local_c < *(int *)(param_1 + 0xf4));
  }
  **(undefined4 **)(param_1 + 0x14) = *(undefined4 *)(iVar2 + 0x10);
  *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = *(undefined4 *)(iVar2 + 0x14);
  uVar5 = *(uint *)(param_1 + 0xb4);
  if (uVar5 != 0) {
    if (*(int *)(iVar2 + 0x44) == 0) {
      *(uint *)(iVar2 + 0x44) = uVar5;
      uVar5 = *(int *)(iVar2 + 0x48) + 1;
      *(uint *)(iVar2 + 0x48) = uVar5;
      uVar5 = uVar5 & 7;
      *(uint *)(iVar2 + 0x48) = uVar5;
    }
    *(int *)(iVar2 + 0x44) = *(int *)(iVar2 + 0x44) + -1;
  }
  return CONCAT31((int3)(uVar5 >> 8),1);
}


// ---- FUN_100246e0 @ 100246e0

void __cdecl FUN_100246e0(int param_1,uint param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 local_4;
  
  iVar2 = *(int *)(param_1 + 0x1c);
  if (param_3 == 0) {
    *(undefined4 *)(**(int **)(param_1 + 0x20) + 0x14) = 0x27;
    (**(code **)**(undefined4 **)(param_1 + 0x20))(*(undefined4 **)(param_1 + 0x20));
  }
  if (*(char *)(param_1 + 0xc) == '\0') {
    local_4 = iVar2 + param_3;
    uVar4 = (param_2 & (1 << ((byte)param_3 & 0x1f)) - 1U) << (0x18U - (char)local_4 & 0x1f) |
            *(uint *)(param_1 + 0x18);
    if (7 < (int)local_4) {
      uVar3 = local_4 >> 3;
      local_4 = local_4 + uVar3 * -8;
      do {
        **(undefined1 **)(param_1 + 0x10) = (char)((uVar4 & 0xff0000) >> 0x10);
        *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
        piVar1 = (int *)(param_1 + 0x14);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_100247b0(param_1);
        }
        if ((uVar4 & 0xff0000) == 0xff0000) {
          **(undefined1 **)(param_1 + 0x10) = 0;
          *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
          piVar1 = (int *)(param_1 + 0x14);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FUN_100247b0(param_1);
          }
        }
        uVar4 = uVar4 << 8;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    *(uint *)(param_1 + 0x18) = uVar4;
    *(uint *)(param_1 + 0x1c) = local_4;
  }
  return;
}


// ---- FUN_100247b0 @ 100247b0

void __cdecl FUN_100247b0(int param_1)

{
  undefined4 *puVar1;
  char cVar2;
  
  puVar1 = *(undefined4 **)(*(int *)(param_1 + 0x20) + 0x14);
  cVar2 = (*(code *)puVar1[3])(*(int *)(param_1 + 0x20));
  if (cVar2 == '\0') {
    *(undefined4 *)(**(int **)(param_1 + 0x20) + 0x14) = 0x16;
    (**(code **)**(undefined4 **)(param_1 + 0x20))(*(undefined4 **)(param_1 + 0x20));
  }
  *(undefined4 *)(param_1 + 0x10) = *puVar1;
  *(undefined4 *)(param_1 + 0x14) = puVar1[1];
  return;
}


// ---- FUN_100247f0 @ 100247f0

void __cdecl FUN_100247f0(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0xc) != '\0') {
    piVar1 = (int *)(*(int *)(param_1 + 0x5c + param_2 * 4) + param_3 * 4);
    *piVar1 = *piVar1 + 1;
    return;
  }
  iVar2 = *(int *)(param_1 + 0x4c + param_2 * 4);
  FUN_100246e0(param_1,*(uint *)(iVar2 + param_3 * 4),(int)*(char *)(param_3 + 0x400 + iVar2));
  return;
}


// ---- FUN_10024830 @ 10024830

void __cdecl FUN_10024830(int param_1,char param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  
  FUN_100248e0(param_1);
  if (*(char *)(param_1 + 0xc) == '\0') {
    FUN_100248c0(param_1);
    **(undefined1 **)(param_1 + 0x10) = 0xff;
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
    piVar1 = (int *)(param_1 + 0x14);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_100247b0(param_1);
    }
    **(char **)(param_1 + 0x10) = param_2 + -0x30;
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
    piVar1 = (int *)(param_1 + 0x14);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_100247b0(param_1);
    }
  }
  if (*(int *)(*(int *)(param_1 + 0x20) + 0x120) == 0) {
    iVar3 = 0;
    if (0 < *(int *)(*(int *)(param_1 + 0x20) + 0xd8)) {
      puVar2 = (undefined4 *)(param_1 + 0x24);
      do {
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(*(int *)(param_1 + 0x20) + 0xd8));
      return;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  return;
}


// ---- FUN_100248c0 @ 100248c0

void __cdecl FUN_100248c0(int param_1)

{
  FUN_100246e0(param_1,0x7f,7);
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}


// ---- FUN_100248e0 @ 100248e0

void __cdecl FUN_100248e0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x38);
  if (iVar1 != 0) {
    iVar2 = 0;
    while (iVar1 = iVar1 >> 1, iVar1 != 0) {
      iVar2 = iVar2 + 1;
    }
    FUN_100247f0(param_1,*(int *)(param_1 + 0x34),iVar2 << 4);
    if (iVar2 != 0) {
      FUN_100246e0(param_1,*(uint *)(param_1 + 0x38),iVar2);
    }
    *(undefined4 *)(param_1 + 0x38) = 0;
    FUN_10024950(param_1,*(char **)(param_1 + 0x40),*(int *)(param_1 + 0x3c));
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  return;
}


// ---- FUN_10024950 @ 10024950

void __cdecl FUN_10024950(int param_1,char *param_2,int param_3)

{
  if (*(char *)(param_1 + 0xc) == '\0') {
    for (; param_3 != 0; param_3 = param_3 + -1) {
      FUN_100246e0(param_1,(int)*param_2,1);
      param_2 = param_2 + 1;
    }
  }
  return;
}


// ---- FUN_10024b30 @ 10024b30

undefined4 __cdecl FUN_10024b30(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  short *psVar3;
  uint uVar4;
  int iVar5;
  byte local_4;
  
  iVar1 = *(int *)(param_1 + 0x150);
  uVar2 = *(undefined4 *)(param_1 + 300);
  *(undefined4 *)(iVar1 + 0x10) = **(undefined4 **)(param_1 + 0x14);
  *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)(*(int *)(param_1 + 0x14) + 4);
  if ((*(int *)(param_1 + 0xb4) != 0) && (*(int *)(iVar1 + 0x44) == 0)) {
    FUN_10024830(iVar1,(char)*(undefined4 *)(iVar1 + 0x48));
  }
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0xf4)) {
    do {
      psVar3 = (short *)*param_2;
      local_4 = (byte)uVar2;
      param_2 = param_2 + 1;
      iVar5 = iVar5 + 1;
      FUN_100246e0(iVar1,(int)*psVar3 >> (local_4 & 0x1f),1);
    } while (iVar5 < *(int *)(param_1 + 0xf4));
  }
  **(undefined4 **)(param_1 + 0x14) = *(undefined4 *)(iVar1 + 0x10);
  *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = *(undefined4 *)(iVar1 + 0x14);
  uVar4 = *(uint *)(param_1 + 0xb4);
  if (uVar4 != 0) {
    if (*(int *)(iVar1 + 0x44) == 0) {
      *(uint *)(iVar1 + 0x44) = uVar4;
      uVar4 = *(int *)(iVar1 + 0x48) + 1;
      *(uint *)(iVar1 + 0x48) = uVar4;
      uVar4 = uVar4 & 7;
      *(uint *)(iVar1 + 0x48) = uVar4;
    }
    *(int *)(iVar1 + 0x44) = *(int *)(iVar1 + 0x44) + -1;
  }
  return CONCAT31((int3)(uVar4 >> 8),1);
}


// ---- FUN_10024e60 @ 10024e60

void __cdecl FUN_10024e60(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  char local_c [4];
  int local_8;
  
  iVar1 = param_1[0x54];
  FUN_100248e0(iVar1);
  local_c[0] = '\0';
  local_c[1] = '\0';
  local_c[2] = '\0';
  local_c[3] = '\0';
  local_8 = 0;
  iVar2 = param_1[0x48];
  if (0 < param_1[0x36]) {
    piVar6 = param_1 + 0x37;
    do {
      if (iVar2 != 0) {
        iVar4 = *(int *)(*piVar6 + 0x18);
LAB_10024ec6:
        if (local_c[iVar4] == '\0') {
          iVar3 = iVar4 + 0x14;
          if (iVar2 != 0) {
            iVar3 = iVar4 + 0x18;
          }
          piVar5 = param_1 + iVar3;
          if (*piVar5 == 0) {
            iVar3 = FUN_10020610((int)param_1);
            *piVar5 = iVar3;
          }
          FUN_100238d0(param_1,(undefined4 *)*piVar5,*(int *)(iVar1 + 0x5c + iVar4 * 4));
          local_c[iVar4] = '\x01';
        }
      }
      else if (param_1[0x4a] == 0) {
        iVar4 = *(int *)(*piVar6 + 0x14);
        goto LAB_10024ec6;
      }
      piVar6 = piVar6 + 1;
      local_8 = local_8 + 1;
    } while (local_8 < param_1[0x36]);
  }
  return;
}


// ---- FUN_10024f30 @ 10024f30

void __cdecl FUN_10024f30(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)(**(code **)param_1[1])(param_1,1,0x30);
  param_1[0x53] = (int)puVar1;
  *puVar1 = FUN_10024fc0;
  iVar2 = param_1[0x2c];
  if (iVar2 == 0) {
    puVar1[1] = &LAB_10025180;
    puVar1[2] = &LAB_10027ad0;
  }
  else if (iVar2 == 1) {
    puVar1[1] = &LAB_10025180;
    puVar1[2] = &LAB_10027880;
  }
  else if (iVar2 == 2) {
    puVar1[1] = &LAB_10025320;
    puVar1[7] = &LAB_10027670;
  }
  else {
    *(undefined4 *)(*param_1 + 0x14) = 0x2f;
    (**(code **)*param_1)(param_1);
  }
  iVar2 = 4;
  puVar1 = puVar1 + 3;
  do {
    *puVar1 = 0;
    iVar2 = iVar2 + -1;
    puVar1[5] = 0;
    puVar1 = puVar1 + 1;
  } while (iVar2 != 0);
  return;
}


// ---- FUN_10024fc0 @ 10024fc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_10024fc0(int *param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  int *piVar6;
  int iVar7;
  double *pdVar8;
  short *psVar9;
  short *psVar10;
  float *pfVar11;
  float *pfVar12;
  double *pdVar13;
  ushort *puVar14;
  ushort *puVar15;
  int local_10;
  int local_c;
  
  local_c = 0;
  iVar2 = param_1[0x53];
  local_10 = param_1[0xf];
  if (0 < param_1[0xd]) {
    do {
      iVar7 = *(int *)(local_10 + 0x10);
      if (((iVar7 < 0) || (3 < iVar7)) || (param_1[iVar7 + 0x10] == 0)) {
        *(undefined4 *)(*param_1 + 0x14) = 0x33;
        *(int *)(*param_1 + 0x18) = iVar7;
        (**(code **)*param_1)(param_1);
      }
      puVar14 = (ushort *)param_1[iVar7 + 0x10];
      iVar3 = param_1[0x2c];
      if (iVar3 == 0) {
        piVar6 = (int *)(iVar2 + 0xc + iVar7 * 4);
        if (*piVar6 == 0) {
          iVar7 = (**(code **)param_1[1])(param_1,1,0x100);
          *piVar6 = iVar7;
        }
        iVar7 = 0x40;
        piVar6 = (int *)*piVar6;
        do {
          iVar7 = iVar7 + -1;
          *piVar6 = (uint)*puVar14 << 3;
          piVar6 = piVar6 + 1;
          puVar14 = puVar14 + 1;
        } while (iVar7 != 0);
      }
      else if (iVar3 == 1) {
        piVar6 = (int *)(iVar2 + 0xc + iVar7 * 4);
        if (*piVar6 == 0) {
          iVar7 = (**(code **)param_1[1])(param_1,1,0x100);
          *piVar6 = iVar7;
        }
        piVar6 = (int *)*piVar6;
        psVar9 = &DAT_1002ab90;
        do {
          psVar10 = psVar9 + 1;
          uVar1 = *puVar14;
          puVar14 = puVar14 + 1;
          *piVar6 = (int)((uint)uVar1 * (int)*psVar9 + 0x400) >> 0xb;
          piVar6 = piVar6 + 1;
          psVar9 = psVar10;
        } while (psVar10 < &DAT_1002ac10);
      }
      else if (iVar3 == 2) {
        piVar6 = (int *)(iVar2 + 0x20 + iVar7 * 4);
        if (*piVar6 == 0) {
          iVar7 = (**(code **)param_1[1])(param_1,1,0x100);
          *piVar6 = iVar7;
        }
        fVar5 = (float)_DAT_1002ac58;
        pfVar11 = (float *)*piVar6;
        pdVar8 = (double *)&DAT_1002ac10;
        do {
          pfVar12 = pfVar11;
          pdVar13 = (double *)&DAT_1002ac10;
          puVar15 = puVar14;
          while( true ) {
            puVar14 = puVar15 + 1;
            pfVar11 = pfVar12 + 1;
            fVar4 = fVar5 / ((float)*puVar15 * (float)*pdVar13 * (float)*pdVar8 *
                            (float)_DAT_1002ac50);
            if (&UNK_1002ac4f < pdVar13 + 1) break;
            *pfVar12 = fVar4;
            pfVar12 = pfVar11;
            pdVar13 = pdVar13 + 1;
            puVar15 = puVar14;
          }
          *pfVar12 = fVar4;
          pdVar8 = pdVar8 + 1;
        } while (pdVar8 < &DAT_1002ac50);
      }
      else {
        *(undefined4 *)(*param_1 + 0x14) = 0x2f;
        (**(code **)*param_1)(param_1);
      }
      local_10 = local_10 + 0x54;
      local_c = local_c + 1;
    } while (local_c < param_1[0xd]);
  }
  return;
}


// ---- FUN_100254f0 @ 100254f0

void __cdecl FUN_100254f0(int *param_1,char param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 != '\0') {
    *(undefined4 *)(*param_1 + 0x14) = 4;
    (**(code **)*param_1)(param_1);
  }
  puVar1 = (undefined4 *)(**(code **)param_1[1])(param_1,1,0x40);
  param_1[0x4e] = (int)puVar1;
  *puVar1 = &LAB_100255a0;
  if (*(char *)(param_1[0x52] + 8) != '\0') {
    puVar1[1] = FUN_10025780;
    FUN_10025920((int)param_1);
    return;
  }
  puVar1[1] = &LAB_100255e0;
  iVar3 = 0;
  if (0 < param_1[0xd]) {
    iVar4 = param_1[0xf];
    puVar1 = puVar1 + 2;
    do {
      iVar3 = iVar3 + 1;
      uVar2 = (**(code **)(param_1[1] + 8))
                        (param_1,1,
                         (*(int *)(iVar4 + 0x1c) * param_1[0x33] * 8) / *(int *)(iVar4 + 8),
                         param_1[0x34]);
      *puVar1 = uVar2;
      iVar4 = iVar4 + 0x54;
      puVar1 = puVar1 + 1;
    } while (iVar3 < param_1[0xd]);
  }
  return;
}


// ---- FUN_10025740 @ 10025740

void __cdecl FUN_10025740(int param_1,uint param_2,int param_3,int param_4)

{
  int iVar1;
  
  for (iVar1 = param_3; iVar1 < param_4; iVar1 = iVar1 + 1) {
    FUN_10022d90(param_1,param_3 + -1,param_1,iVar1,1,param_2);
  }
  return;
}


// ---- FUN_10025780 @ 10025780

void __cdecl
FUN_10025780(int param_1,int param_2,uint *param_3,uint param_4,undefined4 param_5,uint *param_6,
            uint param_7)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  int iStack_c;
  
  iVar1 = *(int *)(param_1 + 0x138);
  iVar3 = *(int *)(param_1 + 0xd0) * 3;
  uVar2 = *param_6;
  do {
    if (param_7 <= uVar2) {
      return;
    }
    uVar2 = *param_3;
    if (uVar2 < param_4) {
      uVar6 = *(int *)(iVar1 + 0x3c) - *(int *)(iVar1 + 0x34);
      uVar4 = param_4 - uVar2;
      if (uVar6 <= param_4 - uVar2) {
        uVar4 = uVar6;
      }
      piVar7 = (int *)(iVar1 + 8);
      (**(code **)(*(int *)(param_1 + 0x144) + 4))
                (param_1,param_2 + uVar2 * 4,piVar7,*(int *)(iVar1 + 0x34),uVar4);
      if ((*(int *)(param_1 + 0x1c) == *(int *)(iVar1 + 0x30)) &&
         (iStack_c = 0, 0 < *(int *)(param_1 + 0x34))) {
        do {
          iVar5 = 1;
          if (0 < *(int *)(param_1 + 0xd0)) {
            do {
              iVar8 = iVar5 + 1;
              FUN_10022d90(*piVar7,0,*piVar7,-iVar5,1,*(uint *)(param_1 + 0x18));
              iVar5 = iVar8;
            } while (iVar8 <= *(int *)(param_1 + 0xd0));
          }
          piVar7 = piVar7 + 1;
          iStack_c = iStack_c + 1;
        } while (iStack_c < *(int *)(param_1 + 0x34));
      }
      *param_3 = *param_3 + uVar4;
      *(int *)(iVar1 + 0x34) = *(int *)(iVar1 + 0x34) + uVar4;
      *(int *)(iVar1 + 0x30) = *(int *)(iVar1 + 0x30) - uVar4;
    }
    else {
      if (*(int *)(iVar1 + 0x30) != 0) {
        return;
      }
      if (*(int *)(iVar1 + 0x34) < *(int *)(iVar1 + 0x3c)) {
        iVar5 = 0;
        if (0 < *(int *)(param_1 + 0x34)) {
          piVar7 = (int *)(iVar1 + 8);
          do {
            iVar8 = *piVar7;
            piVar7 = piVar7 + 1;
            iVar5 = iVar5 + 1;
            FUN_10025740(iVar8,*(uint *)(param_1 + 0x18),*(int *)(iVar1 + 0x34),
                         *(int *)(iVar1 + 0x3c));
          } while (iVar5 < *(int *)(param_1 + 0x34));
        }
        *(undefined4 *)(iVar1 + 0x34) = *(undefined4 *)(iVar1 + 0x3c);
      }
    }
    if (*(int *)(iVar1 + 0x3c) == *(int *)(iVar1 + 0x34)) {
      (**(code **)(*(int *)(param_1 + 0x148) + 4))
                (param_1,iVar1 + 8,*(undefined4 *)(iVar1 + 0x38),param_5,*param_6);
      *param_6 = *param_6 + 1;
      iVar5 = *(int *)(param_1 + 0xd0) + *(int *)(iVar1 + 0x38);
      *(int *)(iVar1 + 0x38) = iVar5;
      if (iVar3 <= iVar5) {
        *(undefined4 *)(iVar1 + 0x38) = 0;
      }
      if (iVar3 <= *(int *)(iVar1 + 0x34)) {
        *(undefined4 *)(iVar1 + 0x34) = 0;
      }
      *(int *)(iVar1 + 0x3c) = *(int *)(param_1 + 0xd0) + *(int *)(iVar1 + 0x34);
    }
    uVar2 = *param_6;
  } while( true );
}


// ---- FUN_10025920 @ 10025920

void __cdecl FUN_10025920(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puStack_20;
  int iStack_1c;
  int *piStack_14;
  int iStack_10;
  
  iVar4 = *(int *)(param_1 + 0x138);
  iVar1 = *(int *)(param_1 + 0xd0);
  puStack_20 = (undefined4 *)
               (*(code *)**(undefined4 **)(param_1 + 4))
                         (param_1,1,*(int *)(param_1 + 0x34) * iVar1 * 0x14);
  iStack_1c = *(int *)(param_1 + 0x3c);
  iStack_10 = 0;
  if (0 < *(int *)(param_1 + 0x34)) {
    piStack_14 = (int *)(iVar4 + 8);
    do {
      puVar2 = (undefined4 *)
               (**(code **)(*(int *)(param_1 + 4) + 8))
                         (param_1,1,
                          (*(int *)(iStack_1c + 0x1c) * *(int *)(param_1 + 0xcc) * 8) /
                          *(int *)(iStack_1c + 8),iVar1 * 3);
      puVar6 = puVar2;
      puVar5 = puStack_20 + iVar1;
      for (uVar3 = (uint)(iVar1 * 0xc) >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar5 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar5 = puVar5 + 1;
      }
      for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
        *(undefined1 *)puVar5 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        puVar5 = (undefined4 *)((int)puVar5 + 1);
      }
      if (0 < iVar1) {
        puVar6 = puVar2 + iVar1 * 2;
        iVar4 = iVar1;
        puVar5 = puStack_20;
        puVar7 = puStack_20 + iVar1 * 4;
        do {
          *puVar5 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar5 = puVar5 + 1;
          *puVar7 = *puVar2;
          iVar4 = iVar4 + -1;
          puVar2 = puVar2 + 1;
          puVar7 = puVar7 + 1;
        } while (iVar4 != 0);
      }
      iStack_10 = iStack_10 + 1;
      *piStack_14 = (int)(puStack_20 + iVar1);
      puStack_20 = puStack_20 + iVar1 * 5;
      piStack_14 = piStack_14 + 1;
      iStack_1c = iStack_1c + 0x54;
    } while (iStack_10 < *(int *)(param_1 + 0x34));
  }
  return;
}


// ---- FUN_10025a50 @ 10025a50

void __cdecl FUN_10025a50(int *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  int iStack_8;
  
  bVar3 = true;
  puVar4 = (undefined4 *)(**(code **)param_1[1])(param_1,1,0x34);
  param_1[0x52] = (int)puVar4;
  *puVar4 = FUN_10025bc0;
  puVar4[1] = &LAB_10025bd0;
  *(undefined1 *)(puVar4 + 2) = 0;
  if (*(char *)((int)param_1 + 0xab) != '\0') {
    *(undefined4 *)(*param_1 + 0x14) = 0x17;
    (**(code **)*param_1)(param_1);
  }
  iStack_8 = 0;
  iVar6 = param_1[0xf];
  if (0 < param_1[0xd]) {
    puVar5 = puVar4 + 3;
    do {
      iVar1 = *(int *)(iVar6 + 8);
      iVar2 = param_1[0x33];
      if ((iVar1 == iVar2) && (param_1[0x34] == *(int *)(iVar6 + 0xc))) {
        if (param_1[0x2b] == 0) {
          *puVar5 = &LAB_10025dd0;
        }
        else {
          *puVar5 = &LAB_10026290;
          *(undefined1 *)(puVar4 + 2) = 1;
        }
      }
      else if ((iVar1 * 2 - iVar2 == 0) && (param_1[0x34] == *(int *)(iVar6 + 0xc))) {
        bVar3 = false;
        *puVar5 = &LAB_10025e20;
      }
      else if ((iVar1 * 2 == iVar2) && (*(int *)(iVar6 + 0xc) * 2 == param_1[0x34])) {
        if (param_1[0x2b] == 0) {
          *puVar5 = &LAB_10025ec0;
        }
        else {
          *puVar5 = &LAB_10025f90;
          *(undefined1 *)(puVar4 + 2) = 1;
        }
      }
      else if ((iVar2 % iVar1 == 0) && (param_1[0x34] % *(int *)(iVar6 + 0xc) == 0)) {
        bVar3 = false;
        *puVar5 = FUN_10025c50;
      }
      else {
        *(undefined4 *)(*param_1 + 0x14) = 0x25;
        (**(code **)*param_1)(param_1);
      }
      puVar5 = puVar5 + 1;
      iVar6 = iVar6 + 0x54;
      iStack_8 = iStack_8 + 1;
    } while (iStack_8 < param_1[0xd]);
  }
  if ((param_1[0x2b] != 0) && (!bVar3)) {
    *(undefined4 *)(*param_1 + 0x14) = 0x62;
    (**(code **)(*param_1 + 4))(param_1,0);
  }
  return;
}


// ---- FUN_10025bc0 @ 10025bc0

void FUN_10025bc0(void)

{
  return;
}


// ---- FUN_10025c50 @ 10025c50

void __cdecl FUN_10025c50(int param_1,int param_2,int *param_3,int *param_4)

{
  int iVar1;
  byte bVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  byte *pbVar10;
  int iVar11;
  int *local_1c;
  int *local_18;
  int local_14;
  int local_10;
  
  iVar4 = *(int *)(param_2 + 0x1c) * 8;
  iVar5 = *(int *)(param_1 + 0xcc) / *(int *)(param_2 + 8);
  iVar6 = *(int *)(param_1 + 0xd0) / *(int *)(param_2 + 0xc);
  FUN_10025d70(param_3,*(int *)(param_1 + 0xd0),*(int *)(param_1 + 0x18),iVar4 * iVar5);
  local_14 = 0;
  if (0 < *(int *)(param_2 + 0xc)) {
    local_1c = param_3;
    local_18 = param_4;
    do {
      iVar11 = 0;
      puVar3 = (undefined1 *)*local_18;
      for (iVar1 = iVar4; iVar1 != 0; iVar1 = iVar1 + -1) {
        iVar7 = 0;
        piVar8 = local_1c;
        local_10 = iVar6;
        if (0 < iVar6) {
          do {
            pbVar10 = (byte *)(*piVar8 + iVar11);
            iVar9 = iVar5;
            if (0 < iVar5) {
              do {
                bVar2 = *pbVar10;
                pbVar10 = pbVar10 + 1;
                iVar7 = iVar7 + (uint)bVar2;
                iVar9 = iVar9 + -1;
              } while (iVar9 != 0);
            }
            local_10 = local_10 + -1;
            piVar8 = piVar8 + 1;
          } while (local_10 != 0);
        }
        iVar11 = iVar11 + iVar5;
        *puVar3 = (char)((iVar7 + (iVar6 * iVar5) / 2) / (iVar6 * iVar5));
        puVar3 = puVar3 + 1;
      }
      local_1c = local_1c + iVar6;
      local_14 = local_14 + 1;
      local_18 = local_18 + 1;
    } while (local_14 < *(int *)(param_2 + 0xc));
  }
  return;
}


// ---- FUN_10025d70 @ 10025d70

void __cdecl FUN_10025d70(int *param_1,int param_2,int param_3,int param_4)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  uVar3 = param_4 - param_3;
  if ((0 < (int)uVar3) && (0 < param_2)) {
    do {
      uVar1 = *(undefined1 *)(*param_1 + -1 + param_3);
      if (0 < (int)uVar3) {
        puVar4 = (undefined4 *)(*param_1 + param_3);
        for (uVar2 = uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
          *puVar4 = CONCAT22(CONCAT11(uVar1,uVar1),CONCAT11(uVar1,uVar1));
          puVar4 = puVar4 + 1;
        }
        for (uVar2 = uVar3 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
          *(undefined1 *)puVar4 = uVar1;
          puVar4 = (undefined4 *)((int)puVar4 + 1);
        }
      }
      param_1 = param_1 + 1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}


// ---- FUN_10026430 @ 10026430

void __cdecl FUN_10026430(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(**(code **)param_1[1])(param_1,1,0xc);
  param_1[0x51] = (int)puVar2;
  *puVar2 = FUN_10025bc0;
  switch(param_1[9]) {
  case 1:
    if (param_1[8] == 1) goto LAB_10026499;
    break;
  case 2:
  case 3:
    if (param_1[8] == 3) goto LAB_10026499;
    break;
  case 4:
  case 5:
    if (param_1[8] == 4) goto LAB_10026499;
    break;
  default:
    if (0 < param_1[8]) goto LAB_10026499;
  }
  *(undefined4 *)(*param_1 + 0x14) = 7;
  (**(code **)*param_1)(param_1);
LAB_10026499:
  switch(param_1[0xe]) {
  case 1:
    break;
  case 2:
    if (param_1[0xd] != 3) {
      *(undefined4 *)(*param_1 + 0x14) = 8;
      (**(code **)*param_1)(param_1);
    }
    if (param_1[9] != 2) {
      *(undefined4 *)(*param_1 + 0x14) = 0x19;
      (**(code **)*param_1)(param_1);
      return;
    }
    puVar2[1] = &LAB_10026aa0;
    return;
  case 3:
    if (param_1[0xd] != 3) {
      *(undefined4 *)(*param_1 + 0x14) = 8;
      (**(code **)*param_1)(param_1);
    }
    if (param_1[9] != 2) {
      if (param_1[9] != 3) {
        *(undefined4 *)(*param_1 + 0x14) = 0x19;
        (**(code **)*param_1)(param_1);
        return;
      }
      puVar2[1] = &LAB_10026aa0;
      return;
    }
    *puVar2 = &LAB_10026690;
    puVar2[1] = &LAB_10026760;
    return;
  case 4:
    if (param_1[0xd] != 4) {
      *(undefined4 *)(*param_1 + 0x14) = 8;
      (**(code **)*param_1)(param_1);
    }
    if (param_1[9] != 4) {
      *(undefined4 *)(*param_1 + 0x14) = 0x19;
      (**(code **)*param_1)(param_1);
      return;
    }
    puVar2[1] = &LAB_10026aa0;
    return;
  case 5:
    if (param_1[0xd] != 4) {
      *(undefined4 *)(*param_1 + 0x14) = 8;
      (**(code **)*param_1)(param_1);
    }
    if (param_1[9] != 4) {
      if (param_1[9] != 5) {
        *(undefined4 *)(*param_1 + 0x14) = 0x19;
        (**(code **)*param_1)(param_1);
        return;
      }
      puVar2[1] = &LAB_10026aa0;
      return;
    }
    *puVar2 = &LAB_10026690;
    puVar2[1] = &LAB_100268f0;
    return;
  default:
    if ((param_1[9] != param_1[0xe]) || (param_1[0xd] != param_1[8])) {
      *(undefined4 *)(*param_1 + 0x14) = 0x19;
      (**(code **)*param_1)(param_1);
    }
    puVar2[1] = &LAB_10026aa0;
    return;
  }
  if (param_1[0xd] != 1) {
    *(undefined4 *)(*param_1 + 0x14) = 8;
    (**(code **)*param_1)(param_1);
  }
  iVar1 = param_1[9];
  if (iVar1 == 1) {
    puVar2[1] = &LAB_10026a40;
    return;
  }
  if (iVar1 == 2) {
    *puVar2 = &LAB_10026690;
    puVar2[1] = &LAB_10026860;
    return;
  }
  if (iVar1 != 3) {
    *(undefined4 *)(*param_1 + 0x14) = 0x19;
    (**(code **)*param_1)(param_1);
    return;
  }
  puVar2[1] = &LAB_10026a40;
  return;
}


// ---- FUN_10026b10 @ 10026b10

void __cdecl FUN_10026b10(int *param_1,char param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(**(code **)param_1[1])(param_1,1,0x20);
  param_1[0x4c] = (int)puVar1;
  *puVar1 = &LAB_10027150;
  puVar1[1] = FUN_100275d0;
  puVar1[2] = &LAB_10027600;
  *(undefined1 *)((int)puVar1 + 0xd) = 0;
  FUN_10026bd0(param_1);
  if (param_1[0x29] == 0) {
    *(undefined1 *)(param_1 + 0x32) = 0;
    param_1[0x28] = 1;
  }
  else {
    FUN_10026db0(param_1);
  }
  if ((char)param_1[0x32] != '\0') {
    *(undefined1 *)((int)param_1 + 0xaa) = 1;
  }
  if (param_2 == '\0') {
    puVar1[4] = 0;
  }
  else if (*(char *)((int)param_1 + 0xaa) == '\0') {
    puVar1[4] = 2;
  }
  else {
    puVar1[4] = 1;
  }
  puVar1[7] = 0;
  puVar1[5] = 0;
  if (*(char *)((int)param_1 + 0xaa) != '\0') {
    puVar1[6] = param_1[0x28] * 2;
    return;
  }
  puVar1[6] = param_1[0x28];
  return;
}


// ---- FUN_10026bd0 @ 10026bd0

void __cdecl FUN_10026bd0(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((((param_1[7] == 0) || (param_1[6] == 0)) || (param_1[0xd] < 1)) || (param_1[8] < 1)) {
    *(undefined4 *)(*param_1 + 0x14) = 0x1f;
    (**(code **)*param_1)(param_1);
  }
  if ((0xffdc < param_1[7]) || (0xffdc < param_1[6])) {
    *(undefined4 *)(*param_1 + 0x14) = 0x28;
    *(undefined4 *)(*param_1 + 0x18) = 0xffdc;
    (**(code **)*param_1)(param_1);
  }
  if (param_1[0xc] != 8) {
    *(undefined4 *)(*param_1 + 0x14) = 0xd;
    *(int *)(*param_1 + 0x18) = param_1[0xc];
    (**(code **)*param_1)(param_1);
  }
  if (10 < param_1[0xd]) {
    *(undefined4 *)(*param_1 + 0x14) = 0x18;
    *(int *)(*param_1 + 0x18) = param_1[0xd];
    *(undefined4 *)(*param_1 + 0x1c) = 10;
    (**(code **)*param_1)(param_1);
  }
  iVar3 = 0;
  iVar2 = param_1[0xf];
  param_1[0x33] = 1;
  param_1[0x34] = 1;
  if (0 < param_1[0xd]) {
    do {
      if (((*(int *)(iVar2 + 8) < 1) || (4 < *(int *)(iVar2 + 8))) ||
         ((*(int *)(iVar2 + 0xc) < 1 || (4 < *(int *)(iVar2 + 0xc))))) {
        *(undefined4 *)(*param_1 + 0x14) = 0x10;
        (**(code **)*param_1)(param_1);
      }
      iVar1 = *(int *)(iVar2 + 8);
      if (*(int *)(iVar2 + 8) <= param_1[0x33]) {
        iVar1 = param_1[0x33];
      }
      param_1[0x33] = iVar1;
      iVar1 = *(int *)(iVar2 + 0xc);
      if (*(int *)(iVar2 + 0xc) <= param_1[0x34]) {
        iVar1 = param_1[0x34];
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x54;
      param_1[0x34] = iVar1;
    } while (iVar3 < param_1[0xd]);
  }
  iVar3 = 0;
  iVar2 = param_1[0xf];
  if (0 < param_1[0xd]) {
    do {
      *(int *)(iVar2 + 4) = iVar3;
      iVar3 = iVar3 + 1;
      *(undefined4 *)(iVar2 + 0x24) = 8;
      iVar1 = FUN_10022d60(*(int *)(iVar2 + 8) * param_1[6],param_1[0x33] << 3);
      *(int *)(iVar2 + 0x1c) = iVar1;
      iVar1 = FUN_10022d60(*(int *)(iVar2 + 0xc) * param_1[7],param_1[0x34] << 3);
      *(int *)(iVar2 + 0x20) = iVar1;
      iVar1 = FUN_10022d60(*(int *)(iVar2 + 8) * param_1[6],param_1[0x33]);
      *(int *)(iVar2 + 0x28) = iVar1;
      iVar1 = FUN_10022d60(*(int *)(iVar2 + 0xc) * param_1[7],param_1[0x34]);
      *(int *)(iVar2 + 0x2c) = iVar1;
      *(undefined1 *)(iVar2 + 0x30) = 1;
      iVar2 = iVar2 + 0x54;
    } while (iVar3 < param_1[0xd]);
  }
  iVar2 = FUN_10022d60(param_1[7],param_1[0x34] << 3);
  param_1[0x35] = iVar2;
  return;
}


// ---- FUN_10026db0 @ 10026db0

void __cdecl FUN_10026db0(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  char *pcVar9;
  int *piVar10;
  int iVar11;
  int iStack_a28;
  int *local_a24;
  int iStack_a1c;
  int *piStack_a10;
  char local_a0c [12];
  int aiStack_a00 [640];
  
  if (param_1[0x28] < 1) {
    *(undefined4 *)(*param_1 + 0x14) = 0x11;
    *(undefined4 *)(*param_1 + 0x18) = 0;
    (**(code **)*param_1)(param_1);
  }
  local_a24 = (int *)param_1[0x29];
  if ((local_a24[5] == 0) && (local_a24[6] == 0x3f)) {
    *(undefined1 *)(param_1 + 0x32) = 0;
    uVar6 = param_1[0xd];
    if (0 < (int)uVar6) {
      pcVar9 = local_a0c;
      for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        pcVar9[0] = '\0';
        pcVar9[1] = '\0';
        pcVar9[2] = '\0';
        pcVar9[3] = '\0';
        pcVar9 = pcVar9 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar9 = '\0';
        pcVar9 = pcVar9 + 1;
      }
    }
  }
  else {
    iVar11 = 0;
    *(undefined1 *)(param_1 + 0x32) = 1;
    piVar8 = aiStack_a00;
    if (0 < param_1[0xd]) {
      do {
        piVar10 = piVar8;
        for (iVar7 = 0x40; iVar7 != 0; iVar7 = iVar7 + -1) {
          *piVar10 = -1;
          piVar10 = piVar10 + 1;
        }
        iVar11 = iVar11 + 1;
        piVar8 = piVar8 + 0x40;
      } while (iVar11 < param_1[0xd]);
    }
  }
  iVar11 = 1;
  if (0 < param_1[0x28]) {
    do {
      iStack_a28 = *local_a24;
      if ((iStack_a28 < 1) || (4 < iStack_a28)) {
        *(undefined4 *)(*param_1 + 0x14) = 0x18;
        *(int *)(*param_1 + 0x18) = iStack_a28;
        *(undefined4 *)(*param_1 + 0x1c) = 4;
        (**(code **)*param_1)(param_1);
      }
      iStack_a1c = 0;
      piVar8 = local_a24;
      if (0 < iStack_a28) {
        do {
          iVar7 = piVar8[1];
          if ((iVar7 < 0) || (param_1[0xd] <= iVar7)) {
            *(undefined4 *)(*param_1 + 0x14) = 0x11;
            *(int *)(*param_1 + 0x18) = iVar11;
            (**(code **)*param_1)(param_1);
          }
          if ((0 < iStack_a1c) && (iVar7 <= *piVar8)) {
            *(undefined4 *)(*param_1 + 0x14) = 0x11;
            *(int *)(*param_1 + 0x18) = iVar11;
            (**(code **)*param_1)(param_1);
          }
          iStack_a1c = iStack_a1c + 1;
          piVar8 = piVar8 + 1;
        } while (iStack_a1c < iStack_a28);
      }
      iVar7 = local_a24[5];
      iVar1 = local_a24[6];
      iVar2 = local_a24[7];
      iVar3 = local_a24[8];
      if ((char)param_1[0x32] == '\0') {
        if ((((iVar7 != 0) || (iVar1 != 0x3f)) || (iVar2 != 0)) || (iVar3 != 0)) {
          *(undefined4 *)(*param_1 + 0x14) = 0xf;
          *(int *)(*param_1 + 0x18) = iVar11;
          (**(code **)*param_1)(param_1);
        }
        piVar8 = local_a24;
        iStack_a1c = iStack_a28;
        if (0 < iStack_a28) {
          do {
            iVar7 = piVar8[1];
            if (local_a0c[iVar7] != '\0') {
              *(undefined4 *)(*param_1 + 0x14) = 0x11;
              *(int *)(*param_1 + 0x18) = iVar11;
              (**(code **)*param_1)(param_1);
            }
            local_a0c[iVar7] = '\x01';
            iStack_a1c = iStack_a1c + -1;
            piVar8 = piVar8 + 1;
          } while (iStack_a1c != 0);
        }
      }
      else {
        if (((((iVar7 < 0) || (0x3f < iVar7)) ||
             ((iVar1 < iVar7 || ((0x3f < iVar1 || (iVar2 < 0)))))) || (0xd < iVar2)) ||
           ((iVar3 < 0 || (0xd < iVar3)))) {
          *(undefined4 *)(*param_1 + 0x14) = 0xf;
          *(int *)(*param_1 + 0x18) = iVar11;
          (**(code **)*param_1)(param_1);
        }
        if (iVar7 == 0) {
          if (iVar1 != 0) {
LAB_10026f7c:
            *(undefined4 *)(*param_1 + 0x14) = 0xf;
            *(int *)(*param_1 + 0x18) = iVar11;
            (**(code **)*param_1)(param_1);
          }
        }
        else if (iStack_a28 != 1) goto LAB_10026f7c;
        piStack_a10 = local_a24;
        if (0 < iStack_a28) {
          do {
            piStack_a10 = piStack_a10 + 1;
            iVar4 = *piStack_a10;
            if ((iVar7 != 0) && (aiStack_a00[iVar4 * 0x40] < 0)) {
              *(undefined4 *)(*param_1 + 0x14) = 0xf;
              *(int *)(*param_1 + 0x18) = iVar11;
              (**(code **)*param_1)(param_1);
            }
            if (iVar7 <= iVar1) {
              iStack_a1c = (iVar1 - iVar7) + 1;
              piVar8 = aiStack_a00 + iVar4 * 0x40 + iVar7;
              do {
                if (*piVar8 < 0) {
                  if (iVar2 != 0) {
LAB_10027017:
                    *(undefined4 *)(*param_1 + 0x14) = 0xf;
                    *(int *)(*param_1 + 0x18) = iVar11;
                    (**(code **)*param_1)(param_1);
                  }
                }
                else if ((iVar2 != *piVar8) || (iVar2 - iVar3 != 1)) goto LAB_10027017;
                iStack_a1c = iStack_a1c + -1;
                *piVar8 = iVar3;
                piVar8 = piVar8 + 1;
              } while (iStack_a1c != 0);
            }
            iStack_a28 = iStack_a28 + -1;
          } while (iStack_a28 != 0);
        }
      }
      local_a24 = local_a24 + 9;
      iVar11 = iVar11 + 1;
    } while (iVar11 <= param_1[0x28]);
  }
  if ((char)param_1[0x32] == '\0') {
    iVar11 = 0;
    if (0 < param_1[0xd]) {
      do {
        if (local_a0c[iVar11] == '\0') {
          *(undefined4 *)(*param_1 + 0x14) = 0x2c;
          (**(code **)*param_1)(param_1);
        }
        iVar11 = iVar11 + 1;
      } while (iVar11 < param_1[0xd]);
    }
  }
  else {
    iVar11 = 0;
    if (0 < param_1[0xd]) {
      piVar8 = aiStack_a00;
      do {
        if (*piVar8 < 0) {
          *(undefined4 *)(*param_1 + 0x14) = 0x2c;
          (**(code **)*param_1)(param_1);
        }
        piVar8 = piVar8 + 0x40;
        iVar11 = iVar11 + 1;
      } while (iVar11 < param_1[0xd]);
      return;
    }
  }
  return;
}


// ---- FUN_10027310 @ 10027310

void __cdecl FUN_10027310(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  if (param_1[0x29] != 0) {
    iVar6 = 0;
    piVar2 = (int *)(param_1[0x29] + *(int *)(param_1[0x4c] + 0x1c) * 0x24);
    param_1[0x36] = *piVar2;
    if (0 < *piVar2) {
      piVar1 = param_1 + 0x37;
      piVar4 = piVar2;
      do {
        piVar4 = piVar4 + 1;
        iVar6 = iVar6 + 1;
        *piVar1 = *piVar4 * 0x54 + param_1[0xf];
        piVar1 = piVar1 + 1;
      } while (iVar6 < *piVar2);
    }
    param_1[0x48] = piVar2[5];
    param_1[0x49] = piVar2[6];
    param_1[0x4a] = piVar2[7];
    param_1[0x4b] = piVar2[8];
    return;
  }
  if (4 < param_1[0xd]) {
    *(undefined4 *)(*param_1 + 0x14) = 0x18;
    *(int *)(*param_1 + 0x18) = param_1[0xd];
    *(undefined4 *)(*param_1 + 0x1c) = 4;
    (**(code **)*param_1)(param_1);
  }
  iVar6 = 0;
  param_1[0x36] = param_1[0xd];
  if (0 < param_1[0xd]) {
    iVar3 = 0;
    piVar2 = param_1 + 0x37;
    do {
      iVar5 = param_1[0xf] + iVar3;
      iVar6 = iVar6 + 1;
      iVar3 = iVar3 + 0x54;
      *piVar2 = iVar5;
      piVar2 = piVar2 + 1;
    } while (iVar6 < param_1[0xd]);
  }
  param_1[0x48] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x49] = 0x3f;
  return;
}


// ---- FUN_10027410 @ 10027410

void __cdecl FUN_10027410(int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = param_1[0x36];
  if (iVar1 == 1) {
    iVar1 = param_1[0x37];
    param_1[0x3b] = *(int *)(iVar1 + 0x1c);
    param_1[0x3c] = *(int *)(iVar1 + 0x20);
    *(undefined4 *)(iVar1 + 0x34) = 1;
    *(undefined4 *)(iVar1 + 0x38) = 1;
    *(undefined4 *)(iVar1 + 0x3c) = 1;
    *(undefined4 *)(iVar1 + 0x40) = 8;
    *(undefined4 *)(iVar1 + 0x44) = 1;
    uVar2 = *(uint *)(iVar1 + 0x20) % *(uint *)(iVar1 + 0xc);
    if (uVar2 == 0) {
      uVar2 = *(uint *)(iVar1 + 0xc);
    }
    *(uint *)(iVar1 + 0x48) = uVar2;
    param_1[0x3d] = 1;
    param_1[0x3e] = 0;
  }
  else {
    if ((iVar1 < 1) || (4 < iVar1)) {
      *(undefined4 *)(*param_1 + 0x14) = 0x18;
      *(int *)(*param_1 + 0x18) = param_1[0x36];
      *(undefined4 *)(*param_1 + 0x1c) = 4;
      (**(code **)*param_1)(param_1);
    }
    iVar1 = FUN_10022d60(param_1[6],param_1[0x33] << 3);
    param_1[0x3b] = iVar1;
    iVar3 = 0;
    iVar1 = FUN_10022d60(param_1[7],param_1[0x34] << 3);
    param_1[0x3c] = iVar1;
    param_1[0x3d] = 0;
    if (0 < param_1[0x36]) {
      do {
        iVar1 = param_1[iVar3 + 0x37];
        *(undefined4 *)(iVar1 + 0x34) = *(undefined4 *)(iVar1 + 8);
        *(int *)(iVar1 + 0x38) = *(int *)(iVar1 + 0xc);
        *(int *)(iVar1 + 0x3c) = *(int *)(iVar1 + 0x34) * *(int *)(iVar1 + 0xc);
        *(int *)(iVar1 + 0x40) = *(int *)(iVar1 + 0x34) << 3;
        uVar2 = *(uint *)(iVar1 + 0x1c) % *(uint *)(iVar1 + 0x34);
        if (uVar2 == 0) {
          uVar2 = *(uint *)(iVar1 + 0x34);
        }
        *(uint *)(iVar1 + 0x44) = uVar2;
        uVar2 = *(uint *)(iVar1 + 0x20) % *(uint *)(iVar1 + 0x38);
        if (uVar2 == 0) {
          uVar2 = *(uint *)(iVar1 + 0x38);
        }
        *(uint *)(iVar1 + 0x48) = uVar2;
        iVar1 = *(int *)(iVar1 + 0x3c);
        if (10 < param_1[0x3d] + iVar1) {
          *(undefined4 *)(*param_1 + 0x14) = 0xb;
          (**(code **)*param_1)(param_1);
        }
        for (; 0 < iVar1; iVar1 = iVar1 + -1) {
          param_1[param_1[0x3d] + 0x3e] = iVar3;
          param_1[0x3d] = param_1[0x3d] + 1;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < param_1[0x36]);
    }
  }
  if (0 < param_1[0x2e]) {
    iVar1 = param_1[0x3b] * param_1[0x2e];
    if (0xfffe < iVar1) {
      iVar1 = 0xffff;
    }
    param_1[0x2d] = iVar1;
  }
  return;
}


// ---- FUN_100275d0 @ 100275d0

void __cdecl FUN_100275d0(int param_1)

{
  *(undefined1 *)(*(int *)(param_1 + 0x130) + 0xc) = 0;
  (**(code **)(*(int *)(param_1 + 0x140) + 8))(param_1);
  (**(code **)(*(int *)(param_1 + 0x140) + 0xc))(param_1);
  return;
}


// ---- ~CString @ 10027fd8

void __thiscall CString::~CString(CString *this)

{
                    /* WARNING: Could not recover jumptable at 0x10027fd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~CString(this);
  return;
}


// ---- CString @ 10027fde

void __thiscall CString::CString(CString *this)

{
                    /* WARNING: Could not recover jumptable at 0x10027fde. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CString(this);
  return;
}


// ---- operator_delete @ 10027fe4

void __cdecl operator_delete(void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10027fe4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  operator_delete(param_1);
  return;
}


// ---- operator+ @ 10027fea

void operator+(CString *param_1,CString *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x10027fea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  operator+(param_1,param_2);
  return;
}


// ---- CString @ 10027ff0

void __thiscall CString::CString(CString *this,char *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10027ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CString(this,param_1);
  return;
}


// ---- operator= @ 10027ff6

CString * __thiscall CString::operator=(CString *this,CString *param_1)

{
  CString *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10027ff6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = operator=(this,param_1);
  return pCVar1;
}


// ---- operator+ @ 10027ffc

void operator+(CString *param_1,char *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x10027ffc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  operator+(param_1,param_2);
  return;
}


// ---- Find @ 10028002

int __thiscall CString::Find(CString *this,char param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10028002. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Find(this,param_1);
  return iVar1;
}


// ---- operator= @ 10028008

CString * __thiscall CString::operator=(CString *this,char *param_1)

{
  CString *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10028008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = operator=(this,param_1);
  return pCVar1;
}


// ---- Find @ 1002800e

int __thiscall CString::Find(CString *this,char *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1002800e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Find(this,param_1);
  return iVar1;
}


// ---- FindOneOf @ 10028014

int __thiscall CString::FindOneOf(CString *this,char *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10028014. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = FindOneOf(this,param_1);
  return iVar1;
}


// ---- CString @ 1002801a

void __thiscall CString::CString(CString *this,CString *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x1002801a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CString(this,param_1);
  return;
}


// ---- Format @ 10028020

void __thiscall CString::Format(CString *this,char *param_1,...)

{
                    /* WARNING: Could not recover jumptable at 0x10028020. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Format(this,param_1);
  return;
}


// ---- MakeUpper @ 10028026

void __thiscall CString::MakeUpper(CString *this)

{
                    /* WARNING: Could not recover jumptable at 0x10028026. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  MakeUpper(this);
  return;
}


// ---- operator+= @ 1002802c

CString * __thiscall CString::operator+=(CString *this,CString *param_1)

{
  CString *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1002802c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = operator+=(this,param_1);
  return pCVar1;
}


// ---- operator= @ 10028032

CString * __thiscall CString::operator=(CString *this,char param_1)

{
  CString *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10028032. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = operator=(this,param_1);
  return pCVar1;
}


// ---- Empty @ 10028038

void __thiscall CString::Empty(CString *this)

{
                    /* WARNING: Could not recover jumptable at 0x10028038. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Empty(this);
  return;
}


// ---- operator_new @ 1002803e

void * __cdecl operator_new(uint param_1)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1002803e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = operator_new(param_1);
  return pvVar1;
}


// ---- operator+= @ 10028044

CString * __thiscall CString::operator+=(CString *this,char *param_1)

{
  CString *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10028044. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = operator+=(this,param_1);
  return pCVar1;
}


// ---- SpanExcluding @ 1002804a

void __thiscall CString::SpanExcluding(CString *this,char *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x1002804a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SpanExcluding(this,param_1);
  return;
}


// ---- MakeReverse @ 10028050

void __thiscall CString::MakeReverse(CString *this)

{
                    /* WARNING: Could not recover jumptable at 0x10028050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  MakeReverse(this);
  return;
}


// ---- LoadStringA @ 10028056

int __thiscall CString::LoadStringA(CString *this,uint param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10028056. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = LoadStringA(this,param_1);
  return iVar1;
}


// ---- Close @ 1002805c

void __thiscall CFile::Close(CFile *this)

{
                    /* WARNING: Could not recover jumptable at 0x1002805c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Close(this);
  return;
}


// ---- Open @ 10028062

int __thiscall CFile::Open(CFile *this,char *param_1,uint param_2,CFileException *param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10028062. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Open(this,param_1,param_2,param_3);
  return iVar1;
}


// ---- ~CFile @ 10028068

void __thiscall CFile::~CFile(CFile *this)

{
                    /* WARNING: Could not recover jumptable at 0x10028068. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~CFile(this);
  return;
}


// ---- CFile @ 1002806e

void __thiscall CFile::CFile(CFile *this)

{
                    /* WARNING: Could not recover jumptable at 0x1002806e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CFile(this);
  return;
}


// ---- operator+ @ 10028074

void operator+(char *param_1,CString *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x10028074. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  operator+(param_1,param_2);
  return;
}


// ---- ~CDC @ 1002807a

void __thiscall CDC::~CDC(CDC *this)

{
                    /* WARNING: Could not recover jumptable at 0x1002807a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~CDC(this);
  return;
}


// ---- Detach @ 10028080

HDC__ * __thiscall CDC::Detach(CDC *this)

{
  HDC__ *pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10028080. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = Detach(this);
  return pHVar1;
}


// ---- Attach @ 10028086

int __thiscall CDC::Attach(CDC *this,HDC__ *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10028086. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Attach(this,param_1);
  return iVar1;
}


// ---- CDC @ 1002808c

void __thiscall CDC::CDC(CDC *this)

{
                    /* WARNING: Could not recover jumptable at 0x1002808c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CDC(this);
  return;
}


// ---- AfxTryCleanup @ 10028092

void AfxTryCleanup(void)

{
                    /* WARNING: Could not recover jumptable at 0x10028092. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AfxTryCleanup();
  return;
}


// ---- AFX_EXCEPTION_LINK @ 10028098

void __thiscall AFX_EXCEPTION_LINK::AFX_EXCEPTION_LINK(AFX_EXCEPTION_LINK *this)

{
                    /* WARNING: Could not recover jumptable at 0x10028098. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AFX_EXCEPTION_LINK(this);
  return;
}


// ---- Mid @ 1002809e

void __thiscall CString::Mid(CString *this,int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x1002809e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Mid(this,param_1);
  return;
}


// ---- CException @ 100280a4

void __thiscall CException::CException(CException *this)

{
                    /* WARNING: Could not recover jumptable at 0x100280a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CException(this);
  return;
}


// ---- ~CWinApp @ 10028170

void __thiscall CWinApp::~CWinApp(CWinApp *this)

{
                    /* WARNING: Could not recover jumptable at 0x10028170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~CWinApp(this);
  return;
}


// ---- CWinApp @ 10028176

void __thiscall CWinApp::CWinApp(CWinApp *this,char *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10028176. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CWinApp(this,param_1);
  return;
}


// ---- InitInstance @ 1002817c

int __thiscall CWinApp::InitInstance(CWinApp *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1002817c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = InitInstance(this);
  return iVar1;
}


// ---- ExitInstance @ 10028182

int __thiscall CWinApp::ExitInstance(CWinApp *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10028182. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = ExitInstance(this);
  return iVar1;
}


// ---- AFX_MAINTAIN_STATE2 @ 1002818e

void __thiscall
AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2(AFX_MAINTAIN_STATE2 *this,AFX_MODULE_STATE *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x1002818e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AFX_MAINTAIN_STATE2(this,param_1);
  return;
}


// ---- ReleaseBuffer @ 10028194

void __thiscall CString::ReleaseBuffer(CString *this,int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10028194. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseBuffer(this,param_1);
  return;
}


// ---- GetBuffer @ 1002819a

char * __thiscall CString::GetBuffer(CString *this,int param_1)

{
  char *pcVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1002819a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pcVar1 = GetBuffer(this,param_1);
  return pcVar1;
}


// ---- FUN_100281aa @ 100281aa

undefined4 * FUN_100281aa(void)

{
  AFX_MODULE_STATE::AFX_MODULE_STATE((AFX_MODULE_STATE *)&DAT_1003b800,1,FUN_10028208,0x600);
  DAT_1003b800 = &PTR_FUN_1002ac78;
  return &DAT_1003b800;
}


// ---- FUN_100281d2 @ 100281d2

AFX_MODULE_STATE * __thiscall FUN_100281d2(void *this,byte param_1)

{
  AFX_MODULE_STATE::~AFX_MODULE_STATE(this);
  if ((param_1 & 1) != 0) {
    CNoTrackObject::operator_delete(this);
  }
  return this;
}


// ---- ~AFX_MODULE_STATE @ 100281ed

void __thiscall AFX_MODULE_STATE::~AFX_MODULE_STATE(AFX_MODULE_STATE *this)

{
                    /* WARNING: Could not recover jumptable at 0x100285ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~AFX_MODULE_STATE(this);
  return;
}


// ---- FUN_100281f2 @ 100281f2

void FUN_100281f2(void)

{
  FUN_10028434((_onexit_t)&LAB_100281fe);
  return;
}


// ---- FUN_10028208 @ 10028208

/* WARNING: Function: _EH_prolog replaced with injection: EH_prolog */

void FUN_10028208(HWND__ *param_1,uint param_2,uint param_3,long param_4)

{
  undefined4 local_18;
  int local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_100291d4;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2
            ((AFX_MAINTAIN_STATE2 *)&local_18,(AFX_MODULE_STATE *)&DAT_1003b800);
  local_8 = 0;
  AfxWndProc(param_1,param_2,param_3,param_4);
  *(undefined4 *)(local_14 + 4) = local_18;
  ExceptionList = local_10;
  return;
}


// ---- FUN_1002824d @ 1002824d

undefined4 * FUN_1002824d(void)

{
  return &DAT_1003b800;
}


// ---- FUN_10028253 @ 10028253

int FUN_10028253(HINSTANCE__ *param_1,int param_2)

{
  undefined4 uVar1;
  int *piVar2;
  _AFX_THREAD_STATE *p_Var3;
  int iVar4;
  AFX_MODULE_STATE *pAVar5;
  CDynLinkLibrary *this;
  undefined4 local_c;
  int local_8;
  
  if (param_2 != 1) {
    if (param_2 == 0) {
      pAVar5 = AfxSetModuleState((AFX_MODULE_STATE *)&DAT_1003b800);
      p_Var3 = AfxGetThreadState();
      *(AFX_MODULE_STATE **)(p_Var3 + 8) = pAVar5;
      pAVar5 = AfxGetModuleState();
      if (*(int **)(pAVar5 + 4) != (int *)0x0) {
        (**(code **)(**(int **)(pAVar5 + 4) + 0x70))();
      }
      AfxLockTempMaps();
      AfxUnlockTempMaps(-1);
      AfxWinTerm();
      AfxTermExtensionModule((AFX_EXTENSION_MODULE *)&DAT_1003c890,1);
    }
    else if (param_2 == 3) {
      AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2
                ((AFX_MAINTAIN_STATE2 *)&local_c,(AFX_MODULE_STATE *)&DAT_1003b800);
      AfxLockTempMaps();
      AfxUnlockTempMaps(-1);
      AfxTermThread(param_1);
      *(undefined4 *)(local_8 + 4) = local_c;
    }
    return 1;
  }
  param_2 = 0;
  AfxCoreInitModule();
  p_Var3 = AfxGetThreadState();
  uVar1 = *(undefined4 *)(p_Var3 + 8);
  iVar4 = AfxWinInit(param_1,(HINSTANCE__ *)0x0,&DAT_10039fec,0);
  if (iVar4 != 0) {
    pAVar5 = AfxGetModuleState();
    piVar2 = *(int **)(pAVar5 + 4);
    if ((piVar2 == (int *)0x0) || (iVar4 = (**(code **)(*piVar2 + 0x58))(), iVar4 != 0)) {
      *(undefined4 *)(p_Var3 + 8) = uVar1;
      AfxInitExtensionModule((AFX_EXTENSION_MODULE *)&DAT_1003c890,param_1);
      this = operator_new(0x40);
      if (this != (CDynLinkLibrary *)0x0) {
        CDynLinkLibrary::CDynLinkLibrary(this,(AFX_EXTENSION_MODULE *)&DAT_1003c890,0);
      }
      param_2 = 1;
      goto LAB_100282df;
    }
    (**(code **)(*piVar2 + 0x70))();
  }
  AfxWinTerm();
LAB_100282df:
  *(undefined4 *)(p_Var3 + 8) = uVar1;
  p_Var3 = AfxGetThreadState();
  AfxSetModuleState(*(AFX_MODULE_STATE **)(p_Var3 + 8));
  return param_2;
}


// ---- FUN_1002837a @ 1002837a

undefined4 FUN_1002837a(undefined4 param_1,int param_2)

{
  HLOCAL hMem;
  _AFX_THREAD_STATE *p_Var1;
  AFX_MODULE_STATE *pAVar2;
  
  if (param_2 == 1) {
    hMem = LocalAlloc(0,0x2000);
    if (hMem == (HLOCAL)0x0) {
      return 0;
    }
    LocalFree(hMem);
    p_Var1 = AfxGetThreadState();
    pAVar2 = AfxSetModuleState((AFX_MODULE_STATE *)&DAT_1003b800);
    *(AFX_MODULE_STATE **)(p_Var1 + 8) = pAVar2;
  }
  else if (param_2 == 0) {
    p_Var1 = AfxGetThreadState();
    AfxSetModuleState(*(AFX_MODULE_STATE **)(p_Var1 + 8));
  }
  return 1;
}


// ---- ftol @ 100283e0

void __cdecl ftol(void)

{
                    /* WARNING: Could not recover jumptable at 0x100283e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ftol();
  return;
}


// ---- _CxxThrowException @ 10028402

void _CxxThrowException(void *pExceptionObject,ThrowInfo *pThrowInfo)

{
                    /* WARNING: Could not recover jumptable at 0x10028402. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
  _CxxThrowException(pExceptionObject,pThrowInfo);
  return;
}


// ---- FUN_10028408 @ 10028408

void __cdecl FUN_10028408(_onexit_t param_1)

{
  if (DAT_1003c8b8 == -1) {
    _onexit(param_1);
    return;
  }
  __dllonexit(param_1,&DAT_1003c8b8,&DAT_1003c8b4);
  return;
}


// ---- FUN_10028434 @ 10028434

int __cdecl FUN_10028434(_onexit_t param_1)

{
  int iVar1;
  
  iVar1 = FUN_10028408(param_1);
  return (iVar1 != 0) - 1;
}


// ---- FUN_10028450 @ 10028450

/* WARNING: Unable to track spacebase fully for stack */

void FUN_10028450(void)

{
  uint in_EAX;
  undefined1 *puVar1;
  undefined4 unaff_retaddr;
  
  puVar1 = &stack0x00000004;
  for (; 0xfff < in_EAX; in_EAX = in_EAX - 0x1000) {
    puVar1 = puVar1 + -0x1000;
  }
  *(undefined4 *)(puVar1 + (-4 - in_EAX)) = unaff_retaddr;
  return;
}


// ---- FUN_1002847f @ 1002847f

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1002847f(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *_Memory;
  undefined4 *puVar2;
  
  if (param_2 == 0) {
    if (0 < DAT_1003c8ac) {
      DAT_1003c8ac = DAT_1003c8ac + -1;
      goto LAB_10028495;
    }
LAB_100284bd:
    uVar1 = 0;
  }
  else {
LAB_10028495:
    _DAT_1003c8b0 = *(undefined4 *)_adjust_fdiv_exref;
    if (param_2 == 1) {
      DAT_1003c8b8 = malloc(0x80);
      if (DAT_1003c8b8 == (undefined4 *)0x0) goto LAB_100284bd;
      *DAT_1003c8b8 = 0;
      DAT_1003c8b4 = DAT_1003c8b8;
      initterm(&DAT_1002d000,&DAT_1002eb10);
      DAT_1003c8ac = DAT_1003c8ac + 1;
    }
    else if ((param_2 == 0) &&
            (_Memory = DAT_1003c8b8, puVar2 = DAT_1003c8b4, DAT_1003c8b8 != (undefined4 *)0x0)) {
      while (puVar2 = puVar2 + -1, _Memory <= puVar2) {
        if ((code *)*puVar2 != (code *)0x0) {
          (*(code *)*puVar2)();
          _Memory = DAT_1003c8b8;
        }
      }
      free(_Memory);
      DAT_1003c8b8 = (undefined4 *)0x0;
    }
    uVar1 = 1;
  }
  return uVar1;
}


// ---- entry @ 1002852a

int entry(HINSTANCE__ *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_2;
  iVar2 = DAT_1003c8ac;
  if (param_2 != 0) {
    if ((param_2 != 1) && (param_2 != 2)) goto LAB_10028572;
    if ((PTR_FUN_10039b80 != (undefined *)0x0) &&
       (iVar2 = (*(code *)PTR_FUN_10039b80)(param_1,param_2,param_3), iVar2 == 0)) {
      return 0;
    }
    iVar2 = FUN_1002847f(param_1,param_2);
  }
  if (iVar2 == 0) {
    return 0;
  }
LAB_10028572:
  iVar2 = FUN_10028253(param_1,param_2);
  if (param_2 == 1) {
    if (iVar2 != 0) {
      return iVar2;
    }
    FUN_1002847f(param_1,0);
  }
  if ((param_2 != 0) && (param_2 != 3)) {
    return iVar2;
  }
  iVar3 = FUN_1002847f(param_1,param_2);
  param_2 = iVar2;
  if (iVar3 == 0) {
    param_2 = 0;
  }
  if (param_2 != 0) {
    if (PTR_FUN_10039b80 != (undefined *)0x0) {
      iVar2 = (*(code *)PTR_FUN_10039b80)(param_1,iVar1,param_3);
      return iVar2;
    }
    return param_2;
  }
  return 0;
}


// ---- _EH_prolog @ 100285c8

/* WARNING: This is an inlined function */
/* WARNING: Function: _EH_prolog replaced with injection: EH_prolog */

void _EH_prolog(void)

{
  undefined1 auStack_c [12];
  
  ExceptionList = auStack_c;
                    /* WARNING: Could not recover jumptable at 0x100285c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  return;
}


// ---- ~type_info @ 100285ce

void __thiscall type_info::~type_info(type_info *this)

{
                    /* WARNING: Could not recover jumptable at 0x100285ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~type_info(this);
  return;
}


// ---- __dllonexit @ 100285d4

void __dllonexit(void)

{
                    /* WARNING: Could not recover jumptable at 0x100285d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __dllonexit();
  return;
}


// ---- initterm @ 100285da

void __cdecl initterm(void)

{
                    /* WARNING: Could not recover jumptable at 0x100285da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  initterm();
  return;
}


// ---- AFX_MODULE_STATE @ 100285e0

void __thiscall
AFX_MODULE_STATE::AFX_MODULE_STATE
          (AFX_MODULE_STATE *this,int param_1,_func_long_HWND___ptr_uint_uint_long *param_2,
          ulong param_3)

{
                    /* WARNING: Could not recover jumptable at 0x100285e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AFX_MODULE_STATE(this,param_1,param_2,param_3);
  return;
}


// ---- operator_delete @ 100285e6

void CNoTrackObject::operator_delete(void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x100285e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  operator_delete(param_1);
  return;
}


// ---- ~AFX_MODULE_STATE @ 100285ec

void __thiscall AFX_MODULE_STATE::~AFX_MODULE_STATE(AFX_MODULE_STATE *this)

{
                    /* WARNING: Could not recover jumptable at 0x100285ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~AFX_MODULE_STATE(this);
  return;
}


// ---- AfxWndProc @ 100285f2

long AfxWndProc(HWND__ *param_1,uint param_2,uint param_3,long param_4)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100285f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = AfxWndProc(param_1,param_2,param_3,param_4);
  return lVar1;
}


// ---- AfxTermThread @ 100285f8

void AfxTermThread(HINSTANCE__ *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x100285f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AfxTermThread(param_1);
  return;
}


// ---- AfxTermExtensionModule @ 100285fe

void AfxTermExtensionModule(AFX_EXTENSION_MODULE *param_1,int param_2)

{
                    /* WARNING: Could not recover jumptable at 0x100285fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AfxTermExtensionModule(param_1,param_2);
  return;
}


// ---- AfxUnlockTempMaps @ 10028604

int AfxUnlockTempMaps(int param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10028604. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = AfxUnlockTempMaps(param_1);
  return iVar1;
}


// ---- AfxLockTempMaps @ 1002860a

void AfxLockTempMaps(void)

{
                    /* WARNING: Could not recover jumptable at 0x1002860a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AfxLockTempMaps();
  return;
}


// ---- AfxSetModuleState @ 10028610

AFX_MODULE_STATE * AfxSetModuleState(AFX_MODULE_STATE *param_1)

{
  AFX_MODULE_STATE *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10028610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = AfxSetModuleState(param_1);
  return pAVar1;
}


// ---- CDynLinkLibrary @ 10028616

void __thiscall
CDynLinkLibrary::CDynLinkLibrary(CDynLinkLibrary *this,AFX_EXTENSION_MODULE *param_1,int param_2)

{
                    /* WARNING: Could not recover jumptable at 0x10028616. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CDynLinkLibrary(this,param_1,param_2);
  return;
}


// ---- AfxInitExtensionModule @ 1002861c

int AfxInitExtensionModule(AFX_EXTENSION_MODULE *param_1,HINSTANCE__ *param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1002861c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = AfxInitExtensionModule(param_1,param_2);
  return iVar1;
}


// ---- AfxWinTerm @ 10028622

void AfxWinTerm(void)

{
                    /* WARNING: Could not recover jumptable at 0x10028622. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AfxWinTerm();
  return;
}


// ---- AfxGetModuleState @ 10028628

AFX_MODULE_STATE * AfxGetModuleState(void)

{
  AFX_MODULE_STATE *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10028628. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = AfxGetModuleState();
  return pAVar1;
}


// ---- AfxWinInit @ 1002862e

int AfxWinInit(HINSTANCE__ *param_1,HINSTANCE__ *param_2,char *param_3,int param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1002862e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = AfxWinInit(param_1,param_2,param_3,param_4);
  return iVar1;
}


// ---- AfxGetThreadState @ 10028634

_AFX_THREAD_STATE * AfxGetThreadState(void)

{
  _AFX_THREAD_STATE *p_Var1;
  
                    /* WARNING: Could not recover jumptable at 0x10028634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  p_Var1 = AfxGetThreadState();
  return p_Var1;
}


// ---- AfxCoreInitModule @ 1002863a

void AfxCoreInitModule(void)

{
                    /* WARNING: Could not recover jumptable at 0x1002863a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AfxCoreInitModule();
  return;
}


// ---- Unwind@10028640 @ 10028640

void Unwind_10028640(void)

{
  int unaff_EBP;
  
  FUN_10004860(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@10028648 @ 10028648

void Unwind_10028648(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(*(int *)(unaff_EBP + -0x10) + 4));
  return;
}


// ---- Unwind@10028653 @ 10028653

void Unwind_10028653(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(*(int *)(unaff_EBP + -0x10) + 8));
  return;
}


// ---- Unwind@10028670 @ 10028670

void Unwind_10028670(void)

{
  int unaff_EBP;
  
  FUN_10004860(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@10028678 @ 10028678

void Unwind_10028678(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(*(int *)(unaff_EBP + -0x10) + 4));
  return;
}


// ---- Unwind@10028683 @ 10028683

void Unwind_10028683(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(*(int *)(unaff_EBP + -0x10) + 8));
  return;
}


// ---- Unwind@100286a0 @ 100286a0

void Unwind_100286a0(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + 0xc));
  return;
}


// ---- Unwind@100286a8 @ 100286a8

void Unwind_100286a8(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + 8));
  return;
}


// ---- Unwind@100286b0 @ 100286b0

void Unwind_100286b0(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + 4));
  return;
}


// ---- Unwind@100286b8 @ 100286b8

void Unwind_100286b8(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x18));
  return;
}


// ---- Unwind@100286c0 @ 100286c0

void Unwind_100286c0(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x14));
  return;
}


// ---- Unwind@100286e0 @ 100286e0

void Unwind_100286e0(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + 0x14));
  return;
}


// ---- Unwind@100286e8 @ 100286e8

void Unwind_100286e8(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + 0x10));
  return;
}


// ---- Unwind@100286f0 @ 100286f0

void Unwind_100286f0(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + 0xc));
  return;
}


// ---- Unwind@100286f8 @ 100286f8

void Unwind_100286f8(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x60));
  return;
}


// ---- Unwind@10028700 @ 10028700

void Unwind_10028700(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x58));
  return;
}


// ---- Unwind@10028708 @ 10028708

void Unwind_10028708(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x5c));
  return;
}


// ---- Unwind@10028710 @ 10028710

void Unwind_10028710(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x58));
  return;
}


// ---- Unwind@10028730 @ 10028730

void Unwind_10028730(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + 0xc));
  return;
}


// ---- Unwind@10028738 @ 10028738

void Unwind_10028738(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + 8));
  return;
}


// ---- Unwind@10028740 @ 10028740

void Unwind_10028740(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x30));
  return;
}


// ---- Unwind@10028748 @ 10028748

void Unwind_10028748(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + 4));
  return;
}


// ---- Unwind@10028750 @ 10028750

void Unwind_10028750(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x2c));
  return;
}


// ---- Unwind@10028758 @ 10028758

void Unwind_10028758(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x2c));
  return;
}


// ---- Unwind@10028770 @ 10028770

void Unwind_10028770(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0xe38));
  return;
}


// ---- Unwind@1002877b @ 1002877b

void Unwind_1002877b(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0xe30));
  return;
}


// ---- Unwind@10028790 @ 10028790

void Unwind_10028790(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + 4));
  return;
}


// ---- Unwind@100287b0 @ 100287b0

void Unwind_100287b0(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@100287d0 @ 100287d0

void Unwind_100287d0(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x3ec));
  return;
}


// ---- Unwind@100287db @ 100287db

void Unwind_100287db(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x3f4));
  return;
}


// ---- Unwind@100287f0 @ 100287f0

void Unwind_100287f0(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x1c));
  return;
}


// ---- Unwind@100287f8 @ 100287f8

void Unwind_100287f8(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x18));
  return;
}


// ---- Unwind@10028810 @ 10028810

void Unwind_10028810(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@10028830 @ 10028830

void Unwind_10028830(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x14));
  return;
}


// ---- Unwind@10028850 @ 10028850

void Unwind_10028850(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x14));
  return;
}


// ---- Unwind@10028870 @ 10028870

void Unwind_10028870(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x48));
  return;
}


// ---- Unwind@10028890 @ 10028890

void Unwind_10028890(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x3c));
  return;
}


// ---- Unwind@10028898 @ 10028898

void Unwind_10028898(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x38));
  return;
}


// ---- Unwind@100288b0 @ 100288b0

void Unwind_100288b0(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + 8));
  return;
}


// ---- Unwind@100288d0 @ 100288d0

void Unwind_100288d0(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x38));
  return;
}


// ---- Unwind@100288d8 @ 100288d8

void Unwind_100288d8(void)

{
  int unaff_EBP;
  
  FUN_1000f9c0(*(void **)(unaff_EBP + 4));
  return;
}


// ---- Unwind@100288e2 @ 100288e2

void Unwind_100288e2(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + 4));
  return;
}


// ---- Unwind@100288ea @ 100288ea

void Unwind_100288ea(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + 4));
  return;
}


// ---- Unwind@10028900 @ 10028900

void Unwind_10028900(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + 4));
  return;
}


// ---- Unwind@10028908 @ 10028908

void Unwind_10028908(void)

{
  int unaff_EBP;
  
  FUN_1000f9c0(*(void **)(unaff_EBP + -0x38));
  return;
}


// ---- Unwind@10028920 @ 10028920

void Unwind_10028920(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x20));
  return;
}


// ---- Unwind@10028928 @ 10028928

void Unwind_10028928(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x18));
  return;
}


// ---- Unwind@10028930 @ 10028930

void Unwind_10028930(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x1c));
  return;
}


// ---- Unwind@10028950 @ 10028950

void Unwind_10028950(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x2fc));
  return;
}


// ---- Unwind@1002895b @ 1002895b

void Unwind_1002895b(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x2f8));
  return;
}


// ---- Unwind@10028966 @ 10028966

void Unwind_10028966(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x2f4));
  return;
}


// ---- Unwind@10028980 @ 10028980

void Unwind_10028980(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x8f4));
  return;
}


// ---- Unwind@1002898b @ 1002898b

void Unwind_1002898b(void)

{
  int unaff_EBP;
  
  CFile::~CFile((CFile *)(unaff_EBP + -0x8d8));
  return;
}


// ---- Unwind@10028996 @ 10028996

void Unwind_10028996(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x8c4));
  return;
}


// ---- Unwind@100289a1 @ 100289a1

void Unwind_100289a1(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x8dc));
  return;
}


// ---- Unwind@100289ac @ 100289ac

void Unwind_100289ac(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x8e4));
  return;
}


// ---- Unwind@100289b7 @ 100289b7

void Unwind_100289b7(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x8c8));
  return;
}


// ---- Unwind@100289c2 @ 100289c2

void Unwind_100289c2(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x8c0));
  return;
}


// ---- Unwind@100289cd @ 100289cd

void Unwind_100289cd(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x8e0));
  return;
}


// ---- Unwind@100289d8 @ 100289d8

void Unwind_100289d8(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x8e8));
  return;
}


// ---- Unwind@100289e3 @ 100289e3

void Unwind_100289e3(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x8ec));
  return;
}


// ---- Unwind@100289ee @ 100289ee

void Unwind_100289ee(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x8f0));
  return;
}


// ---- Unwind@10028a10 @ 10028a10

void Unwind_10028a10(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@10028a18 @ 10028a18

void Unwind_10028a18(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x30));
  return;
}


// ---- Unwind@10028a20 @ 10028a20

void Unwind_10028a20(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x14));
  return;
}


// ---- Unwind@10028a28 @ 10028a28

void Unwind_10028a28(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x18));
  return;
}


// ---- Unwind@10028a30 @ 10028a30

void Unwind_10028a30(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x1c));
  return;
}


// ---- Unwind@10028a38 @ 10028a38

void Unwind_10028a38(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x28));
  return;
}


// ---- Unwind@10028a40 @ 10028a40

void Unwind_10028a40(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x20));
  return;
}


// ---- Unwind@10028a48 @ 10028a48

void Unwind_10028a48(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x2c));
  return;
}


// ---- Unwind@10028a50 @ 10028a50

void Unwind_10028a50(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x24));
  return;
}


// ---- Unwind@10028a58 @ 10028a58

void Unwind_10028a58(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + 4));
  return;
}


// ---- Unwind@10028a60 @ 10028a60

void Unwind_10028a60(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + 4));
  return;
}


// ---- Unwind@10028a68 @ 10028a68

void Unwind_10028a68(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + 4));
  return;
}


// ---- Unwind@10028a80 @ 10028a80

void Unwind_10028a80(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x14));
  return;
}


// ---- Unwind@10028a88 @ 10028a88

void Unwind_10028a88(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + 8));
  return;
}


// ---- Unwind@10028a90 @ 10028a90

void Unwind_10028a90(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 1) != 0) {
    CString::~CString(*(CString **)(unaff_EBP + 4));
    return;
  }
  return;
}


// ---- Unwind@10028ac0 @ 10028ac0

void Unwind_10028ac0(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x14));
  return;
}


// ---- Unwind@10028ac8 @ 10028ac8

void Unwind_10028ac8(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + 8));
  return;
}


// ---- Unwind@10028ad0 @ 10028ad0

void Unwind_10028ad0(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 1) != 0) {
    CString::~CString(*(CString **)(unaff_EBP + 4));
    return;
  }
  return;
}


// ---- Unwind@10028b00 @ 10028b00

void Unwind_10028b00(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x1c));
  return;
}


// ---- Unwind@10028b08 @ 10028b08

void Unwind_10028b08(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + 4));
  return;
}


// ---- Unwind@10028b20 @ 10028b20

void Unwind_10028b20(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x11c));
  return;
}


// ---- Unwind@10028b2b @ 10028b2b

void Unwind_10028b2b(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x118));
  return;
}


// ---- Unwind@10028b36 @ 10028b36

void Unwind_10028b36(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x114) & 1) != 0) {
    CString::~CString(*(CString **)(unaff_EBP + 4));
    return;
  }
  return;
}


// ---- Unwind@10028b60 @ 10028b60

void Unwind_10028b60(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + 0xc));
  return;
}


// ---- Unwind@10028b80 @ 10028b80

void Unwind_10028b80(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + 0xc));
  return;
}


// ---- Unwind@10028b88 @ 10028b88

void Unwind_10028b88(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + 4));
  return;
}


// ---- Unwind@10028ba0 @ 10028ba0

void Unwind_10028ba0(void)

{
  int unaff_EBP;
  
  CDC::~CDC((CDC *)(unaff_EBP + -0x30));
  return;
}


// ---- Unwind@10028bc0 @ 10028bc0

void Unwind_10028bc0(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x14));
  return;
}


// ---- Unwind@10028bc8 @ 10028bc8

void Unwind_10028bc8(void)

{
  int unaff_EBP;
  
  FUN_100048b0((undefined4 *)(unaff_EBP + -0x27c));
  return;
}


// ---- Unwind@10028bd3 @ 10028bd3

void Unwind_10028bd3(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x18));
  return;
}


// ---- Unwind@10028bdb @ 10028bdb

void Unwind_10028bdb(void)

{
  int unaff_EBP;
  
  FUN_1000f9c0(*(void **)(unaff_EBP + 8));
  return;
}


// ---- Unwind@10028be5 @ 10028be5

void Unwind_10028be5(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + 8));
  return;
}


// ---- Unwind@10028bed @ 10028bed

void Unwind_10028bed(void)

{
  AfxTryCleanup();
  return;
}


// ---- Unwind@10028bf5 @ 10028bf5

void Unwind_10028bf5(void)

{
  int unaff_EBP;
  
  FUN_1000f9c0(*(void **)(unaff_EBP + 8));
  return;
}


// ---- Unwind@10028bff @ 10028bff

void Unwind_10028bff(void)

{
  int unaff_EBP;
  
  CString::~CString(*(CString **)(unaff_EBP + 0xc));
  return;
}


// ---- Unwind@10028c07 @ 10028c07

void Unwind_10028c07(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + 8));
  return;
}


// ---- Unwind@10028c0f @ 10028c0f

void Unwind_10028c0f(void)

{
  int unaff_EBP;
  
  CString::~CString(*(CString **)(unaff_EBP + 8));
  return;
}


// ---- Unwind@10028c30 @ 10028c30

void Unwind_10028c30(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x264));
  return;
}


// ---- Unwind@10028c3b @ 10028c3b

void Unwind_10028c3b(void)

{
  int unaff_EBP;
  
  FUN_100048b0((undefined4 *)(unaff_EBP + -0x228));
  return;
}


// ---- Unwind@10028c46 @ 10028c46

void Unwind_10028c46(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x25c));
  return;
}


// ---- Unwind@10028c51 @ 10028c51

void Unwind_10028c51(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x260));
  return;
}


// ---- Unwind@10028c5c @ 10028c5c

void Unwind_10028c5c(void)

{
  int unaff_EBP;
  
  CString::~CString(*(CString **)(unaff_EBP + -0x230));
  return;
}


// ---- Unwind@10028c67 @ 10028c67

void Unwind_10028c67(void)

{
  int unaff_EBP;
  
  CString::~CString(*(CString **)(unaff_EBP + -0x22c));
  return;
}


// ---- Unwind@10028c80 @ 10028c80

void Unwind_10028c80(void)

{
  int unaff_EBP;
  
  FUN_100048b0((undefined4 *)(unaff_EBP + -0x228));
  return;
}


// ---- Unwind@10028c8b @ 10028c8b

void Unwind_10028c8b(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x240));
  return;
}


// ---- Unwind@10028c96 @ 10028c96

void Unwind_10028c96(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x238));
  return;
}


// ---- Unwind@10028ca1 @ 10028ca1

void Unwind_10028ca1(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x23c));
  return;
}


// ---- Unwind@10028cac @ 10028cac

void Unwind_10028cac(void)

{
  int unaff_EBP;
  
  CString::~CString(*(CString **)(unaff_EBP + -0x234));
  return;
}


// ---- Unwind@10028cb7 @ 10028cb7

void Unwind_10028cb7(void)

{
  int unaff_EBP;
  
  CString::~CString(*(CString **)(unaff_EBP + -0x230));
  return;
}


// ---- Unwind@10028cc2 @ 10028cc2

void Unwind_10028cc2(void)

{
  int unaff_EBP;
  
  CString::~CString(*(CString **)(unaff_EBP + -0x230));
  return;
}


// ---- Unwind@10028ccd @ 10028ccd

void Unwind_10028ccd(void)

{
  int unaff_EBP;
  
  CString::~CString(*(CString **)(unaff_EBP + -0x234));
  return;
}


// ---- Unwind@10028cf0 @ 10028cf0

void Unwind_10028cf0(void)

{
  int unaff_EBP;
  
  FUN_100048b0((undefined4 *)(unaff_EBP + -0x228));
  return;
}


// ---- Unwind@10028cfb @ 10028cfb

void Unwind_10028cfb(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x234));
  return;
}


// ---- Unwind@10028d06 @ 10028d06

void Unwind_10028d06(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x238));
  return;
}


// ---- Unwind@10028d11 @ 10028d11

void Unwind_10028d11(void)

{
  int unaff_EBP;
  
  CString::~CString(*(CString **)(unaff_EBP + -0x230));
  return;
}


// ---- Unwind@10028d30 @ 10028d30

void Unwind_10028d30(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + 8));
  return;
}


// ---- Unwind@10028d38 @ 10028d38

void Unwind_10028d38(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + 4));
  return;
}


// ---- Unwind@10028d40 @ 10028d40

void Unwind_10028d40(void)

{
  int unaff_EBP;
  
  FUN_10004860(*(undefined4 **)(unaff_EBP + -0x1c));
  return;
}


// ---- Unwind@10028d48 @ 10028d48

void Unwind_10028d48(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(*(int *)(unaff_EBP + -0x1c) + 8));
  return;
}


// ---- Unwind@10028d53 @ 10028d53

void Unwind_10028d53(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(*(int *)(unaff_EBP + -0x1c) + 0xc));
  return;
}


// ---- Unwind@10028d5e @ 10028d5e

void Unwind_10028d5e(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(*(int *)(unaff_EBP + -0x1c) + 0x10));
  return;
}


// ---- Unwind@10028d69 @ 10028d69

void Unwind_10028d69(void)

{
  AfxTryCleanup();
  return;
}


// ---- Unwind@10028d80 @ 10028d80

void Unwind_10028d80(void)

{
  int unaff_EBP;
  
  FUN_10004860(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@10028d88 @ 10028d88

void Unwind_10028d88(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(*(int *)(unaff_EBP + -0x10) + 8));
  return;
}


// ---- Unwind@10028d93 @ 10028d93

void Unwind_10028d93(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(*(int *)(unaff_EBP + -0x10) + 0xc));
  return;
}


// ---- Unwind@10028d9e @ 10028d9e

void Unwind_10028d9e(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(*(int *)(unaff_EBP + -0x10) + 0x10));
  return;
}


// ---- Unwind@10028dc0 @ 10028dc0

void Unwind_10028dc0(void)

{
  int unaff_EBP;
  
  FUN_1000f9c0(*(void **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@10028de0 @ 10028de0

void Unwind_10028de0(void)

{
  AfxTryCleanup();
  return;
}


// ---- Unwind@10028e00 @ 10028e00

void Unwind_10028e00(void)

{
  int unaff_EBP;
  
  CWinApp::~CWinApp(*(CWinApp **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@10028e08 @ 10028e08

void Unwind_10028e08(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(*(int *)(unaff_EBP + -0x10) + 0xc4));
  return;
}


// ---- Unwind@10028e16 @ 10028e16

void Unwind_10028e16(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(*(int *)(unaff_EBP + -0x10) + 200));
  return;
}


// ---- Unwind@10028e30 @ 10028e30

void Unwind_10028e30(void)

{
  int unaff_EBP;
  
  CWinApp::~CWinApp(*(CWinApp **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@10028e38 @ 10028e38

void Unwind_10028e38(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(*(int *)(unaff_EBP + -0x10) + 0xc4));
  return;
}


// ---- Unwind@10028e46 @ 10028e46

void Unwind_10028e46(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(*(int *)(unaff_EBP + -0x10) + 200));
  return;
}


// ---- Unwind@10028e60 @ 10028e60

void Unwind_10028e60(void)

{
  int unaff_EBP;
  
  FUN_1000f9c0(*(void **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@10028e80 @ 10028e80

void Unwind_10028e80(void)

{
  int unaff_EBP;
  
  FUN_1001f9e0((undefined4 *)(unaff_EBP + -0x1c));
  return;
}


// ---- Unwind@10028e88 @ 10028e88

void Unwind_10028e88(void)

{
  AfxTryCleanup();
  return;
}


// ---- Unwind@10028ea0 @ 10028ea0

void Unwind_10028ea0(void)

{
  int unaff_EBP;
  
  FUN_1001f9e0((undefined4 *)(unaff_EBP + -0x1c));
  return;
}


// ---- Unwind@10028ea8 @ 10028ea8

void Unwind_10028ea8(void)

{
  AfxTryCleanup();
  return;
}


// ---- Unwind@10028ec0 @ 10028ec0

void Unwind_10028ec0(void)

{
  int unaff_EBP;
  
  FUN_1001f9e0((undefined4 *)(unaff_EBP + -0x1c));
  return;
}


// ---- Unwind@10028ec8 @ 10028ec8

void Unwind_10028ec8(void)

{
  AfxTryCleanup();
  return;
}


// ---- Unwind@10028ee0 @ 10028ee0

void Unwind_10028ee0(void)

{
  int unaff_EBP;
  
  FUN_1001f9e0((undefined4 *)(unaff_EBP + -0x1c));
  return;
}


// ---- Unwind@10028ee8 @ 10028ee8

void Unwind_10028ee8(void)

{
  AfxTryCleanup();
  return;
}


// ---- Unwind@10028f00 @ 10028f00

void Unwind_10028f00(void)

{
  int unaff_EBP;
  
  FUN_1001f9e0((undefined4 *)(unaff_EBP + -0x1c));
  return;
}


// ---- Unwind@10028f08 @ 10028f08

void Unwind_10028f08(void)

{
  AfxTryCleanup();
  return;
}


// ---- Unwind@10028f20 @ 10028f20

void Unwind_10028f20(void)

{
  int unaff_EBP;
  
  FUN_1001f9e0((undefined4 *)(unaff_EBP + -0x1c));
  return;
}


// ---- Unwind@10028f28 @ 10028f28

void Unwind_10028f28(void)

{
  AfxTryCleanup();
  return;
}


// ---- Unwind@10028f40 @ 10028f40

void Unwind_10028f40(void)

{
  int unaff_EBP;
  
  FUN_1001f9e0((undefined4 *)(unaff_EBP + -0x1c));
  return;
}


// ---- Unwind@10028f48 @ 10028f48

void Unwind_10028f48(void)

{
  AfxTryCleanup();
  return;
}


// ---- Unwind@10028f60 @ 10028f60

void Unwind_10028f60(void)

{
  int unaff_EBP;
  
  FUN_1001f9e0((undefined4 *)(unaff_EBP + -0x1c));
  return;
}


// ---- Unwind@10028f68 @ 10028f68

void Unwind_10028f68(void)

{
  AfxTryCleanup();
  return;
}


// ---- Unwind@10028f80 @ 10028f80

void Unwind_10028f80(void)

{
  int unaff_EBP;
  
  FUN_1001f9e0((undefined4 *)(unaff_EBP + -0x1c));
  return;
}


// ---- Unwind@10028f88 @ 10028f88

void Unwind_10028f88(void)

{
  AfxTryCleanup();
  return;
}


// ---- Unwind@10028fa0 @ 10028fa0

void Unwind_10028fa0(void)

{
  int unaff_EBP;
  
  FUN_1001f9e0((undefined4 *)(unaff_EBP + -0x1c));
  return;
}


// ---- Unwind@10028fa8 @ 10028fa8

void Unwind_10028fa8(void)

{
  AfxTryCleanup();
  return;
}


// ---- Unwind@10028fc0 @ 10028fc0

void Unwind_10028fc0(void)

{
  int unaff_EBP;
  
  FUN_1001f9e0((undefined4 *)(unaff_EBP + -0x1c));
  return;
}


// ---- Unwind@10028fc8 @ 10028fc8

void Unwind_10028fc8(void)

{
  AfxTryCleanup();
  return;
}


// ---- Unwind@10028fe0 @ 10028fe0

void Unwind_10028fe0(void)

{
  int unaff_EBP;
  
  FUN_1001f9e0((undefined4 *)(unaff_EBP + -0x1c));
  return;
}


// ---- Unwind@10028fe8 @ 10028fe8

void Unwind_10028fe8(void)

{
  AfxTryCleanup();
  return;
}


// ---- Unwind@10029000 @ 10029000

void Unwind_10029000(void)

{
  int unaff_EBP;
  
  FUN_1001f9e0((undefined4 *)(unaff_EBP + -0x1c));
  return;
}


// ---- Unwind@10029008 @ 10029008

void Unwind_10029008(void)

{
  AfxTryCleanup();
  return;
}


// ---- Unwind@10029020 @ 10029020

void Unwind_10029020(void)

{
  int unaff_EBP;
  
  FUN_10004860(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@10029028 @ 10029028

void Unwind_10029028(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(*(int *)(unaff_EBP + -0x10) + 4));
  return;
}


// ---- Unwind@10029033 @ 10029033

void Unwind_10029033(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(*(int *)(unaff_EBP + -0x10) + 8));
  return;
}


// ---- Unwind@1002903e @ 1002903e

void Unwind_1002903e(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(*(int *)(unaff_EBP + -0x10) + 0xc));
  return;
}


// ---- Unwind@10029049 @ 10029049

void Unwind_10029049(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(*(int *)(unaff_EBP + -0x10) + 0x10));
  return;
}


// ---- Unwind@10029060 @ 10029060

void Unwind_10029060(void)

{
  int unaff_EBP;
  
  FUN_10004860(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@10029068 @ 10029068

void Unwind_10029068(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(*(int *)(unaff_EBP + -0x10) + 4));
  return;
}


// ---- Unwind@10029073 @ 10029073

void Unwind_10029073(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(*(int *)(unaff_EBP + -0x10) + 8));
  return;
}


// ---- Unwind@1002907e @ 1002907e

void Unwind_1002907e(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(*(int *)(unaff_EBP + -0x10) + 0xc));
  return;
}


// ---- Unwind@100290a0 @ 100290a0

void Unwind_100290a0(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + 0xc));
  return;
}


// ---- Unwind@100290a8 @ 100290a8

void Unwind_100290a8(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x14));
  return;
}


// ---- Unwind@100290b0 @ 100290b0

void Unwind_100290b0(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x18));
  return;
}


// ---- Unwind@100290b8 @ 100290b8

void Unwind_100290b8(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 1) != 0) {
    CString::~CString(*(CString **)(unaff_EBP + 4));
    return;
  }
  return;
}


// ---- Unwind@100290e0 @ 100290e0

void Unwind_100290e0(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + 8));
  return;
}


// ---- Unwind@100290e8 @ 100290e8

void Unwind_100290e8(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@100290f0 @ 100290f0

void Unwind_100290f0(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x14));
  return;
}


// ---- Unwind@10029110 @ 10029110

void Unwind_10029110(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + 8));
  return;
}


// ---- Unwind@10029118 @ 10029118

void Unwind_10029118(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@10029120 @ 10029120

void Unwind_10029120(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x14));
  return;
}


// ---- Unwind@10029140 @ 10029140

void Unwind_10029140(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + 8));
  return;
}


// ---- Unwind@10029148 @ 10029148

void Unwind_10029148(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@10029150 @ 10029150

void Unwind_10029150(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x14));
  return;
}


// ---- Unwind@10029170 @ 10029170

void Unwind_10029170(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x1018));
  return;
}


// ---- Unwind@10029190 @ 10029190

void Unwind_10029190(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + 4));
  return;
}


// ---- Unwind@10029198 @ 10029198

void Unwind_10029198(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@100291b0 @ 100291b0

void Unwind_100291b0(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + 4));
  return;
}


// ---- Unwind@100291b8 @ 100291b8

void Unwind_100291b8(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@100291cc @ 100291cc

void Unwind_100291cc(void)

{
  int unaff_EBP;
  
  FUN_1001f9e0((undefined4 *)(unaff_EBP + -0x14));
  return;
}


