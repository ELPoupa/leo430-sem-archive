// Decompiled with Ghidra from Pchute20.dll
// Format: Portable Executable (PE), image base 11000000

// ---- DllFunctionCall @ 11001760

void DllFunctionCall(void)

{
                    /* WARNING: Could not recover jumptable at 0x11001760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DllFunctionCall();
  return;
}


// ---- VBDllUnRegisterServer @ 11001958

void VBDllUnRegisterServer(void)

{
                    /* WARNING: Could not recover jumptable at 0x11001958. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  VBDllUnRegisterServer();
  return;
}


// ---- VBDllGetClassObject @ 1100195e

void VBDllGetClassObject(void)

{
                    /* WARNING: Could not recover jumptable at 0x1100195e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  VBDllGetClassObject();
  return;
}


// ---- VBDllRegisterServer @ 11001964

void VBDllRegisterServer(void)

{
                    /* WARNING: Could not recover jumptable at 0x11001964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  VBDllRegisterServer();
  return;
}


// ---- VBDllCanUnloadNow @ 1100196a

void VBDllCanUnloadNow(void)

{
                    /* WARNING: Could not recover jumptable at 0x1100196a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  VBDllCanUnloadNow();
  return;
}


// ---- UserDllMain @ 11001970

void UserDllMain(void)

{
                    /* WARNING: Could not recover jumptable at 0x11001970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UserDllMain();
  return;
}


// ---- entry @ 11001978

void entry(void)

{
  UserDllMain(&DAT_11010668);
  return;
}


// ---- FUN_11002d0c @ 11002d0c

void FUN_11002d0c(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  if (DAT_110103ac != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x11002d15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_110103ac)();
    return;
  }
  UNRECOVERED_JUMPTABLE = (code *)DllFunctionCall(&PTR_s_kernel32_11002cf4);
                    /* WARNING: Could not recover jumptable at 0x11002d23. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


// ---- DllUnregisterServer @ 11005360

void DllUnregisterServer(void)

{
                    /* 0x5360  4  DllUnregisterServer */
  VBDllUnRegisterServer(&DAT_11010668,&DAT_11010664);
  return;
}


// ---- DllGetClassObject @ 11005376

HRESULT DllGetClassObject(IID *rclsid,IID *riid,LPVOID *ppv)

{
  HRESULT HVar1;
  
                    /* 0x5376  2  DllGetClassObject */
  HVar1 = VBDllGetClassObject(&DAT_11010668,&DAT_11010664);
  return HVar1;
}


// ---- DllRegisterServer @ 1100538c

void DllRegisterServer(void)

{
                    /* 0x538c  3  DllRegisterServer */
  VBDllRegisterServer(&DAT_11010668,&DAT_11010664);
  return;
}


// ---- DllCanUnloadNow @ 110053a2

HRESULT DllCanUnloadNow(void)

{
  HRESULT HVar1;
  
                    /* 0x53a2  1  DllCanUnloadNow */
  HVar1 = VBDllCanUnloadNow();
  return HVar1;
}


// ---- FUN_11005760 @ 11005760

void __cdecl FUN_11005760(int *param_1)

{
  short sVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined4 local_130 [2];
  wchar_t *local_128;
  undefined4 local_120;
  undefined4 local_110;
  undefined4 local_100;
  undefined4 local_f0;
  undefined4 local_e0;
  undefined4 local_d8;
  undefined4 local_d0 [2];
  undefined4 local_c8;
  undefined4 local_c0 [2];
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_84 [4];
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_4c;
  undefined4 local_3c;
  undefined4 local_38;
  wchar_t local_34 [10];
  void *pvStack_20;
  undefined1 *puStack_1c;
  undefined1 *local_18;
  undefined *local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  puStack_1c = &LAB_110016d6;
  pvStack_20 = ExceptionList;
  local_18 = &stack0xfffffe38;
  local_14 = &DAT_110011f0;
  local_10 = 0;
  local_c = 0;
  ExceptionList = &pvStack_20;
  piVar4 = param_1;
  (**(code **)(*param_1 + 4))(param_1);
  local_34[2] = L'\0';
  local_34[3] = L'\0';
  local_34[0] = L'\0';
  local_34[1] = L'\0';
  local_38 = 0;
  local_3c = 0;
  local_4c = 0;
  local_5c = 0;
  local_60 = 0;
  local_70 = 0;
  local_74 = 0;
  local_84[0] = 0;
  local_98 = 0;
  local_9c = 0;
  local_a0 = 0;
  local_a4 = 0;
  local_a8 = 0;
  local_ac = 0;
  local_b0 = 0;
  local_c0[0] = 0;
  local_d0[0] = 0;
  local_e0 = 0;
  local_f0 = 0;
  local_100 = 0;
  local_110 = 0;
  local_120 = 0;
  local_130[0] = 0;
  __vbaOnError(1);
  rtcGetDateVar(local_c0);
  __vbaVarMove();
  local_128 = L"mmddyy";
  local_130[0] = 8;
  __vbaVarDup();
  rtcVarFromFormatVar(local_d0,local_84,local_c0,1,1);
  __vbaStrVarMove(local_d0);
  __vbaStrMove();
  __vbaFreeVarList(2,local_c0,local_d0);
  piVar3 = param_1 + 0x29;
  __vbaStrCopy(piVar4);
  local_b8 = 2;
  local_c0[0] = 2;
  local_130[0] = 0x4008;
  local_128 = (wchar_t *)piVar3;
  rtcMidCharVar(local_d0,local_130,1);
  __vbaVarMove();
  __vbaFreeVar();
  local_b8 = 2;
  local_c0[0] = 2;
  local_130[0] = 0x4008;
  local_128 = (wchar_t *)piVar3;
  rtcMidCharVar(local_d0,local_130);
  __vbaVarMove();
  __vbaFreeVar();
  local_b8 = 2;
  local_c0[0] = 2;
  local_130[0] = 0x4008;
  local_128 = (wchar_t *)piVar3;
  rtcMidCharVar(local_d0);
  __vbaStrVarMove();
  __vbaStrMove();
  __vbaFreeVarList();
  local_128 = L"_";
  local_130[0] = 8;
  __vbaVarCat();
  __vbaVarCat();
  __vbaVarCat();
  __vbaVarCat();
  __vbaStrVarMove();
  __vbaStrMove();
  __vbaStrCopy();
  __vbaFreeStr();
  __vbaFreeVarList();
  iVar2 = (**(code **)(*param_1 + 0x158))();
  if (iVar2 < 0) {
    __vbaHresultCheckObj();
  }
  __vbaStrCat();
  __vbaStrMove();
  __vbaStrCat();
  __vbaStrMove();
  __vbaStrCat();
  __vbaStrMove();
  __vbaStrCat();
  __vbaStrMove();
  __vbaFreeStrList();
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  local_128 = L"C:\\Backups";
  local_130[0] = 8;
  __vbaVarCopy();
  __vbaStrVarVal();
  rtcChangeDir();
  __vbaFreeStr();
  local_128 = L"\\";
  local_130[0] = 8;
  __vbaVarCat();
  __vbaVarCat();
  __vbaStrVarMove();
  __vbaStrMove();
  __vbaFreeVarList();
  local_128 = (wchar_t *)&local_74;
  local_130[0] = 0x4008;
  local_b8 = rtcDir();
  local_c0[0] = 8;
  __vbaVarMove();
  __vbaStrCopy();
  local_128 = (wchar_t *)param_1[0x29];
  local_130[0] = 0x8008;
  sVar1 = __vbaVarTstEq();
  if (sVar1 == 0) {
    rtcMakeDir();
  }
  else {
    __vbaStrCopy();
    __vbaStrI4();
    __vbaStrMove();
    __vbaStrCat();
    __vbaStrMove();
    local_b8 = __vbaStrCat();
    local_c0[0] = 8;
    __vbaVarMove();
    __vbaFreeStr();
    local_c8 = 0x80020004;
    local_d0[0] = 10;
    local_b8 = 0x80020004;
    local_c0[0] = 10;
    local_128 = (wchar_t *)(param_1 + 0x50);
    local_130[0] = 0x4008;
    __vbaI4Str();
    iVar2 = rtcMsgBox();
    __vbaFreeVarList();
    if (iVar2 == 7) goto LAB_11006bb9;
  }
  rtcRightCharBstr();
  __vbaStrMove();
  iVar2 = __vbaStrCmp();
  __vbaFreeStr();
  if (iVar2 != 0) {
    __vbaStrCat();
    __vbaStrMove();
    __vbaStrCopy();
    __vbaFreeStr();
  }
  rtcChangeDir();
  iVar2 = __vbaStrCmp();
  if ((((iVar2 == 0) && ((short)param_1[0xe] == -1)) ||
      ((iVar2 = __vbaStrCmp(), iVar2 == 0 && (*(short *)((int)param_1 + 0x3a) == -1)))) ||
     ((iVar2 = __vbaStrCmp(), iVar2 == 0 && ((short)param_1[0xf] == -1)))) {
    local_d8 = 0x80020004;
    local_e0 = 10;
    local_c8 = 0x80020004;
    local_d0[0] = 10;
    local_b8 = 0x80020004;
    local_c0[0] = 10;
    local_128 = local_34;
    local_130[0] = 0x4008;
    rtcMsgBox();
    __vbaFreeVarList();
    goto LAB_11006bb9;
  }
  if ((short)param_1[0xe] == -1) {
    iVar2 = (**(code **)(*param_1 + 0x150))();
    if (iVar2 < 0) {
      __vbaHresultCheckObj();
    }
    __vbaFreeVar();
  }
  *(undefined2 *)(param_1 + 0x3c) = 0xffff;
  (**(code **)(*param_1 + 0x164))();
  sVar1 = __vbaBoolStr();
  __vbaFreeStr();
  if (sVar1 == 0) {
    local_128 = L"LEO_USER.MDB";
LAB_11005ff8:
    local_130[0] = 8;
    __vbaVarCopy();
    local_d8 = 0x80020004;
    local_e0 = 10;
    local_c8 = 0x80020004;
    local_d0[0] = 10;
    local_b8 = 0x80020004;
    local_c0[0] = 10;
    local_128 = local_34;
    local_130[0] = 0x4008;
  }
  else {
    __vbaStrCat();
    __vbaStrMove();
    rtcFileCopy();
    __vbaFreeStr();
    (**(code **)(*param_1 + 0x170))();
    sVar1 = __vbaBoolStr();
    __vbaFreeStr();
    if (sVar1 == 0) {
      local_128 = L"SYSTEM.MDA";
      goto LAB_11005ff8;
    }
    __vbaStrCat();
    __vbaStrMove();
    rtcFileCopy();
    __vbaFreeStr();
    (**(code **)(*param_1 + 0x168))();
    sVar1 = __vbaBoolStr();
    __vbaFreeStr();
    if (sVar1 != 0) {
      __vbaStrCat();
      __vbaStrMove();
      rtcFileCopy();
      __vbaFreeStr();
    }
    (**(code **)(*param_1 + 0x17c))();
    sVar1 = __vbaBoolStr();
    __vbaFreeStr();
    if (sVar1 == 0) {
      __vbaStrCat();
      __vbaStrMove();
      rtcFileCopy();
      __vbaFreeStr();
      local_128 = L"ACCESS.LEO";
      local_130[0] = 8;
      __vbaVarCopy();
      local_d8 = 0x80020004;
      local_e0 = 10;
      local_c8 = 0x80020004;
      local_d0[0] = 10;
      local_b8 = 0x80020004;
      local_c0[0] = 10;
      local_128 = local_34;
      local_130[0] = 0x4008;
      rtcMsgBox();
      __vbaFreeVarList();
      goto LAB_11006bb9;
    }
    __vbaStrCat();
    __vbaStrMove();
    rtcFileCopy();
    __vbaFreeStr();
    (**(code **)(*param_1 + 0x16c))();
    sVar1 = __vbaBoolStr();
    __vbaFreeStr();
    if (sVar1 == 0) {
      local_128 = L"CONFIG.LEO";
LAB_1100645e:
      local_130[0] = 8;
      __vbaVarCopy();
      local_d8 = 0x80020004;
      local_e0 = 10;
      local_c8 = 0x80020004;
      local_d0[0] = 10;
      local_b8 = 0x80020004;
      local_c0[0] = 10;
      local_128 = local_34;
      local_130[0] = 0x4008;
      rtcMsgBox();
      __vbaFreeVarList();
      goto LAB_11006bb9;
    }
    __vbaStrCat();
    __vbaStrMove();
    rtcFileCopy();
    __vbaFreeStr();
    (**(code **)(*param_1 + 0x174))();
    sVar1 = __vbaBoolStr();
    __vbaFreeStr();
    if (sVar1 == 0) {
      local_128 = L"DATA.VAC";
      goto LAB_1100645e;
    }
    __vbaStrCat();
    __vbaStrMove();
    rtcFileCopy();
    __vbaFreeStr();
    (**(code **)(*param_1 + 0x178))();
    sVar1 = __vbaBoolStr();
    __vbaFreeStr();
    if (sVar1 == 0) {
      local_128 = L"L500.INI";
      goto LAB_1100645e;
    }
    __vbaStrCat();
    __vbaStrMove();
    rtcFileCopy();
    __vbaFreeStr();
    local_128 = L"The file ";
    local_130[0] = 8;
    __vbaVarCat();
    __vbaVarCat();
    __vbaVarCat();
    __vbaVarCat();
    __vbaVarCat();
    __vbaVarCat();
    __vbaVarCat();
    __vbaStrVarMove();
    __vbaStrMove();
    __vbaFreeVarList(7,local_c0);
    __vbaStrCopy();
    rtcSaveSetting();
    if (*(short *)((int)param_1 + 0x36) == -1) {
      __vbaStrCat();
      __vbaStrMove();
      __vbaFileOpen();
      __vbaFreeStr();
      __vbaPrintFile();
      __vbaFileClose();
    }
    __vbaStrVarVal();
    rtcSaveSetting();
    __vbaFreeStr();
    piVar3 = param_1 + 0x4e;
    __vbaNew();
    __vbaObjSet();
    __vbaObjSetAddref();
    __vbaFreeObj();
    if ((*(short *)((int)param_1 + 0x36) == -1) &&
       (iVar2 = (**(code **)(*(int *)*piVar3 + 0x68))(), iVar2 < 0)) {
      __vbaHresultCheckObj();
    }
    iVar2 = (**(code **)(*(int *)*piVar3 + 0x58))();
    if (iVar2 < 0) {
      __vbaHresultCheckObj();
    }
    iVar2 = __vbaStrCmp();
    if (iVar2 != 0) {
      local_128 = (wchar_t *)param_1[0x36];
      local_130[0] = 8;
      __vbaVarDup();
      iVar2 = (**(code **)(*(int *)*piVar3 + 0x30))();
      if (iVar2 < 0) {
        __vbaHresultCheckObj();
      }
      __vbaFreeVar();
    }
    if ((short)param_1[0xf] == -1) {
      iVar2 = (**(code **)(*(int *)*piVar3 + 0x70))();
      if (iVar2 < 0) {
        __vbaHresultCheckObj();
      }
      iVar2 = *(int *)*piVar3;
      __vbaStrVarVal();
      iVar2 = (**(code **)(iVar2 + 0x50))();
      if (iVar2 < 0) {
        __vbaHresultCheckObj();
      }
      __vbaFreeStr();
    }
    piVar3 = param_1 + 0x4e;
    iVar2 = (**(code **)(*(int *)*piVar3 + 0x74))();
    if (iVar2 < 0) {
      __vbaHresultCheckObj();
    }
    __vbaCastObj();
    __vbaObjSet();
    __vbaObjSetAddref();
    __vbaFreeObj();
    if ((short)param_1[0xf] == -1) {
      __vbaNew();
      __vbaObjSet();
      __vbaObjSetAddref();
      __vbaFreeObj();
      iVar2 = (**(code **)(*(int *)*piVar3 + 0x70))();
      if (iVar2 < 0) {
        __vbaHresultCheckObj(iVar2,*piVar3);
      }
      __vbaCastObj();
      __vbaObjSet();
      __vbaObjSetAddref();
      __vbaFreeObj();
      __vbaStrCopy();
      iVar2 = (**(code **)(*param_1 + 0x14c))();
      if (iVar2 < 0) {
        __vbaHresultCheckObj();
      }
      goto LAB_11006bb9;
    }
    if ((short)param_1[0xe] == -1) {
      iVar2 = (**(code **)(*param_1 + 0x144))();
      if (iVar2 < 0) {
        __vbaHresultCheckObj();
      }
      goto LAB_11006bb9;
    }
    if (*(short *)((int)param_1 + 0x3a) == -1) {
      iVar2 = (**(code **)(*param_1 + 0x148))();
      if (iVar2 < 0) {
        __vbaHresultCheckObj();
      }
      goto LAB_11006bb9;
    }
    __vbaStrCopy();
    local_d8 = 0x80020004;
    local_e0 = 10;
    local_c8 = 0x80020004;
    local_d0[0] = 10;
    local_128 = L"The file backup has been successfully completed.";
    local_130[0] = 8;
    __vbaVarDup();
  }
  rtcMsgBox();
  __vbaFreeVarList();
LAB_11006bb9:
  __vbaExitProc();
  __vbaFreeVar();
  __vbaFreeStr();
  __vbaFreeStr();
  __vbaFreeStr();
  __vbaFreeVar();
  __vbaFreeVar();
  __vbaFreeStr();
  __vbaFreeVar();
  __vbaFreeStr();
  __vbaFreeVar();
  __vbaFreeVar();
  return;
}


// ---- FUN_11006cb0 @ 11006cb0

void __cdecl FUN_11006cb0(int *param_1)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  wchar_t *pwVar6;
  int *piVar7;
  undefined4 local_c8 [2];
  wchar_t *local_c0;
  int local_b8 [2];
  wchar_t *local_b0;
  undefined4 local_a8;
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88 [2];
  undefined4 local_80;
  int local_78 [2];
  undefined4 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c [4];
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44 [4];
  wchar_t local_34 [10];
  void *pvStack_20;
  undefined1 *puStack_1c;
  undefined1 *local_18;
  undefined *local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  puStack_1c = &LAB_110016d6;
  pvStack_20 = ExceptionList;
  local_18 = &stack0xfffffeec;
  local_14 = &DAT_11001218;
  local_10 = 0;
  local_c = 0;
  ExceptionList = &pvStack_20;
  piVar7 = param_1;
  (**(code **)(*param_1 + 4))(param_1);
  local_34[2] = L'\0';
  local_34[3] = L'\0';
  local_34[0] = L'\0';
  local_34[1] = L'\0';
  local_44[0] = 0;
  local_48 = 0;
  local_4c = 0;
  local_5c[0] = 0;
  local_60 = 0;
  local_64 = 0;
  local_68 = 0;
  local_78[0] = 0;
  local_88[0] = 0;
  local_98 = 0;
  local_a8 = 0;
  local_b8[0] = 0;
  local_c8[0] = 0;
  __vbaOnError(1);
  if ((short)param_1[0xe] == -1) {
    uVar2 = __vbaStrVarVal(&local_60,param_1 + 0x10);
    rtcChangeDir(uVar2);
    __vbaFreeStr();
    uVar4 = 1;
    uVar2 = __vbaStrVarVal(&local_60,param_1 + 0x10);
    rtcRightCharBstr(uVar2,uVar4);
    uVar2 = __vbaStrMove();
    iVar3 = __vbaStrCmp(&DAT_11003004,uVar2);
    __vbaFreeStrList(2,&local_60,&local_64);
    if (iVar3 != 0) {
      local_b0 = L"\\";
      local_b8[0] = 8;
      __vbaVarCat(local_78,local_b8,param_1 + 0x10);
      __vbaVarMove();
      __vbaFreeVar(piVar7);
    }
    local_b0 = (wchar_t *)param_1[0x29];
    local_b8[0] = 8;
    uVar2 = __vbaVarCat(local_78,local_b8,param_1 + 0x10);
    __vbaStrVarMove(uVar2);
    __vbaStrMove();
    __vbaFreeVar();
    rtcRightCharBstr(local_48);
    __vbaStrMove();
    iVar3 = __vbaStrCmp(&DAT_11003004);
    __vbaFreeStr();
    if (iVar3 != 0) {
      __vbaStrCat(&DAT_11003004);
      __vbaStrMove();
    }
    local_b0 = (wchar_t *)&local_48;
    local_b8[0] = 0x4008;
    local_70 = rtcDir(local_b8);
    local_78[0] = 8;
    __vbaVarMove();
    local_b0 = L"";
    local_b8[0] = 0x8008;
    piVar7 = local_b8;
    sVar1 = __vbaVarTstNe(piVar7);
    if (sVar1 != 0) {
      local_4c = 0xffffffff;
      __vbaStrCopy();
      local_b0 = (wchar_t *)0x44;
      local_b8[0] = 3;
      __vbaVarMove();
      __vbaStrCat();
      __vbaStrMove();
      pwVar6 = L"Do you wish to overwrite?";
      local_70 = __vbaStrCat(L"Do you wish to overwrite?");
      local_78[0] = 8;
      __vbaVarMove();
      __vbaFreeStr();
      local_80 = 0x80020004;
      local_88[0] = 10;
      local_70 = 0x80020004;
      local_78[0] = 10;
      local_b0 = local_34;
      local_b8[0] = 0x4008;
      puVar5 = local_88;
      uVar2 = __vbaI4Var(local_44,local_b8,local_78,puVar5);
      iVar3 = rtcMsgBox(local_5c,uVar2,puVar5,pwVar6);
      piVar7 = local_78;
      __vbaFreeVarList(2,piVar7);
      if (iVar3 == 7) goto LAB_11007433;
    }
    if ((short)local_4c == 0) {
      piVar7 = (int *)0x11006fe7;
      rtcMakeDir();
    }
    __vbaStrCopy();
    rtcRightCharBstr();
    __vbaStrMove();
    iVar3 = __vbaStrCmp();
    __vbaFreeStr();
    if (iVar3 != 0) {
      __vbaStrCat();
      __vbaStrMove();
      __vbaStrCopy();
      __vbaFreeStr();
    }
    rtcChangeDir();
    __vbaStrCat();
    __vbaStrMove();
    rtcFileCopy();
    __vbaFreeStr();
    __vbaStrCat();
    __vbaStrMove();
    rtcFileCopy();
    __vbaFreeStr();
    __vbaStrCat();
    __vbaStrMove();
    rtcFileCopy();
    __vbaFreeStr();
    __vbaStrCat();
    __vbaStrMove();
    rtcFileCopy();
    __vbaFreeStr();
    __vbaStrCat();
    __vbaStrMove();
    rtcFileCopy();
    __vbaFreeStr();
    __vbaStrCat();
    __vbaStrMove();
    rtcFileCopy();
    __vbaFreeStr();
    if (*(short *)((int)param_1 + 0xf2) == -1) {
      __vbaStrCat();
      __vbaStrMove();
      rtcFileCopy();
      __vbaFreeStr();
    }
    if (*(short *)((int)param_1 + 0x36) == -1) {
      __vbaStrCat();
      uVar2 = __vbaStrMove();
      __vbaFileOpen(2,0xffffffff,1,uVar2);
      __vbaFreeStr();
      __vbaPrintFile(&DAT_1100331c,1,param_1[0x32],piVar7);
      __vbaFileClose();
    }
    __vbaStrCopy();
    rtcSaveSetting();
    if ((short)param_1[0xf] == -1) {
      *(undefined2 *)(param_1 + 0xe) = 0;
      __vbaStrCopy(piVar7);
      iVar3 = (**(code **)(*param_1 + 0x14c))(param_1);
      if (iVar3 < 0) {
        __vbaHresultCheckObj(iVar3,param_1,&DAT_11002c40);
      }
      goto LAB_11007433;
    }
    if (*(short *)((int)param_1 + 0x3a) == -1) {
      *(undefined2 *)(param_1 + 0xe) = 0;
      iVar3 = (**(code **)(*param_1 + 0x148))(param_1);
      if (iVar3 < 0) {
        __vbaHresultCheckObj(iVar3,param_1,&DAT_11002c40);
      }
      goto LAB_11007433;
    }
  }
  __vbaStrCopy(piVar7);
  local_90 = 0x80020004;
  local_98 = 10;
  local_80 = 0x80020004;
  local_88[0] = 10;
  local_c0 = local_34;
  local_c8[0] = 0x4008;
  local_b0 = L"The file backup has been successfully completed.";
  local_b8[0] = 8;
  __vbaVarDup();
  rtcMsgBox(local_78,0,local_c8,local_88);
  __vbaFreeVarList(3,local_78,local_88);
  *(undefined2 *)(param_1 + 0xe) = 0;
  rtcChangeDrive();
LAB_11007433:
  __vbaExitProc();
  __vbaFreeVar();
  __vbaFreeStr();
  __vbaFreeVar();
  __vbaFreeStr();
  __vbaFreeVar();
  return;
}


// ---- FUN_110074d0 @ 110074d0

void __cdecl FUN_110074d0(int *param_1)

{
  int *piVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  code *pcVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 in_stack_fffffed0;
  undefined *puVar8;
  wchar_t *pwVar9;
  undefined4 *in_stack_fffffed4;
  wchar_t *pwVar10;
  wchar_t *pwVar11;
  int *piVar12;
  int *piVar13;
  undefined4 uVar14;
  undefined4 *puVar15;
  int *piVar16;
  undefined4 local_ec [9];
  undefined4 local_c8 [2];
  wchar_t *local_c0;
  undefined4 local_b8 [2];
  wchar_t *local_b0;
  undefined4 local_a8;
  undefined4 local_98 [2];
  undefined4 local_90;
  undefined4 local_88 [2];
  undefined4 local_80;
  int local_78 [2];
  undefined4 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c [4];
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44 [4];
  wchar_t local_34 [2];
  undefined4 local_30 [4];
  void *pvStack_20;
  undefined1 *puStack_1c;
  undefined1 *local_18;
  undefined *local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  puStack_1c = &LAB_110016d6;
  pvStack_20 = ExceptionList;
  local_18 = &stack0xfffffeec;
  local_14 = &DAT_11001240;
  local_10 = 0;
  local_c = 0;
  ExceptionList = &pvStack_20;
  piVar16 = param_1;
  (**(code **)(*param_1 + 4))(param_1);
  local_30[0] = 0;
  local_34[0] = L'\0';
  local_34[1] = L'\0';
  local_44[0] = 0;
  local_48 = 0;
  local_4c = 0;
  local_5c[0] = 0;
  local_60 = 0;
  local_64 = 0;
  local_68 = 0;
  local_78[0] = 0;
  local_88[0] = 0;
  local_98[0] = 0;
  local_a8 = 0;
  local_b8[0] = 0;
  local_c8[0] = 0;
  local_ec[0] = 0;
  __vbaOnError(1);
  if (*(short *)((int)param_1 + 0x3a) == -1) {
    uVar14 = 1;
    uVar3 = __vbaStrVarVal(&local_60,param_1 + 0x15);
    rtcRightCharBstr(uVar3,uVar14);
    uVar3 = __vbaStrMove();
    iVar4 = __vbaStrCmp(&DAT_11003004,uVar3);
    piVar12 = (int *)0x2;
    uVar3 = 0x110075ac;
    __vbaFreeStrList(2,&local_60,&local_64);
    pcVar5 = __vbaVarMove_exref;
    if (iVar4 != 0) {
      local_b0 = L"\\";
      local_b8[0] = 8;
      piVar12 = local_78;
      uVar3 = 0x110075dd;
      __vbaVarCat(piVar12,local_b8,param_1 + 0x15);
      pcVar5 = __vbaVarMove_exref;
      __vbaVarMove();
      __vbaFreeVar(piVar16);
    }
    piVar13 = (int *)0x11007608;
    uVar14 = __vbaStrVarVal(&local_60,param_1 + 0x15);
    rtcChangeDir(uVar14);
    __vbaFreeStr();
    __vbaStrCopy();
    local_b0 = (wchar_t *)param_1[0x29];
    local_b8[0] = 8;
    piVar16 = local_78;
    puVar15 = (undefined4 *)0x11007654;
    __vbaVarCat(piVar16);
    __vbaStrVarMove();
    __vbaStrMove();
    __vbaFreeVar();
    __vbaStrCopy();
    local_b0 = (wchar_t *)&local_48;
    local_b8[0] = 0x4008;
    local_70 = rtcDir();
    local_78[0] = 8;
    (*pcVar5)();
    local_b0 = L"";
    local_b8[0] = 0x8008;
    puVar6 = local_b8;
    sVar2 = __vbaVarTstNe(puVar6,local_30);
    if (sVar2 != 0) {
      local_4c = 0xffffffff;
      __vbaStrCopy(in_stack_fffffed0,in_stack_fffffed4);
      local_b0 = (wchar_t *)0x44;
      local_b8[0] = 3;
      (*pcVar5)();
      __vbaStrCat(&DAT_11002ea0,L"A Backup folder has already been created today at this");
      uVar3 = __vbaStrMove();
      local_70 = __vbaStrCat(L"network location. Do you wish to overwrite it?",uVar3);
      local_78[0] = 8;
      (*pcVar5)();
      __vbaFreeStr();
      local_80 = 0x80020004;
      local_88[0] = 10;
      local_70 = 0x80020004;
      local_78[0] = 10;
      local_b0 = local_34;
      local_b8[0] = 0x4008;
      puVar6 = local_44;
      uVar3 = __vbaI4Var(puVar6,local_b8,local_78,local_88);
      in_stack_fffffed4 = local_5c;
      in_stack_fffffed0 = 0x110077a1;
      iVar4 = rtcMsgBox(in_stack_fffffed4,uVar3,piVar12,piVar13,puVar15);
      puVar15 = local_88;
      piVar13 = local_78;
      piVar12 = (int *)0x2;
      uVar3 = 0x110077c1;
      __vbaFreeVarList(2,piVar13,puVar15);
      if (iVar4 == 7) goto LAB_11007be3;
    }
    if ((short)local_4c == 0) {
      puVar6 = (undefined4 *)0x110077de;
      rtcMakeDir(local_48);
    }
    piVar1 = param_1 + 0x27;
    __vbaStrCopy(in_stack_fffffed0,in_stack_fffffed4);
    rtcRightCharBstr(*piVar1,1);
    uVar14 = __vbaStrMove();
    uVar7 = 0x1100780d;
    iVar4 = __vbaStrCmp(&DAT_11003004,uVar14);
    __vbaFreeStr();
    if (iVar4 != 0) {
      iVar4 = *piVar1;
      puVar8 = &DAT_11003004;
      __vbaStrCat(puVar6,uVar7);
      __vbaStrMove(puVar8,iVar4);
      __vbaStrCopy(puVar8,iVar4);
      __vbaFreeStr();
    }
    rtcChangeDir(*piVar1);
    __vbaStrCat(L"LEO_USER.MDB",*piVar1);
    uVar14 = __vbaStrMove();
    rtcFileCopy(param_1[0x2a],uVar14);
    __vbaFreeStr();
    __vbaStrCat(L"DATA.VAC",*piVar1);
    uVar14 = __vbaStrMove();
    rtcFileCopy(param_1[0x2c],uVar14);
    __vbaFreeStr();
    __vbaStrCat(L"SYSTEM.MDA",*piVar1);
    uVar14 = __vbaStrMove();
    rtcFileCopy(param_1[0x2b],uVar14);
    __vbaFreeStr();
    __vbaStrCat(L"CONFIG.LEO",*piVar1);
    uVar14 = __vbaStrMove();
    rtcFileCopy(param_1[0x2d],uVar14);
    __vbaFreeStr();
    __vbaStrCat(L"L500.INI",*piVar1);
    uVar14 = __vbaStrMove();
    rtcFileCopy(param_1[0x2f],uVar14);
    __vbaFreeStr();
    __vbaStrCat(L"ACCESS.LEO",*piVar1);
    uVar14 = __vbaStrMove();
    rtcFileCopy(param_1[0x30],uVar14);
    __vbaFreeStr();
    if (*(short *)((int)param_1 + 0xf2) == -1) {
      __vbaStrCat(L"account.mdb",*piVar1);
      uVar14 = __vbaStrMove();
      rtcFileCopy(param_1[0x2e],uVar14);
      __vbaFreeStr();
    }
    __vbaStrCopy(uVar3,piVar12);
    pwVar10 = L"Restore";
    pwVar9 = L"Parachute";
    uVar3 = 0x110079c2;
    rtcSaveSetting(L"Parachute",L"Restore",L"Network",param_1[0x19]);
    if (*(short *)((int)param_1 + 0x36) == -1) {
      iVar4 = *piVar1;
      pwVar11 = L"Comments.txt";
      __vbaStrCat(puVar6,uVar3);
      uVar3 = __vbaStrMove(pwVar9,pwVar10,pwVar11,iVar4);
      __vbaFileOpen(2,0xffffffff,1,uVar3);
      __vbaFreeStr();
      __vbaPrintFile(&DAT_1100331c,1,param_1[0x32],pwVar9);
      __vbaFileClose(1);
    }
    *(undefined2 *)((int)param_1 + 0x3a) = 0;
    if ((short)param_1[0xf] == -1) {
      __vbaStrCopy(piVar13,puVar15);
      local_ec[0] = 2;
      iVar4 = (**(code **)(*param_1 + 0x14c))(param_1,local_ec);
      if (iVar4 < 0) {
        __vbaHresultCheckObj(iVar4,param_1,&DAT_11002c40,0x14c);
      }
    }
    else {
      __vbaStrCopy(piVar13,puVar15);
      local_90 = 0x80020004;
      local_98[0] = 10;
      local_80 = 0x80020004;
      local_88[0] = 10;
      local_c0 = local_34;
      local_c8[0] = 0x4008;
      local_b0 = L"The file backup has been successfully completed.";
      local_b8[0] = 8;
      __vbaVarDup();
      rtcMsgBox(local_78,0,local_c8,local_88,local_98);
      __vbaFreeVarList(3,local_78,local_88,local_98);
    }
  }
LAB_11007be3:
  __vbaExitProc();
  __vbaFreeVar(&LAB_11007c57);
  __vbaFreeStr();
  __vbaFreeVar(piVar16);
  __vbaFreeStr();
  __vbaFreeVar();
  return;
}


// ---- FUN_11007c80 @ 11007c80

/* WARNING: Type propagation algorithm not settling */

void __cdecl FUN_11007c80(int *param_1,uint *param_2)

{
  short **ppsVar1;
  uint ****ppppuVar2;
  code *pcVar3;
  short sVar4;
  int iVar5;
  uint ***pppuVar6;
  int iVar7;
  short **ppsVar8;
  uint uVar9;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  short sVar10;
  code *pcVar11;
  uint *puVar12;
  undefined2 uVar13;
  code *pcVar14;
  short **ppsStack_41c;
  code *pcStack_418;
  short **ppsStack_414;
  undefined4 uStack_3d4;
  undefined4 uStack_3c4;
  undefined4 uStack_3b4;
  undefined4 uStack_3a4;
  undefined4 uStack_394;
  undefined4 uStack_384;
  undefined4 uStack_380;
  int iStack_37c;
  undefined4 uStack_378;
  void *pvStack_374;
  undefined4 *puStack_370;
  short **ppsStack_36c;
  short **ppsStack_368;
  short **ppsStack_364;
  short **ppsStack_360;
  uint ****ppppuStack_35c;
  short **ppsStack_358;
  undefined4 uStack_354;
  undefined4 *puStack_34c;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined4 uStack_330;
  undefined4 auStack_32c [5];
  short *apsStack_318 [2];
  short *psStack_310;
  short *apsStack_308 [2];
  short *psStack_300;
  undefined4 uStack_2f8;
  undefined4 uStack_2e8;
  undefined4 auStack_2d8 [4];
  short *apsStack_2c8 [2];
  undefined4 uStack_2c0;
  undefined4 uStack_2b8;
  short *psStack_2b4;
  short *psStack_2b0;
  short *psStack_2ac;
  code *pcStack_2a4;
  void *pvStack_29c;
  undefined1 *puStack_298;
  undefined1 *puStack_294;
  undefined *puStack_290;
  uint ****ppppuStack_28c;
  uint ****ppppuStack_288;
  wchar_t *pwStack_284;
  uint ****ppppuStack_280;
  uint ****ppppuStack_27c;
  short **ppsStack_278;
  uint ****ppppuStack_274;
  uint ****ppppuStack_270;
  short **ppsStack_26c;
  uint ****ppppuStack_268;
  uint ****ppppuStack_264;
  short **ppsStack_260;
  uint ****ppppuStack_25c;
  uint ****ppppuStack_258;
  uint ***pppuStack_254;
  uint ****ppppuStack_250;
  uint ****ppppuStack_24c;
  short **ppsStack_248;
  uint ****ppppuStack_244;
  uint ****ppppuStack_240;
  short **ppsStack_23c;
  uint ****ppppuStack_238;
  uint ****ppppuStack_234;
  uint ****ppppuStack_230;
  uint ****ppppuStack_22c;
  int *piStack_228;
  code *pcStack_224;
  code *pcStack_220;
  short sStack_204;
  undefined4 auStack_200 [9];
  undefined4 auStack_1dc [2];
  uint ****ppppuStack_1d4;
  undefined4 uStack_1cc;
  undefined4 uStack_1bc;
  undefined4 uStack_1ac;
  undefined4 auStack_19c [4];
  undefined4 uStack_18c;
  short *psStack_188;
  int aiStack_184 [4];
  undefined4 uStack_174;
  undefined4 uStack_164;
  void *pvStack_154;
  wchar_t ***pppwStack_150;
  wchar_t ***pppwStack_14c;
  uint ***pppuStack_148;
  uint ****ppppuStack_138;
  uint ****ppppuStack_134;
  uint ****ppppuStack_130;
  undefined4 *puStack_12c;
  undefined4 local_124;
  short local_118;
  undefined4 local_114;
  wchar_t **local_110 [9];
  wchar_t **local_ec [2];
  uint ****local_e4;
  wchar_t **local_dc [2];
  uint ****local_d4;
  undefined4 local_cc;
  undefined4 local_bc [2];
  undefined4 local_b4;
  uint ***local_ac [2];
  undefined4 local_a4;
  wchar_t **local_9c [2];
  undefined4 local_94;
  undefined4 local_8c;
  wchar_t **local_88;
  wchar_t **local_84;
  wchar_t **local_80;
  uint **local_7c [4];
  undefined4 local_6c;
  uint **local_68;
  wchar_t ***local_64;
  wchar_t ***local_60;
  uint ****local_5c;
  undefined4 local_54;
  short *local_44;
  uint ***local_40;
  code *local_3c;
  uint local_38;
  wchar_t **local_30 [4];
  void *pvStack_20;
  undefined1 *puStack_1c;
  undefined1 *local_18;
  undefined *local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  puStack_1c = &LAB_110016d6;
  pvStack_20 = ExceptionList;
  local_18 = &stack0xfffffebc;
  local_14 = &DAT_11001268;
  local_10 = 0;
  local_c = 0;
  pppuStack_148 = (uint ***)param_1;
  pppwStack_14c = (wchar_t ***)0x11007cbd;
  ExceptionList = &pvStack_20;
  (**(code **)(*param_1 + 4))();
  local_30[0] = (wchar_t **)0x0;
  local_3c = (code *)0x0;
  local_40 = (uint ***)0x0;
  local_44 = (short *)0x0;
  local_54 = 0;
  local_5c = (uint ****)0x0;
  local_60 = (wchar_t ***)0x0;
  local_64 = (wchar_t ***)0x0;
  local_68 = (uint **)0x0;
  local_6c = 0;
  local_7c[0] = (uint **)0x0;
  local_80 = (wchar_t **)0x0;
  local_84 = (wchar_t **)0x0;
  local_88 = (wchar_t **)0x0;
  local_8c = 0;
  local_9c[0] = (wchar_t **)0x0;
  local_ac[0] = (uint ***)0x0;
  local_bc[0] = 0;
  local_cc = 0;
  local_dc[0] = (wchar_t **)0x0;
  local_ec[0] = (wchar_t **)0x0;
  local_110[0] = (wchar_t **)0x0;
  local_114 = 0;
  pppwStack_14c = (wchar_t ***)0x1;
  pppwStack_150 = (wchar_t ***)0x11007d28;
  __vbaOnError();
  pppwStack_14c = (wchar_t ***)0x11007d39;
  __vbaVarCopy();
  pppwStack_14c = (wchar_t ***)0x11007d4a;
  __vbaStrCopy();
  param_1[0x4a] = 0;
  pppwStack_14c = &local_80;
  pppwStack_150 = (wchar_t ***)0x11007d5d;
  pppuStack_148 = (uint ***)(param_1 + 0x37);
  pppuStack_148 = (uint ***)__vbaStrVarVal();
  pppwStack_14c = (wchar_t ***)0x11007d64;
  rtcRightCharBstr();
  pcVar14 = __vbaStrMove_exref;
  __vbaStrMove();
  pppuStack_148 = (uint ***)&DAT_11003004;
  pppwStack_14c = (wchar_t ***)0x11007d7d;
  iVar5 = __vbaStrCmp();
  pppuStack_148 = (uint ***)&local_80;
  pppwStack_14c = (wchar_t ***)0x2;
  pppwStack_150 = (wchar_t ***)0x11007d97;
  __vbaFreeStrList();
  if (iVar5 != 0) {
    local_d4 = (uint ****)&DAT_11003004;
    local_dc[0] = (wchar_t **)0x8;
    pppuStack_148 = (uint ***)local_dc;
    pppwStack_14c = local_9c;
    pppwStack_150 = (wchar_t ***)0x11007dce;
    __vbaVarCat();
    __vbaVarMove();
    __vbaFreeVar();
  }
  __vbaStrVarCopy();
  __vbaStrMove();
  pppuStack_148 = (uint ***)0x11007e01;
  rtcRightCharBstr();
  __vbaStrMove();
  pppuStack_148 = (uint ***)0x11007e14;
  iVar5 = __vbaStrCmp();
  pcVar11 = (code *)-(uint)(iVar5 == 0);
  __vbaFreeStr();
  if ((short)pcVar11 != 0) {
    local_d4 = (uint ****)&local_60;
    local_dc[0] = (wchar_t **)0x4008;
    iVar5 = __vbaLenBstr();
    if (SBORROW4(iVar5,1)) goto LAB_11008ac5;
    pppuStack_148 = (uint ***)0x11007e66;
    rtcLeftCharVar();
    __vbaStrVarMove();
    __vbaStrMove();
    __vbaFreeVar();
  }
  local_d4 = (uint ****)&DAT_11003004;
  local_dc[0] = (wchar_t **)0x8;
  __vbaVarDup();
  pppuStack_148 = (uint ***)local_9c;
  pppwStack_14c = local_60;
  pppwStack_150 = (wchar_t ***)local_ac;
  pvStack_154 = (void *)0x11007ec8;
  rtcSplit();
  pppuStack_148 = (uint ***)0x11007eda;
  local_114 = __vbaAryVar();
  pppuStack_148 = (uint ***)0x11007ef1;
  __vbaAryCopy();
  pppuStack_148 = (uint ***)0x2;
  pppwStack_14c = (wchar_t ***)0x11007f07;
  __vbaFreeVarList();
  pppuStack_148 = (uint ***)0x11007f16;
  __vbaUbound();
  sVar4 = __vbaI2I4();
  if ((local_44 == (short *)0x0) || (*local_44 != 1)) {
    __vbaGenerateBoundsError();
  }
  else if (*(uint *)(local_44 + 8) <= (uint)((int)sVar4 - *(int *)(local_44 + 10))) {
    __vbaGenerateBoundsError();
  }
  pcVar11 = __vbaStrCat_exref;
  __vbaStrCat();
  __vbaStrMove();
  local_d4 = (uint ****)&local_60;
  local_dc[0] = (wchar_t **)0x4008;
  pppuStack_148 = (uint ***)local_9c;
  pppwStack_14c = (wchar_t ***)0x11007f97;
  rtcStrConvVar2();
  __vbaStrVarMove();
  __vbaStrMove();
  __vbaFreeVar();
  ppppuStack_138 = (uint ****)param_1[0x1f];
  rtcChangeDir();
  ppppuStack_138 = (uint ****)param_1[0x1f];
  __vbaStrCat();
  ppppuStack_138 = (uint ****)0x11007fd2;
  __vbaStrMove();
  local_d4 = (uint ****)&local_64;
  local_dc[0] = (wchar_t **)0x4008;
  ppppuStack_138 = (uint ****)0x10;
  local_94 = rtcDir();
  local_9c[0] = (wchar_t **)0x8;
  ppppuStack_138 = (uint ****)0x11008013;
  __vbaVarMove();
  local_d4 = (uint ****)&DAT_11002efc;
  local_dc[0] = (wchar_t **)0x8008;
  ppppuStack_138 = (uint ****)local_30;
  sVar4 = __vbaVarTstNe();
  if (sVar4 != 0) {
    local_6c = 0xffffffff;
    ppppuStack_138 = (uint ****)0x11008056;
    __vbaStrCopy();
    local_d4 = (uint ****)0x44;
    local_dc[0] = (wchar_t **)0x3;
    ppppuStack_130 = (uint ****)0x11008079;
    __vbaVarMove();
    ppppuStack_130 = (uint ****)0x11003910;
    ppppuStack_134 = (uint ****)&DAT_11002ea0;
    ppppuStack_138 = (uint ****)0x11008085;
    __vbaStrCat();
    ppppuStack_130 = (uint ****)0x1100808c;
    ppppuStack_130 = (uint ****)__vbaStrMove();
    ppppuStack_134 = (uint ****)0x11003974;
    ppppuStack_138 = (uint ****)0x11008094;
    local_94 = __vbaStrCat();
    local_9c[0] = (wchar_t **)0x8;
    ppppuStack_130 = (uint ****)0x110080b3;
    __vbaVarMove();
    ppppuStack_130 = (uint ****)0x110080bc;
    __vbaFreeStr();
    local_a4 = 0x80020004;
    local_ac[0] = (uint ***)0xa;
    local_94 = 0x80020004;
    local_9c[0] = (wchar_t **)0xa;
    local_d4 = &local_40;
    local_dc[0] = (wchar_t **)0x4008;
    ppppuStack_130 = local_ac;
    ppppuStack_134 = (uint ****)local_9c;
    ppppuStack_138 = (uint ****)local_dc;
    __vbaI4Var();
    pppuStack_148 = local_7c;
    pppwStack_14c = (wchar_t ***)0x1100811b;
    iVar5 = rtcMsgBox();
    local_118 = -(ushort)(iVar5 == 7);
    ppppuStack_138 = local_ac;
    __vbaFreeVarList();
    if (local_118 != 0) goto LAB_11008a05;
  }
  if ((short)local_6c == 0) {
    ppppuStack_138 = (uint ****)local_64;
    rtcMakeDir();
  }
  *(undefined2 *)(param_1 + 0x51) = 0;
  if ((*param_2 & 2) == 0) {
    local_d4 = (uint ****)param_1[0x3b];
    local_dc[0] = (wchar_t **)0x8;
    ppppuStack_138 = (uint ****)0x0;
    pppuStack_148 = (uint ***)0x11008328;
    __vbaVarCat();
    rtcDir();
    ppppuStack_138 = (uint ****)0x11008336;
    __vbaStrMove();
    ppppuStack_138 = (uint ****)0x11008342;
    __vbaFreeVar();
    while( true ) {
      ppppuStack_134 = local_5c;
      ppppuStack_138 = (uint ****)0x1100834c;
      iVar5 = __vbaLenBstr();
      if ((iVar5 < 1) || ((short)param_1[0x51] != 0)) break;
      local_d4 = (uint ****)&DAT_110039d4;
      local_dc[0] = (wchar_t **)0x8;
      local_e4 = local_5c;
      local_ec[0] = (wchar_t **)0x8;
      ppppuStack_134 = (uint ****)(param_1 + 0x37);
      ppppuStack_138 = (uint ****)local_dc;
      ppppuStack_134 = (uint ****)__vbaVarCat();
      ppppuStack_138 = (uint ****)local_ec;
      ppppuStack_134 = (uint ****)__vbaVarCat();
      ppppuStack_138 = (uint ****)&local_80;
      ppppuStack_134 = (uint ****)__vbaStrVarVal();
      ppppuStack_138 = (uint ****)0x110083c8;
      rtcFileLen();
      ppppuStack_134 = (uint ****)0x110083d1;
      __vbaFreeStr();
      ppppuStack_134 = local_ac;
      ppppuStack_138 = (uint ****)local_9c;
      __vbaFreeVarList();
      local_d4 = local_5c;
      local_dc[0] = (wchar_t **)0x8;
      ppppuStack_134 = (uint ****)param_1[0x1f];
      ppppuStack_138 = (uint ****)local_60;
      __vbaStrCat();
      ppppuStack_134 = (uint ****)0x1100840e;
      ppppuStack_134 = (uint ****)__vbaStrMove();
      ppppuStack_138 = local_5c;
      __vbaStrCat();
      ppppuStack_134 = (uint ****)0x1100841f;
      ppppuStack_134 = (uint ****)__vbaStrMove();
      ppppuStack_138 = (uint ****)(param_1 + 0x37);
      ppppuStack_138 = (uint ****)__vbaVarCat();
      ppppuStack_138 = (uint ****)__vbaStrVarVal();
      rtcFileCopy();
      ppppuStack_134 = (uint ****)&local_88;
      ppppuStack_138 = (uint ****)&local_84;
      __vbaFreeStrList();
      ppppuStack_134 = (uint ****)0x11008473;
      __vbaFreeVar();
      local_94 = 0x80020004;
      local_9c[0] = (wchar_t **)0xa;
      ppppuStack_130 = (uint ****)0x0;
      ppppuStack_134 = (uint ****)local_9c;
      ppppuStack_138 = (uint ****)0x11008496;
      rtcDir();
      ppppuStack_130 = (uint ****)0x1100849d;
      __vbaStrMove();
      ppppuStack_130 = (uint ****)0x110084a9;
      __vbaFreeVar();
      puStack_12c = (undefined4 *)0x110084af;
      rtcDoEvents();
    }
  }
  else {
    local_d4 = (uint ****)param_1[0x3b];
    local_dc[0] = (wchar_t **)0x8;
    ppppuStack_138 = (uint ****)0x10;
    pppuStack_148 = (uint ***)0x110081ac;
    ppppuStack_138 = (uint ****)__vbaVarCat();
    rtcDir();
    ppppuStack_134 = (uint ****)0x110081ba;
    __vbaStrMove();
    ppppuStack_134 = (uint ****)0x110081c6;
    __vbaFreeVar();
    while( true ) {
      ppppuStack_130 = local_5c;
      ppppuStack_138 = (uint ****)0x110081d0;
      iVar5 = __vbaLenBstr();
      if ((iVar5 < 1) || ((short)param_1[0x51] != 0)) break;
      ppppuStack_134 = (uint ****)0x1;
      ppppuStack_138 = local_5c;
      rtcLeftCharBstr();
      ppppuStack_134 = (uint ****)0x110081f9;
      ppppuStack_134 = (uint ****)__vbaStrMove();
      ppppuStack_138 = (uint ****)&DAT_110039cc;
      iVar5 = __vbaStrCmp();
      local_118 = -(ushort)(iVar5 != 0);
      ppppuStack_134 = (uint ****)0x1100821d;
      __vbaFreeStr();
      if (local_118 != 0) {
        local_d4 = local_5c;
        local_dc[0] = (wchar_t **)0x8;
        ppppuStack_134 = (uint ****)param_1[0x1f];
        ppppuStack_138 = (uint ****)local_60;
        __vbaStrCat();
        ppppuStack_138 = (uint ****)0x1100824f;
        ppppuStack_138 = (uint ****)__vbaStrMove();
        __vbaStrCat();
        ppppuStack_138 = (uint ****)0x11008260;
        ppppuStack_138 = (uint ****)__vbaStrMove();
        pppuStack_148 = (uint ***)0x1100827c;
        __vbaVarCat();
        __vbaStrVarVal();
        rtcFileCopy();
        ppppuStack_138 = (uint ****)&local_88;
        pppuStack_148 = (uint ***)0x110082a5;
        __vbaFreeStrList();
        ppppuStack_138 = (uint ****)0x110082b4;
        __vbaFreeVar();
      }
      local_94 = 0x80020004;
      local_9c[0] = (wchar_t **)0xa;
      ppppuStack_134 = (uint ****)0x0;
      ppppuStack_138 = (uint ****)local_9c;
      rtcDir();
      ppppuStack_134 = (uint ****)0x110082de;
      __vbaStrMove();
      ppppuStack_134 = (uint ****)0x110082ea;
      __vbaFreeVar();
      ppppuStack_130 = (uint ****)0x110082f0;
      rtcDoEvents();
    }
  }
  if ((*param_2 & 1) == 0 && (short)param_1[0x51] == 0) {
    ppppuStack_134 = (uint ****)0x0;
    ppppuStack_138 = (uint ****)0xa;
    pppuStack_148 = (uint ***)0x4;
    pppwStack_14c = (wchar_t ***)0x180;
    pppwStack_150 = (wchar_t ***)0x110084e4;
    __vbaRedim();
    local_d4 = (uint ****)&DAT_110038d0;
    local_dc[0] = (wchar_t **)0x8;
    pppuStack_148 = (uint ***)local_dc;
    pppwStack_14c = local_9c;
    pppwStack_150 = (wchar_t ***)0x11008518;
    __vbaVarAdd();
    pppuStack_148 = (uint ***)0x1100851f;
    rtcDir();
    __vbaStrMove();
    __vbaFreeVar();
    do {
      iVar5 = __vbaLenBstr();
      if (iVar5 < 1) {
        if (SBORROW2((short)local_3c,1)) goto LAB_11008ac5;
        local_38 = 0;
        local_124 = CONCAT22((short)((uint)local_3c >> 0x10),(short)local_3c + -1);
        uVar9 = local_38;
        goto LAB_110086f1;
      }
      rtcLeftCharBstr();
      ppppuStack_138 = (uint ****)0x11008557;
      ppppuStack_138 = (uint ****)__vbaStrMove();
      iVar5 = __vbaStrCmp();
      ppppuStack_138 = (uint ****)0x11008576;
      __vbaFreeStr();
      if ((short)-(uint)(iVar5 != 0) != 0) {
        local_d4 = local_5c;
        local_dc[0] = (wchar_t **)0x8;
        ppppuStack_138 = (uint ****)(param_1 + 0x37);
        ppppuStack_138 = (uint ****)__vbaVarCat();
        __vbaStrVarMove();
        ppppuStack_138 = (uint ****)0x110085bb;
        __vbaStrMove();
        ppppuStack_138 = (uint ****)local_110;
        (**(code **)(*param_1 + 0x15c))();
        sVar4 = (short)local_110[0];
        puVar12 = (uint *)CONCAT22((short)(-(uint)(iVar5 != 0) >> 0x10),(short)local_110[0]);
        __vbaFreeStr();
        __vbaFreeVar();
        if (sVar4 != 0) {
          if ((local_68 == (uint **)0x0) || (*(short *)local_68 != 1)) {
            ppppuStack_138 = (uint ****)0x11008625;
            __vbaGenerateBoundsError();
          }
          else {
            puVar12 = (uint *)((int)(short)local_3c - (int)local_68[5]);
            if (local_68[4] <= puVar12) {
              ppppuStack_138 = (uint ****)0x11008613;
              __vbaGenerateBoundsError();
            }
          }
          ppppuStack_138 = (uint ****)0x11008636;
          __vbaStrCopy();
          sVar4 = (short)local_3c;
          uVar13 = (undefined2)((uint)puVar12 >> 0x10);
          sVar10 = (short)local_3c + 1;
          pcVar11 = (code *)CONCAT22(uVar13,sVar10);
          if (SCARRY2((short)local_3c,1)) goto LAB_11008ac5;
          local_3c = pcVar11;
          iVar5 = __vbaUbound();
          if (sVar10 == iVar5) {
            ppppuStack_138 = (uint ****)0x0;
            pcVar11 = (code *)CONCAT22(uVar13,sVar4 + 0xb);
            if (SCARRY2(sVar10,10)) goto LAB_11008ac5;
            pppuStack_148 = &local_68;
            pppwStack_14c = (wchar_t ***)0x4;
            pppwStack_150 = (wchar_t ***)0x180;
            pvStack_154 = (void *)0x1100867f;
            __vbaRedimPreserve();
          }
        }
      }
      local_94 = 0x80020004;
      local_9c[0] = (wchar_t **)0xa;
      ppppuStack_138 = (uint ****)0x0;
      rtcDir();
      ppppuStack_138 = (uint ****)0x110086ac;
      __vbaStrMove();
      ppppuStack_138 = (uint ****)0x110086b8;
      __vbaFreeVar();
      ppppuStack_134 = (uint ****)0x110086be;
      rtcDoEvents();
      pcVar11 = __vbaStrCat_exref;
    } while ((short)param_1[0x51] == 0);
  }
LAB_11008a05:
  ppppuStack_134 = (uint ****)0x11008a0b;
  __vbaExitProc();
  ppppuStack_134 = (uint ****)&LAB_11008aa6;
  ppppuStack_138 = (uint ****)0x11008a6b;
  __vbaFreeVar();
  ppppuStack_134 = (uint ****)0x11008a76;
  __vbaFreeStr();
  ppppuStack_134 = (uint ****)&local_44;
  ppppuStack_138 = (uint ****)0x0;
  __vbaAryDestruct();
  ppppuStack_134 = (uint ****)0x11008a89;
  __vbaFreeVar();
  ppppuStack_130 = (uint ****)0x11008a8e;
  __vbaFreeStr();
  ppppuStack_130 = (uint ****)0x11008a93;
  __vbaFreeStr();
  ppppuStack_130 = (uint ****)0x11008a98;
  __vbaFreeStr();
  ppppuStack_130 = (uint ****)&local_68;
  ppppuStack_134 = (uint ****)0x0;
  ppppuStack_138 = (uint ****)0x11008aa0;
  __vbaAryDestruct();
  ppppuStack_130 = (uint ****)0x11008aa5;
  __vbaFreeVar();
  return;
  while( true ) {
    uStack_330 = 0;
    ppppuStack_35c = (uint ****)&uStack_330;
    ppsStack_360 = ppsVar1;
    ppsStack_364 = (short **)0x11009419;
    ppsVar8 = (short **)(**(code **)(*ppsVar1 + 0xaa))();
    uVar13 = extraout_var;
    if ((int)ppsVar8 < 0) {
      ppppuStack_35c = (uint ****)0x154;
      ppsStack_360 = (short **)&DAT_11002c40;
      ppsStack_364 = ppsVar1;
      ppsStack_36c = (short **)0x1100942b;
      ppsStack_368 = ppsVar8;
      __vbaHresultCheckObj();
      uVar13 = extraout_var_00;
    }
    if (*(short *)(ppsVar1 + 0x51) != 0) goto LAB_1100951f;
    pcVar3 = (code *)CONCAT22(uVar13,(short)uStack_33c + sVar4);
    if (SCARRY2((short)uStack_33c,sVar4)) break;
LAB_110093f6:
    pcVar14 = pcVar3;
    sVar4 = (short)pcVar14;
    ppsStack_414 = (short **)pcVar11;
    if ((short)uStack_340 < sVar4) {
      if (!SCARRY4((int)ppsVar1[0x4a],(int)ppsVar1[0x4c])) {
        ppsVar1[0x4c] = (short *)((int)ppsVar1[0x4a] + (int)ppsVar1[0x4c]);
        goto LAB_1100951f;
      }
      break;
    }
  }
LAB_1100958f:
  ppppuStack_35c = (uint ****)0x11009595;
  __vbaErrorOverflow();
  puStack_370 = (undefined4 *)&LAB_110016d6;
  pvStack_374 = ExceptionList;
  ppsStack_36c = (short **)&ppsStack_41c;
  ppsStack_41c = ppsVar1;
  ppsStack_368 = (short **)&DAT_110012e0;
  ppsStack_364 = (short **)0x0;
  ppsStack_360 = (short **)0x0;
  iStack_37c = 0;
  uStack_380 = 0;
  uStack_384 = 0;
  uStack_394 = 0;
  uStack_3a4 = 0;
  uStack_3b4 = 0;
  uStack_3c4 = 0;
  uStack_3d4 = 0;
  ExceptionList = &pvStack_374;
  pcStack_418 = pcVar14;
  ppsStack_358 = (short **)&ppppuStack_280;
  __vbaOnError(1);
  rtcGetFileAttr(*puStack_34c);
  uVar9 = __vbaI2I4();
  iStack_37c = -((uVar9 & 0x10) >> 4);
  ppsStack_41c = (short **)0x11009619;
  __vbaExitProc();
  return;
  while( true ) {
    iVar5 = (**(code **)(*param_1 + 0x14c))();
    if (iVar5 < 0) {
      ppppuStack_134 = (uint ****)0x14c;
      ppppuStack_138 = (uint ****)&DAT_11002c40;
      __vbaHresultCheckObj();
    }
    if ((short)param_1[0x51] != 0) goto LAB_11008a05;
    uVar9 = (uint)(ushort)((short)local_38 + 1);
    if (SCARRY2((short)local_38,1)) break;
LAB_110086f1:
    local_38 = uVar9;
    if ((short)local_124 < (short)local_38) {
      pppuStack_148 = (uint ***)0x110032c0;
      pppwStack_14c = (wchar_t ***)0x1100875c;
      rtcSaveSetting();
      rtcLeftCharBstr();
      __vbaStrMove();
      iVar5 = __vbaStrCmp();
      local_118 = -(ushort)(iVar5 == 0);
      __vbaFreeStr();
      if (local_118 != 0) {
        (*pcVar11)();
        __vbaStrMove();
        __vbaStrCopy();
        __vbaFreeStr();
        __vbaStrVarVal();
        pppuStack_148 = (uint ***)0x110032c0;
        pppwStack_14c = (wchar_t ***)0x110087ec;
        rtcSaveSetting();
        __vbaFreeStr();
        pppuStack_148 = (uint ***)0x110032c0;
        pppwStack_14c = (wchar_t ***)0x11008809;
        rtcSaveSetting();
      }
      if ((short)param_1[0xe] == -1) {
        iVar5 = (**(code **)(*param_1 + 0x144))();
        if (iVar5 < 0) {
          ppppuStack_134 = (uint ****)0x144;
          ppppuStack_138 = (uint ****)&DAT_11002c40;
          __vbaHresultCheckObj();
        }
      }
      else if (*(short *)((int)param_1 + 0x3a) == -1) {
        iVar5 = (**(code **)(*param_1 + 0x148))();
        if (iVar5 < 0) {
          ppppuStack_134 = (uint ****)0x148;
          ppppuStack_138 = (uint ****)&DAT_11002c40;
          __vbaHresultCheckObj();
        }
      }
      else {
        __vbaStrCopy();
        local_b4 = 0x80020004;
        local_bc[0] = 10;
        local_a4 = 0x80020004;
        local_ac[0] = (uint ***)0xa;
        local_e4 = &local_40;
        local_ec[0] = (wchar_t **)0x4008;
        local_d4 = (uint ****)0x110035cc;
        local_dc[0] = (wchar_t **)0x8;
        ppppuStack_134 = (uint ****)0x110088d1;
        __vbaVarDup();
        ppppuStack_134 = (uint ****)local_bc;
        ppppuStack_138 = local_ac;
        pppuStack_148 = (uint ***)0x110088f5;
        rtcMsgBox();
        ppppuStack_134 = (uint ****)local_bc;
        ppppuStack_138 = local_ac;
        __vbaFreeVarList();
      }
      goto LAB_11008a05;
    }
  }
LAB_11008ac5:
  __vbaErrorOverflow();
  ppppuVar2 = ppppuStack_130;
  pppwStack_150 = (wchar_t ***)&LAB_110016d6;
  pvStack_154 = ExceptionList;
  pcStack_224 = pcVar14;
  pppwStack_14c = (wchar_t ***)&piStack_228;
  piStack_228 = param_1;
  pppuStack_148 = (uint ***)&DAT_11001290;
  ppppuStack_22c = ppppuStack_130;
  ppppuStack_230 = (uint ****)0x11008b0d;
  ExceptionList = &pvStack_154;
  pcStack_220 = pcVar11;
  ppppuStack_138 = (uint ****)&stack0xfffffffc;
  (*(code *)(*ppppuStack_130)[1])();
  uStack_164 = 0;
  uStack_174 = 0;
  aiStack_184[0] = 0;
  psStack_188 = (short *)0x0;
  uStack_18c = 0;
  auStack_19c[0] = 0;
  uStack_1ac = 0;
  uStack_1bc = 0;
  uStack_1cc = 0;
  auStack_1dc[0] = 0;
  auStack_200[0] = 0;
  *puStack_12c = 0;
  ppppuStack_230 = (uint ****)0x1;
  ppppuStack_234 = (uint ****)0x11008b47;
  __vbaOnError();
  ppppuStack_230 = (uint ****)0x1;
  ppppuStack_238 = (uint ****)auStack_19c;
  ppsStack_23c = (short **)0x11008b5a;
  ppppuStack_234 = ppppuVar2 + 0x21;
  rtcLeftCharVar();
  ppppuStack_230 = (uint ****)0x11008b66;
  __vbaVarMove();
  ppppuStack_230 = (uint ****)aiStack_184;
  ppppuStack_234 = (uint ****)&psStack_188;
  ppppuStack_238 = (uint ****)0x11008b74;
  ppppuStack_230 = (uint ****)__vbaStrVarVal();
  ppppuStack_234 = (uint ****)0x11008b7b;
  rtcChangeDrive();
  pcVar14 = __vbaFreeStr_exref;
  ppppuStack_230 = (uint ****)0x11008b86;
  __vbaFreeStr();
  ppppuStack_234 = (uint ****)&psStack_188;
  ppppuStack_238 = (uint ****)0x11008b91;
  ppppuStack_230 = ppppuVar2 + 0x21;
  ppppuStack_230 = (uint ****)__vbaStrVarVal();
  ppppuStack_234 = (uint ****)0x11008b98;
  rtcChangeDir();
  ppppuStack_230 = (uint ****)0x11008b9d;
  __vbaFreeStr();
  ppppuStack_230 = (uint ****)&psStack_188;
  ppppuStack_234 = ppppuVar2 + 0x2e;
  ppppuStack_238 = ppppuVar2;
  ppsStack_23c = (short **)0x11008bb1;
  (*(code *)(*ppppuVar2)[0x5a])();
  ppsStack_23c = (short **)psStack_188;
  ppppuStack_240 = (uint ****)0x11008bbd;
  sVar4 = __vbaBoolStr();
  sStack_204 = -(ushort)(sVar4 == -1);
  ppsStack_23c = (short **)0x11008bd4;
  __vbaFreeStr();
  if (sStack_204 != 0) {
    ppsStack_23c = (short **)0x110030e4;
    ppppuStack_240 = (uint ****)0x11008be9;
    pppuVar6 = (uint ***)rtcFileLen();
    ppppuVar2[0x43] = pppuVar6;
  }
  ppsStack_23c = &psStack_188;
  ppppuStack_240 = ppppuVar2 + 0x2a;
  ppppuStack_244 = ppppuVar2;
  ppsStack_248 = (short **)0x11008c03;
  (*(code *)(*ppppuVar2)[0x59])();
  ppsStack_248 = (short **)psStack_188;
  ppppuStack_24c = (uint ****)0x11008c09;
  sVar4 = __vbaBoolStr();
  sStack_204 = -(ushort)(sVar4 == -1);
  ppsStack_248 = (short **)0x11008c20;
  __vbaFreeStr();
  if (sStack_204 != 0) {
    ppsStack_248 = (short **)0x110030a4;
    ppppuStack_24c = (uint ****)0x11008c35;
    pppuVar6 = (uint ***)rtcFileLen();
    ppppuVar2[0x45] = pppuVar6;
  }
  ppsStack_248 = &psStack_188;
  ppppuStack_24c = ppppuVar2 + 0x2b;
  ppppuStack_250 = ppppuVar2;
  pppuStack_254 = (uint ***)0x11008c4f;
  (*(code *)(*ppppuVar2)[0x5c])();
  pppuStack_254 = (uint ***)psStack_188;
  ppppuStack_258 = (uint ****)0x11008c55;
  sVar4 = __vbaBoolStr();
  sStack_204 = -(ushort)(sVar4 == -1);
  pppuStack_254 = (uint ***)0x11008c6c;
  __vbaFreeStr();
  if (sStack_204 != 0) {
    pppuStack_254 = (uint ***)0x110030c4;
    ppppuStack_258 = (uint ****)0x11008c81;
    pppuVar6 = (uint ***)rtcFileLen();
    ppppuVar2[0x47] = pppuVar6;
  }
  ppppuStack_1d4 = ppppuVar2 + 0x25;
  auStack_1dc[0] = 0x4008;
  pppuStack_254 = (uint ***)0x1;
  ppppuStack_258 = (uint ****)auStack_1dc;
  ppppuStack_25c = (uint ****)auStack_19c;
  ppsStack_260 = (short **)0x11008cb0;
  rtcLeftCharVar();
  pppuStack_254 = (uint ***)0x11008cbc;
  __vbaVarMove();
  pppuStack_254 = (uint ***)aiStack_184;
  ppppuStack_258 = (uint ****)&psStack_188;
  ppppuStack_25c = (uint ****)0x11008cca;
  pppuStack_254 = (uint ***)__vbaStrVarVal();
  ppppuStack_258 = (uint ****)0x11008cd1;
  rtcChangeDrive();
  pppuStack_254 = (uint ***)0x11008cd6;
  __vbaFreeStr();
  pppuStack_254 = ppppuVar2[0x25];
  ppppuStack_258 = (uint ****)0x11008ce3;
  rtcChangeDir();
  pppuStack_254 = (uint ***)&psStack_188;
  ppppuStack_258 = ppppuVar2 + 0x2c;
  ppppuStack_25c = ppppuVar2;
  ppsStack_260 = (short **)0x11008cf7;
  (*(code *)(*ppppuVar2)[0x5d])();
  ppsStack_260 = (short **)psStack_188;
  ppppuStack_264 = (uint ****)0x11008cfd;
  sVar4 = __vbaBoolStr();
  sStack_204 = -(ushort)(sVar4 == -1);
  ppsStack_260 = (short **)0x11008d14;
  __vbaFreeStr();
  if (sStack_204 != 0) {
    ppsStack_260 = (short **)0x11003138;
    ppppuStack_264 = (uint ****)0x11008d29;
    pppuVar6 = (uint ***)rtcFileLen();
    ppppuVar2[0x46] = pppuVar6;
  }
  ppsStack_260 = &psStack_188;
  ppppuStack_264 = ppppuVar2 + 0x2f;
  ppppuStack_268 = ppppuVar2;
  ppsStack_26c = (short **)0x11008d43;
  (*(code *)(*ppppuVar2)[0x5e])();
  ppsStack_26c = (short **)psStack_188;
  ppppuStack_270 = (uint ****)0x11008d49;
  sVar4 = __vbaBoolStr();
  sStack_204 = -(ushort)(sVar4 == -1);
  ppsStack_26c = (short **)0x11008d60;
  __vbaFreeStr();
  if (sStack_204 != 0) {
    ppsStack_26c = (short **)0x11003150;
    ppppuStack_270 = (uint ****)0x11008d75;
    pppuVar6 = (uint ***)rtcFileLen();
    ppppuVar2[0x48] = pppuVar6;
  }
  ppsStack_26c = &psStack_188;
  ppppuStack_270 = ppppuVar2 + 0x2d;
  ppppuStack_274 = ppppuVar2;
  ppsStack_278 = (short **)0x11008d8f;
  (*(code *)(*ppppuVar2)[0x5b])();
  ppsStack_278 = (short **)psStack_188;
  ppppuStack_27c = (uint ****)0x11008d95;
  sVar4 = __vbaBoolStr();
  sStack_204 = -(ushort)(sVar4 == -1);
  ppsStack_278 = (short **)0x11008dac;
  __vbaFreeStr();
  if (sStack_204 != 0) {
    ppsStack_278 = (short **)0x1100311c;
    ppppuStack_27c = (uint ****)0x11008dc1;
    pppuVar6 = (uint ***)rtcFileLen();
    ppppuVar2[0x44] = pppuVar6;
  }
  ppsStack_278 = &psStack_188;
  ppppuStack_27c = ppppuVar2 + 0x30;
  ppppuStack_280 = ppppuVar2;
  pwStack_284 = (wchar_t *)0x11008ddb;
  (*(code *)(*ppppuVar2)[0x5f])();
  pwStack_284 = psStack_188;
  ppppuStack_288 = (uint ****)0x11008de1;
  sVar4 = __vbaBoolStr();
  pwStack_284 = L"蕦瓛树㄀ᄀᗿᅔᄀ蚉Ĥ";
  __vbaFreeStr();
  if ((short)-(uint)(sVar4 == -1) != 0) {
    pwStack_284 = L"ACCESS.LEO";
    ppppuStack_288 = (uint ****)0x11008e01;
    pppuVar6 = (uint ***)rtcFileLen();
    ppppuVar2[0x49] = pppuVar6;
  }
  iVar5 = (int)ppppuVar2[0x45] + (int)ppppuVar2[0x43];
  if (((((!SCARRY4((int)ppppuVar2[0x45],(int)ppppuVar2[0x43])) &&
        (iVar7 = iVar5 + (int)ppppuVar2[0x47], !SCARRY4(iVar5,(int)ppppuVar2[0x47]))) &&
       (iVar5 = iVar7 + (int)ppppuVar2[0x46], !SCARRY4(iVar7,(int)ppppuVar2[0x46]))) &&
      ((iVar7 = iVar5 + (int)ppppuVar2[0x44], !SCARRY4(iVar5,(int)ppppuVar2[0x44]) &&
       (iVar5 = iVar7 + (int)ppppuVar2[0x48], !SCARRY4(iVar7,(int)ppppuVar2[0x48]))))) &&
     (!SCARRY4(iVar5,(int)ppppuVar2[0x49]))) {
    ppppuVar2[0x4c] = (uint ***)(iVar5 + (int)ppppuVar2[0x49]);
    if (*(short *)(ppppuVar2 + 0xf) == -1) {
      auStack_200[0] = 0;
      pwStack_284 = (wchar_t *)auStack_200;
      ppppuStack_288 = ppppuVar2;
      ppppuStack_28c = (uint ****)0x11008e80;
      iVar5 = (*(code *)(*ppppuVar2)[0x55])();
      if (iVar5 < 0) {
        pwStack_284 = (wchar_t *)0x154;
        ppppuStack_288 = (uint ****)&DAT_11002c40;
        ppppuStack_28c = ppppuVar2;
        puStack_294 = (undefined1 *)0x11008e9a;
        puStack_290 = (undefined *)iVar5;
        __vbaHresultCheckObj();
      }
    }
    pwStack_284 = 
    L"쵨\x8f\xeb11\xf643\xf445琄贉쑍ᗿဘᄀ䶍ﾰ박\x11贑걍ᗿᇀᄀ閍ｬ\xffff赒粅\xffff僿䶍册喍劜Ѫᗿဨᄀ쒃쌔䶍诔ᠵ\x10１跖둍훿诃ࡅࢋｐࡑ喋謌쑅ʉ䶋览ъ䖋觌ࡂ䶋觐ొ䖋说\xe44d襤\r"
    ;
    __vbaExitProc();
    pwStack_284 = L"䖋謈倈凿謈ౕ䖋规謂졍䪉謄책䊉謈큍䪉謌\xf445䶋擤ඉ";
    ppppuStack_288 = (uint ****)0x11008fc7;
    __vbaFreeVar();
    pwStack_284 = L"诃ࡅࢋｐࡑ喋謌쑅ʉ䶋览ъ䖋觌ࡂ䶋觐ొ䖋说\xe44d襤\r";
    __vbaFreeVar();
    return;
  }
  pwStack_284 = L"邐邐譕菬ᓬ홨\x16搑¡";
  __vbaErrorOverflow();
  ppsVar1 = ppsStack_278;
  puStack_298 = &LAB_110016d6;
  pvStack_29c = ExceptionList;
  ppppuStack_35c = ppppuVar2;
  puStack_294 = (undefined1 *)&ppsStack_360;
  ppsStack_360 = (short **)pcVar14;
  puStack_290 = &DAT_110012b8;
  ppppuStack_28c = (uint ****)0x0;
  ppppuStack_288 = (uint ****)0x0;
  ppsStack_364 = ppsStack_278;
  ppsStack_368 = (short **)0x1100904d;
  ExceptionList = &pvStack_29c;
  ppsStack_358 = (short **)-(uint)(sVar4 == -1);
  ppppuStack_280 = (uint ****)&ppppuStack_138;
  (**(code **)(*ppsStack_278 + 2))();
  pcStack_2a4 = (code *)0x0;
  psStack_2ac = (short *)0x0;
  psStack_2b0 = (short *)0x0;
  psStack_2b4 = (short *)0x0;
  uStack_2b8 = 0;
  apsStack_2c8[0] = (short *)0x0;
  auStack_2d8[0] = 0;
  uStack_2e8 = 0;
  uStack_2f8 = 0;
  apsStack_308[0] = (short *)0x0;
  apsStack_318[0] = (short *)0x0;
  auStack_32c[0] = 0;
  uStack_330 = 0;
  ppsStack_368 = (short **)0x1;
  ppsStack_36c = (short **)0x11009088;
  __vbaOnError();
  ppsVar8 = ppsVar1 + 0x37;
  ppsStack_368 = (short **)0x11009099;
  __vbaVarCopy();
  ppsStack_368 = (short **)0x110090ac;
  __vbaStrCopy();
  pcVar14 = __vbaVarCat_exref;
  ppsVar1[0x4a] = (short *)0x0;
  *(undefined2 *)(ppsVar1 + 0x51) = 0;
  psStack_300 = ppsVar1[0x3b];
  apsStack_308[0] = (short *)0x8;
  ppsStack_360 = (short **)0x0;
  ppsStack_368 = apsStack_308;
  ppsStack_36c = apsStack_2c8;
  puStack_370 = (undefined4 *)0x110090df;
  ppsStack_364 = ppsVar8;
  ppsStack_364 = (short **)__vbaVarCat();
  ppsStack_368 = (short **)0x110090e6;
  rtcDir();
  ppsStack_360 = (short **)0x110090f1;
  __vbaStrMove();
  ppsStack_360 = (short **)0x110090fa;
  __vbaFreeVar();
  while( true ) {
    ppppuStack_35c = (uint ****)psStack_2ac;
    ppsStack_360 = (short **)0x11009104;
    iVar5 = __vbaLenBstr();
    if (iVar5 < 1) break;
    psStack_300 = (short *)&DAT_11003004;
    apsStack_308[0] = (short *)0x8;
    psStack_310 = psStack_2ac;
    apsStack_318[0] = (short *)0x8;
    ppsStack_360 = apsStack_308;
    ppsStack_364 = apsStack_2c8;
    ppsStack_368 = (short **)0x1100913b;
    ppppuStack_35c = (uint ****)ppsVar8;
    ppsStack_368 = (short **)(*pcVar14)();
    ppsStack_36c = apsStack_318;
    puStack_370 = auStack_2d8;
    pvStack_374 = (void *)0x11009149;
    ppppuStack_35c = (uint ****)(*pcVar14)();
    ppsStack_360 = &psStack_2b4;
    ppsStack_364 = (short **)0x11009154;
    ppppuStack_35c = (uint ****)__vbaStrVarVal();
    ppsStack_360 = (short **)0x1100915b;
    iVar5 = rtcFileLen();
    ppppuStack_35c = (uint ****)0x11009166;
    __vbaFreeStr();
    ppppuStack_35c = (uint ****)auStack_2d8;
    ppsStack_360 = apsStack_2c8;
    ppsStack_364 = (short **)0x2;
    ppsStack_368 = (short **)0x11009176;
    __vbaFreeVarList();
    pcVar14 = (code *)(iVar5 + (int)ppsVar1[0x4a]);
    ppsStack_414 = ppsVar8;
    if (SCARRY4(iVar5,(int)ppsVar1[0x4a])) goto LAB_1100958f;
    ppsVar1[0x4a] = (short *)pcVar14;
    uStack_2c0 = 0x80020004;
    apsStack_2c8[0] = (short *)0xa;
    ppppuStack_35c = (uint ****)0x0;
    ppsStack_360 = apsStack_2c8;
    ppsStack_364 = (short **)0x110091a5;
    rtcDir();
    ppppuStack_35c = (uint ****)0x110091b0;
    __vbaStrMove();
    ppppuStack_35c = (uint ****)0x110091b9;
    __vbaFreeVar();
    ppsStack_358 = (short **)0x110091bf;
    rtcDoEvents();
    pcVar14 = __vbaVarCat_exref;
  }
  if (((uint)*ppppuStack_274 & 1) == 0 && *(short *)(ppsVar1 + 0x51) == 0) {
    ppppuStack_35c = (uint ****)0x0;
    ppsStack_360 = (short **)0xa;
    ppsStack_364 = (short **)0x1;
    ppsStack_368 = (short **)0x8;
    ppsStack_36c = &psStack_2b0;
    puStack_370 = (undefined4 *)0x4;
    pvStack_374 = (void *)0x180;
    uStack_378 = 0x110091fa;
    __vbaRedim();
    psStack_300 = (short *)&DAT_110038d0;
    apsStack_308[0] = (short *)0x8;
    ppsStack_360 = (short **)0x10;
    ppsStack_368 = apsStack_308;
    ppsStack_36c = apsStack_2c8;
    puStack_370 = (undefined4 *)0x11009222;
    ppsStack_364 = ppsVar8;
    ppsStack_364 = (short **)__vbaVarAdd();
    ppsStack_368 = (short **)0x11009229;
    rtcDir();
    ppsStack_360 = (short **)0x11009234;
    __vbaStrMove();
    ppsStack_360 = (short **)0x1100923d;
    __vbaFreeVar();
    do {
      ppppuStack_35c = (uint ****)psStack_2ac;
      ppsStack_360 = (short **)0x11009247;
      iVar5 = __vbaLenBstr();
      pcVar11 = __vbaHresultCheckObj_exref;
      if (iVar5 < 1) {
        ppsStack_414 = ppsVar8;
        if (SBORROW2((short)pcStack_2a4,1)) goto LAB_1100958f;
        uStack_33c = 1;
        pcVar3 = (code *)0x0;
        uStack_340 = CONCAT22((short)((uint)pcStack_2a4 >> 0x10),(short)pcStack_2a4 + -1);
        goto LAB_110093f6;
      }
      ppppuStack_35c = (uint ****)0x1;
      ppsStack_360 = (short **)0x1100925b;
      rtcLeftCharBstr();
      ppsStack_358 = (short **)0x11009266;
      ppsStack_358 = (short **)__vbaStrMove();
      ppppuStack_35c = (uint ****)&DAT_110039cc;
      ppsStack_360 = (short **)0x11009272;
      iVar5 = __vbaStrCmp();
      ppsVar8 = (short **)__vbaFreeStr_exref;
      pcVar14 = (code *)-(uint)(iVar5 != 0);
      ppsStack_358 = (short **)0x11009287;
      __vbaFreeStr();
      if ((short)pcVar14 != 0) {
        psStack_300 = psStack_2ac;
        apsStack_308[0] = (short *)0x8;
        ppsStack_358 = ppsVar1 + 0x37;
        ppppuStack_35c = (uint ****)apsStack_308;
        ppsStack_360 = apsStack_2c8;
        ppsStack_364 = (short **)0x110092b8;
        ppsStack_358 = (short **)__vbaVarCat();
        ppppuStack_35c = (uint ****)0x110092bf;
        __vbaStrVarMove();
        ppsStack_358 = (short **)0x110092ca;
        __vbaStrMove();
        ppsStack_358 = (short **)auStack_32c;
        ppppuStack_35c = (uint ****)&psStack_2b4;
        ppsStack_360 = ppsVar1;
        ppsStack_364 = (short **)0x110092de;
        (**(code **)(*ppsVar1 + 0xae))();
        sVar4 = (short)auStack_32c[0];
        pcVar14 = (code *)CONCAT22((short)((uint)pcVar14 >> 0x10),(short)auStack_32c[0]);
        ppppuStack_35c = (uint ****)0x110092ea;
        __vbaFreeStr();
        ppppuStack_35c = (uint ****)0x110092f3;
        __vbaFreeVar();
        if (sVar4 != 0) {
          if ((psStack_2b0 == (short *)0x0) || (*psStack_2b0 != 1)) {
            ppsStack_358 = (short **)0x1100932d;
            __vbaGenerateBoundsError();
          }
          else {
            pcVar14 = (code *)((int)(short)pcStack_2a4 - *(int *)(psStack_2b0 + 10));
            if (*(code **)(psStack_2b0 + 8) <= pcVar14) {
              ppsStack_358 = (short **)0x1100931b;
              __vbaGenerateBoundsError();
            }
          }
          ppsStack_358 = (short **)0x1100933e;
          __vbaStrCopy();
          sVar4 = (short)pcStack_2a4;
          uVar13 = (undefined2)((uint)pcVar14 >> 0x10);
          sVar10 = (short)pcStack_2a4 + 1;
          pcVar14 = (code *)CONCAT22(uVar13,sVar10);
          ppsStack_414 = ppsVar8;
          if (SCARRY2((short)pcStack_2a4,1)) goto LAB_1100958f;
          ppppuStack_35c = (uint ****)psStack_2b0;
          ppsStack_360 = (short **)0x1100935b;
          pcStack_2a4 = pcVar14;
          iVar5 = __vbaUbound();
          if (sVar10 == iVar5) {
            ppsStack_358 = (short **)0x0;
            pcVar14 = (code *)CONCAT22(uVar13,sVar4 + 0xb);
            if (SCARRY2(sVar10,10)) goto LAB_1100958f;
            ppppuStack_35c = (uint ****)(int)(short)(sVar4 + 0xb);
            ppsStack_360 = (short **)0x1;
            ppsStack_364 = (short **)0x8;
            ppsStack_368 = &psStack_2b0;
            ppsStack_36c = (short **)0x4;
            puStack_370 = (undefined4 *)0x180;
            pvStack_374 = (void *)0x11009387;
            __vbaRedimPreserve();
          }
        }
      }
      uStack_2c0 = 0x80020004;
      apsStack_2c8[0] = (short *)0xa;
      ppsStack_358 = (short **)0x0;
      ppppuStack_35c = (uint ****)apsStack_2c8;
      ppsStack_360 = (short **)0x110093a4;
      rtcDir();
      ppsStack_358 = (short **)0x110093af;
      __vbaStrMove();
      ppsStack_358 = (short **)0x110093b8;
      __vbaFreeVar();
      uStack_354 = 0x110093be;
      rtcDoEvents();
    } while (*(short *)(ppsVar1 + 0x51) == 0);
  }
LAB_1100951f:
  ppppuStack_35c = (uint ****)0x11009525;
  __vbaExitProc();
  ppppuStack_35c = (uint ****)&LAB_11009570;
  ppsStack_360 = (short **)0x11009563;
  __vbaFreeStr();
  ppsStack_360 = &psStack_2b0;
  ppsStack_364 = (short **)0x0;
  ppsStack_368 = (short **)0x1100956f;
  __vbaAryDestruct();
  return;
}


// ---- FUN_11008ad0 @ 11008ad0

void __cdecl FUN_11008ad0(uint *param_1,undefined4 *param_2)

{
  code *pcVar1;
  short **ppsVar2;
  code *pcVar3;
  short sVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  short **ppsVar8;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  short sVar9;
  code *pcVar10;
  undefined2 uVar11;
  short **ppsStack_2e8;
  code *pcStack_2e4;
  short **ppsStack_2e0;
  undefined4 uStack_2a0;
  undefined4 uStack_290;
  undefined4 uStack_280;
  undefined4 uStack_270;
  undefined4 uStack_260;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  int iStack_248;
  undefined4 uStack_244;
  void *pvStack_240;
  undefined4 *puStack_23c;
  short **ppsStack_238;
  short **ppsStack_234;
  short **ppsStack_230;
  short **ppsStack_22c;
  short **ppsStack_228;
  short **ppsStack_224;
  undefined4 uStack_220;
  undefined4 *puStack_218;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_1fc;
  undefined4 auStack_1f8 [5];
  short *apsStack_1e4 [2];
  short *psStack_1dc;
  short *apsStack_1d4 [2];
  short *psStack_1cc;
  undefined4 uStack_1c4;
  undefined4 uStack_1b4;
  undefined4 auStack_1a4 [4];
  short *apsStack_194 [2];
  undefined4 uStack_18c;
  undefined4 uStack_184;
  short *psStack_180;
  short *psStack_17c;
  short *psStack_178;
  code *pcStack_170;
  void *pvStack_168;
  undefined1 *puStack_164;
  undefined1 *puStack_160;
  undefined *puStack_15c;
  uint *puStack_158;
  uint *puStack_154;
  wchar_t *pwStack_150;
  uint *puStack_14c;
  uint *puStack_148;
  short **ppsStack_144;
  uint *puStack_140;
  uint *puStack_13c;
  short **ppsStack_138;
  uint *puStack_134;
  uint *puStack_130;
  short **ppsStack_12c;
  uint *puStack_128;
  short **ppsStack_124;
  short **ppsStack_120;
  uint *puStack_11c;
  uint *puStack_118;
  short **ppsStack_114;
  uint *puStack_110;
  uint *puStack_10c;
  short **ppsStack_108;
  uint *puStack_104;
  short **ppsStack_100;
  short **ppsStack_fc;
  uint *puStack_f8;
  undefined4 local_cc [9];
  undefined4 local_a8 [2];
  uint *local_a0;
  undefined4 local_98;
  undefined4 local_88;
  undefined4 local_78;
  undefined4 local_68 [4];
  undefined4 local_58;
  short *local_54;
  int local_50 [4];
  undefined4 local_40;
  undefined4 local_30;
  void *pvStack_20;
  undefined1 *puStack_1c;
  undefined1 *local_18;
  undefined *local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  puStack_1c = &LAB_110016d6;
  pvStack_20 = ExceptionList;
  local_18 = &stack0xffffff0c;
  local_14 = &DAT_11001290;
  local_10 = 0;
  local_c = 0;
  puStack_f8 = param_1;
  ppsStack_fc = (short **)0x11008b0d;
  ExceptionList = &pvStack_20;
  (**(code **)(*param_1 + 4))();
  local_30 = 0;
  local_40 = 0;
  local_50[0] = 0;
  local_54 = (short *)0x0;
  local_58 = 0;
  local_68[0] = 0;
  local_78 = 0;
  local_88 = 0;
  local_98 = 0;
  local_a8[0] = 0;
  local_cc[0] = 0;
  *param_2 = 0;
  ppsStack_fc = (short **)0x1;
  ppsStack_100 = (short **)0x11008b47;
  __vbaOnError();
  ppsStack_fc = (short **)0x1;
  puStack_104 = local_68;
  ppsStack_108 = (short **)0x11008b5a;
  ppsStack_100 = (short **)(param_1 + 0x21);
  rtcLeftCharVar();
  ppsStack_fc = (short **)0x11008b66;
  __vbaVarMove();
  ppsStack_fc = (short **)local_50;
  ppsStack_100 = &local_54;
  puStack_104 = (uint *)0x11008b74;
  ppsStack_fc = (short **)__vbaStrVarVal();
  ppsStack_100 = (short **)0x11008b7b;
  rtcChangeDrive();
  pcVar10 = __vbaFreeStr_exref;
  ppsStack_fc = (short **)0x11008b86;
  __vbaFreeStr();
  ppsStack_100 = &local_54;
  puStack_104 = (uint *)0x11008b91;
  ppsStack_fc = (short **)(param_1 + 0x21);
  ppsStack_fc = (short **)__vbaStrVarVal();
  ppsStack_100 = (short **)0x11008b98;
  rtcChangeDir();
  ppsStack_fc = (short **)0x11008b9d;
  __vbaFreeStr();
  ppsStack_fc = &local_54;
  ppsStack_100 = (short **)(param_1 + 0x2e);
  puStack_104 = param_1;
  ppsStack_108 = (short **)0x11008bb1;
  (**(code **)(*param_1 + 0x168))();
  ppsStack_108 = (short **)local_54;
  puStack_10c = (uint *)0x11008bbd;
  sVar4 = __vbaBoolStr();
  ppsStack_108 = (short **)0x11008bd4;
  __vbaFreeStr();
  if (sVar4 == -1) {
    ppsStack_108 = (short **)0x110030e4;
    puStack_10c = (uint *)0x11008be9;
    uVar5 = rtcFileLen();
    param_1[0x43] = uVar5;
  }
  ppsStack_108 = &local_54;
  puStack_10c = param_1 + 0x2a;
  puStack_110 = param_1;
  ppsStack_114 = (short **)0x11008c03;
  (**(code **)(*param_1 + 0x164))();
  ppsStack_114 = (short **)local_54;
  puStack_118 = (uint *)0x11008c09;
  sVar4 = __vbaBoolStr();
  ppsStack_114 = (short **)0x11008c20;
  __vbaFreeStr();
  if (sVar4 == -1) {
    ppsStack_114 = (short **)0x110030a4;
    puStack_118 = (uint *)0x11008c35;
    uVar5 = rtcFileLen();
    param_1[0x45] = uVar5;
  }
  ppsStack_114 = &local_54;
  puStack_118 = param_1 + 0x2b;
  puStack_11c = param_1;
  ppsStack_120 = (short **)0x11008c4f;
  (**(code **)(*param_1 + 0x170))();
  ppsStack_120 = (short **)local_54;
  ppsStack_124 = (short **)0x11008c55;
  sVar4 = __vbaBoolStr();
  ppsStack_120 = (short **)0x11008c6c;
  __vbaFreeStr();
  if (sVar4 == -1) {
    ppsStack_120 = (short **)0x110030c4;
    ppsStack_124 = (short **)0x11008c81;
    uVar5 = rtcFileLen();
    param_1[0x47] = uVar5;
  }
  local_a0 = param_1 + 0x25;
  local_a8[0] = 0x4008;
  ppsStack_120 = (short **)0x1;
  ppsStack_124 = (short **)local_a8;
  puStack_128 = local_68;
  ppsStack_12c = (short **)0x11008cb0;
  rtcLeftCharVar();
  ppsStack_120 = (short **)0x11008cbc;
  __vbaVarMove();
  ppsStack_120 = (short **)local_50;
  ppsStack_124 = &local_54;
  puStack_128 = (uint *)0x11008cca;
  ppsStack_120 = (short **)__vbaStrVarVal();
  ppsStack_124 = (short **)0x11008cd1;
  rtcChangeDrive();
  ppsStack_120 = (short **)0x11008cd6;
  __vbaFreeStr();
  ppsStack_120 = (short **)param_1[0x25];
  ppsStack_124 = (short **)0x11008ce3;
  rtcChangeDir();
  ppsStack_120 = &local_54;
  ppsStack_124 = (short **)(param_1 + 0x2c);
  puStack_128 = param_1;
  ppsStack_12c = (short **)0x11008cf7;
  (**(code **)(*param_1 + 0x174))();
  ppsStack_12c = (short **)local_54;
  puStack_130 = (uint *)0x11008cfd;
  sVar4 = __vbaBoolStr();
  ppsStack_12c = (short **)0x11008d14;
  __vbaFreeStr();
  if (sVar4 == -1) {
    ppsStack_12c = (short **)0x11003138;
    puStack_130 = (uint *)0x11008d29;
    uVar5 = rtcFileLen();
    param_1[0x46] = uVar5;
  }
  ppsStack_12c = &local_54;
  puStack_130 = param_1 + 0x2f;
  puStack_134 = param_1;
  ppsStack_138 = (short **)0x11008d43;
  (**(code **)(*param_1 + 0x178))();
  ppsStack_138 = (short **)local_54;
  puStack_13c = (uint *)0x11008d49;
  sVar4 = __vbaBoolStr();
  ppsStack_138 = (short **)0x11008d60;
  __vbaFreeStr();
  if (sVar4 == -1) {
    ppsStack_138 = (short **)0x11003150;
    puStack_13c = (uint *)0x11008d75;
    uVar5 = rtcFileLen();
    param_1[0x48] = uVar5;
  }
  ppsStack_138 = &local_54;
  puStack_13c = param_1 + 0x2d;
  puStack_140 = param_1;
  ppsStack_144 = (short **)0x11008d8f;
  (**(code **)(*param_1 + 0x16c))();
  ppsStack_144 = (short **)local_54;
  puStack_148 = (uint *)0x11008d95;
  sVar4 = __vbaBoolStr();
  ppsStack_144 = (short **)0x11008dac;
  __vbaFreeStr();
  if (sVar4 == -1) {
    ppsStack_144 = (short **)0x1100311c;
    puStack_148 = (uint *)0x11008dc1;
    uVar5 = rtcFileLen();
    param_1[0x44] = uVar5;
  }
  ppsStack_144 = &local_54;
  puStack_148 = param_1 + 0x30;
  puStack_14c = param_1;
  pwStack_150 = (wchar_t *)0x11008ddb;
  (**(code **)(*param_1 + 0x17c))();
  pwStack_150 = local_54;
  puStack_154 = (uint *)0x11008de1;
  sVar4 = __vbaBoolStr();
  pwStack_150 = L"蕦瓛树㄀ᄀᗿᅔᄀ蚉Ĥ";
  __vbaFreeStr();
  if ((short)-(uint)(sVar4 == -1) != 0) {
    pwStack_150 = L"ACCESS.LEO";
    puStack_154 = (uint *)0x11008e01;
    uVar5 = rtcFileLen();
    param_1[0x49] = uVar5;
  }
  iVar6 = param_1[0x45] + param_1[0x43];
  if (((((!SCARRY4(param_1[0x45],param_1[0x43])) &&
        (iVar7 = iVar6 + param_1[0x47], !SCARRY4(iVar6,param_1[0x47]))) &&
       (iVar6 = iVar7 + param_1[0x46], !SCARRY4(iVar7,param_1[0x46]))) &&
      ((iVar7 = iVar6 + param_1[0x44], !SCARRY4(iVar6,param_1[0x44]) &&
       (iVar6 = iVar7 + param_1[0x48], !SCARRY4(iVar7,param_1[0x48]))))) &&
     (!SCARRY4(iVar6,param_1[0x49]))) {
    param_1[0x4c] = iVar6 + param_1[0x49];
    if ((short)param_1[0xf] == -1) {
      local_cc[0] = 0;
      pwStack_150 = (wchar_t *)local_cc;
      puStack_154 = param_1;
      puStack_158 = (uint *)0x11008e80;
      iVar6 = (**(code **)(*param_1 + 0x154))();
      if (iVar6 < 0) {
        pwStack_150 = (wchar_t *)0x154;
        puStack_154 = (uint *)&DAT_11002c40;
        puStack_158 = param_1;
        puStack_160 = (undefined1 *)0x11008e9a;
        puStack_15c = (undefined *)iVar6;
        __vbaHresultCheckObj();
      }
    }
    pwStack_150 = 
    L"쵨\x8f\xeb11\xf643\xf445琄贉쑍ᗿဘᄀ䶍ﾰ박\x11贑걍ᗿᇀᄀ閍ｬ\xffff赒粅\xffff僿䶍册喍劜Ѫᗿဨᄀ쒃쌔䶍诔ᠵ\x10１跖둍훿诃ࡅࢋｐࡑ喋謌쑅ʉ䶋览ъ䖋觌ࡂ䶋觐ొ䖋说\xe44d襤\r"
    ;
    __vbaExitProc();
    pwStack_150 = L"䖋謈倈凿謈ౕ䖋规謂졍䪉謄책䊉謈큍䪉謌\xf445䶋擤ඉ";
    puStack_154 = (uint *)0x11008fc7;
    __vbaFreeVar();
    pwStack_150 = L"诃ࡅࢋｐࡑ喋謌쑅ʉ䶋览ъ䖋觌ࡂ䶋觐ొ䖋说\xe44d襤\r";
    __vbaFreeVar();
    return;
  }
  pwStack_150 = L"邐邐譕菬ᓬ홨\x16搑¡";
  __vbaErrorOverflow();
  ppsVar2 = ppsStack_144;
  puStack_164 = &LAB_110016d6;
  pvStack_168 = ExceptionList;
  ppsStack_228 = (short **)param_1;
  puStack_160 = (undefined1 *)&ppsStack_22c;
  ppsStack_22c = (short **)pcVar10;
  puStack_15c = &DAT_110012b8;
  puStack_158 = (uint *)0x0;
  puStack_154 = (uint *)0x0;
  ppsStack_230 = ppsStack_144;
  ppsStack_234 = (short **)0x1100904d;
  ExceptionList = &pvStack_168;
  ppsStack_224 = (short **)-(uint)(sVar4 == -1);
  puStack_14c = (uint *)&stack0xfffffffc;
  (**(code **)(*ppsStack_144 + 2))();
  pcStack_170 = (code *)0x0;
  psStack_178 = (short *)0x0;
  psStack_17c = (short *)0x0;
  psStack_180 = (short *)0x0;
  uStack_184 = 0;
  apsStack_194[0] = (short *)0x0;
  auStack_1a4[0] = 0;
  uStack_1b4 = 0;
  uStack_1c4 = 0;
  apsStack_1d4[0] = (short *)0x0;
  apsStack_1e4[0] = (short *)0x0;
  auStack_1f8[0] = 0;
  uStack_1fc = 0;
  ppsStack_234 = (short **)0x1;
  ppsStack_238 = (short **)0x11009088;
  __vbaOnError();
  ppsVar8 = ppsVar2 + 0x37;
  ppsStack_234 = (short **)0x11009099;
  __vbaVarCopy();
  ppsStack_234 = (short **)0x110090ac;
  __vbaStrCopy();
  pcVar10 = __vbaVarCat_exref;
  ppsVar2[0x4a] = (short *)0x0;
  *(undefined2 *)(ppsVar2 + 0x51) = 0;
  psStack_1cc = ppsVar2[0x3b];
  apsStack_1d4[0] = (short *)0x8;
  ppsStack_22c = (short **)0x0;
  ppsStack_234 = apsStack_1d4;
  ppsStack_238 = apsStack_194;
  puStack_23c = (undefined4 *)0x110090df;
  ppsStack_230 = ppsVar8;
  ppsStack_230 = (short **)__vbaVarCat();
  ppsStack_234 = (short **)0x110090e6;
  rtcDir();
  ppsStack_22c = (short **)0x110090f1;
  __vbaStrMove();
  ppsStack_22c = (short **)0x110090fa;
  __vbaFreeVar();
  while( true ) {
    ppsStack_228 = (short **)psStack_178;
    ppsStack_22c = (short **)0x11009104;
    iVar6 = __vbaLenBstr();
    if (iVar6 < 1) break;
    psStack_1cc = (short *)&DAT_11003004;
    apsStack_1d4[0] = (short *)0x8;
    psStack_1dc = psStack_178;
    apsStack_1e4[0] = (short *)0x8;
    ppsStack_22c = apsStack_1d4;
    ppsStack_230 = apsStack_194;
    ppsStack_234 = (short **)0x1100913b;
    ppsStack_228 = ppsVar8;
    ppsStack_234 = (short **)(*pcVar10)();
    ppsStack_238 = apsStack_1e4;
    puStack_23c = auStack_1a4;
    pvStack_240 = (void *)0x11009149;
    ppsStack_228 = (short **)(*pcVar10)();
    ppsStack_22c = &psStack_180;
    ppsStack_230 = (short **)0x11009154;
    ppsStack_228 = (short **)__vbaStrVarVal();
    ppsStack_22c = (short **)0x1100915b;
    iVar6 = rtcFileLen();
    ppsStack_228 = (short **)0x11009166;
    __vbaFreeStr();
    ppsStack_228 = (short **)auStack_1a4;
    ppsStack_22c = apsStack_194;
    ppsStack_230 = (short **)0x2;
    ppsStack_234 = (short **)0x11009176;
    __vbaFreeVarList();
    pcVar10 = (code *)(iVar6 + (int)ppsVar2[0x4a]);
    ppsStack_2e0 = ppsVar8;
    if (SCARRY4(iVar6,(int)ppsVar2[0x4a])) goto LAB_1100958f;
    ppsVar2[0x4a] = (short *)pcVar10;
    uStack_18c = 0x80020004;
    apsStack_194[0] = (short *)0xa;
    ppsStack_228 = (short **)0x0;
    ppsStack_22c = apsStack_194;
    ppsStack_230 = (short **)0x110091a5;
    rtcDir();
    ppsStack_228 = (short **)0x110091b0;
    __vbaStrMove();
    ppsStack_228 = (short **)0x110091b9;
    __vbaFreeVar();
    ppsStack_224 = (short **)0x110091bf;
    rtcDoEvents();
    pcVar10 = __vbaVarCat_exref;
  }
  if ((*puStack_140 & 1) == 0 && *(short *)(ppsVar2 + 0x51) == 0) {
    ppsStack_228 = (short **)0x0;
    ppsStack_22c = (short **)0xa;
    ppsStack_230 = (short **)0x1;
    ppsStack_234 = (short **)0x8;
    ppsStack_238 = &psStack_17c;
    puStack_23c = (undefined4 *)0x4;
    pvStack_240 = (void *)0x180;
    uStack_244 = 0x110091fa;
    __vbaRedim();
    psStack_1cc = (short *)&DAT_110038d0;
    apsStack_1d4[0] = (short *)0x8;
    ppsStack_22c = (short **)0x10;
    ppsStack_234 = apsStack_1d4;
    ppsStack_238 = apsStack_194;
    puStack_23c = (undefined4 *)0x11009222;
    ppsStack_230 = ppsVar8;
    ppsStack_230 = (short **)__vbaVarAdd();
    ppsStack_234 = (short **)0x11009229;
    rtcDir();
    ppsStack_22c = (short **)0x11009234;
    __vbaStrMove();
    ppsStack_22c = (short **)0x1100923d;
    __vbaFreeVar();
    do {
      ppsStack_228 = (short **)psStack_178;
      ppsStack_22c = (short **)0x11009247;
      iVar6 = __vbaLenBstr();
      pcVar1 = __vbaHresultCheckObj_exref;
      if (iVar6 < 1) {
        ppsStack_2e0 = ppsVar8;
        if (SBORROW2((short)pcStack_170,1)) goto LAB_1100958f;
        uStack_208 = 1;
        pcVar3 = (code *)0x0;
        uStack_20c = CONCAT22((short)((uint)pcStack_170 >> 0x10),(short)pcStack_170 + -1);
        goto LAB_110093f6;
      }
      ppsStack_228 = (short **)0x1;
      ppsStack_22c = (short **)0x1100925b;
      rtcLeftCharBstr();
      ppsStack_224 = (short **)0x11009266;
      ppsStack_224 = (short **)__vbaStrMove();
      ppsStack_228 = (short **)&DAT_110039cc;
      ppsStack_22c = (short **)0x11009272;
      iVar6 = __vbaStrCmp();
      ppsVar8 = (short **)__vbaFreeStr_exref;
      pcVar10 = (code *)-(uint)(iVar6 != 0);
      ppsStack_224 = (short **)0x11009287;
      __vbaFreeStr();
      if ((short)pcVar10 != 0) {
        psStack_1cc = psStack_178;
        apsStack_1d4[0] = (short *)0x8;
        ppsStack_224 = ppsVar2 + 0x37;
        ppsStack_228 = apsStack_1d4;
        ppsStack_22c = apsStack_194;
        ppsStack_230 = (short **)0x110092b8;
        ppsStack_224 = (short **)__vbaVarCat();
        ppsStack_228 = (short **)0x110092bf;
        __vbaStrVarMove();
        ppsStack_224 = (short **)0x110092ca;
        __vbaStrMove();
        ppsStack_224 = (short **)auStack_1f8;
        ppsStack_228 = &psStack_180;
        ppsStack_22c = ppsVar2;
        ppsStack_230 = (short **)0x110092de;
        (**(code **)(*ppsVar2 + 0xae))();
        sVar4 = (short)auStack_1f8[0];
        pcVar10 = (code *)CONCAT22((short)((uint)pcVar10 >> 0x10),(short)auStack_1f8[0]);
        ppsStack_228 = (short **)0x110092ea;
        __vbaFreeStr();
        ppsStack_228 = (short **)0x110092f3;
        __vbaFreeVar();
        if (sVar4 != 0) {
          if ((psStack_17c == (short *)0x0) || (*psStack_17c != 1)) {
            ppsStack_224 = (short **)0x1100932d;
            __vbaGenerateBoundsError();
          }
          else {
            pcVar10 = (code *)((int)(short)pcStack_170 - *(int *)(psStack_17c + 10));
            if (*(code **)(psStack_17c + 8) <= pcVar10) {
              ppsStack_224 = (short **)0x1100931b;
              __vbaGenerateBoundsError();
            }
          }
          ppsStack_224 = (short **)0x1100933e;
          __vbaStrCopy();
          sVar4 = (short)pcStack_170;
          uVar11 = (undefined2)((uint)pcVar10 >> 0x10);
          sVar9 = (short)pcStack_170 + 1;
          pcVar10 = (code *)CONCAT22(uVar11,sVar9);
          ppsStack_2e0 = ppsVar8;
          if (SCARRY2((short)pcStack_170,1)) goto LAB_1100958f;
          ppsStack_228 = (short **)psStack_17c;
          ppsStack_22c = (short **)0x1100935b;
          pcStack_170 = pcVar10;
          iVar6 = __vbaUbound();
          if (sVar9 == iVar6) {
            ppsStack_224 = (short **)0x0;
            pcVar10 = (code *)CONCAT22(uVar11,sVar4 + 0xb);
            if (SCARRY2(sVar9,10)) goto LAB_1100958f;
            ppsStack_228 = (short **)(int)(short)(sVar4 + 0xb);
            ppsStack_22c = (short **)0x1;
            ppsStack_230 = (short **)0x8;
            ppsStack_234 = &psStack_17c;
            ppsStack_238 = (short **)0x4;
            puStack_23c = (undefined4 *)0x180;
            pvStack_240 = (void *)0x11009387;
            __vbaRedimPreserve();
          }
        }
      }
      uStack_18c = 0x80020004;
      apsStack_194[0] = (short *)0xa;
      ppsStack_224 = (short **)0x0;
      ppsStack_228 = apsStack_194;
      ppsStack_22c = (short **)0x110093a4;
      rtcDir();
      ppsStack_224 = (short **)0x110093af;
      __vbaStrMove();
      ppsStack_224 = (short **)0x110093b8;
      __vbaFreeVar();
      uStack_220 = 0x110093be;
      rtcDoEvents();
    } while (*(short *)(ppsVar2 + 0x51) == 0);
  }
LAB_1100951f:
  ppsStack_228 = (short **)0x11009525;
  __vbaExitProc();
  ppsStack_228 = (short **)&LAB_11009570;
  ppsStack_22c = (short **)0x11009563;
  __vbaFreeStr();
  ppsStack_22c = &psStack_17c;
  ppsStack_230 = (short **)0x0;
  ppsStack_234 = (short **)0x1100956f;
  __vbaAryDestruct();
  return;
  while( true ) {
    uStack_1fc = 0;
    ppsStack_228 = (short **)&uStack_1fc;
    ppsStack_22c = ppsVar2;
    ppsStack_230 = (short **)0x11009419;
    ppsVar8 = (short **)(**(code **)(*ppsVar2 + 0xaa))();
    uVar11 = extraout_var;
    if ((int)ppsVar8 < 0) {
      ppsStack_228 = (short **)0x154;
      ppsStack_22c = (short **)&DAT_11002c40;
      ppsStack_230 = ppsVar2;
      ppsStack_238 = (short **)0x1100942b;
      ppsStack_234 = ppsVar8;
      __vbaHresultCheckObj();
      uVar11 = extraout_var_00;
    }
    if (*(short *)(ppsVar2 + 0x51) != 0) goto LAB_1100951f;
    pcVar3 = (code *)CONCAT22(uVar11,(short)uStack_208 + sVar4);
    if (SCARRY2((short)uStack_208,sVar4)) break;
LAB_110093f6:
    pcVar10 = pcVar3;
    sVar4 = (short)pcVar10;
    ppsStack_2e0 = (short **)pcVar1;
    if ((short)uStack_20c < sVar4) {
      if (!SCARRY4((int)ppsVar2[0x4a],(int)ppsVar2[0x4c])) {
        ppsVar2[0x4c] = (short *)((int)ppsVar2[0x4a] + (int)ppsVar2[0x4c]);
        goto LAB_1100951f;
      }
      break;
    }
  }
LAB_1100958f:
  ppsStack_228 = (short **)0x11009595;
  __vbaErrorOverflow();
  puStack_23c = (undefined4 *)&LAB_110016d6;
  pvStack_240 = ExceptionList;
  ppsStack_238 = (short **)&ppsStack_2e8;
  ppsStack_2e8 = ppsVar2;
  ppsStack_234 = (short **)&DAT_110012e0;
  ppsStack_230 = (short **)0x0;
  ppsStack_22c = (short **)0x0;
  iStack_248 = 0;
  uStack_24c = 0;
  uStack_250 = 0;
  uStack_260 = 0;
  uStack_270 = 0;
  uStack_280 = 0;
  uStack_290 = 0;
  uStack_2a0 = 0;
  ExceptionList = &pvStack_240;
  pcStack_2e4 = pcVar10;
  ppsStack_224 = (short **)&puStack_14c;
  __vbaOnError(1);
  rtcGetFileAttr(*puStack_218);
  uVar5 = __vbaI2I4();
  iStack_248 = -((uVar5 & 0x10) >> 4);
  ppsStack_2e8 = (short **)0x11009619;
  __vbaExitProc();
  return;
}


// ---- FUN_11009010 @ 11009010

/* WARNING: Removing unreachable block (ram,0x110092fc) */
/* WARNING: Removing unreachable block (ram,0x11009303) */
/* WARNING: Removing unreachable block (ram,0x11009327) */
/* WARNING: Removing unreachable block (ram,0x11009309) */
/* WARNING: Removing unreachable block (ram,0x11009315) */
/* WARNING: Removing unreachable block (ram,0x1100931e) */
/* WARNING: Removing unreachable block (ram,0x11009330) */
/* WARNING: Removing unreachable block (ram,0x1100934c) */
/* WARNING: Removing unreachable block (ram,0x11009362) */
/* WARNING: Removing unreachable block (ram,0x1100936e) */

void __cdecl FUN_11009010(int *param_1,uint *param_2)

{
  code *pcVar1;
  code *pcVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 uVar6;
  code *pcVar7;
  short sVar8;
  code *pcVar9;
  int *piStack_1a0;
  code *pcStack_19c;
  code *pcStack_198;
  undefined4 uStack_158;
  undefined4 uStack_148;
  undefined4 uStack_138;
  undefined4 uStack_128;
  undefined4 uStack_118;
  undefined4 uStack_108;
  undefined4 uStack_104;
  int iStack_100;
  undefined4 uStack_fc;
  void *pvStack_f8;
  undefined4 *puStack_f4;
  undefined4 *puStack_f0;
  undefined4 *puStack_ec;
  code *pcStack_e8;
  undefined4 *puStack_d0;
  undefined4 local_9c [2];
  undefined *local_94;
  undefined4 local_8c [2];
  undefined *local_84;
  undefined4 local_7c;
  undefined4 local_6c;
  undefined4 local_5c [4];
  undefined4 local_4c [2];
  undefined4 local_44;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined *local_30;
  undefined4 local_28;
  void *pvStack_20;
  undefined1 *puStack_1c;
  undefined1 *local_18;
  undefined *local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  puStack_1c = &LAB_110016d6;
  pvStack_20 = ExceptionList;
  local_18 = &stack0xffffff1c;
  local_14 = &DAT_110012b8;
  local_10 = 0;
  local_c = 0;
  pcStack_e8 = (code *)param_1;
  puStack_ec = (undefined4 *)0x1100904d;
  ExceptionList = &pvStack_20;
  (**(code **)(*param_1 + 4))();
  local_28 = 0;
  local_30 = (undefined *)0x0;
  local_34 = 0;
  local_38 = 0;
  local_3c = 0;
  local_4c[0] = 0;
  local_5c[0] = 0;
  local_6c = 0;
  local_7c = 0;
  local_8c[0] = 0;
  local_9c[0] = 0;
  puStack_ec = (undefined4 *)0x1;
  puStack_f0 = (undefined4 *)0x11009088;
  __vbaOnError();
  pcVar7 = (code *)(param_1 + 0x37);
  puStack_ec = (undefined4 *)0x11009099;
  __vbaVarCopy();
  puStack_ec = (undefined4 *)0x110090ac;
  __vbaStrCopy();
  param_1[0x4a] = 0;
  *(undefined2 *)(param_1 + 0x51) = 0;
  pcVar9 = __vbaVarCat_exref;
  local_84 = (undefined *)param_1[0x3b];
  local_8c[0] = 8;
  puStack_ec = local_8c;
  puStack_f0 = local_4c;
  puStack_f4 = (undefined4 *)0x110090df;
  pcStack_e8 = pcVar7;
  pcStack_e8 = (code *)__vbaVarCat();
  puStack_ec = (undefined4 *)0x110090e6;
  rtcDir();
  __vbaStrMove();
  __vbaFreeVar();
  while (iVar4 = __vbaLenBstr(), 0 < iVar4) {
    local_84 = &DAT_11003004;
    local_8c[0] = 8;
    local_94 = local_30;
    local_9c[0] = 8;
    pcStack_e8 = (code *)local_4c;
    puStack_ec = (undefined4 *)0x1100913b;
    puStack_ec = (undefined4 *)(*pcVar9)();
    puStack_f0 = local_9c;
    puStack_f4 = local_5c;
    pvStack_f8 = (void *)0x11009149;
    (*pcVar9)();
    pcStack_e8 = (code *)0x11009154;
    __vbaStrVarVal();
    iVar4 = rtcFileLen();
    __vbaFreeStr();
    pcStack_e8 = (code *)0x2;
    puStack_ec = (undefined4 *)0x11009176;
    __vbaFreeVarList();
    pcVar9 = (code *)(iVar4 + param_1[0x4a]);
    if (SCARRY4(iVar4,param_1[0x4a])) goto LAB_1100958f;
    param_1[0x4a] = (int)pcVar9;
    local_44 = 0x80020004;
    local_4c[0] = 10;
    pcStack_e8 = (code *)0x110091a5;
    rtcDir();
    __vbaStrMove();
    __vbaFreeVar();
    rtcDoEvents();
    pcVar9 = __vbaVarCat_exref;
  }
  if ((*param_2 & 1) == 0 && (short)param_1[0x51] == 0) {
    pcStack_e8 = (code *)0x1;
    puStack_ec = (undefined4 *)0x8;
    puStack_f0 = &local_34;
    puStack_f4 = (undefined4 *)0x4;
    pvStack_f8 = (void *)0x180;
    uStack_fc = 0x110091fa;
    __vbaRedim();
    local_84 = &DAT_110038d0;
    local_8c[0] = 8;
    puStack_ec = local_8c;
    puStack_f0 = local_4c;
    puStack_f4 = (undefined4 *)0x11009222;
    pcStack_e8 = pcVar7;
    pcStack_e8 = (code *)__vbaVarAdd();
    puStack_ec = (undefined4 *)0x11009229;
    rtcDir();
    __vbaStrMove();
    __vbaFreeVar();
    do {
      iVar4 = __vbaLenBstr();
      pcVar1 = __vbaHresultCheckObj_exref;
      if (iVar4 < 1) {
        sVar3 = (short)local_28;
        if (SBORROW2(sVar3,1)) goto LAB_1100958f;
        pcVar2 = (code *)0x0;
        goto LAB_110093f6;
      }
      rtcLeftCharBstr();
      __vbaStrMove();
      iVar4 = __vbaStrCmp();
      pcVar7 = __vbaFreeStr_exref;
      pcVar9 = (code *)-(uint)(iVar4 != 0);
      __vbaFreeStr();
      if ((short)pcVar9 != 0) {
        local_84 = local_30;
        local_8c[0] = 8;
        pcStack_e8 = (code *)0x110092b8;
        __vbaVarCat();
        __vbaStrVarMove();
        __vbaStrMove();
        pcStack_e8 = (code *)0x110092de;
        (**(code **)(*param_1 + 0x15c))();
        pcVar9 = (code *)((uint)pcVar9 & 0xffff0000);
        __vbaFreeStr();
        __vbaFreeVar();
      }
      local_44 = 0x80020004;
      local_4c[0] = 10;
      rtcDir();
      __vbaStrMove();
      __vbaFreeVar();
      rtcDoEvents();
    } while ((short)param_1[0x51] == 0);
  }
LAB_1100951f:
  __vbaExitProc();
  __vbaFreeStr();
  pcStack_e8 = (code *)0x0;
  puStack_ec = (undefined4 *)0x1100956f;
  __vbaAryDestruct();
  return;
  while( true ) {
    pcStack_e8 = (code *)0x11009419;
    iVar4 = (**(code **)(*param_1 + 0x154))();
    uVar6 = extraout_var;
    if (iVar4 < 0) {
      pcStack_e8 = (code *)param_1;
      puStack_f0 = (undefined4 *)0x1100942b;
      puStack_ec = (undefined4 *)iVar4;
      __vbaHresultCheckObj();
      uVar6 = extraout_var_00;
    }
    if ((short)param_1[0x51] != 0) goto LAB_1100951f;
    pcVar2 = (code *)CONCAT22(uVar6,sVar8 + 1);
    if (SCARRY2(sVar8,1)) break;
LAB_110093f6:
    pcVar9 = pcVar2;
    sVar8 = (short)pcVar9;
    pcVar7 = pcVar1;
    if ((short)(sVar3 + -1) < sVar8) {
      if (!SCARRY4(param_1[0x4a],param_1[0x4c])) {
        param_1[0x4c] = param_1[0x4a] + param_1[0x4c];
        goto LAB_1100951f;
      }
      break;
    }
  }
LAB_1100958f:
  __vbaErrorOverflow();
  puStack_f4 = (undefined4 *)&LAB_110016d6;
  pvStack_f8 = ExceptionList;
  puStack_f0 = &piStack_1a0;
  piStack_1a0 = param_1;
  puStack_ec = (undefined4 *)&DAT_110012e0;
  pcStack_e8 = (code *)0x0;
  iStack_100 = 0;
  uStack_104 = 0;
  uStack_108 = 0;
  uStack_118 = 0;
  uStack_128 = 0;
  uStack_138 = 0;
  uStack_148 = 0;
  uStack_158 = 0;
  ExceptionList = &pvStack_f8;
  pcStack_19c = pcVar9;
  pcStack_198 = pcVar7;
  __vbaOnError(1);
  rtcGetFileAttr(*puStack_d0);
  uVar5 = __vbaI2I4();
  iStack_100 = -((uVar5 & 0x10) >> 4);
  piStack_1a0 = (int *)0x11009619;
  __vbaExitProc();
  return;
}


// ---- FUN_110095a0 @ 110095a0

void __cdecl FUN_110095a0(undefined4 param_1,undefined4 *param_2)

{
  void *pvStack_20;
  undefined1 *puStack_1c;
  undefined1 *local_18;
  undefined *local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  puStack_1c = &LAB_110016d6;
  pvStack_20 = ExceptionList;
  local_18 = &stack0xffffff38;
  local_14 = &DAT_110012e0;
  local_10 = 0;
  local_c = 0;
  ExceptionList = &pvStack_20;
  __vbaOnError(1);
  rtcGetFileAttr(*param_2);
  __vbaI2I4();
  __vbaExitProc();
  return;
}


// ---- FUN_11009730 @ 11009730

void __cdecl FUN_11009730(int param_1,undefined4 param_2,undefined4 *param_3)

{
  longlong lVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uStack_1b0;
  int iStack_1ac;
  code *pcStack_1a8;
  undefined4 auStack_168 [2];
  int *piStack_160;
  undefined4 uStack_158;
  undefined4 uStack_148;
  undefined4 uStack_138;
  undefined4 uStack_128;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  void *pvStack_10c;
  undefined1 *puStack_108;
  undefined1 *puStack_104;
  undefined *puStack_100;
  undefined4 *puStack_fc;
  undefined4 *puStack_f8;
  undefined4 *puStack_f4;
  undefined4 local_b4 [2];
  wchar_t *local_ac;
  undefined4 local_a4;
  wchar_t *local_9c;
  undefined4 local_94;
  undefined4 local_84 [4];
  undefined4 local_74 [2];
  undefined4 local_6c;
  undefined4 local_64 [4];
  undefined4 local_54;
  undefined4 local_50;
  int local_4c;
  undefined *local_48;
  undefined4 local_44;
  undefined4 local_40;
  int local_3c;
  undefined4 local_38;
  int local_28 [2];
  void *pvStack_20;
  undefined1 *puStack_1c;
  undefined1 *local_18;
  undefined *local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  puStack_1c = &LAB_110016d6;
  pvStack_20 = ExceptionList;
  local_18 = &stack0xffffff10;
  local_14 = &DAT_11001308;
  local_10 = 0;
  local_c = 0;
  local_28[1] = 0;
  local_28[0] = 0;
  local_38 = 0;
  local_3c = 0;
  local_40 = 0;
  local_44 = 0;
  local_48 = (undefined *)0x0;
  local_4c = 0;
  local_50 = 0;
  local_54 = 0;
  local_64[0] = 0;
  local_74[0] = 0;
  local_84[0] = 0;
  local_94 = 0;
  local_a4 = 0;
  local_b4[0] = 0;
  puStack_f4 = (undefined4 *)0x110097b1;
  ExceptionList = &pvStack_20;
  __vbaStrCopy();
  *param_3 = 0;
  __vbaOnError();
  puStack_f4 = local_64;
  puStack_f8 = (undefined4 *)0x110097d1;
  rtcLeftCharVar();
  __vbaStrVarMove();
  pcVar2 = __vbaStrMove_exref;
  __vbaStrMove();
  __vbaFreeVar();
  __vbaStrCopy();
  puStack_f4 = &local_50;
  puStack_f8 = (undefined4 *)0x11009817;
  __vbaStrToAnsi();
  puStack_f4 = (undefined4 *)0x1100981d;
  iVar3 = FUN_11002d0c();
  puStack_f4 = (undefined4 *)0x11009825;
  __vbaSetSystemError();
  puStack_f4 = (undefined4 *)local_50;
  puStack_f8 = &local_48;
  puStack_fc = (undefined4 *)0x11009833;
  __vbaStrToUnicode();
  puStack_f4 = (undefined4 *)0x1100983c;
  __vbaFreeStr();
  if (iVar3 == 0) {
    puStack_f4 = (undefined4 *)0x0;
    puStack_f8 = (undefined4 *)0x11009871;
    __vbaStrI2();
  }
  else {
    iVar5 = (int)((longlong)local_3c * (longlong)local_28[0]);
    if (((longlong)iVar5 != (longlong)local_3c * (longlong)local_28[0]) ||
       (lVar1 = (longlong)iVar5 * (longlong)local_4c, puStack_f4 = (undefined4 *)lVar1,
       (int)puStack_f4 != lVar1)) {
      puStack_f4 = (undefined4 *)0x11009c84;
      __vbaErrorOverflow();
      puStack_108 = &LAB_110016d6;
      pvStack_10c = ExceptionList;
      pcStack_1a8 = pcVar2;
      puStack_104 = (undefined1 *)&uStack_1b0;
      uStack_1b0 = 0;
      puStack_100 = &DAT_11001330;
      puStack_fc = (undefined4 *)0x0;
      puStack_f8 = (undefined4 *)0x0;
      uStack_110 = 0;
      uStack_114 = 0;
      uStack_118 = 0;
      uStack_128 = 0;
      uStack_138 = 0;
      uStack_148 = 0;
      uStack_158 = 0;
      auStack_168[0] = 0;
      local_28[1] = 0;
      ExceptionList = &pvStack_10c;
      iStack_1ac = iVar3;
      __vbaOnError(1);
      auStack_168[0] = 0x4008;
      piStack_160 = local_28;
      rtcDir(auStack_168,2);
      uVar4 = __vbaStrMove();
      iVar3 = __vbaStrCmp(&DAT_11002efc,uVar4);
      __vbaStrBool(-(uint)(iVar3 != 0));
      __vbaStrMove();
      __vbaFreeStr();
      __vbaExitProc();
      return;
    }
    puStack_f8 = (undefined4 *)0x11009868;
    __vbaStrI4();
  }
  puStack_f4 = (undefined4 *)0x11009878;
  __vbaStrMove();
  puStack_f4 = (undefined4 *)0x1;
  puStack_f8 = (undefined4 *)local_48;
  puStack_fc = (undefined4 *)0x11009884;
  rtcRightCharBstr();
  puStack_f4 = (undefined4 *)0x1100988b;
  puStack_f4 = (undefined4 *)__vbaStrMove();
  puStack_f8 = (undefined4 *)&DAT_11003004;
  puStack_fc = (undefined4 *)0x11009897;
  iVar3 = __vbaStrCmp();
  puStack_f4 = (undefined4 *)0x110098a9;
  __vbaFreeStr();
  if (iVar3 == 0) {
    puStack_f4 = (undefined4 *)0x2;
    puStack_f8 = (undefined4 *)local_48;
    puStack_fc = (undefined4 *)0x110098ba;
    rtcLeftCharBstr();
    puStack_f4 = (undefined4 *)0x110098c1;
    __vbaStrMove();
  }
  puStack_f4 = (undefined4 *)0x110098cd;
  __vbaStrCopy();
  local_ac = L"Removable Drive Selected = ";
  local_b4[0] = 8;
  local_9c = (wchar_t *)&local_48;
  local_a4 = 0x4008;
  puStack_f4 = (undefined4 *)0x11009906;
  rtcUpperCaseVar();
  puStack_f4 = local_74;
  puStack_f8 = (undefined4 *)0x1100992d;
  __vbaVarCat();
  puStack_f4 = local_84;
  puStack_f8 = (undefined4 *)0x1100993b;
  __vbaVarCat();
  __vbaVarMove();
  puStack_f4 = (undefined4 *)0x2;
  puStack_f8 = (undefined4 *)0x11009958;
  __vbaFreeVarList();
  local_9c = L"Free Space: ";
  local_a4 = 8;
  local_ac = (wchar_t *)&local_40;
  local_b4[0] = 0x4008;
  puStack_f4 = (undefined4 *)0xfffffffe;
  puStack_f8 = (undefined4 *)0x0;
  puStack_fc = local_b4;
  puStack_100 = (undefined *)0x11009993;
  local_6c = rtcFormatNumber();
  local_74[0] = 8;
  puStack_f4 = local_64;
  puStack_f8 = (undefined4 *)0x110099aa;
  __vbaVarCat();
  puStack_f4 = local_84;
  puStack_f8 = (undefined4 *)0x110099b5;
  __vbaVarCat();
  __vbaVarMove();
  puStack_f4 = (undefined4 *)0x2;
  puStack_f8 = (undefined4 *)0x110099cc;
  __vbaFreeVarList();
  local_9c = L" bytes";
  local_a4 = 8;
  local_ac = L"\n";
  local_b4[0] = 8;
  puStack_f4 = local_64;
  puStack_f8 = (undefined4 *)0x11009a00;
  __vbaVarCat();
  puStack_f4 = local_74;
  puStack_f8 = (undefined4 *)0x11009a0e;
  __vbaVarCat();
  __vbaVarMove();
  __vbaFreeVar();
  local_9c = L"Backup Files Size: ";
  local_a4 = 8;
  local_ac = (wchar_t *)(param_1 + 0x130);
  local_b4[0] = 0x4003;
  puStack_f4 = (undefined4 *)0x0;
  puStack_f8 = local_b4;
  puStack_fc = (undefined4 *)0x11009a5c;
  local_6c = rtcFormatNumber();
  local_74[0] = 8;
  puStack_f4 = (undefined4 *)0x11009a83;
  __vbaVarCat();
  puStack_f4 = (undefined4 *)0x11009a8e;
  __vbaVarCat();
  puStack_f4 = (undefined4 *)0x11009a9f;
  __vbaVarCat();
  __vbaVarMove();
  puStack_f4 = (undefined4 *)0x3;
  puStack_f8 = (undefined4 *)0x11009aba;
  __vbaFreeVarList();
  __vbaStrVarCopy();
  __vbaStrMove();
  __vbaStrCopy();
  __vbaFreeStr();
  iVar3 = __vbaI4Str();
  *(int *)(param_1 + 300) = iVar3;
  if (*(int *)(param_1 + 0x130) < iVar3) {
    *(undefined2 *)(param_1 + 0xf0) = 0xffff;
    __vbaExitProc();
  }
  else {
    *(undefined2 *)(param_1 + 0xf0) = 0;
    __vbaExitProc();
  }
  __vbaFreeVar();
  __vbaFreeStr();
  __vbaFreeStr();
  return;
}


// ---- FUN_11009c90 @ 11009c90

void __cdecl FUN_11009c90(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_7c [2];
  undefined4 local_74;
  undefined4 local_6c;
  undefined4 local_5c;
  undefined4 local_4c;
  undefined4 local_3c;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  void *pvStack_20;
  undefined1 *puStack_1c;
  undefined1 *local_18;
  undefined *local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  puStack_1c = &LAB_110016d6;
  pvStack_20 = ExceptionList;
  local_18 = &stack0xffffff3c;
  local_14 = &DAT_11001330;
  local_10 = 0;
  local_c = 0;
  local_24 = 0;
  local_28 = 0;
  local_2c = 0;
  local_3c = 0;
  local_4c = 0;
  local_5c = 0;
  local_6c = 0;
  local_7c[0] = 0;
  ExceptionList = &pvStack_20;
  *param_3 = 0;
  __vbaOnError(1);
  local_74 = param_2;
  local_7c[0] = 0x4008;
  rtcDir(local_7c,2);
  uVar1 = __vbaStrMove();
  iVar2 = __vbaStrCmp(&DAT_11002efc,uVar1);
  __vbaStrBool(-(uint)(iVar2 != 0));
  __vbaStrMove();
  __vbaFreeStr();
  __vbaExitProc();
  return;
}


// ---- FUN_11009e60 @ 11009e60

void __cdecl FUN_11009e60(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined2 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_7c [2];
  undefined4 local_74;
  undefined4 local_6c;
  undefined4 local_5c;
  undefined4 local_4c;
  undefined4 local_3c;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  void *pvStack_20;
  undefined1 *puStack_1c;
  undefined1 *local_18;
  undefined *local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  puStack_1c = &LAB_110016d6;
  pvStack_20 = ExceptionList;
  local_18 = &stack0xffffff3c;
  local_14 = &DAT_11001358;
  local_10 = 0;
  local_c = 0;
  local_24 = 0;
  local_28 = 0;
  local_2c = 0;
  local_3c = 0;
  local_4c = 0;
  local_5c = 0;
  local_6c = 0;
  local_7c[0] = 0;
  ExceptionList = &pvStack_20;
  *param_3 = 0;
  __vbaOnError(1);
  local_74 = param_2;
  local_7c[0] = 0x4008;
  rtcDir(local_7c,2);
  uVar2 = __vbaStrMove();
  iVar3 = __vbaStrCmp(&DAT_11002efc,uVar2);
  __vbaStrBool(-(uint)(iVar3 != 0));
  __vbaStrMove();
  __vbaFreeStr();
  uVar1 = __vbaBoolStr(local_24);
  *(undefined2 *)(param_1 + 0xf2) = uVar1;
  __vbaExitProc();
  return;
}


// ---- FUN_1100a050 @ 1100a050

void __cdecl FUN_1100a050(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_7c [2];
  undefined4 local_74;
  undefined4 local_6c;
  undefined4 local_5c;
  undefined4 local_4c;
  undefined4 local_3c;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  void *pvStack_20;
  undefined1 *puStack_1c;
  undefined1 *local_18;
  undefined *local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  puStack_1c = &LAB_110016d6;
  pvStack_20 = ExceptionList;
  local_18 = &stack0xffffff3c;
  local_14 = &DAT_11001380;
  local_10 = 0;
  local_c = 0;
  local_24 = 0;
  local_28 = 0;
  local_2c = 0;
  local_3c = 0;
  local_4c = 0;
  local_5c = 0;
  local_6c = 0;
  local_7c[0] = 0;
  ExceptionList = &pvStack_20;
  *param_3 = 0;
  __vbaOnError(1);
  local_74 = param_2;
  local_7c[0] = 0x4008;
  rtcDir(local_7c,2);
  uVar1 = __vbaStrMove();
  iVar2 = __vbaStrCmp(&DAT_11002efc,uVar1);
  __vbaStrBool(-(uint)(iVar2 != 0));
  __vbaStrMove();
  __vbaFreeStr();
  __vbaExitProc();
  return;
}


// ---- FUN_1100a220 @ 1100a220

void __cdecl FUN_1100a220(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_7c [2];
  undefined4 local_74;
  undefined4 local_6c;
  undefined4 local_5c;
  undefined4 local_4c;
  undefined4 local_3c;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  void *pvStack_20;
  undefined1 *puStack_1c;
  undefined1 *local_18;
  undefined *local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  puStack_1c = &LAB_110016d6;
  pvStack_20 = ExceptionList;
  local_18 = &stack0xffffff3c;
  local_14 = &DAT_110013a8;
  local_10 = 0;
  local_c = 0;
  local_24 = 0;
  local_28 = 0;
  local_2c = 0;
  local_3c = 0;
  local_4c = 0;
  local_5c = 0;
  local_6c = 0;
  local_7c[0] = 0;
  ExceptionList = &pvStack_20;
  *param_3 = 0;
  __vbaOnError(1);
  local_74 = param_2;
  local_7c[0] = 0x4008;
  rtcDir(local_7c,2);
  uVar1 = __vbaStrMove();
  iVar2 = __vbaStrCmp(&DAT_11002efc,uVar1);
  __vbaStrBool(-(uint)(iVar2 != 0));
  __vbaStrMove();
  __vbaFreeStr();
  __vbaExitProc();
  return;
}


// ---- FUN_1100a3f0 @ 1100a3f0

void __cdecl FUN_1100a3f0(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_7c [2];
  undefined4 local_74;
  undefined4 local_6c;
  undefined4 local_5c;
  undefined4 local_4c;
  undefined4 local_3c;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  void *pvStack_20;
  undefined1 *puStack_1c;
  undefined1 *local_18;
  undefined *local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  puStack_1c = &LAB_110016d6;
  pvStack_20 = ExceptionList;
  local_18 = &stack0xffffff3c;
  local_14 = &DAT_110013d0;
  local_10 = 0;
  local_c = 0;
  local_24 = 0;
  local_28 = 0;
  local_2c = 0;
  local_3c = 0;
  local_4c = 0;
  local_5c = 0;
  local_6c = 0;
  local_7c[0] = 0;
  ExceptionList = &pvStack_20;
  *param_3 = 0;
  __vbaOnError(1);
  local_74 = param_2;
  local_7c[0] = 0x4008;
  rtcDir(local_7c,2);
  uVar1 = __vbaStrMove();
  iVar2 = __vbaStrCmp(&DAT_11002efc,uVar1);
  __vbaStrBool(-(uint)(iVar2 != 0));
  __vbaStrMove();
  __vbaFreeStr();
  __vbaExitProc();
  return;
}


// ---- FUN_1100a5c0 @ 1100a5c0

void __cdecl FUN_1100a5c0(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_7c [2];
  undefined4 local_74;
  undefined4 local_6c;
  undefined4 local_5c;
  undefined4 local_4c;
  undefined4 local_3c;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  void *pvStack_20;
  undefined1 *puStack_1c;
  undefined1 *local_18;
  undefined *local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  puStack_1c = &LAB_110016d6;
  pvStack_20 = ExceptionList;
  local_18 = &stack0xffffff3c;
  local_14 = &DAT_110013f8;
  local_10 = 0;
  local_c = 0;
  local_24 = 0;
  local_28 = 0;
  local_2c = 0;
  local_3c = 0;
  local_4c = 0;
  local_5c = 0;
  local_6c = 0;
  local_7c[0] = 0;
  ExceptionList = &pvStack_20;
  *param_3 = 0;
  __vbaOnError(1);
  local_74 = param_2;
  local_7c[0] = 0x4008;
  rtcDir(local_7c,2);
  uVar1 = __vbaStrMove();
  iVar2 = __vbaStrCmp(&DAT_11002efc,uVar1);
  __vbaStrBool(-(uint)(iVar2 != 0));
  __vbaStrMove();
  __vbaFreeStr();
  __vbaExitProc();
  return;
}


// ---- FUN_1100a790 @ 1100a790

void __cdecl FUN_1100a790(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_7c [2];
  undefined4 local_74;
  undefined4 local_6c;
  undefined4 local_5c;
  undefined4 local_4c;
  undefined4 local_3c;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  void *pvStack_20;
  undefined1 *puStack_1c;
  undefined1 *local_18;
  undefined *local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  puStack_1c = &LAB_110016d6;
  pvStack_20 = ExceptionList;
  local_18 = &stack0xffffff3c;
  local_14 = &DAT_11001420;
  local_10 = 0;
  local_c = 0;
  local_24 = 0;
  local_28 = 0;
  local_2c = 0;
  local_3c = 0;
  local_4c = 0;
  local_5c = 0;
  local_6c = 0;
  local_7c[0] = 0;
  ExceptionList = &pvStack_20;
  *param_3 = 0;
  __vbaOnError(1);
  local_74 = param_2;
  local_7c[0] = 0x4008;
  rtcDir(local_7c,2);
  uVar1 = __vbaStrMove();
  iVar2 = __vbaStrCmp(&DAT_11002efc,uVar1);
  __vbaStrBool(-(uint)(iVar2 != 0));
  __vbaStrMove();
  __vbaFreeStr();
  __vbaExitProc();
  return;
}


// ---- FUN_1100a960 @ 1100a960

void __cdecl FUN_1100a960(int *param_1)

{
  int *piVar1;
  void *pvStack_20;
  undefined1 *puStack_1c;
  undefined1 *local_18;
  undefined *local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  puStack_1c = &LAB_110016d6;
  pvStack_20 = ExceptionList;
  local_18 = &stack0xffffff40;
  local_14 = &DAT_11001448;
  local_10 = 0;
  local_c = 0;
  ExceptionList = &pvStack_20;
  piVar1 = param_1;
  (**(code **)(*param_1 + 4))(param_1);
  __vbaOnError(1);
  __vbaStrCat(L"ACCESS.LEO",param_1[0x25]);
  __vbaStrMove();
  __vbaStrCopy(piVar1);
  __vbaFreeStr();
  __vbaStrCat(L"CONFIG.LEO");
  __vbaStrMove();
  __vbaStrCopy();
  __vbaFreeStr();
  __vbaStrCat();
  __vbaStrMove();
  __vbaStrCopy();
  __vbaFreeStr();
  __vbaStrCat();
  __vbaStrMove();
  __vbaStrCopy();
  __vbaFreeStr();
  __vbaVarCat();
  __vbaStrVarMove();
  __vbaStrMove();
  __vbaStrCopy();
  __vbaFreeStr();
  __vbaFreeVar();
  __vbaVarCat();
  __vbaStrVarMove();
  __vbaStrMove();
  __vbaStrCopy();
  __vbaFreeStr();
  __vbaFreeVar();
  __vbaVarCat();
  __vbaStrVarMove();
  __vbaStrMove();
  __vbaStrCopy();
  __vbaFreeStr();
  __vbaFreeVar();
  __vbaExitProc();
  return;
}


// ---- FUN_1100ac70 @ 1100ac70

void __cdecl FUN_1100ac70(int *param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  undefined4 local_164 [2];
  undefined *local_15c;
  undefined4 local_154 [2];
  int local_14c;
  undefined4 local_144 [2];
  undefined *local_13c;
  undefined4 local_134 [2];
  undefined *local_12c;
  undefined4 local_124 [2];
  int local_11c;
  undefined4 local_114 [2];
  undefined *local_10c;
  undefined4 local_104 [2];
  int local_fc;
  undefined4 local_f4 [2];
  wchar_t *local_ec;
  undefined4 local_e4 [4];
  undefined4 local_d4 [4];
  undefined4 local_c4 [4];
  undefined4 local_b4 [4];
  undefined4 local_a4 [4];
  undefined4 local_94 [4];
  undefined4 local_84 [4];
  undefined4 local_74 [4];
  undefined4 local_64 [2];
  undefined4 local_5c;
  int *local_54;
  undefined4 local_50;
  undefined4 local_48;
  undefined4 local_44 [4];
  short *local_34;
  undefined4 local_30 [4];
  void *pvStack_20;
  undefined1 *puStack_1c;
  undefined1 *local_18;
  undefined *local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  puStack_1c = &LAB_110016d6;
  pvStack_20 = ExceptionList;
  local_18 = &stack0xfffffe64;
  local_14 = &DAT_11001470;
  local_10 = 0;
  local_c = 0;
  ExceptionList = &pvStack_20;
  piVar5 = param_1;
  (**(code **)(*param_1 + 4))(param_1);
  local_30[0] = 0;
  local_34 = (short *)0x0;
  local_44[0] = 0;
  local_48 = 0;
  local_50 = 0;
  local_54 = (int *)0x0;
  local_64[0] = 0;
  local_74[0] = 0;
  local_84[0] = 0;
  local_94[0] = 0;
  local_a4[0] = 0;
  local_b4[0] = 0;
  local_c4[0] = 0;
  local_d4[0] = 0;
  local_e4[0] = 0;
  local_f4[0] = 0;
  local_104[0] = 0;
  local_114[0] = 0;
  local_124[0] = 0;
  local_134[0] = 0;
  local_144[0] = 0;
  local_154[0] = 0;
  local_164[0] = 0;
  __vbaAptOffset(&DAT_11002a7c);
  __vbaOnError(1);
  piVar4 = param_1;
  iVar2 = (**(code **)(*param_1 + 0x7c))(param_1);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,param_1,&DAT_11003344,0x7c);
  }
  rtcGetPresentDate(local_64);
  __vbaStrVarMove(local_64);
  __vbaStrMove();
  __vbaStrCopy(piVar4,piVar5);
  __vbaFreeStr();
  __vbaFreeVar();
  local_ec = L" ";
  local_f4[0] = 8;
  __vbaVarDup();
  rtcSplit(local_74,param_1[0xd],local_64,2);
  __vbaAryVar(0x2008);
  __vbaAryCopy(&local_34);
  __vbaFreeVarList(2,local_64);
  if ((local_34 == (short *)0x0) || (*local_34 != 1)) {
    __vbaGenerateBoundsError();
  }
  else if (*(uint *)(local_34 + 8) <= (uint)-*(int *)(local_34 + 10)) {
    __vbaGenerateBoundsError();
  }
  __vbaStrCopy();
  if ((local_34 == (short *)0x0) || (*local_34 != 1)) {
    __vbaGenerateBoundsError();
  }
  else if (*(uint *)(local_34 + 8) <= 1U - *(int *)(local_34 + 10)) {
    __vbaGenerateBoundsError();
  }
  __vbaStrCopy();
  rtcReplace(param_1[0xd]);
  __vbaStrMove();
  __vbaStrCopy();
  __vbaFreeStr();
  if (piRam2201b26b == (int *)0x0) {
    __vbaNew2();
  }
  iVar2 = (**(code **)(*piRam2201b26b + 0x14))();
  if (iVar2 < 0) {
    __vbaHresultCheckObj();
  }
  iVar2 = (**(code **)(*local_54 + 0x50))();
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2);
  }
  rtcChangeDir();
  __vbaFreeStr();
  __vbaFreeObj();
  if (piRam2201b26b == (int *)0x0) {
    __vbaNew2();
  }
  piVar4 = piRam2201b26b;
  iVar2 = (**(code **)(*piRam2201b26b + 0x14))();
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar4,&DAT_11004060);
  }
  piVar4 = local_54;
  piVar5 = local_54;
  iVar2 = (**(code **)(*local_54 + 0x50))(local_54);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar4,&DAT_11004080,0x50);
  }
  __vbaStrCat(L"\\Logs",local_50);
  __vbaStrMove();
  __vbaFreeStr();
  __vbaFreeObj();
  local_ec = (wchar_t *)&local_48;
  local_f4[0] = 0x4008;
  local_5c = rtcDir(local_f4,0x10);
  local_64[0] = 8;
  __vbaVarMove();
  local_ec = L"Logs";
  local_f4[0] = 0x8008;
  sVar1 = __vbaVarTstEq(local_f4,local_30);
  if (sVar1 == 0) {
    rtcMakeDir(local_48);
  }
  rtcRightCharBstr(local_48,1);
  uVar3 = __vbaStrMove();
  iVar2 = __vbaStrCmp(&DAT_11003004,uVar3);
  __vbaFreeStr();
  if (iVar2 != 0) {
    __vbaStrCat(&DAT_11003004,local_48);
    __vbaStrMove();
  }
  rtcChangeDir(local_48);
  local_ec = L"Leofiles.log";
  local_f4[0] = 8;
  __vbaVarCopy();
  rtcStrConvVar2(local_64,param_1 + 0xf,3,0);
  __vbaVarMove();
  __vbaFreeVar(piVar5);
  local_ec = (wchar_t *)local_48;
  local_f4[0] = 8;
  uVar3 = __vbaVarCat(local_64,local_44,local_f4);
  __vbaStrVarMove(uVar3);
  uVar3 = __vbaStrMove();
  __vbaFileOpen(8,0xffffffff,1,uVar3);
  __vbaFreeStr();
  __vbaFreeVar();
  local_ec = L" ";
  local_f4[0] = 8;
  local_fc = param_1[0xe];
  local_104[0] = 8;
  local_10c = &DAT_1100404c;
  local_114[0] = 8;
  local_11c = param_1[0xd];
  local_124[0] = 8;
  local_12c = &DAT_1100404c;
  local_134[0] = 8;
  local_13c = &DAT_1100404c;
  local_144[0] = 8;
  local_14c = param_1[0x17];
  local_154[0] = 8;
  local_15c = &DAT_11004014;
  local_164[0] = 8;
  __vbaVarCat(local_64,local_f4);
  __vbaVarCat(local_74,local_104);
  __vbaVarCat(local_84,local_114);
  __vbaVarCat(local_94,local_124);
  __vbaVarCat(local_a4,local_134);
  __vbaVarCat(local_b4,param_1 + 0x13);
  __vbaVarCat(local_c4,local_144);
  __vbaVarCat(local_d4,local_154);
  __vbaVarCat(local_e4,local_164);
  __vbaPrintFile(&DAT_11003f64,1);
  __vbaFreeVarList(9,local_64,local_74,local_84,local_94,local_a4,local_b4,local_c4);
  __vbaFileClose();
  iVar2 = (**(code **)(*param_1 + 0x78))();
  if (iVar2 < 0) {
    __vbaHresultCheckObj();
  }
  __vbaExitProc();
  __vbaFreeVar();
  __vbaAryDestruct();
  __vbaFreeVar();
  __vbaFreeStr();
  return;
}


// ---- FUN_1100b420 @ 1100b420

/* WARNING: Type propagation algorithm not settling */

void __cdecl FUN_1100b420(int *param_1)

{
  code *pcVar1;
  int *piVar2;
  short sVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piStack_218;
  code *pcStack_214;
  int iStack_210;
  undefined4 uStack_1d0;
  wchar_t *pwStack_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1b0;
  undefined4 uStack_1a0;
  undefined4 uStack_190;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  void *pvStack_178;
  undefined1 *puStack_174;
  undefined1 *puStack_170;
  undefined1 *puStack_16c;
  undefined4 *puStack_168;
  undefined4 *puStack_164;
  undefined4 *puStack_160;
  int *piStack_15c;
  short **ppsStack_158;
  int *piStack_154;
  undefined4 *puStack_150;
  undefined4 *puStack_14c;
  undefined4 *puStack_148;
  undefined4 *puStack_144;
  int *piStack_140;
  int *piStack_13c;
  int *piStack_138;
  int *piStack_134;
  undefined4 *puStack_130;
  undefined4 *puStack_12c;
  short **ppsStack_128;
  short **ppsStack_124;
  undefined4 local_ec;
  undefined4 local_e8 [2];
  undefined *local_e0;
  undefined4 local_d8 [2];
  int local_d0;
  undefined4 local_c8 [2];
  wchar_t *local_c0;
  undefined4 local_b8 [4];
  undefined4 local_a8 [4];
  undefined4 local_98 [4];
  undefined4 local_88 [4];
  undefined4 local_78 [2];
  undefined4 local_70;
  int *local_68;
  int local_64 [5];
  undefined4 local_50;
  undefined4 local_4c [4];
  short *local_3c;
  short *local_38;
  undefined4 local_34 [5];
  void *pvStack_20;
  undefined1 *puStack_1c;
  undefined1 *local_18;
  undefined *local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  puStack_1c = &LAB_110016d6;
  pvStack_20 = ExceptionList;
  local_18 = &stack0xfffffee0;
  local_14 = &DAT_11001498;
  local_10 = 0;
  local_c = 0;
  ppsStack_124 = (short **)param_1;
  ppsStack_128 = (short **)0x1100b45d;
  ExceptionList = &pvStack_20;
  (**(code **)(*param_1 + 4))();
  local_34[0] = 0;
  local_38 = (short *)0x0;
  local_3c = (short *)0x0;
  local_4c[0] = 0;
  local_50 = 0;
  local_64[3] = 0;
  local_64[2] = 0;
  local_64[1] = 0;
  local_64[0] = 0;
  local_68 = (int *)0x0;
  local_78[0] = 0;
  local_88[0] = 0;
  local_98[0] = 0;
  local_a8[0] = 0;
  local_b8[0] = 0;
  local_c8[0] = 0;
  local_d8[0] = 0;
  local_e8[0] = 0;
  local_ec = 0;
  ppsStack_128 = (short **)&DAT_11002a7c;
  puStack_12c = (undefined4 *)0x1100b4b9;
  __vbaAptOffset();
  ppsStack_128 = (short **)0x1;
  puStack_12c = (undefined4 *)0x1100b4c7;
  __vbaOnError();
  if (*(short *)((int)param_1 + 0x6a) == -1) {
    ppsStack_128 = (short **)param_1;
    puStack_12c = (undefined4 *)0x1100b4d8;
    piVar4 = (int *)(**(code **)(*param_1 + 0x7c))();
    if ((int)piVar4 < 0) {
      puStack_12c = (undefined4 *)0x7c;
      puStack_130 = (undefined4 *)&DAT_11003344;
      piStack_134 = param_1;
      piStack_13c = (int *)0x1100b4eb;
      piStack_138 = piVar4;
      __vbaHresultCheckObj();
    }
    puStack_12c = local_78;
    puStack_130 = (undefined4 *)0x1100b4f5;
    rtcGetPresentDate();
    puStack_12c = local_78;
    puStack_130 = (undefined4 *)0x1100b502;
    __vbaStrVarMove();
    pcVar1 = __vbaStrMove_exref;
    puStack_12c = (undefined4 *)0x1100b50f;
    __vbaStrMove();
    puStack_12c = (undefined4 *)0x1100b51b;
    __vbaStrCopy();
    ppsStack_124 = (short **)0x1100b524;
    __vbaFreeStr();
    ppsStack_124 = (short **)0x1100b52d;
    __vbaFreeVar();
    local_c0 = L" ";
    local_c8[0] = 8;
    __vbaVarDup();
    ppsStack_124 = (short **)0x2;
    ppsStack_128 = (short **)local_78;
    puStack_12c = (undefined4 *)param_1[0xd];
    puStack_130 = local_88;
    piStack_134 = (int *)0x1100b568;
    rtcSplit();
    ppsStack_124 = (short **)0x2008;
    ppsStack_128 = (short **)0x1100b57a;
    local_ec = __vbaAryVar();
    ppsStack_124 = &local_3c;
    ppsStack_128 = (short **)0x1100b591;
    __vbaAryCopy();
    ppsStack_124 = (short **)local_78;
    ppsStack_128 = (short **)0x2;
    puStack_12c = (undefined4 *)0x1100b5a4;
    __vbaFreeVarList();
    if ((local_3c == (short *)0x0) || (*local_3c != 1)) {
      __vbaGenerateBoundsError();
    }
    else if (*(uint *)(local_3c + 8) <= (uint)-*(int *)(local_3c + 10)) {
      __vbaGenerateBoundsError();
    }
    __vbaStrCopy();
    if ((local_3c == (short *)0x0) || (*local_3c != 1)) {
      __vbaGenerateBoundsError();
    }
    else if (*(uint *)(local_3c + 8) <= 1U - *(int *)(local_3c + 10)) {
      __vbaGenerateBoundsError();
    }
    __vbaStrCopy();
    ppsStack_124 = (short **)param_1[0xd];
    ppsStack_128 = (short **)0x1100b64f;
    rtcReplace();
    __vbaStrMove();
    __vbaStrCopy();
    __vbaFreeStr();
    if (piRam2201ba0c == (int *)0x0) {
      __vbaNew2();
    }
    iVar5 = (**(code **)(*piRam2201ba0c + 0x14))();
    if (iVar5 < 0) {
      __vbaHresultCheckObj();
    }
    iVar5 = (**(code **)(*local_68 + 0x50))();
    if (iVar5 < 0) {
      ppsStack_128 = (short **)0x1100b6d7;
      ppsStack_124 = (short **)iVar5;
      __vbaHresultCheckObj();
    }
    rtcChangeDir();
    __vbaFreeStr();
    __vbaFreeObj();
    if (piRam2201ba0c == (int *)0x0) {
      __vbaNew2();
    }
    piVar4 = piRam2201ba0c;
    iVar5 = (**(code **)(*piRam2201ba0c + 0x14))();
    if (iVar5 < 0) {
      ppsStack_124 = (short **)&DAT_11004060;
      puStack_130 = (undefined4 *)0x1100b721;
      puStack_12c = (undefined4 *)iVar5;
      ppsStack_128 = (short **)piVar4;
      __vbaHresultCheckObj();
    }
    piVar4 = local_68;
    ppsStack_124 = (short **)local_68;
    ppsStack_128 = (short **)0x1100b730;
    iVar5 = (**(code **)(*local_68 + 0x50))();
    if (iVar5 < 0) {
      piStack_154 = (int *)0x50;
      ppsStack_158 = (short **)&DAT_11004080;
      piStack_15c = piVar4;
      puStack_164 = (undefined4 *)0x1100b741;
      puStack_160 = (undefined4 *)iVar5;
      __vbaHresultCheckObj();
    }
    piStack_154 = (int *)local_64[3];
    ppsStack_158 = (short **)0x11004094;
    piStack_15c = (int *)0x1100b750;
    __vbaStrCat();
    piStack_154 = (int *)0x1100b757;
    __vbaStrMove();
    piStack_154 = (int *)0x1100b760;
    __vbaFreeStr();
    piStack_154 = (int *)0x1100b769;
    __vbaFreeObj();
    local_c0 = (wchar_t *)&local_50;
    local_c8[0] = 0x4008;
    piStack_154 = (int *)0x10;
    ppsStack_158 = (short **)local_c8;
    piStack_15c = (int *)0x1100b78b;
    local_70 = rtcDir();
    local_78[0] = 8;
    piStack_154 = (int *)0x1100b7a1;
    __vbaVarMove();
    local_c0 = L"Logs";
    local_c8[0] = 0x8008;
    piStack_154 = local_34;
    ppsStack_158 = (short **)local_c8;
    piStack_15c = (int *)0x1100b7c6;
    sVar3 = __vbaVarTstEq();
    if (sVar3 == 0) {
      piStack_154 = (int *)local_50;
      ppsStack_158 = (short **)0x1100b7d5;
      rtcMakeDir();
    }
    piVar4 = param_1 + 0x18;
    piStack_154 = (int *)0x1;
    ppsStack_158 = (short **)*piVar4;
    piStack_15c = (int *)0x1100b7e6;
    rtcRightCharBstr();
    piStack_154 = (int *)0x1100b7ed;
    piStack_154 = (int *)__vbaStrMove();
    ppsStack_158 = (short **)&DAT_11003004;
    piStack_15c = (int *)0x1100b7f9;
    iVar5 = __vbaStrCmp();
    piStack_154 = (int *)0x1100b80b;
    __vbaFreeStr();
    if ((short)-(uint)(iVar5 == 0) != 0) {
      local_c8[0] = 0x4008;
      piStack_154 = (int *)*piVar4;
      puStack_164 = (undefined4 *)0x1100b829;
      local_c0 = (wchar_t *)piVar4;
      iVar6 = __vbaLenBstr();
      puStack_160 = (undefined4 *)(iVar6 + -1);
      if (SBORROW4(iVar6,1)) {
        puStack_160 = (undefined4 *)0x1100bd1e;
        __vbaErrorOverflow();
        piVar2 = piStack_154;
        puStack_174 = &LAB_110016d6;
        pvStack_178 = ExceptionList;
        pcStack_214 = pcVar1;
        puStack_170 = (undefined1 *)&piStack_218;
        puStack_16c = &LAB_110014c0;
        puStack_168 = (undefined4 *)0x0;
        puStack_164 = (undefined4 *)0x0;
        ExceptionList = &pvStack_178;
        piVar7 = piStack_154;
        piStack_218 = piVar4;
        iStack_210 = -(uint)(iVar5 == 0);
        piStack_15c = (int *)&stack0xfffffffc;
        (**(code **)(*piStack_154 + 4))(piStack_154);
        uStack_17c = 0;
        uStack_180 = 0;
        uStack_190 = 0;
        uStack_1a0 = 0;
        uStack_1b0 = 0;
        uStack_1c0 = 0;
        uStack_1d0 = 0;
        __vbaOnError(1);
        if ((short)piVar2[0x19] == -1) {
          pwStack_1c8 = L"Backup";
        }
        else {
          pwStack_1c8 = L"Restore";
          if (*(short *)((int)piVar2 + 0x66) != -1) {
            pwStack_1c8 = L"";
          }
        }
        uStack_1d0 = 8;
        __vbaVarCopy();
        if ((short)piVar2[0x1a] == -1) {
          __vbaStrCopy(piVar7);
        }
        else {
          __vbaStrCopy(piVar7);
        }
        piStack_218 = (int *)0x1100be92;
        __vbaExitProc();
        return;
      }
      puStack_164 = local_c8;
      puStack_168 = local_78;
      puStack_16c = (undefined1 *)0x1100b844;
      rtcLeftCharVar();
      puStack_160 = local_78;
      puStack_164 = (undefined4 *)0x1100b84e;
      __vbaStrVarMove();
      puStack_160 = (undefined4 *)0x1100b855;
      __vbaStrMove();
      puStack_160 = (undefined4 *)0x1100b85f;
      __vbaStrCopy();
      ppsStack_158 = (short **)0x1100b868;
      __vbaFreeStr();
      ppsStack_158 = (short **)0x1100b871;
      __vbaFreeVar();
    }
    local_c0 = L"\\";
    local_c8[0] = 8;
    piStack_154 = (int *)0x1100b894;
    __vbaVarDup();
    piStack_154 = (int *)0x0;
    ppsStack_158 = (short **)0xffffffff;
    piStack_15c = local_78;
    puStack_160 = (undefined4 *)*piVar4;
    puStack_164 = local_88;
    puStack_168 = (undefined4 *)0x1100b8ac;
    rtcSplit();
    piStack_154 = local_88;
    ppsStack_158 = (short **)0x2008;
    piStack_15c = (int *)0x1100b8be;
    local_ec = __vbaAryVar();
    piStack_154 = &local_ec;
    ppsStack_158 = &local_38;
    piStack_15c = (int *)0x1100b8d5;
    __vbaAryCopy();
    piStack_154 = local_88;
    ppsStack_158 = (short **)local_78;
    piStack_15c = (int *)0x2;
    puStack_160 = (undefined4 *)0x1100b8e8;
    __vbaFreeVarList();
    piStack_154 = (int *)local_38;
    ppsStack_158 = (short **)0x1;
    piStack_15c = (int *)0x1100b8f7;
    __vbaUbound();
    piStack_154 = (int *)0x1100b8ff;
    sVar3 = __vbaI2I4();
    if ((local_38 == (short *)0x0) || (*local_38 != 1)) {
      puStack_150 = (undefined4 *)0x1100b92f;
      __vbaGenerateBoundsError();
    }
    else if (*(uint *)(local_38 + 8) <= (uint)((int)sVar3 - *(int *)(local_38 + 10))) {
      puStack_150 = (undefined4 *)0x1100b91d;
      __vbaGenerateBoundsError();
    }
    puStack_150 = (undefined4 *)0x1100b940;
    __vbaStrCopy();
    puStack_148 = (undefined4 *)0x1;
    puStack_14c = (undefined4 *)local_50;
    puStack_150 = (undefined4 *)0x1100b94c;
    rtcRightCharBstr();
    puStack_148 = (undefined4 *)0x1100b953;
    puStack_148 = (undefined4 *)__vbaStrMove();
    puStack_14c = (undefined4 *)&DAT_11003004;
    puStack_150 = (undefined4 *)0x1100b95f;
    iVar5 = __vbaStrCmp();
    puStack_148 = (undefined4 *)0x1100b972;
    __vbaFreeStr();
    if (iVar5 != 0) {
      puStack_148 = (undefined4 *)local_50;
      puStack_14c = (undefined4 *)&DAT_11003004;
      puStack_150 = (undefined4 *)0x1100b986;
      __vbaStrCat();
      puStack_148 = (undefined4 *)0x1100b98d;
      __vbaStrMove();
    }
    puStack_148 = (undefined4 *)local_50;
    puStack_14c = (undefined4 *)0x1100b997;
    rtcChangeDir();
    local_c0 = L"Userfiles.log";
    local_c8[0] = 8;
    puStack_148 = (undefined4 *)0x1100b9bb;
    __vbaVarCopy();
    local_c8[0] = 0x4008;
    puStack_148 = (undefined4 *)0x0;
    puStack_14c = (undefined4 *)0x3;
    puStack_150 = local_c8;
    piStack_154 = local_78;
    ppsStack_158 = (short **)0x1100b9e0;
    local_c0 = (wchar_t *)piVar4;
    rtcStrConvVar2();
    puStack_148 = local_78;
    puStack_14c = (undefined4 *)0x1100b9ea;
    __vbaStrVarMove();
    puStack_148 = (undefined4 *)0x1100b9f1;
    __vbaStrMove();
    puStack_148 = (undefined4 *)0x1100b9fb;
    __vbaStrCopy();
    piStack_140 = (int *)0x1100ba04;
    __vbaFreeStr();
    piStack_140 = (int *)0x1100ba0d;
    __vbaFreeVar();
    local_c0 = (wchar_t *)local_50;
    local_c8[0] = 8;
    piStack_13c = local_c8;
    piStack_140 = local_4c;
    puStack_144 = local_78;
    puStack_148 = (undefined4 *)0x1100ba33;
    piStack_13c = (int *)__vbaVarCat();
    piStack_140 = (int *)0x1100ba3a;
    __vbaStrVarMove();
    piStack_13c = (int *)0x1100ba41;
    piStack_13c = (int *)__vbaStrMove();
    piStack_140 = (int *)0x1;
    puStack_144 = (undefined4 *)0xffffffff;
    puStack_148 = (undefined4 *)0x8;
    puStack_14c = (undefined4 *)0x1100ba4e;
    __vbaFileOpen();
    piStack_13c = (int *)0x1100ba57;
    __vbaFreeStr();
    piStack_13c = (int *)0x1100ba60;
    __vbaFreeVar();
    piStack_138 = (int *)*piVar4;
    piStack_13c = (int *)&DAT_1100404c;
    piStack_140 = (int *)0x1100ba70;
    __vbaStrCat();
    piStack_138 = (int *)0x1100ba77;
    piStack_138 = (int *)__vbaStrMove();
    piStack_13c = (int *)param_1[0xe];
    piStack_140 = (int *)0x1100ba83;
    __vbaStrCat();
    piStack_138 = (int *)0x1100ba8a;
    piStack_138 = (int *)__vbaStrMove();
    piStack_13c = (int *)&DAT_1100404c;
    piStack_140 = (int *)0x1100ba92;
    __vbaStrCat();
    piStack_138 = (int *)0x1100ba99;
    piStack_138 = (int *)__vbaStrMove();
    piStack_13c = (int *)param_1[0xd];
    piStack_140 = (int *)0x1100baa5;
    __vbaStrCat();
    piStack_138 = (int *)0x1100baac;
    piStack_138 = (int *)__vbaStrMove();
    piStack_13c = (int *)&DAT_1100404c;
    piStack_140 = (int *)0x1100bab4;
    local_70 = __vbaStrCat();
    local_78[0] = 8;
    local_c0 = L" ";
    local_c8[0] = 8;
    local_d0 = param_1[0x17];
    local_d8[0] = 8;
    local_e0 = &DAT_11004014;
    local_e8[0] = 8;
    piStack_138 = local_78;
    piStack_13c = param_1 + 0x13;
    piStack_140 = local_88;
    puStack_144 = (undefined4 *)0x1100bb02;
    piStack_138 = (int *)__vbaVarCat();
    piStack_13c = local_c8;
    piStack_140 = local_98;
    puStack_144 = (undefined4 *)0x1100bb13;
    piStack_138 = (int *)__vbaVarCat();
    piStack_13c = local_d8;
    piStack_140 = local_a8;
    puStack_144 = (undefined4 *)0x1100bb24;
    piStack_138 = (int *)__vbaVarCat();
    piStack_13c = local_e8;
    piStack_140 = local_b8;
    puStack_144 = (undefined4 *)0x1100bb35;
    piStack_138 = (int *)__vbaVarCat();
    piStack_13c = (int *)0x1;
    piStack_140 = (int *)&DAT_11003f64;
    puStack_144 = (undefined4 *)0x1100bb43;
    __vbaPrintFile();
    piStack_134 = local_64;
    piStack_138 = local_64 + 1;
    piStack_13c = local_64 + 2;
    piStack_140 = local_64 + 3;
    puStack_144 = (undefined4 *)0x4;
    puStack_148 = (undefined4 *)0x1100bb5b;
    __vbaFreeStrList();
    puStack_148 = local_b8;
    puStack_14c = local_a8;
    puStack_150 = local_98;
    piStack_154 = local_88;
    ppsStack_158 = (short **)local_78;
    piStack_15c = (int *)0x5;
    puStack_160 = (undefined4 *)0x1100bb83;
    __vbaFreeVarList();
    ppsStack_128 = (short **)0x1;
    puStack_12c = (undefined4 *)0x1100bb8e;
    __vbaFileClose();
  }
  ppsStack_128 = (short **)0x1100bc72;
  __vbaExitProc();
  ppsStack_128 = (short **)&LAB_1100bcf9;
  puStack_12c = (undefined4 *)0x1100bcd4;
  __vbaFreeVar();
  ppsStack_128 = &local_38;
  puStack_12c = (undefined4 *)0x0;
  puStack_130 = (undefined4 *)0x1100bce2;
  __vbaAryDestruct();
  ppsStack_128 = &local_3c;
  puStack_12c = (undefined4 *)0x0;
  puStack_130 = (undefined4 *)0x1100bcea;
  __vbaAryDestruct();
  ppsStack_128 = (short **)0x1100bcef;
  __vbaFreeVar();
  ppsStack_124 = (short **)0x1100bcf8;
  __vbaFreeStr();
  return;
}


// ---- FUN_1100bd20 @ 1100bd20

void __cdecl FUN_1100bd20(int *param_1)

{
  int *piVar1;
  void *pvStack_20;
  undefined1 *puStack_1c;
  undefined1 *local_18;
  undefined1 *local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  puStack_1c = &LAB_110016d6;
  pvStack_20 = ExceptionList;
  local_18 = &stack0xffffff40;
  local_14 = &LAB_110014c0;
  local_10 = 0;
  local_c = 0;
  ExceptionList = &pvStack_20;
  piVar1 = param_1;
  (**(code **)(*param_1 + 4))(param_1);
  __vbaOnError(1);
  __vbaVarCopy();
  if ((short)param_1[0x1a] == -1) {
    __vbaStrCopy(piVar1);
  }
  else {
    __vbaStrCopy(piVar1);
  }
  __vbaExitProc();
  return;
}


// ---- FUN_1100bef0 @ 1100bef0

void __cdecl FUN_1100bef0(int *param_1)

{
  void *pvStack_20;
  undefined1 *puStack_1c;
  undefined1 *local_18;
  undefined1 *local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  puStack_1c = &LAB_110016d6;
  pvStack_20 = ExceptionList;
  local_18 = &stack0xffffff3c;
  local_14 = &LAB_110014e8;
  local_10 = 0;
  local_c = 0;
  ExceptionList = &pvStack_20;
  (**(code **)(*param_1 + 4))(param_1);
  __vbaOnError(1);
  __vbaExitProc();
  return;
}


// ---- FUN_1100c060 @ 1100c060

void __cdecl FUN_1100c060(int *param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  code *pcVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 local_f8 [9];
  undefined4 local_d4;
  wchar_t *local_cc;
  undefined4 local_c4 [2];
  wchar_t *local_bc;
  undefined4 local_b4 [2];
  wchar_t *local_ac;
  undefined4 local_a4 [2];
  wchar_t *local_9c;
  undefined4 local_94 [2];
  undefined4 local_8c;
  undefined4 local_84 [2];
  undefined4 local_7c;
  undefined4 local_74 [2];
  undefined4 local_6c;
  undefined4 local_64 [2];
  undefined4 local_5c;
  undefined4 local_54 [2];
  undefined4 local_4c;
  undefined4 local_44 [2];
  undefined4 local_3c;
  int *local_34;
  undefined4 local_30;
  undefined4 local_2c;
  int *local_28;
  wchar_t local_24 [2];
  void *pvStack_20;
  undefined1 *puStack_1c;
  undefined1 *local_18;
  undefined1 *local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  puStack_1c = &LAB_110016d6;
  pvStack_20 = ExceptionList;
  local_18 = &stack0xfffffed4;
  local_14 = &LAB_11001510;
  local_10 = 0;
  local_c = 0;
  ExceptionList = &pvStack_20;
  (**(code **)(*param_1 + 4))(param_1);
  local_24[0] = L'\0';
  local_24[1] = L'\0';
  local_28 = (int *)0x0;
  local_2c = 0;
  local_30 = 0;
  local_34 = (int *)0x0;
  local_44[0] = 0;
  local_54[0] = 0;
  local_64[0] = 0;
  local_74[0] = 0;
  local_84[0] = 0;
  local_94[0] = 0;
  local_a4[0] = 0;
  local_b4[0] = 0;
  local_c4[0] = 0;
  local_d4 = 0;
  local_f8[0] = 0;
  iVar2 = __vbaAptOffset(&DAT_11002a7c);
  __vbaOnError(1);
  if ((short)param_1[0x10] == -1) {
    local_f8[0] = 2;
    iVar2 = (**(code **)(*param_1 + 0x5c))(param_1,local_f8);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,param_1,&DAT_11004214,0x5c);
    }
    goto LAB_1100cb4f;
  }
  iVar3 = (**(code **)(*param_1 + 100))(param_1);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,param_1,&DAT_11004214,100);
  }
  rtcChangeDir(param_1[0xe]);
  local_9c = (wchar_t *)(param_1 + 0x16);
  local_a4[0] = 0x4008;
  rtcDir(local_a4,0x10);
  uVar4 = __vbaStrMove();
  iVar3 = __vbaStrCmp(&DAT_11002efc,uVar4);
  __vbaFreeStr();
  pcVar5 = __vbaStrCat_exref;
  if (iVar3 == 0) {
    local_6c = 0x80020004;
    local_74[0] = 10;
    local_5c = 0x80020004;
    local_64[0] = 10;
    local_9c = L"Parachute";
    local_a4[0] = 8;
    __vbaVarDup();
    pcVar5 = __vbaStrCat_exref;
    __vbaStrCat(param_1[0x16],L"The folder ");
    uVar4 = __vbaStrMove();
    __vbaStrCat(L" doesn\'t exist.",uVar4);
    uVar4 = __vbaStrMove();
    local_3c = __vbaStrCat(L"Press OK to create it.",uVar4);
    local_44[0] = 8;
    iVar3 = rtcMsgBox(local_44,1,local_54,local_64,local_74);
    __vbaFreeStrList(2,&local_2c,&local_30);
    __vbaFreeVarList(4,local_44,local_54,local_64,local_74);
    if (iVar3 != 2) {
      rtcMakeDir(param_1[0x16]);
      goto LAB_1100c291;
    }
LAB_1100c3f1:
    local_6c = 0x80020004;
    local_74[0] = 10;
    local_5c = 0x80020004;
    local_64[0] = 10;
    local_ac = L"Parachute";
    local_b4[0] = 8;
    __vbaVarDup();
    local_9c = L"File restoration aborted.";
    local_a4[0] = 8;
    __vbaVarDup();
    rtcMsgBox(local_44,0x40,local_54,local_64,local_74);
    __vbaFreeVarList(4,local_44,local_54,local_64,local_74);
  }
  else {
LAB_1100c291:
    local_9c = (wchar_t *)(param_1 + 0x16);
    local_a4[0] = 0x4008;
    rtcDir(local_a4,0x10);
    uVar4 = __vbaStrMove();
    iVar3 = __vbaStrCmp(&DAT_11002efc,uVar4);
    __vbaFreeStr();
    if (iVar3 == 0) {
      local_8c = 0x80020004;
      local_94[0] = 10;
      local_7c = 0x80020004;
      local_84[0] = 10;
      local_cc = L"Parachute";
      local_d4 = 8;
      __vbaVarDup();
      local_9c = L"The folder ";
      local_a4[0] = 8;
      local_ac = L" doesn\'t exist.";
      local_b4[0] = 8;
      local_bc = L"Press OK to create it.";
      local_c4[0] = 8;
      puVar10 = local_94;
      puVar7 = local_84;
      puVar9 = local_74;
      uVar8 = 1;
      uVar4 = __vbaVarCat(local_44,param_1 + 0x12,local_a4);
      uVar4 = __vbaVarCat(local_54,local_b4,uVar4);
      uVar4 = __vbaVarCat(local_64,local_c4,uVar4);
      iVar3 = rtcMsgBox(uVar4,uVar8,puVar9,puVar7,puVar10);
      __vbaFreeVarList(6,local_44,local_54,local_64,local_74,local_84,local_94);
      if (iVar3 == 2) goto LAB_1100c3f1;
      uVar4 = __vbaStrVarVal(&local_2c,param_1 + 0x12);
      rtcMakeDir(uVar4);
      __vbaFreeStr();
    }
    (*pcVar5)(param_1[0x1e],param_1[0xe]);
    __vbaStrMove();
    (**(code **)(*param_1 + 0x80))(param_1,&local_2c,&local_30);
    sVar1 = __vbaBoolStr(local_30);
    __vbaFreeStrList(2,&local_2c,&local_30);
    if (sVar1 != 0) {
      iVar3 = param_1[0x16];
      (*pcVar5)(param_1[0x1e],iVar3);
      uVar4 = __vbaStrMove();
      (*pcVar5)(param_1[0x1e],param_1[0xe],uVar4);
      uVar4 = __vbaStrMove();
      rtcFileCopy(uVar4,iVar3);
      __vbaFreeStrList(2,&local_2c,&local_30);
    }
    (*pcVar5)(param_1[0x1b],param_1[0xe]);
    __vbaStrMove();
    (**(code **)(*param_1 + 0x70))(param_1,&local_2c,&local_30);
    sVar1 = __vbaBoolStr(local_30);
    __vbaFreeStrList(2,&local_2c,&local_30);
    if (sVar1 != 0) {
      iVar3 = param_1[0x16];
      (*pcVar5)(param_1[0x1b],iVar3);
      uVar4 = __vbaStrMove();
      (*pcVar5)(param_1[0x1b],param_1[0xe],uVar4);
      uVar4 = __vbaStrMove();
      rtcFileCopy(uVar4,iVar3);
      __vbaFreeStrList(2,&local_2c,&local_30);
    }
    (*pcVar5)(param_1[0x1d],param_1[0xe]);
    __vbaStrMove();
    (**(code **)(*param_1 + 0x7c))(param_1,&local_2c,&local_30);
    sVar1 = __vbaBoolStr(local_30);
    __vbaFreeStrList(2,&local_2c,&local_30);
    if (sVar1 != 0) {
      iVar3 = param_1[0x16];
      (*pcVar5)(param_1[0x1d],iVar3);
      uVar4 = __vbaStrMove();
      (*pcVar5)(param_1[0x1d],param_1[0xe],uVar4);
      uVar4 = __vbaStrMove();
      rtcFileCopy(uVar4,iVar3);
      __vbaFreeStrList(2,&local_2c,&local_30);
    }
    (*pcVar5)(param_1[0x1a],param_1[0xe]);
    __vbaStrMove();
    (**(code **)(*param_1 + 0x78))(param_1,&local_2c,&local_30);
    sVar1 = __vbaBoolStr(local_30);
    __vbaFreeStrList(2,&local_2c,&local_30);
    if (sVar1 != 0) {
      iVar3 = param_1[0x16];
      (*pcVar5)(param_1[0x1a],iVar3);
      uVar4 = __vbaStrMove();
      (*pcVar5)(param_1[0x1a],param_1[0xe],uVar4);
      uVar4 = __vbaStrMove();
      rtcFileCopy(uVar4,iVar3);
      __vbaFreeStrList(2,&local_2c,&local_30);
    }
    (*pcVar5)(param_1[0x1c],param_1[0xe]);
    __vbaStrMove();
    (**(code **)(*param_1 + 0x6c))(param_1,&local_2c,&local_30);
    sVar1 = __vbaBoolStr(local_30);
    __vbaFreeStrList(2,&local_2c,&local_30);
    if (sVar1 != 0) {
      local_9c = (wchar_t *)param_1[0x1c];
      local_a4[0] = 8;
      uVar4 = __vbaVarCat(local_44,local_a4,param_1 + 0x12);
      uVar4 = __vbaStrVarVal(&local_30,uVar4);
      iVar3 = param_1[0xe];
      (*pcVar5)(param_1[0x1c],iVar3,uVar4);
      uVar8 = __vbaStrMove();
      rtcFileCopy(uVar8,iVar3);
      __vbaFreeStrList(2,&local_2c,&local_30);
      __vbaFreeVar(uVar4);
    }
    (*pcVar5)(param_1[0x19],param_1[0xe]);
    __vbaStrMove();
    (**(code **)(*param_1 + 0x74))(param_1,&local_2c,&local_30);
    sVar1 = __vbaBoolStr(local_30);
    __vbaFreeStrList(2,&local_2c,&local_30);
    if (sVar1 != 0) {
      local_9c = (wchar_t *)param_1[0x19];
      local_a4[0] = 8;
      uVar4 = __vbaVarCat(local_44,local_a4,param_1 + 0x12);
      uVar4 = __vbaStrVarVal(&local_30,uVar4);
      iVar3 = param_1[0xe];
      (*pcVar5)(param_1[0x19],iVar3,uVar4);
      uVar8 = __vbaStrMove();
      rtcFileCopy(uVar8,iVar3);
      __vbaFreeStrList(2,&local_2c,&local_30);
      __vbaFreeVar(uVar4);
    }
    (*pcVar5)(param_1[0x18],param_1[0xe]);
    __vbaStrMove();
    (**(code **)(*param_1 + 0x68))(param_1,&local_2c,&local_30);
    sVar1 = __vbaBoolStr(local_30);
    __vbaFreeStrList(2,&local_2c,&local_30);
    if (sVar1 != 0) {
      local_9c = (wchar_t *)param_1[0x18];
      local_a4[0] = 8;
      uVar4 = __vbaVarCat(local_44,local_a4,param_1 + 0x12);
      uVar4 = __vbaStrVarVal(&local_30,uVar4);
      iVar3 = param_1[0xe];
      (*pcVar5)(param_1[0x18],iVar3,uVar4);
      uVar8 = __vbaStrMove();
      rtcFileCopy(uVar8,iVar3);
      __vbaFreeStrList(2,&local_2c,&local_30);
      __vbaFreeVar(uVar4);
    }
    uVar4 = __vbaNew(&DAT_11002084);
    __vbaObjSet(&local_28,uVar4);
    iVar3 = (**(code **)(*local_28 + 0x60))(local_28,0xffffffff);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,local_28,&DAT_11003344,0x60);
    }
    local_9c = (wchar_t *)param_1[0xf];
    local_a4[0] = 8;
    __vbaVarDup();
    puVar7 = local_44;
    piVar6 = local_28;
    iVar3 = (**(code **)(*local_28 + 0x30))(local_28,puVar7);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,local_28,&DAT_11003344,0x30);
    }
    __vbaFreeVar(piVar6);
    piVar6 = local_28;
    iVar3 = (**(code **)(*local_28 + 0x74))(local_28);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,local_28,&DAT_11003344,0x74);
    }
    uVar4 = __vbaCastObj(0,&DAT_11003344);
    __vbaObjSet(&local_28,uVar4);
    __vbaStrCopy(piVar6,puVar7);
    local_5c = 0x80020004;
    local_64[0] = 10;
    local_4c = 0x80020004;
    local_54[0] = 10;
    local_ac = local_24;
    local_b4[0] = 0x4008;
    local_9c = L"The files selected have been successfully restored.";
    local_a4[0] = 8;
    __vbaVarDup();
    rtcMsgBox(local_44,0x40,local_b4,local_54,local_64);
    __vbaFreeVarList(3,local_44,local_54,local_64);
    piVar6 = (int *)(&DAT_110103b0 + iVar2);
    if (*piVar6 == 0) {
      __vbaNew2(&DAT_11004070,piVar6);
    }
    piVar6 = (int *)*piVar6;
    iVar2 = (**(code **)(*piVar6 + 0x14))(piVar6,&local_34);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,piVar6,&DAT_11004060,0x14);
    }
    piVar6 = local_34;
    iVar2 = (**(code **)(*local_34 + 0x50))(local_34,&local_2c);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,piVar6,&DAT_11004080,0x50);
    }
    rtcChangeDir(local_2c);
    __vbaFreeStr();
    __vbaFreeObj();
  }
LAB_1100cb4f:
  __vbaExitProc();
  __vbaFreeStr(&LAB_1100cbb2);
  __vbaFreeObj();
  return;
}


// ---- FUN_1100cbe0 @ 1100cbe0

void __cdecl FUN_1100cbe0(int *param_1,uint *param_2)

{
  code *pcVar1;
  short sVar2;
  int iVar3;
  short **ppsVar4;
  uint uVar5;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  short sVar6;
  code *pcVar7;
  undefined2 uVar8;
  code *pcVar9;
  int *piStack_1f8;
  code *pcStack_1f4;
  code *pcStack_1f0;
  undefined4 uStack_1b0;
  undefined4 uStack_1a0;
  undefined4 uStack_190;
  undefined4 uStack_180;
  undefined4 uStack_170;
  undefined4 uStack_164;
  int iStack_160;
  short **ppsStack_15c;
  short **ppsStack_158;
  short **ppsStack_154;
  short **ppsStack_150;
  short **ppsStack_14c;
  short **ppsStack_148;
  short ***pppsStack_144;
  int *piStack_12c;
  undefined4 *puStack_128;
  short **local_118 [3];
  short local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_e0;
  wchar_t *local_d8;
  undefined4 local_d0;
  wchar_t *local_c8;
  undefined4 local_c0;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined4 local_90 [2];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  short *local_70 [5];
  short *local_5c;
  wchar_t local_58 [2];
  short **local_54;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44 [5];
  wchar_t local_30 [2];
  code *local_2c;
  undefined4 local_24;
  void *pvStack_20;
  undefined1 *puStack_1c;
  undefined1 *local_18;
  undefined *local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  puStack_1c = &LAB_110016d6;
  pvStack_20 = ExceptionList;
  local_18 = &stack0xfffffec0;
  local_14 = &DAT_11001538;
  local_10 = 0;
  local_c = 0;
  pppsStack_144 = (short ***)param_1;
  ppsStack_148 = (short **)0x1100cc1d;
  ExceptionList = &pvStack_20;
  (**(code **)(*param_1 + 4))();
  local_24 = 0;
  local_2c = (code *)0x0;
  local_30[0] = L'\0';
  local_30[1] = L'\0';
  local_44[0] = 0;
  local_48 = 0;
  local_4c = 0;
  local_54 = (short **)0x0;
  local_58[0] = L'\0';
  local_58[1] = L'\0';
  local_5c = (short *)0x0;
  local_70[0] = (short *)0x0;
  local_74 = 0;
  local_78 = 0;
  local_7c = 0;
  local_80 = 0;
  local_90[0] = 0;
  local_a0 = 0;
  local_b0 = 0;
  local_c0 = 0;
  local_d0 = 0;
  local_e0 = 0;
  local_104 = 0;
  local_108 = 0;
  local_118[0] = (short **)0x0;
  ppsStack_148 = (short **)0x1;
  ppsStack_14c = (short **)0x1100cc85;
  __vbaOnError();
  ppsStack_148 = (short **)0x1100cc93;
  __vbaStrCopy();
  pppsStack_144 = (short ***)param_1[0xe];
  ppsStack_148 = (short **)0x1100cc9f;
  rtcRightCharBstr();
  pcVar9 = __vbaStrMove_exref;
  __vbaStrMove();
  pppsStack_144 = (short ***)&DAT_11003004;
  ppsStack_148 = (short **)0x1100ccb8;
  iVar3 = __vbaStrCmp();
  __vbaFreeStr();
  pcVar7 = __vbaStrCat_exref;
  if (iVar3 != 0) {
    pppsStack_144 = (short ***)&DAT_11003004;
    ppsStack_148 = (short **)0x1100cce1;
    __vbaStrCat();
    ppsStack_148 = (short **)0x1100cce8;
    __vbaStrMove();
    ppsStack_148 = (short **)0x1100ccf3;
    __vbaStrCopy();
    __vbaFreeStr();
  }
  pppsStack_144 = (short ***)0x1100cd0e;
  rtcChangeDir();
  __vbaStrCopy();
  local_c8 = local_58;
  local_d0 = 0x4008;
  rtcDir();
  __vbaStrMove();
  iVar3 = __vbaStrCmp();
  if (iVar3 == 0) {
    __vbaStrCopy();
    local_c8 = (wchar_t *)0x44;
    local_d0 = 3;
    __vbaVarMove();
    local_88 = __vbaStrCat();
    local_90[0] = 8;
    __vbaVarMove();
    local_98 = 0x80020004;
    local_a0 = 10;
    local_88 = 0x80020004;
    local_90[0] = 10;
    local_c8 = local_30;
    local_d0 = 0x4008;
    pppsStack_144 = (short ***)local_44;
    ppsStack_148 = (short **)0x1100ce0a;
    pppsStack_144 = (short ***)__vbaI4Var();
    ppsStack_148 = local_70;
    ppsStack_14c = (short **)0x1100ce15;
    iVar3 = rtcMsgBox();
    local_10c = -(ushort)(iVar3 == 7);
    pppsStack_144 = (short ***)0x1100ce3c;
    __vbaFreeVarList();
    if (local_10c != 0) goto LAB_1100d79d;
    rtcMakeDir();
  }
  *(undefined2 *)(param_1 + 0x23) = 0;
  if ((*param_2 & 2) == 0) {
    local_88 = __vbaStrCat();
    local_90[0] = 8;
    pppsStack_144 = (short ***)0x1100cfa8;
    rtcDir();
    __vbaStrMove();
    __vbaFreeVar();
    while ((iVar3 = __vbaLenBstr(), 0 < iVar3 && ((short)param_1[0x23] == 0))) {
      __vbaStrCat();
      __vbaStrMove();
      pppsStack_144 = (short ***)local_54;
      ppsStack_148 = (short **)0x1100cff4;
      __vbaStrCat();
      ppsStack_148 = (short **)0x1100cffb;
      ppsStack_148 = (short **)__vbaStrMove();
      ppsStack_14c = (short **)0x1100d002;
      rtcFileLen();
      ppsStack_148 = (short **)&local_78;
      ppsStack_14c = (short **)&local_74;
      ppsStack_150 = (short **)0x2;
      ppsStack_154 = (short **)0x1100d012;
      __vbaFreeStrList();
      ppsStack_148 = (short **)param_1[0xd];
      ppsStack_14c = local_54;
      ppsStack_150 = (short **)0x1100d01f;
      __vbaStrCat();
      ppsStack_150 = (short **)0x1100d026;
      ppsStack_150 = (short **)__vbaStrMove();
      ppsStack_154 = (short **)param_1[0xe];
      ppsStack_158 = local_54;
      ppsStack_15c = (short **)0x1100d031;
      __vbaStrCat();
      __vbaStrMove();
      pppsStack_144 = (short ***)0x1100d03f;
      rtcFileCopy();
      pppsStack_144 = (short ***)0x2;
      ppsStack_148 = (short **)0x1100d04f;
      __vbaFreeStrList();
      local_88 = 0x80020004;
      local_90[0] = 10;
      pppsStack_144 = (short ***)0x1100d075;
      rtcDir();
      __vbaStrMove();
      __vbaFreeVar();
      rtcDoEvents();
    }
  }
  else {
    local_88 = __vbaStrCat();
    local_90[0] = 8;
    rtcDir();
    __vbaStrMove();
    __vbaFreeVar();
    while ((iVar3 = __vbaLenBstr(), 0 < iVar3 && ((short)param_1[0x23] == 0))) {
      rtcLeftCharBstr();
      __vbaStrMove();
      iVar3 = __vbaStrCmp();
      local_10c = -(ushort)(iVar3 != 0);
      __vbaFreeStr();
      if (local_10c != 0) {
        __vbaStrCat();
        __vbaStrMove();
        pppsStack_144 = (short ***)param_1[0xe];
        ppsStack_148 = local_54;
        ppsStack_14c = (short **)0x1100cf25;
        __vbaStrCat();
        __vbaStrMove();
        rtcFileCopy();
        pppsStack_144 = (short ***)0x1100cf43;
        __vbaFreeStrList();
      }
      local_88 = 0x80020004;
      local_90[0] = 10;
      rtcDir();
      __vbaStrMove();
      __vbaFreeVar();
      rtcDoEvents();
    }
  }
  if ((*param_2 & 1) == 0 && (short)param_1[0x23] == 0) {
    pppsStack_144 = (short ***)0x8;
    ppsStack_148 = &local_5c;
    ppsStack_14c = (short **)0x4;
    ppsStack_150 = (short **)0x180;
    ppsStack_154 = (short **)0x1100d0c3;
    __vbaRedim();
    local_88 = __vbaStrCat();
    local_90[0] = 8;
    pppsStack_144 = (short ***)0x1100d0f0;
    rtcDir();
    __vbaStrMove();
    __vbaFreeVar();
    do {
      iVar3 = __vbaLenBstr();
      if (iVar3 < 1) {
        uVar5 = (uint)local_2c >> 0x10;
        sVar2 = (short)local_2c + -1;
        if (SBORROW2((short)local_2c,1)) goto LAB_1100d860;
        pcVar1 = (code *)0x0;
        goto LAB_1100d29a;
      }
      rtcLeftCharBstr();
      __vbaStrMove();
      iVar3 = __vbaStrCmp();
      pcVar7 = (code *)-(uint)(iVar3 != 0);
      __vbaFreeStr();
      if ((short)pcVar7 != 0) {
        __vbaStrCat();
        __vbaStrMove();
        pppsStack_144 = (short ***)0x1100d176;
        iVar3 = (**(code **)(*param_1 + 0x60))();
        if (iVar3 < 0) {
          ppsStack_148 = (short **)0x1100d189;
          pppsStack_144 = (short ***)iVar3;
          __vbaHresultCheckObj();
        }
        sVar2 = (short)local_104;
        pcVar7 = (code *)CONCAT22((short)((uint)pcVar7 >> 0x10),(short)local_104);
        __vbaFreeStr();
        if (sVar2 != 0) {
          if ((local_5c == (short *)0x0) || (*local_5c != 1)) {
            __vbaGenerateBoundsError();
          }
          else {
            pcVar7 = (code *)((int)(short)local_2c - *(int *)(local_5c + 10));
            if (*(code **)(local_5c + 8) <= pcVar7) {
              __vbaGenerateBoundsError();
            }
          }
          __vbaStrCopy();
          sVar2 = (short)local_2c;
          uVar8 = (undefined2)((uint)pcVar7 >> 0x10);
          sVar6 = (short)local_2c + 1;
          pcVar7 = (code *)CONCAT22(uVar8,sVar6);
          if (SCARRY2((short)local_2c,1)) goto LAB_1100d860;
          local_2c = pcVar7;
          iVar3 = __vbaUbound();
          if (sVar6 == iVar3) {
            pcVar7 = (code *)CONCAT22(uVar8,sVar2 + 0xb);
            if (SCARRY2(sVar6,10)) goto LAB_1100d860;
            pppsStack_144 = (short ***)0x8;
            ppsStack_148 = &local_5c;
            ppsStack_14c = (short **)0x4;
            ppsStack_150 = (short **)0x180;
            ppsStack_154 = (short **)0x1100d22d;
            __vbaRedimPreserve();
          }
        }
      }
      local_88 = 0x80020004;
      local_90[0] = 10;
      rtcDir();
      __vbaStrMove();
      __vbaFreeVar();
      rtcDoEvents();
    } while ((short)param_1[0x23] == 0);
  }
LAB_1100d79d:
  __vbaExitProc();
  __vbaFreeObj();
  __vbaFreeStr();
  __vbaFreeStr();
  __vbaFreeVar();
  __vbaFreeStr();
  __vbaFreeObj();
  __vbaFreeStr();
  __vbaFreeStr();
  __vbaAryDestruct();
  __vbaFreeVar();
  return;
LAB_1100d29a:
  pcVar9 = pcVar1;
  sVar6 = (short)pcVar9;
  if (sVar2 < sVar6) {
    __vbaNew();
    __vbaObjSet();
    __vbaObjSetAddref();
    ppsVar4 = (short **)(**(code **)(*local_118[0] + 0x28))();
    if ((int)ppsVar4 < 0) {
      pppsStack_144 = (short ***)&DAT_11003344;
      ppsStack_148 = local_118[0];
      ppsStack_150 = (short **)0x1100d332;
      ppsStack_14c = ppsVar4;
      __vbaHresultCheckObj();
    }
    pppsStack_144 = (short ***)local_118[0];
    ppsStack_148 = (short **)0x1100d348;
    ppsVar4 = (short **)(**(code **)(*local_118[0] + 0x30))();
    if ((int)ppsVar4 < 0) {
      ppsStack_148 = (short **)0x60;
      ppsStack_14c = (short **)&DAT_11003344;
      ppsStack_150 = local_118[0];
      ppsStack_158 = (short **)0x1100d35f;
      ppsStack_154 = ppsVar4;
      __vbaHresultCheckObj();
    }
    local_c8 = (wchar_t *)param_1[0xf];
    local_d0 = 8;
    ppsStack_148 = (short **)0x1100d386;
    __vbaVarDup();
    ppsStack_148 = (short **)local_90;
    ppsStack_14c = local_118[0];
    ppsStack_150 = (short **)0x1100d399;
    ppsVar4 = (short **)(**(code **)(*local_118[0] + 0x18))();
    if ((int)ppsVar4 < 0) {
      ppsStack_150 = (short **)0x30;
      ppsStack_154 = (short **)&DAT_11003344;
      ppsStack_158 = local_118[0];
      iStack_160 = 0x1100d3b0;
      ppsStack_15c = ppsVar4;
      __vbaHresultCheckObj();
    }
    ppsStack_150 = (short **)0x1100d3bc;
    __vbaFreeVar();
    ppsStack_14c = (short **)0xffffffff;
    ppsStack_150 = local_118[0];
    ppsStack_154 = (short **)0x1100d3ca;
    iVar3 = (**(code **)(*local_118[0] + 0x38))();
    if (iVar3 < 0) {
      ppsStack_154 = (short **)0x70;
      ppsStack_158 = (short **)&DAT_11003344;
      ppsStack_15c = local_118[0];
      uStack_164 = 0x1100d3e1;
      iStack_160 = iVar3;
      __vbaHresultCheckObj();
    }
    ppsStack_154 = local_118[0];
    ppsStack_158 = (short **)0x1100d3ed;
    iVar3 = (**(code **)(*local_118[0] + 0x3c))();
    if (iVar3 < 0) {
      pppsStack_144 = (short ***)&DAT_11003344;
      ppsStack_148 = local_118[0];
      ppsStack_150 = (short **)0x1100d404;
      ppsStack_14c = (short **)iVar3;
      __vbaHresultCheckObj();
    }
    pppsStack_144 = local_118;
    ppsStack_148 = (short **)0x1100d413;
    __vbaObjSetAddref();
    pppsStack_144 = (short ***)0x0;
    ppsStack_148 = (short **)0x1100d420;
    __vbaCastObj();
    pppsStack_144 = (short ***)&local_4c;
    ppsStack_148 = (short **)0x1100d42b;
    __vbaObjSet();
    *(undefined2 *)(param_1 + 0x10) = 0;
    __vbaStrCopy();
    local_a8 = 0x80020004;
    local_b0 = 10;
    local_98 = 0x80020004;
    local_a0 = 10;
    local_d8 = local_30;
    local_e0 = 0x4008;
    local_c8 = L"The files selected have been successfully restored.";
    local_d0 = 8;
    __vbaVarDup();
    pppsStack_144 = (short ***)0x40;
    ppsStack_148 = (short **)local_90;
    ppsStack_14c = (short **)0x1100d4ba;
    rtcMsgBox();
    pppsStack_144 = (short ***)0x3;
    ppsStack_148 = (short **)0x1100d4d7;
    __vbaFreeVarList();
    goto LAB_1100d79d;
  }
  iVar3 = (**(code **)(*param_1 + 0x5c))();
  uVar8 = extraout_var;
  if (iVar3 < 0) {
    ppsStack_148 = (short **)0x1100d2bc;
    pppsStack_144 = (short ***)iVar3;
    __vbaHresultCheckObj();
    uVar8 = extraout_var_00;
  }
  if ((short)param_1[0x23] != 0) goto LAB_1100d79d;
  pcVar7 = (code *)CONCAT22((short)uVar5,sVar2);
  pcVar1 = (code *)CONCAT22(uVar8,sVar6 + 1);
  if (SCARRY2(sVar6,1)) {
LAB_1100d860:
    __vbaErrorOverflow();
    ppsStack_14c = (short **)&LAB_110016d6;
    ppsStack_150 = ExceptionList;
    ppsStack_148 = (short **)&piStack_1f8;
    piStack_1f8 = param_1;
    pppsStack_144 = (short ***)&LAB_11001560;
    ExceptionList = &ppsStack_150;
    pcStack_1f4 = pcVar9;
    pcStack_1f0 = pcVar7;
    (**(code **)(*piStack_12c + 4))(piStack_12c);
    ppsStack_158 = (short **)0x0;
    ppsStack_15c = (short **)0x0;
    iStack_160 = 0;
    uStack_170 = 0;
    uStack_180 = 0;
    uStack_190 = 0;
    uStack_1a0 = 0;
    uStack_1b0 = 0;
    __vbaOnError(1);
    rtcGetFileAttr(*puStack_128);
    uVar5 = __vbaI2I4(piStack_12c);
    ppsStack_158 = (short **)-((uVar5 & 0x10) >> 4);
    __vbaExitProc();
    return;
  }
  goto LAB_1100d29a;
}


// ---- FUN_1100d870 @ 1100d870

void __cdecl FUN_1100d870(int *param_1,undefined4 *param_2)

{
  void *pvStack_20;
  undefined1 *puStack_1c;
  undefined1 *local_18;
  undefined1 *local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  puStack_1c = &LAB_110016d6;
  pvStack_20 = ExceptionList;
  local_18 = &stack0xffffff38;
  local_14 = &LAB_11001560;
  local_10 = 0;
  local_c = 0;
  ExceptionList = &pvStack_20;
  (**(code **)(*param_1 + 4))(param_1);
  __vbaOnError(1);
  rtcGetFileAttr(*param_2);
  __vbaI2I4(param_1);
  __vbaExitProc();
  return;
}


// ---- FUN_1100da10 @ 1100da10

void __cdecl FUN_1100da10(int *param_1)

{
  void *pvStack_20;
  undefined1 *puStack_1c;
  undefined1 *local_18;
  undefined *local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  puStack_1c = &LAB_110016d6;
  pvStack_20 = ExceptionList;
  local_18 = &stack0xffffff40;
  local_14 = &DAT_11001588;
  local_10 = 0;
  local_c = 0;
  ExceptionList = &pvStack_20;
  (**(code **)(*param_1 + 4))(param_1);
  __vbaOnError(1);
  __vbaStrCopy(param_1);
  __vbaStrCopy();
  __vbaStrCopy();
  __vbaStrCopy();
  __vbaStrCopy();
  __vbaStrCopy();
  __vbaStrCopy();
  __vbaExitProc();
  return;
}


// ---- FUN_1100dbd0 @ 1100dbd0

void __cdecl FUN_1100dbd0(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined2 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_7c [2];
  undefined4 local_74;
  undefined4 local_6c;
  undefined4 local_5c;
  undefined4 local_4c;
  undefined4 local_3c;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  void *pvStack_20;
  undefined1 *puStack_1c;
  undefined1 *local_18;
  undefined *local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  puStack_1c = &LAB_110016d6;
  pvStack_20 = ExceptionList;
  local_18 = &stack0xffffff3c;
  local_14 = &DAT_110015b0;
  local_10 = 0;
  local_c = 0;
  local_24 = 0;
  local_28 = 0;
  local_2c = 0;
  local_3c = 0;
  local_4c = 0;
  local_5c = 0;
  local_6c = 0;
  local_7c[0] = 0;
  ExceptionList = &pvStack_20;
  *param_3 = 0;
  __vbaOnError(1);
  local_74 = param_2;
  local_7c[0] = 0x4008;
  rtcDir(local_7c,2);
  uVar2 = __vbaStrMove();
  iVar3 = __vbaStrCmp(&DAT_11002efc,uVar2);
  __vbaStrBool(-(uint)(iVar3 != 0));
  __vbaStrMove();
  __vbaFreeStr();
  uVar1 = __vbaBoolStr(local_24);
  *(undefined2 *)(param_1 + 0x7e) = uVar1;
  __vbaExitProc();
  return;
}


// ---- FUN_1100ddb0 @ 1100ddb0

void __cdecl FUN_1100ddb0(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined2 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_7c [2];
  undefined4 local_74;
  undefined4 local_6c;
  undefined4 local_5c;
  undefined4 local_4c;
  undefined4 local_3c;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  void *pvStack_20;
  undefined1 *puStack_1c;
  undefined1 *local_18;
  undefined *local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  puStack_1c = &LAB_110016d6;
  pvStack_20 = ExceptionList;
  local_18 = &stack0xffffff3c;
  local_14 = &DAT_110015d8;
  local_10 = 0;
  local_c = 0;
  local_24 = 0;
  local_28 = 0;
  local_2c = 0;
  local_3c = 0;
  local_4c = 0;
  local_5c = 0;
  local_6c = 0;
  local_7c[0] = 0;
  ExceptionList = &pvStack_20;
  *param_3 = 0;
  __vbaOnError(1);
  local_74 = param_2;
  local_7c[0] = 0x4008;
  rtcDir(local_7c,2);
  uVar2 = __vbaStrMove();
  iVar3 = __vbaStrCmp(&DAT_11002efc,uVar2);
  __vbaStrBool(-(uint)(iVar3 != 0));
  __vbaStrMove();
  __vbaFreeStr();
  uVar1 = __vbaBoolStr(local_24);
  *(undefined2 *)(param_1 + 0x7c) = uVar1;
  __vbaExitProc();
  return;
}


// ---- FUN_1100df90 @ 1100df90

void __cdecl FUN_1100df90(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined2 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_7c [2];
  undefined4 local_74;
  undefined4 local_6c;
  undefined4 local_5c;
  undefined4 local_4c;
  undefined4 local_3c;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  void *pvStack_20;
  undefined1 *puStack_1c;
  undefined1 *local_18;
  undefined *local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  puStack_1c = &LAB_110016d6;
  pvStack_20 = ExceptionList;
  local_18 = &stack0xffffff3c;
  local_14 = &DAT_11001600;
  local_10 = 0;
  local_c = 0;
  local_24 = 0;
  local_28 = 0;
  local_2c = 0;
  local_3c = 0;
  local_4c = 0;
  local_5c = 0;
  local_6c = 0;
  local_7c[0] = 0;
  ExceptionList = &pvStack_20;
  *param_3 = 0;
  __vbaOnError(1);
  local_74 = param_2;
  local_7c[0] = 0x4008;
  rtcDir(local_7c,2);
  uVar2 = __vbaStrMove();
  iVar3 = __vbaStrCmp(&DAT_11002efc,uVar2);
  __vbaStrBool(-(uint)(iVar3 != 0));
  __vbaStrMove();
  __vbaFreeStr();
  uVar1 = __vbaBoolStr(local_24);
  *(undefined2 *)(param_1 + 0x84) = uVar1;
  __vbaExitProc();
  return;
}


// ---- FUN_1100e180 @ 1100e180

void __cdecl FUN_1100e180(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined2 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_7c [2];
  undefined4 local_74;
  undefined4 local_6c;
  undefined4 local_5c;
  undefined4 local_4c;
  undefined4 local_3c;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  void *pvStack_20;
  undefined1 *puStack_1c;
  undefined1 *local_18;
  undefined *local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  puStack_1c = &LAB_110016d6;
  pvStack_20 = ExceptionList;
  local_18 = &stack0xffffff3c;
  local_14 = &DAT_11001628;
  local_10 = 0;
  local_c = 0;
  local_24 = 0;
  local_28 = 0;
  local_2c = 0;
  local_3c = 0;
  local_4c = 0;
  local_5c = 0;
  local_6c = 0;
  local_7c[0] = 0;
  ExceptionList = &pvStack_20;
  *param_3 = 0;
  __vbaOnError(1);
  local_74 = param_2;
  local_7c[0] = 0x4008;
  rtcDir(local_7c,2);
  uVar2 = __vbaStrMove();
  iVar3 = __vbaStrCmp(&DAT_11002efc,uVar2);
  __vbaStrBool(-(uint)(iVar3 != 0));
  __vbaStrMove();
  __vbaFreeStr();
  uVar1 = __vbaBoolStr(local_24);
  *(undefined2 *)(param_1 + 0x80) = uVar1;
  __vbaExitProc();
  return;
}


// ---- FUN_1100e370 @ 1100e370

void __cdecl FUN_1100e370(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined2 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_7c [2];
  undefined4 local_74;
  undefined4 local_6c;
  undefined4 local_5c;
  undefined4 local_4c;
  undefined4 local_3c;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  void *pvStack_20;
  undefined1 *puStack_1c;
  undefined1 *local_18;
  undefined *local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  puStack_1c = &LAB_110016d6;
  pvStack_20 = ExceptionList;
  local_18 = &stack0xffffff3c;
  local_14 = &DAT_11001650;
  local_10 = 0;
  local_c = 0;
  local_24 = 0;
  local_28 = 0;
  local_2c = 0;
  local_3c = 0;
  local_4c = 0;
  local_5c = 0;
  local_6c = 0;
  local_7c[0] = 0;
  ExceptionList = &pvStack_20;
  *param_3 = 0;
  __vbaOnError(1);
  local_74 = param_2;
  local_7c[0] = 0x4008;
  rtcDir(local_7c,2);
  uVar2 = __vbaStrMove();
  iVar3 = __vbaStrCmp(&DAT_11002efc,uVar2);
  __vbaStrBool(-(uint)(iVar3 != 0));
  __vbaStrMove();
  __vbaFreeStr();
  uVar1 = __vbaBoolStr(local_24);
  *(undefined2 *)(param_1 + 0x82) = uVar1;
  __vbaExitProc();
  return;
}


// ---- FUN_1100e560 @ 1100e560

void __cdecl FUN_1100e560(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined2 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_7c [2];
  undefined4 local_74;
  undefined4 local_6c;
  undefined4 local_5c;
  undefined4 local_4c;
  undefined4 local_3c;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  void *pvStack_20;
  undefined1 *puStack_1c;
  undefined1 *local_18;
  undefined *local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  puStack_1c = &LAB_110016d6;
  pvStack_20 = ExceptionList;
  local_18 = &stack0xffffff3c;
  local_14 = &DAT_11001678;
  local_10 = 0;
  local_c = 0;
  local_24 = 0;
  local_28 = 0;
  local_2c = 0;
  local_3c = 0;
  local_4c = 0;
  local_5c = 0;
  local_6c = 0;
  local_7c[0] = 0;
  ExceptionList = &pvStack_20;
  *param_3 = 0;
  __vbaOnError(1);
  local_74 = param_2;
  local_7c[0] = 0x4008;
  rtcDir(local_7c,2);
  uVar2 = __vbaStrMove();
  iVar3 = __vbaStrCmp(&DAT_11002efc,uVar2);
  __vbaStrBool(-(uint)(iVar3 != 0));
  __vbaStrMove();
  __vbaFreeStr();
  uVar1 = __vbaBoolStr(local_24);
  *(undefined2 *)(param_1 + 0x86) = uVar1;
  __vbaExitProc();
  return;
}


// ---- FUN_1100e750 @ 1100e750

void __cdecl FUN_1100e750(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined2 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_7c [2];
  undefined4 local_74;
  undefined4 local_6c;
  undefined4 local_5c;
  undefined4 local_4c;
  undefined4 local_3c;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  void *pvStack_20;
  undefined1 *puStack_1c;
  undefined1 *local_18;
  undefined *local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  puStack_1c = &LAB_110016d6;
  pvStack_20 = ExceptionList;
  local_18 = &stack0xffffff3c;
  local_14 = &DAT_110016a0;
  local_10 = 0;
  local_c = 0;
  local_24 = 0;
  local_28 = 0;
  local_2c = 0;
  local_3c = 0;
  local_4c = 0;
  local_5c = 0;
  local_6c = 0;
  local_7c[0] = 0;
  ExceptionList = &pvStack_20;
  *param_3 = 0;
  __vbaOnError(1);
  local_74 = param_2;
  local_7c[0] = 0x4008;
  rtcDir(local_7c,2);
  uVar2 = __vbaStrMove();
  iVar3 = __vbaStrCmp(&DAT_11002efc,uVar2);
  __vbaStrBool(-(uint)(iVar3 != 0));
  __vbaStrMove();
  __vbaFreeStr();
  uVar1 = __vbaBoolStr(local_24);
  *(undefined2 *)(param_1 + 0x88) = uVar1;
  __vbaExitProc();
  return;
}


