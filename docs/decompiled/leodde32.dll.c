// Decompiled with Ghidra from leodde32.dll
// Format: Portable Executable (PE), image base 10000000

// ---- FUN_10001000 @ 10001000

undefined4 * FUN_10001000(void)

{
  undefined4 *puVar1;
  undefined4 *local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1000fc8a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar1 = operator_new(4);
  local_8 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    local_1c = (undefined4 *)0x0;
  }
  else {
    local_1c = FUN_10001081(puVar1);
  }
  ExceptionList = local_10;
  return local_1c;
}


// ---- FUN_10001067 @ 10001067

undefined * FUN_10001067(void)

{
  return classCObject_exref;
}


// ---- FUN_10001071 @ 10001071

undefined ** FUN_10001071(void)

{
  return &PTR_s_CAtom_10011338;
}


// ---- FUN_10001081 @ 10001081

undefined4 * __fastcall FUN_10001081(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_10011364;
  *param_1 = &PTR_FUN_10011350;
  return param_1;
}


// ---- FUN_100010a1 @ 100010a1

void __fastcall FUN_100010a1(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_10011350;
  *param_1 = &PTR_LAB_10011364;
  return;
}


// ---- FUN_100010be @ 100010be

undefined4 FUN_100010be(ATOM param_1,CString *param_2)

{
  CHAR local_104 [256];
  
  GlobalGetAtomNameA(param_1,local_104,0xff);
  GlobalDeleteAtom(param_1);
  CString::operator=(param_2,local_104);
  return *(undefined4 *)(*(int *)param_2 + -8);
}


// ---- FUN_10001118 @ 10001118

void FUN_10001118(LPCSTR param_1)

{
  GlobalAddAtomA(param_1);
  return;
}


// ---- FUN_1000112f @ 1000112f

void FUN_1000112f(ATOM param_1)

{
  GlobalDeleteAtom(param_1);
  return;
}


// ---- FUN_10001147 @ 10001147

void FUN_10001147(LPCSTR param_1)

{
  GlobalFindAtomA(param_1);
  return;
}


// ---- FUN_10001160 @ 10001160

undefined4 * __thiscall FUN_10001160(void *this,uint param_1)

{
  FUN_100010a1(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- FUN_10001190 @ 10001190

undefined4 * __thiscall FUN_10001190(void *this,uint param_1)

{
  *(undefined ***)this = &PTR_LAB_10011364;
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- FUN_100011c0 @ 100011c0

void FUN_100011c0(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ---- FUN_100011e0 @ 100011e0

void FUN_100011e0(void)

{
  return;
}


// ---- FUN_100011f0 @ 100011f0

void FUN_100011f0(void)

{
  return;
}


// ---- _GetBaseMessageMap @ 10001200

/* protected: static struct AFX_MSGMAP const * __stdcall LeoDDE32::_GetBaseMessageMap(void) */

AFX_MSGMAP * LeoDDE32::_GetBaseMessageMap(void)

{
                    /* 0x1200  44  ?_GetBaseMessageMap@LeoDDE32@@KGPBUAFX_MSGMAP@@XZ */
  return (AFX_MSGMAP *)messageMap_exref;
}


// ---- GetMessageMap @ 1000120a

/* protected: virtual struct AFX_MSGMAP const * __thiscall LeoDDE32::GetMessageMap(void)const  */

AFX_MSGMAP * __thiscall LeoDDE32::GetMessageMap(LeoDDE32 *this)

{
                    /* 0x120a  21  ?GetMessageMap@LeoDDE32@@MBEPBUAFX_MSGMAP@@XZ */
  return (AFX_MSGMAP *)&messageMap;
}


// ---- LeoDDE32 @ 1000121a

/* public: __thiscall LeoDDE32::LeoDDE32(struct HWND__ *) */

LeoDDE32 * __thiscall LeoDDE32::LeoDDE32(LeoDDE32 *this,HWND__ *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x121a  1  ??0LeoDDE32@@QAE@PAUHWND__@@@Z */
  local_8 = 0xffffffff;
  puStack_c = &LAB_1000fca9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  CWinApp::CWinApp((CWinApp *)this,(char *)0x0);
  local_8 = 0;
  *(undefined ***)this = &_vftable_;
  DAT_10020078 = 0;
  DAT_1001efe0 = 0;
  DAT_1001eee4 = 0;
  DAT_1002317c = 0;
  DAT_1001e42c = 0;
  DAT_1001f1d8 = 0;
  DAT_1002314c = 0;
  m_pNotifyWindow = (CNotifyWindow *)0x0;
  *(undefined4 *)(this + 0xc4) = 0;
  DetermineOS(this);
  ExceptionList = local_10;
  return this;
}


// ---- InitInstance @ 100012d1

/* public: virtual int __thiscall LeoDDE32::InitInstance(void) */

int __thiscall LeoDDE32::InitInstance(LeoDDE32 *this)

{
  int iVar1;
  
                    /* 0x12d1  25  ?InitInstance@LeoDDE32@@UAEHXZ */
  iVar1 = CWinApp::InitInstance((CWinApp *)this);
  return iVar1;
}


// ---- GetMainWnd @ 100012e4

/* public: virtual class CWnd * __thiscall LeoDDE32::GetMainWnd(void) */

CWnd * __thiscall LeoDDE32::GetMainWnd(LeoDDE32 *this)

{
  CWnd *pCVar1;
  
                    /* 0x12e4  20  ?GetMainWnd@LeoDDE32@@UAEPAVCWnd@@XZ */
  pCVar1 = CWinThread::GetMainWnd((CWinThread *)this);
  return pCVar1;
}


// ---- ExitInstance @ 100012f7

/* public: virtual int __thiscall LeoDDE32::ExitInstance(void) */

int __thiscall LeoDDE32::ExitInstance(LeoDDE32 *this)

{
                    /* 0x12f7  18  ?ExitInstance@LeoDDE32@@UAEHXZ */
  leo_dde_uninit(this);
  return 0;
}


// ---- RemoteControl @ 1000130c

/* public: void __thiscall LeoDDE32::RemoteControl(int) */

void __thiscall LeoDDE32::RemoteControl(LeoDDE32 *this,int param_1)

{
                    /* 0x130c  35  ?RemoteControl@LeoDDE32@@QAEXH@Z */
  DAT_10020078 = param_1;
  return;
}


// ---- NetDDE @ 10001321

/* public: void __thiscall LeoDDE32::NetDDE(int) */

void __thiscall LeoDDE32::NetDDE(LeoDDE32 *this,int param_1)

{
                    /* 0x1321  28  ?NetDDE@LeoDDE32@@QAEXH@Z */
  DAT_1001efe0 = param_1;
  return;
}


// ---- leo_dde_init @ 10001336

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: int __thiscall LeoDDE32::leo_dde_init(int,int) */

int __thiscall LeoDDE32::leo_dde_init(LeoDDE32 *this,int param_1,int param_2)

{
  AFX_MODULE_STATE *pAVar1;
  void *this_00;
  int iVar2;
  UINT UVar3;
  BOOL BVar4;
  HSZ pHVar5;
  undefined4 *local_78;
  DWORD local_48;
  char local_44 [4];
  undefined2 local_40;
  undefined2 uStack_3e;
  DWORD local_3c [3];
  undefined1 local_30;
  undefined4 local_2c;
  int local_28;
  int local_24;
  DWORD local_20;
  DWORD local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0x1336  50  ?leo_dde_init@LeoDDE32@@QAEHHH@Z */
  local_8 = 0xffffffff;
  puStack_c = &LAB_1000fcc6;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pAVar1 = (AFX_MODULE_STATE *)FUN_1000f785();
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2((AFX_MAINTAIN_STATE2 *)&local_2c,pAVar1);
  local_8 = 0;
  local_3c[2] = 0;
  local_3c[1] = 0;
  local_18 = 0;
  local_30 = 0;
  _local_40 = CONCAT22(uStack_3e,2);
  local_14 = CONCAT22(local_14._2_2_,0x1a);
  local_20 = 0;
  local_1c = 0;
  local_3c[0] = 0;
  this_00 = operator_new(0x14);
  local_8._0_1_ = 1;
  if (this_00 == (void *)0x0) {
    local_78 = (undefined4 *)0x0;
  }
  else {
    local_78 = FUN_1000b100(this_00,s_LEO_Server_1001aed0);
  }
  local_8 = (uint)local_8._1_3_ << 8;
  DAT_1002314c = local_78;
  RemoteControl(this,param_2);
  NetDDE(this,param_1);
  iVar2 = DetermineOS(this);
  if (iVar2 == 0) {
    send_server_message(s_DDE_Initialise__Operating_System_1001aedc);
    *(undefined4 *)(local_28 + 4) = local_2c;
    iVar2 = 0;
  }
  else {
    DAT_1001efd0 = hLEOUIFwindow();
    if (DAT_1001efd0 == (HWND__ *)0x0) {
      send_server_message(s_DDE_Initialise__LEO_Server_not_f_1001af18);
      *(undefined4 *)(local_28 + 4) = local_2c;
      iVar2 = 0;
    }
    else {
      _DAT_10020c58 = 0;
      _DAT_10020c5c = 0;
      lstrcpyA(&DAT_10020c60,&DAT_1001af40);
      DAT_1001f018 = 0;
      lstrcpyA(&DAT_1001f01c,s_No_Error_1001af44);
      for (local_3c[2] = 0; (int)local_3c[2] < 4; local_3c[2] = local_3c[2] + 1) {
        *(undefined4 *)(&DAT_1001f980 + local_3c[2] * 4) = 0;
      }
      for (local_3c[2] = 0; (int)local_3c[2] < 0x1ad; local_3c[2] = local_3c[2] + 1) {
        *(undefined4 *)(&DAT_1001f9b0 + local_3c[2] * 4) = 0;
      }
      for (local_3c[2] = 0; (int)local_3c[2] < 0x143; local_3c[2] = local_3c[2] + 1) {
        *(undefined4 *)(&DAT_100206dc + local_3c[2] * 4) = 0;
      }
      for (local_3c[2] = 0; (int)local_3c[2] < 0x16; local_3c[2] = local_3c[2] + 1) {
        *(undefined4 *)(&DAT_1001e968 + local_3c[2] * 4) = 0;
      }
      _local_40 = CONCAT22(uStack_3e,2);
      local_14 = CONCAT22(local_14._2_2_,0x1a);
      for (local_24 = 2; local_24 < (int)(local_14 & 0xffff); local_24 = local_24 + 1) {
        local_44[0] = (char)local_24 + 'A';
        local_44[1] = 0x3a;
        local_44[2] = 0x5c;
        local_44[3] = 0;
        UVar3 = GetDriveTypeA(local_44);
        if (UVar3 == 6) {
          local_48 = 0;
          BVar4 = GetDiskFreeSpaceA(local_44,&local_20,local_3c,&local_1c,&local_48);
          if (BVar4 == 0) {
            local_18 = 0;
          }
          else {
            local_18 = local_3c[0] * local_20 * local_1c;
          }
          if (0x3ff < local_18) {
            lstrcpyA(s_C__LEO__10015b84,&DAT_1001af50);
            s_C__LEO__10015b84[0] = (char)local_24 + 'A';
            break;
          }
        }
      }
      lstrcatA(s_C__LEO__10015b84,s_IMAGE_BMP_1001af54);
      UVar3 = DdeInitializeA(&DAT_100231bc,leo_dde,0x180020,0);
      if (UVar3 == 0) {
        DAT_1001eee8 = RegisterClipboardFormatA(&DAT_1001af90);
        if (DAT_1001eee8 == 0) {
          send_server_message(s_DDE_Initialise__Unable_to_regist_1001af98);
          *(undefined4 *)(local_28 + 4) = local_2c;
          iVar2 = 0;
        }
        else {
          DAT_100231e0 = GlobalAlloc(0,0xea66);
          if (DAT_100231e0 == (HGLOBAL)0x0) {
            send_server_message(s_DDE_Initialise__Unable_to_alloca_1001afcc);
            *(undefined4 *)(local_28 + 4) = local_2c;
            iVar2 = 0;
          }
          else {
            DAT_100231e4 = GlobalLock(DAT_100231e0);
            if (DAT_100231e4 == (LPVOID)0x0) {
              *(undefined4 *)(local_28 + 4) = local_2c;
              iVar2 = 0;
            }
            else {
              DAT_1001dff4 = DdeCreateStringHandleA(DAT_100231bc,s_LEO_DDE_SERVER_1001b004,0x3ec);
              for (local_3c[2] = 0; (int)local_3c[2] < 8; local_3c[2] = local_3c[2] + 1) {
                pHVar5 = DdeCreateStringHandleA
                                   (DAT_100231bc,(&PTR_s_ERRORS_10015ab8)[local_3c[2]],0x3ec);
                (&DAT_10020678)[local_3c[2]] = pHVar5;
              }
              for (local_3c[2] = 0; (int)local_3c[2] < 4; local_3c[2] = local_3c[2] + 1) {
                pHVar5 = DdeCreateStringHandleA
                                   (DAT_100231bc,(&PTR_s_MAX_ITEMS_10015ad8)[local_3c[2]],0x3ec);
                (&DAT_1001f990)[local_3c[2]] = pHVar5;
              }
              for (local_3c[2] = 0; (int)local_3c[2] < 0x1ad; local_3c[2] = local_3c[2] + 1) {
                pHVar5 = DdeCreateStringHandleA
                                   (DAT_100231bc,(&PTR_s_MAX_ITEMS_10014bb8)[local_3c[2]],0x3ec);
                (&DAT_1001f2c4)[local_3c[2]] = pHVar5;
              }
              for (local_3c[2] = 0; (int)local_3c[2] < 0x1ad; local_3c[2] = local_3c[2] + 1) {
                iVar2 = lstrcmpA(s_AP_TARGETKV_1001b014,(&PTR_s_MAX_ITEMS_10014bb8)[local_3c[2]]);
                if (iVar2 == 0) {
                  DAT_1001e000 = local_3c[2] + -1;
                }
                iVar2 = lstrcmpA(s_AP_TARGETCURRENT_1001b020,
                                 (&PTR_s_MAX_ITEMS_10014bb8)[local_3c[2]]);
                if (iVar2 == 0) {
                  DAT_1001e3e0 = local_3c[2] + -1;
                }
                iVar2 = lstrcmpA(s_AP_MAG_1001b034,(&PTR_s_MAX_ITEMS_10014bb8)[local_3c[2]]);
                if (iVar2 == 0) {
                  DAT_100206bc = local_3c[2] + -1;
                }
                iVar2 = lstrcmpA(s_AP_STAGE_AT_X_1001b03c,(&PTR_s_MAX_ITEMS_10014bb8)[local_3c[2]]);
                if (iVar2 == 0) {
                  DAT_100206a8 = local_3c[2] + -1;
                }
                iVar2 = lstrcmpA(s_AP_STAGE_AT_Y_1001b04c,(&PTR_s_MAX_ITEMS_10014bb8)[local_3c[2]]);
                if (iVar2 == 0) {
                  DAT_1002316c = local_3c[2] + -1;
                }
                iVar2 = lstrcmpA(s_AP_STAGE_AT_Z_1001b05c,(&PTR_s_MAX_ITEMS_10014bb8)[local_3c[2]]);
                if (iVar2 == 0) {
                  DAT_10020ce4 = local_3c[2] + -1;
                }
              }
              for (local_3c[2] = 0; (int)local_3c[2] < 7; local_3c[2] = local_3c[2] + 1) {
                pHVar5 = DdeCreateStringHandleA
                                   (DAT_100231bc,(&PTR_s_MAX_ITEMS_10015b40)[local_3c[2]],0x3ec);
                (&DAT_1001ef0c)[local_3c[2]] = pHVar5;
              }
              for (local_3c[2] = 0; (int)local_3c[2] < 7; local_3c[2] = local_3c[2] + 1) {
                pHVar5 = DdeCreateStringHandleA
                                   (DAT_100231bc,(&PTR_s_MAX_ITEMS_10015b5c)[local_3c[2]],0x3ec);
                (&DAT_1002318c)[local_3c[2]] = pHVar5;
              }
              for (local_3c[2] = 0; (int)local_3c[2] < 0x143; local_3c[2] = local_3c[2] + 1) {
                pHVar5 = DdeCreateStringHandleA
                                   (DAT_100231bc,(&PTR_s_MAX_ITEMS_1001526c)[local_3c[2]],0x3ec);
                (&DAT_1001e43c)[local_3c[2]] = pHVar5;
              }
              for (local_3c[2] = 0; (int)local_3c[2] < 0x16; local_3c[2] = local_3c[2] + 1) {
                pHVar5 = DdeCreateStringHandleA
                                   (DAT_100231bc,(&PTR_s_MAX_ITEMS_10015ae8)[local_3c[2]],0x3ec);
                (&DAT_1001f11c)[local_3c[2]] = pHVar5;
              }
              for (local_3c[2] = 0; (int)local_3c[2] < 200; local_3c[2] = local_3c[2] + 1) {
                pHVar5 = DdeCreateStringHandleA
                                   (DAT_100231bc,(&PTR_s_MAX_ITEMS_10015778)[local_3c[2]],0x3ec);
                (&DAT_1001e04c)[local_3c[2]] = pHVar5;
              }
              for (local_3c[2] = 0; (int)local_3c[2] < 3; local_3c[2] = local_3c[2] + 1) {
                pHVar5 = DdeCreateStringHandleA
                                   (DAT_100231bc,(&PTR_s_MAX_ITEMS_10015b78)[local_3c[2]],0x3ec);
                (&DAT_1001e9c8)[local_3c[2]] = pHVar5;
              }
              DdeNameService(DAT_100231bc,DAT_1001dff4,(HSZ)0x0,1);
              iVar2 = netdde_ok();
              if (iVar2 != 0) {
                UnRegisterDDEShares(this);
                iVar2 = RegisterDDEShares(this);
                if (iVar2 == 0) {
                  send_server_message(s_DDE_Initialise__DDE_share_creati_1001b06c);
                  *(undefined4 *)(local_28 + 4) = local_2c;
                  ExceptionList = local_10;
                  return 0;
                }
              }
              *(undefined4 *)(local_28 + 4) = local_2c;
              iVar2 = 1;
            }
          }
        }
      }
      else {
        send_server_message(s_DDE_Initialise__Unable_to_initia_1001af60);
        *(undefined4 *)(local_28 + 4) = local_2c;
        iVar2 = 0;
      }
    }
  }
  ExceptionList = local_10;
  return iVar2;
}


// ---- leo_dde_uninit @ 10001b25

/* public: void __thiscall LeoDDE32::leo_dde_uninit(void) */

void __thiscall LeoDDE32::leo_dde_uninit(LeoDDE32 *this)

{
  AFX_MODULE_STATE *pAVar1;
  int iVar2;
  BOOL BVar3;
  HWND local_44;
  int local_1c;
  undefined4 local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x1b25  51  ?leo_dde_uninit@LeoDDE32@@QAEXXZ */
  local_8 = 0xffffffff;
  puStack_c = &LAB_1000fcd9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pAVar1 = (AFX_MODULE_STATE *)FUN_1000f785();
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2((AFX_MAINTAIN_STATE2 *)&local_18,pAVar1);
  local_8 = 0;
  DdeNameService(DAT_100231bc,(HSZ)0x0,(HSZ)0x0,2);
  DdeFreeStringHandle(DAT_100231bc,DAT_1001dff4);
  for (local_1c = 0; local_1c < 8; local_1c = local_1c + 1) {
    DdeFreeStringHandle(DAT_100231bc,(HSZ)(&DAT_10020678)[local_1c]);
  }
  for (local_1c = 0; local_1c < 4; local_1c = local_1c + 1) {
    DdeFreeStringHandle(DAT_100231bc,(HSZ)(&DAT_1001f990)[local_1c]);
  }
  for (local_1c = 0; local_1c < 0x1ad; local_1c = local_1c + 1) {
    DdeFreeStringHandle(DAT_100231bc,(HSZ)(&DAT_1001f2c4)[local_1c]);
  }
  for (local_1c = 0; local_1c < 7; local_1c = local_1c + 1) {
    DdeFreeStringHandle(DAT_100231bc,(HSZ)(&DAT_1001ef0c)[local_1c]);
  }
  for (local_1c = 0; local_1c < 7; local_1c = local_1c + 1) {
    DdeFreeStringHandle(DAT_100231bc,(HSZ)(&DAT_1002318c)[local_1c]);
  }
  for (local_1c = 0; local_1c < 0x143; local_1c = local_1c + 1) {
    DdeFreeStringHandle(DAT_100231bc,(HSZ)(&DAT_1001e43c)[local_1c]);
  }
  for (local_1c = 0; local_1c < 0x16; local_1c = local_1c + 1) {
    DdeFreeStringHandle(DAT_100231bc,(HSZ)(&DAT_1001f11c)[local_1c]);
  }
  for (local_1c = 0; local_1c < 200; local_1c = local_1c + 1) {
    DdeFreeStringHandle(DAT_100231bc,(HSZ)(&DAT_1001e04c)[local_1c]);
  }
  for (local_1c = 0; local_1c < 3; local_1c = local_1c + 1) {
    DdeFreeStringHandle(DAT_100231bc,(HSZ)(&DAT_1001e9c8)[local_1c]);
  }
  if (DAT_100231dc != (HGLOBAL)0x0) {
    GlobalFree(DAT_100231dc);
  }
  if (DAT_100231e4 != 0) {
    GlobalUnlock(DAT_100231e0);
    GlobalFree(DAT_100231e0);
  }
  OpenFile(s_C__LEO__10015b84,(LPOFSTRUCT)&DAT_1001ef30,0x200);
  iVar2 = netdde_ok();
  if ((iVar2 == 0) || (iVar2 = UnRegisterDDEShares(this), iVar2 != 0)) {
    DdeUninitialize(DAT_100231bc);
    if (DAT_1001f1d8 != (int *)0x0) {
      if (DAT_1001f1d8 != (int *)0x0) {
        (**(code **)(*DAT_1001f1d8 + 4))(1);
      }
      DAT_1001f1d8 = (int *)0x0;
    }
    if ((*(int *)(this + 0xc4) != 0) && (DAT_100206b4 != (HMODULE)0x0)) {
      FreeLibrary(DAT_100206b4);
    }
    if ((DAT_1002314c != (int *)0x0) && (DAT_1002314c != (int *)0x0)) {
      (**(code **)(*DAT_1002314c + 4))(1);
    }
    if (m_pNotifyWindow != (CNotifyWindow *)0x0) {
      if (m_pNotifyWindow == (CNotifyWindow *)0x0) {
        local_44 = (HWND)0x0;
      }
      else {
        local_44 = *(HWND *)(m_pNotifyWindow + 0x20);
      }
      BVar3 = IsWindow(local_44);
      if (BVar3 != 0) {
        (**(code **)(*(int *)m_pNotifyWindow + 0x60))();
      }
      if (m_pNotifyWindow != (CNotifyWindow *)0x0) {
        (**(code **)(*(int *)m_pNotifyWindow + 4))(1);
      }
    }
    *(undefined4 *)(local_14 + 4) = local_18;
  }
  else {
    *(undefined4 *)(local_14 + 4) = local_18;
  }
  ExceptionList = local_10;
  return;
}


// ---- NotifyError @ 10001ee7

/* public: void __thiscall LeoDDE32::NotifyError(int,char *) */

void __thiscall LeoDDE32::NotifyError(LeoDDE32 *this,int param_1,char *param_2)

{
  AFX_MODULE_STATE *pAVar1;
  int iVar2;
  undefined4 local_c;
  int local_8;
  
                    /* 0x1ee7  31  ?NotifyError@LeoDDE32@@QAEXHPAD@Z */
  pAVar1 = (AFX_MODULE_STATE *)FUN_1000f785();
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2((AFX_MAINTAIN_STATE2 *)&local_c,pAVar1);
  DAT_1001f018 = param_1;
  lstrcpyA(&DAT_1001f01c,param_2);
  iVar2 = lstrlenA(&DAT_1001f01c);
  if (iVar2 == 0) {
    lstrcpyA(&DAT_1001f01c,s_Error_Code_Only_1001b098);
  }
  DdePostAdvise(DAT_100231bc,DAT_10020678,DAT_1001f994);
  DdePostAdvise(DAT_100231bc,DAT_10020678,DAT_1001f998);
  DdePostAdvise(DAT_100231bc,DAT_10020678,DAT_1001f99c);
  *(undefined4 *)(local_8 + 4) = local_c;
  return;
}


// ---- NotifyAnalogue @ 10001f8e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall LeoDDE32::NotifyAnalogue(int,float) */

void __thiscall LeoDDE32::NotifyAnalogue(LeoDDE32 *this,int param_1,float param_2)

{
  AFX_MODULE_STATE *pAVar1;
  undefined4 local_c;
  int local_8;
  
                    /* 0x1f8e  29  ?NotifyAnalogue@LeoDDE32@@QAEXHM@Z */
  pAVar1 = (AFX_MODULE_STATE *)FUN_1000f785();
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2((AFX_MAINTAIN_STATE2 *)&local_c,pAVar1);
  _DAT_10020c58 = param_1;
  _DAT_10020c5c = param_2;
  _gcvt((double)param_2,7,&DAT_10020c60);
  DdePostAdvise(DAT_100231bc,DAT_1002067c,(HSZ)(&DAT_1001f2c8)[param_1]);
  *(undefined4 *)(local_8 + 4) = local_c;
  return;
}


// ---- NotifyDigital @ 10001ffc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall LeoDDE32::NotifyDigital(int,char *) */

void __thiscall LeoDDE32::NotifyDigital(LeoDDE32 *this,int param_1,char *param_2)

{
  AFX_MODULE_STATE *pAVar1;
  undefined4 local_c;
  int local_8;
  
                    /* 0x1ffc  30  ?NotifyDigital@LeoDDE32@@QAEXHPAD@Z */
  pAVar1 = (AFX_MODULE_STATE *)FUN_1000f785();
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2((AFX_MAINTAIN_STATE2 *)&local_c,pAVar1);
  _DAT_10020c58 = param_1;
  _DAT_10020c5c = 0;
  lstrcpyA(&DAT_10020c60,param_2);
  DdePostAdvise(DAT_100231bc,DAT_10020688,(HSZ)(&DAT_1001e440)[param_1]);
  *(undefined4 *)(local_8 + 4) = local_c;
  return;
}


// ---- DDE_histogram_ready @ 10002061

/* public: void __thiscall LeoDDE32::DDE_histogram_ready(void) */

void __thiscall LeoDDE32::DDE_histogram_ready(LeoDDE32 *this)

{
  AFX_MODULE_STATE *pAVar1;
  undefined4 local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x2061  13  ?DDE_histogram_ready@LeoDDE32@@QAEXXZ */
  local_8 = 0xffffffff;
  puStack_c = &LAB_1000fcec;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pAVar1 = (AFX_MODULE_STATE *)FUN_1000f785();
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2((AFX_MAINTAIN_STATE2 *)&local_18,pAVar1);
  local_8 = 0;
  read_hist_data(&DAT_1001e9d4);
  ConvHistData();
  CreatePasteLink(this,PTR_s_SPECIAL_10015acc,PTR_s_HISTOGRAM_10015aec,&DAT_10022594);
  DdePostAdvise(DAT_100231bc,DAT_1002068c,DAT_1001f120);
  *(undefined4 *)(local_14 + 4) = local_18;
  ExceptionList = local_10;
  return;
}


// ---- DDE_profile_ready @ 100020f7

/* public: void __thiscall LeoDDE32::DDE_profile_ready(int) */

void __thiscall LeoDDE32::DDE_profile_ready(LeoDDE32 *this,int param_1)

{
  AFX_MODULE_STATE *pAVar1;
  undefined4 local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x20f7  14  ?DDE_profile_ready@LeoDDE32@@QAEXH@Z */
  local_8 = 0xffffffff;
  puStack_c = &LAB_1000fcff;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pAVar1 = (AFX_MODULE_STATE *)FUN_1000f785();
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2((AFX_MAINTAIN_STATE2 *)&local_18,pAVar1);
  local_8 = 0;
  read_prof_data(&DAT_100201dc,param_1);
  ConvProfData();
  CreatePasteLink(this,PTR_s_SPECIAL_10015acc,(&PTR_s_PROFILE1_10015af0)[param_1 + -1],&DAT_10020dfc
                 );
  DdePostAdvise(DAT_100231bc,DAT_1002068c,(HSZ)(&DAT_1001f124)[param_1 + -1]);
  *(undefined4 *)(local_14 + 4) = local_18;
  ExceptionList = local_10;
  return;
}


// ---- ConvHistData @ 100021a6

/* private: static void __cdecl LeoDDE32::ConvHistData(void) */

void __cdecl LeoDDE32::ConvHistData(void)

{
  int local_8;
  
                    /* 0x21a6  7  ?ConvHistData@LeoDDE32@@CAXXZ */
  lstrcpyA(&DAT_10022594,&DAT_100231ec);
  for (local_8 = 0; local_8 < 0x100; local_8 = local_8 + 1) {
    wsprintfA(&DAT_1001f1e0,s__ld_1001b0a8,*(undefined4 *)(&DAT_1001e9d4 + local_8 * 4));
    lstrcatA(&DAT_10022594,&DAT_1001f1e0);
  }
  return;
}


// ---- ConvProfData @ 10002209

/* private: static void __cdecl LeoDDE32::ConvProfData(void) */

void __cdecl LeoDDE32::ConvProfData(void)

{
  int local_8;
  
                    /* 0x2209  8  ?ConvProfData@LeoDDE32@@CAXXZ */
  lstrcpyA(&DAT_10020dfc,&DAT_100231f0);
  for (local_8 = 0; local_8 < 0x400; local_8 = local_8 + 1) {
    wsprintfA(&DAT_1002061c,s__ld_1001b0b0,(uint)(byte)(&DAT_100201dc)[local_8]);
    lstrcatA(&DAT_10020dfc,&DAT_1002061c);
  }
  return;
}


// ---- CreatePasteLink @ 1000226d

/* private: void __thiscall LeoDDE32::CreatePasteLink(char const *,char const *,char const *) */

void __thiscall LeoDDE32::CreatePasteLink(LeoDDE32 *this,char *param_1,char *param_2,char *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  HGLOBAL hMem;
  HGLOBAL hMem_00;
  LPSTR pCVar5;
  BOOL BVar6;
  
                    /* 0x226d  9  ?CreatePasteLink@LeoDDE32@@AAEXPBD00@Z */
  iVar1 = lstrlenA(s_LEO_DDE_SERVER_1001b0b8);
  iVar2 = lstrlenA(param_1);
  iVar3 = lstrlenA(param_2);
  iVar4 = lstrlenA(param_3);
  hMem = GlobalAlloc(0x2002,iVar4 + 1);
  hMem_00 = GlobalAlloc(0x2002,iVar1 + iVar2 + iVar3 + 4);
  if (hMem != (HGLOBAL)0x0) {
    pCVar5 = GlobalLock(hMem);
    if (pCVar5 == (LPSTR)0x0) {
      GlobalFree(hMem);
    }
    else {
      lstrcpyA(pCVar5,param_3);
      GlobalUnlock(hMem);
      if (hMem_00 != (HGLOBAL)0x0) {
        pCVar5 = GlobalLock(hMem_00);
        if (pCVar5 == (LPSTR)0x0) {
          GlobalFree(hMem_00);
        }
        else {
          lstrcpyA(pCVar5,s_LEO_DDE_SERVER_1001b0c8);
          iVar1 = lstrlenA(pCVar5);
          pCVar5 = pCVar5 + iVar1 + 1;
          lstrcpyA(pCVar5,param_1);
          iVar1 = lstrlenA(pCVar5);
          pCVar5 = pCVar5 + iVar1 + 1;
          lstrcpyA(pCVar5,param_2);
          iVar1 = lstrlenA(pCVar5);
          pCVar5[iVar1 + 1] = '\0';
          GlobalUnlock(hMem_00);
          BVar6 = OpenClipboard(DAT_1001efd0);
          if (BVar6 == 0) {
            GlobalFree(hMem);
            GlobalFree(hMem_00);
          }
          else {
            EmptyClipboard();
            SetClipboardData(1,hMem);
            SetClipboardData(DAT_1001eee8,hMem_00);
            CloseClipboard();
          }
        }
      }
    }
  }
  return;
}


// ---- w_atol @ 10002406

/* private: static long __cdecl LeoDDE32::w_atol(char const *) */

long __cdecl LeoDDE32::w_atol(char *param_1)

{
  int iVar1;
  bool bVar2;
  char local_c;
  int local_8;
  
                    /* 0x2406  67  ?w_atol@LeoDDE32@@CAJPBD@Z */
  local_8 = 0;
  while( true ) {
    iVar1 = isspace((int)*param_1);
    if (iVar1 == 0) break;
    param_1 = param_1 + 1;
  }
  local_c = *param_1;
  bVar2 = local_c == '-';
  if (bVar2) {
    param_1 = param_1 + 1;
    local_c = *param_1;
  }
  else if (local_c == '+') {
    param_1 = param_1 + 1;
    local_c = *param_1;
  }
  while( true ) {
    iVar1 = isdigit((int)local_c);
    if (iVar1 == 0) break;
    local_8 = local_8 * 10 + -0x30 + (int)local_c;
    param_1 = param_1 + 1;
    local_c = *param_1;
  }
  if (bVar2) {
    local_8 = -local_8;
  }
  return local_8;
}


// ---- w_atof @ 100024ce

/* private: static double __cdecl LeoDDE32::w_atof(char const *) */

double __cdecl LeoDDE32::w_atof(char *param_1)

{
  double dVar1;
  
                    /* 0x24ce  66  ?w_atof@LeoDDE32@@CANPBD@Z */
  dVar1 = atof(param_1);
  return dVar1;
}


// ---- leo_dde @ 100024e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static struct HDDEDATA__ * __stdcall LeoDDE32::leo_dde(unsigned short,unsigned
   short,struct HCONV__ *,struct HSZ__ *,struct HSZ__ *,struct HDDEDATA__ *,unsigned long,unsigned
   long) */

HDDEDATA__ *
LeoDDE32::leo_dde(ushort param_1,ushort param_2,HCONV__ *param_3,HSZ__ *param_4,HSZ__ *param_5,
                 HDDEDATA__ *param_6,ulong param_7,ulong param_8)

{
  AFX_MODULE_STATE *pAVar1;
  HDDEDATA pHVar2;
  int iVar3;
  HDDEDATA__ *pHVar4;
  long lVar5;
  size_t sVar6;
  DWORD DVar7;
  UINT UVar8;
  UINT UVar9;
  int local_71c;
  int local_718;
  int local_714;
  int local_710;
  short local_534;
  short local_532;
  short local_530;
  short local_52e;
  undefined4 local_52c;
  BYTE local_528 [512];
  int local_328;
  uint local_324;
  uint local_320;
  CHAR local_31c [256];
  uint local_21c;
  CHAR local_218 [256];
  undefined4 local_118;
  int local_114;
  char local_110 [256];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x24e0  49
                       ?leo_dde@LeoDDE32@@CGPAUHDDEDATA__@@GGPAUHCONV__@@PAUHSZ__@@1PAU2@KK@Z */
  local_8 = 0xffffffff;
  puStack_c = &LAB_1000fd15;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pAVar1 = (AFX_MODULE_STATE *)FUN_1000f785();
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2((AFX_MAINTAIN_STATE2 *)&local_118,pAVar1);
  local_8 = 0;
  DdeQueryStringA(DAT_100231bc,param_4,local_218,0x100,0x3ec);
  DdeQueryStringA(DAT_100231bc,param_5,local_31c,0x100,0x3ec);
  if (param_1 < 0x4051) {
    if (param_1 == 0x4050) {
      DdeGetData(param_6,&DAT_10020cec,0x100,0);
      sprintf(local_110,s_DDE__EXECUTE_0x_lx_<_s>_<_s>_1001b0f0,param_3,local_218,&DAT_10020cec);
      send_server_message(local_110);
    }
    else if (param_1 == 0x1062) {
      sprintf(local_110,s_DDE__CONNECT_<_s>_<_s>_1001b0d8,local_218,local_31c);
      send_server_message(local_110);
    }
    else if (param_1 == 0x20b0) {
      sprintf(local_110,s_DDE__REQUEST_0x_lx_<_s>_<_s>_1001b110,param_3,local_218,local_31c);
      send_server_message(local_110);
    }
  }
  else if (param_1 == 0x4090) {
    sprintf(local_110,s_DDE__POKE_0x_lx_<_s>_<_s>_1001b130,param_3,local_218,local_31c);
    send_server_message(local_110);
  }
  else if (param_1 == 0x80c2) {
    sprintf(local_110,s_DDE__DISCONNECT_0x_lx_1001b14c,param_3);
    send_server_message(local_110);
  }
  if (param_1 < 0x20e3) {
    if (param_1 == 0x20e2) {
      for (local_21c = 0; (int)local_21c < 8; local_21c = local_21c + 1) {
        *(undefined4 *)(&DAT_1001e378 + local_21c * 8) = DAT_1001dff4;
        *(HSZ__ **)(&DAT_1001e37c + local_21c * 8) = (&DAT_10020678)[local_21c];
      }
      *(undefined4 *)(&DAT_1001e378 + local_21c * 8) = 0;
      *(undefined4 *)(&DAT_1001e37c + local_21c * 8) = 0;
      pHVar2 = DdeCreateDataHandle(DAT_100231bc,&DAT_1001e378,local_21c << 3,0,(HSZ)0x0,
                                   (uint)param_2,0);
      *(undefined4 *)(local_114 + 4) = local_118;
      ExceptionList = local_10;
      return pHVar2;
    }
    if (param_1 < 0x2023) {
      if (param_1 == 0x2022) {
        if ((param_4 == DAT_1002067c) || (param_4 == DAT_10020688)) {
          if (param_2 == 0x80) {
            pHVar2 = DdeCreateDataHandle(DAT_100231bc,&DAT_10020c5c,4,0,param_5,0x80,0);
            *(undefined4 *)(local_114 + 4) = local_118;
            ExceptionList = local_10;
            return pHVar2;
          }
          UVar9 = 0;
          UVar8 = 1;
          DVar7 = 0;
          iVar3 = lstrlenA(&DAT_10020c60);
          pHVar2 = DdeCreateDataHandle(DAT_100231bc,&DAT_10020c60,iVar3 + 1,DVar7,param_5,UVar8,
                                       UVar9);
          *(undefined4 *)(local_114 + 4) = local_118;
          ExceptionList = local_10;
          return pHVar2;
        }
        if (param_4 == DAT_10020678) {
          if (param_5 == DAT_1001f994) {
            wsprintfA(&DAT_1001ede0,&DAT_1001b17c,DAT_1001f018);
          }
          else if (param_5 == DAT_1001f998) {
            lstrcpyA(&DAT_1001ede0,&DAT_1001f01c);
          }
          else {
            wsprintfA(&DAT_1001ede0,s__d__s_1001b180,DAT_1001f018,&DAT_1001f01c);
          }
          UVar9 = 0;
          UVar8 = 1;
          DVar7 = 0;
          iVar3 = lstrlenA(&DAT_1001ede0);
          pHVar2 = DdeCreateDataHandle(DAT_100231bc,&DAT_1001ede0,iVar3 + 1,DVar7,param_5,UVar8,
                                       UVar9);
          *(undefined4 *)(local_114 + 4) = local_118;
          ExceptionList = local_10;
          return pHVar2;
        }
        if (param_4 == DAT_1002068c) {
          if (param_5 == DAT_1001f120) {
            UVar9 = 0;
            UVar8 = 1;
            DVar7 = 0;
            iVar3 = lstrlenA(&DAT_10022594);
            pHVar2 = DdeCreateDataHandle(DAT_100231bc,&DAT_10022594,iVar3 + 1,DVar7,param_5,UVar8,
                                         UVar9);
            *(undefined4 *)(local_114 + 4) = local_118;
            ExceptionList = local_10;
            return pHVar2;
          }
          if ((((param_5 == DAT_1001f124) || (param_5 == DAT_1001f128)) || (param_5 == DAT_1001f12c)
              ) || (param_5 == DAT_1001f130)) {
            UVar9 = 0;
            UVar8 = 1;
            DVar7 = 0;
            iVar3 = lstrlenA(&DAT_10020dfc);
            pHVar2 = DdeCreateDataHandle(DAT_100231bc,&DAT_10020dfc,iVar3 + 1,DVar7,param_5,UVar8,
                                         UVar9);
            *(undefined4 *)(local_114 + 4) = local_118;
            ExceptionList = local_10;
            return pHVar2;
          }
        }
        *(undefined4 *)(local_114 + 4) = local_118;
        ExceptionList = local_10;
        return (HDDEDATA__ *)0x0;
      }
      if (param_1 == 0x1030) {
        local_21c = 0;
        do {
          if (7 < (int)local_21c) {
            *(undefined4 *)(local_114 + 4) = local_118;
            ExceptionList = local_10;
            return (HDDEDATA__ *)0x0;
          }
          if (param_4 == (&DAT_10020678)[local_21c]) {
            switch(local_21c) {
            case 0:
              for (local_320 = 1; (int)local_320 < 4; local_320 = local_320 + 1) {
                if (param_5 == (&DAT_1001f990)[local_320]) {
                  AdviseErrors();
                  *(int *)(&DAT_1001f980 + local_320 * 4) =
                       *(int *)(&DAT_1001f980 + local_320 * 4) + 1;
                  *(undefined4 *)(local_114 + 4) = local_118;
                  ExceptionList = local_10;
                  return (HDDEDATA__ *)0x1;
                }
              }
              break;
            case 1:
              for (local_320 = 1; (int)local_320 < 0x1ad; local_320 = local_320 + 1) {
                if (param_5 == (&DAT_1001f2c4)[local_320]) {
                  AdviseAnalogue(local_320);
                  *(int *)(&DAT_1001f9b0 + local_320 * 4) =
                       *(int *)(&DAT_1001f9b0 + local_320 * 4) + 1;
                  *(undefined4 *)(local_114 + 4) = local_118;
                  ExceptionList = local_10;
                  return (HDDEDATA__ *)0x1;
                }
              }
              break;
            default:
              *(undefined4 *)(local_114 + 4) = local_118;
              ExceptionList = local_10;
              return (HDDEDATA__ *)0x0;
            case 4:
              for (local_320 = 1; (int)local_320 < 0x143; local_320 = local_320 + 1) {
                if (param_5 == (&DAT_1001e43c)[local_320]) {
                  AdviseDigital(local_320);
                  *(int *)(&DAT_100206dc + local_320 * 4) =
                       *(int *)(&DAT_100206dc + local_320 * 4) + 1;
                  *(undefined4 *)(local_114 + 4) = local_118;
                  ExceptionList = local_10;
                  return (HDDEDATA__ *)0x1;
                }
              }
              break;
            case 5:
              for (local_320 = 1; (int)local_320 < 0x16; local_320 = local_320 + 1) {
                if (((param_5 == (&DAT_1001f11c)[local_320]) && (param_5 != DAT_1001f150)) &&
                   ((param_5 != DAT_1001f154 &&
                    ((param_5 != DAT_1001f158 && (param_5 != DAT_1001f15c)))))) {
                  *(int *)(&DAT_1001e968 + local_320 * 4) =
                       *(int *)(&DAT_1001e968 + local_320 * 4) + 1;
                  *(undefined4 *)(local_114 + 4) = local_118;
                  ExceptionList = local_10;
                  return (HDDEDATA__ *)0x1;
                }
              }
            }
          }
          local_21c = local_21c + 1;
        } while( true );
      }
      if (param_1 == 0x1062) {
        local_21c = 0;
        while( true ) {
          if (7 < (int)local_21c) {
            *(undefined4 *)(local_114 + 4) = local_118;
            ExceptionList = local_10;
            return (HDDEDATA__ *)0x0;
          }
          if (param_4 == (&DAT_10020678)[local_21c]) break;
          local_21c = local_21c + 1;
        }
        *(undefined4 *)(local_114 + 4) = local_118;
        ExceptionList = local_10;
        return (HDDEDATA__ *)0x1;
      }
    }
    else if (param_1 == 0x20b0) {
      for (local_21c = 0; (int)local_21c < 8; local_21c = local_21c + 1) {
        if (param_4 == (&DAT_10020678)[local_21c]) {
          switch(local_21c) {
          case 0:
            if (param_2 != 1) {
              *(undefined4 *)(local_114 + 4) = local_118;
              ExceptionList = local_10;
              return (HDDEDATA__ *)0x0;
            }
            if (param_5 == DAT_1001f990) {
              wsprintfA(&DAT_1001ede0,&DAT_1001b188,4);
            }
            else if (param_5 == DAT_1001f994) {
              wsprintfA(&DAT_1001ede0,&DAT_1001b18c,DAT_1001f018);
            }
            else if (param_5 == DAT_1001f998) {
              wsprintfA(&DAT_1001ede0,&DAT_1001b190,&DAT_1001f01c);
            }
            else {
              wsprintfA(&DAT_1001ede0,s__d__s_1001b194,DAT_1001f018,&DAT_1001f01c);
            }
            goto LAB_1000462f;
          case 1:
            if ((param_2 != 1) && (param_2 != 0x80)) {
              *(undefined4 *)(local_114 + 4) = local_118;
              ExceptionList = local_10;
              return (HDDEDATA__ *)0x0;
            }
            if (param_5 != DAT_1001f2c4) {
              local_320 = 1;
              goto LAB_100033b5;
            }
            wsprintfA(&DAT_1001ede0,&DAT_1001b19c,0x1ad);
            goto LAB_1000462f;
          case 2:
            if ((param_2 != 1) && (param_2 != 0x80)) {
              *(undefined4 *)(local_114 + 4) = local_118;
              ExceptionList = local_10;
              return (HDDEDATA__ *)0x0;
            }
            if (param_5 == DAT_1001ef0c) {
              wsprintfA(&DAT_1001ede0,&DAT_1001b1a0,7);
            }
            else if (param_5 == DAT_1001ef10) {
              iVar3 = High(DAT_1001e000,(double *)&DAT_1001eef0);
              if (iVar3 != 0) {
                *(undefined4 *)(local_114 + 4) = local_118;
                ExceptionList = local_10;
                return (HDDEDATA__ *)0x0;
              }
              if (param_2 == 1) {
                _gcvt(_DAT_1001eef0,7,&DAT_1001ede0);
              }
            }
            else if (param_5 == DAT_1001ef14) {
              iVar3 = High(DAT_1001e3e0,(double *)&DAT_1001eef0);
              if (iVar3 != 0) {
                *(undefined4 *)(local_114 + 4) = local_118;
                ExceptionList = local_10;
                return (HDDEDATA__ *)0x0;
              }
              if (param_2 == 1) {
                _gcvt(_DAT_1001eef0,7,&DAT_1001ede0);
              }
            }
            else if (param_5 == DAT_1001ef18) {
              iVar3 = High(DAT_100206bc,(double *)&DAT_1001eef0);
              if (iVar3 != 0) {
                *(undefined4 *)(local_114 + 4) = local_118;
                ExceptionList = local_10;
                return (HDDEDATA__ *)0x0;
              }
              if (param_2 == 1) {
                _gcvt(_DAT_1001eef0,7,&DAT_1001ede0);
              }
            }
            else if (param_5 == DAT_1001ef1c) {
              iVar3 = High(DAT_100206a8,(double *)&DAT_1001eef0);
              if (iVar3 != 0) {
                *(undefined4 *)(local_114 + 4) = local_118;
                ExceptionList = local_10;
                return (HDDEDATA__ *)0x0;
              }
              if (param_2 == 1) {
                _gcvt(_DAT_1001eef0,7,&DAT_1001ede0);
              }
            }
            else if (param_5 == DAT_1001ef20) {
              iVar3 = High(DAT_1002316c,(double *)&DAT_1001eef0);
              if (iVar3 != 0) {
                *(undefined4 *)(local_114 + 4) = local_118;
                ExceptionList = local_10;
                return (HDDEDATA__ *)0x0;
              }
              if (param_2 == 1) {
                _gcvt(_DAT_1001eef0,7,&DAT_1001ede0);
              }
            }
            else {
              if (param_5 != DAT_1001ef24) {
                *(undefined4 *)(local_114 + 4) = local_118;
                ExceptionList = local_10;
                return (HDDEDATA__ *)0x0;
              }
              iVar3 = High(DAT_10020ce4,(double *)&DAT_1001eef0);
              if (iVar3 != 0) {
                *(undefined4 *)(local_114 + 4) = local_118;
                ExceptionList = local_10;
                return (HDDEDATA__ *)0x0;
              }
              if (param_2 == 1) {
                _gcvt(_DAT_1001eef0,7,&DAT_1001ede0);
              }
            }
            goto LAB_1000462f;
          case 3:
            if ((param_2 != 1) && (param_2 != 0x80)) {
              *(undefined4 *)(local_114 + 4) = local_118;
              ExceptionList = local_10;
              return (HDDEDATA__ *)0x0;
            }
            if (param_5 == DAT_1002318c) {
              wsprintfA(&DAT_1001ede0,&DAT_1001b1a4,7);
            }
            else if (param_5 == DAT_10023190) {
              iVar3 = Low(DAT_1001e000,(double *)&DAT_1001eef0);
              if (iVar3 != 0) {
                *(undefined4 *)(local_114 + 4) = local_118;
                ExceptionList = local_10;
                return (HDDEDATA__ *)0x0;
              }
              if (param_2 == 1) {
                _gcvt(_DAT_1001eef0,7,&DAT_1001ede0);
              }
            }
            else if (param_5 == DAT_10023194) {
              iVar3 = Low(DAT_1001e3e0,(double *)&DAT_1001eef0);
              if (iVar3 != 0) {
                *(undefined4 *)(local_114 + 4) = local_118;
                ExceptionList = local_10;
                return (HDDEDATA__ *)0x0;
              }
              if (param_2 == 1) {
                _gcvt(_DAT_1001eef0,7,&DAT_1001ede0);
              }
            }
            else if (param_5 == DAT_10023198) {
              iVar3 = Low(DAT_100206bc,(double *)&DAT_1001eef0);
              if (iVar3 != 0) {
                *(undefined4 *)(local_114 + 4) = local_118;
                ExceptionList = local_10;
                return (HDDEDATA__ *)0x0;
              }
              if (param_2 == 1) {
                _gcvt(_DAT_1001eef0,7,&DAT_1001ede0);
              }
            }
            else if (param_5 == DAT_1002319c) {
              iVar3 = Low(DAT_100206a8,(double *)&DAT_1001eef0);
              if (iVar3 != 0) {
                *(undefined4 *)(local_114 + 4) = local_118;
                ExceptionList = local_10;
                return (HDDEDATA__ *)0x0;
              }
              if (param_2 == 1) {
                _gcvt(_DAT_1001eef0,7,&DAT_1001ede0);
              }
            }
            else if (param_5 == DAT_100231a0) {
              iVar3 = Low(DAT_1002316c,(double *)&DAT_1001eef0);
              if (iVar3 != 0) {
                *(undefined4 *)(local_114 + 4) = local_118;
                ExceptionList = local_10;
                return (HDDEDATA__ *)0x0;
              }
              if (param_2 == 1) {
                _gcvt(_DAT_1001eef0,7,&DAT_1001ede0);
              }
            }
            else {
              if (param_5 != DAT_100231a4) {
                *(undefined4 *)(local_114 + 4) = local_118;
                ExceptionList = local_10;
                return (HDDEDATA__ *)0x0;
              }
              iVar3 = Low(DAT_10020ce4,(double *)&DAT_1001eef0);
              if (iVar3 != 0) {
                *(undefined4 *)(local_114 + 4) = local_118;
                ExceptionList = local_10;
                return (HDDEDATA__ *)0x0;
              }
              if (param_2 == 1) {
                _gcvt(_DAT_1001eef0,7,&DAT_1001ede0);
              }
            }
            goto LAB_1000462f;
          case 4:
            goto switchD_10003254_caseD_4;
          case 5:
            if ((param_2 != 1) || (param_5 != DAT_1001f11c)) {
              if ((param_2 == 1) && (param_5 == DAT_1001f120)) {
                read_hist_data(&DAT_1001e9d4);
                ConvHistData();
                UVar9 = 0;
                UVar8 = 1;
                DVar7 = 0;
                iVar3 = lstrlenA(&DAT_10022594);
                pHVar2 = DdeCreateDataHandle(DAT_100231bc,&DAT_10022594,iVar3 + 1,DVar7,param_5,
                                             UVar8,UVar9);
                *(undefined4 *)(local_114 + 4) = local_118;
                ExceptionList = local_10;
                return pHVar2;
              }
              if ((param_2 == 1) &&
                 ((((param_5 == DAT_1001f124 || (param_5 == DAT_1001f128)) ||
                   (param_5 == DAT_1001f12c)) || (param_5 == DAT_1001f130)))) {
                if (param_5 == DAT_1001f124) {
                  read_prof_data(&DAT_100201dc,1);
                }
                if (param_5 == DAT_1001f128) {
                  read_prof_data(&DAT_100201dc,2);
                }
                if (param_5 == DAT_1001f12c) {
                  read_prof_data(&DAT_100201dc,3);
                }
                if (param_5 == DAT_1001f130) {
                  read_prof_data(&DAT_100201dc,4);
                }
                ConvProfData();
                UVar9 = 0;
                UVar8 = 1;
                DVar7 = 0;
                iVar3 = lstrlenA(&DAT_10020dfc);
                pHVar4 = DdeCreateDataHandle(DAT_100231bc,&DAT_10020dfc,iVar3 + 1,DVar7,param_5,
                                             UVar8,UVar9);
                *(undefined4 *)(local_114 + 4) = local_118;
              }
              else {
                if (((param_2 == 8) || (param_2 == 1)) &&
                   ((param_5 == DAT_1001f134 ||
                    ((((param_5 == DAT_1001f144 || (param_5 == DAT_1001f148)) ||
                      ((param_5 == DAT_1001f14c ||
                       (((param_5 == DAT_1001f13c || (param_5 == DAT_1001f138)) ||
                        (param_5 == DAT_1001f140)))))) || (param_5 == DAT_1001f170)))))) {
                  if (((param_2 == 1) && (param_5 != DAT_1001f138)) &&
                     ((param_5 != DAT_1001f140 && (param_5 != DAT_1001f170)))) {
                    *(undefined4 *)(local_114 + 4) = local_118;
                    ExceptionList = local_10;
                    return (HDDEDATA__ *)0x0;
                  }
                  if (DAT_100231dc != (HGLOBAL)0x0) {
                    GlobalFree(DAT_100231dc);
                    DAT_100231dc = (HGLOBAL)0x0;
                  }
                  if (((param_5 == DAT_1001f134) || (param_5 == DAT_1001f144)) ||
                     ((param_5 == DAT_1001f148 || (param_5 == DAT_1001f14c)))) {
                    if (param_5 == DAT_1001f134) {
                      local_328 = read_bitmap_handle(6,DAT_10015aa0,DAT_10015aa4,DAT_10015aa8,
                                                     DAT_10015aac,s_C__LEO__10015b84,&DAT_100231dc);
                    }
                    if (param_5 == DAT_1001f144) {
                      local_328 = read_bitmap_handle(6,DAT_10015aa0,DAT_10015aa4,DAT_10015aa8,
                                                     DAT_10015aac,s_C__LEO__10015b84,&DAT_100231dc);
                    }
                    if (param_5 == DAT_1001f148) {
                      local_328 = read_bitmap_handle(0xb,DAT_10015aa0,DAT_10015aa4,DAT_10015aa8,
                                                     DAT_10015aac,s_C__LEO__10015b84,&DAT_100231dc);
                    }
                    if (param_5 == DAT_1001f14c) {
                      local_328 = read_bitmap_handle(0xb,DAT_10015aa0,DAT_10015aa4,DAT_10015aa8,
                                                     DAT_10015aac,s_C__LEO__10015b84,&DAT_100231dc);
                    }
                    if (DAT_100231dc != (HGLOBAL)0x0) {
                      pHVar2 = DdeCreateDataHandle(DAT_100231bc,(LPBYTE)&DAT_100231dc,4,0,param_5,8,
                                                   0);
                      *(undefined4 *)(local_114 + 4) = local_118;
                      ExceptionList = local_10;
                      return pHVar2;
                    }
                    *(undefined4 *)(local_114 + 4) = local_118;
                    ExceptionList = local_10;
                    return (HDDEDATA__ *)0x0;
                  }
                  if (param_5 == DAT_1001f13c) {
                    local_328 = read_bitmap_handle(6,DAT_10015aa0,DAT_10015aa4,DAT_10015aa8,
                                                   DAT_10015aac,s_C__LEO__10015b84,&DAT_100231dc);
                    if (DAT_100231dc != (HGLOBAL)0x0) {
                      pHVar2 = DdeCreateDataHandle(DAT_100231bc,(LPBYTE)&DAT_100231dc,4,0,param_5,8,
                                                   0);
                      *(undefined4 *)(local_114 + 4) = local_118;
                      ExceptionList = local_10;
                      return pHVar2;
                    }
                    *(undefined4 *)(local_114 + 4) = local_118;
                    ExceptionList = local_10;
                    return (HDDEDATA__ *)0x0;
                  }
                  if (param_5 == DAT_1001f138) {
                    iVar3 = read_bitmap(7,DAT_10015aa0,DAT_10015aa4,DAT_10015aa8,DAT_10015aac,
                                        s_C__LEO__10015b84);
                    if (iVar3 != 0) {
                      pHVar2 = DdeCreateDataHandle(DAT_100231bc,&DAT_1001b1b0,5,0,param_5,1,0);
                      *(undefined4 *)(local_114 + 4) = local_118;
                      ExceptionList = local_10;
                      return pHVar2;
                    }
                    *(undefined4 *)(local_114 + 4) = local_118;
                    ExceptionList = local_10;
                    return (HDDEDATA__ *)0x0;
                  }
                  if (param_5 == DAT_1001f140) {
                    iVar3 = read_bitmap(9,DAT_10015aa0,DAT_10015aa4,DAT_10015aa8,DAT_10015aac,
                                        s_C__LEO__10015b84);
                    if (iVar3 != 0) {
                      pHVar2 = DdeCreateDataHandle(DAT_100231bc,&DAT_1001b1b8,5,0,param_5,1,0);
                      *(undefined4 *)(local_114 + 4) = local_118;
                      ExceptionList = local_10;
                      return pHVar2;
                    }
                    *(undefined4 *)(local_114 + 4) = local_118;
                    ExceptionList = local_10;
                    return (HDDEDATA__ *)0x0;
                  }
                  if (param_5 == DAT_1001f170) {
                    iVar3 = read_bitmap(0x15,DAT_10015aa0,DAT_10015aa4,DAT_10015aa8,DAT_10015aac,
                                        s_C__LEO__10015b84);
                    if (iVar3 != 0) {
                      pHVar2 = DdeCreateDataHandle(DAT_100231bc,&DAT_1001b1c0,5,0,param_5,1,0);
                      *(undefined4 *)(local_114 + 4) = local_118;
                      ExceptionList = local_10;
                      return pHVar2;
                    }
                    *(undefined4 *)(local_114 + 4) = local_118;
                    ExceptionList = local_10;
                    return (HDDEDATA__ *)0x0;
                  }
                }
                *(undefined4 *)(local_114 + 4) = local_118;
                pHVar4 = (HDDEDATA__ *)0x0;
              }
              ExceptionList = local_10;
              return pHVar4;
            }
            wsprintfA(&DAT_1001ede0,&DAT_1001b1ac,0x16);
            goto LAB_1000462f;
          case 6:
            if (param_2 != 1) {
              *(undefined4 *)(local_114 + 4) = local_118;
              ExceptionList = local_10;
              return (HDDEDATA__ *)0x0;
            }
            if (param_5 != DAT_1001e04c) {
              *(undefined4 *)(local_114 + 4) = local_118;
              ExceptionList = local_10;
              return (HDDEDATA__ *)0x0;
            }
            wsprintfA(&DAT_1001ede0,&DAT_1001b1c8,200);
            goto LAB_1000462f;
          case 7:
            if (param_2 != 1) {
              *(undefined4 *)(local_114 + 4) = local_118;
              ExceptionList = local_10;
              return (HDDEDATA__ *)0x0;
            }
            if (param_5 == DAT_1001e9c8) {
              wsprintfA(&DAT_1001ede0,&DAT_1001b1cc,3);
            }
            else if (param_5 == DAT_1001e9cc) {
              iVar3 = GetValue(0x141,(double *)&DAT_1001eef0);
              if (iVar3 != 0) {
                *(undefined4 *)(local_114 + 4) = local_118;
                ExceptionList = local_10;
                return (HDDEDATA__ *)0x0;
              }
              _gcvt(_DAT_1001eef0,7,&DAT_1001ede0);
            }
            else {
              if (param_5 != DAT_1001e9d0) {
                *(undefined4 *)(local_114 + 4) = local_118;
                ExceptionList = local_10;
                return (HDDEDATA__ *)0x0;
              }
              _gcvt(3.0,7,&DAT_1001ede0);
            }
            goto LAB_1000462f;
          default:
            *(undefined4 *)(local_114 + 4) = local_118;
            ExceptionList = local_10;
            return (HDDEDATA__ *)0x0;
          }
        }
      }
LAB_100046e9:
      iVar3 = remote_control_ok();
      if (iVar3 == 0) {
        *(undefined4 *)(local_114 + 4) = local_118;
        ExceptionList = local_10;
        return (HDDEDATA__ *)0x0;
      }
      local_21c = 0;
      do {
        if (7 < (int)local_21c) {
          *(undefined4 *)(local_114 + 4) = local_118;
          ExceptionList = local_10;
          return (HDDEDATA__ *)0x0;
        }
        if (param_4 == (&DAT_10020678)[local_21c]) {
          if (local_21c == 1) {
            for (local_320 = 1; (int)local_320 < 0x1ad; local_320 = local_320 + 1) {
              if (param_5 == (&DAT_1001f2c4)[local_320]) {
                local_320 = local_320 + -1;
                if (local_320 == 0x1c) {
                  local_320 = 0x1a;
                }
                if (local_320 == 0x1d) {
                  local_320 = 0x1b;
                }
                if ((param_2 != 0x80) && (param_2 != 2)) {
                  if (param_2 != 1) {
                    *(undefined4 *)(local_114 + 4) = local_118;
                    ExceptionList = local_10;
                    return (HDDEDATA__ *)0x0;
                  }
                  DdeGetData(param_6,&DAT_10020090,0x100,0);
                  _DAT_1001eef0 = w_atof(&DAT_10020090);
                  SetAnalogue(local_320,(float)_DAT_1001eef0);
                  *(undefined4 *)(local_114 + 4) = local_118;
                  ExceptionList = local_10;
                  return (HDDEDATA__ *)0x8000;
                }
                DdeGetData(param_6,(LPBYTE)&DAT_1001f9a8,4,0);
                if (param_2 == 0x80) {
                  SetAnalogue(local_320,DAT_1001f9a8);
                  *(undefined4 *)(local_114 + 4) = local_118;
                  ExceptionList = local_10;
                  return (HDDEDATA__ *)0x8000;
                }
                iVar3 = ftol();
                NudgeValue(local_320,iVar3);
                *(undefined4 *)(local_114 + 4) = local_118;
                ExceptionList = local_10;
                return (HDDEDATA__ *)0x8000;
              }
            }
          }
          else if (local_21c == 4) {
            if ((param_2 != 1) && (param_2 != 0x80)) {
              *(undefined4 *)(local_114 + 4) = local_118;
              ExceptionList = local_10;
              return (HDDEDATA__ *)0x0;
            }
            for (local_320 = 1; (int)local_320 < 0x143; local_320 = local_320 + 1) {
              if (param_5 == (&DAT_1001e43c)[local_320]) {
                local_320 = local_320 + -1;
                if (param_2 == 1) {
                  DdeGetData(param_6,&DAT_10020090,0x100,0);
                  iVar3 = PutIFStateStr(local_320,&DAT_10020090);
                  if (iVar3 != 0) {
                    *(undefined4 *)(local_114 + 4) = local_118;
                    ExceptionList = local_10;
                    return (HDDEDATA__ *)0x0;
                  }
                }
                else {
                  DdeGetData(param_6,(LPBYTE)&DAT_1001e414,4,0);
                  iVar3 = SetState(local_320,DAT_1001e414);
                  if (iVar3 != 0) {
                    *(undefined4 *)(local_114 + 4) = local_118;
                    ExceptionList = local_10;
                    return (HDDEDATA__ *)0x0;
                  }
                }
                *(undefined4 *)(local_114 + 4) = local_118;
                ExceptionList = local_10;
                return (HDDEDATA__ *)0x8000;
              }
            }
          }
          else {
            if (local_21c != 5) {
              *(undefined4 *)(local_114 + 4) = local_118;
              ExceptionList = local_10;
              return (HDDEDATA__ *)0x0;
            }
            if (param_5 == DAT_1001f16c) {
              if (param_2 != 0x80) {
                *(undefined4 *)(local_114 + 4) = local_118;
                ExceptionList = local_10;
                return (HDDEDATA__ *)0x0;
              }
              local_52c = (uint)local_52c._2_2_ << 0x10;
              DdeGetData(param_6,(LPBYTE)0x0,2,0);
              lVar5 = get_param_info((ushort)local_52c,(char *)local_528);
              if (lVar5 != 0) {
                UVar9 = 0;
                UVar8 = 1;
                DVar7 = 0;
                sVar6 = strlen((char *)local_528);
                pHVar2 = DdeCreateDataHandle(DAT_100231bc,local_528,sVar6 + 1,DVar7,param_5,UVar8,
                                             UVar9);
                *(undefined4 *)(local_114 + 4) = local_118;
                ExceptionList = local_10;
                return pHVar2;
              }
              *(undefined4 *)(local_114 + 4) = local_118;
              ExceptionList = local_10;
              return (HDDEDATA__ *)0x0;
            }
            if (param_5 == DAT_1001f150) {
              if (param_2 != 0x80) {
                *(undefined4 *)(local_114 + 4) = local_118;
                ExceptionList = local_10;
                return (HDDEDATA__ *)0x0;
              }
              DdeGetData(param_6,(LPBYTE)&local_534,8,0);
              DAT_10015aa0 = (int)local_534;
              DAT_10015aa4 = (int)local_532;
              DAT_10015aa8 = (int)local_530;
              DAT_10015aac = (int)local_52e;
              *(undefined4 *)(local_114 + 4) = local_118;
              ExceptionList = local_10;
              return (HDDEDATA__ *)0x8000;
            }
            if (param_5 == DAT_1001f154) {
              if ((param_2 == 0x80) && (iVar3 = M007_GetState(0x77), iVar3 == 0)) {
                DdeGetData(param_6,(LPBYTE)DAT_100231e4,0xea66,0);
                local_21c = (uint)*(ushort *)DAT_100231e4;
                local_320 = (uint)*(ushort *)(DAT_100231e4 + 2);
                local_324 = (uint)*(ushort *)(DAT_100231e4 + 4);
                DAT_100231e4 = DAT_100231e4 + 6;
                do_featurescan(DAT_100231e4,local_21c,local_320,local_324);
                DAT_100231e4 = DAT_100231e4 + -6;
                *(undefined4 *)(local_114 + 4) = local_118;
                ExceptionList = local_10;
                return (HDDEDATA__ *)0x8000;
              }
              *(undefined4 *)(local_114 + 4) = local_118;
              ExceptionList = local_10;
              return (HDDEDATA__ *)0x0;
            }
            if (param_5 == DAT_1001f158) {
              if (param_2 != 0x80) {
                *(undefined4 *)(local_114 + 4) = local_118;
                ExceptionList = local_10;
                return (HDDEDATA__ *)0x0;
              }
              DdeGetData(param_6,(LPBYTE)&DAT_100231c0,0xc,0);
              SetAnalogue(0x9f,DAT_100231c0);
              SetAnalogue(0xa0,DAT_100231c4);
              SetAnalogue(0xa1,DAT_100231c8);
              ExecuteCommand(0x3f);
              *(undefined4 *)(local_114 + 4) = local_118;
              ExceptionList = local_10;
              return (HDDEDATA__ *)0x8000;
            }
            if (param_5 == DAT_1001f15c) {
              if (param_2 != 0x80) {
                *(undefined4 *)(local_114 + 4) = local_118;
                ExceptionList = local_10;
                return (HDDEDATA__ *)0x0;
              }
              DdeGetData(param_6,(LPBYTE)&DAT_100231d0,0xc,0);
              setXYZSTAGE_GOTO(DAT_100231d0,DAT_100231d4,DAT_100231d8);
              *(undefined4 *)(local_114 + 4) = local_118;
              ExceptionList = local_10;
              return (HDDEDATA__ *)0x8000;
            }
            if (param_5 == DAT_1001f160) {
              if (param_2 != 0x80) {
                *(undefined4 *)(local_114 + 4) = local_118;
                ExceptionList = local_10;
                return (HDDEDATA__ *)0x0;
              }
              DdeGetData(param_6,(LPBYTE)&DAT_10015ab0,8,0);
              setXYSTAGE_FIELDS(DAT_10015ab0,DAT_10015ab4);
              *(undefined4 *)(local_114 + 4) = local_118;
              ExceptionList = local_10;
              return (HDDEDATA__ *)0x8000;
            }
            if (param_5 == DAT_1001f164) {
              if (param_2 != 0x80) {
                *(undefined4 *)(local_114 + 4) = local_118;
                ExceptionList = local_10;
                return (HDDEDATA__ *)0x0;
              }
              DdeGetData(param_6,(LPBYTE)&DAT_10015ab0,8,0);
              setXYSTAGE_FIELD_SIZE(DAT_10015ab0,DAT_10015ab4);
              *(undefined4 *)(local_114 + 4) = local_118;
              ExceptionList = local_10;
              return (HDDEDATA__ *)0x8000;
            }
            if (param_5 == DAT_1001f168) {
              if (param_2 != 0x80) {
                *(undefined4 *)(local_114 + 4) = local_118;
                ExceptionList = local_10;
                return (HDDEDATA__ *)0x0;
              }
              DdeGetData(param_6,(LPBYTE)&DAT_10015ab0,8,0);
              setXYSTAGE_GOTO_FIELD(DAT_10015ab0,DAT_10015ab4);
              *(undefined4 *)(local_114 + 4) = local_118;
              ExceptionList = local_10;
              return (HDDEDATA__ *)0x8000;
            }
          }
        }
        local_21c = local_21c + 1;
      } while( true );
    }
  }
  else {
    if (param_1 < 0x8041) {
      if (param_1 != 0x8040) {
        if (param_1 == 0x4050) {
          if ((DAT_10020690 != param_4) || (iVar3 = remote_control_ok(), iVar3 == 0)) {
            *(undefined4 *)(local_114 + 4) = local_118;
            ExceptionList = local_10;
            return (HDDEDATA__ *)0x0;
          }
          DdeGetData(param_6,&DAT_10020cec,0x100,0);
          iVar3 = isdigit((uint)DAT_10020cec);
          if (iVar3 != 0) {
            lVar5 = w_atol((char *)&DAT_10020cec);
            iVar3 = ExecuteCommand(lVar5);
            if (iVar3 == 0) {
              *(undefined4 *)(local_114 + 4) = local_118;
              ExceptionList = local_10;
              return (HDDEDATA__ *)0x8000;
            }
            *(undefined4 *)(local_114 + 4) = local_118;
            ExceptionList = local_10;
            return (HDDEDATA__ *)0x0;
          }
          iVar3 = lstrlenA((LPCSTR)&DAT_10020cec);
          if (iVar3 < 5) {
            *(undefined4 *)(local_114 + 4) = local_118;
            ExceptionList = local_10;
            return (HDDEDATA__ *)0x0;
          }
          CharUpperA((LPSTR)&DAT_10020cec);
          iVar3 = strncmp(&DAT_1001b164,(char *)&DAT_10020cec,4);
          if ((iVar3 != 0) && (iVar3 = strncmp(&DAT_1001b16c,(char *)&DAT_10020cec,4), iVar3 != 0))
          {
            local_21c = 1;
            while( true ) {
              if (199 < (int)local_21c) {
                *(undefined4 *)(local_114 + 4) = local_118;
                ExceptionList = local_10;
                return (HDDEDATA__ *)0x0;
              }
              iVar3 = lstrcmpiA((&PTR_s_MAX_ITEMS_10015778)[local_21c],(LPCSTR)&DAT_10020cec);
              if (iVar3 == 0) break;
              local_21c = local_21c + 1;
            }
            iVar3 = ExecuteCommand(local_21c + -1);
            if (iVar3 == 0) {
              *(undefined4 *)(local_114 + 4) = local_118;
              ExceptionList = local_10;
              return (HDDEDATA__ *)0x8000;
            }
            *(undefined4 *)(local_114 + 4) = local_118;
            ExceptionList = local_10;
            return (HDDEDATA__ *)0x0;
          }
          iVar3 = strncmp(&DAT_1001b174,(char *)&DAT_10020cec,4);
          if (iVar3 != 0) {
            iVar3 = RunMacroLibrary(&DAT_10020cf0);
            if (iVar3 == 0) {
              *(undefined4 *)(local_114 + 4) = local_118;
              ExceptionList = local_10;
              return (HDDEDATA__ *)0x8000;
            }
            *(undefined4 *)(local_114 + 4) = local_118;
            ExceptionList = local_10;
            return (HDDEDATA__ *)0x0;
          }
          iVar3 = RunMacroFile(&DAT_10020cf0);
          if (iVar3 == 0) {
            *(undefined4 *)(local_114 + 4) = local_118;
            ExceptionList = local_10;
            return (HDDEDATA__ *)0x8000;
          }
          *(undefined4 *)(local_114 + 4) = local_118;
          ExceptionList = local_10;
          return (HDDEDATA__ *)0x0;
        }
        if (param_1 == 0x4090) goto LAB_100046e9;
        goto LAB_1000564f;
      }
    }
    else if (param_1 != 0x80c2) goto LAB_1000564f;
    UVar8 = DdeQueryConvInfo(param_3,0xffffffff,(PCONVINFO)&DAT_1001f260);
    if (UVar8 == 0) {
      *(undefined4 *)(local_114 + 4) = local_118;
      ExceptionList = local_10;
      return (HDDEDATA__ *)0x0;
    }
    for (local_21c = 0; (int)local_21c < 8; local_21c = local_21c + 1) {
      if ((HSZ__ *)DAT_1001f274 == (&DAT_10020678)[local_21c]) {
        switch(local_21c) {
        case 0:
          local_320 = 1;
          goto LAB_10005241;
        case 1:
          local_320 = 1;
          goto LAB_10005353;
        default:
          *(undefined4 *)(local_114 + 4) = local_118;
          ExceptionList = local_10;
          return (HDDEDATA__ *)0x0;
        case 4:
          local_320 = 1;
          goto LAB_10005425;
        case 5:
          if (DAT_1001f278 == 0xd) {
            *(undefined4 *)(local_114 + 4) = local_118;
            ExceptionList = local_10;
            return (HDDEDATA__ *)0x0;
          }
          if (DAT_1001f278 == 0xe) {
            *(undefined4 *)(local_114 + 4) = local_118;
            ExceptionList = local_10;
            return (HDDEDATA__ *)0x0;
          }
          if (DAT_1001f278 == 0x10) {
            *(undefined4 *)(local_114 + 4) = local_118;
            ExceptionList = local_10;
            return (HDDEDATA__ *)0x0;
          }
          local_320 = 1;
        }
        goto LAB_10005593;
      }
    }
  }
LAB_1000564f:
  *(undefined4 *)(local_114 + 4) = local_118;
  ExceptionList = local_10;
  return (HDDEDATA__ *)0x0;
LAB_10005593:
  if (0x15 < (int)local_320) {
LAB_100055fa:
    *(undefined4 *)(local_114 + 4) = local_118;
    ExceptionList = local_10;
    return (HDDEDATA__ *)0x0;
  }
  if ((HSZ__ *)DAT_1001f278 == (&DAT_1001f11c)[local_320]) {
    if (*(int *)(&DAT_1001e968 + local_320 * 4) < 1) {
      local_71c = 0;
    }
    else {
      local_71c = *(int *)(&DAT_1001e968 + local_320 * 4) + -1;
    }
    *(int *)(&DAT_1001e968 + local_320 * 4) = local_71c;
    goto LAB_100055fa;
  }
  local_320 = local_320 + 1;
  goto LAB_10005593;
LAB_10005425:
  if (0x142 < (int)local_320) {
LAB_1000548f:
    if (*(int *)(&DAT_100206dc + local_320 * 4) == 0) {
      UnAdviseDigital(local_320 + -1);
    }
    *(undefined4 *)(local_114 + 4) = local_118;
    ExceptionList = local_10;
    return (HDDEDATA__ *)0x0;
  }
  if ((HSZ__ *)DAT_1001f278 == (&DAT_1001e43c)[local_320]) {
    if (*(int *)(&DAT_100206dc + local_320 * 4) < 1) {
      local_718 = 0;
    }
    else {
      local_718 = *(int *)(&DAT_100206dc + local_320 * 4) + -1;
    }
    *(int *)(&DAT_100206dc + local_320 * 4) = local_718;
    goto LAB_1000548f;
  }
  local_320 = local_320 + 1;
  goto LAB_10005425;
LAB_10005353:
  if (0x1ac < (int)local_320) {
LAB_100053bd:
    if (*(int *)(&DAT_1001f9b0 + local_320 * 4) == 0) {
      UnAdviseAnalogue(local_320 + -1);
    }
    *(undefined4 *)(local_114 + 4) = local_118;
    ExceptionList = local_10;
    return (HDDEDATA__ *)0x0;
  }
  if ((HSZ__ *)DAT_1001f278 == (&DAT_1001f2c4)[local_320]) {
    if (*(int *)(&DAT_1001f9b0 + local_320 * 4) < 1) {
      local_714 = 0;
    }
    else {
      local_714 = *(int *)(&DAT_1001f9b0 + local_320 * 4) + -1;
    }
    *(int *)(&DAT_1001f9b0 + local_320 * 4) = local_714;
    goto LAB_100053bd;
  }
  local_320 = local_320 + 1;
  goto LAB_10005353;
LAB_10005241:
  if (3 < (int)local_320) {
LAB_100052a7:
    local_320 = 1;
    while( true ) {
      if (3 < (int)local_320) {
        UnAdviseErrors();
        *(undefined4 *)(local_114 + 4) = local_118;
        ExceptionList = local_10;
        return (HDDEDATA__ *)0x0;
      }
      if (*(int *)(&DAT_1001f980 + local_320 * 4) != 0) break;
      local_320 = local_320 + 1;
    }
    *(undefined4 *)(local_114 + 4) = local_118;
    ExceptionList = local_10;
    return (HDDEDATA__ *)0x0;
  }
  if ((HSZ__ *)DAT_1001f278 == (&DAT_1001f990)[local_320]) {
    if (*(int *)(&DAT_1001f980 + local_320 * 4) < 1) {
      local_710 = 0;
    }
    else {
      local_710 = *(int *)(&DAT_1001f980 + local_320 * 4) + -1;
    }
    *(int *)(&DAT_1001f980 + local_320 * 4) = local_710;
    goto LAB_100052a7;
  }
  local_320 = local_320 + 1;
  goto LAB_10005241;
LAB_100033b5:
  if (0x1ac < (int)local_320) goto LAB_1000344f;
  if (param_5 == (&DAT_1001f2c4)[local_320]) {
    iVar3 = GetValue(local_320 + -1,(double *)&DAT_1001eef0);
    if (iVar3 != 0) {
      *(undefined4 *)(local_114 + 4) = local_118;
      ExceptionList = local_10;
      return (HDDEDATA__ *)0x0;
    }
    if (param_2 == 1) {
      _gcvt(_DAT_1001eef0,7,&DAT_1001ede0);
    }
    goto LAB_1000344f;
  }
  local_320 = local_320 + 1;
  goto LAB_100033b5;
LAB_1000344f:
  if (local_320 == 0x1ad) {
    *(undefined4 *)(local_114 + 4) = local_118;
    ExceptionList = local_10;
    return (HDDEDATA__ *)0x0;
  }
  goto LAB_1000462f;
switchD_10003254_caseD_4:
  if ((param_2 != 1) && (param_2 != 0x80)) {
    *(undefined4 *)(local_114 + 4) = local_118;
    ExceptionList = local_10;
    return (HDDEDATA__ *)0x0;
  }
  if (param_5 == DAT_1001e43c) {
    wsprintfA(&DAT_1001ede0,&DAT_1001b1a8,0x143);
  }
  else {
    for (local_320 = 1; (int)local_320 < 0x143; local_320 = local_320 + 1) {
      if (param_5 == (&DAT_1001e43c)[local_320]) {
        if (param_2 == 1) {
          iVar3 = GetIFStateStr(local_320 + -1,&DAT_1001ede0);
          if (iVar3 != 0) {
            *(undefined4 *)(local_114 + 4) = local_118;
            ExceptionList = local_10;
            return (HDDEDATA__ *)0x0;
          }
        }
        else {
          iVar3 = GetState(local_320 + -1,&DAT_1001eef0);
          if (iVar3 != 0) {
            *(undefined4 *)(local_114 + 4) = local_118;
            ExceptionList = local_10;
            return (HDDEDATA__ *)0x0;
          }
        }
        break;
      }
    }
    if (local_320 == 0x143) {
      *(undefined4 *)(local_114 + 4) = local_118;
      ExceptionList = local_10;
      return (HDDEDATA__ *)0x0;
    }
  }
LAB_1000462f:
  if (param_2 == 0x80) {
    DAT_1001f9a8 = (float)_DAT_1001eef0;
    pHVar2 = DdeCreateDataHandle(DAT_100231bc,(LPBYTE)&DAT_1001f9a8,4,0,param_5,0x80,0);
    *(undefined4 *)(local_114 + 4) = local_118;
    ExceptionList = local_10;
    return pHVar2;
  }
  UVar9 = 0;
  UVar8 = 1;
  DVar7 = 0;
  iVar3 = lstrlenA(&DAT_1001ede0);
  pHVar2 = DdeCreateDataHandle(DAT_100231bc,&DAT_1001ede0,iVar3 + 1,DVar7,param_5,UVar8,UVar9);
  *(undefined4 *)(local_114 + 4) = local_118;
  ExceptionList = local_10;
  return pHVar2;
}


// ---- RegisterDDEShares @ 100056d5

/* private: int __thiscall LeoDDE32::RegisterDDEShares(void) */

int __thiscall LeoDDE32::RegisterDDEShares(LeoDDE32 *this)

{
  int iVar1;
  
                    /* 0x56d5  34  ?RegisterDDEShares@LeoDDE32@@AAEHXZ */
  iVar1 = DDEItemShare(this,&PTR_s_MAX_ITEMS_10015ad8,4,PTR_s_ERRORS_10015ab8,s_LEO_ERRORS__1001b1d0
                       ,3,3);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = DDEItemShare(this,&PTR_s_MAX_ITEMS_10014bb8,0x1ad,PTR_s_ANALOGUES_10015abc,
                         s_LEO_ANALOGUES__1001b1dc,3,7);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = DDEItemShare(this,&PTR_s_MAX_ITEMS_10015b40,7,PTR_s_MAXIMA_10015ac0,
                           s_LEO_MAXIMA__1001b1ec,1,1);
      if (iVar1 == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = DDEItemShare(this,&PTR_s_MAX_ITEMS_10015b5c,7,PTR_s_MINIMA_10015ac4,
                             s_LEO_MINIMA__1001b1f8,1,1);
        if (iVar1 == 0) {
          iVar1 = 0;
        }
        else {
          iVar1 = DDEItemShare(this,&PTR_s_MAX_ITEMS_1001526c,0x143,PTR_s_DIGITALS_10015ac8,
                               s_LEO_DIGITALS__1001b204,3,7);
          if (iVar1 == 0) {
            iVar1 = 0;
          }
          else {
            iVar1 = DDEItemShare(this,&PTR_s_MAX_ITEMS_10015ae8,0x16,PTR_s_SPECIAL_10015acc,
                                 s_LEO_SPECIAL__1001b214,3,7);
            if (iVar1 == 0) {
              iVar1 = 0;
            }
            else {
              iVar1 = DDEItemShare(this,&PTR_s_MAX_ITEMS_10015778,200,PTR_DAT_10015ad0,
                                   s_LEO_CMD__1001b224,9,9);
              if (iVar1 == 0) {
                iVar1 = 0;
              }
              else {
                iVar1 = DDEItemShare(this,&PTR_s_MAX_ITEMS_10015b78,3,PTR_s_VERSION_10015ad4,
                                     s_LEO_VERSION__1001b230,1,1);
                if (iVar1 == 0) {
                  iVar1 = 0;
                }
                else {
                  iVar1 = 1;
                }
              }
            }
          }
        }
      }
    }
  }
  return iVar1;
}


// ---- UnRegisterDDEShares @ 1000582f

/* private: int __thiscall LeoDDE32::UnRegisterDDEShares(void) */

int __thiscall LeoDDE32::UnRegisterDDEShares(LeoDDE32 *this)

{
  int iVar1;
  
                    /* 0x582f  43  ?UnRegisterDDEShares@LeoDDE32@@AAEHXZ */
  iVar1 = DDEUnRegisterShare(this,s_LEO_ERRORS__1001b240);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = DDEUnRegisterShare(this,s_LEO_ANALOGUES__1001b24c);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = DDEUnRegisterShare(this,s_LEO_MAXIMA__1001b25c);
      if (iVar1 == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = DDEUnRegisterShare(this,s_LEO_MINIMA__1001b268);
        if (iVar1 == 0) {
          iVar1 = 0;
        }
        else {
          iVar1 = DDEUnRegisterShare(this,s_LEO_DIGITALS__1001b274);
          if (iVar1 == 0) {
            iVar1 = 0;
          }
          else {
            iVar1 = DDEUnRegisterShare(this,s_LEO_SPECIAL__1001b284);
            if (iVar1 == 0) {
              iVar1 = 0;
            }
            else {
              iVar1 = DDEUnRegisterShare(this,s_LEO_CMD__1001b294);
              if (iVar1 == 0) {
                iVar1 = 0;
              }
              else {
                iVar1 = DDEUnRegisterShare(this,s_LEO_VERSION__1001b2a0);
                if (iVar1 == 0) {
                  iVar1 = 0;
                }
                else {
                  iVar1 = 1;
                }
              }
            }
          }
        }
      }
    }
  }
  return iVar1;
}


// ---- DDEItemShare @ 100058ed

/* private: int __thiscall LeoDDE32::DDEItemShare(char const * * const,int,char const *,char
   *,unsigned long,unsigned long) */

int __thiscall
LeoDDE32::DDEItemShare
          (LeoDDE32 *this,char **param_1,int param_2,char *param_3,char *param_4,ulong param_5,
          ulong param_6)

{
  size_t sVar1;
  int iVar2;
  BOOL BVar3;
  char local_49c [256];
  undefined1 local_39c;
  undefined1 local_39b;
  char local_39a [258];
  undefined4 local_298;
  char *local_294;
  undefined4 local_290;
  undefined1 *local_28c;
  undefined4 local_288;
  undefined4 local_284;
  undefined4 local_280;
  undefined4 local_27c;
  undefined4 local_270;
  undefined *local_26c;
  PSECURITY_DESCRIPTOR local_268;
  int local_264;
  char local_260 [256];
  HLOCAL local_160;
  int local_15c;
  int local_158;
  BYTE local_154 [64];
  DWORD local_114;
  CHAR local_110 [256];
  HKEY local_10;
  DWORD local_c;
  LSTATUS local_8;
  
                    /* 0x58ed  10  ?DDEItemShare@LeoDDE32@@AAEHQAPBDHPBDPADKK@Z */
  if (*(int *)(this + 0xc4) == 0) {
    wsprintfA(local_110,s_SOFTWARE_Microsoft_NetDDE_DDE_Sh_1001b2b0,param_4);
    local_8 = RegCreateKeyExA((HKEY)0x80000002,local_110,0,(LPSTR)0x0,0,0xf003f,
                              (LPSECURITY_ATTRIBUTES)0x0,&local_10,&local_c);
    local_15c = param_2 + -1;
    sVar1 = strlen(s_LEO_DDE_SERVER_1001b2d8);
    RegSetValueExA(local_10,s_Application_1001b2f8,0,1,(BYTE *)s_LEO_DDE_SERVER_1001b2e8,sVar1);
    sVar1 = strlen(param_3);
    RegSetValueExA(local_10,s_Topic_1001b304,0,1,(BYTE *)param_3,sVar1);
    sVar1 = strlen(*param_1);
    RegSetValueExA(local_10,&DAT_1001b30c,0,1,(BYTE *)*param_1,sVar1);
    RegSetValueExA(local_10,s_Password1_1001b314,0,1,&DAT_100231f4,0);
    RegSetValueExA(local_10,s_Password2_1001b320,0,1,&DAT_100231f8,0);
    RegSetValueExA(local_10,s_Additional_item_count_1001b32c,0,4,(BYTE *)&local_15c,4);
    RegSetValueExA(local_10,s_Permissions1_1001b344,0,3,(BYTE *)&param_5,4);
    RegSetValueExA(local_10,s_Permissions2_1001b354,0,3,(BYTE *)&param_6,4);
    RegCloseKey(local_10);
    for (local_158 = 1; local_158 < param_2; local_158 = local_158 + 1) {
      wsprintfA(local_110,s_SOFTWARE_Microsoft_NetDDE_DDE_Sh_1001b364,param_4,local_158 + -1);
      local_8 = RegCreateKeyExA((HKEY)0x80000002,local_110,0,(LPSTR)0x0,0,0xf003f,
                                (LPSECURITY_ATTRIBUTES)0x0,&local_10,&local_c);
      sVar1 = strlen(param_1[local_158]);
      RegSetValueExA(local_10,s_Item_Name_1001b3a0,0,1,(BYTE *)param_1[local_158],sVar1);
      RegSetValueExA(local_10,s_Item_Permissions_1001b3ac,0,3,(BYTE *)&param_6,4);
    }
    RegCloseKey(local_10);
    local_8 = RegCreateKeyExA((HKEY)0x80000002,s_SOFTWARE_Microsoft_Windows_Curre_1001b3c0,0,
                              (LPSTR)0x0,0,0xf003f,(LPSECURITY_ATTRIBUTES)0x0,&local_10,&local_c);
    if (local_8 == 0) {
      local_154[0] = '\0';
      local_c = 0x40;
      RegQueryValueExA(local_10,s_NetDDE_1001b3f0,(LPDWORD)0x0,&local_114,local_154,&local_c);
      iVar2 = lstrcmpiA((LPCSTR)local_154,s_netdde_exe_1001b3f8);
      if (iVar2 != 0) {
        RegSetValueExA(local_10,s_NetDDE_1001b410,0,1,(BYTE *)s_netdde_exe_1001b404,0);
        WinExec(s_netdde_exe_1001b418,0);
      }
      RegCloseKey(local_10);
      iVar2 = 1;
    }
    else {
      iVar2 = 0;
    }
  }
  else {
    sprintf(local_260,s__s__s_1001b434,s_LEO_DDE_SERVER_1001b424,param_3);
    local_39c = 0;
    local_39b = 0;
    strcpy(local_39a,local_260);
    sVar1 = strlen(local_260);
    local_39a[sVar1] = '\0';
    sVar1 = strlen(local_260);
    local_39a[sVar1 + 1] = '\0';
    memset(&local_298,0,0x30);
    local_298 = 1;
    local_294 = param_4;
    local_290 = 5;
    local_28c = &local_39c;
    local_288 = 1;
    local_284 = 1;
    local_280 = 0;
    local_27c = 7;
    local_270 = 0;
    local_26c = &DAT_100231fc;
    iVar2 = (*DAT_100205ec)(param_4);
    if (iVar2 == 0) {
      AfxMessageBox(s_Invalid_Share_Name_1001b43c,0,0);
      iVar2 = 0;
    }
    else {
      iVar2 = (*DAT_1001e410)(local_28c);
      if (iVar2 == 0) {
        AfxMessageBox(s_Invalid_AppTopic_List_1001b450,0,0);
        iVar2 = 0;
      }
      else {
        local_160 = LocalAlloc(0x42,0x14);
        if (local_160 == (HLOCAL)0x0) {
          iVar2 = 0;
        }
        else {
          local_268 = LocalLock(local_160);
          BVar3 = InitializeSecurityDescriptor(local_268,1);
          if (BVar3 == 0) {
            LocalUnlock(local_160);
            LocalFree(local_160);
            iVar2 = 0;
          }
          else {
            BVar3 = SetSecurityDescriptorDacl(local_268,1,(PACL)0x0,0);
            if (BVar3 == 0) {
              LocalUnlock(local_160);
              LocalFree(local_160);
              iVar2 = 0;
            }
            else {
              local_264 = (*DAT_10020068)(0,2,local_268,&local_298,0x30);
              if ((local_264 == 0xf) || (local_264 == 0)) {
                local_264 = (*DAT_1001f1b8)(0,param_4,0xc0000000);
              }
              LocalUnlock(local_160);
              LocalFree(local_160);
              if (local_264 == 0) {
                iVar2 = 1;
              }
              else {
                (*DAT_1001e030)(local_264,local_49c,0x100);
                AfxMessageBox(local_49c,0,0);
                iVar2 = 0;
              }
            }
          }
        }
      }
    }
  }
  return iVar2;
}


// ---- DDEUnRegisterShare @ 10005e5f

/* private: int __thiscall LeoDDE32::DDEUnRegisterShare(char *) */

int __thiscall LeoDDE32::DDEUnRegisterShare(LeoDDE32 *this,char *param_1)

{
  int iVar1;
  CHAR local_110 [256];
  HKEY local_10;
  DWORD local_c;
  LSTATUS local_8;
  
                    /* 0x5e5f  11  ?DDEUnRegisterShare@LeoDDE32@@AAEHPAD@Z */
  DetermineOS(this);
  if (*(int *)(this + 0xc4) == 0) {
    wsprintfA(local_110,s_SOFTWARE_Microsoft_NetDDE_DDE_Sh_1001b468,param_1);
    local_8 = RegCreateKeyExA((HKEY)0x80000002,local_110,0,(LPSTR)0x0,0,0xf003f,
                              (LPSECURITY_ATTRIBUTES)0x0,&local_10,&local_c);
    if (local_8 == 0) {
      if (local_c == 2) {
        RegDeleteKeyA(local_10,(LPCSTR)0x0);
      }
      RegCloseKey(local_10);
      iVar1 = 1;
    }
    else {
      iVar1 = 0;
    }
  }
  else {
    (*DAT_10020618)(0,param_1,0);
    iVar1 = 1;
  }
  return iVar1;
}


// ---- DetermineOS @ 10005f11

/* private: int __thiscall LeoDDE32::DetermineOS(void) */

int __thiscall LeoDDE32::DetermineOS(LeoDDE32 *this)

{
  int iVar1;
  _OSVERSIONINFOA local_98;
  
                    /* 0x5f11  16  ?DetermineOS@LeoDDE32@@AAEHXZ */
  memset(&local_98,0,0x94);
  local_98.dwOSVersionInfoSize = 0x94;
  GetVersionExA(&local_98);
  if (local_98.dwPlatformId == 0) {
    iVar1 = 0;
  }
  else {
    if (local_98.dwPlatformId == 1) {
      *(undefined4 *)(this + 0xc4) = 0;
    }
    else {
      *(undefined4 *)(this + 0xc4) = 1;
    }
    if (*(int *)(this + 0xc4) == 0) {
      DAT_100206b4 = (HMODULE)0x0;
    }
    else {
      DAT_100206b4 = LoadLibraryA(s_NDDEAPI_1001b490);
      if (DAT_100206b4 == (HMODULE)0x0) {
        return 0;
      }
      DAT_1001e030 = GetProcAddress(DAT_100206b4,s_NDdeGetErrorStringA_1001b498);
      DAT_1001f1b8 = GetProcAddress(DAT_100206b4,s_NDdeSetTrustedShareA_1001b4ac);
      DAT_10020068 = GetProcAddress(DAT_100206b4,s_NDdeShareAddA_1001b4c4);
      DAT_1001e410 = GetProcAddress(DAT_100206b4,s_NDdeIsValidAppTopicListA_1001b4d4);
      DAT_100205ec = GetProcAddress(DAT_100206b4,s_NDdeIsValidShareNameA_1001b4f0);
      DAT_10020618 = GetProcAddress(DAT_100206b4,s_NDdeShareDelA_1001b508);
    }
    iVar1 = 1;
  }
  return iVar1;
}


// ---- remote_control_ok @ 10006058

/* private: static int __cdecl LeoDDE32::remote_control_ok(void) */

int __cdecl LeoDDE32::remote_control_ok(void)

{
  bool bVar1;
  
                    /* 0x6058  59  ?remote_control_ok@LeoDDE32@@CAHXZ */
  bVar1 = DAT_10020078 != 1;
  if (bVar1) {
    send_server_message(s_DDE__Remote_Control_Disabled_1001b518);
  }
  return (uint)!bVar1;
}


// ---- netdde_ok @ 1000607c

/* private: static int __cdecl LeoDDE32::netdde_ok(void) */

int __cdecl LeoDDE32::netdde_ok(void)

{
  bool bVar1;
  
                    /* 0x607c  54  ?netdde_ok@LeoDDE32@@CAHXZ */
  bVar1 = DAT_1001efe0 != 1;
  if (bVar1) {
    send_server_message(s_DDE__Network_DDE_Disabled_1001b554);
  }
  else {
    send_server_message(s_DDE__Network_DDE_Enabled_1001b538);
  }
  return (uint)!bVar1;
}


// ---- hLEOUIFwindow @ 100060ad

/* private: static struct HWND__ * __cdecl LeoDDE32::hLEOUIFwindow(void) */

HWND__ * __cdecl LeoDDE32::hLEOUIFwindow(void)

{
                    /* 0x60ad  48  ?hLEOUIFwindow@LeoDDE32@@CAPAUHWND__@@XZ */
  return DAT_1001e42c;
}


// ---- GetValue @ 100060b7

/* WARNING: Removing unreachable block (ram,0x100060d6) */
/* public: static int __cdecl LeoDDE32::GetValue(int,double *) */

int __cdecl LeoDDE32::GetValue(int param_1,double *param_2)

{
  int iVar1;
  undefined4 in_ECX;
  uint local_10;
  float local_c;
  
                    /* 0x60b7  23  ?GetValue@LeoDDE32@@SAHHPAN@Z */
  if (DAT_1001eee4 == 1) {
    iVar1 = FUN_1000ca4c(DAT_1001f1d8,CONCAT22((short)((uint)in_ECX >> 0x10),(undefined2)param_1),
                         &local_10);
    *param_2 = (double)local_c;
    if (iVar1 == 1) {
      iVar1 = 0;
    }
    else {
      iVar1 = 1;
    }
  }
  else {
    iVar1 = 1;
  }
  return iVar1;
}


// ---- SetAnalogue @ 1000610f

/* private: static int __cdecl LeoDDE32::SetAnalogue(int,float) */

int __cdecl LeoDDE32::SetAnalogue(int param_1,float param_2)

{
  int iVar1;
  int local_10;
  double local_c;
  
                    /* 0x610f  38  ?SetAnalogue@LeoDDE32@@CAHHM@Z */
  if (DAT_1001eee4 == 1) {
    local_10 = param_1;
    local_c = (double)param_2;
    iVar1 = FUN_1000ccca(DAT_1001f1d8,&local_10);
    if (iVar1 == 1) {
      iVar1 = 0;
    }
    else {
      iVar1 = 1;
    }
  }
  else {
    iVar1 = 1;
  }
  return iVar1;
}


// ---- NudgeValue @ 10006156

/* private: static int __cdecl LeoDDE32::NudgeValue(int,int) */

int __cdecl LeoDDE32::NudgeValue(int param_1,int param_2)

{
  int iVar1;
  int local_10 [2];
  undefined4 local_8;
  
                    /* 0x6156  32  ?NudgeValue@LeoDDE32@@CAHHH@Z */
  if (DAT_1001eee4 == 1) {
    local_10[0] = param_1;
    local_8 = 1;
    do {
      if (param_2 == 0) {
        return 0;
      }
      iVar1 = FUN_1000cdae(DAT_1001f1d8,local_10);
      param_2 = param_2 + -1;
    } while (iVar1 == 1);
  }
  return 1;
}


// ---- GetState @ 100061b0

/* private: static int __cdecl LeoDDE32::GetState(int,long *) */

int __cdecl LeoDDE32::GetState(int param_1,long *param_2)

{
  int iVar1;
  undefined4 in_ECX;
  uint local_1c;
  long local_18;
  
                    /* 0x61b0  22  ?GetState@LeoDDE32@@CAHHPAJ@Z */
  if (DAT_1001eee4 == 1) {
    iVar1 = FUN_1000cb69(DAT_1001f1d8,CONCAT22((short)((uint)in_ECX >> 0x10),(undefined2)param_1),
                         &local_1c);
    if (iVar1 == 1) {
      *param_2 = local_18;
      iVar1 = 0;
    }
    else {
      iVar1 = 1;
    }
  }
  else {
    iVar1 = 1;
  }
  return iVar1;
}


// ---- SetState @ 100061f8

/* private: static int __cdecl LeoDDE32::SetState(int,long) */

int __cdecl LeoDDE32::SetState(int param_1,long param_2)

{
  int iVar1;
  int local_10;
  long local_c;
  
                    /* 0x61f8  39  ?SetState@LeoDDE32@@CAHHJ@Z */
  if (DAT_1001eee4 == 1) {
    local_10 = param_1;
    local_c = param_2;
    iVar1 = FUN_1000cc7e(DAT_1001f1d8,&local_10);
    if (iVar1 == 1) {
      iVar1 = 0;
    }
    else {
      iVar1 = 1;
    }
  }
  else {
    iVar1 = 1;
  }
  return iVar1;
}


// ---- M007_GetState @ 1000623f

/* private: static int __cdecl LeoDDE32::M007_GetState(int) */

int __cdecl LeoDDE32::M007_GetState(int param_1)

{
                    /* 0x623f  27  ?M007_GetState@LeoDDE32@@CAHH@Z */
  return 1;
}


// ---- GetIFStateStr @ 10006249

/* public: static int __cdecl LeoDDE32::GetIFStateStr(int,char *) */

int __cdecl LeoDDE32::GetIFStateStr(int param_1,char *param_2)

{
  int iVar1;
  undefined4 in_ECX;
  undefined2 extraout_var;
  undefined4 local_40;
  undefined4 local_3c;
  uint local_38 [2];
  ATOM local_30;
  int local_2c;
  uint local_28;
  ushort local_24;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0x6249  19  ?GetIFStateStr@LeoDDE32@@SAHHPAD@Z */
  local_8 = 0xffffffff;
  puStack_c = &LAB_1000fd31;
  local_10 = ExceptionList;
  if (DAT_1001eee4 == 1) {
    ExceptionList = &local_10;
    local_2c = FUN_1000cb69(DAT_1001f1d8,CONCAT22((short)((uint)in_ECX >> 0x10),(undefined2)param_1)
                            ,&local_28);
    if (local_2c == 1) {
      local_2c = FUN_1000cb00(DAT_1001f1d8,CONCAT22(extraout_var,(undefined2)param_1),(uint)local_24
                              ,local_38);
      if (local_2c == 1) {
        FUN_10001081(&local_40);
        local_8 = 0;
        CString::CString((CString *)&local_3c);
        local_8._0_1_ = 1;
        FUN_100010be(local_30,(CString *)&local_3c);
        wsprintfA(param_2,&DAT_1001b570,local_3c);
        local_8 = (uint)local_8._1_3_ << 8;
        CString::~CString((CString *)&local_3c);
        local_8 = 0xffffffff;
        FUN_100010a1(&local_40);
        iVar1 = 0;
      }
      else {
        iVar1 = 1;
      }
    }
    else {
      iVar1 = 1;
    }
  }
  else {
    iVar1 = 1;
  }
  ExceptionList = local_10;
  return iVar1;
}


// ---- PutIFStateStr @ 1000633d

/* private: static int __cdecl LeoDDE32::PutIFStateStr(int,char const *) */

int __cdecl LeoDDE32::PutIFStateStr(int param_1,char *param_2)

{
  int iVar1;
  undefined2 extraout_var;
  undefined4 local_4c;
  uint local_48 [2];
  ATOM local_40;
  int local_3c;
  uint local_38;
  uint local_34;
  int local_30;
  uint local_2c [4];
  undefined2 local_1c;
  uchar *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0x633d  33  ?PutIFStateStr@LeoDDE32@@CAHHPBD@Z */
  local_8 = 0xffffffff;
  puStack_c = &LAB_1000fd4d;
  local_10 = ExceptionList;
  if (DAT_1001eee4 == 1) {
    ExceptionList = &local_10;
    CString::CString((CString *)&local_14,&DAT_10023200);
    local_8 = 0;
    if (param_2 == (char *)0x0) {
      local_8 = 0xffffffff;
      CString::~CString((CString *)&local_14);
    }
    else {
      local_30 = FUN_1000cb69(DAT_1001f1d8,CONCAT22(extraout_var,(undefined2)param_1),local_2c);
      if (local_30 == 1) {
        local_34 = CONCAT22(local_34._2_2_,local_1c);
        local_38 = local_38 & 0xffff0000;
        while ((local_38 & 0xffff) < (local_34 & 0xffff)) {
          local_3c = FUN_1000cb00(DAT_1001f1d8,param_1 & 0xffff,local_38 & 0xffff,local_48);
          if (local_3c == 1) {
            FUN_10001081(&local_4c);
            local_8._0_1_ = 1;
            FUN_100010be(local_40,(CString *)&local_14);
            iVar1 = _mbscmp(local_14,(uchar *)param_2);
            if (iVar1 == 0) {
              iVar1 = SetState(param_1,local_38 & 0xffff);
              local_8 = (uint)local_8._1_3_ << 8;
              FUN_100010a1(&local_4c);
              local_8 = 0xffffffff;
              CString::~CString((CString *)&local_14);
              ExceptionList = local_10;
              return iVar1;
            }
            local_8 = (uint)local_8._1_3_ << 8;
            FUN_100010a1(&local_4c);
          }
          local_38 = CONCAT22(local_38._2_2_,(short)local_38 + 1);
        }
      }
      local_8 = 0xffffffff;
      CString::~CString((CString *)&local_14);
    }
  }
  ExceptionList = local_10;
  return 1;
}


// ---- ExecuteCommand @ 100064c5

/* private: static int __cdecl LeoDDE32::ExecuteCommand(int) */

int __cdecl LeoDDE32::ExecuteCommand(int param_1)

{
  undefined4 in_EAX;
  int iVar1;
  
                    /* 0x64c5  17  ?ExecuteCommand@LeoDDE32@@CAHH@Z */
  if (DAT_1001eee4 == 1) {
    iVar1 = FUN_1000c99a(DAT_1001f1d8,CONCAT22((short)((uint)in_EAX >> 0x10),(undefined2)param_1));
    if (iVar1 == 1) {
      iVar1 = 0;
    }
    else {
      iVar1 = 1;
    }
  }
  else {
    iVar1 = 1;
  }
  return iVar1;
}


// ---- RunMacroLibrary @ 100064ff

/* private: static int __cdecl LeoDDE32::RunMacroLibrary(char *) */

int __cdecl LeoDDE32::RunMacroLibrary(char *param_1)

{
                    /* 0x64ff  37  ?RunMacroLibrary@LeoDDE32@@CAHPAD@Z */
  return 1;
}


// ---- RunMacroFile @ 10006509

/* private: static int __cdecl LeoDDE32::RunMacroFile(char *) */

int __cdecl LeoDDE32::RunMacroFile(char *param_1)

{
                    /* 0x6509  36  ?RunMacroFile@LeoDDE32@@CAHPAD@Z */
  return 1;
}


// ---- Low @ 10006513

/* private: static int __cdecl LeoDDE32::Low(int,double *) */

int __cdecl LeoDDE32::Low(int param_1,double *param_2)

{
                    /* 0x6513  26  ?Low@LeoDDE32@@CAHHPAN@Z */
  return 1;
}


// ---- High @ 1000651d

/* private: static int __cdecl LeoDDE32::High(int,double *) */

int __cdecl LeoDDE32::High(int param_1,double *param_2)

{
                    /* 0x651d  24  ?High@LeoDDE32@@CAHHPAN@Z */
  return 1;
}


// ---- AdviseDigital @ 10006527

/* private: static int __cdecl LeoDDE32::AdviseDigital(int) */

int __cdecl LeoDDE32::AdviseDigital(int param_1)

{
  undefined4 uVar1;
  BOOL BVar2;
  int iVar3;
  char *extraout_ECX;
  char *pcVar4;
  HWND local_34;
  CString local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x6527  5  ?AdviseDigital@LeoDDE32@@CAHH@Z */
  local_8 = 0xffffffff;
  puStack_c = &LAB_1000fd60;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  CString::CString(local_14,(&PTR_s_MAX_ITEMS_1001526c)[param_1]);
  local_8 = 0;
  pcVar4 = extraout_ECX;
  CString::CString((CString *)&stack0xffffffc8,local_14);
  uVar1 = FUN_1000d191(DAT_1001f1d8,pcVar4);
  if (m_pNotifyWindow == (CNotifyWindow *)0x0) {
    local_8 = 0xffffffff;
    CString::~CString(local_14);
    iVar3 = 0;
  }
  else {
    if (m_pNotifyWindow == (CNotifyWindow *)0x0) {
      local_34 = (HWND)0x0;
    }
    else {
      local_34 = *(HWND *)(m_pNotifyWindow + 0x20);
    }
    BVar2 = IsWindow(local_34);
    if (BVar2 != 0) {
      FUN_1000d135(DAT_1001f1d8,uVar1,1,local_34);
    }
    local_8 = 0xffffffff;
    CString::~CString(local_14);
    iVar3 = 1;
  }
  ExceptionList = local_10;
  return iVar3;
}


// ---- UnAdviseDigital @ 10006614

/* private: static int __cdecl LeoDDE32::UnAdviseDigital(int) */

int __cdecl LeoDDE32::UnAdviseDigital(int param_1)

{
  undefined4 uVar1;
  BOOL BVar2;
  int iVar3;
  char *extraout_ECX;
  char *pcVar4;
  HWND local_34;
  CString local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x6614  41  ?UnAdviseDigital@LeoDDE32@@CAHH@Z */
  local_8 = 0xffffffff;
  puStack_c = &LAB_1000fd73;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  CString::CString(local_14,(&PTR_s_MAX_ITEMS_1001526c)[param_1]);
  local_8 = 0;
  pcVar4 = extraout_ECX;
  CString::CString((CString *)&stack0xffffffc8,local_14);
  uVar1 = FUN_1000d191(DAT_1001f1d8,pcVar4);
  if (m_pNotifyWindow == (CNotifyWindow *)0x0) {
    local_8 = 0xffffffff;
    CString::~CString(local_14);
    iVar3 = 0;
  }
  else {
    if (m_pNotifyWindow == (CNotifyWindow *)0x0) {
      local_34 = (HWND)0x0;
    }
    else {
      local_34 = *(HWND *)(m_pNotifyWindow + 0x20);
    }
    BVar2 = IsWindow(local_34);
    if (BVar2 != 0) {
      FUN_1000d135(DAT_1001f1d8,uVar1,0,local_34);
    }
    local_8 = 0xffffffff;
    CString::~CString(local_14);
    iVar3 = 1;
  }
  ExceptionList = local_10;
  return iVar3;
}


// ---- AdviseAnalogue @ 10006701

/* private: static int __cdecl LeoDDE32::AdviseAnalogue(int) */

int __cdecl LeoDDE32::AdviseAnalogue(int param_1)

{
  BOOL BVar1;
  int iVar2;
  char *extraout_ECX;
  char *pcVar3;
  HWND local_34;
  CString local_18 [4];
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x6701  4  ?AdviseAnalogue@LeoDDE32@@CAHH@Z */
  local_8 = 0xffffffff;
  puStack_c = &LAB_1000fd86;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  CString::CString(local_18,(&PTR_s_MAX_ITEMS_10014bb8)[param_1]);
  local_8 = 0;
  pcVar3 = extraout_ECX;
  CString::CString((CString *)&stack0xffffffc8,local_18);
  local_14 = FUN_1000d191(DAT_1001f1d8,pcVar3);
  if (m_pNotifyWindow == (CNotifyWindow *)0x0) {
    local_8 = 0xffffffff;
    CString::~CString(local_18);
    iVar2 = 0;
  }
  else {
    if (m_pNotifyWindow == (CNotifyWindow *)0x0) {
      local_34 = (HWND)0x0;
    }
    else {
      local_34 = *(HWND *)(m_pNotifyWindow + 0x20);
    }
    BVar1 = IsWindow(local_34);
    if (BVar1 != 0) {
      FUN_1000d135(DAT_1001f1d8,local_14,1,local_34);
    }
    local_8 = 0xffffffff;
    CString::~CString(local_18);
    iVar2 = 1;
  }
  ExceptionList = local_10;
  return iVar2;
}


// ---- UnAdviseAnalogue @ 100067ee

/* private: static int __cdecl LeoDDE32::UnAdviseAnalogue(int) */

int __cdecl LeoDDE32::UnAdviseAnalogue(int param_1)

{
  BOOL BVar1;
  int iVar2;
  char *extraout_ECX;
  char *pcVar3;
  HWND local_34;
  CString local_18 [4];
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x67ee  40  ?UnAdviseAnalogue@LeoDDE32@@CAHH@Z */
  local_8 = 0xffffffff;
  puStack_c = &LAB_1000fd99;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  CString::CString(local_18,(&PTR_s_MAX_ITEMS_10014bb8)[param_1]);
  local_8 = 0;
  pcVar3 = extraout_ECX;
  CString::CString((CString *)&stack0xffffffc8,local_18);
  local_14 = FUN_1000d191(DAT_1001f1d8,pcVar3);
  if (m_pNotifyWindow == (CNotifyWindow *)0x0) {
    local_8 = 0xffffffff;
    CString::~CString(local_18);
    iVar2 = 0;
  }
  else {
    if (m_pNotifyWindow == (CNotifyWindow *)0x0) {
      local_34 = (HWND)0x0;
    }
    else {
      local_34 = *(HWND *)(m_pNotifyWindow + 0x20);
    }
    BVar1 = IsWindow(local_34);
    if (BVar1 != 0) {
      FUN_1000d135(DAT_1001f1d8,local_14,0,local_34);
    }
    local_8 = 0xffffffff;
    CString::~CString(local_18);
    iVar2 = 1;
  }
  ExceptionList = local_10;
  return iVar2;
}


// ---- AdviseErrors @ 100068db

/* private: static void __cdecl LeoDDE32::AdviseErrors(void) */

void __cdecl LeoDDE32::AdviseErrors(void)

{
                    /* 0x68db  6  ?AdviseErrors@LeoDDE32@@CAXXZ */
  return;
}


// ---- UnAdviseErrors @ 100068e0

/* private: static void __cdecl LeoDDE32::UnAdviseErrors(void) */

void __cdecl LeoDDE32::UnAdviseErrors(void)

{
                    /* 0x68e0  42  ?UnAdviseErrors@LeoDDE32@@CAXXZ */
  return;
}


// ---- do_featurescan @ 100068e5

/* private: static void __cdecl LeoDDE32::do_featurescan(struct chord_type *,int,int,int) */

void __cdecl LeoDDE32::do_featurescan(chord_type *param_1,int param_2,int param_3,int param_4)

{
                    /* 0x68e5  46  ?do_featurescan@LeoDDE32@@CAXPAUchord_type@@HHH@Z */
  return;
}


// ---- read_hist_data @ 100068ea

/* private: static void __cdecl LeoDDE32::read_hist_data(char *) */

void __cdecl LeoDDE32::read_hist_data(char *param_1)

{
                    /* 0x68ea  57  ?read_hist_data@LeoDDE32@@CAXPAD@Z */
  return;
}


// ---- read_prof_data @ 100068ef

/* private: static void __cdecl LeoDDE32::read_prof_data(char *,int) */

void __cdecl LeoDDE32::read_prof_data(char *param_1,int param_2)

{
                    /* 0x68ef  58  ?read_prof_data@LeoDDE32@@CAXPADH@Z */
  return;
}


// ---- setXYSTAGE_GOTO_FIELD @ 100068f4

/* private: static void __cdecl LeoDDE32::setXYSTAGE_GOTO_FIELD(float,float) */

void __cdecl LeoDDE32::setXYSTAGE_GOTO_FIELD(float param_1,float param_2)

{
                    /* 0x68f4  63  ?setXYSTAGE_GOTO_FIELD@LeoDDE32@@CAXMM@Z */
  return;
}


// ---- setXYSTAGE_FIELD_SIZE @ 100068f9

/* private: static void __cdecl LeoDDE32::setXYSTAGE_FIELD_SIZE(float,float) */

void __cdecl LeoDDE32::setXYSTAGE_FIELD_SIZE(float param_1,float param_2)

{
                    /* 0x68f9  62  ?setXYSTAGE_FIELD_SIZE@LeoDDE32@@CAXMM@Z */
  return;
}


// ---- setXYSTAGE_FIELDS @ 100068fe

/* private: static void __cdecl LeoDDE32::setXYSTAGE_FIELDS(float,float) */

void __cdecl LeoDDE32::setXYSTAGE_FIELDS(float param_1,float param_2)

{
                    /* 0x68fe  61  ?setXYSTAGE_FIELDS@LeoDDE32@@CAXMM@Z */
  return;
}


// ---- setXYZSTAGE_GOTO @ 10006903

/* private: static void __cdecl LeoDDE32::setXYZSTAGE_GOTO(float,float,float) */

void __cdecl LeoDDE32::setXYZSTAGE_GOTO(float param_1,float param_2,float param_3)

{
  float local_20;
  float local_1c;
  float local_18;
  int local_8;
  
                    /* 0x6903  64  ?setXYZSTAGE_GOTO@LeoDDE32@@CAXMMM@Z */
  if ((DAT_1001eee4 == 1) && (local_8 = FUN_1000d09d(DAT_1001f1d8,&local_20), local_8 == 1)) {
    local_20 = param_1;
    local_1c = param_2;
    local_18 = param_3;
    FUN_1000d0e9(DAT_1001f1d8,&local_20);
  }
  return;
}


// ---- read_bitmap @ 10006956

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static int __cdecl LeoDDE32::read_bitmap(int,int,int,int,int,char *) */

int __cdecl
LeoDDE32::read_bitmap(int param_1,int param_2,int param_3,int param_4,int param_5,char *param_6)

{
  DWORD DVar1;
  size_t sVar2;
  bool bVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 local_354;
  int local_350;
  char *local_34c;
  size_t *local_348;
  size_t *local_344;
  char local_340 [256];
  HANDLE local_240;
  _OSVERSIONINFOA local_23c;
  long local_1a8;
  undefined4 local_1a4;
  undefined4 local_1a0;
  size_t local_19c;
  undefined4 *local_198;
  undefined4 local_194;
  undefined4 local_190;
  int local_18c;
  int local_188;
  int local_184;
  char *local_180;
  char local_17c [352];
  undefined4 local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  char *local_8;
  
                    /* 0x6956  55  ?read_bitmap@LeoDDE32@@CAHHHHHHPAD@Z */
  if (DAT_1001eee4 != 1) {
    return 1;
  }
  local_10 = param_3;
  local_14 = param_2;
  local_c = param_4 + -1 + param_2;
  pcVar5 = (char *)(param_5 + -1 + param_3);
  local_18 = 0;
  local_8 = pcVar5;
  CString::CString((CString *)&stack0xfffffc94,param_6);
  local_18 = FUN_1000ceae(DAT_1001f1d8,local_14,local_10,local_c,local_8,0,pcVar5);
  if (((param_1 == 0xb) && (DAT_10020c50 != (HWND)0x0)) ||
     ((param_1 == 0x15 && (DAT_10020c50 != (HWND)0x0)))) {
    memset(&local_23c,0,0x94);
    local_23c.dwOSVersionInfoSize = 0x94;
    GetVersionExA(&local_23c);
    local_1a4 = 0x3f800000;
    local_1a8 = 0;
    GetState(99,&local_1a8);
    switch(local_1a8) {
    case 0:
      local_1a4 = 0x3f800000;
      break;
    case 1:
      local_1a4 = 0x3f000000;
      break;
    case 2:
      local_1a4 = 0x40000000;
      break;
    case 3:
      local_1a4 = 0x40400000;
    }
    local_1a0 = DAT_10020c00;
    local_19c = 0x17c;
    local_198 = &local_194;
    local_194 = local_1a4;
    local_190 = local_1a4;
    local_18c = local_14;
    local_188 = local_10;
    local_184 = local_c;
    local_180 = local_8;
    strcpy(local_17c,param_6);
    local_1c = 1;
    if (local_23c.dwPlatformId == 2) {
      uVar4 = *(undefined4 *)((int)DAT_1001f1d8 + 8);
      rand();
      DVar1 = GetTickCount();
      sprintf(local_340,s_MMF_LEO_DDE__lx__lx__lx_1001b574,DVar1,uVar4);
      local_240 = CreateFileMappingA((HANDLE)0xffffffff,(LPSECURITY_ATTRIBUTES)0x0,4,0,local_19c + 8
                                     ,local_340);
      if (local_240 == (HANDLE)0x0) {
        return 0;
      }
      local_348 = MapViewOfFile(local_240,6,0,0,0);
      if (local_348 == (size_t *)0x0) {
        return 0;
      }
      *local_348 = local_19c;
      local_344 = local_348;
      memcpy(local_348 + 1,local_198,local_19c);
      local_354 = local_1a0;
      sVar2 = strlen(local_340);
      local_350 = sVar2 + 1;
      local_34c = local_340;
      _DAT_1001e040 = SendMessageA(DAT_10020c50,0x4a,0,(LPARAM)&local_354);
      memcpy(local_198,local_344 + 1,local_19c);
      UnmapViewOfFile(local_344);
      CloseHandle(local_240);
    }
    else {
      SendMessageA(DAT_10020c50,0x4a,0,(LPARAM)&local_1a0);
    }
  }
  bVar3 = local_18 != 1;
  if (bVar3) {
    send_server_message(s_DDE__Image_Save_Failed_1001b5a0);
  }
  else {
    send_server_message(s_DDE__Image_Save_OK_1001b58c);
  }
  return (uint)!bVar3;
}


// ---- DDEUserInitialise @ 10006ceb

/* public: long __thiscall LeoDDE32::DDEUserInitialise(unsigned int) */

long __thiscall LeoDDE32::DDEUserInitialise(LeoDDE32 *this,uint param_1)

{
  AFX_MODULE_STATE *pAVar1;
  CWnd *pCVar2;
  long lVar3;
  CNotifyWindow *local_64;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  CWnd *local_30;
  CNotifyWindow *local_2c;
  AFX_EXCEPTION_LINK local_24 [8];
  undefined4 local_1c;
  int local_18;
  undefined1 *local_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0x6ceb  12  ?DDEUserInitialise@LeoDDE32@@QAEJI@Z */
  local_8 = 0xffffffff;
  puStack_c = &LAB_1000fdbf;
  pvStack_10 = ExceptionList;
  local_14 = &stack0xffffff8c;
  ExceptionList = &pvStack_10;
  pAVar1 = (AFX_MODULE_STATE *)FUN_1000f785();
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2((AFX_MAINTAIN_STATE2 *)&local_1c,pAVar1);
  local_8 = 0;
  AFX_EXCEPTION_LINK::AFX_EXCEPTION_LINK(local_24);
  local_8._1_3_ = (uint3)((uint)local_8 >> 8);
  local_8._0_1_ = 2;
  setup_comms(this,(HWND__ *)param_1,(HWND__ *)param_1);
  if (m_pNotifyWindow == (CNotifyWindow *)0x0) {
    local_30 = operator_new(0x44);
    local_8._0_1_ = 3;
    if (local_30 == (CWnd *)0x0) {
      local_64 = (CNotifyWindow *)0x0;
    }
    else {
      local_64 = (CNotifyWindow *)FUN_10009140(local_30);
    }
    local_2c = local_64;
    local_8._0_1_ = 2;
    m_pNotifyWindow = local_64;
    *(LeoDDE32 **)(local_64 + 0x40) = this;
    pCVar2 = CWnd::FromHandle(*(HWND__ **)(DAT_1001f1d8 + 4));
    local_40 = 0;
    local_3c = 0;
    local_38 = 0;
    local_34 = 0;
    (**(code **)(*(int *)m_pNotifyWindow + 0x5c))(0,&DAT_10023204,0x40000000,&local_40,pCVar2,1,0);
  }
  local_8 = (uint)local_8._1_3_ << 8;
  AfxTryCleanup();
  local_8 = 0xffffffff;
  *(undefined4 *)(local_18 + 4) = local_1c;
  lVar3 = FUN_10006e5e();
  return lVar3;
}


// ---- Catch@10006e2f @ 10006e2f

undefined * Catch_10006e2f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x24);
  *(undefined4 *)(unaff_EBP + -0x44) = 0xfffffff0;
  return &DAT_10006e42;
}


// ---- FUN_10006e5e @ 10006e5e

void FUN_10006e5e(void)

{
  int unaff_EBP;
  
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


// ---- DDEsetupImgMgrHandle @ 10006e71

/* public: void __thiscall LeoDDE32::DDEsetupImgMgrHandle(unsigned int) */

void __thiscall LeoDDE32::DDEsetupImgMgrHandle(LeoDDE32 *this,uint param_1)

{
  AFX_MODULE_STATE *pAVar1;
  undefined4 local_c;
  int local_8;
  
                    /* 0x6e71  15  ?DDEsetupImgMgrHandle@LeoDDE32@@QAEXI@Z */
  pAVar1 = (AFX_MODULE_STATE *)FUN_1000f785();
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2((AFX_MAINTAIN_STATE2 *)&local_c,pAVar1);
  DAT_10020c50 = param_1;
  *(undefined4 *)(local_8 + 4) = local_c;
  return;
}


// ---- setup_comms @ 10006e9f

/* public: void __thiscall LeoDDE32::setup_comms(struct HWND__ *,struct HWND__ *) */

void __thiscall LeoDDE32::setup_comms(LeoDDE32 *this,HWND__ *param_1,HWND__ *param_2)

{
  void *this_00;
  undefined4 *local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x6e9f  65  ?setup_comms@LeoDDE32@@QAEXPAUHWND__@@0@Z */
  local_8 = 0xffffffff;
  puStack_c = &LAB_1000fdd3;
  local_10 = ExceptionList;
  DAT_1001e42c = param_1;
  DAT_1002317c = param_2;
  ExceptionList = &local_10;
  this_00 = operator_new(0x18);
  local_8 = 0;
  if (this_00 == (void *)0x0) {
    local_20 = (undefined4 *)0x0;
  }
  else {
    local_20 = FUN_1000c7ce(this_00,DAT_1001e42c,DAT_1002317c);
  }
  DAT_1001f1d8 = local_20;
  DAT_1001eee4 = 1;
  ExceptionList = local_10;
  return;
}


// ---- get_param_info @ 10006f39

/* private: static long __cdecl LeoDDE32::get_param_info(unsigned short,char *) */

long __cdecl LeoDDE32::get_param_info(ushort param_1,char *param_2)

{
                    /* 0x6f39  47  ?get_param_info@LeoDDE32@@CAJGPAD@Z */
  sprintf(param_2,s_Parameter_supplied_is_0x_lx_1001b5b8,param_1);
  return 1;
}


// ---- send_server_message @ 10006f5e

/* private: static long __cdecl LeoDDE32::send_server_message(char const *) */

long __cdecl LeoDDE32::send_server_message(char *param_1)

{
  HWND hWnd;
  ATOM AVar1;
  long lVar2;
  int iVar3;
  
                    /* 0x6f5e  60  ?send_server_message@LeoDDE32@@CAJPBD@Z */
  if (DAT_1002314c == 0) {
    lVar2 = 0;
  }
  else {
    iVar3 = FUN_1000b48c(s_DDE_Trace_1001b5d8,0);
    if (iVar3 == 0) {
      lVar2 = 0;
    }
    else {
      hWnd = *(HWND *)(DAT_1001f1d8 + 4);
      AVar1 = GlobalAddAtomA(param_1);
      lVar2 = SendMessageA(hWnd,0x4c8,0,(uint)AVar1);
    }
  }
  return lVar2;
}


// ---- read_bitmap_handle @ 10006fc0

/* private: static int __cdecl LeoDDE32::read_bitmap_handle(int,int,int,int,int,char *,void * *) */

int __cdecl
LeoDDE32::read_bitmap_handle
          (int param_1,int param_2,int param_3,int param_4,int param_5,char *param_6,void **param_7)

{
  int iVar1;
  HGLOBAL pvVar2;
  BOOL BVar3;
  DWORD local_38;
  int *local_34;
  uint local_30;
  HANDLE local_2c;
  _SECURITY_ATTRIBUTES local_28;
  uint local_1c [2];
  int local_12;
  uint local_c;
  uint local_8;
  
                    /* 0x6fc0  56  ?read_bitmap_handle@LeoDDE32@@CAHHHHHHPADPAPAX@Z */
  local_8 = local_8 & 0xffff0000;
  iVar1 = read_bitmap(param_1,param_2,param_3,param_4,param_5,param_6);
  if (iVar1 == 0) {
    return 0;
  }
  local_28.nLength = 0xc;
  local_28.lpSecurityDescriptor = (LPVOID)0x0;
  local_28.bInheritHandle = 1;
  local_2c = CreateFileA(param_6,0x80000000,0,&local_28,3,0x8000080,(HANDLE)0x0);
  if (local_2c == (HANDLE)0xffffffff) {
    return 0;
  }
  pvVar2 = GlobalAlloc(0x2002,0x428);
  *param_7 = pvVar2;
  local_34 = GlobalLock(*param_7);
  BVar3 = ReadFile(local_2c,local_1c,0xe,&local_38,(LPOVERLAPPED)0x0);
  if ((((BVar3 != 0) && ((local_1c[0] & 0xffff) == 0x4d42)) &&
      (BVar3 = ReadFile(local_2c,local_34,0x28,&local_38,(LPOVERLAPPED)0x0), BVar3 != 0)) &&
     (*local_34 != 0xc)) {
    local_30 = CONCAT22(local_30._2_2_,(short)local_34[8]);
    if (((short)local_34[8] == 0) && (*(short *)((int)local_34 + 0xe) != 0x18)) {
      local_30 = CONCAT22(local_30._2_2_,
                          (short)(1 << ((byte)*(short *)((int)local_34 + 0xe) & 0x1f)));
    }
    if (local_34[8] == 0) {
      local_34[8] = local_30 & 0xffff;
    }
    if (local_34[5] == 0) {
      local_34[5] = (local_34[1] * (uint)*(ushort *)((int)local_34 + 0xe) + 0x1f >> 5) * 4 *
                    local_34[2];
    }
    GlobalUnlock(*param_7);
    pvVar2 = GlobalReAlloc(*param_7,*local_34 + (local_30 & 0xffff) * 4 + local_34[5],0);
    *param_7 = pvVar2;
    if (*param_7 == (void *)0x0) goto LAB_1000722d;
    local_34 = GlobalLock(*param_7);
    BVar3 = ReadFile(local_2c,(LPVOID)((int)local_34 + *local_34),(local_30 & 0xffff) << 2,&local_38
                     ,(LPOVERLAPPED)0x0);
    if (BVar3 != 0) {
      local_c = CONCAT22(local_c._2_2_,(short)*local_34 + (short)local_30 * 4);
      if (local_12 != 0) {
        SetFilePointer(local_2c,local_12,(PLONG)0x0,0);
      }
      BVar3 = ReadFile(local_2c,(LPVOID)((int)local_34 + (local_c & 0xffff)),local_34[5],&local_38,
                       (LPOVERLAPPED)0x0);
      local_8 = CONCAT22(local_8._2_2_,(short)BVar3);
    }
  }
  CloseHandle(local_2c);
  GlobalUnlock(*param_7);
LAB_1000722d:
  return local_8 & 0xffff;
}


// ---- FUN_10007247 @ 10007247

void FUN_10007247(void)

{
  FUN_10007251();
  return;
}


// ---- FUN_10007251 @ 10007251

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10007251(void)

{
  _DAT_1001f010 = RegisterWindowMessageA(s___LEO_D_SET_STATE_10015c56 + 2);
  return;
}


// ---- FUN_10007266 @ 10007266

void FUN_10007266(void)

{
  FUN_10007270();
  return;
}


// ---- FUN_10007270 @ 10007270

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10007270(void)

{
  _DAT_1001f1b4 = RegisterWindowMessageA(s_LEO_D_SET_STRING_10015c68);
  return;
}


// ---- FUN_10007285 @ 10007285

void FUN_10007285(void)

{
  FUN_1000728f();
  return;
}


// ---- FUN_1000728f @ 1000728f

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000728f(void)

{
  _DAT_1001e008 = RegisterWindowMessageA(s_LEO_D_SET_VALUE_10015c7c);
  return;
}


// ---- FUN_100072a4 @ 100072a4

void FUN_100072a4(void)

{
  FUN_100072ae();
  return;
}


// ---- FUN_100072ae @ 100072ae

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100072ae(void)

{
  _DAT_1001e9c4 = RegisterWindowMessageA(s_LEO_D_SET_XY_10015c8c);
  return;
}


// ---- FUN_100072c3 @ 100072c3

void FUN_100072c3(void)

{
  FUN_100072cd();
  return;
}


// ---- FUN_100072cd @ 100072cd

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100072cd(void)

{
  _DAT_1001eefc = RegisterWindowMessageA(s_LEO_D_GET_XY_10015c9c);
  return;
}


// ---- FUN_100072e2 @ 100072e2

void FUN_100072e2(void)

{
  FUN_100072ec();
  return;
}


// ---- FUN_100072ec @ 100072ec

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100072ec(void)

{
  _DAT_1001e3dc = RegisterWindowMessageA(s_LEO_D_MOUSE_ADJUST_LEFT_10015cac);
  return;
}


// ---- FUN_10007301 @ 10007301

void FUN_10007301(void)

{
  FUN_1000730b();
  return;
}


// ---- FUN_1000730b @ 1000730b

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000730b(void)

{
  _DAT_1001e964 = RegisterWindowMessageA(s_LEO_D_MOUSE_ADJUST_MIDDLE_10015cc4);
  return;
}


// ---- FUN_10007320 @ 10007320

void FUN_10007320(void)

{
  FUN_1000732a();
  return;
}


// ---- FUN_1000732a @ 1000732a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000732a(void)

{
  _DAT_1001efe8 = RegisterWindowMessageA(s_LEO_D_STEP_10015ce0);
  return;
}


// ---- FUN_1000733f @ 1000733f

void FUN_1000733f(void)

{
  FUN_10007349();
  return;
}


// ---- FUN_10007349 @ 10007349

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10007349(void)

{
  _DAT_1001eff8 = RegisterWindowMessageA(s_LEO_D_EXECUTE_10015cec);
  return;
}


// ---- FUN_1000735e @ 1000735e

void FUN_1000735e(void)

{
  FUN_10007368();
  return;
}


// ---- FUN_10007368 @ 10007368

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10007368(void)

{
  _DAT_1001e420 = RegisterWindowMessageA(s_LEO_D_GET_COMMAND_10015cfc);
  return;
}


// ---- FUN_1000737d @ 1000737d

void FUN_1000737d(void)

{
  FUN_10007387();
  return;
}


// ---- FUN_10007387 @ 10007387

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10007387(void)

{
  _DAT_1001e018 = RegisterWindowMessageA(s_LEO_D_GET_STATE_10015d10);
  return;
}


// ---- FUN_1000739c @ 1000739c

void FUN_1000739c(void)

{
  FUN_100073a6();
  return;
}


// ---- FUN_100073a6 @ 100073a6

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100073a6(void)

{
  _DAT_1002257c = RegisterWindowMessageA(s_LEO_D_GET_STATE_STRING_10015d20);
  return;
}


// ---- FUN_100073bb @ 100073bb

void FUN_100073bb(void)

{
  FUN_100073c5();
  return;
}


// ---- FUN_100073c5 @ 100073c5

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100073c5(void)

{
  _DAT_100205fc = RegisterWindowMessageA(s_LEO_D_GET_VALUE_10015d38);
  return;
}


// ---- FUN_100073da @ 100073da

void FUN_100073da(void)

{
  FUN_100073e4();
  return;
}


// ---- FUN_100073e4 @ 100073e4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100073e4(void)

{
  _DAT_1001e014 = RegisterWindowMessageA(s_LEO_GET_VALUE_EXTRA_10015d48);
  return;
}


// ---- FUN_100073f9 @ 100073f9

void FUN_100073f9(void)

{
  FUN_10007403();
  return;
}


// ---- FUN_10007403 @ 10007403

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10007403(void)

{
  _DAT_10020c34 = RegisterWindowMessageA(s_LEO_D_SET_FORMAT_MODIFIER_10015d5c);
  return;
}


// ---- FUN_10007418 @ 10007418

void FUN_10007418(void)

{
  FUN_10007422();
  return;
}


// ---- FUN_10007422 @ 10007422

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10007422(void)

{
  _DAT_1001e960 = RegisterWindowMessageA(s_LEO_MACRO_MANAGER_REGISTER_10015d78);
  return;
}


// ---- FUN_10007437 @ 10007437

void FUN_10007437(void)

{
  FUN_10007441();
  return;
}


// ---- FUN_10007441 @ 10007441

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10007441(void)

{
  _DAT_10020c24 = RegisterWindowMessageA(s_LEO_LUT_MANAGER_REGISTER_10015d94);
  return;
}


// ---- FUN_10007456 @ 10007456

void FUN_10007456(void)

{
  FUN_10007460();
  return;
}


// ---- FUN_10007460 @ 10007460

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10007460(void)

{
  _DAT_10020c14 = RegisterWindowMessageA(s_PM_SERVER_READY_10015db0);
  return;
}


// ---- FUN_10007475 @ 10007475

void FUN_10007475(void)

{
  FUN_1000747f();
  return;
}


// ---- FUN_1000747f @ 1000747f

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000747f(void)

{
  _DAT_1001f188 = RegisterWindowMessageA(s_PM_SERVER_LOADING_10015dc0);
  return;
}


// ---- FUN_10007494 @ 10007494

void FUN_10007494(void)

{
  FUN_1000749e();
  return;
}


// ---- FUN_1000749e @ 1000749e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000749e(void)

{
  _DAT_100201a4 = RegisterWindowMessageA(s_PM_REFRESH_WINDOW_10015dd4);
  return;
}


// ---- FUN_100074b3 @ 100074b3

void FUN_100074b3(void)

{
  FUN_100074bd();
  return;
}


// ---- FUN_100074bd @ 100074bd

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100074bd(void)

{
  _DAT_10020088 = RegisterWindowMessageA(s_PM_REGISTER_RETURN_10015de8);
  return;
}


// ---- FUN_100074d2 @ 100074d2

void FUN_100074d2(void)

{
  FUN_100074dc();
  return;
}


// ---- FUN_100074dc @ 100074dc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100074dc(void)

{
  _DAT_1002006c = RegisterWindowMessageA(s_PM_SEM_CLOSE_10015dfc);
  return;
}


// ---- FUN_100074f1 @ 100074f1

void FUN_100074f1(void)

{
  FUN_100074fb();
  return;
}


// ---- FUN_100074fb @ 100074fb

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100074fb(void)

{
  _DAT_10023158 = RegisterWindowMessageA(s_LEO_MOUSE_FINISHED_ADJUST_10015e0c);
  return;
}


// ---- FUN_10007510 @ 10007510

void FUN_10007510(void)

{
  FUN_1000751a();
  return;
}


// ---- FUN_1000751a @ 1000751a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000751a(void)

{
  _DAT_1002008c = RegisterWindowMessageA(s_PM_PARAMETER_NOTIFY_10015e28);
  return;
}


// ---- FUN_1000752f @ 1000752f

void FUN_1000752f(void)

{
  FUN_10007539();
  return;
}


// ---- FUN_10007539 @ 10007539

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10007539(void)

{
  _DAT_10020608 = RegisterWindowMessageA(s_PM_COARSE_FINE_CHANGED_10015e3c);
  return;
}


// ---- FUN_1000754e @ 1000754e

void FUN_1000754e(void)

{
  FUN_10007558();
  return;
}


// ---- FUN_10007558 @ 10007558

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10007558(void)

{
  _DAT_10022578 = RegisterWindowMessageA(s_PM_LICENCE_CHANGED_10015e54);
  return;
}


// ---- FUN_1000756d @ 1000756d

void FUN_1000756d(void)

{
  FUN_10007577();
  return;
}


// ---- FUN_10007577 @ 10007577

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10007577(void)

{
  _DAT_10020bec = RegisterWindowMessageA(s_PM_ZONE_OPMODE_CHANGED_10015e68);
  return;
}


// ---- FUN_1000758c @ 1000758c

void FUN_1000758c(void)

{
  FUN_10007596();
  return;
}


// ---- FUN_10007596 @ 10007596

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10007596(void)

{
  _DAT_1001f1c0 = RegisterWindowMessageA(s_PM_ZONE0_MAG_PIX_CHANGED_10015e80);
  return;
}


// ---- FUN_100075ab @ 100075ab

void FUN_100075ab(void)

{
  FUN_100075b5();
  return;
}


// ---- FUN_100075b5 @ 100075b5

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100075b5(void)

{
  _DAT_100231b0 = RegisterWindowMessageA(s_PM_ZONE1_MAG_PIX_CHANGED_10015e9c);
  return;
}


// ---- FUN_100075ca @ 100075ca

void FUN_100075ca(void)

{
  FUN_100075d4();
  return;
}


// ---- FUN_100075d4 @ 100075d4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100075d4(void)

{
  _DAT_10023154 = RegisterWindowMessageA(s_PM_ZONE2_MAG_PIX_CHANGED_10015eb8);
  return;
}


// ---- FUN_100075e9 @ 100075e9

void FUN_100075e9(void)

{
  FUN_100075f3();
  return;
}


// ---- FUN_100075f3 @ 100075f3

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100075f3(void)

{
  _DAT_1001e954 = RegisterWindowMessageA(s_PM_ZONE3_MAG_PIX_CHANGED_10015ed4);
  return;
}


// ---- FUN_10007608 @ 10007608

void FUN_10007608(void)

{
  FUN_10007612();
  return;
}


// ---- FUN_10007612 @ 10007612

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10007612(void)

{
  _DAT_10020074 = RegisterWindowMessageA(s_PM_KNOB_ASSIGNMENT_10015ef0);
  return;
}


// ---- FUN_10007627 @ 10007627

void FUN_10007627(void)

{
  FUN_10007631();
  return;
}


// ---- FUN_10007631 @ 10007631

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10007631(void)

{
  _DAT_1001eff4 = RegisterWindowMessageA(s_PM_SET_KNOB_ASSIGNMENT_10015f04);
  return;
}


// ---- FUN_10007646 @ 10007646

void FUN_10007646(void)

{
  FUN_10007650();
  return;
}


// ---- FUN_10007650 @ 10007650

void FUN_10007650(void)

{
  DAT_10020c00 = RegisterWindowMessageA(s_PM_IMG_ANNOTATION_TO_FILE_10015f1c);
  return;
}


// ---- FUN_10007665 @ 10007665

void FUN_10007665(void)

{
  FUN_1000766f();
  return;
}


// ---- FUN_1000766f @ 1000766f

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000766f(void)

{
  _DAT_1001e034 = RegisterWindowMessageA(s_PM_IMG_TIFF_RESET_10015f38);
  return;
}


// ---- FUN_10007684 @ 10007684

void FUN_10007684(void)

{
  FUN_1000768e();
  return;
}


// ---- FUN_1000768e @ 1000768e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000768e(void)

{
  _DAT_1002060c = RegisterWindowMessageA(s_PM_IMEX_DONE_10015f4c);
  return;
}


// ---- FUN_100076a3 @ 100076a3

void FUN_100076a3(void)

{
  FUN_100076ad();
  return;
}


// ---- FUN_100076ad @ 100076ad

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100076ad(void)

{
  _DAT_10020c30 = RegisterWindowMessageA(s_PM_IMG_TIFF_PARAM_10015f5c);
  return;
}


// ---- FUN_100076c2 @ 100076c2

void FUN_100076c2(void)

{
  FUN_100076cc();
  return;
}


// ---- FUN_100076cc @ 100076cc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100076cc(void)

{
  _DAT_1001f9a4 = RegisterWindowMessageA(s_PM_IMG_CREATE_TEXT_10015f70);
  return;
}


// ---- FUN_100076e1 @ 100076e1

void FUN_100076e1(void)

{
  FUN_100076eb();
  return;
}


// ---- FUN_100076eb @ 100076eb

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100076eb(void)

{
  _DAT_1001e424 = RegisterWindowMessageA(s_PM_IMG_DELETE_TEXT_10015f84);
  return;
}


// ---- FUN_10007700 @ 10007700

void FUN_10007700(void)

{
  FUN_1000770a();
  return;
}


// ---- FUN_1000770a @ 1000770a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000770a(void)

{
  _DAT_1001f190 = RegisterWindowMessageA(s_LEO_GET_SEM_HWND_10015f98);
  return;
}


// ---- FUN_1000771f @ 1000771f

void FUN_1000771f(void)

{
  FUN_10007729();
  return;
}


// ---- FUN_10007729 @ 10007729

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10007729(void)

{
  _DAT_10020084 = RegisterWindowMessageA(s_PM_IMGMGR_INHIBIT_SPOT_10015fac);
  return;
}


// ---- FUN_1000773e @ 1000773e

void FUN_1000773e(void)

{
  FUN_10007748();
  return;
}


// ---- FUN_10007748 @ 10007748

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10007748(void)

{
  _DAT_100206c0 = RegisterWindowMessageA(s_PM_SPECIAL_FUNCTION_10015fc4);
  return;
}


// ---- FUN_1000775d @ 1000775d

void FUN_1000775d(void)

{
  FUN_10007767();
  return;
}


// ---- FUN_10007767 @ 10007767

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10007767(void)

{
  _DAT_10020198 = RegisterWindowMessageA(s_PM_GET_TAB_COUNT_10015fd8);
  return;
}


// ---- FUN_1000777c @ 1000777c

void FUN_1000777c(void)

{
  FUN_10007786();
  return;
}


// ---- FUN_10007786 @ 10007786

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10007786(void)

{
  _DAT_1001f1ac = RegisterWindowMessageA(s_PM_GET_DLG_COUNT_10015fec);
  return;
}


// ---- FUN_1000779b @ 1000779b

void FUN_1000779b(void)

{
  FUN_100077a5();
  return;
}


// ---- FUN_100077a5 @ 100077a5

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100077a5(void)

{
  _DAT_1001efc4 = RegisterWindowMessageA(s_PM_GET_TAB_NAME_10016000);
  return;
}


// ---- FUN_100077ba @ 100077ba

void FUN_100077ba(void)

{
  FUN_100077c4();
  return;
}


// ---- FUN_100077c4 @ 100077c4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100077c4(void)

{
  _DAT_100201b0 = RegisterWindowMessageA(s_PM_GET_DLG_NAME_10016010);
  return;
}


// ---- FUN_100077d9 @ 100077d9

void FUN_100077d9(void)

{
  FUN_100077e3();
  return;
}


// ---- FUN_100077e3 @ 100077e3

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100077e3(void)

{
  _DAT_1001f1a0 = RegisterWindowMessageA(s_PM_SHOW_TABS_DIALOGS_10016020);
  return;
}


// ---- FUN_100077f8 @ 100077f8

void FUN_100077f8(void)

{
  FUN_10007802();
  return;
}


// ---- FUN_10007802 @ 10007802

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10007802(void)

{
  _DAT_100206a0 = RegisterWindowMessageA(s_PM_GET_MACRO_LIB_ISSUE_10016038);
  return;
}


// ---- FUN_10007817 @ 10007817

void FUN_10007817(void)

{
  FUN_10007821();
  return;
}


// ---- FUN_10007821 @ 10007821

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10007821(void)

{
  _DAT_1001e40c = RegisterWindowMessageA(s_PM_MACRO_CONDITIONS_SAVED_10016050);
  return;
}


// ---- FUN_10007836 @ 10007836

void FUN_10007836(void)

{
  FUN_10007840();
  return;
}


// ---- FUN_10007840 @ 10007840

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10007840(void)

{
  _DAT_1001efbc = RegisterWindowMessageA(s_PM_STEP_MACRO_1001606c);
  return;
}


// ---- FUN_10007855 @ 10007855

void FUN_10007855(void)

{
  FUN_1000785f();
  return;
}


// ---- FUN_1000785f @ 1000785f

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000785f(void)

{
  _DAT_10022588 = RegisterWindowMessageA(s_PM_CONTINUE_MACRO_1001607c);
  return;
}


// ---- FUN_10007874 @ 10007874

void FUN_10007874(void)

{
  FUN_1000787e();
  return;
}


// ---- FUN_1000787e @ 1000787e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000787e(void)

{
  _DAT_1001edd8 = RegisterWindowMessageA(s_PM_EXECUTE_LIBRARY_MACRO_10016090);
  return;
}


// ---- FUN_10007893 @ 10007893

void FUN_10007893(void)

{
  FUN_1000789d();
  return;
}


// ---- FUN_1000789d @ 1000789d

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000789d(void)

{
  _DAT_1001e048 = RegisterWindowMessageA(s_PM_EXECUTE_FILE_MACRO_100160ac);
  return;
}


// ---- FUN_100078b2 @ 100078b2

void FUN_100078b2(void)

{
  FUN_100078bc();
  return;
}


// ---- FUN_100078bc @ 100078bc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100078bc(void)

{
  _DAT_10020064 = RegisterWindowMessageA(s_PM_HALT_MACRO_100160c4);
  return;
}


// ---- FUN_100078d1 @ 100078d1

void FUN_100078d1(void)

{
  FUN_100078db();
  return;
}


// ---- FUN_100078db @ 100078db

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100078db(void)

{
  _DAT_1001efe4 = RegisterWindowMessageA(s_PM_PAUSE_MACRO_100160d4);
  return;
}


// ---- FUN_100078f0 @ 100078f0

void FUN_100078f0(void)

{
  FUN_100078fa();
  return;
}


// ---- FUN_100078fa @ 100078fa

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100078fa(void)

{
  _DAT_10020070 = RegisterWindowMessageA(s_PM_MACRO_STATUS_100160e4);
  return;
}


// ---- FUN_1000790f @ 1000790f

void FUN_1000790f(void)

{
  FUN_10007919();
  return;
}


// ---- FUN_10007919 @ 10007919

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10007919(void)

{
  _DAT_100201a0 = RegisterWindowMessageA(s_PM_MACRO_EDITOR_100160f4);
  return;
}


// ---- FUN_1000792e @ 1000792e

void FUN_1000792e(void)

{
  FUN_10007938();
  return;
}


// ---- FUN_10007938 @ 10007938

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10007938(void)

{
  _DAT_1001e00c = RegisterWindowMessageA(s_PM_SAVE_SYSTEM_CONDITIONS_10016104);
  return;
}


// ---- FUN_1000794d @ 1000794d

void FUN_1000794d(void)

{
  FUN_10007957();
  return;
}


// ---- FUN_10007957 @ 10007957

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10007957(void)

{
  _DAT_10020bf4 = RegisterWindowMessageA(s_PM_SAVE_STATE_10016120);
  return;
}


// ---- FUN_1000796c @ 1000796c

void FUN_1000796c(void)

{
  FUN_10007976();
  return;
}


// ---- FUN_10007976 @ 10007976

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10007976(void)

{
  _DAT_1001f1b0 = RegisterWindowMessageA(s_PM_LOAD_STATE_10016130);
  return;
}


// ---- FUN_1000798b @ 1000798b

void FUN_1000798b(void)

{
  FUN_10007995();
  return;
}


// ---- FUN_10007995 @ 10007995

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10007995(void)

{
  _DAT_100201a8 = RegisterWindowMessageA(s_PM_STANDARD_CONDITIONS_10016140);
  return;
}


// ---- FUN_100079aa @ 100079aa

void FUN_100079aa(void)

{
  FUN_100079b4();
  return;
}


// ---- FUN_100079b4 @ 100079b4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100079b4(void)

{
  _DAT_100206c8 = RegisterWindowMessageA(s_PM_RESTORE_SYSTEM_CONDITIONS_10016158);
  return;
}


// ---- FUN_100079c9 @ 100079c9

void FUN_100079c9(void)

{
  FUN_100079d3();
  return;
}


// ---- FUN_100079d3 @ 100079d3

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100079d3(void)

{
  _DAT_1001f000 = RegisterWindowMessageA(s_PM_EXECUTING_LINE_10016178);
  return;
}


// ---- FUN_100079e8 @ 100079e8

void FUN_100079e8(void)

{
  FUN_100079f2();
  return;
}


// ---- FUN_100079f2 @ 100079f2

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100079f2(void)

{
  _DAT_1001e3f4 = RegisterWindowMessageA(s_PM_REVIEW_STATE_1001618c);
  return;
}


// ---- FUN_10007a07 @ 10007a07

void FUN_10007a07(void)

{
  FUN_10007a11();
  return;
}


// ---- FUN_10007a11 @ 10007a11

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10007a11(void)

{
  _DAT_1001e02c = RegisterWindowMessageA(s_PM_SP_MOUSE_ADJUSTMENT_1001619c);
  return;
}


// ---- FUN_10007a26 @ 10007a26

void FUN_10007a26(void)

{
  FUN_10007a30();
  return;
}


// ---- FUN_10007a30 @ 10007a30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10007a30(void)

{
  _DAT_100201bc = RegisterWindowMessageA(s_PM_QUERY_SERVER_100161b4);
  return;
}


// ---- FUN_10007a45 @ 10007a45

void FUN_10007a45(void)

{
  FUN_10007a4f();
  return;
}


// ---- FUN_10007a4f @ 10007a4f

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10007a4f(void)

{
  _DAT_100201c8 = RegisterWindowMessageA(s_PM_QUERY_CLIENT_COUNT_100161c4);
  return;
}


// ---- FUN_10007a64 @ 10007a64

void FUN_10007a64(void)

{
  FUN_10007a6e();
  return;
}


// ---- FUN_10007a6e @ 10007a6e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10007a6e(void)

{
  _DAT_10020c44 = RegisterWindowMessageA(s_PM_REGISTER_100161dc);
  return;
}


// ---- FUN_10007a83 @ 10007a83

void FUN_10007a83(void)

{
  FUN_10007a8d();
  return;
}


// ---- FUN_10007a8d @ 10007a8d

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10007a8d(void)

{
  _DAT_1002066c = RegisterWindowMessageA(s_PM_REGISTER_CONTROLLER_100161e8);
  return;
}


// ---- FUN_10007aa2 @ 10007aa2

void FUN_10007aa2(void)

{
  FUN_10007aac();
  return;
}


// ---- FUN_10007aac @ 10007aac

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10007aac(void)

{
  _DAT_1001ef08 = RegisterWindowMessageA(s_PM_REGISTER_USERNAME_10016200);
  return;
}


// ---- FUN_10007ac1 @ 10007ac1

void FUN_10007ac1(void)

{
  FUN_10007acb();
  return;
}


// ---- FUN_10007acb @ 10007acb

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10007acb(void)

{
  _DAT_1002069c = RegisterWindowMessageA(s_PM_SEM_REGISTER_10016218);
  return;
}


// ---- FUN_10007ae0 @ 10007ae0

void FUN_10007ae0(void)

{
  FUN_10007aea();
  return;
}


// ---- FUN_10007aea @ 10007aea

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10007aea(void)

{
  _DAT_100206cc = RegisterWindowMessageA(s_PM_REVOKE_REGISTRATION_10016228);
  return;
}


// ---- FUN_10007aff @ 10007aff

void FUN_10007aff(void)

{
  FUN_10007b09();
  return;
}


// ---- FUN_10007b09 @ 10007b09

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10007b09(void)

{
  _DAT_1001f17c = RegisterWindowMessageA(s_PM_MOUSE_ADJUSTABLE_10016240);
  return;
}


// ---- FUN_10007b1e @ 10007b1e

void FUN_10007b1e(void)

{
  FUN_10007b28();
  return;
}


// ---- FUN_10007b28 @ 10007b28

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10007b28(void)

{
  _DAT_1001e03c = RegisterWindowMessageA(s_PM_LOG_OFF_10016254);
  return;
}


// ---- FUN_10007b3d @ 10007b3d

void FUN_10007b3d(void)

{
  FUN_10007b47();
  return;
}


// ---- FUN_10007b47 @ 10007b47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10007b47(void)

{
  _DAT_1001ef28 = RegisterWindowMessageA(s_PM_LOG_ON_10016260);
  return;
}


// ---- FUN_10007b5c @ 10007b5c

void FUN_10007b5c(void)

{
  FUN_10007b66();
  return;
}


// ---- FUN_10007b66 @ 10007b66

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10007b66(void)

{
  _DAT_1001e020 = RegisterWindowMessageA(s_PM_GET_SERIAL_NUMBER_1001626c);
  return;
}


// ---- FUN_10007b7b @ 10007b7b

void FUN_10007b7b(void)

{
  FUN_10007b85();
  return;
}


// ---- FUN_10007b85 @ 10007b85

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10007b85(void)

{
  _DAT_10020c20 = RegisterWindowMessageA(s_PM_GET_DIRECTORIES_10016284);
  return;
}


// ---- FUN_10007b9a @ 10007b9a

void FUN_10007b9a(void)

{
  FUN_10007ba4();
  return;
}


// ---- FUN_10007ba4 @ 10007ba4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10007ba4(void)

{
  _DAT_1001f184 = RegisterWindowMessageA(s_PM_GET_COMMAND_GROUP_10016298);
  return;
}


// ---- FUN_10007bb9 @ 10007bb9

void FUN_10007bb9(void)

{
  FUN_10007bc3();
  return;
}


// ---- FUN_10007bc3 @ 10007bc3

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10007bc3(void)

{
  _DAT_1001e41c = RegisterWindowMessageA(s_PM_GET_STRING_100162b0);
  return;
}


// ---- FUN_10007bd8 @ 10007bd8

void FUN_10007bd8(void)

{
  FUN_10007be2();
  return;
}


// ---- FUN_10007be2 @ 10007be2

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10007be2(void)

{
  _DAT_10020c04 = RegisterWindowMessageA(s_PM_GET_NAME_100162c0);
  return;
}


// ---- FUN_10007bf7 @ 10007bf7

void FUN_10007bf7(void)

{
  FUN_10007c01();
  return;
}


// ---- FUN_10007c01 @ 10007c01

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10007c01(void)

{
  _DAT_1001efc8 = RegisterWindowMessageA(s_PM_GET_MNEMONIC_100162cc);
  return;
}


// ---- FUN_10007c16 @ 10007c16

void FUN_10007c16(void)

{
  FUN_10007c20();
  return;
}


// ---- FUN_10007c20 @ 10007c20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10007c20(void)

{
  _DAT_100206d0 = RegisterWindowMessageA(s_PM_GET_VALUE_100162dc);
  return;
}


// ---- FUN_10007c35 @ 10007c35

void FUN_10007c35(void)

{
  FUN_10007c3f();
  return;
}


// ---- FUN_10007c3f @ 10007c3f

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10007c3f(void)

{
  _DAT_1001efd8 = RegisterWindowMessageA(s_PM_SET_BEAMSHIFT_DISTANCE_100162ec);
  return;
}


// ---- FUN_10007c54 @ 10007c54

void FUN_10007c54(void)

{
  FUN_10007c5e();
  return;
}


// ---- FUN_10007c5e @ 10007c5e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10007c5e(void)

{
  _DAT_1001e3fc = RegisterWindowMessageA(s_PM_STAGE_GOTO_10016308);
  return;
}


// ---- FUN_10007c73 @ 10007c73

void FUN_10007c73(void)

{
  FUN_10007c7d();
  return;
}


// ---- FUN_10007c7d @ 10007c7d

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10007c7d(void)

{
  _DAT_1001e94c = RegisterWindowMessageA(s_PM_GET_STAGE_POSITION_10016318);
  return;
}


// ---- FUN_10007c92 @ 10007c92

void FUN_10007c92(void)

{
  FUN_10007c9c();
  return;
}


// ---- FUN_10007c9c @ 10007c9c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10007c9c(void)

{
  _DAT_1001e958 = RegisterWindowMessageA(s_PM_GET_VALUE_AS_STRING_10016330);
  return;
}


// ---- FUN_10007cb1 @ 10007cb1

void FUN_10007cb1(void)

{
  FUN_10007cbb();
  return;
}


// ---- FUN_10007cbb @ 10007cbb

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10007cbb(void)

{
  _DAT_1001ef00 = RegisterWindowMessageA(s_PM_GET_STATEVALUE_AS_ENGLISH_STR_10016348);
  return;
}


// ---- FUN_10007cd0 @ 10007cd0

void FUN_10007cd0(void)

{
  FUN_10007cda();
  return;
}


// ---- FUN_10007cda @ 10007cda

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10007cda(void)

{
  _DAT_1001e3d8 = RegisterWindowMessageA(s_PM_GET_ERROR_1001636c);
  return;
}


// ---- FUN_10007cef @ 10007cef

void FUN_10007cef(void)

{
  FUN_10007cf9();
  return;
}


// ---- FUN_10007cf9 @ 10007cf9

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10007cf9(void)

{
  _DAT_1001efdc = RegisterWindowMessageA(s_PM_NEXT_MAG_TABLE_1001637c);
  return;
}


// ---- FUN_10007d0e @ 10007d0e

void FUN_10007d0e(void)

{
  FUN_10007d18();
  return;
}


// ---- FUN_10007d18 @ 10007d18

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10007d18(void)

{
  _DAT_10020674 = RegisterWindowMessageA(s_PM_END_MAG_TABLE_10016390);
  return;
}


// ---- FUN_10007d2d @ 10007d2d

void FUN_10007d2d(void)

{
  FUN_10007d37();
  return;
}


// ---- FUN_10007d37 @ 10007d37

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10007d37(void)

{
  _DAT_1001eddc = RegisterWindowMessageA(s_PM_CENTRE_FEATURE_ORIGINAL_MAG_100163a4);
  return;
}


// ---- FUN_10007d4c @ 10007d4c

void FUN_10007d4c(void)

{
  FUN_10007d56();
  return;
}


// ---- FUN_10007d56 @ 10007d56

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10007d56(void)

{
  _DAT_1001dffc = RegisterWindowMessageA(s_PM_GET_MACHINE_TYPE_100163c4);
  return;
}


// ---- FUN_10007d6b @ 10007d6b

void FUN_10007d6b(void)

{
  FUN_10007d75();
  return;
}


// ---- FUN_10007d75 @ 10007d75

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10007d75(void)

{
  _DAT_1001e004 = RegisterWindowMessageA(s_PM_GET_HANDLES_100163d8);
  return;
}


// ---- FUN_10007d8a @ 10007d8a

void FUN_10007d8a(void)

{
  FUN_10007d94();
  return;
}


// ---- FUN_10007d94 @ 10007d94

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10007d94(void)

{
  _DAT_1001e434 = RegisterWindowMessageA(s_PM_GET_STATES_100163e8);
  return;
}


// ---- FUN_10007da9 @ 10007da9

void FUN_10007da9(void)

{
  FUN_10007db3();
  return;
}


// ---- FUN_10007db3 @ 10007db3

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10007db3(void)

{
  _DAT_100206b0 = RegisterWindowMessageA(s_PM_GET_LOW_LIMIT_100163f8);
  return;
}


// ---- FUN_10007dc8 @ 10007dc8

void FUN_10007dc8(void)

{
  FUN_10007dd2();
  return;
}


// ---- FUN_10007dd2 @ 10007dd2

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10007dd2(void)

{
  _DAT_100206c4 = RegisterWindowMessageA(s_PM_GET_LICENCE_1001640c);
  return;
}


// ---- FUN_10007de7 @ 10007de7

void FUN_10007de7(void)

{
  FUN_10007df1();
  return;
}


// ---- FUN_10007df1 @ 10007df1

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10007df1(void)

{
  _DAT_1001f244 = RegisterWindowMessageA(s_PM_GET_PARAM_GROUP_1001641c);
  return;
}


// ---- FUN_10007e06 @ 10007e06

void FUN_10007e06(void)

{
  FUN_10007e10();
  return;
}


// ---- FUN_10007e10 @ 10007e10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10007e10(void)

{
  _DAT_1001efcc = RegisterWindowMessageA(s_PM_GET_PARAM_COUNT_10016430);
  return;
}


// ---- FUN_10007e25 @ 10007e25

void FUN_10007e25(void)

{
  FUN_10007e2f();
  return;
}


// ---- FUN_10007e2f @ 10007e2f

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10007e2f(void)

{
  _DAT_1001e428 = RegisterWindowMessageA(s_PM_GET_XY_VALUES_10016444);
  return;
}


// ---- FUN_10007e44 @ 10007e44

void FUN_10007e44(void)

{
  FUN_10007e4e();
  return;
}


// ---- FUN_10007e4e @ 10007e4e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10007e4e(void)

{
  _DAT_100201b4 = RegisterWindowMessageA(s_PM_SET_XY_VALUES_10016458);
  return;
}


// ---- FUN_10007e63 @ 10007e63

void FUN_10007e63(void)

{
  FUN_10007e6d();
  return;
}


// ---- FUN_10007e6d @ 10007e6d

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10007e6d(void)

{
  _DAT_1001efc0 = RegisterWindowMessageA(s_PM_GET_UNITS_STRING_1001646c);
  return;
}


// ---- FUN_10007e82 @ 10007e82

void FUN_10007e82(void)

{
  FUN_10007e8c();
  return;
}


// ---- FUN_10007e8c @ 10007e8c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10007e8c(void)

{
  _DAT_10023164 = RegisterWindowMessageA(s_PM_GET_UNSCALED_VALUE_10016480);
  return;
}


// ---- FUN_10007ea1 @ 10007ea1

void FUN_10007ea1(void)

{
  FUN_10007eab();
  return;
}


// ---- FUN_10007eab @ 10007eab

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10007eab(void)

{
  _DAT_1001f1dc = RegisterWindowMessageA(s_PM_GET_SCALED_VALUE_10016498);
  return;
}


// ---- FUN_10007ec0 @ 10007ec0

void FUN_10007ec0(void)

{
  FUN_10007eca();
  return;
}


// ---- FUN_10007eca @ 10007eca

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10007eca(void)

{
  _DAT_10023150 = RegisterWindowMessageA(s_PM_SET_VALUE_100164ac);
  return;
}


// ---- FUN_10007edf @ 10007edf

void FUN_10007edf(void)

{
  FUN_10007ee9();
  return;
}


// ---- FUN_10007ee9 @ 10007ee9

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10007ee9(void)

{
  _DAT_100201c0 = RegisterWindowMessageA(s_PM_SET_COARSE_100164bc);
  return;
}


// ---- FUN_10007efe @ 10007efe

void FUN_10007efe(void)

{
  FUN_10007f08();
  return;
}


// ---- FUN_10007f08 @ 10007f08

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10007f08(void)

{
  _DAT_100205f4 = RegisterWindowMessageA(s_PM_GET_COARSE_100164cc);
  return;
}


// ---- FUN_10007f1d @ 10007f1d

void FUN_10007f1d(void)

{
  FUN_10007f27();
  return;
}


// ---- FUN_10007f27 @ 10007f27

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10007f27(void)

{
  _DAT_100205e4 = RegisterWindowMessageA(s_PM_SET_NOTIFY_100164dc);
  return;
}


// ---- FUN_10007f3c @ 10007f3c

void FUN_10007f3c(void)

{
  FUN_10007f46();
  return;
}


// ---- FUN_10007f46 @ 10007f46

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10007f46(void)

{
  _DAT_10020600 = RegisterWindowMessageA(s_PM_SET_USER_MODE_100164ec);
  return;
}


// ---- FUN_10007f5b @ 10007f5b

void FUN_10007f5b(void)

{
  FUN_10007f65();
  return;
}


// ---- FUN_10007f65 @ 10007f65

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10007f65(void)

{
  _DAT_100231b4 = RegisterWindowMessageA(s_PM_LEFT_MOUSE_ADJUST_SETUP_10016500);
  return;
}


// ---- FUN_10007f7a @ 10007f7a

void FUN_10007f7a(void)

{
  FUN_10007f84();
  return;
}


// ---- FUN_10007f84 @ 10007f84

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10007f84(void)

{
  _DAT_1001f00c = RegisterWindowMessageA(s_PM_RIGHT_MOUSE_ADJUST_SETUP_1001651c);
  return;
}


// ---- FUN_10007f99 @ 10007f99

void FUN_10007f99(void)

{
  FUN_10007fa3();
  return;
}


// ---- FUN_10007fa3 @ 10007fa3

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10007fa3(void)

{
  _DAT_10020c38 = RegisterWindowMessageA(s_PM_MOUSE_ADJUST_START_10016538);
  return;
}


// ---- FUN_10007fb8 @ 10007fb8

void FUN_10007fb8(void)

{
  FUN_10007fc2();
  return;
}


// ---- FUN_10007fc2 @ 10007fc2

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10007fc2(void)

{
  _DAT_10023168 = RegisterWindowMessageA(s_PM_IS_ENABLED_10016550);
  return;
}


// ---- FUN_10007fd7 @ 10007fd7

void FUN_10007fd7(void)

{
  FUN_10007fe1();
  return;
}


// ---- FUN_10007fe1 @ 10007fe1

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10007fe1(void)

{
  _DAT_100205dc = RegisterWindowMessageA(s_PM_IS_Y_OF_XY_10016560);
  return;
}


// ---- FUN_10007ff6 @ 10007ff6

void FUN_10007ff6(void)

{
  FUN_10008000();
  return;
}


// ---- FUN_10008000 @ 10008000

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10008000(void)

{
  _DAT_100231ac = RegisterWindowMessageA(s_PM_IS_VECTOR_10016570);
  return;
}


// ---- FUN_10008015 @ 10008015

void FUN_10008015(void)

{
  FUN_1000801f();
  return;
}


// ---- FUN_1000801f @ 1000801f

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000801f(void)

{
  _DAT_100205f0 = RegisterWindowMessageA(s_PM_IS_VISIBLE_10016580);
  return;
}


// ---- FUN_10008034 @ 10008034

void FUN_10008034(void)

{
  FUN_1000803e();
  return;
}


// ---- FUN_1000803e @ 1000803e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000803e(void)

{
  _DAT_1001f194 = RegisterWindowMessageA(s_PM_IS_READ_ONLY_10016590);
  return;
}


// ---- FUN_10008053 @ 10008053

void FUN_10008053(void)

{
  FUN_1000805d();
  return;
}


// ---- FUN_1000805d @ 1000805d

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000805d(void)

{
  _DAT_100201cc = RegisterWindowMessageA(s_PM_IS_ENTRY_ONLY_100165a0);
  return;
}


// ---- FUN_10008072 @ 10008072

void FUN_10008072(void)

{
  FUN_1000807c();
  return;
}


// ---- FUN_1000807c @ 1000807c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000807c(void)

{
  _DAT_1001f24c = RegisterWindowMessageA(s_PM_IS_READ_WRITE_100165b4);
  return;
}


// ---- FUN_10008091 @ 10008091

void FUN_10008091(void)

{
  FUN_1000809b();
  return;
}


// ---- FUN_1000809b @ 1000809b

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000809b(void)

{
  _DAT_10020dec = RegisterWindowMessageA(s_PM_PARAMETER_CLICK_100165c8);
  return;
}


// ---- FUN_100080b0 @ 100080b0

void FUN_100080b0(void)

{
  FUN_100080ba();
  return;
}


// ---- FUN_100080ba @ 100080ba

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100080ba(void)

{
  _DAT_100206a4 = RegisterWindowMessageA(s_PM_BUTTON_PRIVILEDGE_100165dc);
  return;
}


// ---- FUN_100080cf @ 100080cf

void FUN_100080cf(void)

{
  FUN_100080d9();
  return;
}


// ---- FUN_100080d9 @ 100080d9

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100080d9(void)

{
  _DAT_10020c08 = RegisterWindowMessageA(s_PM_COMMON_TOOLBAR_FLAG_100165f4);
  return;
}


// ---- FUN_100080ee @ 100080ee

void FUN_100080ee(void)

{
  FUN_100080f8();
  return;
}


// ---- FUN_100080f8 @ 100080f8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100080f8(void)

{
  _DAT_100206d4 = RegisterWindowMessageA(s_PM_SERVER_HELP_1001660c);
  return;
}


// ---- FUN_1000810d @ 1000810d

void FUN_1000810d(void)

{
  FUN_10008117();
  return;
}


// ---- FUN_10008117 @ 10008117

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10008117(void)

{
  _DAT_1001e3e4 = RegisterWindowMessageA(s_PM_PARAMETER_DOUBLE_CLICK_1001661c);
  return;
}


// ---- FUN_1000812c @ 1000812c

void FUN_1000812c(void)

{
  FUN_10008136();
  return;
}


// ---- FUN_10008136 @ 10008136

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10008136(void)

{
  _DAT_1001e948 = RegisterWindowMessageA(s_PM_MENU_MORE_CLICK_10016638);
  return;
}


// ---- FUN_1000814b @ 1000814b

void FUN_1000814b(void)

{
  FUN_10008155();
  return;
}


// ---- FUN_10008155 @ 10008155

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10008155(void)

{
  _DAT_1002007c = RegisterWindowMessageA(s_PM_PARAMETER_RIGHT_CLICK_1001664c);
  return;
}


// ---- FUN_1000816a @ 1000816a

void FUN_1000816a(void)

{
  FUN_10008174();
  return;
}


// ---- FUN_10008174 @ 10008174

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10008174(void)

{
  _DAT_100231a8 = RegisterWindowMessageA(s_PM_TRANSLATE_MNEMONIC_10016668);
  return;
}


// ---- FUN_10008189 @ 10008189

void FUN_10008189(void)

{
  FUN_10008193();
  return;
}


// ---- FUN_10008193 @ 10008193

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10008193(void)

{
  _DAT_1001f1c4 = RegisterWindowMessageA(s_PM_EXECUTE_COMMAND_10016680);
  return;
}


// ---- FUN_100081a8 @ 100081a8

void FUN_100081a8(void)

{
  FUN_100081b2();
  return;
}


// ---- FUN_100081b2 @ 100081b2

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100081b2(void)

{
  _DAT_10020c10 = RegisterWindowMessageA(s_PM_STEP_VALUE_10016694);
  return;
}


// ---- FUN_100081c7 @ 100081c7

void FUN_100081c7(void)

{
  FUN_100081d1();
  return;
}


// ---- FUN_100081d1 @ 100081d1

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100081d1(void)

{
  _DAT_1001ef04 = RegisterWindowMessageA(s_PM_HELP_MODE_100166a4);
  return;
}


// ---- FUN_100081e6 @ 100081e6

void FUN_100081e6(void)

{
  FUN_100081f0();
  return;
}


// ---- FUN_100081f0 @ 100081f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100081f0(void)

{
  _DAT_1001f1d0 = RegisterWindowMessageA(s_PM_SERVER_MESSAGE_100166b4);
  return;
}


// ---- FUN_10008205 @ 10008205

void FUN_10008205(void)

{
  FUN_1000820f();
  return;
}


// ---- FUN_1000820f @ 1000820f

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000820f(void)

{
  _DAT_10020698 = RegisterWindowMessageA(s_PM_AVAILABLE_MACROS_100166c8);
  return;
}


// ---- FUN_10008224 @ 10008224

void FUN_10008224(void)

{
  FUN_1000822e();
  return;
}


// ---- FUN_1000822e @ 1000822e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000822e(void)

{
  _DAT_10022580 = RegisterWindowMessageA(s_PM_SET_USER_PREFERENCES_100166dc);
  return;
}


// ---- FUN_10008243 @ 10008243

void FUN_10008243(void)

{
  FUN_1000824d();
  return;
}


// ---- FUN_1000824d @ 1000824d

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000824d(void)

{
  _DAT_100201c4 = RegisterWindowMessageA(s_PM_USER_PREFERENCES_CHANGED_100166f4);
  return;
}


// ---- FUN_10008262 @ 10008262

void FUN_10008262(void)

{
  FUN_1000826c();
  return;
}


// ---- FUN_1000826c @ 1000826c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000826c(void)

{
  _DAT_1001f1c8 = RegisterWindowMessageA(s_PM_NEXT_VP_UNITS_10016710);
  return;
}


// ---- FUN_10008281 @ 10008281

void FUN_10008281(void)

{
  FUN_1000828b();
  return;
}


// ---- FUN_1000828b @ 1000828b

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000828b(void)

{
  _DAT_100201ac = RegisterWindowMessageA(s_PM_NEXT_PRESSURE_UNITS_10016724);
  return;
}


// ---- FUN_100082a0 @ 100082a0

void FUN_100082a0(void)

{
  FUN_100082aa();
  return;
}


// ---- FUN_100082aa @ 100082aa

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100082aa(void)

{
  _DAT_100205e0 = RegisterWindowMessageA(s_PM_GET_USER_PREFERENCES_1001673c);
  return;
}


// ---- FUN_100082bf @ 100082bf

void FUN_100082bf(void)

{
  FUN_100082c9();
  return;
}


// ---- FUN_100082c9 @ 100082c9

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100082c9(void)

{
  _DAT_1001eef8 = RegisterWindowMessageA(s_PM_SET_APERTURE_TABLE_10016754);
  return;
}


// ---- FUN_100082de @ 100082de

void FUN_100082de(void)

{
  FUN_100082e8();
  return;
}


// ---- FUN_100082e8 @ 100082e8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100082e8(void)

{
  _DAT_1001efb8 = RegisterWindowMessageA(s_PM_GET_APERTURE_TABLE_1001676c);
  return;
}


// ---- FUN_100082fd @ 100082fd

void FUN_100082fd(void)

{
  FUN_10008307();
  return;
}


// ---- FUN_10008307 @ 10008307

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10008307(void)

{
  _DAT_1001f230 = RegisterWindowMessageA(s_PM_APERTURE_TABLE_CHANGED_10016784);
  return;
}


// ---- FUN_1000831c @ 1000831c

void FUN_1000831c(void)

{
  FUN_10008326();
  return;
}


// ---- FUN_10008326 @ 10008326

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10008326(void)

{
  _DAT_1001f174 = RegisterWindowMessageA(s_PM_LUT_EDITOR_100167a0);
  return;
}


// ---- FUN_1000833b @ 1000833b

void FUN_1000833b(void)

{
  FUN_10008345();
  return;
}


// ---- FUN_10008345 @ 10008345

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10008345(void)

{
  _DAT_100205e8 = RegisterWindowMessageA(s_PM_SET_LUT_POINT_100167b0);
  return;
}


// ---- FUN_1000835a @ 1000835a

void FUN_1000835a(void)

{
  FUN_10008364();
  return;
}


// ---- FUN_10008364 @ 10008364

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10008364(void)

{
  _DAT_1001e404 = RegisterWindowMessageA(s_PM_SET_LUT_RGB_100167c4);
  return;
}


// ---- FUN_10008379 @ 10008379

void FUN_10008379(void)

{
  FUN_10008383();
  return;
}


// ---- FUN_10008383 @ 10008383

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10008383(void)

{
  _DAT_1001e3d4 = RegisterWindowMessageA(s_PM_SET_LUT_COLOR_100167d4);
  return;
}


// ---- FUN_10008398 @ 10008398

void FUN_10008398(void)

{
  FUN_100083a2();
  return;
}


// ---- FUN_100083a2 @ 100083a2

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100083a2(void)

{
  _DAT_1001f240 = RegisterWindowMessageA(s_PM_SET_LUT_BC_100167e8);
  return;
}


// ---- FUN_100083b7 @ 100083b7

void FUN_100083b7(void)

{
  FUN_100083c1();
  return;
}


// ---- FUN_100083c1 @ 100083c1

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100083c1(void)

{
  _DAT_10023184 = RegisterWindowMessageA(s_PM_SET_LUT_INVERSE_100167f8);
  return;
}


// ---- FUN_100083d6 @ 100083d6

void FUN_100083d6(void)

{
  FUN_100083e0();
  return;
}


// ---- FUN_100083e0 @ 100083e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100083e0(void)

{
  _DAT_10023188 = RegisterWindowMessageA(s_PM_SET_LUT_LINEAR_1001680c);
  return;
}


// ---- FUN_100083f5 @ 100083f5

void FUN_100083f5(void)

{
  FUN_100083ff();
  return;
}


// ---- FUN_100083ff @ 100083ff

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100083ff(void)

{
  _DAT_10023180 = RegisterWindowMessageA(s_PM_SET_LUT_GAMMA_10016820);
  return;
}


// ---- FUN_10008414 @ 10008414

void FUN_10008414(void)

{
  FUN_1000841e();
  return;
}


// ---- FUN_1000841e @ 1000841e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000841e(void)

{
  _DAT_10022570 = RegisterWindowMessageA(s_PM_DRAW_GREY_WEDGE_10016834);
  return;
}


// ---- FUN_10008433 @ 10008433

void FUN_10008433(void)

{
  FUN_1000843d();
  return;
}


// ---- FUN_1000843d @ 1000843d

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000843d(void)

{
  _DAT_100206b8 = RegisterWindowMessageA(s_PM_GET_IMAGE_PIXEL_10016848);
  return;
}


// ---- FUN_10008452 @ 10008452

void FUN_10008452(void)

{
  FUN_1000845c();
  return;
}


// ---- FUN_1000845c @ 1000845c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000845c(void)

{
  _DAT_1001e044 = RegisterWindowMessageA(s_PM_RGB_READ_1001685c);
  return;
}


// ---- FUN_10008471 @ 10008471

void FUN_10008471(void)

{
  FUN_1000847b();
  return;
}


// ---- FUN_1000847b @ 1000847b

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000847b(void)

{
  _DAT_1001dff8 = RegisterWindowMessageA(s_PM_LUT_LOAD_10016868);
  return;
}


// ---- FUN_10008490 @ 10008490

void FUN_10008490(void)

{
  FUN_1000849a();
  return;
}


// ---- FUN_1000849a @ 1000849a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000849a(void)

{
  _DAT_10020c2c = RegisterWindowMessageA(s_PM_LUT_READ_10016874);
  return;
}


// ---- FUN_100084af @ 100084af

void FUN_100084af(void)

{
  FUN_100084b9();
  return;
}


// ---- FUN_100084b9 @ 100084b9

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100084b9(void)

{
  _DAT_10020bfc = RegisterWindowMessageA(s_PM_READ_COLOR_10016880);
  return;
}


// ---- FUN_100084ce @ 100084ce

void FUN_100084ce(void)

{
  FUN_100084d8();
  return;
}


// ---- FUN_100084d8 @ 100084d8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100084d8(void)

{
  _DAT_1001f234 = RegisterWindowMessageA(s_PM_LUT_FILL_10016890);
  return;
}


// ---- FUN_100084ed @ 100084ed

void FUN_100084ed(void)

{
  FUN_100084f7();
  return;
}


// ---- FUN_100084f7 @ 100084f7

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100084f7(void)

{
  _DAT_100205f8 = RegisterWindowMessageA(s_PM_LUT_QLIN_1001689c);
  return;
}


// ---- FUN_1000850c @ 1000850c

void FUN_1000850c(void)

{
  FUN_10008516();
  return;
}


// ---- FUN_10008516 @ 10008516

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10008516(void)

{
  _DAT_10020be8 = RegisterWindowMessageA(s_PM_LUT_QINV_100168a8);
  return;
}


// ---- FUN_1000852b @ 1000852b

void FUN_1000852b(void)

{
  FUN_10008535();
  return;
}


// ---- FUN_10008535 @ 10008535

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10008535(void)

{
  _DAT_10020604 = RegisterWindowMessageA(s_PM_LUT_SAVE_100168b4);
  return;
}


// ---- FUN_1000854a @ 1000854a

void FUN_1000854a(void)

{
  FUN_10008554();
  return;
}


// ---- FUN_10008554 @ 10008554

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10008554(void)

{
  _DAT_1002258c = RegisterWindowMessageA(s_PM_LUT_RESTORE_100168c0);
  return;
}


// ---- FUN_10008569 @ 10008569

void FUN_10008569(void)

{
  FUN_10008573();
  return;
}


// ---- FUN_10008573 @ 10008573

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10008573(void)

{
  _DAT_10022590 = RegisterWindowMessageA(s_PM_READ_COLOR_LUT_100168d0);
  return;
}


// ---- FUN_10008588 @ 10008588

void FUN_10008588(void)

{
  FUN_10008592();
  return;
}


// ---- FUN_10008592 @ 10008592

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10008592(void)

{
  _DAT_10020614 = RegisterWindowMessageA(s_PM_GET_PIXEL_COLOUR_100168e4);
  return;
}


// ---- FUN_100085a7 @ 100085a7

void FUN_100085a7(void)

{
  FUN_100085b1();
  return;
}


// ---- FUN_100085b1 @ 100085b1

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100085b1(void)

{
  _DAT_1001f250 = RegisterWindowMessageA(s_PM_LOAD_LUT_FILE_100168f8);
  return;
}


// ---- FUN_100085c6 @ 100085c6

void FUN_100085c6(void)

{
  FUN_100085d0();
  return;
}


// ---- FUN_100085d0 @ 100085d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100085d0(void)

{
  _DAT_1001e438 = RegisterWindowMessageA(s_PM_DO_FEATURESCAN_1001690c);
  return;
}


// ---- FUN_100085e5 @ 100085e5

void FUN_100085e5(void)

{
  FUN_100085ef();
  return;
}


// ---- FUN_100085ef @ 100085ef

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100085ef(void)

{
  _DAT_1001dff0 = RegisterWindowMessageA(s_PM_STOP_FEATURESCAN_10016920);
  return;
}


// ---- FUN_10008604 @ 10008604

void FUN_10008604(void)

{
  FUN_1000860e();
  return;
}


// ---- FUN_1000860e @ 1000860e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000860e(void)

{
  _DAT_100206ac = RegisterWindowMessageA(s_PM_D_ZONE_DATA_CHANGE_10016934);
  return;
}


// ---- FUN_10008623 @ 10008623

void FUN_10008623(void)

{
  FUN_1000862d();
  return;
}


// ---- FUN_1000862d @ 1000862d

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000862d(void)

{
  _DAT_1001efd4 = RegisterWindowMessageA(s_PM_D_GET_ZONES_DATA_1001694c);
  return;
}


// ---- FUN_10008642 @ 10008642

void FUN_10008642(void)

{
  FUN_1000864c();
  return;
}


// ---- FUN_1000864c @ 1000864c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000864c(void)

{
  _DAT_100206d8 = RegisterWindowMessageA(s_PM_D_SET_ZONES_DATA_10016960);
  return;
}


// ---- FUN_10008661 @ 10008661

void FUN_10008661(void)

{
  FUN_1000866b();
  return;
}


// ---- FUN_1000866b @ 1000866b

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000866b(void)

{
  _DAT_100201b8 = RegisterWindowMessageA(s_PM_D_GET_LICENCES_10016974);
  return;
}


// ---- FUN_10008680 @ 10008680

void FUN_10008680(void)

{
  FUN_1000868a();
  return;
}


// ---- FUN_1000868a @ 1000868a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000868a(void)

{
  _DAT_1001efec = RegisterWindowMessageA(s_PM_D_SET_LICENCES_10016988);
  return;
}


// ---- FUN_1000869f @ 1000869f

void FUN_1000869f(void)

{
  FUN_100086a9();
  return;
}


// ---- FUN_100086a9 @ 100086a9

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100086a9(void)

{
  _DAT_10020df4 = RegisterWindowMessageA(s_PM_D_GET_ADMIN_CONFIG_1001699c);
  return;
}


// ---- FUN_100086be @ 100086be

void FUN_100086be(void)

{
  FUN_100086c8();
  return;
}


// ---- FUN_100086c8 @ 100086c8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100086c8(void)

{
  _DAT_1001e010 = RegisterWindowMessageA(s_PM_D_SET_ADMIN_CONFIG_100169b4);
  return;
}


// ---- FUN_100086dd @ 100086dd

void FUN_100086dd(void)

{
  FUN_100086e7();
  return;
}


// ---- FUN_100086e7 @ 100086e7

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100086e7(void)

{
  _DAT_1001f978 = RegisterWindowMessageA(s_PM_ADMIN_FUNCTION_100169cc);
  return;
}


// ---- FUN_100086fc @ 100086fc

void FUN_100086fc(void)

{
  FUN_10008706();
  return;
}


// ---- FUN_10008706 @ 10008706

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10008706(void)

{
  _DAT_1001e418 = RegisterWindowMessageA(s_PM_GET_MACRO_LINKS_100169e0);
  return;
}


// ---- FUN_1000871b @ 1000871b

void FUN_1000871b(void)

{
  FUN_10008725();
  return;
}


// ---- FUN_10008725 @ 10008725

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10008725(void)

{
  _DAT_1001eff0 = RegisterWindowMessageA(s_PM_GET_UIF_LINKS_100169f4);
  return;
}


// ---- FUN_1000873a @ 1000873a

void FUN_1000873a(void)

{
  FUN_10008744();
  return;
}


// ---- FUN_10008744 @ 10008744

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10008744(void)

{
  _DAT_1001f97c = RegisterWindowMessageA(s_PM_POINT_AS_ZONE_10016a08);
  return;
}


// ---- FUN_10008759 @ 10008759

void FUN_10008759(void)

{
  FUN_10008763();
  return;
}


// ---- FUN_10008763 @ 10008763

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10008763(void)

{
  _DAT_10023178 = RegisterWindowMessageA(s_PM_GET_HELP_PATH_10016a1c);
  return;
}


// ---- FUN_10008778 @ 10008778

void FUN_10008778(void)

{
  FUN_10008782();
  return;
}


// ---- FUN_10008782 @ 10008782

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10008782(void)

{
  _DAT_1001f178 = RegisterWindowMessageA(s_PM_SAVE_TIFF_10016a30);
  return;
}


// ---- FUN_10008797 @ 10008797

void FUN_10008797(void)

{
  FUN_100087a1();
  return;
}


// ---- FUN_100087a1 @ 100087a1

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100087a1(void)

{
  _DAT_10020c1c = RegisterWindowMessageA(s_PM_LOAD_TIFF_10016a40);
  return;
}


// ---- FUN_100087b6 @ 100087b6

void FUN_100087b6(void)

{
  FUN_100087c0();
  return;
}


// ---- FUN_100087c0 @ 100087c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100087c0(void)

{
  _DAT_1001e3d0 = RegisterWindowMessageA(s_PM_TIFF_TO_BMP_10016a50);
  return;
}


// ---- FUN_100087d5 @ 100087d5

void FUN_100087d5(void)

{
  FUN_100087df();
  return;
}


// ---- FUN_100087df @ 100087df

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100087df(void)

{
  _DAT_1001e01c = RegisterWindowMessageA(s_PM_IMAGE_TO_FILE_10016a60);
  return;
}


// ---- FUN_100087f4 @ 100087f4

void FUN_100087f4(void)

{
  FUN_100087fe();
  return;
}


// ---- FUN_100087fe @ 100087fe

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100087fe(void)

{
  _DAT_100231b8 = RegisterWindowMessageA(s_PM_RAW_IMAGE_TO_FILE_10016a74);
  return;
}


// ---- FUN_10008813 @ 10008813

void FUN_10008813(void)

{
  FUN_1000881d();
  return;
}


// ---- FUN_1000881d @ 1000881d

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000881d(void)

{
  _DAT_1001e36c = RegisterWindowMessageA(s_PM_IMAGE_FROM_FILE_10016a8c);
  return;
}


// ---- FUN_10008832 @ 10008832

void FUN_10008832(void)

{
  FUN_1000883c();
  return;
}


// ---- FUN_1000883c @ 1000883c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000883c(void)

{
  _DAT_10020190 = RegisterWindowMessageA(s_PM_GET_TIFF_HEADER_10016aa0);
  return;
}


// ---- FUN_10008851 @ 10008851

void FUN_10008851(void)

{
  FUN_1000885b();
  return;
}


// ---- FUN_1000885b @ 1000885b

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000885b(void)

{
  _DAT_1001f23c = RegisterWindowMessageA(s_PM_GET_HISTOGRAM_DATA_10016ab4);
  return;
}


// ---- FUN_10008870 @ 10008870

void FUN_10008870(void)

{
  FUN_1000887a();
  return;
}


// ---- FUN_1000887a @ 1000887a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000887a(void)

{
  _DAT_10020ce0 = RegisterWindowMessageA(s_PM_GET_LINE_DATA_10016acc);
  return;
}


// ---- FUN_1000888f @ 1000888f

void FUN_1000888f(void)

{
  FUN_10008899();
  return;
}


// ---- FUN_10008899 @ 10008899

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10008899(void)

{
  _DAT_10020df0 = RegisterWindowMessageA(s_LEO_D_SET_DEF_PRINT_SCALE_10016ae0);
  return;
}


// ---- FUN_100088ae @ 100088ae

void FUN_100088ae(void)

{
  FUN_100088b8();
  return;
}


// ---- FUN_100088b8 @ 100088b8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100088b8(void)

{
  _DAT_10020c28 = RegisterWindowMessageA(s_PM_PRINT_IMAGE_10016afc);
  return;
}


// ---- FUN_100088cd @ 100088cd

void FUN_100088cd(void)

{
  FUN_100088d7();
  return;
}


// ---- FUN_100088d7 @ 100088d7

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100088d7(void)

{
  _DAT_1001f238 = RegisterWindowMessageA(s_PM_CLIP_COPY_10016b0c);
  return;
}


// ---- FUN_100088ec @ 100088ec

void FUN_100088ec(void)

{
  FUN_100088f6();
  return;
}


// ---- FUN_100088f6 @ 100088f6

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100088f6(void)

{
  _DAT_10020c3c = RegisterWindowMessageA(s_PM_CLIP_INFO_10016b1c);
  return;
}


// ---- FUN_1000890b @ 1000890b

void FUN_1000890b(void)

{
  FUN_10008915();
  return;
}


// ---- FUN_10008915 @ 10008915

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10008915(void)

{
  _DAT_1001e9c0 = RegisterWindowMessageA(s_PM_CLIP_PASTE_10016b2c);
  return;
}


// ---- FUN_1000892a @ 1000892a

void FUN_1000892a(void)

{
  FUN_10008934();
  return;
}


// ---- FUN_10008934 @ 10008934

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10008934(void)

{
  _DAT_1001e3e8 = RegisterWindowMessageA(s_PM_HRRU_PHOTO_10016b3c);
  return;
}


// ---- FUN_10008949 @ 10008949

void FUN_10008949(void)

{
  FUN_10008953();
  return;
}


// ---- FUN_10008953 @ 10008953

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10008953(void)

{
  _DAT_1001e024 = RegisterWindowMessageA(s_PM_WOBBLE_REGISTER_10016b4c);
  return;
}


// ---- FUN_10008968 @ 10008968

void FUN_10008968(void)

{
  FUN_10008972();
  return;
}


// ---- FUN_10008972 @ 10008972

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10008972(void)

{
  _DAT_1001f258 = RegisterWindowMessageA(s_PM_SHOW_FOCUS_DLG_10016b60);
  return;
}


// ---- FUN_10008987 @ 10008987

void FUN_10008987(void)

{
  FUN_10008991();
  return;
}


// ---- FUN_10008991 @ 10008991

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10008991(void)

{
  _DAT_1001e3c8 = RegisterWindowMessageA(s_PM_SHOW_APER_DLG_10016b74);
  return;
}


// ---- FUN_100089a6 @ 100089a6

void FUN_100089a6(void)

{
  FUN_100089b0();
  return;
}


// ---- FUN_100089b0 @ 100089b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100089b0(void)

{
  _DAT_10020bf0 = RegisterWindowMessageA(s_PM_SHOW_GUN_DLG_10016b88);
  return;
}


// ---- FUN_100089c5 @ 100089c5

void FUN_100089c5(void)

{
  FUN_100089cf();
  return;
}


// ---- FUN_100089cf @ 100089cf

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100089cf(void)

{
  _DAT_1001e400 = RegisterWindowMessageA(s_PM_QUERY_CLOSE_SERVER_10016b98);
  return;
}


// ---- FUN_100089e4 @ 100089e4

void FUN_100089e4(void)

{
  FUN_100089ee();
  return;
}


// ---- FUN_100089ee @ 100089ee

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100089ee(void)

{
  _DAT_1001e3c4 = RegisterWindowMessageA(s_PM_WOBBLE_POPUP_INHIBIT_10016bb0);
  return;
}


// ---- FUN_10008a03 @ 10008a03

void FUN_10008a03(void)

{
  FUN_10008a0d();
  return;
}


// ---- FUN_10008a0d @ 10008a0d

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10008a0d(void)

{
  _DAT_1002019c = RegisterWindowMessageA(s_PM_GET_REGISTRATION_DATA_10016bc8);
  return;
}


// ---- FUN_10008a22 @ 10008a22

void FUN_10008a22(void)

{
  FUN_10008a2c();
  return;
}


// ---- FUN_10008a2c @ 10008a2c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10008a2c(void)

{
  _DAT_100201d0 = RegisterWindowMessageA(s_PM_SET_REGISTRATION_DATA_10016be4);
  return;
}


// ---- FUN_10008a41 @ 10008a41

void FUN_10008a41(void)

{
  FUN_10008a4b();
  return;
}


// ---- FUN_10008a4b @ 10008a4b

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10008a4b(void)

{
  _DAT_1001f9a0 = RegisterWindowMessageA(s_PM_DELTA_SAMPLE_GOTO_10016c00);
  return;
}


// ---- FUN_10008a60 @ 10008a60

void FUN_10008a60(void)

{
  FUN_10008a6a();
  return;
}


// ---- FUN_10008a6a @ 10008a6a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10008a6a(void)

{
  _DAT_1001f198 = RegisterWindowMessageA(s_PM_STAGE_LABEL_10016c18);
  return;
}


// ---- FUN_10008a7f @ 10008a7f

void FUN_10008a7f(void)

{
  FUN_10008a89();
  return;
}


// ---- FUN_10008a89 @ 10008a89

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10008a89(void)

{
  _DAT_10023174 = RegisterWindowMessageA(s_PM_STAGE_POINT_GOTO_10016c28);
  return;
}


// ---- FUN_10008a9e @ 10008a9e

void FUN_10008a9e(void)

{
  FUN_10008aa8();
  return;
}


// ---- FUN_10008aa8 @ 10008aa8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10008aa8(void)

{
  _DAT_10020ce8 = RegisterWindowMessageA(s_PM_STAGE_POINT_GET_COUNT_10016c3c);
  return;
}


// ---- FUN_10008abd @ 10008abd

void FUN_10008abd(void)

{
  FUN_10008ac7();
  return;
}


// ---- FUN_10008ac7 @ 10008ac7

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10008ac7(void)

{
  _DAT_1001e430 = RegisterWindowMessageA(s_PM_STAGE_POINT_GET_INDEX_10016c58);
  return;
}


// ---- FUN_10008adc @ 10008adc

void FUN_10008adc(void)

{
  FUN_10008ae6();
  return;
}


// ---- FUN_10008ae6 @ 10008ae6

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10008ae6(void)

{
  _DAT_1001e3f8 = RegisterWindowMessageA(s_PM_STAGE_POINT_GET_DATA_10016c74);
  return;
}


// ---- FUN_10008afb @ 10008afb

void FUN_10008afb(void)

{
  FUN_10008b05();
  return;
}


// ---- FUN_10008b05 @ 10008b05

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10008b05(void)

{
  _DAT_1001f2c0 = RegisterWindowMessageA(s_PM_STAGE_POINT_SET_DATA_10016c8c);
  return;
}


// ---- FUN_10008b1a @ 10008b1a

void FUN_10008b1a(void)

{
  FUN_10008b24();
  return;
}


// ---- FUN_10008b24 @ 10008b24

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10008b24(void)

{
  _DAT_10020c0c = RegisterWindowMessageA(s_PM_STAGE_POINTS_LIST_CHANGED_10016ca4);
  return;
}


// ---- FUN_10008b39 @ 10008b39

void FUN_10008b39(void)

{
  FUN_10008b43();
  return;
}


// ---- FUN_10008b43 @ 10008b43

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10008b43(void)

{
  _DAT_1001e3ec = RegisterWindowMessageA(s_PM_STAGE_POINT_GET_FLAGS_10016cc4);
  return;
}


// ---- FUN_10008b58 @ 10008b58

void FUN_10008b58(void)

{
  FUN_10008b62();
  return;
}


// ---- FUN_10008b62 @ 10008b62

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10008b62(void)

{
  _DAT_1001f18c = RegisterWindowMessageA(s_PM_STAGE_POINT_SET_FLAGS_10016ce0);
  return;
}


// ---- FUN_10008b77 @ 10008b77

void FUN_10008b77(void)

{
  FUN_10008b81();
  return;
}


// ---- FUN_10008b81 @ 10008b81

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10008b81(void)

{
  _DAT_10023170 = RegisterWindowMessageA(s_PM_STAGE_MODE_IS_REGISTERED_10016cfc);
  return;
}


// ---- FUN_10008b96 @ 10008b96

void FUN_10008b96(void)

{
  FUN_10008ba0();
  return;
}


// ---- FUN_10008ba0 @ 10008ba0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10008ba0(void)

{
  _DAT_10022574 = RegisterWindowMessageA(s_PM_STAGE_POINT_GET_MODE_10016d18);
  return;
}


// ---- FUN_10008bb5 @ 10008bb5

void FUN_10008bb5(void)

{
  FUN_10008bbf();
  return;
}


// ---- FUN_10008bbf @ 10008bbf

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10008bbf(void)

{
  _DAT_10020610 = RegisterWindowMessageA(s_PM_STAGE_SET_MAP_MODE_10016d30);
  return;
}


// ---- FUN_10008bd4 @ 10008bd4

void FUN_10008bd4(void)

{
  FUN_10008bde();
  return;
}


// ---- FUN_10008bde @ 10008bde

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10008bde(void)

{
  _DAT_10023160 = RegisterWindowMessageA(s_PM_STAGE_TYPE_DATA_CHANGED_10016d48);
  return;
}


// ---- FUN_10008bf3 @ 10008bf3

void FUN_10008bf3(void)

{
  FUN_10008bfd();
  return;
}


// ---- FUN_10008bfd @ 10008bfd

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10008bfd(void)

{
  _DAT_1001e370 = RegisterWindowMessageA(s_PM_GET_STAGE_DEFAULT_ROT_CENTRE_10016d64);
  return;
}


// ---- FUN_10008c12 @ 10008c12

void FUN_10008c12(void)

{
  FUN_10008c1c();
  return;
}


// ---- FUN_10008c1c @ 10008c1c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10008c1c(void)

{
  _DAT_1002315c = RegisterWindowMessageA(s_PM_SRV16_MISC_FUNC_10016d84);
  return;
}


// ---- FUN_10008c31 @ 10008c31

void FUN_10008c31(void)

{
  FUN_10008c3b();
  return;
}


// ---- FUN_10008c3b @ 10008c3b

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10008c3b(void)

{
  _DAT_1001e038 = RegisterWindowMessageA(s_PM_GET_KNOB_ASSIGNMENT_10016d98);
  return;
}


// ---- FUN_10008c50 @ 10008c50

void FUN_10008c50(void)

{
  FUN_10008c5a();
  return;
}


// ---- FUN_10008c5a @ 10008c5a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10008c5a(void)

{
  _DAT_10020194 = RegisterWindowMessageA(s_PM_NAVMGR_REQUEST_10016db0);
  return;
}


// ---- FUN_10008c6f @ 10008c6f

void FUN_10008c6f(void)

{
  FUN_10008c79();
  return;
}


// ---- FUN_10008c79 @ 10008c79

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10008c79(void)

{
  _DAT_1001f19c = RegisterWindowMessageA(s_PM_SHOWHIDEDIALOGS_REQUEST_10016dc4);
  return;
}


// ---- FUN_10008c8e @ 10008c8e

void FUN_10008c8e(void)

{
  FUN_10008c98();
  return;
}


// ---- FUN_10008c98 @ 10008c98

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10008c98(void)

{
  _DAT_1001f1a4 = RegisterWindowMessageA(s_PM_NAVMGR_DONE_10016de0);
  return;
}


// ---- FUN_10008cad @ 10008cad

void FUN_10008cad(void)

{
  FUN_10008cb7();
  return;
}


// ---- FUN_10008cb7 @ 10008cb7

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10008cb7(void)

{
  _DAT_1001e408 = RegisterWindowMessageA(s_LEO_HPAPP_MESSAGE_10016df0);
  return;
}


// ---- FUN_10008ccc @ 10008ccc

void FUN_10008ccc(void)

{
  FUN_10008cd6();
  return;
}


// ---- FUN_10008cd6 @ 10008cd6

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10008cd6(void)

{
  _DAT_1001e3cc = RegisterWindowMessageA(s_PM_GET_HPAPP_PANEL_DATA_10016e04);
  return;
}


// ---- FUN_10008ceb @ 10008ceb

void FUN_10008ceb(void)

{
  FUN_10008cf5();
  return;
}


// ---- FUN_10008cf5 @ 10008cf5

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10008cf5(void)

{
  _DAT_1001f008 = RegisterWindowMessageA(s_PM_HPAPP_FUNC_10016e1c);
  return;
}


// ---- FUN_10008d0a @ 10008d0a

void FUN_10008d0a(void)

{
  FUN_10008d14();
  return;
}


// ---- FUN_10008d14 @ 10008d14

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10008d14(void)

{
  _DAT_1001f248 = RegisterWindowMessageA(s_PM_GET_CAL_COL_DATA_10016e2c);
  return;
}


// ---- FUN_10008d29 @ 10008d29

void FUN_10008d29(void)

{
  FUN_10008d33();
  return;
}


// ---- FUN_10008d33 @ 10008d33

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10008d33(void)

{
  _DAT_10022584 = RegisterWindowMessageA(s_PM_CHANGE_IMAGE_DIRECTORY_10016e40);
  return;
}


// ---- FUN_10008d48 @ 10008d48

void FUN_10008d48(void)

{
  FUN_10008d52();
  return;
}


// ---- FUN_10008d52 @ 10008d52

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10008d52(void)

{
  _DAT_1001f1cc = RegisterWindowMessageA(s_PM_CHANGE_USER_DIRECTORY_10016e5c);
  return;
}


// ---- FUN_10008d67 @ 10008d67

void FUN_10008d67(void)

{
  FUN_10008d71();
  return;
}


// ---- FUN_10008d71 @ 10008d71

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10008d71(void)

{
  _DAT_1001f254 = RegisterWindowMessageA(s_PM_TRACKERBALL_INIT_10016e78);
  return;
}


// ---- FUN_10008d86 @ 10008d86

void FUN_10008d86(void)

{
  FUN_10008d90();
  return;
}


// ---- FUN_10008d90 @ 10008d90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10008d90(void)

{
  _DAT_100201d8 = RegisterWindowMessageA(s_PM_TRACKERBALL_SHOW_SETTINGS_10016e8c);
  return;
}


// ---- FUN_10008da5 @ 10008da5

void FUN_10008da5(void)

{
  FUN_10008daf();
  return;
}


// ---- FUN_10008daf @ 10008daf

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10008daf(void)

{
  _DAT_1001f9ac = RegisterWindowMessageA(s_PM_TRACKERBALL_ARE_DIALOGS_HIDDE_10016eac);
  return;
}


// ---- FUN_10008dc4 @ 10008dc4

void FUN_10008dc4(void)

{
  FUN_10008dce();
  return;
}


// ---- FUN_10008dce @ 10008dce

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10008dce(void)

{
  _DAT_1001f1d4 = RegisterWindowMessageA(s_PM_TRACKERBALL_ASSIGN_BUTTON_10016ed0);
  return;
}


// ---- FUN_10008de3 @ 10008de3

void FUN_10008de3(void)

{
  FUN_10008ded();
  return;
}


// ---- FUN_10008ded @ 10008ded

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10008ded(void)

{
  _DAT_10020c18 = RegisterWindowMessageA(s_PM_TRACKERBALL_GET_ASSIGNMENTS_10016ef0);
  return;
}


// ---- FUN_10008e02 @ 10008e02

void FUN_10008e02(void)

{
  FUN_10008e0c();
  return;
}


// ---- FUN_10008e0c @ 10008e0c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10008e0c(void)

{
  _DAT_1001f004 = RegisterWindowMessageA(s_PM_TRACKERBALL_SELECT_BUTTON_10016f10);
  return;
}


// ---- FUN_10008e21 @ 10008e21

void FUN_10008e21(void)

{
  FUN_10008e2b();
  return;
}


// ---- FUN_10008e2b @ 10008e2b

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10008e2b(void)

{
  _DAT_10020080 = RegisterWindowMessageA(s_PM_TRACKERBALL_SELECT_BUTTON_10016f30);
  return;
}


// ---- FUN_10008e40 @ 10008e40

void FUN_10008e40(void)

{
  FUN_10008e4a();
  return;
}


// ---- FUN_10008e4a @ 10008e4a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10008e4a(void)

{
  _DAT_10020df8 = RegisterWindowMessageA(s_PM_TRACKERBALL_AXIS_SELECTED_10016f50);
  return;
}


// ---- FUN_10008e5f @ 10008e5f

void FUN_10008e5f(void)

{
  FUN_10008e69();
  return;
}


// ---- FUN_10008e69 @ 10008e69

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10008e69(void)

{
  _DAT_10020bf8 = RegisterWindowMessageA(s_PM_2ND_IMAGE_DISPLAY_10016f70);
  return;
}


// ---- FUN_10008e7e @ 10008e7e

void FUN_10008e7e(void)

{
  FUN_10008e88();
  return;
}


// ---- FUN_10008e88 @ 10008e88

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10008e88(void)

{
  _DAT_1001f180 = RegisterWindowMessageA(s_PM_GET_2ND_IMAGE_DISPLAY_10016f88);
  return;
}


// ---- FUN_10008e9d @ 10008e9d

void FUN_10008e9d(void)

{
  FUN_10008ea7();
  return;
}


// ---- FUN_10008ea7 @ 10008ea7

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10008ea7(void)

{
  _DAT_10020c4c = RegisterWindowMessageA(s_PM_NOTIFY_2ND_IMAGE_DISPLAY_10016fa4);
  return;
}


// ---- FUN_10008ebc @ 10008ebc

void FUN_10008ebc(void)

{
  FUN_10008ec6();
  return;
}


// ---- FUN_10008ec6 @ 10008ec6

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10008ec6(void)

{
  _DAT_1002256c = RegisterWindowMessageA(s_PM_2ND_IMAGE_SELECT_10016fc0);
  return;
}


// ---- FUN_10008edb @ 10008edb

void FUN_10008edb(void)

{
  FUN_10008ee5();
  return;
}


// ---- FUN_10008ee5 @ 10008ee5

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10008ee5(void)

{
  _DAT_1001e3c0 = RegisterWindowMessageA(s_PM_SELECT_USER_AREA_10016fd4);
  return;
}


// ---- FUN_10008efa @ 10008efa

void FUN_10008efa(void)

{
  FUN_10008f04();
  return;
}


// ---- FUN_10008f04 @ 10008f04

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10008f04(void)

{
  _DAT_1001e028 = RegisterWindowMessageA(s_PM_READ_USER_AREA_10016fe8);
  return;
}


// ---- FUN_10008f19 @ 10008f19

void FUN_10008f19(void)

{
  FUN_10008f23();
  return;
}


// ---- FUN_10008f23 @ 10008f23

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10008f23(void)

{
  _DAT_10020c40 = RegisterWindowMessageA(s_PM_CREATE_USER_AREA_10016ffc);
  return;
}


// ---- FUN_10008f38 @ 10008f38

void FUN_10008f38(void)

{
  FUN_10008f42();
  return;
}


// ---- FUN_10008f42 @ 10008f42

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10008f42(void)

{
  _DAT_1001e3f0 = RegisterWindowMessageA(s_PM_DELETE_USER_AREA_10017010);
  return;
}


// ---- FUN_10008f57 @ 10008f57

void FUN_10008f57(void)

{
  FUN_10008f61();
  return;
}


// ---- FUN_10008f61 @ 10008f61

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10008f61(void)

{
  _DAT_1001f1bc = RegisterWindowMessageA(s_PM_LEO_SERVER_EVENT_10017024);
  return;
}


// ---- FUN_10008f76 @ 10008f76

void FUN_10008f76(void)

{
  FUN_10008f80();
  return;
}


// ---- FUN_10008f80 @ 10008f80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10008f80(void)

{
  _DAT_10020670 = RegisterWindowMessageA(s_PM_GET_MEASURE_UNITS_10017038);
  return;
}


// ---- FUN_10008f95 @ 10008f95

void FUN_10008f95(void)

{
  FUN_10008f9f();
  return;
}


// ---- FUN_10008f9f @ 10008f9f

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10008f9f(void)

{
  _DAT_10020c48 = RegisterWindowMessageA(s_PM_SET_MEASURE_UNITS_10017050);
  return;
}


// ---- FUN_10008fb4 @ 10008fb4

void FUN_10008fb4(void)

{
  FUN_10008fbe();
  return;
}


// ---- FUN_10008fbe @ 10008fbe

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10008fbe(void)

{
  _DAT_1001eee0 = RegisterWindowMessageA(s_PM_GET_PRESET_COUNT_10017068);
  return;
}


// ---- FUN_10008fd3 @ 10008fd3

void FUN_10008fd3(void)

{
  FUN_10008fdd();
  return;
}


// ---- FUN_10008fdd @ 10008fdd

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10008fdd(void)

{
  _DAT_1001edd4 = RegisterWindowMessageA(s_PM_SET_PRESET_INDEX_1001707c);
  return;
}


// ---- FUN_10008ff2 @ 10008ff2

void FUN_10008ff2(void)

{
  FUN_10008ffc();
  return;
}


// ---- FUN_10008ffc @ 10008ffc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10008ffc(void)

{
  _DAT_1001e950 = RegisterWindowMessageA(s_PM_GET_PRESET_LABEL_10017090);
  return;
}


// ---- FUN_10009011 @ 10009011

void FUN_10009011(void)

{
  FUN_1000901b();
  return;
}


// ---- FUN_1000901b @ 1000901b

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000901b(void)

{
  _DAT_1001effc = RegisterWindowMessageA(s_PM_GENERAL_FUNCTION_100170a4);
  return;
}


// ---- FUN_10009030 @ 10009030

void FUN_10009030(void)

{
  FUN_1000903f();
  FUN_1000904e();
  return;
}


// ---- FUN_1000903f @ 1000903f

void FUN_1000903f(void)

{
  CString::CString((CString *)&DAT_100201d4);
  return;
}


// ---- FUN_1000904e @ 1000904e

void FUN_1000904e(void)

{
  FUN_1000fa6a(FUN_10009060);
  return;
}


// ---- FUN_10009060 @ 10009060

void FUN_10009060(void)

{
  CString::~CString((CString *)&DAT_100201d4);
  return;
}


// ---- FUN_10009070 @ 10009070

LeoDDE32 * __thiscall FUN_10009070(void *this,uint param_1)

{
  if ((param_1 & 2) == 0) {
    LeoDDE32::~LeoDDE32(this);
    if ((param_1 & 1) != 0) {
      operator_delete(this);
    }
  }
  else {
    FUN_1000f910(this,200,*(int *)((int)this + -4),LeoDDE32::~LeoDDE32);
    if ((param_1 & 1) != 0) {
      operator_delete((void *)((int)this + -4));
    }
    this = (void *)((int)this + -4);
  }
  return this;
}


// ---- FUN_100090f0 @ 100090f0

void __fastcall FUN_100090f0(undefined4 *param_1)

{
  *(undefined4 *)(param_1[1] + 4) = *param_1;
  return;
}


// ---- FUN_10009110 @ 10009110

void FUN_10009110(void)

{
  AfxTryCleanup();
  return;
}


// ---- ~LeoDDE32 @ 10009120

/* public: virtual __thiscall LeoDDE32::~LeoDDE32(void) */

void __thiscall LeoDDE32::~LeoDDE32(LeoDDE32 *this)

{
                    /* 0x9120  2  ??1LeoDDE32@@UAE@XZ */
  CWinApp::~CWinApp((CWinApp *)this);
  return;
}


// ---- FUN_10009140 @ 10009140

CWnd * __fastcall FUN_10009140(CWnd *param_1)

{
  CWnd::CWnd(param_1);
  *(undefined ***)param_1 = &PTR_LAB_10011490;
  *(undefined4 *)(param_1 + 0x40) = 0;
  return param_1;
}


// ---- FUN_10009169 @ 10009169

void __fastcall FUN_10009169(CWnd *param_1)

{
  *(undefined ***)param_1 = &PTR_LAB_10011490;
  CWnd::~CWnd(param_1);
  return;
}


// ---- FUN_10009185 @ 10009185

undefined * FUN_10009185(void)

{
  return messageMap_exref;
}


// ---- FUN_1000918f @ 1000918f

undefined ** FUN_1000918f(void)

{
  return &PTR_FUN_10011440;
}


// ---- FUN_1000919f @ 1000919f

undefined4 __thiscall FUN_1000919f(void *this,uint param_1)

{
  short sVar1;
  undefined4 local_14;
  undefined4 uStack_10;
  short local_c;
  undefined2 uStack_a;
  uint local_8;
  
  sVar1 = (short)(param_1 >> 0x10);
  _local_c = CONCAT22(uStack_a,sVar1);
  local_8 = CONCAT22(local_8._2_2_,(undefined2)param_1);
  local_14 = 0;
  uStack_10 = 0;
  if (*(int *)((int)this + 0x40) != 0) {
    if (sVar1 == 300) {
      LeoDDE32::GetValue(param_1 & 0xffff,(double *)&local_14);
      LeoDDE32::NotifyAnalogue
                (*(LeoDDE32 **)((int)this + 0x40),local_8 & 0xffff,
                 (float)(double)CONCAT44(uStack_10,local_14));
    }
    else if (sVar1 == 200) {
      LeoDDE32::GetIFStateStr(param_1 & 0xffff,&DAT_100235e4);
      LeoDDE32::NotifyDigital(*(LeoDDE32 **)((int)this + 0x40),local_8 & 0xffff,&DAT_100235e4);
    }
  }
  return 0;
}


// ---- FUN_10009268 @ 10009268

undefined4 __fastcall FUN_10009268(CWnd *param_1)

{
  long lVar1;
  undefined4 uVar2;
  
  lVar1 = CWnd::Default(param_1);
  if (lVar1 == -1) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


// ---- FUN_10009289 @ 10009289

void FUN_10009289(void)

{
  FUN_10009293();
  return;
}


// ---- FUN_10009293 @ 10009293

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10009293(void)

{
  _DAT_10023364 = RegisterWindowMessageA(s_LEO_D_SET_STATE_1001b604);
  return;
}


// ---- FUN_100092a8 @ 100092a8

void FUN_100092a8(void)

{
  FUN_100092b2();
  return;
}


// ---- FUN_100092b2 @ 100092b2

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100092b2(void)

{
  _DAT_100233a4 = RegisterWindowMessageA(s_LEO_D_SET_STRING_1001b614);
  return;
}


// ---- FUN_100092c7 @ 100092c7

void FUN_100092c7(void)

{
  FUN_100092d1();
  return;
}


// ---- FUN_100092d1 @ 100092d1

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100092d1(void)

{
  _DAT_10023218 = RegisterWindowMessageA(s_LEO_D_SET_VALUE_1001b628);
  return;
}


// ---- FUN_100092e6 @ 100092e6

void FUN_100092e6(void)

{
  FUN_100092f0();
  return;
}


// ---- FUN_100092f0 @ 100092f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100092f0(void)

{
  _DAT_100232e8 = RegisterWindowMessageA(s_LEO_D_SET_XY_1001b638);
  return;
}


// ---- FUN_10009305 @ 10009305

void FUN_10009305(void)

{
  FUN_1000930f();
  return;
}


// ---- FUN_1000930f @ 1000930f

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000930f(void)

{
  _DAT_10023300 = RegisterWindowMessageA(s_LEO_D_GET_XY_1001b648);
  return;
}


// ---- FUN_10009324 @ 10009324

void FUN_10009324(void)

{
  FUN_1000932e();
  return;
}


// ---- FUN_1000932e @ 1000932e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000932e(void)

{
  _DAT_10023278 = RegisterWindowMessageA(s_LEO_D_MOUSE_ADJUST_LEFT_1001b658);
  return;
}


// ---- FUN_10009343 @ 10009343

void FUN_10009343(void)

{
  FUN_1000934d();
  return;
}


// ---- FUN_1000934d @ 1000934d

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000934d(void)

{
  _DAT_100232e0 = RegisterWindowMessageA(s_LEO_D_MOUSE_ADJUST_MIDDLE_1001b670);
  return;
}


// ---- FUN_10009362 @ 10009362

void FUN_10009362(void)

{
  FUN_1000936c();
  return;
}


// ---- FUN_1000936c @ 1000936c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000936c(void)

{
  _DAT_1002333c = RegisterWindowMessageA(s_LEO_D_STEP_1001b68c);
  return;
}


// ---- FUN_10009381 @ 10009381

void FUN_10009381(void)

{
  FUN_1000938b();
  return;
}


// ---- FUN_1000938b @ 1000938b

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000938b(void)

{
  _DAT_1002334c = RegisterWindowMessageA(s_LEO_D_EXECUTE_1001b698);
  return;
}


// ---- FUN_100093a0 @ 100093a0

void FUN_100093a0(void)

{
  FUN_100093aa();
  return;
}


// ---- FUN_100093aa @ 100093aa

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100093aa(void)

{
  _DAT_100232b0 = RegisterWindowMessageA(s_LEO_D_GET_COMMAND_1001b6a8);
  return;
}


// ---- FUN_100093bf @ 100093bf

void FUN_100093bf(void)

{
  FUN_100093c9();
  return;
}


// ---- FUN_100093c9 @ 100093c9

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100093c9(void)

{
  _DAT_10023228 = RegisterWindowMessageA(s_LEO_D_GET_STATE_1001b6bc);
  return;
}


// ---- FUN_100093de @ 100093de

void FUN_100093de(void)

{
  FUN_100093e8();
  return;
}


// ---- FUN_100093e8 @ 100093e8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100093e8(void)

{
  _DAT_10023584 = RegisterWindowMessageA(s_LEO_D_GET_STATE_STRING_1001b6cc);
  return;
}


// ---- FUN_100093fd @ 100093fd

void FUN_100093fd(void)

{
  FUN_10009407();
  return;
}


// ---- FUN_10009407 @ 10009407

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10009407(void)

{
  _DAT_10023494 = RegisterWindowMessageA(s_LEO_D_GET_VALUE_1001b6e4);
  return;
}


// ---- FUN_1000941c @ 1000941c

void FUN_1000941c(void)

{
  FUN_10009426();
  return;
}


// ---- FUN_10009426 @ 10009426

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10009426(void)

{
  _DAT_10023224 = RegisterWindowMessageA(s_LEO_GET_VALUE_EXTRA_1001b6f4);
  return;
}


// ---- FUN_1000943b @ 1000943b

void FUN_1000943b(void)

{
  FUN_10009445();
  return;
}


// ---- FUN_10009445 @ 10009445

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10009445(void)

{
  _DAT_10023540 = RegisterWindowMessageA(s_LEO_D_SET_FORMAT_MODIFIER_1001b708);
  return;
}


// ---- FUN_1000945a @ 1000945a

void FUN_1000945a(void)

{
  FUN_10009464();
  return;
}


// ---- FUN_10009464 @ 10009464

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10009464(void)

{
  _DAT_100232dc = RegisterWindowMessageA(s_LEO_MACRO_MANAGER_REGISTER_1001b724);
  return;
}


// ---- FUN_10009479 @ 10009479

void FUN_10009479(void)

{
  FUN_10009483();
  return;
}


// ---- FUN_10009483 @ 10009483

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10009483(void)

{
  _DAT_10023530 = RegisterWindowMessageA(s_LEO_LUT_MANAGER_REGISTER_1001b740);
  return;
}


// ---- FUN_10009498 @ 10009498

void FUN_10009498(void)

{
  FUN_100094a2();
  return;
}


// ---- FUN_100094a2 @ 100094a2

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100094a2(void)

{
  _DAT_10023520 = RegisterWindowMessageA(s_PM_SERVER_READY_1001b75c);
  return;
}


// ---- FUN_100094b7 @ 100094b7

void FUN_100094b7(void)

{
  FUN_100094c1();
  return;
}


// ---- FUN_100094c1 @ 100094c1

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100094c1(void)

{
  _DAT_1002337c = RegisterWindowMessageA(s_PM_SERVER_LOADING_1001b76c);
  return;
}


// ---- FUN_100094d6 @ 100094d6

void FUN_100094d6(void)

{
  FUN_100094e0();
  return;
}


// ---- FUN_100094e0 @ 100094e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100094e0(void)

{
  _DAT_10023444 = RegisterWindowMessageA(s_PM_REFRESH_WINDOW_1001b780);
  return;
}


// ---- FUN_100094f5 @ 100094f5

void FUN_100094f5(void)

{
  FUN_100094ff();
  return;
}


// ---- FUN_100094ff @ 100094ff

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100094ff(void)

{
  _DAT_10023428 = RegisterWindowMessageA(s_PM_REGISTER_RETURN_1001b794);
  return;
}


// ---- FUN_10009514 @ 10009514

void FUN_10009514(void)

{
  FUN_1000951e();
  return;
}


// ---- FUN_1000951e @ 1000951e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000951e(void)

{
  _DAT_10023410 = RegisterWindowMessageA(s_PM_SEM_CLOSE_1001b7a8);
  return;
}


// ---- FUN_10009533 @ 10009533

void FUN_10009533(void)

{
  FUN_1000953d();
  return;
}


// ---- FUN_1000953d @ 1000953d

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000953d(void)

{
  _DAT_100235a4 = RegisterWindowMessageA(s_LEO_MOUSE_FINISHED_ADJUST_1001b7b8);
  return;
}


// ---- FUN_10009552 @ 10009552

void FUN_10009552(void)

{
  FUN_1000955c();
  return;
}


// ---- FUN_1000955c @ 1000955c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000955c(void)

{
  _DAT_1002342c = RegisterWindowMessageA(s_PM_PARAMETER_NOTIFY_1001b7d4);
  return;
}


// ---- FUN_10009571 @ 10009571

void FUN_10009571(void)

{
  FUN_1000957b();
  return;
}


// ---- FUN_1000957b @ 1000957b

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000957b(void)

{
  _DAT_100234a0 = RegisterWindowMessageA(s_PM_COARSE_FINE_CHANGED_1001b7e8);
  return;
}


// ---- FUN_10009590 @ 10009590

void FUN_10009590(void)

{
  FUN_1000959a();
  return;
}


// ---- FUN_1000959a @ 1000959a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000959a(void)

{
  _DAT_10023580 = RegisterWindowMessageA(s_PM_LICENCE_CHANGED_1001b800);
  return;
}


// ---- FUN_100095af @ 100095af

void FUN_100095af(void)

{
  FUN_100095b9();
  return;
}


// ---- FUN_100095b9 @ 100095b9

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100095b9(void)

{
  _DAT_100234f8 = RegisterWindowMessageA(s_PM_ZONE_OPMODE_CHANGED_1001b814);
  return;
}


// ---- FUN_100095ce @ 100095ce

void FUN_100095ce(void)

{
  FUN_100095d8();
  return;
}


// ---- FUN_100095d8 @ 100095d8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100095d8(void)

{
  _DAT_100233ac = RegisterWindowMessageA(s_PM_ZONE0_MAG_PIX_CHANGED_1001b82c);
  return;
}


// ---- FUN_100095ed @ 100095ed

void FUN_100095ed(void)

{
  FUN_100095f7();
  return;
}


// ---- FUN_100095f7 @ 100095f7

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100095f7(void)

{
  _DAT_100235d8 = RegisterWindowMessageA(s_PM_ZONE1_MAG_PIX_CHANGED_1001b848);
  return;
}


// ---- FUN_1000960c @ 1000960c

void FUN_1000960c(void)

{
  FUN_10009616();
  return;
}


// ---- FUN_10009616 @ 10009616

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10009616(void)

{
  _DAT_100235a0 = RegisterWindowMessageA(s_PM_ZONE2_MAG_PIX_CHANGED_1001b864);
  return;
}


// ---- FUN_1000962b @ 1000962b

void FUN_1000962b(void)

{
  FUN_10009635();
  return;
}


// ---- FUN_10009635 @ 10009635

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10009635(void)

{
  _DAT_100232d4 = RegisterWindowMessageA(s_PM_ZONE3_MAG_PIX_CHANGED_1001b880);
  return;
}


// ---- FUN_1000964a @ 1000964a

void FUN_1000964a(void)

{
  FUN_10009654();
  return;
}


// ---- FUN_10009654 @ 10009654

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10009654(void)

{
  _DAT_10023418 = RegisterWindowMessageA(s_PM_KNOB_ASSIGNMENT_1001b89c);
  return;
}


// ---- FUN_10009669 @ 10009669

void FUN_10009669(void)

{
  FUN_10009673();
  return;
}


// ---- FUN_10009673 @ 10009673

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10009673(void)

{
  _DAT_10023348 = RegisterWindowMessageA(s_PM_SET_KNOB_ASSIGNMENT_1001b8b0);
  return;
}


// ---- FUN_10009688 @ 10009688

void FUN_10009688(void)

{
  FUN_10009692();
  return;
}


// ---- FUN_10009692 @ 10009692

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10009692(void)

{
  _DAT_1002350c = RegisterWindowMessageA(s_PM_IMG_ANNOTATION_TO_FILE_1001b8c8);
  return;
}


// ---- FUN_100096a7 @ 100096a7

void FUN_100096a7(void)

{
  FUN_100096b1();
  return;
}


// ---- FUN_100096b1 @ 100096b1

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100096b1(void)

{
  _DAT_10023240 = RegisterWindowMessageA(s_PM_IMG_TIFF_RESET_1001b8e4);
  return;
}


// ---- FUN_100096c6 @ 100096c6

void FUN_100096c6(void)

{
  FUN_100096d0();
  return;
}


// ---- FUN_100096d0 @ 100096d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100096d0(void)

{
  _DAT_100234a4 = RegisterWindowMessageA(s_PM_IMEX_DONE_1001b8f8);
  return;
}


// ---- FUN_100096e5 @ 100096e5

void FUN_100096e5(void)

{
  FUN_100096ef();
  return;
}


// ---- FUN_100096ef @ 100096ef

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100096ef(void)

{
  _DAT_1002353c = RegisterWindowMessageA(s_PM_IMG_TIFF_PARAM_1001b908);
  return;
}


// ---- FUN_10009704 @ 10009704

void FUN_10009704(void)

{
  FUN_1000970e();
  return;
}


// ---- FUN_1000970e @ 1000970e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000970e(void)

{
  _DAT_10023404 = RegisterWindowMessageA(s_PM_IMG_CREATE_TEXT_1001b91c);
  return;
}


// ---- FUN_10009723 @ 10009723

void FUN_10009723(void)

{
  FUN_1000972d();
  return;
}


// ---- FUN_1000972d @ 1000972d

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000972d(void)

{
  _DAT_100232b4 = RegisterWindowMessageA(s_PM_IMG_DELETE_TEXT_1001b930);
  return;
}


// ---- FUN_10009742 @ 10009742

void FUN_10009742(void)

{
  FUN_1000974c();
  return;
}


// ---- FUN_1000974c @ 1000974c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000974c(void)

{
  _DAT_10023384 = RegisterWindowMessageA(s_LEO_GET_SEM_HWND_1001b944);
  return;
}


// ---- FUN_10009761 @ 10009761

void FUN_10009761(void)

{
  FUN_1000976b();
  return;
}


// ---- FUN_1000976b @ 1000976b

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000976b(void)

{
  _DAT_10023424 = RegisterWindowMessageA(s_PM_IMGMGR_INHIBIT_SPOT_1001b958);
  return;
}


// ---- FUN_10009780 @ 10009780

void FUN_10009780(void)

{
  FUN_1000978a();
  return;
}


// ---- FUN_1000978a @ 1000978a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000978a(void)

{
  _DAT_100234d8 = RegisterWindowMessageA(s_PM_SPECIAL_FUNCTION_1001b970);
  return;
}


// ---- FUN_1000979f @ 1000979f

void FUN_1000979f(void)

{
  FUN_100097a9();
  return;
}


// ---- FUN_100097a9 @ 100097a9

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100097a9(void)

{
  _DAT_10023438 = RegisterWindowMessageA(s_PM_GET_TAB_COUNT_1001b984);
  return;
}


// ---- FUN_100097be @ 100097be

void FUN_100097be(void)

{
  FUN_100097c8();
  return;
}


// ---- FUN_100097c8 @ 100097c8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100097c8(void)

{
  _DAT_1002339c = RegisterWindowMessageA(s_PM_GET_DLG_COUNT_1001b998);
  return;
}


// ---- FUN_100097dd @ 100097dd

void FUN_100097dd(void)

{
  FUN_100097e7();
  return;
}


// ---- FUN_100097e7 @ 100097e7

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100097e7(void)

{
  _DAT_10023320 = RegisterWindowMessageA(s_PM_GET_TAB_NAME_1001b9ac);
  return;
}


// ---- FUN_100097fc @ 100097fc

void FUN_100097fc(void)

{
  FUN_10009806();
  return;
}


// ---- FUN_10009806 @ 10009806

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10009806(void)

{
  _DAT_10023450 = RegisterWindowMessageA(s_PM_GET_DLG_NAME_1001b9bc);
  return;
}


// ---- FUN_1000981b @ 1000981b

void FUN_1000981b(void)

{
  FUN_10009825();
  return;
}


// ---- FUN_10009825 @ 10009825

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10009825(void)

{
  _DAT_10023394 = RegisterWindowMessageA(s_PM_SHOW_TABS_DIALOGS_1001b9cc);
  return;
}


// ---- FUN_1000983a @ 1000983a

void FUN_1000983a(void)

{
  FUN_10009844();
  return;
}


// ---- FUN_10009844 @ 10009844

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10009844(void)

{
  _DAT_100234c4 = RegisterWindowMessageA(s_PM_GET_MACRO_LIB_ISSUE_1001b9e4);
  return;
}


// ---- FUN_10009859 @ 10009859

void FUN_10009859(void)

{
  FUN_10009863();
  return;
}


// ---- FUN_10009863 @ 10009863

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10009863(void)

{
  _DAT_100232a4 = RegisterWindowMessageA(s_PM_MACRO_CONDITIONS_SAVED_1001b9fc);
  return;
}


// ---- FUN_10009878 @ 10009878

void FUN_10009878(void)

{
  FUN_10009882();
  return;
}


// ---- FUN_10009882 @ 10009882

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10009882(void)

{
  _DAT_10023318 = RegisterWindowMessageA(s_PM_STEP_MACRO_1001ba18);
  return;
}


// ---- FUN_10009897 @ 10009897

void FUN_10009897(void)

{
  FUN_100098a1();
  return;
}


// ---- FUN_100098a1 @ 100098a1

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100098a1(void)

{
  _DAT_10023590 = RegisterWindowMessageA(s_PM_CONTINUE_MACRO_1001ba28);
  return;
}


// ---- FUN_100098b6 @ 100098b6

void FUN_100098b6(void)

{
  FUN_100098c0();
  return;
}


// ---- FUN_100098c0 @ 100098c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100098c0(void)

{
  _DAT_100232f0 = RegisterWindowMessageA(s_PM_EXECUTE_LIBRARY_MACRO_1001ba3c);
  return;
}


// ---- FUN_100098d5 @ 100098d5

void FUN_100098d5(void)

{
  FUN_100098df();
  return;
}


// ---- FUN_100098df @ 100098df

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100098df(void)

{
  _DAT_10023250 = RegisterWindowMessageA(s_PM_EXECUTE_FILE_MACRO_1001ba58);
  return;
}


// ---- FUN_100098f4 @ 100098f4

void FUN_100098f4(void)

{
  FUN_100098fe();
  return;
}


// ---- FUN_100098fe @ 100098fe

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100098fe(void)

{
  _DAT_1002340c = RegisterWindowMessageA(s_PM_HALT_MACRO_1001ba70);
  return;
}


// ---- FUN_10009913 @ 10009913

void FUN_10009913(void)

{
  FUN_1000991d();
  return;
}


// ---- FUN_1000991d @ 1000991d

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000991d(void)

{
  _DAT_10023338 = RegisterWindowMessageA(s_PM_PAUSE_MACRO_1001ba80);
  return;
}


// ---- FUN_10009932 @ 10009932

void FUN_10009932(void)

{
  FUN_1000993c();
  return;
}


// ---- FUN_1000993c @ 1000993c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000993c(void)

{
  _DAT_10023414 = RegisterWindowMessageA(s_PM_MACRO_STATUS_1001ba90);
  return;
}


// ---- FUN_10009951 @ 10009951

void FUN_10009951(void)

{
  FUN_1000995b();
  return;
}


// ---- FUN_1000995b @ 1000995b

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000995b(void)

{
  _DAT_10023440 = RegisterWindowMessageA(s_PM_MACRO_EDITOR_1001baa0);
  return;
}


// ---- FUN_10009970 @ 10009970

void FUN_10009970(void)

{
  FUN_1000997a();
  return;
}


// ---- FUN_1000997a @ 1000997a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000997a(void)

{
  _DAT_1002321c = RegisterWindowMessageA(s_PM_SAVE_SYSTEM_CONDITIONS_1001bab0);
  return;
}


// ---- FUN_1000998f @ 1000998f

void FUN_1000998f(void)

{
  FUN_10009999();
  return;
}


// ---- FUN_10009999 @ 10009999

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10009999(void)

{
  _DAT_10023500 = RegisterWindowMessageA(s_PM_SAVE_STATE_1001bacc);
  return;
}


// ---- FUN_100099ae @ 100099ae

void FUN_100099ae(void)

{
  FUN_100099b8();
  return;
}


// ---- FUN_100099b8 @ 100099b8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100099b8(void)

{
  _DAT_100233a0 = RegisterWindowMessageA(s_PM_LOAD_STATE_1001badc);
  return;
}


// ---- FUN_100099cd @ 100099cd

void FUN_100099cd(void)

{
  FUN_100099d7();
  return;
}


// ---- FUN_100099d7 @ 100099d7

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100099d7(void)

{
  _DAT_10023448 = RegisterWindowMessageA(s_PM_STANDARD_CONDITIONS_1001baec);
  return;
}


// ---- FUN_100099ec @ 100099ec

void FUN_100099ec(void)

{
  FUN_100099f6();
  return;
}


// ---- FUN_100099f6 @ 100099f6

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100099f6(void)

{
  _DAT_100234e0 = RegisterWindowMessageA(s_PM_RESTORE_SYSTEM_CONDITIONS_1001bb04);
  return;
}


// ---- FUN_10009a0b @ 10009a0b

void FUN_10009a0b(void)

{
  FUN_10009a15();
  return;
}


// ---- FUN_10009a15 @ 10009a15

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10009a15(void)

{
  _DAT_10023354 = RegisterWindowMessageA(s_PM_EXECUTING_LINE_1001bb24);
  return;
}


// ---- FUN_10009a2a @ 10009a2a

void FUN_10009a2a(void)

{
  FUN_10009a34();
  return;
}


// ---- FUN_10009a34 @ 10009a34

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10009a34(void)

{
  _DAT_1002328c = RegisterWindowMessageA(s_PM_REVIEW_STATE_1001bb38);
  return;
}


// ---- FUN_10009a49 @ 10009a49

void FUN_10009a49(void)

{
  FUN_10009a53();
  return;
}


// ---- FUN_10009a53 @ 10009a53

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10009a53(void)

{
  _DAT_1002323c = RegisterWindowMessageA(s_PM_SP_MOUSE_ADJUSTMENT_1001bb48);
  return;
}


// ---- FUN_10009a68 @ 10009a68

void FUN_10009a68(void)

{
  FUN_10009a72();
  return;
}


// ---- FUN_10009a72 @ 10009a72

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10009a72(void)

{
  _DAT_1002345c = RegisterWindowMessageA(s_PM_QUERY_SERVER_1001bb60);
  return;
}


// ---- FUN_10009a87 @ 10009a87

void FUN_10009a87(void)

{
  FUN_10009a91();
  return;
}


// ---- FUN_10009a91 @ 10009a91

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10009a91(void)

{
  _DAT_10023468 = RegisterWindowMessageA(s_PM_QUERY_CLIENT_COUNT_1001bb70);
  return;
}


// ---- FUN_10009aa6 @ 10009aa6

void FUN_10009aa6(void)

{
  FUN_10009ab0();
  return;
}


// ---- FUN_10009ab0 @ 10009ab0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10009ab0(void)

{
  _DAT_10023550 = RegisterWindowMessageA(s_PM_REGISTER_1001bb88);
  return;
}


// ---- FUN_10009ac5 @ 10009ac5

void FUN_10009ac5(void)

{
  FUN_10009acf();
  return;
}


// ---- FUN_10009acf @ 10009acf

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10009acf(void)

{
  _DAT_100234b0 = RegisterWindowMessageA(s_PM_REGISTER_CONTROLLER_1001bb94);
  return;
}


// ---- FUN_10009ae4 @ 10009ae4

void FUN_10009ae4(void)

{
  FUN_10009aee();
  return;
}


// ---- FUN_10009aee @ 10009aee

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10009aee(void)

{
  _DAT_1002330c = RegisterWindowMessageA(s_PM_REGISTER_USERNAME_1001bbac);
  return;
}


// ---- FUN_10009b03 @ 10009b03

void FUN_10009b03(void)

{
  FUN_10009b0d();
  return;
}


// ---- FUN_10009b0d @ 10009b0d

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10009b0d(void)

{
  _DAT_100234c0 = RegisterWindowMessageA(s_PM_SEM_REGISTER_1001bbc4);
  return;
}


// ---- FUN_10009b22 @ 10009b22

void FUN_10009b22(void)

{
  FUN_10009b2c();
  return;
}


// ---- FUN_10009b2c @ 10009b2c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10009b2c(void)

{
  _DAT_100234e4 = RegisterWindowMessageA(s_PM_REVOKE_REGISTRATION_1001bbd4);
  return;
}


// ---- FUN_10009b41 @ 10009b41

void FUN_10009b41(void)

{
  FUN_10009b4b();
  return;
}


// ---- FUN_10009b4b @ 10009b4b

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10009b4b(void)

{
  _DAT_10023370 = RegisterWindowMessageA(s_PM_MOUSE_ADJUSTABLE_1001bbec);
  return;
}


// ---- FUN_10009b60 @ 10009b60

void FUN_10009b60(void)

{
  FUN_10009b6a();
  return;
}


// ---- FUN_10009b6a @ 10009b6a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10009b6a(void)

{
  _DAT_10023248 = RegisterWindowMessageA(s_PM_LOG_OFF_1001bc00);
  return;
}


// ---- FUN_10009b7f @ 10009b7f

void FUN_10009b7f(void)

{
  FUN_10009b89();
  return;
}


// ---- FUN_10009b89 @ 10009b89

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10009b89(void)

{
  _DAT_10023310 = RegisterWindowMessageA(s_PM_LOG_ON_1001bc0c);
  return;
}


// ---- FUN_10009b9e @ 10009b9e

void FUN_10009b9e(void)

{
  FUN_10009ba8();
  return;
}


// ---- FUN_10009ba8 @ 10009ba8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10009ba8(void)

{
  _DAT_10023230 = RegisterWindowMessageA(s_PM_GET_SERIAL_NUMBER_1001bc18);
  return;
}


// ---- FUN_10009bbd @ 10009bbd

void FUN_10009bbd(void)

{
  FUN_10009bc7();
  return;
}


// ---- FUN_10009bc7 @ 10009bc7

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10009bc7(void)

{
  _DAT_1002352c = RegisterWindowMessageA(s_PM_GET_DIRECTORIES_1001bc30);
  return;
}


// ---- FUN_10009bdc @ 10009bdc

void FUN_10009bdc(void)

{
  FUN_10009be6();
  return;
}


// ---- FUN_10009be6 @ 10009be6

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10009be6(void)

{
  _DAT_10023378 = RegisterWindowMessageA(s_PM_GET_COMMAND_GROUP_1001bc44);
  return;
}


// ---- FUN_10009bfb @ 10009bfb

void FUN_10009bfb(void)

{
  FUN_10009c05();
  return;
}


// ---- FUN_10009c05 @ 10009c05

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10009c05(void)

{
  _DAT_100232ac = RegisterWindowMessageA(s_PM_GET_STRING_1001bc5c);
  return;
}


// ---- FUN_10009c1a @ 10009c1a

void FUN_10009c1a(void)

{
  FUN_10009c24();
  return;
}


// ---- FUN_10009c24 @ 10009c24

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10009c24(void)

{
  _DAT_10023510 = RegisterWindowMessageA(s_PM_GET_NAME_1001bc6c);
  return;
}


// ---- FUN_10009c39 @ 10009c39

void FUN_10009c39(void)

{
  FUN_10009c43();
  return;
}


// ---- FUN_10009c43 @ 10009c43

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10009c43(void)

{
  _DAT_10023324 = RegisterWindowMessageA(s_PM_GET_MNEMONIC_1001bc78);
  return;
}


// ---- FUN_10009c58 @ 10009c58

void FUN_10009c58(void)

{
  FUN_10009c62();
  return;
}


// ---- FUN_10009c62 @ 10009c62

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10009c62(void)

{
  _DAT_100234e8 = RegisterWindowMessageA(s_PM_GET_VALUE_1001bc88);
  return;
}


// ---- FUN_10009c77 @ 10009c77

void FUN_10009c77(void)

{
  FUN_10009c81();
  return;
}


// ---- FUN_10009c81 @ 10009c81

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10009c81(void)

{
  _DAT_10023330 = RegisterWindowMessageA(s_PM_SET_BEAMSHIFT_DISTANCE_1001bc98);
  return;
}


// ---- FUN_10009c96 @ 10009c96

void FUN_10009c96(void)

{
  FUN_10009ca0();
  return;
}


// ---- FUN_10009ca0 @ 10009ca0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10009ca0(void)

{
  _DAT_10023294 = RegisterWindowMessageA(s_PM_STAGE_GOTO_1001bcb4);
  return;
}


// ---- FUN_10009cb5 @ 10009cb5

void FUN_10009cb5(void)

{
  FUN_10009cbf();
  return;
}


// ---- FUN_10009cbf @ 10009cbf

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10009cbf(void)

{
  _DAT_100232cc = RegisterWindowMessageA(s_PM_GET_STAGE_POSITION_1001bcc4);
  return;
}


// ---- FUN_10009cd4 @ 10009cd4

void FUN_10009cd4(void)

{
  FUN_10009cde();
  return;
}


// ---- FUN_10009cde @ 10009cde

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10009cde(void)

{
  _DAT_100232d8 = RegisterWindowMessageA(s_PM_GET_VALUE_AS_STRING_1001bcdc);
  return;
}


// ---- FUN_10009cf3 @ 10009cf3

void FUN_10009cf3(void)

{
  FUN_10009cfd();
  return;
}


// ---- FUN_10009cfd @ 10009cfd

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10009cfd(void)

{
  _DAT_10023304 = RegisterWindowMessageA(s_PM_GET_STATEVALUE_AS_ENGLISH_STR_1001bcf4);
  return;
}


// ---- FUN_10009d12 @ 10009d12

void FUN_10009d12(void)

{
  FUN_10009d1c();
  return;
}


// ---- FUN_10009d1c @ 10009d1c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10009d1c(void)

{
  _DAT_10023274 = RegisterWindowMessageA(s_PM_GET_ERROR_1001bd18);
  return;
}


// ---- FUN_10009d31 @ 10009d31

void FUN_10009d31(void)

{
  FUN_10009d3b();
  return;
}


// ---- FUN_10009d3b @ 10009d3b

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10009d3b(void)

{
  _DAT_10023334 = RegisterWindowMessageA(s_PM_NEXT_MAG_TABLE_1001bd28);
  return;
}


// ---- FUN_10009d50 @ 10009d50

void FUN_10009d50(void)

{
  FUN_10009d5a();
  return;
}


// ---- FUN_10009d5a @ 10009d5a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10009d5a(void)

{
  _DAT_100234b8 = RegisterWindowMessageA(s_PM_END_MAG_TABLE_1001bd3c);
  return;
}


// ---- FUN_10009d6f @ 10009d6f

void FUN_10009d6f(void)

{
  FUN_10009d79();
  return;
}


// ---- FUN_10009d79 @ 10009d79

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10009d79(void)

{
  _DAT_100232f4 = RegisterWindowMessageA(s_PM_CENTRE_FEATURE_ORIGINAL_MAG_1001bd50);
  return;
}


// ---- FUN_10009d8e @ 10009d8e

void FUN_10009d8e(void)

{
  FUN_10009d98();
  return;
}


// ---- FUN_10009d98 @ 10009d98

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10009d98(void)

{
  _DAT_10023210 = RegisterWindowMessageA(s_PM_GET_MACHINE_TYPE_1001bd70);
  return;
}


// ---- FUN_10009dad @ 10009dad

void FUN_10009dad(void)

{
  FUN_10009db7();
  return;
}


// ---- FUN_10009db7 @ 10009db7

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10009db7(void)

{
  _DAT_10023214 = RegisterWindowMessageA(s_PM_GET_HANDLES_1001bd84);
  return;
}


// ---- FUN_10009dcc @ 10009dcc

void FUN_10009dcc(void)

{
  FUN_10009dd6();
  return;
}


// ---- FUN_10009dd6 @ 10009dd6

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10009dd6(void)

{
  _DAT_100232c0 = RegisterWindowMessageA(s_PM_GET_STATES_1001bd94);
  return;
}


// ---- FUN_10009deb @ 10009deb

void FUN_10009deb(void)

{
  FUN_10009df5();
  return;
}


// ---- FUN_10009df5 @ 10009df5

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10009df5(void)

{
  _DAT_100234d0 = RegisterWindowMessageA(s_PM_GET_LOW_LIMIT_1001bda4);
  return;
}


// ---- FUN_10009e0a @ 10009e0a

void FUN_10009e0a(void)

{
  FUN_10009e14();
  return;
}


// ---- FUN_10009e14 @ 10009e14

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10009e14(void)

{
  _DAT_100234dc = RegisterWindowMessageA(s_PM_GET_LICENCE_1001bdb8);
  return;
}


// ---- FUN_10009e29 @ 10009e29

void FUN_10009e29(void)

{
  FUN_10009e33();
  return;
}


// ---- FUN_10009e33 @ 10009e33

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10009e33(void)

{
  _DAT_100233dc = RegisterWindowMessageA(s_PM_GET_PARAM_GROUP_1001bdc8);
  return;
}


// ---- FUN_10009e48 @ 10009e48

void FUN_10009e48(void)

{
  FUN_10009e52();
  return;
}


// ---- FUN_10009e52 @ 10009e52

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10009e52(void)

{
  _DAT_10023328 = RegisterWindowMessageA(s_PM_GET_PARAM_COUNT_1001bddc);
  return;
}


// ---- FUN_10009e67 @ 10009e67

void FUN_10009e67(void)

{
  FUN_10009e71();
  return;
}


// ---- FUN_10009e71 @ 10009e71

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10009e71(void)

{
  _DAT_100232b8 = RegisterWindowMessageA(s_PM_GET_XY_VALUES_1001bdf0);
  return;
}


// ---- FUN_10009e86 @ 10009e86

void FUN_10009e86(void)

{
  FUN_10009e90();
  return;
}


// ---- FUN_10009e90 @ 10009e90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10009e90(void)

{
  _DAT_10023454 = RegisterWindowMessageA(s_PM_SET_XY_VALUES_1001be04);
  return;
}


// ---- FUN_10009ea5 @ 10009ea5

void FUN_10009ea5(void)

{
  FUN_10009eaf();
  return;
}


// ---- FUN_10009eaf @ 10009eaf

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10009eaf(void)

{
  _DAT_1002331c = RegisterWindowMessageA(s_PM_GET_UNITS_STRING_1001be18);
  return;
}


// ---- FUN_10009ec4 @ 10009ec4

void FUN_10009ec4(void)

{
  FUN_10009ece();
  return;
}


// ---- FUN_10009ece @ 10009ece

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10009ece(void)

{
  _DAT_100235b0 = RegisterWindowMessageA(s_PM_GET_UNSCALED_VALUE_1001be2c);
  return;
}


// ---- FUN_10009ee3 @ 10009ee3

void FUN_10009ee3(void)

{
  FUN_10009eed();
  return;
}


// ---- FUN_10009eed @ 10009eed

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10009eed(void)

{
  _DAT_100233c4 = RegisterWindowMessageA(s_PM_GET_SCALED_VALUE_1001be44);
  return;
}


// ---- FUN_10009f02 @ 10009f02

void FUN_10009f02(void)

{
  FUN_10009f0c();
  return;
}


// ---- FUN_10009f0c @ 10009f0c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10009f0c(void)

{
  _DAT_1002359c = RegisterWindowMessageA(s_PM_SET_VALUE_1001be58);
  return;
}


// ---- FUN_10009f21 @ 10009f21

void FUN_10009f21(void)

{
  FUN_10009f2b();
  return;
}


// ---- FUN_10009f2b @ 10009f2b

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10009f2b(void)

{
  _DAT_10023460 = RegisterWindowMessageA(s_PM_SET_COARSE_1001be68);
  return;
}


// ---- FUN_10009f40 @ 10009f40

void FUN_10009f40(void)

{
  FUN_10009f4a();
  return;
}


// ---- FUN_10009f4a @ 10009f4a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10009f4a(void)

{
  _DAT_1002348c = RegisterWindowMessageA(s_PM_GET_COARSE_1001be78);
  return;
}


// ---- FUN_10009f5f @ 10009f5f

void FUN_10009f5f(void)

{
  FUN_10009f69();
  return;
}


// ---- FUN_10009f69 @ 10009f69

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10009f69(void)

{
  _DAT_10023480 = RegisterWindowMessageA(s_PM_SET_NOTIFY_1001be88);
  return;
}


// ---- FUN_10009f7e @ 10009f7e

void FUN_10009f7e(void)

{
  FUN_10009f88();
  return;
}


// ---- FUN_10009f88 @ 10009f88

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10009f88(void)

{
  _DAT_10023498 = RegisterWindowMessageA(s_PM_SET_USER_MODE_1001be98);
  return;
}


// ---- FUN_10009f9d @ 10009f9d

void FUN_10009f9d(void)

{
  FUN_10009fa7();
  return;
}


// ---- FUN_10009fa7 @ 10009fa7

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10009fa7(void)

{
  _DAT_100235dc = RegisterWindowMessageA(s_PM_LEFT_MOUSE_ADJUST_SETUP_1001beac);
  return;
}


// ---- FUN_10009fbc @ 10009fbc

void FUN_10009fbc(void)

{
  FUN_10009fc6();
  return;
}


// ---- FUN_10009fc6 @ 10009fc6

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10009fc6(void)

{
  _DAT_10023360 = RegisterWindowMessageA(s_PM_RIGHT_MOUSE_ADJUST_SETUP_1001bec8);
  return;
}


// ---- FUN_10009fdb @ 10009fdb

void FUN_10009fdb(void)

{
  FUN_10009fe5();
  return;
}


// ---- FUN_10009fe5 @ 10009fe5

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10009fe5(void)

{
  _DAT_10023544 = RegisterWindowMessageA(s_PM_MOUSE_ADJUST_START_1001bee4);
  return;
}


// ---- FUN_10009ffa @ 10009ffa

void FUN_10009ffa(void)

{
  FUN_1000a004();
  return;
}


// ---- FUN_1000a004 @ 1000a004

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000a004(void)

{
  _DAT_100235b4 = RegisterWindowMessageA(s_PM_IS_ENABLED_1001befc);
  return;
}


// ---- FUN_1000a019 @ 1000a019

void FUN_1000a019(void)

{
  FUN_1000a023();
  return;
}


// ---- FUN_1000a023 @ 1000a023

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000a023(void)

{
  _DAT_10023478 = RegisterWindowMessageA(s_PM_IS_Y_OF_XY_1001bf0c);
  return;
}


// ---- FUN_1000a038 @ 1000a038

void FUN_1000a038(void)

{
  FUN_1000a042();
  return;
}


// ---- FUN_1000a042 @ 1000a042

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000a042(void)

{
  _DAT_100235d4 = RegisterWindowMessageA(s_PM_IS_VECTOR_1001bf1c);
  return;
}


// ---- FUN_1000a057 @ 1000a057

void FUN_1000a057(void)

{
  FUN_1000a061();
  return;
}


// ---- FUN_1000a061 @ 1000a061

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000a061(void)

{
  _DAT_10023488 = RegisterWindowMessageA(s_PM_IS_VISIBLE_1001bf2c);
  return;
}


// ---- FUN_1000a076 @ 1000a076

void FUN_1000a076(void)

{
  FUN_1000a080();
  return;
}


// ---- FUN_1000a080 @ 1000a080

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000a080(void)

{
  _DAT_10023388 = RegisterWindowMessageA(s_PM_IS_READ_ONLY_1001bf3c);
  return;
}


// ---- FUN_1000a095 @ 1000a095

void FUN_1000a095(void)

{
  FUN_1000a09f();
  return;
}


// ---- FUN_1000a09f @ 1000a09f

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000a09f(void)

{
  _DAT_1002346c = RegisterWindowMessageA(s_PM_IS_ENTRY_ONLY_1001bf4c);
  return;
}


// ---- FUN_1000a0b4 @ 1000a0b4

void FUN_1000a0b4(void)

{
  FUN_1000a0be();
  return;
}


// ---- FUN_1000a0be @ 1000a0be

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000a0be(void)

{
  _DAT_100233e4 = RegisterWindowMessageA(s_PM_IS_READ_WRITE_1001bf60);
  return;
}


// ---- FUN_1000a0d3 @ 1000a0d3

void FUN_1000a0d3(void)

{
  FUN_1000a0dd();
  return;
}


// ---- FUN_1000a0dd @ 1000a0dd

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000a0dd(void)

{
  _DAT_10023564 = RegisterWindowMessageA(s_PM_PARAMETER_CLICK_1001bf74);
  return;
}


// ---- FUN_1000a0f2 @ 1000a0f2

void FUN_1000a0f2(void)

{
  FUN_1000a0fc();
  return;
}


// ---- FUN_1000a0fc @ 1000a0fc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000a0fc(void)

{
  _DAT_100234c8 = RegisterWindowMessageA(s_PM_BUTTON_PRIVILEDGE_1001bf88);
  return;
}


// ---- FUN_1000a111 @ 1000a111

void FUN_1000a111(void)

{
  FUN_1000a11b();
  return;
}


// ---- FUN_1000a11b @ 1000a11b

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000a11b(void)

{
  _DAT_10023514 = RegisterWindowMessageA(s_PM_COMMON_TOOLBAR_FLAG_1001bfa0);
  return;
}


// ---- FUN_1000a130 @ 1000a130

void FUN_1000a130(void)

{
  FUN_1000a13a();
  return;
}


// ---- FUN_1000a13a @ 1000a13a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000a13a(void)

{
  _DAT_100234ec = RegisterWindowMessageA(s_PM_SERVER_HELP_1001bfb8);
  return;
}


// ---- FUN_1000a14f @ 1000a14f

void FUN_1000a14f(void)

{
  FUN_1000a159();
  return;
}


// ---- FUN_1000a159 @ 1000a159

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000a159(void)

{
  _DAT_1002327c = RegisterWindowMessageA(s_PM_PARAMETER_DOUBLE_CLICK_1001bfc8);
  return;
}


// ---- FUN_1000a16e @ 1000a16e

void FUN_1000a16e(void)

{
  FUN_1000a178();
  return;
}


// ---- FUN_1000a178 @ 1000a178

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000a178(void)

{
  _DAT_100232c8 = RegisterWindowMessageA(s_PM_MENU_MORE_CLICK_1001bfe4);
  return;
}


// ---- FUN_1000a18d @ 1000a18d

void FUN_1000a18d(void)

{
  FUN_1000a197();
  return;
}


// ---- FUN_1000a197 @ 1000a197

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000a197(void)

{
  _DAT_1002341c = RegisterWindowMessageA(s_PM_PARAMETER_RIGHT_CLICK_1001bff8);
  return;
}


// ---- FUN_1000a1ac @ 1000a1ac

void FUN_1000a1ac(void)

{
  FUN_1000a1b6();
  return;
}


// ---- FUN_1000a1b6 @ 1000a1b6

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000a1b6(void)

{
  _DAT_100235d0 = RegisterWindowMessageA(s_PM_TRANSLATE_MNEMONIC_1001c014);
  return;
}


// ---- FUN_1000a1cb @ 1000a1cb

void FUN_1000a1cb(void)

{
  FUN_1000a1d5();
  return;
}


// ---- FUN_1000a1d5 @ 1000a1d5

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000a1d5(void)

{
  _DAT_100233b0 = RegisterWindowMessageA(s_PM_EXECUTE_COMMAND_1001c02c);
  return;
}


// ---- FUN_1000a1ea @ 1000a1ea

void FUN_1000a1ea(void)

{
  FUN_1000a1f4();
  return;
}


// ---- FUN_1000a1f4 @ 1000a1f4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000a1f4(void)

{
  _DAT_1002351c = RegisterWindowMessageA(s_PM_STEP_VALUE_1001c040);
  return;
}


// ---- FUN_1000a209 @ 1000a209

void FUN_1000a209(void)

{
  FUN_1000a213();
  return;
}


// ---- FUN_1000a213 @ 1000a213

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000a213(void)

{
  _DAT_10023308 = RegisterWindowMessageA(s_PM_HELP_MODE_1001c050);
  return;
}


// ---- FUN_1000a228 @ 1000a228

void FUN_1000a228(void)

{
  FUN_1000a232();
  return;
}


// ---- FUN_1000a232 @ 1000a232

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000a232(void)

{
  _DAT_100233bc = RegisterWindowMessageA(s_PM_SERVER_MESSAGE_1001c060);
  return;
}


// ---- FUN_1000a247 @ 1000a247

void FUN_1000a247(void)

{
  FUN_1000a251();
  return;
}


// ---- FUN_1000a251 @ 1000a251

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000a251(void)

{
  _DAT_100234bc = RegisterWindowMessageA(s_PM_AVAILABLE_MACROS_1001c074);
  return;
}


// ---- FUN_1000a266 @ 1000a266

void FUN_1000a266(void)

{
  FUN_1000a270();
  return;
}


// ---- FUN_1000a270 @ 1000a270

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000a270(void)

{
  _DAT_10023588 = RegisterWindowMessageA(s_PM_SET_USER_PREFERENCES_1001c088);
  return;
}


// ---- FUN_1000a285 @ 1000a285

void FUN_1000a285(void)

{
  FUN_1000a28f();
  return;
}


// ---- FUN_1000a28f @ 1000a28f

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000a28f(void)

{
  _DAT_10023464 = RegisterWindowMessageA(s_PM_USER_PREFERENCES_CHANGED_1001c0a0);
  return;
}


// ---- FUN_1000a2a4 @ 1000a2a4

void FUN_1000a2a4(void)

{
  FUN_1000a2ae();
  return;
}


// ---- FUN_1000a2ae @ 1000a2ae

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000a2ae(void)

{
  _DAT_100233b4 = RegisterWindowMessageA(s_PM_NEXT_VP_UNITS_1001c0bc);
  return;
}


// ---- FUN_1000a2c3 @ 1000a2c3

void FUN_1000a2c3(void)

{
  FUN_1000a2cd();
  return;
}


// ---- FUN_1000a2cd @ 1000a2cd

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000a2cd(void)

{
  _DAT_1002344c = RegisterWindowMessageA(s_PM_NEXT_PRESSURE_UNITS_1001c0d0);
  return;
}


// ---- FUN_1000a2e2 @ 1000a2e2

void FUN_1000a2e2(void)

{
  FUN_1000a2ec();
  return;
}


// ---- FUN_1000a2ec @ 1000a2ec

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000a2ec(void)

{
  _DAT_1002347c = RegisterWindowMessageA(s_PM_GET_USER_PREFERENCES_1001c0e8);
  return;
}


// ---- FUN_1000a301 @ 1000a301

void FUN_1000a301(void)

{
  FUN_1000a30b();
  return;
}


// ---- FUN_1000a30b @ 1000a30b

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000a30b(void)

{
  _DAT_100232fc = RegisterWindowMessageA(s_PM_SET_APERTURE_TABLE_1001c100);
  return;
}


// ---- FUN_1000a320 @ 1000a320

void FUN_1000a320(void)

{
  FUN_1000a32a();
  return;
}


// ---- FUN_1000a32a @ 1000a32a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000a32a(void)

{
  _DAT_10023314 = RegisterWindowMessageA(s_PM_GET_APERTURE_TABLE_1001c118);
  return;
}


// ---- FUN_1000a33f @ 1000a33f

void FUN_1000a33f(void)

{
  FUN_1000a349();
  return;
}


// ---- FUN_1000a349 @ 1000a349

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000a349(void)

{
  _DAT_100233c8 = RegisterWindowMessageA(s_PM_APERTURE_TABLE_CHANGED_1001c130);
  return;
}


// ---- FUN_1000a35e @ 1000a35e

void FUN_1000a35e(void)

{
  FUN_1000a368();
  return;
}


// ---- FUN_1000a368 @ 1000a368

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000a368(void)

{
  _DAT_10023368 = RegisterWindowMessageA(s_PM_LUT_EDITOR_1001c14c);
  return;
}


// ---- FUN_1000a37d @ 1000a37d

void FUN_1000a37d(void)

{
  FUN_1000a387();
  return;
}


// ---- FUN_1000a387 @ 1000a387

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000a387(void)

{
  _DAT_10023484 = RegisterWindowMessageA(s_PM_SET_LUT_POINT_1001c15c);
  return;
}


// ---- FUN_1000a39c @ 1000a39c

void FUN_1000a39c(void)

{
  FUN_1000a3a6();
  return;
}


// ---- FUN_1000a3a6 @ 1000a3a6

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000a3a6(void)

{
  _DAT_1002329c = RegisterWindowMessageA(s_PM_SET_LUT_RGB_1001c170);
  return;
}


// ---- FUN_1000a3bb @ 1000a3bb

void FUN_1000a3bb(void)

{
  FUN_1000a3c5();
  return;
}


// ---- FUN_1000a3c5 @ 1000a3c5

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000a3c5(void)

{
  _DAT_10023270 = RegisterWindowMessageA(s_PM_SET_LUT_COLOR_1001c180);
  return;
}


// ---- FUN_1000a3da @ 1000a3da

void FUN_1000a3da(void)

{
  FUN_1000a3e4();
  return;
}


// ---- FUN_1000a3e4 @ 1000a3e4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000a3e4(void)

{
  _DAT_100233d8 = RegisterWindowMessageA(s_PM_SET_LUT_BC_1001c194);
  return;
}


// ---- FUN_1000a3f9 @ 1000a3f9

void FUN_1000a3f9(void)

{
  FUN_1000a403();
  return;
}


// ---- FUN_1000a403 @ 1000a403

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000a403(void)

{
  _DAT_100235c8 = RegisterWindowMessageA(s_PM_SET_LUT_INVERSE_1001c1a4);
  return;
}


// ---- FUN_1000a418 @ 1000a418

void FUN_1000a418(void)

{
  FUN_1000a422();
  return;
}


// ---- FUN_1000a422 @ 1000a422

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000a422(void)

{
  _DAT_100235cc = RegisterWindowMessageA(s_PM_SET_LUT_LINEAR_1001c1b8);
  return;
}


// ---- FUN_1000a437 @ 1000a437

void FUN_1000a437(void)

{
  FUN_1000a441();
  return;
}


// ---- FUN_1000a441 @ 1000a441

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000a441(void)

{
  _DAT_100235c4 = RegisterWindowMessageA(s_PM_SET_LUT_GAMMA_1001c1cc);
  return;
}


// ---- FUN_1000a456 @ 1000a456

void FUN_1000a456(void)

{
  FUN_1000a460();
  return;
}


// ---- FUN_1000a460 @ 1000a460

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000a460(void)

{
  _DAT_10023578 = RegisterWindowMessageA(s_PM_DRAW_GREY_WEDGE_1001c1e0);
  return;
}


// ---- FUN_1000a475 @ 1000a475

void FUN_1000a475(void)

{
  FUN_1000a47f();
  return;
}


// ---- FUN_1000a47f @ 1000a47f

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000a47f(void)

{
  _DAT_100234d4 = RegisterWindowMessageA(s_PM_GET_IMAGE_PIXEL_1001c1f4);
  return;
}


// ---- FUN_1000a494 @ 1000a494

void FUN_1000a494(void)

{
  FUN_1000a49e();
  return;
}


// ---- FUN_1000a49e @ 1000a49e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000a49e(void)

{
  _DAT_1002324c = RegisterWindowMessageA(s_PM_RGB_READ_1001c208);
  return;
}


// ---- FUN_1000a4b3 @ 1000a4b3

void FUN_1000a4b3(void)

{
  FUN_1000a4bd();
  return;
}


// ---- FUN_1000a4bd @ 1000a4bd

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000a4bd(void)

{
  _DAT_1002320c = RegisterWindowMessageA(s_PM_LUT_LOAD_1001c214);
  return;
}


// ---- FUN_1000a4d2 @ 1000a4d2

void FUN_1000a4d2(void)

{
  FUN_1000a4dc();
  return;
}


// ---- FUN_1000a4dc @ 1000a4dc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000a4dc(void)

{
  _DAT_10023538 = RegisterWindowMessageA(s_PM_LUT_READ_1001c220);
  return;
}


// ---- FUN_1000a4f1 @ 1000a4f1

void FUN_1000a4f1(void)

{
  FUN_1000a4fb();
  return;
}


// ---- FUN_1000a4fb @ 1000a4fb

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000a4fb(void)

{
  _DAT_10023508 = RegisterWindowMessageA(s_PM_READ_COLOR_1001c22c);
  return;
}


// ---- FUN_1000a510 @ 1000a510

void FUN_1000a510(void)

{
  FUN_1000a51a();
  return;
}


// ---- FUN_1000a51a @ 1000a51a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000a51a(void)

{
  _DAT_100233cc = RegisterWindowMessageA(s_PM_LUT_FILL_1001c23c);
  return;
}


// ---- FUN_1000a52f @ 1000a52f

void FUN_1000a52f(void)

{
  FUN_1000a539();
  return;
}


// ---- FUN_1000a539 @ 1000a539

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000a539(void)

{
  _DAT_10023490 = RegisterWindowMessageA(s_PM_LUT_QLIN_1001c248);
  return;
}


// ---- FUN_1000a54e @ 1000a54e

void FUN_1000a54e(void)

{
  FUN_1000a558();
  return;
}


// ---- FUN_1000a558 @ 1000a558

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000a558(void)

{
  _DAT_100234f4 = RegisterWindowMessageA(s_PM_LUT_QINV_1001c254);
  return;
}


// ---- FUN_1000a56d @ 1000a56d

void FUN_1000a56d(void)

{
  FUN_1000a577();
  return;
}


// ---- FUN_1000a577 @ 1000a577

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000a577(void)

{
  _DAT_1002349c = RegisterWindowMessageA(s_PM_LUT_SAVE_1001c260);
  return;
}


// ---- FUN_1000a58c @ 1000a58c

void FUN_1000a58c(void)

{
  FUN_1000a596();
  return;
}


// ---- FUN_1000a596 @ 1000a596

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000a596(void)

{
  _DAT_10023594 = RegisterWindowMessageA(s_PM_LUT_RESTORE_1001c26c);
  return;
}


// ---- FUN_1000a5ab @ 1000a5ab

void FUN_1000a5ab(void)

{
  FUN_1000a5b5();
  return;
}


// ---- FUN_1000a5b5 @ 1000a5b5

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000a5b5(void)

{
  _DAT_10023598 = RegisterWindowMessageA(s_PM_READ_COLOR_LUT_1001c27c);
  return;
}


// ---- FUN_1000a5ca @ 1000a5ca

void FUN_1000a5ca(void)

{
  FUN_1000a5d4();
  return;
}


// ---- FUN_1000a5d4 @ 1000a5d4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000a5d4(void)

{
  _DAT_100234ac = RegisterWindowMessageA(s_PM_GET_PIXEL_COLOUR_1001c290);
  return;
}


// ---- FUN_1000a5e9 @ 1000a5e9

void FUN_1000a5e9(void)

{
  FUN_1000a5f3();
  return;
}


// ---- FUN_1000a5f3 @ 1000a5f3

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000a5f3(void)

{
  _DAT_100233e8 = RegisterWindowMessageA(s_PM_LOAD_LUT_FILE_1001c2a4);
  return;
}


// ---- FUN_1000a608 @ 1000a608

void FUN_1000a608(void)

{
  FUN_1000a612();
  return;
}


// ---- FUN_1000a612 @ 1000a612

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000a612(void)

{
  _DAT_100232c4 = RegisterWindowMessageA(s_PM_DO_FEATURESCAN_1001c2b8);
  return;
}


// ---- FUN_1000a627 @ 1000a627

void FUN_1000a627(void)

{
  FUN_1000a631();
  return;
}


// ---- FUN_1000a631 @ 1000a631

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000a631(void)

{
  _DAT_10023208 = RegisterWindowMessageA(s_PM_STOP_FEATURESCAN_1001c2cc);
  return;
}


// ---- FUN_1000a646 @ 1000a646

void FUN_1000a646(void)

{
  FUN_1000a650();
  return;
}


// ---- FUN_1000a650 @ 1000a650

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000a650(void)

{
  _DAT_100234cc = RegisterWindowMessageA(s_PM_D_ZONE_DATA_CHANGE_1001c2e0);
  return;
}


// ---- FUN_1000a665 @ 1000a665

void FUN_1000a665(void)

{
  FUN_1000a66f();
  return;
}


// ---- FUN_1000a66f @ 1000a66f

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000a66f(void)

{
  _DAT_1002332c = RegisterWindowMessageA(s_PM_D_GET_ZONES_DATA_1001c2f8);
  return;
}


// ---- FUN_1000a684 @ 1000a684

void FUN_1000a684(void)

{
  FUN_1000a68e();
  return;
}


// ---- FUN_1000a68e @ 1000a68e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000a68e(void)

{
  _DAT_100234f0 = RegisterWindowMessageA(s_PM_D_SET_ZONES_DATA_1001c30c);
  return;
}


// ---- FUN_1000a6a3 @ 1000a6a3

void FUN_1000a6a3(void)

{
  FUN_1000a6ad();
  return;
}


// ---- FUN_1000a6ad @ 1000a6ad

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000a6ad(void)

{
  _DAT_10023458 = RegisterWindowMessageA(s_PM_D_GET_LICENCES_1001c320);
  return;
}


// ---- FUN_1000a6c2 @ 1000a6c2

void FUN_1000a6c2(void)

{
  FUN_1000a6cc();
  return;
}


// ---- FUN_1000a6cc @ 1000a6cc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000a6cc(void)

{
  _DAT_10023340 = RegisterWindowMessageA(s_PM_D_SET_LICENCES_1001c334);
  return;
}


// ---- FUN_1000a6e1 @ 1000a6e1

void FUN_1000a6e1(void)

{
  FUN_1000a6eb();
  return;
}


// ---- FUN_1000a6eb @ 1000a6eb

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000a6eb(void)

{
  _DAT_1002356c = RegisterWindowMessageA(s_PM_D_GET_ADMIN_CONFIG_1001c348);
  return;
}


// ---- FUN_1000a700 @ 1000a700

void FUN_1000a700(void)

{
  FUN_1000a70a();
  return;
}


// ---- FUN_1000a70a @ 1000a70a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000a70a(void)

{
  _DAT_10023220 = RegisterWindowMessageA(s_PM_D_SET_ADMIN_CONFIG_1001c360);
  return;
}


// ---- FUN_1000a71f @ 1000a71f

void FUN_1000a71f(void)

{
  FUN_1000a729();
  return;
}


// ---- FUN_1000a729 @ 1000a729

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000a729(void)

{
  _DAT_100233f8 = RegisterWindowMessageA(s_PM_ADMIN_FUNCTION_1001c378);
  return;
}


// ---- FUN_1000a73e @ 1000a73e

void FUN_1000a73e(void)

{
  FUN_1000a748();
  return;
}


// ---- FUN_1000a748 @ 1000a748

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000a748(void)

{
  _DAT_100232a8 = RegisterWindowMessageA(s_PM_GET_MACRO_LINKS_1001c38c);
  return;
}


// ---- FUN_1000a75d @ 1000a75d

void FUN_1000a75d(void)

{
  FUN_1000a767();
  return;
}


// ---- FUN_1000a767 @ 1000a767

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000a767(void)

{
  _DAT_10023344 = RegisterWindowMessageA(s_PM_GET_UIF_LINKS_1001c3a0);
  return;
}


// ---- FUN_1000a77c @ 1000a77c

void FUN_1000a77c(void)

{
  FUN_1000a786();
  return;
}


// ---- FUN_1000a786 @ 1000a786

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000a786(void)

{
  _DAT_100233fc = RegisterWindowMessageA(s_PM_POINT_AS_ZONE_1001c3b4);
  return;
}


// ---- FUN_1000a79b @ 1000a79b

void FUN_1000a79b(void)

{
  FUN_1000a7a5();
  return;
}


// ---- FUN_1000a7a5 @ 1000a7a5

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000a7a5(void)

{
  _DAT_100235c0 = RegisterWindowMessageA(s_PM_GET_HELP_PATH_1001c3c8);
  return;
}


// ---- FUN_1000a7ba @ 1000a7ba

void FUN_1000a7ba(void)

{
  FUN_1000a7c4();
  return;
}


// ---- FUN_1000a7c4 @ 1000a7c4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000a7c4(void)

{
  _DAT_1002336c = RegisterWindowMessageA(s_PM_SAVE_TIFF_1001c3dc);
  return;
}


// ---- FUN_1000a7d9 @ 1000a7d9

void FUN_1000a7d9(void)

{
  FUN_1000a7e3();
  return;
}


// ---- FUN_1000a7e3 @ 1000a7e3

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000a7e3(void)

{
  _DAT_10023528 = RegisterWindowMessageA(s_PM_LOAD_TIFF_1001c3ec);
  return;
}


// ---- FUN_1000a7f8 @ 1000a7f8

void FUN_1000a7f8(void)

{
  FUN_1000a802();
  return;
}


// ---- FUN_1000a802 @ 1000a802

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000a802(void)

{
  _DAT_1002326c = RegisterWindowMessageA(s_PM_TIFF_TO_BMP_1001c3fc);
  return;
}


// ---- FUN_1000a817 @ 1000a817

void FUN_1000a817(void)

{
  FUN_1000a821();
  return;
}


// ---- FUN_1000a821 @ 1000a821

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000a821(void)

{
  _DAT_1002322c = RegisterWindowMessageA(s_PM_IMAGE_TO_FILE_1001c40c);
  return;
}


// ---- FUN_1000a836 @ 1000a836

void FUN_1000a836(void)

{
  FUN_1000a840();
  return;
}


// ---- FUN_1000a840 @ 1000a840

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000a840(void)

{
  _DAT_100235e0 = RegisterWindowMessageA(s_PM_RAW_IMAGE_TO_FILE_1001c420);
  return;
}


// ---- FUN_1000a855 @ 1000a855

void FUN_1000a855(void)

{
  FUN_1000a85f();
  return;
}


// ---- FUN_1000a85f @ 1000a85f

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000a85f(void)

{
  _DAT_10023254 = RegisterWindowMessageA(s_PM_IMAGE_FROM_FILE_1001c438);
  return;
}


// ---- FUN_1000a874 @ 1000a874

void FUN_1000a874(void)

{
  FUN_1000a87e();
  return;
}


// ---- FUN_1000a87e @ 1000a87e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000a87e(void)

{
  _DAT_10023430 = RegisterWindowMessageA(s_PM_GET_TIFF_HEADER_1001c44c);
  return;
}


// ---- FUN_1000a893 @ 1000a893

void FUN_1000a893(void)

{
  FUN_1000a89d();
  return;
}


// ---- FUN_1000a89d @ 1000a89d

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000a89d(void)

{
  _DAT_100233d4 = RegisterWindowMessageA(s_PM_GET_HISTOGRAM_DATA_1001c460);
  return;
}


// ---- FUN_1000a8b2 @ 1000a8b2

void FUN_1000a8b2(void)

{
  FUN_1000a8bc();
  return;
}


// ---- FUN_1000a8bc @ 1000a8bc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000a8bc(void)

{
  _DAT_1002355c = RegisterWindowMessageA(s_PM_GET_LINE_DATA_1001c478);
  return;
}


// ---- FUN_1000a8d1 @ 1000a8d1

void FUN_1000a8d1(void)

{
  FUN_1000a8db();
  return;
}


// ---- FUN_1000a8db @ 1000a8db

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000a8db(void)

{
  _DAT_10023568 = RegisterWindowMessageA(s_LEO_D_SET_DEF_PRINT_SCALE_1001c48c);
  return;
}


// ---- FUN_1000a8f0 @ 1000a8f0

void FUN_1000a8f0(void)

{
  FUN_1000a8fa();
  return;
}


// ---- FUN_1000a8fa @ 1000a8fa

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000a8fa(void)

{
  _DAT_10023534 = RegisterWindowMessageA(s_PM_PRINT_IMAGE_1001c4a8);
  return;
}


// ---- FUN_1000a90f @ 1000a90f

void FUN_1000a90f(void)

{
  FUN_1000a919();
  return;
}


// ---- FUN_1000a919 @ 1000a919

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000a919(void)

{
  _DAT_100233d0 = RegisterWindowMessageA(s_PM_CLIP_COPY_1001c4b8);
  return;
}


// ---- FUN_1000a92e @ 1000a92e

void FUN_1000a92e(void)

{
  FUN_1000a938();
  return;
}


// ---- FUN_1000a938 @ 1000a938

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000a938(void)

{
  _DAT_10023548 = RegisterWindowMessageA(s_PM_CLIP_INFO_1001c4c8);
  return;
}


// ---- FUN_1000a94d @ 1000a94d

void FUN_1000a94d(void)

{
  FUN_1000a957();
  return;
}


// ---- FUN_1000a957 @ 1000a957

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000a957(void)

{
  _DAT_100232e4 = RegisterWindowMessageA(s_PM_CLIP_PASTE_1001c4d8);
  return;
}


// ---- FUN_1000a96c @ 1000a96c

void FUN_1000a96c(void)

{
  FUN_1000a976();
  return;
}


// ---- FUN_1000a976 @ 1000a976

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000a976(void)

{
  _DAT_10023280 = RegisterWindowMessageA(s_PM_HRRU_PHOTO_1001c4e8);
  return;
}


// ---- FUN_1000a98b @ 1000a98b

void FUN_1000a98b(void)

{
  FUN_1000a995();
  return;
}


// ---- FUN_1000a995 @ 1000a995

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000a995(void)

{
  _DAT_10023234 = RegisterWindowMessageA(s_PM_WOBBLE_REGISTER_1001c4f8);
  return;
}


// ---- FUN_1000a9aa @ 1000a9aa

void FUN_1000a9aa(void)

{
  FUN_1000a9b4();
  return;
}


// ---- FUN_1000a9b4 @ 1000a9b4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000a9b4(void)

{
  _DAT_100233f0 = RegisterWindowMessageA(s_PM_SHOW_FOCUS_DLG_1001c50c);
  return;
}


// ---- FUN_1000a9c9 @ 1000a9c9

void FUN_1000a9c9(void)

{
  FUN_1000a9d3();
  return;
}


// ---- FUN_1000a9d3 @ 1000a9d3

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000a9d3(void)

{
  _DAT_10023264 = RegisterWindowMessageA(s_PM_SHOW_APER_DLG_1001c520);
  return;
}


// ---- FUN_1000a9e8 @ 1000a9e8

void FUN_1000a9e8(void)

{
  FUN_1000a9f2();
  return;
}


// ---- FUN_1000a9f2 @ 1000a9f2

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000a9f2(void)

{
  _DAT_100234fc = RegisterWindowMessageA(s_PM_SHOW_GUN_DLG_1001c534);
  return;
}


// ---- FUN_1000aa07 @ 1000aa07

void FUN_1000aa07(void)

{
  FUN_1000aa11();
  return;
}


// ---- FUN_1000aa11 @ 1000aa11

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000aa11(void)

{
  _DAT_10023298 = RegisterWindowMessageA(s_PM_QUERY_CLOSE_SERVER_1001c544);
  return;
}


// ---- FUN_1000aa26 @ 1000aa26

void FUN_1000aa26(void)

{
  FUN_1000aa30();
  return;
}


// ---- FUN_1000aa30 @ 1000aa30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000aa30(void)

{
  _DAT_10023260 = RegisterWindowMessageA(s_PM_WOBBLE_POPUP_INHIBIT_1001c55c);
  return;
}


// ---- FUN_1000aa45 @ 1000aa45

void FUN_1000aa45(void)

{
  FUN_1000aa4f();
  return;
}


// ---- FUN_1000aa4f @ 1000aa4f

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000aa4f(void)

{
  _DAT_1002343c = RegisterWindowMessageA(s_PM_GET_REGISTRATION_DATA_1001c574);
  return;
}


// ---- FUN_1000aa64 @ 1000aa64

void FUN_1000aa64(void)

{
  FUN_1000aa6e();
  return;
}


// ---- FUN_1000aa6e @ 1000aa6e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000aa6e(void)

{
  _DAT_10023470 = RegisterWindowMessageA(s_PM_SET_REGISTRATION_DATA_1001c590);
  return;
}


// ---- FUN_1000aa83 @ 1000aa83

void FUN_1000aa83(void)

{
  FUN_1000aa8d();
  return;
}


// ---- FUN_1000aa8d @ 1000aa8d

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000aa8d(void)

{
  _DAT_10023400 = RegisterWindowMessageA(s_PM_DELTA_SAMPLE_GOTO_1001c5ac);
  return;
}


// ---- FUN_1000aaa2 @ 1000aaa2

void FUN_1000aaa2(void)

{
  FUN_1000aaac();
  return;
}


// ---- FUN_1000aaac @ 1000aaac

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000aaac(void)

{
  _DAT_1002338c = RegisterWindowMessageA(s_PM_STAGE_LABEL_1001c5c4);
  return;
}


// ---- FUN_1000aac1 @ 1000aac1

void FUN_1000aac1(void)

{
  FUN_1000aacb();
  return;
}


// ---- FUN_1000aacb @ 1000aacb

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000aacb(void)

{
  _DAT_100235bc = RegisterWindowMessageA(s_PM_STAGE_POINT_GOTO_1001c5d4);
  return;
}


// ---- FUN_1000aae0 @ 1000aae0

void FUN_1000aae0(void)

{
  FUN_1000aaea();
  return;
}


// ---- FUN_1000aaea @ 1000aaea

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000aaea(void)

{
  _DAT_10023560 = RegisterWindowMessageA(s_PM_STAGE_POINT_GET_COUNT_1001c5e8);
  return;
}


// ---- FUN_1000aaff @ 1000aaff

void FUN_1000aaff(void)

{
  FUN_1000ab09();
  return;
}


// ---- FUN_1000ab09 @ 1000ab09

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000ab09(void)

{
  _DAT_100232bc = RegisterWindowMessageA(s_PM_STAGE_POINT_GET_INDEX_1001c604);
  return;
}


// ---- FUN_1000ab1e @ 1000ab1e

void FUN_1000ab1e(void)

{
  FUN_1000ab28();
  return;
}


// ---- FUN_1000ab28 @ 1000ab28

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000ab28(void)

{
  _DAT_10023290 = RegisterWindowMessageA(s_PM_STAGE_POINT_GET_DATA_1001c620);
  return;
}


// ---- FUN_1000ab3d @ 1000ab3d

void FUN_1000ab3d(void)

{
  FUN_1000ab47();
  return;
}


// ---- FUN_1000ab47 @ 1000ab47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000ab47(void)

{
  _DAT_100233f4 = RegisterWindowMessageA(s_PM_STAGE_POINT_SET_DATA_1001c638);
  return;
}


// ---- FUN_1000ab5c @ 1000ab5c

void FUN_1000ab5c(void)

{
  FUN_1000ab66();
  return;
}


// ---- FUN_1000ab66 @ 1000ab66

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000ab66(void)

{
  _DAT_10023518 = RegisterWindowMessageA(s_PM_STAGE_POINTS_LIST_CHANGED_1001c650);
  return;
}


// ---- FUN_1000ab7b @ 1000ab7b

void FUN_1000ab7b(void)

{
  FUN_1000ab85();
  return;
}


// ---- FUN_1000ab85 @ 1000ab85

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000ab85(void)

{
  _DAT_10023284 = RegisterWindowMessageA(s_PM_STAGE_POINT_GET_FLAGS_1001c670);
  return;
}


// ---- FUN_1000ab9a @ 1000ab9a

void FUN_1000ab9a(void)

{
  FUN_1000aba4();
  return;
}


// ---- FUN_1000aba4 @ 1000aba4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000aba4(void)

{
  _DAT_10023380 = RegisterWindowMessageA(s_PM_STAGE_POINT_SET_FLAGS_1001c68c);
  return;
}


// ---- FUN_1000abb9 @ 1000abb9

void FUN_1000abb9(void)

{
  FUN_1000abc3();
  return;
}


// ---- FUN_1000abc3 @ 1000abc3

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000abc3(void)

{
  _DAT_100235b8 = RegisterWindowMessageA(s_PM_STAGE_MODE_IS_REGISTERED_1001c6a8);
  return;
}


// ---- FUN_1000abd8 @ 1000abd8

void FUN_1000abd8(void)

{
  FUN_1000abe2();
  return;
}


// ---- FUN_1000abe2 @ 1000abe2

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000abe2(void)

{
  _DAT_1002357c = RegisterWindowMessageA(s_PM_STAGE_POINT_GET_MODE_1001c6c4);
  return;
}


// ---- FUN_1000abf7 @ 1000abf7

void FUN_1000abf7(void)

{
  FUN_1000ac01();
  return;
}


// ---- FUN_1000ac01 @ 1000ac01

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000ac01(void)

{
  _DAT_100234a8 = RegisterWindowMessageA(s_PM_STAGE_SET_MAP_MODE_1001c6dc);
  return;
}


// ---- FUN_1000ac16 @ 1000ac16

void FUN_1000ac16(void)

{
  FUN_1000ac20();
  return;
}


// ---- FUN_1000ac20 @ 1000ac20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000ac20(void)

{
  _DAT_100235ac = RegisterWindowMessageA(s_PM_STAGE_TYPE_DATA_CHANGED_1001c6f4);
  return;
}


// ---- FUN_1000ac35 @ 1000ac35

void FUN_1000ac35(void)

{
  FUN_1000ac3f();
  return;
}


// ---- FUN_1000ac3f @ 1000ac3f

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000ac3f(void)

{
  _DAT_10023258 = RegisterWindowMessageA(s_PM_GET_STAGE_DEFAULT_ROT_CENTRE_1001c710);
  return;
}


// ---- FUN_1000ac54 @ 1000ac54

void FUN_1000ac54(void)

{
  FUN_1000ac5e();
  return;
}


// ---- FUN_1000ac5e @ 1000ac5e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000ac5e(void)

{
  _DAT_100235a8 = RegisterWindowMessageA(s_PM_SRV16_MISC_FUNC_1001c730);
  return;
}


// ---- FUN_1000ac73 @ 1000ac73

void FUN_1000ac73(void)

{
  FUN_1000ac7d();
  return;
}


// ---- FUN_1000ac7d @ 1000ac7d

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000ac7d(void)

{
  _DAT_10023244 = RegisterWindowMessageA(s_PM_GET_KNOB_ASSIGNMENT_1001c744);
  return;
}


// ---- FUN_1000ac92 @ 1000ac92

void FUN_1000ac92(void)

{
  FUN_1000ac9c();
  return;
}


// ---- FUN_1000ac9c @ 1000ac9c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000ac9c(void)

{
  _DAT_10023434 = RegisterWindowMessageA(s_PM_NAVMGR_REQUEST_1001c75c);
  return;
}


// ---- FUN_1000acb1 @ 1000acb1

void FUN_1000acb1(void)

{
  FUN_1000acbb();
  return;
}


// ---- FUN_1000acbb @ 1000acbb

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000acbb(void)

{
  _DAT_10023390 = RegisterWindowMessageA(s_PM_SHOWHIDEDIALOGS_REQUEST_1001c770);
  return;
}


// ---- FUN_1000acd0 @ 1000acd0

void FUN_1000acd0(void)

{
  FUN_1000acda();
  return;
}


// ---- FUN_1000acda @ 1000acda

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000acda(void)

{
  _DAT_10023398 = RegisterWindowMessageA(s_PM_NAVMGR_DONE_1001c78c);
  return;
}


// ---- FUN_1000acef @ 1000acef

void FUN_1000acef(void)

{
  FUN_1000acf9();
  return;
}


// ---- FUN_1000acf9 @ 1000acf9

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000acf9(void)

{
  _DAT_100232a0 = RegisterWindowMessageA(s_LEO_HPAPP_MESSAGE_1001c79c);
  return;
}


// ---- FUN_1000ad0e @ 1000ad0e

void FUN_1000ad0e(void)

{
  FUN_1000ad18();
  return;
}


// ---- FUN_1000ad18 @ 1000ad18

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000ad18(void)

{
  _DAT_10023268 = RegisterWindowMessageA(s_PM_GET_HPAPP_PANEL_DATA_1001c7b0);
  return;
}


// ---- FUN_1000ad2d @ 1000ad2d

void FUN_1000ad2d(void)

{
  FUN_1000ad37();
  return;
}


// ---- FUN_1000ad37 @ 1000ad37

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000ad37(void)

{
  _DAT_1002335c = RegisterWindowMessageA(s_PM_HPAPP_FUNC_1001c7c8);
  return;
}


// ---- FUN_1000ad4c @ 1000ad4c

void FUN_1000ad4c(void)

{
  FUN_1000ad56();
  return;
}


// ---- FUN_1000ad56 @ 1000ad56

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000ad56(void)

{
  _DAT_100233e0 = RegisterWindowMessageA(s_PM_GET_CAL_COL_DATA_1001c7d8);
  return;
}


// ---- FUN_1000ad6b @ 1000ad6b

void FUN_1000ad6b(void)

{
  FUN_1000ad75();
  return;
}


// ---- FUN_1000ad75 @ 1000ad75

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000ad75(void)

{
  _DAT_1002358c = RegisterWindowMessageA(s_PM_CHANGE_IMAGE_DIRECTORY_1001c7ec);
  return;
}


// ---- FUN_1000ad8a @ 1000ad8a

void FUN_1000ad8a(void)

{
  FUN_1000ad94();
  return;
}


// ---- FUN_1000ad94 @ 1000ad94

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000ad94(void)

{
  _DAT_100233b8 = RegisterWindowMessageA(s_PM_CHANGE_USER_DIRECTORY_1001c808);
  return;
}


// ---- FUN_1000ada9 @ 1000ada9

void FUN_1000ada9(void)

{
  FUN_1000adb3();
  return;
}


// ---- FUN_1000adb3 @ 1000adb3

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000adb3(void)

{
  _DAT_100233ec = RegisterWindowMessageA(s_PM_TRACKERBALL_INIT_1001c824);
  return;
}


// ---- FUN_1000adc8 @ 1000adc8

void FUN_1000adc8(void)

{
  FUN_1000add2();
  return;
}


// ---- FUN_1000add2 @ 1000add2

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000add2(void)

{
  _DAT_10023474 = RegisterWindowMessageA(s_PM_TRACKERBALL_SHOW_SETTINGS_1001c838);
  return;
}


// ---- FUN_1000ade7 @ 1000ade7

void FUN_1000ade7(void)

{
  FUN_1000adf1();
  return;
}


// ---- FUN_1000adf1 @ 1000adf1

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000adf1(void)

{
  _DAT_10023408 = RegisterWindowMessageA(s_PM_TRACKERBALL_ARE_DIALOGS_HIDDE_1001c858);
  return;
}


// ---- FUN_1000ae06 @ 1000ae06

void FUN_1000ae06(void)

{
  FUN_1000ae10();
  return;
}


// ---- FUN_1000ae10 @ 1000ae10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000ae10(void)

{
  _DAT_100233c0 = RegisterWindowMessageA(s_PM_TRACKERBALL_ASSIGN_BUTTON_1001c87c);
  return;
}


// ---- FUN_1000ae25 @ 1000ae25

void FUN_1000ae25(void)

{
  FUN_1000ae2f();
  return;
}


// ---- FUN_1000ae2f @ 1000ae2f

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000ae2f(void)

{
  _DAT_10023524 = RegisterWindowMessageA(s_PM_TRACKERBALL_GET_ASSIGNMENTS_1001c89c);
  return;
}


// ---- FUN_1000ae44 @ 1000ae44

void FUN_1000ae44(void)

{
  FUN_1000ae4e();
  return;
}


// ---- FUN_1000ae4e @ 1000ae4e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000ae4e(void)

{
  _DAT_10023358 = RegisterWindowMessageA(s_PM_TRACKERBALL_SELECT_BUTTON_1001c8bc);
  return;
}


// ---- FUN_1000ae63 @ 1000ae63

void FUN_1000ae63(void)

{
  FUN_1000ae6d();
  return;
}


// ---- FUN_1000ae6d @ 1000ae6d

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000ae6d(void)

{
  _DAT_10023420 = RegisterWindowMessageA(s_PM_TRACKERBALL_SELECT_BUTTON_1001c8dc);
  return;
}


// ---- FUN_1000ae82 @ 1000ae82

void FUN_1000ae82(void)

{
  FUN_1000ae8c();
  return;
}


// ---- FUN_1000ae8c @ 1000ae8c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000ae8c(void)

{
  _DAT_10023570 = RegisterWindowMessageA(s_PM_TRACKERBALL_AXIS_SELECTED_1001c8fc);
  return;
}


// ---- FUN_1000aea1 @ 1000aea1

void FUN_1000aea1(void)

{
  FUN_1000aeab();
  return;
}


// ---- FUN_1000aeab @ 1000aeab

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000aeab(void)

{
  _DAT_10023504 = RegisterWindowMessageA(s_PM_2ND_IMAGE_DISPLAY_1001c91c);
  return;
}


// ---- FUN_1000aec0 @ 1000aec0

void FUN_1000aec0(void)

{
  FUN_1000aeca();
  return;
}


// ---- FUN_1000aeca @ 1000aeca

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000aeca(void)

{
  _DAT_10023374 = RegisterWindowMessageA(s_PM_GET_2ND_IMAGE_DISPLAY_1001c934);
  return;
}


// ---- FUN_1000aedf @ 1000aedf

void FUN_1000aedf(void)

{
  FUN_1000aee9();
  return;
}


// ---- FUN_1000aee9 @ 1000aee9

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000aee9(void)

{
  _DAT_10023558 = RegisterWindowMessageA(s_PM_NOTIFY_2ND_IMAGE_DISPLAY_1001c950);
  return;
}


// ---- FUN_1000aefe @ 1000aefe

void FUN_1000aefe(void)

{
  FUN_1000af08();
  return;
}


// ---- FUN_1000af08 @ 1000af08

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000af08(void)

{
  _DAT_10023574 = RegisterWindowMessageA(s_PM_2ND_IMAGE_SELECT_1001c96c);
  return;
}


// ---- FUN_1000af1d @ 1000af1d

void FUN_1000af1d(void)

{
  FUN_1000af27();
  return;
}


// ---- FUN_1000af27 @ 1000af27

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000af27(void)

{
  _DAT_1002325c = RegisterWindowMessageA(s_PM_SELECT_USER_AREA_1001c980);
  return;
}


// ---- FUN_1000af3c @ 1000af3c

void FUN_1000af3c(void)

{
  FUN_1000af46();
  return;
}


// ---- FUN_1000af46 @ 1000af46

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000af46(void)

{
  _DAT_10023238 = RegisterWindowMessageA(s_PM_READ_USER_AREA_1001c994);
  return;
}


// ---- FUN_1000af5b @ 1000af5b

void FUN_1000af5b(void)

{
  FUN_1000af65();
  return;
}


// ---- FUN_1000af65 @ 1000af65

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000af65(void)

{
  _DAT_1002354c = RegisterWindowMessageA(s_PM_CREATE_USER_AREA_1001c9a8);
  return;
}


// ---- FUN_1000af7a @ 1000af7a

void FUN_1000af7a(void)

{
  FUN_1000af84();
  return;
}


// ---- FUN_1000af84 @ 1000af84

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000af84(void)

{
  _DAT_10023288 = RegisterWindowMessageA(s_PM_DELETE_USER_AREA_1001c9bc);
  return;
}


// ---- FUN_1000af99 @ 1000af99

void FUN_1000af99(void)

{
  FUN_1000afa3();
  return;
}


// ---- FUN_1000afa3 @ 1000afa3

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000afa3(void)

{
  _DAT_100233a8 = RegisterWindowMessageA(s_PM_LEO_SERVER_EVENT_1001c9d0);
  return;
}


// ---- FUN_1000afb8 @ 1000afb8

void FUN_1000afb8(void)

{
  FUN_1000afc2();
  return;
}


// ---- FUN_1000afc2 @ 1000afc2

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000afc2(void)

{
  _DAT_100234b4 = RegisterWindowMessageA(s_PM_GET_MEASURE_UNITS_1001c9e4);
  return;
}


// ---- FUN_1000afd7 @ 1000afd7

void FUN_1000afd7(void)

{
  FUN_1000afe1();
  return;
}


// ---- FUN_1000afe1 @ 1000afe1

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000afe1(void)

{
  _DAT_10023554 = RegisterWindowMessageA(s_PM_SET_MEASURE_UNITS_1001c9fc);
  return;
}


// ---- FUN_1000aff6 @ 1000aff6

void FUN_1000aff6(void)

{
  FUN_1000b000();
  return;
}


// ---- FUN_1000b000 @ 1000b000

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000b000(void)

{
  _DAT_100232f8 = RegisterWindowMessageA(s_PM_GET_PRESET_COUNT_1001ca14);
  return;
}


// ---- FUN_1000b015 @ 1000b015

void FUN_1000b015(void)

{
  FUN_1000b01f();
  return;
}


// ---- FUN_1000b01f @ 1000b01f

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000b01f(void)

{
  _DAT_100232ec = RegisterWindowMessageA(s_PM_SET_PRESET_INDEX_1001ca28);
  return;
}


// ---- FUN_1000b034 @ 1000b034

void FUN_1000b034(void)

{
  FUN_1000b03e();
  return;
}


// ---- FUN_1000b03e @ 1000b03e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000b03e(void)

{
  _DAT_100232d0 = RegisterWindowMessageA(s_PM_GET_PRESET_LABEL_1001ca3c);
  return;
}


// ---- FUN_1000b053 @ 1000b053

void FUN_1000b053(void)

{
  FUN_1000b05d();
  return;
}


// ---- FUN_1000b05d @ 1000b05d

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000b05d(void)

{
  _DAT_10023350 = RegisterWindowMessageA(s_PM_GENERAL_FUNCTION_1001ca50);
  return;
}


// ---- FUN_1000b080 @ 1000b080

CWnd * __thiscall FUN_1000b080(void *this,uint param_1)

{
  FUN_10009169(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- FUN_1000b0b0 @ 1000b0b0

void FUN_1000b0b0(void)

{
  return;
}


// ---- FUN_1000b0c0 @ 1000b0c0

void __fastcall FUN_1000b0c0(int param_1)

{
  EnableWindow(*(HWND *)(param_1 + 0x20),0);
  return;
}


// ---- FUN_1000b0e0 @ 1000b0e0

void __fastcall FUN_1000b0e0(int param_1)

{
  EnableWindow(*(HWND *)(param_1 + 0x20),1);
  return;
}


// ---- FUN_1000b100 @ 1000b100

undefined4 * __thiscall FUN_1000b100(void *this,char *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1000fe19;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined ***)this = &PTR_LAB_10011364;
  local_8 = 0;
  CString::CString((CString *)((int)this + 4));
  local_8._0_1_ = 1;
  CString::CString((CString *)((int)this + 8));
  local_8._0_1_ = 2;
  CString::CString((CString *)((int)this + 0xc));
  local_8._0_1_ = 3;
  CString::CString((CString *)((int)this + 0x10));
  local_8 = CONCAT31(local_8._1_3_,4);
  *(undefined ***)this = &PTR_LAB_10011584;
  CString::operator=((CString *)((int)this + 4),s_LEO_32_1001ca64);
  CString::operator=((CString *)((int)this + 0xc),&DAT_1001ca6c);
  CString::operator=((CString *)((int)this + 0x10),param_1);
  ExceptionList = local_10;
  return this;
}


// ---- FUN_1000b1ba @ 1000b1ba

void __fastcall FUN_1000b1ba(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1000fe50;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = &PTR_LAB_10011584;
  local_8 = 3;
  CString::~CString((CString *)(param_1 + 4));
  local_8._0_1_ = 2;
  CString::~CString((CString *)(param_1 + 3));
  local_8._0_1_ = 1;
  CString::~CString((CString *)(param_1 + 2));
  local_8 = (uint)local_8._1_3_ << 8;
  CString::~CString((CString *)(param_1 + 1));
  *param_1 = &PTR_LAB_10011364;
  ExceptionList = local_10;
  return;
}


// ---- FUN_1000b23c @ 1000b23c

void __thiscall FUN_1000b23c(void *this,char *param_1)

{
  CString::operator=((CString *)((int)this + 8),param_1);
  return;
}


// ---- FUN_1000b258 @ 1000b258

CString * __thiscall FUN_1000b258(void *this,CString *param_1)

{
  CString::CString(param_1,(CString *)((int)this + 8));
  return param_1;
}


// ---- FUN_1000b289 @ 1000b289

CString * __thiscall FUN_1000b289(void *this,CString *param_1,char *param_2)

{
  CString *pCVar1;
  CString local_1c [4];
  CString local_18 [4];
  CString local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1000fe8c;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  CString::CString(local_14,param_2);
  local_8 = 1;
  if (*(int *)(*(int *)((int)this + 8) + -8) != 0) {
    pCVar1 = (CString *)operator+(local_18,(char *)((int)this + 8));
    local_8._0_1_ = 2;
    pCVar1 = (CString *)operator+(local_1c,pCVar1);
    local_8._0_1_ = 3;
    CString::operator=(local_14,pCVar1);
    local_8._0_1_ = 2;
    CString::~CString(local_1c);
    local_8 = CONCAT31(local_8._1_3_,1);
    CString::~CString(local_18);
  }
  CString::CString(param_1,local_14);
  local_8 = local_8 & 0xffffff00;
  CString::~CString(local_14);
  ExceptionList = local_10;
  return param_1;
}


// ---- FUN_1000b36c @ 1000b36c

CString * FUN_1000b36c(CString *param_1,LPCSTR param_2,char *param_3)

{
  LPBYTE lpData;
  DWORD *lpcbData;
  int local_24;
  CString local_20 [4];
  DWORD local_1c;
  DWORD local_18;
  HKEY local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1000feb6;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = FUN_1000bb02();
  if (local_14 == (HKEY)0x0) {
    CString::CString(param_1,param_3);
  }
  else {
    CString::CString(local_20);
    local_8 = 1;
    local_24 = RegQueryValueExA(local_14,param_2,(LPDWORD)0x0,&local_18,(LPBYTE)0x0,&local_1c);
    if (local_24 == 0) {
      lpcbData = &local_1c;
      lpData = (LPBYTE)CString::GetBuffer(local_20,local_1c);
      local_24 = RegQueryValueExA(local_14,param_2,(LPDWORD)0x0,&local_18,lpData,lpcbData);
      CString::ReleaseBuffer(local_20,-1);
    }
    RegCloseKey(local_14);
    if (local_24 == 0) {
      CString::CString(param_1,local_20);
      local_8 = local_8 & 0xffffff00;
      CString::~CString(local_20);
    }
    else {
      CString::CString(param_1,param_3);
      local_8 = local_8 & 0xffffff00;
      CString::~CString(local_20);
    }
  }
  ExceptionList = local_10;
  return param_1;
}


// ---- FUN_1000b48c @ 1000b48c

undefined4 FUN_1000b48c(LPCSTR param_1,undefined4 param_2)

{
  LSTATUS LVar1;
  DWORD local_14;
  DWORD local_10;
  HKEY local_c;
  undefined4 local_8;
  
  local_c = FUN_1000bb02();
  if (local_c != (HKEY)0x0) {
    local_14 = 4;
    LVar1 = RegQueryValueExA(local_c,param_1,(LPDWORD)0x0,&local_10,(LPBYTE)&local_8,&local_14);
    RegCloseKey(local_c);
    if (LVar1 == 0) {
      param_2 = local_8;
    }
  }
  return param_2;
}


// ---- FUN_1000b4ef @ 1000b4ef

bool FUN_1000b4ef(LPCSTR param_1)

{
  HKEY hKey;
  LSTATUS LVar1;
  bool bVar2;
  
  hKey = FUN_1000bb02();
  if (hKey == (HKEY)0x0) {
    bVar2 = false;
  }
  else {
    LVar1 = RegSetValueExA(hKey,param_1,0,4,&stack0x00000008,4);
    RegCloseKey(hKey);
    bVar2 = LVar1 == 0;
  }
  return bVar2;
}


// ---- FUN_1000b548 @ 1000b548

bool FUN_1000b548(LPCSTR param_1,BYTE *param_2)

{
  HKEY hKey;
  int iVar1;
  LSTATUS LVar2;
  bool bVar3;
  
  hKey = FUN_1000bb02();
  if (hKey == (HKEY)0x0) {
    bVar3 = false;
  }
  else {
    iVar1 = lstrlenA((LPCSTR)param_2);
    LVar2 = RegSetValueExA(hKey,param_1,0,1,param_2,iVar1 + 1);
    RegCloseKey(hKey);
    bVar3 = LVar2 == 0;
  }
  return bVar3;
}


// ---- FUN_1000b5a6 @ 1000b5a6

CString * __thiscall
FUN_1000b5a6(void *this,CString *param_1,LPCSTR param_2,char *param_3,undefined *param_4)

{
  CString *pCVar1;
  CString local_1c [4];
  CString local_18 [4];
  LPCSTR local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1000fef2;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  CString::CString((CString *)&local_14,param_3);
  local_8 = 1;
  if (*(int *)(*(int *)((int)this + 8) + -8) != 0) {
    pCVar1 = (CString *)operator+(local_18,(char *)((int)this + 8));
    local_8._0_1_ = 2;
    pCVar1 = (CString *)operator+(local_1c,pCVar1);
    local_8._0_1_ = 3;
    CString::operator=((CString *)&local_14,pCVar1);
    local_8._0_1_ = 2;
    CString::~CString(local_1c);
    local_8 = CONCAT31(local_8._1_3_,1);
    CString::~CString(local_18);
  }
  FUN_1000bd0f(param_1,param_2,local_14,param_4);
  local_8 = local_8 & 0xffffff00;
  CString::~CString((CString *)&local_14);
  ExceptionList = local_10;
  return param_1;
}


// ---- FUN_1000b695 @ 1000b695

uint __thiscall FUN_1000b695(void *this,LPCSTR param_1,char *param_2,BYTE *param_3)

{
  CString *pCVar1;
  uint uVar2;
  CString local_1c [4];
  CString local_18 [4];
  LPCSTR local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1000ff17;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  CString::CString((CString *)&local_14,param_2);
  local_8 = 0;
  if (*(int *)(*(int *)((int)this + 8) + -8) != 0) {
    pCVar1 = (CString *)operator+(local_18,(char *)((int)this + 8));
    local_8._0_1_ = 1;
    pCVar1 = (CString *)operator+(local_1c,pCVar1);
    local_8._0_1_ = 2;
    CString::operator=((CString *)&local_14,pCVar1);
    local_8._0_1_ = 1;
    CString::~CString(local_1c);
    local_8 = (uint)local_8._1_3_ << 8;
    CString::~CString(local_18);
  }
  uVar2 = FUN_1000bf82(this,param_1,local_14,param_3);
  local_8 = 0xffffffff;
  CString::~CString((CString *)&local_14);
  ExceptionList = local_10;
  return uVar2;
}


// ---- FUN_1000b776 @ 1000b776

uint __thiscall FUN_1000b776(void *this,LPCSTR param_1,char *param_2,undefined4 param_3)

{
  CString *pCVar1;
  uint uVar2;
  CString local_1c [4];
  CString local_18 [4];
  LPCSTR local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1000ff3c;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  CString::CString((CString *)&local_14,param_2);
  local_8 = 0;
  if (*(int *)(*(int *)((int)this + 8) + -8) != 0) {
    pCVar1 = (CString *)operator+(local_18,(char *)((int)this + 8));
    local_8._0_1_ = 1;
    pCVar1 = (CString *)operator+(local_1c,pCVar1);
    local_8._0_1_ = 2;
    CString::operator=((CString *)&local_14,pCVar1);
    local_8._0_1_ = 1;
    CString::~CString(local_1c);
    local_8 = (uint)local_8._1_3_ << 8;
    CString::~CString(local_18);
  }
  uVar2 = FUN_1000bee6(this,param_1,local_14,param_3);
  local_8 = 0xffffffff;
  CString::~CString((CString *)&local_14);
  ExceptionList = local_10;
  return uVar2;
}


// ---- FUN_1000b857 @ 1000b857

UINT __thiscall FUN_1000b857(void *this,LPCSTR param_1,char *param_2,UINT param_3)

{
  CString *pCVar1;
  UINT UVar2;
  CString local_1c [4];
  CString local_18 [4];
  LPCSTR local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1000ff61;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  CString::CString((CString *)&local_14,param_2);
  local_8 = 0;
  if (*(int *)(*(int *)((int)this + 8) + -8) != 0) {
    pCVar1 = (CString *)operator+(local_18,(char *)((int)this + 8));
    local_8._0_1_ = 1;
    pCVar1 = (CString *)operator+(local_1c,pCVar1);
    local_8._0_1_ = 2;
    CString::operator=((CString *)&local_14,pCVar1);
    local_8._0_1_ = 1;
    CString::~CString(local_1c);
    local_8 = (uint)local_8._1_3_ << 8;
    CString::~CString(local_18);
  }
  UVar2 = FUN_1000bc74(this,param_1,local_14,param_3);
  local_8 = 0xffffffff;
  CString::~CString((CString *)&local_14);
  ExceptionList = local_10;
  return UVar2;
}


// ---- FUN_1000b938 @ 1000b938

undefined4 __thiscall
FUN_1000b938(void *this,LPCSTR param_1,char *param_2,int *param_3,uint *param_4)

{
  CString *pCVar1;
  undefined4 uVar2;
  CString local_1c [4];
  CString local_18 [4];
  LPCSTR local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1000ff86;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  CString::CString((CString *)&local_14,param_2);
  local_8 = 0;
  if (*(int *)(*(int *)((int)this + 8) + -8) != 0) {
    pCVar1 = (CString *)operator+(local_18,(char *)((int)this + 8));
    local_8._0_1_ = 1;
    pCVar1 = (CString *)operator+(local_1c,pCVar1);
    local_8._0_1_ = 2;
    CString::operator=((CString *)&local_14,pCVar1);
    local_8._0_1_ = 1;
    CString::~CString(local_1c);
    local_8 = (uint)local_8._1_3_ << 8;
    CString::~CString(local_18);
  }
  uVar2 = FUN_1000c095(this,param_1,local_14,param_3,param_4);
  local_8 = 0xffffffff;
  CString::~CString((CString *)&local_14);
  ExceptionList = local_10;
  return uVar2;
}


// ---- FUN_1000ba1d @ 1000ba1d

uint __thiscall FUN_1000ba1d(void *this,LPCSTR param_1,char *param_2,BYTE *param_3,uint param_4)

{
  CString *pCVar1;
  uint uVar2;
  CString local_1c [4];
  CString local_18 [4];
  LPCSTR local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1000ffab;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  CString::CString((CString *)&local_14,param_2);
  local_8 = 0;
  if (*(int *)(*(int *)((int)this + 8) + -8) != 0) {
    pCVar1 = (CString *)operator+(local_18,(char *)((int)this + 8));
    local_8._0_1_ = 1;
    pCVar1 = (CString *)operator+(local_1c,pCVar1);
    local_8._0_1_ = 2;
    CString::operator=((CString *)&local_14,pCVar1);
    local_8._0_1_ = 1;
    CString::~CString(local_1c);
    local_8 = (uint)local_8._1_3_ << 8;
    CString::~CString(local_18);
  }
  uVar2 = FUN_1000c296(this,param_1,local_14,param_3,param_4);
  local_8 = 0xffffffff;
  CString::~CString((CString *)&local_14);
  ExceptionList = local_10;
  return uVar2;
}


// ---- FUN_1000bb02 @ 1000bb02

HKEY FUN_1000bb02(void)

{
  HKEY pHVar1;
  LPCSTR local_10;
  HKEY local_c;
  LSTATUS local_8;
  
  local_c = (HKEY)0x0;
  operator+((char *)&local_10,(CString *)"Software\\Leo Electron Microscopy Ltd\\");
  local_8 = RegOpenKeyExA((HKEY)0x80000002,local_10,0,0x2001f,&local_c);
  pHVar1 = local_c;
  CString::~CString((CString *)&local_10);
  return pHVar1;
}


// ---- FUN_1000bb59 @ 1000bb59

HKEY __fastcall FUN_1000bb59(int param_1)

{
  LSTATUS LVar1;
  DWORD local_14;
  HKEY local_10;
  HKEY local_c;
  HKEY local_8;
  
  local_c = (HKEY)0x0;
  local_8 = (HKEY)0x0;
  local_10 = (HKEY)0x0;
  LVar1 = RegOpenKeyExA((HKEY)0x80000001,"Software",0,0x2001f,&local_8);
  if (LVar1 == 0) {
    LVar1 = RegCreateKeyExA(local_8,*(LPCSTR *)(param_1 + 0xc),0,(LPSTR)0x0,0,0x2001f,
                            (LPSECURITY_ATTRIBUTES)0x0,&local_10,&local_14);
    if (LVar1 == 0) {
      RegCreateKeyExA(local_10,*(LPCSTR *)(param_1 + 0x10),0,(LPSTR)0x0,0,0x2001f,
                      (LPSECURITY_ATTRIBUTES)0x0,&local_c,&local_14);
    }
  }
  if (local_8 != (HKEY)0x0) {
    RegCloseKey(local_8);
  }
  if (local_10 != (HKEY)0x0) {
    RegCloseKey(local_10);
  }
  return local_c;
}


// ---- FUN_1000bc19 @ 1000bc19

HKEY __thiscall FUN_1000bc19(void *this,LPCSTR param_1)

{
  DWORD local_10;
  HKEY local_c;
  HKEY local_8;
  
  local_8 = (HKEY)0x0;
  local_c = FUN_1000bb59((int)this);
  if (local_c == (HKEY)0x0) {
    local_8 = (HKEY)0x0;
  }
  else {
    RegCreateKeyExA(local_c,param_1,0,(LPSTR)0x0,0,0x2001f,(LPSECURITY_ATTRIBUTES)0x0,&local_8,
                    &local_10);
    RegCloseKey(local_c);
  }
  return local_8;
}


// ---- FUN_1000bc74 @ 1000bc74

UINT __thiscall FUN_1000bc74(void *this,LPCSTR param_1,LPCSTR param_2,UINT param_3)

{
  LSTATUS LVar1;
  DWORD local_14;
  DWORD local_10;
  HKEY local_c;
  UINT local_8;
  
  if (*(int *)(*(int *)((int)this + 0xc) + -8) == 0) {
    param_3 = GetPrivateProfileIntA(param_1,param_2,param_3,*(LPCSTR *)((int)this + 0x10));
  }
  else {
    local_c = FUN_1000bc19(this,param_1);
    if (local_c != (HKEY)0x0) {
      local_14 = 4;
      LVar1 = RegQueryValueExA(local_c,param_2,(LPDWORD)0x0,&local_10,(LPBYTE)&local_8,&local_14);
      RegCloseKey(local_c);
      if (LVar1 == 0) {
        param_3 = local_8;
      }
    }
  }
  return param_3;
}


// ---- FUN_1000bd0f @ 1000bd0f

CString * FUN_1000bd0f(CString *param_1,LPCSTR param_2,LPCSTR param_3,undefined *param_4)

{
  HKEY pHVar1;
  LSTATUS LVar2;
  LPBYTE lpData;
  void *this;
  CHAR local_1024 [4088];
  undefined4 uStackY_2c;
  HKEY__ lpType;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1000ffbe;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_1000fa80();
  if (*(int *)((int)this + 0xc) == 0) {
    if (param_4 == (undefined *)0x0) {
      param_4 = afxChNil_exref;
    }
    uStackY_2c = 0x1000beaf;
    GetPrivateProfileStringA
              (param_2,param_3,param_4,local_1024,0x1000,*(LPCSTR *)((int)this + 0x10));
    CString::CString(param_1,local_1024);
  }
  else {
    pHVar1 = FUN_1000bc19(this,param_2);
    if (pHVar1 == (HKEY)0x0) {
      CString::CString(param_1,param_4);
    }
    else {
      CString::CString((CString *)&stack0xffffffe0);
      local_8 = 0;
      pHVar1 = (HKEY)&stack0xffffffe4;
      lpType.unused = (int)&stack0xffffffe8;
      uStackY_2c = 0x1000bdc1;
      LVar2 = RegQueryValueExA(pHVar1,param_3,(LPDWORD)0x0,(LPDWORD)lpType.unused,(LPBYTE)0x0,
                               (LPDWORD)pHVar1);
      if (LVar2 == 0) {
        pHVar1 = (HKEY)&stack0xffffffe4;
        lpData = (LPBYTE)CString::GetBuffer((CString *)&stack0xffffffe0,lpType.unused);
        uStackY_2c = 0x1000bdef;
        LVar2 = RegQueryValueExA(pHVar1,param_3,(LPDWORD)0x0,(LPDWORD)&stack0xffffffe8,lpData,
                                 (LPDWORD)pHVar1);
        pHVar1 = (HKEY)0xffffffff;
        CString::ReleaseBuffer((CString *)&stack0xffffffe0,-1);
      }
      RegCloseKey(pHVar1);
      if (LVar2 == 0) {
        CString::CString(param_1,(CString *)&stack0xffffffe0);
        local_8 = 0xffffffff;
        CString::~CString((CString *)&stack0xffffffe0);
      }
      else {
        CString::CString(param_1,param_4);
        local_8 = 0xffffffff;
        CString::~CString((CString *)&stack0xffffffe0);
      }
    }
  }
  ExceptionList = local_10;
  return param_1;
}


// ---- FUN_1000bee6 @ 1000bee6

uint __thiscall FUN_1000bee6(void *this,LPCSTR param_1,LPCSTR param_2,undefined4 param_3)

{
  uint uVar1;
  CHAR local_1c [16];
  int local_c;
  HKEY local_8;
  
  if (*(int *)((int)this + 0xc) == 0) {
    wsprintfA(local_1c,&DAT_1001ca8c,param_3);
    uVar1 = WritePrivateProfileStringA(param_1,param_2,local_1c,*(LPCSTR *)((int)this + 0x10));
  }
  else {
    local_8 = FUN_1000bc19(this,param_1);
    if (local_8 == (HKEY)0x0) {
      uVar1 = 0;
    }
    else {
      local_c = RegSetValueExA(local_8,param_2,0,4,(BYTE *)&param_3,4);
      RegCloseKey(local_8);
      uVar1 = (uint)(local_c == 0);
    }
  }
  return uVar1;
}


// ---- FUN_1000bf82 @ 1000bf82

uint __thiscall FUN_1000bf82(void *this,LPCSTR param_1,LPCSTR param_2,BYTE *param_3)

{
  HKEY pHVar1;
  int iVar2;
  uint uVar3;
  int local_8;
  
  if (*(int *)((int)this + 0xc) == 0) {
    uVar3 = WritePrivateProfileStringA
                      (param_1,param_2,(LPCSTR)param_3,*(LPCSTR *)((int)this + 0x10));
  }
  else {
    if (param_2 == (LPCSTR)0x0) {
      pHVar1 = FUN_1000bb59((int)this);
      if (pHVar1 == (HKEY)0x0) {
        return 0;
      }
      local_8 = RegDeleteKeyA(pHVar1,param_1);
      RegCloseKey(pHVar1);
    }
    else if (param_3 == (BYTE *)0x0) {
      pHVar1 = FUN_1000bc19(this,param_1);
      if (pHVar1 == (HKEY)0x0) {
        return 0;
      }
      local_8 = RegDeleteValueA(pHVar1,param_2);
      RegCloseKey(pHVar1);
    }
    else {
      pHVar1 = FUN_1000bc19(this,param_1);
      if (pHVar1 == (HKEY)0x0) {
        return 0;
      }
      iVar2 = lstrlenA((LPCSTR)param_3);
      local_8 = RegSetValueExA(pHVar1,param_2,0,1,param_3,iVar2 + 1);
      RegCloseKey(pHVar1);
    }
    uVar3 = (uint)(local_8 == 0);
  }
  return uVar3;
}


// ---- FUN_1000c095 @ 1000c095

undefined4 __thiscall
FUN_1000c095(void *this,LPCSTR param_1,LPCSTR param_2,int *param_3,uint *param_4)

{
  int iVar1;
  undefined4 uVar2;
  void *pvVar3;
  int local_2c;
  int local_28;
  LSTATUS local_24;
  undefined4 local_20;
  uint local_1c;
  DWORD local_18;
  HKEY local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1000ffd1;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_3 = 0;
  *param_4 = 0;
  if (*(int *)((int)this + 0xc) == 0) {
    FUN_1000b5a6(this,(CString *)&local_28,param_1,param_2,(undefined *)0x0);
    local_8 = 0;
    if (*(int *)(local_28 + -8) == 0) {
      local_8 = 0xffffffff;
      CString::~CString((CString *)&local_28);
      uVar2 = 0;
    }
    else {
      iVar1 = *(int *)(local_28 + -8);
      *param_4 = iVar1 / 2;
      pvVar3 = operator_new(*param_4);
      *param_3 = (int)pvVar3;
      for (local_2c = 0; local_2c < iVar1; local_2c = local_2c + 2) {
        *(char *)(*param_3 + local_2c / 2) =
             (*(char *)(local_28 + local_2c + 1) + -0x41) * '\x10' + -0x41 +
             *(char *)(local_28 + local_2c);
      }
      local_8 = 0xffffffff;
      CString::~CString((CString *)&local_28);
      uVar2 = 1;
    }
  }
  else {
    local_20 = 0;
    local_14 = FUN_1000bc19(this,param_1);
    if (local_14 == (HKEY)0x0) {
      uVar2 = 0;
    }
    else {
      local_24 = RegQueryValueExA(local_14,param_2,(LPDWORD)0x0,&local_18,(LPBYTE)0x0,&local_1c);
      *param_4 = local_1c;
      if (local_24 == 0) {
        pvVar3 = operator_new(*param_4);
        *param_3 = (int)pvVar3;
        local_24 = RegQueryValueExA(local_14,param_2,(LPDWORD)0x0,&local_18,(LPBYTE)*param_3,
                                    &local_1c);
      }
      RegCloseKey(local_14);
      if (local_24 == 0) {
        uVar2 = 1;
      }
      else {
        operator_delete((void *)*param_3);
        *param_3 = 0;
        uVar2 = 0;
      }
    }
  }
  ExceptionList = local_10;
  return uVar2;
}


// ---- FUN_1000c296 @ 1000c296

uint __thiscall FUN_1000c296(void *this,LPCSTR param_1,LPCSTR param_2,BYTE *param_3,uint param_4)

{
  HKEY hKey;
  uint uVar1;
  LSTATUS LVar2;
  BYTE *pBVar3;
  uint local_10;
  
  if (*(int *)((int)this + 0xc) == 0) {
    pBVar3 = operator_new(param_4 * 2 + 1);
    for (local_10 = 0; local_10 < param_4; local_10 = local_10 + 1) {
      pBVar3[local_10 * 2] = (param_3[local_10] & 0xf) + 0x41;
      pBVar3[local_10 * 2 + 1] = (char)((int)(uint)param_3[local_10] >> 4) + 'A';
    }
    pBVar3[local_10 * 2] = '\0';
    uVar1 = FUN_1000b695(this,param_1,param_2,pBVar3);
    operator_delete(pBVar3);
  }
  else {
    hKey = FUN_1000bc19(this,param_1);
    if (hKey == (HKEY)0x0) {
      uVar1 = 0;
    }
    else {
      LVar2 = RegSetValueExA(hKey,param_2,0,3,param_3,param_4);
      RegCloseKey(hKey);
      uVar1 = (uint)(LVar2 == 0);
    }
  }
  return uVar1;
}


// ---- FUN_1000c3a6 @ 1000c3a6

undefined4 __thiscall FUN_1000c3a6(void *this,undefined4 param_1,LPCSTR param_2,BYTE *param_3)

{
  undefined4 uVar1;
  bool bVar2;
  CString *pCVar3;
  undefined3 extraout_var;
  CString local_18 [4];
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1000ffed;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  pCVar3 = (CString *)operator+((char *)local_18,(CString *)s_LEO_32__1001ca90);
  local_8._0_1_ = 1;
  CString::operator=((CString *)((int)this + 4),pCVar3);
  local_8 = (uint)local_8._1_3_ << 8;
  CString::~CString(local_18);
  bVar2 = FUN_1000b548(param_2,param_3);
  local_14 = CONCAT31(extraout_var,bVar2);
  CString::operator=((CString *)((int)this + 4),s_LEO_32_1001ca98);
  uVar1 = local_14;
  local_8 = 0xffffffff;
  CString::~CString((CString *)&param_1);
  ExceptionList = local_10;
  return uVar1;
}


// ---- FUN_1000c450 @ 1000c450

undefined4 __thiscall FUN_1000c450(void *this,undefined4 param_1,LPCSTR param_2,undefined4 param_3)

{
  undefined4 uVar1;
  bool bVar2;
  CString *pCVar3;
  undefined3 extraout_var;
  CString local_18 [4];
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10010009;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  pCVar3 = (CString *)operator+((char *)local_18,(CString *)s_LEO_32__1001caa0);
  local_8._0_1_ = 1;
  CString::operator=((CString *)((int)this + 4),pCVar3);
  local_8 = (uint)local_8._1_3_ << 8;
  CString::~CString(local_18);
  bVar2 = FUN_1000b4ef(param_2);
  local_14 = CONCAT31(extraout_var,bVar2);
  CString::operator=((CString *)((int)this + 4),s_LEO_32_1001caa8);
  uVar1 = local_14;
  local_8 = 0xffffffff;
  CString::~CString((CString *)&param_1);
  ExceptionList = local_10;
  return uVar1;
}


// ---- FUN_1000c4fa @ 1000c4fa

undefined4 __thiscall FUN_1000c4fa(void *this,undefined4 param_1,LPCSTR param_2,undefined4 param_3)

{
  undefined4 uVar1;
  CString *pCVar2;
  CString local_18 [4];
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10010025;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  pCVar2 = (CString *)operator+((char *)local_18,(CString *)s_LEO_32__1001cab0);
  local_8._0_1_ = 1;
  CString::operator=((CString *)((int)this + 4),pCVar2);
  local_8 = (uint)local_8._1_3_ << 8;
  CString::~CString(local_18);
  local_14 = FUN_1000b48c(param_2,param_3);
  CString::operator=((CString *)((int)this + 4),s_LEO_32_1001cab8);
  uVar1 = local_14;
  local_8 = 0xffffffff;
  CString::~CString((CString *)&param_1);
  ExceptionList = local_10;
  return uVar1;
}


// ---- FUN_1000c5a4 @ 1000c5a4

CString * __thiscall
FUN_1000c5a4(void *this,CString *param_1,undefined4 param_2,LPCSTR param_3,char *param_4)

{
  CString *pCVar1;
  CString local_18 [4];
  CString local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10010061;
  local_10 = ExceptionList;
  local_8 = 1;
  ExceptionList = &local_10;
  pCVar1 = (CString *)operator+((char *)local_18,(CString *)s_LEO_32__1001cac0);
  local_8._0_1_ = 2;
  CString::operator=((CString *)((int)this + 4),pCVar1);
  local_8._0_1_ = 1;
  CString::~CString(local_18);
  FUN_1000b36c(local_14,param_3,param_4);
  local_8._0_1_ = 3;
  CString::operator=((CString *)((int)this + 4),s_LEO_32_1001cac8);
  CString::CString(param_1,local_14);
  local_8._0_1_ = 1;
  CString::~CString(local_14);
  local_8 = (uint)local_8._1_3_ << 8;
  CString::~CString((CString *)&param_2);
  ExceptionList = local_10;
  return param_1;
}


// ---- FUN_1000c680 @ 1000c680

undefined4 * __thiscall FUN_1000c680(void *this,uint param_1)

{
  FUN_1000b1ba(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- FUN_1000c6b0 @ 1000c6b0

void __fastcall FUN_1000c6b0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_10011364;
  return;
}


// ---- FUN_1000c6d0 @ 1000c6d0

undefined4 * FUN_1000c6d0(void)

{
  undefined4 *puVar1;
  undefined4 *local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1001007a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar1 = operator_new(0x18);
  local_8 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    local_1c = (undefined4 *)0x0;
  }
  else {
    local_1c = FUN_1000c751(puVar1);
  }
  ExceptionList = local_10;
  return local_1c;
}


// ---- FUN_1000c737 @ 1000c737

undefined * FUN_1000c737(void)

{
  return classCObject_exref;
}


// ---- FUN_1000c741 @ 1000c741

undefined ** FUN_1000c741(void)

{
  return &PTR_s_CServerComms_10011598;
}


// ---- FUN_1000c751 @ 1000c751

undefined4 * __fastcall FUN_1000c751(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1001008d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = &PTR_LAB_10011364;
  local_8 = 0;
  *param_1 = &PTR_FUN_100115b0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_1000d247((int)param_1);
  param_1[4] = 0x809;
  ExceptionList = local_10;
  return param_1;
}


// ---- FUN_1000c7ce @ 1000c7ce

undefined4 * __thiscall FUN_1000c7ce(void *this,undefined4 param_1,undefined4 param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_100100a0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined ***)this = &PTR_LAB_10011364;
  local_8 = 0;
  *(undefined ***)this = &PTR_FUN_100115b0;
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = param_2;
  *(undefined4 *)((int)this + 0xc) = 0;
  FUN_1000d247((int)this);
  *(undefined4 *)((int)this + 0x10) = 0x809;
  ExceptionList = local_10;
  return this;
}


// ---- FUN_1000c84b @ 1000c84b

void __fastcall FUN_1000c84b(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_100115b0;
  *param_1 = &PTR_LAB_10011364;
  return;
}


// ---- FUN_1000c868 @ 1000c868

undefined4 __fastcall FUN_1000c868(int param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}


// ---- FUN_1000c879 @ 1000c879

undefined4 __thiscall FUN_1000c879(void *this,undefined4 param_1,CString *param_2)

{
  undefined4 uVar1;
  undefined4 local_174;
  char local_170 [352];
  undefined4 local_10;
  undefined4 local_c;
  undefined4 *local_8;
  
  local_174 = param_1;
  local_10 = DAT_10023754;
  local_c = 0x164;
  local_8 = &local_174;
  uVar1 = FUN_1000d2aa(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_10);
  *(undefined4 *)((int)this + 0xc) = uVar1;
  if (*(int *)((int)this + 0xc) == 1) {
    CString::operator=(param_2,local_170);
  }
  return *(undefined4 *)((int)this + 0xc);
}


// ---- FUN_1000c902 @ 1000c902

undefined4 __thiscall FUN_1000c902(void *this,undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = DAT_10023758;
  local_c = 0xc;
  local_8 = param_1;
  uVar1 = FUN_1000d2aa(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_10);
  *(undefined4 *)((int)this + 0xc) = uVar1;
  return *(undefined4 *)((int)this + 0xc);
}


// ---- FUN_1000c94e @ 1000c94e

undefined4 __thiscall FUN_1000c94e(void *this,undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = DAT_100237c0;
  local_c = 0xc;
  local_8 = param_1;
  uVar1 = FUN_1000d2aa(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_10);
  *(undefined4 *)((int)this + 0xc) = uVar1;
  return *(undefined4 *)((int)this + 0xc);
}


// ---- FUN_1000c99a @ 1000c99a

undefined4 __thiscall FUN_1000c99a(void *this,uint param_1)

{
  undefined4 uVar1;
  uint local_14;
  undefined4 local_10;
  undefined4 local_c;
  uint *local_8;
  
  local_14 = param_1 & 0xffff;
  local_10 = DAT_1002382c;
  local_c = 4;
  local_8 = &local_14;
  uVar1 = FUN_1000d2aa(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_10);
  *(undefined4 *)((int)this + 0xc) = uVar1;
  return *(undefined4 *)((int)this + 0xc);
}


// ---- FUN_1000c9f2 @ 1000c9f2

undefined4 __thiscall FUN_1000c9f2(void *this,uint param_1,uint *param_2)

{
  undefined4 uVar1;
  undefined4 local_10;
  undefined4 local_c;
  uint *local_8;
  
  *param_2 = param_1 & 0xffff;
  local_10 = DAT_10023790;
  local_c = 0x10;
  local_8 = param_2;
  uVar1 = FUN_1000d2aa(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_10);
  *(undefined4 *)((int)this + 0xc) = uVar1;
  return *(undefined4 *)((int)this + 0xc);
}


// ---- FUN_1000ca4c @ 1000ca4c

undefined4 __thiscall FUN_1000ca4c(void *this,uint param_1,uint *param_2)

{
  undefined4 uVar1;
  undefined4 local_10;
  undefined4 local_c;
  uint *local_8;
  
  *param_2 = param_1 & 0xffff;
  local_10 = DAT_10023974;
  local_c = 0xc;
  local_8 = param_2;
  uVar1 = FUN_1000d2aa(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_10);
  *(undefined4 *)((int)this + 0xc) = uVar1;
  return *(undefined4 *)((int)this + 0xc);
}


// ---- FUN_1000caa6 @ 1000caa6

undefined4 __thiscall FUN_1000caa6(void *this,uint param_1,uint *param_2)

{
  undefined4 uVar1;
  undefined4 local_10;
  undefined4 local_c;
  uint *local_8;
  
  *param_2 = param_1 & 0xffff;
  local_10 = DAT_10023700;
  local_c = 0x34;
  local_8 = param_2;
  uVar1 = FUN_1000d2aa(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_10);
  *(undefined4 *)((int)this + 0xc) = uVar1;
  return *(undefined4 *)((int)this + 0xc);
}


// ---- FUN_1000cb00 @ 1000cb00

undefined4 __thiscall FUN_1000cb00(void *this,uint param_1,uint param_2,uint *param_3)

{
  undefined4 uVar1;
  undefined4 local_10;
  undefined4 local_c;
  uint *local_8;
  
  *param_3 = param_1 & 0xffff;
  param_3[1] = param_2 & 0xffff;
  local_10 = DAT_10023a64;
  local_c = 0xc;
  local_8 = param_3;
  uVar1 = FUN_1000d2aa(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_10);
  *(undefined4 *)((int)this + 0xc) = uVar1;
  return *(undefined4 *)((int)this + 0xc);
}


// ---- FUN_1000cb69 @ 1000cb69

undefined4 __thiscall FUN_1000cb69(void *this,uint param_1,uint *param_2)

{
  undefined4 uVar1;
  undefined4 local_10;
  undefined4 local_c;
  uint *local_8;
  
  *param_2 = param_1 & 0xffff;
  local_10 = DAT_10023704;
  local_c = 0x18;
  local_8 = param_2;
  uVar1 = FUN_1000d2aa(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_10);
  *(undefined4 *)((int)this + 0xc) = uVar1;
  return *(undefined4 *)((int)this + 0xc);
}


// ---- FUN_1000cbc3 @ 1000cbc3

undefined4 __thiscall FUN_1000cbc3(void *this,undefined4 param_1,char *param_2)

{
  undefined4 uVar1;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 *local_118;
  undefined4 local_114;
  char local_110 [256];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_100100b3;
  local_10 = ExceptionList;
  local_8 = 0;
  local_114 = param_1;
  ExceptionList = &local_10;
  strcpy(local_110,param_2);
  local_120 = DAT_10023884;
  local_11c = 0x104;
  local_118 = &local_114;
  uVar1 = FUN_1000d2aa(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_120);
  local_8 = 0xffffffff;
  CString::~CString((CString *)&param_2);
  ExceptionList = local_10;
  return uVar1;
}


// ---- FUN_1000cc7e @ 1000cc7e

undefined4 __thiscall FUN_1000cc7e(void *this,undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = DAT_10023844;
  local_c = 8;
  local_8 = param_1;
  uVar1 = FUN_1000d2aa(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_10);
  *(undefined4 *)((int)this + 0xc) = uVar1;
  return *(undefined4 *)((int)this + 0xc);
}


// ---- FUN_1000ccca @ 1000ccca

undefined4 __thiscall FUN_1000ccca(void *this,undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = DAT_100236f4;
  local_c = 0xc;
  local_8 = param_1;
  uVar1 = FUN_1000d2aa(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_10);
  *(undefined4 *)((int)this + 0xc) = uVar1;
  return *(undefined4 *)((int)this + 0xc);
}


// ---- FUN_1000cd16 @ 1000cd16

undefined4 __thiscall FUN_1000cd16(void *this,undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = DAT_100237e0;
  local_c = 0xc;
  local_8 = param_1;
  uVar1 = FUN_1000d2aa(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_10);
  *(undefined4 *)((int)this + 0xc) = uVar1;
  return *(undefined4 *)((int)this + 0xc);
}


// ---- FUN_1000cd62 @ 1000cd62

undefined4 __thiscall FUN_1000cd62(void *this,undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = DAT_100237c8;
  local_c = 0xc;
  local_8 = param_1;
  uVar1 = FUN_1000d2aa(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_10);
  *(undefined4 *)((int)this + 0xc) = uVar1;
  return *(undefined4 *)((int)this + 0xc);
}


// ---- FUN_1000cdae @ 1000cdae

undefined4 __thiscall FUN_1000cdae(void *this,undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = DAT_1002381c;
  local_c = 0xc;
  local_8 = param_1;
  uVar1 = FUN_1000d2aa(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_10);
  *(undefined4 *)((int)this + 0xc) = uVar1;
  return *(undefined4 *)((int)this + 0xc);
}


// ---- FUN_1000cdfa @ 1000cdfa

undefined4 __thiscall FUN_1000cdfa(void *this,CString *param_1,CString *param_2,CString *param_3)

{
  char local_42c [350];
  char local_2ce [350];
  char local_170 [352];
  undefined4 local_10;
  undefined4 local_c;
  char *local_8;
  
  local_10 = DAT_10023a0c;
  local_c = 0x41a;
  local_8 = local_42c;
  FUN_1000d2aa(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_10);
  CString::operator=(param_1,local_42c);
  CString::operator=(param_2,local_170);
  CString::operator=(param_3,local_2ce);
  return 1;
}


// ---- FUN_1000ce7e @ 1000ce7e

undefined4 __thiscall FUN_1000ce7e(void *this,LPARAM param_1)

{
  PostMessageA(*(HWND *)((int)this + 4),DAT_100238fc,*(WPARAM *)((int)this + 8),param_1);
  return 1;
}


// ---- FUN_1000ceae @ 1000ceae

undefined4 __thiscall
FUN_1000ceae(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,char *param_6)

{
  undefined4 uVar1;
  undefined4 local_194;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 local_184;
  char local_17c [352];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_100100c6;
  local_10 = ExceptionList;
  local_8 = 0;
  local_190 = param_1;
  local_18c = param_2;
  local_188 = param_3;
  local_184 = param_4;
  local_194 = param_5;
  ExceptionList = &local_10;
  strcpy(local_17c,param_6);
  local_1c = DAT_10023708;
  local_18 = 0x178;
  local_14 = &local_194;
  uVar1 = FUN_1000d2aa(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_1c);
  local_8 = 0xffffffff;
  CString::~CString((CString *)&param_6);
  ExceptionList = local_10;
  return uVar1;
}


// ---- FUN_1000cf82 @ 1000cf82

void __thiscall FUN_1000cf82(void *this,undefined4 param_1)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = DAT_1002384c;
  local_c = 0x5bc;
  local_8 = param_1;
  SendMessageA(*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),(LPARAM)&local_10);
  return;
}


// ---- FUN_1000cfc0 @ 1000cfc0

undefined4 __thiscall
FUN_1000cfc0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,char *param_6,undefined4 param_7)

{
  undefined4 uVar1;
  undefined4 local_194;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 local_180;
  char local_17c [352];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_100100d9;
  local_10 = ExceptionList;
  local_8 = 0;
  local_190 = param_1;
  local_18c = param_2;
  local_188 = param_3;
  local_184 = param_4;
  local_194 = param_5;
  ExceptionList = &local_10;
  strcpy(local_17c,param_6);
  local_180 = param_7;
  local_1c = DAT_10023734;
  local_18 = 0x178;
  local_14 = &local_194;
  uVar1 = FUN_1000d2aa(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_1c);
  local_8 = 0xffffffff;
  CString::~CString((CString *)&param_6);
  ExceptionList = local_10;
  return uVar1;
}


// ---- FUN_1000d09d @ 1000d09d

undefined4 __thiscall FUN_1000d09d(void *this,undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = DAT_100237ac;
  local_c = 0x18;
  local_8 = param_1;
  uVar1 = FUN_1000d2aa(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_10);
  *(undefined4 *)((int)this + 0xc) = uVar1;
  return *(undefined4 *)((int)this + 0xc);
}


// ---- FUN_1000d0e9 @ 1000d0e9

undefined4 __thiscall FUN_1000d0e9(void *this,undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = DAT_10023774;
  local_c = 0x18;
  local_8 = param_1;
  uVar1 = FUN_1000d2aa(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_10);
  *(undefined4 *)((int)this + 0xc) = uVar1;
  return *(undefined4 *)((int)this + 0xc);
}


// ---- FUN_1000d135 @ 1000d135

undefined4 __thiscall
FUN_1000d135(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  LRESULT LVar1;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 *local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = param_1;
  local_c = param_2;
  local_8 = param_3;
  local_1c = DAT_10023960;
  local_18 = 0xc;
  local_14 = &local_10;
  LVar1 = SendMessageA(*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),(LPARAM)&local_1c);
  *(LRESULT *)((int)this + 0xc) = LVar1;
  return *(undefined4 *)((int)this + 0xc);
}


// ---- FUN_1000d191 @ 1000d191

undefined4 __thiscall FUN_1000d191(void *this,char *param_1)

{
  undefined4 local_180;
  undefined4 local_17c;
  char *local_178;
  char local_174 [352];
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_100100ec;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  strcpy(local_174,param_1);
  local_180 = DAT_10023ab0;
  local_17c = 0x164;
  local_178 = local_174;
  FUN_1000d2aa(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_180);
  local_8 = 0xffffffff;
  CString::~CString((CString *)&param_1);
  ExceptionList = local_10;
  return local_14;
}


// ---- FUN_1000d247 @ 1000d247

void __fastcall FUN_1000d247(int param_1)

{
  _OSVERSIONINFOA local_98;
  
  *(undefined4 *)(param_1 + 0x14) = 0;
  memset(&local_98,0,0x94);
  local_98.dwOSVersionInfoSize = 0x94;
  GetVersionExA(&local_98);
  if (local_98.dwPlatformId == 2) {
    *(undefined4 *)(param_1 + 0x14) = 1;
  }
  return;
}


// ---- FUN_1000d2aa @ 1000d2aa

void __thiscall
FUN_1000d2aa(void *this,HWND param_1,UINT param_2,WPARAM param_3,undefined4 *param_4)

{
  if (*(int *)((int)this + 0x14) == 0) {
    SendMessageA(param_1,param_2,param_3,(LPARAM)param_4);
  }
  else {
    FUN_1000d2e4(this,param_4);
  }
  return;
}


// ---- FUN_1000d2e4 @ 1000d2e4

LRESULT __thiscall FUN_1000d2e4(void *this,undefined4 *param_1)

{
  int iVar1;
  DWORD DVar2;
  undefined4 *lpBaseAddress;
  size_t sVar3;
  LRESULT LVar4;
  undefined4 uVar5;
  char local_114 [256];
  undefined4 local_14;
  int local_10;
  char *local_c;
  HANDLE local_8;
  
  iVar1 = rand();
  uVar5 = *(undefined4 *)((int)this + 8);
  DVar2 = GetTickCount();
  sprintf(local_114,s_MMF_LEO_SSC__lx__lx__lx_1001df40,DVar2,uVar5,iVar1);
  local_8 = CreateFileMappingA((HANDLE)0xffffffff,(LPSECURITY_ATTRIBUTES)0x0,4,0,param_1[1] + 8,
                               local_114);
  if (local_8 == (HANDLE)0x0) {
    LVar4 = 0;
  }
  else {
    lpBaseAddress = MapViewOfFile(local_8,6,0,0,0);
    if (lpBaseAddress == (undefined4 *)0x0) {
      LVar4 = 0;
    }
    else {
      *lpBaseAddress = param_1[1];
      memcpy(lpBaseAddress + 1,(void *)param_1[2],param_1[1]);
      local_14 = *param_1;
      sVar3 = strlen(local_114);
      local_10 = sVar3 + 1;
      local_c = local_114;
      DAT_10023724 = SendMessageA(*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),
                                  (LPARAM)&local_14);
      memcpy((void *)param_1[2],lpBaseAddress + 1,param_1[1]);
      UnmapViewOfFile(lpBaseAddress);
      CloseHandle(local_8);
      LVar4 = DAT_10023724;
    }
  }
  return LVar4;
}


// ---- FUN_1000d43e @ 1000d43e

CString * __thiscall FUN_1000d43e(void *this,CString *param_1,uint param_2)

{
  ushort uVar1;
  AFX_MODULE_STATE *pAVar2;
  char local_138 [256];
  HGLOBAL local_38;
  uint local_34;
  int local_30;
  ushort *local_2c;
  uint local_28;
  uint local_24;
  LPCSTR local_20;
  HRSRC local_1c;
  HMODULE local_18;
  CString local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10010119;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  CString::CString(local_14,&DAT_1001df58);
  local_8 = 1;
  pAVar2 = AfxGetModuleState();
  local_18 = *(HMODULE *)(pAVar2 + 0xc);
  local_20 = (LPCSTR)((param_2 >> 4) + 1 & 0xffff);
  local_1c = FindResourceExA(local_18,(LPCSTR)0x6,local_20,*(WORD *)((int)this + 0x10));
  if (local_1c == (HRSRC)0x0) {
    local_1c = FindResourceA(local_18,local_20,(LPCSTR)0x6);
  }
  if (local_1c == (HRSRC)0x0) {
    CString::CString(param_1,local_14);
    local_8 = local_8 & 0xffffff00;
    CString::~CString(local_14);
  }
  else {
    local_34 = param_2 % 0x10;
    local_38 = LoadResource(local_18,local_1c);
    local_2c = LockResource(local_38);
    for (local_24 = 0; local_24 != local_34; local_24 = local_24 + 1) {
      uVar1 = *local_2c;
      local_28 = CONCAT22(local_28._2_2_,uVar1);
      local_2c = local_2c + 1;
      if (uVar1 != 0) {
        local_2c = local_2c + uVar1;
      }
    }
    uVar1 = *local_2c;
    local_28 = CONCAT22(local_28._2_2_,uVar1);
    local_2c = local_2c + 1;
    if (uVar1 != 0) {
      if (0xff < uVar1) {
        local_28 = CONCAT22(local_28._2_2_,0xff);
      }
      for (local_30 = 0; local_30 < (int)(local_28 & 0xffff); local_30 = local_30 + 1) {
        local_138[local_30] = (char)*local_2c;
        local_2c = local_2c + 1;
      }
      local_138[local_30] = '\0';
      CString::operator=(local_14,local_138);
    }
    CString::CString(param_1,local_14);
    local_8 = local_8 & 0xffffff00;
    CString::~CString(local_14);
  }
  ExceptionList = local_10;
  return param_1;
}


// ---- FUN_1000d644 @ 1000d644

void __thiscall FUN_1000d644(void *this,LPCSTR param_1)

{
  ATOM AVar1;
  
  AVar1 = GlobalAddAtomA(param_1);
  SendMessageA(*(HWND *)((int)this + 4),0x4c8,0,(uint)AVar1);
  CString::~CString((CString *)&param_1);
  return;
}


// ---- FUN_1000d67d @ 1000d67d

void FUN_1000d67d(void)

{
  FUN_1000d687();
  return;
}


// ---- FUN_1000d687 @ 1000d687

void FUN_1000d687(void)

{
  DAT_10023844 = RegisterWindowMessageA(s_LEO_D_SET_STATE_1001cad0);
  return;
}


// ---- FUN_1000d69c @ 1000d69c

void FUN_1000d69c(void)

{
  FUN_1000d6a6();
  return;
}


// ---- FUN_1000d6a6 @ 1000d6a6

void FUN_1000d6a6(void)

{
  DAT_10023884 = RegisterWindowMessageA(s_LEO_D_SET_STRING_1001cae0);
  return;
}


// ---- FUN_1000d6bb @ 1000d6bb

void FUN_1000d6bb(void)

{
  FUN_1000d6c5();
  return;
}


// ---- FUN_1000d6c5 @ 1000d6c5

void FUN_1000d6c5(void)

{
  DAT_100236f4 = RegisterWindowMessageA(s_LEO_D_SET_VALUE_1001caf4);
  return;
}


// ---- FUN_1000d6da @ 1000d6da

void FUN_1000d6da(void)

{
  FUN_1000d6e4();
  return;
}


// ---- FUN_1000d6e4 @ 1000d6e4

void FUN_1000d6e4(void)

{
  DAT_100237c8 = RegisterWindowMessageA(s_LEO_D_SET_XY_1001cb04);
  return;
}


// ---- FUN_1000d6f9 @ 1000d6f9

void FUN_1000d6f9(void)

{
  FUN_1000d703();
  return;
}


// ---- FUN_1000d703 @ 1000d703

void FUN_1000d703(void)

{
  DAT_100237e0 = RegisterWindowMessageA(s_LEO_D_GET_XY_1001cb14);
  return;
}


// ---- FUN_1000d718 @ 1000d718

void FUN_1000d718(void)

{
  FUN_1000d722();
  return;
}


// ---- FUN_1000d722 @ 1000d722

void FUN_1000d722(void)

{
  DAT_10023758 = RegisterWindowMessageA(s_LEO_D_MOUSE_ADJUST_LEFT_1001cb24);
  return;
}


// ---- FUN_1000d737 @ 1000d737

void FUN_1000d737(void)

{
  FUN_1000d741();
  return;
}


// ---- FUN_1000d741 @ 1000d741

void FUN_1000d741(void)

{
  DAT_100237c0 = RegisterWindowMessageA(s_LEO_D_MOUSE_ADJUST_MIDDLE_1001cb3c);
  return;
}


// ---- FUN_1000d756 @ 1000d756

void FUN_1000d756(void)

{
  FUN_1000d760();
  return;
}


// ---- FUN_1000d760 @ 1000d760

void FUN_1000d760(void)

{
  DAT_1002381c = RegisterWindowMessageA(s_LEO_D_STEP_1001cb58);
  return;
}


// ---- FUN_1000d775 @ 1000d775

void FUN_1000d775(void)

{
  FUN_1000d77f();
  return;
}


// ---- FUN_1000d77f @ 1000d77f

void FUN_1000d77f(void)

{
  DAT_1002382c = RegisterWindowMessageA(s_LEO_D_EXECUTE_1001cb64);
  return;
}


// ---- FUN_1000d794 @ 1000d794

void FUN_1000d794(void)

{
  FUN_1000d79e();
  return;
}


// ---- FUN_1000d79e @ 1000d79e

void FUN_1000d79e(void)

{
  DAT_10023790 = RegisterWindowMessageA(s_LEO_D_GET_COMMAND_1001cb74);
  return;
}


// ---- FUN_1000d7b3 @ 1000d7b3

void FUN_1000d7b3(void)

{
  FUN_1000d7bd();
  return;
}


// ---- FUN_1000d7bd @ 1000d7bd

void FUN_1000d7bd(void)

{
  DAT_10023704 = RegisterWindowMessageA(s_LEO_D_GET_STATE_1001cb88);
  return;
}


// ---- FUN_1000d7d2 @ 1000d7d2

void FUN_1000d7d2(void)

{
  FUN_1000d7dc();
  return;
}


// ---- FUN_1000d7dc @ 1000d7dc

void FUN_1000d7dc(void)

{
  DAT_10023a64 = RegisterWindowMessageA(s_LEO_D_GET_STATE_STRING_1001cb98);
  return;
}


// ---- FUN_1000d7f1 @ 1000d7f1

void FUN_1000d7f1(void)

{
  FUN_1000d7fb();
  return;
}


// ---- FUN_1000d7fb @ 1000d7fb

void FUN_1000d7fb(void)

{
  DAT_10023974 = RegisterWindowMessageA(s_LEO_D_GET_VALUE_1001cbb0);
  return;
}


// ---- FUN_1000d810 @ 1000d810

void FUN_1000d810(void)

{
  FUN_1000d81a();
  return;
}


// ---- FUN_1000d81a @ 1000d81a

void FUN_1000d81a(void)

{
  DAT_10023700 = RegisterWindowMessageA(s_LEO_GET_VALUE_EXTRA_1001cbc0);
  return;
}


// ---- FUN_1000d82f @ 1000d82f

void FUN_1000d82f(void)

{
  FUN_1000d839();
  return;
}


// ---- FUN_1000d839 @ 1000d839

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000d839(void)

{
  _DAT_10023a20 = RegisterWindowMessageA(s_LEO_D_SET_FORMAT_MODIFIER_1001cbd4);
  return;
}


// ---- FUN_1000d84e @ 1000d84e

void FUN_1000d84e(void)

{
  FUN_1000d858();
  return;
}


// ---- FUN_1000d858 @ 1000d858

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000d858(void)

{
  _DAT_100237bc = RegisterWindowMessageA(s_LEO_MACRO_MANAGER_REGISTER_1001cbf0);
  return;
}


// ---- FUN_1000d86d @ 1000d86d

void FUN_1000d86d(void)

{
  FUN_1000d877();
  return;
}


// ---- FUN_1000d877 @ 1000d877

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000d877(void)

{
  _DAT_10023a10 = RegisterWindowMessageA(s_LEO_LUT_MANAGER_REGISTER_1001cc0c);
  return;
}


// ---- FUN_1000d88c @ 1000d88c

void FUN_1000d88c(void)

{
  FUN_1000d896();
  return;
}


// ---- FUN_1000d896 @ 1000d896

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000d896(void)

{
  _DAT_10023a00 = RegisterWindowMessageA(s_PM_SERVER_READY_1001cc28);
  return;
}


// ---- FUN_1000d8ab @ 1000d8ab

void FUN_1000d8ab(void)

{
  FUN_1000d8b5();
  return;
}


// ---- FUN_1000d8b5 @ 1000d8b5

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000d8b5(void)

{
  _DAT_1002385c = RegisterWindowMessageA(s_PM_SERVER_LOADING_1001cc38);
  return;
}


// ---- FUN_1000d8ca @ 1000d8ca

void FUN_1000d8ca(void)

{
  FUN_1000d8d4();
  return;
}


// ---- FUN_1000d8d4 @ 1000d8d4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000d8d4(void)

{
  _DAT_10023924 = RegisterWindowMessageA(s_PM_REFRESH_WINDOW_1001cc4c);
  return;
}


// ---- FUN_1000d8e9 @ 1000d8e9

void FUN_1000d8e9(void)

{
  FUN_1000d8f3();
  return;
}


// ---- FUN_1000d8f3 @ 1000d8f3

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000d8f3(void)

{
  _DAT_10023908 = RegisterWindowMessageA(s_PM_REGISTER_RETURN_1001cc60);
  return;
}


// ---- FUN_1000d908 @ 1000d908

void FUN_1000d908(void)

{
  FUN_1000d912();
  return;
}


// ---- FUN_1000d912 @ 1000d912

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000d912(void)

{
  _DAT_100238f0 = RegisterWindowMessageA(s_PM_SEM_CLOSE_1001cc74);
  return;
}


// ---- FUN_1000d927 @ 1000d927

void FUN_1000d927(void)

{
  FUN_1000d931();
  return;
}


// ---- FUN_1000d931 @ 1000d931

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000d931(void)

{
  _DAT_10023a84 = RegisterWindowMessageA(s_LEO_MOUSE_FINISHED_ADJUST_1001cc84);
  return;
}


// ---- FUN_1000d946 @ 1000d946

void FUN_1000d946(void)

{
  FUN_1000d950();
  return;
}


// ---- FUN_1000d950 @ 1000d950

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000d950(void)

{
  _DAT_1002390c = RegisterWindowMessageA(s_PM_PARAMETER_NOTIFY_1001cca0);
  return;
}


// ---- FUN_1000d965 @ 1000d965

void FUN_1000d965(void)

{
  FUN_1000d96f();
  return;
}


// ---- FUN_1000d96f @ 1000d96f

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000d96f(void)

{
  _DAT_10023980 = RegisterWindowMessageA(s_PM_COARSE_FINE_CHANGED_1001ccb4);
  return;
}


// ---- FUN_1000d984 @ 1000d984

void FUN_1000d984(void)

{
  FUN_1000d98e();
  return;
}


// ---- FUN_1000d98e @ 1000d98e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000d98e(void)

{
  _DAT_10023a60 = RegisterWindowMessageA(s_PM_LICENCE_CHANGED_1001cccc);
  return;
}


// ---- FUN_1000d9a3 @ 1000d9a3

void FUN_1000d9a3(void)

{
  FUN_1000d9ad();
  return;
}


// ---- FUN_1000d9ad @ 1000d9ad

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000d9ad(void)

{
  _DAT_100239d8 = RegisterWindowMessageA(s_PM_ZONE_OPMODE_CHANGED_1001cce0);
  return;
}


// ---- FUN_1000d9c2 @ 1000d9c2

void FUN_1000d9c2(void)

{
  FUN_1000d9cc();
  return;
}


// ---- FUN_1000d9cc @ 1000d9cc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000d9cc(void)

{
  _DAT_1002388c = RegisterWindowMessageA(s_PM_ZONE0_MAG_PIX_CHANGED_1001ccf8);
  return;
}


// ---- FUN_1000d9e1 @ 1000d9e1

void FUN_1000d9e1(void)

{
  FUN_1000d9eb();
  return;
}


// ---- FUN_1000d9eb @ 1000d9eb

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000d9eb(void)

{
  _DAT_10023ab8 = RegisterWindowMessageA(s_PM_ZONE1_MAG_PIX_CHANGED_1001cd14);
  return;
}


// ---- FUN_1000da00 @ 1000da00

void FUN_1000da00(void)

{
  FUN_1000da0a();
  return;
}


// ---- FUN_1000da0a @ 1000da0a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000da0a(void)

{
  _DAT_10023a80 = RegisterWindowMessageA(s_PM_ZONE2_MAG_PIX_CHANGED_1001cd30);
  return;
}


// ---- FUN_1000da1f @ 1000da1f

void FUN_1000da1f(void)

{
  FUN_1000da29();
  return;
}


// ---- FUN_1000da29 @ 1000da29

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000da29(void)

{
  _DAT_100237b4 = RegisterWindowMessageA(s_PM_ZONE3_MAG_PIX_CHANGED_1001cd4c);
  return;
}


// ---- FUN_1000da3e @ 1000da3e

void FUN_1000da3e(void)

{
  FUN_1000da48();
  return;
}


// ---- FUN_1000da48 @ 1000da48

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000da48(void)

{
  _DAT_100238f8 = RegisterWindowMessageA(s_PM_KNOB_ASSIGNMENT_1001cd68);
  return;
}


// ---- FUN_1000da5d @ 1000da5d

void FUN_1000da5d(void)

{
  FUN_1000da67();
  return;
}


// ---- FUN_1000da67 @ 1000da67

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000da67(void)

{
  _DAT_10023828 = RegisterWindowMessageA(s_PM_SET_KNOB_ASSIGNMENT_1001cd7c);
  return;
}


// ---- FUN_1000da7c @ 1000da7c

void FUN_1000da7c(void)

{
  FUN_1000da86();
  return;
}


// ---- FUN_1000da86 @ 1000da86

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000da86(void)

{
  _DAT_100239ec = RegisterWindowMessageA(s_PM_IMG_ANNOTATION_TO_FILE_1001cd94);
  return;
}


// ---- FUN_1000da9b @ 1000da9b

void FUN_1000da9b(void)

{
  FUN_1000daa5();
  return;
}


// ---- FUN_1000daa5 @ 1000daa5

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000daa5(void)

{
  _DAT_1002371c = RegisterWindowMessageA(s_PM_IMG_TIFF_RESET_1001cdb0);
  return;
}


// ---- FUN_1000daba @ 1000daba

void FUN_1000daba(void)

{
  FUN_1000dac4();
  return;
}


// ---- FUN_1000dac4 @ 1000dac4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000dac4(void)

{
  _DAT_10023984 = RegisterWindowMessageA(s_PM_IMEX_DONE_1001cdc4);
  return;
}


// ---- FUN_1000dad9 @ 1000dad9

void FUN_1000dad9(void)

{
  FUN_1000dae3();
  return;
}


// ---- FUN_1000dae3 @ 1000dae3

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000dae3(void)

{
  _DAT_10023a1c = RegisterWindowMessageA(s_PM_IMG_TIFF_PARAM_1001cdd4);
  return;
}


// ---- FUN_1000daf8 @ 1000daf8

void FUN_1000daf8(void)

{
  FUN_1000db02();
  return;
}


// ---- FUN_1000db02 @ 1000db02

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000db02(void)

{
  _DAT_100238e4 = RegisterWindowMessageA(s_PM_IMG_CREATE_TEXT_1001cde8);
  return;
}


// ---- FUN_1000db17 @ 1000db17

void FUN_1000db17(void)

{
  FUN_1000db21();
  return;
}


// ---- FUN_1000db21 @ 1000db21

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000db21(void)

{
  _DAT_10023794 = RegisterWindowMessageA(s_PM_IMG_DELETE_TEXT_1001cdfc);
  return;
}


// ---- FUN_1000db36 @ 1000db36

void FUN_1000db36(void)

{
  FUN_1000db40();
  return;
}


// ---- FUN_1000db40 @ 1000db40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000db40(void)

{
  _DAT_10023864 = RegisterWindowMessageA(s_LEO_GET_SEM_HWND_1001ce10);
  return;
}


// ---- FUN_1000db55 @ 1000db55

void FUN_1000db55(void)

{
  FUN_1000db5f();
  return;
}


// ---- FUN_1000db5f @ 1000db5f

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000db5f(void)

{
  _DAT_10023904 = RegisterWindowMessageA(s_PM_IMGMGR_INHIBIT_SPOT_1001ce24);
  return;
}


// ---- FUN_1000db74 @ 1000db74

void FUN_1000db74(void)

{
  FUN_1000db7e();
  return;
}


// ---- FUN_1000db7e @ 1000db7e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000db7e(void)

{
  _DAT_100239b8 = RegisterWindowMessageA(s_PM_SPECIAL_FUNCTION_1001ce3c);
  return;
}


// ---- FUN_1000db93 @ 1000db93

void FUN_1000db93(void)

{
  FUN_1000db9d();
  return;
}


// ---- FUN_1000db9d @ 1000db9d

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000db9d(void)

{
  _DAT_10023918 = RegisterWindowMessageA(s_PM_GET_TAB_COUNT_1001ce50);
  return;
}


// ---- FUN_1000dbb2 @ 1000dbb2

void FUN_1000dbb2(void)

{
  FUN_1000dbbc();
  return;
}


// ---- FUN_1000dbbc @ 1000dbbc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000dbbc(void)

{
  _DAT_1002387c = RegisterWindowMessageA(s_PM_GET_DLG_COUNT_1001ce64);
  return;
}


// ---- FUN_1000dbd1 @ 1000dbd1

void FUN_1000dbd1(void)

{
  FUN_1000dbdb();
  return;
}


// ---- FUN_1000dbdb @ 1000dbdb

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000dbdb(void)

{
  _DAT_10023800 = RegisterWindowMessageA(s_PM_GET_TAB_NAME_1001ce78);
  return;
}


// ---- FUN_1000dbf0 @ 1000dbf0

void FUN_1000dbf0(void)

{
  FUN_1000dbfa();
  return;
}


// ---- FUN_1000dbfa @ 1000dbfa

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000dbfa(void)

{
  _DAT_10023930 = RegisterWindowMessageA(s_PM_GET_DLG_NAME_1001ce88);
  return;
}


// ---- FUN_1000dc0f @ 1000dc0f

void FUN_1000dc0f(void)

{
  FUN_1000dc19();
  return;
}


// ---- FUN_1000dc19 @ 1000dc19

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000dc19(void)

{
  _DAT_10023874 = RegisterWindowMessageA(s_PM_SHOW_TABS_DIALOGS_1001ce98);
  return;
}


// ---- FUN_1000dc2e @ 1000dc2e

void FUN_1000dc2e(void)

{
  FUN_1000dc38();
  return;
}


// ---- FUN_1000dc38 @ 1000dc38

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000dc38(void)

{
  _DAT_100239a4 = RegisterWindowMessageA(s_PM_GET_MACRO_LIB_ISSUE_1001ceb0);
  return;
}


// ---- FUN_1000dc4d @ 1000dc4d

void FUN_1000dc4d(void)

{
  FUN_1000dc57();
  return;
}


// ---- FUN_1000dc57 @ 1000dc57

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000dc57(void)

{
  _DAT_10023784 = RegisterWindowMessageA(s_PM_MACRO_CONDITIONS_SAVED_1001cec8);
  return;
}


// ---- FUN_1000dc6c @ 1000dc6c

void FUN_1000dc6c(void)

{
  FUN_1000dc76();
  return;
}


// ---- FUN_1000dc76 @ 1000dc76

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000dc76(void)

{
  _DAT_100237f8 = RegisterWindowMessageA(s_PM_STEP_MACRO_1001cee4);
  return;
}


// ---- FUN_1000dc8b @ 1000dc8b

void FUN_1000dc8b(void)

{
  FUN_1000dc95();
  return;
}


// ---- FUN_1000dc95 @ 1000dc95

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000dc95(void)

{
  _DAT_10023a70 = RegisterWindowMessageA(s_PM_CONTINUE_MACRO_1001cef4);
  return;
}


// ---- FUN_1000dcaa @ 1000dcaa

void FUN_1000dcaa(void)

{
  FUN_1000dcb4();
  return;
}


// ---- FUN_1000dcb4 @ 1000dcb4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000dcb4(void)

{
  _DAT_100237d0 = RegisterWindowMessageA(s_PM_EXECUTE_LIBRARY_MACRO_1001cf08);
  return;
}


// ---- FUN_1000dcc9 @ 1000dcc9

void FUN_1000dcc9(void)

{
  FUN_1000dcd3();
  return;
}


// ---- FUN_1000dcd3 @ 1000dcd3

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000dcd3(void)

{
  _DAT_10023730 = RegisterWindowMessageA(s_PM_EXECUTE_FILE_MACRO_1001cf24);
  return;
}


// ---- FUN_1000dce8 @ 1000dce8

void FUN_1000dce8(void)

{
  FUN_1000dcf2();
  return;
}


// ---- FUN_1000dcf2 @ 1000dcf2

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000dcf2(void)

{
  _DAT_100238ec = RegisterWindowMessageA(s_PM_HALT_MACRO_1001cf3c);
  return;
}


// ---- FUN_1000dd07 @ 1000dd07

void FUN_1000dd07(void)

{
  FUN_1000dd11();
  return;
}


// ---- FUN_1000dd11 @ 1000dd11

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000dd11(void)

{
  _DAT_10023818 = RegisterWindowMessageA(s_PM_PAUSE_MACRO_1001cf4c);
  return;
}


// ---- FUN_1000dd26 @ 1000dd26

void FUN_1000dd26(void)

{
  FUN_1000dd30();
  return;
}


// ---- FUN_1000dd30 @ 1000dd30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000dd30(void)

{
  _DAT_100238f4 = RegisterWindowMessageA(s_PM_MACRO_STATUS_1001cf5c);
  return;
}


// ---- FUN_1000dd45 @ 1000dd45

void FUN_1000dd45(void)

{
  FUN_1000dd4f();
  return;
}


// ---- FUN_1000dd4f @ 1000dd4f

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000dd4f(void)

{
  _DAT_10023920 = RegisterWindowMessageA(s_PM_MACRO_EDITOR_1001cf6c);
  return;
}


// ---- FUN_1000dd64 @ 1000dd64

void FUN_1000dd64(void)

{
  FUN_1000dd6e();
  return;
}


// ---- FUN_1000dd6e @ 1000dd6e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000dd6e(void)

{
  _DAT_100236f8 = RegisterWindowMessageA(s_PM_SAVE_SYSTEM_CONDITIONS_1001cf7c);
  return;
}


// ---- FUN_1000dd83 @ 1000dd83

void FUN_1000dd83(void)

{
  FUN_1000dd8d();
  return;
}


// ---- FUN_1000dd8d @ 1000dd8d

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000dd8d(void)

{
  _DAT_100239e0 = RegisterWindowMessageA(s_PM_SAVE_STATE_1001cf98);
  return;
}


// ---- FUN_1000dda2 @ 1000dda2

void FUN_1000dda2(void)

{
  FUN_1000ddac();
  return;
}


// ---- FUN_1000ddac @ 1000ddac

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000ddac(void)

{
  _DAT_10023880 = RegisterWindowMessageA(s_PM_LOAD_STATE_1001cfa8);
  return;
}


// ---- FUN_1000ddc1 @ 1000ddc1

void FUN_1000ddc1(void)

{
  FUN_1000ddcb();
  return;
}


// ---- FUN_1000ddcb @ 1000ddcb

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000ddcb(void)

{
  _DAT_10023928 = RegisterWindowMessageA(s_PM_STANDARD_CONDITIONS_1001cfb8);
  return;
}


// ---- FUN_1000dde0 @ 1000dde0

void FUN_1000dde0(void)

{
  FUN_1000ddea();
  return;
}


// ---- FUN_1000ddea @ 1000ddea

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000ddea(void)

{
  _DAT_100239c0 = RegisterWindowMessageA(s_PM_RESTORE_SYSTEM_CONDITIONS_1001cfd0);
  return;
}


// ---- FUN_1000ddff @ 1000ddff

void FUN_1000ddff(void)

{
  FUN_1000de09();
  return;
}


// ---- FUN_1000de09 @ 1000de09

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000de09(void)

{
  _DAT_10023834 = RegisterWindowMessageA(s_PM_EXECUTING_LINE_1001cff0);
  return;
}


// ---- FUN_1000de1e @ 1000de1e

void FUN_1000de1e(void)

{
  FUN_1000de28();
  return;
}


// ---- FUN_1000de28 @ 1000de28

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000de28(void)

{
  _DAT_1002376c = RegisterWindowMessageA(s_PM_REVIEW_STATE_1001d004);
  return;
}


// ---- FUN_1000de3d @ 1000de3d

void FUN_1000de3d(void)

{
  FUN_1000de47();
  return;
}


// ---- FUN_1000de47 @ 1000de47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000de47(void)

{
  _DAT_10023718 = RegisterWindowMessageA(s_PM_SP_MOUSE_ADJUSTMENT_1001d014);
  return;
}


// ---- FUN_1000de5c @ 1000de5c

void FUN_1000de5c(void)

{
  FUN_1000de66();
  return;
}


// ---- FUN_1000de66 @ 1000de66

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000de66(void)

{
  _DAT_1002393c = RegisterWindowMessageA(s_PM_QUERY_SERVER_1001d02c);
  return;
}


// ---- FUN_1000de7b @ 1000de7b

void FUN_1000de7b(void)

{
  FUN_1000de85();
  return;
}


// ---- FUN_1000de85 @ 1000de85

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000de85(void)

{
  _DAT_10023948 = RegisterWindowMessageA(s_PM_QUERY_CLIENT_COUNT_1001d03c);
  return;
}


// ---- FUN_1000de9a @ 1000de9a

void FUN_1000de9a(void)

{
  FUN_1000dea4();
  return;
}


// ---- FUN_1000dea4 @ 1000dea4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000dea4(void)

{
  _DAT_10023a30 = RegisterWindowMessageA(s_PM_REGISTER_1001d054);
  return;
}


// ---- FUN_1000deb9 @ 1000deb9

void FUN_1000deb9(void)

{
  FUN_1000dec3();
  return;
}


// ---- FUN_1000dec3 @ 1000dec3

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000dec3(void)

{
  _DAT_10023990 = RegisterWindowMessageA(s_PM_REGISTER_CONTROLLER_1001d060);
  return;
}


// ---- FUN_1000ded8 @ 1000ded8

void FUN_1000ded8(void)

{
  FUN_1000dee2();
  return;
}


// ---- FUN_1000dee2 @ 1000dee2

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000dee2(void)

{
  _DAT_100237ec = RegisterWindowMessageA(s_PM_REGISTER_USERNAME_1001d078);
  return;
}


// ---- FUN_1000def7 @ 1000def7

void FUN_1000def7(void)

{
  FUN_1000df01();
  return;
}


// ---- FUN_1000df01 @ 1000df01

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000df01(void)

{
  _DAT_100239a0 = RegisterWindowMessageA(s_PM_SEM_REGISTER_1001d090);
  return;
}


// ---- FUN_1000df16 @ 1000df16

void FUN_1000df16(void)

{
  FUN_1000df20();
  return;
}


// ---- FUN_1000df20 @ 1000df20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000df20(void)

{
  _DAT_100239c4 = RegisterWindowMessageA(s_PM_REVOKE_REGISTRATION_1001d0a0);
  return;
}


// ---- FUN_1000df35 @ 1000df35

void FUN_1000df35(void)

{
  FUN_1000df3f();
  return;
}


// ---- FUN_1000df3f @ 1000df3f

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000df3f(void)

{
  _DAT_10023850 = RegisterWindowMessageA(s_PM_MOUSE_ADJUSTABLE_1001d0b8);
  return;
}


// ---- FUN_1000df54 @ 1000df54

void FUN_1000df54(void)

{
  FUN_1000df5e();
  return;
}


// ---- FUN_1000df5e @ 1000df5e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000df5e(void)

{
  _DAT_10023728 = RegisterWindowMessageA(s_PM_LOG_OFF_1001d0cc);
  return;
}


// ---- FUN_1000df73 @ 1000df73

void FUN_1000df73(void)

{
  FUN_1000df7d();
  return;
}


// ---- FUN_1000df7d @ 1000df7d

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000df7d(void)

{
  _DAT_100237f0 = RegisterWindowMessageA(s_PM_LOG_ON_1001d0d8);
  return;
}


// ---- FUN_1000df92 @ 1000df92

void FUN_1000df92(void)

{
  FUN_1000df9c();
  return;
}


// ---- FUN_1000df9c @ 1000df9c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000df9c(void)

{
  _DAT_1002370c = RegisterWindowMessageA(s_PM_GET_SERIAL_NUMBER_1001d0e4);
  return;
}


// ---- FUN_1000dfb1 @ 1000dfb1

void FUN_1000dfb1(void)

{
  FUN_1000dfbb();
  return;
}


// ---- FUN_1000dfbb @ 1000dfbb

void FUN_1000dfbb(void)

{
  DAT_10023a0c = RegisterWindowMessageA(s_PM_GET_DIRECTORIES_1001d0fc);
  return;
}


// ---- FUN_1000dfd0 @ 1000dfd0

void FUN_1000dfd0(void)

{
  FUN_1000dfda();
  return;
}


// ---- FUN_1000dfda @ 1000dfda

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000dfda(void)

{
  _DAT_10023858 = RegisterWindowMessageA(s_PM_GET_COMMAND_GROUP_1001d110);
  return;
}


// ---- FUN_1000dfef @ 1000dfef

void FUN_1000dfef(void)

{
  FUN_1000dff9();
  return;
}


// ---- FUN_1000dff9 @ 1000dff9

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000dff9(void)

{
  _DAT_1002378c = RegisterWindowMessageA(s_PM_GET_STRING_1001d128);
  return;
}


// ---- FUN_1000e00e @ 1000e00e

void FUN_1000e00e(void)

{
  FUN_1000e018();
  return;
}


// ---- FUN_1000e018 @ 1000e018

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000e018(void)

{
  _DAT_100239f0 = RegisterWindowMessageA(s_PM_GET_NAME_1001d138);
  return;
}


// ---- FUN_1000e02d @ 1000e02d

void FUN_1000e02d(void)

{
  FUN_1000e037();
  return;
}


// ---- FUN_1000e037 @ 1000e037

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000e037(void)

{
  _DAT_10023804 = RegisterWindowMessageA(s_PM_GET_MNEMONIC_1001d144);
  return;
}


// ---- FUN_1000e04c @ 1000e04c

void FUN_1000e04c(void)

{
  FUN_1000e056();
  return;
}


// ---- FUN_1000e056 @ 1000e056

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000e056(void)

{
  _DAT_100239c8 = RegisterWindowMessageA(s_PM_GET_VALUE_1001d154);
  return;
}


// ---- FUN_1000e06b @ 1000e06b

void FUN_1000e06b(void)

{
  FUN_1000e075();
  return;
}


// ---- FUN_1000e075 @ 1000e075

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000e075(void)

{
  _DAT_10023810 = RegisterWindowMessageA(s_PM_SET_BEAMSHIFT_DISTANCE_1001d164);
  return;
}


// ---- FUN_1000e08a @ 1000e08a

void FUN_1000e08a(void)

{
  FUN_1000e094();
  return;
}


// ---- FUN_1000e094 @ 1000e094

void FUN_1000e094(void)

{
  DAT_10023774 = RegisterWindowMessageA(s_PM_STAGE_GOTO_1001d180);
  return;
}


// ---- FUN_1000e0a9 @ 1000e0a9

void FUN_1000e0a9(void)

{
  FUN_1000e0b3();
  return;
}


// ---- FUN_1000e0b3 @ 1000e0b3

void FUN_1000e0b3(void)

{
  DAT_100237ac = RegisterWindowMessageA(s_PM_GET_STAGE_POSITION_1001d190);
  return;
}


// ---- FUN_1000e0c8 @ 1000e0c8

void FUN_1000e0c8(void)

{
  FUN_1000e0d2();
  return;
}


// ---- FUN_1000e0d2 @ 1000e0d2

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000e0d2(void)

{
  _DAT_100237b8 = RegisterWindowMessageA(s_PM_GET_VALUE_AS_STRING_1001d1a8);
  return;
}


// ---- FUN_1000e0e7 @ 1000e0e7

void FUN_1000e0e7(void)

{
  FUN_1000e0f1();
  return;
}


// ---- FUN_1000e0f1 @ 1000e0f1

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000e0f1(void)

{
  _DAT_100237e4 = RegisterWindowMessageA(s_PM_GET_STATEVALUE_AS_ENGLISH_STR_1001d1c0);
  return;
}


// ---- FUN_1000e106 @ 1000e106

void FUN_1000e106(void)

{
  FUN_1000e110();
  return;
}


// ---- FUN_1000e110 @ 1000e110

void FUN_1000e110(void)

{
  DAT_10023754 = RegisterWindowMessageA(s_PM_GET_ERROR_1001d1e4);
  return;
}


// ---- FUN_1000e125 @ 1000e125

void FUN_1000e125(void)

{
  FUN_1000e12f();
  return;
}


// ---- FUN_1000e12f @ 1000e12f

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000e12f(void)

{
  _DAT_10023814 = RegisterWindowMessageA(s_PM_NEXT_MAG_TABLE_1001d1f4);
  return;
}


// ---- FUN_1000e144 @ 1000e144

void FUN_1000e144(void)

{
  FUN_1000e14e();
  return;
}


// ---- FUN_1000e14e @ 1000e14e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000e14e(void)

{
  _DAT_10023998 = RegisterWindowMessageA(s_PM_END_MAG_TABLE_1001d208);
  return;
}


// ---- FUN_1000e163 @ 1000e163

void FUN_1000e163(void)

{
  FUN_1000e16d();
  return;
}


// ---- FUN_1000e16d @ 1000e16d

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000e16d(void)

{
  _DAT_100237d4 = RegisterWindowMessageA(s_PM_CENTRE_FEATURE_ORIGINAL_MAG_1001d21c);
  return;
}


// ---- FUN_1000e182 @ 1000e182

void FUN_1000e182(void)

{
  FUN_1000e18c();
  return;
}


// ---- FUN_1000e18c @ 1000e18c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000e18c(void)

{
  _DAT_100236ec = RegisterWindowMessageA(s_PM_GET_MACHINE_TYPE_1001d23c);
  return;
}


// ---- FUN_1000e1a1 @ 1000e1a1

void FUN_1000e1a1(void)

{
  FUN_1000e1ab();
  return;
}


// ---- FUN_1000e1ab @ 1000e1ab

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000e1ab(void)

{
  _DAT_100236f0 = RegisterWindowMessageA(s_PM_GET_HANDLES_1001d250);
  return;
}


// ---- FUN_1000e1c0 @ 1000e1c0

void FUN_1000e1c0(void)

{
  FUN_1000e1ca();
  return;
}


// ---- FUN_1000e1ca @ 1000e1ca

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000e1ca(void)

{
  _DAT_100237a0 = RegisterWindowMessageA(s_PM_GET_STATES_1001d260);
  return;
}


// ---- FUN_1000e1df @ 1000e1df

void FUN_1000e1df(void)

{
  FUN_1000e1e9();
  return;
}


// ---- FUN_1000e1e9 @ 1000e1e9

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000e1e9(void)

{
  _DAT_100239b0 = RegisterWindowMessageA(s_PM_GET_LOW_LIMIT_1001d270);
  return;
}


// ---- FUN_1000e1fe @ 1000e1fe

void FUN_1000e1fe(void)

{
  FUN_1000e208();
  return;
}


// ---- FUN_1000e208 @ 1000e208

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000e208(void)

{
  _DAT_100239bc = RegisterWindowMessageA(s_PM_GET_LICENCE_1001d284);
  return;
}


// ---- FUN_1000e21d @ 1000e21d

void FUN_1000e21d(void)

{
  FUN_1000e227();
  return;
}


// ---- FUN_1000e227 @ 1000e227

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000e227(void)

{
  _DAT_100238bc = RegisterWindowMessageA(s_PM_GET_PARAM_GROUP_1001d294);
  return;
}


// ---- FUN_1000e23c @ 1000e23c

void FUN_1000e23c(void)

{
  FUN_1000e246();
  return;
}


// ---- FUN_1000e246 @ 1000e246

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000e246(void)

{
  _DAT_10023808 = RegisterWindowMessageA(s_PM_GET_PARAM_COUNT_1001d2a8);
  return;
}


// ---- FUN_1000e25b @ 1000e25b

void FUN_1000e25b(void)

{
  FUN_1000e265();
  return;
}


// ---- FUN_1000e265 @ 1000e265

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000e265(void)

{
  _DAT_10023798 = RegisterWindowMessageA(s_PM_GET_XY_VALUES_1001d2bc);
  return;
}


// ---- FUN_1000e27a @ 1000e27a

void FUN_1000e27a(void)

{
  FUN_1000e284();
  return;
}


// ---- FUN_1000e284 @ 1000e284

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000e284(void)

{
  _DAT_10023934 = RegisterWindowMessageA(s_PM_SET_XY_VALUES_1001d2d0);
  return;
}


// ---- FUN_1000e299 @ 1000e299

void FUN_1000e299(void)

{
  FUN_1000e2a3();
  return;
}


// ---- FUN_1000e2a3 @ 1000e2a3

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000e2a3(void)

{
  _DAT_100237fc = RegisterWindowMessageA(s_PM_GET_UNITS_STRING_1001d2e4);
  return;
}


// ---- FUN_1000e2b8 @ 1000e2b8

void FUN_1000e2b8(void)

{
  FUN_1000e2c2();
  return;
}


// ---- FUN_1000e2c2 @ 1000e2c2

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000e2c2(void)

{
  _DAT_10023a90 = RegisterWindowMessageA(s_PM_GET_UNSCALED_VALUE_1001d2f8);
  return;
}


// ---- FUN_1000e2d7 @ 1000e2d7

void FUN_1000e2d7(void)

{
  FUN_1000e2e1();
  return;
}


// ---- FUN_1000e2e1 @ 1000e2e1

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000e2e1(void)

{
  _DAT_100238a4 = RegisterWindowMessageA(s_PM_GET_SCALED_VALUE_1001d310);
  return;
}


// ---- FUN_1000e2f6 @ 1000e2f6

void FUN_1000e2f6(void)

{
  FUN_1000e300();
  return;
}


// ---- FUN_1000e300 @ 1000e300

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000e300(void)

{
  _DAT_10023a7c = RegisterWindowMessageA(s_PM_SET_VALUE_1001d324);
  return;
}


// ---- FUN_1000e315 @ 1000e315

void FUN_1000e315(void)

{
  FUN_1000e31f();
  return;
}


// ---- FUN_1000e31f @ 1000e31f

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000e31f(void)

{
  _DAT_10023940 = RegisterWindowMessageA(s_PM_SET_COARSE_1001d334);
  return;
}


// ---- FUN_1000e334 @ 1000e334

void FUN_1000e334(void)

{
  FUN_1000e33e();
  return;
}


// ---- FUN_1000e33e @ 1000e33e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000e33e(void)

{
  _DAT_1002396c = RegisterWindowMessageA(s_PM_GET_COARSE_1001d344);
  return;
}


// ---- FUN_1000e353 @ 1000e353

void FUN_1000e353(void)

{
  FUN_1000e35d();
  return;
}


// ---- FUN_1000e35d @ 1000e35d

void FUN_1000e35d(void)

{
  DAT_10023960 = RegisterWindowMessageA(s_PM_SET_NOTIFY_1001d354);
  return;
}


// ---- FUN_1000e372 @ 1000e372

void FUN_1000e372(void)

{
  FUN_1000e37c();
  return;
}


// ---- FUN_1000e37c @ 1000e37c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000e37c(void)

{
  _DAT_10023978 = RegisterWindowMessageA(s_PM_SET_USER_MODE_1001d364);
  return;
}


// ---- FUN_1000e391 @ 1000e391

void FUN_1000e391(void)

{
  FUN_1000e39b();
  return;
}


// ---- FUN_1000e39b @ 1000e39b

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000e39b(void)

{
  _DAT_10023abc = RegisterWindowMessageA(s_PM_LEFT_MOUSE_ADJUST_SETUP_1001d378);
  return;
}


// ---- FUN_1000e3b0 @ 1000e3b0

void FUN_1000e3b0(void)

{
  FUN_1000e3ba();
  return;
}


// ---- FUN_1000e3ba @ 1000e3ba

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000e3ba(void)

{
  _DAT_10023840 = RegisterWindowMessageA(s_PM_RIGHT_MOUSE_ADJUST_SETUP_1001d394);
  return;
}


// ---- FUN_1000e3cf @ 1000e3cf

void FUN_1000e3cf(void)

{
  FUN_1000e3d9();
  return;
}


// ---- FUN_1000e3d9 @ 1000e3d9

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000e3d9(void)

{
  _DAT_10023a24 = RegisterWindowMessageA(s_PM_MOUSE_ADJUST_START_1001d3b0);
  return;
}


// ---- FUN_1000e3ee @ 1000e3ee

void FUN_1000e3ee(void)

{
  FUN_1000e3f8();
  return;
}


// ---- FUN_1000e3f8 @ 1000e3f8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000e3f8(void)

{
  _DAT_10023a94 = RegisterWindowMessageA(s_PM_IS_ENABLED_1001d3c8);
  return;
}


// ---- FUN_1000e40d @ 1000e40d

void FUN_1000e40d(void)

{
  FUN_1000e417();
  return;
}


// ---- FUN_1000e417 @ 1000e417

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000e417(void)

{
  _DAT_10023958 = RegisterWindowMessageA(s_PM_IS_Y_OF_XY_1001d3d8);
  return;
}


// ---- FUN_1000e42c @ 1000e42c

void FUN_1000e42c(void)

{
  FUN_1000e436();
  return;
}


// ---- FUN_1000e436 @ 1000e436

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000e436(void)

{
  _DAT_10023ab4 = RegisterWindowMessageA(s_PM_IS_VECTOR_1001d3e8);
  return;
}


// ---- FUN_1000e44b @ 1000e44b

void FUN_1000e44b(void)

{
  FUN_1000e455();
  return;
}


// ---- FUN_1000e455 @ 1000e455

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000e455(void)

{
  _DAT_10023968 = RegisterWindowMessageA(s_PM_IS_VISIBLE_1001d3f8);
  return;
}


// ---- FUN_1000e46a @ 1000e46a

void FUN_1000e46a(void)

{
  FUN_1000e474();
  return;
}


// ---- FUN_1000e474 @ 1000e474

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000e474(void)

{
  _DAT_10023868 = RegisterWindowMessageA(s_PM_IS_READ_ONLY_1001d408);
  return;
}


// ---- FUN_1000e489 @ 1000e489

void FUN_1000e489(void)

{
  FUN_1000e493();
  return;
}


// ---- FUN_1000e493 @ 1000e493

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000e493(void)

{
  _DAT_1002394c = RegisterWindowMessageA(s_PM_IS_ENTRY_ONLY_1001d418);
  return;
}


// ---- FUN_1000e4a8 @ 1000e4a8

void FUN_1000e4a8(void)

{
  FUN_1000e4b2();
  return;
}


// ---- FUN_1000e4b2 @ 1000e4b2

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000e4b2(void)

{
  _DAT_100238c4 = RegisterWindowMessageA(s_PM_IS_READ_WRITE_1001d42c);
  return;
}


// ---- FUN_1000e4c7 @ 1000e4c7

void FUN_1000e4c7(void)

{
  FUN_1000e4d1();
  return;
}


// ---- FUN_1000e4d1 @ 1000e4d1

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000e4d1(void)

{
  _DAT_10023a44 = RegisterWindowMessageA(s_PM_PARAMETER_CLICK_1001d440);
  return;
}


// ---- FUN_1000e4e6 @ 1000e4e6

void FUN_1000e4e6(void)

{
  FUN_1000e4f0();
  return;
}


// ---- FUN_1000e4f0 @ 1000e4f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000e4f0(void)

{
  _DAT_100239a8 = RegisterWindowMessageA(s_PM_BUTTON_PRIVILEDGE_1001d454);
  return;
}


// ---- FUN_1000e505 @ 1000e505

void FUN_1000e505(void)

{
  FUN_1000e50f();
  return;
}


// ---- FUN_1000e50f @ 1000e50f

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000e50f(void)

{
  _DAT_100239f4 = RegisterWindowMessageA(s_PM_COMMON_TOOLBAR_FLAG_1001d46c);
  return;
}


// ---- FUN_1000e524 @ 1000e524

void FUN_1000e524(void)

{
  FUN_1000e52e();
  return;
}


// ---- FUN_1000e52e @ 1000e52e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000e52e(void)

{
  _DAT_100239cc = RegisterWindowMessageA(s_PM_SERVER_HELP_1001d484);
  return;
}


// ---- FUN_1000e543 @ 1000e543

void FUN_1000e543(void)

{
  FUN_1000e54d();
  return;
}


// ---- FUN_1000e54d @ 1000e54d

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000e54d(void)

{
  _DAT_1002375c = RegisterWindowMessageA(s_PM_PARAMETER_DOUBLE_CLICK_1001d494);
  return;
}


// ---- FUN_1000e562 @ 1000e562

void FUN_1000e562(void)

{
  FUN_1000e56c();
  return;
}


// ---- FUN_1000e56c @ 1000e56c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000e56c(void)

{
  _DAT_100237a8 = RegisterWindowMessageA(s_PM_MENU_MORE_CLICK_1001d4b0);
  return;
}


// ---- FUN_1000e581 @ 1000e581

void FUN_1000e581(void)

{
  FUN_1000e58b();
  return;
}


// ---- FUN_1000e58b @ 1000e58b

void FUN_1000e58b(void)

{
  DAT_100238fc = RegisterWindowMessageA(s_PM_PARAMETER_RIGHT_CLICK_1001d4c4);
  return;
}


// ---- FUN_1000e5a0 @ 1000e5a0

void FUN_1000e5a0(void)

{
  FUN_1000e5aa();
  return;
}


// ---- FUN_1000e5aa @ 1000e5aa

void FUN_1000e5aa(void)

{
  DAT_10023ab0 = RegisterWindowMessageA(s_PM_TRANSLATE_MNEMONIC_1001d4e0);
  return;
}


// ---- FUN_1000e5bf @ 1000e5bf

void FUN_1000e5bf(void)

{
  FUN_1000e5c9();
  return;
}


// ---- FUN_1000e5c9 @ 1000e5c9

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000e5c9(void)

{
  _DAT_10023890 = RegisterWindowMessageA(s_PM_EXECUTE_COMMAND_1001d4f8);
  return;
}


// ---- FUN_1000e5de @ 1000e5de

void FUN_1000e5de(void)

{
  FUN_1000e5e8();
  return;
}


// ---- FUN_1000e5e8 @ 1000e5e8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000e5e8(void)

{
  _DAT_100239fc = RegisterWindowMessageA(s_PM_STEP_VALUE_1001d50c);
  return;
}


// ---- FUN_1000e5fd @ 1000e5fd

void FUN_1000e5fd(void)

{
  FUN_1000e607();
  return;
}


// ---- FUN_1000e607 @ 1000e607

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000e607(void)

{
  _DAT_100237e8 = RegisterWindowMessageA(s_PM_HELP_MODE_1001d51c);
  return;
}


// ---- FUN_1000e61c @ 1000e61c

void FUN_1000e61c(void)

{
  FUN_1000e626();
  return;
}


// ---- FUN_1000e626 @ 1000e626

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000e626(void)

{
  _DAT_1002389c = RegisterWindowMessageA(s_PM_SERVER_MESSAGE_1001d52c);
  return;
}


// ---- FUN_1000e63b @ 1000e63b

void FUN_1000e63b(void)

{
  FUN_1000e645();
  return;
}


// ---- FUN_1000e645 @ 1000e645

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000e645(void)

{
  _DAT_1002399c = RegisterWindowMessageA(s_PM_AVAILABLE_MACROS_1001d540);
  return;
}


// ---- FUN_1000e65a @ 1000e65a

void FUN_1000e65a(void)

{
  FUN_1000e664();
  return;
}


// ---- FUN_1000e664 @ 1000e664

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000e664(void)

{
  _DAT_10023a68 = RegisterWindowMessageA(s_PM_SET_USER_PREFERENCES_1001d554);
  return;
}


// ---- FUN_1000e679 @ 1000e679

void FUN_1000e679(void)

{
  FUN_1000e683();
  return;
}


// ---- FUN_1000e683 @ 1000e683

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000e683(void)

{
  _DAT_10023944 = RegisterWindowMessageA(s_PM_USER_PREFERENCES_CHANGED_1001d56c);
  return;
}


// ---- FUN_1000e698 @ 1000e698

void FUN_1000e698(void)

{
  FUN_1000e6a2();
  return;
}


// ---- FUN_1000e6a2 @ 1000e6a2

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000e6a2(void)

{
  _DAT_10023894 = RegisterWindowMessageA(s_PM_NEXT_VP_UNITS_1001d588);
  return;
}


// ---- FUN_1000e6b7 @ 1000e6b7

void FUN_1000e6b7(void)

{
  FUN_1000e6c1();
  return;
}


// ---- FUN_1000e6c1 @ 1000e6c1

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000e6c1(void)

{
  _DAT_1002392c = RegisterWindowMessageA(s_PM_NEXT_PRESSURE_UNITS_1001d59c);
  return;
}


// ---- FUN_1000e6d6 @ 1000e6d6

void FUN_1000e6d6(void)

{
  FUN_1000e6e0();
  return;
}


// ---- FUN_1000e6e0 @ 1000e6e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000e6e0(void)

{
  _DAT_1002395c = RegisterWindowMessageA(s_PM_GET_USER_PREFERENCES_1001d5b4);
  return;
}


// ---- FUN_1000e6f5 @ 1000e6f5

void FUN_1000e6f5(void)

{
  FUN_1000e6ff();
  return;
}


// ---- FUN_1000e6ff @ 1000e6ff

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000e6ff(void)

{
  _DAT_100237dc = RegisterWindowMessageA(s_PM_SET_APERTURE_TABLE_1001d5cc);
  return;
}


// ---- FUN_1000e714 @ 1000e714

void FUN_1000e714(void)

{
  FUN_1000e71e();
  return;
}


// ---- FUN_1000e71e @ 1000e71e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000e71e(void)

{
  _DAT_100237f4 = RegisterWindowMessageA(s_PM_GET_APERTURE_TABLE_1001d5e4);
  return;
}


// ---- FUN_1000e733 @ 1000e733

void FUN_1000e733(void)

{
  FUN_1000e73d();
  return;
}


// ---- FUN_1000e73d @ 1000e73d

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000e73d(void)

{
  _DAT_100238a8 = RegisterWindowMessageA(s_PM_APERTURE_TABLE_CHANGED_1001d5fc);
  return;
}


// ---- FUN_1000e752 @ 1000e752

void FUN_1000e752(void)

{
  FUN_1000e75c();
  return;
}


// ---- FUN_1000e75c @ 1000e75c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000e75c(void)

{
  _DAT_10023848 = RegisterWindowMessageA(s_PM_LUT_EDITOR_1001d618);
  return;
}


// ---- FUN_1000e771 @ 1000e771

void FUN_1000e771(void)

{
  FUN_1000e77b();
  return;
}


// ---- FUN_1000e77b @ 1000e77b

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000e77b(void)

{
  _DAT_10023964 = RegisterWindowMessageA(s_PM_SET_LUT_POINT_1001d628);
  return;
}


// ---- FUN_1000e790 @ 1000e790

void FUN_1000e790(void)

{
  FUN_1000e79a();
  return;
}


// ---- FUN_1000e79a @ 1000e79a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000e79a(void)

{
  _DAT_1002377c = RegisterWindowMessageA(s_PM_SET_LUT_RGB_1001d63c);
  return;
}


// ---- FUN_1000e7af @ 1000e7af

void FUN_1000e7af(void)

{
  FUN_1000e7b9();
  return;
}


// ---- FUN_1000e7b9 @ 1000e7b9

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000e7b9(void)

{
  _DAT_10023750 = RegisterWindowMessageA(s_PM_SET_LUT_COLOR_1001d64c);
  return;
}


// ---- FUN_1000e7ce @ 1000e7ce

void FUN_1000e7ce(void)

{
  FUN_1000e7d8();
  return;
}


// ---- FUN_1000e7d8 @ 1000e7d8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000e7d8(void)

{
  _DAT_100238b8 = RegisterWindowMessageA(s_PM_SET_LUT_BC_1001d660);
  return;
}


// ---- FUN_1000e7ed @ 1000e7ed

void FUN_1000e7ed(void)

{
  FUN_1000e7f7();
  return;
}


// ---- FUN_1000e7f7 @ 1000e7f7

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000e7f7(void)

{
  _DAT_10023aa8 = RegisterWindowMessageA(s_PM_SET_LUT_INVERSE_1001d670);
  return;
}


// ---- FUN_1000e80c @ 1000e80c

void FUN_1000e80c(void)

{
  FUN_1000e816();
  return;
}


// ---- FUN_1000e816 @ 1000e816

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000e816(void)

{
  _DAT_10023aac = RegisterWindowMessageA(s_PM_SET_LUT_LINEAR_1001d684);
  return;
}


// ---- FUN_1000e82b @ 1000e82b

void FUN_1000e82b(void)

{
  FUN_1000e835();
  return;
}


// ---- FUN_1000e835 @ 1000e835

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000e835(void)

{
  _DAT_10023aa4 = RegisterWindowMessageA(s_PM_SET_LUT_GAMMA_1001d698);
  return;
}


// ---- FUN_1000e84a @ 1000e84a

void FUN_1000e84a(void)

{
  FUN_1000e854();
  return;
}


// ---- FUN_1000e854 @ 1000e854

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000e854(void)

{
  _DAT_10023a58 = RegisterWindowMessageA(s_PM_DRAW_GREY_WEDGE_1001d6ac);
  return;
}


// ---- FUN_1000e869 @ 1000e869

void FUN_1000e869(void)

{
  FUN_1000e873();
  return;
}


// ---- FUN_1000e873 @ 1000e873

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000e873(void)

{
  _DAT_100239b4 = RegisterWindowMessageA(s_PM_GET_IMAGE_PIXEL_1001d6c0);
  return;
}


// ---- FUN_1000e888 @ 1000e888

void FUN_1000e888(void)

{
  FUN_1000e892();
  return;
}


// ---- FUN_1000e892 @ 1000e892

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000e892(void)

{
  _DAT_1002372c = RegisterWindowMessageA(s_PM_RGB_READ_1001d6d4);
  return;
}


// ---- FUN_1000e8a7 @ 1000e8a7

void FUN_1000e8a7(void)

{
  FUN_1000e8b1();
  return;
}


// ---- FUN_1000e8b1 @ 1000e8b1

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000e8b1(void)

{
  _DAT_100236e8 = RegisterWindowMessageA(s_PM_LUT_LOAD_1001d6e0);
  return;
}


// ---- FUN_1000e8c6 @ 1000e8c6

void FUN_1000e8c6(void)

{
  FUN_1000e8d0();
  return;
}


// ---- FUN_1000e8d0 @ 1000e8d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000e8d0(void)

{
  _DAT_10023a18 = RegisterWindowMessageA(s_PM_LUT_READ_1001d6ec);
  return;
}


// ---- FUN_1000e8e5 @ 1000e8e5

void FUN_1000e8e5(void)

{
  FUN_1000e8ef();
  return;
}


// ---- FUN_1000e8ef @ 1000e8ef

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000e8ef(void)

{
  _DAT_100239e8 = RegisterWindowMessageA(s_PM_READ_COLOR_1001d6f8);
  return;
}


// ---- FUN_1000e904 @ 1000e904

void FUN_1000e904(void)

{
  FUN_1000e90e();
  return;
}


// ---- FUN_1000e90e @ 1000e90e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000e90e(void)

{
  _DAT_100238ac = RegisterWindowMessageA(s_PM_LUT_FILL_1001d708);
  return;
}


// ---- FUN_1000e923 @ 1000e923

void FUN_1000e923(void)

{
  FUN_1000e92d();
  return;
}


// ---- FUN_1000e92d @ 1000e92d

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000e92d(void)

{
  _DAT_10023970 = RegisterWindowMessageA(s_PM_LUT_QLIN_1001d714);
  return;
}


// ---- FUN_1000e942 @ 1000e942

void FUN_1000e942(void)

{
  FUN_1000e94c();
  return;
}


// ---- FUN_1000e94c @ 1000e94c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000e94c(void)

{
  _DAT_100239d4 = RegisterWindowMessageA(s_PM_LUT_QINV_1001d720);
  return;
}


// ---- FUN_1000e961 @ 1000e961

void FUN_1000e961(void)

{
  FUN_1000e96b();
  return;
}


// ---- FUN_1000e96b @ 1000e96b

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000e96b(void)

{
  _DAT_1002397c = RegisterWindowMessageA(s_PM_LUT_SAVE_1001d72c);
  return;
}


// ---- FUN_1000e980 @ 1000e980

void FUN_1000e980(void)

{
  FUN_1000e98a();
  return;
}


// ---- FUN_1000e98a @ 1000e98a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000e98a(void)

{
  _DAT_10023a74 = RegisterWindowMessageA(s_PM_LUT_RESTORE_1001d738);
  return;
}


// ---- FUN_1000e99f @ 1000e99f

void FUN_1000e99f(void)

{
  FUN_1000e9a9();
  return;
}


// ---- FUN_1000e9a9 @ 1000e9a9

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000e9a9(void)

{
  _DAT_10023a78 = RegisterWindowMessageA(s_PM_READ_COLOR_LUT_1001d748);
  return;
}


// ---- FUN_1000e9be @ 1000e9be

void FUN_1000e9be(void)

{
  FUN_1000e9c8();
  return;
}


// ---- FUN_1000e9c8 @ 1000e9c8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000e9c8(void)

{
  _DAT_1002398c = RegisterWindowMessageA(s_PM_GET_PIXEL_COLOUR_1001d75c);
  return;
}


// ---- FUN_1000e9dd @ 1000e9dd

void FUN_1000e9dd(void)

{
  FUN_1000e9e7();
  return;
}


// ---- FUN_1000e9e7 @ 1000e9e7

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000e9e7(void)

{
  _DAT_100238c8 = RegisterWindowMessageA(s_PM_LOAD_LUT_FILE_1001d770);
  return;
}


// ---- FUN_1000e9fc @ 1000e9fc

void FUN_1000e9fc(void)

{
  FUN_1000ea06();
  return;
}


// ---- FUN_1000ea06 @ 1000ea06

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000ea06(void)

{
  _DAT_100237a4 = RegisterWindowMessageA(s_PM_DO_FEATURESCAN_1001d784);
  return;
}


// ---- FUN_1000ea1b @ 1000ea1b

void FUN_1000ea1b(void)

{
  FUN_1000ea25();
  return;
}


// ---- FUN_1000ea25 @ 1000ea25

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000ea25(void)

{
  _DAT_100236e4 = RegisterWindowMessageA(s_PM_STOP_FEATURESCAN_1001d798);
  return;
}


// ---- FUN_1000ea3a @ 1000ea3a

void FUN_1000ea3a(void)

{
  FUN_1000ea44();
  return;
}


// ---- FUN_1000ea44 @ 1000ea44

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000ea44(void)

{
  _DAT_100239ac = RegisterWindowMessageA(s_PM_D_ZONE_DATA_CHANGE_1001d7ac);
  return;
}


// ---- FUN_1000ea59 @ 1000ea59

void FUN_1000ea59(void)

{
  FUN_1000ea63();
  return;
}


// ---- FUN_1000ea63 @ 1000ea63

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000ea63(void)

{
  _DAT_1002380c = RegisterWindowMessageA(s_PM_D_GET_ZONES_DATA_1001d7c4);
  return;
}


// ---- FUN_1000ea78 @ 1000ea78

void FUN_1000ea78(void)

{
  FUN_1000ea82();
  return;
}


// ---- FUN_1000ea82 @ 1000ea82

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000ea82(void)

{
  _DAT_100239d0 = RegisterWindowMessageA(s_PM_D_SET_ZONES_DATA_1001d7d8);
  return;
}


// ---- FUN_1000ea97 @ 1000ea97

void FUN_1000ea97(void)

{
  FUN_1000eaa1();
  return;
}


// ---- FUN_1000eaa1 @ 1000eaa1

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000eaa1(void)

{
  _DAT_10023938 = RegisterWindowMessageA(s_PM_D_GET_LICENCES_1001d7ec);
  return;
}


// ---- FUN_1000eab6 @ 1000eab6

void FUN_1000eab6(void)

{
  FUN_1000eac0();
  return;
}


// ---- FUN_1000eac0 @ 1000eac0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000eac0(void)

{
  _DAT_10023820 = RegisterWindowMessageA(s_PM_D_SET_LICENCES_1001d800);
  return;
}


// ---- FUN_1000ead5 @ 1000ead5

void FUN_1000ead5(void)

{
  FUN_1000eadf();
  return;
}


// ---- FUN_1000eadf @ 1000eadf

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000eadf(void)

{
  _DAT_10023a4c = RegisterWindowMessageA(s_PM_D_GET_ADMIN_CONFIG_1001d814);
  return;
}


// ---- FUN_1000eaf4 @ 1000eaf4

void FUN_1000eaf4(void)

{
  FUN_1000eafe();
  return;
}


// ---- FUN_1000eafe @ 1000eafe

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000eafe(void)

{
  _DAT_100236fc = RegisterWindowMessageA(s_PM_D_SET_ADMIN_CONFIG_1001d82c);
  return;
}


// ---- FUN_1000eb13 @ 1000eb13

void FUN_1000eb13(void)

{
  FUN_1000eb1d();
  return;
}


// ---- FUN_1000eb1d @ 1000eb1d

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000eb1d(void)

{
  _DAT_100238d8 = RegisterWindowMessageA(s_PM_ADMIN_FUNCTION_1001d844);
  return;
}


// ---- FUN_1000eb32 @ 1000eb32

void FUN_1000eb32(void)

{
  FUN_1000eb3c();
  return;
}


// ---- FUN_1000eb3c @ 1000eb3c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000eb3c(void)

{
  _DAT_10023788 = RegisterWindowMessageA(s_PM_GET_MACRO_LINKS_1001d858);
  return;
}


// ---- FUN_1000eb51 @ 1000eb51

void FUN_1000eb51(void)

{
  FUN_1000eb5b();
  return;
}


// ---- FUN_1000eb5b @ 1000eb5b

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000eb5b(void)

{
  _DAT_10023824 = RegisterWindowMessageA(s_PM_GET_UIF_LINKS_1001d86c);
  return;
}


// ---- FUN_1000eb70 @ 1000eb70

void FUN_1000eb70(void)

{
  FUN_1000eb7a();
  return;
}


// ---- FUN_1000eb7a @ 1000eb7a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000eb7a(void)

{
  _DAT_100238dc = RegisterWindowMessageA(s_PM_POINT_AS_ZONE_1001d880);
  return;
}


// ---- FUN_1000eb8f @ 1000eb8f

void FUN_1000eb8f(void)

{
  FUN_1000eb99();
  return;
}


// ---- FUN_1000eb99 @ 1000eb99

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000eb99(void)

{
  _DAT_10023aa0 = RegisterWindowMessageA(s_PM_GET_HELP_PATH_1001d894);
  return;
}


// ---- FUN_1000ebae @ 1000ebae

void FUN_1000ebae(void)

{
  FUN_1000ebb8();
  return;
}


// ---- FUN_1000ebb8 @ 1000ebb8

void FUN_1000ebb8(void)

{
  DAT_1002384c = RegisterWindowMessageA(s_PM_SAVE_TIFF_1001d8a8);
  return;
}


// ---- FUN_1000ebcd @ 1000ebcd

void FUN_1000ebcd(void)

{
  FUN_1000ebd7();
  return;
}


// ---- FUN_1000ebd7 @ 1000ebd7

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000ebd7(void)

{
  _DAT_10023a08 = RegisterWindowMessageA(s_PM_LOAD_TIFF_1001d8b8);
  return;
}


// ---- FUN_1000ebec @ 1000ebec

void FUN_1000ebec(void)

{
  FUN_1000ebf6();
  return;
}


// ---- FUN_1000ebf6 @ 1000ebf6

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000ebf6(void)

{
  _DAT_1002374c = RegisterWindowMessageA(s_PM_TIFF_TO_BMP_1001d8c8);
  return;
}


// ---- FUN_1000ec0b @ 1000ec0b

void FUN_1000ec0b(void)

{
  FUN_1000ec15();
  return;
}


// ---- FUN_1000ec15 @ 1000ec15

void FUN_1000ec15(void)

{
  DAT_10023708 = RegisterWindowMessageA(s_PM_IMAGE_TO_FILE_1001d8d8);
  return;
}


// ---- FUN_1000ec2a @ 1000ec2a

void FUN_1000ec2a(void)

{
  FUN_1000ec34();
  return;
}


// ---- FUN_1000ec34 @ 1000ec34

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000ec34(void)

{
  _DAT_10023ac0 = RegisterWindowMessageA(s_PM_RAW_IMAGE_TO_FILE_1001d8ec);
  return;
}


// ---- FUN_1000ec49 @ 1000ec49

void FUN_1000ec49(void)

{
  FUN_1000ec53();
  return;
}


// ---- FUN_1000ec53 @ 1000ec53

void FUN_1000ec53(void)

{
  DAT_10023734 = RegisterWindowMessageA(s_PM_IMAGE_FROM_FILE_1001d904);
  return;
}


// ---- FUN_1000ec68 @ 1000ec68

void FUN_1000ec68(void)

{
  FUN_1000ec72();
  return;
}


// ---- FUN_1000ec72 @ 1000ec72

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000ec72(void)

{
  _DAT_10023910 = RegisterWindowMessageA(s_PM_GET_TIFF_HEADER_1001d918);
  return;
}


// ---- FUN_1000ec87 @ 1000ec87

void FUN_1000ec87(void)

{
  FUN_1000ec91();
  return;
}


// ---- FUN_1000ec91 @ 1000ec91

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000ec91(void)

{
  _DAT_100238b4 = RegisterWindowMessageA(s_PM_GET_HISTOGRAM_DATA_1001d92c);
  return;
}


// ---- FUN_1000eca6 @ 1000eca6

void FUN_1000eca6(void)

{
  FUN_1000ecb0();
  return;
}


// ---- FUN_1000ecb0 @ 1000ecb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000ecb0(void)

{
  _DAT_10023a3c = RegisterWindowMessageA(s_PM_GET_LINE_DATA_1001d944);
  return;
}


// ---- FUN_1000ecc5 @ 1000ecc5

void FUN_1000ecc5(void)

{
  FUN_1000eccf();
  return;
}


// ---- FUN_1000eccf @ 1000eccf

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000eccf(void)

{
  _DAT_10023a48 = RegisterWindowMessageA(s_LEO_D_SET_DEF_PRINT_SCALE_1001d958);
  return;
}


// ---- FUN_1000ece4 @ 1000ece4

void FUN_1000ece4(void)

{
  FUN_1000ecee();
  return;
}


// ---- FUN_1000ecee @ 1000ecee

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000ecee(void)

{
  _DAT_10023a14 = RegisterWindowMessageA(s_PM_PRINT_IMAGE_1001d974);
  return;
}


// ---- FUN_1000ed03 @ 1000ed03

void FUN_1000ed03(void)

{
  FUN_1000ed0d();
  return;
}


// ---- FUN_1000ed0d @ 1000ed0d

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000ed0d(void)

{
  _DAT_100238b0 = RegisterWindowMessageA(s_PM_CLIP_COPY_1001d984);
  return;
}


// ---- FUN_1000ed22 @ 1000ed22

void FUN_1000ed22(void)

{
  FUN_1000ed2c();
  return;
}


// ---- FUN_1000ed2c @ 1000ed2c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000ed2c(void)

{
  _DAT_10023a28 = RegisterWindowMessageA(s_PM_CLIP_INFO_1001d994);
  return;
}


// ---- FUN_1000ed41 @ 1000ed41

void FUN_1000ed41(void)

{
  FUN_1000ed4b();
  return;
}


// ---- FUN_1000ed4b @ 1000ed4b

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000ed4b(void)

{
  _DAT_100237c4 = RegisterWindowMessageA(s_PM_CLIP_PASTE_1001d9a4);
  return;
}


// ---- FUN_1000ed60 @ 1000ed60

void FUN_1000ed60(void)

{
  FUN_1000ed6a();
  return;
}


// ---- FUN_1000ed6a @ 1000ed6a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000ed6a(void)

{
  _DAT_10023760 = RegisterWindowMessageA(s_PM_HRRU_PHOTO_1001d9b4);
  return;
}


// ---- FUN_1000ed7f @ 1000ed7f

void FUN_1000ed7f(void)

{
  FUN_1000ed89();
  return;
}


// ---- FUN_1000ed89 @ 1000ed89

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000ed89(void)

{
  _DAT_10023710 = RegisterWindowMessageA(s_PM_WOBBLE_REGISTER_1001d9c4);
  return;
}


// ---- FUN_1000ed9e @ 1000ed9e

void FUN_1000ed9e(void)

{
  FUN_1000eda8();
  return;
}


// ---- FUN_1000eda8 @ 1000eda8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000eda8(void)

{
  _DAT_100238d0 = RegisterWindowMessageA(s_PM_SHOW_FOCUS_DLG_1001d9d8);
  return;
}


// ---- FUN_1000edbd @ 1000edbd

void FUN_1000edbd(void)

{
  FUN_1000edc7();
  return;
}


// ---- FUN_1000edc7 @ 1000edc7

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000edc7(void)

{
  _DAT_10023744 = RegisterWindowMessageA(s_PM_SHOW_APER_DLG_1001d9ec);
  return;
}


// ---- FUN_1000eddc @ 1000eddc

void FUN_1000eddc(void)

{
  FUN_1000ede6();
  return;
}


// ---- FUN_1000ede6 @ 1000ede6

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000ede6(void)

{
  _DAT_100239dc = RegisterWindowMessageA(s_PM_SHOW_GUN_DLG_1001da00);
  return;
}


// ---- FUN_1000edfb @ 1000edfb

void FUN_1000edfb(void)

{
  FUN_1000ee05();
  return;
}


// ---- FUN_1000ee05 @ 1000ee05

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000ee05(void)

{
  _DAT_10023778 = RegisterWindowMessageA(s_PM_QUERY_CLOSE_SERVER_1001da10);
  return;
}


// ---- FUN_1000ee1a @ 1000ee1a

void FUN_1000ee1a(void)

{
  FUN_1000ee24();
  return;
}


// ---- FUN_1000ee24 @ 1000ee24

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000ee24(void)

{
  _DAT_10023740 = RegisterWindowMessageA(s_PM_WOBBLE_POPUP_INHIBIT_1001da28);
  return;
}


// ---- FUN_1000ee39 @ 1000ee39

void FUN_1000ee39(void)

{
  FUN_1000ee43();
  return;
}


// ---- FUN_1000ee43 @ 1000ee43

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000ee43(void)

{
  _DAT_1002391c = RegisterWindowMessageA(s_PM_GET_REGISTRATION_DATA_1001da40);
  return;
}


// ---- FUN_1000ee58 @ 1000ee58

void FUN_1000ee58(void)

{
  FUN_1000ee62();
  return;
}


// ---- FUN_1000ee62 @ 1000ee62

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000ee62(void)

{
  _DAT_10023950 = RegisterWindowMessageA(s_PM_SET_REGISTRATION_DATA_1001da5c);
  return;
}


// ---- FUN_1000ee77 @ 1000ee77

void FUN_1000ee77(void)

{
  FUN_1000ee81();
  return;
}


// ---- FUN_1000ee81 @ 1000ee81

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000ee81(void)

{
  _DAT_100238e0 = RegisterWindowMessageA(s_PM_DELTA_SAMPLE_GOTO_1001da78);
  return;
}


// ---- FUN_1000ee96 @ 1000ee96

void FUN_1000ee96(void)

{
  FUN_1000eea0();
  return;
}


// ---- FUN_1000eea0 @ 1000eea0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000eea0(void)

{
  _DAT_1002386c = RegisterWindowMessageA(s_PM_STAGE_LABEL_1001da90);
  return;
}


// ---- FUN_1000eeb5 @ 1000eeb5

void FUN_1000eeb5(void)

{
  FUN_1000eebf();
  return;
}


// ---- FUN_1000eebf @ 1000eebf

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000eebf(void)

{
  _DAT_10023a9c = RegisterWindowMessageA(s_PM_STAGE_POINT_GOTO_1001daa0);
  return;
}


// ---- FUN_1000eed4 @ 1000eed4

void FUN_1000eed4(void)

{
  FUN_1000eede();
  return;
}


// ---- FUN_1000eede @ 1000eede

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000eede(void)

{
  _DAT_10023a40 = RegisterWindowMessageA(s_PM_STAGE_POINT_GET_COUNT_1001dab4);
  return;
}


// ---- FUN_1000eef3 @ 1000eef3

void FUN_1000eef3(void)

{
  FUN_1000eefd();
  return;
}


// ---- FUN_1000eefd @ 1000eefd

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000eefd(void)

{
  _DAT_1002379c = RegisterWindowMessageA(s_PM_STAGE_POINT_GET_INDEX_1001dad0);
  return;
}


// ---- FUN_1000ef12 @ 1000ef12

void FUN_1000ef12(void)

{
  FUN_1000ef1c();
  return;
}


// ---- FUN_1000ef1c @ 1000ef1c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000ef1c(void)

{
  _DAT_10023770 = RegisterWindowMessageA(s_PM_STAGE_POINT_GET_DATA_1001daec);
  return;
}


// ---- FUN_1000ef31 @ 1000ef31

void FUN_1000ef31(void)

{
  FUN_1000ef3b();
  return;
}


// ---- FUN_1000ef3b @ 1000ef3b

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000ef3b(void)

{
  _DAT_100238d4 = RegisterWindowMessageA(s_PM_STAGE_POINT_SET_DATA_1001db04);
  return;
}


// ---- FUN_1000ef50 @ 1000ef50

void FUN_1000ef50(void)

{
  FUN_1000ef5a();
  return;
}


// ---- FUN_1000ef5a @ 1000ef5a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000ef5a(void)

{
  _DAT_100239f8 = RegisterWindowMessageA(s_PM_STAGE_POINTS_LIST_CHANGED_1001db1c);
  return;
}


// ---- FUN_1000ef6f @ 1000ef6f

void FUN_1000ef6f(void)

{
  FUN_1000ef79();
  return;
}


// ---- FUN_1000ef79 @ 1000ef79

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000ef79(void)

{
  _DAT_10023764 = RegisterWindowMessageA(s_PM_STAGE_POINT_GET_FLAGS_1001db3c);
  return;
}


// ---- FUN_1000ef8e @ 1000ef8e

void FUN_1000ef8e(void)

{
  FUN_1000ef98();
  return;
}


// ---- FUN_1000ef98 @ 1000ef98

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000ef98(void)

{
  _DAT_10023860 = RegisterWindowMessageA(s_PM_STAGE_POINT_SET_FLAGS_1001db58);
  return;
}


// ---- FUN_1000efad @ 1000efad

void FUN_1000efad(void)

{
  FUN_1000efb7();
  return;
}


// ---- FUN_1000efb7 @ 1000efb7

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000efb7(void)

{
  _DAT_10023a98 = RegisterWindowMessageA(s_PM_STAGE_MODE_IS_REGISTERED_1001db74);
  return;
}


// ---- FUN_1000efcc @ 1000efcc

void FUN_1000efcc(void)

{
  FUN_1000efd6();
  return;
}


// ---- FUN_1000efd6 @ 1000efd6

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000efd6(void)

{
  _DAT_10023a5c = RegisterWindowMessageA(s_PM_STAGE_POINT_GET_MODE_1001db90);
  return;
}


// ---- FUN_1000efeb @ 1000efeb

void FUN_1000efeb(void)

{
  FUN_1000eff5();
  return;
}


// ---- FUN_1000eff5 @ 1000eff5

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000eff5(void)

{
  _DAT_10023988 = RegisterWindowMessageA(s_PM_STAGE_SET_MAP_MODE_1001dba8);
  return;
}


// ---- FUN_1000f00a @ 1000f00a

void FUN_1000f00a(void)

{
  FUN_1000f014();
  return;
}


// ---- FUN_1000f014 @ 1000f014

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000f014(void)

{
  _DAT_10023a8c = RegisterWindowMessageA(s_PM_STAGE_TYPE_DATA_CHANGED_1001dbc0);
  return;
}


// ---- FUN_1000f029 @ 1000f029

void FUN_1000f029(void)

{
  FUN_1000f033();
  return;
}


// ---- FUN_1000f033 @ 1000f033

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000f033(void)

{
  _DAT_10023738 = RegisterWindowMessageA(s_PM_GET_STAGE_DEFAULT_ROT_CENTRE_1001dbdc);
  return;
}


// ---- FUN_1000f048 @ 1000f048

void FUN_1000f048(void)

{
  FUN_1000f052();
  return;
}


// ---- FUN_1000f052 @ 1000f052

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000f052(void)

{
  _DAT_10023a88 = RegisterWindowMessageA(s_PM_SRV16_MISC_FUNC_1001dbfc);
  return;
}


// ---- FUN_1000f067 @ 1000f067

void FUN_1000f067(void)

{
  FUN_1000f071();
  return;
}


// ---- FUN_1000f071 @ 1000f071

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000f071(void)

{
  _DAT_10023720 = RegisterWindowMessageA(s_PM_GET_KNOB_ASSIGNMENT_1001dc10);
  return;
}


// ---- FUN_1000f086 @ 1000f086

void FUN_1000f086(void)

{
  FUN_1000f090();
  return;
}


// ---- FUN_1000f090 @ 1000f090

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000f090(void)

{
  _DAT_10023914 = RegisterWindowMessageA(s_PM_NAVMGR_REQUEST_1001dc28);
  return;
}


// ---- FUN_1000f0a5 @ 1000f0a5

void FUN_1000f0a5(void)

{
  FUN_1000f0af();
  return;
}


// ---- FUN_1000f0af @ 1000f0af

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000f0af(void)

{
  _DAT_10023870 = RegisterWindowMessageA(s_PM_SHOWHIDEDIALOGS_REQUEST_1001dc3c);
  return;
}


// ---- FUN_1000f0c4 @ 1000f0c4

void FUN_1000f0c4(void)

{
  FUN_1000f0ce();
  return;
}


// ---- FUN_1000f0ce @ 1000f0ce

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000f0ce(void)

{
  _DAT_10023878 = RegisterWindowMessageA(s_PM_NAVMGR_DONE_1001dc58);
  return;
}


// ---- FUN_1000f0e3 @ 1000f0e3

void FUN_1000f0e3(void)

{
  FUN_1000f0ed();
  return;
}


// ---- FUN_1000f0ed @ 1000f0ed

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000f0ed(void)

{
  _DAT_10023780 = RegisterWindowMessageA(s_LEO_HPAPP_MESSAGE_1001dc68);
  return;
}


// ---- FUN_1000f102 @ 1000f102

void FUN_1000f102(void)

{
  FUN_1000f10c();
  return;
}


// ---- FUN_1000f10c @ 1000f10c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000f10c(void)

{
  _DAT_10023748 = RegisterWindowMessageA(s_PM_GET_HPAPP_PANEL_DATA_1001dc7c);
  return;
}


// ---- FUN_1000f121 @ 1000f121

void FUN_1000f121(void)

{
  FUN_1000f12b();
  return;
}


// ---- FUN_1000f12b @ 1000f12b

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000f12b(void)

{
  _DAT_1002383c = RegisterWindowMessageA(s_PM_HPAPP_FUNC_1001dc94);
  return;
}


// ---- FUN_1000f140 @ 1000f140

void FUN_1000f140(void)

{
  FUN_1000f14a();
  return;
}


// ---- FUN_1000f14a @ 1000f14a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000f14a(void)

{
  _DAT_100238c0 = RegisterWindowMessageA(s_PM_GET_CAL_COL_DATA_1001dca4);
  return;
}


// ---- FUN_1000f15f @ 1000f15f

void FUN_1000f15f(void)

{
  FUN_1000f169();
  return;
}


// ---- FUN_1000f169 @ 1000f169

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000f169(void)

{
  _DAT_10023a6c = RegisterWindowMessageA(s_PM_CHANGE_IMAGE_DIRECTORY_1001dcb8);
  return;
}


// ---- FUN_1000f17e @ 1000f17e

void FUN_1000f17e(void)

{
  FUN_1000f188();
  return;
}


// ---- FUN_1000f188 @ 1000f188

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000f188(void)

{
  _DAT_10023898 = RegisterWindowMessageA(s_PM_CHANGE_USER_DIRECTORY_1001dcd4);
  return;
}


// ---- FUN_1000f19d @ 1000f19d

void FUN_1000f19d(void)

{
  FUN_1000f1a7();
  return;
}


// ---- FUN_1000f1a7 @ 1000f1a7

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000f1a7(void)

{
  _DAT_100238cc = RegisterWindowMessageA(s_PM_TRACKERBALL_INIT_1001dcf0);
  return;
}


// ---- FUN_1000f1bc @ 1000f1bc

void FUN_1000f1bc(void)

{
  FUN_1000f1c6();
  return;
}


// ---- FUN_1000f1c6 @ 1000f1c6

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000f1c6(void)

{
  _DAT_10023954 = RegisterWindowMessageA(s_PM_TRACKERBALL_SHOW_SETTINGS_1001dd04);
  return;
}


// ---- FUN_1000f1db @ 1000f1db

void FUN_1000f1db(void)

{
  FUN_1000f1e5();
  return;
}


// ---- FUN_1000f1e5 @ 1000f1e5

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000f1e5(void)

{
  _DAT_100238e8 = RegisterWindowMessageA(s_PM_TRACKERBALL_ARE_DIALOGS_HIDDE_1001dd24);
  return;
}


// ---- FUN_1000f1fa @ 1000f1fa

void FUN_1000f1fa(void)

{
  FUN_1000f204();
  return;
}


// ---- FUN_1000f204 @ 1000f204

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000f204(void)

{
  _DAT_100238a0 = RegisterWindowMessageA(s_PM_TRACKERBALL_ASSIGN_BUTTON_1001dd48);
  return;
}


// ---- FUN_1000f219 @ 1000f219

void FUN_1000f219(void)

{
  FUN_1000f223();
  return;
}


// ---- FUN_1000f223 @ 1000f223

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000f223(void)

{
  _DAT_10023a04 = RegisterWindowMessageA(s_PM_TRACKERBALL_GET_ASSIGNMENTS_1001dd68);
  return;
}


// ---- FUN_1000f238 @ 1000f238

void FUN_1000f238(void)

{
  FUN_1000f242();
  return;
}


// ---- FUN_1000f242 @ 1000f242

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000f242(void)

{
  _DAT_10023838 = RegisterWindowMessageA(s_PM_TRACKERBALL_SELECT_BUTTON_1001dd88);
  return;
}


// ---- FUN_1000f257 @ 1000f257

void FUN_1000f257(void)

{
  FUN_1000f261();
  return;
}


// ---- FUN_1000f261 @ 1000f261

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000f261(void)

{
  _DAT_10023900 = RegisterWindowMessageA(s_PM_TRACKERBALL_SELECT_BUTTON_1001dda8);
  return;
}


// ---- FUN_1000f276 @ 1000f276

void FUN_1000f276(void)

{
  FUN_1000f280();
  return;
}


// ---- FUN_1000f280 @ 1000f280

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000f280(void)

{
  _DAT_10023a50 = RegisterWindowMessageA(s_PM_TRACKERBALL_AXIS_SELECTED_1001ddc8);
  return;
}


// ---- FUN_1000f295 @ 1000f295

void FUN_1000f295(void)

{
  FUN_1000f29f();
  return;
}


// ---- FUN_1000f29f @ 1000f29f

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000f29f(void)

{
  _DAT_100239e4 = RegisterWindowMessageA(s_PM_2ND_IMAGE_DISPLAY_1001dde8);
  return;
}


// ---- FUN_1000f2b4 @ 1000f2b4

void FUN_1000f2b4(void)

{
  FUN_1000f2be();
  return;
}


// ---- FUN_1000f2be @ 1000f2be

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000f2be(void)

{
  _DAT_10023854 = RegisterWindowMessageA(s_PM_GET_2ND_IMAGE_DISPLAY_1001de00);
  return;
}


// ---- FUN_1000f2d3 @ 1000f2d3

void FUN_1000f2d3(void)

{
  FUN_1000f2dd();
  return;
}


// ---- FUN_1000f2dd @ 1000f2dd

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000f2dd(void)

{
  _DAT_10023a38 = RegisterWindowMessageA(s_PM_NOTIFY_2ND_IMAGE_DISPLAY_1001de1c);
  return;
}


// ---- FUN_1000f2f2 @ 1000f2f2

void FUN_1000f2f2(void)

{
  FUN_1000f2fc();
  return;
}


// ---- FUN_1000f2fc @ 1000f2fc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000f2fc(void)

{
  _DAT_10023a54 = RegisterWindowMessageA(s_PM_2ND_IMAGE_SELECT_1001de38);
  return;
}


// ---- FUN_1000f311 @ 1000f311

void FUN_1000f311(void)

{
  FUN_1000f31b();
  return;
}


// ---- FUN_1000f31b @ 1000f31b

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000f31b(void)

{
  _DAT_1002373c = RegisterWindowMessageA(s_PM_SELECT_USER_AREA_1001de4c);
  return;
}


// ---- FUN_1000f330 @ 1000f330

void FUN_1000f330(void)

{
  FUN_1000f33a();
  return;
}


// ---- FUN_1000f33a @ 1000f33a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000f33a(void)

{
  _DAT_10023714 = RegisterWindowMessageA(s_PM_READ_USER_AREA_1001de60);
  return;
}


// ---- FUN_1000f34f @ 1000f34f

void FUN_1000f34f(void)

{
  FUN_1000f359();
  return;
}


// ---- FUN_1000f359 @ 1000f359

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000f359(void)

{
  _DAT_10023a2c = RegisterWindowMessageA(s_PM_CREATE_USER_AREA_1001de74);
  return;
}


// ---- FUN_1000f36e @ 1000f36e

void FUN_1000f36e(void)

{
  FUN_1000f378();
  return;
}


// ---- FUN_1000f378 @ 1000f378

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000f378(void)

{
  _DAT_10023768 = RegisterWindowMessageA(s_PM_DELETE_USER_AREA_1001de88);
  return;
}


// ---- FUN_1000f38d @ 1000f38d

void FUN_1000f38d(void)

{
  FUN_1000f397();
  return;
}


// ---- FUN_1000f397 @ 1000f397

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000f397(void)

{
  _DAT_10023888 = RegisterWindowMessageA(s_PM_LEO_SERVER_EVENT_1001de9c);
  return;
}


// ---- FUN_1000f3ac @ 1000f3ac

void FUN_1000f3ac(void)

{
  FUN_1000f3b6();
  return;
}


// ---- FUN_1000f3b6 @ 1000f3b6

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000f3b6(void)

{
  _DAT_10023994 = RegisterWindowMessageA(s_PM_GET_MEASURE_UNITS_1001deb0);
  return;
}


// ---- FUN_1000f3cb @ 1000f3cb

void FUN_1000f3cb(void)

{
  FUN_1000f3d5();
  return;
}


// ---- FUN_1000f3d5 @ 1000f3d5

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000f3d5(void)

{
  _DAT_10023a34 = RegisterWindowMessageA(s_PM_SET_MEASURE_UNITS_1001dec8);
  return;
}


// ---- FUN_1000f3ea @ 1000f3ea

void FUN_1000f3ea(void)

{
  FUN_1000f3f4();
  return;
}


// ---- FUN_1000f3f4 @ 1000f3f4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000f3f4(void)

{
  _DAT_100237d8 = RegisterWindowMessageA(s_PM_GET_PRESET_COUNT_1001dee0);
  return;
}


// ---- FUN_1000f409 @ 1000f409

void FUN_1000f409(void)

{
  FUN_1000f413();
  return;
}


// ---- FUN_1000f413 @ 1000f413

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000f413(void)

{
  _DAT_100237cc = RegisterWindowMessageA(s_PM_SET_PRESET_INDEX_1001def4);
  return;
}


// ---- FUN_1000f428 @ 1000f428

void FUN_1000f428(void)

{
  FUN_1000f432();
  return;
}


// ---- FUN_1000f432 @ 1000f432

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000f432(void)

{
  _DAT_100237b0 = RegisterWindowMessageA(s_PM_GET_PRESET_LABEL_1001df08);
  return;
}


// ---- FUN_1000f447 @ 1000f447

void FUN_1000f447(void)

{
  FUN_1000f451();
  return;
}


// ---- FUN_1000f451 @ 1000f451

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000f451(void)

{
  _DAT_10023830 = RegisterWindowMessageA(s_PM_GENERAL_FUNCTION_1001df1c);
  return;
}


// ---- FUN_1000f470 @ 1000f470

undefined4 * __thiscall FUN_1000f470(void *this,uint param_1)

{
  FUN_1000c84b(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- DdeNameService @ 1000f49e

HDDEDATA DdeNameService(DWORD idInst,HSZ hsz1,HSZ hsz2,UINT afCmd)

{
  HDDEDATA pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000f49e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = DdeNameService(idInst,hsz1,hsz2,afCmd);
  return pHVar1;
}


// ---- DdeCreateStringHandleA @ 1000f4a4

HSZ DdeCreateStringHandleA(DWORD idInst,LPCSTR psz,int iCodePage)

{
  HSZ pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000f4a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = DdeCreateStringHandleA(idInst,psz,iCodePage);
  return pHVar1;
}


// ---- DdeInitializeA @ 1000f4aa

UINT DdeInitializeA(LPDWORD pidInst,PFNCALLBACK pfnCallback,DWORD afCmd,DWORD ulRes)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000f4aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = DdeInitializeA(pidInst,pfnCallback,afCmd,ulRes);
  return UVar1;
}


// ---- DdeUninitialize @ 1000f4b0

BOOL DdeUninitialize(DWORD idInst)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000f4b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DdeUninitialize(idInst);
  return BVar1;
}


// ---- DdeFreeStringHandle @ 1000f4b6

BOOL DdeFreeStringHandle(DWORD idInst,HSZ hsz)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000f4b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DdeFreeStringHandle(idInst,hsz);
  return BVar1;
}


// ---- DdePostAdvise @ 1000f4bc

BOOL DdePostAdvise(DWORD idInst,HSZ hszTopic,HSZ hszItem)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000f4bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DdePostAdvise(idInst,hszTopic,hszItem);
  return BVar1;
}


// ---- DdeQueryConvInfo @ 1000f4c2

UINT DdeQueryConvInfo(HCONV hConv,DWORD idTransaction,PCONVINFO pConvInfo)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000f4c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = DdeQueryConvInfo(hConv,idTransaction,pConvInfo);
  return UVar1;
}


// ---- DdeCreateDataHandle @ 1000f4c8

HDDEDATA DdeCreateDataHandle(DWORD idInst,LPBYTE pSrc,DWORD cb,DWORD cbOff,HSZ hszItem,UINT wFmt,
                            UINT afCmd)

{
  HDDEDATA pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000f4c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = DdeCreateDataHandle(idInst,pSrc,cb,cbOff,hszItem,wFmt,afCmd);
  return pHVar1;
}


// ---- DdeGetData @ 1000f4ce

DWORD DdeGetData(HDDEDATA hData,LPBYTE pDst,DWORD cbMax,DWORD cbOff)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000f4ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = DdeGetData(hData,pDst,cbMax,cbOff);
  return DVar1;
}


// ---- DdeQueryStringA @ 1000f4d4

DWORD DdeQueryStringA(DWORD idInst,HSZ hsz,LPSTR psz,DWORD cchMax,int iCodePage)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000f4d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = DdeQueryStringA(idInst,hsz,psz,cchMax,iCodePage);
  return DVar1;
}


// ---- operator_new @ 1000f4da

void * __cdecl operator_new(uint param_1)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000f4da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = operator_new(param_1);
  return pvVar1;
}


// ---- operator_delete @ 1000f4e6

void __cdecl operator_delete(void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x1000f4e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  operator_delete(param_1);
  return;
}


// ---- operator= @ 1000f4ec

CString * __thiscall CString::operator=(CString *this,char *param_1)

{
  CString *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000f4ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = operator=(this,param_1);
  return pCVar1;
}


// ---- ~CWinApp @ 1000f5b8

void __thiscall CWinApp::~CWinApp(CWinApp *this)

{
                    /* WARNING: Could not recover jumptable at 0x1000f5b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~CWinApp(this);
  return;
}


// ---- CWinApp @ 1000f5be

void __thiscall CWinApp::CWinApp(CWinApp *this,char *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x1000f5be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CWinApp(this,param_1);
  return;
}


// ---- InitInstance @ 1000f5c4

int __thiscall CWinApp::InitInstance(CWinApp *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000f5c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = InitInstance(this);
  return iVar1;
}


// ---- GetMainWnd @ 1000f5ca

CWnd * __thiscall CWinThread::GetMainWnd(CWinThread *this)

{
  CWnd *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000f5ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetMainWnd(this);
  return pCVar1;
}


// ---- AFX_MAINTAIN_STATE2 @ 1000f5d0

void __thiscall
AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2(AFX_MAINTAIN_STATE2 *this,AFX_MODULE_STATE *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x1000f5d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AFX_MAINTAIN_STATE2(this,param_1);
  return;
}


// ---- AfxMessageBox @ 1000f5d6

int AfxMessageBox(char *param_1,uint param_2,uint param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000f5d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = AfxMessageBox(param_1,param_2,param_3);
  return iVar1;
}


// ---- ~CString @ 1000f5dc

void __thiscall CString::~CString(CString *this)

{
                    /* WARNING: Could not recover jumptable at 0x1000f5dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~CString(this);
  return;
}


// ---- CString @ 1000f5e2

void __thiscall CString::CString(CString *this)

{
                    /* WARNING: Could not recover jumptable at 0x1000f5e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CString(this);
  return;
}


// ---- CString @ 1000f5e8

void __thiscall CString::CString(CString *this,char *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x1000f5e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CString(this,param_1);
  return;
}


// ---- CString @ 1000f5ee

void __thiscall CString::CString(CString *this,CString *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x1000f5ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CString(this,param_1);
  return;
}


// ---- AfxTryCleanup @ 1000f5f4

void AfxTryCleanup(void)

{
                    /* WARNING: Could not recover jumptable at 0x1000f5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AfxTryCleanup();
  return;
}


// ---- FromHandle @ 1000f5fa

CWnd * CWnd::FromHandle(HWND__ *param_1)

{
  CWnd *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000f5fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = FromHandle(param_1);
  return pCVar1;
}


// ---- AFX_EXCEPTION_LINK @ 1000f600

void __thiscall AFX_EXCEPTION_LINK::AFX_EXCEPTION_LINK(AFX_EXCEPTION_LINK *this)

{
                    /* WARNING: Could not recover jumptable at 0x1000f600. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AFX_EXCEPTION_LINK(this);
  return;
}


// ---- CWnd @ 1000f69c

void __thiscall CWnd::CWnd(CWnd *this)

{
                    /* WARNING: Could not recover jumptable at 0x1000f69c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CWnd(this);
  return;
}


// ---- ~CWnd @ 1000f6a2

void __thiscall CWnd::~CWnd(CWnd *this)

{
                    /* WARNING: Could not recover jumptable at 0x1000f6a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~CWnd(this);
  return;
}


// ---- Default @ 1000f6a8

long __thiscall CWnd::Default(CWnd *this)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000f6a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = Default(this);
  return lVar1;
}


// ---- operator= @ 1000f6ae

CString * __thiscall CString::operator=(CString *this,CString *param_1)

{
  CString *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000f6ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = operator=(this,param_1);
  return pCVar1;
}


// ---- operator+ @ 1000f6b4

void operator+(CString *param_1,CString *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x1000f6b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  operator+(param_1,param_2);
  return;
}


// ---- operator+ @ 1000f6ba

void operator+(CString *param_1,char *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x1000f6ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  operator+(param_1,param_2);
  return;
}


// ---- ReleaseBuffer @ 1000f6c0

void __thiscall CString::ReleaseBuffer(CString *this,int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x1000f6c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseBuffer(this,param_1);
  return;
}


// ---- GetBuffer @ 1000f6c6

char * __thiscall CString::GetBuffer(CString *this,int param_1)

{
  char *pcVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000f6c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pcVar1 = GetBuffer(this,param_1);
  return pcVar1;
}


// ---- operator+ @ 1000f6cc

void operator+(char *param_1,CString *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x1000f6cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  operator+(param_1,param_2);
  return;
}


// ---- AfxGetModuleState @ 1000f6d2

AFX_MODULE_STATE * AfxGetModuleState(void)

{
  AFX_MODULE_STATE *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000f6d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = AfxGetModuleState();
  return pAVar1;
}


// ---- FUN_1000f6e2 @ 1000f6e2

undefined4 * FUN_1000f6e2(void)

{
  AFX_MODULE_STATE::AFX_MODULE_STATE((AFX_MODULE_STATE *)&DAT_10023ac8,1,FUN_1000f740,0x600);
  DAT_10023ac8 = &PTR_FUN_100115c8;
  return &DAT_10023ac8;
}


// ---- FUN_1000f70a @ 1000f70a

AFX_MODULE_STATE * __thiscall FUN_1000f70a(void *this,byte param_1)

{
  AFX_MODULE_STATE::~AFX_MODULE_STATE(this);
  if ((param_1 & 1) != 0) {
    CNoTrackObject::operator_delete(this);
  }
  return this;
}


// ---- ~AFX_MODULE_STATE @ 1000f725

void __thiscall AFX_MODULE_STATE::~AFX_MODULE_STATE(AFX_MODULE_STATE *this)

{
                    /* WARNING: Could not recover jumptable at 0x1000fc28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~AFX_MODULE_STATE(this);
  return;
}


// ---- FUN_1000f72a @ 1000f72a

void FUN_1000f72a(void)

{
  FUN_1000fa6a((_onexit_t)&LAB_1000f736);
  return;
}


// ---- FUN_1000f740 @ 1000f740

/* WARNING: Function: _EH_prolog replaced with injection: EH_prolog */

void FUN_1000f740(HWND__ *param_1,uint param_2,uint param_3,long param_4)

{
  undefined4 local_18;
  int local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1001012c;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2
            ((AFX_MAINTAIN_STATE2 *)&local_18,(AFX_MODULE_STATE *)&DAT_10023ac8);
  local_8 = 0;
  AfxWndProc(param_1,param_2,param_3,param_4);
  *(undefined4 *)(local_14 + 4) = local_18;
  ExceptionList = local_10;
  return;
}


// ---- FUN_1000f785 @ 1000f785

undefined4 * FUN_1000f785(void)

{
  return &DAT_10023ac8;
}


// ---- FUN_1000f78b @ 1000f78b

int FUN_1000f78b(HINSTANCE__ *param_1,int param_2)

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
      pAVar5 = AfxSetModuleState((AFX_MODULE_STATE *)&DAT_10023ac8);
      p_Var3 = AfxGetThreadState();
      *(AFX_MODULE_STATE **)(p_Var3 + 8) = pAVar5;
      pAVar5 = AfxGetModuleState();
      if (*(int **)(pAVar5 + 4) != (int *)0x0) {
        (**(code **)(**(int **)(pAVar5 + 4) + 0x70))();
      }
      AfxLockTempMaps();
      AfxUnlockTempMaps(-1);
      AfxWinTerm();
      AfxTermExtensionModule((AFX_EXTENSION_MODULE *)&DAT_10024b58,1);
    }
    else if (param_2 == 3) {
      AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2
                ((AFX_MAINTAIN_STATE2 *)&local_c,(AFX_MODULE_STATE *)&DAT_10023ac8);
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
  iVar4 = AfxWinInit(param_1,(HINSTANCE__ *)0x0,"",0);
  if (iVar4 != 0) {
    pAVar5 = AfxGetModuleState();
    piVar2 = *(int **)(pAVar5 + 4);
    if ((piVar2 == (int *)0x0) || (iVar4 = (**(code **)(*piVar2 + 0x58))(), iVar4 != 0)) {
      *(undefined4 *)(p_Var3 + 8) = uVar1;
      AfxInitExtensionModule((AFX_EXTENSION_MODULE *)&DAT_10024b58,param_1);
      this = operator_new(0x40);
      if (this != (CDynLinkLibrary *)0x0) {
        CDynLinkLibrary::CDynLinkLibrary(this,(AFX_EXTENSION_MODULE *)&DAT_10024b58,0);
      }
      param_2 = 1;
      goto LAB_1000f817;
    }
    (**(code **)(*piVar2 + 0x70))();
  }
  AfxWinTerm();
LAB_1000f817:
  *(undefined4 *)(p_Var3 + 8) = uVar1;
  p_Var3 = AfxGetThreadState();
  AfxSetModuleState(*(AFX_MODULE_STATE **)(p_Var3 + 8));
  return param_2;
}


// ---- FUN_1000f8b2 @ 1000f8b2

undefined4 FUN_1000f8b2(undefined4 param_1,int param_2)

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
    pAVar2 = AfxSetModuleState((AFX_MODULE_STATE *)&DAT_10023ac8);
    *(AFX_MODULE_STATE **)(p_Var1 + 8) = pAVar2;
  }
  else if (param_2 == 0) {
    p_Var1 = AfxGetThreadState();
    AfxSetModuleState(*(AFX_MODULE_STATE **)(p_Var1 + 8));
  }
  return 1;
}


// ---- FUN_1000f910 @ 1000f910

void FUN_1000f910(undefined4 param_1,undefined4 param_2,int param_3,undefined *param_4)

{
  void *local_14;
  undefined *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_100115d0;
  puStack_10 = &DAT_1000fbfe;
  local_14 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_14;
  while( true ) {
    param_3 = param_3 + -1;
    if (param_3 < 0) break;
    (*(code *)param_4)();
  }
  local_8 = 0xffffffff;
  FUN_1000f978();
  ExceptionList = local_14;
  return;
}


// ---- FUN_1000f978 @ 1000f978

void FUN_1000f978(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x1c) == 0) {
    FUN_1000f990(*(undefined4 *)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + 0xc),
                 *(int *)(unaff_EBP + 0x10),*(undefined **)(unaff_EBP + 0x14));
  }
  return;
}


// ---- FUN_1000f990 @ 1000f990

void FUN_1000f990(undefined4 param_1,undefined4 param_2,int param_3,undefined *param_4)

{
  void *local_14;
  undefined *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_100115e0;
  puStack_10 = &DAT_1000fbfe;
  local_14 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_14;
  while( true ) {
    param_3 = param_3 + -1;
    if (param_3 < 0) break;
    (*(code *)param_4)();
  }
  ExceptionList = local_14;
  return;
}


// ---- FUN_1000f9ee @ 1000f9ee

undefined4 __cdecl FUN_1000f9ee(undefined4 *param_1)

{
  if (*(int *)*param_1 != -0x1f928c9d) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  terminate();
}


// ---- strlen @ 1000fa04

size_t __cdecl strlen(char *_Str)

{
  size_t sVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000fa04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  sVar1 = strlen(_Str);
  return sVar1;
}


// ---- ftol @ 1000fa0a

void __cdecl ftol(void)

{
                    /* WARNING: Could not recover jumptable at 0x1000fa0a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ftol();
  return;
}


// ---- memset @ 1000fa10

void * __cdecl memset(void *_Dst,int _Val,size_t _Size)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000fa10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = memset(_Dst,_Val,_Size);
  return pvVar1;
}


// ---- strcpy @ 1000fa16

char * __cdecl strcpy(char *_Dest,char *_Source)

{
  char *pcVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000fa16. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pcVar1 = strcpy(_Dest,_Source);
  return pcVar1;
}


// ---- memcpy @ 1000fa1c

void * __cdecl memcpy(void *_Dst,void *_Src,size_t _Size)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000fa1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = memcpy(_Dst,_Src,_Size);
  return pvVar1;
}


// ---- FUN_1000fa3e @ 1000fa3e

void __cdecl FUN_1000fa3e(_onexit_t param_1)

{
  if (DAT_10024b80 == -1) {
    _onexit(param_1);
    return;
  }
  __dllonexit(param_1,&DAT_10024b80,&DAT_10024b7c);
  return;
}


// ---- FUN_1000fa6a @ 1000fa6a

int __cdecl FUN_1000fa6a(_onexit_t param_1)

{
  int iVar1;
  
  iVar1 = FUN_1000fa3e(param_1);
  return (iVar1 != 0) - 1;
}


// ---- FUN_1000fa80 @ 1000fa80

/* WARNING: Unable to track spacebase fully for stack */

void FUN_1000fa80(void)

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


// ---- FUN_1000faaf @ 1000faaf

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1000faaf(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *_Memory;
  undefined4 *puVar2;
  
  if (param_2 == 0) {
    if (0 < DAT_10024b74) {
      DAT_10024b74 = DAT_10024b74 + -1;
      goto LAB_1000fac5;
    }
LAB_1000faed:
    uVar1 = 0;
  }
  else {
LAB_1000fac5:
    _DAT_10024b78 = *(undefined4 *)_adjust_fdiv_exref;
    if (param_2 == 1) {
      DAT_10024b80 = malloc(0x80);
      if (DAT_10024b80 == (undefined4 *)0x0) goto LAB_1000faed;
      *DAT_10024b80 = 0;
      DAT_10024b7c = DAT_10024b80;
      initterm(&DAT_10014000,&DAT_10014ba0);
      DAT_10024b74 = DAT_10024b74 + 1;
    }
    else if ((param_2 == 0) &&
            (_Memory = DAT_10024b80, puVar2 = DAT_10024b7c, DAT_10024b80 != (undefined4 *)0x0)) {
      while (puVar2 = puVar2 + -1, _Memory <= puVar2) {
        if ((code *)*puVar2 != (code *)0x0) {
          (*(code *)*puVar2)();
          _Memory = DAT_10024b80;
        }
      }
      free(_Memory);
      DAT_10024b80 = (undefined4 *)0x0;
    }
    uVar1 = 1;
  }
  return uVar1;
}


// ---- entry @ 1000fb5a

int entry(HINSTANCE__ *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_2;
  iVar2 = DAT_10024b74;
  if (param_2 != 0) {
    if ((param_2 != 1) && (param_2 != 2)) goto LAB_1000fba2;
    if ((PTR_FUN_1001df5c != (undefined *)0x0) &&
       (iVar2 = (*(code *)PTR_FUN_1001df5c)(param_1,param_2,param_3), iVar2 == 0)) {
      return 0;
    }
    iVar2 = FUN_1000faaf(param_1,param_2);
  }
  if (iVar2 == 0) {
    return 0;
  }
LAB_1000fba2:
  iVar2 = FUN_1000f78b(param_1,param_2);
  if (param_2 == 1) {
    if (iVar2 != 0) {
      return iVar2;
    }
    FUN_1000faaf(param_1,0);
  }
  if ((param_2 != 0) && (param_2 != 3)) {
    return iVar2;
  }
  iVar3 = FUN_1000faaf(param_1,param_2);
  param_2 = iVar2;
  if (iVar3 == 0) {
    param_2 = 0;
  }
  if (param_2 != 0) {
    if (PTR_FUN_1001df5c != (undefined *)0x0) {
      iVar2 = (*(code *)PTR_FUN_1001df5c)(param_1,iVar1,param_3);
      return iVar2;
    }
    return param_2;
  }
  return 0;
}


// ---- _EH_prolog @ 1000fbf8

/* WARNING: This is an inlined function */
/* WARNING: Function: _EH_prolog replaced with injection: EH_prolog */

void _EH_prolog(void)

{
  undefined1 auStack_c [12];
  
  ExceptionList = auStack_c;
                    /* WARNING: Could not recover jumptable at 0x1000fbf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  return;
}


// ---- terminate @ 1000fc04

void __cdecl terminate(void)

{
                    /* WARNING: Could not recover jumptable at 0x1000fc04. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
  terminate();
  return;
}


// ---- ~type_info @ 1000fc0a

void __thiscall type_info::~type_info(type_info *this)

{
                    /* WARNING: Could not recover jumptable at 0x1000fc0a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~type_info(this);
  return;
}


// ---- __dllonexit @ 1000fc10

void __dllonexit(void)

{
                    /* WARNING: Could not recover jumptable at 0x1000fc10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __dllonexit();
  return;
}


// ---- initterm @ 1000fc16

void __cdecl initterm(void)

{
                    /* WARNING: Could not recover jumptable at 0x1000fc16. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  initterm();
  return;
}


// ---- AFX_MODULE_STATE @ 1000fc1c

void __thiscall
AFX_MODULE_STATE::AFX_MODULE_STATE
          (AFX_MODULE_STATE *this,int param_1,_func_long_HWND___ptr_uint_uint_long *param_2,
          ulong param_3)

{
                    /* WARNING: Could not recover jumptable at 0x1000fc1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AFX_MODULE_STATE(this,param_1,param_2,param_3);
  return;
}


// ---- operator_delete @ 1000fc22

void CNoTrackObject::operator_delete(void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x1000fc22. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  operator_delete(param_1);
  return;
}


// ---- ~AFX_MODULE_STATE @ 1000fc28

void __thiscall AFX_MODULE_STATE::~AFX_MODULE_STATE(AFX_MODULE_STATE *this)

{
                    /* WARNING: Could not recover jumptable at 0x1000fc28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~AFX_MODULE_STATE(this);
  return;
}


// ---- AfxWndProc @ 1000fc2e

long AfxWndProc(HWND__ *param_1,uint param_2,uint param_3,long param_4)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000fc2e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = AfxWndProc(param_1,param_2,param_3,param_4);
  return lVar1;
}


// ---- AfxTermThread @ 1000fc34

void AfxTermThread(HINSTANCE__ *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x1000fc34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AfxTermThread(param_1);
  return;
}


// ---- AfxTermExtensionModule @ 1000fc3a

void AfxTermExtensionModule(AFX_EXTENSION_MODULE *param_1,int param_2)

{
                    /* WARNING: Could not recover jumptable at 0x1000fc3a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AfxTermExtensionModule(param_1,param_2);
  return;
}


// ---- AfxUnlockTempMaps @ 1000fc40

int AfxUnlockTempMaps(int param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000fc40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = AfxUnlockTempMaps(param_1);
  return iVar1;
}


// ---- AfxLockTempMaps @ 1000fc46

void AfxLockTempMaps(void)

{
                    /* WARNING: Could not recover jumptable at 0x1000fc46. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AfxLockTempMaps();
  return;
}


// ---- AfxSetModuleState @ 1000fc4c

AFX_MODULE_STATE * AfxSetModuleState(AFX_MODULE_STATE *param_1)

{
  AFX_MODULE_STATE *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000fc4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = AfxSetModuleState(param_1);
  return pAVar1;
}


// ---- CDynLinkLibrary @ 1000fc52

void __thiscall
CDynLinkLibrary::CDynLinkLibrary(CDynLinkLibrary *this,AFX_EXTENSION_MODULE *param_1,int param_2)

{
                    /* WARNING: Could not recover jumptable at 0x1000fc52. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CDynLinkLibrary(this,param_1,param_2);
  return;
}


// ---- AfxInitExtensionModule @ 1000fc58

int AfxInitExtensionModule(AFX_EXTENSION_MODULE *param_1,HINSTANCE__ *param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000fc58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = AfxInitExtensionModule(param_1,param_2);
  return iVar1;
}


// ---- AfxWinTerm @ 1000fc5e

void AfxWinTerm(void)

{
                    /* WARNING: Could not recover jumptable at 0x1000fc5e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AfxWinTerm();
  return;
}


// ---- AfxWinInit @ 1000fc64

int AfxWinInit(HINSTANCE__ *param_1,HINSTANCE__ *param_2,char *param_3,int param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000fc64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = AfxWinInit(param_1,param_2,param_3,param_4);
  return iVar1;
}


// ---- AfxGetThreadState @ 1000fc6a

_AFX_THREAD_STATE * AfxGetThreadState(void)

{
  _AFX_THREAD_STATE *p_Var1;
  
                    /* WARNING: Could not recover jumptable at 0x1000fc6a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  p_Var1 = AfxGetThreadState();
  return p_Var1;
}


// ---- AfxCoreInitModule @ 1000fc70

void AfxCoreInitModule(void)

{
                    /* WARNING: Could not recover jumptable at 0x1000fc70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AfxCoreInitModule();
  return;
}


// ---- Unwind@1000fc80 @ 1000fc80

void Unwind_1000fc80(void)

{
  int unaff_EBP;
  
  FUN_100011c0(*(void **)(unaff_EBP + -0x14));
  return;
}


// ---- Unwind@1000fca0 @ 1000fca0

void Unwind_1000fca0(void)

{
  int unaff_EBP;
  
  CWinApp::~CWinApp(*(CWinApp **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@1000fcb3 @ 1000fcb3

void Unwind_1000fcb3(void)

{
  int unaff_EBP;
  
  FUN_100090f0((undefined4 *)(unaff_EBP + -0x28));
  return;
}


// ---- Unwind@1000fcbc @ 1000fcbc

void Unwind_1000fcbc(void)

{
  int unaff_EBP;
  
  FUN_100011c0(*(void **)(unaff_EBP + -0x4c));
  return;
}


// ---- Unwind@1000fcd0 @ 1000fcd0

void Unwind_1000fcd0(void)

{
  int unaff_EBP;
  
  FUN_100090f0((undefined4 *)(unaff_EBP + -0x14));
  return;
}


// ---- Unwind@1000fce3 @ 1000fce3

void Unwind_1000fce3(void)

{
  int unaff_EBP;
  
  FUN_100090f0((undefined4 *)(unaff_EBP + -0x14));
  return;
}


// ---- Unwind@1000fcf6 @ 1000fcf6

void Unwind_1000fcf6(void)

{
  int unaff_EBP;
  
  FUN_100090f0((undefined4 *)(unaff_EBP + -0x14));
  return;
}


// ---- Unwind@1000fd09 @ 1000fd09

void Unwind_1000fd09(void)

{
  int unaff_EBP;
  
  FUN_100090f0((undefined4 *)(unaff_EBP + -0x114));
  return;
}


// ---- Unwind@1000fd1f @ 1000fd1f

void Unwind_1000fd1f(void)

{
  int unaff_EBP;
  
  FUN_100010a1((undefined4 *)(unaff_EBP + -0x3c));
  return;
}


// ---- Unwind@1000fd28 @ 1000fd28

void Unwind_1000fd28(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x38));
  return;
}


// ---- Unwind@1000fd3b @ 1000fd3b

void Unwind_1000fd3b(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@1000fd44 @ 1000fd44

void Unwind_1000fd44(void)

{
  int unaff_EBP;
  
  FUN_100010a1((undefined4 *)(unaff_EBP + -0x48));
  return;
}


// ---- Unwind@1000fd57 @ 1000fd57

void Unwind_1000fd57(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@1000fd6a @ 1000fd6a

void Unwind_1000fd6a(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@1000fd7d @ 1000fd7d

void Unwind_1000fd7d(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x14));
  return;
}


// ---- Unwind@1000fd90 @ 1000fd90

void Unwind_1000fd90(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x14));
  return;
}


// ---- Unwind@1000fda3 @ 1000fda3

void Unwind_1000fda3(void)

{
  int unaff_EBP;
  
  FUN_100090f0((undefined4 *)(unaff_EBP + -0x18));
  return;
}


// ---- Unwind@1000fdac @ 1000fdac

void Unwind_1000fdac(void)

{
  FUN_10009110();
  return;
}


// ---- Unwind@1000fdb5 @ 1000fdb5

void Unwind_1000fdb5(void)

{
  int unaff_EBP;
  
  FUN_100011c0(*(void **)(unaff_EBP + -0x2c));
  return;
}


// ---- Unwind@1000fdc9 @ 1000fdc9

void Unwind_1000fdc9(void)

{
  int unaff_EBP;
  
  FUN_100011c0(*(void **)(unaff_EBP + -0x14));
  return;
}


// ---- Unwind@1000fde0 @ 1000fde0

void Unwind_1000fde0(void)

{
  int unaff_EBP;
  
  FUN_1000c6b0(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@1000fde9 @ 1000fde9

void Unwind_1000fde9(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(*(int *)(unaff_EBP + -0x10) + 4));
  return;
}


// ---- Unwind@1000fdf5 @ 1000fdf5

void Unwind_1000fdf5(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(*(int *)(unaff_EBP + -0x10) + 8));
  return;
}


// ---- Unwind@1000fe01 @ 1000fe01

void Unwind_1000fe01(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(*(int *)(unaff_EBP + -0x10) + 0xc));
  return;
}


// ---- Unwind@1000fe0d @ 1000fe0d

void Unwind_1000fe0d(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(*(int *)(unaff_EBP + -0x10) + 0x10));
  return;
}


// ---- Unwind@1000fe23 @ 1000fe23

void Unwind_1000fe23(void)

{
  int unaff_EBP;
  
  FUN_1000c6b0(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@1000fe2c @ 1000fe2c

void Unwind_1000fe2c(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(*(int *)(unaff_EBP + -0x10) + 4));
  return;
}


// ---- Unwind@1000fe38 @ 1000fe38

void Unwind_1000fe38(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(*(int *)(unaff_EBP + -0x10) + 8));
  return;
}


// ---- Unwind@1000fe44 @ 1000fe44

void Unwind_1000fe44(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(*(int *)(unaff_EBP + -0x10) + 0xc));
  return;
}


// ---- Unwind@1000fe5a @ 1000fe5a

void Unwind_1000fe5a(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@1000fe63 @ 1000fe63

void Unwind_1000fe63(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x14));
  return;
}


// ---- Unwind@1000fe6c @ 1000fe6c

void Unwind_1000fe6c(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x18));
  return;
}


// ---- Unwind@1000fe75 @ 1000fe75

void Unwind_1000fe75(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x1c) & 1) != 0) {
    CString::~CString(*(CString **)(unaff_EBP + 8));
  }
  return;
}


// ---- Unwind@1000fe96 @ 1000fe96

void Unwind_1000fe96(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x24) & 1) != 0) {
    CString::~CString(*(CString **)(unaff_EBP + 8));
  }
  return;
}


// ---- Unwind@1000fead @ 1000fead

void Unwind_1000fead(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x1c));
  return;
}


// ---- Unwind@1000fec0 @ 1000fec0

void Unwind_1000fec0(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@1000fec9 @ 1000fec9

void Unwind_1000fec9(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x14));
  return;
}


// ---- Unwind@1000fed2 @ 1000fed2

void Unwind_1000fed2(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x18));
  return;
}


// ---- Unwind@1000fedb @ 1000fedb

void Unwind_1000fedb(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x1c) & 1) != 0) {
    CString::~CString(*(CString **)(unaff_EBP + 8));
  }
  return;
}


// ---- Unwind@1000fefc @ 1000fefc

void Unwind_1000fefc(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@1000ff05 @ 1000ff05

void Unwind_1000ff05(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x14));
  return;
}


// ---- Unwind@1000ff0e @ 1000ff0e

void Unwind_1000ff0e(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x18));
  return;
}


// ---- Unwind@1000ff21 @ 1000ff21

void Unwind_1000ff21(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@1000ff2a @ 1000ff2a

void Unwind_1000ff2a(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x14));
  return;
}


// ---- Unwind@1000ff33 @ 1000ff33

void Unwind_1000ff33(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x18));
  return;
}


// ---- Unwind@1000ff46 @ 1000ff46

void Unwind_1000ff46(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@1000ff4f @ 1000ff4f

void Unwind_1000ff4f(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x14));
  return;
}


// ---- Unwind@1000ff58 @ 1000ff58

void Unwind_1000ff58(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x18));
  return;
}


// ---- Unwind@1000ff6b @ 1000ff6b

void Unwind_1000ff6b(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@1000ff74 @ 1000ff74

void Unwind_1000ff74(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x14));
  return;
}


// ---- Unwind@1000ff7d @ 1000ff7d

void Unwind_1000ff7d(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x18));
  return;
}


// ---- Unwind@1000ff90 @ 1000ff90

void Unwind_1000ff90(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@1000ff99 @ 1000ff99

void Unwind_1000ff99(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x14));
  return;
}


// ---- Unwind@1000ffa2 @ 1000ffa2

void Unwind_1000ffa2(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x18));
  return;
}


// ---- Unwind@1000ffb5 @ 1000ffb5

void Unwind_1000ffb5(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x1c));
  return;
}


// ---- Unwind@1000ffc8 @ 1000ffc8

void Unwind_1000ffc8(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x24));
  return;
}


// ---- Unwind@1000ffdb @ 1000ffdb

void Unwind_1000ffdb(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + 8));
  return;
}


// ---- Unwind@1000ffe4 @ 1000ffe4

void Unwind_1000ffe4(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x14));
  return;
}


// ---- Unwind@1000fff7 @ 1000fff7

void Unwind_1000fff7(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + 8));
  return;
}


// ---- Unwind@10010000 @ 10010000

void Unwind_10010000(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x14));
  return;
}


// ---- Unwind@10010013 @ 10010013

void Unwind_10010013(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + 8));
  return;
}


// ---- Unwind@1001001c @ 1001001c

void Unwind_1001001c(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x14));
  return;
}


// ---- Unwind@1001002f @ 1001002f

void Unwind_1001002f(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + 0xc));
  return;
}


// ---- Unwind@10010038 @ 10010038

void Unwind_10010038(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x14));
  return;
}


// ---- Unwind@10010041 @ 10010041

void Unwind_10010041(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@1001004a @ 1001004a

void Unwind_1001004a(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x18) & 1) != 0) {
    CString::~CString(*(CString **)(unaff_EBP + 8));
  }
  return;
}


// ---- Unwind@10010070 @ 10010070

void Unwind_10010070(void)

{
  int unaff_EBP;
  
  FUN_100011c0(*(void **)(unaff_EBP + -0x14));
  return;
}


// ---- Unwind@10010084 @ 10010084

void Unwind_10010084(void)

{
  int unaff_EBP;
  
  FUN_1000c6b0(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@10010097 @ 10010097

void Unwind_10010097(void)

{
  int unaff_EBP;
  
  FUN_1000c6b0(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@100100aa @ 100100aa

void Unwind_100100aa(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + 0xc));
  return;
}


// ---- Unwind@100100bd @ 100100bd

void Unwind_100100bd(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + 0x1c));
  return;
}


// ---- Unwind@100100d0 @ 100100d0

void Unwind_100100d0(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + 0x1c));
  return;
}


// ---- Unwind@100100e3 @ 100100e3

void Unwind_100100e3(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + 8));
  return;
}


// ---- Unwind@100100f6 @ 100100f6

void Unwind_100100f6(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@100100ff @ 100100ff

void Unwind_100100ff(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x138) & 1) != 0) {
    CString::~CString(*(CString **)(unaff_EBP + 8));
  }
  return;
}


// ---- Unwind@10010124 @ 10010124

void Unwind_10010124(void)

{
  int unaff_EBP;
  
  FUN_100090f0((undefined4 *)(unaff_EBP + -0x14));
  return;
}


