// Decompiled with Ghidra from ControlResizer.ocx
// Format: Portable Executable (PE), image base 11000000

// ---- __vbaChkstk @ 110012a0

void __vbaChkstk(void)

{
                    /* WARNING: Could not recover jumptable at 0x110012a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __vbaChkstk();
  return;
}


// ---- __vbaFPException @ 110012ac

void __vbaFPException(void)

{
                    /* WARNING: Could not recover jumptable at 0x110012ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __vbaFPException();
  return;
}


// ---- adj_fdiv_m32 @ 110012b8

void __cdecl adj_fdiv_m32(void)

{
                    /* WARNING: Could not recover jumptable at 0x110012b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  adj_fdiv_m32();
  return;
}


// ---- VBDllUnRegisterServer @ 110013fc

void VBDllUnRegisterServer(void)

{
                    /* WARNING: Could not recover jumptable at 0x110013fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  VBDllUnRegisterServer();
  return;
}


// ---- VBDllGetClassObject @ 11001402

void VBDllGetClassObject(void)

{
                    /* WARNING: Could not recover jumptable at 0x11001402. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  VBDllGetClassObject();
  return;
}


// ---- VBDllRegisterServer @ 11001408

void VBDllRegisterServer(void)

{
                    /* WARNING: Could not recover jumptable at 0x11001408. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  VBDllRegisterServer();
  return;
}


// ---- VBDllCanUnloadNow @ 1100140e

void VBDllCanUnloadNow(void)

{
                    /* WARNING: Could not recover jumptable at 0x1100140e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  VBDllCanUnloadNow();
  return;
}


// ---- UserDllMain @ 11001414

void UserDllMain(void)

{
                    /* WARNING: Could not recover jumptable at 0x11001414. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UserDllMain();
  return;
}


// ---- entry @ 1100141c

void entry(void)

{
  UserDllMain(&DAT_11034240);
  return;
}


// ---- DllUnregisterServer @ 1102eba4

void DllUnregisterServer(void)

{
                    /* 0x2eba4  4  DllUnregisterServer */
  VBDllUnRegisterServer(&DAT_11034240,&DAT_1103423c);
  return;
}


// ---- DllGetClassObject @ 1102ebba

HRESULT DllGetClassObject(IID *rclsid,IID *riid,LPVOID *ppv)

{
  HRESULT HVar1;
  
                    /* 0x2ebba  2  DllGetClassObject */
  HVar1 = VBDllGetClassObject(&DAT_11034240,&DAT_1103423c);
  return HVar1;
}


// ---- DllRegisterServer @ 1102ebd0

void DllRegisterServer(void)

{
                    /* 0x2ebd0  3  DllRegisterServer */
  VBDllRegisterServer(&DAT_11034240,&DAT_1103423c);
  return;
}


// ---- DllCanUnloadNow @ 1102ebe6

HRESULT DllCanUnloadNow(void)

{
  HRESULT HVar1;
  
                    /* 0x2ebe6  1  DllCanUnloadNow */
  HVar1 = VBDllCanUnloadNow();
  return HVar1;
}


// ---- FUN_1102eca0 @ 1102eca0

void __cdecl FUN_1102eca0(uint param_1)

{
  code *pcVar1;
  ushort uVar2;
  short sVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  int iVar6;
  int ****ppppiVar7;
  short unaff_BX;
  int ****unaff_EDI;
  bool bVar8;
  float10 fVar9;
  int local_13c;
  int local_134;
  int local_12c;
  int local_124;
  int local_11c;
  int local_114;
  int local_10c;
  int local_104;
  int local_fc;
  int local_f4;
  undefined4 uVar10;
  int ***local_88;
  int ****local_84;
  int ****local_80;
  int ***local_7c;
  int ***local_78;
  int ***local_74;
  int ***local_70;
  int ***local_6c;
  int ****local_68;
  int ****local_64;
  int ****ppppiStack_60;
  int ***local_5c;
  int ****ppppiStack_58;
  undefined1 *local_54;
  int ****ppppiStack_50;
  int ***pppiStack_4c;
  int ****ppppiStack_48;
  int ***local_44;
  int ****ppppiStack_40;
  int **ppiStack_3c;
  undefined1 *puStack_38;
  int ***local_34;
  void *pvStack_24;
  undefined1 *puStack_20;
  undefined1 *local_1c;
  undefined *local_18;
  uint local_14;
  undefined4 local_10;
  undefined4 local_8;
  
  puStack_20 = &LAB_110012a6;
  pvStack_24 = ExceptionList;
  ExceptionList = &pvStack_24;
  __vbaChkstk();
  local_1c = &stack0xffffffd0;
  local_18 = &DAT_11001100;
  local_14 = param_1 & 1;
  ppppiVar7 = (int ****)(param_1 & 0xfffffffe);
  local_10 = 0;
  puStack_38 = (undefined1 *)0x1102ecf5;
  local_34 = (int ***)ppppiVar7;
  (*(code *)(*ppppiVar7)[1])();
  local_8 = 2;
  puStack_38 = &stack0xffffffd0;
  ppiStack_3c = (int **)ppppiVar7[4];
  ppppiStack_40 = (int ****)0x1102ed1c;
  local_70 = (int ***)(*(code *)(*ppppiVar7[4])[0x66])();
  if ((int)local_70 < 0) {
    ppppiStack_40 = (int ****)0x198;
    local_44 = (int ***)&DAT_11001ee0;
    ppppiStack_48 = (int ****)ppppiVar7[4];
    ppppiStack_50 = (int ****)0x1102ed42;
    pppiStack_4c = local_70;
    __vbaHresultCheckObj();
  }
  ppppiStack_40 = &local_34;
  ppppiStack_48 = (int ****)0x1102ed67;
  local_44 = (int ***)ppppiVar7;
  local_74 = (int ***)(*(code *)(*ppppiVar7)[0xac])();
  if ((int)local_74 < 0) {
    ppppiStack_48 = (int ****)0x2b0;
    pppiStack_4c = (int ***)&DAT_11001ee0;
    ppppiStack_58 = (int ****)0x1102ed8a;
    local_54 = (undefined1 *)local_74;
    ppppiStack_50 = ppppiVar7;
    __vbaHresultCheckObj();
  }
  local_78 = local_34;
  ppppiStack_48 = (int ****)&local_68;
  pppiStack_4c = local_34;
  ppppiStack_50 = (int ****)0x1102edb2;
  local_7c = (int ***)(*(code *)(*local_34)[0xf])();
  if ((int)local_7c < 0) {
    ppppiStack_50 = (int ****)0x3c;
    local_54 = &LAB_11002034;
    ppppiStack_58 = (int ****)local_78;
    ppppiStack_60 = (int ****)0x1102edd2;
    local_5c = local_7c;
    __vbaHresultCheckObj();
  }
  ppppiStack_50 = (int ****)&DAT_11002024;
  ppppiStack_58 = (int ****)0x1102edf3;
  uVar2 = __vbaCheckType();
  local_80 = (int ****)CONCAT22(local_80._2_2_,~uVar2 | -(ushort)((short)local_68 == 0));
  ppppiStack_50 = &local_34;
  local_54 = &stack0xffffffd0;
  ppppiStack_58 = (int ****)0x2;
  local_5c = (int ***)0x1102ee19;
  __vbaFreeObjList();
  if ((short)local_80 == 0) {
    local_8 = 6;
    ppppiStack_50 = (int ****)0xffffffff;
    local_54 = (undefined1 *)0x1102eeab;
    __vbaOnError();
    local_8 = 7;
    local_54 = (undefined1 *)0x1102eec1;
    ppppiStack_50 = ppppiVar7;
    local_54 = (undefined1 *)(*(code *)(*ppppiVar7)[0xea])();
    ppppiStack_58 = (int ****)&stack0xffffffd0;
    local_5c = (int ***)0x1102eecc;
    local_70 = (int ***)__vbaObjSet();
    local_54 = (undefined1 *)0x0;
    local_5c = (int ***)0x1102eee0;
    ppppiStack_58 = (int ****)local_70;
    local_74 = (int ***)(*(code *)(*local_70)[0x23])();
    if ((int)local_74 < 0) {
      local_5c = (int ***)0x8c;
      ppppiStack_60 = (int ****)&DAT_11002044;
      local_64 = (int ****)local_70;
      local_6c = (int ***)0x1102ef03;
      local_68 = (int ****)local_74;
      __vbaHresultCheckObj();
    }
    local_5c = (int ***)0x1102ef1e;
    __vbaFreeObj();
    local_8 = 8;
    local_5c = (int ***)&stack0xffffffd0;
    local_64 = (int ****)0x1102ef38;
    ppppiStack_60 = ppppiVar7;
    local_70 = (int ***)(*(code *)(*ppppiVar7)[0xac])();
    if ((int)local_70 < 0) {
      local_64 = (int ****)0x2b0;
      local_68 = (int ****)&DAT_11001ee0;
      local_74 = (int ***)0x1102ef5b;
      local_6c = (int ***)ppppiVar7;
      __vbaHresultCheckObj();
    }
    local_64 = &local_6c;
    local_6c = (int ***)0x1102ef83;
    local_68 = unaff_EDI;
    local_78 = (int ***)(*(code *)(*unaff_EDI)[7])();
    if ((int)local_78 < 0) {
      local_6c = (int ***)0x1c;
      local_70 = (int ***)&LAB_11002034;
      local_7c = (int ***)0x1102efa3;
      __vbaHresultCheckObj();
    }
    local_70 = ppppiVar7[4];
    local_74 = (int ***)0x1102efcb;
    local_7c = (int ***)(*(code *)(*ppppiVar7[4])[0x19])();
    if ((int)local_7c < 0) {
      local_74 = (int ***)0x64;
      local_78 = (int ***)&DAT_11001ee0;
      local_80 = (int ****)ppppiVar7[4];
      local_84 = (int ****)0x1102efee;
      local_7c = (int ***)local_80;
      __vbaHresultCheckObj();
    }
    local_74 = (int ***)0x1102f009;
    __vbaFreeObj();
    local_8 = 9;
    local_74 = (int ***)&stack0xffffffd0;
    local_78 = ppppiVar7[4];
    local_7c = (int ***)0x1102f029;
    local_70 = (int ***)(*(code *)(*ppppiVar7[4])[0x66])();
    if ((int)local_70 < 0) {
      local_7c = (int ***)0x198;
      local_80 = (int ****)&DAT_11001ee0;
      local_84 = (int ****)ppppiVar7[4];
      local_88 = local_70;
      __vbaHresultCheckObj();
    }
    local_7c = (int ***)&DAT_11002024;
    local_84 = (int ****)0x1102f070;
    local_7c = (int ***)__vbaCastObj();
    local_80 = &local_34;
    local_84 = (int ****)0x1102f07b;
    local_7c = (int ***)__vbaObjSet();
    local_84 = (int ****)0x1102f08b;
    local_80 = ppppiVar7;
    local_74 = (int ***)(*(code *)(*ppppiVar7)[0x1f5])();
    if ((int)local_74 < 0) {
      local_84 = (int ****)0x7d4;
      local_88 = (int ***)&DAT_11001f10;
      __vbaHresultCheckObj(local_74,ppppiVar7);
    }
    local_84 = &local_34;
    local_88 = (int ***)&stack0xffffffd0;
    __vbaFreeObjList(2);
    local_8 = 10;
    local_84 = (int ****)&stack0xffffffd0;
    local_88 = (int ***)ppppiVar7;
    local_70 = (int ***)(*(code *)(*ppppiVar7)[499])();
    if ((int)local_70 < 0) {
      __vbaHresultCheckObj(local_70,ppppiVar7,&DAT_11001f10,0x7cc);
    }
    local_74 = (int ***)unaff_EDI;
    local_78 = (int ***)(*(code *)(*unaff_EDI)[0x40])(unaff_EDI,&local_6c);
    if ((int)local_78 < 0) {
      __vbaHresultCheckObj(local_78,local_74,&DAT_11002024,0x100);
    }
    ppppiVar7[0x10] = local_6c;
    __vbaFreeObj();
    local_8 = 0xb;
    local_70 = (int ***)(*(code *)(*ppppiVar7)[499])(ppppiVar7,&stack0xffffffd0);
    if ((int)local_70 < 0) {
      __vbaHresultCheckObj(local_70,ppppiVar7,&DAT_11001f10,0x7cc);
    }
    local_74 = (int ***)unaff_EDI;
    local_78 = (int ***)(*(code *)(*unaff_EDI)[0x42])(unaff_EDI,&local_6c);
    if ((int)local_78 < 0) {
      __vbaHresultCheckObj(local_78,local_74,&DAT_11002024,0x108);
    }
    ppppiVar7[0x11] = local_6c;
    __vbaFreeObj();
    local_8 = 0xc;
    local_70 = (int ***)(*(code *)(*ppppiVar7)[499])(ppppiVar7,&stack0xffffffd0);
    if ((int)local_70 < 0) {
      __vbaHresultCheckObj(local_70,ppppiVar7,&DAT_11001f10,0x7cc);
    }
    local_74 = (int ***)unaff_EDI;
    local_78 = (int ***)(*(code *)(*unaff_EDI)[0x86])(unaff_EDI,&local_34);
    if ((int)local_78 < 0) {
      __vbaHresultCheckObj(local_78,local_74,&DAT_11002024,0x218);
    }
    uVar10 = 0;
    uVar5 = __vbaLateMemCallLd(&local_44,local_34,L"Count",0,0);
    uVar5 = __vbaI4Var(uVar5);
    __vbaRedim(0,0x14,ppppiVar7 + 0xf,0,1,uVar5);
    __vbaFreeObjList(2,&stack0xffffffd0,&local_34);
    __vbaFreeVar(uVar10);
    local_8 = 0xd;
    local_70 = (int ***)(*(code *)(*ppppiVar7)[499])(ppppiVar7,&stack0xffffffd0);
    if ((int)local_70 < 0) {
      __vbaHresultCheckObj(local_70,ppppiVar7,&DAT_11001f10,0x7cc);
    }
    local_74 = (int ***)unaff_EDI;
    local_78 = (int ***)(*(code *)(*unaff_EDI)[0x86])(unaff_EDI,&local_34);
    if ((int)local_78 < 0) {
      local_5c = (int ***)0x218;
      ppppiStack_60 = (int ****)&DAT_11002024;
      local_64 = (int ****)local_74;
      local_6c = (int ***)0x1102f3af;
      local_68 = (int ****)local_78;
      __vbaHresultCheckObj();
    }
    local_5c = local_34;
    local_34 = (int ***)0x0;
    ppppiStack_60 = (int ****)&local_84;
    local_64 = (int ****)0x1102f3e2;
    local_5c = (int ***)__vbaObjSet();
    ppppiStack_60 = (int ****)&stack0xffffffd4;
    local_64 = &local_88;
    local_68 = (int ****)&DAT_11002060;
    local_6c = (int ***)0x1102f3f9;
    iVar6 = __vbaForEachCollObj();
    local_5c = (int ***)0x1102f408;
    __vbaFreeObj();
    while (iVar6 != 0) {
      local_8 = 0xe;
      local_5c = (int ***)&DAT_11002070;
      local_64 = (int ****)0x1102f423;
      sVar3 = __vbaCheckType();
      if (sVar3 == 0) {
        local_8 = 0x14;
        local_5c = (int ***)0x0;
        ppppiStack_60 = (int ****)0x110020a0;
        local_68 = &local_44;
        local_6c = (int ***)0x1102f6f8;
        local_5c = (int ***)__vbaLateMemCallLd();
        ppppiStack_60 = (int ****)&local_64;
        local_64 = (int ****)0x1102f706;
        uVar4 = __vbaVarTstLt();
        local_70 = (int ***)CONCAT22(local_70._2_2_,uVar4);
        local_5c = (int ***)0x1102f713;
        __vbaFreeVar();
        if ((short)local_70 == 0) {
          local_8 = 0x17;
          if ((ppppiVar7[0xf] == (int ***)0x0) || (*(short *)ppppiVar7[0xf] != 1)) {
            ppppiStack_58 = (int ****)0x1102f857;
            local_11c = __vbaGenerateBoundsError();
          }
          else {
            local_70 = (int ***)((int)unaff_BX - (int)ppppiVar7[0xf][5]);
            if (ppppiVar7[0xf][4] <= local_70) {
              ppppiStack_58 = (int ****)0x1102f83d;
              __vbaGenerateBoundsError();
            }
            local_11c = (int)local_70 * 0x14;
          }
          ppppiStack_58 = (int ****)0x0;
          local_5c = (int ***)0x110020a0;
          local_64 = &local_44;
          local_68 = (int ****)0x1102f872;
          ppppiStack_58 = (int ****)__vbaLateMemCallLd();
          local_5c = (int ***)0x1102f87c;
          fVar9 = (float10)__vbaR4Var();
          *(float *)((int)ppppiVar7[0xf][3] + local_11c) = (float)fVar9;
          ppppiStack_60 = (int ****)0x1102f897;
          __vbaFreeVar();
        }
        else {
          local_8 = 0x15;
          local_5c = (int ***)0x124f8;
          local_64 = (int ****)0x3;
          if ((ppppiVar7[0xf] == (int ***)0x0) || (*(short *)ppppiVar7[0xf] != 1)) {
            ppppiStack_58 = (int ****)0x1102f793;
            local_114 = __vbaGenerateBoundsError();
          }
          else {
            local_70 = (int ***)((int)unaff_BX - (int)ppppiVar7[0xf][5]);
            if (ppppiVar7[0xf][4] <= local_70) {
              ppppiStack_58 = (int ****)0x1102f779;
              __vbaGenerateBoundsError();
            }
            local_114 = (int)local_70 * 0x14;
          }
          ppppiStack_58 = (int ****)&local_64;
          local_5c = (int ***)0x0;
          ppppiStack_60 = (int ****)0x110020a0;
          local_68 = &local_44;
          local_6c = (int ***)0x1102f7b2;
          local_5c = (int ***)__vbaLateMemCallLd();
          ppppiStack_60 = (int ****)&local_54;
          local_64 = (int ****)0x1102f7c0;
          ppppiStack_58 = (int ****)__vbaVarAdd();
          local_5c = (int ***)0x1102f7c7;
          fVar9 = (float10)__vbaR4Var();
          *(float *)((int)ppppiVar7[0xf][3] + local_114) = (float)fVar9;
          local_5c = (int ***)&local_54;
          ppppiStack_60 = &local_44;
          local_64 = (int ****)0x2;
          local_68 = (int ****)0x1102f7e9;
          __vbaFreeVarList();
        }
        local_8 = 0x19;
        if ((ppppiVar7[0xf] == (int ***)0x0) || (*(short *)ppppiVar7[0xf] != 1)) {
          local_5c = (int ***)0x1102f8fd;
          local_124 = __vbaGenerateBoundsError();
        }
        else {
          local_70 = (int ***)((int)unaff_BX - (int)ppppiVar7[0xf][5]);
          if (ppppiVar7[0xf][4] <= local_70) {
            local_5c = (int ***)0x1102f8e3;
            __vbaGenerateBoundsError();
          }
          local_124 = (int)local_70 * 0x14;
        }
        local_5c = (int ***)0x0;
        ppppiStack_60 = (int ****)&DAT_110020ac;
        local_68 = &local_44;
        local_6c = (int ***)0x1102f918;
        local_5c = (int ***)__vbaLateMemCallLd();
        ppppiStack_60 = (int ****)0x1102f922;
        fVar9 = (float10)__vbaR4Var();
        *(float *)((int)ppppiVar7[0xf][3] + local_124 + 4) = (float)fVar9;
        ppppiStack_60 = (int ****)0x1102f93e;
        __vbaFreeVar();
        local_8 = 0x1a;
        if ((ppppiVar7[0xf] == (int ***)0x0) || (*(short *)ppppiVar7[0xf] != 1)) {
          local_5c = (int ***)0x1102f9a4;
          local_12c = __vbaGenerateBoundsError();
        }
        else {
          local_70 = (int ***)((int)unaff_BX - (int)ppppiVar7[0xf][5]);
          if (ppppiVar7[0xf][4] <= local_70) {
            local_5c = (int ***)0x1102f98a;
            __vbaGenerateBoundsError();
          }
          local_12c = (int)local_70 * 0x14;
        }
        local_5c = (int ***)0x0;
        ppppiStack_60 = (int ****)0x110020b4;
        local_68 = &local_44;
        local_6c = (int ***)0x1102f9bf;
        local_5c = (int ***)__vbaLateMemCallLd();
        ppppiStack_60 = (int ****)0x1102f9c9;
        fVar9 = (float10)__vbaR4Var();
        *(float *)((int)ppppiVar7[0xf][3] + local_12c + 8) = (float)fVar9;
        ppppiStack_60 = (int ****)0x1102f9e5;
        __vbaFreeVar();
        local_8 = 0x1b;
        if ((ppppiVar7[0xf] == (int ***)0x0) || (*(short *)ppppiVar7[0xf] != 1)) {
          local_5c = (int ***)0x1102fa4b;
          local_134 = __vbaGenerateBoundsError();
        }
        else {
          local_70 = (int ***)((int)unaff_BX - (int)ppppiVar7[0xf][5]);
          if (ppppiVar7[0xf][4] <= local_70) {
            local_5c = (int ***)0x1102fa31;
            __vbaGenerateBoundsError();
          }
          local_134 = (int)local_70 * 0x14;
        }
        local_5c = (int ***)0x0;
        ppppiStack_60 = (int ****)0x110020c0;
        local_68 = &local_44;
        local_6c = (int ***)0x1102fa66;
        local_5c = (int ***)__vbaLateMemCallLd();
        ppppiStack_60 = (int ****)0x1102fa70;
        fVar9 = (float10)__vbaR4Var();
        *(float *)((int)ppppiVar7[0xf][3] + local_134 + 0xc) = (float)fVar9;
        ppppiStack_60 = (int ****)0x1102fa8c;
        __vbaFreeVar();
        local_8 = 0x1c;
        if ((ppppiVar7[0xf] == (int ***)0x0) || (*(short *)ppppiVar7[0xf] != 1)) {
          local_5c = (int ***)0x1102faf2;
          local_13c = __vbaGenerateBoundsError();
        }
        else {
          local_70 = (int ***)((int)unaff_BX - (int)ppppiVar7[0xf][5]);
          if (ppppiVar7[0xf][4] <= local_70) {
            local_5c = (int ***)0x1102fad8;
            __vbaGenerateBoundsError();
          }
          local_13c = (int)local_70 * 0x14;
        }
        local_5c = (int ***)0x0;
        ppppiStack_60 = (int ****)0x110020d0;
        local_68 = &local_44;
        local_6c = (int ***)0x1102fb0d;
        local_5c = (int ***)__vbaLateMemCallLd();
        ppppiStack_60 = (int ****)0x1102fb17;
        fVar9 = (float10)__vbaR4Var();
        *(float *)((int)ppppiVar7[0xf][3] + local_13c + 0x10) = (float)fVar9;
        ppppiStack_60 = (int ****)0x1102fb33;
        __vbaFreeVar();
      }
      else {
        local_8 = 0xf;
        if ((ppppiVar7[0xf] == (int ***)0x0) || (*(short *)ppppiVar7[0xf] != 1)) {
          local_5c = (int ***)0x1102f494;
          local_f4 = __vbaGenerateBoundsError();
        }
        else {
          local_70 = (int ***)((int)unaff_BX - (int)ppppiVar7[0xf][5]);
          if (ppppiVar7[0xf][4] <= local_70) {
            local_5c = (int ***)0x1102f47a;
            __vbaGenerateBoundsError();
          }
          local_f4 = (int)local_70 * 0x14;
        }
        local_5c = (int ***)0x0;
        ppppiStack_60 = (int ****)&DAT_11002080;
        local_68 = &local_44;
        local_6c = (int ***)0x1102f4af;
        local_5c = (int ***)__vbaLateMemCallLd();
        ppppiStack_60 = (int ****)0x1102f4b9;
        fVar9 = (float10)__vbaR4Var();
        *(float *)((int)ppppiVar7[0xf][3] + local_f4) = (float)fVar9;
        ppppiStack_60 = (int ****)0x1102f4d4;
        __vbaFreeVar();
        local_8 = 0x10;
        if ((ppppiVar7[0xf] == (int ***)0x0) || (*(short *)ppppiVar7[0xf] != 1)) {
          local_5c = (int ***)0x1102f53a;
          local_fc = __vbaGenerateBoundsError();
        }
        else {
          local_70 = (int ***)((int)unaff_BX - (int)ppppiVar7[0xf][5]);
          if (ppppiVar7[0xf][4] <= local_70) {
            local_5c = (int ***)0x1102f520;
            __vbaGenerateBoundsError();
          }
          local_fc = (int)local_70 * 0x14;
        }
        local_5c = (int ***)0x0;
        ppppiStack_60 = (int ****)&DAT_11002088;
        local_68 = &local_44;
        local_6c = (int ***)0x1102f555;
        local_5c = (int ***)__vbaLateMemCallLd();
        ppppiStack_60 = (int ****)0x1102f55f;
        fVar9 = (float10)__vbaR4Var();
        *(float *)((int)ppppiVar7[0xf][3] + local_fc + 4) = (float)fVar9;
        ppppiStack_60 = (int ****)0x1102f57b;
        __vbaFreeVar();
        local_8 = 0x11;
        if ((ppppiVar7[0xf] == (int ***)0x0) || (*(short *)ppppiVar7[0xf] != 1)) {
          local_5c = (int ***)0x1102f5e1;
          local_104 = __vbaGenerateBoundsError();
        }
        else {
          local_70 = (int ***)((int)unaff_BX - (int)ppppiVar7[0xf][5]);
          if (ppppiVar7[0xf][4] <= local_70) {
            local_5c = (int ***)0x1102f5c7;
            __vbaGenerateBoundsError();
          }
          local_104 = (int)local_70 * 0x14;
        }
        local_5c = (int ***)0x0;
        ppppiStack_60 = (int ****)&DAT_11002090;
        local_68 = &local_44;
        local_6c = (int ***)0x1102f5fc;
        local_5c = (int ***)__vbaLateMemCallLd();
        ppppiStack_60 = (int ****)0x1102f606;
        fVar9 = (float10)__vbaR4Var();
        *(float *)((int)ppppiVar7[0xf][3] + local_104 + 8) = (float)fVar9;
        ppppiStack_60 = (int ****)0x1102f622;
        __vbaFreeVar();
        local_8 = 0x12;
        if ((ppppiVar7[0xf] == (int ***)0x0) || (*(short *)ppppiVar7[0xf] != 1)) {
          local_5c = (int ***)0x1102f688;
          local_10c = __vbaGenerateBoundsError();
        }
        else {
          local_70 = (int ***)((int)unaff_BX - (int)ppppiVar7[0xf][5]);
          if (ppppiVar7[0xf][4] <= local_70) {
            local_5c = (int ***)0x1102f66e;
            __vbaGenerateBoundsError();
          }
          local_10c = (int)local_70 * 0x14;
        }
        local_5c = (int ***)0x0;
        ppppiStack_60 = (int ****)&DAT_11002098;
        local_68 = &local_44;
        local_6c = (int ***)0x1102f6a3;
        local_5c = (int ***)__vbaLateMemCallLd();
        ppppiStack_60 = (int ****)0x1102f6ad;
        fVar9 = (float10)__vbaR4Var();
        *(float *)((int)ppppiVar7[0xf][3] + local_10c + 0xc) = (float)fVar9;
        ppppiStack_60 = (int ****)0x1102f6c9;
        __vbaFreeVar();
      }
      local_8 = 0x1e;
      bVar8 = SCARRY2(unaff_BX,1);
      unaff_BX = unaff_BX + 1;
      if (bVar8) {
        local_5c = (int ***)0x1102fbfa;
        __vbaErrorOverflow();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      local_8 = 0x1f;
      local_5c = (int ***)&stack0xffffffd4;
      ppppiStack_60 = &local_88;
      local_64 = (int ****)&DAT_11002060;
      local_68 = (int ****)0x1102fb69;
      iVar6 = __vbaNextEachCollObj();
    }
  }
  else {
    local_8 = 3;
    local_54 = (undefined1 *)0x1102ee3a;
    ppppiStack_50 = ppppiVar7;
    local_54 = (undefined1 *)(*(code *)(*ppppiVar7)[0xea])();
    ppppiStack_58 = (int ****)&stack0xffffffd0;
    local_5c = (int ***)0x1102ee45;
    local_70 = (int ***)__vbaObjSet();
    local_54 = (undefined1 *)0xffffffff;
    local_5c = (int ***)0x1102ee59;
    ppppiStack_58 = (int ****)local_70;
    local_74 = (int ***)(*(code *)(*local_70)[0x23])();
    if ((int)local_74 < 0) {
      local_5c = (int ***)0x8c;
      ppppiStack_60 = (int ****)&DAT_11002044;
      local_64 = (int ****)local_70;
      local_6c = (int ***)0x1102ee7c;
      local_68 = (int ****)local_74;
      __vbaHresultCheckObj();
    }
    local_5c = (int ***)0x1102ee97;
    __vbaFreeObj();
  }
  local_14 = 0;
  local_5c = (int ***)&LAB_1102fbd2;
  ppppiStack_60 = &local_88;
  local_64 = (int ****)&local_84;
  local_68 = (int ****)0x2;
  local_6c = (int ***)0x1102fbc5;
  __vbaFreeObjList();
  ppppiStack_60 = (int ****)0x1102fbd1;
  __vbaFreeObj();
  return;
}


// ---- FUN_1102fc00 @ 1102fc00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_1102fc00(uint param_1)

{
  code *pcVar1;
  short sVar2;
  undefined2 uVar3;
  int **ppiVar4;
  int ****ppppiVar5;
  int **extraout_ECX;
  int **extraout_ECX_00;
  int **extraout_ECX_01;
  int **extraout_ECX_02;
  int **extraout_ECX_03;
  short unaff_BX;
  int ***unaff_ESI;
  int ****unaff_EDI;
  bool bVar6;
  ushort uVar7;
  float10 fVar8;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 extraout_ST0_01;
  float10 extraout_ST0_02;
  float10 extraout_ST0_03;
  int local_1c8;
  int local_1c0;
  int local_1b0;
  int local_1a8;
  int local_198;
  int local_190;
  int local_180;
  int local_178;
  int local_168;
  int local_160;
  int local_150;
  int local_148;
  int local_138;
  int local_130;
  int local_120;
  int local_118;
  int local_108;
  int local_100;
  int local_f0;
  int local_e8;
  int local_cc;
  undefined1 local_b4 [4];
  undefined1 local_b0 [4];
  float *local_ac;
  float *local_a8;
  float ***local_a4;
  float ***local_a0;
  float **local_9c;
  float **local_98;
  float local_94 [2];
  undefined2 local_8c;
  float ***local_84;
  int ****local_80;
  undefined8 local_7c;
  undefined1 local_74 [12];
  undefined4 uStack_68;
  float ***local_64;
  float ***pppfStack_60;
  float **ppfStack_5c;
  float ***pppfStack_58;
  int ****local_54;
  int ****ppppiStack_50;
  float ****ppppfStack_4c;
  float ***pppfStack_48;
  float ***local_44;
  int ****ppppiStack_40;
  float ***pppfStack_3c;
  undefined1 *puStack_38;
  float ***local_34;
  void *pvStack_24;
  undefined1 *puStack_20;
  undefined1 *local_1c;
  undefined *local_18;
  uint local_14;
  undefined4 local_10;
  undefined4 local_8;
  
  puStack_20 = &LAB_110012a6;
  pvStack_24 = ExceptionList;
  ExceptionList = &pvStack_24;
  __vbaChkstk();
  local_1c = &stack0xffffffd0;
  local_18 = &DAT_110011a0;
  local_14 = param_1 & 1;
  ppppiVar5 = (int ****)(param_1 & 0xfffffffe);
  local_10 = 0;
  puStack_38 = (undefined1 *)0x1102fc55;
  local_34 = (float ***)ppppiVar5;
  (*(code *)(*ppppiVar5)[1])();
  local_8 = 2;
  puStack_38 = (undefined1 *)0xffffffff;
  pppfStack_3c = (float ***)0x1102fc6b;
  __vbaOnError();
  local_8 = 3;
  puStack_38 = &stack0xffffffd0;
  ppppiStack_40 = (int ****)0x1102fc85;
  pppfStack_3c = (float ***)ppppiVar5;
  local_9c = (float **)(*(code *)(*ppppiVar5)[499])();
  if ((int)local_9c < 0) {
    ppppiStack_40 = (int ****)0x7cc;
    local_44 = (float ***)&DAT_11001f10;
    ppppiStack_50 = (int ****)0x1102fcb1;
    ppppfStack_4c = (float ****)local_9c;
    pppfStack_48 = (float ***)ppppiVar5;
    __vbaHresultCheckObj();
  }
  ppppiStack_40 = (int ****)&local_34;
  pppfStack_48 = (float ***)0x1102fce5;
  local_a0 = (float ***)unaff_EDI;
  local_44 = (float ***)unaff_EDI;
  local_a4 = (float ***)(*(code *)(*unaff_EDI)[0x86])();
  if ((int)local_a4 < 0) {
    pppfStack_48 = (float ***)0x218;
    ppppfStack_4c = (float ****)&DAT_11002024;
    ppppiStack_50 = (int ****)local_a0;
    pppfStack_58 = (float ***)0x1102fd14;
    local_54 = (int ****)local_a4;
    __vbaHresultCheckObj();
  }
  pppfStack_48 = local_34;
  local_34 = (float ***)0x0;
  ppppfStack_4c = (float ****)local_b0;
  ppppiStack_50 = (int ****)0x1102fd4a;
  pppfStack_48 = (float ***)__vbaObjSet();
  ppppfStack_4c = (float ****)&stack0xffffffd4;
  ppppiStack_50 = (int ****)local_b4;
  local_54 = (int ****)&DAT_11002060;
  pppfStack_58 = (float ***)0x1102fd61;
  local_cc = __vbaForEachCollObj();
  pppfStack_48 = (float ***)0x1102fd70;
  __vbaFreeObj();
  do {
    if (local_cc == 0) {
      local_14 = 0;
      pppfStack_48 = (float ***)&LAB_1103155e;
      ppppfStack_4c = (float ****)local_b4;
      ppppiStack_50 = (int ****)local_b0;
      local_54 = (int ****)0x2;
      pppfStack_58 = (float ***)0x11031551;
      __vbaFreeObjList();
      ppppfStack_4c = (float ****)0x1103155d;
      __vbaFreeObj();
      return;
    }
    local_8 = 4;
    pppfStack_48 = (float ***)&DAT_11002070;
    ppppiStack_50 = (int ****)0x1102fd8b;
    sVar2 = __vbaCheckType();
    if (sVar2 == 0) {
      local_8 = 10;
      local_7c = (double)((ulonglong)local_7c & 0xffffffff00000000);
      local_84 = (float ***)0x8002;
      pppfStack_48 = (float ***)0x0;
      ppppfStack_4c = (float ****)0x110020a0;
      local_54 = (int ****)&local_44;
      pppfStack_58 = (float ***)0x11030693;
      pppfStack_48 = (float ***)__vbaLateMemCallLd();
      ppppfStack_4c = &local_84;
      ppppiStack_50 = (int ****)0x110306a1;
      uVar3 = __vbaVarTstLt();
      local_9c = (float **)CONCAT22(local_9c._2_2_,uVar3);
      pppfStack_48 = (float ***)0x110306b1;
      __vbaFreeVar();
      if ((short)local_9c == 0) {
        local_8 = 0xd;
        local_44 = (float ***)&stack0xffffffd0;
        ppppfStack_4c = (float ****)0x11030921;
        pppfStack_48 = (float ***)ppppiVar5;
        local_9c = (float **)(*(code *)(*ppppiVar5)[499])();
        if ((int)local_9c < 0) {
          ppppfStack_4c = (float ****)0x7cc;
          ppppiStack_50 = (int ****)&DAT_11001f10;
          ppfStack_5c = (float **)0x1103094d;
          pppfStack_58 = (float ***)local_9c;
          local_54 = ppppiVar5;
          __vbaHresultCheckObj();
        }
        ppppfStack_4c = (float ****)&local_98;
        local_54 = (int ****)0x11030984;
        local_a0 = (float ***)unaff_EDI;
        ppppiStack_50 = unaff_EDI;
        local_a4 = (float ***)(*(code *)(*unaff_EDI)[0x40])();
        uVar7 = 0;
        if ((int)local_a4 < 0) {
          pppfStack_58 = (float ***)0x100;
          ppfStack_5c = (float **)&DAT_11002024;
          pppfStack_60 = local_a0;
          uStack_68 = 0x110309b3;
          local_64 = local_a4;
          __vbaHresultCheckObj();
        }
        if ((ppppiVar5[0xf] == (int ***)0x0) || (*(short *)ppppiVar5[0xf] != 1)) {
          pppfStack_58 = (float ***)0x11030a2d;
          local_160 = __vbaGenerateBoundsError();
        }
        else {
          local_a8 = (float *)((int)unaff_BX - (int)ppppiVar5[0xf][5]);
          if (ppppiVar5[0xf][4] <= local_a8) {
            pppfStack_58 = (float ***)0x11030a10;
            __vbaGenerateBoundsError();
          }
          local_160 = (int)local_a8 * 0x14;
        }
        if ((ppppiVar5[0xf] == (int ***)0x0) || (*(short *)ppppiVar5[0xf] != 1)) {
          pppfStack_58 = (float ***)0x11030a9b;
          local_168 = __vbaGenerateBoundsError();
        }
        else {
          local_ac = (float *)((int)unaff_BX - (int)ppppiVar5[0xf][5]);
          if (ppppiVar5[0xf][4] <= local_ac) {
            pppfStack_58 = (float ***)0x11030a7e;
            __vbaGenerateBoundsError();
          }
          local_168 = (int)local_ac * 0x14;
        }
        ppiVar4 = ppppiVar5[0xf][3];
        if (DAT_11033000 == 0) {
          fVar8 = (((float10)(float)local_98 - (float10)(float)ppppiVar5[0x10]) *
                  (float10)*(float *)((int)ppppiVar5[0xf][3] + local_168)) /
                  (float10)(float)ppppiVar5[0x10];
        }
        else {
          pppfStack_58 = (float ***)ppppiVar5[0x10];
          ppfStack_5c = (float **)0x11030ae1;
          fVar8 = (float10)adj_fdiv_m32();
          ppiVar4 = extraout_ECX_00;
        }
        local_7c = (double)CONCAT44(local_7c._4_4_,
                                    (float)(fVar8 + (float10)*(float *)((int)ppiVar4 + local_160)));
        if ((uVar7 & 0xd) != 0) goto LAB_11031580;
        local_84 = (float ***)0x4;
        pppfStack_58 = (float ***)0x11030b08;
        __vbaChkstk();
        local_54 = (int ****)local_84;
        ppppiStack_50 = local_80;
        ppppfStack_4c = (float ****)(int *****)local_7c;
        pppfStack_48 = (float ***)local_7c._4_4_;
        pppfStack_58 = (float ***)0x110020a0;
        pppfStack_60 = (float ***)0x11030b30;
        ppfStack_5c = (float **)unaff_ESI;
        __vbaLateMemSt();
        pppfStack_48 = (float ***)0x11030b39;
        __vbaFreeObj();
      }
      else {
        local_8 = 0xb;
        local_44 = (float ***)&stack0xffffffd0;
        ppppfStack_4c = (float ****)0x110306da;
        pppfStack_48 = (float ***)ppppiVar5;
        local_9c = (float **)(*(code *)(*ppppiVar5)[499])();
        if ((int)local_9c < 0) {
          ppppfStack_4c = (float ****)0x7cc;
          ppppiStack_50 = (int ****)&DAT_11001f10;
          ppfStack_5c = (float **)0x11030706;
          pppfStack_58 = (float ***)local_9c;
          local_54 = ppppiVar5;
          __vbaHresultCheckObj();
        }
        ppppfStack_4c = (float ****)&local_98;
        local_54 = (int ****)0x1103073d;
        local_a0 = (float ***)unaff_EDI;
        ppppiStack_50 = unaff_EDI;
        local_a4 = (float ***)(*(code *)(*unaff_EDI)[0x40])();
        uVar7 = 0;
        if ((int)local_a4 < 0) {
          pppfStack_58 = (float ***)0x100;
          ppfStack_5c = (float **)&DAT_11002024;
          pppfStack_60 = local_a0;
          uStack_68 = 0x1103076c;
          local_64 = local_a4;
          __vbaHresultCheckObj();
        }
        if ((ppppiVar5[0xf] == (int ***)0x0) || (*(short *)ppppiVar5[0xf] != 1)) {
          pppfStack_58 = (float ***)0x110307e6;
          local_148 = __vbaGenerateBoundsError();
        }
        else {
          local_a8 = (float *)((int)unaff_BX - (int)ppppiVar5[0xf][5]);
          if (ppppiVar5[0xf][4] <= local_a8) {
            pppfStack_58 = (float ***)0x110307c9;
            __vbaGenerateBoundsError();
          }
          local_148 = (int)local_a8 * 0x14;
        }
        if ((ppppiVar5[0xf] == (int ***)0x0) || (*(short *)ppppiVar5[0xf] != 1)) {
          pppfStack_58 = (float ***)0x11030854;
          local_150 = __vbaGenerateBoundsError();
        }
        else {
          local_ac = (float *)((int)unaff_BX - (int)ppppiVar5[0xf][5]);
          if (ppppiVar5[0xf][4] <= local_ac) {
            pppfStack_58 = (float ***)0x11030837;
            __vbaGenerateBoundsError();
          }
          local_150 = (int)local_ac * 0x14;
        }
        ppiVar4 = ppppiVar5[0xf][3];
        if (DAT_11033000 == 0) {
          fVar8 = (((float10)(float)local_98 - (float10)(float)ppppiVar5[0x10]) *
                  (float10)*(float *)((int)ppppiVar5[0xf][3] + local_150)) /
                  (float10)(float)ppppiVar5[0x10];
        }
        else {
          pppfStack_58 = (float ***)ppppiVar5[0x10];
          ppfStack_5c = (float **)0x1103089a;
          fVar8 = (float10)adj_fdiv_m32();
          ppiVar4 = extraout_ECX;
        }
        if (((uVar7 & 0xd) != 0) ||
           (local_7c = (double)((fVar8 + (float10)*(float *)((int)ppiVar4 + local_148)) -
                               (float10)_DAT_11001220), (uVar7 & 0xd) != 0)) goto LAB_11031580;
        local_84 = (float ***)0x5;
        pppfStack_58 = (float ***)0x110308d1;
        __vbaChkstk();
        local_54 = (int ****)local_84;
        ppppiStack_50 = local_80;
        ppppfStack_4c = (float ****)(int *****)local_7c;
        pppfStack_48 = (float ***)local_7c._4_4_;
        pppfStack_58 = (float ***)0x110020a0;
        pppfStack_60 = (float ***)0x110308f9;
        ppfStack_5c = (float **)unaff_ESI;
        __vbaLateMemSt();
        pppfStack_48 = (float ***)0x11030902;
        __vbaFreeObj();
      }
      local_8 = 0xf;
      pppfStack_48 = (float ***)&stack0xffffffd0;
      ppppiStack_50 = (int ****)0x11030b53;
      ppppfStack_4c = (float ****)ppppiVar5;
      local_9c = (float **)(*(code *)(*ppppiVar5)[499])();
      if ((int)local_9c < 0) {
        ppppiStack_50 = (int ****)0x7cc;
        local_54 = (int ****)&DAT_11001f10;
        pppfStack_60 = (float ***)0x11030b7f;
        ppfStack_5c = local_9c;
        pppfStack_58 = (float ***)ppppiVar5;
        __vbaHresultCheckObj();
      }
      ppppiStack_50 = (int ****)&local_98;
      pppfStack_58 = (float ***)0x11030bb6;
      local_a0 = (float ***)unaff_EDI;
      local_54 = unaff_EDI;
      local_a4 = (float ***)(*(code *)(*unaff_EDI)[0x42])();
      uVar7 = 0;
      if ((int)local_a4 < 0) {
        pppfStack_58 = (float ***)0x108;
        ppfStack_5c = (float **)&DAT_11002024;
        pppfStack_60 = local_a0;
        uStack_68 = 0x11030be5;
        local_64 = local_a4;
        __vbaHresultCheckObj();
      }
      if ((ppppiVar5[0xf] == (int ***)0x0) || (*(short *)ppppiVar5[0xf] != 1)) {
        pppfStack_58 = (float ***)0x11030c5f;
        local_178 = __vbaGenerateBoundsError();
      }
      else {
        local_a8 = (float *)((int)unaff_BX - (int)ppppiVar5[0xf][5]);
        if (ppppiVar5[0xf][4] <= local_a8) {
          pppfStack_58 = (float ***)0x11030c42;
          __vbaGenerateBoundsError();
        }
        local_178 = (int)local_a8 * 0x14;
      }
      if ((ppppiVar5[0xf] == (int ***)0x0) || (*(short *)ppppiVar5[0xf] != 1)) {
        pppfStack_58 = (float ***)0x11030ccd;
        local_180 = __vbaGenerateBoundsError();
      }
      else {
        local_ac = (float *)((int)unaff_BX - (int)ppppiVar5[0xf][5]);
        if (ppppiVar5[0xf][4] <= local_ac) {
          pppfStack_58 = (float ***)0x11030cb0;
          __vbaGenerateBoundsError();
        }
        local_180 = (int)local_ac * 0x14;
      }
      ppiVar4 = ppppiVar5[0xf][3];
      if (DAT_11033000 == 0) {
        fVar8 = (((float10)(float)local_98 - (float10)(float)ppppiVar5[0x11]) *
                (float10)*(float *)((int)ppppiVar5[0xf][3] + local_180 + 4)) /
                (float10)(float)ppppiVar5[0x11];
      }
      else {
        pppfStack_58 = (float ***)ppppiVar5[0x11];
        ppfStack_5c = (float **)0x11030d14;
        fVar8 = (float10)adj_fdiv_m32();
        ppiVar4 = extraout_ECX_01;
      }
      local_7c = (double)CONCAT44(local_7c._4_4_,
                                  (float)(fVar8 + (float10)*(float *)((int)ppiVar4 + local_178 + 4))
                                 );
      if ((uVar7 & 0xd) != 0) goto LAB_11031580;
      local_84 = (float ***)0x4;
      pppfStack_58 = (float ***)0x11030d3c;
      __vbaChkstk();
      local_54 = (int ****)local_84;
      ppppiStack_50 = local_80;
      ppppfStack_4c = (float ****)(int *****)local_7c;
      pppfStack_48 = (float ***)local_7c._4_4_;
      pppfStack_58 = (float ***)&DAT_110020ac;
      pppfStack_60 = (float ***)0x11030d64;
      ppfStack_5c = (float **)unaff_ESI;
      __vbaLateMemSt();
      pppfStack_48 = (float ***)0x11030d6d;
      __vbaFreeObj();
      local_8 = 0x10;
      pppfStack_48 = (float ***)&stack0xffffffd0;
      ppppiStack_50 = (int ****)0x11030d87;
      ppppfStack_4c = (float ****)ppppiVar5;
      local_9c = (float **)(*(code *)(*ppppiVar5)[499])();
      if ((int)local_9c < 0) {
        ppppiStack_50 = (int ****)0x7cc;
        local_54 = (int ****)&DAT_11001f10;
        pppfStack_60 = (float ***)0x11030db3;
        ppfStack_5c = local_9c;
        pppfStack_58 = (float ***)ppppiVar5;
        __vbaHresultCheckObj();
      }
      ppppiStack_50 = (int ****)&local_98;
      pppfStack_58 = (float ***)0x11030dea;
      local_a0 = (float ***)unaff_EDI;
      local_54 = unaff_EDI;
      local_a4 = (float ***)(*(code *)(*unaff_EDI)[0x40])();
      uVar7 = 0;
      if ((int)local_a4 < 0) {
        pppfStack_58 = (float ***)0x100;
        ppfStack_5c = (float **)&DAT_11002024;
        pppfStack_60 = local_a0;
        uStack_68 = 0x11030e19;
        local_64 = local_a4;
        __vbaHresultCheckObj();
      }
      if ((ppppiVar5[0xf] == (int ***)0x0) || (*(short *)ppppiVar5[0xf] != 1)) {
        pppfStack_58 = (float ***)0x11030e93;
        local_190 = __vbaGenerateBoundsError();
      }
      else {
        local_a8 = (float *)((int)unaff_BX - (int)ppppiVar5[0xf][5]);
        if (ppppiVar5[0xf][4] <= local_a8) {
          pppfStack_58 = (float ***)0x11030e76;
          __vbaGenerateBoundsError();
        }
        local_190 = (int)local_a8 * 0x14;
      }
      if ((ppppiVar5[0xf] == (int ***)0x0) || (*(short *)ppppiVar5[0xf] != 1)) {
        pppfStack_58 = (float ***)0x11030f01;
        local_198 = __vbaGenerateBoundsError();
      }
      else {
        local_ac = (float *)((int)unaff_BX - (int)ppppiVar5[0xf][5]);
        if (ppppiVar5[0xf][4] <= local_ac) {
          pppfStack_58 = (float ***)0x11030ee4;
          __vbaGenerateBoundsError();
        }
        local_198 = (int)local_ac * 0x14;
      }
      ppiVar4 = ppppiVar5[0xf][3];
      if (DAT_11033000 == 0) {
        fVar8 = (((float10)(float)local_98 - (float10)(float)ppppiVar5[0x10]) *
                (float10)*(float *)((int)ppppiVar5[0xf][3] + local_198 + 8)) /
                (float10)(float)ppppiVar5[0x10];
      }
      else {
        pppfStack_58 = (float ***)ppppiVar5[0x10];
        ppfStack_5c = (float **)0x11030f48;
        fVar8 = (float10)adj_fdiv_m32();
        ppiVar4 = extraout_ECX_02;
      }
      local_7c = (double)CONCAT44(local_7c._4_4_,
                                  (float)(fVar8 + (float10)*(float *)((int)ppiVar4 + local_190 + 8))
                                 );
      if ((uVar7 & 0xd) != 0) goto LAB_11031580;
      local_84 = (float ***)0x4;
      pppfStack_58 = (float ***)0x11030f70;
      __vbaChkstk();
      local_54 = (int ****)local_84;
      ppppiStack_50 = local_80;
      ppppfStack_4c = (float ****)(int *****)local_7c;
      pppfStack_48 = (float ***)local_7c._4_4_;
      pppfStack_58 = (float ***)0x110020b4;
      pppfStack_60 = (float ***)0x11030f98;
      ppfStack_5c = (float **)unaff_ESI;
      __vbaLateMemSt();
      pppfStack_48 = (float ***)0x11030fa1;
      __vbaFreeObj();
      local_8 = 0x11;
      pppfStack_48 = (float ***)&stack0xffffffd0;
      ppppiStack_50 = (int ****)0x11030fbb;
      ppppfStack_4c = (float ****)ppppiVar5;
      local_9c = (float **)(*(code *)(*ppppiVar5)[499])();
      if ((int)local_9c < 0) {
        ppppiStack_50 = (int ****)0x7cc;
        local_54 = (int ****)&DAT_11001f10;
        pppfStack_60 = (float ***)0x11030fe7;
        ppfStack_5c = local_9c;
        pppfStack_58 = (float ***)ppppiVar5;
        __vbaHresultCheckObj();
      }
      ppppiStack_50 = (int ****)&local_98;
      pppfStack_58 = (float ***)0x1103101e;
      local_a0 = (float ***)unaff_EDI;
      local_54 = unaff_EDI;
      local_a4 = (float ***)(*(code *)(*unaff_EDI)[0x42])();
      uVar7 = 0;
      if ((int)local_a4 < 0) {
        pppfStack_58 = (float ***)0x108;
        ppfStack_5c = (float **)&DAT_11002024;
        pppfStack_60 = local_a0;
        uStack_68 = 0x1103104d;
        local_64 = local_a4;
        __vbaHresultCheckObj();
      }
      if ((ppppiVar5[0xf] == (int ***)0x0) || (*(short *)ppppiVar5[0xf] != 1)) {
        pppfStack_58 = (float ***)0x110310c7;
        local_1a8 = __vbaGenerateBoundsError();
      }
      else {
        local_a8 = (float *)((int)unaff_BX - (int)ppppiVar5[0xf][5]);
        if (ppppiVar5[0xf][4] <= local_a8) {
          pppfStack_58 = (float ***)0x110310aa;
          __vbaGenerateBoundsError();
        }
        local_1a8 = (int)local_a8 * 0x14;
      }
      if ((ppppiVar5[0xf] == (int ***)0x0) || (*(short *)ppppiVar5[0xf] != 1)) {
        pppfStack_58 = (float ***)0x11031135;
        local_1b0 = __vbaGenerateBoundsError();
      }
      else {
        local_ac = (float *)((int)unaff_BX - (int)ppppiVar5[0xf][5]);
        if (ppppiVar5[0xf][4] <= local_ac) {
          pppfStack_58 = (float ***)0x11031118;
          __vbaGenerateBoundsError();
        }
        local_1b0 = (int)local_ac * 0x14;
      }
      ppiVar4 = ppppiVar5[0xf][3];
      if (DAT_11033000 == 0) {
        fVar8 = (((float10)(float)local_98 - (float10)(float)ppppiVar5[0x11]) *
                (float10)*(float *)((int)ppppiVar5[0xf][3] + local_1b0 + 0xc)) /
                (float10)(float)ppppiVar5[0x11];
      }
      else {
        pppfStack_58 = (float ***)ppppiVar5[0x11];
        ppfStack_5c = (float **)0x1103117c;
        fVar8 = (float10)adj_fdiv_m32();
        ppiVar4 = extraout_ECX_03;
      }
      local_7c = (double)CONCAT44(local_7c._4_4_,
                                  (float)(fVar8 + (float10)*(float *)((int)ppiVar4 + local_1a8 + 0xc
                                                                     )));
      if ((uVar7 & 0xd) != 0) goto LAB_11031580;
      local_84 = (float ***)0x4;
      pppfStack_58 = (float ***)0x110311a4;
      __vbaChkstk();
      local_54 = (int ****)local_84;
      ppppiStack_50 = local_80;
      ppppfStack_4c = (float ****)(int *****)local_7c;
      pppfStack_48 = (float ***)local_7c._4_4_;
      pppfStack_58 = (float ***)0x110020c0;
      pppfStack_60 = (float ***)0x110311cc;
      ppfStack_5c = (float **)unaff_ESI;
      __vbaLateMemSt();
      pppfStack_48 = (float ***)0x110311d5;
      __vbaFreeObj();
      local_8 = 0x12;
      local_8c = *(undefined2 *)(ppppiVar5 + 0x12);
      local_94[0] = 1.54143e-44;
      pppfStack_48 = (float ***)0x0;
      ppppfStack_4c = (float ****)&DAT_110020e4;
      local_54 = (int ****)&local_44;
      pppfStack_58 = (float ***)0x11031209;
      pppfStack_48 = (float ***)__vbaLateMemCallLd();
      ppppfStack_4c = (float ****)&local_54;
      ppppiStack_50 = (int ****)0x11031217;
      rtcUpperCaseVar();
      local_7c = (double)CONCAT44(local_7c._4_4_,&DAT_110020f0);
      local_84 = (float ***)0x8008;
      pppfStack_48 = (float ***)local_94;
      ppppfStack_4c = (float ****)&local_54;
      ppppiStack_50 = (int ****)&local_84;
      local_54 = (int ****)&local_64;
      pppfStack_58 = (float ***)0x1103123e;
      ppppfStack_4c = (float ****)__vbaVarCmpNe();
      ppppiStack_50 = (int ****)local_74;
      local_54 = (int ****)0x11031249;
      pppfStack_48 = (float ***)__vbaVarAnd();
      ppppfStack_4c = (float ****)0x11031250;
      uVar3 = __vbaBoolVarNull();
      local_9c = (float **)CONCAT22(local_9c._2_2_,uVar3);
      pppfStack_48 = (float ***)local_94;
      ppppfStack_4c = (float ****)&local_54;
      ppppiStack_50 = (int ****)&local_44;
      local_54 = (int ****)0x3;
      pppfStack_58 = (float ***)0x1103126e;
      __vbaFreeVarList();
      if ((short)local_9c != 0) {
        local_8 = 0x13;
        pppfStack_48 = (float ***)&stack0xffffffd0;
        ppppiStack_50 = (int ****)0x1103129a;
        ppppfStack_4c = (float ****)ppppiVar5;
        local_9c = (float **)(*(code *)(*ppppiVar5)[499])();
        if ((int)local_9c < 0) {
          ppppiStack_50 = (int ****)0x7cc;
          local_54 = (int ****)&DAT_11001f10;
          pppfStack_60 = (float ***)0x110312c6;
          ppfStack_5c = local_9c;
          pppfStack_58 = (float ***)ppppiVar5;
          __vbaHresultCheckObj();
        }
        ppppiStack_50 = (int ****)&local_98;
        pppfStack_58 = (float ***)0x110312fd;
        local_a0 = (float ***)unaff_EDI;
        local_54 = unaff_EDI;
        local_a4 = (float ***)(*(code *)(*unaff_EDI)[0x40])();
        uVar7 = 0;
        if ((int)local_a4 < 0) {
          pppfStack_58 = (float ***)0x100;
          ppfStack_5c = (float **)&DAT_11002024;
          pppfStack_60 = local_a0;
          uStack_68 = 0x1103132c;
          local_64 = local_a4;
          __vbaHresultCheckObj();
        }
        if ((ppppiVar5[0xf] == (int ***)0x0) || (*(short *)ppppiVar5[0xf] != 1)) {
          pppfStack_58 = (float ***)0x110313a6;
          local_1c0 = __vbaGenerateBoundsError();
        }
        else {
          local_a8 = (float *)((int)unaff_BX - (int)ppppiVar5[0xf][5]);
          if (ppppiVar5[0xf][4] <= local_a8) {
            pppfStack_58 = (float ***)0x11031389;
            __vbaGenerateBoundsError();
          }
          local_1c0 = (int)local_a8 * 0x14;
        }
        if ((ppppiVar5[0xf] == (int ***)0x0) || (*(short *)ppppiVar5[0xf] != 1)) {
          pppfStack_58 = (float ***)0x11031414;
          local_1c8 = __vbaGenerateBoundsError();
        }
        else {
          local_ac = (float *)((int)unaff_BX - (int)ppppiVar5[0xf][5]);
          if (ppppiVar5[0xf][4] <= local_ac) {
            pppfStack_58 = (float ***)0x110313f7;
            __vbaGenerateBoundsError();
          }
          local_1c8 = (int)local_ac * 0x14;
        }
        ppiVar4 = ppppiVar5[0xf][3];
        if (DAT_11033000 == 0) {
          fVar8 = (((float10)(float)local_98 - (float10)(float)ppppiVar5[0x10]) *
                  (float10)*(float *)((int)ppppiVar5[0xf][3] + local_1c8 + 0x10)) /
                  (float10)(float)ppppiVar5[0x10];
        }
        else {
          pppfStack_58 = (float ***)ppppiVar5[0x10];
          ppfStack_5c = (float **)0x1103145b;
          ppiVar4 = (int **)adj_fdiv_m32();
          fVar8 = extraout_ST0_03;
        }
        local_7c = (double)CONCAT44(local_7c._4_4_,
                                    (float)(fVar8 + (float10)*(float *)((int)ppiVar4 +
                                                                       local_1c0 + 0x10)));
        if ((uVar7 & 0xd) != 0) goto LAB_11031580;
        local_84 = (float ***)0x4;
        pppfStack_58 = (float ***)0x11031483;
        __vbaChkstk();
        local_54 = (int ****)local_84;
        ppppiStack_50 = local_80;
        ppppfStack_4c = (float ****)(int *****)local_7c;
        pppfStack_48 = (float ***)local_7c._4_4_;
        pppfStack_58 = (float ***)0x110020d0;
        pppfStack_60 = (float ***)0x110314ab;
        ppfStack_5c = (float **)unaff_ESI;
        __vbaLateMemSt();
        pppfStack_48 = (float ***)0x110314b4;
        __vbaFreeObj();
      }
    }
    else {
      local_8 = 5;
      pppfStack_48 = (float ***)&stack0xffffffd0;
      ppppiStack_50 = (int ****)0x1102fdb0;
      ppppfStack_4c = (float ****)ppppiVar5;
      local_9c = (float **)(*(code *)(*ppppiVar5)[499])();
      if ((int)local_9c < 0) {
        ppppiStack_50 = (int ****)0x7cc;
        local_54 = (int ****)&DAT_11001f10;
        pppfStack_60 = (float ***)0x1102fddc;
        ppfStack_5c = local_9c;
        pppfStack_58 = (float ***)ppppiVar5;
        __vbaHresultCheckObj();
      }
      ppppiStack_50 = (int ****)&local_98;
      pppfStack_58 = (float ***)0x1102fe13;
      local_a0 = (float ***)unaff_EDI;
      local_54 = unaff_EDI;
      local_a4 = (float ***)(*(code *)(*unaff_EDI)[0x40])();
      uVar7 = 0;
      if ((int)local_a4 < 0) {
        pppfStack_58 = (float ***)0x100;
        ppfStack_5c = (float **)&DAT_11002024;
        pppfStack_60 = local_a0;
        uStack_68 = 0x1102fe42;
        local_64 = local_a4;
        __vbaHresultCheckObj();
      }
      if ((ppppiVar5[0xf] == (int ***)0x0) || (*(short *)ppppiVar5[0xf] != 1)) {
        pppfStack_58 = (float ***)0x1102febc;
        local_e8 = __vbaGenerateBoundsError();
      }
      else {
        local_a8 = (float *)((int)unaff_BX - (int)ppppiVar5[0xf][5]);
        if (ppppiVar5[0xf][4] <= local_a8) {
          pppfStack_58 = (float ***)0x1102fe9f;
          __vbaGenerateBoundsError();
        }
        local_e8 = (int)local_a8 * 0x14;
      }
      if ((ppppiVar5[0xf] == (int ***)0x0) || (*(short *)ppppiVar5[0xf] != 1)) {
        pppfStack_58 = (float ***)0x1102ff2a;
        local_f0 = __vbaGenerateBoundsError();
      }
      else {
        local_ac = (float *)((int)unaff_BX - (int)ppppiVar5[0xf][5]);
        if (ppppiVar5[0xf][4] <= local_ac) {
          pppfStack_58 = (float ***)0x1102ff0d;
          __vbaGenerateBoundsError();
        }
        local_f0 = (int)local_ac * 0x14;
      }
      ppiVar4 = ppppiVar5[0xf][3];
      if (DAT_11033000 == 0) {
        fVar8 = (((float10)(float)local_98 - (float10)(float)ppppiVar5[0x10]) *
                (float10)*(float *)((int)ppppiVar5[0xf][3] + local_f0)) /
                (float10)(float)ppppiVar5[0x10];
      }
      else {
        pppfStack_58 = (float ***)ppppiVar5[0x10];
        ppfStack_5c = (float **)0x1102ff70;
        ppiVar4 = (int **)adj_fdiv_m32();
        fVar8 = extraout_ST0;
      }
      local_7c = (double)CONCAT44(local_7c._4_4_,
                                  (float)(fVar8 + (float10)*(float *)((int)ppiVar4 + local_e8)));
      if ((uVar7 & 0xd) != 0) {
LAB_11031580:
        __vbaFPException();
        return;
      }
      local_84 = (float ***)0x4;
      pppfStack_58 = (float ***)0x1102ff97;
      __vbaChkstk();
      local_54 = (int ****)local_84;
      ppppiStack_50 = local_80;
      ppppfStack_4c = (float ****)(int *****)local_7c;
      pppfStack_48 = (float ***)local_7c._4_4_;
      pppfStack_58 = (float ***)&DAT_11002080;
      pppfStack_60 = (float ***)0x1102ffbf;
      ppfStack_5c = (float **)unaff_ESI;
      __vbaLateMemSt();
      pppfStack_48 = (float ***)0x1102ffc8;
      __vbaFreeObj();
      local_8 = 6;
      pppfStack_48 = (float ***)&stack0xffffffd0;
      ppppiStack_50 = (int ****)0x1102ffe2;
      ppppfStack_4c = (float ****)ppppiVar5;
      local_9c = (float **)(*(code *)(*ppppiVar5)[499])();
      if ((int)local_9c < 0) {
        ppppiStack_50 = (int ****)0x7cc;
        local_54 = (int ****)&DAT_11001f10;
        pppfStack_60 = (float ***)0x1103000e;
        ppfStack_5c = local_9c;
        pppfStack_58 = (float ***)ppppiVar5;
        __vbaHresultCheckObj();
      }
      ppppiStack_50 = (int ****)&local_98;
      pppfStack_58 = (float ***)0x11030045;
      local_a0 = (float ***)unaff_EDI;
      local_54 = unaff_EDI;
      local_a4 = (float ***)(*(code *)(*unaff_EDI)[0x40])();
      uVar7 = 0;
      if ((int)local_a4 < 0) {
        pppfStack_58 = (float ***)0x100;
        ppfStack_5c = (float **)&DAT_11002024;
        pppfStack_60 = local_a0;
        uStack_68 = 0x11030074;
        local_64 = local_a4;
        __vbaHresultCheckObj();
      }
      if ((ppppiVar5[0xf] == (int ***)0x0) || (*(short *)ppppiVar5[0xf] != 1)) {
        pppfStack_58 = (float ***)0x110300ee;
        local_100 = __vbaGenerateBoundsError();
      }
      else {
        local_a8 = (float *)((int)unaff_BX - (int)ppppiVar5[0xf][5]);
        if (ppppiVar5[0xf][4] <= local_a8) {
          pppfStack_58 = (float ***)0x110300d1;
          __vbaGenerateBoundsError();
        }
        local_100 = (int)local_a8 * 0x14;
      }
      if ((ppppiVar5[0xf] == (int ***)0x0) || (*(short *)ppppiVar5[0xf] != 1)) {
        pppfStack_58 = (float ***)0x1103015c;
        local_108 = __vbaGenerateBoundsError();
      }
      else {
        local_ac = (float *)((int)unaff_BX - (int)ppppiVar5[0xf][5]);
        if (ppppiVar5[0xf][4] <= local_ac) {
          pppfStack_58 = (float ***)0x1103013f;
          __vbaGenerateBoundsError();
        }
        local_108 = (int)local_ac * 0x14;
      }
      ppiVar4 = ppppiVar5[0xf][3];
      if (DAT_11033000 == 0) {
        fVar8 = (((float10)(float)local_98 - (float10)(float)ppppiVar5[0x10]) *
                (float10)*(float *)((int)ppppiVar5[0xf][3] + local_108 + 8)) /
                (float10)(float)ppppiVar5[0x10];
      }
      else {
        pppfStack_58 = (float ***)ppppiVar5[0x10];
        ppfStack_5c = (float **)0x110301a3;
        ppiVar4 = (int **)adj_fdiv_m32();
        fVar8 = extraout_ST0_00;
      }
      local_7c = (double)CONCAT44(local_7c._4_4_,
                                  (float)(fVar8 + (float10)*(float *)((int)ppiVar4 + local_100 + 8))
                                 );
      if ((uVar7 & 0xd) != 0) goto LAB_11031580;
      local_84 = (float ***)0x4;
      pppfStack_58 = (float ***)0x110301cb;
      __vbaChkstk();
      local_54 = (int ****)local_84;
      ppppiStack_50 = local_80;
      ppppfStack_4c = (float ****)(int *****)local_7c;
      pppfStack_48 = (float ***)local_7c._4_4_;
      pppfStack_58 = (float ***)&DAT_11002090;
      pppfStack_60 = (float ***)0x110301f3;
      ppfStack_5c = (float **)unaff_ESI;
      __vbaLateMemSt();
      pppfStack_48 = (float ***)0x110301fc;
      __vbaFreeObj();
      local_8 = 7;
      pppfStack_48 = (float ***)&stack0xffffffd0;
      ppppiStack_50 = (int ****)0x11030216;
      ppppfStack_4c = (float ****)ppppiVar5;
      local_9c = (float **)(*(code *)(*ppppiVar5)[499])();
      if ((int)local_9c < 0) {
        ppppiStack_50 = (int ****)0x7cc;
        local_54 = (int ****)&DAT_11001f10;
        pppfStack_60 = (float ***)0x11030242;
        ppfStack_5c = local_9c;
        pppfStack_58 = (float ***)ppppiVar5;
        __vbaHresultCheckObj();
      }
      ppppiStack_50 = (int ****)&local_98;
      pppfStack_58 = (float ***)0x11030279;
      local_a0 = (float ***)unaff_EDI;
      local_54 = unaff_EDI;
      local_a4 = (float ***)(*(code *)(*unaff_EDI)[0x42])();
      uVar7 = 0;
      if ((int)local_a4 < 0) {
        pppfStack_58 = (float ***)0x108;
        ppfStack_5c = (float **)&DAT_11002024;
        pppfStack_60 = local_a0;
        uStack_68 = 0x110302a8;
        local_64 = local_a4;
        __vbaHresultCheckObj();
      }
      if ((ppppiVar5[0xf] == (int ***)0x0) || (*(short *)ppppiVar5[0xf] != 1)) {
        pppfStack_58 = (float ***)0x11030322;
        local_118 = __vbaGenerateBoundsError();
      }
      else {
        local_a8 = (float *)((int)unaff_BX - (int)ppppiVar5[0xf][5]);
        if (ppppiVar5[0xf][4] <= local_a8) {
          pppfStack_58 = (float ***)0x11030305;
          __vbaGenerateBoundsError();
        }
        local_118 = (int)local_a8 * 0x14;
      }
      if ((ppppiVar5[0xf] == (int ***)0x0) || (*(short *)ppppiVar5[0xf] != 1)) {
        pppfStack_58 = (float ***)0x11030390;
        local_120 = __vbaGenerateBoundsError();
      }
      else {
        local_ac = (float *)((int)unaff_BX - (int)ppppiVar5[0xf][5]);
        if (ppppiVar5[0xf][4] <= local_ac) {
          pppfStack_58 = (float ***)0x11030373;
          __vbaGenerateBoundsError();
        }
        local_120 = (int)local_ac * 0x14;
      }
      ppiVar4 = ppppiVar5[0xf][3];
      if (DAT_11033000 == 0) {
        fVar8 = (((float10)(float)local_98 - (float10)(float)ppppiVar5[0x11]) *
                (float10)*(float *)((int)ppppiVar5[0xf][3] + local_120 + 4)) /
                (float10)(float)ppppiVar5[0x11];
      }
      else {
        pppfStack_58 = (float ***)ppppiVar5[0x11];
        ppfStack_5c = (float **)0x110303d7;
        ppiVar4 = (int **)adj_fdiv_m32();
        fVar8 = extraout_ST0_01;
      }
      local_7c = (double)CONCAT44(local_7c._4_4_,
                                  (float)(fVar8 + (float10)*(float *)((int)ppiVar4 + local_118 + 4))
                                 );
      if ((uVar7 & 0xd) != 0) goto LAB_11031580;
      local_84 = (float ***)0x4;
      pppfStack_58 = (float ***)0x110303ff;
      __vbaChkstk();
      local_54 = (int ****)local_84;
      ppppiStack_50 = local_80;
      ppppfStack_4c = (float ****)(int *****)local_7c;
      pppfStack_48 = (float ***)local_7c._4_4_;
      pppfStack_58 = (float ***)&DAT_11002088;
      pppfStack_60 = (float ***)0x11030427;
      ppfStack_5c = (float **)unaff_ESI;
      __vbaLateMemSt();
      pppfStack_48 = (float ***)0x11030430;
      __vbaFreeObj();
      local_8 = 8;
      pppfStack_48 = (float ***)&stack0xffffffd0;
      ppppiStack_50 = (int ****)0x1103044a;
      ppppfStack_4c = (float ****)ppppiVar5;
      local_9c = (float **)(*(code *)(*ppppiVar5)[499])();
      if ((int)local_9c < 0) {
        ppppiStack_50 = (int ****)0x7cc;
        local_54 = (int ****)&DAT_11001f10;
        pppfStack_60 = (float ***)0x11030476;
        ppfStack_5c = local_9c;
        pppfStack_58 = (float ***)ppppiVar5;
        __vbaHresultCheckObj();
      }
      ppppiStack_50 = (int ****)&local_98;
      pppfStack_58 = (float ***)0x110304ad;
      local_a0 = (float ***)unaff_EDI;
      local_54 = unaff_EDI;
      local_a4 = (float ***)(*(code *)(*unaff_EDI)[0x42])();
      uVar7 = 0;
      if ((int)local_a4 < 0) {
        pppfStack_58 = (float ***)0x108;
        ppfStack_5c = (float **)&DAT_11002024;
        pppfStack_60 = local_a0;
        uStack_68 = 0x110304dc;
        local_64 = local_a4;
        __vbaHresultCheckObj();
      }
      if ((ppppiVar5[0xf] == (int ***)0x0) || (*(short *)ppppiVar5[0xf] != 1)) {
        pppfStack_58 = (float ***)0x11030556;
        local_130 = __vbaGenerateBoundsError();
      }
      else {
        local_a8 = (float *)((int)unaff_BX - (int)ppppiVar5[0xf][5]);
        if (ppppiVar5[0xf][4] <= local_a8) {
          pppfStack_58 = (float ***)0x11030539;
          __vbaGenerateBoundsError();
        }
        local_130 = (int)local_a8 * 0x14;
      }
      if ((ppppiVar5[0xf] == (int ***)0x0) || (*(short *)ppppiVar5[0xf] != 1)) {
        pppfStack_58 = (float ***)0x110305c4;
        local_138 = __vbaGenerateBoundsError();
      }
      else {
        local_ac = (float *)((int)unaff_BX - (int)ppppiVar5[0xf][5]);
        if (ppppiVar5[0xf][4] <= local_ac) {
          pppfStack_58 = (float ***)0x110305a7;
          __vbaGenerateBoundsError();
        }
        local_138 = (int)local_ac * 0x14;
      }
      ppiVar4 = ppppiVar5[0xf][3];
      if (DAT_11033000 == 0) {
        fVar8 = (((float10)(float)local_98 - (float10)(float)ppppiVar5[0x11]) *
                (float10)*(float *)((int)ppppiVar5[0xf][3] + local_138 + 0xc)) /
                (float10)(float)ppppiVar5[0x11];
      }
      else {
        pppfStack_58 = (float ***)ppppiVar5[0x11];
        ppfStack_5c = (float **)0x1103060b;
        ppiVar4 = (int **)adj_fdiv_m32();
        fVar8 = extraout_ST0_02;
      }
      local_7c = (double)CONCAT44(local_7c._4_4_,
                                  (float)(fVar8 + (float10)*(float *)((int)ppiVar4 + local_130 + 0xc
                                                                     )));
      if ((uVar7 & 0xd) != 0) goto LAB_11031580;
      local_84 = (float ***)0x4;
      pppfStack_58 = (float ***)0x11030633;
      __vbaChkstk();
      local_54 = (int ****)local_84;
      ppppiStack_50 = local_80;
      ppppfStack_4c = (float ****)(int *****)local_7c;
      pppfStack_48 = (float ***)local_7c._4_4_;
      pppfStack_58 = (float ***)&DAT_11002098;
      pppfStack_60 = (float ***)0x1103065b;
      ppfStack_5c = (float **)unaff_ESI;
      __vbaLateMemSt();
      pppfStack_48 = (float ***)0x11030664;
      __vbaFreeObj();
    }
    local_8 = 0x16;
    bVar6 = SCARRY2(unaff_BX,1);
    unaff_BX = unaff_BX + 1;
    if (bVar6) {
      pppfStack_48 = (float ***)0x1103158b;
      __vbaErrorOverflow();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    local_8 = 0x17;
    pppfStack_48 = (float ***)&stack0xffffffd4;
    ppppfStack_4c = (float ****)local_b4;
    ppppiStack_50 = (int ****)&DAT_11002060;
    local_54 = (int ****)0x110314ea;
    local_cc = __vbaNextEachCollObj();
  } while( true );
}


// ---- FUN_11031590 @ 11031590

void __cdecl FUN_11031590(uint param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_110012a6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffc8;
  local_c = &DAT_11001228;
  local_8 = param_1 & 1;
  piVar4 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar4 + 4))(piVar4);
  local_1c = 0;
  uVar1 = (**(code **)(*piVar4 + 0x3a8))(piVar4);
  piVar2 = (int *)__vbaObjSet(&local_1c,uVar1);
  iVar3 = (**(code **)(*piVar2 + 100))(piVar2,0);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_11002044,100);
  }
  __vbaFreeObj();
  uVar1 = (**(code **)(*piVar4 + 0x3a8))(piVar4);
  piVar2 = (int *)__vbaObjSet(&local_1c,uVar1);
  iVar3 = (**(code **)(*piVar2 + 0x6c))(piVar2,0);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_11002044,0x6c);
  }
  __vbaFreeObj();
  return;
}


// ---- FUN_11031690 @ 11031690

undefined4 FUN_11031690(uint param_1)

{
  int iVar1;
  int *piVar2;
  void *local_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_110012a6;
  local_18 = ExceptionList;
  local_10 = &stack0xffffffd0;
  local_c = &DAT_11001238;
  local_8 = param_1 & 1;
  piVar2 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &local_18;
  (**(code **)(*piVar2 + 4))(piVar2);
  iVar1 = (**(code **)(*piVar2 + 0x7a4))(piVar2);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar2,&DAT_11001f10,0x7a4);
  }
  *(undefined2 *)(piVar2 + 0x12) = 0xffff;
  local_8 = 0;
  (**(code **)(*piVar2 + 8))(piVar2);
  ExceptionList = local_18;
  return local_8;
}


// ---- FUN_11031720 @ 11031720

void __cdecl FUN_11031720(uint param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined2 uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined4 local_34;
  undefined4 local_2c;
  undefined4 local_28 [4];
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_110012a6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffac;
  local_c = &DAT_11001240;
  local_8 = param_1 & 1;
  piVar4 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar4 + 4))(piVar4);
  piVar1 = (int *)*param_2;
  local_28[0] = 0;
  piVar5 = piVar1;
  iVar3 = (**(code **)(*piVar1 + 0x1c))
                    (piVar1,L"ResizeFont",0xb,local_34,0xffffffff,local_2c,local_28);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar1,&DAT_11002114,0x1c);
  }
  uVar2 = __vbaBoolVar(local_28);
  *(undefined2 *)(piVar4 + 0x12) = uVar2;
  __vbaFreeVar(piVar5);
  return;
}


// ---- FUN_11031800 @ 11031800

void __cdecl FUN_11031800(uint param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 local_20;
  undefined4 local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_110012a6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffc0;
  local_c = &DAT_11001250;
  local_8 = param_1 & 1;
  piVar4 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar4 + 4))(piVar4);
  local_1c = 0;
  local_20 = 0;
  uVar1 = (**(code **)(*piVar4 + 0x3a8))(piVar4);
  piVar2 = (int *)__vbaObjSet(&local_1c,uVar1);
  iVar3 = (**(code **)(*(int *)piVar4[4] + 0x80))((int *)piVar4[4],&local_20);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar4[4],&DAT_11001ee0,0x80);
  }
  iVar3 = (**(code **)(*piVar2 + 0x74))(piVar2,local_20);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_11002044,0x74);
  }
  __vbaFreeObj();
  uVar1 = (**(code **)(*piVar4 + 0x3a8))(piVar4);
  piVar2 = (int *)__vbaObjSet(&local_1c,uVar1);
  iVar3 = (**(code **)(*(int *)piVar4[4] + 0x88))((int *)piVar4[4],&local_20);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar4[4],&DAT_11001ee0,0x88);
  }
  iVar3 = (**(code **)(*piVar2 + 0x7c))(piVar2,local_20);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_11002044,0x7c);
  }
  __vbaFreeObj();
  return;
}


// ---- FUN_11031960 @ 11031960

undefined4 FUN_11031960(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 local_34;
  undefined4 local_2c;
  undefined4 local_24;
  undefined4 local_1c;
  void *local_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_110012a6;
  local_18 = ExceptionList;
  local_10 = &stack0xffffffa8;
  local_c = &DAT_11001260;
  local_8 = 0;
  ExceptionList = &local_18;
  (**(code **)(*param_1 + 4))(param_1);
  iVar2 = __vbaAptOffset(&DAT_11001dd4);
  if (*(int *)(&DAT_11033024 + iVar2) == 0) {
    __vbaNew2(&DAT_11001690,&DAT_11033024 + iVar2);
  }
  piVar1 = *(int **)(&DAT_11033024 + iVar2);
  iVar2 = (**(code **)(*piVar1 + 0x2b0))
                    (piVar1,3,local_24,1,local_1c,10,local_34,0x80020004,local_2c);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar1,&DAT_11002124,0x2b0);
  }
  (**(code **)(*param_1 + 8))(param_1);
  ExceptionList = local_18;
  return local_8;
}


// ---- FUN_11031a50 @ 11031a50

undefined4 FUN_11031a50(int *param_1,undefined2 *param_2)

{
  int iVar1;
  void *local_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_110012a6;
  local_18 = ExceptionList;
  local_10 = &stack0xffffffd0;
  local_c = &DAT_11001268;
  local_8 = 0;
  ExceptionList = &local_18;
  (**(code **)(*param_1 + 4))(param_1);
  iVar1 = param_1[0x12];
  (**(code **)(*param_1 + 8))(param_1);
  *param_2 = (short)iVar1;
  ExceptionList = local_18;
  return local_8;
}


// ---- FUN_11031ac0 @ 11031ac0

undefined4 FUN_11031ac0(int *param_1,undefined2 param_2)

{
  int iVar1;
  undefined4 local_24;
  undefined4 local_1c;
  void *local_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_110012a6;
  local_18 = ExceptionList;
  local_10 = &stack0xffffffc0;
  local_c = &DAT_11001270;
  local_8 = 0;
  ExceptionList = &local_18;
  (**(code **)(*param_1 + 4))(param_1);
  *(undefined2 *)(param_1 + 0x12) = param_2;
  iVar1 = (**(code **)(*param_1 + 0x390))(param_1,8,local_24,L"ResizeFont",local_1c);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,param_1,&DAT_11001ee0,0x390);
  }
  (**(code **)(*param_1 + 8))(param_1);
  ExceptionList = local_18;
  return local_8;
}


// ---- FUN_11031b70 @ 11031b70

undefined4 FUN_11031b70(uint param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined4 local_34;
  undefined4 local_2c;
  undefined4 local_24;
  undefined4 local_1c;
  void *local_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_110012a6;
  local_18 = ExceptionList;
  local_10 = &stack0xffffffac;
  local_c = &DAT_11001278;
  local_8 = param_1 & 1;
  piVar3 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &local_18;
  (**(code **)(*piVar3 + 4))(piVar3);
  piVar1 = (int *)*param_2;
  piVar4 = piVar1;
  iVar2 = (**(code **)(*piVar1 + 0x20))
                    (piVar1,L"ResizeFont",0xb,local_24,(short)piVar3[0x12],local_1c,0xb,local_34,
                     0xffffffff,local_2c);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar1,&DAT_11002114,0x20);
  }
  __vbaFreeVar(piVar4);
  local_8 = 0;
  (**(code **)(*piVar3 + 8))(piVar3);
  ExceptionList = local_18;
  return local_8;
}


// ---- FUN_11031c50 @ 11031c50

void __cdecl FUN_11031c50(uint param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_110012a6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffc0;
  local_c = &DAT_11001280;
  local_8 = param_1 & 1;
  piVar4 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar4 + 4))(piVar4);
  local_1c = 0;
  iVar2 = __vbaAptOffset(&DAT_11001dd4);
  if (*(int *)(&DAT_1103333c + iVar2) == 0) {
    __vbaNew2(&DAT_11002360,&DAT_1103333c + iVar2);
  }
  piVar1 = *(int **)(&DAT_1103333c + iVar2);
  iVar2 = *piVar1;
  uVar3 = __vbaObjSetAddref(&local_1c,piVar4);
  iVar2 = (**(code **)(iVar2 + 0x10))(piVar1,uVar3);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar1,&DAT_11002350,0x10);
  }
  __vbaFreeObj();
  return;
}


// ---- FUN_11031d30 @ 11031d30

void __cdecl FUN_11031d30(uint param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_110012a6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffc0;
  local_c = &DAT_11001290;
  local_8 = param_1 & 1;
  piVar4 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar4 + 4))(piVar4);
  local_1c = 0;
  iVar2 = __vbaAptOffset(&DAT_11001dd4);
  if (*(int *)(&DAT_1103333c + iVar2) == 0) {
    __vbaNew2(&DAT_11002360,&DAT_1103333c + iVar2);
  }
  piVar1 = *(int **)(&DAT_1103333c + iVar2);
  iVar2 = *piVar1;
  uVar3 = __vbaObjSetAddref(&local_1c,piVar4);
  iVar2 = (**(code **)(iVar2 + 0x10))(piVar1,uVar3);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar1,&DAT_11002350,0x10);
  }
  __vbaFreeObj();
  return;
}


