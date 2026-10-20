// Decompiled with Ghidra from milvhook.dll
// Format: Portable Executable (PE), image base 10000000

// ---- FUN_10001000 @ 10001000

void FUN_10001000(void)

{
  return;
}


// ---- FUN_10001010 @ 10001010

void FUN_10001010(void)

{
  BOOL BVar1;
  
  if (DAT_10008000 != (HWND)0x0) {
    BVar1 = IsWindow(DAT_10008000);
    if (BVar1 != 0) goto LAB_10001039;
  }
  DAT_10008000 = FindWindowA(s_MilWinDrvHookWindowClassName_10005040,
                             s_MilWinDrvHookWindowName_MTXHook_10005020);
LAB_10001039:
  if (DAT_1000802c == 0) {
    DAT_1000802c = RegisterWindowMessageA(s_SHELLHOOK_10005060);
  }
  if (DAT_10005014 == (HANDLE)0x0) {
    DAT_10005014 = CreateMutexA((LPSECURITY_ATTRIBUTES)0x0,0,s_MilWinDrvHookMutexMessage_1000506c);
  }
  return;
}


// ---- MilWinDrvHookGetMessage @ 10001070

undefined4 MilWinDrvHookGetMessage(int param_1,WPARAM param_2,undefined4 *param_3)

{
                    /* 0x1070  200  MilWinDrvHookGetMessage */
  InterlockedIncrement(&DAT_10008044);
  FUN_10001010();
  if (((DAT_10008024 != 0) && (param_3 != (undefined4 *)0x0)) && (param_3[1] != 0x4a)) {
    DAT_100063f8 = (int)fopen(s_C__TRACKING_DBG_1000508c,&DAT_10005088);
    if (param_3 == (undefined4 *)0x0) {
      sprintf(&DAT_100061f8,s_Entering_MilWinDrvHookGetMessage_100050f4,param_1,param_2,0);
    }
    else {
      sprintf(&DAT_100061f8,s_Entering_MilWinDrvHookGetMessage_1000509c,param_1,param_2,param_3,
              *param_3,param_3[1]);
    }
    if (((FILE *)DAT_100063f8 != (FILE *)0x0) && (DAT_10008028 != 0)) {
      fprintf((FILE *)DAT_100063f8,&DAT_100061f8);
    }
    OutputDebugStringA(&DAT_100061f8);
    if (DAT_100063f8 != 0) {
      fflush((FILE *)DAT_100063f8);
    }
    fclose((FILE *)DAT_100063f8);
  }
  if (((-1 < param_1) && (param_3 != (undefined4 *)0x0)) && (param_3[1] != 0x4a)) {
    FUN_10001d80(1,(HWND)*param_3,param_3[1],param_3[2],(int *)param_3[3],0,param_3);
  }
  CallNextHookEx(DAT_10008004,param_1,param_2,(LPARAM)param_3);
  if (((DAT_10008024 != 0) && (param_3 != (undefined4 *)0x0)) && (param_3[1] != 0x4a)) {
    DAT_100063f8 = (int)fopen(s_C__TRACKING_DBG_10005138,&DAT_10005134);
    if (param_3 == (undefined4 *)0x0) {
      sprintf(&DAT_100061f8,s_Leaving_MilWinDrvHookGetMessage___1000519c,param_1,param_2,0);
    }
    else {
      sprintf(&DAT_100061f8,s_Leaving_MilWinDrvHookGetMessage___10005148,param_1,param_2,param_3,
              *param_3,param_3[1]);
    }
    if (((FILE *)DAT_100063f8 != (FILE *)0x0) && (DAT_10008028 != 0)) {
      fprintf((FILE *)DAT_100063f8,&DAT_100061f8);
    }
    OutputDebugStringA(&DAT_100061f8);
    if (DAT_100063f8 != 0) {
      fflush((FILE *)DAT_100063f8);
    }
    fclose((FILE *)DAT_100063f8);
  }
  InterlockedDecrement(&DAT_10008044);
  return 0;
}


// ---- MilWinDrvHookCallWndProc @ 100012b0

undefined4 MilWinDrvHookCallWndProc(int param_1,WPARAM param_2,undefined4 *param_3)

{
  uint uVar1;
  BOOL BVar2;
  
                    /* 0x12b0  201  MilWinDrvHookCallWndProc */
  InterlockedIncrement(&DAT_10008044);
  if ((((0 < (int)DAT_10008048) && (param_3[2] == 6)) &&
      ((*(short *)(param_3 + 1) == 1 || (*(short *)(param_3 + 1) == 2)))) &&
     ((uVar1 = GetWindowLongA((HWND)param_3[3],-0x10), (uVar1 & 0x40000000) == 0 &&
      (BVar2 = IsWindowVisible((HWND)param_3[3]), BVar2 == 1)))) {
    Sleep(DAT_10008048);
  }
  FUN_10001010();
  if (((DAT_10008024 != 0) && (param_3 != (undefined4 *)0x0)) && (param_3[2] != 0x4a)) {
    DAT_100063f8 = (int)fopen(s_C__TRACKING_DBG_100051e0,&DAT_100051dc);
    if (param_3 == (undefined4 *)0x0) {
      sprintf(&DAT_100061f8,s_Entering_MilWinDrvHookCallWndPro_10005248,param_1,param_2,0);
    }
    else {
      sprintf(&DAT_100061f8,s_Entering_MilWinDrvHookCallWndPro_100051f0,param_1,param_2,param_3,
              param_3[3],param_3[2]);
    }
    if (((FILE *)DAT_100063f8 != (FILE *)0x0) && (DAT_10008028 != 0)) {
      fprintf((FILE *)DAT_100063f8,&DAT_100061f8);
    }
    OutputDebugStringA(&DAT_100061f8);
    if (DAT_100063f8 != 0) {
      fflush((FILE *)DAT_100063f8);
    }
    fclose((FILE *)DAT_100063f8);
  }
  if (((-1 < param_1) && (param_3 != (undefined4 *)0x0)) && (param_3[2] != 0x4a)) {
    FUN_10001d80(2,(HWND)param_3[3],param_3[2],param_3[1],(int *)*param_3,0,param_3);
  }
  CallNextHookEx(DAT_10008008,param_1,param_2,(LPARAM)param_3);
  if (((DAT_10008024 != 0) && (param_3 != (undefined4 *)0x0)) && (param_3[2] != 0x4a)) {
    DAT_100063f8 = (int)fopen(s_C__TRACKING_DBG_10005290,&DAT_1000528c);
    if (param_3 == (undefined4 *)0x0) {
      sprintf(&DAT_100061f8,s_Leaving_MilWinDrvHookCallWndProc_100052f8,param_1,param_2,0);
    }
    else {
      sprintf(&DAT_100061f8,s_Leaving_MilWinDrvHookCallWndProc_100052a0,param_1,param_2,param_3,
              param_3[3],param_3[2]);
    }
    if (((FILE *)DAT_100063f8 != (FILE *)0x0) && (DAT_10008028 != 0)) {
      fprintf((FILE *)DAT_100063f8,&DAT_100061f8);
    }
    OutputDebugStringA(&DAT_100061f8);
    if (DAT_100063f8 != 0) {
      fflush((FILE *)DAT_100063f8);
    }
    fclose((FILE *)DAT_100063f8);
  }
  InterlockedDecrement(&DAT_10008044);
  return 0;
}


// ---- MilWinDrvHookCallWndProcRet @ 10001540

undefined4 MilWinDrvHookCallWndProcRet(int param_1,WPARAM param_2,int *param_3)

{
                    /* 0x1540  202  MilWinDrvHookCallWndProcRet */
  InterlockedIncrement(&DAT_10008044);
  FUN_10001010();
  if (((DAT_10008024 != 0) && (param_3 != (int *)0x0)) && (param_3[3] != 0x4a)) {
    DAT_100063f8 = (int)fopen(s_C__TRACKING_DBG_1000533c,&DAT_10005338);
    if (param_3 == (int *)0x0) {
      sprintf(&DAT_100061f8,s_Entering_MilWinDrvHookCallWndPro_100053a8,param_1,param_2,0);
    }
    else {
      sprintf(&DAT_100061f8,s_Entering_MilWinDrvHookCallWndPro_1000534c,param_1,param_2,param_3,
              param_3[4],param_3[3]);
    }
    if (((FILE *)DAT_100063f8 != (FILE *)0x0) && (DAT_10008028 != 0)) {
      fprintf((FILE *)DAT_100063f8,&DAT_100061f8);
    }
    OutputDebugStringA(&DAT_100061f8);
    if (DAT_100063f8 != 0) {
      fflush((FILE *)DAT_100063f8);
    }
    fclose((FILE *)DAT_100063f8);
  }
  if (((-1 < param_1) && (param_3 != (int *)0x0)) && (param_3[3] != 0x4a)) {
    FUN_10001d80(4,(HWND)param_3[4],param_3[3],param_3[2],(int *)param_3[1],*param_3,param_3);
  }
  CallNextHookEx(DAT_1000800c,param_1,param_2,(LPARAM)param_3);
  if (((DAT_10008024 != 0) && (param_3 != (int *)0x0)) && (param_3[3] != 0x4a)) {
    DAT_100063f8 = (int)fopen(s_C__TRACKING_DBG_100053f0,&DAT_100053ec);
    if (param_3 == (int *)0x0) {
      sprintf(&DAT_100061f8,s_Leaving_MilWinDrvHookCallWndProc_1000545c,param_1,param_2,0);
    }
    else {
      sprintf(&DAT_100061f8,s_Leaving_MilWinDrvHookCallWndProc_10005400,param_1,param_2,param_3,
              param_3[4],param_3[3]);
    }
    if (((FILE *)DAT_100063f8 != (FILE *)0x0) && (DAT_10008028 != 0)) {
      fprintf((FILE *)DAT_100063f8,&DAT_100061f8);
    }
    OutputDebugStringA(&DAT_100061f8);
    if (DAT_100063f8 != 0) {
      fflush((FILE *)DAT_100063f8);
    }
    fclose((FILE *)DAT_100063f8);
  }
  InterlockedDecrement(&DAT_10008044);
  return 0;
}


// ---- MilWinDrvHookShellProc @ 10001780

undefined4 MilWinDrvHookShellProc(uint param_1,WPARAM param_2,int *param_3)

{
  code *pcVar1;
  
                    /* 0x1780  203  MilWinDrvHookShellProc */
  InterlockedIncrement(&DAT_10008044);
  FUN_10001010();
  pcVar1 = fclose_exref;
  if (DAT_10008024 != 0) {
    DAT_100063f8 = (int)fopen(s_C__TRACKING_DBG_100054a4,&DAT_100054a0);
    sprintf(&DAT_100061f8,s_Entering_MilWinDrvHookShellProc___100054b4,param_1,param_2,param_3);
    if ((DAT_100063f8 != 0) && (DAT_10008028 != 0)) {
      fprintf((FILE *)DAT_100063f8,&DAT_100061f8);
    }
    OutputDebugStringA(&DAT_100061f8);
    if (DAT_100063f8 != 0) {
      fflush((FILE *)DAT_100063f8);
    }
    pcVar1 = fclose_exref;
    fclose((FILE *)DAT_100063f8);
  }
  if (-1 < (int)param_1) {
    FUN_10001d80(8,(HWND)0x0,param_1,param_2,param_3,0,0);
  }
  CallNextHookEx(DAT_10008010,param_1,param_2,(LPARAM)param_3);
  if (DAT_10008024 != 0) {
    DAT_100063f8 = (int)fopen(s_C__TRACKING_DBG_100054f4,&DAT_100054f0);
    sprintf(&DAT_100061f8,s_Leaving_MilWinDrvHookShellProc___10005504,param_1,param_2,param_3);
    if ((DAT_100063f8 != 0) && (DAT_10008028 != 0)) {
      fprintf((FILE *)DAT_100063f8,&DAT_100061f8);
    }
    OutputDebugStringA(&DAT_100061f8);
    if (DAT_100063f8 != 0) {
      fflush((FILE *)DAT_100063f8);
    }
    (*pcVar1)(DAT_100063f8);
  }
  InterlockedDecrement(&DAT_10008044);
  return 0;
}


// ---- MilWinDrvHookCBTProc @ 10001900

undefined4 MilWinDrvHookCBTProc(uint param_1,WPARAM param_2,int *param_3)

{
  code *pcVar1;
  
                    /* 0x1900  204  MilWinDrvHookCBTProc */
  InterlockedIncrement(&DAT_10008044);
  FUN_10001010();
  pcVar1 = fclose_exref;
  if (DAT_10008024 != 0) {
    DAT_100063f8 = (int)fopen(s_C__TRACKING_DBG_10005544,&DAT_10005540);
    sprintf(&DAT_100061f8,s_Entering_MilWinDrvHookCBTProc__H_10005554,param_1,param_2,param_3);
    if ((DAT_100063f8 != 0) && (DAT_10008028 != 0)) {
      fprintf((FILE *)DAT_100063f8,&DAT_100061f8);
    }
    OutputDebugStringA(&DAT_100061f8);
    if (DAT_100063f8 != 0) {
      fflush((FILE *)DAT_100063f8);
    }
    pcVar1 = fclose_exref;
    fclose((FILE *)DAT_100063f8);
  }
  if (-1 < (int)param_1) {
    FUN_10001d80(0x10,(HWND)0x0,param_1,param_2,param_3,0,0);
  }
  CallNextHookEx(DAT_10008014,param_1,param_2,(LPARAM)param_3);
  if (DAT_10008024 != 0) {
    DAT_100063f8 = (int)fopen(s_C__TRACKING_DBG_10005594,&DAT_10005590);
    sprintf(&DAT_100061f8,s_Leaving_MilWinDrvHookCBTProc__Hk_100055a4,param_1,param_2,param_3);
    if ((DAT_100063f8 != 0) && (DAT_10008028 != 0)) {
      fprintf((FILE *)DAT_100063f8,&DAT_100061f8);
    }
    OutputDebugStringA(&DAT_100061f8);
    if (DAT_100063f8 != 0) {
      fflush((FILE *)DAT_100063f8);
    }
    (*pcVar1)(DAT_100063f8);
  }
  InterlockedDecrement(&DAT_10008044);
  return 0;
}


// ---- MilWinDrvHookJournalRecordProc @ 10001a80

undefined4 MilWinDrvHookJournalRecordProc(uint param_1,WPARAM param_2,int *param_3)

{
  code *pcVar1;
  
                    /* 0x1a80  205  MilWinDrvHookJournalRecordProc */
  InterlockedIncrement(&DAT_10008044);
  FUN_10001010();
  pcVar1 = fclose_exref;
  if (DAT_10008024 != 0) {
    DAT_100063f8 = (int)fopen(s_C__TRACKING_DBG_100055e0,&DAT_100055dc);
    sprintf(&DAT_100061f8,s_Entering_MilWinDrvHookJournalRec_100055f0,param_1,param_2,param_3);
    if ((DAT_100063f8 != 0) && (DAT_10008028 != 0)) {
      fprintf((FILE *)DAT_100063f8,&DAT_100061f8);
    }
    OutputDebugStringA(&DAT_100061f8);
    if (DAT_100063f8 != 0) {
      fflush((FILE *)DAT_100063f8);
    }
    pcVar1 = fclose_exref;
    fclose((FILE *)DAT_100063f8);
  }
  if (-1 < (int)param_1) {
    FUN_10001d80(0x20,(HWND)0x0,param_1,param_2,param_3,0,0);
  }
  CallNextHookEx(DAT_10008018,param_1,param_2,(LPARAM)param_3);
  if (DAT_10008024 != 0) {
    DAT_100063f8 = (int)fopen(s_C__TRACKING_DBG_10005638,&DAT_10005634);
    sprintf(&DAT_100061f8,s_Leaving_MilWinDrvHookJournalReco_10005648,param_1,param_2,param_3);
    if ((DAT_100063f8 != 0) && (DAT_10008028 != 0)) {
      fprintf((FILE *)DAT_100063f8,&DAT_100061f8);
    }
    OutputDebugStringA(&DAT_100061f8);
    if (DAT_100063f8 != 0) {
      fflush((FILE *)DAT_100063f8);
    }
    (*pcVar1)(DAT_100063f8);
  }
  InterlockedDecrement(&DAT_10008044);
  return 0;
}


// ---- MilWinDrvHookKeyboardProc @ 10001c00

undefined4 MilWinDrvHookKeyboardProc(uint param_1,WPARAM param_2,int *param_3)

{
  code *pcVar1;
  
                    /* 0x1c00  206  MilWinDrvHookKeyboardProc */
  InterlockedIncrement(&DAT_10008044);
  FUN_10001010();
  pcVar1 = fclose_exref;
  if (DAT_10008024 != 0) {
    DAT_100063f8 = (int)fopen(s_C__TRACKING_DBG_10005690,&DAT_1000568c);
    sprintf(&DAT_100061f8,s_Entering_MilWinDrvHookKeyboardPr_100056a0,param_1,param_2,param_3);
    if ((DAT_100063f8 != 0) && (DAT_10008028 != 0)) {
      fprintf((FILE *)DAT_100063f8,&DAT_100061f8);
    }
    OutputDebugStringA(&DAT_100061f8);
    if (DAT_100063f8 != 0) {
      fflush((FILE *)DAT_100063f8);
    }
    pcVar1 = fclose_exref;
    fclose((FILE *)DAT_100063f8);
  }
  if (-1 < (int)param_1) {
    FUN_10001d80(0x40,(HWND)0x0,param_1,param_2,param_3,0,0);
  }
  CallNextHookEx(DAT_1000801c,param_1,param_2,(LPARAM)param_3);
  if (DAT_10008024 != 0) {
    DAT_100063f8 = (int)fopen(s_C__TRACKING_DBG_100056e4,&DAT_100056e0);
    sprintf(&DAT_100061f8,s_Leaving_MilWinDrvHookKeyboardPro_100056f4,param_1,param_2,param_3);
    if ((DAT_100063f8 != 0) && (DAT_10008028 != 0)) {
      fprintf((FILE *)DAT_100063f8,&DAT_100061f8);
    }
    OutputDebugStringA(&DAT_100061f8);
    if (DAT_100063f8 != 0) {
      fflush((FILE *)DAT_100063f8);
    }
    (*pcVar1)(DAT_100063f8);
  }
  InterlockedDecrement(&DAT_10008044);
  return 0;
}


// ---- FUN_10001d80 @ 10001d80

undefined4
FUN_10001d80(uint param_1,HWND param_2,uint param_3,int param_4,int *param_5,int param_6,
            undefined4 param_7)

{
  int *lParam;
  HGLOBAL pvVar1;
  int *pMem;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  bool bVar5;
  
  uVar3 = 0;
  switch(param_1) {
  case 1:
  case 2:
  case 4:
    if ((((param_3 == 0x46) || (param_3 == 0x47)) || (param_3 == 0x115)) || (param_3 == 0x114)) {
      bVar5 = DAT_10008038 == 0;
    }
    else if (((param_3 < 0xc000) || (0xffff < param_3)) || (param_3 != DAT_1000802c)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    break;
  default:
    bVar5 = false;
    break;
  case 8:
    bVar5 = false;
    break;
  case 0x10:
    bVar5 = false;
    break;
  case 0x20:
    bVar5 = false;
    break;
  case 0x40:
    bVar5 = true;
  }
  if ((DAT_10008020 == 0) && (DAT_10008038 == 0)) {
    bVar5 = true;
  }
  if (DAT_10008034 == 0) {
    bVar5 = false;
  }
  if (DAT_10008024 != 0) {
    DAT_100063f8 = (int)fopen(s_C__TRACKING_DBG_10005738,&DAT_10005734);
    sprintf(&DAT_100061f8,s_Entering_MilWinDrvHookProcMultiP_10005748,param_1,param_2,param_3,
            param_4,param_5,param_6,param_7);
    if ((DAT_100063f8 != 0) && (DAT_10008028 != 0)) {
      fprintf((FILE *)DAT_100063f8,&DAT_100061f8);
    }
    OutputDebugStringA(&DAT_100061f8);
    if (DAT_100063f8 != 0) {
      fflush((FILE *)DAT_100063f8);
    }
    fclose((FILE *)DAT_100063f8);
  }
  if ((DAT_10008000 == (HWND)0x0) || (param_2 == DAT_10008000)) goto LAB_10002397;
  if ((DAT_10008018 != 0) && (((param_1 & 10) != 0 && (param_3 == 0x4b)))) {
    SendMessageA(DAT_10008000,0x401,0,0);
  }
  if (bVar5) {
    pvVar1 = GlobalAlloc(0x42,0x118);
    pMem = GlobalLock(pvVar1);
    lParam = pMem + 0x43;
    if (((pMem == (int *)0x0) || (lParam == (int *)0x0)) || (DAT_10008000 == (HWND)0x0)) {
      if (DAT_10008024 != 0) {
        DAT_100063f8 = (int)fopen(s_C__TRACKING_DBG_10005958,&DAT_10005954);
        sprintf(&DAT_100061f8,s_Executing_MilWinDrvHookProcMulti_10005968);
        if ((DAT_100063f8 != 0) && (DAT_10008028 != 0)) {
          fprintf((FILE *)DAT_100063f8,&DAT_100061f8);
        }
        OutputDebugStringA(&DAT_100061f8);
        if (DAT_100063f8 != 0) {
          fflush((FILE *)DAT_100063f8);
        }
        fclose((FILE *)DAT_100063f8);
      }
    }
    else {
      *lParam = 0;
      pMem[0x44] = 0;
      pMem[0x45] = 0;
      *lParam = 0;
      pMem[0x44] = 0x10c;
      pMem[0x45] = (int)pMem;
      piVar4 = pMem;
      for (iVar2 = 0x43; iVar2 != 0; iVar2 = iVar2 + -1) {
        *piVar4 = 0;
        piVar4 = piVar4 + 1;
      }
      *pMem = *pMem + 1;
      pMem[1] = param_1;
      pMem[2] = (int)param_2;
      pMem[0x23] = param_3;
      pMem[0x24] = param_4;
      pMem[0x25] = (int)param_5;
      pMem[0x26] = param_6;
      if ((((param_1 & 7) != 0) && (0x45 < param_3)) && (param_3 < 0x48)) {
        if (param_5 == (int *)0x0) {
          if (DAT_10008024 != 0) {
            DAT_100063f8 = (int)fopen(s_C__TRACKING_DBG_1000583c,&DAT_10005838);
            sprintf(&DAT_100061f8,s_Copying_MilWinDrvHookProcMultiPr_1000584c);
            if ((DAT_100063f8 != 0) && (DAT_10008028 != 0)) {
              fprintf((FILE *)DAT_100063f8,&DAT_100061f8);
            }
            OutputDebugStringA(&DAT_100061f8);
            goto joined_r0x10002136;
          }
        }
        else {
          pMem[0x27] = (int)param_2;
          pMem[0x28] = param_5[1];
          pMem[0x29] = param_5[2];
          pMem[0x2a] = param_5[3];
          pMem[0x2b] = param_5[4];
          pMem[0x2c] = param_5[5];
          pMem[0x2d] = param_5[6];
          if (DAT_10008024 != 0) {
            DAT_100063f8 = (int)fopen(s_C__TRACKING_DBG_100057bc,&DAT_100057b8);
            sprintf(&DAT_100061f8,s_Copying_MilWinDrvHookProcMultiPr_100057cc,pMem[0x27],pMem[0x28],
                    pMem[0x29],pMem[0x2a],pMem[0x2b],pMem[0x2c],pMem[0x2d]);
            if ((DAT_100063f8 != 0) && (DAT_10008028 != 0)) {
              fprintf((FILE *)DAT_100063f8,&DAT_100061f8);
            }
            OutputDebugStringA(&DAT_100061f8);
joined_r0x10002136:
            if ((FILE *)DAT_100063f8 != (FILE *)0x0) {
              fflush((FILE *)DAT_100063f8);
            }
            fclose((FILE *)DAT_100063f8);
          }
        }
      }
      if ((((param_1 & 0x20) != 0) && (param_3 == 0)) && (param_5 != (int *)0x0)) {
        pMem[0x2e] = *param_5;
        pMem[0x2f] = param_5[1];
        pMem[0x30] = param_5[2];
        pMem[0x31] = param_5[3];
        pMem[0x32] = param_5[4];
      }
      if (DAT_10008024 != 0) {
        DAT_100063f8 = (int)fopen(s_C__TRACKING_DBG_10005890,&DAT_1000588c);
        sprintf(&DAT_100061f8,s_Sending_MilWinDrvHookHiddenWindo_100058a0,DAT_10008000,param_2,
                lParam);
        if ((DAT_100063f8 != 0) && (DAT_10008028 != 0)) {
          fprintf((FILE *)DAT_100063f8,&DAT_100061f8);
        }
        OutputDebugStringA(&DAT_100061f8);
        sprintf(&DAT_100061f8,s_Sending_MilWinDrvHookHiddenWindo_100058e8,*pMem,pMem[1],pMem[2],
                pMem[0x23],pMem[0x24],pMem[0x25],pMem[0x26]);
        if ((DAT_100063f8 != 0) && (DAT_10008028 != 0)) {
          fprintf((FILE *)DAT_100063f8,&DAT_100061f8);
        }
        OutputDebugStringA(&DAT_100061f8);
        if (DAT_100063f8 != 0) {
          fflush((FILE *)DAT_100063f8);
        }
        fclose((FILE *)DAT_100063f8);
      }
      SendMessageA(DAT_10008000,0x4a,(WPARAM)param_2,(LPARAM)lParam);
      *pMem = *pMem + -1;
    }
    if (pMem != (int *)0x0) {
      pvVar1 = GlobalHandle(pMem);
      GlobalUnlock(pvVar1);
      pvVar1 = GlobalHandle(pMem);
      GlobalFree(pvVar1);
    }
  }
  if (((((DAT_10008018 == -1) && ((param_1 & 3) != 0)) && (0xbfff < param_3)) &&
      ((param_3 < 0x10000 && (param_3 == DAT_1000802c)))) && ((char)param_4 == '\x04')) {
    SendMessageA(DAT_10008000,0x402,0,0);
  }
  uVar3 = 1;
LAB_10002397:
  if (DAT_10008024 != 0) {
    DAT_100063f8 = (int)fopen(s_C__TRACKING_DBG_100059d8,&DAT_100059d4);
    sprintf(&DAT_100061f8,s_Leaving_MilWinDrvHookProcMultiPr_100059e8,param_1,param_2,param_3,
            param_4,param_5,param_6,param_7);
    if ((DAT_100063f8 != 0) && (DAT_10008028 != 0)) {
      fprintf((FILE *)DAT_100063f8,&DAT_100061f8);
    }
    OutputDebugStringA(&DAT_100061f8);
    if (DAT_100063f8 != 0) {
      fflush((FILE *)DAT_100063f8);
    }
    fclose((FILE *)DAT_100063f8);
  }
  return uVar3;
}


// ---- MilWinDrvHookHiddenWindowProc @ 100024b0

LRESULT MilWinDrvHookHiddenWindowProc(HWND param_1,uint param_2,WPARAM param_3,int param_4)

{
  undefined4 *lp;
  LRESULT LVar1;
  BOOL BVar2;
  HHOOK pHVar3;
  
                    /* 0x24b0  300  MilWinDrvHookHiddenWindowProc */
  if (DAT_10008024 != 0) {
    DAT_100063f8 = (int)fopen(s_C__TRACKING_DBG_10005a58,&DAT_10005a54);
    sprintf(&DAT_100061f8,s_Entering_MilWinDrvHookHiddenWind_10005a68,param_1,param_2,param_3,
            param_4);
    if ((DAT_100063f8 != 0) && (DAT_10008028 != 0)) {
      fprintf((FILE *)DAT_100063f8,&DAT_100061f8);
    }
    OutputDebugStringA(&DAT_100061f8);
    if (DAT_100063f8 != 0) {
      fflush((FILE *)DAT_100063f8);
    }
    fclose((FILE *)DAT_100063f8);
  }
  if (0x4a < param_2) {
    if (param_2 == 0x82) {
      DAT_10008034 = 0;
      DAT_10008000 = 0;
      LVar1 = DefWindowProcA(param_1,0x82,param_3,param_4);
      return LVar1;
    }
    if (param_2 == 0x401) {
      if (DAT_10008024 != 0) {
        DAT_100063f8 = (int)fopen(s_C__TRACKING_DBG_10005ce8,&DAT_10005ce4);
        sprintf(&DAT_100061f8,s_RECEIVED_WM_JOURNALRECORDPROCKIL_10005cf8);
        if ((DAT_100063f8 != 0) && (DAT_10008028 != 0)) {
          fprintf((FILE *)DAT_100063f8,&DAT_100061f8);
        }
        OutputDebugStringA(&DAT_100061f8);
        if (DAT_100063f8 != 0) {
          fflush((FILE *)DAT_100063f8);
        }
        fclose((FILE *)DAT_100063f8);
      }
      DAT_10008014 = (HHOOK)0xffffffff;
      LVar1 = DefWindowProcA(param_1,0x401,param_3,param_4);
      return LVar1;
    }
    if (param_2 == 0x402) {
      pHVar3 = SetWindowsHookExA(0,MilWinDrvHookJournalRecordProc,DAT_10005010,0);
      if (pHVar3 == (HHOOK)0x0) {
        if (DAT_10008024 != 0) {
          DAT_100063f8 = (int)fopen(s_C__TRACKING_DBG_10005d6c,&DAT_10005d68);
          sprintf(&DAT_100061f8,s_RECEIVED_WM_RESTOREJOURNALRECORD_10005d7c);
          if ((DAT_100063f8 != 0) && (DAT_10008028 != 0)) {
            fprintf((FILE *)DAT_100063f8,&DAT_100061f8);
          }
          OutputDebugStringA(&DAT_100061f8);
          if (DAT_100063f8 != 0) {
            fflush((FILE *)DAT_100063f8);
          }
          fclose((FILE *)DAT_100063f8);
        }
        DAT_10008014 = (HHOOK)0x0;
        pHVar3 = DAT_10008014;
      }
      else if (DAT_10008024 != 0) {
        DAT_100063f8 = (int)fopen(s_C__TRACKING_DBG_10005d24,&DAT_10005d20);
        sprintf(&DAT_100061f8,s_RECEIVED_WM_RESTOREJOURNALRECORD_10005d34);
        if ((DAT_100063f8 != 0) && (DAT_10008028 != 0)) {
          fprintf((FILE *)DAT_100063f8,&DAT_100061f8);
        }
        OutputDebugStringA(&DAT_100061f8);
        if (DAT_100063f8 != 0) {
          fflush((FILE *)DAT_100063f8);
        }
        fclose((FILE *)DAT_100063f8);
      }
      DAT_10008014 = pHVar3;
      LVar1 = DefWindowProcA(param_1,0x402,param_3,param_4);
      return LVar1;
    }
LAB_1000259b:
    LVar1 = DefWindowProcA(param_1,param_2,param_3,param_4);
    return LVar1;
  }
  if (param_2 != 0x4a) {
    if (param_2 == 2) {
      PostQuitMessage(0);
      return 0;
    }
    goto LAB_1000259b;
  }
  lp = *(undefined4 **)(param_4 + 8);
  if (DAT_10008024 != 0) {
    DAT_100063f8 = (int)fopen(s_C__TRACKING_DBG_10005ac0,&DAT_10005abc);
    sprintf(&DAT_100061f8,s_Executing_MilWinDrvHookHiddenWin_10005ad0,param_1,param_3,param_4,
            param_4,lp);
    if ((DAT_100063f8 != 0) && (DAT_10008028 != 0)) {
      fprintf((FILE *)DAT_100063f8,&DAT_100061f8);
    }
    OutputDebugStringA(&DAT_100061f8);
    sprintf(&DAT_100061f8,s_Executing_MilWinDrvHookHiddenWin_10005b30,*lp,lp[1],lp[2],lp[0x23],
            lp[0x24],lp[0x25],lp[0x26]);
    if ((DAT_100063f8 != 0) && (DAT_10008028 != 0)) {
      fprintf((FILE *)DAT_100063f8,&DAT_100061f8);
    }
    OutputDebugStringA(&DAT_100061f8);
    if (DAT_100063f8 != 0) {
      fflush((FILE *)DAT_100063f8);
    }
    fclose((FILE *)DAT_100063f8);
  }
  if (((lp[0x23] == 0x46) || (lp[0x23] == 0x47)) && (DAT_10008024 != 0)) {
    DAT_100063f8 = (int)fopen(s_C__TRACKING_DBG_10005ba4,&DAT_10005ba0);
    sprintf(&DAT_100061f8,s_Reveiving_MilWinDrvHookHiddenWin_10005bb4,lp[0x27],lp[0x28],lp[0x29],
            lp[0x2a],lp[0x2b],lp[0x2c],lp[0x2d]);
    if ((DAT_100063f8 != 0) && (DAT_10008028 != 0)) {
      fprintf((FILE *)DAT_100063f8,&DAT_100061f8);
    }
    OutputDebugStringA(&DAT_100061f8);
    if (DAT_100063f8 != 0) {
      fflush((FILE *)DAT_100063f8);
    }
    fclose((FILE *)DAT_100063f8);
  }
  if ((param_4 == 0) || (lp == (undefined4 *)0x0)) {
    if (DAT_10008024 != 0) {
      DAT_100063f8 = (int)fopen(s_C__TRACKING_DBG_10005c28,&DAT_10005c24);
      sprintf(&DAT_100061f8,s_Receiving_MilWinDrvHookHiddenWin_10005c38);
      if ((DAT_100063f8 != 0) && (DAT_10008028 != 0)) {
        fprintf((FILE *)DAT_100063f8,&DAT_100061f8);
      }
      OutputDebugStringA(&DAT_100061f8);
      if (DAT_100063f8 != 0) {
        fflush((FILE *)DAT_100063f8);
      }
      fclose((FILE *)DAT_100063f8);
    }
    if (lp == (undefined4 *)0x0) goto LAB_1000283a;
  }
  BVar2 = IsBadReadPtr(lp,0x10c);
  if (BVar2 == 0) {
    FUN_10003700(lp[1],lp);
  }
LAB_1000283a:
  if (DAT_10008024 != 0) {
    DAT_100063f8 = (int)fopen(s_C__TRACKING_DBG_10005c78,&DAT_10005c74);
    sprintf(&DAT_100061f8,s_Leaving_MilWinDrvHookHiddenWindo_10005c88,param_1,param_3,param_4,
            param_4,lp);
    if ((DAT_100063f8 != 0) && (DAT_10008028 != 0)) {
      fprintf((FILE *)DAT_100063f8,&DAT_100061f8);
    }
    OutputDebugStringA(&DAT_100061f8);
    if (DAT_100063f8 != 0) {
      fflush((FILE *)DAT_100063f8);
    }
    fclose((FILE *)DAT_100063f8);
  }
  return 1;
}


// ---- MilWinDrvHookToSystem @ 10002bd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * __cdecl
MilWinDrvHookToSystem
          (uint param_1,HINSTANCE param_2,uint param_3,uint param_4,uint param_5,uint param_6,
          uint param_7,uint param_8)

{
  ATOM AVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  UINT UVar4;
  DWORD DVar5;
  HWND pHVar6;
  HGLOBAL pvVar7;
  code *pcVar8;
  uint *pMem;
  code *pcVar9;
  DWORD local_34;
  uint local_30;
  uint local_2c;
  WNDCLASSA local_28;
  
                    /* 0x2bd0  100  MilWinDrvHookToSystem */
  pMem = (uint *)0x0;
  if (DAT_10005014 == (HANDLE)0x0) {
    DAT_10005014 = CreateMutexA((LPSECURITY_ATTRIBUTES)0x0,0,s_MilWinDrvHookMutexMessage_10005de8);
    puVar2 = &DAT_10006600;
    do {
      *puVar2 = 0;
      puVar3 = puVar2 + 2;
      puVar2[1] = 0;
      puVar2 = puVar3;
    } while (puVar3 < &DAT_10006700);
    UVar4 = GetProfileIntA(s_milvhook_dll_10005e18,s_DebugMtxBreakActive_10005e04,0);
    if (UVar4 != 0) {
      _DAT_1000501c = _DAT_1000501c | 0x1000;
    }
  }
  pcVar8 = OutputDebugStringA_exref;
  pcVar9 = sprintf_exref;
  if (DAT_10008024 != 0) {
    DAT_100063f8 = (int)fopen(s_C__TRACKING_DBG_10005e2c,&DAT_10005e28);
    pcVar9 = sprintf_exref;
    sprintf(&DAT_100061f8,s_Starting_MilWinDrvHookToSystem___10005e3c,param_1,param_3,param_4,
            param_5,param_6,param_8);
    if ((DAT_100063f8 != 0) && (DAT_10008028 != 0)) {
      fprintf((FILE *)DAT_100063f8,&DAT_100061f8);
    }
    pcVar8 = OutputDebugStringA_exref;
    OutputDebugStringA(&DAT_100061f8);
    if (DAT_100063f8 != 0) {
      fflush((FILE *)DAT_100063f8);
    }
    fclose((FILE *)DAT_100063f8);
  }
  DVar5 = WaitForSingleObject(DAT_10005014,0xffffffff);
  if (DVar5 == 0) {
    if ((((((DAT_10008004 == (HHOOK)0x0) && (DAT_10008008 == (HHOOK)0x0)) &&
          (DAT_1000800c == (HHOOK)0x0)) &&
         ((DAT_10008010 == (HHOOK)0x0 && (DAT_10008014 == (HHOOK)0x0)))) &&
        ((DAT_10008018 == (HHOOK)0x0 && (DAT_1000801c == (HHOOK)0x0)))) || (DAT_10005018 != 0)) {
      if (DAT_10008000 == 0) {
        local_34 = 0x103;
        local_28.hCursor = (HCURSOR)0x0;
        local_28.hIcon = (HICON)0x0;
        local_28.lpszMenuName = (LPCSTR)0x0;
        local_28.lpszClassName = s_MilWinDrvHookWindowClassName_10005ef0;
        local_28.hbrBackground = (HBRUSH)0x6;
        local_28.hInstance = param_2;
        local_28.style = 0;
        local_28.lpfnWndProc = MilWinDrvHookHiddenWindowProc;
        local_28.cbWndExtra = 0;
        local_28.cbClsExtra = 0;
        AVar1 = RegisterClassA(&local_28);
        if (AVar1 == 0) {
          UnregisterClassA(local_28.lpszClassName,param_2);
          AVar1 = RegisterClassA(&local_28);
          if (AVar1 == 0) goto LAB_100030e8;
        }
        DAT_1000803c = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,
                                    (LPTHREAD_START_ROUTINE)&LAB_10002b00,param_2,0xf0000,
                                    &DAT_10008040);
        if (DAT_1000803c == (HANDLE)0x0) goto LAB_100030e8;
        do {
          if (local_34 != 0x103) break;
          Sleep(100);
          GetExitCodeThread(DAT_1000803c,&local_34);
          pHVar6 = FindWindowA(s_MilWinDrvHookWindowClassName_10005f30,
                               s_MilWinDrvHookWindowName_MTXHook_10005f10);
        } while (pHVar6 == (HWND)0x0);
      }
      pvVar7 = GlobalAlloc(0x42,0x28);
      pMem = GlobalLock(pvVar7);
      if (pMem != (uint *)0x0) {
        local_28.style = param_1 & 1;
        if ((local_28.style != 0) && (DAT_10008004 == (HHOOK)0x0)) {
          DAT_10008004 = SetWindowsHookExA(3,MilWinDrvHookGetMessage,DAT_10005010,0);
          DAT_10005018 = 1;
        }
        local_34 = param_1 & 2;
        if ((local_34 != 0) && (DAT_10008008 == (HHOOK)0x0)) {
          DAT_10008008 = SetWindowsHookExA(4,MilWinDrvHookCallWndProc,DAT_10005010,0);
          DAT_10005018 = 1;
        }
        local_30 = param_1 & 4;
        if ((local_30 != 0) && (DAT_1000800c == (HHOOK)0x0)) {
          DAT_1000800c = SetWindowsHookExA(0xc,MilWinDrvHookCallWndProcRet,DAT_10005010,0);
          DAT_10005018 = 1;
        }
        local_2c = param_1 & 8;
        if ((local_2c != 0) && (DAT_10008010 == (HHOOK)0x0)) {
          DAT_10008010 = SetWindowsHookExA(10,MilWinDrvHookShellProc,DAT_10005010,0);
          DAT_10005018 = 1;
        }
        if (((param_1 & 0x10) != 0) && (DAT_10008014 == (HHOOK)0x0)) {
          DAT_10008014 = SetWindowsHookExA(5,MilWinDrvHookCBTProc,DAT_10005010,0);
          DAT_10005018 = 1;
        }
        if (((param_1 & 0x20) != 0) && (DAT_10008018 == (HHOOK)0x0)) {
          DAT_10008018 = SetWindowsHookExA(0,MilWinDrvHookJournalRecordProc,DAT_10005010,0);
          DAT_10005018 = 1;
        }
        if (((param_1 & 0x40) != 0) && (DAT_1000801c == (HHOOK)0x0)) {
          DAT_1000801c = SetWindowsHookExA(2,MilWinDrvHookKeyboardProc,DAT_10005010,0);
          DAT_10005018 = 1;
        }
        if (((((local_28.style == 0) || (DAT_10008004 == (HHOOK)0x0)) &&
             ((local_34 == 0 || (DAT_10008008 == (HHOOK)0x0)))) &&
            (((local_30 == 0 || (DAT_1000800c == (HHOOK)0x0)) &&
             ((local_2c == 0 || (DAT_10008010 == (HHOOK)0x0)))))) &&
           (((((param_1 & 0x10) == 0 || (DAT_10008014 == (HHOOK)0x0)) &&
             (((param_1 & 0x20) == 0 || (DAT_10008018 == (HHOOK)0x0)))) &&
            (((param_1 & 0x40) == 0 || (DAT_1000801c == (HHOOK)0x0)))))) {
          pvVar7 = GlobalHandle(pMem);
          GlobalUnlock(pvVar7);
          pvVar7 = GlobalHandle(pMem);
          pMem = (uint *)0x0;
          GlobalFree(pvVar7);
        }
        else {
          *pMem = param_1;
          pMem[1] = param_3;
          pMem[2] = param_4;
          pMem[3] = param_5;
          pMem[4] = param_6;
          pMem[5] = 0;
          pMem[6] = param_8;
          pMem[7] = param_7;
          FUN_10003660((int)pMem);
        }
      }
    }
  }
  else if (DVar5 == 0x80) {
    (*pcVar9)(&DAT_100061f8,s_MilWinDrvHookToSystem_Mutex__WAI_10005e98);
    (*pcVar8)(&DAT_100061f8);
  }
  else if (DVar5 == 0x102) {
    (*pcVar9)(&DAT_100061f8,s_MilWinDrvHookToSystem_Mutex__WAI_10005ec4);
    (*pcVar8)(&DAT_100061f8);
  }
LAB_100030e8:
  ReleaseMutex(DAT_10005014);
  if (pMem == (uint *)0x0) {
    FUN_100034d0();
  }
  return pMem;
}


// ---- MilWinDrvUnHookToSystem @ 10003110

void __cdecl MilWinDrvUnHookToSystem(LPCVOID param_1)

{
  DWORD DVar1;
  HGLOBAL pvVar2;
  code *pcVar3;
  code *pcVar4;
  
                    /* 0x3110  101  MilWinDrvUnHookToSystem */
  pcVar3 = OutputDebugStringA_exref;
  pcVar4 = sprintf_exref;
  if (DAT_10008024 != 0) {
    DAT_100063f8 = (int)fopen(s_C__TRACKING_DBG_10005f54,&DAT_10005f50);
    pcVar4 = sprintf_exref;
    sprintf(&DAT_100061f8,s_Entering_MilWinDrvUnHookToSystem_10005f64,param_1);
    if ((DAT_100063f8 != 0) && (DAT_10008028 != 0)) {
      fprintf((FILE *)DAT_100063f8,&DAT_100061f8);
    }
    pcVar3 = OutputDebugStringA_exref;
    OutputDebugStringA(&DAT_100061f8);
    if (DAT_100063f8 != 0) {
      fflush((FILE *)DAT_100063f8);
    }
    fclose((FILE *)DAT_100063f8);
  }
  if (param_1 != (LPCVOID)0x0) {
    DVar1 = WaitForSingleObject(DAT_10005014,0xffffffff);
    if (DVar1 == 0) {
      FUN_100036b0((int)param_1);
      FUN_100034d0();
      pvVar2 = GlobalHandle(param_1);
      GlobalUnlock(pvVar2);
      pvVar2 = GlobalHandle(param_1);
      GlobalFree(pvVar2);
      ReleaseMutex(DAT_10005014);
    }
    else {
      if (DVar1 == 0x80) {
        (*pcVar4)(&DAT_100061f8,s_MilWinDrvUnHookToSystem_Mutex__W_10005f94);
        (*pcVar3)(&DAT_100061f8);
        return;
      }
      if (DVar1 == 0x102) {
        (*pcVar4)(&DAT_100061f8,s_MilWinDrvUnHookToSystem_Mutex__W_10005fc4);
        (*pcVar3)(&DAT_100061f8);
        return;
      }
    }
  }
  return;
}


// ---- MilWinDrvHookControl @ 10003260

void __cdecl MilWinDrvHookControl(int param_1,int param_2,int param_3,int param_4)

{
  DWORD DVar1;
  BOOL BVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
                    /* 0x3260  102  MilWinDrvHookControl */
  if (DAT_10008024 != 0) {
    DAT_100063f8 = (int)fopen(s_C__TRACKING_DBG_10005ff8,&DAT_10005ff4);
    sprintf(&DAT_100061f8,s_Entering_MilWinDrvHookControl__P_10006008,param_1,param_2,param_3);
    if ((DAT_100063f8 != 0) && (DAT_10008028 != 0)) {
      fprintf((FILE *)DAT_100063f8,&DAT_100061f8);
    }
    OutputDebugStringA(&DAT_100061f8);
    if (DAT_100063f8 != 0) {
      fflush((FILE *)DAT_100063f8);
    }
    fclose((FILE *)DAT_100063f8);
  }
  if ((param_4 == 0) || (DVar1 = WaitForSingleObject(DAT_10005014,0xffffffff), DVar1 == 0)) {
    if ((DAT_10008000 == (HWND)0x0) || (BVar2 = IsWindow(DAT_10008000), BVar2 == 0)) {
      DAT_10008000 = FindWindowA(s_MilWinDrvHookWindowClassName_100060c0,
                                 s_MilWinDrvHookWindowName_MTXHook_100060a0);
    }
    if (DAT_10008000 != (HWND)0x0) {
      if (param_2 == 1) {
        DAT_10008020 = param_3;
      }
      else if (param_2 == 2) {
        DAT_10008024 = param_3;
      }
      else if (param_2 == 3) {
        DAT_10008028 = param_3;
      }
      else if (param_2 == 4) {
        if (param_1 != 0) {
          *(int *)(param_1 + 4) = param_3;
        }
      }
      else if (param_2 == 5) {
        if (param_1 != 0) {
          *(int *)(param_1 + 0x1c) = param_3;
        }
      }
      else if (param_2 == 6) {
        DAT_10008034 = param_3;
      }
      else if (param_2 == 7) {
        DAT_10008038 = param_3;
      }
      else if (param_2 == 8) {
        iVar5 = -1;
        DVar1 = GetCurrentProcessId();
        iVar4 = 0;
        do {
          if (DVar1 == (&DAT_10006604)[iVar4 * 2]) break;
          if ((iVar5 < 0) && ((&DAT_10006604)[iVar4 * 2] == 0)) {
            iVar5 = iVar4;
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < 0x20);
        if (iVar4 < 0x20) {
          (&DAT_10006600)[iVar4 * 2] = param_3;
          if (param_3 == 0) {
            (&DAT_10006604)[iVar4 * 2] = 0;
          }
        }
        else if (iVar5 < 0x20) {
          (&DAT_10006600)[iVar5 * 2] = param_3;
          (&DAT_10006604)[iVar5 * 2] = DVar1;
        }
        DAT_10008048 = 0;
        piVar3 = &DAT_10006600;
        do {
          if (DAT_10008048 < *piVar3) {
            DAT_10008048 = *piVar3;
          }
          piVar3 = piVar3 + 2;
        } while (piVar3 < &DAT_10006700);
      }
    }
    if (param_4 != 0) {
      ReleaseMutex(DAT_10005014);
    }
  }
  else {
    if (DVar1 == 0x80) {
      sprintf(&DAT_100061f8,s_MilWinDrvHookControl_Mutex__WAIT_10006048);
      OutputDebugStringA(&DAT_100061f8);
      return;
    }
    if (DVar1 == 0x102) {
      sprintf(&DAT_100061f8,s_MilWinDrvHookControl_Mutex__WAIT_10006074);
      OutputDebugStringA(&DAT_100061f8);
      return;
    }
  }
  return;
}


// ---- FUN_100034d0 @ 100034d0

void FUN_100034d0(void)

{
  uint uVar1;
  
  if (DAT_10008030 == 0) {
    DAT_10008034 = 0;
    if (0 < DAT_10008044) {
      Sleep(0x14);
    }
    if (DAT_10008004 != (HHOOK)0x0) {
      UnhookWindowsHookEx(DAT_10008004);
      DAT_10008004 = (HHOOK)0x0;
      DAT_10005018 = 0;
    }
    if (DAT_10008008 != (HHOOK)0x0) {
      UnhookWindowsHookEx(DAT_10008008);
      DAT_10008008 = (HHOOK)0x0;
      DAT_10005018 = 0;
    }
    if (DAT_1000800c != (HHOOK)0x0) {
      UnhookWindowsHookEx(DAT_1000800c);
      DAT_1000800c = (HHOOK)0x0;
      DAT_10005018 = 0;
    }
    if (DAT_10008010 != (HHOOK)0x0) {
      UnhookWindowsHookEx(DAT_10008010);
      DAT_10008010 = (HHOOK)0x0;
      DAT_10005018 = 0;
    }
    if (DAT_10008014 != (HHOOK)0x0) {
      UnhookWindowsHookEx(DAT_10008014);
      DAT_10008014 = (HHOOK)0x0;
      DAT_10005018 = 0;
    }
    if (DAT_10008018 != (HHOOK)0x0) {
      UnhookWindowsHookEx(DAT_10008018);
      DAT_10008018 = (HHOOK)0x0;
      DAT_10005018 = 0;
    }
    if (DAT_1000801c != (HHOOK)0x0) {
      UnhookWindowsHookEx(DAT_1000801c);
      DAT_1000801c = (HHOOK)0x0;
      DAT_10005018 = 0;
    }
    Sleep(100);
    if (0 < DAT_10008044) {
      FUN_10001000();
    }
    if (DAT_10008040 != 0) {
      PostThreadMessageA(DAT_10008040,0x12,0,0);
      for (uVar1 = 0; uVar1 < 2000; uVar1 = uVar1 + 0x32) {
        Sleep(0x32);
        GetExitCodeThread(DAT_1000803c,(LPDWORD)&stack0xfffffff8);
      }
      CloseHandle(DAT_1000803c);
      DAT_10008040 = 0;
      DAT_1000803c = (HANDLE)0x0;
      DAT_10008000 = 0;
    }
  }
  return;
}


// ---- FUN_10003660 @ 10003660

void __cdecl FUN_10003660(int param_1)

{
  int iVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  if (DAT_10008030 == 0) {
    DAT_10008030 = param_1;
    return;
  }
  iVar1 = *(int *)(DAT_10008030 + 0x20);
  iVar2 = DAT_10008030;
  while (iVar1 != 0) {
    iVar2 = *(int *)(iVar2 + 0x20);
    iVar1 = *(int *)(iVar2 + 0x20);
  }
  *(int *)(param_1 + 0x24) = iVar2;
  *(int *)(iVar2 + 0x20) = param_1;
  return;
}


// ---- FUN_100036b0 @ 100036b0

void __cdecl FUN_100036b0(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_10008030;
  if (DAT_10008030 != 0) {
    do {
      if (iVar1 == param_1) break;
      iVar1 = *(int *)(iVar1 + 0x20);
    } while (iVar1 != 0);
    if (iVar1 != 0) {
      if (iVar1 == DAT_10008030) {
        DAT_10008030 = *(int *)(iVar1 + 0x20);
      }
      if (*(int *)(iVar1 + 0x20) != 0) {
        *(undefined4 *)(*(int *)(iVar1 + 0x20) + 0x24) = *(undefined4 *)(iVar1 + 0x24);
      }
      if (*(int *)(iVar1 + 0x24) != 0) {
        *(undefined4 *)(*(int *)(iVar1 + 0x24) + 0x20) = *(undefined4 *)(iVar1 + 0x20);
      }
    }
  }
  return;
}


// ---- FUN_10003700 @ 10003700

bool FUN_10003700(uint param_1,void *param_2)

{
  uint *puVar1;
  bool bVar2;
  BOOL BVar3;
  bool bVar4;
  
  if (DAT_10008024 != 0) {
    DAT_100063f8 = (int)fopen(s_C__TRACKING_DBG_100060e4,&DAT_100060e0);
    sprintf(&DAT_100061f8,s_Entering_MilWinDrvHookLoop__Ty___100060f4,param_1,param_2);
    if ((DAT_100063f8 != 0) && (DAT_10008028 != 0)) {
      fprintf((FILE *)DAT_100063f8,&DAT_100061f8);
    }
    OutputDebugStringA(&DAT_100061f8);
    if (DAT_100063f8 != 0) {
      fflush((FILE *)DAT_100063f8);
    }
    fclose((FILE *)DAT_100063f8);
  }
  puVar1 = DAT_10008030;
  bVar4 = DAT_10008030 != (uint *)0x0;
  if ((param_2 != (void *)0x0) && (BVar3 = IsBadReadPtr(param_2,0x10c), BVar3 == 0)) {
    *(LPSTR)((int)param_2 + 0xc) = '\0';
    if (*(HWND *)((int)param_2 + 8) != (HWND)0x0) {
      GetClassNameA(*(HWND *)((int)param_2 + 8),(LPSTR)((int)param_2 + 0xc),0x80);
    }
    for (; puVar1 != (uint *)0x0; puVar1 = (uint *)puVar1[8]) {
      if (((param_1 & *puVar1) != 0) && (puVar1[7] == 0)) {
        bVar2 = true;
        if ((puVar1[2] != 0) &&
           (((HWND)puVar1[1] != (HWND)0x0 && (BVar3 = IsWindow((HWND)puVar1[1]), BVar3 != 0)))) {
          if (((HWND)puVar1[1] == *(HWND *)((int)param_2 + 8)) ||
             (BVar3 = IsChild((HWND)puVar1[1],*(HWND *)((int)param_2 + 8)), BVar3 != 0)) {
            bVar2 = false;
          }
        }
        if (bVar2) {
          if (((*(int *)((int)param_2 + 0x8c) == 0x46) || (*(int *)((int)param_2 + 0x8c) == 0x47))
             && (DAT_10008024 != 0)) {
            DAT_100063f8 = (int)fopen(s_C__TRACKING_DBG_1000612c,&DAT_10006128);
            sprintf(&DAT_100061f8,s_Transfering_MilWinDrvHookLoop_WI_1000613c,
                    *(undefined4 *)((int)param_2 + 0x9c),*(undefined4 *)((int)param_2 + 0xa0),
                    *(undefined4 *)((int)param_2 + 0xa4),*(undefined4 *)((int)param_2 + 0xa8),
                    *(undefined4 *)((int)param_2 + 0xac),*(undefined4 *)((int)param_2 + 0xb0),
                    *(undefined4 *)((int)param_2 + 0xb4));
            if ((DAT_100063f8 != 0) && (DAT_10008028 != 0)) {
              fprintf((FILE *)DAT_100063f8,&DAT_100061f8);
            }
            OutputDebugStringA(&DAT_100061f8);
            if (DAT_100063f8 != 0) {
              fflush((FILE *)DAT_100063f8);
            }
            fclose((FILE *)DAT_100063f8);
          }
          if (puVar1[4] != 0) {
            puVar1[5] = (uint)param_2;
            SetEvent((HANDLE)puVar1[4]);
          }
          if (puVar1[3] != 0) {
            puVar1[5] = (uint)param_2;
            (*(code *)puVar1[3])(param_1,param_2,puVar1);
          }
        }
      }
    }
    if (DAT_10008024 != 0) {
      DAT_100063f8 = (int)fopen(s_C__TRACKING_DBG_100061a4,&DAT_100061a0);
      sprintf(&DAT_100061f8,s_Leaving_MilWinDrvHookLoop__Ty__d_100061b4,param_1,param_2);
      if ((DAT_100063f8 != 0) && (DAT_10008028 != 0)) {
        fprintf((FILE *)DAT_100063f8,&DAT_100061f8);
      }
      OutputDebugStringA(&DAT_100061f8);
      if (DAT_100063f8 != 0) {
        fflush((FILE *)DAT_100063f8);
      }
      fclose((FILE *)DAT_100063f8);
    }
    return bVar4;
  }
  return false;
}


// ---- FUN_10003a00 @ 10003a00

undefined4 FUN_10003a00(undefined4 param_1)

{
  DAT_10005010 = param_1;
  return 1;
}


// ---- __CRT_INIT@12 @ 10003a20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __CRT_INIT@12
   
   Library: Visual Studio 1998 Release */

undefined4 __CRT_INIT_12(undefined4 param_1,int param_2)

{
  DWORD DVar1;
  undefined4 *puVar2;
  
  if (param_2 == 0) {
    if (DAT_100061e8 < 1) {
      return 0;
    }
    DAT_100061e8 = DAT_100061e8 + -1;
  }
  if (DAT_100061ec == 0) {
    DVar1 = GetVersion();
    if (((char)DVar1 == '\x03') && ((DVar1 & 0x80000000) != 0)) {
      DAT_100061ec = DAT_100061ec + 1;
    }
    else {
      DAT_100061ec = DAT_100061ec + -1;
    }
  }
  _DAT_10006700 = *(undefined4 *)_adjust_fdiv_exref;
  if (param_2 != 1) {
    if ((param_2 == 0) &&
       (((DAT_100061ec < 0 || (DAT_100061e8 == 0)) && (DAT_10006708 != (undefined4 *)0x0)))) {
      puVar2 = DAT_10006704 + -1;
      if (DAT_10006708 <= puVar2) {
        do {
          if ((code *)*puVar2 != (code *)0x0) {
            (*(code *)*puVar2)();
          }
          puVar2 = puVar2 + -1;
        } while (DAT_10006708 <= puVar2);
      }
      if (DAT_100061ec < 0) {
        free(DAT_10006708);
      }
      else {
        GlobalFree(DAT_10006708);
      }
      DAT_10006708 = (undefined4 *)0x0;
    }
    return 1;
  }
  if (-1 < DAT_100061ec) {
    if (DAT_100061e8 != 0) {
      return 1;
    }
    if (-1 < DAT_100061ec) {
      DAT_10006708 = GlobalAlloc(0x2000,0x80);
      if (DAT_10006708 == (undefined4 *)0x0) {
        return 0;
      }
      goto LAB_10003ae0;
    }
  }
  DAT_10006708 = malloc(0x80);
  if (DAT_10006708 == (undefined4 *)0x0) {
    return 0;
  }
LAB_10003ae0:
  *DAT_10006708 = 0;
  DAT_10006704 = DAT_10006708;
  initterm(&DAT_10005000,&DAT_10005004);
  DAT_100061e8 = DAT_100061e8 + 1;
  return 1;
}


// ---- entry @ 10003b90

int entry(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 1;
  if ((param_2 == 0) && (DAT_100061e8 == 0)) {
    return 0;
  }
  if ((param_2 == 1) || (param_2 == 2)) {
    if (DAT_1000670c != (code *)0x0) {
      iVar1 = (*DAT_1000670c)(param_1,param_2,param_3);
    }
    if ((iVar1 == 0) || (iVar1 = __CRT_INIT_12(param_1,param_2), iVar1 == 0)) {
      return 0;
    }
  }
  iVar1 = FUN_10003a00(param_1);
  if ((param_2 == 1) && (iVar1 == 0)) {
    __CRT_INIT_12(param_1,0);
  }
  if ((param_2 == 0) || (param_2 == 3)) {
    iVar2 = __CRT_INIT_12(param_1,param_2);
    if (iVar2 == 0) {
      iVar1 = 0;
    }
    if ((iVar1 != 0) && (DAT_1000670c != (code *)0x0)) {
      iVar1 = (*DAT_1000670c)(param_1,param_2,param_3);
    }
  }
  return iVar1;
}


// ---- initterm @ 10003c50

void __cdecl initterm(void)

{
                    /* WARNING: Could not recover jumptable at 0x10003c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  initterm();
  return;
}


