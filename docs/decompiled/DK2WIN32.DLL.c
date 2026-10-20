// Decompiled with Ghidra from DK2WIN32.DLL
// Format: Portable Executable (PE), image base 20000000

// ---- entry @ 20001000

int entry(undefined4 param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  _SECURITY_ATTRIBUTES local_a4;
  _OSVERSIONINFOA local_98;
  
  if (param_2 == 1) {
    DAT_200070d4 = param_1;
    iVar1 = DAT_2000500c + 1;
    bVar2 = DAT_2000500c == 0;
    DAT_2000500c = iVar1;
    if (bVar2) {
      local_98.dwOSVersionInfoSize = 0x94;
      GetVersionExA(&local_98);
      if (local_98.dwPlatformId == 0) {
        DAT_20005014 = 2;
        DAT_20005010 = LoadLibraryA(s_Kernel32_Dll_20007000);
        DAT_20005004 = GetProcAddress(DAT_20005010,s_UTRegister_20007010);
        if (DAT_20005004 == (FARPROC)0x0) {
          return 0;
        }
        DAT_20005008 = GetProcAddress(DAT_20005010,s_UTUnRegister_2000701c);
        if (DAT_20005008 == (FARPROC)0x0) {
          return 0;
        }
        iVar1 = (*DAT_20005004)(param_1,s_DK2WIN16_DLL_20007034,0,s_UTProc_2000702c,&DAT_20005000,0,
                                0);
        return iVar1;
      }
      if (local_98.dwPlatformId == 1) {
        DAT_20005014 = 1;
      }
      else {
        if (local_98.dwPlatformId != 2) {
          return 0;
        }
        DAT_20005014 = 0;
      }
    }
    if ((DAT_20005014 == 0) || (DAT_20005014 == 1)) {
      local_a4.nLength = 0xc;
      local_a4.lpSecurityDescriptor = (LPVOID)0x0;
      local_a4.bInheritHandle = 1;
      DAT_200070d0 = CreateSemaphoreA(&local_a4,1,1,s_DK2DriverAccessSemaphore_20007044);
      if (DAT_200070d0 == (HANDLE)0x0) {
        return 0;
      }
    }
  }
  else if (param_2 == 0) {
    DAT_2000500c = DAT_2000500c + -1;
    if ((DAT_2000500c == 0) && (DAT_20005014 == 2)) {
      (*DAT_20005008)(param_1);
      FreeLibrary(DAT_20005010);
    }
    CloseHandle(DAT_200070d0);
  }
  return 1;
}


// ---- DK2DriverInstalled @ 200011e3

ushort DK2DriverInstalled(void)

{
  bool bVar1;
  ushort uVar2;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  
                    /* 0x11e3  5  DK2DriverInstalled */
  if (DAT_20005014 == 0) {
    WaitForSingleObject(DAT_200070d0,0xffffffff);
    bVar1 = FUN_20002422();
    ReleaseSemaphore(DAT_200070d0,1,(LPLONG)0x0);
    uVar2 = (ushort)CONCAT31(extraout_var,bVar1);
  }
  else if (DAT_20005014 == 1) {
    WaitForSingleObject(DAT_200070d0,0xffffffff);
    bVar1 = FUN_2000351c();
    ReleaseSemaphore(DAT_200070d0,1,(LPLONG)0x0);
    uVar2 = (ushort)CONCAT31(extraout_var_00,bVar1);
  }
  else {
    uVar2 = DAT_20005014;
    if (DAT_20005014 == 2) {
      uVar2 = (*DAT_20005000)(0,0x12,0);
    }
  }
  return uVar2;
}


// ---- Win32TestFunction @ 20001271

void Win32TestFunction(HWND param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                      undefined4 param_5)

{
  DWORD DVar1;
  DWORD DVar2;
  CHAR local_68 [100];
  
                    /* 0x1271  24  Win32TestFunction */
  DVar1 = GetCurrentThreadId();
  DVar2 = GetCurrentProcessId();
  wsprintfA(local_68,s_Called_by__PID__lx_TID__lx__s__s_20007060,DVar2,DVar1,param_2,param_3,param_4
            ,param_5);
  MessageBoxA(param_1,local_68,s_Win32_Test_DLL_20007088,0);
  return;
}


// ---- FindDK2 @ 200012c2

short FindDK2(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *local_1c;
  undefined4 *local_18;
  undefined4 local_14;
  short local_10;
  undefined4 local_c;
  undefined4 local_8;
  
                    /* 0x12c2  23  FindDK2 */
  if (DAT_20005014 == 0) {
    WaitForSingleObject(DAT_200070d0,0xffffffff);
    uVar1 = FUN_2000244b(param_1,param_2);
    local_10 = (short)uVar1;
    ReleaseSemaphore(DAT_200070d0,1,(LPLONG)0x0);
  }
  else if (DAT_20005014 == 1) {
    WaitForSingleObject(DAT_200070d0,0xffffffff);
    uVar2 = FUN_20003545(param_1,param_2);
    local_10 = (short)uVar2;
    ReleaseSemaphore(DAT_200070d0,1,(LPLONG)0x0);
  }
  else {
    local_10 = DAT_20005014;
    if (DAT_20005014 == 2) {
      local_c = param_1;
      local_8 = param_2;
      local_1c = &local_c;
      local_18 = &local_8;
      local_14 = 0;
      local_10 = (*DAT_20005000)(&local_c,1,&local_1c);
    }
  }
  return local_10;
}


// ---- DK2FindLPTPort @ 20001393

uint DK2FindLPTPort(ushort param_1)

{
  undefined2 uVar1;
  BOOL BVar2;
  uint uVar3;
  undefined2 extraout_var;
  uint local_8;
  
                    /* 0x1393  7  DK2FindLPTPort */
  uVar3 = (uint)DAT_20005014;
  if (uVar3 == 0) {
    WaitForSingleObject(DAT_200070d0,0xffffffff);
    uVar3 = FUN_20002f11(CONCAT22(extraout_var,param_1));
    BVar2 = ReleaseSemaphore(DAT_200070d0,1,(LPLONG)0x0);
    uVar3 = CONCAT22((short)((uint)BVar2 >> 0x10),(short)uVar3);
  }
  else if (uVar3 == 1) {
    WaitForSingleObject(DAT_200070d0,0xffffffff);
    uVar1 = FUN_20003b75(param_1);
    BVar2 = ReleaseSemaphore(DAT_200070d0,1,(LPLONG)0x0);
    uVar3 = CONCAT22((short)((uint)BVar2 >> 0x10),uVar1);
  }
  else if (uVar3 == 2) {
    local_8 = (uint)param_1;
    uVar3 = (*DAT_20005000)(&local_8,0xe,0);
  }
  return uVar3;
}


// ---- DK2GetDelayTime @ 20001447

uint DK2GetDelayTime(void)

{
  undefined2 uVar1;
  BOOL BVar2;
  uint uVar3;
  
                    /* 0x1447  8  DK2GetDelayTime */
  uVar3 = (uint)DAT_20005014;
  if (uVar3 == 0) {
    WaitForSingleObject(DAT_200070d0,0xffffffff);
    uVar3 = FUN_20002e67();
    BVar2 = ReleaseSemaphore(DAT_200070d0,1,(LPLONG)0x0);
    uVar3 = CONCAT22((short)((uint)BVar2 >> 0x10),(short)uVar3);
  }
  else if (uVar3 == 1) {
    WaitForSingleObject(DAT_200070d0,0xffffffff);
    uVar1 = FUN_20003ae7();
    BVar2 = ReleaseSemaphore(DAT_200070d0,1,(LPLONG)0x0);
    uVar3 = CONCAT22((short)((uint)BVar2 >> 0x10),uVar1);
  }
  else if (uVar3 == 2) {
    uVar3 = (*DAT_20005000)(0,0xf,0);
  }
  return uVar3;
}


// ---- DK2SetDelayTime @ 200014d9

void DK2SetDelayTime(ushort param_1)

{
  undefined2 extraout_var;
  uint local_8;
  
                    /* 0x14d9  17  DK2SetDelayTime */
  if (DAT_20005014 == 0) {
    WaitForSingleObject(DAT_200070d0,0xffffffff);
    FUN_20002ebc(CONCAT22(extraout_var,param_1));
    ReleaseSemaphore(DAT_200070d0,1,(LPLONG)0x0);
  }
  else if (DAT_20005014 == 1) {
    WaitForSingleObject(DAT_200070d0,0xffffffff);
    FUN_20003b2f(param_1);
    ReleaseSemaphore(DAT_200070d0,1,(LPLONG)0x0);
  }
  else if (DAT_20005014 == 2) {
    local_8 = (uint)param_1;
    (*DAT_20005000)(&local_8,0x10,0);
  }
  return;
}


// ---- DK2ReadRandomNumbers @ 2000157a

void DK2ReadRandomNumbers
               (ushort param_1,undefined4 param_2,uint param_3,LPVOID param_4,ushort param_5)

{
  undefined2 extraout_var;
  undefined4 *local_24;
  LPVOID *local_20;
  undefined4 local_1c;
  uint local_18;
  undefined4 local_14;
  uint local_10;
  LPVOID local_c;
  uint local_8;
  
                    /* 0x157a  13  DK2ReadRandomNumbers */
  if (DAT_20005014 == 0) {
    WaitForSingleObject(DAT_200070d0,0xffffffff);
    FUN_20002505(CONCAT22((short)((uint)param_4 >> 0x10),param_1),param_2,(byte)param_3,param_4,
                 CONCAT22(extraout_var,param_5));
    ReleaseSemaphore(DAT_200070d0,1,(LPLONG)0x0);
  }
  else if (DAT_20005014 == 1) {
    WaitForSingleObject(DAT_200070d0,0xffffffff);
    FUN_200035b8(param_1,param_2,(byte)param_3,param_4,param_5);
    ReleaseSemaphore(DAT_200070d0,1,(LPLONG)0x0);
  }
  else if (DAT_20005014 == 2) {
    local_18 = (uint)param_1;
    local_14 = param_2;
    local_10 = param_3 & 0xffff;
    local_c = param_4;
    local_8 = (uint)param_5;
    local_24 = &local_14;
    local_20 = &local_c;
    local_1c = 0;
    (*DAT_20005000)(&local_18,2,&local_24);
  }
  return;
}


// ---- DK2ThroughEncryption @ 20001683

void DK2ThroughEncryption
               (ushort param_1,undefined4 param_2,uint param_3,LPVOID param_4,ushort param_5)

{
  undefined2 extraout_var;
  undefined4 *local_24;
  LPVOID *local_20;
  undefined4 local_1c;
  uint local_18;
  undefined4 local_14;
  uint local_10;
  LPVOID local_c;
  uint local_8;
  
                    /* 0x1683  21  DK2ThroughEncryption */
  if (DAT_20005014 == 0) {
    WaitForSingleObject(DAT_200070d0,0xffffffff);
    FUN_200025c4(CONCAT22((short)((uint)param_4 >> 0x10),param_1),param_2,(byte)param_3,param_4,
                 CONCAT22(extraout_var,param_5));
    ReleaseSemaphore(DAT_200070d0,1,(LPLONG)0x0);
  }
  else if (DAT_20005014 == 1) {
    WaitForSingleObject(DAT_200070d0,0xffffffff);
    FUN_20003636(param_1,param_2,(byte)param_3,param_4,param_5);
    ReleaseSemaphore(DAT_200070d0,1,(LPLONG)0x0);
  }
  else if (DAT_20005014 == 2) {
    local_18 = (uint)param_1;
    local_14 = param_2;
    local_10 = param_3 & 0xffff;
    local_c = param_4;
    local_8 = (uint)param_5;
    local_24 = &local_14;
    local_20 = &local_c;
    local_1c = 0;
    (*DAT_20005000)(&local_18,3,&local_24);
  }
  return;
}


// ---- DK2ReadMemory @ 2000178c

void DK2ReadMemory(ushort param_1,undefined4 param_2,uint param_3,uint param_4,LPVOID param_5,
                  ushort param_6)

{
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined4 *local_28;
  LPVOID *local_24;
  undefined4 local_20;
  uint local_1c;
  undefined4 local_18;
  uint local_14;
  uint local_10;
  LPVOID local_c;
  uint local_8;
  
                    /* 0x178c  12  DK2ReadMemory */
  if (DAT_20005014 == 0) {
    WaitForSingleObject(DAT_200070d0,0xffffffff);
    FUN_2000268d(CONCAT22(extraout_var,param_1),param_2,(byte)param_3,(byte)param_4,param_5,
                 CONCAT22(extraout_var_00,param_6));
    ReleaseSemaphore(DAT_200070d0,1,(LPLONG)0x0);
  }
  else if (DAT_20005014 == 1) {
    WaitForSingleObject(DAT_200070d0,0xffffffff);
    FUN_200036b4(param_1,param_2,(byte)param_3,(byte)param_4,param_5,param_6);
    ReleaseSemaphore(DAT_200070d0,1,(LPLONG)0x0);
  }
  else if (DAT_20005014 == 2) {
    local_1c = (uint)param_1;
    local_18 = param_2;
    local_14 = param_3 & 0xffff;
    local_10 = param_4 & 0xffff;
    local_c = param_5;
    local_8 = (uint)param_6;
    local_28 = &local_18;
    local_24 = &local_c;
    local_20 = 0;
    (*DAT_20005000)(&local_1c,4,&local_28);
  }
  return;
}


// ---- DK2WriteMemory @ 200018ab

void DK2WriteMemory(ushort param_1,undefined4 param_2,uint param_3,uint param_4,LPVOID param_5,
                   ushort param_6,undefined4 param_7)

{
  DWORD DVar1;
  undefined4 *local_30;
  LPVOID *local_2c;
  undefined4 *local_28;
  undefined4 local_24;
  uint local_20;
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  LPVOID local_10;
  uint local_c;
  undefined4 local_8;
  
                    /* 0x18ab  22  DK2WriteMemory */
  if (DAT_20005014 == 0) {
    DVar1 = WaitForSingleObject(DAT_200070d0,0xffffffff);
    FUN_2000274d(CONCAT22((short)((uint)param_7 >> 0x10),param_1),param_2,(byte)param_3,
                 (byte)param_4,param_5,CONCAT22((short)(DVar1 >> 0x10),param_6),param_7);
    ReleaseSemaphore(DAT_200070d0,1,(LPLONG)0x0);
  }
  else if (DAT_20005014 == 1) {
    WaitForSingleObject(DAT_200070d0,0xffffffff);
    FUN_2000373b(param_1,param_2,(byte)param_3,(byte)param_4,param_5,param_6,param_7);
    ReleaseSemaphore(DAT_200070d0,1,(LPLONG)0x0);
  }
  else if (DAT_20005014 == 2) {
    local_20 = (uint)param_1;
    local_1c = param_2;
    local_18 = param_3 & 0xffff;
    local_14 = param_4 & 0xffff;
    local_10 = param_5;
    local_c = (uint)param_6;
    local_8 = param_7;
    local_30 = &local_1c;
    local_2c = &local_10;
    local_28 = &local_8;
    local_24 = 0;
    (*DAT_20005000)(&local_20,5,&local_30);
  }
  return;
}


// ---- DK2ReadDownCounter @ 200019db

void DK2ReadDownCounter(ushort param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined2 extraout_var;
  undefined4 *local_1c;
  undefined4 **local_18;
  undefined4 local_14;
  uint local_10;
  undefined4 local_c;
  undefined4 *local_8;
  
                    /* 0x19db  11  DK2ReadDownCounter */
  if (DAT_20005014 == 0) {
    WaitForSingleObject(DAT_200070d0,0xffffffff);
    FUN_2000280d(CONCAT22(extraout_var,param_1),param_2,param_3);
    ReleaseSemaphore(DAT_200070d0,1,(LPLONG)0x0);
  }
  else if (DAT_20005014 == 1) {
    WaitForSingleObject(DAT_200070d0,0xffffffff);
    FUN_200037c8(param_1,param_2,param_3);
    ReleaseSemaphore(DAT_200070d0,1,(LPLONG)0x0);
  }
  else if (DAT_20005014 == 2) {
    local_10 = (uint)param_1;
    local_c = param_2;
    local_8 = param_3;
    local_1c = &local_c;
    local_18 = &local_8;
    local_14 = 0;
    (*DAT_20005000)(&local_10,6,&local_1c);
  }
  return;
}


// ---- DK2DecrementDownCounter @ 20001ab1

void DK2DecrementDownCounter(ushort param_1,undefined4 param_2)

{
  DWORD DVar1;
  undefined4 *local_14;
  undefined4 local_10;
  uint local_c;
  undefined4 local_8;
  
                    /* 0x1ab1  3  DK2DecrementDownCounter */
  if (DAT_20005014 == 0) {
    DVar1 = WaitForSingleObject(DAT_200070d0,0xffffffff);
    FUN_200028d6(CONCAT22((short)(DVar1 >> 0x10),param_1),param_2);
    ReleaseSemaphore(DAT_200070d0,1,(LPLONG)0x0);
  }
  else if (DAT_20005014 == 1) {
    WaitForSingleObject(DAT_200070d0,0xffffffff);
    FUN_20003835(param_1,param_2);
    ReleaseSemaphore(DAT_200070d0,1,(LPLONG)0x0);
  }
  else if (DAT_20005014 == 2) {
    local_c = (uint)param_1;
    local_8 = param_2;
    local_14 = &local_8;
    local_10 = 0;
    (*DAT_20005000)(&local_c,7,&local_14);
  }
  return;
}


// ---- DK2RestartDownCounter @ 20001b73

void DK2RestartDownCounter(ushort param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *local_20;
  undefined4 *local_1c;
  undefined4 local_18;
  uint local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
                    /* 0x1b73  14  DK2RestartDownCounter */
  if (DAT_20005014 == 0) {
    WaitForSingleObject(DAT_200070d0,0xffffffff);
    FUN_20002989(CONCAT22((short)((uint)param_4 >> 0x10),param_1),param_2,param_3,param_4);
    ReleaseSemaphore(DAT_200070d0,1,(LPLONG)0x0);
  }
  else if (DAT_20005014 == 1) {
    WaitForSingleObject(DAT_200070d0,0xffffffff);
    FUN_2000389c(param_1,param_2,param_3,param_4);
    ReleaseSemaphore(DAT_200070d0,1,(LPLONG)0x0);
  }
  else if (DAT_20005014 == 2) {
    local_14 = (uint)param_1;
    local_10 = param_2;
    local_c = param_3;
    local_8 = param_4;
    local_20 = &local_10;
    local_1c = &local_8;
    local_18 = 0;
    (*DAT_20005000)(&local_14,8,&local_20);
  }
  return;
}


// ---- DK2ReadDUSN @ 20001c56

void DK2ReadDUSN(ushort param_1,undefined4 param_2,undefined4 param_3,ushort *param_4,
                undefined1 *param_5)

{
  undefined4 *local_2c;
  undefined4 *local_28;
  ushort **local_24;
  undefined1 **local_20;
  undefined4 local_1c;
  uint local_18;
  undefined4 local_14;
  undefined4 local_10;
  ushort *local_c;
  undefined1 *local_8;
  
                    /* 0x1c56  10  DK2ReadDUSN */
  if (DAT_20005014 == 0) {
    WaitForSingleObject(DAT_200070d0,0xffffffff);
    FUN_20002a3d(CONCAT22((short)((uint)param_4 >> 0x10),param_1),param_2,param_3,param_4,param_5);
    ReleaseSemaphore(DAT_200070d0,1,(LPLONG)0x0);
  }
  else if (DAT_20005014 == 1) {
    WaitForSingleObject(DAT_200070d0,0xffffffff);
    FUN_2000390f(param_1,param_2,param_3,param_4,param_5);
    ReleaseSemaphore(DAT_200070d0,1,(LPLONG)0x0);
  }
  else if (DAT_20005014 == 2) {
    local_18 = (uint)param_1;
    local_14 = param_2;
    local_10 = param_3;
    local_c = param_4;
    local_8 = param_5;
    local_2c = &local_14;
    local_28 = &local_10;
    local_24 = &local_c;
    local_20 = &local_8;
    local_1c = 0;
    (*DAT_20005000)(&local_18,9,&local_2c);
  }
  return;
}


// ---- DK2SendAlgorithmString @ 20001d5b

void DK2SendAlgorithmString
               (ushort param_1,undefined4 param_2,ushort param_3,ushort param_4,undefined4 *param_5,
               undefined4 *param_6)

{
  DWORD DVar1;
  undefined2 extraout_var;
  undefined2 uVar2;
  undefined4 *local_2c;
  undefined4 **local_28;
  undefined4 **local_24;
  undefined4 local_20;
  uint local_1c;
  undefined4 local_18;
  uint local_14;
  uint local_10;
  undefined4 *local_c;
  undefined4 *local_8;
  
                    /* 0x1d5b  16  DK2SendAlgorithmString */
  uVar2 = (undefined2)((uint)param_6 >> 0x10);
  if (DAT_20005014 == 0) {
    WaitForSingleObject(DAT_200070d0,0xffffffff);
    FUN_20002b32(CONCAT22(extraout_var,param_1),param_2,CONCAT22(uVar2,param_3),
                 CONCAT22(extraout_var,param_4),param_5,param_6);
    ReleaseSemaphore(DAT_200070d0,1,(LPLONG)0x0);
  }
  else if (DAT_20005014 == 1) {
    DVar1 = WaitForSingleObject(DAT_200070d0,0xffffffff);
    FUN_20003988(param_1,param_2,CONCAT22(uVar2,param_3),CONCAT22((short)(DVar1 >> 0x10),param_4),
                 param_5,param_6);
    ReleaseSemaphore(DAT_200070d0,1,(LPLONG)0x0);
  }
  else if (DAT_20005014 == 2) {
    local_1c = (uint)param_1;
    local_18 = param_2;
    local_14 = (uint)param_3;
    local_10 = (uint)param_4;
    local_c = param_5;
    local_8 = param_6;
    local_2c = &local_18;
    local_28 = &local_c;
    local_24 = &local_8;
    local_20 = 0;
    (*DAT_20005000)(&local_1c,10,&local_2c);
  }
  return;
}


// ---- DK2SendAlgorithmBuffer @ 20001e78

void DK2SendAlgorithmBuffer
               (ushort param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4,
               ushort param_5)

{
  undefined4 *local_30;
  undefined4 **local_2c;
  undefined4 **local_28;
  undefined4 local_24;
  uint local_20;
  undefined4 local_1c;
  undefined4 *local_18;
  undefined4 *local_14;
  uint local_10;
  
                    /* 0x1e78  15  DK2SendAlgorithmBuffer */
  if (DAT_20005014 == 0) {
    WaitForSingleObject(DAT_200070d0,0xffffffff);
    FUN_20002c2e(CONCAT22((short)((uint)param_4 >> 0x10),param_1),param_2,param_3,param_4,param_5);
    ReleaseSemaphore(DAT_200070d0,1,(LPLONG)0x0);
  }
  else if (DAT_20005014 == 1) {
    WaitForSingleObject(DAT_200070d0,0xffffffff);
    FUN_20003a12(param_1,param_2,param_3,param_4,param_5);
    ReleaseSemaphore(DAT_200070d0,1,(LPLONG)0x0);
  }
  else if (DAT_20005014 == 2) {
    local_20 = (uint)param_1;
    local_1c = param_2;
    local_18 = param_3;
    local_14 = param_4;
    local_10 = (uint)param_5;
    local_30 = &local_1c;
    local_2c = &local_18;
    local_28 = &local_14;
    local_24 = 0;
    (*DAT_20005000)(&local_20,0x15,&local_30);
  }
  return;
}


// ---- DK2Success @ 20001f7f

uint DK2Success(void)

{
  uint uVar1;
  
                    /* 0x1f7f  20  DK2Success */
  uVar1 = (uint)DAT_20005014;
  if (uVar1 == 0) {
    WaitForSingleObject(DAT_200070d0,0xffffffff);
    uVar1 = FUN_20002dea();
    ReleaseSemaphore(DAT_200070d0,1,(LPLONG)0x0);
  }
  else if (uVar1 == 1) {
    WaitForSingleObject(DAT_200070d0,0xffffffff);
    uVar1 = FUN_20003a9b();
    ReleaseSemaphore(DAT_200070d0,1,(LPLONG)0x0);
  }
  else if (uVar1 == 2) {
    uVar1 = (*DAT_20005000)(0,0xb,0);
  }
  return uVar1;
}


// ---- DK2AllowChangeInterrupts @ 2000200d

void DK2AllowChangeInterrupts(uint param_1)

{
  uint local_8;
  
                    /* 0x200d  1  DK2AllowChangeInterrupts */
  if ((DAT_20005014 != 0) && (DAT_20005014 == 2)) {
    local_8 = param_1 & 0xffff;
    (*DAT_20005000)(&local_8,0x11,0);
  }
  return;
}


// ---- DK2DetectSpeed @ 2000204e

short DK2DetectSpeed(ushort param_1,undefined4 param_2)

{
  DWORD DVar1;
  uint uVar2;
  undefined4 *local_18;
  undefined4 local_14;
  short local_10;
  uint local_c;
  undefined4 local_8;
  
                    /* 0x204e  4  DK2DetectSpeed */
  if (DAT_20005014 == 0) {
    DVar1 = WaitForSingleObject(DAT_200070d0,0xffffffff);
    uVar2 = FUN_20002f73(CONCAT22((short)(DVar1 >> 0x10),param_1),param_2);
    local_10 = (short)uVar2;
    ReleaseSemaphore(DAT_200070d0,1,(LPLONG)0x0);
  }
  else if (DAT_20005014 == 1) {
    WaitForSingleObject(DAT_200070d0,0xffffffff);
    local_10 = FUN_20003bbf(param_1,param_2);
    ReleaseSemaphore(DAT_200070d0,1,(LPLONG)0x0);
  }
  else {
    local_10 = DAT_20005014;
    if (DAT_20005014 == 2) {
      local_c = (uint)param_1;
      local_8 = param_2;
      local_18 = &local_8;
      local_14 = 0;
      local_10 = (*DAT_20005000)(&local_c,0xc,&local_18);
    }
  }
  return local_10;
}


// ---- DK2Sub_DetectSpeed @ 20002120

short DK2Sub_DetectSpeed(ushort param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *local_28;
  undefined4 *local_24;
  undefined4 *local_20;
  undefined4 local_1c;
  short local_18;
  uint local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
                    /* 0x2120  19  DK2Sub_DetectSpeed */
  if (DAT_20005014 == 0) {
    WaitForSingleObject(DAT_200070d0,0xffffffff);
    local_18 = FUN_20003033(CONCAT22((short)((uint)param_4 >> 0x10),param_1),param_2,param_3);
    ReleaseSemaphore(DAT_200070d0,1,(LPLONG)0x0);
  }
  else if (DAT_20005014 == 1) {
    WaitForSingleObject(DAT_200070d0,0xffffffff);
    local_18 = FUN_20003c30(param_1,param_2,param_3,param_4);
    ReleaseSemaphore(DAT_200070d0,1,(LPLONG)0x0);
  }
  else {
    local_18 = DAT_20005014;
    if (DAT_20005014 == 2) {
      local_14 = (uint)param_1;
      local_10 = param_2;
      local_c = param_3;
      local_8 = param_4;
      local_28 = &local_10;
      local_24 = &local_c;
      local_20 = &local_8;
      local_1c = 0;
      local_18 = (*DAT_20005000)(&local_14,0xd,&local_28);
    }
  }
  return local_18;
}


// ---- DK2GetFlags @ 20002220

uint DK2GetFlags(ushort param_1,undefined4 param_2)

{
  DWORD DVar1;
  undefined4 *local_18;
  undefined4 local_14;
  uint local_10;
  uint local_c;
  undefined4 local_8;
  
                    /* 0x2220  9  DK2GetFlags */
  local_10 = (uint)DAT_20005014;
  if (local_10 == 0) {
    DVar1 = WaitForSingleObject(DAT_200070d0,0xffffffff);
    local_10 = FUN_200030eb(CONCAT22((short)(DVar1 >> 0x10),param_1),param_2);
    ReleaseSemaphore(DAT_200070d0,1,(LPLONG)0x0);
  }
  else if (local_10 == 1) {
    WaitForSingleObject(DAT_200070d0,0xffffffff);
    local_10 = FUN_20003ca7(param_1,param_2);
    ReleaseSemaphore(DAT_200070d0,1,(LPLONG)0x0);
  }
  else if (local_10 == 2) {
    local_c = (uint)param_1;
    local_8 = param_2;
    local_18 = &local_8;
    local_14 = 0;
    local_10 = (*DAT_20005000)(&local_c,0x13,&local_18);
  }
  return local_10;
}


// ---- DK2SetFlags @ 200022ee

void DK2SetFlags(ushort param_1,undefined4 param_2,undefined4 param_3)

{
  undefined2 extraout_var;
  undefined4 *local_18;
  undefined4 local_14;
  uint local_10;
  undefined4 local_c;
  undefined4 local_8;
  
                    /* 0x22ee  18  DK2SetFlags */
  if (DAT_20005014 == 0) {
    WaitForSingleObject(DAT_200070d0,0xffffffff);
    FUN_200031b3(CONCAT22(extraout_var,param_1),param_2);
    ReleaseSemaphore(DAT_200070d0,1,(LPLONG)0x0);
  }
  else if (DAT_20005014 == 1) {
    WaitForSingleObject(DAT_200070d0,0xffffffff);
    FUN_20003d18(param_1,param_2,param_3);
    ReleaseSemaphore(DAT_200070d0,1,(LPLONG)0x0);
  }
  else if (DAT_20005014 == 2) {
    local_10 = (uint)param_1;
    local_c = param_2;
    local_8 = param_3;
    local_18 = &local_c;
    local_14 = 0;
    (*DAT_20005000)(&local_10,0x14,&local_18);
  }
  return;
}


// ---- DK2Encode @ 200023be

void __thiscall
DK2Encode(void *this,undefined4 *param_1,undefined2 param_2,int param_3,ushort param_4)

{
                    /* 0x23be  6  DK2Encode */
  FUN_200040d0(param_1,param_3,CONCAT22((short)((uint)this >> 0x10),param_2),param_4);
  return;
}


// ---- DK2Decode @ 200023df

void DK2Decode(char *param_1,int param_2)

{
                    /* 0x23df  2  DK2Decode */
  FUN_200042b0(param_1,param_2);
  return;
}


// ---- FUN_20002400 @ 20002400

void FUN_20002400(void)

{
  CreateFileA(s_____DK2DRIVER_20007098,0x80000000,0,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  return;
}


// ---- FUN_20002422 @ 20002422

bool FUN_20002422(void)

{
  HANDLE hObject;
  
  hObject = (HANDLE)FUN_20002400();
  if (hObject != (HANDLE)0xffffffff) {
    CloseHandle(hObject);
  }
  return hObject != (HANDLE)0xffffffff;
}


// ---- FUN_2000244b @ 2000244b

undefined4 __cdecl FUN_2000244b(undefined4 param_1,undefined4 param_2)

{
  HANDLE hDevice;
  BOOL BVar1;
  DWORD local_30 [4];
  undefined *local_20;
  undefined4 local_1c;
  undefined1 local_18;
  undefined1 local_17;
  undefined1 local_16;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_8;
  
  local_8 = 0;
  hDevice = (HANDLE)FUN_20002400();
  if (hDevice != (HANDLE)0xffffffff) {
    local_30[2] = 0;
    local_30[3] = param_1;
    local_20 = &DAT_200070c0;
    local_1c = param_2;
    local_18 = 0;
    local_17 = 0;
    local_16 = 0;
    local_14 = 0;
    local_10 = 0;
    local_30[1] = 0xfa26408;
    BVar1 = DeviceIoControl(hDevice,0xfa26408,local_30 + 2,0x20,(LPVOID)0x0,0,local_30,
                            (LPOVERLAPPED)0x0);
    if (BVar1 != 0) {
      local_30[1] = 0xfa2644c;
      DeviceIoControl(hDevice,0xfa2644c,(LPVOID)0x0,0,&local_8,4,local_30,(LPOVERLAPPED)0x0);
    }
    CloseHandle(hDevice);
  }
  return local_8;
}


// ---- FUN_20002505 @ 20002505

void __cdecl
FUN_20002505(uint param_1,undefined4 param_2,undefined1 param_3,LPVOID param_4,uint param_5)

{
  HANDLE hDevice;
  BOOL BVar1;
  DWORD local_2c [2];
  uint local_24;
  undefined4 local_20;
  undefined *local_1c;
  undefined *local_18;
  undefined1 local_14;
  undefined1 local_13;
  undefined1 local_12;
  undefined4 local_10;
  undefined4 local_c;
  
  hDevice = (HANDLE)FUN_20002400();
  if (hDevice != (HANDLE)0xffffffff) {
    local_24 = param_1 & 0xffff;
    local_20 = param_2;
    local_1c = &DAT_200070c0;
    local_18 = &DAT_200070c0;
    local_14 = param_3;
    local_13 = 0;
    local_12 = 0;
    local_10 = 0;
    local_c = 0;
    local_2c[1] = 0xfa26408;
    BVar1 = DeviceIoControl(hDevice,0xfa26408,&local_24,0x20,(LPVOID)0x0,0,local_2c,
                            (LPOVERLAPPED)0x0);
    if (BVar1 != 0) {
      local_2c[1] = 0xfa26400;
      DeviceIoControl(hDevice,0xfa26400,(LPVOID)0x0,0,param_4,param_5 & 0xffff,local_2c,
                      (LPOVERLAPPED)0x0);
    }
    CloseHandle(hDevice);
  }
  return;
}


// ---- FUN_200025c4 @ 200025c4

void __cdecl
FUN_200025c4(uint param_1,undefined4 param_2,undefined1 param_3,LPVOID param_4,uint param_5)

{
  HANDLE hDevice;
  BOOL BVar1;
  DWORD local_2c [2];
  uint local_24;
  undefined4 local_20;
  undefined *local_1c;
  undefined *local_18;
  undefined1 local_14;
  undefined1 local_13;
  undefined1 local_12;
  undefined4 local_10;
  undefined4 local_c;
  
  hDevice = (HANDLE)FUN_20002400();
  if (hDevice != (HANDLE)0xffffffff) {
    local_24 = param_1 & 0xffff;
    local_20 = param_2;
    local_1c = &DAT_200070c0;
    local_18 = &DAT_200070c0;
    local_14 = param_3;
    local_13 = 0;
    local_12 = 0;
    local_10 = 0;
    local_c = 0;
    local_2c[1] = 0xfa26408;
    BVar1 = DeviceIoControl(hDevice,0xfa26408,&local_24,0x20,(LPVOID)0x0,0,local_2c,
                            (LPOVERLAPPED)0x0);
    if (BVar1 != 0) {
      local_2c[1] = 0xfa26404;
      DeviceIoControl(hDevice,0xfa26404,param_4,param_5 & 0xffff,param_4,param_5 & 0xffff,local_2c,
                      (LPOVERLAPPED)0x0);
    }
    CloseHandle(hDevice);
  }
  return;
}


// ---- FUN_2000268d @ 2000268d

void __cdecl
FUN_2000268d(uint param_1,undefined4 param_2,undefined1 param_3,undefined1 param_4,LPVOID param_5,
            uint param_6)

{
  HANDLE hDevice;
  BOOL BVar1;
  DWORD local_2c [2];
  uint local_24;
  undefined4 local_20;
  undefined *local_1c;
  undefined *local_18;
  undefined1 local_14;
  undefined1 local_13;
  undefined1 local_12;
  undefined4 local_10;
  undefined4 local_c;
  
  hDevice = (HANDLE)FUN_20002400();
  if (hDevice != (HANDLE)0xffffffff) {
    local_24 = param_1 & 0xffff;
    local_20 = param_2;
    local_1c = &DAT_200070c0;
    local_18 = &DAT_200070c0;
    local_14 = param_3;
    local_13 = 0;
    local_12 = param_4;
    local_10 = 0;
    local_c = 0;
    local_2c[1] = 0xfa26408;
    BVar1 = DeviceIoControl(hDevice,0xfa26408,&local_24,0x20,(LPVOID)0x0,0,local_2c,
                            (LPOVERLAPPED)0x0);
    if (BVar1 != 0) {
      local_2c[1] = 0xfa2640c;
      DeviceIoControl(hDevice,0xfa2640c,(LPVOID)0x0,0,param_5,param_6 & 0xffff,local_2c,
                      (LPOVERLAPPED)0x0);
    }
    CloseHandle(hDevice);
  }
  return;
}


// ---- FUN_2000274d @ 2000274d

void __cdecl
FUN_2000274d(uint param_1,undefined4 param_2,undefined1 param_3,undefined1 param_4,LPVOID param_5,
            uint param_6,undefined4 param_7)

{
  HANDLE hDevice;
  BOOL BVar1;
  DWORD local_2c [2];
  uint local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined *local_18;
  undefined1 local_14;
  undefined1 local_13;
  undefined1 local_12;
  undefined4 local_10;
  undefined4 local_c;
  
  hDevice = (HANDLE)FUN_20002400();
  if (hDevice != (HANDLE)0xffffffff) {
    local_24 = param_1 & 0xffff;
    local_20 = param_2;
    local_1c = param_7;
    local_18 = &DAT_200070c0;
    local_14 = param_3;
    local_13 = 0;
    local_12 = param_4;
    local_10 = 0;
    local_c = 0;
    local_2c[1] = 0xfa26408;
    BVar1 = DeviceIoControl(hDevice,0xfa26408,&local_24,0x20,(LPVOID)0x0,0,local_2c,
                            (LPOVERLAPPED)0x0);
    if (BVar1 != 0) {
      local_2c[1] = 0xfa26410;
      DeviceIoControl(hDevice,0xfa26410,param_5,param_6 & 0xffff,(LPVOID)0x0,0,local_2c,
                      (LPOVERLAPPED)0x0);
    }
    CloseHandle(hDevice);
  }
  return;
}


// ---- FUN_2000280d @ 2000280d

void __cdecl FUN_2000280d(uint param_1,undefined4 param_2,undefined4 *param_3)

{
  HANDLE hDevice;
  int local_3c;
  DWORD local_34 [2];
  undefined1 local_2c [4];
  undefined4 local_28;
  uint local_24;
  undefined4 local_20;
  undefined *local_1c;
  undefined *local_18;
  undefined1 local_14;
  undefined1 local_13;
  undefined1 local_12;
  undefined4 local_10;
  undefined4 local_c;
  
  hDevice = (HANDLE)FUN_20002400();
  if (hDevice != (HANDLE)0xffffffff) {
    local_24 = param_1 & 0xffff;
    local_20 = param_2;
    local_1c = &DAT_200070c0;
    local_18 = &DAT_200070c0;
    local_14 = 0;
    local_13 = 0;
    local_12 = 0;
    local_10 = 0;
    local_c = 0;
    local_34[1] = 0xfa26408;
    local_3c = DeviceIoControl(hDevice,0xfa26408,&local_24,0x20,(LPVOID)0x0,0,local_34,
                               (LPOVERLAPPED)0x0);
    if (local_3c != 0) {
      local_34[1] = 0xfa26414;
      local_3c = DeviceIoControl(hDevice,0xfa26414,(LPVOID)0x0,0,local_2c,8,local_34,
                                 (LPOVERLAPPED)0x0);
    }
    if ((local_3c != 0) && (local_34[0] == 8)) {
      *param_3 = local_28;
    }
    CloseHandle(hDevice);
  }
  return;
}


// ---- FUN_200028d6 @ 200028d6

void __cdecl FUN_200028d6(uint param_1,undefined4 param_2)

{
  HANDLE hDevice;
  BOOL BVar1;
  DWORD local_2c [2];
  uint local_24;
  undefined4 local_20;
  undefined *local_1c;
  undefined *local_18;
  undefined1 local_14;
  undefined1 local_13;
  undefined1 local_12;
  undefined4 local_10;
  undefined4 local_c;
  
  hDevice = (HANDLE)FUN_20002400();
  if (hDevice != (HANDLE)0xffffffff) {
    local_24 = param_1 & 0xffff;
    local_20 = param_2;
    local_1c = &DAT_200070c0;
    local_18 = &DAT_200070c0;
    local_14 = 0;
    local_13 = 0;
    local_12 = 0;
    local_10 = 0;
    local_c = 0;
    local_2c[1] = 0xfa26408;
    BVar1 = DeviceIoControl(hDevice,0xfa26408,&local_24,0x20,(LPVOID)0x0,0,local_2c,
                            (LPOVERLAPPED)0x0);
    if (BVar1 != 0) {
      local_2c[1] = 0xfa26418;
      DeviceIoControl(hDevice,0xfa26418,(LPVOID)0x0,0,(LPVOID)0x0,0,local_2c,(LPOVERLAPPED)0x0);
    }
    CloseHandle(hDevice);
  }
  return;
}


// ---- FUN_20002989 @ 20002989

void __cdecl FUN_20002989(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  HANDLE hDevice;
  BOOL BVar1;
  DWORD local_2c [2];
  uint local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined *local_18;
  undefined1 local_14;
  undefined1 local_13;
  undefined1 local_12;
  undefined4 local_10;
  undefined4 local_c;
  
  hDevice = (HANDLE)FUN_20002400();
  if (hDevice != (HANDLE)0xffffffff) {
    local_24 = param_1 & 0xffff;
    local_20 = param_2;
    local_1c = param_4;
    local_18 = &DAT_200070c0;
    local_14 = 0;
    local_13 = 0;
    local_12 = 0;
    local_10 = 0;
    local_c = 0;
    local_2c[1] = 0xfa26408;
    BVar1 = DeviceIoControl(hDevice,0xfa26408,&local_24,0x20,(LPVOID)0x0,0,local_2c,
                            (LPOVERLAPPED)0x0);
    if (BVar1 != 0) {
      local_2c[1] = 0xfa2641c;
      DeviceIoControl(hDevice,0xfa2641c,&param_3,4,(LPVOID)0x0,0,local_2c,(LPOVERLAPPED)0x0);
    }
    CloseHandle(hDevice);
  }
  return;
}


// ---- FUN_20002a3d @ 20002a3d

void __cdecl
FUN_20002a3d(uint param_1,undefined4 param_2,undefined4 param_3,ushort *param_4,undefined1 *param_5)

{
  byte local_38;
  undefined1 local_37;
  undefined1 local_36;
  undefined1 local_35;
  BOOL local_34;
  HANDLE local_30;
  DWORD local_2c [2];
  uint local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined *local_18;
  undefined1 local_14;
  undefined1 local_13;
  undefined1 local_12;
  undefined4 local_10;
  undefined4 local_c;
  
  local_30 = (HANDLE)FUN_20002400();
  if (local_30 != (HANDLE)0xffffffff) {
    local_24 = param_1 & 0xffff;
    local_20 = param_2;
    local_1c = param_3;
    local_18 = &DAT_200070c0;
    local_14 = 0;
    local_13 = 0;
    local_12 = 0;
    local_10 = 0;
    local_c = 0;
    local_2c[1] = 0xfa26408;
    local_34 = DeviceIoControl(local_30,0xfa26408,&local_24,0x20,(LPVOID)0x0,0,local_2c,
                               (LPOVERLAPPED)0x0);
    if (local_34 != 0) {
      local_2c[1] = 0xfa26420;
      local_34 = DeviceIoControl(local_30,0xfa26420,(LPVOID)0x0,0,&local_38,4,local_2c,
                                 (LPOVERLAPPED)0x0);
    }
    if ((local_34 != 0) && (local_2c[0] == 4)) {
      *param_4 = (ushort)local_38;
      *param_5 = local_37;
      param_5[1] = local_36;
      param_5[2] = local_35;
    }
    CloseHandle(local_30);
  }
  return;
}


// ---- FUN_20002b32 @ 20002b32

void __cdecl
FUN_20002b32(uint param_1,undefined4 param_2,uint param_3,uint param_4,undefined4 *param_5,
            undefined4 *param_6)

{
  HANDLE hDevice;
  BOOL BVar1;
  DWORD local_50 [3];
  uint local_44;
  undefined4 local_40;
  undefined *local_3c;
  undefined *local_38;
  undefined1 local_34;
  undefined1 local_33;
  undefined1 local_32;
  uint local_30;
  uint local_2c;
  undefined4 local_24 [4];
  undefined4 local_14 [4];
  
  hDevice = (HANDLE)FUN_20002400();
  if (hDevice != (HANDLE)0xffffffff) {
    local_44 = param_1 & 0xffff;
    local_40 = param_2;
    local_3c = &DAT_200070c0;
    local_38 = &DAT_200070c0;
    local_34 = 0;
    local_33 = 0;
    local_32 = 0;
    local_30 = param_3 & 0xffff;
    local_2c = param_4 & 0xffff;
    local_50[1] = 0xfa26408;
    BVar1 = DeviceIoControl(hDevice,0xfa26408,&local_44,0x20,(LPVOID)0x0,0,local_50,
                            (LPOVERLAPPED)0x0);
    if (BVar1 != 0) {
      FUN_20003d90(local_24,param_5,0x10);
      if (param_6 == (undefined4 *)0x0) {
        local_50[2] = 0x10;
      }
      else {
        FUN_20003d90(local_14,param_6,0x10);
        local_50[2] = 0x20;
      }
      local_50[1] = 0xfa26440;
      DeviceIoControl(hDevice,0xfa26440,local_24,local_50[2],param_5,0x10,local_50,(LPOVERLAPPED)0x0
                     );
    }
    CloseHandle(hDevice);
  }
  return;
}


// ---- FUN_20002c2e @ 20002c2e

void __cdecl
FUN_20002c2e(uint param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4,ushort param_5)

{
  HANDLE hDevice;
  BOOL BVar1;
  DWORD local_1d4 [3];
  uint local_1c8;
  undefined4 local_1c4;
  undefined *local_1c0;
  undefined *local_1bc;
  undefined1 local_1b8;
  undefined1 local_1b7;
  undefined1 local_1b6;
  undefined4 local_1b4;
  undefined4 local_1b0;
  uint local_1ac;
  undefined4 local_1a8 [105];
  
  if ((param_5 < 0x17) && (hDevice = (HANDLE)FUN_20002400(), hDevice != (HANDLE)0xffffffff)) {
    local_1c8 = param_1 & 0xffff;
    local_1c4 = param_2;
    local_1c0 = &DAT_200070c0;
    local_1bc = &DAT_200070c0;
    local_1b8 = 0;
    local_1b7 = 0;
    local_1b6 = 0;
    local_1b4 = 0;
    local_1b0 = 0;
    local_1ac = (uint)param_5;
    local_1d4[1] = 0xfa26408;
    BVar1 = DeviceIoControl(hDevice,0xfa26408,&local_1c8,0x20,(LPVOID)0x0,0,local_1d4,
                            (LPOVERLAPPED)0x0);
    if (BVar1 != 0) {
      FUN_20003d90(local_1a8,param_3,(uint)param_5 << 1);
      FUN_20003d90((undefined4 *)((int)local_1a8 + (uint)param_5 * 2),param_4,(uint)param_5 << 4);
      local_1d4[2] = (uint)param_5 * 0x10 + (uint)param_5 * 2;
      local_1d4[1] = 0xfa2648c;
      DeviceIoControl(hDevice,0xfa2648c,local_1a8,local_1d4[2],(LPVOID)0x0,0,local_1d4,
                      (LPOVERLAPPED)0x0);
      FUN_20003d90(param_4,(undefined4 *)((int)local_1a8 + (uint)param_5 * 2),(uint)param_5 << 4);
    }
    CloseHandle(hDevice);
  }
  return;
}


// ---- FUN_20002dea @ 20002dea

undefined4 FUN_20002dea(void)

{
  HANDLE hDevice;
  BOOL BVar1;
  DWORD local_10 [3];
  
  hDevice = (HANDLE)FUN_20002400();
  if (hDevice == (HANDLE)0xffffffff) {
    local_10[2] = 0;
  }
  else {
    local_10[1] = 0xfa26448;
    BVar1 = DeviceIoControl(hDevice,0xfa26448,(LPVOID)0x0,0,local_10 + 2,4,local_10,
                            (LPOVERLAPPED)0x0);
    if (BVar1 == 0) {
      local_10[2] = 0;
    }
    else if (local_10[0] != 4) {
      local_10[2] = 0;
    }
    BVar1 = CloseHandle(hDevice);
    if (BVar1 == 0) {
      local_10[2] = 0;
    }
  }
  return local_10[2];
}


// ---- FUN_20002e67 @ 20002e67

uint FUN_20002e67(void)

{
  BOOL BVar1;
  undefined4 local_18;
  BOOL local_14;
  HANDLE local_10;
  DWORD local_c [2];
  
  local_18 = 0;
  local_10 = (HANDLE)FUN_20002400();
  if (local_10 != (HANDLE)0xffffffff) {
    local_c[1] = 0xfa26450;
    local_14 = DeviceIoControl(local_10,0xfa26450,(LPVOID)0x0,0,&local_18,4,local_c,
                               (LPOVERLAPPED)0x0);
  }
  BVar1 = CloseHandle(local_10);
  return CONCAT22((short)((uint)BVar1 >> 0x10),(undefined2)local_18);
}


// ---- FUN_20002ebc @ 20002ebc

void __cdecl FUN_20002ebc(uint param_1)

{
  HANDLE hDevice;
  DWORD local_10 [2];
  uint local_8;
  
  local_8 = param_1 & 0xffff;
  hDevice = (HANDLE)FUN_20002400();
  if (hDevice != (HANDLE)0xffffffff) {
    local_10[1] = 0xfa26454;
    DeviceIoControl(hDevice,0xfa26454,&local_8,4,(LPVOID)0x0,0,local_10,(LPOVERLAPPED)0x0);
  }
  CloseHandle(hDevice);
  return;
}


// ---- FUN_20002f11 @ 20002f11

uint __cdecl FUN_20002f11(uint param_1)

{
  BOOL BVar1;
  uint local_18;
  HANDLE local_14;
  DWORD local_10 [2];
  undefined4 local_8;
  
  local_8 = 0;
  local_18 = param_1 & 0xffff;
  local_14 = (HANDLE)FUN_20002400();
  if (local_14 != (HANDLE)0xffffffff) {
    local_10[1] = 0xfa26458;
    DeviceIoControl(local_14,0xfa26458,&local_18,4,&local_8,4,local_10,(LPOVERLAPPED)0x0);
  }
  BVar1 = CloseHandle(local_14);
  return CONCAT22((short)((uint)BVar1 >> 0x10),(undefined2)local_8);
}


// ---- FUN_20002f73 @ 20002f73

uint __cdecl FUN_20002f73(uint param_1,undefined4 param_2)

{
  undefined4 local_38;
  BOOL local_34;
  HANDLE local_30;
  DWORD local_2c [2];
  uint local_24;
  undefined4 local_20;
  undefined *local_1c;
  undefined *local_18;
  undefined1 local_14;
  undefined1 local_13;
  undefined1 local_12;
  undefined4 local_10;
  undefined4 local_c;
  
  local_38 = 0;
  local_30 = (HANDLE)FUN_20002400();
  if (local_30 != (HANDLE)0xffffffff) {
    local_24 = param_1 & 0xffff;
    local_20 = param_2;
    local_1c = &DAT_200070c0;
    local_18 = &DAT_200070c0;
    local_14 = 0;
    local_13 = 0;
    local_12 = 0;
    local_10 = 0;
    local_c = 0;
    local_2c[1] = 0xfa26408;
    local_34 = DeviceIoControl(local_30,0xfa26408,&local_24,0x20,(LPVOID)0x0,0,local_2c,
                               (LPOVERLAPPED)0x0);
    if (local_34 != 0) {
      local_2c[1] = 0xfa2645c;
      local_34 = DeviceIoControl(local_30,0xfa2645c,(LPVOID)0x0,0,&local_38,4,local_2c,
                                 (LPOVERLAPPED)0x0);
    }
    local_30 = (HANDLE)CloseHandle(local_30);
  }
  return CONCAT22((short)((uint)local_30 >> 0x10),(undefined2)local_38);
}


// ---- FUN_20003033 @ 20003033

undefined2 __cdecl FUN_20003033(uint param_1,undefined4 param_2,undefined4 param_3)

{
  undefined2 local_38 [2];
  BOOL local_34;
  HANDLE local_30;
  DWORD local_2c [2];
  uint local_24;
  undefined4 local_20;
  undefined *local_1c;
  undefined4 local_18;
  undefined1 local_14;
  undefined1 local_13;
  undefined1 local_12;
  undefined4 local_10;
  undefined4 local_c;
  
  local_30 = (HANDLE)FUN_20002400();
  if (local_30 != (HANDLE)0xffffffff) {
    local_24 = param_1 & 0xffff;
    local_20 = param_2;
    local_1c = &DAT_200070c0;
    local_18 = param_3;
    local_14 = 0;
    local_13 = 0;
    local_12 = 0;
    local_10 = 0;
    local_c = 0;
    local_2c[1] = 0xfa26408;
    local_34 = DeviceIoControl(local_30,0xfa26408,&local_24,0x20,(LPVOID)0x0,0,local_2c,
                               (LPOVERLAPPED)0x0);
    if (local_34 != 0) {
      local_2c[1] = 0xfa26460;
      local_34 = DeviceIoControl(local_30,0xfa26460,(LPVOID)0x0,0,local_38,4,local_2c,
                                 (LPOVERLAPPED)0x0);
    }
    CloseHandle(local_30);
  }
  return local_38[0];
}


// ---- FUN_200030eb @ 200030eb

undefined4 __cdecl FUN_200030eb(uint param_1,undefined4 param_2)

{
  HANDLE hDevice;
  int local_38;
  DWORD local_30 [3];
  uint local_24;
  undefined4 local_20;
  undefined *local_1c;
  undefined *local_18;
  undefined1 local_14;
  undefined1 local_13;
  undefined1 local_12;
  undefined4 local_10;
  undefined4 local_c;
  
  hDevice = (HANDLE)FUN_20002400();
  if (hDevice != (HANDLE)0xffffffff) {
    local_24 = param_1 & 0xffff;
    local_20 = param_2;
    local_1c = &DAT_200070c0;
    local_18 = &DAT_200070c0;
    local_14 = 0;
    local_13 = 0;
    local_12 = 0;
    local_10 = 0;
    local_c = 0;
    local_30[1] = 0xfa26408;
    local_38 = DeviceIoControl(hDevice,0xfa26408,&local_24,0x20,(LPVOID)0x0,0,local_30,
                               (LPOVERLAPPED)0x0);
    if (local_38 != 0) {
      local_30[1] = 0xfa26464;
      local_38 = DeviceIoControl(hDevice,0xfa26464,(LPVOID)0x0,0,local_30 + 2,4,local_30,
                                 (LPOVERLAPPED)0x0);
    }
    CloseHandle(hDevice);
    if ((local_38 != 0) && (local_30[0] == 4)) {
      return local_30[2];
    }
  }
  return 0;
}


// ---- FUN_200031b3 @ 200031b3

void __cdecl FUN_200031b3(uint param_1,undefined4 param_2)

{
  HANDLE hDevice;
  BOOL BVar1;
  DWORD local_2c [2];
  uint local_24;
  undefined4 local_20;
  undefined *local_1c;
  undefined *local_18;
  undefined1 local_14;
  undefined1 local_13;
  undefined1 local_12;
  undefined4 local_10;
  undefined4 local_c;
  
  hDevice = (HANDLE)FUN_20002400();
  if (hDevice != (HANDLE)0xffffffff) {
    local_24 = param_1 & 0xffff;
    local_20 = param_2;
    local_1c = &DAT_200070c0;
    local_18 = &DAT_200070c0;
    local_14 = 0;
    local_13 = 0;
    local_12 = 0;
    local_10 = 0;
    local_c = 0;
    local_2c[1] = 0xfa26408;
    BVar1 = DeviceIoControl(hDevice,0xfa26408,&local_24,0x20,(LPVOID)0x0,0,local_2c,
                            (LPOVERLAPPED)0x0);
    if (BVar1 != 0) {
      local_2c[1] = 0xfa26480;
      DeviceIoControl(hDevice,0xfa26480,&stack0x0000000c,4,(LPVOID)0x0,0,local_2c,(LPOVERLAPPED)0x0)
      ;
    }
    CloseHandle(hDevice);
  }
  return;
}


// ---- FUN_20003268 @ 20003268

void __cdecl FUN_20003268(HWND param_1)

{
  int iVar1;
  int local_2c;
  int local_28;
  tagRECT local_24;
  HDC local_14;
  int local_10;
  int local_c;
  int local_8;
  
  GetWindowRect(param_1,&local_24);
  local_c = local_24.right - local_24.left;
  local_10 = local_24.bottom - local_24.top;
  local_14 = GetDC(param_1);
  iVar1 = GetDeviceCaps(local_14,8);
  local_8 = GetDeviceCaps(local_14,10);
  ReleaseDC(param_1,local_14);
  local_28 = iVar1 / 2 - local_c / 2;
  if (local_28 < 0) {
    local_28 = 0;
  }
  local_2c = local_8 / 2 - local_10 / 2;
  if (local_2c < 0) {
    local_2c = 0;
  }
  SetWindowPos(param_1,(HWND)0x0,local_28,local_2c,0,0,5);
  return;
}


// ---- FUN_2000332d @ 2000332d

undefined4 FUN_2000332d(HWND param_1,int param_2,short param_3)

{
  undefined4 uVar1;
  
  if (param_2 == 0x110) {
    FUN_20003268(param_1);
    uVar1 = 1;
  }
  else if ((param_2 == 0x111) && (param_3 == 2)) {
    DAT_200070c8 = 0;
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


// ---- FUN_200033a6 @ 200033a6

/* WARNING: Removing unreachable block (ram,0x200033fa) */

HWND FUN_200033a6(void)

{
  HWND pHVar1;
  
  DAT_200070c8 = 0;
  DAT_200070cc = FUN_2000332d;
  pHVar1 = CreateDialogParamA(DAT_200070d4,(LPCSTR)0x65,(HWND)0x0,FUN_2000332d,0);
  if (pHVar1 != (HWND)0x0) {
    DAT_200070c8 = 1;
  }
  return pHVar1;
}


// ---- FUN_20003400 @ 20003400

int __cdecl FUN_20003400(HWND param_1)

{
  BOOL BVar1;
  tagMSG local_20;
  
  while( true ) {
    if (DAT_200070c8 == 0) {
      return 0;
    }
    BVar1 = PeekMessageA(&local_20,param_1,0,0,3);
    if (BVar1 == 0) break;
    IsDialogMessageA(param_1,&local_20);
  }
  return DAT_200070c8;
}


// ---- FUN_20003440 @ 20003440

undefined4 __cdecl FUN_20003440(short *param_1,int *param_2)

{
  HWND pHVar1;
  int iVar2;
  undefined4 local_8;
  
  if (param_2 != (int *)0x0) {
    if (*param_1 == -1) {
      if (*param_2 == 0) {
        pHVar1 = FUN_200033a6();
        *param_2 = (int)pHVar1;
      }
      if (*param_2 != 0) {
        iVar2 = FUN_20003400((HWND)*param_2);
        if (iVar2 == 0) {
          *param_1 = 0;
        }
      }
    }
    if (((*param_1 != -1) && (*param_1 != -2)) && (*param_2 != 0)) {
      EndDialog((HWND)*param_2,0);
    }
  }
  if ((*param_1 == -1) || (*param_1 == -2)) {
    local_8 = 1;
  }
  else {
    local_8 = 0;
  }
  return local_8;
}


// ---- FUN_200034fa @ 200034fa

void FUN_200034fa(void)

{
  CreateFileA(s_____DK2WN95_200070a8,0x80000000,0,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  return;
}


// ---- FUN_2000351c @ 2000351c

bool FUN_2000351c(void)

{
  HANDLE hObject;
  
  hObject = (HANDLE)FUN_200034fa();
  if (hObject != (HANDLE)0xffffffff) {
    CloseHandle(hObject);
  }
  return hObject != (HANDLE)0xffffffff;
}


// ---- FUN_20003545 @ 20003545

uint __cdecl FUN_20003545(undefined4 param_1,undefined4 param_2)

{
  HANDLE hDevice;
  int iVar1;
  DWORD local_3c;
  undefined4 local_38;
  undefined4 local_34;
  uint local_28 [8];
  int local_8;
  
  local_8 = 0;
  do {
    local_38 = param_1;
    local_34 = param_2;
    local_28[0] = local_28[0] & 0xffff0000;
    hDevice = (HANDLE)FUN_200034fa();
    if (hDevice != (HANDLE)0xffffffff) {
      DeviceIoControl(hDevice,1,&local_38,0x30,(LPVOID)0x0,0,&local_3c,(LPOVERLAPPED)0x0);
      CloseHandle(hDevice);
    }
    iVar1 = FUN_20003440((short *)local_28,&local_8);
  } while (iVar1 != 0);
  return local_28[0] & 0xffff;
}


// ---- FUN_200035b8 @ 200035b8

void __cdecl
FUN_200035b8(short param_1,undefined4 param_2,byte param_3,undefined4 param_4,undefined2 param_5)

{
  HANDLE hDevice;
  int iVar1;
  DWORD local_3c;
  undefined4 local_38 [3];
  ushort local_2c;
  short local_28;
  undefined2 local_26;
  undefined4 local_24;
  int local_8;
  
  local_8 = 0;
  do {
    local_28 = param_1;
    local_38[0] = param_2;
    local_26 = param_5;
    local_2c = (ushort)param_3;
    local_24 = param_4;
    hDevice = (HANDLE)FUN_200034fa();
    if (hDevice != (HANDLE)0xffffffff) {
      DeviceIoControl(hDevice,5,local_38,0x30,(LPVOID)0x0,0,&local_3c,(LPOVERLAPPED)0x0);
      CloseHandle(hDevice);
    }
    iVar1 = FUN_20003440(&local_28,&local_8);
  } while (iVar1 != 0);
  return;
}


// ---- FUN_20003636 @ 20003636

void __cdecl
FUN_20003636(short param_1,undefined4 param_2,byte param_3,undefined4 param_4,undefined2 param_5)

{
  HANDLE hDevice;
  int iVar1;
  DWORD local_3c;
  undefined4 local_38 [3];
  ushort local_2c;
  short local_28;
  undefined2 local_26;
  undefined4 local_24;
  int local_8;
  
  local_8 = 0;
  do {
    local_28 = param_1;
    local_38[0] = param_2;
    local_26 = param_5;
    local_2c = (ushort)param_3;
    local_24 = param_4;
    hDevice = (HANDLE)FUN_200034fa();
    if (hDevice != (HANDLE)0xffffffff) {
      DeviceIoControl(hDevice,6,local_38,0x30,(LPVOID)0x0,0,&local_3c,(LPOVERLAPPED)0x0);
      CloseHandle(hDevice);
    }
    iVar1 = FUN_20003440(&local_28,&local_8);
  } while (iVar1 != 0);
  return;
}


// ---- FUN_200036b4 @ 200036b4

void __cdecl
FUN_200036b4(short param_1,undefined4 param_2,byte param_3,byte param_4,undefined4 param_5,
            undefined2 param_6)

{
  HANDLE hDevice;
  int iVar1;
  DWORD local_3c;
  undefined4 local_38 [3];
  ushort local_2c;
  ushort local_2a;
  short local_28;
  undefined2 local_26;
  undefined4 local_24;
  int local_8;
  
  local_8 = 0;
  do {
    local_28 = param_1;
    local_38[0] = param_2;
    local_2c = (ushort)param_3;
    local_2a = (ushort)param_4;
    local_26 = param_6;
    local_24 = param_5;
    hDevice = (HANDLE)FUN_200034fa();
    if (hDevice != (HANDLE)0xffffffff) {
      DeviceIoControl(hDevice,7,local_38,0x30,(LPVOID)0x0,0,&local_3c,(LPOVERLAPPED)0x0);
      CloseHandle(hDevice);
    }
    iVar1 = FUN_20003440(&local_28,&local_8);
  } while (iVar1 != 0);
  return;
}


// ---- FUN_2000373b @ 2000373b

void __cdecl
FUN_2000373b(short param_1,undefined4 param_2,byte param_3,byte param_4,undefined4 param_5,
            undefined2 param_6,undefined4 param_7)

{
  HANDLE hDevice;
  int iVar1;
  DWORD local_3c;
  undefined4 local_38 [2];
  undefined4 local_30;
  ushort local_2c;
  ushort local_2a;
  short local_28;
  undefined2 local_26;
  undefined4 local_24;
  int local_8;
  
  local_8 = 0;
  do {
    local_28 = param_1;
    local_38[0] = param_2;
    local_30 = param_7;
    local_2c = (ushort)param_3;
    local_2a = (ushort)param_4;
    local_26 = param_6;
    local_24 = param_5;
    hDevice = (HANDLE)FUN_200034fa();
    if (hDevice != (HANDLE)0xffffffff) {
      DeviceIoControl(hDevice,8,local_38,0x30,(LPVOID)0x0,0,&local_3c,(LPOVERLAPPED)0x0);
      CloseHandle(hDevice);
    }
    iVar1 = FUN_20003440(&local_28,&local_8);
  } while (iVar1 != 0);
  return;
}


// ---- FUN_200037c8 @ 200037c8

void __cdecl FUN_200037c8(short param_1,undefined4 param_2,undefined4 param_3)

{
  HANDLE hDevice;
  int iVar1;
  DWORD local_3c;
  undefined4 local_38 [4];
  short local_28 [8];
  undefined4 local_18;
  int local_8;
  
  local_8 = 0;
  do {
    local_28[0] = param_1;
    local_38[0] = param_2;
    local_18 = param_3;
    hDevice = (HANDLE)FUN_200034fa();
    if (hDevice != (HANDLE)0xffffffff) {
      DeviceIoControl(hDevice,9,local_38,0x30,(LPVOID)0x0,0,&local_3c,(LPOVERLAPPED)0x0);
      CloseHandle(hDevice);
    }
    iVar1 = FUN_20003440(local_28,&local_8);
  } while (iVar1 != 0);
  return;
}


// ---- FUN_20003835 @ 20003835

void __cdecl FUN_20003835(short param_1,undefined4 param_2)

{
  HANDLE hDevice;
  int iVar1;
  DWORD local_3c;
  undefined4 local_38 [4];
  short local_28 [16];
  int local_8;
  
  local_8 = 0;
  do {
    local_28[0] = param_1;
    local_38[0] = param_2;
    hDevice = (HANDLE)FUN_200034fa();
    if (hDevice != (HANDLE)0xffffffff) {
      DeviceIoControl(hDevice,10,local_38,0x30,(LPVOID)0x0,0,&local_3c,(LPOVERLAPPED)0x0);
      CloseHandle(hDevice);
    }
    iVar1 = FUN_20003440(local_28,&local_8);
  } while (iVar1 != 0);
  return;
}


// ---- FUN_2000389c @ 2000389c

void __cdecl FUN_2000389c(short param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  HANDLE hDevice;
  int iVar1;
  DWORD local_3c;
  undefined4 local_38 [2];
  undefined4 local_30;
  short local_28 [12];
  undefined4 local_10;
  int local_8;
  
  local_8 = 0;
  do {
    local_28[0] = param_1;
    local_38[0] = param_2;
    local_30 = param_4;
    local_10 = param_3;
    hDevice = (HANDLE)FUN_200034fa();
    if (hDevice != (HANDLE)0xffffffff) {
      DeviceIoControl(hDevice,0xb,local_38,0x30,(LPVOID)0x0,0,&local_3c,(LPOVERLAPPED)0x0);
      CloseHandle(hDevice);
    }
    iVar1 = FUN_20003440(local_28,&local_8);
  } while (iVar1 != 0);
  return;
}


// ---- FUN_2000390f @ 2000390f

void __cdecl
FUN_2000390f(short param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  HANDLE hDevice;
  int iVar1;
  DWORD local_3c;
  undefined4 local_38 [2];
  undefined4 local_30;
  short local_28 [4];
  undefined4 local_20;
  undefined4 local_1c;
  int local_8;
  
  local_8 = 0;
  do {
    local_28[0] = param_1;
    local_38[0] = param_2;
    local_30 = param_3;
    local_1c = param_4;
    local_20 = param_5;
    hDevice = (HANDLE)FUN_200034fa();
    if (hDevice != (HANDLE)0xffffffff) {
      DeviceIoControl(hDevice,0xc,local_38,0x30,(LPVOID)0x0,0,&local_3c,(LPOVERLAPPED)0x0);
      CloseHandle(hDevice);
    }
    iVar1 = FUN_20003440(local_28,&local_8);
  } while (iVar1 != 0);
  return;
}


// ---- FUN_20003988 @ 20003988

void __cdecl
FUN_20003988(short param_1,undefined4 param_2,uint param_3,uint param_4,undefined4 param_5,
            undefined4 param_6)

{
  HANDLE hDevice;
  int iVar1;
  DWORD local_28;
  short local_24 [2];
  undefined4 local_20;
  uint local_1c;
  uint local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_8;
  
  local_8 = 0;
  do {
    local_24[0] = param_1;
    local_20 = param_2;
    local_1c = param_3 & 0xffff;
    local_18 = param_4 & 0xffff;
    local_14 = param_5;
    local_10 = param_6;
    hDevice = (HANDLE)FUN_200034fa();
    if (hDevice != (HANDLE)0xffffffff) {
      DeviceIoControl(hDevice,0xe,local_24,0x1c,(LPVOID)0x0,0,&local_28,(LPOVERLAPPED)0x0);
      CloseHandle(hDevice);
    }
    iVar1 = FUN_20003440(local_24,&local_8);
  } while (iVar1 != 0);
  return;
}


// ---- FUN_20003a12 @ 20003a12

void __cdecl
FUN_20003a12(short param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined2 param_5)

{
  HANDLE hDevice;
  int iVar1;
  DWORD local_28;
  short local_24 [2];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined2 local_c;
  int local_8;
  
  local_8 = 0;
  do {
    local_24[0] = param_1;
    local_20 = param_2;
    local_1c = 0;
    local_18 = 0;
    local_14 = param_3;
    local_10 = param_4;
    local_c = param_5;
    hDevice = (HANDLE)FUN_200034fa();
    if (hDevice != (HANDLE)0xffffffff) {
      DeviceIoControl(hDevice,0x16,local_24,0x1c,(LPVOID)0x0,0,&local_28,(LPOVERLAPPED)0x0);
      CloseHandle(hDevice);
    }
    iVar1 = FUN_20003440(local_24,&local_8);
  } while (iVar1 != 0);
  return;
}


// ---- FUN_20003a9b @ 20003a9b

uint FUN_20003a9b(void)

{
  HANDLE hDevice;
  DWORD local_38;
  undefined1 local_34 [36];
  uint local_10;
  
  local_10 = local_10 & 0xffff0000;
  hDevice = (HANDLE)FUN_200034fa();
  if (hDevice != (HANDLE)0xffffffff) {
    DeviceIoControl(hDevice,0x10,local_34,0x30,(LPVOID)0x0,0,&local_38,(LPOVERLAPPED)0x0);
    CloseHandle(hDevice);
  }
  return local_10 & 0xffff;
}


// ---- FUN_20003ae7 @ 20003ae7

undefined2 FUN_20003ae7(void)

{
  HANDLE hDevice;
  DWORD local_38;
  undefined1 local_34 [38];
  undefined2 local_e;
  
  local_e = 0;
  hDevice = (HANDLE)FUN_200034fa();
  if (hDevice != (HANDLE)0xffffffff) {
    DeviceIoControl(hDevice,3,local_34,0x30,(LPVOID)0x0,0,&local_38,(LPOVERLAPPED)0x0);
    CloseHandle(hDevice);
  }
  return local_e;
}


// ---- FUN_20003b2f @ 20003b2f

void __cdecl FUN_20003b2f(undefined2 param_1)

{
  HANDLE hDevice;
  DWORD local_38;
  undefined1 local_34 [38];
  undefined2 local_e;
  
  local_e = param_1;
  hDevice = (HANDLE)FUN_200034fa();
  if (hDevice != (HANDLE)0xffffffff) {
    DeviceIoControl(hDevice,4,local_34,0x30,(LPVOID)0x0,0,&local_38,(LPOVERLAPPED)0x0);
    CloseHandle(hDevice);
  }
  return;
}


// ---- FUN_20003b75 @ 20003b75

undefined2 __cdecl FUN_20003b75(undefined2 param_1)

{
  HANDLE hDevice;
  DWORD local_38;
  undefined1 local_34 [16];
  undefined2 local_24;
  
  local_24 = param_1;
  hDevice = (HANDLE)FUN_200034fa();
  if (hDevice != (HANDLE)0xffffffff) {
    DeviceIoControl(hDevice,2,local_34,0x30,(LPVOID)0x0,0,&local_38,(LPOVERLAPPED)0x0);
    CloseHandle(hDevice);
  }
  return local_24;
}


// ---- FUN_20003bbf @ 20003bbf

undefined2 __cdecl FUN_20003bbf(short param_1,undefined4 param_2)

{
  HANDLE hDevice;
  int iVar1;
  DWORD local_3c;
  undefined4 local_38 [4];
  short local_28 [11];
  undefined2 local_12;
  int local_8;
  
  local_8 = 0;
  do {
    local_28[0] = param_1;
    local_38[0] = param_2;
    local_12 = 0;
    hDevice = (HANDLE)FUN_200034fa();
    if (hDevice != (HANDLE)0xffffffff) {
      DeviceIoControl(hDevice,0x11,local_38,0x30,(LPVOID)0x0,0,&local_3c,(LPOVERLAPPED)0x0);
      CloseHandle(hDevice);
    }
    iVar1 = FUN_20003440(local_28,&local_8);
  } while (iVar1 != 0);
  return local_12;
}


// ---- FUN_20003c30 @ 20003c30

undefined2 __cdecl
FUN_20003c30(short param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  HANDLE hDevice;
  int iVar1;
  DWORD local_3c;
  undefined4 local_38;
  undefined4 local_34;
  short local_28 [2];
  undefined4 local_24;
  undefined2 local_12;
  int local_8;
  
  local_8 = 0;
  do {
    local_28[0] = param_1;
    local_38 = param_2;
    local_34 = param_3;
    local_24 = param_4;
    hDevice = (HANDLE)FUN_200034fa();
    if (hDevice != (HANDLE)0xffffffff) {
      DeviceIoControl(hDevice,0x12,&local_38,0x30,(LPVOID)0x0,0,&local_3c,(LPOVERLAPPED)0x0);
      CloseHandle(hDevice);
    }
    iVar1 = FUN_20003440(local_28,&local_8);
  } while (iVar1 != 0);
  return local_12;
}


// ---- FUN_20003ca7 @ 20003ca7

undefined4 __cdecl FUN_20003ca7(short param_1,undefined4 param_2)

{
  HANDLE hDevice;
  int iVar1;
  DWORD local_3c;
  undefined4 local_38 [4];
  short local_28 [12];
  undefined4 local_10;
  int local_8;
  
  local_8 = 0;
  do {
    local_28[0] = param_1;
    local_38[0] = param_2;
    local_10 = 0;
    hDevice = (HANDLE)FUN_200034fa();
    if (hDevice != (HANDLE)0xffffffff) {
      DeviceIoControl(hDevice,0x13,local_38,0x30,(LPVOID)0x0,0,&local_3c,(LPOVERLAPPED)0x0);
      CloseHandle(hDevice);
    }
    iVar1 = FUN_20003440(local_28,&local_8);
  } while (iVar1 != 0);
  return local_10;
}


// ---- FUN_20003d18 @ 20003d18

void __cdecl FUN_20003d18(short param_1,undefined4 param_2,undefined4 param_3)

{
  HANDLE hDevice;
  int iVar1;
  DWORD local_3c;
  undefined4 local_38 [4];
  short local_28 [12];
  undefined4 local_10;
  int local_8;
  
  local_8 = 0;
  do {
    local_28[0] = param_1;
    local_38[0] = param_2;
    local_10 = param_3;
    hDevice = (HANDLE)FUN_200034fa();
    if (hDevice != (HANDLE)0xffffffff) {
      DeviceIoControl(hDevice,0x14,local_38,0x30,(LPVOID)0x0,0,&local_3c,(LPOVERLAPPED)0x0);
      CloseHandle(hDevice);
    }
    iVar1 = FUN_20003440(local_28,&local_8);
  } while (iVar1 != 0);
  return;
}


// ---- FUN_20003d90 @ 20003d90

undefined4 * __cdecl FUN_20003d90(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if ((param_2 < param_1) && (param_1 < (undefined4 *)(param_3 + (int)param_2))) {
    puVar3 = (undefined4 *)((param_3 - 4) + (int)param_2);
    puVar4 = (undefined4 *)((param_3 - 4) + (int)param_1);
    if (((uint)puVar4 & 3) == 0) {
      uVar1 = param_3 >> 2;
      uVar2 = param_3 & 3;
      if (7 < uVar1) {
        for (; uVar1 != 0; uVar1 = uVar1 - 1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + -1;
          puVar4 = puVar4 + -1;
        }
        switch(uVar2) {
        case 0:
          return param_1;
        case 2:
          goto switchD_20003f47_caseD_2;
        case 3:
          goto switchD_20003f47_caseD_3;
        }
        goto switchD_20003f47_caseD_1;
      }
    }
    else {
      switch(param_3) {
      case 0:
        goto switchD_20003f47_caseD_0;
      case 1:
        goto switchD_20003f47_caseD_1;
      case 2:
        goto switchD_20003f47_caseD_2;
      case 3:
        goto switchD_20003f47_caseD_3;
      default:
        uVar1 = param_3 - ((uint)puVar4 & 3);
        switch((uint)puVar4 & 3) {
        case 1:
          uVar2 = uVar1 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
          puVar3 = (undefined4 *)((int)puVar3 + -1);
          uVar1 = uVar1 >> 2;
          puVar4 = (undefined4 *)((int)puVar4 - 1);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar2) {
            case 0:
              return param_1;
            case 2:
              goto switchD_20003f47_caseD_2;
            case 3:
              goto switchD_20003f47_caseD_3;
            }
            goto switchD_20003f47_caseD_1;
          }
          break;
        case 2:
          uVar2 = uVar1 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
          uVar1 = uVar1 >> 2;
          *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
          puVar3 = (undefined4 *)((int)puVar3 + -2);
          puVar4 = (undefined4 *)((int)puVar4 - 2);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar2) {
            case 0:
              return param_1;
            case 2:
              goto switchD_20003f47_caseD_2;
            case 3:
              goto switchD_20003f47_caseD_3;
            }
            goto switchD_20003f47_caseD_1;
          }
          break;
        case 3:
          uVar2 = uVar1 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
          *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
          uVar1 = uVar1 >> 2;
          *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
          puVar3 = (undefined4 *)((int)puVar3 + -3);
          puVar4 = (undefined4 *)((int)puVar4 - 3);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar2) {
            case 0:
              return param_1;
            case 2:
              goto switchD_20003f47_caseD_2;
            case 3:
              goto switchD_20003f47_caseD_3;
            }
            goto switchD_20003f47_caseD_1;
          }
        }
      }
    }
    switch(uVar1) {
    case 7:
      puVar4[7 - uVar1] = puVar3[7 - uVar1];
    case 6:
      puVar4[6 - uVar1] = puVar3[6 - uVar1];
    case 5:
      puVar4[5 - uVar1] = puVar3[5 - uVar1];
    case 4:
      puVar4[4 - uVar1] = puVar3[4 - uVar1];
    case 3:
      puVar4[3 - uVar1] = puVar3[3 - uVar1];
    case 2:
      puVar4[2 - uVar1] = puVar3[2 - uVar1];
    case 1:
      puVar4[1 - uVar1] = puVar3[1 - uVar1];
      puVar3 = puVar3 + -uVar1;
      puVar4 = puVar4 + -uVar1;
    }
    switch(uVar2) {
    case 1:
switchD_20003f47_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      return param_1;
    case 2:
switchD_20003f47_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      return param_1;
    case 3:
switchD_20003f47_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
      return param_1;
    }
switchD_20003f47_caseD_0:
    return param_1;
  }
  puVar3 = param_1;
  if (((uint)param_1 & 3) == 0) {
    uVar1 = param_3 >> 2;
    uVar2 = param_3 & 3;
    if (7 < uVar1) {
      for (; uVar1 != 0; uVar1 = uVar1 - 1) {
        *puVar3 = *param_2;
        param_2 = param_2 + 1;
        puVar3 = puVar3 + 1;
      }
      switch(uVar2) {
      case 0:
        return param_1;
      case 2:
        goto switchD_20003dc5_caseD_2;
      case 3:
        goto switchD_20003dc5_caseD_3;
      }
      goto switchD_20003dc5_caseD_1;
    }
  }
  else {
    switch(param_3) {
    case 0:
      goto switchD_20003dc5_caseD_0;
    case 1:
      goto switchD_20003dc5_caseD_1;
    case 2:
      goto switchD_20003dc5_caseD_2;
    case 3:
      goto switchD_20003dc5_caseD_3;
    default:
      uVar1 = (param_3 - 4) + ((uint)param_1 & 3);
      switch((uint)param_1 & 3) {
      case 1:
        uVar2 = uVar1 & 3;
        *(undefined1 *)param_1 = *(undefined1 *)param_2;
        *(undefined1 *)((int)param_1 + 1) = *(undefined1 *)((int)param_2 + 1);
        uVar1 = uVar1 >> 2;
        *(undefined1 *)((int)param_1 + 2) = *(undefined1 *)((int)param_2 + 2);
        param_2 = (undefined4 *)((int)param_2 + 3);
        puVar3 = (undefined4 *)((int)param_1 + 3);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *param_2;
            param_2 = param_2 + 1;
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return param_1;
          case 2:
            goto switchD_20003dc5_caseD_2;
          case 3:
            goto switchD_20003dc5_caseD_3;
          }
          goto switchD_20003dc5_caseD_1;
        }
        break;
      case 2:
        uVar2 = uVar1 & 3;
        *(undefined1 *)param_1 = *(undefined1 *)param_2;
        uVar1 = uVar1 >> 2;
        *(undefined1 *)((int)param_1 + 1) = *(undefined1 *)((int)param_2 + 1);
        param_2 = (undefined4 *)((int)param_2 + 2);
        puVar3 = (undefined4 *)((int)param_1 + 2);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *param_2;
            param_2 = param_2 + 1;
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return param_1;
          case 2:
            goto switchD_20003dc5_caseD_2;
          case 3:
            goto switchD_20003dc5_caseD_3;
          }
          goto switchD_20003dc5_caseD_1;
        }
        break;
      case 3:
        uVar2 = uVar1 & 3;
        *(undefined1 *)param_1 = *(undefined1 *)param_2;
        param_2 = (undefined4 *)((int)param_2 + 1);
        uVar1 = uVar1 >> 2;
        puVar3 = (undefined4 *)((int)param_1 + 1);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *param_2;
            param_2 = param_2 + 1;
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return param_1;
          case 2:
            goto switchD_20003dc5_caseD_2;
          case 3:
            goto switchD_20003dc5_caseD_3;
          }
          goto switchD_20003dc5_caseD_1;
        }
      }
    }
  }
  switch(uVar1) {
  case 7:
    puVar3[uVar1 - 7] = param_2[uVar1 - 7];
  case 6:
    puVar3[uVar1 - 6] = param_2[uVar1 - 6];
  case 5:
    puVar3[uVar1 - 5] = param_2[uVar1 - 5];
  case 4:
    puVar3[uVar1 - 4] = param_2[uVar1 - 4];
  case 3:
    puVar3[uVar1 - 3] = param_2[uVar1 - 3];
  case 2:
    puVar3[uVar1 - 2] = param_2[uVar1 - 2];
  case 1:
    puVar3[uVar1 - 1] = param_2[uVar1 - 1];
    param_2 = param_2 + uVar1;
    puVar3 = puVar3 + uVar1;
  }
  switch(uVar2) {
  case 1:
switchD_20003dc5_caseD_1:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    return param_1;
  case 2:
switchD_20003dc5_caseD_2:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    return param_1;
  case 3:
switchD_20003dc5_caseD_3:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)param_2 + 2);
    return param_1;
  }
switchD_20003dc5_caseD_0:
  return param_1;
}


// ---- FUN_200040d0 @ 200040d0

ushort __cdecl FUN_200040d0(undefined4 *param_1,int param_2,uint param_3,ushort param_4)

{
  byte *pbVar1;
  ushort uVar2;
  HGLOBAL pvVar3;
  undefined1 *pMem;
  LPVOID pMem_00;
  ushort uVar4;
  uint uVar5;
  ushort uVar6;
  ushort uVar7;
  undefined4 *puVar8;
  
  uVar2 = FUN_20004570(param_1,param_3);
  if ((param_2 != 0) && (param_4 != 0)) {
    if (param_4 < uVar2) {
      return 0;
    }
    uVar4 = (short)param_3 + 2;
    uVar2 = uVar4;
    if (uVar4 % 3 != 0) {
      uVar2 = (uVar4 - uVar4 % 3) + 3;
    }
    pvVar3 = GlobalAlloc(0x40,(uint)uVar2);
    pMem = GlobalLock(pvVar3);
    if (pMem == (undefined1 *)0x0) {
      return 0;
    }
    uVar2 = 0;
    pvVar3 = GlobalAlloc(0x40,(uint)param_4);
    pMem_00 = GlobalLock(pvVar3);
    if (pMem_00 == (LPVOID)0x0) {
      pvVar3 = GlobalHandle(pMem);
      GlobalUnlock(pvVar3);
      pvVar3 = GlobalHandle(pMem);
      GlobalFree(pvVar3);
      return 0;
    }
    *pMem = (undefined1)param_3;
    pMem[1] = param_3._1_1_;
    puVar8 = (undefined4 *)(pMem + 2);
    for (uVar5 = (param_3 & 0xffff) >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar8 = *param_1;
      param_1 = param_1 + 1;
      puVar8 = puVar8 + 1;
    }
    for (uVar5 = param_3 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar8 = *(undefined1 *)param_1;
      param_1 = (undefined4 *)((int)param_1 + 1);
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
    uVar7 = 0;
    if (uVar4 != 0) {
      do {
        uVar5 = (uint)uVar7;
        uVar7 = uVar7 + 3;
        pbVar1 = pMem + uVar5;
        *(byte *)((uint)uVar2 + (int)pMem_00) = (*pbVar1 >> 2) + 0x20;
        *(byte *)((uint)(ushort)(uVar2 + 1) + (int)pMem_00) =
             ((*pbVar1 & 3) << 4 | pbVar1[1] >> 4) + 0x20;
        uVar6 = uVar2 + 3;
        *(byte *)((uint)(ushort)(uVar2 + 2) + (int)pMem_00) =
             (pbVar1[2] >> 6 | (pbVar1[1] & 0xf) << 2) + 0x20;
        uVar2 = uVar2 + 4;
        *(byte *)((uint)uVar6 + (int)pMem_00) = (pbVar1[2] & 0x3f) + 0x20;
      } while (uVar7 < uVar4);
    }
    uVar4 = FUN_20004480((int)pMem_00,param_2,uVar2);
    uVar2 = uVar2 + uVar4;
    *(undefined1 *)((uint)uVar2 + param_2) = 0;
    pvVar3 = GlobalHandle(pMem_00);
    GlobalUnlock(pvVar3);
    pvVar3 = GlobalHandle(pMem_00);
    GlobalFree(pvVar3);
    pvVar3 = GlobalHandle(pMem);
    GlobalUnlock(pvVar3);
    pvVar3 = GlobalHandle(pMem);
    GlobalFree(pvVar3);
  }
  return uVar2;
}


// ---- FUN_200042b0 @ 200042b0

ushort __cdecl FUN_200042b0(char *param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  HGLOBAL pvVar4;
  char *pcVar5;
  uint uVar6;
  char *pcVar7;
  uint uVar8;
  ushort uVar9;
  uint uVar10;
  ushort local_6;
  
  bVar2 = true;
  uVar10 = 0;
  uVar8 = 0;
  uVar6 = 0xffffffff;
  bVar3 = false;
  pcVar5 = param_1;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  pvVar4 = GlobalAlloc(0x40,~uVar6 - 1);
  pcVar5 = GlobalLock(pvVar4);
  if (pcVar5 == (char *)0x0) {
    return 0;
  }
  FUN_200044f0(param_1,(int)pcVar5);
  local_6 = CONCAT11((byte)((int)pcVar5[2] + 0x20U >> 2) & 0xf | pcVar5[1] << 4,
                     (byte)((int)pcVar5[1] + 0x20U >> 4) & 3 | *pcVar5 * '\x04' + 0x80U);
  if (param_2 == 0) {
    pvVar4 = GlobalHandle(pcVar5);
    GlobalUnlock(pvVar4);
    pvVar4 = GlobalHandle(pcVar5);
    GlobalFree(pvVar4);
    return local_6;
  }
  if (local_6 != 0) {
    do {
      pcVar7 = pcVar5 + uVar8;
      if ((((*pcVar7 == '\0') || (pcVar7[1] == '\0')) || (pcVar7[2] == '\0')) || (pcVar7[3] == '\0')
         ) {
        bVar3 = true;
        break;
      }
      uVar6 = uVar10;
      if (!bVar2) {
        *(byte *)(uVar10 + param_2) = (byte)(pcVar7[1] + 0x20 >> 4) & 3 ^ *pcVar7 * '\x04' + 0x80U;
        uVar6 = (uint)(ushort)((short)uVar10 + 2);
        *(byte *)((uint)(ushort)((short)uVar10 + 1) + param_2) =
             (byte)(pcVar7[2] + 0x20 >> 2) & 0xf ^ pcVar7[1] << 4;
      }
      uVar8 = (uint)(ushort)((short)uVar8 + 4);
      bVar2 = false;
      uVar9 = (short)uVar6 + 1;
      uVar10 = (uint)uVar9;
      *(byte *)(uVar6 + param_2) = pcVar7[3] + 0x20U & 0x3f ^ pcVar7[2] << 6;
    } while (uVar9 < local_6);
  }
  if (bVar3) {
    local_6 = 0;
  }
  *(undefined1 *)((uint)local_6 + param_2) = 0;
  pvVar4 = GlobalHandle(pcVar5);
  GlobalUnlock(pvVar4);
  pvVar4 = GlobalHandle(pcVar5);
  GlobalFree(pvVar4);
  return local_6;
}


// ---- FUN_20004480 @ 20004480

ushort __cdecl FUN_20004480(int param_1,int param_2,ushort param_3)

{
  char cVar1;
  ushort uVar2;
  uint uVar3;
  ushort uVar4;
  uint uVar5;
  
  uVar2 = 0;
  uVar5 = 0;
  do {
    cVar1 = *(char *)(uVar5 + param_1);
    if (cVar1 == '!') {
      uVar3 = (uint)uVar2;
      uVar2 = uVar2 + 1;
      *(undefined1 *)(uVar3 + param_2 + uVar5) = 0x21;
      *(undefined1 *)((uint)uVar2 + param_2 + uVar5) = 0x21;
    }
    else {
      uVar3 = (uint)uVar2;
      if (cVar1 == '\\') {
        uVar2 = uVar2 + 1;
        *(undefined1 *)(uVar3 + param_2 + uVar5) = 0x21;
        *(undefined1 *)((uint)uVar2 + param_2 + uVar5) = 0x62;
      }
      else {
        *(char *)(uVar3 + param_2 + uVar5) = cVar1;
      }
    }
    uVar4 = (short)uVar5 + 1;
    uVar5 = (uint)uVar4;
  } while (uVar4 < param_3);
  return uVar2;
}


// ---- FUN_200044f0 @ 200044f0

void __cdecl FUN_200044f0(char *param_1,int param_2)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  
  uVar4 = 0;
  uVar3 = 0xffffffff;
  uVar6 = 0;
  pcVar7 = param_1;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  do {
    uVar5 = (uint)uVar4;
    cVar1 = param_1[uVar6 + uVar5];
    if (cVar1 == '!') {
      cVar2 = (param_1 + uVar6 + uVar5)[1];
      if (cVar2 == 'b') {
        uVar6 = (uint)(ushort)((short)uVar6 + 1);
        *(undefined1 *)(uVar5 + param_2) = 0x5c;
      }
      else {
        if (cVar2 != '!') goto LAB_2000454a;
        uVar6 = (uint)(ushort)((short)uVar6 + 1);
        *(undefined1 *)(uVar5 + param_2) = 0x21;
      }
    }
    else {
LAB_2000454a:
      *(char *)(uVar5 + param_2) = cVar1;
    }
    uVar4 = uVar4 + 1;
    if ((~uVar3 - 1 & 0xffff) <= uVar6 + uVar4) {
      return;
    }
  } while( true );
}


// ---- FUN_20004570 @ 20004570

short __cdecl FUN_20004570(undefined4 *param_1,uint param_2)

{
  byte *pbVar1;
  HGLOBAL pvVar2;
  undefined1 *pMem;
  byte bVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  short sVar7;
  undefined4 *puVar8;
  
  uVar4 = (short)param_2 + 2;
  uVar5 = uVar4;
  if (uVar4 % 3 != 0) {
    uVar5 = (uVar4 - uVar4 % 3) + 3;
  }
  pvVar2 = GlobalAlloc(0x40,(uint)uVar5);
  pMem = GlobalLock(pvVar2);
  if (pMem == (undefined1 *)0x0) {
    return 0;
  }
  sVar7 = 0;
  uVar5 = 0;
  *pMem = (undefined1)param_2;
  pMem[1] = param_2._1_1_;
  puVar8 = (undefined4 *)(pMem + 2);
  for (uVar6 = (param_2 & 0xffff) >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *puVar8 = *param_1;
    param_1 = param_1 + 1;
    puVar8 = puVar8 + 1;
  }
  for (uVar6 = param_2 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined1 *)puVar8 = *(undefined1 *)param_1;
    param_1 = (undefined4 *)((int)param_1 + 1);
    puVar8 = (undefined4 *)((int)puVar8 + 1);
  }
  if (uVar4 != 0) {
    do {
      pbVar1 = pMem + uVar5;
      bVar3 = *pbVar1 >> 2;
      if ((bVar3 == 0x3c) || (bVar3 == 1)) {
        sVar7 = sVar7 + 1;
      }
      bVar3 = (*pbVar1 & 3) << 4 | pbVar1[1] >> 4;
      if ((bVar3 == 0x3c) || (bVar3 == 1)) {
        sVar7 = sVar7 + 1;
      }
      bVar3 = pbVar1[2] >> 6 | (pbVar1[1] & 0xf) << 2;
      if ((bVar3 == 0x3c) || (bVar3 == 1)) {
        sVar7 = sVar7 + 1;
      }
      bVar3 = pbVar1[2] & 0x3f;
      if ((bVar3 == 0x3c) || (bVar3 == 1)) {
        sVar7 = sVar7 + 1;
      }
      sVar7 = sVar7 + 4;
      uVar5 = uVar5 + 3;
    } while (uVar5 < uVar4);
  }
  pvVar2 = GlobalHandle(pMem);
  GlobalUnlock(pvVar2);
  pvVar2 = GlobalHandle(pMem);
  GlobalFree(pvVar2);
  return sVar7;
}


